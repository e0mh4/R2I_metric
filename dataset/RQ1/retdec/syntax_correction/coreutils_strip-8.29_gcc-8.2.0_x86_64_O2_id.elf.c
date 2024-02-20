#include "decompile_retdec.h"
// Address range: 0x401a60 - 0x401a65
int64_t function_401a60(void) {
    // 0x401a60
    abort();
    // UNREACHABLE
}
// Address range: 0x401a65 - 0x401a6a
int64_t function_401a65(void) {
    // 0x401a65
    abort();
    // UNREACHABLE
}
// Address range: 0x401a6a - 0x401a6f
int64_t function_401a6a(void) {
    // 0x401a6a
    abort();
    // UNREACHABLE
}
// Address range: 0x401a6f - 0x401a74
int64_t function_401a6f(void) {
    // 0x401a6f
    abort();
    // UNREACHABLE
}
// Address range: 0x401a74 - 0x401a79
int64_t function_401a74(void) {
    // 0x401a74
    abort();
    // UNREACHABLE
}
// Address range: 0x401a79 - 0x401a7e
int64_t function_401a79(void) {
    // 0x401a79
    abort();
    // UNREACHABLE
}
// Address range: 0x401a80 - 0x402400
int64_t function_401a80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x401a80
    function_402b90(a2);
    setlocale(LC_ALL, (char *)&g9);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_4070a0(0x402aa0, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    while (true) {
      lab_0x401ae0_2:
        // 0x401ae0
        while (true) {
            // continue -> 0x401ae0
        }
    }
  lab_0x401c12:;
    int32_t v1 = *(int32_t *)0x60b2bc; // 0x401c12
    int64_t v2 = v1; // 0x401c12
    int32_t v3 = (int32_t)a1 - v1; // 0x401c19
    if (v3 >= 2) {
        int64_t v4 = *(int64_t *)(a2 + 8 + 8 * v2); // 0x402274
        function_4047b0(v4);
        error(0, (int32_t)"extra operand %s" ^ (int32_t)"extra operand %s", dcgettext(NULL, "extra operand %s", 5));
        // 0x4022a3
        function_4024e0(1);
        // UNREACHABLE
    }
    int32_t * v5; // 0x401a80
    int32_t * v6; // 0x401a80
    int32_t * v7; // 0x401a80
    int64_t v8; // 0x401a80
    int64_t v9; // 0x401a80
    int64_t v10; // 0x401a80
    int64_t v11; // 0x401a80
    int64_t v12; // 0x401a80
    int64_t v13; // 0x401a80
    int64_t v14; // 0x401a80
    int64_t v15; // 0x401a80
    int64_t v16; // 0x401a80
    int64_t v17; // 0x401a80
    int64_t v18; // 0x401a80
    int64_t v19; // 0x401a80
    int64_t v20; // 0x401a80
    int64_t v21; // 0x401a80
    int64_t v22; // 0x401a80
    int64_t v23; // 0x401a80
    char v24; // 0x401a80
    int32_t * v25; // 0x401a80
    if ((int32_t)v9 + (int32_t)v8 + (int32_t)v10 > 1) {
        // 0x402339
        error(1, (int32_t)"cannot print \"only\" of more than one choice" ^ (int32_t)"cannot print \"only\" of more than one choice", dcgettext(NULL, "cannot print \"only\" of more than one choice", 5));
        v21 = a2;
        goto lab_0x40235b;
    } else {
        int64_t v26 = v3; // 0x401c1b
        int64_t v27 = v10 | v8;
        v22 = v2;
        v16 = a2;
        v12 = v26;
        if ((v27 || v9) == 0) {
            goto lab_0x401cc4;
        } else {
            int64_t v28 = v26 - 1; // 0x401c50
            v23 = v2;
            v19 = a2;
            if (v28 == 0) {
                goto lab_0x401d41;
            } else {
                int32_t * v29 = __errno_location(); // 0x401c5e
                int64_t v30 = (int64_t)v29; // 0x401c5e
                if (v9 == 0) {
                    // 0x402081
                    v17 = v30;
                    v13 = v28;
                    v7 = v29;
                    v20 = v30;
                    v14 = v28;
                    if (v27 == 0) {
                        goto lab_0x401cfc;
                    } else {
                        goto lab_0x402089;
                    }
                } else {
                    // 0x401c74
                    *v29 = 0;
                    if (v24 == 0) {
                        int32_t v31 = geteuid(); // 0x4021f2
                        g36 = v31;
                        if (v31 != -1) {
                            // 0x40220b
                            v25 = &g36;
                            goto lab_0x402110;
                        } else {
                            int32_t v32 = *v29; // 0x402202
                            v6 = v29;
                            v18 = v30;
                            if (v32 != 0) {
                                goto lab_0x401d1f;
                            } else {
                                // 0x40220b
                                v25 = &g36;
                                goto lab_0x402110;
                            }
                        }
                    } else {
                        int32_t v33 = getuid(); // 0x401c85
                        g37 = v33;
                        v25 = &g37;
                        if (v33 != -1) {
                            goto lab_0x402110;
                        } else {
                            int32_t v34 = *v29; // 0x401c99
                            v5 = v29;
                            v15 = v30;
                            v11 = v28;
                            v25 = &g37;
                            if (v34 == 0) {
                                goto lab_0x402110;
                            } else {
                                goto lab_0x401ca2;
                            }
                        }
                    }
                }
            }
        }
    }
  lab_0x40235b:;
    int64_t v35 = v21;
    int64_t v36 = function_4047b0(v35); // 0x40235e
    error(1, (int32_t)"%s: no such user" ^ (int32_t)"%s: no such user", dcgettext(NULL, "%s: no such user", 5));
    int64_t v37 = v36; // 0x402386
    goto lab_0x40238b;
  lab_0x401cc4:;
    int64_t v110 = v16;
    v37 = v110;
    int64_t v78; // 0x401a80
    int64_t v39; // 0x401a80
    if (v24 != 0) {
        goto lab_0x40238b;
    } else {
        char v111 = g38; // 0x401ccf
        v37 = v110;
        if (v111 != 0) {
            goto lab_0x40238b;
        } else {
            // 0x401cdc
            v39 = v110;
            if (v78 != 0) {
                goto lab_0x4023ad;
            } else {
                int64_t v112 = v12;
                int64_t v113 = v22;
                v23 = v113;
                v19 = v110;
                if (v112 != 0) {
                    goto lab_0x401d41;
                } else {
                    // 0x401cea
                    getenv("POSIXLY_CORRECT");
                    v17 = (int64_t)__errno_location();
                    v13 = v112;
                    goto lab_0x401cfc;
                }
            }
        }
    }
  lab_0x40238b:;
    int64_t v38 = v37;
    error(1, (int32_t)"cannot print only names or real IDs in default format" ^ (int32_t)"cannot print only names or real IDs in default format", dcgettext(NULL, "cannot print only names or real IDs in default format", 5));
    v39 = v38;
    goto lab_0x4023ad;
  lab_0x401d41:;
    int64_t v96 = v19;
    int64_t v97 = v23;
    int64_t v98 = *(int64_t *)(v96 + 8 * v97); // 0x401d41
    char v99 = *(char *)v98; // 0x401d45
    v21 = v98;
    int32_t v56; // 0x401a80
    int32_t v57; // 0x401a80
    if (v99 == 0) {
        goto lab_0x40235b;
    } else {
        int64_t v100 = function_404ae0(v98, (int64_t *)&g36, 0, 0, 0); // 0x401d5d
        v21 = v98;
        if (v100 != 0) {
            goto lab_0x40235b;
        } else {
            int32_t uid4 = g36; // 0x401d6b
            struct passwd * v101 = getpwuid(uid4); // 0x401d71
            v21 = v98;
            if (v101 == NULL) {
                goto lab_0x40235b;
            } else {
                int64_t v102 = (int64_t)v101; // 0x401d71
                int64_t v103 = *(int64_t *)v101; // 0x401d82
                int64_t v104 = function_405380(v103); // 0x401d85
                int32_t v105 = *(int32_t *)(v102 + 16); // 0x401d8f
                g36 = v105;
                g37 = v105;
                int32_t v106 = *(int32_t *)(v102 + 20); // 0x401d9e
                g34 = v106;
                g35 = v106;
                v56 = v106;
                v57 = 0x1000000 * (int32_t)v104 >> 24;
                if (v9 != 0) {
                    goto lab_0x4020ff;
                } else {
                    goto lab_0x401db6;
                }
            }
        }
    }
  lab_0x4023ad:;
    int64_t v40 = v39;
    error(1, (int32_t)"option --zero not permitted in default format" ^ (int32_t)"option --zero not permitted in default format", dcgettext(NULL, "option --zero not permitted in default format", 5));
    int32_t * v41 = (int32_t *)v40; // 0x4023ca
    int32_t * v42 = v41;
    char * format = dcgettext(NULL, "cannot get effective GID", 5); // 0x4023db
    int32_t err_num = *v42; // 0x4023e0
    error(1, err_num, format);
    return &g56;
  lab_0x401cfc:;
    int64_t v43 = v13;
    int64_t v44 = v17;
    int32_t * v45 = (int32_t *)v44;
    *v45 = 0;
    int32_t v46 = geteuid(); // 0x401d02
    g36 = v46;
    v7 = v45;
    v20 = v44;
    v14 = v43;
    if (v46 != -1) {
        goto lab_0x402089;
    } else {
        int32_t v47 = *v45; // 0x401d16
        v6 = v45;
        v18 = v44;
        v7 = v45;
        v20 = v44;
        v14 = v43;
        if (v47 == 0) {
            goto lab_0x402089;
        } else {
            goto lab_0x401d1f;
        }
    }
  lab_0x402089:;
    int32_t * v48 = v7;
    if (v10 == 0) {
        // 0x402216
        *v48 = 0;
        int32_t v49 = getuid(); // 0x40221c
        g37 = v49;
        if (v49 != -1) {
            goto lab_0x402092;
        } else {
            int64_t v50 = v14;
            int64_t v51 = v20;
            int32_t v52 = *v48; // 0x402230
            v5 = v48;
            v15 = v51;
            v11 = v50;
            if (v52 == 0) {
                goto lab_0x402092;
            } else {
                goto lab_0x401ca2;
            }
        }
    } else {
        goto lab_0x402092;
    }
  lab_0x402092:
    // 0x402092
    *v48 = 0;
    int32_t v53 = getegid(); // 0x402098
    g34 = v53;
    if (v53 == -1) {
        int32_t v54 = *v48; // 0x4020a8
        v41 = v48;
        if (v54 != 0) {
            // 0x4023cf
            v42 = v41;
            format = dcgettext(NULL, "cannot get effective GID", 5);
            err_num = *v42;
            error(1, err_num, format);
            return &g56;
        }
    }
    // 0x4020b1
    *v48 = 0;
    int32_t v55 = getgid(); // 0x4020b7
    g35 = v55;
    v56 = v55;
    v57 = 0;
    if (v55 != -1) {
        goto lab_0x401db6;
    } else {
        int32_t v58 = *v48; // 0x4020d4
        v56 = v55;
        v57 = 0;
        if (v58 == 0) {
            goto lab_0x401db6;
        } else {
            char * format2 = dcgettext(NULL, "cannot get real GID", 5); // 0x4020e9
            int32_t err_num2 = *v48; // 0x4020ee
            error(1, err_num2, format2);
            goto lab_0x4020ff;
        }
    }
  lab_0x402110:;
    int32_t * v59 = v25;
    uint32_t uid = *v59;
    int64_t v60 = uid;
    char v61 = g38; // 0x402110
    int64_t v62; // 0x401a80
    int64_t v63; // 0x4021df
    if (v61 == 0) {
        // 0x4021d7
        v63 = function_402b40(v60, &g33);
        v62 = v63;
        goto lab_0x40212c;
    } else {
        struct passwd * v64 = getpwuid(uid); // 0x40211f
        if (v64 == NULL) {
            // 0x40219e
            function_402b40(v60, &g33);
            error(0, (int32_t)"cannot find name for user ID %s" ^ (int32_t)"cannot find name for user ID %s", dcgettext(NULL, "cannot find name for user ID %s", 5));
            *(char *)&g16 = 0;
            // 0x4021d7
            v63 = function_402b40(v60, &g33);
            v62 = v63;
            goto lab_0x40212c;
        } else {
            int64_t v65 = *(int64_t *)v64; // 0x402129
            v62 = v65;
            goto lab_0x40212c;
        }
    }
  lab_0x4020ff:
    // 0x4020ff
    v25 = &g37;
    if (v24 == 0) {
        // 0x40220b
        v25 = &g36;
        goto lab_0x402110;
    } else {
        goto lab_0x402110;
    }
  lab_0x401db6:;
    int32_t v66 = v56; // 0x402173
    int64_t v67; // 0x401a80
    int64_t v68; // 0x401a80
    int32_t v69; // 0x401a80
    if (v10 != 0) {
        char v70 = g38; // 0x402012
        int32_t v71 = g34;
        int32_t v72 = v24 == 0 ? v71 : v66;
        if ((char)function_402820(v72, v70) != 0) {
            goto lab_0x402037;
        } else {
            // 0x402030
            *(char *)&g16 = 0;
            goto lab_0x402037;
        }
    } else {
        uint32_t v73 = v57;
        uint32_t v74 = g37; // 0x401dbf
        if (v8 != 0) {
            char v75 = g38; // 0x402165
            int32_t v76 = g34; // 0x40216d
            char v77 = v73;
            if (v78 == 0) {
                // 0x402248
                v67 = 10;
                if ((char)function_4028a0(v77, v74, v66, v76, v75, 32) != 0) {
                    goto lab_0x402045;
                } else {
                    // 0x402030
                    *(char *)&g16 = 0;
                    goto lab_0x402037;
                }
            } else {
                // 0x402182
                if ((char)function_4028a0(v77, v74, v66, v76, v75, 0) == 0) {
                    // 0x402030
                    *(char *)&g16 = 0;
                    goto lab_0x402037;
                } else {
                    // 0x402197
                    v67 = 0;
                    goto lab_0x402045;
                }
            }
        } else {
            // 0x401dce
            function_402b40((int64_t)v74, &g33);
            __printf_chk(1, dcgettext(NULL, "uid=%s", 5));
            int32_t uid2 = g37; // 0x401e00
            struct passwd * v79 = getpwuid(uid2); // 0x401e06
            if (v79 != NULL) {
                int64_t v80 = *(int64_t *)v79; // 0x401e13
                __printf_chk(1, "(%s)", (char *)v80);
            }
            uint32_t v81 = g35; // 0x401e27
            function_402b40((int64_t)v81, &g32);
            __printf_chk(1, dcgettext(NULL, " gid=%s", 5));
            int32_t gid = g35; // 0x401e5d
            struct group * v82 = getgrgid(gid); // 0x401e63
            if (v82 != NULL) {
                int64_t v83 = *(int64_t *)v82; // 0x401e6d
                __printf_chk(1, "(%s)", (char *)v83);
            }
            uint32_t v84 = g36; // 0x401e81
            int32_t v85 = g37; // 0x401e87
            if (v84 != v85) {
                // 0x401e8f
                function_402b40((int64_t)v84, &g33);
                __printf_chk(1, dcgettext(NULL, " euid=%s", 5));
                int32_t uid3 = g36; // 0x401ec1
                struct passwd * v86 = getpwuid(uid3); // 0x401ec7
                if (v86 != NULL) {
                    int64_t v87 = *(int64_t *)v86; // 0x401ed4
                    __printf_chk(1, "(%s)", (char *)v87);
                }
            }
            uint32_t v88 = g34; // 0x401ee8
            int32_t v89 = g35; // 0x401eee
            if (v88 != v89) {
                // 0x401ef6
                function_402b40((int64_t)v88, &g32);
                __printf_chk(1, dcgettext(NULL, " egid=%s", 5));
                int32_t gid2 = g34; // 0x401f28
                struct group * v90 = getgrgid(gid2); // 0x401f2e
                if (v90 != NULL) {
                    int64_t v91 = *(int64_t *)v90; // 0x401f38
                    __printf_chk(1, "(%s)", (char *)v91);
                }
            }
            // 0x401f4c
            v68 = function_4053e0();
            v69 = v68;
            if (v73 % 256 == 0) {
                if (v69 >= 0) {
                    goto lab_0x401f7d;
                } else {
                    char * format3 = dcgettext(NULL, "failed to get groups for the current process", 5); // 0x4022dd
                    int32_t * v92 = __errno_location(); // 0x4022e5
                    int32_t err_num3 = *v92; // 0x4022ef
                    error(0, err_num3, format3);
                    // 0x402030
                    *(char *)&g16 = 0;
                    goto lab_0x402037;
                }
            } else {
                if (v69 < 0) {
                    // 0x4022fd
                    function_4047b0(0x100000000000000 * (int64_t)v73 >> 56);
                    char * format4 = dcgettext(NULL, "failed to get groups for user %s", 5); // 0x402316
                    int32_t * v93 = __errno_location(); // 0x40231e
                    int32_t err_num4 = *v93; // 0x40232b
                    error(0, err_num4, format4);
                    // 0x402030
                    *(char *)&g16 = 0;
                    goto lab_0x402037;
                } else {
                    goto lab_0x401f7d;
                }
            }
        }
    }
  lab_0x401d1f:;
    int64_t v94 = v18;
    int32_t * v95 = v6;
    char * format5 = dcgettext(NULL, "cannot get effective UID", 5); // 0x401d2b
    int32_t err_num5 = *v95; // 0x401d30
    error(1, err_num5, format5);
    v23 = (int64_t)format5;
    v19 = v94;
    goto lab_0x401d41;
  lab_0x401ca2:;
    int64_t v107 = v11;
    int64_t v108 = v15;
    int32_t * v109 = v5;
    char * format6 = dcgettext(NULL, "cannot get real UID", 5); // 0x401cae
    int32_t err_num6 = *v109; // 0x401cb3
    error(1, err_num6, format6);
    v22 = (int64_t)format6;
    v16 = v108;
    v12 = v107;
    goto lab_0x401cc4;
  lab_0x40212c:;
    int64_t v114 = v62;
    struct _IO_FILE * v115 = g27; // 0x40212c
    fputs_unlocked((char *)v114, v115);
    goto lab_0x402037;
  lab_0x402037:
    // 0x402037
    v67 = 10;
    if (v78 != 0) {
        // 0x402197
        v67 = 0;
        goto lab_0x402045;
    } else {
        goto lab_0x402045;
    }
  lab_0x402045:;
    int64_t v116 = v67;
    struct _IO_FILE * v117 = g27; // 0x402045
    int64_t v118 = (int64_t)v117; // 0x402045
    int64_t * v119 = (int64_t *)(v118 + 40); // 0x40204c
    uint64_t v120 = *v119; // 0x40204c
    uint64_t v121 = *(int64_t *)(v118 + 48); // 0x402050
    if (v121 > v120) {
        // 0x40205a
        *v119 = v120 + 1;
        *(char *)v120 = (char)v116;
    } else {
        // 0x40223e
        __overflow(v117, (int32_t)v116);
    }
    char v122 = *(char *)&g16; // 0x402065
    return v122 ^ 1;
  lab_0x401f7d:
    if (v69 != 0) {
        struct _IO_FILE * v123 = g27; // 0x40213d
        fputs_unlocked(dcgettext(NULL, " groups=", 5), v123);
    }
    int64_t v124 = v68 & 0xffffffff;
    int64_t v125 = 0; // 0x401fff
    int64_t v126; // 0x401a80
    if (v124 != 0) {
        int64_t v127 = v125;
        struct _IO_FILE * v128; // 0x401f8e
        int64_t v129; // 0x401f8e
        int64_t * v130; // 0x401f95
        uint64_t v131; // 0x401f95
        uint64_t v132; // 0x401f99
        if (v127 != 0) {
            // 0x401f8e
            v128 = g27;
            v129 = (int64_t)v128;
            v130 = (int64_t *)(v129 + 40);
            v131 = *v130;
            v132 = *(int64_t *)(v129 + 48);
            if (v131 >= v132) {
                // 0x402265
                __overflow(v128, 44);
            } else {
                // 0x401fa3
                *v130 = v131 + 1;
                *(char *)v131 = 44;
            }
        }
        struct _IO_FILE * v133 = g27; // 0x401fb3
        int32_t * v134 = (int32_t *)(4 * v127 + v126); // 0x401fbf
        uint32_t v135 = *v134; // 0x401fbf
        int64_t v136 = function_402b40((int64_t)v135, &g32); // 0x401fc2
        fputs_unlocked((char *)v136, v133);
        int32_t gid3 = *v134; // 0x401fd7
        struct group * v137 = getgrgid(gid3); // 0x401fda
        int64_t v138; // 0x401fe4
        if (v137 != NULL) {
            // 0x401fe4
            v138 = *(int64_t *)v137;
            __printf_chk(1, "(%s)", (char *)v138);
        }
        int64_t v139 = v127 + 1; // 0x401ff8
        v125 = v139;
        while (v139 != v124) {
            // 0x401f8a
            v127 = v125;
            if (v127 != 0) {
                // 0x401f8e
                v128 = g27;
                v129 = (int64_t)v128;
                v130 = (int64_t *)(v129 + 40);
                v131 = *v130;
                v132 = *(int64_t *)(v129 + 48);
                if (v131 >= v132) {
                    // 0x402265
                    __overflow(v128, 44);
                } else {
                    // 0x401fa3
                    *v130 = v131 + 1;
                    *(char *)v131 = 44;
                }
            }
            // 0x401fae
            v133 = g27;
            v134 = (int32_t *)(4 * v127 + v126);
            v135 = *v134;
            v136 = function_402b40((int64_t)v135, &g32);
            fputs_unlocked((char *)v136, v133);
            gid3 = *v134;
            v137 = getgrgid(gid3);
            if (v137 != NULL) {
                // 0x401fe4
                v138 = *(int64_t *)v137;
                __printf_chk(1, "(%s)", (char *)v138);
            }
            // 0x401ff8
            v139 = v127 + 1;
            v125 = v139;
        }
    }
    // 0x402001
    free((int64_t *)v126);
    goto lab_0x402037;
}
// Address range: 0x402400 - 0x40242b
// Address range: 0x40242b - 0x40244a
int64_t function_40242b(void) {
    // 0x40242b
    return &g26;
}
// Address range: 0x40244a - 0x402481
int64_t function_40244a(void) {
    // 0x40244a
    return 0;
}
// Address range: 0x402481 - 0x4024d8
int64_t function_402481(void) {
    // 0x402481
    if (g30 != 0) {
        // 0x4024d7
        int64_t result; // 0x402481
        return result;
    }
    int64_t v1 = g31; // 0x4024b4
    int64_t result2; // 0x4024c6
    if (g31 >= ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x4024c6
        result2 = function_40242b();
        g30 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g13 - (int64_t)&g12 >> 3) - 1) {
        // 0x4024b6
        v1++;
    }
    // 0x4024aa
    g31 = v1;
    // 0x4024c6
    result2 = function_40242b();
    g30 = 1;
    return result2;
}
// Address range: 0x4024d8 - 0x4024dd
int64_t function_4024d8(void) {
    // 0x4024d8
    return function_40244a();
}
// Address range: 0x4024e0 - 0x402815
int64_t function_4024e0(int64_t a1) {
    int32_t status = a1; // 0x4024f6
    if (status != 0) {
        // 0x4024fa
        __fprintf_chk(g29, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40251f
        exit(status);
        // UNREACHABLE
    }
    // 0x402526
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [USER]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Print user and group information for the specified USER,\nor (when USER omitted) for the current user.\n\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "  -a             ignore, for compatibility with other versions\n  -Z, --context  print only the security context of the process\n  -g, --group    print only the effective group ID\n  -G, --groups   print all group IDs\n  -n, --name     print a name instead of a number, for -ugG\n  -r, --real     print the real ID instead of the effective ID, with -ugG\n  -u, --user     print only the effective user ID\n  -z, --zero     delimit entries with NUL characters, not whitespace;\n                   not permitted in default format\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g27);
    fputs_unlocked(dcgettext(NULL, "\nWithout any OPTION, print some useful set of identified information.\n", 5), g27);
    int64_t v1 = &g1; // bp-136, 0x4025f3
    bool v2; // 0x4024e0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402678
    int64_t v6 = *(int64_t *)v5; // 0x40267c
    int64_t v7 = 3; // 0x402682
    while (v6 != 0) {
        int64_t v8 = (int64_t)"id";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x40268e
        char v11 = *(char *)v9; // 0x40268e
        char v12 = v11; // 0x40268e
        bool v13 = false; // 0x40268e
        while (v10 == v11) {
            // 0x402684
            v7--;
            int64_t v14 = v9 + v3; // 0x40268e
            int64_t v15 = v8 + v3; // 0x40268e
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
            // break -> 0x40269a
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 3;
    }
    // 0x40269a
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4027ac;
        } else {
            // 0x402796
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4027eb
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4026fc;
            } else {
                goto lab_0x4027ac;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4026fc;
        } else {
            // 0x4026e2
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4027eb
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4026fc;
            } else {
                goto lab_0x4026fc;
            }
        }
    }
  lab_0x4027ac:
    // 0x4027ac
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40273c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40251f
    exit(status);
    // UNREACHABLE
  lab_0x4026fc:
    // 0x4026fc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40273c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40251f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402820 - 0x402895
int64_t function_402820(uint32_t gid, char a2) {
    int64_t v1 = 1; // 0x402830
    if (a2 != 0) {
        struct group * v2 = getgrgid(gid); // 0x402836
        if (v2 != NULL) {
            // 0x402880
            fputs_unlocked((char *)*(int64_t *)v2, g27);
            return (int64_t)a2 & 0xffffffff & 0xffffffff;
        }
        // 0x402848
        error(0, (int32_t)"cannot find name for group ID %lu" ^ (int32_t)"cannot find name for group ID %lu", dcgettext(NULL, "cannot find name for group ID %lu", 5));
        v1 = 0;
    }
    int64_t v3 = function_402b40((int64_t)gid, &g39); // 0x402878
    // 0x402880
    fputs_unlocked((char *)v3, g27);
    return v1 & 0xffffffff;
}
// Address range: 0x4028a0 - 0x402a7f
int64_t function_4028a0(char a1, int32_t uid, int32_t a3, int32_t a4, char a5, uint32_t a6) {
    int64_t v1 = 1; // 0x4028c0
    int64_t v2; // 0x4028a0
    if (a1 != 0) {
        // 0x4028c6
        v1 = v2 & 0xffffff00 | (int64_t)(getpwuid(uid) != NULL);
    }
    int64_t v3 = (char)function_402820(a3, a5) == 0 ? 0 : v1; // 0x4028fb
    int64_t v4 = v3; // 0x402901
    if (a3 != a4) {
        int64_t v5 = (int64_t)g27; // 0x402903
        int64_t * v6 = (int64_t *)(v5 + 40); // 0x40290f
        uint64_t v7 = *v6; // 0x40290f
        if (v7 >= *(int64_t *)(v5 + 48)) {
            // 0x402a71
            __overflow(g27, a6 % 256);
        } else {
            // 0x40291d
            *v6 = v7 + 1;
            *(char *)v7 = (char)a6;
        }
        // 0x402928
        v4 = (char)function_402820(a4, a5) == 0 ? 0 : v3 & 0xffffffff;
    }
    int64_t v8 = function_4053e0(); // 0x402950
    int32_t v9 = v8; // 0x402955
    if (v9 < 0) {
        int32_t * err_num = __errno_location(); // 0x402a00
        if (a1 == 0) {
            // 0x402a50
            error(0, *err_num, dcgettext(NULL, "failed to get groups for the current process", 5));
        } else {
            // 0x402a0d
            function_4047b0((int64_t)a1);
            error(0, *err_num, dcgettext(NULL, "failed to get groups for user %s", 5));
        }
        // 0x4029db
        return 0;
    }
    // 0x40295d
    if (v9 == 0) {
        // 0x4029d6
        free((int64_t *)v2);
        // 0x4029db
        return v4 & 0xffffffff;
    }
    uint32_t v10 = 0x1000000 * a6 / 0x1000000; // 0x4028b8
    int64_t v11 = 0;
    int32_t * v12 = (int32_t *)(v11 + v2); // 0x402980
    int32_t v13 = *v12; // 0x402980
    int64_t v14 = v4; // 0x402986
    int64_t v15; // 0x40298c
    int64_t * v16; // 0x402993
    uint64_t v17; // 0x402993
    if (v13 != a4 && v13 != a3) {
        // 0x40298c
        v15 = (int64_t)g27;
        v16 = (int64_t *)(v15 + 40);
        v17 = *v16;
        if (v17 >= *(int64_t *)(v15 + 48)) {
            // 0x402a40
            __overflow(g27, v10 % 256);
        } else {
            // 0x4029a1
            *v16 = v17 + 1;
            *(char *)v17 = (char)v10;
        }
        // 0x4029b0
        v14 = (char)function_402820(*v12, a5) != 0 ? v4 : 0;
    }
    int64_t v18 = v14;
    int64_t v19 = v11 + 4; // 0x4029d4
    int64_t v20 = v18; // 0x4029d4
    while ((4 * v8 + 0x3fffffffc & 0x3fffffffc) != v11) {
        // 0x402980
        v11 = v19;
        int64_t v21 = v18;
        v12 = (int32_t *)(v11 + v2);
        v13 = *v12;
        v14 = v21;
        if (v13 != a4 && v13 != a3) {
            // 0x40298c
            v15 = (int64_t)g27;
            v16 = (int64_t *)(v15 + 40);
            v17 = *v16;
            if (v17 >= *(int64_t *)(v15 + 48)) {
                // 0x402a40
                __overflow(g27, v10 % 256);
            } else {
                // 0x4029a1
                *v16 = v17 + 1;
                *(char *)v17 = (char)v10;
            }
            // 0x4029b0
            v14 = (char)function_402820(*v12, a5) != 0 ? v21 : 0;
        }
        // 0x4029cd
        v18 = v14;
        v19 = v11 + 4;
        v20 = v18;
    }
    // 0x4029d6
    free((int64_t *)v2);
    // 0x4029db
    return v20 & 0xffffffff;
}
// Address range: 0x402a80 - 0x402a88
int64_t function_402a80(int64_t a1) {
    // 0x402a80
    g41 = a1;
    int64_t result; // 0x402a80
    return result;
}
// Address range: 0x402a90 - 0x402a98
int64_t function_402a90(int64_t a1) {
    // 0x402a90
    g40 = a1;
    int64_t result; // 0x402a90
    return result;
}
// Address range: 0x402aa0 - 0x402b3e
int64_t function_402aa0(void) {
    // 0x402aa0
    int32_t * err_num; // 0x402ab6
    if ((int32_t)function_406690((int64_t)g27) == 0) {
        goto lab_0x402acc;
    } else {
        // 0x402ab6
        err_num = __errno_location();
        if (g40 == 0) {
            goto lab_0x402ae3;
        } else {
            // 0x402ac7
            if (*err_num != 32) {
                goto lab_0x402ae3;
            } else {
                goto lab_0x402acc;
            }
        }
    }
  lab_0x402acc:;
    int64_t result = function_406690((int64_t)g29); // 0x402ad3
    if ((int32_t)result == 0) {
        // 0x402adc
        return result;
    }
    // 0x402b1e
    _exit(g17);
    // UNREACHABLE
  lab_0x402ae3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402aef
    if (g41 == 0) {
        // 0x402b29
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402b03
        error(0, *err_num, "%s: %s", (char *)function_404600((int64_t)g41), v1);
    }
    // 0x402b1e
    _exit(g17);
    // UNREACHABLE
}
// Address range: 0x402b40 - 0x402b88
int64_t function_402b40(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x402b40
    *(char *)v1 = 0;
    int64_t result = v1; // 0x402b52
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x402b5b
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x402b84
    return result;
}
// Address range: 0x402b90 - 0x402c29
int64_t function_402b90(int64_t str) {
    // 0x402b90
    if (str == 0) {
        // 0x402c09
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g29);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x402b9e
    int64_t result = (int64_t)found_char_pos; // 0x402b9e
    if (found_char_pos == NULL) {
        // 0x402bf9
        g42 = str;
        g28 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x402ba8
    if (v1 - str < 7) {
        // 0x402bf9
        g42 = str;
        g28 = str;
        return result;
    }
    // 0x402bb8
    bool v2; // 0x402b90
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x402b90
    int64_t v5 = result - 6; // 0x402b90
    int64_t v6 = 7; // 0x402bc6
    unsigned char v7 = *(char *)v5; // 0x402bc6
    char v8 = *(char *)v4; // 0x402bc6
    char v9 = v8; // 0x402bc6
    bool v10 = false; // 0x402bc6
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
    int64_t v12 = (int64_t)"lt-"; // 0x402bd0
    int64_t v13 = v1; // 0x402bd0
    int64_t v14 = 3; // 0x402bd0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402bf9
        g42 = str;
        g28 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402be2
    char v16 = *(char *)v12; // 0x402be2
    char v17 = v16; // 0x402be2
    bool v18 = false; // 0x402be2
    while (v15 == v16) {
        // 0x402bd2
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
    int64_t v20 = v1; // 0x402bec
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402bee
        v20 = result + 4;
        g26 = v20;
    }
    // 0x402bf9
    g42 = v20;
    g28 = v20;
    return result;
}
// Address range: 0x402c30 - 0x402d22
int64_t function_402c30(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402c44
    int64_t result = (int64_t)v1; // 0x402c44
    if (result != a1) {
        // 0x402c51
        return result;
    }
    int64_t v2 = function_406750(); // 0x402c60
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402d16
    if (v3 == 85) {
        // 0x402c70
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402d08
            result2 = (int32_t)a2 != 9 ? (int64_t)&g7 : (int64_t)&g2;
            return result2;
        }
        char v4 = *v1; // 0x402c9e
        int64_t result3 = v4 != 96 ? (int64_t)&g3 : (int64_t)&g6; // 0x402cab
        // 0x402c51
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402d08
        result2 = (int32_t)a2 != 9 ? (int64_t)&g7 : (int64_t)&g2;
        return result2;
    }
    char v5 = *v1; // 0x402ced
    int64_t result4 = v5 != 96 ? (int64_t)&g4 : (int64_t)&g5; // 0x402cfa
    // 0x402c51
    return result4;
}
// Address range: 0x402d30 - 0x402d87
int64_t function_402d30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402d30
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402d78
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402d87 - 0x403f51
int64_t function_402d87(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402dd1
    int64_t v3 = 0; // 0x402dd1
    int64_t v4; // 0x402d87
    int64_t v5; // 0x402d87
    int64_t v6; // 0x402d87
    int64_t v7; // 0x402d87
    int64_t v8; // 0x402d87
    int64_t v9; // 0x402d87
    int64_t v10; // 0x402d87
    int64_t v11; // 0x402d87
    int64_t v12; // 0x402d87
    int64_t v13; // 0x402d87
    int64_t v14; // 0x402d87
    int64_t v15; // 0x402d87
    int64_t v16; // 0x402d87
    int64_t v17; // 0x402d87
    int64_t v18; // 0x402d87
    int64_t result; // 0x402d87
    int64_t v19; // 0x402d87
    int32_t wc; // bp+132, 0x402d87
    int64_t ps; // bp+136, 0x402d87
    char v20; // 0x403340
    int64_t v21; // 0x403340
    int64_t v22; // 0x4036e8
    int64_t v23; // 0x402d87
    int64_t v24; // 0x403707
    int32_t v25; // 0x402d87
    while (true) {
      lab_0x402dd8_2:
        // 0x402dd8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402d87
        int64_t v27; // 0x402e0c
        while (true) {
          lab_0x402dd8:
            // 0x402dd8
            v5 = v26;
            bool v28 = v15 == v5; // 0x402de3
            if (v15 == -1) {
                // 0x402de5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402df3
            if (v28) {
                // break (via goto) -> 0x403558
                goto lab_0x403558;
            }
            // 0x402dfc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g55 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4033eb
                    if (v25 % 2 == 0) {
                        goto lab_0x402f31;
                    }
                    // 0x40380d
                    v26 = v5 + 1;
                    goto lab_0x402dd8;
                }
                case 7: {
                    goto lab_0x402f31;
                }
                case 8: {
                    goto lab_0x402f31;
                }
                case 9: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402f31;
                }
                case 12: {
                    goto lab_0x402f31;
                }
                case 13: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402efd;
                }
                case 36: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402f31;
                }
                case 38: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402f31;
                }
                case 44: {
                    goto lab_0x402f31;
                }
                case 45: {
                    goto lab_0x402f31;
                }
                case 46: {
                    goto lab_0x402f31;
                }
                case 47: {
                    goto lab_0x402f31;
                }
                case 48: {
                    goto lab_0x402f31;
                }
                case 49: {
                    goto lab_0x402f31;
                }
                case 50: {
                    goto lab_0x402f31;
                }
                case 51: {
                    goto lab_0x402f31;
                }
                case 52: {
                    goto lab_0x402f31;
                }
                case 53: {
                    goto lab_0x402f31;
                }
                case 54: {
                    goto lab_0x402f31;
                }
                case 55: {
                    goto lab_0x402f31;
                }
                case 56: {
                    goto lab_0x402f31;
                }
                case 57: {
                    goto lab_0x402f31;
                }
                case 58: {
                    goto lab_0x402f31;
                }
                case 59: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402f31;
                }
                case 66: {
                    goto lab_0x402f31;
                }
                case 67: {
                    goto lab_0x402f31;
                }
                case 68: {
                    goto lab_0x402f31;
                }
                case 69: {
                    goto lab_0x402f31;
                }
                case 70: {
                    goto lab_0x402f31;
                }
                case 71: {
                    goto lab_0x402f31;
                }
                case 72: {
                    goto lab_0x402f31;
                }
                case 73: {
                    goto lab_0x402f31;
                }
                case 74: {
                    goto lab_0x402f31;
                }
                case 75: {
                    goto lab_0x402f31;
                }
                case 76: {
                    goto lab_0x402f31;
                }
                case 77: {
                    goto lab_0x402f31;
                }
                case 78: {
                    goto lab_0x402f31;
                }
                case 79: {
                    goto lab_0x402f31;
                }
                case 80: {
                    goto lab_0x402f31;
                }
                case 81: {
                    goto lab_0x402f31;
                }
                case 82: {
                    goto lab_0x402f31;
                }
                case 83: {
                    goto lab_0x402f31;
                }
                case 84: {
                    goto lab_0x402f31;
                }
                case 85: {
                    goto lab_0x402f31;
                }
                case 86: {
                    goto lab_0x402f31;
                }
                case 87: {
                    goto lab_0x402f31;
                }
                case 88: {
                    goto lab_0x402f31;
                }
                case 89: {
                    goto lab_0x402f31;
                }
                case 90: {
                    goto lab_0x402f31;
                }
                case 91: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402f31;
                }
                case 94: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402f31;
                }
                case 96: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402f31;
                }
                case 98: {
                    goto lab_0x402f31;
                }
                case 99: {
                    goto lab_0x402f31;
                }
                case 100: {
                    goto lab_0x402f31;
                }
                case 101: {
                    goto lab_0x402f31;
                }
                case 102: {
                    goto lab_0x402f31;
                }
                case 103: {
                    goto lab_0x402f31;
                }
                case 104: {
                    goto lab_0x402f31;
                }
                case 105: {
                    goto lab_0x402f31;
                }
                case 106: {
                    goto lab_0x402f31;
                }
                case 107: {
                    goto lab_0x402f31;
                }
                case 108: {
                    goto lab_0x402f31;
                }
                case 109: {
                    goto lab_0x402f31;
                }
                case 110: {
                    goto lab_0x402f31;
                }
                case 111: {
                    goto lab_0x402f31;
                }
                case 112: {
                    goto lab_0x402f31;
                }
                case 113: {
                    goto lab_0x402f31;
                }
                case 114: {
                    goto lab_0x402f31;
                }
                case 115: {
                    goto lab_0x402f31;
                }
                case 116: {
                    goto lab_0x402f31;
                }
                case 117: {
                    goto lab_0x402f31;
                }
                case 118: {
                    goto lab_0x402f31;
                }
                case 119: {
                    goto lab_0x402f31;
                }
                case 120: {
                    goto lab_0x402f31;
                }
                case 121: {
                    goto lab_0x402f31;
                }
                case 122: {
                    goto lab_0x402f31;
                }
                case 123: {
                    goto lab_0x402ed5;
                }
                case 124: {
                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402ed5;
                }
                case 126: {
                    goto lab_0x402efd;
                }
                default: {
                    goto lab_0x4032d5;
                }
            }
        }
      lab_0x4032d5:
        if (v23 != 1) {
            // 0x403640
            ps = 0;
            int64_t len = v15; // 0x403650
            if (v15 == -1) {
                // 0x403652
                len = strlen((char *)str);
            }
            // 0x40367e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x4036df:
                // 0x4036df
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x4036e4
                int64_t v30 = v29 + str;
                v24 = function_406610(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403c5a_2;
                    }
                    case -1: {
                        goto lab_0x403c5a_2;
                    }
                    case -2: {
                        // 0x403d3d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403d77
                            v19 = v18;
                            int64_t v31 = v18; // 0x403d7a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403d87
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403d80
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403c5a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403c5a_2;
                    }
                    case 1: {
                        goto lab_0x4036b0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40375c
                        char v34 = *(char *)v33; // 0x40376d
                        unsigned char v35; // 0x402d87
                        if (v34 < 125) {
                            // 0x403778
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40378f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403760
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40376d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403778
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40378f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403760
                            v33++;
                        }
                        goto lab_0x4036b0;
                    }
                }
            }
            goto lab_0x403c5a_2;
        } else {
            // 0x403324
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402f31;
        }
    }
  lab_0x403558:
    // 0x403558
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403e5a
        if (v8 > result) {
            // 0x403e63
            *(char *)(v12 + result) = 0;
        }
        // 0x403187
        return result;
    }
    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402f31:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402f40
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40314a_2;
        }
    }
    int64_t v39 = result; // 0x403041
    char v40 = v20; // 0x403041
    int64_t v41 = v38; // 0x403041
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403041
    int64_t v43 = v36; // 0x403041
    goto lab_0x402fbd;
  lab_0x40314a_2:
    // 0x403187
    return function_402d30(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403c5a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402f31;
    } else {
        uint64_t v49 = v46 + v5; // 0x40382e
        int64_t v50 = v5 + 1; // 0x403911
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403918
        char v52 = v20; // 0x403918
        int64_t v53 = result; // 0x403918
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x4038e1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x4038e5
            int64_t v56 = v54 + 1; // 0x4038ea
            int64_t v57 = v51 + 1; // 0x403911
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x4038dc
                v54 = v56;
                if (v47 > v54) {
                    // 0x4038e1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x4038e5
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
        goto lab_0x402fbd;
    }
  lab_0x4036b0:
    // 0x4036b0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x4036cf
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x4036d2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403c5a
        goto lab_0x403c5a_2;
    }
    goto lab_0x4036df;
  lab_0x402efd:
    // 0x402efd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40314a_2;
    }
    goto lab_0x402f31;
  lab_0x402ed5:;
    bool v60 = v15 == 1; // 0x402ee0
    if (v15 == -1) {
        // 0x402ee2
        v60 = *(char *)v1 == 0;
    }
    // 0x402eee
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402f31;
    } else {
        goto lab_0x402efd;
    }
  lab_0x402fbd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402fc2
        *(char *)(v44 + v45) = v40;
    }
    // 0x402fc6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402dd8_2;
}
// Address range: 0x403f60 - 0x4040fe
int64_t function_403f60(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403f62
    int32_t * v3 = __errno_location(); // 0x403f7c
    int64_t v4 = (int64_t)g19; // 0x403f81
    int32_t v5 = *v3; // 0x403f8b
    int64_t v6 = v4; // 0x403fa1
    if (v2 >= (int64_t)*(int32_t *)&g22) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4040f9
            function_4053a0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403fb0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403fb7
        int64_t v9; // 0x403f60
        if (g19 == &g20) {
            int64_t v10 = function_4051b0(0, v8); // 0x4040da
            int128_t v11 = __asm_movdqa(*(int128_t *)&g20); // 0x4040df
            *(int64_t *)&g19 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4051b0(v4, v8); // 0x403fcb
            *(int64_t *)&g19 = v12;
            v9 = v12;
        }
        // 0x403fda
        v6 = v9;
        int32_t v13 = *(int32_t *)&g22; // 0x403fda
        int32_t v14 = v7; // 0x403fe1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g22 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x404011
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40401b
    int64_t * v17 = (int64_t *)v15; // 0x40401e
    uint64_t v18 = *v17; // 0x40401e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x404021
    int64_t result = *v19; // 0x404021
    int64_t v20; // 0x403f60
    uint64_t v21 = function_402d30(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404044
    if (v18 > v21) {
        // 0x4040bb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404057
    *v17 = v22;
    if (result != (int64_t)&g43) {
        // 0x404067
        free((int64_t *)result);
    }
    int64_t result2 = function_405150(v22); // 0x404081
    *v19 = result2;
    int64_t v23; // 0x403f60
    function_402d30(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4040bb
    *v3 = v5;
    return result2;
}
// Address range: 0x404100 - 0x404134
int64_t function_404100(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x404107
    int64_t result = function_405350(a1 == 0 ? (int64_t)&g44 : a1, 56); // 0x404126
    return result;
}
// Address range: 0x404140 - 0x40414f
int64_t function_404140(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g44 : a1); // 0x40414c
    return result;
}
// Address range: 0x404150 - 0x40415f
int64_t function_404150(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x404158
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g44;
}
// Address range: 0x404160 - 0x404193
int64_t function_404160(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 + 8 : a1 + 8; // 0x404179
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40417e
    uint32_t v3 = *v2; // 0x40417e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404182
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x4041a0 - 0x4041b3
int64_t function_4041a0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g44 + 4 : a1 + 4); // 0x4041ac
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x4041c0 - 0x4041eb
int64_t function_4041c0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g44 : a1; // 0x4041c8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4041e5
        abort();
        // UNREACHABLE
    }
    // 0x4041dc
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g44;
}
// Address range: 0x4041f0 - 0x404262
int64_t function_4041f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g44 : a5; // 0x404212
    int32_t * v2 = __errno_location(); // 0x40421b
    uint32_t v3 = *(int32_t *)v1; // 0x40423b
    int64_t result = function_402d30(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40424a
    return result;
}
// Address range: 0x404270 - 0x404351
int64_t function_404270(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g44 : a4; // 0x404292
    int32_t * v2 = __errno_location(); // 0x404298
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4042b7
    int32_t * v4 = (int32_t *)v1; // 0x4042ba
    int64_t v5 = function_402d30(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4042d5
    int64_t v6 = v5 + 1; // 0x4042da
    int64_t result = function_405150(v6); // 0x4042ef
    function_402d30(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404334
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40433d
    return result;
}
// Address range: 0x404360 - 0x40436a
int64_t function_404360(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404360
    return function_404270(a1, a2, 0, a3);
}
// Address range: 0x404370 - 0x404405
int64_t function_404370(void) {
    uint32_t v1 = *(int32_t *)&g22; // 0x404370
    int64_t v2 = v1; // 0x404370
    int64_t v3 = v2; // 0x404384
    if (v1 >= 2) {
        int64_t v4 = &g22;
        int64_t v5 = v4 + 16; // 0x4043a3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g56;
        while (v5 != (int64_t)g19 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4043a0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g56;
        }
    }
    int64_t v6 = v3; // 0x4043bd
    if (g20 != 0x60b380) {
        // 0x4043bf
        free((int64_t *)g20);
        g20 = 256;
        *(int64_t *)&g21 = (int64_t)&g43;
        v6 = &g56;
    }
    int64_t result = v6; // 0x4043e1
    if (g19 != &g20) {
        // 0x4043e3
        free(g19);
        *(int64_t *)&g19 = (int64_t)&g20;
        result = &g56;
    }
    // 0x4043f6
    *(int32_t *)&g22 = 1;
    return result;
}
// Address range: 0x404410 - 0x404421
int64_t function_404410(void) {
    // 0x404410
    int64_t v1; // 0x404410
    return function_403f60(v1, v1, -1, (int64_t *)&g44);
}
// Address range: 0x404430 - 0x40443a
int64_t function_404430(void) {
    // 0x404430
    int64_t v1; // 0x404430
    return function_403f60(v1, v1, v1, (int64_t *)&g44);
}
// Address range: 0x404440 - 0x404456
int64_t function_404440(int64_t a1) {
    // 0x404440
    return function_403f60(0, a1, -1, (int64_t *)&g44);
}
// Address range: 0x404460 - 0x404472
int64_t function_404460(int64_t a1, int64_t a2) {
    // 0x404460
    return function_403f60(0, a1, a2, (int64_t *)&g44);
}
// Address range: 0x404480 - 0x4044e8
int64_t function_404480(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404490
    return function_403f60((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4044f0 - 0x404554
int64_t function_4044f0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404500
    return function_403f60((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404560 - 0x40456c
int64_t function_404560(int64_t a1, int64_t a2) {
    // 0x404560
    return function_404480(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404570 - 0x40457f
int64_t function_404570(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404570
    return function_4044f0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404580 - 0x4045f0
int64_t function_404580(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x40458d
    int128_t v2 = __asm_movdqa(g45); // 0x404595
    int128_t v3 = __asm_movdqa(g46); // 0x40459d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4045b2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x4045c8
    uint32_t v6 = *v5; // 0x4045c8
    uint32_t v7 = (int32_t)a3 % 32; // 0x4045cd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403f60(0, a1, a2, &v4);
}
// Address range: 0x4045f0 - 0x4045fd
int64_t function_4045f0(int64_t a1, int64_t a2) {
    // 0x4045f0
    return function_404580(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404600 - 0x404611
int64_t function_404600(int64_t a1) {
    // 0x404600
    return function_404580(a1, -1, 58);
}
// Address range: 0x404620 - 0x40462a
int64_t function_404620(void) {
    // 0x404620
    int64_t v1; // 0x404620
    return function_404580(v1, v1, 58);
}
// Address range: 0x404630 - 0x40469e
int64_t function_404630(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40464a
    return function_403f60(a1, a3, -1, &v1);
}
// Address range: 0x4046a0 - 0x40470c
int64_t function_4046a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g44); // 0x4046a7
    int128_t v2 = __asm_movdqa(g45); // 0x4046af
    int128_t v3 = __asm_movdqa(g46); // 0x4046b7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x4046d9
    if (a2 == 0 || a3 == 0) {
        // 0x404707
        abort();
        // UNREACHABLE
    }
    // 0x4046ea
    return function_403f60(a1, a4, a5, &v4);
}
// Address range: 0x404710 - 0x404719
int64_t function_404710(void) {
    // 0x404710
    int64_t v1; // 0x404710
    return function_4046a0(v1, v1, v1, v1, -1);
}
// Address range: 0x404720 - 0x404737
int64_t function_404720(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404720
    return function_4046a0(0, a1, a2, a3, -1);
}
// Address range: 0x404740 - 0x404753
int64_t function_404740(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404740
    return function_4046a0(0, a1, a2, a3, a4);
}
// Address range: 0x404760 - 0x40476a
int64_t function_404760(void) {
    // 0x404760
    int64_t v1; // 0x404760
    return function_403f60(v1, v1, v1, &g18);
}
// Address range: 0x404770 - 0x404782
int64_t function_404770(int64_t a1, int64_t a2) {
    // 0x404770
    return function_403f60(0, a1, a2, &g18);
}
// Address range: 0x404790 - 0x4047a1
int64_t function_404790(void) {
    // 0x404790
    int64_t v1; // 0x404790
    return function_403f60(v1, v1, -1, &g18);
}
// Address range: 0x4047b0 - 0x4047c6
int64_t function_4047b0(int64_t a1) {
    // 0x4047b0
    return function_403f60(0, a1, -1, &g18);
}
// Address range: 0x4047d0 - 0x404add
int64_t function_4047d0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    if (a5 != 0) {
        // 0x404808
        *(int64_t *)a5 = 0;
    }
    if (a6 != 0) {
        // 0x404815
        *(int64_t *)a6 = 0;
    }
    int32_t v2 = a3;
    int64_t v3; // 0x4047d0
    int64_t v4 = a4 == 0 ? 0xffffffff : v3 & 0xffffffff;
    char * name; // 0x4047d0
    int64_t v5; // 0x4047d0
    int64_t v6; // 0x4047d0
    int64_t v7; // 0x4047d0
    int64_t v8; // 0x4047d0
    int64_t v9; // 0x4047d0
    int64_t v10; // 0x4047d0
    int64_t v11; // 0x4047d0
    int64_t v12; // 0x4047d0
    int64_t v13; // 0x4047d0
    int64_t v14; // 0x4047d0
    int32_t v15; // 0x4047d0
    if (a2 == 0) {
        // 0x4049a8
        v15 = v2;
        v11 = 0;
        v8 = 0;
        v10 = v4;
        if (*(char *)&v1 == 0) {
            goto lab_0x40487f;
        } else {
            // 0x4049b6
            v13 = function_405380(v1);
            goto lab_0x4049c8;
        }
    } else {
        int64_t v16 = a2 - v1; // 0x404829
        if (v16 != 0) {
            int64_t v17 = function_405350(v1, v16 + 1); // 0x4048d9
            *(char *)(v17 + v16) = 0;
            int64_t v18 = a2 + 1; // 0x4048eb
            v13 = v17;
            if (*(char *)v18 == 0) {
                goto lab_0x4049c8;
            } else {
                // 0x4048f6
                v7 = v18;
                if (v17 == 0) {
                    goto lab_0x404841;
                } else {
                    int64_t v19 = v18 == 0; // 0x404906
                    char * v20 = (char *)v17;
                    name = v20;
                    v5 = v19;
                    v12 = v17;
                    v9 = v18;
                    v6 = v19;
                    v14 = v17;
                    if (*v20 == 43) {
                        goto lab_0x4049e6;
                    } else {
                        goto lab_0x40491a;
                    }
                }
            }
        } else {
            int64_t v21 = a2 + 1; // 0x404832
            v7 = v21;
            v15 = v2;
            v11 = 0;
            v8 = 0;
            v10 = v4;
            if (*(char *)v21 == 0) {
                goto lab_0x40487f;
            } else {
                goto lab_0x404841;
            }
        }
    }
  lab_0x40487f:
    // 0x40487f
    *(int32_t *)a3 = v15;
    if (a4 != 0) {
        // 0x40488f
        *(int32_t *)a4 = (int32_t)v10;
    }
    int64_t v22 = v11; // 0x404896
    if (a5 != 0) {
        // 0x404898
        *(int64_t *)a5 = v11;
        v22 = 0;
    }
    int64_t v23 = v8; // 0x4048a1
    if (a6 != 0) {
        // 0x4048a3
        *(int64_t *)a6 = v8;
        v23 = 0;
    }
    // 0x4048aa
    free((int64_t *)v22);
    free((int64_t *)v23);
    return (int32_t)&g56 ^ (int32_t)&g56;
  lab_0x4049c8:
    // 0x4049c8
    v15 = v2;
    v11 = 0;
    v8 = 0;
    v10 = v4;
    if (v13 == 0) {
        goto lab_0x40487f;
    } else {
        int64_t v24 = a2 != 0; // 0x4049db
        char * v25 = (char *)v13;
        name = v25;
        v5 = v24;
        v12 = v13;
        v9 = 0;
        v6 = v24;
        v14 = v13;
        if (*v25 != 43) {
            goto lab_0x40491a;
        } else {
            goto lab_0x4049e6;
        }
    }
  lab_0x404841:
    // 0x404841
    v15 = v2;
    v11 = 0;
    v8 = 0;
    v10 = v4;
    if (v7 == 0) {
        goto lab_0x40487f;
    } else {
        goto lab_0x404850;
    }
  lab_0x404850:;
    int64_t v26 = 0;
    char * v27 = (char *)v7;
    char * name2 = v27; // 0x404854
    int32_t v28 = v2; // 0x404854
    int64_t v29 = v26; // 0x404854
    int64_t v30 = v7; // 0x404854
    int32_t v31 = v2; // 0x404854
    int64_t v32 = v26; // 0x404854
    int64_t v33 = v7; // 0x404854
    if (*v27 == 43) {
        goto lab_0x40495b;
    } else {
        goto lab_0x40485a;
    }
  lab_0x40491a:;
    struct passwd * v34 = getpwnam(name); // 0x404921
    v6 = v5;
    v14 = v12;
    int32_t v35; // bp-88, 0x4047d0
    if (v34 == NULL) {
        goto lab_0x4049e6;
    } else {
        int64_t v36 = (int64_t)v34; // 0x404921
        int32_t v37 = *(int32_t *)(v36 + 16); // 0x404934
        if (v5 != 0) {
            uint32_t gid = *(int32_t *)(v36 + 20); // 0x404a38
            int64_t v38 = gid; // 0x404a38
            struct group * v39 = getgrgid(gid); // 0x404a3f
            int64_t v40; // 0x4047d0
            if (v39 == NULL) {
                // 0x404ac8
                v40 = function_402b40(v38, (int64_t *)&v35);
            } else {
                // 0x404a49
                v40 = *(int64_t *)v39;
            }
            // 0x404a4c
            v1 = v40;
            int64_t v41 = function_405380(v40); // 0x404a4c
            endgrent();
            endpwent();
            v15 = v37;
            v11 = v12;
            v8 = v41;
            v10 = v38;
            goto lab_0x40487f;
        } else {
            // 0x404943
            endpwent();
            v15 = v37;
            v11 = v12;
            v8 = 0;
            v10 = v4;
            if (v9 == 0) {
                goto lab_0x40487f;
            } else {
                char * v42 = (char *)v9;
                name2 = v42;
                v28 = v37;
                v29 = v12;
                v30 = v9;
                v31 = v37;
                v32 = v12;
                v33 = v9;
                if (*v42 != 43) {
                    goto lab_0x40485a;
                } else {
                    goto lab_0x40495b;
                }
            }
        }
    }
  lab_0x4049e6:;
    // 0x4049e6
    int64_t v43; // 0x4047d0
    int64_t * v44; // 0x4047d0
    int64_t v45; // 0x4047d0
    if ((char)v6 == 0) {
        int64_t v46 = function_405410(v14, 0, 10, (int64_t *)&v35, (int64_t *)&g9, a6); // 0x404a7d
        if ((int32_t)v46 != 0) {
            goto lab_0x404ab0;
        } else {
            // 0x404a86
            if (v35 > -1) {
                // 0x404a99
                int64_t v47; // 0x4047d0
                int64_t v48 = v47;
                endpwent();
                int32_t v49; // 0x404a86
                v15 = v49;
                int64_t v50; // 0x4047d0
                v11 = v50;
                v8 = 0;
                v10 = v4;
                if (v48 == 0) {
                    goto lab_0x40487f;
                } else {
                    goto lab_0x404850;
                }
            } else {
                goto lab_0x404ab0;
            }
        }
    } else {
        // 0x4049ea
        endpwent();
        v45 = v14;
        v44 = NULL;
        v43 = (int64_t)"invalid spec";
        goto lab_0x4049f7;
    }
  lab_0x40495b:;
    int64_t v51 = function_405410(v33, 0, 10, (int64_t *)&v35, (int64_t *)&g9, a6); // 0x404970
    int64_t v52; // 0x4047d0
    int64_t v53; // 0x4047d0
    int64_t v54; // 0x4047d0
    int32_t v55; // 0x4047d0
    if ((int32_t)v51 != 0) {
        goto lab_0x40498c;
    } else {
        // 0x404979
        v55 = v31;
        v54 = v32;
        v52 = v33;
        v53 = v35;
        if (v35 > -1) {
            goto lab_0x40486f;
        } else {
            goto lab_0x40498c;
        }
    }
  lab_0x40485a:;
    struct group * v56 = getgrnam(name2); // 0x40485d
    v31 = v28;
    v32 = v29;
    v33 = v30;
    if (v56 == NULL) {
        goto lab_0x40495b;
    } else {
        // 0x40486b
        v55 = v28;
        v54 = v29;
        v52 = v30;
        v53 = (int64_t)*(int32_t *)((int64_t)v56 + 16);
        goto lab_0x40486f;
    }
  lab_0x40498c:
    // 0x40498c
    endgrent();
    v45 = v32;
    v44 = (int64_t *)function_405380(v33);
    v43 = (int64_t)"invalid group";
    goto lab_0x4049f7;
  lab_0x404ab0:
    // 0x404ab0
    endpwent();
    v45 = v14;
    v44 = NULL;
    v43 = (int64_t)"invalid user";
    goto lab_0x4049f7;
  lab_0x4049f7:
    // 0x4049f7
    free((int64_t *)v45);
    free(v44);
    return (int64_t)dcgettext(NULL, (char *)v43, 5);
  lab_0x40486f:
    // 0x40486f
    endgrent();
    v15 = v55;
    v11 = v54;
    v8 = function_405380(v52);
    v10 = v53;
    goto lab_0x40487f;
}
// Address range: 0x404ae0 - 0x404bad
int64_t function_404ae0(int64_t a1, int64_t * a2, int32_t a3, int32_t a4, int32_t a5) {
    int64_t v1 = a5;
    int64_t v2 = a4;
    int64_t v3 = (int64_t)a2;
    if (a3 == 0) {
        // 0x404b90
        return function_4047d0(a1, 0, v3, 0, v2, v1);
    }
    int64_t v4 = a3;
    char * str = (char *)a1; // 0x404b0b
    char * found_char_pos = strchr(str, 58); // 0x404b0b
    int64_t result = function_4047d0(a1, (int64_t)found_char_pos, v3, v4, v2, v1); // 0x404b25
    if (found_char_pos != NULL) {
        // 0x404b74
        return result;
    }
    if (result == 0) {
        // 0x404b74
        return 0;
    }
    char * found_char_pos2 = strchr(str, 46); // 0x404b44
    if (found_char_pos2 == NULL || function_4047d0(a1, (int64_t)found_char_pos2, v3, v4, v2, v1) != 0) {
        // 0x404b74
        return 0x100000000 * result >> 32;
    }
    // 0x404b74
    return 0;
}
// Address range: 0x404bb0 - 0x404f8d
int64_t function_404bb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404c48
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404bcc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404be6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404c2b
    if (a6 < 10) {
        // 0x404c3a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404d32
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404f90 - 0x404fb0
int64_t function_404f90(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404f90
    if (a5 == 0) {
        // 0x404fab
        return function_404bb0(a1, a2, a3, a4, a5, 0, (int64_t)&g56);
    }
    int64_t v1 = 0; // 0x404f97
    v1++;
    int64_t v2 = v1; // 0x404fa9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404fa0
        v1++;
        v2 = v1;
    }
    // 0x404fab
    return function_404bb0(a1, a2, a3, a4, a5, v2, (int64_t)&g56);
}
// Address range: 0x404fb0 - 0x405010
int64_t function_404fb0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404fb0
    int64_t v3 = &v2; // 0x404fb0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404fe3
    int64_t v6; // 0x404fcd
    int64_t * v7; // 0x404feb
    int64_t v8; // 0x404feb
    int64_t v9; // 0x404ff7
    if (v5 < 48) {
        // 0x404fc0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x405003
            break;
        }
    } else {
        // 0x404feb
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x405003
            break;
        }
    }
    int64_t v10 = 10; // 0x404fe1
    while (v4 != 9) {
        // 0x404fd9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404fc0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x405003
                break;
            }
        } else {
            // 0x404feb
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x405003
                break;
            }
        }
        // 0x404fd9
        v10 = 10;
    }
    // 0x405003
    return function_404bb0(a1, a2, a3, a4, v3, v10, (int64_t)&g56);
}
// Address range: 0x405010 - 0x4050cc
int64_t function_405010(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x405010
    int64_t v1; // bp-168, 0x405010
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405010
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405010
    int64_t v8; // 0x405010
    int64_t v9; // bp-56, 0x405010
    int64_t v10; // 0x405075
    int64_t v11; // 0x405099
    if ((int32_t)v6 < 48) {
        // 0x405060
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4050b0
            break;
        }
    } else {
        // 0x405092
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4050b0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40508a
    int64_t v13 = 10; // 0x40508a
    while (v5 != 9) {
        // 0x40508c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405060
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4050b0
                break;
            }
        } else {
            // 0x405092
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4050b0
                break;
            }
        }
        // 0x405082
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4050b0
    int64_t v14; // bp-136, 0x405010
    int64_t result = function_404bb0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g56); // 0x4050bf
    return result;
}
// Address range: 0x4050d0 - 0x405144
int64_t function_4050d0(int64_t a1) {
    // 0x4050d0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405133
    return fputs_unlocked(v1, g27);
}
// Address range: 0x405150 - 0x40516a
int64_t function_405150(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405154
    if (size != 0 != (mem == NULL)) {
        // 0x405163
        return (int64_t)mem;
    }
    // 0x405165
    function_4053a0(size);
    // UNREACHABLE
}
// Address range: 0x405170 - 0x405191
int64_t function_405170(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405173
    int64_t v2 = v1; // 0x405173
    if (v2 < 0) {
        // 0x40518b
        function_4053a0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405189
        return function_405150(v2);
    }
    // 0x40518b
    function_4053a0(v2);
    // UNREACHABLE
}
// Address range: 0x4051a0 - 0x4051a2
int64_t function_4051a0(void) {
    // 0x4051a0
    int64_t v1; // 0x4051a0
    return function_405150(v1);
}
// Address range: 0x4051b0 - 0x4051e6
int64_t function_4051b0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4051d8
        free(v1);
        return (int32_t)&g56 ^ (int32_t)&g56;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4051c1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4051d0
        return (int64_t)mem;
    }
    // 0x4051e1
    function_4053a0(a1);
    // UNREACHABLE
}
// Address range: 0x4051f0 - 0x405211
int64_t function_4051f0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4051f3
    int64_t v2 = v1; // 0x4051f3
    if (v2 < 0) {
        // 0x40520b
        function_4053a0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405209
        return function_4051b0(a1, v2);
    }
    // 0x40520b
    function_4053a0(a1);
    // UNREACHABLE
}
// Address range: 0x405220 - 0x4052a6
int64_t function_405220(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40527b
            function_4053a0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4051b0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405263
    if (a2 == 0) {
        // 0x405288
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405268
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40527b
        function_4053a0(a1);
        // UNREACHABLE
    }
    // 0x40524a
    *(int64_t *)a2 = v2;
    return function_4051b0(a1, v2 * a3);
}
// Address range: 0x4052b0 - 0x405300
int64_t function_4052b0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4052b0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4052fa
            function_4053a0(a1);
            // UNREACHABLE
        }
        // 0x4052d2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4051b0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4052e5
        *(int64_t *)a2 = 128;
        return function_4051b0(0, 128);
    }
    // 0x4052f8
    if (a2 < 0) {
        // 0x4052fa
        function_4053a0(a1);
        // UNREACHABLE
    }
    // 0x4052d2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4051b0(a1, v1);
}
// Address range: 0x405300 - 0x405317
int64_t function_405300(int64_t a1, int64_t a2) {
    // 0x405300
    return (int64_t)memset((int64_t *)function_405150(a1), 0, (int32_t)a1);
}
// Address range: 0x405320 - 0x40534e
int64_t function_405320(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405327
    if ((int64_t)v1 < 0) {
        // 0x405349
        function_4053a0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405349
        function_4053a0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40533a
    if (mem != NULL) {
        // 0x405344
        return (int64_t)mem;
    }
    // 0x405349
    function_4053a0(nmemb);
    // UNREACHABLE
}
// Address range: 0x405350 - 0x405378
int64_t function_405350(int64_t a1, int64_t a2) {
    int64_t v1 = function_405150(a2); // 0x40535f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405380 - 0x405393
int64_t function_405380(int64_t str) {
    // 0x405380
    return function_405350(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4053a0 - 0x4053d1
int64_t function_4053a0(int64_t a1) {
    // 0x4053a0
    error(g17, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4053e0 - 0x405407
int64_t function_4053e0(void) {
    // 0x4053e0
    int64_t v1; // 0x4053e0
    int64_t v2 = function_406d00(v1, v1, v1); // 0x4053e1
    if ((int32_t)v2 != -1 || *__errno_location() != 12) {
        // 0x4053ed
        return v2 & 0xffffffff;
    }
    // 0x405402
    function_4053a0(v1);
    // UNREACHABLE
}
// Address range: 0x405410 - 0x40591f
int64_t function_405410(int64_t str, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x40541e
    if (base >= 37) {
        // 0x4058bc
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x405442
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x405472
    int64_t v3 = str; // 0x405477
    char v4 = c; // 0x405477
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x40546c
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x405468
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x405479
    if (v4 == 45) {
        // 0x4054b3
        return 4;
    }
    // 0x40547e
    int64_t v6; // bp-64, 0x405410
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x40543e
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x405484
    int64_t * v7 = (int64_t *)endptr; // 0x405489
    int64_t v8 = *v7; // 0x405489
    char v9; // 0x405410
    int64_t v10; // 0x405410
    int64_t v11; // 0x405410
    int64_t v12; // 0x405410
    int64_t v13; // 0x405410
    int64_t v14; // 0x405410
    int64_t v15; // 0x405410
    if (v8 == str) {
        // 0x4054e0
        if (c == 0 || str2 == NULL) {
            // 0x4054b3
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x405501
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x4054b3
            return 4;
        }
        goto lab_0x40550f;
    } else {
        int32_t v16 = *v1; // 0x405494
        int64_t v17 = 0; // 0x40549a
        if (v16 != 0) {
            // 0x4054c8
            v17 = 1;
            if (v16 != 34) {
                // 0x4054b3
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x405484
        v13 = v18;
        v10 = v17;
        if (str2 == NULL) {
            goto lab_0x4054b0;
        } else {
            char c2 = *(char *)v8; // 0x4054a3
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x405603
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40550f;
                } else {
                    goto lab_0x405615;
                }
            } else {
                goto lab_0x4054b0;
            }
        }
    }
  lab_0x40550f:;
    unsigned char v19 = v9 - 69;
    int64_t v20 = 1024; // 0x405517
    int64_t v21 = 1; // 0x405517
    int64_t v22; // 0x405410
    int64_t v23; // 0x405410
    int64_t v24; // 0x405410
    int64_t v25; // 0x405410
    int64_t v26; // 0x405410
    int64_t v27; // 0x405410
    int64_t v28; // 0x405410
    int64_t v29; // 0x405410
    int64_t v30; // 0x405410
    int64_t v31; // 0x405410
    int64_t v32; // 0x405410
    int64_t v33; // 0x405410
    int64_t v34; // 0x405410
    int64_t v35; // 0x405410
    int64_t v36; // 0x405410
    int64_t v37; // 0x405410
    int64_t v38; // 0x405410
    int64_t v39; // 0x405410
    int64_t v40; // 0x405410
    int64_t v41; // 0x405410
    if (v19 < 48) {
        // 0x405519
        v20 = 1024;
        v21 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40557a;
        } else {
            // 0x40552c
            v20 = 1024;
            v21 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x40557a;
            } else {
                // 0x405548
                v20 = 1000;
                v21 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x40557a;
                    }
                    case 105: {
                        char v42 = *(char *)(v8 + 2); // 0x4057a9
                        v20 = 1024;
                        v21 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x40557a;
                    }
                    default: {
                        // 0x40555d
                        g53 = v19;
                        v20 = 1000;
                        v21 = 2;
                        v24 = 1024;
                        v36 = 1;
                        v23 = v14;
                        v22 = v11;
                        v37 = 1;
                        v25 = 1024;
                        v38 = 1;
                        v15 = v14;
                        v12 = v11;
                        v39 = 1;
                        v26 = 1024;
                        v40 = 1;
                        v27 = 1024;
                        v41 = 1;
                        v28 = 1024;
                        v32 = 1;
                        v29 = 1024;
                        v33 = 1;
                        v30 = 1024;
                        v34 = 1;
                        v31 = 1024;
                        v35 = 1;
                        switch (v9) {
                            case 69: {
                                goto lab_0x40571b;
                            }
                            case 70: {
                                goto lab_0x405615;
                            }
                            case 71: {
                                goto lab_0x405753;
                            }
                            case 72: {
                                goto lab_0x405615;
                            }
                            case 73: {
                                goto lab_0x405615;
                            }
                            case 74: {
                                goto lab_0x405615;
                            }
                            case 75: {
                                goto lab_0x4055dc;
                            }
                            case 76: {
                                goto lab_0x405615;
                            }
                            case 77: {
                                goto lab_0x40559e;
                            }
                            case 78: {
                                goto lab_0x405615;
                            }
                            case 79: {
                                goto lab_0x405615;
                            }
                            case 80: {
                                goto lab_0x4056e8;
                            }
                            case 81: {
                                goto lab_0x405615;
                            }
                            case 82: {
                                goto lab_0x405615;
                            }
                            case 83: {
                                goto lab_0x405615;
                            }
                            case 84: {
                                goto lab_0x4056b8;
                            }
                            case 85: {
                                goto lab_0x405615;
                            }
                            case 86: {
                                goto lab_0x405615;
                            }
                            case 87: {
                                goto lab_0x405615;
                            }
                            case 88: {
                                goto lab_0x405615;
                            }
                            case 89: {
                                goto lab_0x405686;
                            }
                            case 90: {
                                goto lab_0x40564b;
                            }
                            case 91: {
                                goto lab_0x405615;
                            }
                            case 92: {
                                goto lab_0x405615;
                            }
                            case 93: {
                                goto lab_0x405615;
                            }
                            case 94: {
                                goto lab_0x405615;
                            }
                            case 95: {
                                goto lab_0x405615;
                            }
                            case 96: {
                                goto lab_0x405615;
                            }
                            case 97: {
                                goto lab_0x405615;
                            }
                            case 98: {
                                goto lab_0x40562f;
                            }
                            case 99: {
                                goto lab_0x4055b8;
                            }
                            case 100: {
                                goto lab_0x405615;
                            }
                            case 101: {
                                goto lab_0x405615;
                            }
                            case 102: {
                                goto lab_0x405615;
                            }
                            case 103: {
                                goto lab_0x405753;
                            }
                            case 104: {
                                goto lab_0x405615;
                            }
                            case 105: {
                                goto lab_0x405615;
                            }
                            case 106: {
                                goto lab_0x405615;
                            }
                            case 107: {
                                goto lab_0x4055dc;
                            }
                            case 108: {
                                goto lab_0x405615;
                            }
                            case 109: {
                                goto lab_0x40559e;
                            }
                            case 110: {
                                goto lab_0x405615;
                            }
                            case 111: {
                                goto lab_0x405615;
                            }
                            case 112: {
                                goto lab_0x405615;
                            }
                            case 113: {
                                goto lab_0x405615;
                            }
                            case 114: {
                                goto lab_0x405615;
                            }
                            case 115: {
                                goto lab_0x405615;
                            }
                            case 116: {
                                goto lab_0x4056b8;
                            }
                            default: {
                                goto lab_0x40557a;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40557a;
    }
  lab_0x4054b0:
    // 0x4054b0
    *a4 = v13;
    // 0x4054b3
    return v10 & 0xffffffff;
  lab_0x40557a:
    // 0x40557a
    g54 = v9 - 66;
    v24 = v20;
    v36 = v21;
    v23 = v14;
    v22 = v11;
    v37 = v21;
    v25 = v20;
    v38 = v21;
    v15 = v14;
    v12 = v11;
    v39 = v21;
    v26 = v20;
    v40 = v21;
    v27 = v20;
    v41 = v21;
    v28 = v20;
    v32 = v21;
    v29 = v20;
    v33 = v21;
    v30 = v20;
    v34 = v21;
    v31 = v20;
    v35 = v21;
    int64_t v43; // 0x405410
    switch (v9) {
        case 66: {
            // 0x405774
            v43 = v21;
            if (v14 >= 0x40000000000000) {
                goto lab_0x4055e7;
            } else {
                // 0x405781
                v23 = 1024 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x4055b8;
            }
        }
        case 69: {
            goto lab_0x40571b;
        }
        case 71: {
            goto lab_0x405753;
        }
        case 75: {
            goto lab_0x4055dc;
        }
        case 77: {
            goto lab_0x40559e;
        }
        case 80: {
            goto lab_0x4056e8;
        }
        case 84: {
            goto lab_0x4056b8;
        }
        case 89: {
            goto lab_0x405686;
        }
        case 90: {
            goto lab_0x40564b;
        }
        case 98: {
            goto lab_0x40562f;
        }
        case 99: {
            goto lab_0x4055b8;
        }
        case 103: {
            goto lab_0x405753;
        }
        case 107: {
            goto lab_0x4055dc;
        }
        case 109: {
            goto lab_0x40559e;
        }
        case 116: {
            goto lab_0x4056b8;
        }
        case 119: {
            // 0x405620
            v43 = v21;
            if (v14 < 0) {
                goto lab_0x4055e7;
            } else {
                // 0x405625
                v23 = 2 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x4055b8;
            }
        }
        default: {
            goto lab_0x405615;
        }
    }
  lab_0x40571b:;
    uint128_t v44 = (int128_t)v14 * (int128_t)v30; // 0x405733
    int64_t v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
    int64_t v46 = v44 > 0xffffffffffffffff ? 1 : 0;
    int32_t v47 = 5; // 0x40573f
    int64_t v48 = v45; // 0x405742
    int64_t v49 = v34; // 0x405742
    int64_t v50 = v46; // 0x405742
    int32_t v51 = v47; // 0x405742
    int64_t v52 = v46; // 0x405742
    while (v47 != 0) {
        // 0x405730
        v44 = (int128_t)v45 * (int128_t)v30;
        v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
        v46 = v44 > 0xffffffffffffffff ? 1 : v52;
        v47 = v51 - 1;
        v48 = v45;
        v49 = v34;
        v50 = v46;
        v51 = v47;
        v52 = v46;
    }
    goto lab_0x405674;
  lab_0x405753:
    // 0x405753
    v23 = -1;
    v22 = 1;
    v37 = v35;
    if ((int128_t)v31 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x40575e
        int128_t v53; // 0x405759
        uint128_t v54; // 0x405759
        uint128_t v55 = (v54 & 0xffffffffffffffff) * v53; // 0x40575e
        v23 = -1;
        v22 = 1;
        int64_t v56; // 0x405410
        v37 = v56;
        if (v55 <= 0xffffffffffffffff) {
            uint128_t v57 = (v55 & 0xffffffffffffffff) * v53; // 0x405763
            v23 = -1;
            v22 = 1;
            v37 = v56;
            if (v57 <= 0xffffffffffffffff) {
                // 0x405768
                v23 = v57;
                int64_t v58; // 0x405410
                v22 = v58 & 0xffffffff;
                v37 = v56;
            }
        }
    }
    goto lab_0x4055b8;
  lab_0x4055dc:;
    uint128_t v61 = (int128_t)v25 * (int128_t)v14; // 0x4055df
    v23 = v61;
    v22 = v11;
    v37 = v38;
    v43 = v38;
    if (v61 <= 0xffffffffffffffff) {
        goto lab_0x4055b8;
    } else {
        goto lab_0x4055e7;
    }
  lab_0x40559e:;
    int128_t v62 = v24; // 0x4055a4
    uint128_t v63 = v62 * (int128_t)v14; // 0x4055a4
    v43 = v36;
    if (v63 > 0xffffffffffffffff) {
        goto lab_0x4055e7;
    } else {
        uint128_t v64 = (v63 & 0xffffffffffffffff) * v62; // 0x4055a9
        v43 = v36;
        if (v64 > 0xffffffffffffffff) {
            goto lab_0x4055e7;
        } else {
            // 0x4055ae
            v23 = v64;
            v22 = v11;
            v37 = v36;
            goto lab_0x4055b8;
        }
    }
  lab_0x4056e8:;
    uint128_t v65 = (int128_t)v14 * (int128_t)v29; // 0x4056fb
    int64_t v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
    int64_t v67 = v65 > 0xffffffffffffffff ? 1 : 0;
    int32_t v68 = 4; // 0x405707
    v48 = v66;
    v49 = v33;
    v50 = v67;
    int32_t v69 = v68; // 0x40570a
    int64_t v70 = v67; // 0x40570a
    while (v68 != 0) {
        // 0x4056f8
        v65 = (int128_t)v66 * (int128_t)v29;
        v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
        v67 = v65 > 0xffffffffffffffff ? 1 : v70;
        v68 = v69 - 1;
        v48 = v66;
        v49 = v33;
        v50 = v67;
        v69 = v68;
        v70 = v67;
    }
    goto lab_0x405674;
  lab_0x4056b8:;
    uint128_t v71 = (int128_t)v14 * (int128_t)v28; // 0x4056cb
    int64_t v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
    int64_t v73 = v71 > 0xffffffffffffffff ? 1 : 0;
    int32_t v74 = 3; // 0x4056d7
    v48 = v72;
    v49 = v32;
    v50 = v73;
    int32_t v75 = v74; // 0x4056da
    int64_t v76 = v73; // 0x4056da
    while (v74 != 0) {
        // 0x4056c8
        v71 = (int128_t)v72 * (int128_t)v28;
        v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
        v73 = v71 > 0xffffffffffffffff ? 1 : v76;
        v74 = v75 - 1;
        v48 = v72;
        v49 = v32;
        v50 = v73;
        v75 = v74;
        v76 = v73;
    }
    goto lab_0x405674;
  lab_0x405686:;
    uint128_t v77 = (int128_t)v14 * (int128_t)v27; // 0x40569b
    int64_t v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
    int64_t v79 = v77 > 0xffffffffffffffff ? 1 : 0;
    int32_t v80 = 7; // 0x4056a7
    v48 = v78;
    v49 = v41;
    v50 = v79;
    int32_t v81 = v80; // 0x4056aa
    int64_t v82 = v79; // 0x4056aa
    while (v80 != 0) {
        // 0x405698
        v77 = (int128_t)v78 * (int128_t)v27;
        v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
        v79 = v77 > 0xffffffffffffffff ? 1 : v82;
        v80 = v81 - 1;
        v48 = v78;
        v49 = v41;
        v50 = v79;
        v81 = v80;
        v82 = v79;
    }
    goto lab_0x405674;
  lab_0x40564b:;
    uint128_t v83 = (int128_t)v14 * (int128_t)v26; // 0x405663
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 6; // 0x40566f
    int32_t v87 = v86; // 0x405672
    int64_t v88 = v85; // 0x405672
    v48 = v84;
    v49 = v40;
    v50 = v85;
    while (v86 != 0) {
        // 0x405660
        v83 = (int128_t)v84 * (int128_t)v26;
        v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
        v85 = v83 > 0xffffffffffffffff ? 1 : v88;
        v86 = v87 - 1;
        v87 = v86;
        v88 = v85;
        v48 = v84;
        v49 = v40;
        v50 = v85;
    }
    goto lab_0x405674;
  lab_0x40562f:
    // 0x40562f
    v43 = v39;
    if (v14 >= 0x80000000000000) {
        goto lab_0x4055e7;
    } else {
        // 0x405638
        v23 = 512 * v14;
        v22 = v11;
        v37 = v39;
        goto lab_0x4055b8;
    }
  lab_0x4055b8:;
    int64_t v59 = v22;
    int64_t v60 = (0x100000000 * v37 >> 32) + v8; // 0x4055bd
    *v7 = v60;
    v13 = v23;
    v10 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x4054b0;
  lab_0x405615:
    // 0x405615
    *a4 = v15;
    // 0x4054b3
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x4055e7:
    // 0x4055e7
    v23 = -1;
    v22 = 1;
    v37 = v43;
    goto lab_0x4055b8;
  lab_0x405674:
    // 0x405674
    v23 = v48;
    v22 = (v50 | v11) & 0xffffffff;
    v37 = v49;
    goto lab_0x4055b8;
}
// Address range: 0x405920 - 0x405f3c
int64_t function_405920(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40593f
    int64_t v2 = *v1; // 0x40593f
    char * str2 = (char *)v2; // 0x40594c
    char c = *str2; // 0x40594c
    int64_t v3 = v2; // 0x405978
    int64_t v4 = 0; // 0x405920
    int32_t v5; // 0x405920
    int64_t v6; // 0x405920
    int64_t v7; // 0x405920
    int64_t v8; // 0x405920
    int64_t v9; // 0x405920
    int64_t v10; // 0x405920
    int64_t v11; // 0x405920
    int64_t v12; // 0x405920
    int64_t v13; // 0x405920
    int64_t str3; // 0x405920
    int64_t v14; // 0x405920
    int64_t v15; // 0x405920
    int64_t v16; // 0x405920
    int64_t v17; // 0x405920
    int32_t v18; // 0x405920
    int32_t v19; // 0x405920
    int32_t v20; // 0x405920
    int32_t v21; // 0x405920
    int32_t v22; // 0x405920
    int32_t v23; // 0x405920
    int32_t v24; // 0x405920
    int32_t v25; // 0x405920
    int32_t v26; // 0x405920
    int32_t v27; // 0x405920
    int32_t v28; // 0x405920
    int32_t v29; // 0x405920
    int64_t nmemb; // 0x405920
    int64_t v30; // 0x405920
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40597c
            while (v31 != 0 == (v31 != 61)) {
                // 0x405978
                v3++;
                v31 = *(char *)v3;
            }
            // 0x405988
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40598e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405958
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4059bc
                int64_t v34; // 0x405920
                int64_t v35; // 0x405920
                if (strncmp(str, str2, n) == 0) {
                    // 0x4059c5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405b40;
                    }
                }
                int64_t v36 = a4 + 32; // 0x4059d6
                int64_t v37 = *(int64_t *)v36; // 0x4059da
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4059b0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4059c5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405b40;
                        }
                    }
                    // 0x4059d6
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
                  lab_0x405a26:
                    // 0x405a26
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
                        goto lab_0x405a80;
                    } else {
                        if (v11 == 0) {
                            // 0x405bf0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x405a80;
                        } else {
                            if (v39 == 0) {
                                // 0x405ba0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x405a4a;
                                } else {
                                    // 0x405bac
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x405a4a;
                                    } else {
                                        // 0x405bba
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x405a4a;
                                        } else {
                                            goto lab_0x405a80;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x405a4a;
                            }
                        }
                    }
                }
              lab_0x405a91:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405c66
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405e12
                            flockfile(g29);
                            int64_t v41 = *v1; // 0x405e32
                            __fprintf_chk(g29, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405e7f
                            int64_t v43 = (int64_t)g29;
                            int64_t v44 = v43; // 0x405e99
                            int64_t v45; // 0x405e9b
                            if (*(char *)v42 != 0) {
                                // 0x405e9b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g29;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405e93
                            while (v17 + nmemb != v42) {
                                // 0x405e95
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405e9b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g29;
                                }
                                // 0x405e88
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405ec0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g29);
                            v40 = *v1;
                        } else {
                            // 0x405c74
                            __fprintf_chk(g29, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405dcf
                        free((int64_t *)v17);
                    }
                    // 0x405cc9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405ce0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x405b8e
                    return 63;
                }
                // 0x405ab0
                v5 = v39;
                if (v13 != 0) {
                    // 0x405b34
                    v35 = v13;
                    v34 = v25;
                  lab_0x405b40:;
                    int32_t * v49 = (int32_t *)a7; // 0x405b50
                    uint32_t v50 = *v49; // 0x405b50
                    int64_t v51 = v50; // 0x405b50
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x405b5a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405b63
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405d8f
                                __fprintf_chk(g29, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405d3a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x405b8e
                            return 63;
                        }
                        // 0x405bd8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405eef
                                    __fprintf_chk(g29, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405ded
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405e00
                                // 0x405b8e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405cfe
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405d12
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x405b7b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x405b7e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x405b82
                    int64_t result = v59; // 0x405b88
                    if (v58 != 0) {
                        // 0x405b8a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x405b8e
                    return result;
                }
            } else {
                // 0x40598e
                v5 = v32;
            }
            // break -> 0x405ab5
            break;
        }
    }
    // 0x405ab5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x405acd
        if (*(char *)(v60 + 1) != 45) {
            // 0x405ad7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x405b8e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405c19
        __fprintf_chk(g29, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405b06
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405b16
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x405a80:
    // 0x405a80
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x405a80
    int64_t v63 = *(int64_t *)v62; // 0x405a84
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x405a91
        goto lab_0x405a91;
    }
    goto lab_0x405a26;
  lab_0x405a4a:
    // 0x405a4a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405920
    int32_t v65; // 0x405920
    int32_t v66; // 0x405920
    if (v27 != 0) {
        goto lab_0x405a80;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405c00
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x405a80;
            } else {
                goto lab_0x405a71;
            }
        } else {
            // 0x405a65
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405d5c
                int64_t v67 = (int64_t)mem; // 0x405d5c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x405a80;
                } else {
                    // 0x405d6f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x405a71;
                }
            } else {
                goto lab_0x405a71;
            }
        }
    }
  lab_0x405a71:
    // 0x405a71
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x405a80;
}
// Address range: 0x405f40 - 0x406506
int64_t function_405f40(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405f61
    if (v3 < 1) {
        // 0x40611e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405f5d
    int32_t v5 = *(int32_t *)a7; // 0x405f69
    uint64_t v6 = a1 & 0xffffffff; // 0x405f6b
    int64_t v7 = v2; // 0x405f70
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405f73
    *v8 = 0;
    int64_t v9; // 0x405f40
    int64_t v10; // 0x405f40
    int64_t v11; // 0x405f40
    int64_t v12; // 0x405f40
    int64_t str; // 0x405f40
    int64_t v13; // 0x405f40
    int64_t v14; // 0x405f40
    int64_t v15; // 0x405f40
    int64_t v16; // 0x405f40
    int64_t v17; // 0x405f40
    int32_t v18; // 0x405f40
    char v19; // 0x405f40
    if (v5 == 0) {
        // 0x406158
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405f8a;
    } else {
        // 0x405f83
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405fd0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405fd3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x406098;
            } else {
                int64_t v22 = v7 + 1; // 0x405fe6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405ff6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x4060ac;
                } else {
                    goto lab_0x406008;
                }
            }
        } else {
            goto lab_0x405f8a;
        }
    }
  lab_0x405f8a:
    // 0x405f8a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405f90
    *v24 = 0;
    int64_t v25; // 0x405f40
    int64_t v26; // 0x405f40
    int64_t v27; // 0x405f40
    switch (*(char *)&v2) {
        case 45: {
            // 0x406080
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40608d;
        }
        case 43: {
            // 0x406390
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40608d;
        }
        default: {
            // 0x405fac
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40630f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406428
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40608d;
                } else {
                    // 0x40631d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405fba;
                }
            } else {
                goto lab_0x405fba;
            }
        }
    }
  lab_0x406098:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40609f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x406008;
    } else {
        goto lab_0x4060ac;
    }
  lab_0x405fba:
    // 0x405fba
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40608d;
  lab_0x40608d:
    // 0x40608d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x406098;
  lab_0x406008:;
    uint32_t v30 = *(int32_t *)a7; // 0x406008
    int64_t v31 = v30; // 0x406008
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40600a
    if ((int64_t)*v32 > v31) {
        // 0x40600f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x406012
    if (*v33 > v30) {
        // 0x406017
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40601a
    int64_t v35 = v31; // 0x40601e
    int64_t v36 = v15; // 0x40601e
    int64_t v37; // 0x405f40
    int64_t v38; // 0x405f40
    int64_t v39; // 0x405f40
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x406188
        int64_t v41 = v40; // 0x406188
        v2 = v41;
        int64_t v42; // 0x405f40
        if (*v33 == v40) {
            // 0x406370
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x406378
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x406194
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x4061a8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4061b1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4061ba
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4061d1
            int64_t v47 = v45 & 0xffffffff; // 0x4061d5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4061de
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4061e4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4061e6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4061c0
            int64_t v49 = v48 & 0xffffffff; // 0x4061c0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4061d1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4061de
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4061e4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4061e6;
                    }
                }
                // 0x4061c0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x406388
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4061e6;
    } else {
        goto lab_0x406024;
    }
  lab_0x4060ac:
    // 0x4060ac
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x4060af
    int64_t v51 = v12; // 0x4060af
    int64_t v52 = v14; // 0x4060af
    if (*(char *)v10 == 0) {
        goto lab_0x406008;
    } else {
        goto lab_0x4060b5;
    }
  lab_0x406024:;
    int32_t v53 = v35; // 0x406024
    int64_t v54; // 0x405f40
    int64_t v55; // 0x405f40
    int64_t v56; // 0x405f40
    int64_t v57; // 0x405f40
    int64_t v58; // 0x405f40
    int64_t v59; // 0x405f40
    char * v60; // 0x405f40
    int64_t v61; // 0x405f40
    int64_t v62; // 0x406039
    int64_t v63; // 0x405f40
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x406173
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x406176;
    } else {
        // 0x40602c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405f40
        int64_t v66 = v65 ? -1 : 1; // 0x406040
        int64_t v67 = (int64_t)"--"; // 0x405f40
        int64_t v68 = v62; // 0x405f40
        int64_t v69 = 3; // 0x406040
        unsigned char v70 = *(char *)v68; // 0x406040
        char v71 = *(char *)v67; // 0x406040
        char v72 = v71; // 0x406040
        bool v73 = false; // 0x406040
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
            // 0x406130
            if (*(char *)v62 == 45) {
                // 0x4061f0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4061f0
                if (c == 0) {
                    goto lab_0x40613a;
                } else {
                    // 0x4061fd
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x406280;
                    } else {
                        if (c == 45) {
                            // 0x406463
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4062d5;
                        } else {
                            // 0x40620e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x406280;
                            } else {
                                // 0x406213
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406234;
                                } else {
                                    // 0x40621a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x406280;
                                    } else {
                                        goto lab_0x406234;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40613a;
            }
        } else {
            uint32_t v75 = *v33; // 0x406050
            v2 = v75;
            int32_t v76 = *v32; // 0x406053
            int64_t v77 = v35 + 1; // 0x406056
            int32_t v78 = v77; // 0x406059
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4063c0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x406067
                    v2 = (int64_t)*v33;
                }
            }
            // 0x406075
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x406176;
        }
    }
  lab_0x4060b5:;
    // 0x4060b5
    int64_t v79; // bp-104, 0x405f40
    int64_t v80 = &v79; // 0x405f4a
    int64_t v81 = v50 + 1; // 0x4060b5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4060bc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4060c1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4060c5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4060c9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4060d1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4060d6
    int32_t c2 = v84; // 0x4060d6
    char * found_char_pos = strchr(str2, c2); // 0x4060d6
    int64_t v87 = *v82; // 0x4060db
    v2 = v87;
    int64_t v88 = *v85; // 0x4060e5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4060f0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4063e0
            __fprintf_chk(g29, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4063ad
        *(int32_t *)(v1 + 8) = c2;
        // 0x40611e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4060d6
    char v91 = *(char *)(v90 + 1); // 0x40610b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4060c5
        if (v91 != 58) {
            // 0x40611e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406334
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406438
                *v8 = 0;
            } else {
                // 0x40641c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40635e
            *v83 = 0;
            // 0x40611e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40633e
        if (v93 != 0) {
            // 0x4063d0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40635e
            *v83 = 0;
            // 0x40611e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406351
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40635e
            *v83 = 0;
            // 0x40611e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40649a
            __fprintf_chk(g29, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40644a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406451
        // 0x40635e
        *v83 = 0;
        // 0x40611e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4062a9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4062ab
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4064d0
                __fprintf_chk(g29, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x406481
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x406488
            // 0x40611e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4062b6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4062ba
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4062d5;
  lab_0x4061e6:
    // 0x4061e6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x406024;
  lab_0x4062d5:;
    int64_t v99 = function_405920(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4062f3
    // 0x40611e
    return v99 & 0xffffffff;
  lab_0x406176:;
    int32_t v100 = v55; // 0x406176
    if (v100 != (int32_t)v59) {
        // 0x40617a
        *(int32_t *)a7 = v100;
    }
    // 0x40611e
    return 0xffffffff;
  lab_0x40613a:
    // 0x40613a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x406141
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40611e
    return v99 & 0xffffffff;
  lab_0x406280:
    // 0x406280
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4060b5;
  lab_0x406234:
    // 0x406234
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405920(v6, a2, str, a4, a5, v57, v1, v11, &g8); // 0x40625a
    if ((int32_t)v101 != -1) {
        // 0x40611e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40626f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x406280;
}
// Address range: 0x406510 - 0x406566
int64_t function_406510(int64_t a1) {
    // 0x406510
    *(int32_t *)&g47 = g25;
    *(int32_t *)&g48 = g24;
    int64_t v1; // 0x406510
    int64_t result = function_405f40(v1, v1, v1, v1, v1, v1, &g47, a1 & 0xffffffff); // 0x406536
    g25 = *(int32_t *)&g47;
    g52 = g50;
    *(int32_t *)&g23 = g49;
    return result;
}
// Address range: 0x406570 - 0x406588
int64_t function_406570(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406570
    return function_406510(1);
}
// Address range: 0x406590 - 0x4065a3
int64_t function_406590(int64_t a1, int64_t a2, char * a3, char (**a4)[8], int32_t a5, int64_t a6) {
    // 0x406590
    return function_406510(0);
}
// Address range: 0x4065b0 - 0x4065c5
int64_t function_4065b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4065b0
    return function_405f40(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4065d0 - 0x4065e6
int64_t function_4065d0(void) {
    // 0x4065d0
    return function_406510(0);
}
// Address range: 0x4065f0 - 0x406608
int64_t function_4065f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4065f0
    return function_405f40(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406610 - 0x40668a
int64_t function_406610(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40661b
    int64_t v2 = (int64_t)&g9; // 0x40661b
    int32_t * pwc; // 0x406610
    int64_t v3; // 0x406610
    int64_t n; // 0x406610
    if (a2 == 0) {
        goto lab_0x406662;
    } else {
        // 0x40661d
        if (a3 == 0) {
            // 0x406648
            return -2;
        }
        // 0x406629
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406662;
        } else {
            goto lab_0x406634;
        }
    }
  lab_0x406662:
    // 0x406662
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406610
    pwc = (int32_t *)&v4;
    goto lab_0x406634;
  lab_0x406634:;
    char * wstr = (char *)v3; // 0x40663a
    int64_t ps; // 0x406610
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40663a
    int64_t result = v5; // 0x40663a
    if (v5 < 0xfffffffe) {
        // 0x406648
        return result;
    }
    int64_t result2 = result; // 0x406679
    if ((char)function_4066f0(0, v3) == 0) {
        // 0x40667b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406648
    return result2;
}
// Address range: 0x406690 - 0x4066ed
int64_t function_406690(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x406697
    int64_t v2; // 0x406690
    int64_t result = function_406f10(a1, v2); // 0x4066a8
    if ((v2 & 32) != 0) {
        // 0x4066d0
        if ((int32_t)result == 0) {
            // 0x4066d4
            *__errno_location() = 0;
        }
        // 0x4066ca
        return 0xffffffff;
    }
    // 0x4066b1
    if ((int32_t)result == 0) {
        // 0x4066ca
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4066b8
    if (v1 == 0) {
        // 0x4066ba
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4066ca
    return result2;
}
// Address range: 0x4066f0 - 0x40674e
int64_t function_4066f0(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x4066f6
    if (locale == NULL) {
        // 0x406723
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x4066f6
    bool v2; // 0x4066f0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g10; // 0x4066f0
    int64_t v5 = v1; // 0x4066f0
    int64_t v6 = 2; // 0x406715
    unsigned char v7 = *(char *)v5; // 0x406715
    char v8 = *(char *)v4; // 0x406715
    char v9 = v8; // 0x406715
    bool v10 = false; // 0x406715
    while (v7 == v8) {
        // 0x406708
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406721
    int64_t v13 = v1; // 0x406721
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406723
        return 0;
    }
    int64_t v14 = 6; // 0x406721
    unsigned char v15 = *(char *)v13; // 0x40673d
    char v16 = *(char *)v12; // 0x40673d
    char v17 = v16; // 0x40673d
    bool v18 = false; // 0x40673d
    while (v15 == v16) {
        // 0x406730
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
// Address range: 0x406750 - 0x406cb2
int64_t function_406750(void) {
    char * v1 = nl_langinfo(14); // 0x406766
    char * v2 = g51; // 0x40676b
    char * v3; // 0x406750
    int64_t v4; // 0x406750
    int64_t v5; // 0x406750
    int64_t v6; // 0x406750
    int64_t v7; // 0x406750
    int32_t size; // 0x406750
    int32_t size2; // 0x406750
    int32_t len; // 0x406822
    int64_t v8; // 0x406822
    char * env_val; // 0x40680d
    if (v2 == NULL) {
        // 0x406808
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406875;
        } else {
            // 0x40681a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406875;
            } else {
                // 0x40681f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40680d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406ca5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406875;
                    } else {
                        // 0x406c19
                        size2 = len + 14;
                        goto lab_0x40683b;
                    }
                } else {
                    goto lab_0x40683b;
                }
            }
        }
    } else {
        // 0x406750
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40678a;
    }
  lab_0x406abc:;
    // 0x406abc
    struct _IO_FILE * stream; // 0x4068fb
    int32_t v10 = __uflow(stream); // 0x406abf
    int64_t v11; // 0x406750
    int64_t v12 = v11; // 0x406ac9
    int64_t v13; // 0x406750
    int64_t v14 = v13; // 0x406ac9
    int32_t v15 = v10; // 0x406ac9
    int64_t v16; // 0x406750
    int64_t v17 = v16; // 0x406ac9
    int64_t v18 = v11; // 0x406ac9
    int64_t v19 = v13; // 0x406ac9
    int64_t v20 = v16; // 0x406ac9
    if (v10 == -1) {
        // break -> 0x406acf
        goto lab_0x406acf;
    }
    goto lab_0x406949;
  lab_0x40693e:;
    // 0x40693e
    int64_t v90; // 0x406750
    int64_t * v32; // 0x406930
    *v32 = v90 + 1;
    int64_t v89; // 0x406750
    v12 = v89;
    int64_t v91; // 0x406750
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x406750
    v17 = v92;
    goto lab_0x406949;
  lab_0x406949:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x406750
    int32_t v25; // bp-120, 0x406750
    int32_t v26; // bp-184, 0x406750
    int64_t v27; // 0x4068fb
    int64_t v28; // 0x406918
    int64_t v29; // 0x40691d
    int64_t * v30; // 0x406934
    switch (c) {
        case 32: {
            goto lab_0x406930;
        }
        case 10: {
            goto lab_0x406930;
        }
        case 9: {
            goto lab_0x406930;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406b21
            int32_t v33; // 0x406750
            char v34; // 0x406750
            int32_t v35; // 0x406b2e
            if (v31 < *v30) {
                // 0x406b00
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406b2b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406b21
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406b00
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406b2b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406b10
                v36 = v33;
            }
            // 0x406bff
            if (v36 == -1) {
                // break -> 0x406acf
                break;
            }
            goto lab_0x406930;
        }
        default: {
            // 0x40695f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406acf
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406988
            int64_t v39 = v37 + 4; // 0x40698a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406996
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406998
            while (v41 == 0) {
                // 0x406988
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x4069b6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x4069c2
            int64_t v45 = v43 + 4; // 0x4069c4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x4069d0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x4069d2
            while (v47 == 0) {
                // 0x4069c2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x4069bf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x4069e8
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x4069f8
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x4069fc
            int64_t v52 = v51 + v48; // 0x406a05
            int64_t * mem; // 0x406750
            int64_t v53; // 0x406750
            int64_t v54; // 0x406750
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x406b3b
                int64_t v56 = v55 + 3; // 0x406b47
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406a21
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406a30
            if (mem == NULL) {
                // 0x406c5c
                free((int64_t *)v21);
                function_406f10(v27, v53);
                v24 = (int64_t)&g9;
                goto lab_0x4068d4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x406a48
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x406a52
            uint32_t v62 = (int32_t)v59; // 0x406a55
            int64_t v63; // 0x406750
            if (v62 >= 8) {
                // 0x406b64
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406b7e
                int64_t v66 = v61 - v65; // 0x406b82
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406b8d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406b9e
                    int64_t v70 = v69 & 0xffffffff; // 0x406b9e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406b9b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406c2f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x406a67
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x406a6b
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
            int64_t v73 = v51 + 1; // 0x406a7b
            int64_t v74 = v60 - 1; // 0x406a7f
            uint32_t v75 = (int32_t)v73; // 0x406a84
            int64_t v76; // 0x406750
            if (v75 >= 8) {
                // 0x406bb2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406bbc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406bcc
                int64_t v80 = v74 - v79; // 0x406bd0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406bdb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406beb
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406be9
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406c46
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406c4e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406a96
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x406a9a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406c93
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406aae
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40693e;
            } else {
                goto lab_0x406abc;
            }
        }
    }
  lab_0x406930:;
    int64_t v93 = v23; // 0x406750
    int64_t v94 = v22; // 0x406750
    int64_t v95 = v21; // 0x406750
    goto lab_0x406930_2;
  lab_0x406875:;
    int64_t * mem3 = malloc(size); // 0x406875
    int64_t v97 = (int64_t)&g9; // 0x406880
    int64_t v98; // 0x406750
    int64_t path; // 0x406750
    if (mem3 == NULL) {
        goto lab_0x406852;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406875
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406896;
    }
  lab_0x40678a:;
    int64_t str = v1 == NULL ? (int64_t)&g9 : (int64_t)v1; // 0x40677d
    char v100 = *v3; // 0x40678a
    int64_t v101; // 0x406750
    if (v100 == 0) {
        // 0x4067e4
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x406750
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x406750
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x4067d0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x4067d7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x4067a0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x4067ad
        char v107 = *(char *)v106; // 0x4067b2
        v102 = v107;
        if (v107 == 0) {
            // 0x4067e4
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x4067bb
    v104 = v103 + 1;
  lab_0x4067d7:
    // 0x4067e4
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x406852:;
    char * v108 = (char *)v97;
    g51 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40678a;
  lab_0x406896:;
    int64_t v109 = v98 + path; // 0x406896
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x4068c2
    v24 = (int64_t)&g9;
    if (fd >= 0) {
        // 0x4068f1
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406c22
            close(fd);
            v24 = (int64_t)&g9;
        } else {
            // 0x406915
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406930_2:;
                uint64_t v96 = *v32; // 0x406930
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406abc;
                } else {
                    goto lab_0x40693e;
                }
            }
          lab_0x406acf:
            // 0x406acf
            function_406f10(v27, v19);
            v24 = (int64_t)&g9;
            if (v18 != 0) {
                // 0x406aee
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x4068d4;
  lab_0x40683b:;
    int64_t * mem4 = malloc(size2); // 0x40683b
    v97 = (int64_t)&g9;
    if (mem4 != NULL) {
        // 0x4068e1
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406896;
    } else {
        goto lab_0x406852;
    }
  lab_0x4068d4:
    // 0x4068d4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x406852;
}
// Address range: 0x406cc0 - 0x406cf6
int64_t function_406cc0(int32_t a1, uint64_t a2) {
    int64_t v1 = 4 * a2; // 0x406cca
    if (v1 < 0) {
        // 0x406ce0
        *__errno_location() = 12;
        return 0;
    }
    if (a2 < 0x4000000000000000) {
        // 0x406cd8
        return (int64_t)realloc((int64_t *)(int64_t)a1, (int32_t)v1);
    }
    // 0x406ce0
    *__errno_location() = 12;
    return 0;
}
// Address range: 0x406d00 - 0x406f0b
int64_t function_406d00(int64_t a1, int64_t a2, int64_t a3) {
    int32_t grouplist2[1]; // 0x406ef9
    int32_t grouplist[1]; // 0x406e34
    int64_t result; // 0x406d00
    int64_t result2; // 0x406d00
    int64_t v1; // 0x406d00
    int64_t v2; // 0x406d00
    int64_t v3; // 0x406d00
    int32_t v4; // 0x406d00
    int32_t ngroups; // bp-44, 0x406d00
    int32_t v5; // 0x406ded
    if (a1 == 0) {
        int32_t v6 = getgroups(0, INVALID_FORM); // 0x406ddc
        ngroups = v6;
        if (v6 < 0) {
            // 0x406e98
            if (*__errno_location() != 38) {
                // 0x406d84
                return 0xffffffff;
            }
            int64_t * mem = malloc(4); // 0x406eab
            result = 0xffffffff;
            if (mem == NULL) {
                // 0x406d84
                return result;
            }
            int32_t v7 = a2; // 0x406eb9
            *(int32_t *)mem = v7;
            *(int64_t *)a3 = (int64_t)mem;
            return v7 != -1;
        }
        int64_t v8 = v6; // 0x406ddc
        v5 = a2;
        if (v5 == -1 == (v6 != 0)) {
            int64_t v9 = function_406cc0(0, v8); // 0x406edb
            if (v9 == 0) {
                // 0x406d84
                return 0xffffffff;
            }
            // 0x406eec
            v3 = v9;
            v4 = ngroups;
            goto lab_0x406ef0;
        } else {
            int64_t v10 = v8 + 1; // 0x406e02
            ngroups = v10;
            int64_t v11 = function_406cc0(0, 0x100000000 * v10 >> 32); // 0x406e0e
            if (v11 == 0) {
                // 0x406d84
                return 0xffffffff;
            }
            // 0x406e1f
            v3 = v11;
            v4 = ngroups;
            if (v5 == -1) {
                goto lab_0x406ef0;
            } else {
                // 0x406e2d
                grouplist[0] = (int32_t)v11 + 4;
                int32_t v12 = getgroups(ngroups - 1, grouplist); // 0x406e34
                v1 = v11;
                if (v12 < 0) {
                    goto lab_0x406d68;
                } else {
                    // 0x406e41
                    *(int32_t *)v11 = v5;
                    result2 = v12 + 1;
                    v2 = v11;
                    goto lab_0x406e47;
                }
            }
        }
    } else {
        // 0x406d1b
        ngroups = 10;
        int64_t groups = function_406cc0(0, 10); // 0x406d2d
        if (groups == 0) {
            // 0x406d84
            return 0xffffffff;
        }
        int32_t group = a2; // 0x406d42
        char * user = (char *)a1; // 0x406d4d
        int32_t v13 = getgrouplist(user, group, (int32_t *)groups, &ngroups); // 0x406d4d
        int64_t v14 = groups; // 0x406d54
        int32_t v15 = ngroups; // 0x406d54
        if (v13 < 0) {
            int64_t v16 = ngroups; // 0x406d98
            int64_t v17 = v16; // 0x406d9f
            int64_t v18; // 0x406da1
            if (ngroups == 10) {
                // 0x406da1
                v18 = 2 * v16;
                ngroups = v18;
                v17 = v18 & 0xfffffffe;
            }
            int64_t groups2 = function_406cc0((int32_t)groups, 0x100000000 * v17 >> 32); // 0x406dad
            v1 = groups;
            while (groups2 != 0) {
                uint32_t v19 = getgrouplist(user, group, (int32_t *)groups2, &ngroups); // 0x406d4d
                v14 = groups2;
                v15 = ngroups;
                int64_t v20 = groups2; // 0x406d54
                if (v19 >= 0) {
                    goto lab_0x406d56;
                }
                v16 = ngroups;
                v17 = v16;
                // 0x406da1
                v18 = 2 * v16;
                ngroups = v18;
                v17 = v18 & 0xfffffffe;
                // 0x406da7
                groups2 = function_406cc0((int32_t)v20, 0x100000000 * v17 >> 32);
                v1 = v20;
            }
        } else {
          lab_0x406d56:;
            int64_t v21 = function_406cc0((int32_t)v14, (int64_t)v15); // 0x406d5e
            v1 = v14;
            if (v21 != 0) {
                // 0x406dc0
                *(int64_t *)a3 = v21;
                return ngroups;
            }
        }
        goto lab_0x406d68;
    }
  lab_0x406e7b:;
    // 0x406e7b
    int64_t v22; // 0x406d00
    int64_t v23 = v22 + 4; // 0x406e7b
    int64_t v24; // 0x406d00
    result = v24;
    int64_t v25 = v24; // 0x406e82
    v22 = v23;
    int64_t v26; // 0x406d00
    int64_t v27 = v26; // 0x406e82
    uint64_t v28; // 0x406e59
    if (v28 <= v23) {
        return result;
    }
    goto lab_0x406e88;
  lab_0x406d68:;
    int32_t * v33 = __errno_location(); // 0x406d68
    free((int64_t *)v1);
    // 0x406d84
    return 0xffffffff;
  lab_0x406ef0:
    // 0x406ef0
    grouplist2[0] = v3;
    int32_t v34 = getgroups(v4 - (int32_t)(v5 != -1), grouplist2); // 0x406ef9
    v1 = v3;
    result2 = v34;
    v2 = v3;
    if (v34 >= 0) {
        goto lab_0x406e47;
    } else {
        goto lab_0x406d68;
    }
  lab_0x406e47:
    // 0x406e47
    *(int64_t *)a3 = v2;
    if ((int32_t)result2 < 2) {
        // 0x406d84
        return result2;
    }
    // 0x406e54
    v28 = (0x100000000 * result2 >> 30) + v2;
    int64_t v35 = v2 + 4; // 0x406e5d
    v25 = result2;
    v22 = v35;
    if (v28 <= v35) {
        // 0x406d84
        return result2;
    }
    v27 = v2;
    while (true) {
      lab_0x406e88:;
        int64_t v29 = v27;
        int64_t v30 = v25;
        int32_t v31 = *(int32_t *)v22; // 0x406e88
        if (v31 != *(int32_t *)v2) {
            // 0x406e70
            if (*(int32_t *)v29 == v31) {
                // 0x406e8e
                v24 = v30 + 0xffffffff & 0xffffffff;
                v26 = v29;
                goto lab_0x406e7b;
            } else {
                int64_t v32 = v29 + 4; // 0x406e74
                *(int32_t *)v32 = v31;
                v24 = v30;
                v26 = v32;
                goto lab_0x406e7b;
            }
        } else {
            // 0x406e8e
            v24 = v30 + 0xffffffff & 0xffffffff;
            v26 = v29;
            goto lab_0x406e7b;
        }
    }
    int64_t result3 = result;
    return result3;
}
// Address range: 0x406f10 - 0x406f8b
int64_t function_406f10(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406f17
    if (fileno(stream) < 0) {
        // 0x406f77
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x406f2a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x406f5b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406f77
            return fclose(stream);
        }
    }
    // 0x406f2c
    if ((int32_t)function_406f90(a1, v1) == 0) {
        // 0x406f77
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406f38
    int32_t v3 = *v2; // 0x406f40
    int64_t result = fclose(stream); // 0x406f4e
    if (v3 != 0) {
        // 0x406f80
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406f50
    return result;
}
// Address range: 0x406f90 - 0x406fd0
int64_t function_406f90(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x406faa
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x406faa
        return fflush(stream);
    }
    // 0x406fb8
    function_406fd0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406fd0 - 0x407027
int64_t function_406fd0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406fd0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x406fda
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40700b
    int64_t result = -1; // 0x407014
    if (v1 != -1) {
        // 0x407016
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x407022
    return result;
}
// Address range: 0x407030 - 0x40708d
int64_t function_407030(int64_t a1, int64_t a2, int64_t a3) {
    // 0x407030
    return function_401620();
}
// Address range: 0x407090 - 0x407091
int64_t function_407090(void) {
    // 0x407090
    int64_t result; // 0x407090
    return result;
}
// Address range: 0x4070a0 - 0x4070b8
int64_t function_4070a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4070a0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g15);
}
// Address range: 0x4070b8 - 0x4070d8
int64_t function_4070b8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g11; // 0x4070c2
    while (*(int64_t *)v1 != -1) {
        // 0x4070c3
        v1 -= 8;
    }
    // 0x4070d4
    return result;
}
