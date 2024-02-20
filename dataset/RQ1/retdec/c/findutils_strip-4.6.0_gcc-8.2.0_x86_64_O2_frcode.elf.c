// Address range: 0x4014f0 - 0x4014f5
int64_t function_4014f0(void) {
    // 0x4014f0
    abort();
    // UNREACHABLE
}
// Address range: 0x4014f5 - 0x4014fa
int64_t function_4014f5(void) {
    // 0x4014f5
    abort();
    // UNREACHABLE
}
// Address range: 0x4014fa - 0x4014ff
int64_t function_4014fa(void) {
    // 0x4014fa
    abort();
    // UNREACHABLE
}
// Address range: 0x4014ff - 0x401504
int64_t function_4014ff(void) {
    // 0x4014ff
    abort();
    // UNREACHABLE
}
// Address range: 0x401504 - 0x401509
int64_t function_401504(void) {
    // 0x401504
    abort();
    // UNREACHABLE
}
// Address range: 0x401509 - 0x40150e
int64_t function_401509(void) {
    // 0x401509
    abort();
    // UNREACHABLE
}
// Address range: 0x401510 - 0x401a00
int64_t function_401510(int64_t a1, int64_t a2) {
    // 0x401510
    function_401cb0((char *)(a2 == 0 ? (int64_t)"frcode" : a2));
    int64_t v1; // 0x401510
    if ((int32_t)function_405810(0x401c10, a2, v1) != 0) {
        // 0x4015eb
        error(1, *__errno_location(), dcgettext(NULL, "The atexit library function failed", 5));
    }
    char * n = (char *)1026; // bp-72, 0x401558
    int64_t lineptr = function_403c70(1026); // bp-80, 0x40156b
    int64_t v2 = function_403c70(1026); // 0x401570
    *(char *)v2 = 0;
    char * v3; // bp-104, 0x401510
    char * v4 = v3; // 0x401578
    int32_t v5 = 10; // 0x401578
    int64_t v6 = 0; // 0x401578
    int64_t v7 = 0; // 0x401578
    char * v8; // 0x401510
    int32_t delim; // 0x401510
    int64_t v9; // 0x401510
    int64_t v10; // 0x401510
    int64_t v11; // 0x401510
    int64_t v12; // 0x401510
    int64_t result; // 0x401510
    char * str; // 0x40161a
    while (true) {
        // 0x40157b
        delim = v5;
        v8 = v4;
        v9 = v6;
        v12 = v7;
        int32_t v13; // 0x401510
        while (true) {
          lab_0x40157b:
            // 0x40157b
            v7 = v12;
            v6 = v9;
            v4 = v8;
            v13 = function_405110(a1 & 0xffffffff, a2, "hv0S:", &g2, 0, v1);
            switch (v13) {
                case -1: {
                    goto lab_0x40171a;
                }
                case 83: {
                    // 0x40161a
                    str = g44;
                    *__errno_location() = 0;
                    char * endptr; // bp-64, 0x401510
                    int32_t str_as_l = strtol(str, &endptr, 10); // 0x401643
                    if (str_as_l == 0) {
                        // 0x4016c9
                        if (endptr == g44) {
                            // 0x40197b
                            error(1, (int32_t)"You need to specify a security level as a decimal integer." ^ (int32_t)"You need to specify a security level as a decimal integer.", dcgettext(NULL, "You need to specify a security level as a decimal integer.", 5));
                            v10 = -1;
                            goto lab_0x40167c;
                        } else {
                            // 0x4016db
                            v11 = 0;
                            if (*endptr == 0) {
                                goto lab_0x4016a1;
                            } else {
                                goto lab_0x4016e1;
                            }
                        }
                    } else {
                        // 0x4019a2
                        if (*endptr != 0) {
                            goto lab_0x4016e1;
                        } else {
                            // 0x4019b1
                            v10 = str_as_l;
                            if (str_as_l == 1) {
                                goto lab_0x4016a1;
                            } else {
                                goto lab_0x40167c;
                            }
                        }
                    }
                }
                default: {
                    goto lab_0x4015a1;
                }
            }
        }
      lab_0x4015a1:
        if (v13 > 83) {
            // 0x4015a3
            v3 = v4;
            if (v13 == 104) {
                // 0x4016ac
                function_401b10((int64_t)g26);
                result = 0;
                return result;
            } else {
                if (v13 != 118) {
                    goto lab_0x4015d8_2;
                } else {
                    // 0x4015b1
                    function_401b70("frcode");
                    result = 0;
                    return result;
                }
            }
        }
        // 0x4015d0
        v5 = 0;
        if (v13 != 48) {
            // 0x4015d8
            v3 = v4;
            goto lab_0x4015d8_2;
        }
    }
  lab_0x40171a:
    // 0x40171a
    v3 = v4;
    if (*(int32_t *)0x60821c != (int32_t)a1) {
      lab_0x4015d8_2:
        // 0x4015d8
        function_401b10((int64_t)g29);
        // 0x4015bd
        return 1;
    }
    // 0x401727
    if (v7 == 0) {
        // 0x401900
        if (fwrite(&g1, 1, 10, g26) != 10) {
            // 0x401921
            error(1, *__errno_location(), dcgettext(NULL, "Failed to write to standard output", 5));
        }
    } else {
        // 0x401737
        fputc((int32_t)(v6 == 0) + 49, g26);
        fputc(0, g26);
    }
    // 0x401753
    v3 = (char *)1026;
    int32_t v14 = getdelim((char **)&lineptr, (int32_t *)&n, delim, g27); // 0x401772
    int64_t v15 = v2; // 0x401779
    int64_t v16 = lineptr; // 0x401779
    int32_t v17; // 0x401510
    int64_t v18; // 0x401510
    int64_t v19; // 0x401510
    int64_t v20; // 0x401510
    int64_t v21; // 0x401510
    int64_t v22; // 0x401510
    int64_t v23; // 0x401510
    int64_t v24; // 0x4017d0
    int64_t v25; // 0x4017d8
    if (v14 >= 1) {
        // 0x40177f
        v17 = v14;
        v19 = v7;
        v18 = 0;
        v20 = v2;
        while (true) {
          lab_0x40177f:
            // 0x40177f
            v21 = v20;
            int64_t v26 = v18;
            *(char *)(lineptr - 1 + (int64_t)v17) = 0;
            int64_t v27 = lineptr; // 0x40178b
            char v28 = *(char *)v21; // 0x401790
            int64_t v29 = v21; // 0x401799
            if (!((v28 == 0 | *(char *)v27 != v28))) {
                int64_t v30 = v27; // 0x4017c5
                int64_t v31 = v21;
                int64_t v32 = v31 + 1; // 0x4017c1
                v30++;
                char v33 = *(char *)v32; // 0x4017c9
                v29 = v32;
                while (!((v31 == v21 + 0x7ffffffd | v33 == 0 | *(char *)v30 != v33))) {
                    // 0x4017c1
                    v31 = v32;
                    v32 = v31 + 1;
                    v30++;
                    v33 = *(char *)v32;
                    v29 = v32;
                }
            }
            // 0x4017d0
            v24 = v29 - v21;
            v25 = v24 - v26;
            v23 = v27;
            if ((int32_t)v19 != 0) {
                goto lab_0x401862;
            } else {
                int64_t v34 = (int32_t)v25 < 0x8000 ? v25 : -v26;
                int64_t v35 = v34 & 0xffffffff;
                int32_t v36 = v34;
                if (v36 < 128) {
                    // 0x4018bd
                    v22 = v35;
                    if (_IO_putc(v36, g26) != -1) {
                        // 0x40185d
                        v23 = lineptr;
                        goto lab_0x401862;
                    } else {
                        goto lab_0x4018c9;
                    }
                } else {
                    // 0x40180a
                    if (_IO_putc(128, g26) == -1) {
                        // 0x4018f6
                        function_401ae0(128);
                    }
                    if (v36 > 0x7fff) {
                      lab_0x4019d9:
                        // 0x4019d9
                        __assert_fail("c <= SHRT_MAX", "frcode.c", 123, "put_short");
                        return &g46;
                    }
                    if (v36 < -0x8000) {
                        // 0x4019c0
                        __assert_fail("c >= SHRT_MIN", "frcode.c", 124, "put_short");
                        goto lab_0x4019d9;
                    }
                    uint32_t v37 = v36 >> 8; // 0x401841
                    int32_t v38 = _IO_putc(v37, g26); // 0x401844
                    v22 = v37;
                    if (v38 == -1) {
                        goto lab_0x4018c9;
                    } else {
                        // 0x40184e
                        if (_IO_putc(v36, g26) == -1) {
                            goto lab_0x4018c9;
                        } else {
                            // 0x40185d
                            v23 = lineptr;
                            goto lab_0x401862;
                        }
                    }
                }
            }
        }
    }
  lab_0x4018d5:
    // 0x4018d5
    free((int64_t *)v16);
    free((int64_t *)v15);
    result = (int32_t)&g46 ^ (int32_t)&g46;
    // 0x4015bd
    return result;
  lab_0x401862:;
    int64_t v39 = (int32_t)v25 < 0x8000 ? v24 & 0xffffffff : 0;
    int64_t str2 = v23 + (0x100000000 * v39 >> 32); // 0x401865
    int32_t fputs_rc = fputs((char *)str2, g26); // 0x40186f
    int64_t v40 = str2; // 0x401877
    if (fputs_rc == -1) {
        // 0x4018b6
        function_401ae0(v40);
        goto lab_0x40188c;
    } else {
        // 0x401879
        if (_IO_putc(0, g26) == -1) {
            // 0x4018b6
            function_401ae0(0);
            goto lab_0x40188c;
        } else {
            goto lab_0x40188c;
        }
    }
  lab_0x40188c:;
    int64_t v41 = lineptr; // 0x40188c
    lineptr = v21;
    *(int64_t *)&v3 = (int64_t)n;
    *(int64_t *)&n = (int64_t)v3;
    int32_t v42 = getdelim((char **)&lineptr, (int32_t *)&n, delim, g27); // 0x401772
    v17 = v42;
    v19 = 0;
    v18 = v39;
    v20 = v41;
    v15 = v41;
    v16 = lineptr;
    if (v42 < 1) {
        // break -> 0x4018d5
        goto lab_0x4018d5;
    }
    goto lab_0x40177f;
  lab_0x4018c9:
    // 0x4018c9
    function_401ae0(v22);
    v23 = lineptr;
    goto lab_0x401862;
  lab_0x4016e1:
    // 0x4016e1
    error(1, (int32_t)"Security level %s has unexpected suffix %s." ^ (int32_t)"Security level %s has unexpected suffix %s.", dcgettext(NULL, "Security level %s has unexpected suffix %s.", 5));
    v10 = -1;
    goto lab_0x40167c;
  lab_0x40167c:
    // 0x40167c
    error(1, (int32_t)"slocate security level %ld is unsupported." ^ (int32_t)"slocate security level %ld is unsupported.", dcgettext(NULL, "slocate security level %ld is unsupported.", 5));
    v11 = v10;
    goto lab_0x4016a1;
  lab_0x4016a1:
    // 0x4016a1
    v8 = str;
    v9 = v11;
    v12 = 1;
    goto lab_0x40157b;
}
// Address range: 0x401a00 - 0x401a2b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401a00
    int64_t v1; // 0x401a00
    __libc_start_main(0x401510, (int32_t)a4, (char **)&v1, (void (*)())0x4057a0, (void (*)())0x405800, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401a2b - 0x401a4a
int64_t function_401a2b(void) {
    // 0x401a2b
    return &g25;
}
// Address range: 0x401a4a - 0x401a81
int64_t function_401a4a(void) {
    // 0x401a4a
    return 0;
}
// Address range: 0x401a81 - 0x401ad8
int64_t function_401a81(void) {
    // 0x401a81
    if (g30 != 0) {
        // 0x401ad7
        int64_t result; // 0x401a81
        return result;
    }
    int64_t v1 = g31; // 0x401ab4
    int64_t result2; // 0x401ac6
    if (g31 >= ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x401ac6
        result2 = function_401a2b();
        g30 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g12 - (int64_t)&g11 >> 3) - 1) {
        // 0x401ab6
        v1++;
    }
    // 0x401aaa
    g31 = v1;
    // 0x401ac6
    result2 = function_401a2b();
    g30 = 1;
    return result2;
}
// Address range: 0x401ad8 - 0x401add
int64_t function_401ad8(void) {
    // 0x401ad8
    return function_401a4a();
}
// Address range: 0x401ae0 - 0x401b0c
int64_t function_401ae0(int64_t a1) {
    // 0x401ae0
    error(1, *__errno_location(), dcgettext(NULL, "write error", 5));
    return &g46;
}
// Address range: 0x401b10 - 0x401b63
int64_t function_401b10(int64_t a1) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x401b3c
    fprintf(stream, dcgettext(NULL, "Usage: %s [-0 | --null] [--version] [--help]\n", 5));
    return fputs(dcgettext(NULL, "\nReport bugs to <bug-findutils@gnu.org>.\n", 5), stream);
}
// Address range: 0x401b70 - 0x401bea
int64_t function_401b70(char * a1) {
    // 0x401b70
    int64_t v1; // 0x401b70
    function_403ed0((int64_t)g29, v1);
    char * v2 = dcgettext(NULL, "Kevin Dalley", 5); // 0x401b8f
    char * v3 = dcgettext(NULL, "James Youngman", 5); // 0x401ba3
    function_403b40((int64_t)g26, (int64_t)a1, "GNU findutils", (int64_t)g15, (int64_t)dcgettext(NULL, "Eric B. Decker", 5), (int64_t)v3);
    return (int64_t)v2;
}
// Address range: 0x401bf0 - 0x401bf8
int64_t function_401bf0(int64_t a1) {
    // 0x401bf0
    g33 = a1;
    int64_t result; // 0x401bf0
    return result;
}
// Address range: 0x401c00 - 0x401c08
int64_t function_401c00(int64_t a1) {
    // 0x401c00
    g32 = a1;
    int64_t result; // 0x401c00
    return result;
}
// Address range: 0x401c10 - 0x401cae
int64_t function_401c10(void) {
    // 0x401c10
    int32_t * err_num; // 0x401c26
    if ((int32_t)function_4051c0((int64_t)g26) == 0) {
        goto lab_0x401c3c;
    } else {
        // 0x401c26
        err_num = __errno_location();
        if (g32 == 0) {
            goto lab_0x401c53;
        } else {
            // 0x401c37
            if (*err_num != 32) {
                goto lab_0x401c53;
            } else {
                goto lab_0x401c3c;
            }
        }
    }
  lab_0x401c3c:;
    int64_t result = function_4051c0((int64_t)g29); // 0x401c43
    if ((int32_t)result == 0) {
        // 0x401c4c
        return result;
    }
    // 0x401c8e
    _exit(g16);
    // UNREACHABLE
  lab_0x401c53:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x401c5f
    if (g33 == 0) {
        // 0x401c99
        error(0, *err_num, "%s", v1);
    } else {
        // 0x401c73
        error(0, *err_num, "%s: %s", (char *)function_403500((int64_t)g33), v1);
    }
    // 0x401c8e
    _exit(g16);
    // UNREACHABLE
}
// Address range: 0x401cb0 - 0x401d49
int64_t function_401cb0(char * str) {
    // 0x401cb0
    if (str == NULL) {
        // 0x401d29
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g29);
        abort();
        // UNREACHABLE
    }
    int64_t v1 = (int64_t)str;
    char * found_char_pos = strrchr(str, 47); // 0x401cbe
    int64_t result = (int64_t)found_char_pos; // 0x401cbe
    if (found_char_pos == NULL) {
        // 0x401d19
        g34 = v1;
        g28 = v1;
        return result;
    }
    int64_t v2 = result + 1; // 0x401cc8
    if (v2 - v1 < 7) {
        // 0x401d19
        g34 = v1;
        g28 = v1;
        return result;
    }
    // 0x401cd8
    bool v3; // 0x401cb0
    int64_t v4 = v3 ? -1 : 1;
    int64_t v5 = (int64_t)"/.libs/"; // 0x401cb0
    int64_t v6 = result - 6; // 0x401cb0
    int64_t v7 = 7; // 0x401ce6
    unsigned char v8 = *(char *)v6; // 0x401ce6
    char v9 = *(char *)v5; // 0x401ce6
    char v10 = v9; // 0x401ce6
    bool v11 = false; // 0x401ce6
    while (v8 == v9) {
        v7--;
        v5 += v4;
        v6 += v4;
        v10 = v8;
        v11 = true;
        if (v7 == 0) {
            // break -> 
            break;
        }
        v8 = *(char *)v6;
        v9 = *(char *)v5;
        v10 = v9;
        v11 = false;
    }
    unsigned char v12 = v10;
    int64_t v13 = (int64_t)"lt-"; // 0x401cf0
    int64_t v14 = v2; // 0x401cf0
    int64_t v15 = 3; // 0x401cf0
    if ((v8 >= v12 && !v11) != v8 < v12) {
        // 0x401d19
        g34 = v1;
        g28 = v1;
        return result;
    }
    unsigned char v16 = *(char *)v14; // 0x401d02
    char v17 = *(char *)v13; // 0x401d02
    char v18 = v17; // 0x401d02
    bool v19 = false; // 0x401d02
    while (v16 == v17) {
        // 0x401cf2
        v15--;
        v13 += v4;
        v14 += v4;
        v18 = v16;
        v19 = true;
        if (v15 == 0) {
            // break -> 
            break;
        }
        v16 = *(char *)v14;
        v17 = *(char *)v13;
        v18 = v17;
        v19 = false;
    }
    unsigned char v20 = v18;
    int64_t v21 = v2; // 0x401d0c
    if ((v16 >= v20 && !v19) == v16 < v20) {
        // 0x401d0e
        v21 = result + 4;
        g25 = v21;
    }
    // 0x401d19
    g34 = v21;
    g28 = v21;
    return result;
}
// Address range: 0x401d50 - 0x401e42
int64_t function_401d50(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x401d64
    int64_t result = (int64_t)v1; // 0x401d64
    if (result != a1) {
        // 0x401d71
        return result;
    }
    int64_t v2 = function_405230(); // 0x401d80
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x401e36
    if (v3 == 85) {
        // 0x401d90
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x401e28
            result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
            return result2;
        }
        char v4 = *v1; // 0x401dbe
        int64_t result3 = v4 != 96 ? (int64_t)&g4 : (int64_t)&g7; // 0x401dcb
        // 0x401d71
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x401e28
        result2 = (int32_t)a2 != 9 ? (int64_t)&g8 : (int64_t)&g3;
        return result2;
    }
    char v5 = *v1; // 0x401e0d
    int64_t result4 = v5 != 96 ? (int64_t)&g5 : (int64_t)&g6; // 0x401e1a
    // 0x401d71
    return result4;
}
// Address range: 0x401e50 - 0x401ea9
int64_t function_401e50(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x401e50
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x401e9a
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x401eb0 - 0x402e53
int64_t function_401eb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t str) {
    // 0x401eb0
    int32_t v1; // 0x401eb0
    uint32_t v2 = v1;
    int64_t v3 = str + 1;
    int64_t v4 = 0; // 0x401eed
    int64_t v5 = 0; // 0x401eed
    int64_t v6; // 0x401eb0
    int64_t v7; // 0x401eb0
    int64_t v8; // 0x401eb0
    int64_t v9; // 0x401eb0
    int64_t v10; // 0x401eb0
    int64_t v11; // 0x401eb0
    int64_t v12; // 0x401eb0
    int64_t v13; // 0x401eb0
    int64_t v14; // 0x401eb0
    int64_t v15; // 0x401eb0
    int64_t v16; // 0x401eb0
    int64_t v17; // 0x401eb0
    int64_t v18; // 0x401eb0
    int64_t v19; // 0x401eb0
    int64_t v20; // 0x401eb0
    int64_t v21; // 0x401eb0
    int64_t v22; // 0x401eb0
    int64_t v23; // 0x401eb0
    int64_t v24; // 0x401eb0
    int64_t result; // 0x401eb0
    int64_t v25; // 0x401eb0
    int64_t v26; // 0x401eb0
    int64_t v27; // 0x401eb0
    int32_t wc; // bp+116, 0x401eb0
    int64_t ps; // bp+120, 0x401eb0
    char v28; // 0x4025e0
    int64_t v29; // 0x4025e0
    int64_t v30; // 0x402a12
    int64_t v31; // 0x402a2b
    int64_t v32; // 0x401eb0
    while (true) {
      lab_0x401ef0_2:
        // 0x401ef0
        v20 = v19;
        v14 = v13;
        v8 = v7;
        result = v4;
        int64_t v33 = v5; // 0x401eb0
        int64_t v34; // 0x401f24
        while (true) {
          lab_0x401ef0:
            // 0x401ef0
            v12 = v33;
            bool v35 = v8 == v12; // 0x401efb
            if (v8 == -1) {
                // 0x401efd
                v35 = *(char *)(v12 + str) == 0;
            }
            // 0x401f0b
            if (v35) {
                // break (via goto) -> 0x402900
                goto lab_0x402900;
            }
            // 0x401f14
            v34 = v12 + str;
            v28 = *(char *)v34;
            v29 = v28;
            g45 = v29;
            v9 = v8;
            v18 = v14;
            v24 = v20;
            v6 = v8;
            v16 = v14;
            v22 = v20;
            switch (v28) {
                case 0: {
                    if (v2 % 2 == 0) {
                        // 0x4026f1
                        v11 = v8;
                        v17 = v14;
                        v23 = v20;
                        v10 = v8;
                        v15 = v14;
                        v21 = v20;
                        if (v32 == 0) {
                            goto lab_0x402562;
                        } else {
                            goto lab_0x402009;
                        }
                    }
                    // 0x402b10
                    v33 = v12 + 1;
                    goto lab_0x401ef0;
                }
                case 7: {
                    goto lab_0x4022b8;
                }
                case 8: {
                    goto lab_0x4022b8;
                }
                case 9: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 10: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 11: {
                    goto lab_0x4022b8;
                }
                case 12: {
                    goto lab_0x4022b8;
                }
                case 13: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 32: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 33: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 34: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 35: {
                    goto lab_0x4022a1;
                }
                case 36: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 37: {
                    goto lab_0x4022b8;
                }
                case 38: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 39: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 40: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 41: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 42: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 43: {
                    goto lab_0x4022b8;
                }
                case 44: {
                    goto lab_0x4022b8;
                }
                case 45: {
                    goto lab_0x4022b8;
                }
                case 46: {
                    goto lab_0x4022b8;
                }
                case 47: {
                    goto lab_0x4022b8;
                }
                case 48: {
                    goto lab_0x4022b8;
                }
                case 49: {
                    goto lab_0x4022b8;
                }
                case 50: {
                    goto lab_0x4022b8;
                }
                case 51: {
                    goto lab_0x4022b8;
                }
                case 52: {
                    goto lab_0x4022b8;
                }
                case 53: {
                    goto lab_0x4022b8;
                }
                case 54: {
                    goto lab_0x4022b8;
                }
                case 55: {
                    goto lab_0x4022b8;
                }
                case 56: {
                    goto lab_0x4022b8;
                }
                case 57: {
                    goto lab_0x4022b8;
                }
                case 58: {
                    goto lab_0x4022b8;
                }
                case 59: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 60: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 61: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 62: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 63: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 65: {
                    goto lab_0x4022b8;
                }
                case 66: {
                    goto lab_0x4022b8;
                }
                case 67: {
                    goto lab_0x4022b8;
                }
                case 68: {
                    goto lab_0x4022b8;
                }
                case 69: {
                    goto lab_0x4022b8;
                }
                case 70: {
                    goto lab_0x4022b8;
                }
                case 71: {
                    goto lab_0x4022b8;
                }
                case 72: {
                    goto lab_0x4022b8;
                }
                case 73: {
                    goto lab_0x4022b8;
                }
                case 74: {
                    goto lab_0x4022b8;
                }
                case 75: {
                    goto lab_0x4022b8;
                }
                case 76: {
                    goto lab_0x4022b8;
                }
                case 77: {
                    goto lab_0x4022b8;
                }
                case 78: {
                    goto lab_0x4022b8;
                }
                case 79: {
                    goto lab_0x4022b8;
                }
                case 80: {
                    goto lab_0x4022b8;
                }
                case 81: {
                    goto lab_0x4022b8;
                }
                case 82: {
                    goto lab_0x4022b8;
                }
                case 83: {
                    goto lab_0x4022b8;
                }
                case 84: {
                    goto lab_0x4022b8;
                }
                case 85: {
                    goto lab_0x4022b8;
                }
                case 86: {
                    goto lab_0x4022b8;
                }
                case 87: {
                    goto lab_0x4022b8;
                }
                case 88: {
                    goto lab_0x4022b8;
                }
                case 89: {
                    goto lab_0x4022b8;
                }
                case 90: {
                    goto lab_0x4022b8;
                }
                case 91: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 92: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 93: {
                    goto lab_0x4022b8;
                }
                case 94: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 95: {
                    goto lab_0x4022b8;
                }
                case 96: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 97: {
                    goto lab_0x4022b8;
                }
                case 98: {
                    goto lab_0x4022b8;
                }
                case 99: {
                    goto lab_0x4022b8;
                }
                case 100: {
                    goto lab_0x4022b8;
                }
                case 101: {
                    goto lab_0x4022b8;
                }
                case 102: {
                    goto lab_0x4022b8;
                }
                case 103: {
                    goto lab_0x4022b8;
                }
                case 104: {
                    goto lab_0x4022b8;
                }
                case 105: {
                    goto lab_0x4022b8;
                }
                case 106: {
                    goto lab_0x4022b8;
                }
                case 107: {
                    goto lab_0x4022b8;
                }
                case 108: {
                    goto lab_0x4022b8;
                }
                case 109: {
                    goto lab_0x4022b8;
                }
                case 110: {
                    goto lab_0x4022b8;
                }
                case 111: {
                    goto lab_0x4022b8;
                }
                case 112: {
                    goto lab_0x4022b8;
                }
                case 113: {
                    goto lab_0x4022b8;
                }
                case 114: {
                    goto lab_0x4022b8;
                }
                case 115: {
                    goto lab_0x4022b8;
                }
                case 116: {
                    goto lab_0x4022b8;
                }
                case 117: {
                    goto lab_0x4022b8;
                }
                case 118: {
                    goto lab_0x4022b8;
                }
                case 119: {
                    goto lab_0x4022b8;
                }
                case 120: {
                    goto lab_0x4022b8;
                }
                case 121: {
                    goto lab_0x4022b8;
                }
                case 122: {
                    goto lab_0x4022b8;
                }
                case 123: {
                    goto lab_0x40227d;
                }
                case 124: {
                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                }
                case 125: {
                    goto lab_0x40227d;
                }
                case 126: {
                    goto lab_0x4022a1;
                }
                default: {
                    goto lab_0x40257d;
                }
            }
        }
      lab_0x40257d:
        if (v32 != 1) {
            // 0x402970
            ps = 0;
            int64_t len = v8; // 0x40297d
            if (v8 == -1) {
                // 0x40297f
                len = strlen((char *)str);
            }
            // 0x4029ab
            v30 = 0x100000000 * len >> 32;
            v25 = 0;
            while (true) {
              lab_0x402a08:
                // 0x402a08
                v26 = v25;
                uint64_t v36 = v26 + v12; // 0x402a0d
                int64_t v37 = v36 + str;
                v31 = function_405190(&wc, v37, v30 - v36);
                v27 = v26;
                switch (v31) {
                    case 0: {
                        goto lab_0x402d10_2;
                    }
                    case -1: {
                        goto lab_0x402d10_2;
                    }
                    case -2: {
                        // 0x402d53
                        v27 = v26;
                        if (v30 > v36) {
                            // 0x402d8e
                            v27 = v26;
                            int64_t v38 = v26; // 0x402d91
                            if (*(char *)v37 != 0) {
                                int64_t v39 = v38 + 1; // 0x402d9f
                                v27 = v39;
                                while (v30 > v39 + v12) {
                                    // 0x402d98
                                    v27 = v39;
                                    v38 = v39;
                                    if (*(char *)(v39 + v34) == 0) {
                                        // break -> 0x402d10
                                        break;
                                    }
                                    v39 = v38 + 1;
                                    v27 = v39;
                                }
                            }
                        }
                        goto lab_0x402d10_2;
                    }
                    case 1: {
                        goto lab_0x4029e0;
                    }
                    default: {
                        int64_t v40 = v36 + v3; // 0x402a7a
                        char v41 = *(char *)v40; // 0x402a8d
                        unsigned char v42; // 0x401eb0
                        if (v41 < 125) {
                            // 0x402a98
                            v42 = (v41 + 37) % 64;
                            if (v42 != 0 != ((1 << (int64_t)v42 & 0x20000002b) == 0)) {
                                // 0x402ab2
                                v6 = v30;
                                v16 = 0x100000000 * v14 >> 32;
                                v22 = 0x100000000 * v20 >> 32;
                                return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                            }
                        }
                        // 0x402a80
                        v40++;
                        while (v37 + v31 != v40) {
                            // 0x402a8d
                            v41 = *(char *)v40;
                            if (v41 < 125) {
                                // 0x402a98
                                v42 = (v41 + 37) % 64;
                                if (v42 != 0 != ((1 << (int64_t)v42 & 0x20000002b) == 0)) {
                                    // 0x402ab2
                                    v6 = v30;
                                    v16 = 0x100000000 * v14 >> 32;
                                    v22 = 0x100000000 * v20 >> 32;
                                    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
                                }
                            }
                            // 0x402a80
                            v40++;
                        }
                        goto lab_0x4029e0;
                    }
                }
            }
            goto lab_0x402d10_2;
        } else {
            // 0x4025c8
            __ctype_b_loc();
            v9 = 0x100000000000000 * v8 >> 56;
            v18 = v14;
            v24 = v20;
            goto lab_0x4022b8;
        }
    }
  lab_0x402900:
    // 0x402900
    v6 = v8;
    v16 = v14;
    v22 = v20;
    if (result != 0) {
        // 0x402955
        if (result < v14) {
            // 0x40295e
            *(char *)(v20 + result) = 0;
        }
        // 0x40267c
        return result;
    }
    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
  lab_0x402642_2:
    // 0x40267c
    return function_401e50(v22, v16, str, v6, 2, v2 & -3);
  lab_0x402d10_2:;
    uint64_t v43 = v27;
    int64_t v44 = 0x100000000 * v14 >> 32;
    int64_t v45 = 0x100000000 * v20 >> 32;
    v9 = v30;
    v18 = v44;
    v24 = v45;
    int64_t v46; // 0x401eb0
    int64_t v47; // 0x401eb0
    int64_t v48; // 0x401eb0
    int64_t v49; // 0x401eb0
    if (v43 < 2) {
        goto lab_0x4022b8;
    } else {
        uint64_t v50 = v43 + v12; // 0x402b1e
        int64_t v51 = v12 + 1; // 0x402c14
        v49 = result;
        v46 = v30;
        v5 = v51;
        v47 = v44;
        v48 = v45;
        int64_t v52 = v51; // 0x402c1b
        int64_t v53 = result; // 0x402c1b
        char v54 = v28; // 0x402c1b
        if (v51 < v50) {
            uint64_t v55 = v53;
            if (v55 < v44) {
                // 0x402be4
                *(char *)(v55 + v45) = v54;
            }
            char v56 = *(char *)(v52 + str); // 0x402be8
            int64_t v57 = v55 + 1; // 0x402bed
            int64_t v58 = v52 + 1; // 0x402c14
            v49 = v57;
            v46 = v30;
            v5 = v58;
            v47 = v44;
            v48 = v45;
            v52 = v58;
            while (v58 < v50) {
                // 0x402bdf
                v55 = v57;
                if (v55 < v44) {
                    // 0x402be4
                    *(char *)(v55 + v45) = v56;
                }
                // 0x402be8
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
        goto lab_0x402087;
    }
  lab_0x4029e0:
    // 0x4029e0
    iswprint(wc);
    int64_t v59 = v31 + v26; // 0x4029f8
    int32_t v60 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4029fb
    v25 = v59;
    v27 = v59;
    if (v60 != 0) {
        // break -> 0x402d10
        goto lab_0x402d10_2;
    }
    goto lab_0x402a08;
  lab_0x4022b8:
    // 0x4022b8
    v11 = v9;
    v17 = v18;
    v23 = v24;
    v10 = v9;
    v15 = v18;
    v21 = v24;
    if (v32 == 0) {
        goto lab_0x402562;
    } else {
        goto lab_0x402009;
    }
  lab_0x4022a1:
    // 0x4022a1
    v9 = v8;
    v18 = v14;
    v24 = v20;
    v6 = v8;
    v16 = v14;
    v22 = v20;
    if (v12 == 0) {
        goto lab_0x402642_2;
    }
    goto lab_0x4022b8;
  lab_0x40227d:;
    bool v61 = v8 == 1; // 0x402288
    if (v8 == -1) {
        // 0x40228a
        v61 = *(char *)v3 == 0;
    }
    // 0x402296
    v9 = v8;
    v18 = v14;
    v24 = v20;
    if (!v61) {
        goto lab_0x4022b8;
    } else {
        goto lab_0x4022a1;
    }
  lab_0x402562:
    // 0x402562
    v49 = result;
    v46 = v10;
    v5 = v12 + 1;
    v47 = v15;
    v48 = v21;
    goto lab_0x402087;
  lab_0x402009:
    // 0x402009
    v10 = v11;
    v15 = v17;
    v21 = v23;
    v6 = v11;
    v16 = v17;
    v22 = v23;
    if ((*(int32_t *)((v29 / 8 & 28) + v32) & 1 << (int32_t)(v28 % 32)) != 0) {
        goto lab_0x402642_2;
    }
    goto lab_0x402562;
  lab_0x402087:
    // 0x402087
    if (v49 < v47) {
        // 0x40208c
        char v62; // 0x401eb0
        int64_t v63; // 0x401eb0
        uint64_t v64; // 0x401eb0
        *(char *)(v63 + v64) = v62;
    }
    // 0x402090
    v4 = v49 + 1;
    v7 = v46;
    v13 = v47;
    v19 = v48;
    goto lab_0x401ef0_2;
}
// Address range: 0x402e60 - 0x402ffb
int64_t function_402e60(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    int64_t v2 = v1 >> 32; // 0x402e62
    int32_t * v3 = __errno_location(); // 0x402e7c
    int64_t v4 = (int64_t)g18; // 0x402e81
    int32_t v5 = *v3; // 0x402e8b
    int64_t v6 = v4; // 0x402ea1
    if (*(int32_t *)&g21 <= (int32_t)v2) {
        int64_t v7 = v2 + 1; // 0x402ea3
        int64_t v8 = 16 * v7 & 0xffffffff0; // 0x402ead
        int64_t v9; // 0x402e60
        if (g18 == &g19) {
            int64_t v10 = function_403cc0(0, v8); // 0x402fd7
            int128_t v11 = __asm_movdqa(*(int128_t *)&g19); // 0x402fdc
            *(int64_t *)&g18 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_403cc0(v4, v8); // 0x402ec6
            *(int64_t *)&g18 = v12;
            v9 = v12;
        }
        // 0x402eda
        v6 = v9;
        uint32_t v13 = *(int32_t *)&g21; // 0x402eda
        int32_t v14 = v7;
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g21 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x402f0b
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x402f15
    int64_t * v17 = (int64_t *)v15; // 0x402f18
    uint64_t v18 = *v17; // 0x402f18
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x402f1b
    int64_t result = *v19; // 0x402f1b
    int64_t v20; // 0x402e60
    uint64_t v21 = function_401e50(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x402f3e
    if (v18 > v21) {
        // 0x402fb5
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x402f51
    *v17 = v22;
    if (result != (int64_t)&g35) {
        // 0x402f61
        free((int64_t *)result);
    }
    int64_t result2 = function_403c70(v22); // 0x402f7b
    *v19 = result2;
    int64_t v23; // 0x402e60
    function_401e50(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x402fb5
    *v3 = v5;
    return result2;
}
// Address range: 0x403000 - 0x403034
int64_t function_403000(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403007
    int64_t result = function_403e30(a1 == 0 ? (int64_t)&g36 : a1, 56); // 0x403026
    return result;
}
// Address range: 0x403040 - 0x40304f
int64_t function_403040(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g36 : a1); // 0x40304c
    return result;
}
// Address range: 0x403050 - 0x40305f
int64_t function_403050(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g36 : a1; // 0x403058
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g36;
}
// Address range: 0x403060 - 0x403093
int64_t function_403060(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g36 + 8 : a1 + 8; // 0x403079
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40307e
    uint32_t v3 = *v2; // 0x40307e
    uint32_t v4 = (int32_t)a2 % 32; // 0x403082
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4030a0 - 0x4030b3
int64_t function_4030a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g36 + 4 : a1 + 4); // 0x4030ac
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4030c0 - 0x4030eb
int64_t function_4030c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g36 : a1; // 0x4030c8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4030e5
        abort();
        // UNREACHABLE
    }
    // 0x4030dc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g36;
}
// Address range: 0x4030f0 - 0x403162
int64_t function_4030f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g36 : a5; // 0x403112
    int32_t * v2 = __errno_location(); // 0x40311b
    uint32_t v3 = *(int32_t *)v1; // 0x40313b
    int64_t result = function_401e50(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40314a
    return result;
}
// Address range: 0x403170 - 0x403251
int64_t function_403170(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g36 : a4; // 0x403192
    int32_t * v2 = __errno_location(); // 0x403198
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4031b7
    int32_t * v4 = (int32_t *)v1; // 0x4031ba
    int64_t v5 = function_401e50(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4031d5
    int64_t v6 = v5 + 1; // 0x4031da
    int64_t result = function_403c70(v6); // 0x4031ef
    function_401e50(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403234
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40323d
    return result;
}
// Address range: 0x403260 - 0x40326a
int64_t function_403260(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403260
    return function_403170(a1, a2, 0, a3);
}
// Address range: 0x403270 - 0x403305
int64_t function_403270(void) {
    uint32_t v1 = *(int32_t *)&g21; // 0x403270
    int64_t v2 = v1; // 0x403270
    int64_t v3 = v2; // 0x403284
    if (v1 >= 2) {
        int64_t v4 = &g21;
        int64_t v5 = v4 + 16; // 0x4032a3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g46;
        while (v5 != (int64_t)g18 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4032a0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g46;
        }
    }
    int64_t v6 = v3; // 0x4032bd
    if (g19 != 0x608280) {
        // 0x4032bf
        free((int64_t *)g19);
        g19 = 256;
        *(int64_t *)&g20 = (int64_t)&g35;
        v6 = &g46;
    }
    int64_t result = v6; // 0x4032e1
    if (g18 != &g19) {
        // 0x4032e3
        free(g18);
        *(int64_t *)&g18 = (int64_t)&g19;
        result = &g46;
    }
    // 0x4032f6
    *(int32_t *)&g21 = 1;
    return result;
}
// Address range: 0x403310 - 0x403321
int64_t function_403310(void) {
    // 0x403310
    int64_t v1; // 0x403310
    return function_402e60(v1, v1, -1, (int64_t *)&g36);
}
// Address range: 0x403330 - 0x40333a
int64_t function_403330(void) {
    // 0x403330
    int64_t v1; // 0x403330
    return function_402e60(v1, v1, v1, (int64_t *)&g36);
}
// Address range: 0x403340 - 0x403356
int64_t function_403340(int64_t a1) {
    // 0x403340
    return function_402e60(0, a1, -1, (int64_t *)&g36);
}
// Address range: 0x403360 - 0x403372
int64_t function_403360(int64_t a1, int64_t a2) {
    // 0x403360
    return function_402e60(0, a1, a2, (int64_t *)&g36);
}
// Address range: 0x403380 - 0x4033e8
int64_t function_403380(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403390
    return function_402e60((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4033f0 - 0x403454
int64_t function_4033f0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403400
    return function_402e60((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403460 - 0x40346c
int64_t function_403460(int64_t a1, int64_t a2) {
    // 0x403460
    return function_403380(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403470 - 0x40347f
int64_t function_403470(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403470
    return function_4033f0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403480 - 0x4034f0
int64_t function_403480(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g36); // 0x40348d
    int128_t v2 = __asm_movdqa(g37); // 0x403495
    int128_t v3 = __asm_movdqa(g38); // 0x40349d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4034b2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4034c8
    uint32_t v6 = *v5; // 0x4034c8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4034cd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_402e60(0, a1, a2, &v4);
}
// Address range: 0x4034f0 - 0x4034fd
int64_t function_4034f0(int64_t a1, int64_t a2) {
    // 0x4034f0
    return function_403480(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403500 - 0x403511
int64_t function_403500(int64_t a1) {
    // 0x403500
    return function_403480(a1, -1, 58);
}
// Address range: 0x403520 - 0x40352a
int64_t function_403520(void) {
    // 0x403520
    int64_t v1; // 0x403520
    return function_403480(v1, v1, 58);
}
// Address range: 0x403530 - 0x40359e
int64_t function_403530(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40354a
    return function_402e60(a1, a3, -1, &v1);
}
// Address range: 0x4035a0 - 0x40360c
int64_t function_4035a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g36); // 0x4035a7
    int128_t v2 = __asm_movdqa(g37); // 0x4035af
    int128_t v3 = __asm_movdqa(g38); // 0x4035b7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4035d9
    if (a2 == 0 || a3 == 0) {
        // 0x403607
        abort();
        // UNREACHABLE
    }
    // 0x4035ea
    return function_402e60(a1, a4, a5, &v4);
}
// Address range: 0x403610 - 0x403619
int64_t function_403610(void) {
    // 0x403610
    int64_t v1; // 0x403610
    return function_4035a0(v1, v1, v1, v1, -1);
}
// Address range: 0x403620 - 0x403637
int64_t function_403620(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403620
    return function_4035a0(0, a1, a2, a3, -1);
}
// Address range: 0x403640 - 0x403653
int64_t function_403640(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x403640
    return function_4035a0(0, a1, a2, a3, a4);
}
// Address range: 0x403660 - 0x40366a
int64_t function_403660(void) {
    // 0x403660
    int64_t v1; // 0x403660
    return function_402e60(v1, v1, v1, &g17);
}
// Address range: 0x403670 - 0x403682
int64_t function_403670(int64_t a1, int64_t a2) {
    // 0x403670
    return function_402e60(0, a1, a2, &g17);
}
// Address range: 0x403690 - 0x4036a1
int64_t function_403690(void) {
    // 0x403690
    int64_t v1; // 0x403690
    return function_402e60(v1, v1, -1, &g17);
}
// Address range: 0x4036b0 - 0x4036c6
int64_t function_4036b0(int64_t a1) {
    // 0x4036b0
    return function_402e60(0, a1, -1, &g17);
}
// Address range: 0x4036d0 - 0x403ab5
int64_t function_4036d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7, int64_t a8) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x403760
        fprintf(stream, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x4036ec
        fprintf(stream, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x403701
    fprintf(stream, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2015);
    int32_t fputs_rc = fputs(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), stream); // 0x403740
    if (a6 < 10) {
        // 0x40374f
        return fputs_rc;
    }
    char * format = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x403832
    return fprintf(stream, format);
}
// Address range: 0x403ac0 - 0x403ae0
int64_t function_403ac0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = 0; // 0x403ac7
    int64_t result; // 0x403adb
    if (a5 == 0) {
        // 0x403adb
        result = function_4036d0(a1, a2, a3, a4, a5, 0, (int64_t)&g46, (int64_t)&g46);
        return result;
    }
    v1++;
    int64_t v2 = v1; // 0x403ad9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x403ad0
        v1++;
        v2 = v1;
    }
    // 0x403adb
    result = function_4036d0(a1, a2, a3, a4, a5, v2, (int64_t)&g46, (int64_t)&g46);
    return result;
}
// Address range: 0x403ae0 - 0x403b40
int64_t function_403ae0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x403ae0
    int64_t v3 = &v2; // 0x403ae0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x403b13
    int64_t v6; // 0x403afd
    int64_t * v7; // 0x403b1b
    int64_t v8; // 0x403b1b
    int64_t v9; // 0x403b27
    if (v5 < 48) {
        // 0x403af0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x403b33
            break;
        }
    } else {
        // 0x403b1b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x403b33
            break;
        }
    }
    int64_t v10 = 10; // 0x403b11
    while (v4 != 9) {
        // 0x403b09
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x403af0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x403b33
                break;
            }
        } else {
            // 0x403b1b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x403b33
                break;
            }
        }
        // 0x403b09
        v10 = 10;
    }
    int64_t result = function_4036d0(a1, a2, a3, a4, v3, v10, (int64_t)&g46, (int64_t)&g46); // 0x403b36
    return result;
}
// Address range: 0x403b40 - 0x403bfc
int64_t function_403b40(int64_t a1, int64_t a2, char * a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x403b40
    int64_t v1; // bp-168, 0x403b40
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x403b40
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x403b40
    int64_t v8; // 0x403b40
    int64_t v9; // bp-56, 0x403b40
    int64_t v10; // 0x403ba5
    int64_t v11; // 0x403bc9
    if ((int32_t)v6 < 48) {
        // 0x403b90
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x403be0
            break;
        }
    } else {
        // 0x403bc2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x403be0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x403bba
    int64_t v13 = 10; // 0x403bba
    while (v5 != 9) {
        // 0x403bbc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x403b90
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x403be0
                break;
            }
        } else {
            // 0x403bc2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x403be0
                break;
            }
        }
        // 0x403bb2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x403be0
    int64_t v14; // bp-136, 0x403b40
    int64_t result = function_4036d0(a1, a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g46, (int64_t)&g46); // 0x403bef
    return result;
}
// Address range: 0x403c00 - 0x403c6a
int64_t function_403c00(int64_t a1) {
    // 0x403c00
    printf(dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    printf(dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * str = dcgettext(NULL, "General help using GNU software: <http://www.gnu.org/gethelp/>\n", 5); // 0x403c59
    return fputs(str, g26);
}
// Address range: 0x403c70 - 0x403c8a
int64_t function_403c70(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x403c74
    if (size != 0 != (mem == NULL)) {
        // 0x403c83
        return (int64_t)mem;
    }
    // 0x403c85
    function_403e90(size);
    // UNREACHABLE
}
// Address range: 0x403c90 - 0x403ca3
int64_t function_403c90(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x403c93
    if (v1 <= 0xffffffffffffffff) {
        // 0x403c98
        return function_403c70((int64_t)v1);
    }
    // 0x403c9d
    function_403e90(a1);
    // UNREACHABLE
}
// Address range: 0x403cb0 - 0x403cb2
int64_t function_403cb0(void) {
    // 0x403cb0
    int64_t v1; // 0x403cb0
    return function_403c70(v1);
}
// Address range: 0x403cc0 - 0x403cf6
int64_t function_403cc0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x403ce8
        free(v1);
        return (int32_t)&g46 ^ (int32_t)&g46;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x403cd1
    if (a2 != 0 != (mem == NULL)) {
        // 0x403ce0
        return (int64_t)mem;
    }
    // 0x403cf1
    function_403e90(a1);
    // UNREACHABLE
}
// Address range: 0x403d00 - 0x403d13
int64_t function_403d00(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x403d03
    if (v1 <= 0xffffffffffffffff) {
        // 0x403d08
        return function_403cc0(a1, (int64_t)v1);
    }
    // 0x403d0d
    function_403e90(a1);
    // UNREACHABLE
}
// Address range: 0x403d20 - 0x403d96
int64_t function_403d20(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    int64_t v1; // 0x403d20
    if (a1 != 0) {
        if (0xaaaaaaaaaaaaaaaa / a3 <= a2) {
            // 0x403d90
            function_403e90(a1);
            // UNREACHABLE
        }
        // 0x403d4a
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_403cc0(a1, v1 * a3);
    }
    // 0x403d60
    if (a2 == 0) {
        int64_t v2 = 128 / a3 + (int64_t)(a3 >= 129); // 0x403d7d
        *(int64_t *)a2 = v2;
        return function_403cc0(0, v2 * a3);
    }
    // 0x403d4a
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_403cc0(a1, v1 * a3);
}
// Address range: 0x403da0 - 0x403ded
int64_t function_403da0(int64_t a1, uint64_t a2) {
    if (a1 == 0) {
        int64_t v1 = a2 == 0 ? 128 : a2; // 0x403dd8
        *(int64_t *)a2 = v1;
        return function_403cc0(0, v1);
    }
    if (a2 >= 0xaaaaaaaaaaaaaaaa) {
        // 0x403de7
        function_403e90(a1);
        // UNREACHABLE
    }
    int64_t v2 = a2 + 1 + a2 / 2; // 0x403dbd
    *(int64_t *)a2 = v2;
    return function_403cc0(a1, v2);
}
// Address range: 0x403df0 - 0x403e07
int64_t function_403df0(int64_t a1, int64_t a2) {
    // 0x403df0
    return (int64_t)memset((int64_t *)function_403c70(a1), 0, (int32_t)a1);
}
// Address range: 0x403e10 - 0x403e28
int64_t function_403e10(void) {
    // 0x403e10
    int64_t nmemb; // 0x403e10
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)nmemb); // 0x403e14
    if (mem != NULL) {
        // 0x403e1e
        return (int64_t)mem;
    }
    // 0x403e23
    function_403e90(nmemb);
    // UNREACHABLE
}
// Address range: 0x403e30 - 0x403e58
int64_t function_403e30(int64_t a1, int64_t a2) {
    int64_t v1 = function_403c70(a2); // 0x403e3f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x403e60 - 0x403e8e
int64_t function_403e60(int64_t str) {
    int64_t v1 = (int64_t)strlen((char *)str) + 1; // 0x403e6e
    int64_t v2 = function_403c70(v1); // 0x403e75
    return (int64_t)memcpy((int64_t *)v2, (int64_t *)str, (int32_t)v1);
}
// Address range: 0x403e90 - 0x403ec1
int64_t function_403e90(int64_t a1) {
    // 0x403e90
    error(g16, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x403ed0 - 0x403f10
int64_t function_403ed0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x403eea
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x403eea
        return fflush(stream);
    }
    // 0x403ef8
    function_403f10(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x403f10 - 0x403f67
int64_t function_403f10(int64_t stream, int32_t offset, int64_t whence) {
    // 0x403f10
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x403f1a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x403f4b
    int64_t result = -1; // 0x403f54
    if (v1 != -1) {
        // 0x403f56
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x403f62
    return result;
}
// Address range: 0x403f70 - 0x40404f
int64_t function_403f70(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 48); // 0x403f7c
    uint32_t v2 = *v1; // 0x403f7c
    int64_t v3 = a2 & 0xffffffff; // 0x403f81
    int32_t * v4 = (int32_t *)(a2 + 52); // 0x403f84
    uint64_t v5 = (int64_t)*v4; // 0x403f84
    int64_t v6; // 0x403ff2
    if (v3 <= v5) {
      lab_0x403fec_2:
        // 0x403fec
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x403f72
    int64_t v8 = v2; // 0x403f70
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x403fec
        goto lab_0x403fec_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x403fa8
    int64_t v17; // 0x403fb6
    int64_t * v18; // 0x403fd0
    int64_t * v19; // 0x403fd3
    int64_t v20; // 0x403fde
    int64_t v21; // 0x403fb6
    while ((v16 & 0xffffffff) > v10) {
        // 0x403fb3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x403fd0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x403fe7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x403fec
            goto lab_0x403fec_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x403fec
            goto lab_0x403fec_2;
        }
        // 0x403fa2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40402b
    int64_t * v23 = (int64_t *)v22; // 0x404030
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x404033
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x404030
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404047
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x403f9d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x403fec
            goto lab_0x403fec_2;
        }
        // 0x403fa2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x403fb3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x403fd0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x403fe7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x403fec
                goto lab_0x403fec_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x403fec
                goto lab_0x403fec_2;
            }
            // 0x403fa2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x404010
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x404030
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404047
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x403fec
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404050 - 0x405083
int64_t function_404050(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int32_t v2 = a1; // 0x404087
    if (v2 < 1) {
        // 0x404329
        return 0xffffffff;
    }
    int64_t * v3 = (int64_t *)(v1 + 16); // 0x40408f
    *v3 = 0;
    int32_t v4 = *(int32_t *)a7; // 0x404098
    int64_t v5; // 0x404050
    int32_t v6; // 0x404050
    char v7; // 0x404050
    int64_t v8; // 0x404050
    int64_t v9; // 0x404050
    if (v4 != 0) {
        // 0x404230
        v6 = v4;
        if (*(int32_t *)(v1 + 24) == 0) {
            goto lab_0x4040b3;
        } else {
            int64_t v10 = *(int64_t *)(v1 + 32); // 0x404241
            char v11 = *(char *)&v8; // 0x404246
            v9 = a3;
            v7 = v11;
            v5 = v10;
            if ((v11 - 43 & -3) == 0) {
                int64_t v12 = a3 + 1; // 0x404258
                v9 = v12;
                v7 = *(char *)v12;
                v5 = v10;
            }
            goto lab_0x404113;
        }
    } else {
        // 0x4040a6
        *(int32_t *)a7 = 1;
        v6 = 1;
        goto lab_0x4040b3;
    }
  lab_0x4046a0:;
    // 0x4046a0
    int64_t v13; // 0x404050
    int64_t v14 = v13 + 32; // 0x4046a0
    int64_t v15 = *(int64_t *)v14; // 0x4046a4
    int64_t v16; // 0x404050
    int64_t v17 = v16; // 0x4046ad
    int64_t v18; // 0x404050
    int64_t v19 = v18; // 0x4046ad
    int32_t v20; // 0x404050
    int32_t v21 = v20; // 0x4046ad
    int64_t v22 = v14; // 0x4046ad
    int64_t v23; // 0x404050
    int64_t v24 = v23; // 0x4046ad
    int64_t v25 = v15; // 0x4046ad
    int64_t v26 = v16; // 0x4046ad
    int64_t v27 = v18; // 0x4046ad
    int32_t v28 = v20; // 0x4046ad
    int64_t v29 = v23; // 0x4046ad
    if (v15 == 0) {
        // break -> 0x404700
        goto lab_0x404700;
    }
    goto lab_0x4046af;
  lab_0x4046af:;
    int64_t v30 = v17; // 0x4046af
    int64_t v31 = v19; // 0x4046af
    int32_t v32 = v21; // 0x4046af
    int64_t v33 = v22; // 0x4046af
    int64_t v34; // 0x404050
    int64_t v35 = v34 + 1 & 0xffffffff; // 0x4046af
    int64_t * v36; // 0x404050
    int64_t str2 = *v36; // 0x4046af
    int64_t v37 = v24; // 0x4046af
    int64_t v38 = v25; // 0x4046af
    goto lab_0x4046b4;
  lab_0x40467c:;
    int64_t * mem = malloc(16); // 0x404681
    int64_t v39; // 0x404050
    int64_t v40; // 0x404050
    if (mem == NULL) {
        // 0x404a28
        v18 = 1;
        v23 = 0;
        int64_t v52 = v39; // 0x404a2b
        if (v39 != 0) {
            int64_t v53 = *(int64_t *)(v52 + 8); // 0x404a30
            free((int64_t *)v52);
            v18 = 1;
            v23 = v53;
            v52 = v53;
            while (v53 != 0) {
                // 0x404a30
                v53 = *(int64_t *)(v52 + 8);
                free((int64_t *)v52);
                v18 = 1;
                v23 = v53;
                v52 = v53;
            }
        }
    } else {
        int64_t v54 = (int64_t)mem; // 0x404681
        *mem = v13;
        *(int64_t *)(v54 + 8) = v39;
        v18 = v40;
        v23 = v54;
    }
    goto lab_0x4046a0;
  lab_0x4040b3:
    // 0x4040b3
    *(int32_t *)(v1 + 52) = v6;
    *(int32_t *)(v1 + 48) = v6;
    int64_t * v55 = (int64_t *)(v1 + 32); // 0x4040c5
    *v55 = 0;
    int64_t v56; // 0x404050
    int64_t v57; // 0x404050
    int64_t v58; // 0x404050
    int64_t v59; // 0x404050
    int64_t v60; // 0x404050
    if ((int32_t)a8 == 0) {
        // 0x404340
        if (getenv("POSIXLY_CORRECT") != NULL) {
            int64_t v61 = *v55; // 0x404454
            *(int32_t *)(v1 + 44) = 1;
            char v62 = *(char *)&v8; // 0x404462
            v58 = v61;
            if (v62 == 45) {
                goto lab_0x404370;
            } else {
                // 0x40446d
                v56 = v61;
                v59 = v61;
                if (v62 != 43) {
                    goto lab_0x4040fa;
                } else {
                    goto lab_0x404475;
                }
            }
        } else {
            // 0x404353
            *(int32_t *)(v1 + 44) = 0;
            char v63 = *(char *)&v8; // 0x404360
            if (v63 != 45) {
                if (v63 == 43) {
                    // 0x404bbb
                    v59 = *v55;
                    goto lab_0x404475;
                } else {
                    // 0x4048a0
                    *(int32_t *)(v1 + 40) = 1;
                    v60 = a3;
                    v57 = *v55;
                    goto lab_0x404103;
                }
            } else {
                // 0x40436b
                v58 = *v55;
                goto lab_0x404370;
            }
        }
    } else {
        // 0x4040d7
        *(int32_t *)(v1 + 44) = 1;
        v56 = 0;
        v58 = 0;
        v59 = 0;
        switch (*(char *)&v8) {
            case 45: {
                goto lab_0x404370;
            }
            case 43: {
                goto lab_0x404475;
            }
            default: {
                goto lab_0x4040fa;
            }
        }
    }
  lab_0x404113:;
    int64_t v64 = a1 & 0xffffffff; // 0x40409c
    int64_t v65 = v5;
    char v66 = v7;
    int64_t str3 = v9;
    int64_t v67; // 0x404050
    int64_t v68; // 0x404050
    if (v65 == 0) {
        goto lab_0x404270;
    } else {
        // 0x40412c
        v68 = a4;
        v67 = v65;
        if (*(char *)v65 == 0) {
            goto lab_0x404270;
        } else {
            goto lab_0x404136;
        }
    }
  lab_0x404370:
    // 0x404370
    *(int32_t *)(v1 + 40) = 2;
    v60 = a3 + 1;
    v57 = v58;
    goto lab_0x404103;
  lab_0x404475:
    // 0x404475
    *(int32_t *)(v1 + 40) = 0;
    v60 = a3 + 1;
    v57 = v59;
    goto lab_0x404103;
  lab_0x4040fa:
    // 0x4040fa
    *(int32_t *)(v1 + 40) = 0;
    v60 = a3;
    v57 = v56;
    goto lab_0x404103;
  lab_0x404270:;
    uint32_t v211 = *(int32_t *)a7; // 0x404270
    int64_t v212 = v211; // 0x404270
    int32_t * v78 = (int32_t *)(v1 + 52); // 0x404274
    if ((int64_t)*v78 > v212) {
        // 0x40427b
        *v78 = v211;
    }
    int32_t * v77 = (int32_t *)(v1 + 48); // 0x404280
    if (*v77 > v211) {
        // 0x404287
        *v77 = v211;
    }
    int32_t * v209 = (int32_t *)(v1 + 40); // 0x40428c
    int64_t v70 = v212; // 0x404292
    int64_t v104; // 0x404050
    int64_t v105; // 0x404050
    if (*v209 == 1) {
        uint32_t v213 = *v78; // 0x4043a8
        int64_t v214 = v213; // 0x4043a8
        v8 = v214;
        int64_t v215; // 0x404050
        if (*v77 == v213) {
            // 0x4044a0
            v215 = v214;
            if (v211 != v213) {
                // 0x4044a8
                *v77 = v211;
                v8 = v212;
                v215 = v212;
            }
        } else {
            // 0x4043b8
            v215 = v214;
            if (v211 != v213) {
                // 0x4043bc
                function_403f70(a2, v1);
                int64_t v216 = (int64_t)*(int32_t *)a7; // 0x4043c9
                v8 = v216;
                v215 = v216;
            }
        }
        int64_t v217 = v215; // 0x4043cd
        int64_t v218 = v217; // 0x4043cf
        if (v64 > v217) {
            int64_t v219 = 0x100000000 * v217 >> 32;
            int64_t v220 = *(int64_t *)(8 * v219 + a2); // 0x4043f3
            int64_t v221 = v219 & 0xffffffff; // 0x4043f7
            v8 = v221;
            if (*(char *)v220 == 45) {
                // 0x404400
                if (*(char *)(v220 + 1) != 0) {
                    // 0x404406
                    v104 = v221;
                    v105 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40440a;
                }
            }
            int64_t v222 = v221 + 1; // 0x4043e0
            int64_t v223 = v222 & 0xffffffff; // 0x4043e0
            v8 = v223;
            int64_t v224 = v219 + 1; // 0x4043e3
            *(int32_t *)a7 = (int32_t)v222;
            v218 = v223;
            while (v64 > v224) {
                // 0x4043f3
                v219 = v224;
                v220 = *(int64_t *)(8 * v219 + a2);
                v221 = v219 & 0xffffffff;
                v8 = v221;
                if (*(char *)v220 == 45) {
                    // 0x404400
                    if (*(char *)(v220 + 1) != 0) {
                        // 0x404406
                        v104 = v221;
                        v105 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40440a;
                    }
                }
                // 0x4043e0
                v222 = v221 + 1;
                v223 = v222 & 0xffffffff;
                v8 = v223;
                v224 = v219 + 1;
                *(int32_t *)a7 = (int32_t)v222;
                v218 = v223;
            }
        }
        // 0x4047b0
        v104 = v218;
        v105 = v218 & 0xffffffff;
        goto lab_0x40440a;
    } else {
        goto lab_0x404298;
    }
  lab_0x404103:
    // 0x404103
    *(int32_t *)(v1 + 24) = 1;
    v9 = v60;
    v7 = *(char *)v60;
    v5 = v57;
    goto lab_0x404113;
  lab_0x404298:;
    int64_t v69 = v70;
    int32_t v71 = v69; // 0x404298
    int64_t v72; // 0x404050
    int64_t v73; // 0x404050
    bool v74; // 0x404050
    int64_t v75; // 0x4042b2
    if (v2 == v71) {
        int64_t v76 = (int64_t)*v77; // 0x40438d
        v8 = v76;
        v72 = v76;
        v73 = (int64_t)*v78;
        goto lab_0x404392;
    } else {
        // 0x4042a0
        v75 = *(int64_t *)((0x100000000 * v69 >> 29) + a2);
        v8 = v75;
        int64_t v79 = v74 ? -1 : 1; // 0x4042b9
        int64_t v80 = 3; // 0x4042b9
        int64_t v81 = v75;
        int64_t v82 = (int64_t)"--";
        unsigned char v83 = *(char *)v81; // 0x4042b9
        char v84 = *(char *)v82; // 0x4042b9
        char v85 = v84; // 0x4042b9
        bool v86 = false; // 0x4042b9
        while (v83 == v84) {
            v80--;
            int64_t v87 = v82 + v79; // 0x4042b9
            int64_t v88 = v81 + v79; // 0x4042b9
            v85 = v83;
            v86 = true;
            if (v80 == 0) {
                // break -> 
                break;
            }
            v81 = v88;
            v82 = v87;
            v83 = *(char *)v81;
            v84 = *(char *)v82;
            v85 = v84;
            v86 = false;
        }
        unsigned char v89 = v85;
        if ((v83 >= v89 && !v86) != v83 < v89) {
            // 0x404300
            if (*(char *)v75 == 45) {
                int64_t v90 = v75 + 1; // 0x404418
                unsigned char v91 = *(char *)v90; // 0x404418
                if (v91 == 0) {
                    goto lab_0x404309;
                } else {
                    int64_t v92 = v90 + (int64_t)(a4 != 0 == v91 == 45); // 0x404439
                    *(int64_t *)(v1 + 32) = v92;
                    v68 = v91;
                    v67 = v92;
                    goto lab_0x404136;
                }
            } else {
                goto lab_0x404309;
            }
        } else {
            uint32_t v93 = *v77; // 0x4042c5
            v8 = v93;
            int32_t v94 = *v78; // 0x4042ca
            int64_t v95 = v69 + 1; // 0x4042cf
            int32_t v96 = v95; // 0x4042d2
            *(int32_t *)a7 = v96;
            if (v93 == v94) {
                // 0x404888
                *v77 = v96;
                v8 = v95 & 0xffffffff;
            } else {
                if (v94 != v96) {
                    // 0x4042e2
                    function_403f70(a2, v1);
                    v8 = (int64_t)*v77;
                }
            }
            // 0x4042f2
            *v78 = v2;
            *(int32_t *)a7 = v2;
            v72 = v8;
            v73 = v64;
            goto lab_0x404392;
        }
    }
  lab_0x404136:;
    int64_t v97 = 0x100000000 * a6 >> 32; // 0x40407e
    int32_t v98 = v66 != 58 ? *(int32_t *)(v1 + 4) : 0; // 0x40411a
    int64_t v99 = v67;
    int64_t v100 = v64; // 0x40413c
    int64_t v101 = v99; // 0x40413c
    int64_t v102; // 0x40413e
    if (a4 == 0) {
        goto lab_0x404198;
    } else {
        // 0x40413e
        v102 = (int64_t)*(int32_t *)a7;
        v8 = v102;
        int64_t v103 = *(int64_t *)(8 * v102 + a2); // 0x40414a
        char c = *(char *)(v103 + 1); // 0x40414e
        if (c == 45) {
            goto lab_0x4045e0;
        } else {
            // 0x40415c
            if ((int32_t)v97 == 0) {
                goto lab_0x404198;
            } else {
                // 0x404166
                if (*(char *)(v103 + 2) != 0) {
                    goto lab_0x4045e0;
                } else {
                    // 0x404170
                    v8 = v102;
                    v100 = v64;
                    v101 = v99;
                    if (strchr((char *)str3, (int32_t)c) == NULL) {
                        goto lab_0x4045e0;
                    } else {
                        goto lab_0x404198;
                    }
                }
            }
        }
    }
  lab_0x40440a:
    // 0x40440a
    *v78 = (int32_t)v104;
    v70 = v105;
    goto lab_0x404298;
  lab_0x404198:;
    int64_t v106 = v101 + 1; // 0x404198
    int64_t * v107 = (int64_t *)(v1 + 32); // 0x4041a5
    *v107 = v106;
    char v108 = *(char *)v101; // 0x4041aa
    int32_t c2 = v108; // 0x4041ae
    char * str4 = (char *)str3; // 0x4041b4
    char * found_char_pos = strchr(str4, c2); // 0x4041b4
    char * v109 = (char *)v106;
    if (*v109 == 0) {
        // 0x404490
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if ((v108 || 1) == 59 || found_char_pos == NULL) {
        if (v98 != 0) {
            // 0x404a50
            fprintf(g29, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5), "%s: invalid option -- '%c'\n", v108);
        }
        // 0x4047cc
        *(int32_t *)(v1 + 8) = c2;
        // 0x404329
        return 63;
    }
    int64_t v110 = (int64_t)found_char_pos; // 0x4041b4
    unsigned char v111 = *(char *)(v110 + 1); // 0x4041e3
    v8 = v111;
    if (*found_char_pos != 87 || v111 != 59) {
        int64_t v112 = v108; // 0x4041aa
        if (v111 != 58) {
            // 0x404329
            return v112 & 0xffffffff;
        }
        unsigned char v113 = *v109; // 0x4041fa
        v8 = v113;
        if (*(char *)(v110 + 2) == 58) {
            if (v113 == 0) {
                // 0x404c91
                *v3 = 0;
            } else {
                // 0x404990
                *v3 = v106;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40421d
            *v107 = 0;
            // 0x404329
            return v112 & 0xffffffff;
        }
        int32_t v114 = *(int32_t *)a7; // 0x404205
        if (v113 != 0) {
            // 0x404211
            *v3 = v106;
            *(int32_t *)a7 = v114 + 1;
            // 0x40421d
            *v107 = 0;
            // 0x404329
            return v112 & 0xffffffff;
        }
        if (v114 != (int32_t)v100) {
            // 0x404a8d
            *(int32_t *)a7 = v114 + 1;
            *v3 = *(int64_t *)(8 * (int64_t)v114 + a2);
            // 0x40421d
            *v107 = 0;
            // 0x404329
            return v112 & 0xffffffff;
        }
        if (v98 != 0) {
            // 0x404e4b
            fprintf(g29, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5), "%s: option requires an argument -- '%c'\n", v108);
        }
        // 0x404d0d
        *(int32_t *)(v1 + 8) = c2;
        char v115 = *str4; // 0x404d19
        // 0x40421d
        *v107 = 0;
        // 0x404329
        return (4 * (int64_t)(v115 != 58) | (v115 != 58 ? 59 : 58)) & 0xffffffff;
    }
    if (a4 == 0) {
        // 0x404e37
        *v107 = 0;
        // 0x404329
        return 87;
    }
    int32_t v116 = *(int32_t *)a7; // 0x4044d2
    char * str6; // 0x404050
    int64_t v117; // 0x404050
    if (*v109 == 0) {
        if (v116 == (int32_t)v100) {
            if (v98 != 0) {
                // 0x404fd9
                fprintf(g29, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5), "%s: option requires an argument -- '%c'\n", v108);
            }
            // 0x404e8c
            *(int32_t *)(v1 + 8) = c2;
            char v118 = *str4; // 0x404e98
            // 0x404329
            return (4 * (int64_t)(v118 != 58) | (v118 != 58 ? 59 : 58)) & 0xffffffff;
        }
        int64_t v119 = v116; // 0x4044d2
        int64_t v120 = v119 + 1; // 0x404c7c
        v8 = v120 & 0xffffffff;
        *(int32_t *)a7 = (int32_t)v120;
        int64_t v121 = *(int64_t *)(8 * v119 + a2); // 0x404c83
        *v3 = v121;
        str6 = (char *)v121;
        v117 = v121;
    } else {
        // 0x4044dc
        *v3 = v106;
        *(int32_t *)a7 = v116 + 1;
        str6 = v109;
        v117 = v106;
    }
    // 0x4044e8
    *v107 = v117;
    unsigned char v122 = *str6; // 0x4044ed
    int64_t v123 = v122; // 0x4044ed
    int64_t v124 = v123; // 0x4044f7
    int64_t v125 = v117; // 0x4044f7
    int64_t v126 = v123; // 0x4044f7
    int64_t v127 = v117; // 0x4044f7
    if (v122 != 0) {
        v126 = v124;
        v127 = v125;
        while (v124 != 61) {
            int64_t v128 = v125 + 1; // 0x404500
            unsigned char v129 = *(char *)v128; // 0x404504
            v124 = v129;
            v125 = v128;
            v126 = 0;
            v127 = v128;
            if (v129 == 0) {
                // break -> 0x404524
                break;
            }
            v126 = v124;
            v127 = v125;
        }
    }
    int64_t n2 = v127 - v117; // 0x404530
    int64_t v130 = 0;
    int64_t v131 = 0;
    int32_t v132 = 0;
    int64_t v133 = 0;
    char * str5 = (char *)a4; // 0x4045ad
    int64_t v134 = v133; // 0x4045b4
    int32_t v135 = v132; // 0x4045b4
    int64_t v136 = v130; // 0x4045b4
    int64_t v137; // 0x404050
    int32_t v138; // 0x404050
    int32_t v139; // 0x404bd3
    int32_t v140; // 0x404bd6
    if (strncmp(str5, str6, (int32_t)n2) == 0) {
        // 0x4045b6
        if ((n2 & 0xffffffff) == (int64_t)strlen(str5)) {
            // 0x404d41
            v138 = v131;
            v137 = a4;
            goto lab_0x404c1b;
        }
        if (v130 != 0) {
            // 0x404570
            v134 = 1;
            v135 = v132;
            v136 = v130;
            if ((int32_t)v97 == 0) {
                // 0x40457a
                v134 = 1;
                v135 = v132;
                v136 = v130;
                if (*(int32_t *)(v130 + 8) == *(int32_t *)(a4 + 8)) {
                    // 0x404bc5
                    v134 = 1;
                    v135 = v132;
                    v136 = v130;
                    if (*(int64_t *)(v130 + 16) == *(int64_t *)(a4 + 16)) {
                        // 0x404bd3
                        v139 = *(int32_t *)(a4 + 24);
                        v140 = *(int32_t *)(v130 + 24);
                        v134 = v140 == v139 ? 0x100000000 * v133 >> 32 : 1;
                        v135 = v132;
                        v136 = v130;
                    }
                }
            }
        } else {
            // 0x4045ce
            v134 = v133;
            v135 = v131;
            v136 = a4;
        }
    }
    int64_t v141 = v136;
    int32_t v142 = v135;
    int64_t v143 = v134;
    int64_t v144 = a4 + 32; // 0x40458f
    int64_t v145 = *(int64_t *)v144; // 0x404593
    int64_t v146 = v131 + 1 & 0xffffffff; // 0x40459e
    while (v145 != 0) {
        // 0x4045a4
        v130 = v141;
        v131 = v146;
        int64_t v147 = v144;
        v132 = v142;
        v133 = v143;
        str5 = (char *)v145;
        v134 = v133;
        v135 = v132;
        v136 = v130;
        if (strncmp(str5, str6, (int32_t)n2) == 0) {
            // 0x4045b6
            if ((n2 & 0xffffffff) == (int64_t)strlen(str5)) {
                // 0x404d41
                v138 = v131;
                v137 = v147;
                goto lab_0x404c1b;
            }
            if (v130 != 0) {
                // 0x404570
                v134 = 1;
                v135 = v132;
                v136 = v130;
                if ((int32_t)v97 == 0) {
                    // 0x40457a
                    v134 = 1;
                    v135 = v132;
                    v136 = v130;
                    if (*(int32_t *)(v130 + 8) == *(int32_t *)(v147 + 8)) {
                        // 0x404bc5
                        v134 = 1;
                        v135 = v132;
                        v136 = v130;
                        if (*(int64_t *)(v130 + 16) == *(int64_t *)(v147 + 16)) {
                            // 0x404bd3
                            v139 = *(int32_t *)(v147 + 24);
                            v140 = *(int32_t *)(v130 + 24);
                            v134 = v140 == v139 ? 0x100000000 * v133 >> 32 : 1;
                            v135 = v132;
                            v136 = v130;
                        }
                    }
                }
            } else {
                // 0x4045ce
                v134 = v133;
                v135 = v131;
                v136 = v147;
            }
        }
        // 0x40458f
        v141 = v136;
        v142 = v135;
        v143 = v134;
        v144 = v147 + 32;
        v145 = *(int64_t *)v144;
        v146 = v131 + 1 & 0xffffffff;
    }
    if ((int32_t)v143 != 0) {
        char * str7 = str6; // 0x404e11
        int64_t v148 = v117; // 0x404e11
        if (v98 != 0) {
            // 0x404f62
            fprintf(g29, dcgettext(NULL, "%s: option '-W %s' is ambiguous\n", 5), "%s: option '-W %s' is ambiguous\n", str6);
            v148 = *v107;
            str7 = (char *)v148;
        }
        int32_t len = strlen(str7); // 0x404e20
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
        *v107 = v148 + (int64_t)len;
        // 0x404329
        return 63;
    }
    // 0x404c12
    v138 = v142;
    v137 = v141;
    if (v141 == 0) {
        // 0x404e37
        *v107 = 0;
        // 0x404329
        return 87;
    }
    goto lab_0x404c1b;
  lab_0x404392:;
    int32_t v210 = v72; // 0x404392
    if (v210 != (int32_t)v73) {
        // 0x404396
        *(int32_t *)a7 = v210;
    }
    // 0x404329
    return 0xffffffff;
  lab_0x404c1b:;
    int32_t v149 = *(int32_t *)(v137 + 8); // 0x404c1b
    if ((char)v126 == 0) {
        if (v149 == 1) {
            int32_t v150 = *(int32_t *)a7; // 0x404ea9
            uint64_t v151 = (int64_t)v150; // 0x404ea9
            if ((v100 & 0xffffffff) <= v151) {
                if (v98 != 0) {
                    int64_t v152 = *(int64_t *)v137; // 0x405050
                    fprintf(g29, dcgettext(NULL, "%s: option '-W %s' requires an argument\n", 5), "%s: option '-W %s' requires an argument\n", (char *)v152);
                }
                int64_t v153 = *v107; // 0x404fa7
                v8 = v153;
                int64_t v154 = -1; // 0x404fb5
                int64_t v155 = v153; // 0x404fb5
                int64_t v156 = 0; // 0x404fb5
                while (v154 != 0) {
                    int64_t v157 = v155;
                    v154--;
                    v155 = v157 + (v74 ? -1 : 1);
                    v156 = v154;
                    if (*(char *)v157 == 0) {
                        // break -> 
                        break;
                    }
                    v156 = 0;
                }
                *v107 = v153 - 2 - v156;
                if (*str4 != 58) {
                    // 0x404329
                    return 63;
                }
                // 0x404329
                return 58;
            }
            // 0x404eb5
            *(int32_t *)a7 = v150 + 1;
            *v3 = *(int64_t *)(8 * v151 + a2);
        } else {
            // 0x404d33
            *v3 = 0;
        }
    } else {
        if (v149 == 0) {
            char * str8 = str6; // 0x404f41
            int64_t v158 = v117; // 0x404f41
            if (v98 != 0) {
                int64_t v159 = *(int64_t *)v137; // 0x405013
                fprintf(g29, dcgettext(NULL, "%s: option '-W %s' doesn't allow an argument\n", 5), "%s: option '-W %s' doesn't allow an argument\n", (char *)v159);
                v158 = *v107;
                str8 = (char *)v158;
            }
            // 0x404f47
            *v107 = v158 + (int64_t)strlen(str8);
            // 0x404329
            return 63;
        }
        // 0x404c30
        *v3 = (0x100000000 * v127 >> 32) + 1;
    }
    // 0x404c39
    *v107 = v117 + (int64_t)strlen(str6);
    if (a5 != 0) {
        // 0x404c53
        *(int32_t *)a5 = v138;
    }
    int64_t v160 = *(int64_t *)(v137 + 16); // 0x404c59
    uint32_t v161 = *(int32_t *)(v137 + 24); // 0x404c5d
    int64_t v162 = v160; // 0x404c64
    int32_t v163 = v161; // 0x404c64
    if (v160 == 0) {
        // 0x404329
        return (int64_t)v161 & 0xffffffff;
    }
    goto lab_0x40479c;
  lab_0x4045e0:;
    int64_t v204 = v99; // 0x404050
    int32_t v41 = 0; // 0x404050
    int64_t n = 0; // 0x404050
    int64_t v174 = v99; // 0x404050
    switch (*(char *)v99) {
        case 0: {
            goto lab_0x40461b;
        }
        case 61: {
            goto lab_0x40461b;
        }
        default: {
            int64_t v205 = v204 + 1; // 0x404600
            char v206 = *(char *)v205; // 0x404604
            v204 = v205;
            while (v206 != 0 == (v206 != 61)) {
                // 0x404600
                v205 = v204 + 1;
                v206 = *(char *)v205;
                v204 = v205;
            }
            int64_t v207 = v205 - v99; // 0x404614
            v41 = v207;
            n = v207;
            v174 = v205;
            goto lab_0x40461b;
        }
    }
  lab_0x404309:;
    int64_t v208 = 0xffffffff; // 0x404311
    if (*v209 != 0) {
        // 0x404317
        *v3 = v75;
        *(int32_t *)a7 = v71 + 1;
        v208 = 1;
    }
    // 0x404329
    return v208 & 0xffffffff;
  lab_0x40479c:
    // 0x40479c
    *(int32_t *)v162 = v163;
    // 0x404329
    return 0;
  lab_0x40461b:;
    int32_t v164; // 0x404050
    int64_t v165; // 0x404050
    int64_t v166; // 0x404050
    int64_t v167; // 0x404050
    int64_t v42; // 0x404050
    int64_t v168; // 0x404050
    int64_t v169; // 0x404050
    int32_t v170; // 0x404050
    int32_t v171; // 0x404715
    int64_t v172; // 0x40470d
    int64_t v173; // 0x404638
    if (v68 == 0) {
        // 0x40461b
        v164 = v97;
        v166 = v102;
        v172 = v64;
        goto lab_0x4048b8;
    } else {
        // 0x40462c
        v168 = 0x100000000 * v174;
        v173 = 0x100000000 * a1 >> 32;
        int32_t v43 = v97;
        v36 = (int64_t *)(v1 + 32);
        v30 = 0;
        v31 = 0;
        v32 = -1;
        v33 = a4;
        v35 = 0;
        str2 = v99;
        v37 = 0;
        v38 = v68;
        while (true) {
          lab_0x4046b4:
            // 0x4046b4
            v39 = v37;
            v34 = v35;
            v13 = v33;
            v20 = v32;
            v40 = v31;
            v16 = v30;
            char * str = (char *)v38; // 0x4046ba
            v18 = v40;
            v23 = v39;
            if (strncmp(str, (char *)str2, (int32_t)n) != 0) {
                goto lab_0x4046a0;
            } else {
                // 0x4046c3
                if (v41 == strlen(str)) {
                    // 0x404810
                    v42 = v39;
                    if (v39 == 0) {
                        goto lab_0x404841;
                    } else {
                        goto lab_0x404830;
                    }
                }
                if (v16 != 0) {
                    // 0x404660
                    v18 = v40;
                    v23 = v39;
                    if (v40 % 256 != 0) {
                        goto lab_0x4046a0;
                    } else {
                        if (v43 != 0) {
                            goto lab_0x40467c;
                        } else {
                            // 0x404670
                            if (*(int32_t *)(v16 + 8) == *(int32_t *)(v13 + 8)) {
                                int64_t v44 = *(int64_t *)(v13 + 16); // 0x4047e0
                                int64_t v45 = *(int64_t *)(v16 + 16); // 0x4047e4
                                if (v45 != v44) {
                                    goto lab_0x40467c;
                                } else {
                                    int32_t v46 = *(int32_t *)(v13 + 24); // 0x4047ee
                                    int32_t v47 = *(int32_t *)(v16 + 24); // 0x4047f1
                                    int64_t v48; // 0x404050
                                    v18 = v48;
                                    v23 = v39;
                                    if (v47 != v46) {
                                        goto lab_0x40467c;
                                    } else {
                                        goto lab_0x4046a0;
                                    }
                                }
                            } else {
                                goto lab_0x40467c;
                            }
                        }
                    }
                } else {
                    int64_t v49 = v13 + 32; // 0x4046e4
                    int64_t v50 = *(int64_t *)v49; // 0x4046e8
                    int32_t v51 = v34;
                    v17 = v13;
                    v19 = v40;
                    v21 = v51;
                    v22 = v49;
                    v24 = v39;
                    v25 = v50;
                    v26 = v13;
                    v27 = v40;
                    v28 = v51;
                    v29 = v39;
                    if (v50 == 0) {
                        // break -> 0x404700
                        break;
                    }
                    goto lab_0x4046af;
                }
            }
        }
      lab_0x404700:
        // 0x404700
        v171 = *(int32_t *)a7;
        int64_t v175 = v171; // 0x404715
        v8 = v175;
        if ((char)v27 == 0 == v29 == 0) {
            // 0x40472a
            v172 = v173 & 0xffffffff;
            v165 = v175;
            v169 = v26;
            v170 = v28;
            v167 = v172;
            v164 = v43;
            v166 = v175;
            if (v26 == 0) {
                goto lab_0x4048b8;
            } else {
                goto lab_0x404736;
            }
        } else {
            if (v98 == 0) {
                goto lab_0x404b71;
            } else {
                if (v29 == 0) {
                    if ((char)v27 == 0) {
                        goto lab_0x404b71;
                    } else {
                        int64_t v176 = *(int64_t *)(8 * v175 + a2); // 0x404d7e
                        fprintf(g29, dcgettext(NULL, "%s: option '%s' is ambiguous\n", 5), "%s: option '%s' is ambiguous\n", (char *)v176);
                        goto lab_0x404b43;
                    }
                } else {
                    int64_t v177 = *(int64_t *)(8 * v175 + a2); // 0x404adc
                    fprintf(g29, dcgettext(NULL, "%s: option '%s' is ambiguous; possibilities:", 5), "%s: option '%s' is ambiguous; possibilities:", (char *)v177);
                    fprintf(g29, " '--%s'", (char *)*(int64_t *)v26);
                    int64_t v178; // bp-72, 0x404050
                    int64_t v179 = *(int64_t *)((int64_t)&v178 + 8); // 0x404b29
                    if (v179 != 0) {
                        fprintf(g29, " '--%s'", (char *)*(int64_t *)*(int64_t *)v179);
                        int64_t v180 = *(int64_t *)(v179 + 8); // 0x404b29
                        int64_t v181 = v180; // 0x404b30
                        while (v180 != 0) {
                            int64_t v182 = *(int64_t *)*(int64_t *)v181; // 0x404b13
                            fprintf(g29, " '--%s'", (char *)v182);
                            v180 = *(int64_t *)(v181 + 8);
                            v181 = v180;
                        }
                    }
                    // 0x404b32
                    fputc(10, g29);
                    goto lab_0x404b43;
                }
            }
        }
    }
  lab_0x4048b8:;
    // 0x4048b8
    char * v183; // 0x404050
    int64_t v184; // 0x404050
    int64_t v185; // 0x404050
    int64_t v186; // 0x404050
    if (v164 == 0) {
        // 0x404c9f
        v184 = v166;
        if (v98 == 0) {
            goto lab_0x40494f;
        } else {
            int64_t v187 = *(int64_t *)(v1 + 32); // 0x404cb2
            int64_t v188 = *(int64_t *)(8 * v166 + a2); // 0x404cb7
            v185 = v187;
            if (*(char *)(v188 + 1) != 45) {
                // 0x404cad
                v183 = (char *)v187;
                v186 = v188;
                goto lab_0x404911;
            } else {
                goto lab_0x404cc8;
            }
        }
    } else {
        int64_t v189 = *(int64_t *)(8 * v166 + a2); // 0x4048ce
        if (*(char *)(v189 + 1) == 45) {
            // 0x404df3
            v184 = v166;
            if (v98 == 0) {
                goto lab_0x40494f;
            } else {
                // 0x404dff
                v185 = *(int64_t *)(v1 + 32);
                goto lab_0x404cc8;
            }
        } else {
            int64_t v190 = *(int64_t *)(v1 + 32); // 0x4048dc
            char * c3 = (char *)v190;
            v8 = v166 & 0xffffffff;
            v100 = v172;
            v101 = v190;
            if (strchr((char *)str3, (int32_t)*c3) != NULL) {
                goto lab_0x404198;
            } else {
                // 0x404909
                v183 = c3;
                v186 = v189;
                if (v98 == 0) {
                    goto lab_0x40494f;
                } else {
                    goto lab_0x404911;
                }
            }
        }
    }
  lab_0x404736:;
    int64_t v191 = v168 >> 32;
    int64_t v192 = v165 + 1; // 0x404736
    *(int32_t *)a7 = (int32_t)v192;
    int32_t v193 = *(int32_t *)(v169 + 8); // 0x404747
    if (*(char *)v191 == 0) {
        if (v193 == 1) {
            // 0x404861
            if ((v192 & 0xffffffff) >= v167) {
                if (v98 != 0) {
                    int64_t v194 = *(int64_t *)v169; // 0x404f0d
                    fprintf(g29, dcgettext(NULL, "%s: option '--%s' requires an argument\n", 5), "%s: option '--%s' requires an argument\n", (char *)v194);
                }
                int64_t str9 = *v36; // 0x404db9
                *v36 = str9 + (int64_t)strlen((char *)str9);
                *(int32_t *)(v1 + 8) = *(int32_t *)(v169 + 24);
                if (*(char *)str3 != 58) {
                    // 0x404329
                    return 63;
                }
                // 0x404329
                return 58;
            }
            // 0x404869
            *(int32_t *)a7 = (int32_t)v165 + 2;
            *v3 = *(int64_t *)((0x100000000 * v192 >> 29) + a2);
        }
    } else {
        if (v193 == 0) {
            if (v98 != 0) {
                // 0x4049a7
                if (*(char *)(*(int64_t *)(a2 - 8 + (0x100000000 * v192 >> 29)) + 1) == 45) {
                    // 0x404ecf
                    fprintf(g29, dcgettext(NULL, "%s: option '--%s' doesn't allow an argument\n", 5));
                } else {
                    // 0x4049c8
                    fprintf(g29, dcgettext(NULL, "%s: option '%c%s' doesn't allow an argument\n", 5));
                }
            }
            int64_t str10 = *v36; // 0x4049f7
            *v36 = str10 + (int64_t)strlen((char *)str10);
            *(int32_t *)(v1 + 8) = *(int32_t *)(v169 + 24);
            // 0x404329
            return 63;
        }
        // 0x404758
        *v3 = v191 + 1;
    }
    int64_t str11 = *v36; // 0x404761
    *v36 = str11 + (int64_t)strlen((char *)str11);
    if (a5 != 0) {
        // 0x404780
        *(int32_t *)a5 = v170;
    }
    int64_t v195 = *(int64_t *)(v169 + 16); // 0x40478b
    uint32_t v196 = *(int32_t *)(v169 + 24); // 0x40478f
    v162 = v195;
    v163 = v196;
    if (v195 == 0) {
        // 0x404329
        return (int64_t)v196 & 0xffffffff;
    }
    goto lab_0x40479c;
  lab_0x404b71:;
    int64_t str12 = *v36; // 0x404b71
    int32_t len2 = strlen((char *)str12); // 0x404b7c
    *(int32_t *)(v1 + 8) = 0;
    *v36 = str12 + (int64_t)len2;
    *(int32_t *)a7 = v171 + 1;
    if (v29 == 0) {
        // 0x404329
        return 63;
    }
    int64_t v197 = *(int64_t *)(v29 + 8); // 0x404ba8
    free((int64_t *)v29);
    int64_t v198 = v197; // 0x404bb7
    while (v197 != 0) {
        // 0x404ba8
        v197 = *(int64_t *)(v198 + 8);
        free((int64_t *)v198);
        v198 = v197;
    }
    // 0x404329
    return 63;
  lab_0x40494f:
    // 0x40494f
    *(int64_t *)(v1 + 32) = (int64_t)&g9;
    *(int32_t *)a7 = (int32_t)v184 + 1;
    *(int32_t *)(v1 + 8) = 0;
    // 0x404329
    return 63;
  lab_0x404cc8:
    // 0x404cc8
    fprintf(g29, dcgettext(NULL, "%s: unrecognized option '--%s'\n", 5), "%s: unrecognized option '--%s'\n", (char *)v185);
    int64_t v199 = (int64_t)*(int32_t *)a7; // 0x404cf8
    v8 = v199;
    v184 = v199;
    goto lab_0x40494f;
  lab_0x404b43:;
    int64_t str13 = *v36; // 0x404b43
    int32_t len3 = strlen((char *)str13); // 0x404b4b
    *(int32_t *)a7 = *(int32_t *)a7 + 1;
    *(int32_t *)(v1 + 8) = 0;
    *v36 = str13 + (int64_t)len3;
    // 0x404329
    return 63;
  lab_0x404911:;
    char v200 = *(char *)v186; // 0x404916
    fprintf(g29, dcgettext(NULL, "%s: unrecognized option '%c%s'\n", 5), "%s: unrecognized option '%c%s'\n", v200, v183);
    int64_t v201 = (int64_t)*(int32_t *)a7; // 0x40494b
    v8 = v201;
    v184 = v201;
    goto lab_0x40494f;
  lab_0x404841:;
    int64_t v202 = (int64_t)*(int32_t *)a7; // 0x404841
    v8 = v202;
    v165 = v202;
    v169 = v13;
    v170 = v34;
    v167 = v173 & 0xffffffff;
    goto lab_0x404736;
  lab_0x404830:;
    int64_t v203 = *(int64_t *)(v42 + 8); // 0x404830
    free((int64_t *)v42);
    v42 = v203;
    if (v203 != 0) {
        goto lab_0x404830;
    } else {
        goto lab_0x404841;
    }
}
// Address range: 0x405090 - 0x4050e6
int64_t function_405090(int64_t a1) {
    // 0x405090
    *(int32_t *)&g39 = g24;
    *(int32_t *)&g40 = g23;
    int64_t v1; // 0x405090
    int64_t result = function_404050(v1, v1, v1, v1, v1, v1, &g39, a1 & 0xffffffff); // 0x4050b6
    g24 = *(int32_t *)&g39;
    g44 = (char *)g42;
    *(int32_t *)&g22 = g41;
    return result;
}
// Address range: 0x4050f0 - 0x405108
int64_t function_4050f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4050f0
    return function_405090(1);
}
// Address range: 0x405110 - 0x405123
int64_t function_405110(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x405110
    return function_405090(0);
}
// Address range: 0x405130 - 0x405145
int64_t function_405130(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405130
    return function_404050(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x405150 - 0x405166
int64_t function_405150(void) {
    // 0x405150
    return function_405090(0);
}
// Address range: 0x405170 - 0x405188
int64_t function_405170(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405170
    return function_404050(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405190 - 0x4051b9
int64_t function_405190(int32_t * pwc, int64_t wstr2, int64_t n) {
    // 0x405190
    int64_t ps; // 0x405190
    int32_t result; // 0x4051b4
    if (wstr2 == 0) {
        int64_t wstr = (int64_t)&g9;
        result = mbrtowc((int32_t *)0, (char *)wstr, (int32_t)1, (struct _TYPEDEF___mbstate_t *)ps);
        return result;
    }
    // 0x405195
    if (n == 0) {
        // 0x40519a
        return -2;
    }
    // 0x4051b4
    result = mbrtowc((int32_t *)(int64_t)pwc, (char *)wstr2, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps);
    return result;
}
// Address range: 0x4051c0 - 0x405225
int64_t function_4051c0(int64_t a1) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x4051c7
    int32_t v1 = __fpending(stream); // 0x4051c7
    int32_t is_ferror = ferror(stream); // 0x4051d2
    int32_t v2 = fclose(stream); // 0x4051dc
    if (is_ferror != 0) {
        // 0x405208
        if (v2 == 0) {
            // 0x40520c
            *__errno_location() = 0;
        }
        // 0x4051fe
        return 0xffffffff;
    }
    // 0x4051e5
    if (v2 == 0) {
        // 0x4051fe
        return 0;
    }
    int64_t result = 0xffffffff; // 0x4051ec
    if (v1 == 0) {
        // 0x4051ee
        result = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4051fe
    return result;
}
// Address range: 0x405230 - 0x405792
int64_t function_405230(void) {
    char * v1 = nl_langinfo(14); // 0x405246
    char * v2 = g43; // 0x40524b
    char * v3; // 0x405230
    int64_t v4; // 0x405230
    int64_t v5; // 0x405230
    int64_t v6; // 0x405230
    int64_t v7; // 0x405230
    int32_t size; // 0x405230
    int32_t size2; // 0x405230
    int32_t len; // 0x405302
    int64_t v8; // 0x405302
    char * env_val; // 0x4052ed
    if (v2 == NULL) {
        // 0x4052e8
        env_val = getenv("CHARSETALIASDIR");
        size = 116;
        v4 = 102;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 101;
        if (env_val == NULL) {
            goto lab_0x405355;
        } else {
            // 0x4052fa
            size = 116;
            v4 = 102;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 101;
            if (*env_val == 0) {
                goto lab_0x405355;
            } else {
                // 0x4052ff
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x4052ed
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405785
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405355;
                    } else {
                        // 0x4056f9
                        size2 = len + 14;
                        goto lab_0x40531b;
                    }
                } else {
                    goto lab_0x40531b;
                }
            }
        }
    } else {
        // 0x405230
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40526a;
    }
  lab_0x40559c:;
    // 0x40559c
    int64_t v10; // 0x405230
    int64_t v11 = v10;
    int64_t v12; // 0x405230
    int64_t v13 = v12;
    struct _IO_FILE * stream; // 0x4053db
    int32_t v14 = __uflow(stream); // 0x40559f
    int64_t v15 = v13; // 0x4055a9
    int32_t v16 = v14; // 0x4055a9
    int64_t v17 = v11; // 0x4055a9
    int64_t v18 = v13; // 0x4055a9
    int64_t v19 = v11; // 0x4055a9
    if (v14 == -1) {
        // break -> 0x4055af
        goto lab_0x4055af;
    }
    goto lab_0x405429;
  lab_0x40541e:;
    // 0x40541e
    int64_t v116; // 0x405230
    int64_t v137 = v116;
    int64_t v115; // 0x405230
    int64_t v138 = v115;
    int64_t v114; // 0x405230
    int64_t v139 = v114;
    int64_t * v30; // 0x405410
    *v30 = v138 + 1;
    unsigned char v140 = *(char *)v138; // 0x405426
    v15 = v139;
    v16 = v140;
    v17 = v137;
    goto lab_0x405429;
  lab_0x405429:;
    int64_t v20 = v17;
    int32_t c = v16;
    int64_t v21 = v15;
    int64_t v22; // 0x405230
    int32_t v23; // bp-120, 0x405230
    int32_t v24; // bp-184, 0x405230
    int64_t v25; // 0x405230
    int64_t v26; // 0x4053f8
    int64_t v27; // 0x4053fd
    int64_t * v28; // 0x405414
    switch (c) {
        case 32: {
            // 0x405410
            v25 = v21;
            v22 = v20;
            goto lab_0x405410_2;
        }
        case 10: {
            // 0x405410
            v25 = v21;
            v22 = v20;
            goto lab_0x405410_2;
        }
        case 9: {
            // 0x405410
            v25 = v21;
            v22 = v20;
            goto lab_0x405410_2;
        }
        case 35: {
            uint64_t v29 = *v30; // 0x405601
            uint64_t v31 = *v28; // 0x405605
            int32_t v32; // 0x405230
            char v33; // 0x405230
            unsigned char v34; // 0x4055e8
            int32_t v35; // 0x40560e
            if (v29 < v31) {
                // 0x4055e0
                *v30 = v29 + 1;
                v34 = *(char *)v29;
                v32 = v34;
                v33 = 1;
            } else {
                // 0x40560b
                v35 = __uflow(stream);
                v32 = v35;
                v33 = v35 != -1;
            }
            char v36 = v33;
            int32_t v37 = v32;
            while (v37 != 10 && v36 != 0) {
                // 0x405601
                v29 = *v30;
                v31 = *v28;
                if (v29 < v31) {
                    // 0x4055e0
                    *v30 = v29 + 1;
                    v34 = *(char *)v29;
                    v32 = v34;
                    v33 = 1;
                } else {
                    // 0x40560b
                    v35 = __uflow(stream);
                    v32 = v35;
                    v33 = v35 != -1;
                }
                // 0x4055f0
                v36 = v33;
                v37 = v32;
            }
            // 0x4056df
            v18 = v21;
            v19 = v20;
            if (v37 == -1) {
                // break -> 0x4055af
                break;
            }
            // 0x405410
            v25 = v21;
            v22 = v20;
            goto lab_0x405410_2;
        }
        default: {
            // 0x40543f
            ungetc(c, stream);
            int32_t items_assigned = fscanf(stream, "%50s %50s", &v24, &v23); // 0x405457
            int64_t v38 = v27; // 0x40545f
            v18 = v21;
            v19 = v20;
            if (items_assigned < 2) {
                // break -> 0x4055af
                break;
            }
            int64_t v39 = v38;
            int32_t v40 = *(int32_t *)v39; // 0x405468
            int64_t v41 = v39 + 4; // 0x40546a
            int32_t v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80); // 0x405476
            uint32_t v43 = v42 & -0x7f7f7f80; // 0x405478
            v38 = v41;
            while (v43 == 0) {
                // 0x405468
                v39 = v38;
                v40 = *(int32_t *)v39;
                v41 = v39 + 4;
                v42 = v40 - 0x1010101 & (v40 ^ -0x7f7f7f80);
                v43 = v42 & -0x7f7f7f80;
                v38 = v41;
            }
            int32_t v44 = (v42 & 0x8080) == 0 ? v43 / 0x10000 : v43; // 0x405489
            int64_t v45 = v39 + 6; // 0x40548c
            unsigned char v46 = (char)v44; // 0x405496
            int64_t v47 = -1 - v46 < v46 ? 4 : 3; // 0x40549b
            int64_t v48 = v26; // 0x40549f
            int64_t v49 = v48;
            int32_t v50 = *(int32_t *)v49; // 0x4054a2
            int64_t v51 = v49 + 4; // 0x4054a4
            int32_t v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80); // 0x4054b0
            uint32_t v53 = v52 & -0x7f7f7f80; // 0x4054b2
            v48 = v51;
            while (v53 == 0) {
                // 0x4054a2
                v49 = v48;
                v50 = *(int32_t *)v49;
                v51 = v49 + 4;
                v52 = v50 - 0x1010101 & (v50 ^ -0x7f7f7f80);
                v53 = v52 & -0x7f7f7f80;
                v48 = v51;
            }
            int64_t v54 = (v42 & 0x8080) == 0 ? v45 : v41; // 0x405490
            int64_t v55 = v54 - v47 - v27; // 0x40549f
            int32_t v56 = (v52 & 0x8080) == 0 ? v53 / 0x10000 : v53; // 0x4054c8
            int64_t v57 = (v52 & 0x8080) == 0 ? v49 + 6 : v51; // 0x4054cf
            unsigned char v58 = (char)v56; // 0x4054d5
            int64_t v59 = -1 - v58 < v58 ? 4 : 3; // 0x4054d8
            int64_t v60 = v57 - v59 - v26; // 0x4054dc
            int64_t v61 = v60 + v55; // 0x4054e5
            int64_t * v62; // 0x405230
            int64_t v63; // 0x405230
            if (v21 != 0) {
                int64_t v64 = v61 + v21; // 0x40561b
                int64_t * mem = realloc((int64_t *)v20, (int32_t)v64 + 3); // 0x405630
                v63 = v64;
                v62 = mem;
            } else {
                int64_t * mem2 = malloc((int32_t)v61 + 3); // 0x405501
                v63 = v61;
                v62 = mem2;
            }
            int64_t * v65 = v62;
            if (v65 == NULL) {
                // 0x40573c
                free((int64_t *)v20);
                fclose(stream);
                goto lab_0x4053b4;
            }
            int64_t v66 = v63;
            int64_t v67 = (int64_t)v65;
            int64_t v68 = v66 + 2;
            int64_t v69 = v55 + 1; // 0x405528
            int64_t v70 = v68 - v60 + v67;
            int64_t v71 = -2 - v55 + v70; // 0x405532
            uint32_t v72 = (int32_t)v69; // 0x405535
            if (v72 >= 8) {
                int32_t v73 = v24; // 0x405644
                *(int64_t *)v71 = (int64_t)v73;
                int64_t v74 = (v69 & 0xffffffff) - 8;
                int64_t v75 = *(int64_t *)(v74 + v27); // 0x40564d
                *(int64_t *)(v71 + v74) = v75;
                int64_t v76 = v71 + 8 & -8; // 0x40565e
                int64_t v77 = v71 - v76; // 0x405662
                uint32_t v78 = (int32_t)(v77 + v69); // 0x40566d
                if (v78 >= 8) {
                    int64_t v79 = v27 - v77; // 0x405667
                    uint32_t v80 = v78 & -8; // 0x405689
                    int64_t v81 = 0; // 0x405230
                    int64_t v82 = v81;
                    int64_t v83 = v82 + 8; // 0x40567e
                    int64_t v84 = *(int64_t *)(v79 + v82); // 0x405681
                    *(int64_t *)(v82 + v76) = v84;
                    v81 = v83 & 0xffffffff;
                    while (v80 > (int32_t)v83) {
                        // 0x40567b
                        v82 = v81;
                        v83 = v82 + 8;
                        v84 = *(int64_t *)(v79 + v82);
                        *(int64_t *)(v82 + v76) = v84;
                        v81 = v83 & 0xffffffff;
                    }
                }
            } else {
                if ((v69 & 4) != 0) {
                    int32_t v85 = v24; // 0x40570f
                    *(int32_t *)v71 = v85;
                    int64_t v86 = (v69 & 0xffffffff) - 4;
                    int32_t v87 = *(int32_t *)(v86 + v27); // 0x405717
                    *(int32_t *)(v71 + v86) = v87;
                } else {
                    if (v72 != 0) {
                        int32_t v88 = v24; // 0x40554b
                        *(char *)v71 = (char)v88;
                        if ((v69 & 2) != 0) {
                            int64_t v89 = (v69 & 0xffffffff) - 2;
                            int16_t v90 = *(int16_t *)(v89 + v27); // 0x405762
                            *(int16_t *)(v71 + v89) = v90;
                        }
                    }
                }
            }
            int64_t v91 = v60 + 1; // 0x40555b
            int64_t v92 = v70 - 1; // 0x40555f
            uint32_t v93 = (int32_t)v91; // 0x405564
            if (v93 >= 8) {
                int32_t v94 = v23; // 0x405692
                *(int64_t *)v92 = (int64_t)v94;
                int64_t v95 = (v91 & 0xffffffff) - 8;
                int64_t v96 = *(int64_t *)(v95 + v26); // 0x40569e
                *(int64_t *)(v92 + v95) = v96;
                int64_t v97 = v70 + 7 & -8; // 0x4056ac
                int64_t v98 = v92 - v97; // 0x4056b0
                uint32_t v99 = (int32_t)(v98 + v91); // 0x4056bb
                if (v99 >= 8) {
                    int64_t v100 = v26 - v98; // 0x4056b5
                    uint32_t v101 = v99 & -8; // 0x4056d6
                    int64_t v102 = 0; // 0x405230
                    int64_t v103 = v102;
                    int64_t v104 = v103 + 8; // 0x4056cb
                    int64_t v105 = *(int64_t *)(v100 + v103); // 0x4056ce
                    *(int64_t *)(v103 + v97) = v105;
                    v102 = v104 & 0xffffffff;
                    while (v101 > (int32_t)v104) {
                        // 0x4056c9
                        v103 = v102;
                        v104 = v103 + 8;
                        v105 = *(int64_t *)(v100 + v103);
                        *(int64_t *)(v103 + v97) = v105;
                        v102 = v104 & 0xffffffff;
                    }
                }
            } else {
                if ((v91 & 4) != 0) {
                    int32_t v106 = v23; // 0x405726
                    *(int32_t *)v92 = v106;
                    int64_t v107 = (v91 & 0xffffffff) - 4;
                    int32_t v108 = *(int32_t *)(v107 + v26); // 0x40572e
                    *(int32_t *)(v92 + v107) = v108;
                } else {
                    if (v93 != 0) {
                        int32_t v109 = v23; // 0x40557a
                        *(char *)v92 = (char)v109;
                        if ((v91 & 2) != 0) {
                            int64_t v110 = (v91 & 0xffffffff) - 2;
                            int16_t v111 = *(int16_t *)(v110 + v26); // 0x405775
                            *(int16_t *)(v92 + v110) = v111;
                        }
                    }
                }
            }
            uint64_t v112 = *v30; // 0x40558e
            uint64_t v113 = *v28; // 0x405592
            v114 = v68;
            v115 = v112;
            v116 = v67;
            v12 = v68;
            v10 = v67;
            if (v112 < v113) {
                goto lab_0x40541e;
            } else {
                goto lab_0x40559c;
            }
        }
    }
  lab_0x405355:;
    int64_t * mem3 = malloc(size); // 0x405355
    int64_t v117 = (int64_t)&g9; // 0x405360
    int64_t v118; // 0x405230
    int64_t path; // 0x405230
    if (mem3 == NULL) {
        goto lab_0x405332;
    } else {
        int64_t v119 = (int64_t)mem3; // 0x405355
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v119) = 47;
        path = v119;
        v118 = v4;
        goto lab_0x405376;
    }
  lab_0x40526a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x40525d
    char v120 = *v3; // 0x40526a
    int64_t v121; // 0x405230
    if (v120 == 0) {
        // 0x4052c4
        v121 = str;
        return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
    }
    char v122 = v120; // 0x405230
    int64_t v123 = v7;
    char * str2 = (char *)v123;
    int64_t v124; // 0x405230
    while (strcmp((char *)str, str2) != 0) {
        int64_t v125 = v123 + 1;
        if (v122 == 42) {
            // 0x4052b0
            v124 = v125;
            if (*(char *)v125 == 0) {
                goto lab_0x4052b7;
            }
        }
        int64_t str3 = v125 + (int64_t)strlen(str2); // 0x405280
        int64_t v126 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40528d
        char v127 = *(char *)v126; // 0x405292
        v122 = v127;
        if (v127 == 0) {
            // 0x4052c4
            v121 = str;
            return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
        }
        v123 = v126;
        str2 = (char *)v123;
    }
    // 0x40529b
    v124 = v123 + 1;
  lab_0x4052b7:
    // 0x4052c4
    v121 = v124 + (int64_t)strlen(str2);
    return *(char *)v121 == 0 ? (int64_t)"ASCII" : v121;
  lab_0x405332:;
    char * v128 = (char *)v117;
    g43 = v128;
    v3 = v128;
    v7 = v117;
    goto lab_0x40526a;
  lab_0x405376:;
    int64_t v129 = v118 + path; // 0x405376
    *(int64_t *)v129 = 0x2e74657372616863;
    *(int16_t *)(v129 + 12) = 115;
    *(int32_t *)(v129 + 8) = 0x61696c61;
    if (open((char *)path, O_RDONLY) >= 0) {
        // 0x4053d1
        int32_t fd; // 0x4053a2
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405702
            close(fd);
        } else {
            int64_t v130 = (int64_t)stream; // 0x4053db
            v26 = &v23;
            v27 = &v24;
            v30 = (int64_t *)(v130 + 8);
            v28 = (int64_t *)(v130 + 16);
            v25 = 0;
            v22 = 0;
            while (true) {
              lab_0x405410_2:;
                int64_t v131 = v22;
                int64_t v132 = v25;
                uint64_t v133 = *v30; // 0x405410
                uint64_t v134 = *v28; // 0x405414
                v114 = v132;
                v115 = v133;
                v116 = v131;
                v12 = v132;
                v10 = v131;
                if (v133 >= v134) {
                    goto lab_0x40559c;
                } else {
                    goto lab_0x40541e;
                }
            }
          lab_0x4055af:;
            int64_t v135 = v18;
            fclose(stream);
            if (v135 != 0) {
                int64_t v136 = v19;
                *(char *)(v136 + v135) = 0;
            }
        }
    }
    goto lab_0x4053b4;
  lab_0x40531b:;
    int64_t * mem4 = malloc(size2); // 0x40531b
    v117 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x4053c1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v118 = v8;
        goto lab_0x405376;
    } else {
        goto lab_0x405332;
    }
  lab_0x4053b4:
    // 0x4053b4
    free((int64_t *)path);
    v117 = (int64_t)&g9;
    goto lab_0x405332;
}
// Address range: 0x4057a0 - 0x4057fd
int64_t function_4057a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4057a0
    return function_4011b8();
}
// Address range: 0x405800 - 0x405801
int64_t function_405800(void) {
    // 0x405800
    int64_t result; // 0x405800
    return result;
}
// Address range: 0x405810 - 0x405828
int64_t function_405810(int64_t a1, int64_t a2, int64_t a3) {
    // 0x405810
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g14);
}
// Address range: 0x405828 - 0x405848
int64_t function_405828(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g10; // 0x405832
    while (*(int64_t *)v1 != -1) {
        // 0x405833
        v1 -= 8;
    }
    // 0x405844
    return result;
}
