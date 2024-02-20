// Address range: 0x401b50 - 0x401b55
int64_t function_401b50(void) {
    // 0x401b50
    abort();
    // UNREACHABLE
}
// Address range: 0x401b55 - 0x401b5a
int64_t function_401b55(void) {
    // 0x401b55
    abort();
    // UNREACHABLE
}
// Address range: 0x401b5a - 0x401b5f
int64_t function_401b5a(void) {
    // 0x401b5a
    abort();
    // UNREACHABLE
}
// Address range: 0x401b5f - 0x401b64
int64_t function_401b5f(void) {
    // 0x401b5f
    abort();
    // UNREACHABLE
}
// Address range: 0x401b64 - 0x401b69
int64_t function_401b64(void) {
    // 0x401b64
    abort();
    // UNREACHABLE
}
// Address range: 0x401b69 - 0x401b6e
int64_t function_401b69(void) {
    // 0x401b69
    abort();
    // UNREACHABLE
}
// Address range: 0x401b70 - 0x402276
int64_t function_401b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * exec_argv[1]; // 0x401ef4
    int64_t v1 = a1 & 0xffffffff; // 0x401b82
    int32_t uid = -1; // bp-88, 0x401b8f
    int32_t gid = -1; // bp-84, 0x401b97
    int64_t v2 = 0; // bp-80, 0x401b9f
    int32_t size = 0; // bp-72, 0x401ba8
    function_4029d0(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g19 = 125;
    function_406f30(0x402930, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v3 = 0; // 0x401bf2
    int64_t v4 = 0; // 0x401bf2
    int64_t v5 = 0; // 0x401bf2
    int64_t v6; // 0x401b70
    while (true) {
        // 0x401bf8
        v6 = v3;
        int64_t v7 = v4; // 0x401b70
        uint32_t v8; // 0x401b70
        while (true) {
            // 0x401bf8
            v4 = v7;
            int64_t v9 = v5; // 0x401b70
            while (true) {
              lab_0x401bf8:
                // 0x401bf8
                v5 = v9;
                v8 = (int32_t)function_4063d0(v1, a2, &g2, &g3, 0, a6);
                switch (v8) {
                    case -1: {
                        goto lab_0x401ccc;
                    }
                    case 256: {
                        // 0x401cc0
                        v9 = (int64_t)g46;
                        goto lab_0x401bf8;
                    }
                    default: {
                        goto lab_0x401c23;
                    }
                }
            }
          lab_0x401c23:
            if (v8 <= 256) {
                if (v8 == -131) {
                    // 0x401c57
                    function_404e50((int64_t)g29, "chroot", "GNU coreutils", (int64_t)g18, "Roland McGrath", 0);
                    exit(0);
                    // UNREACHABLE
                }
                if (v8 == -130) {
                    // 0x401cb1
                    function_402580(0);
                    // UNREACHABLE
                }
                goto lab_0x4021e0;
            }
            if (v8 != 257) {
                // break -> 0x401c90
                break;
            }
            int64_t v10 = (int64_t)g46; // 0x401c2c
            int32_t len = strlen(g46); // 0x401c36
            if (len != 0) {
                char * v11 = (char *)(v10 - 1 + (int64_t)len); // 0x401c45
                if (*v11 == 58) {
                    // 0x401c4a
                    *v11 = 0;
                }
            }
            // 0x401bf8
            v7 = v10;
        }
        // 0x401c90
        v3 = 1;
        if (v8 != 258) {
          lab_0x4021e0:
            // 0x4021e0
            function_402580(125);
            // UNREACHABLE
        }
    }
  lab_0x401ccc:;
    uint64_t v12 = (int64_t)*(int32_t *)0x60b2bc; // 0x401ccc
    char * format; // 0x4021cd
    if (v1 <= v12) {
        // 0x4021c1
        format = dcgettext(NULL, "missing operand", 5);
        error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
        // 0x4021e0
        function_402580(125);
        // UNREACHABLE
    }
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x401cdb
    char * path = (char *)v13; // 0x401ce2
    char * str = canonicalize_file_name(path); // 0x401ce2
    int64_t v14 = (int64_t)str; // 0x401ce2
    int64_t v15 = v14; // 0x401ced
    int64_t v16 = a2; // 0x401ced
    int64_t v17 = v1; // 0x401ced
    int64_t v18 = v6; // 0x401ced
    int64_t v19; // 0x401b70
    int64_t v20; // 0x401b70
    int64_t v21; // 0x401b70
    int64_t v22; // 0x401b70
    int64_t v23; // 0x401b70
    int64_t v24; // 0x401b70
    int64_t v25; // 0x401b70
    int32_t v26; // 0x401b70
    int32_t v27; // 0x401b70
    int32_t v28; // 0x401b70
    if (str == NULL) {
        goto lab_0x401db2;
    } else {
        // 0x401cf3
        v15 = v14;
        v16 = a2;
        v17 = v1;
        v18 = v6;
        if (strcmp("/", str) != 0) {
            goto lab_0x401db2;
        } else {
            // 0x401d12
            free((int64_t *)str);
            v27 = v14;
            v19 = v6;
            if (chroot(path) != 0) {
                goto lab_0x4020a5;
            } else {
                // 0x401d2a
                v26 = 0;
                v24 = a2;
                v22 = v1;
                v20 = v6;
                v28 = 0;
                v25 = a2;
                v23 = v1;
                v21 = 0;
                if (v6 == 0) {
                    goto lab_0x401e23;
                } else {
                    goto lab_0x401d3c;
                }
            }
        }
    }
  lab_0x401db2:;
    int64_t v29 = v18;
    free((int64_t *)v15);
    char * format2; // 0x402256
    if ((char)v29 != 0) {
        // 0x402238
        function_4043a0(4, (int64_t)"/");
        format2 = dcgettext(NULL, "option --skip-chdir only permitted if NEWROOT is old %s", 5);
        error(0, (int32_t)"option --skip-chdir only permitted if NEWROOT is old %s" ^ (int32_t)"option --skip-chdir only permitted if NEWROOT is old %s", format2);
        function_402580(125);
        // UNREACHABLE
    }
    int64_t v30 = v17;
    int64_t v31 = v16;
    if (v4 != 0) {
        // 0x401dc8
        function_404920(v4, &uid, &gid, 0, 0);
    }
    int64_t v32 = v31; // 0x401de6
    int64_t v33 = v30; // 0x401de6
    int64_t v34 = v29; // 0x401de6
    int32_t v35 = 0; // 0x401de6
    int64_t v36; // 0x401b70
    int64_t v37; // 0x401b70
    int64_t v38; // 0x401b70
    int64_t v39; // 0x401b70
    struct passwd * v40; // 0x401b70
    int64_t v41; // 0x401b70
    int64_t v42; // 0x401b70
    int64_t v43; // 0x401b70
    int64_t v44; // 0x401b70
    int64_t v45; // 0x401b70
    int64_t v46; // 0x401b70
    int64_t v47; // 0x401b70
    int64_t v48; // 0x401b70
    int32_t uid2; // 0x401b70
    int32_t v49; // 0x401b70
    if (uid == -1) {
        goto lab_0x402005;
    } else {
        if (v5 == 0) {
            struct passwd * v50 = getpwuid(uid); // 0x402173
            v49 = 0;
            v48 = v31;
            v44 = v30;
            v39 = v29;
            v40 = v50;
            v46 = v31;
            v42 = v30;
            v37 = v29;
            if (v50 != NULL) {
                goto lab_0x40214e;
            } else {
                goto lab_0x401e13;
            }
        } else {
            // 0x401df5
            v47 = v31;
            v43 = v30;
            v38 = v29;
            v45 = v31;
            v41 = v30;
            uid2 = uid;
            v36 = v29;
            if (gid == -1) {
                goto lab_0x402140;
            } else {
                goto lab_0x401e00;
            }
        }
    }
  lab_0x402005:;
    int32_t v51 = v35;
    int64_t v52 = v34;
    int64_t v53 = v33;
    int64_t v54 = v32;
    int32_t v55 = v51; // 0x402008
    int64_t v56 = v54; // 0x402008
    int64_t v57 = v53; // 0x402008
    int64_t v58 = v52; // 0x402008
    if (v5 != 0) {
        goto lab_0x401e09;
    } else {
        // 0x40200e
        v49 = v51;
        v48 = v54;
        v44 = v53;
        v39 = v52;
        if (v51 != 0 && gid != -1) {
            int32_t v59 = function_405220(); // 0x402033
            v49 = v51;
            v48 = v54;
            v44 = v53;
            v39 = v52;
            if (v59 >= 1) {
                // 0x40203b
                size = v59;
                v49 = v51;
                v48 = v54;
                v44 = v53;
                v39 = v52;
            }
        }
        goto lab_0x401e13;
    }
  lab_0x401e09:;
    int64_t v60 = v58;
    int64_t v61 = v57;
    int64_t v62 = v56;
    int32_t v63 = v55;
    v49 = v63;
    v48 = v62;
    v44 = v61;
    v39 = v60;
    if (*(char *)v5 != 0) {
        // 0x4020ec
        function_402360(v5, &v2, (int64_t *)&size, 0);
        v49 = v63;
        v48 = v62;
        v44 = v61;
        v39 = v60;
    }
    goto lab_0x401e13;
  lab_0x4020a5:
    // 0x4020a5
    function_4043a0(4, v13);
    char * format5 = dcgettext(NULL, "cannot change root directory to %s", 5); // 0x4020c1
    error(125, *__errno_location(), format5);
    int32_t v67 = v27; // 0x4020dd
    int64_t v69 = (int64_t)format5; // 0x4020dd
    int64_t v72 = v19; // 0x4020dd
    goto lab_0x4020e2;
  lab_0x401e13:
    // 0x401e13
    v28 = v49;
    v25 = v48;
    v23 = v44;
    v21 = v39;
    v27 = v49;
    v19 = v39;
    if (chroot(path) != 0) {
        goto lab_0x4020a5;
    } else {
        goto lab_0x401e23;
    }
  lab_0x40214e:;
    struct passwd * v64 = v40;
    if (gid == -1) {
        // 0x402155
        gid = *(int32_t *)((int64_t)v64 + 20);
    }
    // 0x40215c
    v32 = v46;
    v33 = v42;
    v34 = v37;
    v35 = (int32_t)*(int64_t *)v64;
    goto lab_0x402005;
  lab_0x402140:;
    struct passwd * v65 = getpwuid(uid2); // 0x402140
    v47 = v45;
    v43 = v41;
    v38 = v36;
    v40 = v65;
    v46 = v45;
    v42 = v41;
    v37 = v36;
    if (v65 == NULL) {
        goto lab_0x401e00;
    } else {
        goto lab_0x40214e;
    }
  lab_0x401e00:
    // 0x401e00
    v55 = 0;
    v56 = v47;
    v57 = v43;
    v58 = v38;
    goto lab_0x401e09;
  lab_0x4020e2:;
    int32_t v66 = v67; // 0x4020e7
    int64_t v68 = v69; // 0x4020e7
    int32_t * v70; // bp-64, 0x401b70
    int64_t list = (int64_t)v70; // 0x4020e7
    int64_t v71 = v72; // 0x4020e7
    goto lab_0x401e98;
  lab_0x401e23:;
    int64_t v113 = v21;
    int32_t v114 = v28;
    v26 = v114;
    v24 = v25;
    v22 = v23;
    v20 = v113;
    int64_t v87; // 0x401b70
    int64_t v86; // 0x401b70
    int32_t v85; // 0x401b70
    if (chdir("/") == 0) {
        goto lab_0x401d3c;
    } else {
        char * format4 = dcgettext(NULL, "cannot chdir to root directory", 5); // 0x401e41
        error(125, *__errno_location(), format4);
        v85 = v114;
        v86 = (int64_t)format4;
        v87 = v113;
        goto lab_0x401e5f;
    }
  lab_0x401d3c:;
    int64_t v115 = v20;
    int64_t v116 = v24;
    int32_t v117 = v26;
    int32_t v78 = v117; // 0x401d48
    int64_t v76 = v116; // 0x401d48
    int64_t v81 = v115; // 0x401d48
    int64_t v80; // 0x401b70
    int64_t v79; // 0x401b70
    int32_t v77; // 0x401b70
    if (g27 + 1 == (int32_t)v22) {
        goto lab_0x40207a;
    } else {
        // 0x401d4e
        v77 = v117;
        v79 = v116 + 8 + 8 * (int64_t)g27;
        v80 = v115;
        goto lab_0x401d53;
    }
  lab_0x401e98:;
    int32_t v73 = v66; // 0x401ea7
    int64_t v74 = v68; // 0x401ea7
    int32_t * err_num; // 0x401b70
    if (setgroups(size, (int32_t *)list) != 0) {
        // 0x4021ea
        error(125, *__errno_location(), dcgettext(NULL, "failed to set supplemental groups", 5));
        err_num = (int32_t *)v71;
        goto lab_0x402214;
    } else {
        goto lab_0x401ead;
    }
  lab_0x40207a:;
    char * env_val = getenv("SHELL"); // 0x40207f
    int64_t v75 = env_val == NULL ? (int64_t)"/bin/sh" : (int64_t)env_val;
    *(int64_t *)v76 = v75;
    *(int64_t *)(v76 + 8) = (int64_t)"-i";
    *(int64_t *)(v76 + 16) = 0;
    v77 = v78;
    v79 = v76;
    v80 = v81;
    goto lab_0x401d53;
  lab_0x401ead:;
    int64_t v108 = v74;
    free((int64_t *)v70);
    free((int64_t *)v2);
    int32_t * err_num2 = __errno_location(); // 0x401ec5
    if (gid != -1) {
        // 0x402047
        if (setgid(gid) == 0) {
            goto lab_0x401ed6;
        } else {
            // 0x402056
            error(125, *err_num2, dcgettext(NULL, "failed to set group-ID", 5));
            v78 = v73;
            v76 = v108;
            v81 = (int64_t)err_num2;
            goto lab_0x40207a;
        }
    } else {
        goto lab_0x401ed6;
    }
  lab_0x401e5f:;
    int32_t v89 = v85; // 0x401e66
    int64_t v90 = v86; // 0x401e66
    int32_t uid3 = uid; // 0x401e66
    int64_t v91 = v87; // 0x401e66
    int32_t v92 = v85; // 0x401e66
    int64_t v93 = v86; // 0x401e66
    int64_t v94 = v87; // 0x401e66
    if (uid == -1) {
        goto lab_0x401f69;
    } else {
        goto lab_0x401e6c;
    }
  lab_0x401d53:;
    int64_t v82 = v80;
    int64_t v83 = v79;
    int32_t v84 = v77;
    v85 = v84;
    v86 = v83;
    v87 = v82;
    if (v4 == 0) {
        goto lab_0x401e5f;
    } else {
        int64_t v88 = function_404920(v4, &uid, &gid, 0, 0); // 0x401d6e
        v85 = v84;
        v86 = v83;
        v87 = v82;
        if (v88 == 0) {
            goto lab_0x401e5f;
        } else {
            // 0x401d7f
            v89 = v84;
            v90 = v83;
            uid3 = uid;
            v91 = v82;
            if (uid != -1) {
                goto lab_0x401e6c;
            } else {
                // 0x401d8c
                v92 = v84;
                v93 = v83;
                v94 = v82;
                if (gid != -1) {
                    goto lab_0x401f69;
                } else {
                    // 0x401d97
                    error(125, *__errno_location(), "%s", (char *)v88);
                    v15 = (int64_t)"%s";
                    v16 = v83;
                    v17 = v88;
                    v18 = v82;
                    goto lab_0x401db2;
                }
            }
        }
    }
  lab_0x402214:
    // 0x402214
    error(125, *err_num, dcgettext(NULL, "failed to set user-ID", 5));
    // 0x402238
    function_4043a0(4, (int64_t)"/");
    format2 = dcgettext(NULL, "option --skip-chdir only permitted if NEWROOT is old %s", 5);
    error(0, (int32_t)"option --skip-chdir only permitted if NEWROOT is old %s" ^ (int32_t)"option --skip-chdir only permitted if NEWROOT is old %s", format2);
    function_402580(125);
    // UNREACHABLE
  lab_0x401ed6:
    // 0x401ed6
    if (uid == -1) {
        goto lab_0x401eec;
    } else {
        // 0x401edf
        err_num = err_num2;
        if (setuid(uid) != 0) {
            goto lab_0x402214;
        } else {
            goto lab_0x401eec;
        }
    }
  lab_0x401f69:;
    int64_t v95 = v94;
    int64_t v96 = v93;
    int32_t v97 = v92;
    v70 = NULL;
    int32_t v98 = v97; // 0x401f7a
    int64_t v99 = v96; // 0x401f7a
    int64_t v100 = v95; // 0x401f7a
    if (v5 != 0) {
        goto lab_0x401e8e;
    } else {
        int64_t v101 = v2; // 0x401f8c
        if (v97 != 0 && gid != -1) {
            int32_t v102 = function_405220(); // 0x401f9d
            if (v102 < 1) {
                // 0x40218b
                v101 = v2;
                if (size == 0) {
                    // 0x402197
                    error(125, *__errno_location(), dcgettext(NULL, "failed to get supplemental groups", 5));
                    // 0x4021c1
                    format = dcgettext(NULL, "missing operand", 5);
                    error(0, (int32_t)"missing operand" ^ (int32_t)"missing operand", format);
                    // 0x4021e0
                    function_402580(125);
                    // UNREACHABLE
                }
            } else {
                // 0x401fa5
                size = v102;
                v101 = (int64_t)v70;
            }
        }
        // 0x401fb1
        v66 = v97;
        v68 = v96;
        list = v101;
        v71 = v95;
        v73 = v97;
        v74 = v96;
        if (uid == -1) {
            goto lab_0x401ead;
        } else {
            goto lab_0x401e98;
        }
    }
  lab_0x401e6c:;
    int64_t v103 = v91;
    int64_t v104 = v90;
    int32_t v105 = v89;
    if (v5 == 0 || gid == -1) {
        struct passwd * v106 = getpwuid(uid3); // 0x401f45
        int32_t v107 = gid;
        if (v106 == NULL) {
            // 0x402105
            v92 = v105;
            v93 = v104;
            v94 = v103;
            if (v107 != -1) {
                goto lab_0x401f69;
            } else {
                char * format3 = dcgettext(NULL, "no group specified for unknown uid: %d", 5); // 0x402120
                error(125, *__errno_location(), format3);
                v45 = (int64_t)format3;
                v41 = uid;
                uid2 = 125;
                v36 = v103;
                goto lab_0x402140;
            }
        } else {
            if (v107 == -1) {
                // 0x401f5a
                gid = *(int32_t *)((int64_t)v106 + 20);
            }
            // 0x401f61
            v92 = (int32_t)*(int64_t *)v106;
            v93 = v104;
            v94 = v103;
            goto lab_0x401f69;
        }
    } else {
        // 0x401e80
        v70 = NULL;
        v98 = v105;
        v99 = v104;
        v100 = v103;
        goto lab_0x401e8e;
    }
  lab_0x401eec:;
    int64_t * file = (int64_t *)v108; // 0x401eec
    exec_argv[0] = (char *)v108;
    execvp((char *)*file, exec_argv);
    function_4045f0(*file);
    error(0, *err_num2, dcgettext(NULL, "failed to run command %s", 5));
    // 0x401f34
    return *err_num2 == 2 ? 127 : 126;
  lab_0x401e8e:;
    int64_t v109 = v100;
    int64_t v110 = v99;
    int32_t v111 = v98;
    v66 = v111;
    v68 = v110;
    list = v2;
    v71 = v109;
    if (*(char *)v5 != 0) {
        int64_t v112 = function_402360(v5, (int64_t *)&v70, (int64_t *)&size, (int64_t)(size == 0)); // 0x401fd9
        v67 = v111;
        v69 = v110;
        v72 = v109;
        if ((int32_t)v112 == 0) {
            goto lab_0x4020e2;
        } else {
            // 0x401fe6
            v66 = v111;
            v68 = v110;
            list = v2;
            v71 = v109;
            if (size == 0) {
                // 0x401f34
                return 125;
            }
            goto lab_0x401e98;
        }
    } else {
        goto lab_0x401e98;
    }
}
// Address range: 0x402280 - 0x4022ab
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402280
    int64_t v1; // 0x402280
    __libc_start_main(0x401b70, (int32_t)a4, (char **)&v1, (void (*)())0x406ec0, (void (*)())0x406f20, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x4022ab - 0x4022ca
int64_t function_4022ab(void) {
    // 0x4022ab
    return &g28;
}
// Address range: 0x4022ca - 0x402301
int64_t function_4022ca(void) {
    // 0x4022ca
    return 0;
}
// Address range: 0x402301 - 0x402358
int64_t function_402301(void) {
    // 0x402301
    if (g32 != 0) {
        // 0x402357
        int64_t result; // 0x402301
        return result;
    }
    int64_t v1 = g33; // 0x402334
    int64_t result2; // 0x402346
    if (g33 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402346
        result2 = function_4022ab();
        g32 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x402336
        v1++;
    }
    // 0x40232a
    g33 = v1;
    // 0x402346
    result2 = function_4022ab();
    g32 = 1;
    return result2;
}
// Address range: 0x402358 - 0x40235d
int64_t function_402358(void) {
    // 0x402358
    return function_4022ca();
}
// Address range: 0x402360 - 0x402573
int64_t function_402360(int64_t a1, int64_t * a2, int64_t * a3, int64_t a4) {
    int64_t v1 = 0; // bp-72, 0x402384
    int64_t str = function_4051c0(a1); // 0x40238d
    char * next_token = strtok((char *)str, ","); // 0x40239d
    char v2; // 0x402360
    int64_t v3; // 0x402360
    int64_t v4; // 0x402360
    int64_t v5; // 0x402360
    char * v6; // 0x402360
    struct group * v7; // 0x402360
    int64_t v8; // 0x402360
    int64_t v9; // 0x402360
    int64_t v10; // 0x402360
    int64_t v11; // 0x402360
    int64_t v12; // 0x402360
    int64_t v13; // 0x402360
    int64_t v14; // 0x402360
    int64_t v15; // 0x402360
    int64_t v16; // 0x402360
    int64_t v17; // 0x402360
    int32_t v18; // bp-64, 0x402360
    char v19; // 0x402360
    if (next_token == NULL) {
        // 0x402360
        v2 = a4;
        v12 = 0;
        goto lab_0x40252b;
    } else {
        int64_t v20 = &v18;
        v19 = a4;
        v13 = 0;
        v8 = 0;
        v3 = 0;
        v6 = next_token;
        while (true) {
          lab_0x4023bb:;
            char * name = v6;
            v4 = v3;
            v9 = v8;
            v14 = v13;
            int64_t v21 = (int64_t)name;
            int64_t v22; // 0x402360
            int64_t v23 = function_405250(v21, 0, 10, (int64_t *)&v18, (int64_t *)&g11, v22); // 0x4023d0
            if (v18 < 0 || (int32_t)v23 != 0) {
                struct group * v24 = getgrnam(name); // 0x4023e7
                v7 = v24;
                v16 = v20;
                if (v24 == NULL) {
                    // 0x402450
                    v11 = v9;
                    if (v19 == 0) {
                        // break -> 0x40245b
                        break;
                    }
                    // 0x4024eb
                    function_4045f0(v21);
                    error(0, *__errno_location(), dcgettext(NULL, "invalid group %s", 5));
                    v15 = v14;
                    v10 = v9;
                    v5 = 0xffffffff;
                    goto lab_0x402411;
                } else {
                    goto lab_0x4023f1;
                }
            } else {
                int64_t v25 = (int64_t)*__ctype_b_loc(); // 0x40248d
                int64_t v26 = v21; // 0x402490
                char * name2 = (char *)v26;
                unsigned char v27 = *name2; // 0x40249c
                v26++;
                while ((*(char *)(v25 + 1 + 2 * (int64_t)v27) & 32) != 0) {
                    // 0x40249c
                    name2 = (char *)v26;
                    v27 = *name2;
                    v26++;
                }
                // 0x4024a7
                v17 = v25;
                if (v27 == 43) {
                    goto lab_0x4023f9;
                } else {
                    struct group * v28 = getgrnam(name2); // 0x4024b3
                    v7 = v28;
                    v16 = v25;
                    v17 = v25;
                    if (v28 != NULL) {
                        goto lab_0x4023f1;
                    } else {
                        goto lab_0x4023f9;
                    }
                }
            }
        }
        goto lab_0x40245b;
    }
  lab_0x4023f1:
    // 0x4023f1
    v18 = *(int32_t *)((int64_t)v7 + 16);
    v17 = v16;
    goto lab_0x4023f9;
  lab_0x4023f9:;
    int64_t v29 = v9; // 0x4023fe
    if (v1 == v14) {
        int64_t v30 = function_405060(v9, &v1, 4, v17, (int64_t)&g11); // 0x4024d3
        v29 = v30;
    }
    // 0x402404
    *(int32_t *)(v29 + 4 * v14) = v18;
    v15 = v14 + 1;
    v10 = v29;
    v5 = v4;
    goto lab_0x402411;
  lab_0x402411:;
    int64_t v31 = v5;
    int64_t v32 = v10;
    int64_t v33 = v15;
    char * next_token2 = strtok(NULL, ","); // 0x402418
    v13 = v33;
    v8 = v32;
    v3 = v31;
    v6 = next_token2;
    int64_t v34; // 0x402360
    if (next_token2 == NULL) {
        int32_t v35 = v31; // 0x402425
        v2 = v19;
        v12 = v32;
        if (v33 != 0 || v35 != 0) {
            // 0x40242e
            *a2 = v32;
            v34 = 0xffffffff;
            if (v35 != 0) {
                goto lab_0x402468;
            } else {
                // 0x40243e
                *a3 = v33;
                v34 = v31;
                goto lab_0x402468;
            }
        } else {
            goto lab_0x40252b;
        }
    }
    goto lab_0x4023bb;
  lab_0x40252b:
    // 0x40252b
    v11 = v12;
    if (v2 != 0) {
        // 0x402536
        function_4045f0(a1);
        error(0, (int32_t)"invalid group list %s" ^ (int32_t)"invalid group list %s", dcgettext(NULL, "invalid group list %s", 5));
        int64_t v36; // 0x402360
        v11 = v36;
    }
    goto lab_0x40245b;
  lab_0x40245b:
    // 0x40245b
    *a2 = v11;
    v34 = 0xffffffff;
  lab_0x402468:
    // 0x402468
    free((int64_t *)str);
    return v34 & 0xffffffff;
}
// Address range: 0x402580 - 0x40290d
int64_t function_402580(int32_t status) {
    // 0x402580
    if (status != 0) {
        // 0x40259a
        __fprintf_chk(g31, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x4025bf
        exit(status);
        // UNREACHABLE
    }
    // 0x4025c6
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION] NEWROOT [COMMAND [ARG]...]\n  or:  %s OPTION\n", 5));
    fputs_unlocked(dcgettext(NULL, "Run COMMAND with root directory set to NEWROOT.\n\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  --groups=G_LIST        specify supplementary groups as g1,g2,..,gN\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "  --userspec=USER:GROUP  specify user and group (ID or name) to use\n", 5), g29);
    function_4043a0(4, (int64_t)"/");
    __printf_chk(1, dcgettext(NULL, "  --skip-chdir           do not change working directory to %s\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g29);
    fputs_unlocked(dcgettext(NULL, "\nIf no command is given, run '\"$SHELL\" -i' (default: '/bin/sh -i').\n", 5), g29);
    int64_t v1 = &g1; // bp-136, 0x4026ee
    bool v2; // 0x402580
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402770
    int64_t v6 = *(int64_t *)v5; // 0x402774
    int64_t v7 = 7; // 0x40277a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"chroot";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402786
        char v11 = *(char *)v9; // 0x402786
        char v12 = v11; // 0x402786
        bool v13 = false; // 0x402786
        while (v10 == v11) {
            // 0x40277c
            v7--;
            int64_t v14 = v9 + v3; // 0x402786
            int64_t v15 = v8 + v3; // 0x402786
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
            // break -> 0x402792
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 7;
    }
    // 0x402792
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4028a4;
        } else {
            // 0x40288e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4028e3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4027f4;
            } else {
                goto lab_0x4028a4;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x4027f4;
        } else {
            // 0x4027da
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x4028e3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x4027f4;
            } else {
                goto lab_0x4027f4;
            }
        }
    }
  lab_0x4028a4:
    // 0x4028a4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402834
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4025bf
    exit(status);
    // UNREACHABLE
  lab_0x4027f4:
    // 0x4027f4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402834
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x4025bf
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402910 - 0x402918
int64_t function_402910(int64_t a1) {
    // 0x402910
    g35 = a1;
    int64_t result; // 0x402910
    return result;
}
// Address range: 0x402920 - 0x402928
int64_t function_402920(int64_t a1) {
    // 0x402920
    g34 = a1;
    int64_t result; // 0x402920
    return result;
}
// Address range: 0x402930 - 0x4029ce
int64_t function_402930(void) {
    // 0x402930
    int32_t * err_num; // 0x402946
    if ((int32_t)function_4064d0((int64_t)g29) == 0) {
        goto lab_0x40295c;
    } else {
        // 0x402946
        err_num = __errno_location();
        if (g34 == 0) {
            goto lab_0x402973;
        } else {
            // 0x402957
            if (*err_num != 32) {
                goto lab_0x402973;
            } else {
                goto lab_0x40295c;
            }
        }
    }
  lab_0x40295c:;
    int64_t result = function_4064d0((int64_t)g31); // 0x402963
    if ((int32_t)result == 0) {
        // 0x40296c
        return result;
    }
    // 0x4029ae
    _exit(g19);
    // UNREACHABLE
  lab_0x402973:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40297f
    if (g35 == 0) {
        // 0x4029b9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402993
        error(0, *err_num, "%s: %s", (char *)function_404440((int64_t)g35), v1);
    }
    // 0x4029ae
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x4029d0 - 0x402a69
int64_t function_4029d0(int64_t str) {
    // 0x4029d0
    if (str == 0) {
        // 0x402a49
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g31);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4029de
    int64_t result = (int64_t)found_char_pos; // 0x4029de
    if (found_char_pos == NULL) {
        // 0x402a39
        g36 = str;
        g30 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4029e8
    if (v1 - str < 7) {
        // 0x402a39
        g36 = str;
        g30 = str;
        return result;
    }
    // 0x4029f8
    bool v2; // 0x4029d0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4029d0
    int64_t v5 = result - 6; // 0x4029d0
    int64_t v6 = 7; // 0x402a06
    unsigned char v7 = *(char *)v5; // 0x402a06
    char v8 = *(char *)v4; // 0x402a06
    char v9 = v8; // 0x402a06
    bool v10 = false; // 0x402a06
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
    int64_t v12 = (int64_t)"lt-"; // 0x402a10
    int64_t v13 = v1; // 0x402a10
    int64_t v14 = 3; // 0x402a10
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402a39
        g36 = str;
        g30 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402a22
    char v16 = *(char *)v12; // 0x402a22
    char v17 = v16; // 0x402a22
    bool v18 = false; // 0x402a22
    while (v15 == v16) {
        // 0x402a12
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
    int64_t v20 = v1; // 0x402a2c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x402a2e
        v20 = result + 4;
        g28 = v20;
    }
    // 0x402a39
    g36 = v20;
    g30 = v20;
    return result;
}
// Address range: 0x402a70 - 0x402b62
int64_t function_402a70(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402a84
    int64_t result = (int64_t)v1; // 0x402a84
    if (result != a1) {
        // 0x402a91
        return result;
    }
    int64_t v2 = function_4065e0(); // 0x402aa0
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402b56
    if (v3 == 85) {
        // 0x402ab0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402b48
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x402ade
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x402aeb
        // 0x402a91
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402b48
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x402b2d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x402b3a
    // 0x402a91
    return result4;
}
// Address range: 0x402b70 - 0x402bc7
int64_t function_402b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402b70
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x402bb8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x402bc7 - 0x403d91
int64_t function_402bc7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402c11
    int64_t v3 = 0; // 0x402c11
    int64_t v4; // 0x402bc7
    int64_t v5; // 0x402bc7
    int64_t v6; // 0x402bc7
    int64_t v7; // 0x402bc7
    int64_t v8; // 0x402bc7
    int64_t v9; // 0x402bc7
    int64_t v10; // 0x402bc7
    int64_t v11; // 0x402bc7
    int64_t v12; // 0x402bc7
    int64_t v13; // 0x402bc7
    int64_t v14; // 0x402bc7
    int64_t v15; // 0x402bc7
    int64_t v16; // 0x402bc7
    int64_t v17; // 0x402bc7
    int64_t v18; // 0x402bc7
    int64_t result; // 0x402bc7
    int64_t v19; // 0x402bc7
    int32_t wc; // bp+132, 0x402bc7
    int64_t ps; // bp+136, 0x402bc7
    char v20; // 0x403180
    int64_t v21; // 0x403180
    int64_t v22; // 0x403528
    int64_t v23; // 0x402bc7
    int64_t v24; // 0x403547
    int32_t v25; // 0x402bc7
    while (true) {
      lab_0x402c18_2:
        // 0x402c18
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x402bc7
        int64_t v27; // 0x402c4c
        while (true) {
          lab_0x402c18:
            // 0x402c18
            v5 = v26;
            bool v28 = v15 == v5; // 0x402c23
            if (v15 == -1) {
                // 0x402c25
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402c33
            if (v28) {
                // break (via goto) -> 0x403398
                goto lab_0x403398;
            }
            // 0x402c3c
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
                    // 0x40322b
                    if (v25 % 2 == 0) {
                        goto lab_0x402d71;
                    }
                    // 0x40364d
                    v26 = v5 + 1;
                    goto lab_0x402c18;
                }
                case 7: {
                    goto lab_0x402d71;
                }
                case 8: {
                    goto lab_0x402d71;
                }
                case 9: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402d71;
                }
                case 12: {
                    goto lab_0x402d71;
                }
                case 13: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x402d3d;
                }
                case 36: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402d71;
                }
                case 38: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402d71;
                }
                case 44: {
                    goto lab_0x402d71;
                }
                case 45: {
                    goto lab_0x402d71;
                }
                case 46: {
                    goto lab_0x402d71;
                }
                case 47: {
                    goto lab_0x402d71;
                }
                case 48: {
                    goto lab_0x402d71;
                }
                case 49: {
                    goto lab_0x402d71;
                }
                case 50: {
                    goto lab_0x402d71;
                }
                case 51: {
                    goto lab_0x402d71;
                }
                case 52: {
                    goto lab_0x402d71;
                }
                case 53: {
                    goto lab_0x402d71;
                }
                case 54: {
                    goto lab_0x402d71;
                }
                case 55: {
                    goto lab_0x402d71;
                }
                case 56: {
                    goto lab_0x402d71;
                }
                case 57: {
                    goto lab_0x402d71;
                }
                case 58: {
                    goto lab_0x402d71;
                }
                case 59: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402d71;
                }
                case 66: {
                    goto lab_0x402d71;
                }
                case 67: {
                    goto lab_0x402d71;
                }
                case 68: {
                    goto lab_0x402d71;
                }
                case 69: {
                    goto lab_0x402d71;
                }
                case 70: {
                    goto lab_0x402d71;
                }
                case 71: {
                    goto lab_0x402d71;
                }
                case 72: {
                    goto lab_0x402d71;
                }
                case 73: {
                    goto lab_0x402d71;
                }
                case 74: {
                    goto lab_0x402d71;
                }
                case 75: {
                    goto lab_0x402d71;
                }
                case 76: {
                    goto lab_0x402d71;
                }
                case 77: {
                    goto lab_0x402d71;
                }
                case 78: {
                    goto lab_0x402d71;
                }
                case 79: {
                    goto lab_0x402d71;
                }
                case 80: {
                    goto lab_0x402d71;
                }
                case 81: {
                    goto lab_0x402d71;
                }
                case 82: {
                    goto lab_0x402d71;
                }
                case 83: {
                    goto lab_0x402d71;
                }
                case 84: {
                    goto lab_0x402d71;
                }
                case 85: {
                    goto lab_0x402d71;
                }
                case 86: {
                    goto lab_0x402d71;
                }
                case 87: {
                    goto lab_0x402d71;
                }
                case 88: {
                    goto lab_0x402d71;
                }
                case 89: {
                    goto lab_0x402d71;
                }
                case 90: {
                    goto lab_0x402d71;
                }
                case 91: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402d71;
                }
                case 94: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402d71;
                }
                case 96: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402d71;
                }
                case 98: {
                    goto lab_0x402d71;
                }
                case 99: {
                    goto lab_0x402d71;
                }
                case 100: {
                    goto lab_0x402d71;
                }
                case 101: {
                    goto lab_0x402d71;
                }
                case 102: {
                    goto lab_0x402d71;
                }
                case 103: {
                    goto lab_0x402d71;
                }
                case 104: {
                    goto lab_0x402d71;
                }
                case 105: {
                    goto lab_0x402d71;
                }
                case 106: {
                    goto lab_0x402d71;
                }
                case 107: {
                    goto lab_0x402d71;
                }
                case 108: {
                    goto lab_0x402d71;
                }
                case 109: {
                    goto lab_0x402d71;
                }
                case 110: {
                    goto lab_0x402d71;
                }
                case 111: {
                    goto lab_0x402d71;
                }
                case 112: {
                    goto lab_0x402d71;
                }
                case 113: {
                    goto lab_0x402d71;
                }
                case 114: {
                    goto lab_0x402d71;
                }
                case 115: {
                    goto lab_0x402d71;
                }
                case 116: {
                    goto lab_0x402d71;
                }
                case 117: {
                    goto lab_0x402d71;
                }
                case 118: {
                    goto lab_0x402d71;
                }
                case 119: {
                    goto lab_0x402d71;
                }
                case 120: {
                    goto lab_0x402d71;
                }
                case 121: {
                    goto lab_0x402d71;
                }
                case 122: {
                    goto lab_0x402d71;
                }
                case 123: {
                    goto lab_0x402d15;
                }
                case 124: {
                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402d15;
                }
                case 126: {
                    goto lab_0x402d3d;
                }
                default: {
                    goto lab_0x403115;
                }
            }
        }
      lab_0x403115:
        if (v23 != 1) {
            // 0x403480
            ps = 0;
            int64_t len = v15; // 0x403490
            if (v15 == -1) {
                // 0x403492
                len = strlen((char *)str);
            }
            // 0x4034be
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40351f:
                // 0x40351f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403524
                int64_t v30 = v29 + str;
                v24 = function_406450(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x403a9a_2;
                    }
                    case -1: {
                        goto lab_0x403a9a_2;
                    }
                    case -2: {
                        // 0x403b7d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x403bb7
                            v19 = v18;
                            int64_t v31 = v18; // 0x403bba
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x403bc7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x403bc0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x403a9a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x403a9a_2;
                    }
                    case 1: {
                        goto lab_0x4034f0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40359c
                        char v34 = *(char *)v33; // 0x4035ad
                        unsigned char v35; // 0x402bc7
                        if (v34 < 125) {
                            // 0x4035b8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4035cf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x4035a0
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x4035ad
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4035b8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4035cf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x4035a0
                            v33++;
                        }
                        goto lab_0x4034f0;
                    }
                }
            }
            goto lab_0x403a9a_2;
        } else {
            // 0x403164
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402d71;
        }
    }
  lab_0x403398:
    // 0x403398
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x403c9a
        if (v8 > result) {
            // 0x403ca3
            *(char *)(v12 + result) = 0;
        }
        // 0x402fc7
        return result;
    }
    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402d71:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402d80
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402f8a_2;
        }
    }
    int64_t v39 = result; // 0x402e81
    char v40 = v20; // 0x402e81
    int64_t v41 = v38; // 0x402e81
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402e81
    int64_t v43 = v36; // 0x402e81
    goto lab_0x402dfd;
  lab_0x402f8a_2:
    // 0x402fc7
    return function_402b70(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403a9a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402d71;
    } else {
        uint64_t v49 = v46 + v5; // 0x40366e
        int64_t v50 = v5 + 1; // 0x403751
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403758
        char v52 = v20; // 0x403758
        int64_t v53 = result; // 0x403758
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403721
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403725
            int64_t v56 = v54 + 1; // 0x40372a
            int64_t v57 = v51 + 1; // 0x403751
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40371c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403721
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403725
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
        goto lab_0x402dfd;
    }
  lab_0x4034f0:
    // 0x4034f0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x40350f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403512
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x403a9a
        goto lab_0x403a9a_2;
    }
    goto lab_0x40351f;
  lab_0x402d3d:
    // 0x402d3d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402f8a_2;
    }
    goto lab_0x402d71;
  lab_0x402d15:;
    bool v60 = v15 == 1; // 0x402d20
    if (v15 == -1) {
        // 0x402d22
        v60 = *(char *)v1 == 0;
    }
    // 0x402d2e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402d71;
    } else {
        goto lab_0x402d3d;
    }
  lab_0x402dfd:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x402e02
        *(char *)(v44 + v45) = v40;
    }
    // 0x402e06
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402c18_2;
}
// Address range: 0x403da0 - 0x403f3e
int64_t function_403da0(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403da2
    int32_t * v3 = __errno_location(); // 0x403dbc
    int64_t v4 = (int64_t)g21; // 0x403dc1
    int32_t v5 = *v3; // 0x403dcb
    int64_t v6 = v4; // 0x403de1
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403f39
            function_4051e0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x403df0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x403df7
        int64_t v9; // 0x403da0
        if (g21 == &g22) {
            int64_t v10 = function_404ff0(0, v8); // 0x403f1a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x403f1f
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404ff0(v4, v8); // 0x403e0b
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x403e1a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x403e1a
        int32_t v14 = v7; // 0x403e21
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403e51
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x403e5b
    int64_t * v17 = (int64_t *)v15; // 0x403e5e
    uint64_t v18 = *v17; // 0x403e5e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403e61
    int64_t result = *v19; // 0x403e61
    int64_t v20; // 0x403da0
    uint64_t v21 = function_402b70(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403e84
    if (v18 > v21) {
        // 0x403efb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403e97
    *v17 = v22;
    if (result != (int64_t)&g37) {
        // 0x403ea7
        free((int64_t *)result);
    }
    int64_t result2 = function_404f90(v22); // 0x403ec1
    *v19 = result2;
    int64_t v23; // 0x403da0
    function_402b70(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x403efb
    *v3 = v5;
    return result2;
}
// Address range: 0x403f40 - 0x403f74
int64_t function_403f40(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403f47
    int64_t result = function_405190(a1 == 0 ? (int64_t)&g38 : a1, 56); // 0x403f66
    return result;
}
// Address range: 0x403f80 - 0x403f8f
int64_t function_403f80(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g38 : a1); // 0x403f8c
    return result;
}
// Address range: 0x403f90 - 0x403f9f
int64_t function_403f90(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x403f98
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g38;
}
// Address range: 0x403fa0 - 0x403fd3
int64_t function_403fa0(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 + 8 : a1 + 8; // 0x403fb9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403fbe
    uint32_t v3 = *v2; // 0x403fbe
    uint32_t v4 = (int32_t)a2 % 32; // 0x403fc2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403fe0 - 0x403ff3
int64_t function_403fe0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g38 + 4 : a1 + 4); // 0x403fec
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404000 - 0x40402b
int64_t function_404000(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g38 : a1; // 0x404008
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x404025
        abort();
        // UNREACHABLE
    }
    // 0x40401c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g38;
}
// Address range: 0x404030 - 0x4040a2
int64_t function_404030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g38 : a5; // 0x404052
    int32_t * v2 = __errno_location(); // 0x40405b
    uint32_t v3 = *(int32_t *)v1; // 0x40407b
    int64_t result = function_402b70(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40408a
    return result;
}
// Address range: 0x4040b0 - 0x404191
int64_t function_4040b0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g38 : a4; // 0x4040d2
    int32_t * v2 = __errno_location(); // 0x4040d8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x4040f7
    int32_t * v4 = (int32_t *)v1; // 0x4040fa
    int64_t v5 = function_402b70(0, 0, a1, a2, (int64_t)*v4, v3); // 0x404115
    int64_t v6 = v5 + 1; // 0x40411a
    int64_t result = function_404f90(v6); // 0x40412f
    function_402b70(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404174
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40417d
    return result;
}
// Address range: 0x4041a0 - 0x4041aa
int64_t function_4041a0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4041a0
    return function_4040b0(a1, a2, 0, a3);
}
// Address range: 0x4041b0 - 0x404245
int64_t function_4041b0(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x4041b0
    int64_t v2 = v1; // 0x4041b0
    int64_t v3 = v2; // 0x4041c4
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x4041e3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g50;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x4041e0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g50;
        }
    }
    int64_t v6 = v3; // 0x4041fd
    if (g22 != 0x60b320) {
        // 0x4041ff
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g37;
        v6 = &g50;
    }
    int64_t result = v6; // 0x404221
    if (g21 != &g22) {
        // 0x404223
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g50;
    }
    // 0x404236
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x404250 - 0x404261
int64_t function_404250(void) {
    // 0x404250
    int64_t v1; // 0x404250
    return function_403da0(v1, v1, -1, (int64_t *)&g38);
}
// Address range: 0x404270 - 0x40427a
int64_t function_404270(void) {
    // 0x404270
    int64_t v1; // 0x404270
    return function_403da0(v1, v1, v1, (int64_t *)&g38);
}
// Address range: 0x404280 - 0x404296
int64_t function_404280(int64_t a1) {
    // 0x404280
    return function_403da0(0, a1, -1, (int64_t *)&g38);
}
// Address range: 0x4042a0 - 0x4042b2
int64_t function_4042a0(int64_t a1, int64_t a2) {
    // 0x4042a0
    return function_403da0(0, a1, a2, (int64_t *)&g38);
}
// Address range: 0x4042c0 - 0x404328
int64_t function_4042c0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4042d0
    return function_403da0((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x404330 - 0x404394
int64_t function_404330(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404340
    return function_403da0((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x4043a0 - 0x4043ac
int64_t function_4043a0(int64_t a1, int64_t a2) {
    // 0x4043a0
    return function_4042c0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x4043b0 - 0x4043bf
int64_t function_4043b0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4043b0
    return function_404330(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x4043c0 - 0x404430
int64_t function_4043c0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x4043cd
    int128_t v2 = __asm_movdqa(g39); // 0x4043d5
    int128_t v3 = __asm_movdqa(g40); // 0x4043dd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x4043f2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404408
    uint32_t v6 = *v5; // 0x404408
    uint32_t v7 = (int32_t)a3 % 32; // 0x40440d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403da0(0, a1, a2, &v4);
}
// Address range: 0x404430 - 0x40443d
int64_t function_404430(int64_t a1, int64_t a2) {
    // 0x404430
    return function_4043c0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404440 - 0x404451
int64_t function_404440(int64_t a1) {
    // 0x404440
    return function_4043c0(a1, -1, 58);
}
// Address range: 0x404460 - 0x40446a
int64_t function_404460(void) {
    // 0x404460
    int64_t v1; // 0x404460
    return function_4043c0(v1, v1, 58);
}
// Address range: 0x404470 - 0x4044de
int64_t function_404470(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x40448a
    return function_403da0(a1, a3, -1, &v1);
}
// Address range: 0x4044e0 - 0x40454c
int64_t function_4044e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g38); // 0x4044e7
    int128_t v2 = __asm_movdqa(g39); // 0x4044ef
    int128_t v3 = __asm_movdqa(g40); // 0x4044f7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404519
    if (a2 == 0 || a3 == 0) {
        // 0x404547
        abort();
        // UNREACHABLE
    }
    // 0x40452a
    return function_403da0(a1, a4, a5, &v4);
}
// Address range: 0x404550 - 0x404559
int64_t function_404550(void) {
    // 0x404550
    int64_t v1; // 0x404550
    return function_4044e0(v1, v1, v1, v1, -1);
}
// Address range: 0x404560 - 0x404577
int64_t function_404560(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404560
    return function_4044e0(0, a1, a2, a3, -1);
}
// Address range: 0x404580 - 0x404593
int64_t function_404580(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404580
    return function_4044e0(0, a1, a2, a3, a4);
}
// Address range: 0x4045a0 - 0x4045aa
int64_t function_4045a0(void) {
    // 0x4045a0
    int64_t v1; // 0x4045a0
    return function_403da0(v1, v1, v1, &g20);
}
// Address range: 0x4045b0 - 0x4045c2
int64_t function_4045b0(int64_t a1, int64_t a2) {
    // 0x4045b0
    return function_403da0(0, a1, a2, &g20);
}
// Address range: 0x4045d0 - 0x4045e1
int64_t function_4045d0(void) {
    // 0x4045d0
    int64_t v1; // 0x4045d0
    return function_403da0(v1, v1, -1, &g20);
}
// Address range: 0x4045f0 - 0x404606
int64_t function_4045f0(int64_t a1) {
    // 0x4045f0
    return function_403da0(0, a1, -1, &g20);
}
// Address range: 0x404610 - 0x40491d
int64_t function_404610(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1;
    if (a5 != 0) {
        // 0x404648
        *(int64_t *)a5 = 0;
    }
    if (a6 != 0) {
        // 0x404655
        *(int64_t *)a6 = 0;
    }
    int32_t v2 = a3;
    int64_t v3; // 0x404610
    int64_t v4 = a4 == 0 ? 0xffffffff : v3 & 0xffffffff;
    char * name; // 0x404610
    int64_t v5; // 0x404610
    int64_t v6; // 0x404610
    int64_t v7; // 0x404610
    int64_t v8; // 0x404610
    int64_t v9; // 0x404610
    int64_t v10; // 0x404610
    int64_t v11; // 0x404610
    int64_t v12; // 0x404610
    int64_t v13; // 0x404610
    int64_t v14; // 0x404610
    int32_t v15; // 0x404610
    if (a2 == 0) {
        // 0x4047e8
        v15 = v2;
        v11 = 0;
        v8 = 0;
        v10 = v4;
        if (*(char *)&v1 == 0) {
            goto lab_0x4046bf;
        } else {
            // 0x4047f6
            v13 = function_4051c0(v1);
            goto lab_0x404808;
        }
    } else {
        int64_t v16 = a2 - v1; // 0x404669
        if (v16 != 0) {
            int64_t v17 = function_405190(v1, v16 + 1); // 0x404719
            *(char *)(v17 + v16) = 0;
            int64_t v18 = a2 + 1; // 0x40472b
            v13 = v17;
            if (*(char *)v18 == 0) {
                goto lab_0x404808;
            } else {
                // 0x404736
                v7 = v18;
                if (v17 == 0) {
                    goto lab_0x404681;
                } else {
                    int64_t v19 = v18 == 0; // 0x404746
                    char * v20 = (char *)v17;
                    name = v20;
                    v5 = v19;
                    v12 = v17;
                    v9 = v18;
                    v6 = v19;
                    v14 = v17;
                    if (*v20 == 43) {
                        goto lab_0x404826;
                    } else {
                        goto lab_0x40475a;
                    }
                }
            }
        } else {
            int64_t v21 = a2 + 1; // 0x404672
            v7 = v21;
            v15 = v2;
            v11 = 0;
            v8 = 0;
            v10 = v4;
            if (*(char *)v21 == 0) {
                goto lab_0x4046bf;
            } else {
                goto lab_0x404681;
            }
        }
    }
  lab_0x4046bf:
    // 0x4046bf
    *(int32_t *)a3 = v15;
    if (a4 != 0) {
        // 0x4046cf
        *(int32_t *)a4 = (int32_t)v10;
    }
    int64_t v22 = v11; // 0x4046d6
    if (a5 != 0) {
        // 0x4046d8
        *(int64_t *)a5 = v11;
        v22 = 0;
    }
    int64_t v23 = v8; // 0x4046e1
    if (a6 != 0) {
        // 0x4046e3
        *(int64_t *)a6 = v8;
        v23 = 0;
    }
    // 0x4046ea
    free((int64_t *)v22);
    free((int64_t *)v23);
    return (int32_t)&g50 ^ (int32_t)&g50;
  lab_0x404808:
    // 0x404808
    v15 = v2;
    v11 = 0;
    v8 = 0;
    v10 = v4;
    if (v13 == 0) {
        goto lab_0x4046bf;
    } else {
        int64_t v24 = a2 != 0; // 0x40481b
        char * v25 = (char *)v13;
        name = v25;
        v5 = v24;
        v12 = v13;
        v9 = 0;
        v6 = v24;
        v14 = v13;
        if (*v25 != 43) {
            goto lab_0x40475a;
        } else {
            goto lab_0x404826;
        }
    }
  lab_0x404681:
    // 0x404681
    v15 = v2;
    v11 = 0;
    v8 = 0;
    v10 = v4;
    if (v7 == 0) {
        goto lab_0x4046bf;
    } else {
        goto lab_0x404690;
    }
  lab_0x404690:;
    int64_t v26 = 0;
    char * v27 = (char *)v7;
    char * name2 = v27; // 0x404694
    int32_t v28 = v2; // 0x404694
    int64_t v29 = v26; // 0x404694
    int64_t v30 = v7; // 0x404694
    int32_t v31 = v2; // 0x404694
    int64_t v32 = v26; // 0x404694
    int64_t v33 = v7; // 0x404694
    if (*v27 == 43) {
        goto lab_0x40479b;
    } else {
        goto lab_0x40469a;
    }
  lab_0x40475a:;
    struct passwd * v34 = getpwnam(name); // 0x404761
    v6 = v5;
    v14 = v12;
    int32_t v35; // bp-88, 0x404610
    if (v34 == NULL) {
        goto lab_0x404826;
    } else {
        int64_t v36 = (int64_t)v34; // 0x404761
        int32_t v37 = *(int32_t *)(v36 + 16); // 0x404774
        if (v5 != 0) {
            uint32_t gid = *(int32_t *)(v36 + 20); // 0x404878
            int64_t v38 = gid; // 0x404878
            struct group * v39 = getgrgid(gid); // 0x40487f
            int64_t v40; // 0x404610
            if (v39 == NULL) {
                // 0x404908
                v40 = function_406590(v38, (int64_t *)&v35);
            } else {
                // 0x404889
                v40 = *(int64_t *)v39;
            }
            // 0x40488c
            v1 = v40;
            int64_t v41 = function_4051c0(v40); // 0x40488c
            endgrent();
            endpwent();
            v15 = v37;
            v11 = v12;
            v8 = v41;
            v10 = v38;
            goto lab_0x4046bf;
        } else {
            // 0x404783
            endpwent();
            v15 = v37;
            v11 = v12;
            v8 = 0;
            v10 = v4;
            if (v9 == 0) {
                goto lab_0x4046bf;
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
                    goto lab_0x40469a;
                } else {
                    goto lab_0x40479b;
                }
            }
        }
    }
  lab_0x404826:;
    // 0x404826
    int64_t v43; // 0x404610
    int64_t * v44; // 0x404610
    int64_t v45; // 0x404610
    if ((char)v6 == 0) {
        int64_t v46 = function_405250(v14, 0, 10, (int64_t *)&v35, (int64_t *)&g11, a6); // 0x4048bd
        if ((int32_t)v46 != 0) {
            goto lab_0x4048f0;
        } else {
            // 0x4048c6
            if (v35 > -1) {
                // 0x4048d9
                int64_t v47; // 0x404610
                int64_t v48 = v47;
                endpwent();
                int32_t v49; // 0x4048c6
                v15 = v49;
                int64_t v50; // 0x404610
                v11 = v50;
                v8 = 0;
                v10 = v4;
                if (v48 == 0) {
                    goto lab_0x4046bf;
                } else {
                    goto lab_0x404690;
                }
            } else {
                goto lab_0x4048f0;
            }
        }
    } else {
        // 0x40482a
        endpwent();
        v45 = v14;
        v44 = NULL;
        v43 = (int64_t)"invalid spec";
        goto lab_0x404837;
    }
  lab_0x40479b:;
    int64_t v51 = function_405250(v33, 0, 10, (int64_t *)&v35, (int64_t *)&g11, a6); // 0x4047b0
    int64_t v52; // 0x404610
    int64_t v53; // 0x404610
    int64_t v54; // 0x404610
    int32_t v55; // 0x404610
    if ((int32_t)v51 != 0) {
        goto lab_0x4047cc;
    } else {
        // 0x4047b9
        v55 = v31;
        v54 = v32;
        v52 = v33;
        v53 = v35;
        if (v35 > -1) {
            goto lab_0x4046af;
        } else {
            goto lab_0x4047cc;
        }
    }
  lab_0x40469a:;
    struct group * v56 = getgrnam(name2); // 0x40469d
    v31 = v28;
    v32 = v29;
    v33 = v30;
    if (v56 == NULL) {
        goto lab_0x40479b;
    } else {
        // 0x4046ab
        v55 = v28;
        v54 = v29;
        v52 = v30;
        v53 = (int64_t)*(int32_t *)((int64_t)v56 + 16);
        goto lab_0x4046af;
    }
  lab_0x4047cc:
    // 0x4047cc
    endgrent();
    v45 = v32;
    v44 = (int64_t *)function_4051c0(v33);
    v43 = (int64_t)"invalid group";
    goto lab_0x404837;
  lab_0x4048f0:
    // 0x4048f0
    endpwent();
    v45 = v14;
    v44 = NULL;
    v43 = (int64_t)"invalid user";
    goto lab_0x404837;
  lab_0x404837:
    // 0x404837
    free((int64_t *)v45);
    free(v44);
    return (int64_t)dcgettext(NULL, (char *)v43, 5);
  lab_0x4046af:
    // 0x4046af
    endgrent();
    v15 = v55;
    v11 = v54;
    v8 = function_4051c0(v52);
    v10 = v53;
    goto lab_0x4046bf;
}
// Address range: 0x404920 - 0x4049ed
int64_t function_404920(int64_t a1, int32_t * a2, int32_t * a3, int32_t a4, int32_t a5) {
    int64_t v1 = a5;
    int64_t v2 = a4;
    int64_t v3 = (int64_t)a2;
    if (a3 == NULL) {
        // 0x4049d0
        return function_404610(a1, 0, v3, 0, v2, v1);
    }
    int64_t v4 = (int64_t)a3;
    char * str = (char *)a1; // 0x40494b
    char * found_char_pos = strchr(str, 58); // 0x40494b
    int64_t result = function_404610(a1, (int64_t)found_char_pos, v3, v4, v2, v1); // 0x404965
    if (found_char_pos != NULL) {
        // 0x4049b4
        return result;
    }
    if (result == 0) {
        // 0x4049b4
        return 0;
    }
    char * found_char_pos2 = strchr(str, 46); // 0x404984
    if (found_char_pos2 == NULL || function_404610(a1, (int64_t)found_char_pos2, v3, v4, v2, v1) != 0) {
        // 0x4049b4
        return 0x100000000 * result >> 32;
    }
    // 0x4049b4
    return 0;
}
// Address range: 0x4049f0 - 0x404dcd
int64_t function_4049f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404a88
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404a0c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404a26
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404a6b
    if (a6 < 10) {
        // 0x404a7a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404b72
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x404dd0 - 0x404df0
int64_t function_404dd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x404dd0
    if (a5 == 0) {
        // 0x404deb
        return function_4049f0(a1, a2, a3, a4, a5, 0, (int64_t)&g50);
    }
    int64_t v1 = 0; // 0x404dd7
    v1++;
    int64_t v2 = v1; // 0x404de9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x404de0
        v1++;
        v2 = v1;
    }
    // 0x404deb
    return function_4049f0(a1, a2, a3, a4, a5, v2, (int64_t)&g50);
}
// Address range: 0x404df0 - 0x404e50
int64_t function_404df0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404df0
    int64_t v3 = &v2; // 0x404df0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404e23
    int64_t v6; // 0x404e0d
    int64_t * v7; // 0x404e2b
    int64_t v8; // 0x404e2b
    int64_t v9; // 0x404e37
    if (v5 < 48) {
        // 0x404e00
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404e43
            break;
        }
    } else {
        // 0x404e2b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404e43
            break;
        }
    }
    int64_t v10 = 10; // 0x404e21
    while (v4 != 9) {
        // 0x404e19
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404e00
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404e43
                break;
            }
        } else {
            // 0x404e2b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404e43
                break;
            }
        }
        // 0x404e19
        v10 = 10;
    }
    // 0x404e43
    return function_4049f0(a1, a2, a3, a4, v3, v10, (int64_t)&g50);
}
// Address range: 0x404e50 - 0x404f0c
int64_t function_404e50(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404e50
    int64_t v1; // bp-168, 0x404e50
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404e50
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404e50
    int64_t v8; // 0x404e50
    int64_t v9; // bp-56, 0x404e50
    int64_t v10; // 0x404eb5
    int64_t v11; // 0x404ed9
    if ((int32_t)v6 < 48) {
        // 0x404ea0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404ef0
            break;
        }
    } else {
        // 0x404ed2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404ef0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x404eca
    int64_t v13 = 10; // 0x404eca
    while (v5 != 9) {
        // 0x404ecc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x404ea0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404ef0
                break;
            }
        } else {
            // 0x404ed2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404ef0
                break;
            }
        }
        // 0x404ec2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404ef0
    int64_t v14; // bp-136, 0x404e50
    int64_t result = function_4049f0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g50); // 0x404eff
    return result;
}
// Address range: 0x404f10 - 0x404f84
int64_t function_404f10(int64_t a1) {
    // 0x404f10
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404f73
    return fputs_unlocked(v1, g29);
}
// Address range: 0x404f90 - 0x404faa
int64_t function_404f90(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x404f94
    if (size != 0 != (mem == NULL)) {
        // 0x404fa3
        return (int64_t)mem;
    }
    // 0x404fa5
    function_4051e0(size);
    // UNREACHABLE
}
// Address range: 0x404fb0 - 0x404fd1
int64_t function_404fb0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x404fb3
    int64_t v2 = v1; // 0x404fb3
    if (v2 < 0) {
        // 0x404fcb
        function_4051e0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404fc9
        return function_404f90(v2);
    }
    // 0x404fcb
    function_4051e0(v2);
    // UNREACHABLE
}
// Address range: 0x404fe0 - 0x404fe2
int64_t function_404fe0(void) {
    // 0x404fe0
    int64_t v1; // 0x404fe0
    return function_404f90(v1);
}
// Address range: 0x404ff0 - 0x405026
int64_t function_404ff0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x405018
        free(v1);
        return (int32_t)&g50 ^ (int32_t)&g50;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x405001
    if (a2 != 0 != (mem == NULL)) {
        // 0x405010
        return (int64_t)mem;
    }
    // 0x405021
    function_4051e0(a1);
    // UNREACHABLE
}
// Address range: 0x405030 - 0x405051
int64_t function_405030(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x405033
    int64_t v2 = v1; // 0x405033
    if (v2 < 0) {
        // 0x40504b
        function_4051e0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405049
        return function_404ff0(a1, v2);
    }
    // 0x40504b
    function_4051e0(a1);
    // UNREACHABLE
}
// Address range: 0x405060 - 0x4050e6
int64_t function_405060(int64_t a1, int64_t * a2, uint64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = (int64_t)a2;
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= v1) {
            // 0x4050bb
            function_4051e0(a1);
            // UNREACHABLE
        }
        int64_t v2 = v1 + 1 + v1 / 2;
        *a2 = v2;
        return function_404ff0(a1, v2 * a3);
    }
    int64_t v3 = v1; // 0x4050a3
    if (a2 == NULL) {
        // 0x4050c8
        v3 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v4 = (int128_t)v3 * (int128_t)a3; // 0x4050a8
    if ((int64_t)v4 > -1 != v4 <= 0xffffffffffffffff) {
        // 0x4050bb
        function_4051e0(a1);
        // UNREACHABLE
    }
    // 0x40508a
    *a2 = v3;
    return function_404ff0(a1, v3 * a3);
}
// Address range: 0x4050f0 - 0x405140
int64_t function_4050f0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4050f0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40513a
            function_4051e0(a1);
            // UNREACHABLE
        }
        // 0x405112
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404ff0(a1, v1);
    }
    if (a2 == 0) {
        // 0x405125
        *(int64_t *)a2 = 128;
        return function_404ff0(0, 128);
    }
    // 0x405138
    if (a2 < 0) {
        // 0x40513a
        function_4051e0(a1);
        // UNREACHABLE
    }
    // 0x405112
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404ff0(a1, v1);
}
// Address range: 0x405140 - 0x405157
int64_t function_405140(int64_t a1, int64_t a2) {
    // 0x405140
    return (int64_t)memset((int64_t *)function_404f90(a1), 0, (int32_t)a1);
}
// Address range: 0x405160 - 0x40518e
int64_t function_405160(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405167
    if ((int64_t)v1 < 0) {
        // 0x405189
        function_4051e0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405189
        function_4051e0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40517a
    if (mem != NULL) {
        // 0x405184
        return (int64_t)mem;
    }
    // 0x405189
    function_4051e0(nmemb);
    // UNREACHABLE
}
// Address range: 0x405190 - 0x4051b8
int64_t function_405190(int64_t a1, int64_t a2) {
    int64_t v1 = function_404f90(a2); // 0x40519f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4051c0 - 0x4051d3
int64_t function_4051c0(int64_t str) {
    // 0x4051c0
    return function_405190(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4051e0 - 0x405211
int64_t function_4051e0(int64_t a1) {
    // 0x4051e0
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x405220 - 0x405247
int64_t function_405220(void) {
    // 0x405220
    int64_t v1; // 0x405220
    int64_t v2 = function_406b90(v1, v1, v1); // 0x405221
    if ((int32_t)v2 != -1 || *__errno_location() != 12) {
        // 0x40522d
        return v2 & 0xffffffff;
    }
    // 0x405242
    function_4051e0(v1);
    // UNREACHABLE
}
// Address range: 0x405250 - 0x40575f
int64_t function_405250(int64_t str, int32_t a2, int64_t a3, int64_t * a4, int64_t * str2, int64_t a6) {
    uint32_t base = (int32_t)a3; // 0x40525e
    if (base >= 37) {
        // 0x4056fc
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoul");
        *(int32_t *)"<= 36" = 0x2f62696c;
        *(int32_t *)"ase <= 36" = 0x1ca79f91;
        return 0xfc422c30;
    }
    char c = str;
    int32_t * v1 = __errno_location(); // 0x405282
    *v1 = 0;
    int64_t v2 = (int64_t)*__ctype_b_loc() + 1; // 0x4052b2
    int64_t v3 = str; // 0x4052b7
    char v4 = c; // 0x4052b7
    if ((*(char *)(v2 + (2 * str & 510)) & 32) != 0) {
        v3++;
        unsigned char v5 = *(char *)v3; // 0x4052ac
        v4 = v5;
        while ((*(char *)(2 * (int64_t)v5 + v2) & 32) != 0) {
            // 0x4052a8
            v3++;
            v5 = *(char *)v3;
            v4 = v5;
        }
    }
    // 0x4052b9
    if (v4 == 45) {
        // 0x4052f3
        return 4;
    }
    // 0x4052be
    int64_t v6; // bp-64, 0x405250
    int64_t endptr = a2 == 0 ? (int64_t)&v6 : (int64_t)a2; // 0x40527e
    int32_t str_as_ul = strtoul((char *)str, (char **)endptr, base); // 0x4052c4
    int64_t * v7 = (int64_t *)endptr; // 0x4052c9
    int64_t v8 = *v7; // 0x4052c9
    char v9; // 0x405250
    int64_t v10; // 0x405250
    int64_t v11; // 0x405250
    int64_t v12; // 0x405250
    int64_t v13; // 0x405250
    int64_t v14; // 0x405250
    int64_t v15; // 0x405250
    if (v8 == str) {
        // 0x405320
        if (c == 0 || str2 == NULL) {
            // 0x4052f3
            return 4;
        }
        char * found_char_pos = strchr((char *)str2, (int32_t)c); // 0x405341
        v14 = 1;
        v11 = 0;
        v9 = c;
        if (found_char_pos == NULL) {
            // 0x4052f3
            return 4;
        }
        goto lab_0x40534f;
    } else {
        int32_t v16 = *v1; // 0x4052d4
        int64_t v17 = 0; // 0x4052da
        if (v16 != 0) {
            // 0x405308
            v17 = 1;
            if (v16 != 34) {
                // 0x4052f3
                return 4;
            }
        }
        int64_t v18 = str_as_ul; // 0x4052c4
        v13 = v18;
        v10 = v17;
        if (str2 == NULL) {
            goto lab_0x4052f0;
        } else {
            char c2 = *(char *)v8; // 0x4052e3
            v13 = v18;
            v10 = v17;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str2, (int32_t)c2); // 0x405443
                v14 = v18;
                v11 = v17;
                v9 = c2;
                v15 = v18;
                v12 = v17;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40534f;
                } else {
                    goto lab_0x405455;
                }
            } else {
                goto lab_0x4052f0;
            }
        }
    }
  lab_0x40534f:;
    unsigned char v19 = v9 - 69;
    int64_t v20 = 1024; // 0x405357
    int64_t v21 = 1; // 0x405357
    int64_t v22; // 0x405250
    int64_t v23; // 0x405250
    int64_t v24; // 0x405250
    int64_t v25; // 0x405250
    int64_t v26; // 0x405250
    int64_t v27; // 0x405250
    int64_t v28; // 0x405250
    int64_t v29; // 0x405250
    int64_t v30; // 0x405250
    int64_t v31; // 0x405250
    int64_t v32; // 0x405250
    int64_t v33; // 0x405250
    int64_t v34; // 0x405250
    int64_t v35; // 0x405250
    int64_t v36; // 0x405250
    int64_t v37; // 0x405250
    int64_t v38; // 0x405250
    int64_t v39; // 0x405250
    int64_t v40; // 0x405250
    int64_t v41; // 0x405250
    if (v19 < 48) {
        // 0x405359
        v20 = 1024;
        v21 = 1;
        if ((1 << (int64_t)((v9 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x4053ba;
        } else {
            // 0x40536c
            v20 = 1024;
            v21 = 1;
            if (strchr((char *)str2, 48) == NULL) {
                goto lab_0x4053ba;
            } else {
                // 0x405388
                v20 = 1000;
                v21 = 2;
                switch (*(char *)(v8 + 1)) {
                    case 68: {
                        goto lab_0x4053ba;
                    }
                    case 105: {
                        char v42 = *(char *)(v8 + 2); // 0x4055e9
                        v20 = 1024;
                        v21 = (v42 == 66 ? 2 : 1) + (int64_t)(v42 == 66);
                        goto lab_0x4053ba;
                    }
                    default: {
                        // 0x40539d
                        g47 = v19;
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
                                goto lab_0x40555b;
                            }
                            case 70: {
                                goto lab_0x405455;
                            }
                            case 71: {
                                goto lab_0x405593;
                            }
                            case 72: {
                                goto lab_0x405455;
                            }
                            case 73: {
                                goto lab_0x405455;
                            }
                            case 74: {
                                goto lab_0x405455;
                            }
                            case 75: {
                                goto lab_0x40541c;
                            }
                            case 76: {
                                goto lab_0x405455;
                            }
                            case 77: {
                                goto lab_0x4053de;
                            }
                            case 78: {
                                goto lab_0x405455;
                            }
                            case 79: {
                                goto lab_0x405455;
                            }
                            case 80: {
                                goto lab_0x405528;
                            }
                            case 81: {
                                goto lab_0x405455;
                            }
                            case 82: {
                                goto lab_0x405455;
                            }
                            case 83: {
                                goto lab_0x405455;
                            }
                            case 84: {
                                goto lab_0x4054f8;
                            }
                            case 85: {
                                goto lab_0x405455;
                            }
                            case 86: {
                                goto lab_0x405455;
                            }
                            case 87: {
                                goto lab_0x405455;
                            }
                            case 88: {
                                goto lab_0x405455;
                            }
                            case 89: {
                                goto lab_0x4054c6;
                            }
                            case 90: {
                                goto lab_0x40548b;
                            }
                            case 91: {
                                goto lab_0x405455;
                            }
                            case 92: {
                                goto lab_0x405455;
                            }
                            case 93: {
                                goto lab_0x405455;
                            }
                            case 94: {
                                goto lab_0x405455;
                            }
                            case 95: {
                                goto lab_0x405455;
                            }
                            case 96: {
                                goto lab_0x405455;
                            }
                            case 97: {
                                goto lab_0x405455;
                            }
                            case 98: {
                                goto lab_0x40546f;
                            }
                            case 99: {
                                goto lab_0x4053f8;
                            }
                            case 100: {
                                goto lab_0x405455;
                            }
                            case 101: {
                                goto lab_0x405455;
                            }
                            case 102: {
                                goto lab_0x405455;
                            }
                            case 103: {
                                goto lab_0x405593;
                            }
                            case 104: {
                                goto lab_0x405455;
                            }
                            case 105: {
                                goto lab_0x405455;
                            }
                            case 106: {
                                goto lab_0x405455;
                            }
                            case 107: {
                                goto lab_0x40541c;
                            }
                            case 108: {
                                goto lab_0x405455;
                            }
                            case 109: {
                                goto lab_0x4053de;
                            }
                            case 110: {
                                goto lab_0x405455;
                            }
                            case 111: {
                                goto lab_0x405455;
                            }
                            case 112: {
                                goto lab_0x405455;
                            }
                            case 113: {
                                goto lab_0x405455;
                            }
                            case 114: {
                                goto lab_0x405455;
                            }
                            case 115: {
                                goto lab_0x405455;
                            }
                            case 116: {
                                goto lab_0x4054f8;
                            }
                            default: {
                                goto lab_0x4053ba;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x4053ba;
    }
  lab_0x4052f0:
    // 0x4052f0
    *a4 = v13;
    // 0x4052f3
    return v10 & 0xffffffff;
  lab_0x4053ba:
    // 0x4053ba
    g48 = v9 - 66;
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
    int64_t v43; // 0x405250
    switch (v9) {
        case 66: {
            // 0x4055b4
            v43 = v21;
            if (v14 >= 0x40000000000000) {
                goto lab_0x405427;
            } else {
                // 0x4055c1
                v23 = 1024 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x4053f8;
            }
        }
        case 69: {
            goto lab_0x40555b;
        }
        case 71: {
            goto lab_0x405593;
        }
        case 75: {
            goto lab_0x40541c;
        }
        case 77: {
            goto lab_0x4053de;
        }
        case 80: {
            goto lab_0x405528;
        }
        case 84: {
            goto lab_0x4054f8;
        }
        case 89: {
            goto lab_0x4054c6;
        }
        case 90: {
            goto lab_0x40548b;
        }
        case 98: {
            goto lab_0x40546f;
        }
        case 99: {
            goto lab_0x4053f8;
        }
        case 103: {
            goto lab_0x405593;
        }
        case 107: {
            goto lab_0x40541c;
        }
        case 109: {
            goto lab_0x4053de;
        }
        case 116: {
            goto lab_0x4054f8;
        }
        case 119: {
            // 0x405460
            v43 = v21;
            if (v14 < 0) {
                goto lab_0x405427;
            } else {
                // 0x405465
                v23 = 2 * v14;
                v22 = v11;
                v37 = v21;
                goto lab_0x4053f8;
            }
        }
        default: {
            goto lab_0x405455;
        }
    }
  lab_0x40555b:;
    uint128_t v44 = (int128_t)v14 * (int128_t)v30; // 0x405573
    int64_t v45 = (int64_t)(v44 < 0xffffffffffffffff ? v44 : 0xffffffffffffffff);
    int64_t v46 = v44 > 0xffffffffffffffff ? 1 : 0;
    int32_t v47 = 5; // 0x40557f
    int64_t v48 = v45; // 0x405582
    int64_t v49 = v34; // 0x405582
    int64_t v50 = v46; // 0x405582
    int32_t v51 = v47; // 0x405582
    int64_t v52 = v46; // 0x405582
    while (v47 != 0) {
        // 0x405570
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
    goto lab_0x4054b4;
  lab_0x405593:
    // 0x405593
    v23 = -1;
    v22 = 1;
    v37 = v35;
    if ((int128_t)v31 * (int128_t)v14 <= 0xffffffffffffffff) {
        // 0x40559e
        int128_t v53; // 0x405599
        uint128_t v54; // 0x405599
        uint128_t v55 = (v54 & 0xffffffffffffffff) * v53; // 0x40559e
        v23 = -1;
        v22 = 1;
        int64_t v56; // 0x405250
        v37 = v56;
        if (v55 <= 0xffffffffffffffff) {
            uint128_t v57 = (v55 & 0xffffffffffffffff) * v53; // 0x4055a3
            v23 = -1;
            v22 = 1;
            v37 = v56;
            if (v57 <= 0xffffffffffffffff) {
                // 0x4055a8
                v23 = v57;
                int64_t v58; // 0x405250
                v22 = v58 & 0xffffffff;
                v37 = v56;
            }
        }
    }
    goto lab_0x4053f8;
  lab_0x40541c:;
    uint128_t v61 = (int128_t)v25 * (int128_t)v14; // 0x40541f
    v23 = v61;
    v22 = v11;
    v37 = v38;
    v43 = v38;
    if (v61 <= 0xffffffffffffffff) {
        goto lab_0x4053f8;
    } else {
        goto lab_0x405427;
    }
  lab_0x4053de:;
    int128_t v62 = v24; // 0x4053e4
    uint128_t v63 = v62 * (int128_t)v14; // 0x4053e4
    v43 = v36;
    if (v63 > 0xffffffffffffffff) {
        goto lab_0x405427;
    } else {
        uint128_t v64 = (v63 & 0xffffffffffffffff) * v62; // 0x4053e9
        v43 = v36;
        if (v64 > 0xffffffffffffffff) {
            goto lab_0x405427;
        } else {
            // 0x4053ee
            v23 = v64;
            v22 = v11;
            v37 = v36;
            goto lab_0x4053f8;
        }
    }
  lab_0x405528:;
    uint128_t v65 = (int128_t)v14 * (int128_t)v29; // 0x40553b
    int64_t v66 = (int64_t)(v65 < 0xffffffffffffffff ? v65 : 0xffffffffffffffff);
    int64_t v67 = v65 > 0xffffffffffffffff ? 1 : 0;
    int32_t v68 = 4; // 0x405547
    v48 = v66;
    v49 = v33;
    v50 = v67;
    int32_t v69 = v68; // 0x40554a
    int64_t v70 = v67; // 0x40554a
    while (v68 != 0) {
        // 0x405538
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
    goto lab_0x4054b4;
  lab_0x4054f8:;
    uint128_t v71 = (int128_t)v14 * (int128_t)v28; // 0x40550b
    int64_t v72 = (int64_t)(v71 < 0xffffffffffffffff ? v71 : 0xffffffffffffffff);
    int64_t v73 = v71 > 0xffffffffffffffff ? 1 : 0;
    int32_t v74 = 3; // 0x405517
    v48 = v72;
    v49 = v32;
    v50 = v73;
    int32_t v75 = v74; // 0x40551a
    int64_t v76 = v73; // 0x40551a
    while (v74 != 0) {
        // 0x405508
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
    goto lab_0x4054b4;
  lab_0x4054c6:;
    uint128_t v77 = (int128_t)v14 * (int128_t)v27; // 0x4054db
    int64_t v78 = (int64_t)(v77 < 0xffffffffffffffff ? v77 : 0xffffffffffffffff);
    int64_t v79 = v77 > 0xffffffffffffffff ? 1 : 0;
    int32_t v80 = 7; // 0x4054e7
    v48 = v78;
    v49 = v41;
    v50 = v79;
    int32_t v81 = v80; // 0x4054ea
    int64_t v82 = v79; // 0x4054ea
    while (v80 != 0) {
        // 0x4054d8
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
    goto lab_0x4054b4;
  lab_0x40548b:;
    uint128_t v83 = (int128_t)v14 * (int128_t)v26; // 0x4054a3
    int64_t v84 = (int64_t)(v83 < 0xffffffffffffffff ? v83 : 0xffffffffffffffff);
    int64_t v85 = v83 > 0xffffffffffffffff ? 1 : 0;
    int32_t v86 = 6; // 0x4054af
    int32_t v87 = v86; // 0x4054b2
    int64_t v88 = v85; // 0x4054b2
    v48 = v84;
    v49 = v40;
    v50 = v85;
    while (v86 != 0) {
        // 0x4054a0
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
    goto lab_0x4054b4;
  lab_0x40546f:
    // 0x40546f
    v43 = v39;
    if (v14 >= 0x80000000000000) {
        goto lab_0x405427;
    } else {
        // 0x405478
        v23 = 512 * v14;
        v22 = v11;
        v37 = v39;
        goto lab_0x4053f8;
    }
  lab_0x4053f8:;
    int64_t v59 = v22;
    int64_t v60 = (0x100000000 * v37 >> 32) + v8; // 0x4053fd
    *v7 = v60;
    v13 = v23;
    v10 = (*(char *)v60 != 0 ? v59 | 2 : v59) & 0xffffffff;
    goto lab_0x4052f0;
  lab_0x405455:
    // 0x405455
    *a4 = v15;
    // 0x4052f3
    return (v12 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x405427:
    // 0x405427
    v23 = -1;
    v22 = 1;
    v37 = v43;
    goto lab_0x4053f8;
  lab_0x4054b4:
    // 0x4054b4
    v23 = v48;
    v22 = (v50 | v11) & 0xffffffff;
    v37 = v49;
    goto lab_0x4053f8;
}
// Address range: 0x405760 - 0x405d7c
int64_t function_405760(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40577f
    int64_t v2 = *v1; // 0x40577f
    char * str2 = (char *)v2; // 0x40578c
    char c = *str2; // 0x40578c
    int64_t v3 = v2; // 0x4057b8
    int64_t v4 = 0; // 0x405760
    int32_t v5; // 0x405760
    int64_t v6; // 0x405760
    int64_t v7; // 0x405760
    int64_t v8; // 0x405760
    int64_t v9; // 0x405760
    int64_t v10; // 0x405760
    int64_t v11; // 0x405760
    int64_t v12; // 0x405760
    int64_t v13; // 0x405760
    int64_t str3; // 0x405760
    int64_t v14; // 0x405760
    int64_t v15; // 0x405760
    int64_t v16; // 0x405760
    int64_t v17; // 0x405760
    int32_t v18; // 0x405760
    int32_t v19; // 0x405760
    int32_t v20; // 0x405760
    int32_t v21; // 0x405760
    int32_t v22; // 0x405760
    int32_t v23; // 0x405760
    int32_t v24; // 0x405760
    int32_t v25; // 0x405760
    int32_t v26; // 0x405760
    int32_t v27; // 0x405760
    int32_t v28; // 0x405760
    int32_t v29; // 0x405760
    int64_t nmemb; // 0x405760
    int64_t v30; // 0x405760
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4057bc
            while (v31 != 0 == (v31 != 61)) {
                // 0x4057b8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4057c8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4057ce
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405798
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4057fc
                int64_t v34; // 0x405760
                int64_t v35; // 0x405760
                if (strncmp(str, str2, n) == 0) {
                    // 0x405805
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405980;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405816
                int64_t v37 = *(int64_t *)v36; // 0x40581a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4057f0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x405805
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405980;
                        }
                    }
                    // 0x405816
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
                  lab_0x405866:
                    // 0x405866
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
                        goto lab_0x4058c0;
                    } else {
                        if (v11 == 0) {
                            // 0x405a30
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4058c0;
                        } else {
                            if (v39 == 0) {
                                // 0x4059e0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40588a;
                                } else {
                                    // 0x4059ec
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40588a;
                                    } else {
                                        // 0x4059fa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40588a;
                                        } else {
                                            goto lab_0x4058c0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40588a;
                            }
                        }
                    }
                }
              lab_0x4058d1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405aa6
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405c52
                            flockfile(g31);
                            int64_t v41 = *v1; // 0x405c72
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405cbf
                            int64_t v43 = (int64_t)g31;
                            int64_t v44 = v43; // 0x405cd9
                            int64_t v45; // 0x405cdb
                            if (*(char *)v42 != 0) {
                                // 0x405cdb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g31;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405cd3
                            while (v17 + nmemb != v42) {
                                // 0x405cd5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405cdb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g31;
                                }
                                // 0x405cc8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405d00
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g31);
                            v40 = *v1;
                        } else {
                            // 0x405ab4
                            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405c0f
                        free((int64_t *)v17);
                    }
                    // 0x405b09
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405b20
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4059ce
                    return 63;
                }
                // 0x4058f0
                v5 = v39;
                if (v13 != 0) {
                    // 0x405974
                    v35 = v13;
                    v34 = v25;
                  lab_0x405980:;
                    int32_t * v49 = (int32_t *)a7; // 0x405990
                    uint32_t v50 = *v49; // 0x405990
                    int64_t v51 = v50; // 0x405990
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40599a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x4059a3
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405bcf
                                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405b7a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4059ce
                            return 63;
                        }
                        // 0x405a18
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405d2f
                                    __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405c2d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405c40
                                // 0x4059ce
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405b3e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405b52
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4059bb
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4059be
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4059c2
                    int64_t result = v59; // 0x4059c8
                    if (v58 != 0) {
                        // 0x4059ca
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4059ce
                    return result;
                }
            } else {
                // 0x4057ce
                v5 = v32;
            }
            // break -> 0x4058f5
            break;
        }
    }
    // 0x4058f5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40590d
        if (*(char *)(v60 + 1) != 45) {
            // 0x405917
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4059ce
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405a59
        __fprintf_chk(g31, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405946
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405956
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4058c0:
    // 0x4058c0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4058c0
    int64_t v63 = *(int64_t *)v62; // 0x4058c4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4058d1
        goto lab_0x4058d1;
    }
    goto lab_0x405866;
  lab_0x40588a:
    // 0x40588a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405760
    int32_t v65; // 0x405760
    int32_t v66; // 0x405760
    if (v27 != 0) {
        goto lab_0x4058c0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405a40
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4058c0;
            } else {
                goto lab_0x4058b1;
            }
        } else {
            // 0x4058a5
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405b9c
                int64_t v67 = (int64_t)mem; // 0x405b9c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4058c0;
                } else {
                    // 0x405baf
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4058b1;
                }
            } else {
                goto lab_0x4058b1;
            }
        }
    }
  lab_0x4058b1:
    // 0x4058b1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4058c0;
}
// Address range: 0x405d80 - 0x406346
int64_t function_405d80(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405da1
    if (v3 < 1) {
        // 0x405f5e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405d9d
    int32_t v5 = *(int32_t *)a7; // 0x405da9
    uint64_t v6 = a1 & 0xffffffff; // 0x405dab
    int64_t v7 = v2; // 0x405db0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405db3
    *v8 = 0;
    int64_t v9; // 0x405d80
    int64_t v10; // 0x405d80
    int64_t v11; // 0x405d80
    int64_t v12; // 0x405d80
    int64_t str; // 0x405d80
    int64_t v13; // 0x405d80
    int64_t v14; // 0x405d80
    int64_t v15; // 0x405d80
    int64_t v16; // 0x405d80
    int64_t v17; // 0x405d80
    int32_t v18; // 0x405d80
    char v19; // 0x405d80
    if (v5 == 0) {
        // 0x405f98
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405dca;
    } else {
        // 0x405dc3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405e10
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405e13
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405ed8;
            } else {
                int64_t v22 = v7 + 1; // 0x405e26
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405e36
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405eec;
                } else {
                    goto lab_0x405e48;
                }
            }
        } else {
            goto lab_0x405dca;
        }
    }
  lab_0x405dca:
    // 0x405dca
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405dd0
    *v24 = 0;
    int64_t v25; // 0x405d80
    int64_t v26; // 0x405d80
    int64_t v27; // 0x405d80
    switch (*(char *)&v2) {
        case 45: {
            // 0x405ec0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405ecd;
        }
        case 43: {
            // 0x4061d0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405ecd;
        }
        default: {
            // 0x405dec
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40614f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406268
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405ecd;
                } else {
                    // 0x40615d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405dfa;
                }
            } else {
                goto lab_0x405dfa;
            }
        }
    }
  lab_0x405ed8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405edf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405e48;
    } else {
        goto lab_0x405eec;
    }
  lab_0x405dfa:
    // 0x405dfa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405ecd;
  lab_0x405ecd:
    // 0x405ecd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405ed8;
  lab_0x405e48:;
    uint32_t v30 = *(int32_t *)a7; // 0x405e48
    int64_t v31 = v30; // 0x405e48
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405e4a
    if ((int64_t)*v32 > v31) {
        // 0x405e4f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405e52
    if (*v33 > v30) {
        // 0x405e57
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405e5a
    int64_t v35 = v31; // 0x405e5e
    int64_t v36 = v15; // 0x405e5e
    int64_t v37; // 0x405d80
    int64_t v38; // 0x405d80
    int64_t v39; // 0x405d80
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405fc8
        int64_t v41 = v40; // 0x405fc8
        v2 = v41;
        int64_t v42; // 0x405d80
        if (*v33 == v40) {
            // 0x4061b0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4061b8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405fd4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405fe8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405ff1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405ffa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x406011
            int64_t v47 = v45 & 0xffffffff; // 0x406015
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40601e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x406024
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x406026;
                }
            }
            int64_t v48 = v47 + 1; // 0x406000
            int64_t v49 = v48 & 0xffffffff; // 0x406000
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x406011
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40601e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x406024
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x406026;
                    }
                }
                // 0x406000
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4061c8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x406026;
    } else {
        goto lab_0x405e64;
    }
  lab_0x405eec:
    // 0x405eec
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405eef
    int64_t v51 = v12; // 0x405eef
    int64_t v52 = v14; // 0x405eef
    if (*(char *)v10 == 0) {
        goto lab_0x405e48;
    } else {
        goto lab_0x405ef5;
    }
  lab_0x405e64:;
    int32_t v53 = v35; // 0x405e64
    int64_t v54; // 0x405d80
    int64_t v55; // 0x405d80
    int64_t v56; // 0x405d80
    int64_t v57; // 0x405d80
    int64_t v58; // 0x405d80
    int64_t v59; // 0x405d80
    char * v60; // 0x405d80
    int64_t v61; // 0x405d80
    int64_t v62; // 0x405e79
    int64_t v63; // 0x405d80
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405fb3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405fb6;
    } else {
        // 0x405e6c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405d80
        int64_t v66 = v65 ? -1 : 1; // 0x405e80
        int64_t v67 = (int64_t)"--"; // 0x405d80
        int64_t v68 = v62; // 0x405d80
        int64_t v69 = 3; // 0x405e80
        unsigned char v70 = *(char *)v68; // 0x405e80
        char v71 = *(char *)v67; // 0x405e80
        char v72 = v71; // 0x405e80
        bool v73 = false; // 0x405e80
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
            // 0x405f70
            if (*(char *)v62 == 45) {
                // 0x406030
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x406030
                if (c == 0) {
                    goto lab_0x405f7a;
                } else {
                    // 0x40603d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x4060c0;
                    } else {
                        if (c == 45) {
                            // 0x4062a3
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406115;
                        } else {
                            // 0x40604e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x4060c0;
                            } else {
                                // 0x406053
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x406074;
                                } else {
                                    // 0x40605a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x4060c0;
                                    } else {
                                        goto lab_0x406074;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405f7a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405e90
            v2 = v75;
            int32_t v76 = *v32; // 0x405e93
            int64_t v77 = v35 + 1; // 0x405e96
            int32_t v78 = v77; // 0x405e99
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x406200
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405ea7
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405eb5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405fb6;
        }
    }
  lab_0x405ef5:;
    // 0x405ef5
    int64_t v79; // bp-104, 0x405d80
    int64_t v80 = &v79; // 0x405d8a
    int64_t v81 = v50 + 1; // 0x405ef5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405efc
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405f01
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405f05
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405f09
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405f11
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405f16
    int32_t c2 = v84; // 0x405f16
    char * found_char_pos = strchr(str2, c2); // 0x405f16
    int64_t v87 = *v82; // 0x405f1b
    v2 = v87;
    int64_t v88 = *v85; // 0x405f25
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405f30
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406220
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4061ed
        *(int32_t *)(v1 + 8) = c2;
        // 0x405f5e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405f16
    char v91 = *(char *)(v90 + 1); // 0x405f4b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405f05
        if (v91 != 58) {
            // 0x405f5e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406174
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406278
                *v8 = 0;
            } else {
                // 0x40625c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40619e
            *v83 = 0;
            // 0x405f5e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40617e
        if (v93 != 0) {
            // 0x406210
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40619e
            *v83 = 0;
            // 0x405f5e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406191
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40619e
            *v83 = 0;
            // 0x405f5e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4062da
            __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40628a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406291
        // 0x40619e
        *v83 = 0;
        // 0x405f5e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x4060e9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x4060eb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406310
                __fprintf_chk(g31, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4062c1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4062c8
            // 0x405f5e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4060f6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4060fa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406115;
  lab_0x406026:
    // 0x406026
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405e64;
  lab_0x406115:;
    int64_t v99 = function_405760(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406133
    // 0x405f5e
    return v99 & 0xffffffff;
  lab_0x405fb6:;
    int32_t v100 = v55; // 0x405fb6
    if (v100 != (int32_t)v59) {
        // 0x405fba
        *(int32_t *)a7 = v100;
    }
    // 0x405f5e
    return 0xffffffff;
  lab_0x405f7a:
    // 0x405f7a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405f81
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405f5e
    return v99 & 0xffffffff;
  lab_0x4060c0:
    // 0x4060c0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405ef5;
  lab_0x406074:
    // 0x406074
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405760(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x40609a
    if ((int32_t)v101 != -1) {
        // 0x405f5e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x4060af
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x4060c0;
}
// Address range: 0x406350 - 0x4063a6
int64_t function_406350(int64_t a1) {
    // 0x406350
    *(int32_t *)&g41 = g27;
    *(int32_t *)&g42 = g26;
    int64_t v1; // 0x406350
    int64_t result = function_405d80(v1, v1, v1, v1, v1, v1, &g41, a1 & 0xffffffff); // 0x406376
    g27 = *(int32_t *)&g41;
    g46 = (char *)g44;
    *(int32_t *)&g25 = g43;
    return result;
}
// Address range: 0x4063b0 - 0x4063c8
int64_t function_4063b0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4063b0
    return function_406350(1);
}
// Address range: 0x4063d0 - 0x4063e3
int64_t function_4063d0(int64_t a1, int64_t a2, int64_t * a3, char (**a4)[7], int32_t a5, int64_t a6) {
    // 0x4063d0
    return function_406350(0);
}
// Address range: 0x4063f0 - 0x406405
int64_t function_4063f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4063f0
    return function_405d80(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406410 - 0x406426
int64_t function_406410(void) {
    // 0x406410
    return function_406350(0);
}
// Address range: 0x406430 - 0x406448
int64_t function_406430(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406430
    return function_405d80(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406450 - 0x4064ca
int64_t function_406450(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40645b
    int64_t v2 = (int64_t)&g11; // 0x40645b
    int32_t * pwc; // 0x406450
    int64_t v3; // 0x406450
    int64_t n; // 0x406450
    if (a2 == 0) {
        goto lab_0x4064a2;
    } else {
        // 0x40645d
        if (a3 == 0) {
            // 0x406488
            return -2;
        }
        // 0x406469
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x4064a2;
        } else {
            goto lab_0x406474;
        }
    }
  lab_0x4064a2:
    // 0x4064a2
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406450
    pwc = (int32_t *)&v4;
    goto lab_0x406474;
  lab_0x406474:;
    char * wstr = (char *)v3; // 0x40647a
    int64_t ps; // 0x406450
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40647a
    int64_t result = v5; // 0x40647a
    if (v5 < 0xfffffffe) {
        // 0x406488
        return result;
    }
    int64_t result2 = result; // 0x4064b9
    if ((char)function_406530(0, v3) == 0) {
        // 0x4064bb
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406488
    return result2;
}
// Address range: 0x4064d0 - 0x40652d
int64_t function_4064d0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4064d7
    int64_t v2; // 0x4064d0
    int64_t result = function_406da0(a1, v2); // 0x4064e8
    if ((v2 & 32) != 0) {
        // 0x406510
        if ((int32_t)result == 0) {
            // 0x406514
            *__errno_location() = 0;
        }
        // 0x40650a
        return 0xffffffff;
    }
    // 0x4064f1
    if ((int32_t)result == 0) {
        // 0x40650a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4064f8
    if (v1 == 0) {
        // 0x4064fa
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40650a
    return result2;
}
// Address range: 0x406530 - 0x40658e
int64_t function_406530(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406536
    if (locale == NULL) {
        // 0x406563
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406536
    bool v2; // 0x406530
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x406530
    int64_t v5 = v1; // 0x406530
    int64_t v6 = 2; // 0x406555
    unsigned char v7 = *(char *)v5; // 0x406555
    char v8 = *(char *)v4; // 0x406555
    char v9 = v8; // 0x406555
    bool v10 = false; // 0x406555
    while (v7 == v8) {
        // 0x406548
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406561
    int64_t v13 = v1; // 0x406561
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406563
        return 0;
    }
    int64_t v14 = 6; // 0x406561
    unsigned char v15 = *(char *)v13; // 0x40657d
    char v16 = *(char *)v12; // 0x40657d
    char v17 = v16; // 0x40657d
    bool v18 = false; // 0x40657d
    while (v15 == v16) {
        // 0x406570
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
// Address range: 0x406590 - 0x4065d8
int64_t function_406590(uint64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x406590
    *(char *)v1 = 0;
    int64_t result = v1; // 0x4065a2
    result--;
    *(char *)result = (char)a1 + 48;
    while (a1 >= 10) {
        // 0x4065ab
        result--;
        *(char *)result = (char)a1 + 48;
    }
    // 0x4065d4
    return result;
}
// Address range: 0x4065e0 - 0x406b42
int64_t function_4065e0(void) {
    char * v1 = nl_langinfo(14); // 0x4065f6
    char * v2 = g45; // 0x4065fb
    char * v3; // 0x4065e0
    int64_t v4; // 0x4065e0
    int64_t v5; // 0x4065e0
    int64_t v6; // 0x4065e0
    int64_t v7; // 0x4065e0
    int32_t size; // 0x4065e0
    int32_t size2; // 0x4065e0
    int32_t len; // 0x4066b2
    int64_t v8; // 0x4066b2
    char * env_val; // 0x40669d
    if (v2 == NULL) {
        // 0x406698
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x406705;
        } else {
            // 0x4066aa
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x406705;
            } else {
                // 0x4066af
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40669d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406b35
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x406705;
                    } else {
                        // 0x406aa9
                        size2 = len + 14;
                        goto lab_0x4066cb;
                    }
                } else {
                    goto lab_0x4066cb;
                }
            }
        }
    } else {
        // 0x4065e0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40661a;
    }
  lab_0x40694c:;
    // 0x40694c
    struct _IO_FILE * stream; // 0x40678b
    int32_t v10 = __uflow(stream); // 0x40694f
    int64_t v11; // 0x4065e0
    int64_t v12 = v11; // 0x406959
    int64_t v13; // 0x4065e0
    int64_t v14 = v13; // 0x406959
    int32_t v15 = v10; // 0x406959
    int64_t v16; // 0x4065e0
    int64_t v17 = v16; // 0x406959
    int64_t v18 = v11; // 0x406959
    int64_t v19 = v13; // 0x406959
    int64_t v20 = v16; // 0x406959
    if (v10 == -1) {
        // break -> 0x40695f
        goto lab_0x40695f;
    }
    goto lab_0x4067d9;
  lab_0x4067ce:;
    // 0x4067ce
    int64_t v90; // 0x4065e0
    int64_t * v32; // 0x4067c0
    *v32 = v90 + 1;
    int64_t v89; // 0x4065e0
    v12 = v89;
    int64_t v91; // 0x4065e0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4065e0
    v17 = v92;
    goto lab_0x4067d9;
  lab_0x4067d9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4065e0
    int32_t v25; // bp-120, 0x4065e0
    int32_t v26; // bp-184, 0x4065e0
    int64_t v27; // 0x40678b
    int64_t v28; // 0x4067a8
    int64_t v29; // 0x4067ad
    int64_t * v30; // 0x4067c4
    switch (c) {
        case 32: {
            goto lab_0x4067c0;
        }
        case 10: {
            goto lab_0x4067c0;
        }
        case 9: {
            goto lab_0x4067c0;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x4069b1
            int32_t v33; // 0x4065e0
            char v34; // 0x4065e0
            int32_t v35; // 0x4069be
            if (v31 < *v30) {
                // 0x406990
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x4069bb
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x4069b1
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406990
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x4069bb
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x4069a0
                v36 = v33;
            }
            // 0x406a8f
            if (v36 == -1) {
                // break -> 0x40695f
                break;
            }
            goto lab_0x4067c0;
        }
        default: {
            // 0x4067ef
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40695f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x406818
            int64_t v39 = v37 + 4; // 0x40681a
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x406826
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x406828
            while (v41 == 0) {
                // 0x406818
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406846
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406852
            int64_t v45 = v43 + 4; // 0x406854
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406860
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406862
            while (v47 == 0) {
                // 0x406852
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40684f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406878
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406888
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40688c
            int64_t v52 = v51 + v48; // 0x406895
            int64_t * mem; // 0x4065e0
            int64_t v53; // 0x4065e0
            int64_t v54; // 0x4065e0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x4069cb
                int64_t v56 = v55 + 3; // 0x4069d7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x4068b1
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x4068c0
            if (mem == NULL) {
                // 0x406aec
                free((int64_t *)v21);
                function_406da0(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x406764;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4068d8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4068e2
            uint32_t v62 = (int32_t)v59; // 0x4068e5
            int64_t v63; // 0x4065e0
            if (v62 >= 8) {
                // 0x4069f4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406a0e
                int64_t v66 = v61 - v65; // 0x406a12
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406a1d
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406a2e
                    int64_t v70 = v69 & 0xffffffff; // 0x406a2e
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406a2b
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406abf
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4068f7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4068fb
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
            int64_t v73 = v51 + 1; // 0x40690b
            int64_t v74 = v60 - 1; // 0x40690f
            uint32_t v75 = (int32_t)v73; // 0x406914
            int64_t v76; // 0x4065e0
            if (v75 >= 8) {
                // 0x406a42
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406a4c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406a5c
                int64_t v80 = v74 - v79; // 0x406a60
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406a6b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406a7b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406a79
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406ad6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406ade
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x406926
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40692a
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406b23
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40693e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x4067ce;
            } else {
                goto lab_0x40694c;
            }
        }
    }
  lab_0x4067c0:;
    int64_t v93 = v23; // 0x4065e0
    int64_t v94 = v22; // 0x4065e0
    int64_t v95 = v21; // 0x4065e0
    goto lab_0x4067c0_2;
  lab_0x406705:;
    int64_t * mem3 = malloc(size); // 0x406705
    int64_t v97 = (int64_t)&g11; // 0x406710
    int64_t v98; // 0x4065e0
    int64_t path; // 0x4065e0
    if (mem3 == NULL) {
        goto lab_0x4066e2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x406705
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x406726;
    }
  lab_0x40661a:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x40660d
    char v100 = *v3; // 0x40661a
    int64_t v101; // 0x4065e0
    if (v100 == 0) {
        // 0x406674
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4065e0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4065e0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406660
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406667;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406630
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40663d
        char v107 = *(char *)v106; // 0x406642
        v102 = v107;
        if (v107 == 0) {
            // 0x406674
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40664b
    v104 = v103 + 1;
  lab_0x406667:
    // 0x406674
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4066e2:;
    char * v108 = (char *)v97;
    g45 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40661a;
  lab_0x406726:;
    int64_t v109 = v98 + path; // 0x406726
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406752
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x406781
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406ab2
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x4067a5
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x4067c0_2:;
                uint64_t v96 = *v32; // 0x4067c0
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40694c;
                } else {
                    goto lab_0x4067ce;
                }
            }
          lab_0x40695f:
            // 0x40695f
            function_406da0(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x40697e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406764;
  lab_0x4066cb:;
    int64_t * mem4 = malloc(size2); // 0x4066cb
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x406771
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x406726;
    } else {
        goto lab_0x4066e2;
    }
  lab_0x406764:
    // 0x406764
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4066e2;
}
// Address range: 0x406b50 - 0x406b86
int64_t function_406b50(int32_t a1, uint64_t a2) {
    int64_t v1 = 4 * a2; // 0x406b5a
    if (v1 < 0) {
        // 0x406b70
        *__errno_location() = 12;
        return 0;
    }
    if (a2 < 0x4000000000000000) {
        // 0x406b68
        return (int64_t)realloc((int64_t *)(int64_t)a1, (int32_t)v1);
    }
    // 0x406b70
    *__errno_location() = 12;
    return 0;
}
// Address range: 0x406b90 - 0x406d9b
int64_t function_406b90(int64_t a1, int64_t a2, int64_t a3) {
    int32_t grouplist2[1]; // 0x406d89
    int32_t grouplist[1]; // 0x406cc4
    int64_t result; // 0x406b90
    int64_t result2; // 0x406b90
    int64_t v1; // 0x406b90
    int64_t v2; // 0x406b90
    int64_t v3; // 0x406b90
    int32_t v4; // 0x406b90
    int32_t ngroups; // bp-44, 0x406b90
    int32_t v5; // 0x406c7d
    if (a1 == 0) {
        int32_t v6 = getgroups(0, {0}); // 0x406c6c
        ngroups = v6;
        if (v6 < 0) {
            // 0x406d28
            if (*__errno_location() != 38) {
                // 0x406c14
                return 0xffffffff;
            }
            int64_t * mem = malloc(4); // 0x406d3b
            result = 0xffffffff;
            if (mem == NULL) {
                // 0x406c14
                return result;
            }
            int32_t v7 = a2; // 0x406d49
            *(int32_t *)mem = v7;
            *(int64_t *)a3 = (int64_t)mem;
            return v7 != -1;
        }
        int64_t v8 = v6; // 0x406c6c
        v5 = a2;
        if (v5 == -1 == (v6 != 0)) {
            int64_t v9 = function_406b50(0, v8); // 0x406d6b
            if (v9 == 0) {
                // 0x406c14
                return 0xffffffff;
            }
            // 0x406d7c
            v3 = v9;
            v4 = ngroups;
            goto lab_0x406d80;
        } else {
            int64_t v10 = v8 + 1; // 0x406c92
            ngroups = v10;
            int64_t v11 = function_406b50(0, 0x100000000 * v10 >> 32); // 0x406c9e
            if (v11 == 0) {
                // 0x406c14
                return 0xffffffff;
            }
            // 0x406caf
            v3 = v11;
            v4 = ngroups;
            if (v5 == -1) {
                goto lab_0x406d80;
            } else {
                // 0x406cbd
                grouplist[0] = (int32_t)v11 + 4;
                int32_t v12 = getgroups(ngroups - 1, grouplist); // 0x406cc4
                v1 = v11;
                if (v12 < 0) {
                    goto lab_0x406bf8;
                } else {
                    // 0x406cd1
                    *(int32_t *)v11 = v5;
                    result2 = v12 + 1;
                    v2 = v11;
                    goto lab_0x406cd7;
                }
            }
        }
    } else {
        // 0x406bab
        ngroups = 10;
        int64_t groups = function_406b50(0, 10); // 0x406bbd
        if (groups == 0) {
            // 0x406c14
            return 0xffffffff;
        }
        int32_t group = a2; // 0x406bd2
        char * user = (char *)a1; // 0x406bdd
        int32_t v13 = getgrouplist(user, group, (int32_t *)groups, &ngroups); // 0x406bdd
        int64_t v14 = groups; // 0x406be4
        int32_t v15 = ngroups; // 0x406be4
        if (v13 < 0) {
            int64_t v16 = ngroups; // 0x406c28
            int64_t v17 = v16; // 0x406c2f
            int64_t v18; // 0x406c31
            if (ngroups == 10) {
                // 0x406c31
                v18 = 2 * v16;
                ngroups = v18;
                v17 = v18 & 0xfffffffe;
            }
            int64_t groups2 = function_406b50((int32_t)groups, 0x100000000 * v17 >> 32); // 0x406c3d
            v1 = groups;
            while (groups2 != 0) {
                uint32_t v19 = getgrouplist(user, group, (int32_t *)groups2, &ngroups); // 0x406bdd
                v14 = groups2;
                v15 = ngroups;
                int64_t v20 = groups2; // 0x406be4
                if (v19 >= 0) {
                    goto lab_0x406be6;
                }
                v16 = ngroups;
                v17 = v16;
                // 0x406c31
                v18 = 2 * v16;
                ngroups = v18;
                v17 = v18 & 0xfffffffe;
                // 0x406c37
                groups2 = function_406b50((int32_t)v20, 0x100000000 * v17 >> 32);
                v1 = v20;
            }
        } else {
          lab_0x406be6:;
            int64_t v21 = function_406b50((int32_t)v14, (int64_t)v15); // 0x406bee
            v1 = v14;
            if (v21 != 0) {
                // 0x406c50
                *(int64_t *)a3 = v21;
                return ngroups;
            }
        }
        goto lab_0x406bf8;
    }
  lab_0x406d0b:;
    // 0x406d0b
    int64_t v22; // 0x406b90
    int64_t v23 = v22 + 4; // 0x406d0b
    int64_t v24; // 0x406b90
    result = v24;
    int64_t v25 = v24; // 0x406d12
    v22 = v23;
    int64_t v26; // 0x406b90
    int64_t v27 = v26; // 0x406d12
    uint64_t v28; // 0x406ce9
    if (v28 <= v23) {
        return result;
    }
    goto lab_0x406d18;
  lab_0x406bf8:;
    int32_t * v33 = __errno_location(); // 0x406bf8
    free((int64_t *)v1);
    // 0x406c14
    return 0xffffffff;
  lab_0x406d80:
    // 0x406d80
    grouplist2[0] = v3;
    int32_t v34 = getgroups(v4 - (int32_t)(v5 != -1), grouplist2); // 0x406d89
    v1 = v3;
    result2 = v34;
    v2 = v3;
    if (v34 >= 0) {
        goto lab_0x406cd7;
    } else {
        goto lab_0x406bf8;
    }
  lab_0x406cd7:
    // 0x406cd7
    *(int64_t *)a3 = v2;
    if ((int32_t)result2 < 2) {
        // 0x406c14
        return result2;
    }
    // 0x406ce4
    v28 = (0x100000000 * result2 >> 30) + v2;
    int64_t v35 = v2 + 4; // 0x406ced
    v25 = result2;
    v22 = v35;
    if (v28 <= v35) {
        // 0x406c14
        return result2;
    }
    v27 = v2;
    while (true) {
      lab_0x406d18:;
        int64_t v29 = v27;
        int64_t v30 = v25;
        int32_t v31 = *(int32_t *)v22; // 0x406d18
        if (v31 != *(int32_t *)v2) {
            // 0x406d00
            if (*(int32_t *)v29 == v31) {
                // 0x406d1e
                v24 = v30 + 0xffffffff & 0xffffffff;
                v26 = v29;
                goto lab_0x406d0b;
            } else {
                int64_t v32 = v29 + 4; // 0x406d04
                *(int32_t *)v32 = v31;
                v24 = v30;
                v26 = v32;
                goto lab_0x406d0b;
            }
        } else {
            // 0x406d1e
            v24 = v30 + 0xffffffff & 0xffffffff;
            v26 = v29;
            goto lab_0x406d0b;
        }
    }
    int64_t result3 = result;
    return result3;
}
// Address range: 0x406da0 - 0x406e1b
int64_t function_406da0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406da7
    if (fileno(stream) < 0) {
        // 0x406e07
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x406dba
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x406deb
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406e07
            return fclose(stream);
        }
    }
    // 0x406dbc
    if ((int32_t)function_406e20(a1, v1) == 0) {
        // 0x406e07
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406dc8
    int32_t v3 = *v2; // 0x406dd0
    int64_t result = fclose(stream); // 0x406dde
    if (v3 != 0) {
        // 0x406e10
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406de0
    return result;
}
// Address range: 0x406e20 - 0x406e60
int64_t function_406e20(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x406e3a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x406e3a
        return fflush(stream);
    }
    // 0x406e48
    function_406e60(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406e60 - 0x406eb7
int64_t function_406e60(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406e60
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x406e6a
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x406e9b
    int64_t result = -1; // 0x406ea4
    if (v1 != -1) {
        // 0x406ea6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406eb2
    return result;
}
// Address range: 0x406ec0 - 0x406f1d
int64_t function_406ec0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406ec0
    return function_4016e0();
}
// Address range: 0x406f20 - 0x406f21
int64_t function_406f20(void) {
    // 0x406f20
    int64_t result; // 0x406f20
    return result;
}
// Address range: 0x406f30 - 0x406f48
int64_t function_406f30(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406f30
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x406f48 - 0x406f68
int64_t function_406f48(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x406f52
    while (*(int64_t *)v1 != -1) {
        // 0x406f53
        v1 -= 8;
    }
    // 0x406f64
    return result;
}
