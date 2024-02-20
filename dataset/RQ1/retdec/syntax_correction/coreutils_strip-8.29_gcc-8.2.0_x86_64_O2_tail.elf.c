#include "decompile_retdec.h"
// Address range: 0x401e20 - 0x401e25
int64_t function_401e20(void) {
    // 0x401e20
    abort();
    // UNREACHABLE
}
// Address range: 0x401e25 - 0x401e2a
int64_t function_401e25(void) {
    // 0x401e25
    abort();
    // UNREACHABLE
}
// Address range: 0x401e2a - 0x401e2f
int64_t function_401e2a(void) {
    // 0x401e2a
    abort();
    // UNREACHABLE
}
// Address range: 0x401e2f - 0x401e34
int64_t function_401e2f(void) {
    // 0x401e2f
    abort();
    // UNREACHABLE
}
// Address range: 0x401e34 - 0x401e39
int64_t function_401e34(void) {
    // 0x401e34
    abort();
    // UNREACHABLE
}
// Address range: 0x401e39 - 0x401e3e
int64_t function_401e39(void) {
    // 0x401e39
    abort();
    // UNREACHABLE
}
// Address range: 0x401e3e - 0x401e43
int64_t function_401e3e(void) {
    // 0x401e3e
    abort();
    // UNREACHABLE
}
// Address range: 0x401e43 - 0x401e48
int64_t function_401e43(void) {
    // 0x401e43
    abort();
    // UNREACHABLE
}
// Address range: 0x401e48 - 0x401e4d
int64_t function_401e48(void) {
    // 0x401e48
    abort();
    // UNREACHABLE
}
// Address range: 0x401e4d - 0x401e52
int64_t function_401e4d(void) {
    // 0x401e4d
    abort();
    // UNREACHABLE
}
// Address range: 0x401e60 - 0x4046d6
int64_t function_401e60(int64_t a1, int64_t a2) {
    // 0x401e60
    int64_t v1; // 0x401e60
    int64_t v2 = v1;
    int64_t v3 = 10; // bp-376, 0x401e79
    function_407b40(a2);
    setlocale(LC_ALL, (char *)&g16);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_40c180(0x406590, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", v1);
    g46 = 0;
    *(char *)&g53 = 1;
    g49 = 0;
    *(char *)&g50 = 0;
    *(char *)&g52 = 0;
    *(char *)&g48 = 10;
    int32_t v4 = a1; // 0x401ee6
    char * str4; // 0x401e60
    int64_t v5; // 0x401e60
    switch (v4) {
        case 2: {
            goto lab_0x401f0b;
        }
        case 3: {
            int64_t v6 = *(int64_t *)(a2 + 16); // 0x4023cb
            char * v7 = (char *)v6;
            if (*v7 != 45) {
                goto lab_0x401f0b;
            } else {
                // 0x4023d8
                str4 = v7;
                if (*(char *)(v6 + 1) != 0) {
                    goto lab_0x401efd;
                } else {
                    goto lab_0x401f0b;
                }
            }
        }
        default: {
            // 0x401ef4
            v5 = 0;
            if (v4 != 4) {
                goto lab_0x401f2f;
            } else {
                // 0x401ef9
                str4 = (char *)*(int64_t *)(a2 + 16);
                goto lab_0x401efd;
            }
        }
    }
  lab_0x4032ae_2:;
    // 0x4032ae
    int64_t v8; // 0x401e60
    int64_t v9 = v8;
    g44 = 1;
    int32_t * v10; // 0x401e60
    int32_t * err_num5; // bp-520, 0x401e60
    int64_t v11; // 0x401e60
    if (g47 != 0) {
        // 0x4032ae
        v10 = err_num5;
        v11 = 0;
    } else {
        // 0x4032be
        v10 = err_num5;
        v11 = 0;
        if (g26 == 2 == err_num5 == (int32_t *)1) {
            // 0x403b25
            v10 = (int32_t *)1;
            v11 = 0;
            if (*(int32_t *)(v9 + 56) != -1) {
                int32_t v12 = *(int32_t *)(v9 + 48); // 0x403b34
                v10 = (int32_t *)1;
                v11 = (v12 & 0xf000) != 0x8000;
            }
        }
    }
    // 0x4032d5
    int64_t v13; // 0x401e60
    int64_t v14 = v13; // 0x403300
    int32_t v15; // 0x401e60
    int32_t v16 = v15; // 0x403300
    int64_t v17 = v9; // 0x403300
    int32_t v18; // 0x401e60
    int32_t v19 = v18; // 0x403300
    int32_t v20; // 0x401e60
    int32_t v21 = v20; // 0x403300
    int32_t v22; // 0x401e60
    int32_t v23 = v22; // 0x403300
    struct stat * v24; // 0x401e60
    struct stat * v25 = v24; // 0x403300
    int32_t v26 = 0; // 0x403300
    int32_t v27; // 0x401e60
    int32_t v28 = v27; // 0x403300
    int32_t v29 = 0x1000000 * (v15 + 52 + (int32_t)v9) >> 24; // 0x403300
    int32_t v30; // 0x401e60
    int32_t v31 = v30; // 0x403300
    int32_t v32 = (int32_t)(int64_t)v10 - 1; // 0x403300
    int64_t v33; // 0x401e60
    int64_t v34 = v33; // 0x403300
    int32_t v35 = v11; // 0x403300
    bool v36; // 0x401e60
    bool v37 = v36; // 0x403300
    int128_t v38; // 0x401e60
    int128_t v39 = v38; // 0x403300
    int64_t v40; // 0x401e60
    int64_t v41 = v40; // 0x403300
    int64_t v42; // 0x401e60
    int64_t v43 = v42; // 0x403300
    int64_t v44; // 0x401e60
    int64_t v45 = v44; // 0x403300
    int64_t v46; // 0x401e60
    int64_t v47 = v46; // 0x403300
    int64_t v48; // 0x401e60
    int64_t v49 = v48; // 0x403300
    int64_t v50 = v11; // 0x403300
    goto lab_0x403305;
  lab_0x4033e1:;
    // 0x4033e1
    int64_t v141; // 0x401e60
    int64_t v184 = v141;
    int64_t v140; // 0x401e60
    int64_t v182 = v140;
    int64_t v139; // 0x401e60
    int64_t v180 = v139;
    int64_t v137; // 0x401e60
    int64_t fd2 = v137;
    int128_t v135; // 0x401e60
    int128_t v177 = v135;
    bool v134; // 0x401e60
    bool v175 = v134;
    int32_t v133; // 0x401e60
    int32_t v173 = v133;
    int64_t v132; // 0x401e60
    int64_t v171 = v132;
    int32_t v131; // 0x401e60
    int32_t v169 = v131;
    int32_t v130; // 0x401e60
    int32_t v167 = v130;
    int32_t v129; // 0x401e60
    int32_t v165 = v129;
    int32_t v128; // 0x401e60
    int32_t v163 = v128;
    int32_t v127; // 0x401e60
    int32_t v161 = v127;
    int32_t v126; // 0x401e60
    int32_t v159 = v126;
    struct stat * v125; // 0x401e60
    struct stat * v157 = v125;
    int32_t v124; // 0x401e60
    int32_t v155 = v124;
    int32_t v123; // 0x401e60
    int32_t v153 = v123;
    int32_t v122; // 0x401e60
    int32_t v151 = v122;
    int64_t v121; // 0x401e60
    int64_t v149 = v121;
    int32_t v120; // 0x401e60
    int32_t v147 = v120;
    int64_t v119; // 0x401e60
    int64_t v145 = v119;
    unsigned char v1300 = *(char *)&g54; // 0x4033e1
    int64_t v136; // 0x401e60
    int64_t v1301 = v136; // 0x4033ea
    int64_t v138; // 0x401e60
    int64_t v1302 = v138; // 0x4033ea
    bool v313; // 0x401e60
    int64_t v315; // 0x401e60
    int64_t v316; // 0x401e60
    int64_t v317; // 0x401e60
    int32_t v304; // 0x401e60
    int32_t v303; // 0x401e60
    int32_t v301; // 0x401e60
    int64_t v311; // 0x401e60
    int32_t v309; // 0x401e60
    int64_t v302; // 0x401e60
    int32_t v305; // 0x401e60
    int64_t v300; // 0x401e60
    int32_t v307; // 0x401e60
    struct stat * v306; // 0x401e60
    int32_t v312; // 0x401e60
    int32_t v310; // 0x401e60
    int32_t v308; // 0x401e60
    int128_t v314; // 0x401e60
    if (v1300 != 0 != (g26 == 1)) {
        int64_t v1303 = 0x100000000000000 * (int64_t)v165 >> 56; // 0x4033fe
        int64_t v1304 = v149 + 52;
        uint32_t v1305 = *(int32_t *)(v1304 + 4); // 0x403410
        while (v1305 < 0) {
            // 0x40341b
            if (v1300 != 0 == (*(char *)v1304 != 1)) {
                // break -> 0x403798
                break;
            }
            int64_t v1306 = v1304 + 96; // 0x403428
            if (v1303 == v1306) {
                // 0x403431
                error(0, (int32_t)"no files remaining" ^ (int32_t)"no files remaining", dcgettext(NULL, "no files remaining", 5));
                v300 = v145;
                v301 = v147;
                v302 = v149;
                v303 = v151;
                v304 = v153;
                v305 = v155;
                v306 = v157;
                v307 = v159;
                v308 = v161;
                v309 = v167;
                v310 = v169;
                v311 = v171;
                v312 = v173;
                v313 = v175;
                v314 = v177;
                v315 = v180;
                v316 = v182;
                v317 = v184;
                goto lab_0x402988;
            }
            v1304 = v1306;
            v1305 = *(int32_t *)(v1304 + 4);
        }
        // 0x403798
        v1301 = v1303;
        v1302 = v1305;
    }
    int64_t v190 = v1300; // 0x4033e1
    int64_t v191 = v1302;
    int64_t v189 = v1301;
    char v1295 = v161; // 0x403798
    if (v1295 != 1) {
        goto lab_0x4038bd;
    } else {
        if ((char)v173 != 0) {
            goto lab_0x4038bd;
        } else {
            // 0x4037ae
            v14 = v145;
            v16 = v147;
            v17 = v149;
            v19 = v151;
            v21 = v153;
            v23 = v155;
            v25 = v157;
            v26 = v159;
            v28 = v163;
            v29 = v165;
            v31 = v167;
            v32 = v169;
            v34 = v171;
            v35 = v173;
            v37 = v175;
            v39 = v177;
            v41 = v189;
            v43 = v190;
            v45 = fd2;
            v47 = v191;
            v49 = v180;
            v50 = v184;
            if (g51 == 0) {
                goto lab_0x403305;
            } else {
                goto lab_0x4037bb;
            }
        }
    }
  lab_0x403320:;
    // 0x403320
    int64_t v111; // 0x401e60
    int64_t v578 = v111;
    int32_t v110; // 0x401e60
    int32_t v1299 = v110;
    int64_t v109; // 0x401e60
    int64_t v577 = v109;
    int64_t v107; // 0x401e60
    int64_t v573 = v107;
    int64_t v81; // 0x401e60
    int64_t v108; // 0x401e60
    int64_t v561 = function_4047e0(*(int64_t *)v573, v108, v81); // 0x403323
    int32_t * v554 = (int32_t *)(v573 + 48); // 0x403328
    int64_t v581 = (int64_t)*v554; // 0x403328
    int32_t * v556 = (int32_t *)(v573 + 64); // 0x40332f
    uint32_t v1307 = *v556; // 0x40332f
    int64_t v76; // 0x401e60
    int32_t v1308 = v76; // 0x403333
    int64_t v555 = v1307; // 0x403336
    int64_t v82; // 0x401e60
    int64_t v104; // 0x401e60
    if (v1307 == v1308) {
        goto lab_0x40337e;
    } else {
        int64_t v1309 = function_40a6a0(v578, 3, v81, v82); // 0x403341
        int32_t v1310 = v1309;
        if (v1308 != 0) {
            if (v1310 >= 0) {
                // 0x403377
                *v556 = v1308;
                v555 = v104;
                goto lab_0x40337e;
            } else {
                goto lab_0x403688;
            }
        } else {
            if (v1310 < 0) {
                goto lab_0x403688;
            } else {
                int64_t v1311 = v1309 & 0xfffff7ff | 2048; // 0x403359
                if (v1310 == (int32_t)v1311) {
                    // 0x403377
                    *v556 = v1308;
                    v555 = v104;
                    goto lab_0x40337e;
                } else {
                    // 0x403360
                    if ((int32_t)function_40a6a0(v578, 4, v1311, v82) == -1) {
                        goto lab_0x403688;
                    } else {
                        // 0x403377
                        *v556 = v1308;
                        v555 = v104;
                        goto lab_0x40337e;
                    }
                }
            }
        }
    }
  lab_0x4031cb:;
    // 0x4031cb
    int64_t v321; // 0x401e60
    int64_t v325 = v321;
    int64_t str; // 0x401e60
    int64_t v346 = str + 96; // 0x4031cb
    int64_t v318 = v325; // 0x4031d2
    int64_t v319 = v346; // 0x4031d2
    int64_t v271; // 0x401e60
    if (v346 == v271) {
        // break -> 0x4031d4
        goto lab_0x4031d4;
    }
    goto lab_0x403182;
  lab_0x4031c0:;
    // 0x4031c0
    int32_t * v323; // 0x4031a2
    *v323 = -1;
    char * v322; // 0x403198
    *v322 = 1;
    int64_t v320; // 0x401e60
    v321 = v320;
    goto lab_0x4031cb;
  lab_0x403049:;
    // 0x403049
    int64_t v510; // 0x401e60
    int64_t v1312 = v510;
    int64_t v517; // 0x401e60
    int64_t v1313 = v517;
    int64_t v512; // 0x401e60
    int64_t v1314 = v512;
    int64_t v1315 = *(int64_t *)(v517 + 0x2000) + v517 - v1313; // 0x403049
    int64_t v493; // 0x401e60
    int64_t v1316 = v493; // 0x40304c
    if (v1315 != 0) {
        // 0x4034fe
        function_4048a0(v1313, v1315);
        v1316 = v1315;
    }
    int64_t v1317 = *(int64_t *)(v517 + 0x2010); // 0x403052
    int32_t v535; // 0x402636
    int32_t v565 = v535; // 0x40305c
    int32_t v518; // 0x401e60
    int32_t v566 = v518; // 0x40305c
    int64_t v567 = v1314; // 0x40305c
    int64_t v568 = v1316; // 0x40305c
    int64_t v569 = v517; // 0x40305c
    int64_t v570 = v1312; // 0x40305c
    int64_t v1318 = v1317; // 0x40305c
    if (v1317 != 0) {
        int64_t v1319 = v1318;
        int64_t v1320 = *(int64_t *)(v1319 + 0x2000); // 0x403060
        if (v1320 != 0) {
            // 0x40306c
            function_4048a0(v1319, v1320);
        }
        int64_t v1321 = *(int64_t *)(v1319 + 0x2010); // 0x403074
        v565 = v535;
        v566 = v518;
        v567 = v1314;
        v568 = v1320;
        v569 = v517;
        v570 = v1312;
        while (v1321 != 0) {
            // 0x403060
            v1319 = v1321;
            v1320 = *(int64_t *)(v1319 + 0x2000);
            if (v1320 != 0) {
                // 0x40306c
                function_4048a0(v1319, v1320);
            }
            // 0x403074
            v1321 = *(int64_t *)(v1319 + 0x2010);
            v565 = v535;
            v566 = v518;
            v567 = v1314;
            v568 = v1320;
            v569 = v517;
            v570 = v1312;
        }
    }
    goto lab_0x402cb0;
  lab_0x401f50:;
    // 0x401f50
    int64_t v1322; // 0x401e60
    int64_t v1323 = v1322; // 0x401e60
    int64_t v1324; // 0x401e60
    int64_t v1325 = v1324; // 0x401e60
    int64_t v1326; // 0x401e60
    int64_t v1327 = v1326; // 0x401e60
    goto lab_0x401f50_2;
  lab_0x402151:;
    // 0x402151
    int64_t v1345; // 0x401e60
    *(char *)&g53 = (char)((int32_t)v1345 == 110);
    char * v1347; // 0x402151
    switch (*v1347) {
        case 43: {
            // 0x4023e7
            *(char *)&g50 = 1;
            // break -> 0x402177
            break;
        }
        case 45: {
            // 0x4027bb
            g69 = (char *)((int64_t)g69 + 1);
            // break -> 0x402177
            break;
        }
    }
    char * v1348; // 0x401e60
    if ((int32_t)v1345 == 110) {
        // 0x4022b4
        v1348 = dcgettext(NULL, "invalid number of lines", 5);
    } else {
        // 0x402185
        v1348 = dcgettext(NULL, "invalid number of bytes", 5);
    }
    // 0x402194
    v3 = function_40a130((int64_t)g69, 0, -1, "bkKmMGTPEZY0", (int64_t)v1348, 0);
    int64_t v1330; // 0x401e60
    v1322 = v1330;
    int64_t v1346; // 0x401e60
    v1324 = v1346;
    v1326 = 0;
    goto lab_0x401f50;
  lab_0x402148:;
    // 0x402148
    int64_t v1341; // 0x401e60
    v1345 = v1341;
    int64_t v1342; // 0x401e60
    v1346 = v1342;
    if ((int32_t)v1341 != 110) {
        // 0x403ad7
        function_405d10(1);
        // UNREACHABLE
    }
    goto lab_0x402151;
  lab_0x402019:;
    char * v1349 = g69; // 0x402019
    *(char *)&g52 = 1;
    int64_t v1328; // 0x401e60
    int64_t v1329; // 0x401e60
    if (v1349 == NULL) {
        // 0x4022c8
        g26 = 2;
        v1322 = v1330;
        v1324 = v1329;
        v1326 = v1328;
    } else {
        int64_t v1350 = g28; // 0x402040
        int64_t v1351 = function_406440("--follow", (int64_t)v1349, g6, (int64_t *)&g5, 4, v1350); // 0x40204c
        g26 = *(int32_t *)(4 * v1351 + (int64_t)&g5);
        v1322 = v1330;
        v1324 = v1329;
        v1326 = v1350;
    }
    goto lab_0x401f50;
  lab_0x404336_2:;
    // 0x404336
    int64_t v1008; // 0x401e60
    int64_t v1352 = v1008;
    char * format14 = dcgettext(NULL, "error reading inotify event", 5); // 0x404342
    int32_t * v1353 = __errno_location(); // 0x40434a
    int32_t err_num14 = *v1353; // 0x404357
    error(1, err_num14, format14);
    int64_t v961; // 0x401e60
    int64_t v882 = v961; // 0x40435b
    int32_t v960; // 0x401e60
    int32_t v883 = v960; // 0x40435b
    int64_t v959; // 0x401e60
    int64_t v884 = v959; // 0x40435b
    int32_t v987; // 0x401e60
    int32_t v885 = v987; // 0x40435b
    int32_t v958; // 0x401e60
    int32_t v886 = v958; // 0x40435b
    int32_t v957; // 0x401e60
    int32_t v887 = v957; // 0x40435b
    struct stat * v995; // 0x401e60
    struct stat * v888 = v995; // 0x40435b
    int32_t v956; // 0x401e60
    int32_t v889 = v956; // 0x40435b
    int32_t v955; // 0x401e60
    int32_t v890 = v955; // 0x40435b
    int32_t v954; // 0x401e60
    int32_t v891 = v954; // 0x40435b
    int32_t v953; // 0x401e60
    int32_t v892 = v953; // 0x40435b
    int32_t v994; // 0x401e60
    int32_t v893 = v994; // 0x40435b
    int32_t v1354; // 0x401e60
    int32_t v894 = v1354; // 0x40435b
    int64_t v986; // 0x401e60
    int64_t v895 = v986; // 0x40435b
    int32_t v992; // 0x401e60
    int32_t v896 = v992; // 0x40435b
    bool v897 = false; // 0x40435b
    int128_t v1355; // 0x401e60
    int128_t v898 = v1355; // 0x40435b
    int64_t v899 = (int64_t)format14; // 0x40435b
    int64_t v900 = v1352; // 0x40435b
    int64_t v952; // 0x401e60
    int64_t v901 = v952; // 0x40435b
    int64_t v985; // 0x401e60
    int64_t v902 = v985; // 0x40435b
    int64_t v1004; // 0x40430f
    int64_t v903 = v1004; // 0x40435b
    int64_t v951; // 0x401e60
    int64_t v904 = v951; // 0x40435b
    goto lab_0x404360;
  lab_0x4040b4:;
    // 0x4040b4
    int128_t v1001; // 0x401e60
    v1355 = v1001;
    int32_t v1000; // 0x401e60
    v1354 = v1000;
    char * v964; // 0x401e60
    __asm_rep_stosq_memset(v964, 0, 16);
    int64_t v965; // 0x401e60
    int64_t * v1356 = (int64_t *)(v965 + 8 * (int64_t)__fdelt_chk(v955)); // 0x4040cc
    *v1356 = *v1356 | v952;
    char readfds; // bp-200, 0x401e60
    if (g51 != 0) {
        // 0x4040dd
        readfds |= 2;
    }
    // 0x4040e6
    int64_t v966; // 0x401e60
    int64_t timeout2 = g47 != 0 ? v966 : 0; // 0x404103
    bool v1033; // 0x401e60
    int64_t v1037; // 0x401e60
    int64_t v1036; // 0x401e60
    int64_t v1035; // 0x401e60
    int32_t v1031; // 0x401e60
    int64_t v1032; // 0x401e60
    int32_t v997; // 0x401e60
    struct _TYPEDEF_fd_set * readfds2; // 0x401e60
    int32_t nfds; // 0x401e60
    int128_t v996; // 0x401e60
    int128_t v1034; // 0x401e60
    switch (select(nfds, readfds2, NULL, NULL, (struct timeval *)timeout2)) {
        case 0: {
            // 0x404058
            v996 = v1355;
            v997 = v1354;
            goto lab_0x404061;
        }
        case -1: {
            // 0x40466d
            error(1, *__errno_location(), dcgettext(NULL, "error waiting for inotify and output events", 5));
            v1031 = v987;
            v1032 = v986;
            v1033 = false;
            v1034 = v1355;
            v1035 = 0;
            v1036 = timeout2;
            v1037 = v985;
            goto lab_0x404697;
        }
        default: {
            // 0x40412b
            if ((readfds & 2) == 0) {
                // break -> 0x404302
                break;
            }
            // 0x404139
            raise(13);
            // 0x404058
            v996 = v1355;
            v997 = v1354;
            goto lab_0x404061;
        }
    }
  lab_0x404148:;
    int128_t v1357 = __asm_movsd(v961); // 0x404148
    int128_t v999; // 0x401e60
    __asm_pxor(v999, v999);
    int64_t v1358 = __asm_cvttsd2si(v1357); // 0x404152
    int128_t v1359 = __asm_cvtsi2sd(v1358); // 0x404157
    int64_t timeout = v1358; // bp-360, 0x40415c
    int128_t v1360 = __asm_mulsd(__asm_movsd(0x412e848000000000), __asm_subsd(v1357, v1359)); // 0x404170
    __asm_cvttsd2si(v1360);
    int32_t v998; // 0x401e60
    v1000 = v998;
    v1001 = v1360;
    goto lab_0x4040b4;
  lab_0x4042a0:;
    int64_t v905 = v961; // 0x4042b7
    int32_t v906 = v960; // 0x4042b7
    int64_t v907 = v959; // 0x4042b7
    int32_t v908 = v987; // 0x4042b7
    int32_t v909 = v958; // 0x4042b7
    int32_t v910 = v957; // 0x4042b7
    struct stat * v911 = v995; // 0x4042b7
    int32_t v912 = v956; // 0x4042b7
    int32_t v913 = v955; // 0x4042b7
    int32_t v914 = v954; // 0x4042b7
    int32_t v915 = v953; // 0x4042b7
    int32_t v916 = v994; // 0x4042b7
    int32_t v1015; // 0x401e60
    int32_t v917 = v1015; // 0x4042b7
    int64_t v1016; // 0x40418b
    int64_t v918 = v1016; // 0x4042b7
    int32_t v919 = v992; // 0x4042b7
    bool v1014; // 0x401e60
    bool v920 = v1014; // 0x4042b7
    int128_t v1013; // 0x401e60
    int128_t v921 = v1013; // 0x4042b7
    int64_t v1021; // 0x401e60
    int64_t v922 = v1021; // 0x4042b7
    char v962; // 0x401e60
    int64_t v923 = function_406df0(v962, v951); // 0x4042b7
    int64_t v1020; // 0x40419d
    int64_t v924 = v1020; // 0x4042b7
    int64_t v925 = v952; // 0x4042b7
    int64_t v926 = v985; // 0x4042b7
    int64_t v1012; // 0x401e60
    int64_t v927 = v1012; // 0x4042b7
    int64_t v928 = v951; // 0x4042b7
    goto lab_0x404264;
  lab_0x40404b:;
    // 0x40404b
    int32_t v1040; // 0x401e60
    int32_t v968 = v1040; // 0x401e60
    struct stat * v969 = v995; // 0x401e60
    int32_t v970 = v994; // 0x401e60
    int32_t v971 = v1015; // 0x401e60
    int64_t v972 = v1016; // 0x401e60
    int32_t v973 = v992; // 0x401e60
    bool v974 = v1014; // 0x401e60
    int128_t v975 = v1013; // 0x401e60
    int64_t v1041; // 0x401e60
    int64_t v976 = v1041; // 0x401e60
    int64_t v1023; // 0x4041d3
    int64_t v977 = v1023; // 0x401e60
    int64_t v978 = v1012; // 0x401e60
    goto lab_0x40404b_2;
  lab_0x404580_2:;
    // 0x404580
    int64_t v1361; // 0x403f32
    int64_t * v1362; // 0x401e60
    int64_t v1363; // 0x403f61
    int64_t v1364 = function_409510(4, function_4047e0(*v1362, v1363, v1361)); // 0x404590
    char * format15 = dcgettext(NULL, "%s was replaced", 5); // 0x4045a4
    int32_t * err_num15 = __errno_location(); // 0x4045ac
    error(0, *err_num15, format15);
    int32_t v1365; // 0x401e60
    function_4072a0((char)v1365);
    *err_num15 = 0;
    int64_t v1366; // 0x401e60
    int64_t v228 = v1366; // 0x4045d5
    int32_t v1367; // 0x401e60
    int32_t v229 = v1367; // 0x4045d5
    int64_t v1368; // 0x401e60
    int64_t v224 = v1368; // 0x4045d5
    int32_t v1369; // 0x401e60
    int32_t v230 = v1369; // 0x4045d5
    int32_t v1370; // 0x401e60
    int32_t v231 = v1370; // 0x4045d5
    int32_t v1371; // 0x401e60
    int32_t v220 = v1371; // 0x4045d5
    struct stat * v1372; // 0x401e60
    struct stat * v232 = v1372; // 0x4045d5
    int32_t v1373; // 0x401e60
    int32_t v233 = v1373; // 0x4045d5
    int32_t v1374; // 0x401e60
    int32_t v234 = v1374; // 0x4045d5
    int64_t v1375; // 0x401e60
    int64_t v235 = v1375; // 0x4045d5
    bool v1376; // 0x401e60
    bool v236 = v1376; // 0x4045d5
    int128_t v1377; // 0x401e60
    int128_t v237 = v1377; // 0x4045d5
    int64_t v238 = v1364; // 0x4045d5
    int64_t v1378; // 0x401e60
    int64_t v222 = v1378; // 0x4045d5
    goto lab_0x403db0;
  lab_0x401f0b:;
    int64_t v1379 = function_407ac0(); // 0x401f0b
    int64_t * v1380 = (int64_t *)(a2 + 8); // 0x401f10
    int64_t v1381 = *v1380; // 0x401f10
    int64_t v1382 = v1381 + 1; // 0x401f17
    v5 = 0;
    switch (*(char *)v1381) {
        case 43: {
            // 0x4023b0
            v5 = 0;
            if ((int32_t)v1379 < 0x31069) {
                goto lab_0x401f2f;
            } else {
                goto lab_0x4022f5;
            }
        }
        case 45: {
            // 0x4022d7
            if ((int32_t)v1379 < 0x30db0) {
                goto lab_0x4022f5;
            } else {
                // 0x4022de
                v5 = 0;
                if (*(char *)(v1382 + (int64_t)(*(char *)v1382 == 99)) == 0) {
                    goto lab_0x401f2f;
                } else {
                    goto lab_0x4022f5;
                }
            }
        }
        default: {
            goto lab_0x401f2f;
        }
    }
  lab_0x401f2f:;
    // 0x401f2f
    int64_t v1383; // 0x401e60
    int64_t v1384 = v1383;
    int64_t v1333 = 8 * v5 + a2; // 0x401f3a
    int64_t v1385 = a1 - v5; // 0x401f40
    int64_t v1332 = v1385 & 0xffffffff; // 0x401f40
    int128_t v1344 = g7;
    v1323 = __asm_movsd_1(__asm_movsd(0x3ff0000000000000));
    v1325 = 0;
    int64_t v1331; // 0x401f62
    while (true) {
      lab_0x401f50_2:
        // 0x401f50
        v1328 = v1327;
        v1329 = v1325;
        v1330 = v1323;
        v1331 = function_40b530(v1332, v1333, "c:n:fFqs:vz0123456789", &g4, 0, v1328);
        int32_t v1334 = v1331;
        v1322 = v1330;
        v1324 = 2;
        v1326 = v1328;
        switch (v1334) {
            case -1: {
                goto lab_0x4023f3;
            }
            case 113: {
                goto lab_0x401f50;
            }
            default: {
                if (v1334 > 113) {
                    if (v1334 == 129) {
                        char * v1335 = dcgettext(NULL, "invalid maximum number of unchanged stats between opens", 5); // 0x402224
                        int64_t v1336 = function_40a130((int64_t)g69, (int32_t)"invalid maximum number of unchanged stats between opens" ^ (int32_t)"invalid maximum number of unchanged stats between opens", -1, (char *)&g16, (int64_t)v1335, 0); // 0x402244
                        g25 = v1336;
                        v1322 = v1330;
                        v1324 = v1329;
                        v1326 = 0;
                        goto lab_0x401f50;
                    } else {
                        if (v1334 > 129) {
                            if (v1334 == 131) {
                                // 0x4022a8
                                g45 = 1;
                                v1322 = v1330;
                                v1324 = v1329;
                                v1326 = v1328;
                                goto lab_0x401f50;
                            } else {
                                if (v1334 < 131) {
                                    char * v1337 = dcgettext(NULL, "invalid PID", 5); // 0x402274
                                    int64_t v1338 = function_40a130((int64_t)g69, (int32_t)"invalid PID" ^ (int32_t)"invalid PID", 0x7fffffff, (char *)&g16, (int64_t)v1337, 0); // 0x402292
                                    g47 = v1338;
                                    v1322 = v1330;
                                    v1324 = v1329;
                                    v1326 = 0;
                                    goto lab_0x401f50;
                                } else {
                                    if (v1334 == 132) {
                                        goto lab_0x402019;
                                    } else {
                                        if (v1334 != 133) {
                                            // 0x403ad7
                                            function_405d10(1);
                                            // UNREACHABLE
                                        }
                                        // 0x4021e7
                                        g44 = 1;
                                        v1322 = v1330;
                                        v1324 = v1329;
                                        v1326 = v1328;
                                        goto lab_0x401f50;
                                    }
                                }
                            }
                        } else {
                            // 0x401f8c
                            v1322 = v1330;
                            v1324 = 1;
                            v1326 = v1328;
                            if (v1334 == 118) {
                                goto lab_0x401f50;
                            } else {
                                if (v1334 > 118) {
                                    if (v1334 != 122) {
                                        if (v1334 != 128) {
                                          lab_0x403ad7:
                                            // 0x403ad7
                                            function_405d10(1);
                                            // UNREACHABLE
                                        }
                                        // 0x401ffb
                                        *(char *)&g54 = 1;
                                        v1322 = v1330;
                                        v1324 = v1329;
                                        v1326 = v1328;
                                    } else {
                                        // 0x401fa0
                                        *(char *)&g48 = 0;
                                        v1322 = v1330;
                                        v1324 = v1329;
                                        v1326 = v1328;
                                    }
                                    goto lab_0x401f50;
                                } else {
                                    if (v1334 != 115) {
                                        // 0x403ad7
                                        function_405d10(1);
                                        // UNREACHABLE
                                    }
                                    int64_t v1339 = function_40a1c0((int64_t)g69, 0, (int64_t *)&readfds, 0x406500); // 0x4020e7
                                    if ((char)v1339 == 0) {
                                        int64_t v1340 = function_409760((int64_t)g69); // 0x402114
                                        error(1, (int32_t)"invalid number of seconds: %s" ^ (int32_t)"invalid number of seconds: %s", dcgettext(NULL, "invalid number of seconds: %s", 5));
                                        v1341 = &g73;
                                        v1342 = v1340;
                                        goto lab_0x402148;
                                    } else {
                                        int128_t v1343 = __asm_movsd((int64_t)readfds); // 0x4020f0
                                        __asm_comisd(v1343, v1344);
                                        v1322 = __asm_movsd_1(v1343);
                                        v1324 = v1329;
                                        v1326 = v1328;
                                        goto lab_0x401f50;
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (v1334 < 58) {
                        if (v1334 > 47) {
                            // 0x403ab2
                            error(1, (int32_t)"option used in invalid context -- %c" ^ (int32_t)"option used in invalid context -- %c", dcgettext(NULL, "option used in invalid context -- %c", 5));
                            goto lab_0x403ad7;
                        } else {
                            if (v1334 == -131) {
                                // 0x40207f
                                function_409c90((int64_t)g39, "tail", "GNU coreutils", (int64_t)g27, "Paul Rubin", "David MacKenzie");
                                exit(0);
                                // UNREACHABLE
                            }
                            if (v1334 == -130) {
                                // 0x4021fe
                                function_405d10(0);
                                // UNREACHABLE
                            }
                            goto lab_0x403ad7;
                        }
                    }
                    // 0x401fb9
                    v1345 = v1331;
                    v1346 = v1329;
                    if (v1334 == 99) {
                        goto lab_0x402151;
                    } else {
                        if (v1334 > 99) {
                            // 0x402010
                            v1341 = v1331;
                            v1342 = v1329;
                            if (v1334 != 102) {
                                goto lab_0x402148;
                            } else {
                                goto lab_0x402019;
                            }
                        } else {
                            if (v1334 != 70) {
                                // 0x403ad7
                                function_405d10(1);
                                // UNREACHABLE
                            }
                            // 0x401fcd
                            *(char *)&g52 = 1;
                            g26 = 1;
                            *(char *)&g54 = 1;
                            v1322 = v1330;
                            v1324 = v1329;
                            v1326 = v1328;
                            goto lab_0x401f50;
                        }
                    }
                }
            }
        }
    }
  lab_0x4023f3:;
    // 0x4023f3
    int32_t pid3; // 0x401e60
    if (*(char *)&g54 == 0) {
        goto lab_0x4027f1;
    } else {
        // 0x402403
        if (*(char *)&g52 == 0) {
            // 0x4027cb
            *(char *)&g54 = 0;
            goto lab_0x4027dc;
        } else {
            // 0x402410
            if (g26 == 2) {
                goto lab_0x4027dc;
            } else {
                // 0x40241d
                pid3 = g47;
                if (g47 == 0) {
                    goto lab_0x402436;
                } else {
                    goto lab_0x402427;
                }
            }
        }
    }
  lab_0x4027f1:;
    int32_t v1386 = g47; // 0x4027f1
    if (v1386 == 0) {
        goto lab_0x402436;
    } else {
        // 0x4027ff
        pid3 = v1386;
        if (*(char *)&g52 != 0) {
            goto lab_0x402427;
        } else {
            // 0x40280c
            error(0, (int32_t)"warning: PID ignored; --pid=PID is useful only when following" ^ (int32_t)"warning: PID ignored; --pid=PID is useful only when following", dcgettext(NULL, "warning: PID ignored; --pid=PID is useful only when following", 5));
            goto lab_0x402436;
        }
    }
  lab_0x401efd:
    // 0x401efd
    v5 = 0;
    if (strcmp(str4, "--") != 0) {
        goto lab_0x401f2f;
    } else {
        goto lab_0x401f0b;
    }
  lab_0x4022f5:;
    int64_t v1387 = 0;
    char v1388 = *(char *)v1382; // 0x4022f5
    int64_t v1389 = v1382; // 0x402304
    char v1390 = v1388; // 0x402304
    int64_t v1391 = v1382; // 0x402304
    if (v1388 == 57 || (int32_t)v1388 < 57) {
        int64_t v1392 = v1389 + 1; // 0x402310
        char v1393 = *(char *)v1392; // 0x402314
        v1389 = v1392;
        v1390 = v1393;
        v1391 = v1392;
        while (v1393 == 57 || (int32_t)v1393 < 57) {
            // 0x402310
            v1392 = v1389 + 1;
            v1393 = *(char *)v1392;
            v1389 = v1392;
            v1390 = v1393;
            v1391 = v1392;
        }
    }
    int64_t v1394 = v1391;
    int64_t v1395 = v1394; // 0x401e60
    int64_t v1396 = 10; // 0x401e60
    int64_t v1397 = 1; // 0x401e60
    int64_t v1398 = 0x1400; // 0x401e60
    int64_t v1399 = 0; // 0x401e60
    switch (v1390) {
        case 99: {
            // 0x403091
            v1398 = 10;
            v1399 = 0;
        }
        case 98: {
          lab_0x402e78:
            // 0x402e78
            v1395 = v1394 + 1;
            v1396 = v1398;
            v1397 = v1399;
            // break -> 0x40234a
            break;
        }
        case 108: {
            // 0x402e81
            v1398 = 10;
            v1399 = 1;
            // branch (via goto) -> 0x402e78
            goto lab_0x402e78;
        }
    }
    int64_t v1400 = v1397;
    char v1401 = *(char *)v1395; // 0x40234d
    v5 = 0;
    v1383 = v1400;
    int64_t v1118; // 0x401e60
    int64_t v1120; // 0x401e60
    int64_t v1117; // 0x401e60
    int64_t v1115; // 0x401e60
    int64_t v1113; // 0x401e60
    int64_t v1114; // 0x401e60
    if (*(char *)(v1395 + (int64_t)(v1401 == 102)) != 0) {
        goto lab_0x401f2f;
    } else {
        if (v1382 == v1394) {
            // 0x402830
            v3 = v1396 & 0xffffffff;
            goto lab_0x402391;
        } else {
            // 0x40236e
            if ((function_40a260(v1382, 0, 10, &v3, &g3, v1) & 0xfffffffd) != 0) {
                int64_t v1402 = function_409760(*v1380); // 0x403ec3
                char * v1403 = dcgettext(NULL, "invalid number", 5); // 0x403ed7
                int64_t v1404 = (int64_t)v1403; // 0x403ed7
                error(1, *__errno_location(), "%s: %s", v1403, (char *)v1402);
                v1113 = v1404;
                v1114 = (int64_t)"%s: %s";
                v1115 = v1404;
                v1117 = v1402;
                v1118 = v1387;
                v1120 = v1400;
                goto lab_0x403efd;
            } else {
                goto lab_0x402391;
            }
        }
    }
  lab_0x402436:;
    char v1405 = *(char *)&g50; // 0x402436
    if (v1405 != 0) {
        int64_t v1406 = v3; // 0x40243f
        if (v1406 != 0) {
            // 0x40244c
            v3 = v1406 - 1;
        }
    }
    int64_t v1407 = (int64_t)*(int32_t *)0x61233c; // 0x402458
    int64_t v1408 = &g24; // 0x402461
    int32_t * v1409 = (int32_t *)1; // 0x402461
    if (v1332 > v1407) {
        // 0x402467
        v1408 = 8 * v1407 + v1333;
        v1409 = (int32_t *)(0x100000000 * (v1385 - v1407) >> 32);
    }
    int64_t v1410 = v1331 & 0xffffffff; // 0x4023fa
    int32_t * v1411 = v1409; // 0x4024e2
    int64_t v1412 = v1408;
    err_num5 = v1411;
    int64_t v1413 = 8 * (int64_t)v1411 + v1412; // 0x402481
    bool v1414; // 0x401e60
    int64_t v1415 = v1414 ? -1 : 1; // 0x40249d
    int64_t v1416 = 2; // 0x40249d
    int64_t v1417 = *(int64_t *)v1412;
    int64_t v1418 = (int64_t)"-";
    unsigned char v1419 = *(char *)v1417; // 0x40249d
    char v1420 = *(char *)v1418; // 0x40249d
    char v1421 = v1420; // 0x40249d
    bool v1422 = false; // 0x40249d
    int64_t v1423; // 0x401e60
    int64_t v1424; // 0x401e60
    while (v1419 == v1420) {
        v1416--;
        v1423 = v1418 + v1415;
        v1424 = v1417 + v1415;
        v1421 = v1419;
        v1422 = true;
        if (v1416 == 0) {
            // break -> 
            break;
        }
        v1417 = v1424;
        v1418 = v1423;
        v1419 = *(char *)v1417;
        v1420 = *(char *)v1418;
        v1421 = v1420;
        v1422 = false;
    }
    unsigned char v1425 = v1421;
    int64_t v1426 = !((v1419 < v1425 | v1422)) == v1419 < v1425 ? 1 : 0;
    int64_t v1427 = v1412 + 8; // 0x4024ab
    int64_t v1428 = v1427; // 0x4024b2
    int64_t v1429 = v1426; // 0x4024b2
    while (v1427 != v1413) {
        // 0x402490
        v1416 = 2;
        v1417 = *(int64_t *)v1428;
        v1418 = (int64_t)"-";
        v1419 = *(char *)v1417;
        v1420 = *(char *)v1418;
        v1421 = v1420;
        v1422 = false;
        while (v1419 == v1420) {
            v1416--;
            v1423 = v1418 + v1415;
            v1424 = v1417 + v1415;
            v1421 = v1419;
            v1422 = true;
            if (v1416 == 0) {
                // break -> 
                break;
            }
            v1417 = v1424;
            v1418 = v1423;
            v1419 = *(char *)v1417;
            v1420 = *(char *)v1418;
            v1421 = v1420;
            v1422 = false;
        }
        v1425 = v1421;
        v1426 = !((v1419 < v1425 | v1422)) == v1419 < v1425 ? 1 : v1429;
        v1427 = v1428 + 8;
        v1428 = v1427;
        v1429 = v1426;
    }
    char v1430; // 0x401e60
    if ((char)v1426 == 0) {
        goto lab_0x40252c;
    } else {
        int32_t v1431 = g26; // 0x4024b9
        if (v1431 == 1) {
            // 0x403e0f
            function_409510(4, (int64_t)"-");
            error(1, (int32_t)"cannot follow %s by name" ^ (int32_t)"cannot follow %s by name", dcgettext(NULL, "cannot follow %s by name", 5));
            goto lab_0x403e46;
        } else {
            // 0x4024c8
            if (*(char *)&g52 == 0) {
                // 0x4030b5
                v1430 = v1405;
                if (v3 != 0) {
                    goto lab_0x402544;
                } else {
                    goto lab_0x4030c4;
                }
            } else {
                // 0x4024d5
                if (g47 != 0) {
                    goto lab_0x40283f;
                } else {
                    if (v1411 == (int32_t *)1 == v1431 == 2) {
                        int32_t v1432 = __fxstat(1, 0, (struct stat *)&readfds); // 0x402508
                        uint32_t v1433; // 0x401e60
                        if ((v1433 & 0xf000) == 0x8000 || v1432 != 0) {
                            goto lab_0x40283f;
                        } else {
                            goto lab_0x40252c;
                        }
                    } else {
                        goto lab_0x40283f;
                    }
                }
            }
        }
    }
  lab_0x40252c:
    // 0x40252c
    if (v3 == 0 == *(char *)&g52 == 0) {
        // 0x40252c
        v1430 = *(char *)&g50;
        goto lab_0x4030c4;
    } else {
        goto lab_0x402544;
    }
  lab_0x402427:
    // 0x402427
    if (kill(pid3, 0) != 0) {
        // 0x40350b
        if (*__errno_location() == 38) {
            // 0x403519
            error(0, (int32_t)"warning: --pid=PID is not supported on this system" ^ (int32_t)"warning: --pid=PID is not supported on this system", dcgettext(NULL, "warning: --pid=PID is not supported on this system", 5));
            g47 = 0;
        }
    }
    goto lab_0x402436;
  lab_0x4027dc:
    // 0x4027dc
    error(0, 0, dcgettext(NULL, (char *)(int64_t)"warning: --retry ignored; --retry is useful only when following", 5));
    goto lab_0x4027f1;
  lab_0x402544:;
    int64_t v1434 = (int64_t)err_num5; // 0x402544
    int64_t v1435 = 96 * v1434; // 0x402544
    int64_t v1436 = function_409dd0(v1435); // 0x402551
    int64_t v1437 = v1436; // 0x40255b
    int64_t v1438 = *(int64_t *)v1412; // 0x402560
    int64_t v1439 = v1412 + 8; // 0x402564
    *(int64_t *)v1437 = v1438;
    v1437 += 96;
    int64_t v1440 = v1439; // 0x402573
    while (v1439 != v1413) {
        // 0x402560
        v1438 = *(int64_t *)v1440;
        v1439 = v1440 + 8;
        *(int64_t *)v1437 = v1438;
        v1437 += 96;
        v1440 = v1439;
    }
    int32_t v1441 = v1329; // 0x402575
    if (v1441 == 1) {
        // 0x402872
        g49 = 1;
        goto lab_0x40258d;
    } else {
        if (v1441 != 0) {
            goto lab_0x40258d;
        } else {
            // 0x402582
            if (err_num5 != (int32_t *)1) {
                // 0x402872
                g49 = 1;
                goto lab_0x40258d;
            } else {
                goto lab_0x40258d;
            }
        }
    }
  lab_0x402391:
    // 0x402391
    *(char *)&g50 = (char)v1387;
    *(char *)&g53 = (char)v1400;
    *(char *)&g52 = (char)(v1401 == 102);
    v5 = 1;
    v1383 = v1400;
    goto lab_0x401f2f;
  lab_0x4030c4:
    // 0x4030c4
    if (v1430 == 0) {
        // 0x4029a3
        return 0;
    }
    goto lab_0x402544;
  lab_0x403e46:
    // 0x403e46
    __assert_fail("beg", "src/tail.c", 713, "pipe_lines");
    int64_t v328 = v1330; // 0x403e5a
    int32_t v524; // 0x401e60
    int32_t v329 = v524; // 0x403e5a
    int64_t v525; // 0x401e60
    int64_t v330 = v525; // 0x403e5a
    int32_t v526; // 0x401e60
    int32_t v331 = v526; // 0x403e5a
    int32_t v527; // 0x401e60
    int32_t v332 = v527; // 0x403e5a
    int32_t v528; // 0x401e60
    int32_t v333 = v528; // 0x403e5a
    struct stat * v529; // 0x401e60
    struct stat * v334 = v529; // 0x403e5a
    int32_t v530; // 0x401e60
    int32_t v335 = v530; // 0x403e5a
    int32_t v531; // 0x401e60
    int32_t v336 = v531; // 0x403e5a
    int32_t v533; // 0x401e60
    int32_t v337 = v533; // 0x403e5a
    int32_t v534; // 0x401e60
    int32_t v338 = v534; // 0x403e5a
    int32_t v537; // 0x401e60
    int32_t v339 = v537; // 0x403e5a
    int32_t v538; // 0x401e60
    int32_t v340 = v538; // 0x403e5a
    int64_t v539; // 0x401e60
    int64_t v341 = v539; // 0x403e5a
    int32_t v540; // 0x401e60
    int32_t v342 = v540; // 0x403e5a
    bool v541; // 0x401e60
    bool v343 = v541; // 0x403e5a
    int128_t v542; // 0x401e60
    int128_t v344 = v542; // 0x403e5a
    int64_t v345 = v1412; // 0x403e5a
    int64_t v347 = v1384; // 0x403e5a
    int64_t v348 = v1410; // 0x403e5a
    int64_t v544; // 0x401e60
    int64_t v349 = v544; // 0x403e5a
    goto lab_0x403e5f;
  lab_0x403efd:;
    // 0x403efd
    int32_t v1102; // 0x401e60
    int64_t v1477 = 0x100000000000000 * (int64_t)v1102 >> 56; // 0x403efd
    int64_t v1478 = function_407800((char)v1477, v1115); // 0x403f05
    int64_t v703 = v1477; // 0x403f0d
    if (v1478 == 0) {
      lab_0x4045da:
        // 0x4045da
        function_40a020(v703);
        // UNREACHABLE
    }
    // 0x403f13
    int64_t v1085; // 0x401e60
    int64_t v1128 = v1085; // 0x403f18
    int32_t v1087; // 0x401e60
    int32_t v1129 = v1087; // 0x403f18
    int64_t v1089; // 0x401e60
    int64_t v1130 = v1089; // 0x403f18
    int32_t v1091; // 0x401e60
    int32_t v1131 = v1091; // 0x403f18
    int32_t v1093; // 0x401e60
    int32_t v1132 = v1093; // 0x403f18
    int32_t v1095; // 0x401e60
    int32_t v1133 = v1095; // 0x403f18
    struct stat * v1097; // 0x401e60
    struct stat * v1134 = v1097; // 0x403f18
    int32_t v1099; // 0x401e60
    int32_t v1135 = v1099; // 0x403f18
    int32_t v1100; // 0x401e60
    int32_t v1136 = 0x1000000 * v1100 >> 24; // 0x403f18
    int32_t v1138 = v1100; // 0x403f18
    int32_t v1139 = v1102; // 0x403f18
    int32_t v1104; // 0x401e60
    int32_t v1140 = v1104; // 0x403f18
    int32_t v1105; // 0x401e60
    int32_t v1141 = v1105; // 0x403f18
    int64_t v1107; // 0x401e60
    int64_t v1142 = v1107; // 0x403f18
    bool v1109; // 0x401e60
    bool v1143 = v1109; // 0x403f18
    int128_t v1111; // 0x401e60
    int128_t v1144 = v1111; // 0x403f18
    int64_t v1145 = v1113; // 0x403f18
    int64_t v1146 = v1114; // 0x403f18
    int64_t v1147 = v1115; // 0x403f18
    int64_t v1148 = v1117; // 0x403f18
    int64_t v1149 = v1118; // 0x403f18
    int64_t v1150 = v1120; // 0x403f18
    goto lab_0x403f1c;
  lab_0x40258d:;
    int64_t v272 = v1330; // 0x4025af
    int32_t v273 = v1435; // 0x4025af
    int64_t v274 = v1436; // 0x4025af
    int32_t v275 = -1; // 0x4025af
    int32_t v276 = 1; // 0x4025af
    int32_t v277 = 0x6000000000 * v1434 / 0x100000000 + v1436; // 0x4025af
    int64_t v284 = v1438; // 0x4025af
    int64_t v286 = v1384; // 0x4025af
    int64_t v287 = v1436; // 0x4025af
    int64_t v288 = v1436; // 0x4025af
    goto lab_0x4025b0;
  lab_0x403e5f:
    // 0x403e5f
    error(1, *__errno_location(), dcgettext(NULL, "standard output", 5));
    int64_t v144 = v328; // 0x403e84
    int32_t v146 = v329; // 0x403e84
    int64_t v148 = v330; // 0x403e84
    int32_t v150 = v331; // 0x403e84
    int32_t v152 = v332; // 0x403e84
    int32_t v154 = v333; // 0x403e84
    struct stat * v156 = v334; // 0x403e84
    int32_t v158 = v335; // 0x403e84
    int32_t v160 = v336; // 0x403e84
    int32_t v162 = v337; // 0x403e84
    int32_t v164 = v338; // 0x403e84
    int32_t v166 = v339; // 0x403e84
    int32_t v168 = v340; // 0x403e84
    int64_t v170 = v341; // 0x403e84
    int32_t v172 = v342; // 0x403e84
    bool v174 = v343; // 0x403e84
    int128_t v176 = v344; // 0x403e84
    int64_t v178 = v345; // 0x403e84
    int64_t v179 = v347; // 0x403e84
    int64_t v181 = v348; // 0x403e84
    int64_t v183 = v349; // 0x403e84
    goto lab_0x403e89;
  lab_0x40283f:
    // 0x40283f
    if (isatty(0) != 0) {
        // 0x40284e
        error(0, (int32_t)"warning: following standard input indefinitely is ineffective" ^ (int32_t)"warning: following standard input indefinitely is ineffective", dcgettext(NULL, "warning: following standard input indefinitely is ineffective", 5));
    }
    goto lab_0x40252c;
  lab_0x403f1c:
    // 0x403f1c
    v1378 = v1150;
    int64_t v1458 = v1149;
    int64_t v1452 = v1148;
    int64_t v1446 = v1146;
    int64_t v1459 = v1145;
    v1377 = v1144;
    v1376 = v1143;
    v1375 = v1142;
    int32_t v1455 = v1141;
    v1374 = v1140;
    v1365 = v1139;
    v1373 = v1138;
    int32_t v1460 = v1136;
    int32_t v1454 = v1135;
    v1372 = v1134;
    v1371 = v1133;
    v1370 = v1132;
    v1369 = v1131;
    v1368 = v1130;
    v1367 = v1129;
    v1366 = v1128;
    int64_t v1461 = v1147 + 96; // 0x403f1c
    int64_t v1450 = v1371; // 0x403f20
    int64_t v706 = v1366; // 0x403f25
    int32_t v707 = v1367; // 0x403f25
    int64_t v708 = v1368; // 0x403f25
    int32_t v709 = v1369; // 0x403f25
    int32_t v710 = v1370; // 0x403f25
    int32_t v711 = v1371; // 0x403f25
    struct stat * v712 = v1372; // 0x403f25
    int32_t v713 = v1454; // 0x403f25
    int32_t v714 = v1460; // 0x403f25
    int32_t v715 = v1373; // 0x403f25
    int32_t v716 = v1365; // 0x403f25
    int32_t v717 = v1374; // 0x403f25
    int32_t v718 = v1455; // 0x403f25
    int64_t v719 = v1375; // 0x403f25
    bool v720 = v1376; // 0x403f25
    int128_t v721 = v1377; // 0x403f25
    int64_t v722 = v1459; // 0x403f25
    int64_t v723 = v1446; // 0x403f25
    int64_t v724 = v1461; // 0x403f25
    int64_t v725 = v1452; // 0x403f25
    int64_t v726 = v1458; // 0x403f25
    int64_t v727 = v1378; // 0x403f25
    bool v1171; // 0x401e60
    int64_t v1174; // 0x401e60
    int64_t v1173; // 0x401e60
    int32_t v1164; // 0x401e60
    int32_t v1163; // 0x401e60
    int32_t v1161; // 0x401e60
    int64_t v1170; // 0x401e60
    int32_t v1169; // 0x401e60
    int64_t v1162; // 0x401e60
    int32_t v1165; // 0x401e60
    int32_t v1167; // 0x401e60
    int64_t v1160; // 0x401e60
    struct stat * v1166; // 0x401e60
    int32_t v1168; // 0x401e60
    int128_t v1172; // 0x401e60
    if (v1461 != v1450) {
        goto lab_0x403c9f;
    } else {
        // 0x403f2b
        if (g26 == 2) {
            // 0x404391
            v1160 = v1366;
            v1161 = v1367;
            v1162 = v1368;
            v1163 = v1369;
            v1164 = v1370;
            v1165 = v1371;
            v1166 = v1372;
            v1167 = v1373;
            v1168 = v1365;
            v1169 = v1374;
            v1170 = v1375;
            v1171 = v1376;
            v1172 = v1377;
            v1173 = v1459;
            v1174 = v1378;
            if ((char)v1458 != 0) {
                goto lab_0x403d9b;
            } else {
                // 0x40439a
                if ((char)v1460 == 0) {
                    // 0x4029a3
                    return 1;
                }
                goto lab_0x403f3d;
            }
        } else {
            goto lab_0x403f3d;
        }
    }
  lab_0x4025b0:;
    int64_t v1046 = v288;
    int64_t v442 = v287;
    int64_t v440 = v286;
    int128_t v283; // 0x401e60
    int128_t v467 = v283;
    bool v282; // 0x401e60
    bool v466 = v282;
    int32_t v281; // 0x401e60
    int32_t v436 = v281;
    int64_t v280; // 0x401e60
    int64_t v434 = v280;
    int32_t v279; // 0x401e60
    int32_t v432 = v279;
    int32_t v278; // 0x401e60
    int32_t v430 = v278;
    int32_t v464 = v277;
    int32_t v463 = v276;
    int32_t v462 = v275;
    int64_t v461 = v274;
    int32_t v460 = v273;
    int64_t v459 = v272;
    int64_t v421 = v3; // 0x4025b0
    struct stat * v423 = (struct stat *)v421; // 0x4025c2
    int64_t * v1043 = (int64_t *)v442; // 0x4025c7
    int64_t v1462 = *v1043; // 0x4025c7
    int64_t v1463 = v466 ? -1 : 1; // 0x4025cd
    int64_t v1464 = 2; // 0x401e60
    int64_t v1465 = v1462;
    int64_t v1466 = (int64_t)"-";
    unsigned char v1467 = *(char *)v1465; // 0x4025cd
    char v1468 = *(char *)v1466; // 0x4025cd
    char v1469 = v1468; // 0x4025cd
    bool v1470 = false; // 0x4025cd
    while (v1467 == v1468) {
        int64_t v1471 = v1464 - 1; // 0x4025cd
        int64_t v1472 = v1466 + v1463; // 0x4025cd
        int64_t v1473 = v1465 + v1463; // 0x4025cd
        v1464 = v1471;
        v1469 = v1467;
        v1470 = true;
        if (v1471 == 0) {
            // break -> 
            break;
        }
        v1465 = v1473;
        v1466 = v1472;
        v1467 = *(char *)v1465;
        v1468 = *(char *)v1466;
        v1469 = v1468;
        v1470 = false;
    }
    unsigned char v1474 = v1469;
    int64_t v1475 = (int64_t)!((v1467 < v1474 | v1470)) - (int64_t)(v1467 < v1474); // 0x4025d2
    int64_t v1044 = v1475 % 256 | v284 & -256; // 0x4025d2
    int32_t v465 = v1475; // 0x4025d8
    int64_t v1457; // 0x401e60
    int64_t v1054; // 0x401e60
    int32_t v1456; // 0x401e60
    int32_t v1047; // 0x401e60
    char v1042; // 0x4028c3
    int32_t v1045; // 0x4028ca
    if (v465 != 0) {
        int64_t v1476 = function_406780(v1462, 0, v1044); // 0x4028be
        v1042 = *(char *)&g54;
        v1045 = v1476;
        if (v1042 == 0) {
            // 0x402c48
            *(char *)(v442 + 54) = 1;
            if (v1045 == -1) {
                goto lab_0x4028e4;
            } else {
                // 0x402c58
                v1047 = v1045;
                v1054 = 0;
                goto lab_0x4025f8;
            }
        } else {
            if (v1045 != -1) {
                // 0x40309e
                v1456 = v1045;
                v1457 = 0;
                goto lab_0x4025f3;
            } else {
                // 0x4028df
                *(char *)(v442 + 54) = 0;
                goto lab_0x4028e4;
            }
        }
    } else {
        // 0x4025e4
        g46 = 1;
        v1456 = 0;
        v1457 = v1475;
        goto lab_0x4025f3;
    }
  lab_0x403e89:;
    char * format16 = dcgettext(NULL, "write error", 5); // 0x403e95
    error(1, *__errno_location(), format16);
    int64_t v589 = v144; // 0x403eae
    int32_t v590 = v146; // 0x403eae
    int64_t v591 = v148; // 0x403eae
    int32_t v592 = v150; // 0x403eae
    int32_t v593 = v152; // 0x403eae
    int32_t v594 = v154; // 0x403eae
    struct stat * v595 = v156; // 0x403eae
    int32_t v596 = v158; // 0x403eae
    int32_t v597 = v160; // 0x403eae
    int32_t v598 = v162; // 0x403eae
    int32_t v599 = v164; // 0x403eae
    int32_t v600 = v166; // 0x403eae
    int32_t v601 = v168; // 0x403eae
    int64_t v602 = v170; // 0x403eae
    int32_t v603 = v172; // 0x403eae
    bool v604 = v174; // 0x403eae
    int128_t v605 = v176; // 0x403eae
    int64_t v606 = (int64_t)format16; // 0x403eae
    int64_t v607 = v178; // 0x403eae
    int64_t v608 = v179; // 0x403eae
    int64_t v609 = v181; // 0x403eae
    int64_t v610 = v183; // 0x403eae
    goto lab_0x403eb3;
  lab_0x403c9f:;
    int64_t v1121 = v727;
    int64_t v1119 = v726;
    int64_t v1077 = v725;
    int64_t v1116 = v724;
    int128_t v1112 = v721;
    bool v1110 = v720;
    int64_t v1108 = v719;
    int32_t v1106 = v718;
    int32_t v1186 = v717;
    int32_t v1103 = v716;
    int32_t v1101 = v715;
    int32_t v1137 = v714;
    int32_t v1083 = v713;
    struct stat * v1098 = v712;
    int32_t v1096 = v711;
    int32_t v1094 = v710;
    int32_t v1092 = v709;
    int64_t v1090 = v708;
    int32_t v1088 = v707;
    int64_t v1086 = v706;
    v1128 = v1086;
    v1129 = v1088;
    v1130 = v1090;
    v1131 = v1092;
    v1132 = v1094;
    v1133 = v1096;
    v1134 = v1098;
    v1135 = v1083;
    v1136 = v1137;
    v1138 = v1101;
    v1139 = v1103;
    v1140 = v1186;
    v1141 = v1106;
    v1142 = v1108;
    v1143 = v1110;
    v1144 = v1112;
    v1145 = v722;
    v1146 = v723;
    v1147 = v1116;
    v1148 = v1077;
    v1149 = v1119;
    v1150 = v1121;
    int64_t v854; // 0x401e60
    int64_t v856; // 0x401e60
    int64_t * v1082; // 0x403ca9
    int64_t v1187; // 0x403ca9
    int64_t v857; // 0x401e60
    if (*(char *)(v1116 + 52) != 0) {
        goto lab_0x403f1c;
    } else {
        // 0x403ca9
        v1082 = (int64_t *)v1116;
        v1187 = *v1082;
        v857 = v1110 ? -1 : 1;
        v854 = -1;
        v856 = v1187;
        goto lab_dec_label_pc_unknown;
    }
  lab_0x403eb3:;
    int64_t v611 = v589; // 0x403eba
    int32_t v612 = v590; // 0x403eba
    int64_t v613 = v591; // 0x403eba
    int32_t v614 = v592; // 0x403eba
    int32_t v615 = v593; // 0x403eba
    int32_t v616 = v594; // 0x403eba
    struct stat * v617 = v595; // 0x403eba
    int32_t v618 = v596; // 0x403eba
    int32_t v619 = v597; // 0x403eba
    int32_t v620 = v598; // 0x403eba
    int32_t v621 = v599; // 0x403eba
    int32_t v622 = v600; // 0x403eba
    int32_t v623 = v601; // 0x403eba
    int64_t v624 = v602; // 0x403eba
    int32_t v625 = v603; // 0x403eba
    bool v626 = v604; // 0x403eba
    int128_t v627 = v605; // 0x403eba
    int64_t v628 = -2; // 0x403eba
    int64_t v629 = v606; // 0x403eba
    int64_t v630 = v607; // 0x403eba
    int64_t v631 = v608; // 0x403eba
    int64_t v632 = v609; // 0x403eba
    int64_t v633 = v610; // 0x403eba
    goto lab_0x40338d;
  lab_0x403f3d:
    // 0x403f3d
    v1361 = (int64_t)v1372;
    int64_t v1188 = v1368 - 96 + (int64_t)v1367; // bp-368, 0x403f51
    int64_t v1444 = v1368;
    int64_t v1445 = v1446;
    int64_t v1447 = v1445; // 0x403fb6
    int64_t v1448; // 0x401e60
    if (*(char *)(v1444 + 52) == 0) {
        // 0x403fb8
        if (g26 != 1) {
            // 0x403f5b
            v1448 = v1445;
            if (*(int32_t *)(v1444 + 56) != -1) {
                // 0x403f61
                v1362 = (int64_t *)v1444;
                v1363 = *v1362;
                v1448 = v1361;
                if (__xstat(1, (char *)v1363, v1372) == 0) {
                    // 0x403f75
                    if (*(int64_t *)(v1444 + 32) != (int64_t)readfds) {
                        goto lab_0x404580_2;
                    }
                    // 0x403f87
                    v1448 = v1361;
                    if (*(int64_t *)(v1444 + 40) != v1) {
                        goto lab_0x404580_2;
                    }
                }
            }
        } else {
            // 0x403fc1
            function_4056e0(v1444, 0, v1445);
            v1448 = v1445;
        }
        // 0x403f99
        function_404f00(v1444, &v1188);
        v1447 = v1448;
    }
    int64_t v1449 = v1444 + 96; // 0x403fa9
    while (v1449 != v1450) {
        // 0x403fb2
        v1444 = v1449;
        v1445 = v1447;
        v1447 = v1445;
        if (*(char *)(v1444 + 52) == 0) {
            // 0x403fb8
            if (g26 != 1) {
                // 0x403f5b
                v1448 = v1445;
                if (*(int32_t *)(v1444 + 56) != -1) {
                    // 0x403f61
                    v1362 = (int64_t *)v1444;
                    v1363 = *v1362;
                    v1448 = v1361;
                    if (__xstat(1, (char *)v1363, v1372) == 0) {
                        // 0x403f75
                        if (*(int64_t *)(v1444 + 32) != (int64_t)readfds) {
                            goto lab_0x404580_2;
                        }
                        // 0x403f87
                        v1448 = v1361;
                        if (*(int64_t *)(v1444 + 40) != v1) {
                            goto lab_0x404580_2;
                        }
                    }
                }
            } else {
                // 0x403fc1
                function_4056e0(v1444, 0, v1445);
                v1448 = v1445;
            }
            // 0x403f99
            function_404f00(v1444, &v1188);
            v1447 = v1448;
        }
        // 0x403fa9
        v1449 = v1444 + 96;
    }
    int64_t v1451 = v1452 + 17; // 0x404012
    int64_t v1453 = function_409dd0(v1451); // 0x404023
    int64_t v929 = v1366; // 0x404046
    int32_t v930 = v1367; // 0x404046
    int64_t v931 = v1368; // 0x404046
    int32_t v932 = v1369; // 0x404046
    int32_t v933 = v1370; // 0x404046
    int32_t v934 = v1371; // 0x404046
    struct stat * v935 = (struct stat *)v1451; // 0x404046
    int32_t v936 = v1454; // 0x404046
    int32_t v937 = v1378; // 0x404046
    int32_t v938 = v1373; // 0x404046
    int32_t v939 = v1365; // 0x404046
    int32_t v940 = 3; // 0x404046
    int32_t v941 = v1455; // 0x404046
    int64_t v942 = v1375; // 0x404046
    int32_t v943 = v1453; // 0x404046
    bool v944 = v1376; // 0x404046
    int128_t v945 = v1377; // 0x404046
    int64_t v946 = 0; // 0x404046
    int64_t v947 = 1 << v1378 % 64; // 0x404046
    int64_t v948 = v1378; // 0x404046
    int64_t v949 = 0; // 0x404046
    int64_t v950 = v1361; // 0x404046
    goto lab_0x40404b_3;
  lab_0x4025f3:
    // 0x4025f3
    *(char *)(v442 + 54) = 1;
    v1047 = v1456;
    v1054 = v1457;
    goto lab_0x4025f8;
  lab_0x40338d:;
    int64_t v1442 = function_404a20(0, v631, (int32_t)v630, v628); // 0x403394
    int64_t * v1443 = (int64_t *)(v632 + 8); // 0x40339f
    *v1443 = *v1443 + v1442;
    int64_t v192 = v611; // 0x4033a3
    int32_t v193 = v612; // 0x4033a3
    int64_t v194 = v613; // 0x4033a3
    int32_t v195 = v614; // 0x4033a3
    int32_t v196 = v615; // 0x4033a3
    int32_t v197 = v616; // 0x4033a3
    struct stat * v198 = v617; // 0x4033a3
    int32_t v199 = v618; // 0x4033a3
    int32_t v200 = 0x1000000 * (v619 | (int32_t)(v1442 != 0)) >> 24; // 0x4033a3
    int32_t v201 = v620; // 0x4033a3
    int32_t v202 = v621; // 0x4033a3
    int32_t v203 = v622; // 0x4033a3
    int32_t v204 = v623; // 0x4033a3
    int64_t v205 = v624; // 0x4033a3
    int32_t v206 = v625; // 0x4033a3
    bool v207 = v626; // 0x4033a3
    int128_t v208 = v627; // 0x4033a3
    int64_t v209 = v628; // 0x4033a3
    int64_t v210 = v630 & 0xffffff00 | (int64_t)(v1442 != 0); // 0x4033a3
    int64_t v211 = v629; // 0x4033a3
    int64_t v212 = v630; // 0x4033a3
    int64_t v213 = v631; // 0x4033a3
    int64_t v214 = v631; // 0x4033a3
    int64_t v215 = v632; // 0x4033a3
    int64_t v216 = v633; // 0x4033a3
    goto lab_0x4033a7;
  lab_0x403d9b:
    // 0x403d9b
    function_4072a0((char)v1168);
    *__errno_location() = 0;
    v228 = v1160;
    v229 = v1161;
    v224 = v1162;
    v230 = v1163;
    v231 = v1164;
    v220 = v1165;
    v232 = v1166;
    v233 = v1167;
    v234 = v1169;
    v235 = v1170;
    v236 = v1171;
    v237 = v1172;
    v238 = v1173;
    v222 = v1174;
    goto lab_0x403db0;
  lab_0x40404b_3:
    // 0x40404b
    v951 = v950;
    v952 = v947;
    v953 = v939;
    v954 = v938;
    v955 = v937;
    v956 = v936;
    v957 = v934;
    v958 = v933;
    v959 = v931;
    v960 = v930;
    v961 = v929;
    v962 = v953;
    int32_t v963 = 0x1000000 * v954 >> 24;
    v964 = (char *)v951;
    v965 = (int64_t)&err_num5 + 320;
    v966 = &timeout;
    readfds2 = (struct _TYPEDEF_fd_set *)v951;
    int64_t v967 = v956;
    v968 = v932;
    v969 = v935;
    v970 = v940;
    v971 = v941;
    v972 = v942;
    v973 = v943;
    v974 = v944;
    v975 = v945;
    v976 = v946;
    v977 = v948;
    v978 = v949;
    bool v844; // 0x401e60
    int64_t v849; // 0x401e60
    int64_t v850; // 0x401e60
    int64_t v851; // 0x401e60
    int64_t v852; // 0x401e60
    int64_t v848; // 0x401e60
    int64_t v847; // 0x401e60
    int64_t v979; // 0x401e60
    int64_t v846; // 0x401e60
    int32_t v833; // 0x401e60
    int32_t v832; // 0x401e60
    int32_t v830; // 0x401e60
    int64_t v842; // 0x401e60
    int32_t v840; // 0x401e60
    int64_t v831; // 0x401e60
    int32_t v834; // 0x401e60
    int32_t v838; // 0x401e60
    int64_t v829; // 0x401e60
    int32_t v836; // 0x401e60
    struct stat * v835; // 0x401e60
    int32_t v843; // 0x401e60
    int32_t v839; // 0x401e60
    int32_t v841; // 0x401e60
    int32_t v837; // 0x401e60
    int32_t v980; // 0x401e60
    int32_t v981; // 0x40419b
    int64_t v982; // 0x404235
    int64_t v983; // 0x40424d
    int32_t v984; // 0x404463
    int128_t v845; // 0x401e60
    while (true) {
      lab_0x40404b_2:
        // 0x40404b
        v985 = v977;
        v986 = v972;
        v987 = v968;
        v980 = v985;
        nfds = v980 >= 0 == (v980 != 0) ? v980 + 1 : 2;
        int64_t v988 = v978;
        int64_t v989 = v976;
        int128_t v990 = v975;
        bool v991 = v974;
        v992 = v973;
        int32_t v993 = v971;
        v994 = v970;
        v995 = v969;
        if (g26 == 1) {
            // 0x4042b9
            if (*(char *)&g54 == 0) {
                // 0x4042c6
                if (function_406bd0(v962) == 0) {
                    // break (via goto) -> 0x4042d9
                    goto lab_0x4042d9;
                }
            }
        }
        // 0x404058
        v996 = v990;
        v997 = v993;
        while (v989 >= v988) {
            // 0x40404b
            while (true) {
                // 0x404061
                v998 = v997;
                v999 = v996;
                int32_t pid = g47; // 0x404061
                v1000 = v998;
                v1001 = v999;
                if (pid == 0) {
                    goto lab_0x4040b4;
                } else {
                    if ((char)v998 != 0) {
                        // 0x404375
                        exit(0);
                        // UNREACHABLE
                    }
                    // 0x404076
                    if (kill(pid, 0) == 0) {
                        goto lab_0x404148;
                    } else {
                        // 0x404085
                        if (*__errno_location() == 1) {
                            goto lab_0x404148;
                        } else {
                            // 0x404093
                            timeout = 0;
                            v1000 = v963;
                            v1001 = v999;
                            goto lab_0x4040b4;
                        }
                    }
                }
            }
            int64_t v1002 = (int64_t)v995; // 0x404302
            int64_t v1003 = v992;
            v1004 = function_409780(v980, v1003, v1002);
            int64_t v1005 = v989; // 0x40431a
            if (v1004 != 0) {
                // 0x404320
                if (v1004 != -1) {
                    goto lab_0x404186;
                }
                int32_t * v1006 = __errno_location(); // 0x40432c
                int32_t v1007 = *v1006; // 0x404331
                v1008 = 0;
                v1005 = 0;
                if (v1007 != 22) {
                    goto lab_0x404336_2;
                }
            }
            int64_t v1009 = v1005;
            v1008 = v1009;
            if (v994 % 256 == 0) {
                goto lab_0x404336_2;
            }
            int64_t v1010 = 2 * v1002; // 0x4043c8
            int64_t v1011 = function_409e30(v1003, v1010); // 0x4043d3
            v988 = v978;
            v989 = v976;
            v990 = v975;
            v991 = v974;
            v992 = v973;
            v993 = v971;
            v994 = v970;
            v995 = v969;
            if (g26 == 1) {
                // 0x4042b9
                if (*(char *)&g54 == 0) {
                    // 0x4042c6
                    if (function_406bd0(v962) == 0) {
                        // break (via goto) -> 0x4042d9
                        goto lab_0x4042d9;
                    }
                }
            }
            // 0x404058
            v996 = v990;
            v997 = v993;
        }
      lab_0x404186:
        // 0x404186
        v1012 = v988;
        v1013 = v990;
        v1014 = v991;
        v1015 = v993;
        v1016 = v989 + (int64_t)v992;
        uint32_t v1017 = *(int32_t *)(v1016 + 12); // 0x40418f
        int64_t v1018 = v1017; // 0x40418f
        uint32_t v1019 = *(int32_t *)(v1016 + 4); // 0x404192
        v981 = *(int32_t *)v1016;
        v1020 = v989 + 16 + v1018;
        if ((v1019 & 1024) == 0) {
            // 0x404298
            v1021 = v1018;
            if (v1017 == 0) {
                goto lab_0x4042a0;
            }
        } else {
            if (v1017 == 0) {
                // 0x404411
                goto lab_0x404411_2;
            }
        }
        int32_t v1022 = v1020;
        v1023 = v985 & 0xffffffff;
        char * str3 = (char *)(v1016 + 16); // 0x4041e0
        int64_t v1024 = v1019;
        int64_t v1025 = 0;
        int64_t v1026 = v959;
        int64_t v1027 = v1024; // 0x404200
        int64_t v1028; // 0x404216
        int64_t v1029; // 0x40423a
        int64_t * v1030; // 0x40445d
        int32_t * err_num7; // 0x404470
        char * format8; // 0x4044ac
        if (*(int32_t *)(v1026 + 72) == v981) {
            // 0x404202
            v1028 = *(int64_t *)v1026;
            v1027 = v1024 & 0xffffffff;
            if (strcmp(str3, (char *)(v1028 + *(int64_t *)(v1026 + 80))) == 0) {
                // 0x40422a
                v982 = 0x100000000 * v1020 >> 32;
                v1029 = 96 * v1025;
                v983 = v1029 + v959;
                if ((v1024 & 512) == 0) {
                    // 0x404459
                    v1030 = (int64_t *)v983;
                    v984 = inotify_add_watch(v980, (char *)*v1030, v956);
                    v979 = v967;
                    if (v984 >= 0) {
                        goto lab_0x4044cd;
                    } else {
                        // 0x404470
                        err_num7 = __errno_location();
                        if ((*err_num7 & -17) == 12) {
                            // 0x404697
                            v1031 = v984;
                            v1032 = v1016;
                            v1033 = v1014;
                            v1034 = v1013;
                            v1035 = v959;
                            v1036 = (int64_t)err_num7;
                            v1037 = v1023;
                            goto lab_0x404697;
                        } else {
                            // 0x404486
                            function_409510(4, *v1030);
                            format8 = dcgettext(NULL, "cannot watch %s", 5);
                            error(0, *err_num7, format8);
                            v979 = (int64_t)format8;
                            goto lab_0x4044cd;
                        }
                    }
                } else {
                    // 0x404257
                    v905 = v961;
                    v906 = v960;
                    v907 = v959;
                    v908 = v1022;
                    v909 = v958;
                    v910 = v957;
                    v911 = v995;
                    v912 = v956;
                    v913 = v955;
                    v914 = v954;
                    v915 = v953;
                    v916 = v994;
                    v917 = v1015;
                    v918 = v1016;
                    v919 = v992;
                    v920 = v1014;
                    v921 = v1013;
                    v922 = v1029;
                    v923 = v983;
                    v924 = v982;
                    v925 = v952;
                    v926 = v1023;
                    v927 = v1012;
                    v928 = v951;
                    v829 = v961;
                    v830 = v960;
                    v831 = v959;
                    v832 = v1022;
                    v833 = v958;
                    v834 = v957;
                    v835 = v995;
                    v836 = v956;
                    v837 = v955;
                    v838 = v954;
                    v839 = v953;
                    v840 = v994;
                    v841 = v1015;
                    v842 = v1016;
                    v843 = v992;
                    v844 = v1014;
                    v845 = v1013;
                    v846 = v1029;
                    v847 = v983;
                    v848 = v982;
                    v849 = v952;
                    v850 = v1023;
                    v851 = v1012;
                    v852 = v951;
                    if (g26 == 1) {
                        goto lab_0x404571;
                    } else {
                        goto lab_0x404264;
                    }
                }
            }
        }
        int64_t v1038 = v1025 + 1; // 0x4041ea
        int64_t v1039 = v1026 + 96; // 0x4041f6
        while (v1038 != (int64_t)err_num5) {
            // 0x4041fc
            v1024 = v1027;
            v1025 = v1038;
            v1026 = v1039;
            v1027 = v1024;
            if (*(int32_t *)(v1026 + 72) == v981) {
                // 0x404202
                v1028 = *(int64_t *)v1026;
                v1027 = v1024 & 0xffffffff;
                if (strcmp(str3, (char *)(v1028 + *(int64_t *)(v1026 + 80))) == 0) {
                    // 0x40422a
                    v982 = 0x100000000 * v1020 >> 32;
                    v1029 = 96 * v1025;
                    v983 = v1029 + v959;
                    if ((v1024 & 512) == 0) {
                        // 0x404459
                        v1030 = (int64_t *)v983;
                        v984 = inotify_add_watch(v980, (char *)*v1030, v956);
                        v979 = v967;
                        if (v984 >= 0) {
                            goto lab_0x4044cd;
                        } else {
                            // 0x404470
                            err_num7 = __errno_location();
                            if ((*err_num7 & -17) == 12) {
                                // 0x404697
                                v1031 = v984;
                                v1032 = v1016;
                                v1033 = v1014;
                                v1034 = v1013;
                                v1035 = v959;
                                v1036 = (int64_t)err_num7;
                                v1037 = v1023;
                                goto lab_0x404697;
                            } else {
                                // 0x404486
                                function_409510(4, *v1030);
                                format8 = dcgettext(NULL, "cannot watch %s", 5);
                                error(0, *err_num7, format8);
                                v979 = (int64_t)format8;
                                goto lab_0x4044cd;
                            }
                        }
                    } else {
                        // 0x404257
                        v905 = v961;
                        v906 = v960;
                        v907 = v959;
                        v908 = v1022;
                        v909 = v958;
                        v910 = v957;
                        v911 = v995;
                        v912 = v956;
                        v913 = v955;
                        v914 = v954;
                        v915 = v953;
                        v916 = v994;
                        v917 = v1015;
                        v918 = v1016;
                        v919 = v992;
                        v920 = v1014;
                        v921 = v1013;
                        v922 = v1029;
                        v923 = v983;
                        v924 = v982;
                        v925 = v952;
                        v926 = v1023;
                        v927 = v1012;
                        v928 = v951;
                        v829 = v961;
                        v830 = v960;
                        v831 = v959;
                        v832 = v1022;
                        v833 = v958;
                        v834 = v957;
                        v835 = v995;
                        v836 = v956;
                        v837 = v955;
                        v838 = v954;
                        v839 = v953;
                        v840 = v994;
                        v841 = v1015;
                        v842 = v1016;
                        v843 = v992;
                        v844 = v1014;
                        v845 = v1013;
                        v846 = v1029;
                        v847 = v983;
                        v848 = v982;
                        v849 = v952;
                        v850 = v1023;
                        v851 = v1012;
                        v852 = v951;
                        if (g26 == 1) {
                            goto lab_0x404571;
                        } else {
                            goto lab_0x404264;
                        }
                    }
                }
            }
            // 0x4041ea
            v1038 = v1025 + 1;
            v1039 = v1026 + 96;
        }
        // 0x40437c
        v1040 = v1022;
        v1041 = 0x100000000 * v1020 >> 32;
        goto lab_0x40404b;
    }
  lab_0x4042d9:
    // 0x4042d9
    error(0, (int32_t)"no files remaining" ^ (int32_t)"no files remaining", dcgettext(NULL, "no files remaining", 5));
    // 0x4029a3
    return 1;
  lab_0x4028e4:;
    int32_t * err_num8 = __errno_location(); // 0x4028e4
    if (*(char *)&g52 != 0) {
        // 0x4028f5
        *(int32_t *)(v442 + 56) = -1;
        *(char *)(v442 + 52) = v1042 ^ 1;
        *(int32_t *)(v442 + 60) = *err_num8;
        *(int64_t *)(v442 + 40) = 0;
        *(int64_t *)(v442 + 32) = 0;
    }
    // 0x40291a
    function_409510(4, function_4047e0(*v1043, 0, v1044));
    char * format9 = dcgettext(NULL, "cannot open %s for reading", 5); // 0x40293e
    error(0, *err_num8, format9);
    int64_t v266 = v459; // 0x402955
    int32_t v264 = v460; // 0x402955
    int64_t v262 = v461; // 0x402955
    int32_t v260 = v462; // 0x402955
    int32_t v270 = v463; // 0x402955
    int32_t v258 = v464; // 0x402955
    struct stat * v296 = v423; // 0x402955
    int32_t v294 = v465; // 0x402955
    int32_t v292 = v1045; // 0x402955
    int32_t v256 = 0; // 0x402955
    int32_t v254 = v430; // 0x402955
    int32_t v252 = v432; // 0x402955
    int64_t v250 = v434; // 0x402955
    int32_t v248 = v436; // 0x402955
    bool v246 = v466; // 0x402955
    int128_t v244 = v467; // 0x402955
    int64_t v285 = (int64_t)format9; // 0x402955
    int64_t v242 = v440; // 0x402955
    int64_t v268 = v442; // 0x402955
    int64_t v240 = v1046; // 0x402955
    goto lab_0x40295a;
  lab_0x4025f8:;
    uint32_t fd = v1047;
    if (g49 != 0) {
        // 0x402b27
        int64_t v1048; // 0x401e60
        int64_t v1049 = v1048;
        int64_t v1050; // 0x401e60
        int64_t v1051 = function_4047e0(v1049, v1050, v1044); // 0x402b2a
        char v1052 = g23; // 0x402b39
        int64_t v1053 = v1052 == 0 ? (int64_t)&g15 : (int64_t)&g16; // 0x402b40
        __printf_chk(1, "%s==> %s <==\n", (char *)v1053, (char *)v1051);
        g23 = 0;
    }
    int64_t v418 = function_4047e0(*v1043, v1054, v1044); // 0x402608
    int64_t v327 = 0; // bp-344, 0x402616
    char v1055 = *(char *)&g53; // 0x402627
    int32_t v1056 = __fxstat(1, fd, (struct stat *)&readfds);
    int32_t offset; // 0x401e60
    int64_t v439; // 0x401e60
    int64_t v476; // 0x401e60
    int64_t v441; // 0x401e60
    int64_t v443; // 0x401e60
    int64_t v477; // 0x401e60
    int64_t v425; // 0x401e60
    int64_t v415; // 0x401e60
    int64_t v417; // 0x401e60
    int64_t v474; // 0x401e60
    int64_t v437; // 0x401e60
    int64_t v438; // 0x401e60
    int64_t v475; // 0x401e60
    int64_t v433; // 0x401e60
    int64_t v472; // 0x401e60
    int32_t v429; // 0x401e60
    int32_t v470; // 0x401e60
    struct stat * v427; // 0x401e60
    int32_t v435; // 0x401e60
    int32_t v473; // 0x401e60
    int32_t v428; // 0x401e60
    int32_t v431; // 0x401e60
    int32_t v471; // 0x401e60
    char v1057; // 0x4029c2
    int32_t v499; // 0x402656
    int32_t v351; // 0x401e60
    if (v1055 == 0) {
        if (v1056 != 0) {
            // 0x402ee6
            function_409510(4, 0x100000000 * v418 >> 32);
            char * format10 = dcgettext(NULL, "cannot fstat %s", 5); // 0x402f04
            uint32_t err_num9 = *__errno_location(); // 0x402f19
            error(0, err_num9, format10);
            v427 = v423;
            v428 = 0;
            v429 = v430;
            v431 = v432;
            v433 = v434;
            v435 = v436;
            v437 = (int64_t)format10;
            v438 = err_num9;
            v439 = v440;
            v441 = v442;
            v443 = v1046;
            goto lab_0x402a5e;
        } else {
            // 0x4029c2
            v1057 = *(char *)&g50;
            char v1058 = g45; // 0x4029cf
            if (v1057 == 0) {
                if (v421 < 0 || v1058 != 0) {
                    goto lab_0x402d56;
                } else {
                    // 0x402f33
                    v417 = -1;
                    v425 = v1046;
                    if ((v351 & 0xd000) != 0x8000) {
                        int32_t v1059 = lseek(fd, -(int32_t)v421, SEEK_END); // 0x40355b
                        if (v1059 == -1) {
                            goto lab_0x402d56;
                        } else {
                            int64_t v1060 = v1059; // 0x40355b
                            v417 = v1060;
                            v415 = v421 + v1060;
                            v425 = v421;
                            goto lab_0x402f56;
                        }
                    } else {
                        goto lab_0x402f56;
                    }
                }
            } else {
                if (v421 < 0 || v1058 != 0) {
                    goto lab_0x402ad3;
                } else {
                    if ((v351 & 0xf000) == 0x8000) {
                        int32_t v1061 = v421;
                        int64_t v1062 = function_404c20((int64_t)fd, v1061, 1, 0x100000000 * v418 >> 32); // 0x403a58
                        offset = v1061;
                        if (v1062 >= 0) {
                            goto lab_0x402a26;
                        } else {
                            goto lab_0x402a09;
                        }
                    } else {
                        // 0x4029f2
                        offset = v421;
                        goto lab_0x402a09;
                    }
                }
            }
        }
    } else {
        if (v1056 != 0) {
            // 0x402ea0
            function_409510(4, 0x100000000 * v418 >> 32);
            char * format11 = dcgettext(NULL, "cannot fstat %s", 5); // 0x402ebe
            uint32_t err_num10 = *__errno_location(); // 0x402ed3
            error(0, err_num10, format11);
            v470 = 0;
            v471 = v432;
            v472 = v434;
            v473 = v436;
            v474 = (int64_t)format11;
            v475 = err_num10;
            v476 = v440;
            v477 = v1046;
            goto lab_0x402cc4;
        } else {
            char v1063 = *(char *)&g50; // 0x40264f
            v499 = v1063;
            if (v1063 != 0) {
                int64_t v1064 = 0x100000000 * v418 >> 32; // 0x402e52
                int32_t v1065 = function_404920(v1064, fd, v421, &v327); // 0x402e5c
                int64_t v1066 = fd;
                if (v1065 == 0) {
                    // 0x403155
                    int64_t v1067; // bp-1, 0x401e60
                    int64_t v1068 = function_404a20(0, v1064, fd, (int64_t)&v1067); // 0x403164
                    v327 += v1068;
                    v470 = v499;
                    v471 = v432;
                    v472 = v434;
                    v473 = v436;
                    v474 = v1066;
                    v475 = v1064;
                    v476 = v440;
                    v477 = v1046;
                } else {
                    // 0x402e64
                    v470 = v1065 < 0;
                    v471 = v432;
                    v472 = v434;
                    v473 = v436;
                    v474 = v421;
                    v475 = v1066;
                    v476 = v440;
                    v477 = v1046;
                }
                goto lab_0x402cc4;
            } else {
                // 0x402662
                v535 = v1055;
                if ((v351 & 0xf000) == 0x8000 == g45 == 0) {
                    int32_t v1069 = lseek(fd, 0, SEEK_CUR); // 0x4030e7
                    if (v1069 == -1) {
                        goto lab_0x402682;
                    } else {
                        int64_t v1070 = fd; // 0x4030d8
                        int32_t v1071 = lseek(fd, 0, SEEK_END); // 0x403103
                        if (v1069 < v1071) {
                            int64_t v1072 = v1071; // 0x403103
                            v327 = v1072;
                            v470 = v535;
                            v471 = v432;
                            v472 = v434;
                            v473 = v436;
                            v474 = 2;
                            v475 = 0;
                            v476 = v440;
                            v477 = v1070;
                            if (v1071 != 0) {
                                int64_t v1073 = function_404cd0(0x100000000 * v418 >> 32, fd, v421, (int64_t)v1069, v1072, &v327); // 0x403147
                                v470 = 0x1000000 * (int32_t)v1073 >> 24;
                                v471 = v432;
                                v472 = v434;
                                v473 = v436;
                                v474 = v421;
                                v475 = v1070;
                                v476 = v440;
                                v477 = v1070;
                            }
                            goto lab_0x402cc4;
                        } else {
                            // 0x403a8b
                            function_404c20(v1070, v1069, 0, 0x100000000 * v418 >> 32);
                            goto lab_0x402682;
                        }
                    }
                } else {
                    goto lab_0x402682;
                }
            }
        }
    }
  lab_0x4033a7:;
    int64_t v217 = v211 + 1; // 0x4033a7
    int64_t v218 = v215 + 96; // 0x4033ab
    int64_t v51 = v192; // 0x4033b3
    int32_t v52 = v193; // 0x4033b3
    int64_t v53 = v194; // 0x4033b3
    int32_t v54 = v195; // 0x4033b3
    int32_t v55 = v196; // 0x4033b3
    int32_t v56 = v197; // 0x4033b3
    struct stat * v57 = v198; // 0x4033b3
    int32_t v58 = v199; // 0x4033b3
    int32_t v59 = v200; // 0x4033b3
    int32_t v60 = v201; // 0x4033b3
    int32_t v61 = v202; // 0x4033b3
    int32_t v62 = v203; // 0x4033b3
    int32_t v63 = v204; // 0x4033b3
    int64_t v64 = v205; // 0x4033b3
    int32_t v65 = v206; // 0x4033b3
    bool v66 = v207; // 0x4033b3
    int128_t v67 = v208; // 0x4033b3
    int64_t v68 = v209; // 0x4033b3
    int64_t v69 = v210; // 0x4033b3
    int64_t v70 = v217; // 0x4033b3
    int64_t v71 = v212; // 0x4033b3
    int64_t v72 = v213; // 0x4033b3
    int64_t v73 = v214; // 0x4033b3
    int64_t v74 = v218; // 0x4033b3
    int64_t v75 = v216; // 0x4033b3
    v119 = v192;
    v120 = v193;
    v121 = v194;
    v122 = v195;
    v123 = v196;
    v124 = v197;
    v125 = v198;
    v126 = v199;
    v127 = v200;
    v128 = v201;
    v129 = v202;
    v130 = v203;
    v131 = v204;
    v132 = v205;
    v133 = v206;
    v134 = v207;
    v135 = v208;
    v136 = v209;
    v137 = v212;
    v138 = v213;
    v139 = v214;
    v140 = v218;
    v141 = v216;
    if (v217 == (int64_t)err_num5) {
        goto lab_0x4033e1;
    } else {
        goto lab_0x4033b5;
    }
  lab_0x403db0:;
    char * format = dcgettext(NULL, "inotify cannot be used, reverting to polling", 5); // 0x403dbc
    error(0, *__errno_location(), format);
    int64_t v219 = v220; // 0x403ddc
    int32_t v221 = v222;
    int32_t v223 = *(int32_t *)(v224 + 68); // 0x403de1
    if (v223 != -1) {
        // 0x403de9
        inotify_rm_watch(v221, v223);
    }
    uint32_t v225 = *(int32_t *)(v224 + 72); // 0x403df1
    if (v225 != -1) {
        // 0x403df9
        inotify_rm_watch(v221, v225);
    }
    int64_t v226 = v224 + 96; // 0x403e01
    int64_t v227 = v226; // 0x403e08
    while (v226 != v219) {
        // 0x403de1
        v223 = *(int32_t *)(v227 + 68);
        if (v223 != -1) {
            // 0x403de9
            inotify_rm_watch(v221, v223);
        }
        // 0x403df1
        v225 = *(int32_t *)(v227 + 72);
        if (v225 != -1) {
            // 0x403df9
            inotify_rm_watch(v221, v225);
        }
        // 0x403e01
        v226 = v227 + 96;
        v227 = v226;
    }
    // 0x4032ae
    v13 = v228;
    v15 = v229;
    v8 = v224;
    v18 = v230;
    v20 = v231;
    v22 = v220;
    v24 = v232;
    v27 = v233;
    v30 = v234;
    v33 = v235;
    v36 = v236;
    v38 = v237;
    v40 = v238;
    v42 = (int64_t)format;
    v44 = v219;
    v46 = v225;
    v48 = v222;
    goto lab_0x4032ae_2;
  lab_0x40295a:;
    int64_t v239 = v240;
    int64_t v241 = v242;
    int128_t v243 = v244;
    bool v245 = v246;
    int32_t v247 = v248;
    int64_t v249 = v250;
    int32_t v251 = v252;
    int32_t v253 = v254;
    int32_t v255 = v256;
    int32_t v257 = v258;
    int32_t v259 = v260;
    int64_t v261 = v262;
    int32_t v263 = v264;
    int64_t v265 = v266;
    int64_t v267 = v268 + 96; // 0x40295f
    int32_t v269 = 0x1000000 * (v255 & v270) >> 24; // 0x402963
    v271 = v257;
    v272 = v265;
    v273 = v263;
    v274 = v261;
    v275 = v259;
    v276 = v269;
    v277 = v257;
    v278 = v253;
    v279 = v251;
    v280 = v249;
    v281 = v247;
    v282 = v245;
    v283 = v243;
    v284 = v285;
    v286 = v241;
    v287 = v267;
    v288 = v239;
    int64_t v289; // 0x401e60
    int64_t v290; // 0x401e60
    if (v267 != v271) {
        goto lab_0x4025b0;
    } else {
        int32_t v291 = v292;
        int32_t v293 = v294;
        struct stat * v295 = v296;
        int64_t v297 = v255 % 256; // 0x40295a
        char v298 = *(char *)&g52; // 0x402975
        int32_t v299 = v298; // 0x40297c
        v300 = v265;
        v301 = v263;
        v302 = v261;
        v303 = v259;
        v304 = v269;
        v305 = v257;
        v306 = v295;
        v307 = v293;
        v308 = v291;
        v309 = v253;
        v310 = v251;
        v311 = v249;
        v312 = v247;
        v313 = v245;
        v314 = v243;
        v315 = v241;
        v316 = v267;
        v317 = v239;
        v318 = 0;
        v319 = v261;
        if (v298 != 0) {
            while (true) {
              lab_0x403182:
                // 0x403182
                str = v319;
                v320 = v318;
                if (strcmp((char *)*(int64_t *)str, "-") != 0) {
                    // 0x403462
                    v321 = v320 + 1;
                    goto lab_0x4031cb;
                } else {
                    // 0x403198
                    v322 = (char *)(str + 52);
                    if (*v322 != 0) {
                        // 0x403462
                        v321 = v320 + 1;
                        goto lab_0x4031cb;
                    } else {
                        // 0x4031a2
                        v323 = (int32_t *)(str + 56);
                        uint32_t v324 = *v323; // 0x4031a2
                        if (v324 < 0) {
                            // 0x403462
                            v321 = v320 + 1;
                            goto lab_0x4031cb;
                        } else {
                            // 0x4031ad
                            if ((*(int32_t *)(str + 48) & 0xf000) != 0x1000) {
                                // 0x403455
                                if ((int32_t)function_40b5b0((int64_t)v324) != 0) {
                                    goto lab_0x4031c0;
                                } else {
                                    // 0x403462
                                    v321 = v320 + 1;
                                    goto lab_0x4031cb;
                                }
                            } else {
                                goto lab_0x4031c0;
                            }
                        }
                    }
                }
            }
          lab_0x4031d4:
            // 0x4031d4
            v300 = v265;
            v301 = v263;
            v302 = v261;
            v303 = v259;
            v304 = v269;
            v305 = v257;
            v306 = v295;
            v307 = v293;
            v308 = v291;
            v309 = v253;
            v310 = v251;
            v311 = v249;
            v312 = v247;
            v313 = v245;
            v314 = v243;
            v315 = v241;
            v316 = v267;
            v317 = v239;
            if (v325 == 0) {
                goto lab_0x402988;
            } else {
                int32_t v326 = __fxstat(1, 1, (struct stat *)&v327); // 0x4031ef
                v328 = v265;
                v329 = v263;
                v330 = v261;
                v331 = v259;
                v332 = v269;
                v333 = v257;
                v334 = v295;
                v335 = v293;
                v336 = v291;
                v337 = v299;
                v338 = v255;
                v339 = v253;
                v340 = v251;
                v341 = v249;
                v342 = v247;
                v343 = v245;
                v344 = v243;
                v345 = v346;
                v347 = v241;
                v348 = v267;
                v349 = v239;
                if (v326 < 0) {
                    goto lab_0x403e5f;
                } else {
                    int64_t v350 = 1; // 0x403212
                    if ((v351 & 0xf000) != 0x1000) {
                        // 0x403214
                        v350 = (int32_t)function_40b5b0(1) != 0;
                    }
                    int64_t v352 = v350;
                    g51 = v352;
                    int64_t v353 = v261; // 0x403239
                    v13 = v265;
                    v15 = v263;
                    v8 = v261;
                    v18 = v259;
                    v20 = v269;
                    v22 = v257;
                    v24 = v295;
                    v27 = v299;
                    v30 = v253;
                    v33 = v249;
                    v36 = v245;
                    v38 = v243;
                    v40 = v297;
                    v42 = v352;
                    v44 = v346;
                    v46 = 1;
                    v48 = v241;
                    if (g44 == 0) {
                        int64_t str2 = v353;
                        int64_t v354 = 1; // 0x403249
                        if (*(char *)(str2 + 52) == 0) {
                            // 0x40324b
                            v354 = (int64_t)"-";
                            v13 = v265;
                            v15 = v263;
                            v8 = v261;
                            v18 = v259;
                            v20 = v269;
                            v22 = v257;
                            v24 = v295;
                            v27 = v299;
                            v30 = v253;
                            v33 = v249;
                            v36 = v245;
                            v38 = v243;
                            v40 = v297;
                            v42 = v352;
                            v44 = v271;
                            v46 = (int64_t)"-";
                            v48 = v241;
                            if (strcmp((char *)*(int64_t *)str2, "-") == 0) {
                                goto lab_0x4032ae_2;
                            }
                        }
                        int64_t v355 = v354;
                        int64_t v356 = str2 + 96; // 0x40325c
                        while (v356 != v271) {
                            // 0x403245
                            str2 = v356;
                            v354 = v355;
                            if (*(char *)(str2 + 52) == 0) {
                                // 0x40324b
                                v354 = (int64_t)"-";
                                v13 = v265;
                                v15 = v263;
                                v8 = v261;
                                v18 = v259;
                                v20 = v269;
                                v22 = v257;
                                v24 = v295;
                                v27 = v299;
                                v30 = v253;
                                v33 = v249;
                                v36 = v245;
                                v38 = v243;
                                v40 = v297;
                                v42 = v352;
                                v44 = v271;
                                v46 = (int64_t)"-";
                                v48 = v241;
                                if (strcmp((char *)*(int64_t *)str2, "-") == 0) {
                                    goto lab_0x4032ae_2;
                                }
                            }
                            // 0x40325c
                            v355 = v354;
                            v356 = str2 + 96;
                        }
                        int64_t v357 = v263; // 0x403265
                        int64_t v358 = v261 + 56; // 0x403271
                        int64_t v359 = v261 + 53;
                        int64_t v360 = 0;
                        if (*(int32_t *)(v360 + v358) >= 0) {
                            // 0x403278
                            v13 = v265;
                            v15 = v263;
                            v8 = v261;
                            v18 = v259;
                            v20 = v269;
                            v22 = v257;
                            v24 = v295;
                            v27 = v299;
                            v30 = v253;
                            v33 = v249;
                            v36 = v245;
                            v38 = v243;
                            v40 = v357;
                            v42 = v261;
                            v44 = v271;
                            v46 = v355;
                            v48 = v241;
                            if (*(char *)(v360 + v359) != 0) {
                                goto lab_0x4032ae_2;
                            }
                        }
                        int64_t v361 = v360 + 96; // 0x40327f
                        while (v361 != v357) {
                            // 0x403271
                            v360 = v361;
                            if (*(int32_t *)(v360 + v358) >= 0) {
                                // 0x403278
                                v13 = v265;
                                v15 = v263;
                                v8 = v261;
                                v18 = v259;
                                v20 = v269;
                                v22 = v257;
                                v24 = v295;
                                v27 = v299;
                                v30 = v253;
                                v33 = v249;
                                v36 = v245;
                                v38 = v243;
                                v40 = v357;
                                v42 = v261;
                                v44 = v271;
                                v46 = v355;
                                v48 = v241;
                                if (*(char *)(v360 + v359) != 0) {
                                    goto lab_0x4032ae_2;
                                }
                            }
                            // 0x40327f
                            v361 = v360 + 96;
                        }
                        int64_t v362 = 0;
                        int64_t v363 = v357; // 0x403294
                        unsigned char v364; // 0x403296
                        if (*(int32_t *)(v362 + v358) >= 0) {
                            // 0x403296
                            v364 = *(char *)(v362 + v359);
                            v363 = v364;
                            v289 = v271;
                            v290 = v261;
                            if (v364 == 0) {
                                goto lab_0x403b91;
                            }
                        }
                        int64_t v365 = v362 + 96; // 0x4032a3
                        int64_t v366 = v363; // 0x4032ac
                        v13 = v265;
                        v15 = v263;
                        v8 = v261;
                        v18 = v259;
                        v20 = v269;
                        v22 = v257;
                        v24 = v295;
                        v27 = v299;
                        v30 = v253;
                        v33 = v249;
                        v36 = v245;
                        v38 = v243;
                        v40 = v363;
                        v42 = v261;
                        v44 = v271;
                        v46 = v355;
                        v48 = v241;
                        while (v365 != v357) {
                            // 0x40328f
                            v362 = v365;
                            v363 = v366;
                            if (*(int32_t *)(v362 + v358) >= 0) {
                                // 0x403296
                                v364 = *(char *)(v362 + v359);
                                v363 = v364;
                                v289 = v271;
                                v290 = v261;
                                if (v364 == 0) {
                                    goto lab_0x403b91;
                                }
                            }
                            // 0x4032a3
                            v365 = v362 + 96;
                            v366 = v363;
                            v13 = v265;
                            v15 = v263;
                            v8 = v261;
                            v18 = v259;
                            v20 = v269;
                            v22 = v257;
                            v24 = v295;
                            v27 = v299;
                            v30 = v253;
                            v33 = v249;
                            v36 = v245;
                            v38 = v243;
                            v40 = v363;
                            v42 = v261;
                            v44 = v271;
                            v46 = v355;
                            v48 = v241;
                        }
                    }
                    goto lab_0x4032ae_2;
                }
            }
        } else {
            goto lab_0x402988;
        }
    }
  lab_0x4033b5:
    // 0x4033b5
    v76 = v75;
    int64_t v77 = v74;
    int64_t v78 = v73;
    int64_t v79 = v72;
    int64_t v80 = v70;
    v81 = v69;
    v82 = v68;
    int128_t v83 = v67;
    bool v84 = v66;
    int32_t v85 = v65;
    int64_t v86 = v64;
    int32_t v87 = v63;
    int32_t v88 = v62;
    int32_t v89 = v61;
    int32_t v90 = v60;
    int32_t v91 = v59;
    int32_t v92 = v58;
    struct stat * v93 = v57;
    int32_t v94 = v56;
    int32_t v95 = v55;
    int32_t v96 = v54;
    int64_t v97 = v53;
    int32_t v98 = v52;
    int64_t v99 = v51;
    int64_t v100 = v80; // 0x4033ba
    int64_t v101 = v71; // 0x4033ba
    int64_t v102 = v79; // 0x4033ba
    int64_t v103 = v77; // 0x4033ba
    if (*(char *)(v77 + 52) != 0) {
        goto lab_0x4033a7_2;
    } else {
        // 0x4033bc
        v104 = v76 & 0xffffffff;
        int32_t v105 = *(int32_t *)(v77 + 56); // 0x4033bc
        int64_t v106 = v105; // 0x4033bc
        v107 = v77;
        v108 = v79;
        v109 = v80;
        v110 = v105;
        v111 = v106;
        int64_t v112 = v106; // 0x4033c2
        int64_t v113 = v80; // 0x4033c2
        int64_t v114 = v77; // 0x4033c2
        if (v105 >= 0) {
            goto lab_0x403320;
        } else {
            int64_t v115 = v114;
            int64_t v116 = v112;
            int64_t v117 = v113 + 1; // 0x4033ce
            int64_t v118 = v115 + 96; // 0x4033d2
            function_4056e0(v115, v104, v81);
            v119 = v99;
            v120 = v98;
            v121 = v97;
            v122 = v96;
            v123 = v95;
            v124 = v94;
            v125 = v93;
            v126 = v92;
            v127 = v91;
            v128 = v90;
            v129 = v89;
            v130 = v88;
            v131 = v87;
            v132 = v86;
            v133 = v85;
            v134 = v84;
            v135 = v83;
            v136 = v82;
            v137 = v116;
            v138 = v104;
            v139 = v78;
            v140 = v118;
            v141 = v76;
            if (v117 == (int64_t)err_num5) {
                goto lab_0x4033e1;
            }
            // 0x4033b5
            v100 = v117;
            v101 = v116;
            v102 = v104;
            v103 = v118;
            while (*(char *)(v115 + 148) == 0) {
                int32_t v142 = *(int32_t *)(v115 + 152); // 0x4033bc
                int64_t v143 = v142; // 0x4033bc
                v107 = v118;
                v108 = v104;
                v109 = v117;
                v110 = v142;
                v111 = v143;
                v112 = v143;
                v113 = v117;
                v114 = v118;
                if (v142 >= 0) {
                    goto lab_0x403320;
                }
                v115 = v114;
                v116 = v112;
                v117 = v113 + 1;
                v118 = v115 + 96;
                function_4056e0(v115, v104, v81);
                v119 = v99;
                v120 = v98;
                v121 = v97;
                v122 = v96;
                v123 = v95;
                v124 = v94;
                v125 = v93;
                v126 = v92;
                v127 = v91;
                v128 = v90;
                v129 = v89;
                v130 = v88;
                v131 = v87;
                v132 = v86;
                v133 = v85;
                v134 = v84;
                v135 = v83;
                v136 = v82;
                v137 = v116;
                v138 = v104;
                v139 = v78;
                v140 = v118;
                v141 = v76;
                if (v117 == (int64_t)err_num5) {
                    goto lab_0x4033e1;
                }
                // 0x4033b5
                v100 = v117;
                v101 = v116;
                v102 = v104;
                v103 = v118;
            }
            goto lab_0x4033a7_2;
        }
    }
  lab_0x4038bd:
    // 0x4038bd
    v144 = v145;
    v146 = v147;
    v148 = v149;
    v150 = v151;
    v152 = v153;
    v154 = v155;
    v156 = v157;
    v158 = v159;
    v160 = v161;
    v162 = v163;
    v164 = v165;
    v166 = v167;
    v168 = v169;
    v170 = v171;
    v172 = v173;
    v174 = v175;
    v176 = v177;
    v178 = fd2;
    v179 = v180;
    v181 = v182;
    v183 = v184;
    bool v185; // 0x401e60
    int64_t v186; // 0x401e60
    int64_t v187; // 0x401e60
    int64_t v188; // 0x401e60
    if (fflush_unlocked(g39) != 0) {
        goto lab_0x403e89;
    } else {
        // 0x4038d1
        v185 = v175;
        v186 = v189;
        v187 = v190;
        v188 = v191;
        if (g51 == 0) {
            goto lab_0x403816;
        } else {
            goto lab_0x4037bb;
        }
    }
  lab_0x4033a7_2:
    // 0x4033a7
    v192 = v99;
    v193 = v98;
    v194 = v97;
    v195 = v96;
    v196 = v95;
    v197 = v94;
    v198 = v93;
    v199 = v92;
    v200 = v91;
    v201 = v90;
    v202 = v89;
    v203 = v88;
    v204 = v87;
    v205 = v86;
    v206 = v85;
    v207 = v84;
    v208 = v83;
    v209 = v82;
    v210 = v81;
    v211 = v100;
    v212 = v101;
    v213 = v102;
    v214 = v78;
    v215 = v103;
    v216 = v76;
    goto lab_0x4033a7;
  lab_0x403305:
    // 0x403305
    v51 = v14;
    v52 = v16;
    v53 = v17;
    v54 = v19;
    v55 = v21;
    v56 = v23;
    v57 = v25;
    v58 = v26;
    v59 = 0;
    v60 = v28;
    v61 = v29;
    v62 = v31;
    v63 = v32;
    v64 = v34;
    v65 = v35;
    v66 = v37;
    v67 = v39;
    v68 = v41;
    v69 = v43;
    v70 = 0;
    v71 = v45;
    v72 = v47;
    v73 = v49;
    v74 = v17;
    v75 = v50;
    goto lab_0x4033b5;
  lab_0x402988:;
    uint32_t v367 = v304;
    if (g46 == 0 || close(0) >= 0) {
        // 0x4029a3
        return v367 % 256 ^ 1;
    }
    uint32_t err_num = *__errno_location(); // 0x403489
    error(1, err_num, "-");
    int32_t * v368 = (int32_t *)(v316 + 60); // 0x40348d
    int64_t v369 = v300; // 0x40348d
    int32_t v370 = v301; // 0x40348d
    int64_t v371 = v302; // 0x40348d
    int32_t v372 = v303; // 0x40348d
    int32_t v373 = v367; // 0x40348d
    int32_t v374 = v305; // 0x40348d
    struct stat * v375 = v306; // 0x40348d
    int32_t v376 = v307; // 0x40348d
    int32_t v377 = v308; // 0x40348d
    int32_t v378 = v309; // 0x40348d
    int32_t v379 = v310; // 0x40348d
    int64_t v380 = v311; // 0x40348d
    int32_t v381 = v312; // 0x40348d
    bool v382 = v313; // 0x40348d
    int128_t v383 = v314; // 0x40348d
    int64_t v384 = (int64_t)"-"; // 0x40348d
    int64_t v385 = err_num; // 0x40348d
    int64_t v386 = v315; // 0x40348d
    int64_t v387 = v316; // 0x40348d
    int64_t v388 = v317; // 0x40348d
    goto lab_0x403492;
  lab_0x402a5e:;
    int64_t v444 = v443;
    int64_t v445 = v441;
    int64_t v446 = v439;
    int32_t v447 = v435;
    int64_t v448 = v433;
    int32_t v449 = v431;
    int32_t v450 = v429;
    int32_t v451 = v428;
    struct stat * v452 = v427;
    int64_t * v393; // 0x401e60
    bool v407; // 0x401e60
    int64_t v411; // 0x401e60
    int64_t v412; // 0x401e60
    int64_t v413; // 0x401e60
    int64_t v409; // 0x401e60
    int64_t v410; // 0x401e60
    int32_t v398; // 0x401e60
    int32_t v397; // 0x401e60
    int32_t v395; // 0x401e60
    int64_t v405; // 0x401e60
    int32_t v403; // 0x401e60
    int64_t v396; // 0x401e60
    int32_t v399; // 0x401e60
    int64_t v394; // 0x401e60
    int32_t v401; // 0x401e60
    struct stat * v400; // 0x401e60
    int32_t v406; // 0x401e60
    int32_t v404; // 0x401e60
    int32_t v402; // 0x401e60
    int64_t v453; // 0x402b69
    int64_t v454; // 0x402b8e
    int128_t v408; // 0x401e60
    if (*(char *)&g52 != 0) {
        // 0x402b64
        v453 = fd;
        int32_t * v455 = (int32_t *)(v445 + 60);
        *v455 = v451 % 256 - 1;
        if (__fxstat(1, fd, (struct stat *)&readfds) < 0) {
            int32_t * v456 = __errno_location(); // 0x402cd2
            int64_t * v457 = (int64_t *)v445;
            *v455 = *v456;
            int64_t v458 = function_4047e0(*v457, v453, (int64_t)&readfds); // 0x402ce3
            function_409510(4, v458);
            char * format3 = dcgettext(NULL, "error reading %s", 5); // 0x402d04
            uint32_t err_num2 = *v456; // 0x402d09
            error(0, err_num2, format3);
            v393 = v457;
            v394 = v459;
            v395 = v460;
            v396 = v461;
            v397 = v462;
            v398 = v463;
            v399 = v464;
            v400 = v452;
            v401 = v465;
            v402 = fd;
            v403 = v450;
            v404 = v449;
            v405 = v448;
            v406 = v447;
            v407 = v466;
            v408 = v467;
            v409 = (int64_t)format3;
            v410 = err_num2;
            v411 = v446;
            v412 = v445;
            v413 = v444;
            goto lab_0x402d1a;
        } else {
            // 0x402b8e
            v454 = v351;
            if ((v351 & 0xf000) < 0x3000) {
                goto lab_0x402bba;
            } else {
                // 0x402ba8
                v368 = v455;
                v369 = v459;
                v370 = v460;
                v371 = v461;
                v372 = v462;
                v373 = v463;
                v374 = v464;
                v375 = v452;
                v376 = v465;
                v377 = fd;
                v378 = v450;
                v379 = v449;
                v380 = v448;
                v381 = v447;
                v382 = v466;
                v383 = v467;
                v384 = v454;
                v385 = v453;
                v386 = v446;
                v387 = v445;
                v388 = v444;
                if ((v454 & 0xb000) != 0x8000) {
                    goto lab_0x403492;
                } else {
                    goto lab_0x402bba;
                }
            }
        }
    } else {
        int64_t v468 = v437;
        v266 = v459;
        v264 = v460;
        v262 = v461;
        v260 = v462;
        v270 = v463;
        v258 = v464;
        v296 = v452;
        v294 = 0;
        v292 = fd;
        v256 = v451;
        v254 = v450;
        v252 = v449;
        v250 = v448;
        v248 = v447;
        v246 = v466;
        v244 = v467;
        v285 = v468;
        v242 = v446;
        v268 = v445;
        v240 = v444;
        if (v465 != 0) {
            int32_t v469 = close(fd); // 0x402a7a
            v266 = v459;
            v264 = v460;
            v262 = v461;
            v260 = v462;
            v270 = v463;
            v258 = v464;
            v296 = v452;
            v294 = v465;
            v292 = fd;
            v256 = v451;
            v254 = v450;
            v252 = v449;
            v250 = v448;
            v248 = v447;
            v246 = v466;
            v244 = v467;
            v285 = v468;
            v242 = v446;
            v268 = v445;
            v240 = v444;
            if (v469 != 0) {
                // 0x402a87
                function_409510(4, function_4047e0(*(int64_t *)v445, v438, v468));
                char * format4 = dcgettext(NULL, "error reading %s", 5); // 0x402aab
                error(0, *__errno_location(), format4);
                v266 = v459;
                v264 = v460;
                v262 = v461;
                v260 = v462;
                v270 = v463;
                v258 = v464;
                v296 = v452;
                v294 = v465;
                v292 = fd;
                v256 = 0;
                v254 = v450;
                v252 = v449;
                v250 = v448;
                v248 = v447;
                v246 = v466;
                v244 = v467;
                v285 = (int64_t)format4;
                v242 = v446;
                v268 = v445;
                v240 = v444;
            }
        }
        goto lab_0x40295a;
    }
  lab_0x402cc4:
    // 0x402cc4
    v427 = v423;
    v428 = 0x1000000 * v470 >> 24;
    v429 = v470;
    v431 = v471;
    v433 = v472;
    v435 = v473;
    v437 = v474;
    v438 = v475;
    v439 = v476;
    v441 = v442;
    v443 = v477;
    goto lab_0x402a5e;
  lab_0x403492:
    // 0x403492
    *(char *)(v387 + 54) = 0;
    *v368 = -1;
    char v389 = *(char *)&g54 ^ 1;
    *(char *)(v387 + 52) = v389;
    int64_t v390 = v384; // 0x4034b4
    int64_t v391 = v385; // 0x4034b4
    if (v389 != 0) {
        // 0x403576
        dcgettext(NULL, "; giving up on this name", 5);
        v390 = 5;
        v391 = (int64_t)"; giving up on this name";
    }
    int64_t * v392 = (int64_t *)v387;
    function_4095e0(0, 3, function_4047e0(*v392, v391, v390));
    char * format2 = dcgettext(NULL, "%s: cannot follow end of this type of file%s", 5); // 0x4034e0
    error(0, (int32_t)"%s: cannot follow end of this type of file%s" ^ (int32_t)"%s: cannot follow end of this type of file%s", format2);
    v393 = v392;
    v394 = v369;
    v395 = v370;
    v396 = v371;
    v397 = v372;
    v398 = v373;
    v399 = v374;
    v400 = v375;
    v401 = v376;
    v402 = v377;
    v403 = v378;
    v404 = v379;
    v405 = v380;
    v406 = v381;
    v407 = v382;
    v408 = v383;
    v409 = (int64_t)format2;
    v410 = (int32_t)"%s: cannot follow end of this type of file%s" ^ (int32_t)"%s: cannot follow end of this type of file%s";
    v411 = v386;
    v412 = v387;
    v413 = v388;
    goto lab_0x402d1a;
  lab_0x402d56:;
    int64_t v1191 = function_409dd0(0x2010); // 0x402d5e
    *(int64_t *)(v1191 + 0x2000) = 0;
    *(int64_t *)(v1191 + 0x2008) = 0;
    int64_t v1192 = function_409dd0(0x2010); // 0x402d84
    int64_t v1193 = function_409780(fd, v1192, 0x2000); // 0x402dd8
    int64_t v1194 = v1193; // 0x402de5
    int64_t v1195 = v1191; // 0x402de5
    int64_t v1196 = v1191; // 0x402de5
    int64_t v1197 = v1192; // 0x402de5
    int64_t v1198 = v1192; // 0x402de5
    int64_t v1199 = v1191; // 0x402de5
    int64_t v1200 = 0; // 0x402de5
    int64_t v1201 = v1193; // 0x402de5
    if (v1193 < 0xffffffffffffffff) {
        int64_t v1202 = v1197;
        int64_t v1203 = v1196;
        int64_t v1204 = v1195;
        int64_t v1205 = v1194;
        v327 += v1205;
        int64_t v1206 = v1205; // 0x402df3
        int64_t * v1207 = (int64_t *)(v1202 + 0x2000); // 0x402df6
        *v1207 = v1205;
        int64_t * v1208 = (int64_t *)(v1204 + 0x2000); // 0x402dfd
        int64_t v1209 = *v1208; // 0x402dfd
        *(int64_t *)(v1202 + 0x2008) = 0;
        int64_t v1210; // 0x401e60
        int64_t v1211; // 0x401e60
        int64_t v1212; // 0x401e60
        int64_t v1213; // 0x401e60
        int64_t v1214; // 0x402da3
        if (v1209 + v1205 < 0x2000) {
            // 0x402e1c
            memcpy((int64_t *)(v1209 + v1204), (int64_t *)v1202, (int32_t)v1205);
            *v1208 = *v1208 + *v1207;
            v1211 = v1202;
            v1213 = v1204;
            v1212 = v1203;
            v1210 = v1206;
        } else {
            // 0x402da0
            v1214 = v1206 - *(int64_t *)(v1203 + 0x2000);
            *(int64_t *)(v1204 + 0x2008) = v1202;
            if (v421 >= v1214) {
                // 0x4030a6
                v1211 = function_409dd0(0x2010);
                v1213 = v1202;
                v1212 = v1203;
                v1210 = v1206;
            } else {
                // 0x402dba
                v1211 = v1203;
                v1213 = v1202;
                v1212 = *(int64_t *)(v1203 + 0x2008);
                v1210 = v1214;
            }
        }
        int64_t v1215 = function_409780(fd, v1211, 0x2000); // 0x402dd8
        v1198 = v1211;
        v1199 = v1212;
        v1200 = v1210;
        v1201 = v1215;
        while (v1215 < 0xffffffffffffffff) {
            // 0x402deb
            v1202 = v1211;
            v1203 = v1212;
            v1204 = v1213;
            v1205 = v1215;
            v327 += v1205;
            v1206 = v1210 + v1205;
            v1207 = (int64_t *)(v1202 + 0x2000);
            *v1207 = v1205;
            v1208 = (int64_t *)(v1204 + 0x2000);
            v1209 = *v1208;
            *(int64_t *)(v1202 + 0x2008) = 0;
            if (v1209 + v1205 < 0x2000) {
                // 0x402e1c
                memcpy((int64_t *)(v1209 + v1204), (int64_t *)v1202, (int32_t)v1205);
                *v1208 = *v1208 + *v1207;
                v1211 = v1202;
                v1213 = v1204;
                v1212 = v1203;
                v1210 = v1206;
            } else {
                // 0x402da0
                v1214 = v1206 - *(int64_t *)(v1203 + 0x2000);
                *(int64_t *)(v1204 + 0x2008) = v1202;
                if (v421 >= v1214) {
                    // 0x4030a6
                    v1211 = function_409dd0(0x2010);
                    v1213 = v1202;
                    v1212 = v1203;
                    v1210 = v1206;
                } else {
                    // 0x402dba
                    v1211 = v1203;
                    v1213 = v1202;
                    v1212 = *(int64_t *)(v1203 + 0x2008);
                    v1210 = v1214;
                }
            }
            // 0x402dc7
            v1215 = function_409780(fd, v1211, 0x2000);
            v1198 = v1211;
            v1199 = v1212;
            v1200 = v1210;
            v1201 = v1215;
        }
    }
    int64_t v1216 = v1199;
    free((int64_t *)v1198);
    int64_t v1217; // 0x401e60
    int64_t v1218; // 0x401e60
    int32_t v1219; // 0x401e60
    if (v1201 != -1) {
        int64_t v1220 = *(int64_t *)(v1216 + 0x2000); // 0x403970
        int64_t v1221 = v1200 - v1220; // 0x40397a
        int64_t v1222 = v1221; // 0x403980
        int64_t v1223 = v1216; // 0x403980
        int64_t v1224 = v1216; // 0x403980
        int64_t v1225 = v1200; // 0x403980
        int64_t v1226 = v1220; // 0x403980
        if (v421 < v1221) {
            int64_t v1227 = *(int64_t *)(v1223 + 0x2008); // 0x403966
            int64_t v1228 = *(int64_t *)(v1227 + 0x2000); // 0x403970
            int64_t v1229 = v1222 - v1228; // 0x40397a
            v1223 = v1227;
            v1224 = v1227;
            v1225 = v1222;
            v1226 = v1228;
            while (v421 < v1229) {
                int64_t v1230 = v1229;
                v1227 = *(int64_t *)(v1223 + 0x2008);
                v1228 = *(int64_t *)(v1227 + 0x2000);
                v1229 = v1230 - v1228;
                v1223 = v1227;
                v1224 = v1227;
                v1225 = v1230;
                v1226 = v1228;
            }
        }
        uint64_t v1231 = v1225;
        int64_t v1232 = v1224;
        int64_t v1233 = v1231 <= v421 ? 0 : v1231 - v421;
        int64_t v1234 = v1226 - v1233; // 0x403994
        if (v1234 != 0) {
            // 0x403999
            function_4048a0(v1233 + v1232, v1234);
        }
        int64_t v1235 = *(int64_t *)(v1232 + 0x2008); // 0x4039a2
        v1219 = 1;
        v1217 = v421;
        v1218 = v1234;
        int64_t v1236 = v1235; // 0x4039ac
        if (v1235 != 0) {
            int64_t v1237 = v1236;
            int64_t v1238 = *(int64_t *)(v1237 + 0x2000); // 0x4039ae
            if (v1238 != 0) {
                // 0x4039ba
                function_4048a0(v1237, v1238);
            }
            int64_t v1239 = *(int64_t *)(v1237 + 0x2008); // 0x4039a2
            v1219 = 1;
            v1217 = v421;
            v1218 = v1238;
            while (v1239 != 0) {
                // 0x4039ae
                v1237 = v1239;
                v1238 = *(int64_t *)(v1237 + 0x2000);
                if (v1238 != 0) {
                    // 0x4039ba
                    function_4048a0(v1237, v1238);
                }
                // 0x4039a2
                v1239 = *(int64_t *)(v1237 + 0x2008);
                v1219 = 1;
                v1217 = v421;
                v1218 = v1238;
            }
        }
    } else {
        // 0x403ae1
        function_409510(4, 0x100000000 * v418 >> 32);
        char * format13 = dcgettext(NULL, "error reading %s", 5); // 0x403aff
        uint32_t err_num13 = *__errno_location(); // 0x403b14
        error(0, err_num13, format13);
        v1219 = v1057;
        v1217 = (int64_t)format13;
        v1218 = err_num13;
    }
    int32_t v1240 = v442; // 0x402d89
    int64_t v1241 = fd; // 0x402d8e
    int32_t v1242 = v1201; // 0x40393f
    int64_t v1243 = 0x100000000 * v442 >> 32; // 0x403944
    int64_t v1244 = v1218;
    int64_t v1245 = v1217;
    int32_t v1246 = v1219;
    v427 = v423;
    v428 = v1246;
    v429 = v430;
    v431 = v1240;
    v433 = v434;
    v435 = v1242;
    v437 = v1245;
    v438 = v1244;
    v439 = v421;
    v441 = v1243;
    v443 = v1241;
    int64_t v1247 = v1216; // 0x4039e0
    if (v1216 != 0) {
        int64_t v1248 = *(int64_t *)(v1247 + 0x2008); // 0x4039ce
        free((int64_t *)v1247);
        v427 = v423;
        v428 = v1246;
        v429 = v430;
        v431 = v1240;
        v433 = v434;
        v435 = v1242;
        v437 = v1245;
        v438 = v1244;
        v439 = v421;
        v441 = v1243;
        v443 = v1241;
        v1247 = v1248;
        while (v1248 != 0) {
            // 0x4039ce
            v1248 = *(int64_t *)(v1247 + 0x2008);
            free((int64_t *)v1247);
            v427 = v423;
            v428 = v1246;
            v429 = v430;
            v431 = v1240;
            v433 = v434;
            v435 = v1242;
            v437 = v1245;
            v438 = v1244;
            v439 = v421;
            v441 = v1243;
            v443 = v1241;
            v1247 = v1248;
        }
    }
    goto lab_0x402a5e;
  lab_0x402ad3:;
    int64_t v1249 = function_404b40(0x100000000 * v418 >> 32, fd, v421, &v327); // 0x402ae9
    int32_t v1250 = v1249; // 0x402af7
    struct stat * v422 = (struct stat *)-1; // 0x402af9
    int64_t v424 = v1046; // 0x402af9
    if (v1250 == 0) {
        goto lab_0x402a3c;
    } else {
        // 0x402aff
        v427 = (struct stat *)-1;
        v428 = v1250 < 0;
        v429 = v430;
        v431 = v432;
        v433 = v434;
        v435 = v436;
        v437 = v421;
        v438 = fd;
        v439 = v440;
        v441 = v442;
        v443 = v1046;
        goto lab_0x402a5e;
    }
  lab_0x402682:;
    int64_t v1251 = function_409dd0(0x2018); // 0x402687
    *(int64_t *)(v1251 + 0x2008) = 0;
    *(int64_t *)(v1251 + 0x2000) = 0;
    *(int64_t *)(v1251 + 0x2010) = 0;
    int32_t v1252 = v1251; // 0x4026b5
    int64_t v1253 = function_409dd0(0x2018); // 0x4026ba
    int64_t v1254 = function_409780(fd, v1253, 0x2000); // 0x4026e4
    int64_t v1255 = v1254; // 0x4026f4
    int64_t v1256 = v1253; // 0x4026f4
    int64_t v1257 = v1251; // 0x4026f4
    int64_t v1258 = 0; // 0x4026f4
    int32_t v1259 = v1252; // 0x4026f4
    int64_t v481 = v1251; // 0x4026f4
    int32_t v483 = v1252; // 0x4026f4
    int64_t v479 = v1253; // 0x4026f4
    int32_t v486 = 0; // 0x4026f4
    int64_t v488 = v440; // 0x4026f4
    int64_t v490 = v1254; // 0x4026f4
    int64_t v489; // 0x401e60
    int64_t * v478; // 0x401e60
    int64_t v487; // 0x401e60
    int64_t v480; // 0x401e60
    int64_t v484; // 0x401e60
    int32_t v485; // 0x401e60
    int32_t v482; // 0x401e60
    if (v1254 < 0xffffffffffffffff) {
        int64_t v1260; // 0x401e60
        int64_t v1261; // 0x401e60
        int32_t v1262; // 0x401e60
        int64_t * v1263; // 0x401e60
        int64_t v1264; // 0x402701
        int64_t v1265; // 0x40276e
        int64_t v1266; // 0x4026e4
        while (true) {
            // 0x4026fa
            v1260 = v1257;
            int64_t * v1267 = (int64_t *)(v1260 + 0x2008);
            v1262 = v1259;
            v1261 = v1256;
            int64_t * v1268 = (int64_t *)(v1261 + 0x2000); // 0x4026fa
            int64_t * v1269 = (int64_t *)(v1261 + 0x2008); // 0x40271a
            int64_t v1270 = v1262;
            int64_t * v1271 = (int64_t *)(v1270 + 0x2000);
            v1263 = (int64_t *)v1261;
            int64_t * v1272 = (int64_t *)(v1270 + 0x2008);
            int64_t v1273 = v1255;
            *v1268 = v1273;
            v1264 = v1273 + v1261;
            v327 += v1273;
            *v1269 = 0;
            *(int64_t *)(v1261 + 0x2010) = 0;
            int64_t v1274 = (int64_t)*(char *)&g48 & 0xffffffff; // 0x402749
            int64_t v1275 = function_40b730(v1261, v1274, v1273); // 0x40274f
            int64_t v1276 = 1; // 0x40275b
            int64_t v1277 = v1275; // 0x40275b
            int64_t v1278; // 0x40273f
            int64_t v1279; // 0x40274f
            if (v1275 != 0) {
                *v1269 = v1276;
                v1278 = v1277 + 1;
                v1279 = function_40b730(v1278, v1274, v1264 - v1278);
                v1276++;
                while (v1279 != 0) {
                    // 0x402738
                    *v1269 = v1276;
                    v1278 = v1279 + 1;
                    v1279 = function_40b730(v1278, v1274, v1264 - v1278);
                    v1276++;
                }
            }
            int64_t v1280 = *v1271; // 0x402767
            v1265 = 0x100000000 * v1258 >> 32;
            int64_t v1281; // 0x401e60
            int64_t v1282; // 0x401e60
            while (v1280 + v1273 < 0x2000) {
                // 0x40287e
                memcpy((int64_t *)(v1280 + v1270), v1263, (int32_t)v1273);
                *v1271 = *v1271 + *v1268;
                *v1272 = *v1272 + *v1269;
                v1266 = function_409780(fd, v1261, 0x2000);
                v1281 = v1266;
                v1282 = v1265;
                if (v1266 >= 0xffffffffffffffff) {
                    // break (via goto) -> 0x4026d8
                    goto lab_0x4026d8;
                }
                v1273 = v1281;
                *v1268 = v1273;
                v1264 = v1273 + v1261;
                v327 += v1273;
                *v1269 = 0;
                *(int64_t *)(v1261 + 0x2010) = 0;
                v1274 = (int64_t)*(char *)&g48 & 0xffffffff;
                v1275 = function_40b730(v1261, v1274, v1273);
                v1276 = 1;
                v1277 = v1275;
                if (v1275 != 0) {
                    *v1269 = v1276;
                    v1278 = v1277 + 1;
                    v1279 = function_40b730(v1278, v1274, v1264 - v1278);
                    v1276++;
                    while (v1279 != 0) {
                        // 0x402738
                        *v1269 = v1276;
                        v1278 = v1279 + 1;
                        v1279 = function_40b730(v1278, v1274, v1264 - v1278);
                        v1276++;
                    }
                }
                // 0x40275d
                v1280 = *v1271;
                v1265 = 0x100000000 * v1282 >> 32;
            }
            // 0x402781
            *(int64_t *)(v1270 + 0x2010) = v1261;
            int64_t v1283 = v1265 - *v1267; // 0x402790
            while (v1283 <= v421) {
                int64_t v1284 = function_409dd0(0x2018); // 0x402b10
                int32_t v1285 = v1261;
                int64_t v1286 = function_409780(fd, v1284, 0x2000); // 0x4026e4
                int64_t v1287 = v1286; // 0x4026f4
                int64_t v1288 = v1284; // 0x4026f4
                int64_t v1289 = v1265; // 0x4026f4
                int32_t v1290 = v1285; // 0x4026f4
                if (v1286 >= 0xffffffffffffffff) {
                    // 0x4026d8
                    v481 = v1260;
                    v483 = v1285;
                    v479 = v1284;
                    v486 = v1265;
                    v488 = v1264;
                    v490 = v1286;
                    goto lab_0x4026d8_4;
                }
                v1262 = v1290;
                v1261 = v1288;
                v1268 = (int64_t *)(v1261 + 0x2000);
                v1269 = (int64_t *)(v1261 + 0x2008);
                v1270 = v1262;
                v1271 = (int64_t *)(v1270 + 0x2000);
                v1263 = (int64_t *)v1261;
                v1272 = (int64_t *)(v1270 + 0x2008);
                v1273 = v1287;
                *v1268 = v1273;
                v1264 = v1273 + v1261;
                v327 += v1273;
                *v1269 = 0;
                *(int64_t *)(v1261 + 0x2010) = 0;
                v1274 = (int64_t)*(char *)&g48 & 0xffffffff;
                v1275 = function_40b730(v1261, v1274, v1273);
                v1276 = 1;
                v1277 = v1275;
                if (v1275 != 0) {
                    *v1269 = v1276;
                    v1278 = v1277 + 1;
                    v1279 = function_40b730(v1278, v1274, v1264 - v1278);
                    v1276++;
                    while (v1279 != 0) {
                        // 0x402738
                        *v1269 = v1276;
                        v1278 = v1279 + 1;
                        v1279 = function_40b730(v1278, v1274, v1264 - v1278);
                        v1276++;
                    }
                }
                // 0x40275d
                v1280 = *v1271;
                v1265 = 0x100000000 * v1289 >> 32;
                while (v1280 + v1273 < 0x2000) {
                    // 0x40287e
                    memcpy((int64_t *)(v1280 + v1270), v1263, (int32_t)v1273);
                    *v1271 = *v1271 + *v1268;
                    *v1272 = *v1272 + *v1269;
                    v1266 = function_409780(fd, v1261, 0x2000);
                    v1281 = v1266;
                    v1282 = v1265;
                    if (v1266 >= 0xffffffffffffffff) {
                        // break (via goto) -> 0x4026d8
                        goto lab_0x4026d8;
                    }
                    v1273 = v1281;
                    *v1268 = v1273;
                    v1264 = v1273 + v1261;
                    v327 += v1273;
                    *v1269 = 0;
                    *(int64_t *)(v1261 + 0x2010) = 0;
                    v1274 = (int64_t)*(char *)&g48 & 0xffffffff;
                    v1275 = function_40b730(v1261, v1274, v1273);
                    v1277 = v1275;
                    if (v1275 != 0) {
                        *v1269 = 1;
                        v1278 = v1277 + 1;
                        while (function_40b730(v1278, v1274, v1264 - v1278) != 0) {
                            // 0x402738
                            *v1269 = v1276;
                            v1278 = v1277 + 1;
                            v1279 = function_40b730(v1278, v1274, v1264 - v1278);
                            v1276++;
                            v1277 = v1279;
                        }
                    }
                    // 0x40275d
                    v1280 = *v1271;
                    v1265 = 0x100000000 * v1282 >> 32;
                }
                // 0x402781
                *(int64_t *)(v1270 + 0x2010) = v1261;
                v1283 = v1265 - *v1267;
            }
            int32_t v1291 = v1261;
            int64_t v1292 = *(int64_t *)(v1260 + 0x2010); // 0x4027af
            int64_t v1293 = function_409780(fd, v1260, 0x2000); // 0x4026e4
            v1255 = v1293;
            v1256 = v1260;
            v1257 = v1292;
            v1258 = v1283;
            v1259 = v1291;
            if (v1293 >= 0xffffffffffffffff) {
                // 0x4026d8
                v481 = v1292;
                v483 = v1291;
                v479 = v1260;
                v486 = v1283;
                v488 = v1264;
                v490 = v1293;
                goto lab_0x4026d8_4;
            }
        }
      lab_0x4026d8:
        // 0x4026d8
        v478 = v1263;
        v480 = v1260;
        v482 = v1262;
        v484 = v1261;
        v485 = v1265;
        v487 = v1264;
        v489 = v1266;
        goto lab_0x402c60;
    } else {
        goto lab_0x4026d8_4;
    }
  lab_0x403816:;
    int64_t v1294 = v188;
    int64_t v559 = v187;
    int64_t v560 = v186;
    bool v551 = v185;
    v14 = v145;
    v16 = v147;
    v17 = v149;
    v19 = v151;
    v21 = v153;
    v23 = v155;
    v25 = v157;
    v26 = v159;
    v28 = v163;
    v29 = v165;
    v31 = v167;
    v32 = v169;
    v34 = v171;
    v35 = v173;
    v37 = v551;
    v39 = v177;
    v41 = v560;
    v43 = v559;
    v45 = fd2;
    v47 = v1294;
    v49 = v180;
    v50 = v184;
    int64_t v558; // 0x401e60
    uint32_t pid2; // 0x40382c
    if (v1295 != 0) {
        goto lab_0x403305;
    } else {
        // 0x403821
        v300 = v145;
        v301 = v147;
        v302 = v149;
        v303 = v151;
        v304 = v153;
        v305 = v155;
        v306 = v157;
        v307 = v159;
        v308 = v161;
        v309 = v167;
        v310 = v169;
        v311 = v171;
        v312 = v173;
        v313 = v551;
        v314 = v177;
        v315 = v180;
        v316 = v182;
        v317 = v184;
        if ((char)v159 != 0) {
            goto lab_0x402988;
        } else {
            // 0x40382c
            pid2 = g47;
            v558 = v1294;
            if (pid2 != 0) {
                // 0x403902
                v558 = 0;
                if (kill(pid2, 0) == 0) {
                    goto lab_0x40383a;
                } else {
                    int32_t v1296 = *__errno_location(); // 0x403916
                    v558 = 0;
                    if (v1296 == 1) {
                        goto lab_0x40383a;
                    } else {
                        // 0x40391f
                        v14 = v145;
                        v16 = v147;
                        v17 = v149;
                        v19 = v151;
                        v21 = v153;
                        v23 = v155;
                        v25 = v157;
                        v26 = 0x1000000 * v163 >> 24;
                        v28 = v163;
                        v29 = v165;
                        v31 = v167;
                        v32 = v169;
                        v34 = v171;
                        v35 = v173;
                        v37 = v551;
                        v39 = v177;
                        v41 = v560;
                        v43 = v559;
                        v45 = fd2;
                        v47 = 0;
                        v49 = v180;
                        v50 = v184;
                        goto lab_0x403305;
                    }
                }
            } else {
                goto lab_0x40383a;
            }
        }
    }
  lab_0x4037bb:
    // 0x4037bb
    timeout = 0;
    __asm_rep_stosq_memset(&readfds, 0, 16);
    int64_t v1297 = &readfds; // 0x4037f7
    readfds |= 2;
    int32_t v1298 = select(2, (struct _TYPEDEF_fd_set *)&readfds, NULL, NULL, (struct timeval *)&timeout); // 0x403808
    v185 = false;
    v186 = 0;
    v187 = 0;
    v188 = v1297;
    if (v1298 == 1) {
        // 0x40392d
        raise(13);
        v185 = false;
        v186 = 0;
        v187 = 0;
        v188 = v1297;
    }
    goto lab_0x403816;
  lab_0x40337e:
    // 0x40337e
    v611 = v99;
    v612 = v98;
    v613 = v97;
    v614 = v96;
    v615 = v95;
    v616 = v94;
    v617 = v93;
    v618 = v92;
    v619 = v91;
    v620 = v90;
    v621 = v89;
    v622 = v88;
    v623 = v87;
    v624 = v86;
    v625 = v85;
    v626 = v84;
    v627 = v83;
    v628 = -2;
    v629 = v577;
    v630 = v578;
    v631 = v561;
    v632 = v573;
    v633 = v76;
    int64_t v572; // 0x401e60
    if (v555 == 0) {
        // 0x403590
        if (__fxstat(1, v1299, (struct stat *)&readfds) != 0) {
            goto lab_0x403877;
        } else {
            // 0x4035ac
            if (*v554 == v351) {
                if ((v351 & 0xf000) == 0x8000) {
                    // 0x4038e3
                    if (*(int64_t *)(v573 + 8) == v1) {
                        goto lab_0x4036d1;
                    } else {
                        // 0x4038f5
                        v572 = v351;
                        goto lab_0x4035cd;
                    }
                } else {
                    goto lab_0x4036d1;
                }
            } else {
                // 0x4035bd
                v572 = v351;
                goto lab_0x4035cd;
            }
        }
    } else {
        goto lab_0x40338d;
    }
  lab_0x402d1a:
    // 0x402d1a
    *(char *)(v412 + 52) = *(char *)&g54 ^ 1;
    function_404820(v402, function_4047e0(*v393, v410, v409));
    *(int32_t *)(v412 + 56) = -1;
    v266 = v394;
    v264 = v395;
    v262 = v396;
    v260 = v397;
    v270 = v398;
    v258 = v399;
    v296 = v400;
    v294 = v401;
    v292 = v402;
    v256 = 0;
    v254 = v403;
    v252 = v404;
    v250 = v405;
    v248 = v406;
    v246 = v407;
    v244 = v408;
    v285 = v409;
    v242 = v411;
    v268 = v412;
    v240 = v413;
    goto lab_0x40295a;
  lab_0x402f56:;
    int64_t v414 = v415;
    if (v414 > (v2 < 0x2000000000000001 ? v2 : 512)) {
        int64_t v416 = v417; // 0x402f85
        if (v417 == -1) {
            // 0x4039e7
            v416 = function_404c20((int64_t)fd, 0, 1, 0x100000000 * v418 >> 32);
        }
        int64_t v419 = v416;
        int64_t v420 = v419; // 0x402f8e
        if (v414 > v419 == v414 - v419 > v421) {
            // 0x403a6b
            v420 = v414 - v421;
            function_404c20((int64_t)fd, (int32_t)v420, 0, 0x100000000 * v418 >> 32);
        }
        // 0x402fa1
        v327 = v420;
        v422 = v423;
        v424 = v425;
        goto lab_0x402a3c;
    } else {
        goto lab_0x402d56;
    }
  lab_0x402a3c:;
    int64_t v426 = 0x100000000 * v418 >> 32; // 0x402a47
    v327 += function_404a20(0, v426, fd, (int64_t)v422);
    v427 = v422;
    v428 = 1;
    v429 = v430;
    v431 = v432;
    v433 = v434;
    v435 = v436;
    v437 = fd;
    v438 = v426;
    v439 = v440;
    v441 = v442;
    v443 = v424;
    goto lab_0x402a5e;
  lab_0x4026d8_4:
    // 0x4026d8
    v478 = (int64_t *)v479;
    v480 = v481;
    v482 = v483;
    v484 = v479;
    v485 = v486;
    v487 = v488;
    v489 = v490;
    goto lab_0x402c60;
  lab_0x402bba:;
    int64_t * v1189 = (int64_t *)v445;
    v393 = v1189;
    v394 = v459;
    v395 = v460;
    v396 = v461;
    v397 = v462;
    v398 = v463;
    v399 = v464;
    v400 = v452;
    v401 = v465;
    v402 = fd;
    v403 = v450;
    v404 = v449;
    v405 = v448;
    v406 = v447;
    v407 = v466;
    v408 = v467;
    v409 = v454;
    v410 = v453;
    v411 = v446;
    v412 = v445;
    v413 = v444;
    if ((char)v451 == 0) {
        goto lab_0x402d1a;
    } else {
        // 0x402bc5
        *(char *)(v445 + 52) = 0;
        *(int32_t *)(v445 + 56) = fd;
        *(int64_t *)(v445 + 8) = v327;
        *(int32_t *)(v445 + 64) = v465 == 0 ? v462 : 1;
        *(int64_t *)(v445 + 88) = 0;
        *(int64_t *)(v445 + 24) = (int64_t)v351;
        *(int64_t *)(v445 + 32) = (int64_t)readfds;
        int64_t v1190 = function_405090(v453, function_4047e0(*v1189, v453, v454)); // 0x402c3a
        *(char *)(v445 + 53) = (char)v1190;
        v266 = v459;
        v264 = v460;
        v262 = v461;
        v260 = v462;
        v270 = v463;
        v258 = v464;
        v296 = v452;
        v294 = v465;
        v292 = fd;
        v256 = v451;
        v254 = v450;
        v252 = v449;
        v250 = v448;
        v248 = v447;
        v246 = v466;
        v244 = v467;
        v285 = v454;
        v242 = v446;
        v268 = v445;
        v240 = v444;
        goto lab_0x40295a;
    }
  lab_0x402a26:
    // 0x402a26
    v327 += v421;
    v422 = (struct stat *)-1;
    v424 = v1046;
    goto lab_0x402a3c;
  lab_0x402a09:
    // 0x402a09
    if (lseek(fd, offset, SEEK_CUR) == -1) {
        goto lab_0x402ad3;
    } else {
        goto lab_0x402a26;
    }
  lab_0x402c60:;
    int64_t v491 = v487;
    int32_t v492 = v485;
    v493 = v484;
    int32_t v494 = v482;
    int64_t v495 = v480;
    free(v478);
    int64_t v496; // 0x401e60
    int64_t v497; // 0x401e60
    int32_t v498; // 0x401e60
    if (v489 == -1) {
        // 0x403a04
        function_409510(4, 0x100000000 * v418 >> 32);
        char * format5 = dcgettext(NULL, "error reading %s", 5); // 0x403a22
        uint32_t err_num3 = *__errno_location(); // 0x403a37
        error(0, err_num3, format5);
        v498 = v499;
        v496 = (int64_t)format5;
        v497 = err_num3;
        goto lab_0x402ca1;
    } else {
        int64_t v500 = v494; // 0x402c7a
        int64_t v501 = *(int64_t *)(v500 + 0x2000); // 0x402c7f
        bool v502 = v421 == 0 | v501 == 0;
        int64_t v503 = (int64_t)v502 | 0x2000; // 0x402c95
        v498 = 1;
        v496 = v503;
        v497 = v493;
        if (!v502) {
            int32_t v504 = v492; // 0x402fbb
            if (*(char *)(v500 - 1 + v501) != *(char *)&g48) {
                int64_t * v505 = (int64_t *)(v500 + 0x2008); // 0x402fbd
                *v505 = *v505 + 1;
                v504 = v492 + 1;
            }
            int64_t v506 = v504;
            int64_t v507 = v506 - *(int64_t *)(v495 + 0x2008); // 0x402fd8
            int64_t v508 = v507; // 0x402fe2
            int64_t v509 = v495; // 0x402fe2
            v510 = v506;
            int32_t v511 = v504; // 0x402fe2
            v512 = v503;
            int64_t v513 = v495; // 0x402fe2
            if (v507 > v421) {
                int64_t v514 = v508;
                int64_t v515 = *(int64_t *)(v509 + 0x2010); // 0x402fe8
                int64_t v516 = v514 - *(int64_t *)(v515 + 0x2008); // 0x402ff2
                v509 = v515;
                while (v421 < v516) {
                    // 0x402fe8
                    v514 = v516;
                    v515 = *(int64_t *)(v509 + 0x2010);
                    v516 = v514 - *(int64_t *)(v515 + 0x2008);
                    v509 = v515;
                }
                // 0x402ffe
                v510 = 0x100000000 * v514 >> 32;
                v511 = v514;
                v512 = v514;
                v513 = v515;
            }
            // 0x403003
            v517 = v513;
            v518 = v511;
            if (v510 <= v421) {
                goto lab_0x403049;
            } else {
                int64_t v519; // 0x401e60
                int64_t v520 = v519;
                int64_t v521; // 0x403017
                int64_t v522; // 0x40302b
                int64_t v523 = function_40b730(v520, v522, v521 - v520); // 0x403031
                v524 = v460;
                v525 = v461;
                v526 = v462;
                v527 = v463;
                v528 = v464;
                v529 = v423;
                v530 = v465;
                v531 = fd;
                int32_t v532; // 0x402622
                v533 = v532;
                v534 = v535;
                int32_t v536; // 0x402c97
                v537 = v536;
                v538 = v494;
                v539 = v442;
                v540 = v518;
                v541 = v466;
                v542 = v467;
                int64_t v543; // 0x401e60
                v544 = v543;
                // 0x40301f
                while (v523 != 0) {
                    int64_t v545 = v523 + 1; // 0x40303f
                    int64_t v546; // 0x401e60
                    int64_t v547 = v546 - 1; // 0x403043
                    v519 = v545;
                    v543 = v547;
                    if (v547 == 0) {
                        goto lab_0x403049;
                    }
                    v546 = v543;
                    v520 = v519;
                    int64_t v548 = v521 - v520; // 0x40302e
                    v523 = function_40b730(v520, v522, v548);
                    v524 = v460;
                    v525 = v461;
                    v526 = v462;
                    v527 = v463;
                    v528 = v464;
                    v529 = v423;
                    v530 = v465;
                    v531 = fd;
                    v533 = v532;
                    v534 = v535;
                    v537 = v536;
                    v538 = v494;
                    v539 = v442;
                    v540 = v518;
                    v541 = v466;
                    v542 = v467;
                    v544 = v546;
                }
                goto lab_0x403e46;
            }
        } else {
            goto lab_0x402ca1;
        }
    }
  lab_0x403877:
    // 0x403877
    *(int32_t *)(v182 + 56) = -1;
    int32_t * v549 = __errno_location(); // 0x40387f
    *(int32_t *)(v182 + 60) = *v549;
    int64_t v550 = function_4095e0(0, 3, v180); // 0x403897
    uint32_t err_num4 = *v549; // 0x40389c
    error(0, err_num4, "%s", (char *)v550);
    close((int32_t)fd2);
    v192 = v145;
    v193 = v147;
    v194 = v149;
    v195 = v151;
    v196 = v153;
    v197 = v155;
    v198 = v157;
    v199 = v159;
    v200 = v161;
    v201 = v163;
    v202 = v165;
    v203 = v167;
    v204 = v169;
    v205 = v171;
    v206 = v173;
    v207 = v551;
    int128_t v552; // 0x40383a
    v208 = v552;
    v209 = v550;
    v210 = (int64_t)"%s";
    char * format6; // 0x403859
    v211 = (int64_t)format6;
    v212 = fd2;
    v213 = err_num4;
    v214 = v180;
    v215 = v182;
    v216 = v184;
    goto lab_0x4033a7;
  lab_0x403688:;
    int32_t * v553 = __errno_location(); // 0x403688
    if ((*v554 & 0xf000) != 0x8000) {
        goto lab_0x403b51;
    } else {
        // 0x4036a3
        if (*v553 != 1) {
            goto lab_0x403b51;
        } else {
            // 0x4036ac
            v555 = (int64_t)*v556;
            goto lab_0x40337e;
        }
    }
  lab_0x40383a:
    // 0x40383a
    v552 = __asm_movsd(v145);
    int64_t v557 = function_40a160((int64_t)pid2, v558, v559); // 0x403840
    v14 = v145;
    v16 = v147;
    v17 = v149;
    v19 = v151;
    v21 = v153;
    v23 = v155;
    v25 = v157;
    v26 = v159;
    v28 = v163;
    v29 = v165;
    v31 = v167;
    v32 = v169;
    v34 = v171;
    v35 = v173;
    v37 = v551;
    v39 = v552;
    v41 = v560;
    v43 = v559;
    v45 = fd2;
    v47 = v558;
    v49 = v180;
    v50 = v184;
    if ((int32_t)v557 == 0) {
        goto lab_0x403305;
    } else {
        // 0x40384d
        format6 = dcgettext(NULL, "cannot read realtime clock", 5);
        error(1, *__errno_location(), format6);
        goto lab_0x403877;
    }
  lab_0x403b51:
    // 0x403b51
    err_num5 = v553;
    function_4095e0(0, 3, v561);
    error(1, *err_num5, dcgettext(NULL, "%s: cannot change nonblocking mode", 5));
    v289 = v94;
    v290 = v97;
  lab_0x403b91:;
    int64_t v562 = v290; // 0x403b9a
    int64_t v563 = *(int64_t *)v562; // 0x403ba2
    while ((v351 & 0xf000) == 0xa000 != (__lxstat(1, (char *)v563, (struct stat *)&readfds) == 0)) {
        int64_t v564 = v562 + 96; // 0x403bcd
        v562 = v564;
        if (v564 == v289) {
            // 0x403bdf
            goto lab_0x403bdf_2;
        }
        v563 = *(int64_t *)v562;
    }
    goto lab_0x4032ae_2;
  lab_0x402ca1:
    // 0x402ca1
    v565 = v498;
    v566 = v492;
    v567 = v496;
    v568 = v497;
    v569 = v491;
    v570 = v493;
    v470 = v498;
    v471 = v494;
    v472 = v442;
    v473 = v492;
    v474 = v496;
    v475 = v497;
    v476 = v491;
    v477 = v493;
    if (v495 == 0) {
        goto lab_0x402cc4;
    } else {
        goto lab_0x402cb0;
    }
  lab_0x4036d1:;
    int64_t v571 = v351; // 0x4036d1
    v572 = v571;
    if (*(int64_t *)(v573 + 16) != v1) {
        goto lab_0x4035cd;
    } else {
        // 0x4036e3
        v572 = v571;
        if (*(int32_t *)(v573 + 24) != v351) {
            goto lab_0x4035cd;
        } else {
            int64_t * v574 = (int64_t *)(v573 + 88); // 0x4036ed
            uint64_t v575 = *v574; // 0x4036ed
            int64_t v576 = v575 + 1; // 0x4036f8
            *v574 = v576;
            v192 = v99;
            v193 = v98;
            v194 = v97;
            v195 = v96;
            v196 = v95;
            v197 = v94;
            v198 = v93;
            v199 = v92;
            v200 = v91;
            v201 = v90;
            v202 = v89;
            v203 = v88;
            v204 = v87;
            v205 = v86;
            v206 = v85;
            v207 = v84;
            v208 = v83;
            v209 = v571;
            v210 = v576;
            v211 = v577;
            v212 = v578;
            v213 = v578;
            v214 = v561;
            v215 = v573;
            v216 = v76;
            if (v575 >= g25) {
                // 0x403706
                v192 = v99;
                v193 = v98;
                v194 = v97;
                v195 = v96;
                v196 = v95;
                v197 = v94;
                v198 = v93;
                v199 = v92;
                v200 = v91;
                v201 = v90;
                v202 = v89;
                v203 = v88;
                v204 = v87;
                v205 = v86;
                v206 = v85;
                v207 = v84;
                v208 = v83;
                v209 = v571;
                v210 = v576;
                v211 = v577;
                v212 = v578;
                v213 = v578;
                v214 = v561;
                v215 = v573;
                v216 = v76;
                if (g26 == 1) {
                    int64_t v579 = *v556 != 0; // 0x40371d
                    function_4056e0(v573, v579, v576);
                    *v574 = 0;
                    v192 = v99;
                    v193 = v98;
                    v194 = v97;
                    v195 = v96;
                    v196 = v95;
                    v197 = v94;
                    v198 = v93;
                    v199 = v92;
                    v200 = v91;
                    v201 = v90;
                    v202 = v89;
                    v203 = v88;
                    v204 = v87;
                    v205 = v86;
                    v206 = v85;
                    v207 = v84;
                    v208 = v83;
                    v209 = v571;
                    v210 = v576;
                    v211 = v577;
                    v212 = v578;
                    v213 = v579;
                    v214 = v561;
                    v215 = v573;
                    v216 = v76;
                }
            }
            goto lab_0x4033a7;
        }
    }
  lab_0x4035cd:
    // 0x4035cd
    *(int64_t *)(v573 + 24) = v572;
    *(int64_t *)(v573 + 88) = 0;
    struct stat * v580 = v93; // 0x4035ef
    if ((v581 & 0xf000) == 0x8000) {
        int64_t * v582 = (int64_t *)(v573 + 8); // 0x403733
        v580 = v93;
        if (v1 < *v582) {
            int64_t v583 = function_4095e0(0, 3, v561); // 0x40374f
            error(0, (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated", dcgettext(NULL, "%s: file truncated", 5));
            function_404c20(v578, (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated", 0, v561);
            *v582 = 0;
            v580 = (struct stat *)v583;
        }
    }
    struct stat * v584 = v580;
    int32_t v585 = v87; // 0x4035fa
    if (v577 != (int64_t)v87) {
        int32_t v586 = v577; // 0x403603
        v585 = v586;
        if (g49 != 0) {
            char * v587 = g23 != 0 ? (char *)&g16 : (char *)&g15; // 0x40362e
            __printf_chk(1, "%s==> %s <==\n", v587, (char *)v561);
            g23 = 0;
            v585 = v586;
        }
    }
    int32_t v588 = v585;
    v589 = v99;
    v590 = v98;
    v591 = v97;
    v592 = v96;
    v593 = v95;
    v594 = v94;
    v595 = v584;
    v596 = v92;
    v597 = v91;
    v598 = v90;
    v599 = v89;
    v600 = v88;
    v601 = v588;
    v602 = v86;
    v603 = v85;
    v604 = v84;
    v605 = v83;
    v606 = v577;
    v607 = v578;
    v608 = v561;
    v609 = v573;
    v610 = v76;
    if (*v556 != 0) {
        goto lab_0x403eb3;
    } else {
        // 0x40364b
        v611 = v99;
        v612 = v98;
        v613 = v97;
        v614 = v96;
        v615 = v95;
        v616 = v94;
        v617 = v584;
        v618 = v92;
        v619 = v91;
        v620 = v90;
        v621 = v89;
        v622 = v88;
        v623 = v588;
        v624 = v86;
        v625 = v85;
        v626 = v84;
        v627 = v83;
        v628 = -1;
        v629 = v577;
        v630 = v578;
        v631 = v561;
        v632 = v573;
        v633 = v76;
        if ((v581 & 0xf000) == 0x8000) {
            // 0x40365f
            v611 = v99;
            v612 = v98;
            v613 = v97;
            v614 = v96;
            v615 = v95;
            v616 = v94;
            v617 = v584;
            v618 = v92;
            v619 = v91;
            v620 = v90;
            v621 = v89;
            v622 = v88;
            v623 = v588;
            v624 = v86;
            v625 = v85;
            v626 = v84;
            v627 = v83;
            v628 = -1;
            v629 = v577;
            v630 = v578;
            v631 = v561;
            v632 = v573;
            v633 = v76;
            if (*(char *)(v573 + 53) != 0) {
                // 0x40366a
                v611 = v99;
                v612 = v98;
                v613 = v97;
                v614 = v96;
                v615 = v95;
                v616 = v94;
                v617 = v584;
                v618 = v92;
                v619 = v91;
                v620 = v90;
                v621 = v89;
                v622 = v88;
                v623 = v588;
                v624 = v86;
                v625 = v85;
                v626 = v84;
                v627 = v83;
                v628 = v1 - *(int64_t *)(v573 + 8);
                v629 = v577;
                v630 = v578;
                v631 = v561;
                v632 = v573;
                v633 = v76;
            }
        }
        goto lab_0x40338d;
    }
  lab_0x402cb0:;
    int64_t v634 = *(int64_t *)(v495 + 0x2010); // 0x402cb0
    free((int64_t *)v495);
    int64_t v635 = v634; // 0x402cc2
    v470 = v565;
    v471 = v494;
    v472 = v442;
    v473 = v566;
    v474 = v567;
    v475 = v568;
    v476 = v569;
    v477 = v570;
    while (v634 != 0) {
        // 0x402cb0
        v634 = *(int64_t *)(v635 + 0x2010);
        free((int64_t *)v635);
        v635 = v634;
        v470 = v565;
        v471 = v494;
        v472 = v442;
        v473 = v566;
        v474 = v567;
        v475 = v568;
        v476 = v569;
        v477 = v570;
    }
    goto lab_0x402cc4;
  lab_0x403bdf_2:;
    // 0x403bdf
    int64_t v636; // 0x401e60
    int64_t v637 = v636;
    int64_t v638; // 0x401e60
    int64_t v639 = v638;
    int64_t v640; // 0x401e60
    int64_t v641 = v639 + v640;
    int32_t v642 = *(int32_t *)(v641 + 56); // 0x403bdf
    int64_t v643 = v637; // 0x403be4
    bool v644; // 0x401e60
    int64_t v645; // 0x401e60
    int64_t v646; // 0x401e60
    int32_t v647; // 0x401e60
    int32_t v648; // 0x401e60
    int32_t v649; // 0x401e60
    int64_t v650; // 0x401e60
    int32_t v651; // 0x401e60
    int32_t v652; // 0x401e60
    int32_t v653; // 0x401e60
    int64_t v654; // 0x401e60
    struct stat * v655; // 0x401e60
    int128_t v656; // 0x401e60
    if (v642 < 0) {
        goto lab_0x403c04;
    } else {
        int32_t v657 = *(int32_t *)(v641 + 48); // 0x403be6
        uint32_t v658 = v657 & 0xf000; // 0x403bea
        int64_t v659 = v658; // 0x403bea
        v13 = v654;
        v15 = v649;
        v8 = v640;
        v18 = v648;
        v20 = v647;
        v22 = v652;
        v24 = v655;
        v27 = v653;
        v30 = v651;
        v33 = v650;
        v36 = v644;
        v38 = v656;
        v40 = v640;
        v42 = v659;
        v44 = v646;
        v46 = v563;
        v48 = v645;
        v643 = v659;
        if (v658 != 0x8000 == (v658 != 0x1000)) {
            goto lab_0x4032ae_2;
        } else {
            goto lab_0x403c04;
        }
    }
  lab_0x403c04:;
    int64_t v660 = v643;
    int64_t v661 = v639 + 96; // 0x403c04
    v638 = v661;
    v636 = v660;
    bool v662; // 0x401e60
    int64_t v663; // 0x401e60
    int64_t v664; // 0x401e60
    int64_t v665; // 0x401e60
    int64_t v666; // 0x401e60
    int64_t v667; // 0x401e60
    int64_t v668; // 0x401e60
    int64_t v669; // 0x401e60
    int64_t v670; // 0x401e60
    int32_t v671; // 0x401e60
    int32_t v672; // 0x401e60
    int64_t v673; // 0x401e60
    int32_t v674; // 0x401e60
    int64_t v675; // 0x401e60
    int32_t v676; // 0x401e60
    int32_t v677; // 0x401e60
    int64_t v678; // 0x401e60
    int32_t v679; // 0x401e60
    struct stat * v680; // 0x401e60
    int32_t v681; // 0x401e60
    int32_t v682; // 0x401e60
    int32_t v683; // 0x401e60
    int32_t v684; // 0x401e60
    int64_t v685; // 0x401e60
    int128_t v686; // 0x401e60
    if (v661 != v685) {
        goto lab_0x403bdf_2;
    } else {
        int32_t v687 = g26; // 0x403c19
        v13 = v654;
        v15 = v649;
        v8 = v640;
        v18 = v648;
        v20 = v647;
        v22 = v652;
        v24 = v655;
        v27 = v653;
        v30 = v651;
        v33 = v650;
        v36 = v644;
        v38 = v656;
        v40 = v640;
        v42 = v660;
        v44 = v646;
        v46 = v563;
        v48 = v645;
        if ((char)v647 == 0 == v687 == 2) {
            goto lab_0x4032ae_2;
        } else {
            int32_t v688 = inotify_init(); // 0x403c26
            int64_t v689 = v688; // 0x403c2b
            v228 = v654;
            v229 = v649;
            v224 = v640;
            v230 = v648;
            v231 = v647;
            v220 = v652;
            v232 = v655;
            v233 = v653;
            v234 = v651;
            v235 = v650;
            v236 = v644;
            v237 = v656;
            v238 = v640;
            v222 = v689;
            if (v688 < 0) {
                goto lab_0x403db0;
            } else {
                struct _IO_FILE * stream = g39; // 0x403c36
                int32_t v690; // 0x403b91
                if (fflush_unlocked(stream) != 0) {
                    char * format7 = dcgettext(NULL, "write error", 5); // 0x404636
                    int64_t v691 = (int64_t)format7; // 0x404636
                    int32_t * v692 = __errno_location(); // 0x40463e
                    int32_t err_num6 = *v692; // 0x40464b
                    error(1, err_num6, format7);
                    v678 = v654;
                    v672 = v649;
                    v675 = v640;
                    v671 = v647;
                    v676 = v652;
                    v680 = v655;
                    int32_t v693; // 0x401e60
                    v679 = v693;
                    int32_t v694; // 0x401e60
                    v684 = v694;
                    v677 = v653;
                    int32_t v695; // 0x401e60
                    v682 = v695;
                    v674 = v651;
                    v683 = v690;
                    v673 = v650;
                    int32_t v696; // 0x401e60
                    v681 = v696;
                    v662 = v644;
                    v686 = v656;
                    v667 = &g73;
                    v670 = v691;
                    v669 = v691;
                    v668 = v646;
                    int64_t v697; // 0x401e60
                    v663 = v697;
                    v664 = v689;
                    int64_t v698; // 0x401e60
                    v665 = v698;
                    int64_t v699; // 0x403b9a
                    v666 = v699;
                    goto lab_0x404654;
                } else {
                    int32_t * v700 = err_num5; // 0x403c4a
                    int64_t v701 = (int64_t)v700; // 0x403c4a
                    int64_t v702 = function_407060(v701, 0, 0x4047c0, 0x4047d0, 0); // 0x403c5d
                    v703 = v701;
                    if (v702 == 0) {
                        goto lab_0x4045da;
                    } else {
                        int32_t v704 = g26; // 0x403c7f
                        int32_t v705 = v704 != 1 ? 2 : 3078; // 0x403c9b
                        v706 = v654;
                        v707 = v649;
                        v708 = v640;
                        v709 = v648;
                        v710 = v647;
                        v711 = v652;
                        v712 = (struct stat *)&readfds;
                        v713 = v705;
                        v714 = 0;
                        v715 = v653;
                        v716 = 0x1000000 * (int32_t)v702 >> 24;
                        v717 = v651;
                        v718 = v690;
                        v719 = v650;
                        v720 = v644;
                        v721 = v656;
                        v722 = 0x4047d0;
                        v723 = 2;
                        v724 = v640;
                        v725 = 0;
                        v726 = 0;
                        v727 = v689;
                        goto lab_0x403c9f;
                    }
                }
            }
        }
    }
  lab_0x404654:
    // 0x404654
    function_4056e0(v667, 0, v670);
    int64_t v728 = v678; // 0x404668
    int32_t v729 = v672; // 0x404668
    int64_t v730 = v675; // 0x404668
    int32_t v731 = v671; // 0x404668
    int32_t v732 = v676; // 0x404668
    struct stat * v733 = v680; // 0x404668
    int32_t v734 = v679; // 0x404668
    int32_t v735 = v684; // 0x404668
    int32_t v736 = v677; // 0x404668
    int32_t v737 = v682; // 0x404668
    int32_t v738 = v674; // 0x404668
    int32_t v739 = v683; // 0x404668
    int64_t v740 = v673; // 0x404668
    int32_t v741 = v681; // 0x404668
    bool v742 = v662; // 0x404668
    int128_t v743 = v686; // 0x404668
    int64_t v744 = 0x100000000 * v667 >> 32; // 0x404668
    int64_t v745 = v669; // 0x404668
    int64_t v746 = v668; // 0x404668
    int64_t v747 = 0; // 0x404668
    int64_t v748 = v663; // 0x404668
    int64_t v749 = v664; // 0x404668
    int64_t v750 = v665; // 0x404668
    int64_t v751 = v666; // 0x404668
    goto lab_0x40452e;
  lab_0x40452e:;
    int64_t v752 = v744;
    *(int32_t *)(v752 + 68) = -1;
    int64_t v753 = function_4047e0(*(int64_t *)v752, v747, v752); // 0x40453d
    int64_t v754 = 0x100000000 * v752 >> 32; // 0x404542
    function_404820(*(int32_t *)(v754 + 56), v753);
    int64_t v755 = v728; // 0x40454d
    int32_t v756 = v729; // 0x40454d
    int64_t v757 = v730; // 0x40454d
    int32_t v758 = v752; // 0x40454d
    int32_t v759 = v731; // 0x40454d
    int32_t v760 = v732; // 0x40454d
    struct stat * v761 = v733; // 0x40454d
    int32_t v762 = v734; // 0x40454d
    int32_t v763 = v735; // 0x40454d
    int32_t v764 = v736; // 0x40454d
    int32_t v765 = v737; // 0x40454d
    int32_t v766 = v738; // 0x40454d
    int32_t v767 = v739; // 0x40454d
    int64_t v768 = v740; // 0x40454d
    int32_t v769 = v741; // 0x40454d
    bool v770 = v742; // 0x40454d
    int128_t v771 = v743; // 0x40454d
    int64_t v772 = v754; // 0x40454d
    int64_t v773 = v745; // 0x40454d
    int64_t v774 = v746; // 0x40454d
    int64_t v775 = v748; // 0x40454d
    int64_t v776 = v749; // 0x40454d
    int64_t v777 = v750; // 0x40454d
    int64_t v778 = v751; // 0x40454d
    goto lab_0x404552;
  lab_0x404552:;
    int64_t v779 = 0x100000000000000 * (int64_t)v765 >> 56; // 0x404552
    int64_t v780 = function_407800((char)v779, v773); // 0x40455a
    int64_t v781 = v755; // 0x404562
    int32_t v782 = v756; // 0x404562
    int64_t v783 = v757; // 0x404562
    int32_t v784 = v758; // 0x404562
    int32_t v785 = v759; // 0x404562
    int32_t v786 = v760; // 0x404562
    struct stat * v787 = v761; // 0x404562
    int32_t v788 = v762; // 0x404562
    int32_t v789 = v763; // 0x404562
    int32_t v790 = v764; // 0x404562
    int32_t v791 = v765; // 0x404562
    int32_t v792 = v766; // 0x404562
    int32_t v793 = v767; // 0x404562
    int64_t v794 = v768; // 0x404562
    int32_t v795 = v769; // 0x404562
    bool v796 = v770; // 0x404562
    int128_t v797 = v771; // 0x404562
    int64_t v798 = v772; // 0x404562
    int64_t v799 = v773; // 0x404562
    int64_t v800 = v774; // 0x404562
    int64_t v801 = v775; // 0x404562
    int64_t v802 = v776; // 0x404562
    int64_t v803 = v777; // 0x404562
    int64_t v804 = v778; // 0x404562
    v703 = v779;
    if (v780 == 0) {
        goto lab_0x4045da;
    } else {
        goto lab_0x404564;
    }
  lab_0x404564:;
    int64_t v805 = v781; // 0x40456b
    int32_t v806 = v782; // 0x40456b
    int64_t v807 = v783; // 0x40456b
    int32_t v808 = v784; // 0x40456b
    int32_t v809 = v785; // 0x40456b
    int32_t v810 = v786; // 0x40456b
    struct stat * v811 = v787; // 0x40456b
    int32_t v812 = v788; // 0x40456b
    int32_t v813 = v789; // 0x40456b
    int32_t v814 = v790; // 0x40456b
    int32_t v815 = v791; // 0x40456b
    int32_t v816 = v792; // 0x40456b
    int32_t v817 = v793; // 0x40456b
    int64_t v818 = v794; // 0x40456b
    int32_t v819 = v795; // 0x40456b
    bool v820 = v796; // 0x40456b
    int128_t v821 = v797; // 0x40456b
    int64_t v822 = v798; // 0x40456b
    int64_t v823 = v799; // 0x40456b
    int64_t v824 = v800; // 0x40456b
    int64_t v825 = v801; // 0x40456b
    int64_t v826 = v802; // 0x40456b
    int64_t v827 = v803; // 0x40456b
    int64_t v828 = v804; // 0x40456b
    v829 = v781;
    v830 = v782;
    v831 = v783;
    v832 = v784;
    v833 = v785;
    v834 = v786;
    v835 = v787;
    v836 = v788;
    v837 = v789;
    v838 = v790;
    v839 = v791;
    v840 = v792;
    v841 = v793;
    v842 = v794;
    v843 = v795;
    v844 = v796;
    v845 = v797;
    v846 = v798;
    v847 = v799;
    v848 = v800;
    v849 = v801;
    v850 = v802;
    v851 = v803;
    v852 = v804;
    if (g26 != 1) {
        goto lab_0x40426d;
    } else {
        goto lab_0x404571;
    }
  lab_dec_label_pc_unknown:;
    int64_t v853 = v854;
    if (v853 == 0) {
        goto lab_dec_label_pc_unknown_2;
    } else {
        int64_t v855 = v856;
        v854 = v853 - 1;
        v856 = v855 + v857;
        if (*(char *)v855 == 0) {
            goto lab_dec_label_pc_unknown_2;
        } else {
            goto lab_dec_label_pc_unknown;
        }
    }
  lab_0x40426d:;
    int64_t v858 = v828;
    int64_t v859 = v827;
    int64_t v860 = v826;
    int64_t v861 = v825;
    int64_t v862 = v824;
    int64_t v863 = v823;
    int128_t v864 = v821;
    bool v865 = v820;
    int32_t v866 = v819;
    int64_t v867 = v818;
    int32_t v868 = v817;
    int32_t v869 = v816;
    int32_t v870 = v815;
    int32_t v871 = v814;
    int32_t v872 = v813;
    int32_t v873 = v812;
    struct stat * v874 = v811;
    int32_t v875 = v810;
    int32_t v876 = v809;
    int32_t v877 = v808;
    int64_t v878 = v807;
    int32_t v879 = v806;
    int64_t v880 = v805;
    int32_t v881 = *(int32_t *)(v867 + 4); // 0x404272
    v882 = v880;
    v883 = v879;
    v884 = v878;
    v885 = v877;
    v886 = v876;
    v887 = v875;
    v888 = v874;
    v889 = v873;
    v890 = v872;
    v891 = v871;
    v892 = v870;
    v893 = v869;
    v894 = v868;
    v895 = v867;
    v896 = v866;
    v897 = v865;
    v898 = v864;
    v899 = v863;
    v900 = v862;
    v901 = v861;
    v902 = v860;
    v903 = v859;
    v904 = v858;
    if ((v881 & 3588) == 0) {
        goto lab_0x404360;
    } else {
        // 0x404280
        if ((v881 & 1024) != 0) {
            // 0x4043e2
            inotify_rm_watch((int32_t)v860, *(int32_t *)(v863 + 68));
            function_407840((char)v870);
            goto lab_0x404289;
        } else {
            goto lab_0x404289;
        }
    }
  lab_0x404571:
    // 0x404571
    function_4056e0(v847, 0, v846);
    v905 = v829;
    v906 = v830;
    v907 = v831;
    v908 = v832;
    v909 = v833;
    v910 = v834;
    v911 = v835;
    v912 = v836;
    v913 = v837;
    v914 = v838;
    v915 = v839;
    v916 = v840;
    v917 = v841;
    v918 = v842;
    v919 = v843;
    v920 = v844;
    v921 = v845;
    v922 = v846;
    v923 = v847;
    v924 = v848;
    v925 = v849;
    v926 = v850;
    v927 = v851;
    v928 = v852;
    goto lab_0x404264;
  lab_dec_label_pc_unknown_2:;
    int64_t v1075 = 0;
    int32_t * v1084 = (int32_t *)(v1116 + 68); // 0x403cb7
    *v1084 = -1;
    int32_t v1081; // 0x401e60
    int32_t v1079; // 0x401e60
    int64_t v1158; // 0x403cdb
    int64_t v1153; // 0x403ce3
    int64_t v1156; // 0x403d14
    if (g26 != 1) {
        // .dec_label_pc_403d3d_crit_edge
        v1081 = v1121;
        v1079 = v1186;
        goto lab_0x403d3d;
    } else {
        // 0x403cd8
        v1158 = function_406630(v1187);
        v1153 = v1158 + v1187;
        *(int64_t *)(v1116 + 80) = function_4066f0(v1187, v1153) - v1187;
        *(char *)(0x100000000000000 * v1153 >> 56) = 0;
        v1156 = (int64_t)&g2;
        if (v1158 == 0) {
            goto lab_0x403d17;
        } else {
            // 0x403d14
            v1156 = *v1082;
            goto lab_0x403d17;
        }
    }
  lab_0x404360:
    // 0x404360
    function_404f00(v899, &v1188);
    v929 = v882;
    v930 = v883;
    v931 = v884;
    v932 = v885;
    v933 = v886;
    v934 = v887;
    v935 = v888;
    v936 = v889;
    v937 = v890;
    v938 = v891;
    v939 = v892;
    v940 = v893;
    v941 = v894;
    v942 = v895;
    v943 = v896;
    v944 = v897;
    v945 = v898;
    v946 = v900;
    v947 = v901;
    v948 = v902;
    v949 = v903;
    v950 = v904;
    goto lab_0x40404b_3;
  lab_0x404264:
    // 0x404264
    v929 = v905;
    v930 = v906;
    v931 = v907;
    v932 = v908;
    v933 = v909;
    v934 = v910;
    v935 = v911;
    v936 = v912;
    v937 = v913;
    v938 = v914;
    v939 = v915;
    v940 = v916;
    v941 = v917;
    v942 = v918;
    v943 = v919;
    v944 = v920;
    v945 = v921;
    v946 = v924;
    v947 = v925;
    v948 = v926;
    v949 = v927;
    v950 = v928;
    v805 = v905;
    v806 = v906;
    v807 = v907;
    v808 = v908;
    v809 = v909;
    v810 = v910;
    v811 = v911;
    v812 = v912;
    v813 = v913;
    v814 = v914;
    v815 = v915;
    v816 = v916;
    v817 = v917;
    v818 = v918;
    v819 = v919;
    v820 = v920;
    v821 = v921;
    v822 = v922;
    v823 = v923;
    v824 = v924;
    v825 = v925;
    v826 = v926;
    v827 = v927;
    v828 = v928;
    if (v923 == 0) {
        goto lab_0x40404b_3;
    } else {
        goto lab_0x40426d;
    }
  lab_0x404289:
    // 0x404289
    function_4056e0(v863, 0, v822);
    v929 = v880;
    v930 = v879;
    v931 = v878;
    v932 = v877;
    v933 = v876;
    v934 = v875;
    v935 = v874;
    v936 = v873;
    v937 = v872;
    v938 = v871;
    v939 = v870;
    v940 = v869;
    v941 = v868;
    v942 = v867;
    v943 = v866;
    v944 = v865;
    v945 = v864;
    v946 = v862;
    v947 = v861;
    v948 = v860;
    v949 = v859;
    v950 = v858;
    goto lab_0x40404b_3;
  lab_0x403d3d:;
    uint64_t v1074 = -2 - v1075; // 0x403cc4
    int64_t v1076 = v1077 < v1074 ? v1074 : v1077; // 0x403ccb
    int32_t v1078 = v1079;
    int32_t v1080 = inotify_add_watch(v1081, (char *)*v1082, v1083); // 0x403d47
    *v1084 = v1080;
    v1085 = v1086;
    v1087 = v1088;
    v1089 = v1090;
    v1091 = v1092;
    v1093 = v1094;
    v1095 = v1096;
    v1097 = v1098;
    v1099 = v1083;
    v1100 = v1101;
    v1102 = v1103;
    v1104 = v1078;
    v1105 = v1106;
    v1107 = v1108;
    v1109 = v1110;
    v1111 = v1112;
    v1113 = v1075;
    v1114 = v1083;
    v1115 = v1116;
    v1117 = v1076;
    v1118 = v1119;
    v1120 = v1121;
    int32_t v1122; // 0x401e60
    if (v1080 >= 0) {
        goto lab_0x403efd;
    } else {
        int32_t v1123 = *(int32_t *)(v1116 + 56); // 0x403d5c
        int32_t * err_num11 = __errno_location(); // 0x403d64
        int32_t v1124 = *err_num11; // 0x403d6c
        uint32_t v1125 = v1124 & -17; // 0x403d70
        v1122 = v1078;
        if (v1125 != 12) {
            uint32_t v1126 = v1123 != -1 ? v1101 % 256 : (int32_t)v1119; // 0x403d60
            int64_t v1127 = v1126; // 0x403d60
            v1128 = v1086;
            v1129 = v1088;
            v1130 = v1090;
            v1131 = v1092;
            v1132 = v1094;
            v1133 = v1096;
            v1134 = v1098;
            v1135 = v1083;
            v1136 = v1137;
            v1138 = v1101;
            v1139 = v1103;
            v1140 = v1078;
            v1141 = v1106;
            v1142 = v1108;
            v1143 = v1110;
            v1144 = v1112;
            v1145 = v1075;
            v1146 = v1125;
            v1147 = v1116;
            v1148 = v1076;
            v1149 = v1127;
            v1150 = v1121;
            if (*(int32_t *)(v1116 + 60) == v1124) {
                goto lab_0x403f1c;
            } else {
                int64_t v1151 = function_409510(4, *v1082); // 0x403fde
                char * format12 = dcgettext(NULL, "cannot watch %s", 5); // 0x403ff4
                error(0, *err_num11, format12);
                v1128 = v1086;
                v1129 = v1088;
                v1130 = v1090;
                v1131 = v1092;
                v1132 = v1094;
                v1133 = v1096;
                v1134 = v1098;
                v1135 = v1083;
                v1136 = v1137;
                v1138 = v1101;
                v1139 = v1103;
                v1140 = v1078;
                v1141 = v1106;
                v1142 = v1108;
                v1143 = v1110;
                v1144 = v1112;
                v1145 = v1151;
                v1146 = (int64_t)format12;
                v1147 = v1116;
                v1148 = v1076;
                v1149 = v1127;
                v1150 = v1121;
                goto lab_0x403f1c;
            }
        } else {
            goto lab_0x403d7c;
        }
    }
  lab_0x403d17:;
    int32_t v1152 = 0x1000000 * (int32_t)v1153 >> 24; // 0x403ced
    int32_t v1154 = v1121;
    int32_t v1155 = inotify_add_watch(v1154, (char *)v1156, 1924); // 0x403d1f
    int32_t * v1157 = (int32_t *)(v1116 + 72); // 0x403d29
    *v1157 = v1155;
    *(char *)(*v1082 + v1158) = *(char *)v1153;
    v1081 = v1154;
    v1079 = v1152;
    if (*v1157 < 0) {
        int32_t * err_num12 = __errno_location(); // 0x4045df
        v1122 = v1152;
        if (*err_num12 == 28) {
            goto lab_0x403d7c;
        } else {
            int64_t v1159 = function_409510(4, *v1082); // 0x4045fb
            error(0, *err_num12, dcgettext(NULL, "cannot watch parent directory of %s", 5));
            v1160 = v1086;
            v1161 = v1088;
            v1162 = v1090;
            v1163 = v1092;
            v1164 = v1094;
            v1165 = v1096;
            v1166 = v1098;
            v1167 = v1101;
            v1168 = v1103;
            v1169 = v1152;
            v1170 = v1108;
            v1171 = v1110;
            v1172 = v1112;
            v1173 = v1159;
            v1174 = v1121;
            goto lab_0x403d9b;
        }
    } else {
        goto lab_0x403d3d;
    }
  lab_0x403d7c:
    // 0x403d7c
    error(0, (int32_t)"inotify resources exhausted" ^ (int32_t)"inotify resources exhausted", dcgettext(NULL, "inotify resources exhausted", 5));
    v1160 = v1086;
    v1161 = v1088;
    v1162 = v1090;
    v1163 = v1092;
    v1164 = v1094;
    v1165 = v1096;
    v1166 = v1098;
    v1167 = v1101;
    v1168 = v1103;
    v1169 = v1122;
    v1170 = v1108;
    v1171 = v1110;
    v1172 = v1112;
    v1173 = v1075;
    v1174 = v1121;
    goto lab_0x403d9b;
  lab_0x404697:
    // 0x404697
    error(0, (int32_t)"inotify resources exhausted" ^ (int32_t)"inotify resources exhausted", dcgettext(NULL, "inotify resources exhausted", 5));
    function_4072a0(v962);
    *(int32_t *)(0x100000000 * v1036 >> 32) = 0;
    v228 = v961;
    v229 = v960;
    v224 = v959;
    v230 = v1031;
    v231 = v958;
    v220 = v957;
    v232 = v995;
    v233 = v954;
    v234 = v994;
    v235 = v1032;
    v236 = v1033;
    v237 = v1034;
    v238 = v1035;
    v222 = v1037;
    goto lab_0x403db0;
  lab_0x404411_2:;
    // 0x404411
    int64_t v1175; // 0x401e60
    int64_t v1176 = v1175;
    int64_t v1177 = 96 * v1176; // 0x404411
    int64_t v1178; // 0x40441a
    int32_t v1179 = *(int32_t *)(v1178 + v1177); // 0x40441a
    if (v1179 != v981) {
        int64_t v1180 = v1176 + 1; // 0x404403
        v1021 = v1177;
        v1175 = v1180;
        int64_t v1181; // 0x401e60
        if (v1180 == v1181) {
            goto lab_0x4042a0;
        } else {
            goto lab_0x404411_2;
        }
    } else {
        // 0x404420
        function_4072a0(v962);
        error(0, (int32_t)"directory containing watched file was removed" ^ (int32_t)"directory containing watched file was removed", dcgettext(NULL, "directory containing watched file was removed", 5));
        int32_t * v1182 = __errno_location(); // 0x404449
        *v1182 = 0;
        v228 = v961;
        v229 = v960;
        v224 = v959;
        v230 = v987;
        v231 = v958;
        v220 = v957;
        v232 = v995;
        v233 = v954;
        v234 = v994;
        v235 = v1016;
        v236 = v1014;
        v237 = v1013;
        v238 = v959;
        v222 = v985;
        goto lab_0x403db0;
    }
  lab_0x4044cd:;
    int32_t * v1183 = (int32_t *)(v983 + 68); // 0x4044cd
    int32_t v1184 = *v1183; // 0x4044cd
    v781 = v961;
    v782 = v960;
    v783 = v959;
    v784 = v984;
    v785 = v958;
    v786 = v957;
    v787 = v995;
    v788 = v956;
    v789 = v955;
    v790 = v954;
    v791 = v953;
    v792 = v994;
    v793 = v1015;
    v794 = v1016;
    v795 = v992;
    v796 = v1014;
    v797 = v1013;
    v798 = v979;
    v799 = v983;
    v800 = v982;
    v801 = v952;
    v802 = v1023;
    v803 = v1012;
    v804 = v951;
    if (v1184 > -1 == v984 == v1184) {
        goto lab_0x404564;
    } else {
        if (v1184 < 0) {
            goto lab_0x4044f7;
        } else {
            // 0x4044e2
            inotify_rm_watch(v980, v1184);
            function_407840(v962);
            goto lab_0x4044f7;
        }
    }
  lab_0x4044f7:
    // 0x4044f7
    *v1183 = v984;
    v1040 = -1;
    v1041 = v982;
    if (v984 == -1) {
        goto lab_0x40404b;
    } else {
        int64_t v1185 = function_407840(v962); // 0x40450f
        v755 = v961;
        v756 = v960;
        v757 = v959;
        v758 = v984;
        v759 = v958;
        v760 = v957;
        v761 = v995;
        v762 = v956;
        v763 = v955;
        v764 = v954;
        v765 = v953;
        v766 = v994;
        v767 = v1015;
        v768 = v1016;
        v769 = v992;
        v770 = v1014;
        v771 = v1013;
        v772 = v1185;
        v773 = v983;
        v774 = v982;
        v775 = v952;
        v776 = v1023;
        v777 = v1012;
        v778 = v951;
        if (v1185 == 0 || v983 == v1185) {
            goto lab_0x404552;
        } else {
            // 0x404521
            v728 = v961;
            v729 = v960;
            v730 = v959;
            v731 = v958;
            v732 = v957;
            v733 = v995;
            v734 = v956;
            v735 = v955;
            v736 = v954;
            v737 = v953;
            v738 = v994;
            v739 = v1015;
            v740 = v1016;
            v741 = v992;
            v742 = v1014;
            v743 = v1013;
            v744 = v1185;
            v745 = v983;
            v746 = v982;
            v747 = v983;
            v748 = v952;
            v749 = v1023;
            v750 = v1012;
            v751 = v951;
            v678 = v961;
            v672 = v960;
            v675 = v959;
            v671 = v958;
            v676 = v957;
            v680 = v995;
            v679 = v956;
            v684 = v955;
            v677 = v954;
            v682 = v953;
            v674 = v994;
            v683 = v1015;
            v673 = v1016;
            v681 = v992;
            v662 = v1014;
            v686 = v1013;
            v667 = v1185;
            v670 = v1185;
            v669 = v983;
            v668 = v982;
            v663 = v952;
            v664 = v1023;
            v665 = v1012;
            v666 = v951;
            if (g26 == 1) {
                goto lab_0x404654;
            } else {
                goto lab_0x40452e;
            }
        }
    }
}
// Address range: 0x4046e0 - 0x40470b
// Address range: 0x40470b - 0x40472a
int64_t function_40470b(void) {
    // 0x40470b
    return &g38;
}
// Address range: 0x40472a - 0x404761
int64_t function_40472a(void) {
    // 0x40472a
    return 0;
}
// Address range: 0x404761 - 0x4047b8
int64_t function_404761(void) {
    // 0x404761
    if (g42 != 0) {
        // 0x4047b7
        int64_t result; // 0x404761
        return result;
    }
    int64_t v1 = g43; // 0x404794
    int64_t result2; // 0x4047a6
    if (g43 >= ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x4047a6
        result2 = function_40470b();
        g42 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g20 - (int64_t)&g19 >> 3) - 1) {
        // 0x404796
        v1++;
    }
    // 0x40478a
    g43 = v1;
    // 0x4047a6
    result2 = function_40470b();
    g42 = 1;
    return result2;
}
// Address range: 0x4047b8 - 0x4047bd
int64_t function_4047b8(void) {
    // 0x4047b8
    return function_40472a();
}
// Address range: 0x4047c0 - 0x4047cd
int64_t function_4047c0(int64_t a1, uint64_t a2, int64_t a3) {
    // 0x4047c0
    return (int64_t)*(int32_t *)(a1 + 68) % a2;
}
// Address range: 0x4047d0 - 0x4047da
int64_t function_4047d0(int64_t a1, int64_t a2) {
    int32_t v1 = *(int32_t *)(a2 + 68); // 0x4047d0
    return (int64_t)(*(int32_t *)(a1 + 68) == v1) | (int64_t)(v1 & -256);
}
// Address range: 0x4047e0 - 0x404811
int64_t function_4047e0(int64_t result, int64_t a2, int64_t a3) {
    // 0x4047e0
    bool v1; // 0x4047e0
    int64_t v2 = v1 ? -1 : 1; // 0x4047f0
    int64_t v3 = (int64_t)"-"; // 0x4047e0
    int64_t v4 = result; // 0x4047e0
    int64_t v5 = 2; // 0x4047f0
    unsigned char v6 = *(char *)v4; // 0x4047f0
    char v7 = *(char *)v3; // 0x4047f0
    char v8 = v7; // 0x4047f0
    bool v9 = false; // 0x4047f0
    while (v6 == v7) {
        v5--;
        v3 += v2;
        v4 += v2;
        v8 = v6;
        v9 = true;
        if (v5 == 0) {
            // break -> 
            break;
        }
        v6 = *(char *)v4;
        v7 = *(char *)v3;
        v8 = v7;
        v9 = false;
    }
    unsigned char v10 = v8;
    if ((v6 >= v10 && !v9) == v6 < v10) {
        // 0x404800
        return (int64_t)dcgettext(NULL, "standard input", 5);
    }
    // 0x4047fc
    return result;
}
// Address range: 0x404820 - 0x404891
int64_t function_404820(int32_t fd, int64_t a2) {
    uint32_t result = fd + 1; // 0x404820
    if (fd == 0 || result == 0) {
        // 0x404828
        return result;
    }
    int32_t result2 = close(fd); // 0x404839
    if (result2 == 0) {
        // 0x404842
        return result2;
    }
    // 0x404850
    function_409510(4, a2);
    error(0, *__errno_location(), dcgettext(NULL, "closing %s (fd=%d)", 5));
    return &g73;
}
// Address range: 0x4048a0 - 0x404920
int64_t function_4048a0(int64_t data, uint64_t n) {
    uint64_t result = (int64_t)fwrite_unlocked((int64_t *)data, 1, (int32_t)n, g39); // 0x4048b8
    if (result >= n) {
        // 0x4048c2
        return result;
    }
    // 0x4048c9
    clearerr_unlocked(g39);
    function_409510(4, (int64_t)"standard output");
    error(1, *__errno_location(), dcgettext(NULL, "error writing %s", 5));
    return &g73;
}
// Address range: 0x404920 - 0x404a19
int64_t function_404920(int64_t a1, int32_t a2, int64_t a3, int64_t * a4) {
    // 0x404920
    if (a3 == 0) {
        // 0x4049b9
        return 0;
    }
    int64_t v1 = (int64_t)a4; // 0x404941
    int64_t v2 = a3; // 0x404941
    int64_t result; // 0x404920
    while (true) {
      lab_0x404948:;
        int64_t v3 = function_409780(a2, v1, 0x2000); // 0x404955
        result = 0xffffffff;
        switch (v3) {
            case 0: {
                return result;
            }
            case -1: {
                // 0x4049d8
                function_409510(4, a1);
                error(0, *__errno_location(), dcgettext(NULL, "error reading %s", 5));
                // 0x4049b9
                return 1;
            }
            default: {
                // 0x404965
                *a4 = v3 + v1;
                uint64_t v4 = v3 + v1; // 0x404976
                int64_t v5 = (int64_t)*(char *)&g48 & 0xffffffff; // 0x404983
                int64_t v6 = v1;
                int64_t v7 = v2;
                int64_t v8 = function_40b730(v6, v5, v4 - v6); // 0x404989
                v2 = v7;
                while (v8 != 0) {
                    int64_t v9 = v8 + 1; // 0x404993
                    int64_t v10 = v7 - 1; // 0x404997
                    if (v10 == 0) {
                        // 0x40499d
                        result = 0;
                        if (v4 > v9) {
                            int64_t v11 = v4 - v9; // 0x4049a4
                            result = 0;
                            if (v11 == 0) {
                                return result;
                            } else {
                                // 0x4049a9
                                function_4048a0(v9, v11);
                                result = 0;
                                return result;
                            }
                        } else {
                            return result;
                        }
                    }
                    v6 = v9;
                    v7 = v10;
                    v8 = function_40b730(v6, v5, v4 - v6);
                    v2 = v7;
                }
                goto lab_0x404948;
            }
        }
    }
  lab_0x4049b9:
    // 0x4049b9
    return result;
}
// Address range: 0x404a20 - 0x404b40
int64_t function_404a20(int32_t a1, int64_t a2, int32_t a3, int64_t a4) {
    // 0x404a20
    int64_t v1; // bp-8248, 0x404a20
    int64_t v2 = &v1; // 0x404a54
    int64_t v3 = a4; // 0x404a44
    char v4 = a1; // 0x404a44
    int64_t v5 = 0; // 0x404a44
    int64_t result; // 0x404a20
    int32_t * err_num; // 0x404ad8
    while (true) {
        // 0x404a48
        result = v5;
        int64_t v6 = v3;
        int64_t v7 = function_409780(a3, v2, v6 < 0x2000 ? v6 : 0x2000); // 0x404a60
        int64_t result2 = result; // 0x404a20
        switch (v7) {
            case -1: {
                // 0x404ad8
                err_num = __errno_location();
                if (*err_num == 11) {
                    // 0x404ae5
                    return result;
                }
                // 0x404afa
                function_409510(4, a2);
                error(1, *err_num, dcgettext(NULL, "error reading %s", 5));
                return &g73;
            }
            case 0: {
                // 0x404ae5
                return result2;
            }
        }
        // 0x404a73
        if (v4 != 0) {
            char * v8 = g23 == 0 ? (char *)&g15 : (char *)&g16; // 0x404a9e
            __printf_chk(1, "%s==> %s <==\n", v8, (char *)a2);
            g23 = 0;
        }
        // 0x404aaa
        v5 = v7 + result;
        function_4048a0(v2, v7);
        v3 = v6;
        if (a4 != -1) {
            // 0x404ac0
            v3 = v6 - v7;
            result2 = v5;
            if (a4 == -2 || v3 == 0) {
                // 0x404ae5
                return result2;
            }
        }
        // 0x404acb
        v4 = 0;
    }
    // 0x404ad8
    err_num = __errno_location();
    if (*err_num == 11) {
        // 0x404ae5
        return result;
    }
    // 0x404afa
    function_409510(4, a2);
    error(1, *err_num, dcgettext(NULL, "error reading %s", 5));
    return &g73;
}
// Address range: 0x404b40 - 0x404c20
int64_t function_404b40(int64_t a1, int32_t a2, int64_t a3, int64_t * a4) {
    // 0x404b40
    if (a3 == 0) {
        // 0x404b91
        return 0;
    }
    // 0x404b49
    int64_t v1; // bp-8232, 0x404b40
    int64_t v2 = &v1; // 0x404b5b
    int64_t v3 = a3; // 0x404b62
    uint64_t v4 = function_409780(a2, v2, 0x2000); // 0x404b87
    int64_t result = 0xffffffff; // 0x404b8f
    while (v4 != 0) {
        if (v4 == -1) {
            // 0x404bd0
            function_409510(4, a1);
            error(0, *__errno_location(), dcgettext(NULL, "error reading %s", 5));
            return 1;
        }
        uint64_t v5 = v3;
        *a4 = v4 + (int64_t)a4;
        if (v5 < v4) {
            // 0x404ba8
            function_4048a0(v5 + v2, v4 - v5);
            result = 0;
            return result;
        }
        // 0x404b77
        v3 = v5 - v4;
        result = 0;
        if (v3 == 0) {
            // break -> 0x404b91
            break;
        }
        v4 = function_409780(a2, v2, 0x2000);
        result = 0xffffffff;
    }
  lab_0x404b91:
    // 0x404b91
    return result;
}
// Address range: 0x404c20 - 0x404cc4
int64_t function_404c20(int64_t fd, int32_t offset, int32_t whence, int64_t a4) {
    int32_t result = lseek((int32_t)fd, offset, whence); // 0x404c32
    if (result >= 0) {
        // 0x404c3c
        return result;
    }
    // 0x404c50
    int64_t v1; // bp-72, 0x404c20
    function_407a20((int64_t)offset, &v1);
    int32_t * err_num = __errno_location(); // 0x404c5e
    function_4095e0(0, 3, a4);
    char * format = dcgettext(NULL, whence == 1 ? "%s: cannot seek to relative offset %s" : "%s: cannot seek to offset %s", 5); // 0x404c89
    error(0, *err_num, format);
    exit(1);
    // UNREACHABLE
}
// Address range: 0x404cd0 - 0x404ef1
int64_t function_404cd0(int64_t a1, uint32_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t * a6) {
    int64_t v1 = a1; // bp-8280, 0x404ce1
    if (a3 == 0) {
        // 0x404e42
        return 1;
    }
    int64_t v2 = a2;
    int64_t v3; // bp-8248, 0x404cd0
    int64_t v4 = &v3; // 0x404d0c
    int64_t v5 = a5 - a4; // 0x404d14
    uint64_t v6 = (v5 >> 63) / 0x8000000000000; // 0x404d20
    int64_t v7 = (v6 + v5) % 0x2000 - v6; // 0x404d2d
    int64_t v8 = v7 == 0 ? 0x2000 : v7; // 0x404d35
    int64_t v9 = a5 - v8; // 0x404d3b
    function_404c20(v2, (int32_t)v9, 0, a1);
    int64_t v10 = function_409780(a2, v4, v8); // 0x404d55
    char v11; // 0x404cd0
    int64_t v12; // 0x404cd0
    int64_t v13; // 0x404cd0
    int64_t v14; // 0x404cd0
    int64_t v15; // 0x404cd0
    int64_t v16; // 0x404cd0
    if (v10 == -1) {
        goto lab_0x404eaf;
    } else {
        // 0x404d67
        *a6 = v10 + v9;
        v13 = v9;
        v15 = a3;
        if (v10 != 0) {
            char v17 = *(char *)&g48; // 0x404e58
            char v18 = *(char *)((int64_t)&v1 + 31 + v10); // 0x404e5f
            v11 = v17;
            v12 = v10;
            v14 = v9;
            v16 = a3 - (int64_t)(v18 != v17);
            goto lab_0x404dd3;
        } else {
            goto lab_0x404d7d;
        }
    }
  lab_0x404eaf:
    // 0x404eaf
    function_409510(4, v1);
    error(0, *__errno_location(), dcgettext(NULL, "error reading %s", 5));
    // 0x404e42
    return (int32_t)&g73 ^ (int32_t)&g73;
  lab_0x404d7d:
    // 0x404d7d
    if (v13 == a4) {
        // 0x404e72
        function_404c20(v2, (int32_t)a4, 0, v1);
        *a6 = function_404a20(0, v1, a2, a5) + a4;
        // 0x404e42
        return 1;
    }
    int64_t v19 = v13 - 0x2000; // 0x404d8c
    function_404c20(v2, (int32_t)v19, 0, v1);
    int64_t v20 = function_409780(a2, v4, 0x2000); // 0x404dab
    if (v20 == -1) {
        goto lab_0x404eaf;
    } else {
        // 0x404dbd
        *a6 = v20 + v19;
        if (v20 == 0) {
          lab_0x404e42:
            // 0x404e42
            return 1;
        }
        // 0x404dbd
        v11 = *(char *)&g48;
        v12 = v20;
        v14 = v19;
        v16 = v15;
        goto lab_0x404dd3;
    }
  lab_0x404dd3:;
    int64_t v21 = v14;
    int64_t v22 = v12;
    int64_t v23 = v16;
    int64_t * v24 = memrchr(&v3, (int32_t)v11, (int32_t)v22); // 0x404ded
    v13 = v21;
    v15 = v23;
    while (v24 != NULL) {
        int64_t v25 = (int64_t)v24;
        int64_t v26 = v25 - v4; // 0x404dfe
        if (v23 == 0) {
            int64_t v27 = v22 - 1; // 0x404e06
            if (v27 == v26) {
                goto lab_0x404e1c;
            } else {
                // 0x404e10
                function_4048a0(v25 + 1, v27 - v26);
                goto lab_0x404e1c;
            }
        }
        int64_t v28 = v23 - 1; // 0x404dfa
        v13 = v21;
        v15 = v28;
        int64_t v29 = v26; // 0x404de6
        int64_t v30 = v28; // 0x404de6
        if (v26 == 0) {
            // break -> 0x404d7d
            break;
        }
        v23 = v30;
        v24 = memrchr(&v3, (int32_t)v11, (int32_t)v29);
        v13 = v21;
        v15 = v23;
    }
    goto lab_0x404d7d;
  lab_0x404e1c:;
    int64_t v31 = function_404a20(0, v1, a2, a5 - v22 - v21); // 0x404e30
    *a6 = v31 + (int64_t)a6;
    goto lab_0x404e42;
}
// Address range: 0x404f00 - 0x405090
int64_t function_404f00(int64_t a1, int64_t * a2) {
    int32_t * v1 = (int32_t *)(a1 + 56);
    if (*v1 == -1) {
        // 0x404f83
        int64_t result; // 0x404f00
        return result;
    }
    // 0x404f0a
    int64_t v2; // 0x404f00
    int64_t v3 = function_4047e0(a1, (int64_t)a2, v2); // 0x404f22
    uint32_t v4 = *v1; // 0x404f27
    int64_t v5; // bp-184, 0x404f00
    int32_t v6 = __fxstat(1, v4, (struct stat *)&v5); // 0x404f35
    int32_t * v7 = v1; // 0x404f3e
    int64_t v8 = a1; // 0x404f3e
    if (v6 == 0) {
        int64_t v9 = v4; // 0x404f27
        int64_t * v10 = (int64_t *)(a1 + 8);
        int64_t v11 = v9; // 0x404f51
        if ((*(int32_t *)(a1 + 48) & 0xf000) == 0x8000) {
            int64_t v12 = *v10; // 0x404fa0
            if (v2 < v12) {
                // 0x405040
                function_4095e0(0, 3, v3);
                error(0, (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated", dcgettext(NULL, "%s: file truncated", 5));
                uint32_t v13 = *v1; // 0x405074
                function_404c20((int64_t)v13, (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated", 0, v3);
                *v10 = 0;
                v11 = (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated" ^ (int32_t)"%s: file truncated";
            } else {
                // 0x404faf
                v11 = v9;
                if (v2 == v12) {
                    // 0x404fb1
                    v11 = v9;
                    if (*(int64_t *)(a1 + 16) == v2) {
                        // 0x404fc1
                        v11 = v9;
                        int32_t result2; // 0x404f00
                        if (*(int32_t *)(a1 + 24) == result2) {
                            // 0x404f83
                            return result2;
                        }
                    }
                }
            }
        }
        int32_t v14 = g49 == 0 ? v6 : (int32_t)(v11 != a1);
        int64_t result3 = function_404a20(v14, v3, *v1, -1); // 0x404f75
        *v10 = *v10 + result3;
        if (result3 == 0) {
            // 0x404f83
            return result3;
        }
        // 0x404fd0
        *a2 = a1;
        if (fflush_unlocked(g39) == 0) {
            // 0x404f83
            return 0;
        }
        char * format = dcgettext(NULL, "write error", 5); // 0x404ff0
        v8 = (int64_t)format;
        error(1, *__errno_location(), format);
        v7 = (int32_t *)(v8 + 56);
    }
    // 0x405010
    *(int32_t *)(v8 + 60) = *__errno_location();
    int64_t result4 = function_404820(*v7, v3); // 0x405020
    *v7 = -1;
    return result4;
}
// Address range: 0x405090 - 0x4056d7
int64_t function_405090(int64_t a1, int64_t a2) {
    // 0x405090
    int64_t v1; // bp-152, 0x405090
    if (fstatfs((int32_t)a1, (struct statfs *)&v1) != 0) {
        int32_t * err_num = __errno_location(); // 0x4050a7
        if (*err_num == 38) {
            // 0x4050b9
            return 1;
        }
        // 0x4050c8
        function_409510(4, a2);
        error(0, *err_num, dcgettext(NULL, "cannot determine location of %s. reverting to polling", 5));
        return 1;
    }
    int64_t v2 = v1; // 0x405110
    if (v2 == 0x15013346) {
        // 0x4050b9
        return 0;
    }
    int64_t v3; // 0x405090
    int64_t v4; // 0x405090
    if (v2 <= 0x15013346) {
        // 0x405122
        if (v2 == 0x72b6) {
            // 0x4050b9
            return 0;
        }
        if (v2 > 0x72b6) {
            // 0x405268
            if (v2 == 0x414a53) {
                // 0x4050b9
                return 0;
            }
            if (v2 <= 0x414a53) {
                // 0x40527a
                if (v2 == 0xadff) {
                    // 0x4050b9
                    return 0;
                }
                if (v2 <= 0xadff) {
                    if (v2 > 0x9fa2) {
                        // 0x4050b9
                        return (v4 & -256 | (int64_t)(v2 != 0xadf5)) & 0xffffffff;
                    }
                    // 0x405298
                    v3 = 0;
                    if (v2 <= 0x9f9f) {
                        // 0x4052a4
                        v3 = v4 & -256 | (int64_t)(v2 != 0x9660);
                    }
                    // 0x4050b9
                    return v3 & 0xffffffff;
                }
                // 0x405360
                if (v2 == 0xf15f) {
                    // 0x4050b9
                    return 0;
                }
                if (v2 > 0xf15f) {
                    // 0x4053c0
                    v3 = 0;
                    if (v2 != 0x11954) {
                        // 0x4053cc
                        v3 = v4 & -256 | (int64_t)(v2 != 0x27e0eb);
                    }
                    // 0x4050b9
                    return v3 & 0xffffffff;
                }
                // 0x40536e
                v3 = 0;
                if (v2 != 0xef51) {
                    // 0x40537a
                    v3 = v4 & -256 | (int64_t)(v2 != 0xef53);
                }
                // 0x4050b9
                return v3 & 0xffffffff;
            }
            if (v2 <= 0x12ff7b7) {
                // 0x405398
                if (v2 > 0x12ff7b3 || v2 == 0x1021994) {
                    // 0x4050b9
                    return 0;
                }
                if (v2 <= 0x1021994) {
                    // 0x4050b9
                    return (v4 & -256 | (int64_t)(v2 != 0xc0ffee)) & 0xffffffff;
                }
                // 0x4053e0
                v3 = 0;
                if (v2 != 0x1021997) {
                    // 0x4053ec
                    v3 = v4 & -256 | (int64_t)(v2 != 0x12fd16d);
                }
                // 0x4050b9
                return v3 & 0xffffffff;
            }
            // 0x405400
            if (v2 == 0xbad1dea) {
                // 0x4050b9
                return 0;
            }
            if (v2 > 0xbad1dea) {
                // 0x405520
                v3 = 0;
                if (v2 != 0x11307854) {
                    // 0x40552c
                    v3 = v4 & -256 | (int64_t)(v2 != 0x13661366);
                }
                // 0x4050b9
                return v3 & 0xffffffff;
            }
            // 0x405412
            v3 = 0;
            if (v2 != 0x7655821) {
                // 0x40541e
                v3 = v4 & -256 | (int64_t)(v2 != 0x9041934);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x405134
        if (v2 == 0x3434) {
            // 0x4050b9
            return 0;
        }
        if (v2 <= 0x3434) {
            // 0x405146
            if (v2 == 0x137d) {
                // 0x4050b9
                return 0;
            }
            if (v2 <= 0x137d) {
                // 0x405158
                if (v2 == 391) {
                    // 0x4050b9
                    return 0;
                }
                if (v2 <= 391) {
                    // 0x405166
                    return v4 & 0xffffff00 | (int64_t)(v2 != 47);
                }
                // 0x4051e0
                v3 = 0;
                if (v2 != 1984) {
                    // 0x4051ec
                    v3 = v4 & -256 | (int64_t)(v2 != 0x1373);
                }
                // 0x4050b9
                return v3 & 0xffffffff;
            }
            // 0x405200
            if (v2 == 0x1cd1) {
                // 0x4050b9
                return 0;
            }
            if (v2 > 0x1cd1) {
                // 0x4052b8
                v3 = 0;
                if (v2 != 0x2468) {
                    // 0x4052c4
                    v3 = v4 & -256 | (int64_t)(v2 != 0x2478);
                }
                // 0x4050b9
                return v3 & 0xffffffff;
            }
            // 0x405212
            v3 = 0;
            if (v2 != 0x137f) {
                // 0x40521e
                v3 = v4 & -256 | (int64_t)(v2 != 0x138f);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x405230
        if (v2 == 0x482b) {
            // 0x4050b9
            return 0;
        }
        if (v2 <= 0x482b) {
            // 0x405242
            if (v2 == 0x4004) {
                // 0x4050b9
                return 0;
            }
            if (v2 <= 0x4004) {
                // 0x4050b9
                return (v4 & -256 | (int64_t)(v2 != 0x4000)) & 0xffffffff;
            }
            // 0x4052d8
            v3 = 0;
            if (v2 != 0x4006) {
                // 0x4052e4
                v3 = v4 & -256 | (int64_t)(v2 != 0x4244);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x4052f8
        if (v2 == 0x4d5a) {
            // 0x4050b9
            return 0;
        }
        if (v2 > 0x4d5a) {
            // 0x4054a0
            v3 = 0;
            if (v2 != 0x5df5) {
                // 0x4054ac
                v3 = v4 & -256 | (int64_t)(v2 != 0x7275);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x40530a
        v3 = 0;
        if (v2 != 0x4858) {
            // 0x405316
            v3 = v4 & -256 | (int64_t)(v2 != 0x4d44);
        }
        // 0x4050b9
        return v3 & 0xffffffff;
    }
    // 0x405180
    if (v2 == 0x62646576) {
        // 0x4050b9
        return 0;
    }
    if (v2 <= 0x62646576) {
        // 0x405192
        if (v2 == 0x453dcd28) {
            // 0x4050b9
            return 0;
        }
        if (v2 <= 0x453dcd28) {
            // 0x4051a4
            if (v2 == 0x2bad1dea) {
                // 0x4050b9
                return 0;
            }
            if (v2 <= 0x2bad1dea) {
                // 0x4051b6
                if (v2 == 0x1badface) {
                    // 0x4050b9
                    return 0;
                }
                if (v2 <= 0x1badface) {
                    // 0x4051c8
                    return v4 & 0xffffff00 | (int64_t)(v2 != 0x19800202);
                }
                // 0x405328
                v3 = 0;
                if (v2 != 0x24051905) {
                    // 0x405334
                    v3 = v4 & -256 | (int64_t)(v2 != 0x28cd3d45);
                }
                // 0x4050b9
                return v3 & 0xffffffff;
            }
            // 0x405470
            if (v2 == 0x42465331) {
                // 0x4050b9
                return 0;
            }
            if (v2 > 0x42465331) {
                // 0x4054c0
                v3 = 0;
                if (v2 != 0x42494e4d) {
                    // 0x4054cc
                    v3 = v4 & -256 | (int64_t)(v2 != 0x43415d53);
                }
                // 0x4050b9
                return v3 & 0xffffffff;
            }
            // 0x40547e
            v3 = 0;
            if (v2 != 0x2fc12fc1) {
                // 0x40548a
                v3 = v4 & -256 | (int64_t)(v2 != 0x3153464a);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x405430
        if (v2 == 0x54190100) {
            // 0x4050b9
            return 0;
        }
        if (v2 > 0x54190100) {
            // 0x405560
            if (v2 == 0x58465342) {
                // 0x4050b9
                return 0;
            }
            if (v2 > 0x58465342) {
                // 0x405690
                v3 = 0;
                if (v2 != 0x5a3c69f0) {
                    // 0x405698
                    v3 = v4 & -256 | (int64_t)(v2 != 0x6165676c);
                }
                // 0x4050b9
                return v3 & 0xffffffff;
            }
            // 0x405572
            v3 = 0;
            if (v2 != 0x565a4653) {
                // 0x40557e
                v3 = v4 & -256 | (int64_t)(v2 != 0x58295829);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x405442
        if (v2 == 0x53464846) {
            // 0x4050b9
            return 0;
        }
        if (v2 > 0x53464846) {
            // 0x405540
            v3 = 0;
            if (v2 != 0x5346544e) {
                // 0x40554c
                v3 = v4 & -256 | (int64_t)(v2 != 0x534f434b);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x405454
        v3 = 0;
        if (v2 != 0x52654973) {
            // 0x405460
            v3 = v4 & -256 | (int64_t)(v2 != 0x5346314d);
        }
        // 0x4050b9
        return v3 & 0xffffffff;
    }
    // 0x4054e0
    if (v2 == 0x73727279) {
        // 0x4050b9
        return 0;
    }
    if (v2 <= 0x73727279) {
        // 0x4054f2
        if (v2 == 0x64646178) {
            // 0x4050b9
            return 0;
        }
        if (v2 <= 0x64646178) {
            // 0x405504
            if (v2 == 0x62656572) {
                // 0x4050b9
                return 0;
            }
            if (v2 <= 0x62656572) {
                // 0x4050b9
                return (v4 & -256 | (int64_t)(v2 != 0x62656570)) & 0xffffffff;
            }
            // 0x405590
            v3 = 0;
            if (v2 != 0x63677270) {
                // 0x40559c
                v3 = v4 & -256 | (int64_t)(v2 != 0x64626720);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x4055b0
        if (v2 == 0x6e736673) {
            // 0x4050b9
            return 0;
        }
        if (v2 > 0x6e736673) {
            // 0x405620
            v3 = 0;
            if (v2 != 0x73636673) {
                // 0x40562c
                v3 = v4 & -256 | (int64_t)(v2 != 0x73717368);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x4055be
        v3 = 0;
        if (v2 != 0x67596969) {
            // 0x4055ca
            v3 = v4 & -256 | (int64_t)(v2 != 0x68191122);
        }
        // 0x4050b9
        return v3 & 0xffffffff;
    }
    // 0x4055e0
    if (v2 == 0xc97e8168) {
        // 0x4050b9
        return 0;
    }
    if (v2 > 0xc97e8168) {
        // 0x405660
        if (v2 == 0xf2f52010) {
            // 0x4050b9
            return 0;
        }
        if (v2 > 0xf2f52010) {
            // 0x4056b0
            v3 = 0;
            if (v2 != 0xf97cff8c) {
                // 0x4056ba
                v3 = v4 & -256 | (int64_t)(v2 != 0xf995e849);
            }
            // 0x4050b9
            return v3 & 0xffffffff;
        }
        // 0x40566c
        v3 = 0;
        if (v2 != 0xcafe4a11) {
            // 0x405678
            v3 = v4 & -256 | (int64_t)(v2 != 0xde5e81e4);
        }
        // 0x4050b9
        return v3 & 0xffffffff;
    }
    // 0x4055f0
    if (v2 == 0x9123683e) {
        // 0x4050b9
        return 0;
    }
    if (v2 > 0x9123683e) {
        // 0x405640
        v3 = 0;
        if (v2 != 0x958458f6) {
            // 0x40564e
            v3 = v4 & -256 | (int64_t)(v2 != 0xabba1974);
        }
        // 0x4050b9
        return v3 & 0xffffffff;
    }
    // 0x405602
    v3 = 0;
    if (v2 != 0x74726163) {
        // 0x40560e
        v3 = v4 & -256 | (int64_t)(v2 != 0x858458f6);
    }
    // 0x4050b9
    return v3 & 0xffffffff;
}
// Address range: 0x4056e0 - 0x405d03
int64_t function_4056e0(int64_t a1, int64_t a2, int64_t a3) {
    int32_t * v1 = (int32_t *)(a1 + 60); // 0x405704
    int32_t v2 = *v1; // 0x405704
    bool v3; // 0x4056e0
    int64_t v4 = v3 ? -1 : 1; // 0x40570b
    int64_t v5 = (int64_t)"-"; // 0x40570b
    int64_t v6 = a1; // 0x40570b
    int64_t v7 = 2; // 0x40570b
    unsigned char v8 = *(char *)v6; // 0x40570b
    char v9 = *(char *)v5; // 0x40570b
    v5 += v4;
    v6 += v4;
    char v10 = v9; // 0x40570b
    bool v11 = false; // 0x40570b
    while (v8 == v9) {
        v7--;
        v10 = v8;
        v11 = true;
        if (v7 == 0) {
            // break -> 
            break;
        }
        v8 = *(char *)v6;
        v9 = *(char *)v5;
        v5 += v4;
        v6 += v4;
        v10 = v9;
        v11 = false;
    }
    unsigned char v12 = v10;
    char * v13 = (char *)(a1 + 54); // 0x40570d
    char v14 = *v13; // 0x40570d
    int64_t v15 = (int64_t)!((v8 < v12 | v11)) - (int64_t)(v8 < v12); // 0x405719
    int32_t v16 = v2; // 0x405723
    int64_t v17 = v6; // 0x405723
    int64_t v18 = v5; // 0x405723
    int64_t v19 = 0; // 0x405723
    if ((int32_t)v15 != 0) {
        // 0x405729
        v17 = 2048 * (int64_t)((char)a2 == 0);
        int64_t v20 = function_406780(a1, (int32_t)v17, a3); // 0x40573a
        v16 = *v1;
        v18 = a1;
        v19 = v20 & 0xffffffff;
    }
    int32_t * v21 = (int32_t *)(a1 + 56); // 0x405745
    int32_t v22 = *v21; // 0x405745
    int32_t v23; // 0x4056e0
    int64_t v24; // 0x4056e0
    int64_t v25; // 0x4056e0
    int64_t v26; // 0x4056e0
    int64_t v27; // 0x4056e0
    int64_t v28; // 0x4056e0
    int64_t v29; // 0x4056e0
    int64_t v30; // 0x4056e0
    int64_t v31; // 0x4056e0
    int64_t v32; // 0x4056e0
    int64_t v33; // 0x4056e0
    int64_t v34; // 0x4056e0
    int64_t v35; // bp-200, 0x4056e0
    char v36; // 0x405759
    int32_t v37; // 0x4056e0
    if (v22 == -1 == v16 == 0) {
        // 0x405cbc
        __assert_fail("valid_file_spec (f)", "src/tail.c", 967, "recheck");
        v23 = v2;
        goto lab_0x405cd5;
    } else {
        int64_t v38 = a3 & -256 | (int64_t)(v22 == -1); // 0x405749
        v36 = *(char *)&g54;
        if (v36 != 0) {
            if (v19 == 0xffffffff) {
                // 0x405950
                *v13 = 0;
                if (g44 == 0) {
                    int64_t v39 = &v35; // 0x405bb8
                    int32_t v40 = __lxstat(1, (char *)v18, (struct stat *)&v35); // 0x405bc5
                    v29 = v39;
                    v33 = v18;
                    v27 = 1;
                    if (v40 != 0) {
                        goto lab_0x405787;
                    } else {
                        // 0x405bd2
                        v29 = v39;
                        v33 = v18;
                        v27 = 1;
                        v31 = v39;
                        if ((v37 & 0xf000) != 0xa000) {
                            goto lab_0x405787;
                        } else {
                            goto lab_0x405bf0;
                        }
                    }
                } else {
                    // 0x40595f
                    *v1 = *__errno_location();
                    v30 = v38;
                    v25 = v18;
                    v34 = v17;
                    goto lab_0x405969;
                }
            } else {
                // 0x40580a
                *v13 = 1;
                int64_t v41 = &v35; // 0x40580e
                v24 = v41;
                if (g44 == 0) {
                    int32_t v42 = __lxstat(1, (char *)v18, (struct stat *)&v35); // 0x405a50
                    v24 = v41;
                    if (v42 != 0) {
                        goto lab_0x40581b;
                    } else {
                        // 0x405a62
                        v24 = v41;
                        v31 = v41;
                        if ((v37 & 0xf000) != 0xa000) {
                            goto lab_0x40581b;
                        } else {
                            goto lab_0x405bf0;
                        }
                    }
                } else {
                    goto lab_0x40581b;
                }
            }
        } else {
            // 0x405771
            *v13 = 1;
            v28 = v38;
            v32 = v17;
            v26 = v18;
            if (g44 == 0) {
                int64_t v43 = &v35; // 0x405a05
                int32_t v44 = __lxstat(1, (char *)v18, (struct stat *)&v35); // 0x405a08
                v28 = v43;
                v32 = v18;
                v26 = 1;
                if (v44 != 0) {
                    goto lab_0x40577d;
                } else {
                    // 0x405a15
                    v28 = v43;
                    v32 = v18;
                    v26 = 1;
                    v31 = v43;
                    if ((v37 & 0xf000) != 0xa000) {
                        goto lab_0x40577d;
                    } else {
                        goto lab_0x405bf0;
                    }
                }
            } else {
                goto lab_0x40577d;
            }
        }
    }
  lab_0x405cd5:
    // 0x405cd5
    __assert_fail("f->fd == -1", "src/tail.c", 1044, "recheck");
    int64_t v45 = 1044; // 0x405ce9
    int64_t v46 = v15; // 0x405ce9
    int64_t v47 = (int64_t)"src/tail.c"; // 0x405ce9
    int32_t v48 = v23; // 0x405ce9
    goto lab_0x405cee;
  lab_0x405cee:;
    int64_t v49 = v45; // 0x405cf8
    int64_t v50 = v46; // 0x405cf8
    int64_t v51 = v47; // 0x405cf8
    int64_t v52 = v45; // 0x405cf8
    int64_t v53 = v46; // 0x405cf8
    int64_t v54 = v47; // 0x405cf8
    if (v48 != -1) {
        goto lab_0x405b70;
    } else {
        goto lab_0x4057ae;
    }
  lab_0x40577d:
    // 0x40577d
    v29 = v28;
    v33 = v32;
    v27 = v26;
    if (v19 != 0xffffffff) {
        // 0x405a30
        v24 = &v35;
        goto lab_0x40581b;
    } else {
        goto lab_0x405787;
    }
  lab_0x405b70:
    // 0x405b70
    function_409510(4, function_4047e0(v53, v54, v52));
    char * format = dcgettext(NULL, "%s has been replaced with an untailable file%s", 5); // 0x405b94
    error(0, (int32_t)"%s has been replaced with an untailable file%s" ^ (int32_t)"%s has been replaced with an untailable file%s", format);
    v49 = (int64_t)format;
    v50 = 0;
    v51 = (int32_t)"%s has been replaced with an untailable file%s" ^ (int32_t)"%s has been replaced with an untailable file%s";
    goto lab_0x4057ae;
  lab_0x4057ae:;
    int64_t v55 = function_4047e0(v50, v51, v49); // 0x4057b1
    function_404820((int32_t)v19, v55);
    int64_t v56 = function_4047e0(v19, v55, v49); // 0x4057c4
    int64_t result = function_404820(*v21, v56); // 0x4057cf
    *v21 = -1;
    // 0x4057db
    return result;
  lab_0x40581b:;
    int32_t v57 = v19; // 0x405826
    int32_t v58 = __fxstat(1, v57, (struct stat *)v24); // 0x405826
    v29 = v24;
    v33 = v19;
    v27 = 1;
    int64_t v59; // 0x4056e0
    int64_t v60; // 0x40584a
    if (v58 < 0) {
        goto lab_0x405787;
    } else {
        int64_t v61 = v37; // 0x405833
        v59 = v61;
        if ((v37 & 0xf000) < 0x3000) {
            goto lab_0x40585c;
        } else {
            // 0x40584a
            v60 = v61 & 0xb000;
            v59 = v60;
            if (v60 != 0x8000) {
                // 0x405b10
                *v1 = -1;
                *v13 = 0;
                if (v36 == 0) {
                    goto lab_0x405b48;
                } else {
                    // 0x405b20
                    if (g26 != 1) {
                        goto lab_0x405b48;
                    } else {
                        // 0x405b29
                        *(char *)(a1 + 52) = 0;
                        v52 = v60;
                        v53 = 1;
                        v54 = v19;
                        v45 = v60;
                        v46 = 1;
                        v47 = v19;
                        v48 = v2;
                        if (v14 == 0) {
                            goto lab_0x405cee;
                        } else {
                            goto lab_0x405b70;
                        }
                    }
                }
            } else {
                goto lab_0x40585c;
            }
        }
    }
  lab_0x405787:;
    int32_t * v62 = __errno_location(); // 0x405787
    int32_t v63 = *v62; // 0x405797
    *v1 = v63;
    v30 = v29;
    v25 = v27;
    v34 = v33;
    if (*v13 == 0) {
        goto lab_0x405969;
    } else {
        // 0x4057a5
        v49 = v29;
        v50 = v27;
        v51 = v33;
        if (v63 != v2) {
            int64_t v64 = function_4095e0(0, 3, function_4047e0(v27, v33, v29)); // 0x4059d2
            uint32_t err_num = *v62; // 0x4059d7
            error(0, err_num, "%s", (char *)v64);
            v49 = (int64_t)"%s";
            v50 = 0;
            v51 = err_num;
        }
        goto lab_0x4057ae;
    }
  lab_0x405969:
    // 0x405969
    v49 = v30;
    v50 = v25;
    v51 = v34;
    if (v14 != 0) {
        // 0x405974
        function_409510(4, function_4047e0(v25, v34, v30));
        char * format2 = dcgettext(NULL, "%s has become inaccessible", 5); // 0x405998
        uint32_t err_num2 = *v1; // 0x40599d
        error(0, err_num2, format2);
        v49 = (int64_t)format2;
        v50 = 0;
        v51 = err_num2;
    }
    goto lab_0x4057ae;
  lab_0x405bf0:
    // 0x405bf0
    *v1 = -1;
    *(char *)(a1 + 52) = 1;
    function_409510(4, function_4047e0(1, v18, v31));
    char * format3 = dcgettext(NULL, "%s has been replaced with an untailable symbolic link", 5); // 0x405c1f
    error(0, (int32_t)"%s has been replaced with an untailable symbolic link" ^ (int32_t)"%s has been replaced with an untailable symbolic link", format3);
    v49 = (int64_t)format3;
    v50 = 0;
    v51 = (int32_t)"%s has been replaced with an untailable symbolic link" ^ (int32_t)"%s has been replaced with an untailable symbolic link";
    goto lab_0x4057ae;
  lab_0x40585c:;
    int64_t v65 = function_4047e0(1, v19, v59); // 0x40585f
    char v66 = function_405090(v19, v65); // 0x40586f
    *(char *)(a1 + 53) = v66;
    int64_t v67; // 0x4056e0
    int64_t v68; // 0x4056e0
    int64_t v69; // 0x4056e0
    int64_t v70; // 0x4056e0
    if (v66 != 0 == g44 == 0) {
        // 0x405c40
        *v1 = -1;
        function_409510(4, function_4047e0(v19, v65, v59));
        char * format4 = dcgettext(NULL, "%s has been replaced with an untailable remote file", 5); // 0x405c6b
        error(0, (int32_t)"%s has been replaced with an untailable remote file" ^ (int32_t)"%s has been replaced with an untailable remote file", format4);
        *(int16_t *)(a1 + 52) = 257;
        v49 = (int64_t)format4;
        v50 = 0;
        v51 = (int32_t)"%s has been replaced with an untailable remote file" ^ (int32_t)"%s has been replaced with an untailable remote file";
        goto lab_0x4057ae;
    } else {
        int32_t v71 = v2 & -3; // 0x405883
        *v1 = 0;
        int32_t v72 = *v21; // 0x40588e
        if (v71 == 0) {
            if (v72 == -1) {
                // 0x405c98
                function_409510(4, function_4047e0(v19, v65, v59));
                v70 = (int64_t)"%s has appeared;  following new file";
                goto lab_0x4058c2;
            } else {
                // 0x405a8c
                int64_t v73; // 0x4056e0
                if (*(int64_t *)(a1 + 40) == v73) {
                    // 0x405a97
                    if (*(int64_t *)(a1 + 32) == v35) {
                        // 0x4057db
                        return function_404820(v57, function_4047e0(v19, v65, v59));
                    }
                }
                // 0x405ac0
                function_409510(4, function_4047e0(v19, v65, v59));
                char * format5 = dcgettext(NULL, "%s has been replaced;  following new file", 5); // 0x405ae1
                int64_t v74 = (int64_t)format5; // 0x405ae1
                error(0, (int32_t)"%s has been replaced;  following new file" ^ (int32_t)"%s has been replaced;  following new file", format5);
                int64_t v75 = function_4047e0(0, (int64_t)((int32_t)"%s has been replaced;  following new file" ^ (int32_t)"%s has been replaced;  following new file"), v74); // 0x405afa
                uint32_t v76 = *v21; // 0x405aff
                function_404820(v76, v75);
                v68 = v74;
                v69 = v75;
                v67 = v76;
                goto lab_0x4058da;
            }
        } else {
            // 0x405897
            v23 = v71;
            if (v72 != -1) {
                goto lab_0x405cd5;
            } else {
                // 0x4058a0
                function_409510(4, function_4047e0(v19, v65, v59));
                v70 = (int64_t)"%s has become accessible";
                goto lab_0x4058c2;
            }
        }
    }
  lab_0x405b48:
    // 0x405b48
    *(char *)(a1 + 52) = 1;
    v49 = v60;
    v50 = 1;
    v51 = v19;
    if (v2 == -1 == v14 == 0) {
        goto lab_0x4057ae;
    } else {
        // 0x405b59
        dcgettext(NULL, "; giving up on this name", 5);
        v52 = 5;
        v53 = 0;
        v54 = (int64_t)"; giving up on this name";
        goto lab_0x405b70;
    }
  lab_0x4058c2:;
    char * format6 = dcgettext(NULL, (char *)v70, 5); // 0x4058c4
    error(0, 0, format6);
    v68 = (int64_t)format6;
    v69 = 0;
    v67 = 0;
    goto lab_0x4058da;
  lab_0x4058da:
    // 0x4058da
    *v21 = v57;
    int32_t v77 = (int32_t)v15 == 0 ? -1 : (int32_t)a2 % 256; // 0x4058e9
    *(char *)(a1 + 52) = 0;
    *(int64_t *)(a1 + 8) = 0;
    *(int32_t *)(a1 + 64) = v77;
    *(int64_t *)(a1 + 88) = 0;
    *(int64_t *)(a1 + 32) = v35;
    // 0x4057db
    return function_404c20(v19, 0, 0, function_4047e0(v67, v69, v68));
}
// Address range: 0x405d10 - 0x406165
int64_t function_405d10(int32_t status) {
    // 0x405d10
    if (status != 0) {
        // 0x405d2a
        __fprintf_chk(g41, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x405d4f
        exit(status);
        // UNREACHABLE
    }
    // 0x405d56
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION]... [FILE]...\n", 5));
    __printf_chk(1, dcgettext(NULL, "Print the last %d lines of each FILE to standard output.\nWith more than one FILE, precede each with a header giving the file name.\n", 5));
    fputs_unlocked(dcgettext(NULL, "\nWith no FILE, or when FILE is -, read standard input.\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "  -c, --bytes=[+]NUM       output the last NUM bytes; or use -c +NUM to\n                             output starting with byte NUM of each file\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "  -f, --follow[={name|descriptor}]\n                           output appended data as the file grows;\n                             an absent option argument means 'descriptor'\n  -F                       same as --follow=name --retry\n", 5), g39);
    __printf_chk(1, dcgettext(NULL, "  -n, --lines=[+]NUM       output the last NUM lines, instead of the last %d;\n                             or use -n +NUM to output starting with line NUM\n      --max-unchanged-stats=N\n                           with --follow=name, reopen a FILE which has not\n                             changed size after N (default %d) iterations\n                             to see if it has been unlinked or renamed\n                             (this is the usual case of rotated log files);\n                             with inotify, this option is rarely useful\n", 5));
    fputs_unlocked(dcgettext(NULL, "      --pid=PID            with -f, terminate after process ID, PID dies\n  -q, --quiet, --silent    never output headers giving file names\n      --retry              keep trying to open a file if it is inaccessible\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "  -s, --sleep-interval=N   with -f, sleep for approximately N seconds\n                             (default 1.0) between iterations;\n                             with inotify and --pid=P, check process P at\n                             least once every N seconds\n  -v, --verbose            always output headers giving file names\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "  -z, --zero-terminated    line delimiter is NUL, not newline\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "\nNUM may have a multiplier suffix:\nb 512, kB 1000, K 1024, MB 1000*1000, M 1024*1024,\nGB 1000*1000*1000, G 1024*1024*1024, and so on for T, P, E, Z, Y.\n\n", 5), g39);
    fputs_unlocked(dcgettext(NULL, "With --follow (-f), tail defaults to following the file descriptor, which\nmeans that even if a tail'ed file is renamed, tail will continue to track\nits end.  This default behavior is not desirable when you really want to\ntrack the actual name of the file, not the file descriptor (e.g., log\nrotation).  Use --follow=name in that case.  That causes tail to track the\nnamed file in a way that accommodates renaming, removal and creation.\n", 5), g39);
    int64_t v1 = &g1; // bp-136, 0x405f44
    bool v2; // 0x405d10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x405fc8
    int64_t v6 = *(int64_t *)v5; // 0x405fcc
    int64_t v7 = 5; // 0x405fd2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"tail";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x405fde
        char v11 = *(char *)v9; // 0x405fde
        char v12 = v11; // 0x405fde
        bool v13 = false; // 0x405fde
        while (v10 == v11) {
            // 0x405fd4
            v7--;
            int64_t v14 = v9 + v3; // 0x405fde
            int64_t v15 = v8 + v3; // 0x405fde
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
            // break -> 0x405fea
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x405fea
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4060fc;
        } else {
            // 0x4060e6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40613b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40604c;
            } else {
                goto lab_0x4060fc;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40604c;
        } else {
            // 0x406032
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40613b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40604c;
            } else {
                goto lab_0x40604c;
            }
        }
    }
  lab_0x4060fc:
    // 0x4060fc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40608c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x405d4f
    exit(status);
    // UNREACHABLE
  lab_0x40604c:
    // 0x40604c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40608c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x405d4f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x406170 - 0x40617a
int64_t function_406170(void) {
    // 0x406170
    return function_405d10(1);
}
// Address range: 0x406180 - 0x406296
int64_t function_406180(int64_t a1, int64_t a2, int64_t a3, int64_t n) {
    char * str = (char *)a1; // 0x4061a1
    int32_t len = strlen(str); // 0x4061a1
    if (a2 == 0) {
        // 0x40626d
        return -1;
    }
    int64_t v1 = -1;
    int64_t * str3 = (int64_t *)(v1 * n + a3);
    int32_t v2 = 0;
    int64_t v3 = 0; // 0x406207
    int64_t v4 = a3; // 0x406180
    int64_t v5 = a2; // 0x40620e
    int64_t str4; // 0x406180
    int64_t v6; // 0x406180
    int32_t v7; // 0x406180
    int32_t v8; // 0x406180
    int32_t v9; // 0x406180
    int64_t v10; // 0x406180
    int64_t result; // 0x406180
    int32_t v11; // 0x406203
    char * str2; // 0x406222
    while (true) {
        // 0x406217
        str4 = v4;
        v6 = v3;
        v8 = v2;
        str2 = (char *)v5;
        v7 = v8;
        if (strncmp(str2, str, len) == 0) {
            // 0x40622b
            result = v6;
            if (len == strlen(str2)) {
                // 0x40626d
                return result;
            }
            if (v1 == -1) {
                // break -> 0x40623f
                break;
            }
            // 0x4061d0
            v7 = 1;
            if (a3 != 0) {
                // 0x4061de
                v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                v7 = v11;
            }
        }
        // 0x406207
        v2 = v7;
        v3 = v6 + 1;
        v5 = *(int64_t *)(8 * v3 + a2);
        v4 = str4 + n;
        v10 = v1;
        v9 = v2;
        if (v5 == 0) {
            return (char)v9 == 0 ? v10 : -2;
        }
    }
    int64_t v12 = v6 + 1; // 0x406243
    int64_t v13 = *(int64_t *)(8 * v12 + a2); // 0x40624a
    v10 = v6;
    v9 = v8;
    while (v13 != 0) {
        // 0x406217
        v1 = v6;
        str3 = (int64_t *)(v1 * n + a3);
        v2 = v8;
        v3 = v12;
        v4 = str4 + n;
        v5 = v13;
        while (true) {
            // 0x406217
            str4 = v4;
            v6 = v3;
            v8 = v2;
            str2 = (char *)v5;
            v7 = v8;
            if (strncmp(str2, str, len) == 0) {
                // 0x40622b
                result = v6;
                if (len == strlen(str2)) {
                    // 0x40626d
                    return result;
                }
                if (v1 == -1) {
                    // break -> 0x40623f
                    break;
                }
                // 0x4061d0
                v7 = 1;
                if (a3 != 0) {
                    // 0x4061de
                    v11 = memcmp(str3, (int64_t *)str4, (int32_t)n) != 0 ? 1 : 0x1000000 * v8 >> 24;
                    v7 = v11;
                }
            }
            // 0x406207
            v2 = v7;
            v3 = v6 + 1;
            v5 = *(int64_t *)(8 * v3 + a2);
            v4 = str4 + n;
            v10 = v1;
            v9 = v2;
            if (v5 == 0) {
                return (char)v9 == 0 ? v10 : -2;
            }
        }
        // 0x40623f
        v12 = v6 + 1;
        v13 = *(int64_t *)(8 * v12 + a2);
        v10 = v6;
        v9 = v8;
    }
  lab_0x406258:
    // 0x40626d
    return (char)v9 == 0 ? v10 : -2;
}
// Address range: 0x4062a0 - 0x406311
int64_t function_4062a0(int64_t a1, int64_t a2, int64_t a3) {
    char * format; // 0x4062a0
    if (a3 == -1) {
        // 0x406300
        format = dcgettext(NULL, "invalid argument %s for %s", 5);
    } else {
        // 0x4062b5
        format = dcgettext(NULL, "ambiguous argument %s for %s", 5);
    }
    // 0x4062c4
    function_409740(1, a1);
    function_409430(0, 8, a2);
    error(0, 0, format);
    return &g73;
}
// Address range: 0x406320 - 0x406438
int64_t function_406320(int64_t a1, int64_t a2, int64_t n) {
    char * v1 = dcgettext(NULL, "Valid arguments are:", 5); // 0x40634d
    fputs_unlocked(v1, g41);
    if (v1 != NULL) {
        int64_t v2 = (int64_t)v1;
        int64_t str = a2;
        int64_t v3 = 0;
        int64_t v4; // 0x4063c0
        int64_t v5; // 0x4063c7
        int64_t v6; // 0x4063e7
        while (v3 != 0) {
            // 0x4063ab
            if (memcmp((int64_t *)0, (int64_t *)str, (int32_t)n) != 0) {
                // break -> 0x406370
                break;
            }
            // 0x4063bd
            v4 = v3 + 1;
            v5 = function_409760(v2);
            __fprintf_chk(g41, 1, ", %s", (char *)v5);
            v6 = *(int64_t *)(8 * v4 + a1);
            if (v6 == 0) {
                // break (via goto) -> 0x4063f0
                goto lab_0x4063f0;
            }
            v2 = v6;
            str += n;
            v3 = v4;
        }
        int64_t v7 = v3 + 1; // 0x406373
        int64_t v8 = function_409760(v2); // 0x40637d
        __fprintf_chk(g41, 1, "\n  - %s", (char *)v8);
        int64_t v9 = *(int64_t *)(8 * v7 + a1); // 0x40639d
        while (v9 != 0) {
            int64_t * str2 = (int64_t *)str;
            v2 = v9;
            str += n;
            v3 = v7;
            while (v3 != 0) {
                // 0x4063ab
                if (memcmp(str2, (int64_t *)str, (int32_t)n) != 0) {
                    // break -> 0x406370
                    break;
                }
                // 0x4063bd
                v4 = v3 + 1;
                v5 = function_409760(v2);
                __fprintf_chk(g41, 1, ", %s", (char *)v5);
                v6 = *(int64_t *)(8 * v4 + a1);
                if (v6 == 0) {
                    // break (via goto) -> 0x4063f0
                    goto lab_0x4063f0;
                }
                v2 = v6;
                str += n;
                v3 = v4;
            }
            // 0x406370
            v7 = v3 + 1;
            v8 = function_409760(v2);
            __fprintf_chk(g41, 1, "\n  - %s", (char *)v8);
            v9 = *(int64_t *)(8 * v7 + a1);
        }
    }
  lab_0x4063f0:;
    int64_t v10 = (int64_t)g41; // 0x4063f0
    int64_t * v11 = (int64_t *)(v10 + 40); // 0x4063f7
    uint64_t result = *v11; // 0x4063f7
    if (result >= *(int64_t *)(v10 + 48)) {
        // 0x406420
        return __overflow(g41, 10);
    }
    // 0x406401
    *v11 = result + 1;
    *(char *)result = 10;
    return result;
}
// Address range: 0x406440 - 0x4064b0
int64_t function_406440(char * a1, int64_t a2, char ** a3, int64_t * a4, int64_t a5, int64_t a6) {
    int64_t v1 = (int64_t)a4;
    int64_t v2 = (int64_t)a3;
    int64_t v3 = function_406180(a2, v2, v1, a5); // 0x40646c
    int64_t result = v3; // 0x406474
    if (v3 < 0) {
        // 0x406488
        function_4062a0((int64_t)a1, a2, v3);
        function_406320(v2, v1, a5);
        result = -1;
    }
    // 0x406476
    return result;
}
// Address range: 0x4064b0 - 0x4064fd
int64_t function_4064b0(int64_t a1, int64_t result, int64_t str2, int64_t a4) {
    // 0x4064b0
    if (result == 0) {
        // 0x4064f1
        return 0;
    }
    int64_t * str = (int64_t *)a1; // 0x4064e8
    int32_t n = a4; // 0x4064e8
    int64_t v1 = result; // 0x4064ef
    if (memcmp(str, (int64_t *)str2, n) == 0) {
        // 0x4064f1
        return result;
    }
    int64_t str3 = str2; // 0x4064ef
    v1 += 8;
    int64_t v2 = *(int64_t *)v1; // 0x4064d0
    int64_t result2 = 0; // 0x4064dd
    while (v2 != 0) {
        // 0x4064df
        str3 += a4;
        result2 = v2;
        if (memcmp(str, (int64_t *)str3, n) == 0) {
            // break -> 0x4064f1
            break;
        }
        v1 += 8;
        v2 = *(int64_t *)v1;
        result2 = 0;
    }
    // 0x4064f1
    return result2;
}
// Address range: 0x406500 - 0x40656a
int64_t function_406500(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406500
    int128_t v1; // 0x406500
    int128_t v2 = v1;
    struct __locale_struct * v3 = g55;
    if (v3 != NULL) {
        // 0x406524
        return strtod_l((char *)a1, (char **)a2, v3);
    }
    struct __locale_struct * v4 = newlocale(0x1fbf, "C", NULL); // 0x40655c
    g55 = v4;
    if (v4 != NULL) {
        // 0x406524
        return strtod_l((char *)a1, (char **)a2, v4);
    }
    if (a2 != 0) {
        // 0x40653d
        *(int64_t *)a2 = a1;
    }
    // 0x406540
    __asm_pxor(v2, v2);
    return (int64_t)v4;
}
// Address range: 0x406570 - 0x406578
int64_t function_406570(int64_t a1) {
    // 0x406570
    g57 = a1;
    int64_t result; // 0x406570
    return result;
}
// Address range: 0x406580 - 0x406588
int64_t function_406580(int64_t a1) {
    // 0x406580
    g56 = a1;
    int64_t result; // 0x406580
    return result;
}
// Address range: 0x406590 - 0x40662e
int64_t function_406590(void) {
    // 0x406590
    int32_t * err_num; // 0x4065a6
    if ((int32_t)function_40b8f0((int64_t)g39) == 0) {
        goto lab_0x4065bc;
    } else {
        // 0x4065a6
        err_num = __errno_location();
        if (g56 == 0) {
            goto lab_0x4065d3;
        } else {
            // 0x4065b7
            if (*err_num != 32) {
                goto lab_0x4065d3;
            } else {
                goto lab_0x4065bc;
            }
        }
    }
  lab_0x4065bc:;
    int64_t result = function_40b8f0((int64_t)g41); // 0x4065c3
    if ((int32_t)result == 0) {
        // 0x4065cc
        return result;
    }
    // 0x40660e
    _exit(g29);
    // UNREACHABLE
  lab_0x4065d3:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x4065df
    if (g57 == 0) {
        // 0x406619
        error(0, *err_num, "%s", v1);
    } else {
        // 0x4065f3
        error(0, *err_num, "%s: %s", (char *)function_4095b0((int64_t)g57), v1);
    }
    // 0x40660e
    _exit(g29);
    // UNREACHABLE
}
// Address range: 0x406630 - 0x40668d
int64_t function_406630(int64_t a1) {
    // 0x406630
    int64_t v1; // 0x406630
    uint64_t v2 = (int64_t)((char)v1 == 47); // 0x40663e
    int64_t v3 = function_4066f0(a1, v1); // 0x406642
    int64_t result = v3 - a1; // 0x40664a
    if (result <= v2 || *(char *)(v3 - 1) != 47) {
        // 0x406673
        return result;
    }
    int64_t result2 = result;
    result2--;
    while (result2 != v2) {
        // 0x406660
        if (*(char *)(a1 - 1 + result2) != 47) {
            // break -> 0x406673
            break;
        }
        result2--;
    }
    // 0x406673
    return result2;
}
// Address range: 0x406690 - 0x4066ea
int64_t function_406690(int64_t a1) {
    int64_t v1 = function_406630(a1); // 0x406699
    int64_t * mem = malloc((int32_t)(v1 + 1 + (int64_t)(v1 == 0))); // 0x4066af
    if (mem == NULL) {
        // 0x4066d6
        return (int64_t)mem;
    }
    int64_t * dest_mem = memcpy(mem, (int64_t *)a1, (int32_t)v1); // 0x4066c5
    int64_t v2 = v1; // 0x4066d0
    if (v1 == 0) {
        // 0x4066e0
        *(char *)dest_mem = 46;
        v2 = 1;
    }
    int64_t result = (int64_t)dest_mem; // 0x4066c5
    *(char *)(v2 + result) = 0;
    // 0x4066d6
    return result;
}
// Address range: 0x4066f0 - 0x40674b
int64_t function_4066f0(int64_t a1, int64_t a2) {
    // 0x4066f0
    int64_t v1; // 0x4066f0
    char v2 = v1;
    int64_t v3 = a1; // 0x4066f9
    int64_t v4 = a1; // 0x4066f9
    char v5 = v2; // 0x4066f9
    if (v2 == 47) {
        v3++;
        char v6 = *(char *)v3; // 0x406704
        v4 = v3;
        v5 = v6;
        while (v6 == 47) {
            // 0x406700
            v3++;
            v6 = *(char *)v3;
            v4 = v3;
            v5 = v6;
        }
    }
    int64_t result = v4; // 0x40670e
    if (v5 == 0) {
      lab_0x40674a:
        // 0x40674a
        return result;
    }
    int64_t v7 = v4; // 0x406738
    int64_t v8 = 0; // 0x406738
    int64_t v9; // 0x4066f0
    int64_t v10; // 0x40673a
    char v11; // 0x40673e
    if (v5 == 47) {
        v10 = v4 + 1;
        v11 = *(char *)v10;
        result = v4;
        if (v11 == 0) {
            return result;
        }
        // 0x406735
        v7 = v10;
        v8 = 1;
        v9 = v10;
        while (v11 == 47) {
            // 0x40673a
            v10 = v9 + 1;
            v11 = *(char *)v10;
            result = v4;
            if (v11 == 0) {
                return result;
            }
            // 0x406735
            v7 = v10;
            v8 = 1;
            v9 = v10;
        }
    }
    int64_t v12 = v8;
    int64_t result2 = (char)v12 == 0 ? v4 : v7;
    int64_t v13 = v7 + 1; // 0x40672a
    char v14 = *(char *)v13; // 0x40672e
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
            // 0x406735
            v7 = v10;
            v8 = 1;
            v9 = v10;
            while (v11 == 47) {
                // 0x40673a
                v10 = v9 + 1;
                v11 = *(char *)v10;
                result = v15;
                if (v11 == 0) {
                    return result;
                }
                // 0x406735
                v7 = v10;
                v8 = 1;
                v9 = v10;
            }
        }
        // 0x406720
        v12 = v8;
        result2 = (char)v12 == 0 ? v15 : v7;
        v13 = v7 + 1;
        v14 = *(char *)v13;
    }
    // 0x40674a
    return result2;
}
// Address range: 0x406750 - 0x40677b
int64_t function_406750(int64_t str) {
    int32_t len = strlen((char *)str); // 0x406754
    int64_t result = len; // 0x406754
    if (len < 2) {
        // 0x40676a
        return result;
    }
    int64_t v1 = result - 1;
    int64_t result2 = result; // 0x406768
    while (*(char *)(v1 + str) == 47) {
        // 0x406770
        result2 = v1;
        if (v1 == 1) {
            // break -> 0x40676a
            break;
        }
        int64_t v2 = v1;
        v1 = v2 - 1;
        result2 = v2;
    }
    // 0x40676a
    return result2;
}
// Address range: 0x406780 - 0x4067ca
int64_t function_406780(int64_t path, int32_t oflag, int64_t a3) {
    uint32_t fd = open((char *)path, oflag); // 0x406793
    return function_4097e0((int64_t)fd);
}
// Address range: 0x4067d0 - 0x406863
int64_t function_4067d0(uint64_t a1) {
    int64_t v1 = a1 >= 10 ? a1 | 1 : 11; // 0x4067e7
    if (v1 == -1) {
        // 0x40685f
        return -1;
    }
    int64_t v2 = v1; // 0x4067ef
    int64_t v3; // 0x4067d0
    while (true) {
      lab_0x4067f8:
        // 0x4067f8
        v3 = v2;
        if (v3 < 10) {
            goto lab_0x406850;
        } else {
            goto lab_0x406855;
        }
    }
  lab_0x40685f_2:;
    // 0x40685f
    int64_t result; // 0x4067d0
    return result;
  lab_0x406855:;
    int64_t v4 = v3 + 2; // 0x406855
    v2 = v4;
    result = v4;
    if (v3 == -3) {
        // break -> 0x40685f
        goto lab_0x40685f_2;
    }
    goto lab_0x4067f8;
  lab_0x406850:
    // 0x406850
    result = v3;
    goto lab_0x406855;
}
// Address range: 0x406870 - 0x406880
int64_t function_406870(uint64_t a1, uint64_t a2, int64_t a3) {
    // 0x406870
    return (a1 / 8 | 0x2000000000000000 * a1) % a2;
}
// Address range: 0x406880 - 0x406887
int64_t function_406880(int64_t a1, int64_t a2) {
    // 0x406880
    int64_t v1; // 0x406880
    return v1 & -256 | (int64_t)(a1 == a2);
}
// Address range: 0x406890 - 0x4068b1
int64_t function_406890(int64_t a1, int64_t a2) {
    // 0x406890
    int64_t v1; // 0x406890
    uint64_t v2 = v1;
    if (*(int64_t *)(a1 + 16) > v2) {
        // 0x4068a8
        return 16 * v2 + a2;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4068c0 - 0x4069d9
int64_t function_4068c0(int64_t a1, int64_t a2, int64_t * a3, int32_t a4) {
    int64_t v1 = function_406890(a1, a2); // 0x4068d4
    *a3 = v1;
    int64_t * v2 = (int64_t *)v1; // 0x4068dc
    int64_t result2 = *v2; // 0x4068dc
    if (result2 == 0) {
        // 0x40696e
        return 0;
    }
    if (result2 != a2) {
        if ((char)v1 == 0) {
            int64_t v3 = *(int64_t *)(v1 + 8); // 0x406904
            if (v3 == 0) {
                // 0x40696e
                return 0;
            }
            int64_t v4 = *(int64_t *)v3; // 0x406911
            int64_t v5 = v3; // 0x406917
            int64_t v6 = v1; // 0x406917
            int64_t result = v4; // 0x406917
            if (v4 != a2 != ((char)v3 == 0)) {
              lab_0x40694c_2:
                // 0x40694c
                if ((char)a4 != 0) {
                    int64_t * v7 = (int64_t *)(v5 + 8); // 0x406951
                    *(int64_t *)(v6 + 8) = *v7;
                    *(int64_t *)v5 = 0;
                    int64_t * v8 = (int64_t *)(a1 + 72); // 0x406960
                    *v7 = *v8;
                    *v8 = v5;
                }
                // 0x40696e
                return result;
            }
            int64_t v9 = v3;
            int64_t v10 = *(int64_t *)(v9 + 8); // 0x406924
            while (v10 != 0) {
                int64_t v11 = *(int64_t *)v10; // 0x406931
                v5 = v10;
                v6 = v9;
                result = a2;
                if (v11 == a2) {
                    goto lab_0x40694c_2;
                }
                // 0x406939
                v5 = v10;
                v6 = v9;
                result = v11;
                if ((char)v10 != 0) {
                    goto lab_0x40694c_2;
                }
                v9 = v10;
                v10 = *(int64_t *)(v9 + 8);
            }
            // 0x40696e
            return 0;
        }
    }
    // 0x406983
    if ((char)a4 == 0) {
        // 0x40696e
        return result2;
    }
    int64_t v12 = *(int64_t *)(v1 + 8); // 0x406988
    if (v12 == 0) {
        // 0x4069d0
        *v2 = 0;
        // 0x40696e
        return result2;
    }
    // 0x406991
    __asm_movups(*(int128_t *)v1, __asm_movdqu(*(int128_t *)v12));
    *(int64_t *)v12 = 0;
    int64_t * v13 = (int64_t *)(a1 + 72); // 0x40699f
    *(int64_t *)(v12 + 8) = *v13;
    *v13 = v12;
    return result2;
}
// Address range: 0x4069e0 - 0x406a5e
int64_t function_4069e0(uint64_t a1) {
    if (a1 == (int64_t)&g8) {
        // 0x406a5d
        return 1;
    }
    int128_t v1 = __asm_movss(*(int32_t *)(a1 + 8)); // 0x4069eb
    __asm_comiss(v1, 0x3dcccccd);
    if (a1 <= (int64_t)&g8) {
        // 0x406a4a
        *(int64_t *)a1 = (int64_t)&g8;
        return 0;
    }
    // 0x4069f9
    __asm_comiss_2(__asm_movss(0x3f666666), v1);
    __asm_comiss(__asm_movss(*(int32_t *)(a1 + 12)), 0x3f8ccccd);
    int128_t v2 = __asm_movss((int32_t)a1); // 0x406a14
    __asm_comiss(v2, 0);
    int128_t v3 = __asm_addss_3(v2, 0x3dcccccd); // 0x406a21
    int128_t v4 = __asm_movss(*(int32_t *)(a1 + 4)); // 0x406a29
    __asm_comiss_2(v4, v3);
    __asm_comiss_2(__asm_movss(0x3f800000), v4);
    __asm_comiss_2(v1, v3);
    // 0x406a5d
    return 1;
}
// Address range: 0x406a60 - 0x406baa
int64_t function_406a60(int64_t * a1, uint64_t a2, int32_t a3) {
    int64_t * v1 = (int64_t *)(a2 + 8); // 0x406a7a
    uint64_t v2 = *v1; // 0x406a7a
    if (v2 <= a2) {
        // 0x406b64
        return 1;
    }
    int64_t v3 = (int64_t)a1;
    int64_t * v4 = (int64_t *)(v3 + 24);
    int64_t * v5 = (int64_t *)(v3 + 72);
    int64_t * v6 = (int64_t *)(a2 + 24);
    int64_t v7 = v2; // 0x406a60
    int64_t v8 = a2; // 0x406a60
    int64_t v9; // 0x406a60
    int64_t result; // 0x406a60
    int64_t v10; // 0x406a60
    while (true) {
      lab_0x406a96_2:
        // 0x406a96
        v10 = v8;
        int64_t * v11 = (int64_t *)v10; // 0x406a96
        int64_t v12 = *v11; // 0x406a96
        v9 = v7;
        if (v12 == 0) {
            goto lab_0x406a88;
        } else {
            int64_t * v13 = (int64_t *)(v10 + 8); // 0x406a9f
            int64_t v14 = *v13; // 0x406a9f
            int64_t v15 = v14; // 0x406aa7
            int64_t v16 = v12; // 0x406aa7
            if (v14 != 0) {
                while (true) {
                    int64_t v17 = v15;
                    int64_t * v18 = (int64_t *)v17; // 0x406ac4
                    int64_t v19 = *v18; // 0x406ac4
                    int64_t v20 = function_406890(v3, v19); // 0x406acd
                    int64_t * v21 = (int64_t *)(v17 + 8); // 0x406ad2
                    int64_t v22 = *v21; // 0x406ad2
                    int64_t * v23 = (int64_t *)v20; // 0x406ad6
                    if (*v23 != 0) {
                        int64_t * v24 = (int64_t *)(v20 + 8); // 0x406ab0
                        *v21 = *v24;
                        *v24 = v17;
                        if (v22 == 0) {
                            // break -> 0x406aff
                            break;
                        }
                    } else {
                        // 0x406adc
                        *v23 = v19;
                        *v4 = *v4 + 1;
                        *v18 = 0;
                        *v21 = *v5;
                        *v5 = v17;
                        if (v22 == 0) {
                            // break -> 0x406aff
                            break;
                        }
                    }
                    // 0x406ac4
                    v15 = v22;
                }
                // 0x406aff
                v16 = *v11;
            }
            int64_t v25 = v16;
            *v13 = 0;
            if ((char)a3 != 0) {
                // 0x406b03
                v9 = *v1;
                goto lab_0x406a88;
            } else {
                int64_t v26 = function_406890(v3, v25); // 0x406b1b
                int64_t * v27 = (int64_t *)v26; // 0x406b20
                if (*v27 == 0) {
                    // 0x406b80
                    *v27 = v25;
                    *v4 = *v4 + 1;
                } else {
                    int64_t v28 = *v5; // 0x406b29
                    int64_t * v29; // 0x406a60
                    int64_t v30; // 0x406a60
                    if (v28 == 0) {
                        int64_t * mem = malloc(16); // 0x406b8f
                        result = 0;
                        if (mem == NULL) {
                            // break -> 0x406b64
                            break;
                        }
                        int64_t v31 = (int64_t)mem; // 0x406b8f
                        v29 = (int64_t *)(v31 + 8);
                        v30 = v31;
                    } else {
                        int64_t * v32 = (int64_t *)(v28 + 8);
                        *v5 = *v32;
                        v29 = v32;
                        v30 = v28;
                    }
                    int64_t * v33 = (int64_t *)(v26 + 8); // 0x406b3a
                    *(int64_t *)v30 = v25;
                    *v29 = *v33;
                    *v33 = v30;
                }
                // 0x406b49
                *v11 = 0;
                int64_t v34 = v10 + 16; // 0x406b51
                *v6 = *v6 - 1;
                uint64_t v35 = *v1; // 0x406b5a
                v7 = v35;
                v8 = v34;
                result = 1;
                if (v35 <= v34) {
                    // break -> 0x406b64
                    break;
                }
                goto lab_0x406a96_2;
            }
        }
    }
    // 0x406b64
    return result;
  lab_0x406a88:;
    int64_t v36 = v10 + 16; // 0x406a88
    v7 = v9;
    v8 = v36;
    result = 1;
    if (v9 <= v36) {
        return result;
    }
    goto lab_0x406a96_2;
    // 0x406a96
    goto lab_0x406a96_2;
}
// Address range: 0x406bb0 - 0x406bb5
int64_t function_406bb0(int64_t a1) {
    // 0x406bb0
    return *(int64_t *)(a1 + 16);
}
// Address range: 0x406bc0 - 0x406bc5
int64_t function_406bc0(int64_t a1) {
    // 0x406bc0
    return *(int64_t *)(a1 + 24);
}
// Address range: 0x406bd0 - 0x406bd5
int64_t function_406bd0(char a1) {
    // 0x406bd0
    return *(int64_t *)((int64_t)a1 + 32);
}
// Address range: 0x406be0 - 0x406c2f
int64_t function_406be0(uint64_t a1) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x406be3
    int64_t result = 0; // 0x406bec
    if (v1 <= a1) {
      lab_0x406c2d:
        // 0x406c2d
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = a1;
    int64_t v4; // 0x406bf0
    while (*(int64_t *)v3 == 0) {
        // 0x406bf0
        v4 = v3 + 16;
        result = v2;
        if (v4 >= v1) {
            return result;
        }
        v3 = v4;
    }
    int64_t v5 = *(int64_t *)(v3 + 8); // 0x406bff
    int64_t v6 = v5; // 0x406c0b
    int64_t v7 = 1; // 0x406c0b
    int64_t v8; // 0x406be0
    int64_t v9; // 0x406c10
    int64_t v10; // 0x406c14
    if (v5 != 0) {
        v9 = *(int64_t *)(v6 + 8);
        v10 = 2;
        v8 = v10;
        v6 = v9;
        v7 = v10;
        while (v9 != 0) {
            // 0x406c10
            v9 = *(int64_t *)(v6 + 8);
            v10 = v8 + 1;
            v8 = v10;
            v6 = v9;
            v7 = v10;
        }
    }
    uint64_t v11 = v7;
    int64_t result2 = v2 < v11 ? v11 : v2; // 0x406c20
    int64_t v12 = v3 + 16; // 0x406c24
    while (v12 < v1) {
        // 0x406bf9
        v2 = result2;
        v3 = v12;
        while (*(int64_t *)v3 == 0) {
            // 0x406bf0
            v4 = v3 + 16;
            result = v2;
            if (v4 >= v1) {
                return result;
            }
            v3 = v4;
        }
        // 0x406bff
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
                // 0x406c10
                v9 = *(int64_t *)(v6 + 8);
                v10 = v8 + 1;
                v8 = v10;
                v6 = v9;
                v7 = v10;
            }
        }
        // 0x406c1d
        v11 = v7;
        result2 = v2 < v11 ? v11 : v2;
        v12 = v3 + 16;
    }
    // 0x406c2d
    return result2;
}
// Address range: 0x406c30 - 0x406c97
int64_t function_406c30(uint64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x406c33
    int64_t v2 = a1; // 0x406c3f
    int64_t v3 = 0; // 0x406c3f
    int64_t v4 = 0; // 0x406c3f
    int64_t v5 = 0; // 0x406c3f
    int64_t v6 = 0; // 0x406c3f
    int64_t v7; // 0x406c30
    int64_t v8; // 0x406c30
    int64_t v9; // 0x406c30
    if (v1 > a1) {
        while (true) {
          lab_0x406c51_2:;
            int64_t v10 = v4;
            int64_t v11 = v3;
            v8 = v2;
            v9 = v11;
            v7 = v10;
            if (*(int64_t *)v8 == 0) {
                goto lab_0x406c48;
            } else {
                int64_t v12 = *(int64_t *)(v8 + 8); // 0x406c57
                int64_t v13 = v10 + 1; // 0x406c5b
                int64_t v14 = v11 + 1; // 0x406c5f
                v9 = v14;
                v7 = v13;
                int64_t v15 = v12; // 0x406c66
                int64_t v16 = v14; // 0x406c66
                if (v12 == 0) {
                    goto lab_0x406c48;
                } else {
                    int64_t v17 = *(int64_t *)(v15 + 8); // 0x406c70
                    int64_t v18 = v16 + 1; // 0x406c74
                    v15 = v17;
                    v16 = v18;
                    while (v17 != 0) {
                        // 0x406c70
                        v17 = *(int64_t *)(v15 + 8);
                        v18 = v16 + 1;
                        v15 = v17;
                        v16 = v18;
                    }
                    int64_t v19 = v8 + 16; // 0x406c7d
                    v2 = v19;
                    v3 = v18;
                    v4 = v13;
                    v5 = v18;
                    v6 = v13;
                    if (v19 >= v1) {
                        // break -> 0x406c86
                        break;
                    }
                    goto lab_0x406c51_2;
                }
            }
        }
    }
  lab_0x406c86:
    // 0x406c86
    if (*(int64_t *)(a1 + 24) == v6) {
        // 0x406c8f
        return *(int64_t *)(a1 + 32) == v5;
    }
    // 0x406c8e
    return 0;
  lab_0x406c48:;
    int64_t v20 = v8 + 16; // 0x406c48
    v2 = v20;
    v3 = v9;
    v4 = v7;
    v5 = v9;
    v6 = v7;
    if (v20 >= v1) {
        // break -> 0x406c86
        goto lab_0x406c86;
    }
    goto lab_0x406c51_2;
    // 0x406c51
    goto lab_0x406c51_2;
}
// Address range: 0x406ca0 - 0x406de8
int64_t function_406ca0(uint64_t a1, int64_t a2) {
    // 0x406ca0
    int128_t v1; // 0x406ca0
    int128_t v2 = v1;
    int128_t v3 = v1;
    uint64_t v4 = *(int64_t *)(a1 + 16); // 0x406cb3
    uint64_t v5 = *(int64_t *)(a1 + 24); // 0x406cb7
    uint64_t v6 = *(int64_t *)(a1 + 8); // 0x406cbe
    if (v6 > a1) {
        while (true) {
            int64_t v7 = a1; // 0x406cd0
            while (*(int64_t *)v7 == 0) {
                // 0x406cd0
                v7 += 16;
                if (v7 >= v6) {
                    // break (via goto) -> 0x406d0d
                    goto lab_0x406d0d;
                }
            }
        }
    }
  lab_0x406d0d:;
    struct _IO_FILE * v8 = (struct _IO_FILE *)a2; // 0x406d1c
    __fprintf_chk(v8, 1, "# entries:         %lu\n", (int32_t)*(int64_t *)(a1 + 32));
    __fprintf_chk(v8, 1, "# buckets:         %lu\n", (int32_t)v4);
    __asm_pxor(v3, v3);
    int128_t v9; // 0x406ca0
    int128_t v10; // 0x406ca0
    if (v5 < 0) {
        int128_t v11 = __asm_cvtsi2sd(v5 / 2 | v5 % 2); // 0x406db3
        int128_t v12 = __asm_mulsd_6(__asm_addsd(v11, v11), 0x4059000000000000); // 0x406dbc
        v9 = v12;
        v10 = v12;
        if (v4 >= 0) {
            goto lab_0x406d53;
        } else {
            goto lab_0x406dc9;
        }
    } else {
        int128_t v13 = __asm_mulsd_6(__asm_cvtsi2sd(v5), 0x4059000000000000); // 0x406d46
        v9 = v13;
        v10 = v13;
        if (v4 < 0) {
            goto lab_0x406dc9;
        } else {
            goto lab_0x406d53;
        }
    }
  lab_0x406d53:
    // 0x406d53
    __asm_pxor(v2, v2);
    int128_t v14 = v9; // 0x406d57
    int128_t v15 = __asm_cvtsi2sd(v4); // 0x406d57
    goto lab_0x406d5c;
  lab_0x406dc9:
    // 0x406dc9
    __asm_pxor(v2, v2);
    int128_t v16 = __asm_cvtsi2sd(v4 / 2 | v4 % 2); // 0x406dda
    v14 = v10;
    v15 = __asm_addsd(v16, v16);
    goto lab_0x406d5c;
  lab_0x406d5c:
    // 0x406d5c
    __fprintf_chk(v8, 1, "# buckets used:    %lu (%.2f%%)\n", (int32_t)v5, (float64_t)(int64_t)__asm_divsd(v14, v15));
    return __fprintf_chk(v8, 1, "max bucket length: %lu\n", (int32_t)0);
}
// Address range: 0x406df0 - 0x406e43
int64_t function_406df0(char a1, int64_t result) {
    int64_t v1 = function_406890((int64_t)a1, result); // 0x406dfa
    int64_t v2 = *(int64_t *)v1; // 0x406dff
    if (v2 == 0) {
        // 0x406e2d
        return 0;
    }
    // 0x406e13
    if (v2 == result) {
        // 0x406e2d
        return result;
    }
    int64_t v3 = v1; // 0x406e24
    int64_t result2 = v2; // 0x406e22
    while ((char)v1 == 0) {
        // 0x406e24
        v3 += 8;
        result2 = 0;
        if (v3 == 0) {
            // break -> 0x406e2d
            break;
        }
        // 0x406e10
        result2 = result;
        if (*(int64_t *)v3 == result) {
            // break -> 0x406e2d
            break;
        }
        result2 = v2;
    }
    // 0x406e2d
    return result2;
}
// Address range: 0x406e50 - 0x406e98
int64_t function_406e50(uint64_t a1) {
    int64_t result = 0; // 0x406e55
    if (*(int64_t *)(a1 + 32) == 0) {
        // 0x406e67
        return result;
    }
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x406e5e
    if (v1 <= a1) {
        // 0x406e67
        return result;
    }
    int64_t v2 = a1; // 0x406e65
    int64_t v3 = *(int64_t *)v2; // 0x406e79
    result = v3;
    while (v3 == 0) {
        // 0x406e70
        v2 += 16;
        result = 0;
        if (v2 >= v1) {
            // break -> 0x406e67
            break;
        }
        v3 = *(int64_t *)v2;
        result = v3;
    }
    // 0x406e67
    return result;
}
// Address range: 0x406ea0 - 0x406f0a
int64_t function_406ea0(int64_t a1, int64_t a2) {
    int64_t v1 = function_406890(a1, a2); // 0x406eac
    int64_t v2 = v1;
    int64_t v3 = *(int64_t *)(v2 + 8); // 0x406ec8
    while (*(int64_t *)v2 != a2) {
        // 0x406ec0
        if (v3 == 0) {
            goto lab_0x406ed6;
        }
        v2 = v3;
        v3 = *(int64_t *)(v2 + 8);
    }
    if (v3 != 0) {
        // 0x406f00
        return *(int64_t *)v3;
    }
  lab_0x406ed6:;
    int64_t v4 = v1 + 16; // 0x406ee8
    int64_t result = 0; // 0x406eef
    while (*(int64_t *)(a1 + 8) > v4) {
        int64_t v5 = *(int64_t *)v4; // 0x406ee0
        result = v5;
        if (v5 != 0) {
            // break -> 0x406ef3
            break;
        }
        v4 += 16;
        result = 0;
    }
    // 0x406ef3
    return result;
}
// Address range: 0x406f10 - 0x406f74
int64_t function_406f10(uint64_t a1, int64_t a2, uint64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x406f16
    int64_t result = 0; // 0x406f1a
    if (*v1 <= a1) {
      lab_0x406f31:
        // 0x406f31
        return result;
    }
    int64_t v2 = 0;
    int64_t v3 = *(int64_t *)a1; // 0x406f1f
    int64_t v4 = v2; // 0x406f25
    int64_t v5; // 0x406f10
    int64_t v6; // 0x406f10
    int64_t v7; // 0x406f58
    int64_t v8; // 0x406f61
    int64_t v9; // 0x406f41
    int64_t v10; // 0x406f45
    if (v3 != 0) {
        // 0x406f38
        if (v2 >= a3) {
            // break -> 0x406f31
            break;
        }
        // 0x406f3d
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
            // 0x406f55
            v7 = v6 + 1;
            *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
            v8 = *(int64_t *)(v5 + 8);
            v4 = v7;
            v6 = v7;
            v5 = v8;
            while (v8 != 0) {
                // 0x406f50
                result = a3;
                if (v6 == a3) {
                    return result;
                }
                // 0x406f55
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
    int64_t v12 = a1 + 16; // 0x406f27
    result = v11;
    while (*v1 > v12) {
        // 0x406f1f
        v2 = v11;
        int64_t v13 = v12;
        v3 = *(int64_t *)v13;
        v4 = v2;
        if (v3 != 0) {
            // 0x406f38
            result = v2;
            if (v2 >= a3) {
                // break -> 0x406f31
                break;
            }
            // 0x406f3d
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
                // 0x406f55
                v7 = v6 + 1;
                *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                v8 = *(int64_t *)(v5 + 8);
                v4 = v7;
                v6 = v7;
                v5 = v8;
                while (v8 != 0) {
                    // 0x406f50
                    result = a3;
                    if (v6 == a3) {
                        return result;
                    }
                    // 0x406f55
                    v7 = v6 + 1;
                    *(int64_t *)(a2 - 8 + 8 * v7) = *(int64_t *)v5;
                    v8 = *(int64_t *)(v5 + 8);
                    v4 = v7;
                    v6 = v7;
                    v5 = v8;
                }
            }
        }
        // 0x406f27
        v11 = v4;
        v12 = v13 + 16;
        result = v11;
    }
    // 0x406f31
    return result;
}
// Address range: 0x406f80 - 0x406ff8
int64_t function_406f80(uint64_t a1, int64_t a2, int64_t a3) {
    uint64_t v1 = *(int64_t *)(a1 + 8); // 0x406f91
    int64_t result = 0; // 0x406f95
    if (v1 <= a1) {
      lab_0x406fb4:
        // 0x406fb4
        return result;
    }
    int64_t v2 = a1; // 0x406faa
    int64_t v3 = 0;
    int64_t v4 = v3; // 0x406fa8
    int64_t v5 = v2; // 0x406fa8
    int64_t v6 = v3; // 0x406fa8
    int64_t v7; // 0x406f80
    int64_t v8; // 0x406fd8
    int64_t v9; // 0x406fdc
    if (*(int64_t *)v2 != 0) {
        result = v3;
        if ((char)v7 == 0) {
            return result;
        }
        // 0x406fd8
        v8 = *(int64_t *)(v5 + 8);
        v9 = v6 + 1;
        v4 = v9;
        v5 = v8;
        v6 = v9;
        while (v8 != 0) {
            // 0x406fe8
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x406fd8
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
        // 0x406fa2
        v3 = result2;
        v4 = v3;
        v5 = v2;
        v6 = v3;
        if (*(int64_t *)v2 != 0) {
            result = v3;
            if ((char)v7 == 0) {
                return result;
            }
            // 0x406fd8
            v8 = *(int64_t *)(v5 + 8);
            v9 = v6 + 1;
            v4 = v9;
            v5 = v8;
            v6 = v9;
            while (v8 != 0) {
                // 0x406fe8
                result = v3;
                if ((char)v7 == 0) {
                    return result;
                }
                // 0x406fd8
                v8 = *(int64_t *)(v5 + 8);
                v9 = v6 + 1;
                v4 = v9;
                v5 = v8;
                v6 = v9;
            }
        }
        // 0x406faa
        result2 = v4;
        v2 += 16;
    }
    // 0x406fb4
    return result2;
}
// Address range: 0x407000 - 0x407031
int64_t function_407000(int64_t a1, uint64_t a2, int64_t a3) {
    char v1 = a1;
    int64_t v2 = a1; // 0x407007
    if (v1 == 0) {
        // 0x40702d
        return 0;
    }
    int64_t result = 0; // 0x407007
    v2++;
    char v3 = *(char *)v2; // 0x407023
    result = (31 * result + (int64_t)v1) % a2;
    while (v3 != 0) {
        unsigned char v4 = v3;
        v2++;
        v3 = *(char *)v2;
        result = (31 * result + (int64_t)v4) % a2;
    }
    // 0x40702d
    return result;
}
// Address range: 0x407040 - 0x407060
int64_t function_407040(int64_t a1) {
    // 0x407040
    *(char *)(a1 + 16) = 0;
    *(int64_t *)a1 = 0x3f80000000000000;
    *(int64_t *)(a1 + 8) = 0x3fb4fdf43f4ccccd;
    return 0x3fb4fdf43f4ccccd;
}
// Address range: 0x407060 - 0x4071ea
int64_t function_407060(uint64_t a1, int32_t a2, int64_t a3, int64_t a4, int32_t a5) {
    // 0x407060
    int128_t v1; // 0x407060
    int128_t v2 = v1;
    int64_t * mem = malloc(80); // 0x40709a
    int64_t result = (int64_t)mem; // 0x40709a
    if (mem == NULL) {
        // 0x40714a
        return result;
    }
    int64_t v3 = result + 40; // 0x4070ab
    int64_t * v4 = (int64_t *)v3;
    int128_t v5; // 0x407060
    int128_t v6; // 0x407060
    if (a2 == 0) {
        // 0x407160
        *v4 = (int64_t)&g8;
        int64_t v7 = function_4069e0(v3); // 0x407168
        int128_t v8 = __asm_movss(0x3f4ccccd); // 0x40716d
        if ((char)v7 == 0) {
            // 0x407140
            free(mem);
            // 0x40714a
            return 0;
        }
        // 0x407179
        v5 = v8;
        v6 = v8;
        if (a1 < 0) {
            goto lab_0x4071c3;
        } else {
            goto lab_0x40717e;
        }
    } else {
        int64_t v9 = a2;
        *v4 = v9;
        if ((char)function_4069e0(v3) == 0) {
            // 0x407140
            free(mem);
            // 0x40714a
            return 0;
        }
        // 0x4070c5
        if (*(char *)(v9 + 16) != 0) {
            uint64_t nmemb = function_4067d0(a1); // 0x4070d3
            if (nmemb % 0x1000000000000001 != 0) {
                // 0x407140
                free(mem);
            }
            if (nmemb >= 0x2000000000000000) {
                // 0x407140
                free(mem);
                // 0x40714a
                return 0;
            }
            // 0x4070f1
            *(int64_t *)(result + 16) = nmemb;
            if (nmemb == 0) {
                // 0x407140
                free(mem);
                // 0x40714a
                return 0;
            }
            int64_t * mem2 = calloc((int32_t)nmemb, 16); // 0x407102
            int64_t v10 = (int64_t)mem2; // 0x407102
            *mem = v10;
            if (mem2 == NULL) {
                // 0x407140
                free(mem);
                // 0x40714a
                return 0;
            }
            // 0x40710f
            *(int64_t *)(result + 24) = 0;
            *(int64_t *)(result + 32) = 0;
            *(int64_t *)(result + 8) = 16 * nmemb + v10;
            *(int64_t *)(result + 48) = a3 == 0 ? 0x406870 : a3;
            *(int64_t *)(result + 56) = a4 == 0 ? 0x406880 : a4;
            *(int64_t *)(result + 64) = (int64_t)a5;
            *(int64_t *)(result + 72) = 0;
            // 0x40714a
            return result;
        }
        int128_t v11 = __asm_movss(*(int32_t *)(v9 + 8)); // 0x4071b8
        v5 = v11;
        v6 = v11;
        if (a1 >= 0) {
            goto lab_0x40717e;
        } else {
            goto lab_0x4071c3;
        }
    }
  lab_0x4071c3:
    // 0x4071c3
    __asm_pxor(v2, v2);
    int128_t v12 = __asm_cvtsi2ss(a1 / 2 | a1 % 2); // 0x4071d3
    int128_t v13 = v6; // 0x4071dc
    int128_t v14 = __asm_addss(v12, v12); // 0x4071dc
    goto lab_0x407187;
  lab_0x40717e:
    // 0x40717e
    __asm_pxor(v2, v2);
    v13 = v5;
    v14 = __asm_cvtsi2ss(a1);
    goto lab_0x407187;
  lab_0x407187:
    // 0x407187
    __asm_comiss(__asm_divss(v14, v13), 0x5f800000);
    // 0x407140
    free(mem);
    // 0x40714a
    return 0;
}
// Address range: 0x4071f0 - 0x407298
int64_t function_4071f0(uint64_t a1) {
    int64_t * v1 = (int64_t *)(a1 + 8); // 0x4071fa
    uint64_t v2 = *v1; // 0x4071fa
    int64_t result; // 0x4071f0
    if (v2 <= a1) {
      lab_0x407283:
        // 0x407283
        *(int64_t *)(a1 + 24) = 0;
        *(int64_t *)(a1 + 32) = 0;
        return result;
    }
    int64_t * v3 = (int64_t *)(a1 + 64);
    int64_t * v4 = (int64_t *)(a1 + 72);
    int64_t v5 = a1;
    int64_t * v6 = (int64_t *)v5;
    int64_t v7; // 0x407208
    while (*v6 == 0) {
        // 0x407208
        v7 = v5 + 16;
        int64_t v8; // 0x4071f0
        result = v8;
        if (v2 <= v7) {
            // break (via goto) -> 0x407283
            goto lab_0x407283;
        }
        v5 = v7;
        v6 = (int64_t *)v5;
    }
    int64_t * v9 = (int64_t *)(v5 + 8); // 0x407219
    int64_t v10 = *v9; // 0x407219
    int64_t v11 = *v3; // 0x40721e
    int64_t v12 = v11; // 0x407225
    int64_t v13 = v10; // 0x407225
    int64_t result2 = v11; // 0x407225
    int64_t * v14; // 0x40723e
    int64_t v15; // 0x40723e
    int64_t v16; // 0x40723a
    if (v10 != 0) {
        v16 = 0;
        if (v12 != 0) {
            // 0x407235
            v16 = *v3;
        }
        // 0x40723e
        v14 = (int64_t *)(v13 + 8);
        v15 = *v14;
        *(int64_t *)v13 = 0;
        *v14 = *v4;
        *v4 = v13;
        v12 = v16;
        v13 = v15;
        result2 = v16;
        while (v15 != 0) {
            // 0x407230
            v16 = 0;
            if (v12 != 0) {
                // 0x407235
                v16 = *v3;
            }
            // 0x40723e
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
    // 0x40725d
    *v6 = 0;
    int64_t v17 = v5 + 16; // 0x407270
    *v9 = 0;
    uint64_t v18 = *v1; // 0x40727d
    while (v18 > v17) {
        int64_t v19 = result2;
        uint64_t v20 = v18; // 0x40720c
        v5 = v17;
        v6 = (int64_t *)v5;
        while (*v6 == 0) {
            // 0x407208
            v7 = v5 + 16;
            result = v19;
            if (v20 <= v7) {
                // break (via goto) -> 0x407283
                goto lab_0x407283;
            }
            v5 = v7;
            v6 = (int64_t *)v5;
        }
        // 0x407219
        v9 = (int64_t *)(v5 + 8);
        v10 = *v9;
        v11 = *v3;
        v12 = v11;
        v13 = v10;
        result2 = v11;
        if (v10 != 0) {
            v16 = 0;
            if (v12 != 0) {
                // 0x407235
                v16 = *v3;
            }
            // 0x40723e
            v14 = (int64_t *)(v13 + 8);
            v15 = *v14;
            *(int64_t *)v13 = 0;
            *v14 = *v4;
            *v4 = v13;
            v12 = v16;
            v13 = v15;
            result2 = v16;
            while (v15 != 0) {
                // 0x407230
                v16 = 0;
                if (v12 != 0) {
                    // 0x407235
                    v16 = *v3;
                }
                // 0x40723e
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
        // 0x40725d
        *v6 = 0;
        v17 = v5 + 16;
        *v9 = 0;
        v18 = *v1;
    }
    // 0x407283
    *(int64_t *)(a1 + 24) = 0;
    *(int64_t *)(a1 + 32) = 0;
    return result2;
}
// Address range: 0x4072a0 - 0x407376
int64_t function_4072a0(char a1) {
    int64_t v1 = a1;
    int64_t * v2 = (int64_t *)(v1 + 8); // 0x4072af
    uint64_t v3 = *v2; // 0x4072af
    int64_t v4 = v1; // 0x4072b3
    if (*(int64_t *)(v1 + 64) == 0) {
        goto lab_0x407303;
    } else {
        // 0x4072b5
        v4 = v1;
        if (*(int64_t *)(v1 + 32) == 0) {
            goto lab_0x407303;
        } else {
            // 0x4072bc
            if (v3 > v1) {
                int64_t v5 = v1;
                int64_t v6 = *(int64_t *)v5; // 0x4072d1
                int64_t v7; // 0x4072c8
                while (v6 == 0) {
                    // 0x4072c8
                    v7 = v5 + 16;
                    v4 = 0;
                    if (v3 <= v7) {
                        // break (via goto) -> 0x407303
                        goto lab_0x407303;
                    }
                    v5 = v7;
                    v6 = *(int64_t *)v5;
                }
                int64_t v8 = *(int64_t *)(v5 + 8); // 0x4072e8
                int64_t v9 = v8; // 0x4072ef
                int64_t v10 = v6; // 0x4072ef
                int64_t v11; // 0x4072a0
                int64_t v12; // 0x4072e8
                if (v8 != 0) {
                    v11 = v9;
                    v12 = *(int64_t *)(v11 + 8);
                    while (v12 != 0) {
                        // 0x4072e0
                        v11 = v12;
                        v12 = *(int64_t *)(v11 + 8);
                    }
                    // 0x4072e3
                    v10 = *(int64_t *)v11;
                }
                int64_t v13 = v5 + 16; // 0x4072f6
                v4 = v10;
                while (v3 > v13) {
                    // 0x4072d1
                    v5 = v13;
                    v6 = *(int64_t *)v5;
                    while (v6 == 0) {
                        // 0x4072c8
                        v7 = v5 + 16;
                        v4 = 0;
                        if (v3 <= v7) {
                            // break (via goto) -> 0x407303
                            goto lab_0x407303;
                        }
                        v5 = v7;
                        v6 = *(int64_t *)v5;
                    }
                    // 0x4072e3
                    v8 = *(int64_t *)(v5 + 8);
                    v9 = v8;
                    v10 = v6;
                    if (v8 != 0) {
                        v11 = v9;
                        v12 = *(int64_t *)(v11 + 8);
                        while (v12 != 0) {
                            // 0x4072e0
                            v11 = v12;
                            v12 = *(int64_t *)(v11 + 8);
                        }
                        // 0x4072e3
                        v10 = *(int64_t *)v11;
                    }
                    // 0x4072f1
                    v13 = v5 + 16;
                    v4 = v10;
                }
                goto lab_0x407303;
            } else {
                goto lab_0x40733c;
            }
        }
    }
  lab_0x407303:
    // 0x407303
    if (v4 < v3) {
        int64_t v14 = *(int64_t *)(v4 + 8); // 0x407310
        int64_t v15 = v14; // 0x407317
        int64_t v16 = v3; // 0x407317
        int64_t v17; // 0x407320
        if (v14 != 0) {
            v17 = *(int64_t *)(v15 + 8);
            free((int64_t *)v15);
            v15 = v17;
            while (v17 != 0) {
                // 0x407320
                v17 = *(int64_t *)(v15 + 8);
                free((int64_t *)v15);
                v15 = v17;
            }
            // 0x407331
            v16 = *v2;
        }
        int64_t v18 = v4 + 16; // 0x407331
        int64_t v19 = v16; // 0x40733a
        int64_t v20 = v18; // 0x40733a
        while (v16 > v18) {
            // 0x407310
            v14 = *(int64_t *)(v20 + 8);
            v15 = v14;
            v16 = v19;
            if (v14 != 0) {
                v17 = *(int64_t *)(v15 + 8);
                free((int64_t *)v15);
                v15 = v17;
                while (v17 != 0) {
                    // 0x407320
                    v17 = *(int64_t *)(v15 + 8);
                    free((int64_t *)v15);
                    v15 = v17;
                }
                // 0x407331
                v16 = *v2;
            }
            // 0x407331
            v18 = v20 + 16;
            v19 = v16;
            v20 = v18;
        }
    }
    goto lab_0x40733c;
  lab_0x40733c:;
    int64_t v21 = *(int64_t *)(v1 + 72); // 0x40733c
    if (v21 == 0) {
        // 0x407361
        free(NULL);
        free((int64_t *)v1);
        return &g73;
    }
    int64_t v22 = *(int64_t *)(v21 + 8); // 0x407350
    free((int64_t *)v21);
    int64_t v23 = v22; // 0x40735f
    while (v22 != 0) {
        // 0x407350
        v22 = *(int64_t *)(v23 + 8);
        free((int64_t *)v23);
        v23 = v22;
    }
    // 0x407361
    free((int64_t *)v22);
    free((int64_t *)v1);
    return &g73;
}
// Address range: 0x407380 - 0x40757a
int64_t function_407380(int64_t a1, uint64_t a2) {
    // 0x407380
    int128_t v1; // 0x407380
    int128_t v2 = v1;
    int64_t v3 = *(int64_t *)(a1 + 40); // 0x40738b
    if (*(char *)(v3 + 16) == 0) {
        int128_t v4; // 0x407380
        if (a2 < 0) {
            // 0x407500
            __asm_pxor(v2, v2);
            int128_t v5 = __asm_cvtsi2ss(a2 / 2 | a2 % 2); // 0x407510
            v4 = __asm_addss(v5, v5);
        } else {
            // 0x4073a0
            __asm_pxor(v2, v2);
            v4 = __asm_cvtsi2ss(a2);
        }
        // 0x4073a9
        __asm_comiss(__asm_divss_5(v4, *(int32_t *)(v3 + 8)), 0x5f800000);
        // 0x4074f2
        return 0;
    }
    uint64_t nmemb = function_4067d0(a2); // 0x4073e3
    if (nmemb == 0 || nmemb >= 0x2000000000000000 || nmemb % 0x1000000000000001 != 0) {
        // 0x4074f2
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 16); // 0x40741b
    if (*v6 == nmemb) {
        // 0x4074f2
        return 1;
    }
    int64_t * mem = calloc((int32_t)nmemb, 16); // 0x40742d
    int64_t v7 = (int64_t)mem; // 0x40742d
    int64_t v8 = v7; // bp-104, 0x407432
    if (mem == NULL) {
        // 0x4074f2
        return 0;
    }
    int64_t * v9 = (int64_t *)(a1 + 72); // 0x40748a
    int64_t v10 = *v9; // 0x40748a
    int64_t v11 = function_406a60(&v8, a1, 0); // 0x407493
    int64_t result = v11 & 0xffffffff; // 0x407498
    if ((char)v11 == 0) {
        int64_t v12 = &v8; // 0x407454
        *v9 = v10;
        int64_t * v13 = (int64_t *)a1; // 0x4074b6
        function_406a60(v13, v12, 1);
        function_406a60(v13, v12, 0);
        free((int64_t *)v8);
        return result;
    }
    // 0x407540
    free(&v8);
    *(int64_t *)a1 = v8;
    *(int64_t *)(a1 + 8) = 16 * nmemb + v7;
    *v6 = nmemb;
    *(int64_t *)(a1 + 24) = 0;
    *v9 = v10;
    // 0x4074f2
    return result;
}
// Address range: 0x407580 - 0x4077f4
int64_t function_407580(int64_t a1, int64_t a2, int64_t * a3, int64_t a4) {
    // 0x407580
    int128_t v1; // 0x407580
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4; // bp-32, 0x407580
    int64_t v5 = function_4068c0(a1, a2, &v4, 0); // 0x4075a1
    if (v5 != 0) {
        // 0x4075ae
        if (a3 != NULL) {
            // 0x4075b5
            *a3 = v5;
        }
        // 0x4075b9
        return 0;
    }
    int64_t * v6 = (int64_t *)(a1 + 24); // 0x4075c8
    uint64_t v7 = *v6; // 0x4075c8
    int64_t v8; // 0x407580
    int64_t v9; // 0x407580
    int64_t v10; // 0x407580
    int128_t v11; // 0x407580
    int128_t v12; // 0x407580
    int64_t v13; // 0x407580
    if (v7 < 0) {
        // 0x407650
        __asm_pxor(v2, v2);
        int64_t v14 = *(int64_t *)(a1 + 16); // 0x407660
        int128_t v15 = __asm_cvtsi2ss(v7 / 2 | v7 % 2); // 0x407664
        int64_t v16 = *(int64_t *)(a1 + 40); // 0x407669
        int128_t v17 = __asm_addss(v15, v15); // 0x40766d
        v13 = v14;
        v11 = v17;
        v9 = v16;
        v12 = v17;
        v8 = v14;
        v10 = v16;
        if (v14 >= 0) {
            goto lab_0x4075eb;
        } else {
            goto lab_0x40767a;
        }
    } else {
        // 0x4075d1
        __asm_pxor(v2, v2);
        int64_t v18 = *(int64_t *)(a1 + 40); // 0x4075d5
        int128_t v19 = __asm_cvtsi2ss(v7); // 0x4075d9
        int64_t v20 = *(int64_t *)(a1 + 16); // 0x4075de
        v13 = v20;
        v11 = v19;
        v9 = v18;
        v12 = v19;
        v8 = v20;
        v10 = v18;
        if (v20 < 0) {
            goto lab_0x40767a;
        } else {
            goto lab_0x4075eb;
        }
    }
  lab_0x4075eb:
    // 0x4075eb
    __asm_pxor(v3, v3);
    int128_t v21 = __asm_mulss(__asm_cvtsi2ss(v13), *(int32_t *)(v9 + 8)); // 0x4075f4
    __asm_comiss_2(v11, v21);
    int128_t v22 = v21; // 0x4075fc
    int128_t v23 = v11; // 0x4075fc
    if (v13 == 0) {
        goto lab_0x407602;
    } else {
        goto lab_0x4076a1;
    }
  lab_0x40767a:;
    uint64_t v24 = v8;
    __asm_pxor(v3, v3);
    int64_t v25 = v24 / 2 | v24 % 2; // 0x407687
    int128_t v26 = __asm_cvtsi2ss(v25); // 0x40768a
    int128_t v27 = __asm_mulss(__asm_addss(v26, v26), *(int32_t *)(v10 + 8)); // 0x407693
    __asm_comiss_2(v12, v27);
    v22 = v27;
    v23 = v12;
    if (v25 == 0) {
        goto lab_0x407602;
    } else {
        goto lab_0x4076a1;
    }
  lab_0x407602:;
    int64_t * v28 = (int64_t *)v4; // 0x407607
    if (*v28 == 0) {
        // 0x407718
        *v28 = a2;
        int64_t * v29 = (int64_t *)(a1 + 32); // 0x407721
        *v29 = *v29 + 1;
        *v6 = *v6 + 1;
        return 1;
    }
    int64_t * v30 = (int64_t *)(a1 + 72); // 0x407612
    int64_t v31 = *v30; // 0x407612
    int64_t * v32; // 0x407580
    int64_t v33; // 0x407580
    if (v31 == 0) {
        int64_t * mem = malloc(16); // 0x40773d
        if (mem == NULL) {
            // 0x4075b9
            return 0xffffffff;
        }
        int64_t v34 = (int64_t)mem; // 0x40773d
        v32 = (int64_t *)(v34 + 8);
        v33 = v34;
    } else {
        int64_t * v35 = (int64_t *)(v31 + 8);
        *v30 = *v35;
        v32 = v35;
        v33 = v31;
    }
    int64_t * v36 = (int64_t *)(v4 + 8); // 0x407627
    *(int64_t *)v33 = a2;
    *v32 = *v36;
    *v36 = v33;
    int64_t * v37 = (int64_t *)(a1 + 32); // 0x40763d
    *v37 = *v37 + 1;
    return 1;
  lab_0x4076a1:;
    int128_t v38 = v23;
    int128_t v39 = v22;
    int64_t v40 = a1 + 40; // 0x4076a1
    function_4069e0(v40);
    int64_t v41 = *(int64_t *)v40; // 0x4076aa
    uint64_t v42 = *(int64_t *)(a1 + 16); // 0x4076ae
    int128_t v43 = __asm_movss(*(int32_t *)(v41 + 8)); // 0x4076b2
    int128_t v44; // 0x407580
    if (v42 < 0) {
        // 0x407770
        __asm_pxor(v39, v39);
        int128_t v45 = __asm_cvtsi2ss(v42 / 2 | v42 % 2); // 0x407780
        v44 = __asm_addss(v45, v45);
    } else {
        // 0x4076c0
        __asm_pxor(v39, v39);
        v44 = __asm_cvtsi2ss(v42);
    }
    uint64_t v46 = *v6; // 0x4076c9
    int128_t v47; // 0x407580
    int64_t v48; // 0x407580
    if (v46 < 0) {
        // 0x407750
        __asm_pxor(v38, v38);
        int64_t v49 = v46 / 2 | v46 % 2; // 0x40775d
        int128_t v50 = __asm_cvtsi2ss(v49); // 0x407760
        v48 = v49;
        v47 = __asm_addss(v50, v50);
    } else {
        // 0x4076d2
        __asm_pxor(v38, v38);
        int128_t v51 = __asm_cvtsi2ss(v46); // 0x4076d6
        v48 = v46;
        v47 = v51;
    }
    // 0x4076db
    __asm_comiss_2(v47, __asm_mulss_4(__asm_movaps(v43), v44));
    if (v48 != 0) {
        int128_t v52 = __asm_mulss(v44, *(int32_t *)(v41 + 12)); // 0x4076eb
        int128_t v53 = v52; // 0x4076f4
        if (*(char *)(v41 + 16) == 0) {
            // 0x407790
            v53 = __asm_mulss_4(v52, v43);
        }
        // 0x4076fa
        __asm_comiss(v53, 0x5f800000);
        // 0x4075b9
        return 0xffffffff;
    }
    goto lab_0x407602;
}
// Address range: 0x407800 - 0x40783b
int64_t function_407800(char a1, int64_t a2) {
    // 0x407800
    int64_t v1; // bp-16, 0x407800
    int64_t v2; // 0x407800
    int32_t v3 = function_407580((int64_t)a1, a2, &v1, v2); // 0x407812
    if (v3 == -1) {
        // 0x407820
        return 0;
    }
    // 0x407817
    return v3 != 0 ? a2 : v1;
}
// Address range: 0x407840 - 0x407a17
int64_t function_407840(char a1) {
    // 0x407840
    int128_t v1; // 0x407840
    int128_t v2 = v1;
    int128_t v3 = v1;
    int64_t v4 = a1;
    int64_t v5; // bp-32, 0x407840
    int64_t v6; // 0x407840
    int64_t result = function_4068c0(v4, v6, &v5, 1); // 0x407855
    if (result == 0) {
        // 0x407872
        return result;
    }
    int64_t * v7 = (int64_t *)(v4 + 32); // 0x407867
    *v7 = *v7 - 1;
    if (*(int64_t *)v5 != 0) {
        // 0x407872
        return result;
    }
    int64_t * v8 = (int64_t *)(v4 + 24); // 0x407880
    uint64_t v9 = *v8 - 1; // 0x407884
    *v8 = v9;
    int64_t v10; // 0x407840
    int64_t v11; // 0x407840
    int64_t v12; // 0x407840
    int128_t v13; // 0x407840
    int128_t v14; // 0x407840
    int64_t v15; // 0x407840
    if (v9 < 0) {
        // 0x407970
        __asm_pxor(v3, v3);
        int64_t v16 = *(int64_t *)(v4 + 16); // 0x407980
        int128_t v17 = __asm_cvtsi2ss(v9 / 2 | v9 % 2); // 0x407984
        int64_t v18 = *(int64_t *)(v4 + 40); // 0x407989
        int128_t v19 = __asm_addss(v17, v17); // 0x40798d
        v15 = v16;
        v13 = v19;
        v11 = v18;
        v14 = v19;
        v10 = v16;
        v12 = v18;
        if (v16 >= 0) {
            goto lab_0x4078ac;
        } else {
            goto lab_0x40799a;
        }
    } else {
        // 0x407892
        __asm_pxor(v3, v3);
        int64_t v20 = *(int64_t *)(v4 + 40); // 0x407896
        int128_t v21 = __asm_cvtsi2ss(v9); // 0x40789a
        int64_t v22 = *(int64_t *)(v4 + 16); // 0x40789f
        v15 = v22;
        v13 = v21;
        v11 = v20;
        v14 = v21;
        v10 = v22;
        v12 = v20;
        if (v22 < 0) {
            goto lab_0x40799a;
        } else {
            goto lab_0x4078ac;
        }
    }
  lab_0x4078ac:
    // 0x4078ac
    __asm_pxor(v2, v2);
    int128_t v23 = __asm_cvtsi2ss(v15); // 0x4078b0
    int64_t v24 = v15; // 0x4078b0
    int128_t v25 = v13; // 0x4078b0
    int64_t v26 = v11; // 0x4078b0
    int128_t v27 = v23; // 0x4078b0
    goto lab_0x4078b5;
  lab_0x40799a:;
    uint64_t v48 = v10;
    __asm_pxor(v2, v2);
    int64_t v49 = v48 / 2 | v48 % 2; // 0x4079a7
    int128_t v50 = __asm_cvtsi2ss(v49); // 0x4079aa
    v24 = v49;
    v25 = v14;
    v26 = v12;
    v27 = __asm_addss(v50, v50);
    goto lab_0x4078b5;
  lab_0x4078b5:;
    int128_t v28 = v25;
    int128_t v29 = __asm_mulss(v27, *(int32_t *)v26); // 0x4078b5
    __asm_comiss_2(v29, v28);
    if (v24 == 0) {
        // 0x407872
        return result;
    }
    int64_t v30 = v4 + 40; // 0x4078be
    function_4069e0(v30);
    uint64_t v31 = *(int64_t *)(v4 + 16); // 0x4078c7
    int64_t v32 = *(int64_t *)v30; // 0x4078cb
    int128_t v33; // 0x407840
    if (v31 < 0) {
        // 0x4079e0
        __asm_pxor(v28, v28);
        int128_t v34 = __asm_cvtsi2ss(v31 / 2 | v31 % 2); // 0x4079f0
        v33 = __asm_addss(v34, v34);
    } else {
        // 0x4078d8
        __asm_pxor(v28, v28);
        v33 = __asm_cvtsi2ss(v31);
    }
    uint64_t v35 = *v8; // 0x4078e1
    int128_t v36; // 0x407840
    int64_t v37; // 0x407840
    if (v35 < 0) {
        // 0x4079c0
        __asm_pxor(v29, v29);
        int64_t v38 = v35 / 2 | v35 % 2; // 0x4079cd
        int128_t v39 = __asm_cvtsi2ss(v38); // 0x4079d0
        v37 = v38;
        v36 = __asm_addss(v39, v39);
    } else {
        // 0x4078ee
        __asm_pxor(v29, v29);
        int128_t v40 = __asm_cvtsi2ss(v35); // 0x4078f2
        v37 = v35;
        v36 = v40;
    }
    // 0x4078f7
    __asm_comiss_2(__asm_mulss_4(__asm_movss(*(int32_t *)v32), v33), v36);
    if (v37 == 0) {
        // 0x407872
        return result;
    }
    int128_t v41 = __asm_mulss(v33, *(int32_t *)(v32 + 4)); // 0x407908
    int128_t v42 = v41; // 0x407911
    if (*(char *)(v32 + 16) == 0) {
        // 0x407913
        v42 = __asm_mulss(v41, *(int32_t *)(v32 + 8));
    }
    // 0x407918
    __asm_comiss(v42, 0x5f000000);
    int64_t v43 = __asm_cvttss2si(__asm_subss(v42, 0x5f000000)); // 0x407a08
    if ((char)function_407380(v4, v43 ^ -0x8000000000000000) != 0) {
        // 0x407872
        return result;
    }
    int64_t * v44 = (int64_t *)(v4 + 72); // 0x40793a
    if (*v44 != 0) {
        int64_t v45; // 0x407840
        free((int64_t *)v45);
        while (*(int64_t *)(v45 + 8) != 0) {
            int64_t v46 = v45;
            int64_t v47 = *(int64_t *)(v46 + 8); // 0x407948
            free((int64_t *)v46);
            v45 = v47;
        }
    }
    // 0x407959
    *v44 = 0;
    // 0x407872
    return result;
}
// Address range: 0x407a20 - 0x407abc
int64_t function_407a20(int64_t a1, int64_t * a2) {
    int64_t v1 = (int64_t)a2 + 20; // 0x407a20
    *(char *)v1 = 0;
    int64_t result = v1; // 0x407a45
    if (a1 >= 0) {
        result--;
        *(char *)result = (char)a1 + 48;
        // 0x407a76
        return result;
    }
    int64_t v2 = v1;
    int64_t v3 = a1 / 0x8000000000000000; // 0x407a98
    int64_t v4 = v2 - 1; // 0x407aa8
    *(char *)v4 = 48 - (char)a1 + 10 * (char)v3;
    while (v3 != 0) {
        uint64_t v5 = v3;
        v2 = v4;
        v3 = v5 / 0x8000000000000000;
        v4 = v2 - 1;
        *(char *)v4 = 48 - (char)v5 + 10 * (char)v3;
    }
    int64_t result2 = v2 - 2; // 0x407ab0
    *(char *)result2 = 45;
    return result2;
}
// Address range: 0x407ac0 - 0x407b32
int64_t function_407ac0(void) {
    char * env_val = getenv("_POSIX2_VERSION"); // 0x407acf
    if (env_val == NULL || *env_val == 0) {
        // 0x407ade
        return 0x31069;
    }
    // 0x407af0
    char * endptr; // bp-16, 0x407ac0
    int32_t str_as_l = strtol(env_val, &endptr, 10); // 0x407afd
    if (*endptr != 0) {
        // 0x407ade
        return 0x31069;
    }
    int64_t v1 = str_as_l; // 0x407afd
    int64_t v2 = v1 - 0x7fffffff; // 0x407b14
    return v2 == 0 | v2 < 0 != (0x7ffffffe - v1 & v1) < 0 ? v1 & 0xffffffff : 0x7fffffff;
}
// Address range: 0x407b40 - 0x407bd9
int64_t function_407b40(int64_t str) {
    // 0x407b40
    if (str == 0) {
        // 0x407bb9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g41);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x407b4e
    int64_t result = (int64_t)found_char_pos; // 0x407b4e
    if (found_char_pos == NULL) {
        // 0x407ba9
        g58 = str;
        g40 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x407b58
    if (v1 - str < 7) {
        // 0x407ba9
        g58 = str;
        g40 = str;
        return result;
    }
    // 0x407b68
    bool v2; // 0x407b40
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x407b40
    int64_t v5 = result - 6; // 0x407b40
    int64_t v6 = 7; // 0x407b76
    unsigned char v7 = *(char *)v5; // 0x407b76
    char v8 = *(char *)v4; // 0x407b76
    char v9 = v8; // 0x407b76
    bool v10 = false; // 0x407b76
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
    int64_t v12 = (int64_t)"lt-"; // 0x407b80
    int64_t v13 = v1; // 0x407b80
    int64_t v14 = 3; // 0x407b80
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x407ba9
        g58 = str;
        g40 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x407b92
    char v16 = *(char *)v12; // 0x407b92
    char v17 = v16; // 0x407b92
    bool v18 = false; // 0x407b92
    while (v15 == v16) {
        // 0x407b82
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
    int64_t v20 = v1; // 0x407b9c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x407b9e
        v20 = result + 4;
        g38 = v20;
    }
    // 0x407ba9
    g58 = v20;
    g40 = v20;
    return result;
}
// Address range: 0x407be0 - 0x407cd2
int64_t function_407be0(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x407bf4
    int64_t result = (int64_t)v1; // 0x407bf4
    if (result != a1) {
        // 0x407c01
        return result;
    }
    int64_t v2 = function_40ba70(); // 0x407c10
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x407cc6
    if (v3 == 85) {
        // 0x407c20
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x407cb8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g14 : (int64_t)&g9;
            return result2;
        }
        char v4 = *v1; // 0x407c4e
        int64_t result3 = v4 != 96 ? (int64_t)&g10 : (int64_t)&g13; // 0x407c5b
        // 0x407c01
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x407cb8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g14 : (int64_t)&g9;
        return result2;
    }
    char v5 = *v1; // 0x407c9d
    int64_t result4 = v5 != 96 ? (int64_t)&g11 : (int64_t)&g12; // 0x407caa
    // 0x407c01
    return result4;
}
// Address range: 0x407ce0 - 0x407d37
int64_t function_407ce0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6, int64_t a7, int64_t a8, int64_t a9) {
    // 0x407ce0
    __ctype_get_mb_cur_max();
    return a5 & 0xffffffff;
}
// Address range: 0x407d37 - 0x408f01
int64_t function_407d37(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x407d81
    int64_t v3 = 0; // 0x407d81
    int64_t v4; // 0x407d37
    int64_t v5; // 0x407d37
    int64_t v6; // 0x407d37
    int64_t v7; // 0x407d37
    int64_t v8; // 0x407d37
    int64_t v9; // 0x407d37
    int64_t v10; // 0x407d37
    int64_t v11; // 0x407d37
    int64_t v12; // 0x407d37
    int64_t v13; // 0x407d37
    int64_t v14; // 0x407d37
    int64_t v15; // 0x407d37
    int64_t v16; // 0x407d37
    int64_t v17; // 0x407d37
    int64_t v18; // 0x407d37
    int64_t result; // 0x407d37
    int64_t v19; // 0x407d37
    int32_t wc; // bp+132, 0x407d37
    int64_t ps; // bp+136, 0x407d37
    char v20; // 0x4082f0
    int64_t v21; // 0x4082f0
    int64_t v22; // 0x408698
    int64_t v23; // 0x407d37
    int64_t v24; // 0x4086b7
    int32_t v25; // 0x407d37
    while (true) {
      lab_0x407d88_2:
        // 0x407d88
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x407d37
        int64_t v27; // 0x407dbc
        while (true) {
          lab_0x407d88:
            // 0x407d88
            v5 = v26;
            bool v28 = v15 == v5; // 0x407d93
            if (v15 == -1) {
                // 0x407d95
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x407da3
            if (v28) {
                // break (via goto) -> 0x408508
                goto lab_0x408508;
            }
            // 0x407dac
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g72 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x40839b
                    if (v25 % 2 == 0) {
                        goto lab_0x407ee1;
                    }
                    // 0x4087bd
                    v26 = v5 + 1;
                    goto lab_0x407d88;
                }
                case 7: {
                    goto lab_0x407ee1;
                }
                case 8: {
                    goto lab_0x407ee1;
                }
                case 9: {
                    goto lab_0x4080fa_2;
                }
                case 10: {
                    goto lab_0x4080fa_2;
                }
                case 11: {
                    goto lab_0x407ee1;
                }
                case 12: {
                    goto lab_0x407ee1;
                }
                case 13: {
                    goto lab_0x4080fa_2;
                }
                case 32: {
                    goto lab_0x4080fa_2;
                }
                case 33: {
                    goto lab_0x4080fa_2;
                }
                case 34: {
                    goto lab_0x4080fa_2;
                }
                case 35: {
                    goto lab_0x407ead;
                }
                case 36: {
                    goto lab_0x4080fa_2;
                }
                case 37: {
                    goto lab_0x407ee1;
                }
                case 38: {
                    goto lab_0x4080fa_2;
                }
                case 39: {
                    goto lab_0x4080fa_2;
                }
                case 40: {
                    goto lab_0x4080fa_2;
                }
                case 41: {
                    goto lab_0x4080fa_2;
                }
                case 42: {
                    goto lab_0x4080fa_2;
                }
                case 43: {
                    goto lab_0x407ee1;
                }
                case 44: {
                    goto lab_0x407ee1;
                }
                case 45: {
                    goto lab_0x407ee1;
                }
                case 46: {
                    goto lab_0x407ee1;
                }
                case 47: {
                    goto lab_0x407ee1;
                }
                case 48: {
                    goto lab_0x407ee1;
                }
                case 49: {
                    goto lab_0x407ee1;
                }
                case 50: {
                    goto lab_0x407ee1;
                }
                case 51: {
                    goto lab_0x407ee1;
                }
                case 52: {
                    goto lab_0x407ee1;
                }
                case 53: {
                    goto lab_0x407ee1;
                }
                case 54: {
                    goto lab_0x407ee1;
                }
                case 55: {
                    goto lab_0x407ee1;
                }
                case 56: {
                    goto lab_0x407ee1;
                }
                case 57: {
                    goto lab_0x407ee1;
                }
                case 58: {
                    goto lab_0x407ee1;
                }
                case 59: {
                    goto lab_0x4080fa_2;
                }
                case 60: {
                    goto lab_0x4080fa_2;
                }
                case 61: {
                    goto lab_0x4080fa_2;
                }
                case 62: {
                    goto lab_0x4080fa_2;
                }
                case 63: {
                    goto lab_0x4080fa_2;
                }
                case 65: {
                    goto lab_0x407ee1;
                }
                case 66: {
                    goto lab_0x407ee1;
                }
                case 67: {
                    goto lab_0x407ee1;
                }
                case 68: {
                    goto lab_0x407ee1;
                }
                case 69: {
                    goto lab_0x407ee1;
                }
                case 70: {
                    goto lab_0x407ee1;
                }
                case 71: {
                    goto lab_0x407ee1;
                }
                case 72: {
                    goto lab_0x407ee1;
                }
                case 73: {
                    goto lab_0x407ee1;
                }
                case 74: {
                    goto lab_0x407ee1;
                }
                case 75: {
                    goto lab_0x407ee1;
                }
                case 76: {
                    goto lab_0x407ee1;
                }
                case 77: {
                    goto lab_0x407ee1;
                }
                case 78: {
                    goto lab_0x407ee1;
                }
                case 79: {
                    goto lab_0x407ee1;
                }
                case 80: {
                    goto lab_0x407ee1;
                }
                case 81: {
                    goto lab_0x407ee1;
                }
                case 82: {
                    goto lab_0x407ee1;
                }
                case 83: {
                    goto lab_0x407ee1;
                }
                case 84: {
                    goto lab_0x407ee1;
                }
                case 85: {
                    goto lab_0x407ee1;
                }
                case 86: {
                    goto lab_0x407ee1;
                }
                case 87: {
                    goto lab_0x407ee1;
                }
                case 88: {
                    goto lab_0x407ee1;
                }
                case 89: {
                    goto lab_0x407ee1;
                }
                case 90: {
                    goto lab_0x407ee1;
                }
                case 91: {
                    goto lab_0x4080fa_2;
                }
                case 92: {
                    goto lab_0x4080fa_2;
                }
                case 93: {
                    goto lab_0x407ee1;
                }
                case 94: {
                    goto lab_0x4080fa_2;
                }
                case 95: {
                    goto lab_0x407ee1;
                }
                case 96: {
                    goto lab_0x4080fa_2;
                }
                case 97: {
                    goto lab_0x407ee1;
                }
                case 98: {
                    goto lab_0x407ee1;
                }
                case 99: {
                    goto lab_0x407ee1;
                }
                case 100: {
                    goto lab_0x407ee1;
                }
                case 101: {
                    goto lab_0x407ee1;
                }
                case 102: {
                    goto lab_0x407ee1;
                }
                case 103: {
                    goto lab_0x407ee1;
                }
                case 104: {
                    goto lab_0x407ee1;
                }
                case 105: {
                    goto lab_0x407ee1;
                }
                case 106: {
                    goto lab_0x407ee1;
                }
                case 107: {
                    goto lab_0x407ee1;
                }
                case 108: {
                    goto lab_0x407ee1;
                }
                case 109: {
                    goto lab_0x407ee1;
                }
                case 110: {
                    goto lab_0x407ee1;
                }
                case 111: {
                    goto lab_0x407ee1;
                }
                case 112: {
                    goto lab_0x407ee1;
                }
                case 113: {
                    goto lab_0x407ee1;
                }
                case 114: {
                    goto lab_0x407ee1;
                }
                case 115: {
                    goto lab_0x407ee1;
                }
                case 116: {
                    goto lab_0x407ee1;
                }
                case 117: {
                    goto lab_0x407ee1;
                }
                case 118: {
                    goto lab_0x407ee1;
                }
                case 119: {
                    goto lab_0x407ee1;
                }
                case 120: {
                    goto lab_0x407ee1;
                }
                case 121: {
                    goto lab_0x407ee1;
                }
                case 122: {
                    goto lab_0x407ee1;
                }
                case 123: {
                    goto lab_0x407e85;
                }
                case 124: {
                    goto lab_0x4080fa_2;
                }
                case 125: {
                    goto lab_0x407e85;
                }
                case 126: {
                    goto lab_0x407ead;
                }
                default: {
                    goto lab_0x408285;
                }
            }
        }
      lab_0x408285:
        if (v23 != 1) {
            // 0x4085f0
            ps = 0;
            int64_t len = v15; // 0x408600
            if (v15 == -1) {
                // 0x408602
                len = strlen((char *)str);
            }
            // 0x40862e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40868f:
                // 0x40868f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x408694
                int64_t v30 = v29 + str;
                v24 = function_40b6b0(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x408c0a_2;
                    }
                    case -1: {
                        goto lab_0x408c0a_2;
                    }
                    case -2: {
                        // 0x408ced
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x408d27
                            v19 = v18;
                            int64_t v31 = v18; // 0x408d2a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x408d37
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x408d30
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x408c0a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x408c0a_2;
                    }
                    case 1: {
                        goto lab_0x408660;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40870c
                        char v34 = *(char *)v33; // 0x40871d
                        unsigned char v35; // 0x407d37
                        if (v34 < 125) {
                            // 0x408728
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x40873f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                goto lab_0x4080fa_2;
                            }
                        }
                        // 0x408710
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40871d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x408728
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x40873f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    goto lab_0x4080fa_2;
                                }
                            }
                            // 0x408710
                            v33++;
                        }
                        goto lab_0x408660;
                    }
                }
            }
            goto lab_0x408c0a_2;
        } else {
            // 0x4082d4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x407ee1;
        }
    }
  lab_0x408508:
    // 0x408508
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x408e0a
        if (v8 > result) {
            // 0x408e13
            *(char *)(v12 + result) = 0;
        }
        // 0x408137
        return result;
    }
    goto lab_0x4080fa_2;
  lab_0x407ee1:;
    int64_t v56 = v13;
    int64_t v57 = v9;
    int64_t v58 = v16;
    if (v23 != 0) {
        // 0x407ef0
        v4 = v58;
        v6 = v57;
        v10 = v56;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x4080fa_2;
        }
    }
    int64_t v42 = result; // 0x407ff1
    char v43 = v20; // 0x407ff1
    int64_t v44 = v58; // 0x407ff1
    v3 = v5 + 1;
    int64_t v45 = v57; // 0x407ff1
    int64_t v46 = v56; // 0x407ff1
    goto lab_0x407f6d;
  lab_0x4080fa_2:;
    // 0x408137
    char * v36; // 0x407d37
    return function_407ce0(v10, v6, str, v4, 2, v25 & -3, 0, (int64_t)v36, (int64_t)v36);
  lab_0x408c0a_2:;
    uint64_t v37 = v19;
    int64_t v38 = 0x100000000 * v8 >> 32;
    int64_t v39 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v38;
    v13 = v39;
    if (v37 < 2) {
        goto lab_0x407ee1;
    } else {
        uint64_t v40 = v37 + v5; // 0x4087de
        int64_t v41 = v5 + 1; // 0x4088c1
        v42 = result;
        v43 = v20;
        v44 = v22;
        v3 = v41;
        v45 = v38;
        v46 = v39;
        int64_t v47 = v41; // 0x4088c8
        char v48 = v20; // 0x4088c8
        int64_t v49 = result; // 0x4088c8
        if (v41 < v40) {
            uint64_t v50 = v49;
            if (v38 > v50) {
                // 0x408891
                *(char *)(v50 + v39) = v48;
            }
            char v51 = *(char *)(v47 + str); // 0x408895
            int64_t v52 = v50 + 1; // 0x40889a
            int64_t v53 = v47 + 1; // 0x4088c1
            v42 = v52;
            v43 = v51;
            v44 = v22;
            v3 = v53;
            v45 = v38;
            v46 = v39;
            v47 = v53;
            while (v53 < v40) {
                // 0x40888c
                v50 = v52;
                if (v38 > v50) {
                    // 0x408891
                    *(char *)(v50 + v39) = v51;
                }
                // 0x408895
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
        goto lab_0x407f6d;
    }
  lab_0x408660:
    // 0x408660
    iswprint(wc);
    int64_t v54 = v24 + v18; // 0x40867f
    int32_t v55 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x408682
    v17 = v54;
    v19 = v54;
    if (v55 != 0) {
        // break -> 0x408c0a
        goto lab_0x408c0a_2;
    }
    goto lab_0x40868f;
  lab_0x407ead:
    // 0x407ead
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x4080fa_2;
    }
    goto lab_0x407ee1;
  lab_0x407e85:;
    bool v61 = v15 == 1; // 0x407e90
    if (v15 == -1) {
        // 0x407e92
        v61 = *(char *)v1 == 0;
    }
    // 0x407e9e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v61) {
        goto lab_0x407ee1;
    } else {
        goto lab_0x407ead;
    }
  lab_0x407f6d:;
    int64_t v59 = v46;
    uint64_t v60 = v42;
    if (v60 < v45) {
        // 0x407f72
        *(char *)(v59 + v60) = v43;
    }
    // 0x407f76
    v2 = v60 + 1;
    v14 = v44;
    v7 = v45;
    v11 = v59;
    goto lab_0x407d88_2;
}
// Address range: 0x408f10 - 0x4090ae
int64_t function_408f10(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x408f12
    int32_t * v3 = __errno_location(); // 0x408f2c
    int64_t v4 = (int64_t)g31; // 0x408f31
    int32_t v5 = *v3; // 0x408f3b
    int64_t v6 = v4; // 0x408f51
    if (v2 >= (int64_t)*(int32_t *)&g34) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4090a9
            function_40a020(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x408f60
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x408f67
        int64_t v9; // 0x408f10
        if (g31 == &g32) {
            int64_t v10 = function_409e30(0, v8); // 0x40908a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g32); // 0x40908f
            *(int64_t *)&g31 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_409e30(v4, v8); // 0x408f7b
            *(int64_t *)&g31 = v12;
            v9 = v12;
        }
        // 0x408f8a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g34; // 0x408f8a
        int32_t v14 = v7; // 0x408f91
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g34 = v14;
    }
    int64_t v15 = (int64_t)a4;
    int64_t v16 = v6 + (v1 >> 28); // 0x408fc1
    int64_t v17 = v15 + 8; // 0x408fc4
    int32_t v18 = *(int32_t *)(v15 + 4) | 1; // 0x408fcb
    int64_t * v19 = (int64_t *)v16; // 0x408fce
    uint64_t v20 = *v19; // 0x408fce
    int64_t * v21 = (int64_t *)(v16 + 8); // 0x408fd1
    int64_t result = *v21; // 0x408fd1
    int64_t * v22 = (int64_t *)(v15 + 48); // 0x408fdc
    int64_t * v23 = (int64_t *)(v15 + 40); // 0x408fe5
    int64_t v24; // 0x408f10
    uint64_t v25 = function_407ce0(result, v20, a2, a3, v24 & 0xffffffff, v18, v17, *v23, *v22); // 0x408ff4
    if (v20 > v25) {
        // 0x40906b
        *v3 = v5;
        return result;
    }
    int64_t v26 = v25 + 1; // 0x409007
    *v19 = v26;
    if (result != (int64_t)&g59) {
        // 0x409017
        free((int64_t *)result);
    }
    int64_t result2 = function_409dd0(v26); // 0x409031
    *v21 = result2;
    int64_t v27 = *v22; // 0x40904b
    int64_t v28 = *v23; // 0x40904e
    int64_t v29; // 0x408f10
    function_407ce0(result2, v26, a2, a3, (int64_t)*(int32_t *)&v29, v18, v17, v28, v27);
    // 0x40906b
    *v3 = v5;
    return result2;
}
// Address range: 0x4090b0 - 0x4090e4
int64_t function_4090b0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4090b7
    int64_t result = function_409fd0(a1 == 0 ? (int64_t)&g60 : a1, 56); // 0x4090d6
    return result;
}
// Address range: 0x4090f0 - 0x4090ff
int64_t function_4090f0(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g60 : a1); // 0x4090fc
    return result;
}
// Address range: 0x409100 - 0x40910f
int64_t function_409100(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g60 : a1; // 0x409108
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g60;
}
// Address range: 0x409110 - 0x409143
int64_t function_409110(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g60 + 8 : a1 + 8; // 0x409129
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40912e
    uint32_t v3 = *v2; // 0x40912e
    uint32_t v4 = (int32_t)a2 % 32; // 0x409132
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x409150 - 0x409163
int64_t function_409150(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g60 + 4 : a1 + 4); // 0x40915c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x409170 - 0x40919b
int64_t function_409170(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g60 : a1; // 0x409178
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x409195
        abort();
        // UNREACHABLE
    }
    // 0x40918c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g60;
}
// Address range: 0x4091a0 - 0x409212
int64_t function_4091a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g60 : a5; // 0x4091c2
    int32_t * v2 = __errno_location(); // 0x4091cb
    int32_t v3 = *(int32_t *)(v1 + 4); // 0x4091e4
    int64_t v4 = *(int64_t *)(v1 + 48); // 0x4091e8
    uint32_t v5 = *(int32_t *)v1; // 0x4091eb
    int64_t v6 = *(int64_t *)(v1 + 40); // 0x4091f1
    int64_t result = function_407ce0(a1, a2, a3, a4, (int64_t)v5, v3, v1 + 8, v6, v4); // 0x4091fa
    return result;
}
// Address range: 0x409220 - 0x409301
int64_t function_409220(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g60 : a4; // 0x409242
    int32_t * v2 = __errno_location(); // 0x409248
    int64_t v3 = v1 + 8; // 0x40925f
    int32_t v4 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x409267
    int32_t * v5 = (int32_t *)v1; // 0x40926a
    int64_t * v6 = (int64_t *)(v1 + 48); // 0x409278
    int64_t * v7 = (int64_t *)(v1 + 40); // 0x40927b
    int64_t v8 = function_407ce0(0, 0, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6); // 0x409285
    int64_t v9 = v8 + 1; // 0x40928a
    int64_t result = function_409dd0(v9); // 0x40929f
    function_407ce0(result, v9, a1, a2, (int64_t)*v5, v4, v3, *v7, *v6);
    if (a3 != 0) {
        // 0x4092e4
        *(int64_t *)(int64_t)a3 = v8;
    }
    // 0x4092ed
    return result;
}
// Address range: 0x409310 - 0x40931a
int64_t function_409310(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409310
    return function_409220(a1, a2, 0, a3);
}
// Address range: 0x409320 - 0x4093b5
int64_t function_409320(void) {
    uint32_t v1 = *(int32_t *)&g34; // 0x409320
    int64_t v2 = v1; // 0x409320
    int64_t v3 = v2; // 0x409334
    if (v1 >= 2) {
        int64_t v4 = &g34;
        int64_t v5 = v4 + 16; // 0x409353
        free((int64_t *)*(int64_t *)v4);
        v3 = &g73;
        while (v5 != (int64_t)g31 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x409350
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g73;
        }
    }
    int64_t v6 = v3; // 0x40936d
    if (g32 != 0x6123c0) {
        // 0x40936f
        free((int64_t *)g32);
        g32 = 256;
        *(int64_t *)&g33 = (int64_t)&g59;
        v6 = &g73;
    }
    int64_t result = v6; // 0x409391
    if (g31 != &g32) {
        // 0x409393
        free(g31);
        *(int64_t *)&g31 = (int64_t)&g32;
        result = &g73;
    }
    // 0x4093a6
    *(int32_t *)&g34 = 1;
    return result;
}
// Address range: 0x4093c0 - 0x4093d1
int64_t function_4093c0(void) {
    // 0x4093c0
    int64_t v1; // 0x4093c0
    return function_408f10(v1, v1, -1, (int64_t *)&g60);
}
// Address range: 0x4093e0 - 0x4093ea
int64_t function_4093e0(void) {
    // 0x4093e0
    int64_t v1; // 0x4093e0
    return function_408f10(v1, v1, v1, (int64_t *)&g60);
}
// Address range: 0x4093f0 - 0x409406
int64_t function_4093f0(int64_t a1) {
    // 0x4093f0
    return function_408f10(0, a1, -1, (int64_t *)&g60);
}
// Address range: 0x409410 - 0x409422
int64_t function_409410(int64_t a1, int64_t a2) {
    // 0x409410
    return function_408f10(0, a1, a2, (int64_t *)&g60);
}
// Address range: 0x409430 - 0x409498
int64_t function_409430(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x409440
    return function_408f10((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4094a0 - 0x409504
int64_t function_4094a0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4094b0
    return function_408f10((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x409510 - 0x40951c
int64_t function_409510(int64_t a1, int64_t a2) {
    // 0x409510
    return function_409430(0, a1 & 0xffffffff, a2);
}
// Address range: 0x409520 - 0x40952f
int64_t function_409520(int64_t a1, int64_t a2, int64_t a3) {
    // 0x409520
    return function_4094a0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x409530 - 0x4095a0
int64_t function_409530(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g60); // 0x40953d
    int128_t v2 = __asm_movdqa(g61); // 0x409545
    int128_t v3 = __asm_movdqa(g62); // 0x40954d
    int64_t v4 = __asm_movaps_7(v1); // bp-72, 0x409562
    __asm_movaps_7(v2);
    __asm_movaps_7(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x409578
    uint32_t v6 = *v5; // 0x409578
    uint32_t v7 = (int32_t)a3 % 32; // 0x40957d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_408f10(0, a1, a2, &v4);
}
// Address range: 0x4095a0 - 0x4095ad
int64_t function_4095a0(int64_t a1, int64_t a2) {
    // 0x4095a0
    return function_409530(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x4095b0 - 0x4095c1
int64_t function_4095b0(int64_t a1) {
    // 0x4095b0
    return function_409530(a1, -1, 58);
}
// Address range: 0x4095d0 - 0x4095da
int64_t function_4095d0(void) {
    // 0x4095d0
    int64_t v1; // 0x4095d0
    return function_409530(v1, v1, 58);
}
// Address range: 0x4095e0 - 0x40964e
int64_t function_4095e0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4095fa
    return function_408f10((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x409650 - 0x4096bc
int64_t function_409650(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g60); // 0x409657
    int128_t v2 = __asm_movdqa(g61); // 0x40965f
    int128_t v3 = __asm_movdqa(g62); // 0x409667
    __asm_movaps_7(v1);
    __asm_movaps_7(v2);
    __asm_movaps_7(v3);
    int64_t v4 = 10; // bp-72, 0x409689
    if (a2 == 0 || a3 == 0) {
        // 0x4096b7
        abort();
        // UNREACHABLE
    }
    // 0x40969a
    return function_408f10(a1, a4, a5, &v4);
}
// Address range: 0x4096c0 - 0x4096c9
int64_t function_4096c0(void) {
    // 0x4096c0
    int64_t v1; // 0x4096c0
    return function_409650(v1, v1, v1, v1, -1);
}
// Address range: 0x4096d0 - 0x4096e7
int64_t function_4096d0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x4096d0
    return function_409650(0, a1, a2, a3, -1);
}
// Address range: 0x4096f0 - 0x409703
int64_t function_4096f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4096f0
    return function_409650(0, a1, a2, a3, a4);
}
// Address range: 0x409710 - 0x40971a
int64_t function_409710(void) {
    // 0x409710
    int64_t v1; // 0x409710
    return function_408f10(v1, v1, v1, &g30);
}
// Address range: 0x409720 - 0x409732
int64_t function_409720(int64_t a1, int64_t a2) {
    // 0x409720
    return function_408f10(0, a1, a2, &g30);
}
// Address range: 0x409740 - 0x409751
int64_t function_409740(int64_t a1, int64_t a2) {
    // 0x409740
    return function_408f10(a1, a2, -1, &g30);
}
// Address range: 0x409760 - 0x409776
int64_t function_409760(int64_t a1) {
    // 0x409760
    return function_408f10(0, a1, -1, &g30);
}
// Address range: 0x409780 - 0x4097de
int64_t function_409780(int32_t fd, int64_t buf, int64_t nbyte) {
    int32_t result = read(fd, (int64_t *)buf, (int32_t)nbyte); // 0x4097a1
    while (result < 0) {
        // 0x4097ae
        if (*__errno_location() != 4) {
            // break -> 0x4097ba
            break;
        }
        result = read(fd, (int64_t *)buf, (int32_t)nbyte);
    }
    return result;
}
// Address range: 0x4097e0 - 0x40982e
int64_t function_4097e0(int64_t a1) {
    uint32_t fd = (int32_t)a1; // 0x4097ec
    if (fd >= 3) {
        // 0x4097f1
        return a1 & 0xffffffff;
    }
    // 0x409800
    int64_t v1; // 0x4097e0
    int64_t v2 = function_40bfe0(a1, v1); // 0x409800
    int32_t * v3 = __errno_location(); // 0x409808
    close(fd);
    return v2 & 0xffffffff;
}
// Address range: 0x409830 - 0x409c0d
int64_t function_409830(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x4098c8
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40984c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x409866
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x4098ab
    if (a6 < 10) {
        // 0x4098ba
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x4099b2
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x409c10 - 0x409c30
int64_t function_409c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x409c10
    if (a5 == 0) {
        // 0x409c2b
        return function_409830(a1, a2, a3, a4, a5, 0, (int64_t)&g73);
    }
    int64_t v1 = 0; // 0x409c17
    v1++;
    int64_t v2 = v1; // 0x409c29
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x409c20
        v1++;
        v2 = v1;
    }
    // 0x409c2b
    return function_409830(a1, a2, a3, a4, a5, v2, (int64_t)&g73);
}
// Address range: 0x409c30 - 0x409c90
int64_t function_409c30(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x409c30
    int64_t v3 = &v2; // 0x409c30
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x409c63
    int64_t v6; // 0x409c4d
    int64_t * v7; // 0x409c6b
    int64_t v8; // 0x409c6b
    int64_t v9; // 0x409c77
    if (v5 < 48) {
        // 0x409c40
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x409c83
            break;
        }
    } else {
        // 0x409c6b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x409c83
            break;
        }
    }
    int64_t v10 = 10; // 0x409c61
    while (v4 != 9) {
        // 0x409c59
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x409c40
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x409c83
                break;
            }
        } else {
            // 0x409c6b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x409c83
                break;
            }
        }
        // 0x409c59
        v10 = 10;
    }
    // 0x409c83
    return function_409830(a1, a2, a3, a4, v3, v10, (int64_t)&g73);
}
// Address range: 0x409c90 - 0x409d4c
int64_t function_409c90(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, char * a6) {
    // 0x409c90
    int64_t v1; // bp-168, 0x409c90
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x409c90
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x409c90
    int64_t v8; // 0x409c90
    int64_t v9; // bp-56, 0x409c90
    int64_t v10; // 0x409cf5
    int64_t v11; // 0x409d19
    if ((int32_t)v6 < 48) {
        // 0x409ce0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x409d30
            break;
        }
    } else {
        // 0x409d12
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x409d30
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x409d0a
    int64_t v13 = 10; // 0x409d0a
    while (v5 != 9) {
        // 0x409d0c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x409ce0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x409d30
                break;
            }
        } else {
            // 0x409d12
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x409d30
                break;
            }
        }
        // 0x409d02
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x409d30
    int64_t v14; // bp-136, 0x409c90
    int64_t result = function_409830(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g73); // 0x409d3f
    return result;
}
// Address range: 0x409d50 - 0x409dc4
int64_t function_409d50(int64_t a1) {
    // 0x409d50
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x409db3
    return fputs_unlocked(v1, g39);
}
// Address range: 0x409dd0 - 0x409dea
int64_t function_409dd0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x409dd4
    if (size != 0 != (mem == NULL)) {
        // 0x409de3
        return (int64_t)mem;
    }
    // 0x409de5
    function_40a020(size);
    // UNREACHABLE
}
// Address range: 0x409df0 - 0x409e11
int64_t function_409df0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x409df3
    int64_t v2 = v1; // 0x409df3
    if (v2 < 0) {
        // 0x409e0b
        function_40a020(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409e09
        return function_409dd0(v2);
    }
    // 0x409e0b
    function_40a020(v2);
    // UNREACHABLE
}
// Address range: 0x409e20 - 0x409e22
int64_t function_409e20(void) {
    // 0x409e20
    int64_t v1; // 0x409e20
    return function_409dd0(v1);
}
// Address range: 0x409e30 - 0x409e66
int64_t function_409e30(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x409e58
        free(v1);
        return (int32_t)&g73 ^ (int32_t)&g73;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x409e41
    if (a2 != 0 != (mem == NULL)) {
        // 0x409e50
        return (int64_t)mem;
    }
    // 0x409e61
    function_40a020(a1);
    // UNREACHABLE
}
// Address range: 0x409e70 - 0x409e91
int64_t function_409e70(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x409e73
    int64_t v2 = v1; // 0x409e73
    if (v2 < 0) {
        // 0x409e8b
        function_40a020(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x409e89
        return function_409e30(a1, v2);
    }
    // 0x409e8b
    function_40a020(a1);
    // UNREACHABLE
}
// Address range: 0x409ea0 - 0x409f26
int64_t function_409ea0(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x409efb
            function_40a020(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_409e30(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x409ee3
    if (a2 == 0) {
        // 0x409f08
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x409ee8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x409efb
        function_40a020(a1);
        // UNREACHABLE
    }
    // 0x409eca
    *(int64_t *)a2 = v2;
    return function_409e30(a1, v2 * a3);
}
// Address range: 0x409f30 - 0x409f80
int64_t function_409f30(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x409f30
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x409f7a
            function_40a020(a1);
            // UNREACHABLE
        }
        // 0x409f52
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_409e30(a1, v1);
    }
    if (a2 == 0) {
        // 0x409f65
        *(int64_t *)a2 = 128;
        return function_409e30(0, 128);
    }
    // 0x409f78
    if (a2 < 0) {
        // 0x409f7a
        function_40a020(a1);
        // UNREACHABLE
    }
    // 0x409f52
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_409e30(a1, v1);
}
// Address range: 0x409f80 - 0x409f97
int64_t function_409f80(int64_t a1, int64_t a2) {
    // 0x409f80
    return (int64_t)memset((int64_t *)function_409dd0(a1), 0, (int32_t)a1);
}
// Address range: 0x409fa0 - 0x409fce
int64_t function_409fa0(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x409fa7
    if ((int64_t)v1 < 0) {
        // 0x409fc9
        function_40a020(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x409fc9
        function_40a020(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x409fba
    if (mem != NULL) {
        // 0x409fc4
        return (int64_t)mem;
    }
    // 0x409fc9
    function_40a020(nmemb);
    // UNREACHABLE
}
// Address range: 0x409fd0 - 0x409ff8
int64_t function_409fd0(int64_t a1, int64_t a2) {
    int64_t v1 = function_409dd0(a2); // 0x409fdf
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x40a000 - 0x40a013
int64_t function_40a000(int64_t str) {
    // 0x40a000
    return function_409fd0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x40a020 - 0x40a051
int64_t function_40a020(int64_t a1) {
    // 0x40a020
    error(g29, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x40a060 - 0x40a130
int64_t function_40a060(int64_t a1, int64_t a2, uint64_t a3, uint64_t a4, int64_t a5, int64_t a6, int32_t a7) {
    // 0x40a060
    int64_t result2; // bp-64, 0x40a060
    int64_t v1 = function_40a260(a1, 0, a2 & 0xffffffff, &result2, (int64_t *)a5, a6); // 0x40a087
    int32_t v2 = v1; // 0x40a08c
    int32_t * v3; // 0x40a060
    if (v2 != 0) {
        int32_t * v4 = __errno_location(); // 0x40a10a
        if (v2 == 1) {
            // 0x40a128
            *v4 = 75;
            v3 = v4;
        } else {
            // 0x40a117
            v3 = v4;
            if (v2 == 3) {
                // 0x40a11c
                *v4 = 0;
                v3 = v4;
            }
        }
    } else {
        uint64_t result = result2; // 0x40a090
        if (result >= a3 && result <= a4) {
            // 0x40a0f2
            return result;
        }
        int32_t * v5 = __errno_location(); // 0x40a09f
        *v5 = result < 0x40000000 ? 34 : 75;
        v3 = v5;
    }
    int64_t v6 = function_409760(a1); // 0x40a0bc
    int32_t v7 = *v3; // 0x40a0c1
    int32_t err_num = v7 == 22 ? 0 : v7; // 0x40a0d7
    error(a7 == 0 ? 1 : a7, err_num, "%s: %s", (char *)a6, (char *)v6);
    // 0x40a0f2
    return result2;
}
// Address range: 0x40a130 - 0x40a151
int64_t function_40a130(int64_t a1, int32_t a2, int64_t a3, char * a4, int64_t a5, int32_t a6) {
    // 0x40a130
    int64_t result; // 0x40a130
    return result;
}
// Address range: 0x40a160 - 0x40a1b3
int64_t function_40a160(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40a160
    int64_t v1; // 0x40a160
    int64_t v2 = function_40b950(a1, a2, a3, v1); // bp-24, 0x40a16a
    int32_t * v3 = __errno_location(); // 0x40a173
    *v3 = 0;
    int64_t v4 = function_40b840(&v2, 0); // 0x40a193
    int64_t result = v4; // 0x40a19a
    while ((int32_t)v4 != 0) {
        // 0x40a180
        result = 0xffffffff;
        if ((*v3 & -5) != 0) {
            // break -> 0x40a19c
            break;
        }
        *v3 = 0;
        v4 = function_40b840(&v2, 0);
        result = v4;
    }
    // 0x40a19c
    return result;
}
// Address range: 0x40a1c0 - 0x40a25c
int64_t function_40a1c0(int64_t a1, int32_t a2, int64_t * a3, int64_t a4) {
    int32_t * v1 = __errno_location(); // 0x40a1d8
    *v1 = 0;
    char * v2; // 0x40a1c0
    int64_t v3 = (int64_t)v2; // 0x40a1f1
    int64_t result = 0; // 0x40a1f9
    int128_t v4; // 0x40a1c0
    if (v3 != a1) {
        int64_t v5; // 0x40a1c0
        if (a2 == 0) {
            char v6 = *v2; // 0x40a23a
            if (v6 != 0) {
                // 0x40a222
                *a3 = __asm_movsd_1(v4);
                return 0;
            }
            unsigned char v7 = llvm_ctpop_i8(v6); // 0x40a23a
            __asm_ucomisd(v4, (int64_t)g7);
            v5 = 0;
            if (v7 % 2 != 0) {
                // 0x40a222
                *a3 = __asm_movsd_1(v4);
                return 1;
            }
        } else {
            unsigned char v8 = llvm_ctpop_i8((char)a2); // 0x40a1fb
            __asm_ucomisd(v4, (int64_t)g7);
            v5 = v8 % 2 == 0 ? (int64_t)v1 & -256 : 0;
        }
        // 0x40a211
        result = v5 | (int64_t)(*v1 != 34);
    }
    // 0x40a219
    if (a2 != 0) {
        // 0x40a21e
        *(int64_t *)(int64_t)a2 = v3;
    }
    // 0x40a222
    *a3 = __asm_movsd_1(v4);
    return result;
}
// Address range: 0x40a260 - 0x40a6a0
int64_t function_40a260(int64_t a1, int32_t a2, int64_t a3, int64_t * a4, int64_t * str, int64_t a6) {
    uint32_t v1 = (int32_t)a3; // 0x40a26e
    if (v1 >= 37) {
        // 0x40a67b
        __assert_fail("0 <= strtol_base && strtol_base <= 36", "lib/xstrtol.c", 96, "xstrtoumax");
        return &g73;
    }
    char c = a1;
    int32_t * v2 = __errno_location(); // 0x40a292
    *v2 = 0;
    int64_t v3 = (int64_t)*__ctype_b_loc() + 1; // 0x40a2c2
    int64_t v4 = a1; // 0x40a2c7
    char v5 = c; // 0x40a2c7
    if ((*(char *)(v3 + (2 * a1 & 510)) & 32) != 0) {
        v4++;
        unsigned char v6 = *(char *)v4; // 0x40a2bc
        v5 = v6;
        while ((*(char *)(2 * (int64_t)v6 + v3) & 32) != 0) {
            // 0x40a2b8
            v4++;
            v6 = *(char *)v4;
            v5 = v6;
        }
    }
    // 0x40a2c9
    if (v5 == 45) {
        // 0x40a305
        return 4;
    }
    // 0x40a2ce
    int64_t v7; // bp-64, 0x40a260
    int64_t v8 = a2 == 0 ? (int64_t)&v7 : (int64_t)a2; // 0x40a28e
    int32_t v9 = __strtoul_internal((char *)a1, (char **)v8, v1, 0); // 0x40a2d6
    int64_t * v10 = (int64_t *)v8; // 0x40a2db
    int64_t v11 = *v10; // 0x40a2db
    char v12; // 0x40a260
    int64_t v13; // 0x40a260
    int64_t v14; // 0x40a260
    int64_t v15; // 0x40a260
    int64_t v16; // 0x40a260
    int64_t v17; // 0x40a260
    int64_t v18; // 0x40a260
    if (v11 == a1) {
        // 0x40a338
        if (c == 0 || str == NULL) {
            // 0x40a305
            return 4;
        }
        char * found_char_pos = strchr((char *)str, (int32_t)c); // 0x40a359
        v17 = 1;
        v14 = 0;
        v12 = c;
        if (found_char_pos == NULL) {
            // 0x40a305
            return 4;
        }
        goto lab_0x40a367;
    } else {
        int32_t v19 = *v2; // 0x40a2e6
        int64_t v20 = 0; // 0x40a2ec
        if (v19 != 0) {
            // 0x40a320
            v20 = 1;
            if (v19 != 34) {
                // 0x40a305
                return 4;
            }
        }
        int64_t v21 = v9; // 0x40a2d6
        v16 = v21;
        v13 = v20;
        if (str == NULL) {
            goto lab_0x40a302;
        } else {
            char c2 = *(char *)v11; // 0x40a2f5
            v16 = v21;
            v13 = v20;
            if (c2 != 0) {
                char * found_char_pos2 = strchr((char *)str, (int32_t)c2); // 0x40a463
                v17 = v21;
                v14 = v20;
                v12 = c2;
                v18 = v21;
                v15 = v20;
                if (found_char_pos2 != NULL) {
                    goto lab_0x40a367;
                } else {
                    goto lab_0x40a475;
                }
            } else {
                goto lab_0x40a302;
            }
        }
    }
  lab_0x40a367:;
    unsigned char v22 = v12 - 69;
    int64_t v23 = 1024; // 0x40a36f
    int64_t v24 = 1; // 0x40a36f
    int64_t v25; // 0x40a260
    int64_t v26; // 0x40a260
    int64_t v27; // 0x40a260
    int64_t v28; // 0x40a260
    int64_t v29; // 0x40a260
    int64_t v30; // 0x40a260
    int64_t v31; // 0x40a260
    int64_t v32; // 0x40a260
    int64_t v33; // 0x40a260
    int64_t v34; // 0x40a260
    int64_t v35; // 0x40a260
    int64_t v36; // 0x40a260
    int64_t v37; // 0x40a260
    int64_t v38; // 0x40a260
    int64_t v39; // 0x40a260
    int64_t v40; // 0x40a260
    int64_t v41; // 0x40a260
    int64_t v42; // 0x40a260
    int64_t v43; // 0x40a260
    int64_t v44; // 0x40a260
    if (v22 < 48) {
        // 0x40a371
        v23 = 1024;
        v24 = 1;
        if ((1 << (int64_t)((v12 + 59) % 64) & 0x814400308945) == 0) {
            goto lab_0x40a3da;
        } else {
            // 0x40a384
            v23 = 1024;
            v24 = 1;
            if (strchr((char *)str, 48) == NULL) {
                goto lab_0x40a3da;
            } else {
                // 0x40a3a0
                v23 = 1000;
                v24 = 2;
                switch (*(char *)(v11 + 1)) {
                    case 68: {
                        goto lab_0x40a3da;
                    }
                    case 105: {
                        char v45 = *(char *)(v11 + 2); // 0x40a609
                        v23 = 1024;
                        v24 = (v45 == 66 ? 2 : 1) + (int64_t)(v45 == 66);
                        goto lab_0x40a3da;
                    }
                    default: {
                        // 0x40a3b5
                        g70 = v22;
                        v23 = 1000;
                        v24 = 2;
                        v27 = 1024;
                        v39 = 1;
                        v26 = v17;
                        v25 = v14;
                        v40 = 1;
                        v28 = 1024;
                        v41 = 1;
                        v18 = v17;
                        v15 = v14;
                        v42 = 1;
                        v29 = 1024;
                        v43 = 1;
                        v30 = 1024;
                        v44 = 1;
                        v31 = 1024;
                        v35 = 1;
                        v32 = 1024;
                        v36 = 1;
                        v33 = 1024;
                        v37 = 1;
                        v34 = 1024;
                        v38 = 1;
                        switch (v12) {
                            case 69: {
                                goto lab_0x40a57b;
                            }
                            case 70: {
                                goto lab_0x40a475;
                            }
                            case 71: {
                                goto lab_0x40a5b3;
                            }
                            case 72: {
                                goto lab_0x40a475;
                            }
                            case 73: {
                                goto lab_0x40a475;
                            }
                            case 74: {
                                goto lab_0x40a475;
                            }
                            case 75: {
                                goto lab_0x40a43c;
                            }
                            case 76: {
                                goto lab_0x40a475;
                            }
                            case 77: {
                                goto lab_0x40a3fe;
                            }
                            case 78: {
                                goto lab_0x40a475;
                            }
                            case 79: {
                                goto lab_0x40a475;
                            }
                            case 80: {
                                goto lab_0x40a548;
                            }
                            case 81: {
                                goto lab_0x40a475;
                            }
                            case 82: {
                                goto lab_0x40a475;
                            }
                            case 83: {
                                goto lab_0x40a475;
                            }
                            case 84: {
                                goto lab_0x40a518;
                            }
                            case 85: {
                                goto lab_0x40a475;
                            }
                            case 86: {
                                goto lab_0x40a475;
                            }
                            case 87: {
                                goto lab_0x40a475;
                            }
                            case 88: {
                                goto lab_0x40a475;
                            }
                            case 89: {
                                goto lab_0x40a4e6;
                            }
                            case 90: {
                                goto lab_0x40a4ab;
                            }
                            case 91: {
                                goto lab_0x40a475;
                            }
                            case 92: {
                                goto lab_0x40a475;
                            }
                            case 93: {
                                goto lab_0x40a475;
                            }
                            case 94: {
                                goto lab_0x40a475;
                            }
                            case 95: {
                                goto lab_0x40a475;
                            }
                            case 96: {
                                goto lab_0x40a475;
                            }
                            case 97: {
                                goto lab_0x40a475;
                            }
                            case 98: {
                                goto lab_0x40a48f;
                            }
                            case 99: {
                                goto lab_0x40a418;
                            }
                            case 100: {
                                goto lab_0x40a475;
                            }
                            case 101: {
                                goto lab_0x40a475;
                            }
                            case 102: {
                                goto lab_0x40a475;
                            }
                            case 103: {
                                goto lab_0x40a5b3;
                            }
                            case 104: {
                                goto lab_0x40a475;
                            }
                            case 105: {
                                goto lab_0x40a475;
                            }
                            case 106: {
                                goto lab_0x40a475;
                            }
                            case 107: {
                                goto lab_0x40a43c;
                            }
                            case 108: {
                                goto lab_0x40a475;
                            }
                            case 109: {
                                goto lab_0x40a3fe;
                            }
                            case 110: {
                                goto lab_0x40a475;
                            }
                            case 111: {
                                goto lab_0x40a475;
                            }
                            case 112: {
                                goto lab_0x40a475;
                            }
                            case 113: {
                                goto lab_0x40a475;
                            }
                            case 114: {
                                goto lab_0x40a475;
                            }
                            case 115: {
                                goto lab_0x40a475;
                            }
                            case 116: {
                                goto lab_0x40a518;
                            }
                            default: {
                                goto lab_0x40a3da;
                            }
                        }
                    }
                }
            }
        }
    } else {
        goto lab_0x40a3da;
    }
  lab_0x40a302:
    // 0x40a302
    *a4 = v16;
    // 0x40a305
    return v13 & 0xffffffff;
  lab_0x40a3da:
    // 0x40a3da
    g71 = v12 - 66;
    v27 = v23;
    v39 = v24;
    v26 = v17;
    v25 = v14;
    v40 = v24;
    v28 = v23;
    v41 = v24;
    v18 = v17;
    v15 = v14;
    v42 = v24;
    v29 = v23;
    v43 = v24;
    v30 = v23;
    v44 = v24;
    v31 = v23;
    v35 = v24;
    v32 = v23;
    v36 = v24;
    v33 = v23;
    v37 = v24;
    v34 = v23;
    v38 = v24;
    int64_t v46; // 0x40a260
    switch (v12) {
        case 66: {
            // 0x40a5d4
            v46 = v24;
            if (v17 >= 0x40000000000000) {
                goto lab_0x40a447;
            } else {
                // 0x40a5e1
                v26 = 1024 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x40a418;
            }
        }
        case 69: {
            goto lab_0x40a57b;
        }
        case 71: {
            goto lab_0x40a5b3;
        }
        case 75: {
            goto lab_0x40a43c;
        }
        case 77: {
            goto lab_0x40a3fe;
        }
        case 80: {
            goto lab_0x40a548;
        }
        case 84: {
            goto lab_0x40a518;
        }
        case 89: {
            goto lab_0x40a4e6;
        }
        case 90: {
            goto lab_0x40a4ab;
        }
        case 98: {
            goto lab_0x40a48f;
        }
        case 99: {
            goto lab_0x40a418;
        }
        case 103: {
            goto lab_0x40a5b3;
        }
        case 107: {
            goto lab_0x40a43c;
        }
        case 109: {
            goto lab_0x40a3fe;
        }
        case 116: {
            goto lab_0x40a518;
        }
        case 119: {
            // 0x40a480
            v46 = v24;
            if (v17 < 0) {
                goto lab_0x40a447;
            } else {
                // 0x40a485
                v26 = 2 * v17;
                v25 = v14;
                v40 = v24;
                goto lab_0x40a418;
            }
        }
        default: {
            goto lab_0x40a475;
        }
    }
  lab_0x40a57b:;
    uint128_t v47 = (int128_t)v17 * (int128_t)v33; // 0x40a593
    int64_t v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
    int64_t v49 = v47 > 0xffffffffffffffff ? 1 : 0;
    int32_t v50 = 5; // 0x40a59f
    int64_t v51 = v48; // 0x40a5a2
    int64_t v52 = v37; // 0x40a5a2
    int64_t v53 = v49; // 0x40a5a2
    int32_t v54 = v50; // 0x40a5a2
    int64_t v55 = v49; // 0x40a5a2
    while (v50 != 0) {
        // 0x40a590
        v47 = (int128_t)v48 * (int128_t)v33;
        v48 = (int64_t)(v47 < 0xffffffffffffffff ? v47 : 0xffffffffffffffff);
        v49 = v47 > 0xffffffffffffffff ? 1 : v55;
        v50 = v54 - 1;
        v51 = v48;
        v52 = v37;
        v53 = v49;
        v54 = v50;
        v55 = v49;
    }
    goto lab_0x40a4d4;
  lab_0x40a5b3:
    // 0x40a5b3
    v26 = -1;
    v25 = 1;
    v40 = v38;
    if ((int128_t)v34 * (int128_t)v17 <= 0xffffffffffffffff) {
        // 0x40a5be
        int128_t v56; // 0x40a5b9
        uint128_t v57; // 0x40a5b9
        uint128_t v58 = (v57 & 0xffffffffffffffff) * v56; // 0x40a5be
        v26 = -1;
        v25 = 1;
        int64_t v59; // 0x40a260
        v40 = v59;
        if (v58 <= 0xffffffffffffffff) {
            uint128_t v60 = (v58 & 0xffffffffffffffff) * v56; // 0x40a5c3
            v26 = -1;
            v25 = 1;
            v40 = v59;
            if (v60 <= 0xffffffffffffffff) {
                // 0x40a5c8
                v26 = v60;
                int64_t v61; // 0x40a260
                v25 = v61 & 0xffffffff;
                v40 = v59;
            }
        }
    }
    goto lab_0x40a418;
  lab_0x40a43c:;
    uint128_t v64 = (int128_t)v28 * (int128_t)v17; // 0x40a43f
    v26 = v64;
    v25 = v14;
    v40 = v41;
    v46 = v41;
    if (v64 <= 0xffffffffffffffff) {
        goto lab_0x40a418;
    } else {
        goto lab_0x40a447;
    }
  lab_0x40a3fe:;
    int128_t v65 = v27; // 0x40a404
    uint128_t v66 = v65 * (int128_t)v17; // 0x40a404
    v46 = v39;
    if (v66 > 0xffffffffffffffff) {
        goto lab_0x40a447;
    } else {
        uint128_t v67 = (v66 & 0xffffffffffffffff) * v65; // 0x40a409
        v46 = v39;
        if (v67 > 0xffffffffffffffff) {
            goto lab_0x40a447;
        } else {
            // 0x40a40e
            v26 = v67;
            v25 = v14;
            v40 = v39;
            goto lab_0x40a418;
        }
    }
  lab_0x40a548:;
    uint128_t v68 = (int128_t)v17 * (int128_t)v32; // 0x40a55b
    int64_t v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
    int64_t v70 = v68 > 0xffffffffffffffff ? 1 : 0;
    int32_t v71 = 4; // 0x40a567
    v51 = v69;
    v52 = v36;
    v53 = v70;
    int32_t v72 = v71; // 0x40a56a
    int64_t v73 = v70; // 0x40a56a
    while (v71 != 0) {
        // 0x40a558
        v68 = (int128_t)v69 * (int128_t)v32;
        v69 = (int64_t)(v68 < 0xffffffffffffffff ? v68 : 0xffffffffffffffff);
        v70 = v68 > 0xffffffffffffffff ? 1 : v73;
        v71 = v72 - 1;
        v51 = v69;
        v52 = v36;
        v53 = v70;
        v72 = v71;
        v73 = v70;
    }
    goto lab_0x40a4d4;
  lab_0x40a518:;
    uint128_t v74 = (int128_t)v17 * (int128_t)v31; // 0x40a52b
    int64_t v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
    int64_t v76 = v74 > 0xffffffffffffffff ? 1 : 0;
    int32_t v77 = 3; // 0x40a537
    v51 = v75;
    v52 = v35;
    v53 = v76;
    int32_t v78 = v77; // 0x40a53a
    int64_t v79 = v76; // 0x40a53a
    while (v77 != 0) {
        // 0x40a528
        v74 = (int128_t)v75 * (int128_t)v31;
        v75 = (int64_t)(v74 < 0xffffffffffffffff ? v74 : 0xffffffffffffffff);
        v76 = v74 > 0xffffffffffffffff ? 1 : v79;
        v77 = v78 - 1;
        v51 = v75;
        v52 = v35;
        v53 = v76;
        v78 = v77;
        v79 = v76;
    }
    goto lab_0x40a4d4;
  lab_0x40a4e6:;
    uint128_t v80 = (int128_t)v17 * (int128_t)v30; // 0x40a4fb
    int64_t v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
    int64_t v82 = v80 > 0xffffffffffffffff ? 1 : 0;
    int32_t v83 = 7; // 0x40a507
    v51 = v81;
    v52 = v44;
    v53 = v82;
    int32_t v84 = v83; // 0x40a50a
    int64_t v85 = v82; // 0x40a50a
    while (v83 != 0) {
        // 0x40a4f8
        v80 = (int128_t)v81 * (int128_t)v30;
        v81 = (int64_t)(v80 < 0xffffffffffffffff ? v80 : 0xffffffffffffffff);
        v82 = v80 > 0xffffffffffffffff ? 1 : v85;
        v83 = v84 - 1;
        v51 = v81;
        v52 = v44;
        v53 = v82;
        v84 = v83;
        v85 = v82;
    }
    goto lab_0x40a4d4;
  lab_0x40a4ab:;
    uint128_t v86 = (int128_t)v17 * (int128_t)v29; // 0x40a4c3
    int64_t v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
    int64_t v88 = v86 > 0xffffffffffffffff ? 1 : 0;
    int32_t v89 = 6; // 0x40a4cf
    int32_t v90 = v89; // 0x40a4d2
    int64_t v91 = v88; // 0x40a4d2
    v51 = v87;
    v52 = v43;
    v53 = v88;
    while (v89 != 0) {
        // 0x40a4c0
        v86 = (int128_t)v87 * (int128_t)v29;
        v87 = (int64_t)(v86 < 0xffffffffffffffff ? v86 : 0xffffffffffffffff);
        v88 = v86 > 0xffffffffffffffff ? 1 : v91;
        v89 = v90 - 1;
        v90 = v89;
        v91 = v88;
        v51 = v87;
        v52 = v43;
        v53 = v88;
    }
    goto lab_0x40a4d4;
  lab_0x40a48f:
    // 0x40a48f
    v46 = v42;
    if (v17 >= 0x80000000000000) {
        goto lab_0x40a447;
    } else {
        // 0x40a498
        v26 = 512 * v17;
        v25 = v14;
        v40 = v42;
        goto lab_0x40a418;
    }
  lab_0x40a418:;
    int64_t v62 = v25;
    int64_t v63 = (0x100000000 * v40 >> 32) + v11; // 0x40a41d
    *v10 = v63;
    v16 = v26;
    v13 = (*(char *)v63 != 0 ? v62 | 2 : v62) & 0xffffffff;
    goto lab_0x40a302;
  lab_0x40a475:
    // 0x40a475
    *a4 = v18;
    // 0x40a305
    return (v15 & 0xfffffffd | 2) & 0xffffffff;
  lab_0x40a447:
    // 0x40a447
    v26 = -1;
    v25 = 1;
    v40 = v46;
    goto lab_0x40a418;
  lab_0x40a4d4:
    // 0x40a4d4
    v26 = v51;
    v25 = (v53 | v14) & 0xffffffff;
    v40 = v52;
    goto lab_0x40a418;
}
// Address range: 0x40a6a0 - 0x40a7d5
int64_t function_40a6a0(int64_t fd, int64_t a2, int64_t a3, int64_t a4) {
    int32_t cmd = a2; // 0x40a6d0
    if (cmd != 1030) {
        // 0x40a780
        return fcntl((int32_t)fd, cmd);
    }
    int64_t v1 = a3 & 0xffffffff; // 0x40a6dc
    int64_t v2; // 0x40a6a0
    if (g63 < 0) {
        int64_t v3 = function_40a6a0(fd, 0, v1, a4); // 0x40a724
        int64_t v4 = v3 & 0xffffffff; // 0x40a729
        if ((int32_t)v3 < 0) {
            // 0x40a710
            return v4 & 0xffffffff;
        }
        // 0x40a72f
        v2 = v4;
        if (g63 != -1) {
            // 0x40a710
            return v4 & 0xffffffff;
        }
    } else {
        uint32_t v5 = fcntl((int32_t)fd, cmd); // 0x40a6f7
        if (v5 >= 0 || *__errno_location() != 22) {
            // 0x40a706
            g63 = 1;
            // 0x40a710
            return (int64_t)v5 & 0xffffffff;
        }
        int64_t v6 = function_40a6a0(fd & 0xffffffff, 0, v1, a4); // 0x40a7b7
        int64_t v7 = v6 & 0xffffffff; // 0x40a7bc
        if ((int32_t)v6 < 0) {
            // 0x40a710
            return v7 & 0xffffffff;
        }
        // 0x40a7c6
        g63 = -1;
        v2 = v7;
    }
    int32_t fd2 = v2; // 0x40a73f
    if (fcntl(fd2, F_GETFD) >= 0) {
        // 0x40a74a
        if (fcntl(fd2, F_SETFD) != -1) {
            // 0x40a710
            return v2 & 0xffffffff;
        }
    }
    int32_t * v8 = __errno_location(); // 0x40a762
    close(fd2);
    // 0x40a710
    return 0xffffffff;
}
// Address range: 0x40a7e0 - 0x40a8bf
int64_t function_40a7e0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40a7ec
    uint32_t v2 = *v1; // 0x40a7ec
    int64_t v3 = a2 & 0xffffffff; // 0x40a7f1
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x40a7f4
    uint64_t v5 = (int64_t)*v4; // 0x40a7f4
    int64_t v6; // 0x40a862
    if (v3 <= v5) {
      lab_0x40a85c_2:
        // 0x40a85c
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x40a7e2
    int64_t v8 = v2; // 0x40a7e0
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x40a85c
        goto lab_0x40a85c_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x40a818
    int64_t v17; // 0x40a826
    int64_t * v18; // 0x40a840
    int64_t * v19; // 0x40a843
    int64_t v20; // 0x40a84e
    int64_t v21; // 0x40a826
    while ((v16 & 0xffffffff) > v10) {
        // 0x40a823
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x40a840
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x40a857
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x40a85c
            goto lab_0x40a85c_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x40a85c
            goto lab_0x40a85c_2;
        }
        // 0x40a812
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40a89b
    int64_t * v23 = (int64_t *)v22; // 0x40a8a0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x40a8a3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x40a8a0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x40a8b7
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40a80d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x40a85c
            goto lab_0x40a85c_2;
        }
        // 0x40a812
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x40a823
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x40a840
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x40a857
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x40a85c
                goto lab_0x40a85c_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x40a85c
                goto lab_0x40a85c_2;
            }
            // 0x40a812
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x40a880
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x40a8a0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x40a8b7
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x40a85c
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x40a8c0 - 0x40aedc
int64_t function_40a8c0(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40a8df
    int64_t v2 = *v1; // 0x40a8df
    char * str2 = (char *)v2; // 0x40a8ec
    char c = *str2; // 0x40a8ec
    int64_t v3 = v2; // 0x40a918
    int64_t v4 = 0; // 0x40a8c0
    int32_t v5; // 0x40a8c0
    int64_t v6; // 0x40a8c0
    int64_t v7; // 0x40a8c0
    int64_t v8; // 0x40a8c0
    int64_t v9; // 0x40a8c0
    int64_t v10; // 0x40a8c0
    int64_t v11; // 0x40a8c0
    int64_t v12; // 0x40a8c0
    int64_t v13; // 0x40a8c0
    int64_t str3; // 0x40a8c0
    int64_t v14; // 0x40a8c0
    int64_t v15; // 0x40a8c0
    int64_t v16; // 0x40a8c0
    int64_t v17; // 0x40a8c0
    int32_t v18; // 0x40a8c0
    int32_t v19; // 0x40a8c0
    int32_t v20; // 0x40a8c0
    int32_t v21; // 0x40a8c0
    int32_t v22; // 0x40a8c0
    int32_t v23; // 0x40a8c0
    int32_t v24; // 0x40a8c0
    int32_t v25; // 0x40a8c0
    int32_t v26; // 0x40a8c0
    int32_t v27; // 0x40a8c0
    int32_t v28; // 0x40a8c0
    int32_t v29; // 0x40a8c0
    int64_t nmemb; // 0x40a8c0
    int64_t v30; // 0x40a8c0
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x40a91c
            while (v31 != 0 == (v31 != 61)) {
                // 0x40a918
                v3++;
                v31 = *(char *)v3;
            }
            // 0x40a928
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x40a92e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x40a8f8
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x40a95c
                int64_t v34; // 0x40a8c0
                int64_t v35; // 0x40a8c0
                if (strncmp(str, str2, n) == 0) {
                    // 0x40a965
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x40aae0;
                    }
                }
                int64_t v36 = a4 + 32; // 0x40a976
                int64_t v37 = *(int64_t *)v36; // 0x40a97a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x40a950
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x40a965
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x40aae0;
                        }
                    }
                    // 0x40a976
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
                  lab_0x40a9c6:
                    // 0x40a9c6
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
                        goto lab_0x40aa20;
                    } else {
                        if (v11 == 0) {
                            // 0x40ab90
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x40aa20;
                        } else {
                            if (v39 == 0) {
                                // 0x40ab40
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40a9ea;
                                } else {
                                    // 0x40ab4c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40a9ea;
                                    } else {
                                        // 0x40ab5a
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40a9ea;
                                        } else {
                                            goto lab_0x40aa20;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40a9ea;
                            }
                        }
                    }
                }
              lab_0x40aa31:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x40ac06
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x40adb2
                            flockfile(g41);
                            int64_t v41 = *v1; // 0x40add2
                            __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x40ae1f
                            int64_t v43 = (int64_t)g41;
                            int64_t v44 = v43; // 0x40ae39
                            int64_t v45; // 0x40ae3b
                            if (*(char *)v42 != 0) {
                                // 0x40ae3b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g41;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x40ae33
                            while (v17 + nmemb != v42) {
                                // 0x40ae35
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x40ae3b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g41;
                                }
                                // 0x40ae28
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x40ae60
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g41);
                            v40 = *v1;
                        } else {
                            // 0x40ac14
                            __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x40ad6f
                        free((int64_t *)v17);
                    }
                    // 0x40ac69
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x40ac80
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x40ab2e
                    return 63;
                }
                // 0x40aa50
                v5 = v39;
                if (v13 != 0) {
                    // 0x40aad4
                    v35 = v13;
                    v34 = v25;
                  lab_0x40aae0:;
                    int32_t * v49 = (int32_t *)a7; // 0x40aaf0
                    uint32_t v50 = *v49; // 0x40aaf0
                    int64_t v51 = v50; // 0x40aaf0
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40aafa
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x40ab03
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x40ad2f
                                __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x40acda
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x40ab2e
                            return 63;
                        }
                        // 0x40ab78
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x40ae8f
                                    __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x40ad8d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x40ada0
                                // 0x40ab2e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x40ac9e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x40acb2
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x40ab1b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x40ab1e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x40ab22
                    int64_t result = v59; // 0x40ab28
                    if (v58 != 0) {
                        // 0x40ab2a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x40ab2e
                    return result;
                }
            } else {
                // 0x40a92e
                v5 = v32;
            }
            // break -> 0x40aa55
            break;
        }
    }
    // 0x40aa55
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x40aa6d
        if (*(char *)(v60 + 1) != 45) {
            // 0x40aa77
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x40ab2e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x40abb9
        __fprintf_chk(g41, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x40aaa6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x40aab6
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x40aa20:
    // 0x40aa20
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x40aa20
    int64_t v63 = *(int64_t *)v62; // 0x40aa24
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x40aa31
        goto lab_0x40aa31;
    }
    goto lab_0x40a9c6;
  lab_0x40a9ea:
    // 0x40a9ea
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x40a8c0
    int32_t v65; // 0x40a8c0
    int32_t v66; // 0x40a8c0
    if (v27 != 0) {
        goto lab_0x40aa20;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x40aba0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x40aa20;
            } else {
                goto lab_0x40aa11;
            }
        } else {
            // 0x40aa05
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x40acfc
                int64_t v67 = (int64_t)mem; // 0x40acfc
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x40aa20;
                } else {
                    // 0x40ad0f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x40aa11;
                }
            } else {
                goto lab_0x40aa11;
            }
        }
    }
  lab_0x40aa11:
    // 0x40aa11
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x40aa20;
}
// Address range: 0x40aee0 - 0x40b4a6
int64_t function_40aee0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x40af01
    if (v3 < 1) {
        // 0x40b0be
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40aefd
    int32_t v5 = *(int32_t *)a7; // 0x40af09
    uint64_t v6 = a1 & 0xffffffff; // 0x40af0b
    int64_t v7 = v2; // 0x40af10
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x40af13
    *v8 = 0;
    int64_t v9; // 0x40aee0
    int64_t v10; // 0x40aee0
    int64_t v11; // 0x40aee0
    int64_t v12; // 0x40aee0
    int64_t str; // 0x40aee0
    int64_t v13; // 0x40aee0
    int64_t v14; // 0x40aee0
    int64_t v15; // 0x40aee0
    int64_t v16; // 0x40aee0
    int64_t v17; // 0x40aee0
    int32_t v18; // 0x40aee0
    char v19; // 0x40aee0
    if (v5 == 0) {
        // 0x40b0f8
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40af2a;
    } else {
        // 0x40af23
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x40af70
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x40af73
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x40b038;
            } else {
                int64_t v22 = v7 + 1; // 0x40af86
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x40af96
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40b04c;
                } else {
                    goto lab_0x40afa8;
                }
            }
        } else {
            goto lab_0x40af2a;
        }
    }
  lab_0x40af2a:
    // 0x40af2a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x40af30
    *v24 = 0;
    int64_t v25; // 0x40aee0
    int64_t v26; // 0x40aee0
    int64_t v27; // 0x40aee0
    switch (*(char *)&v2) {
        case 45: {
            // 0x40b020
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40b02d;
        }
        case 43: {
            // 0x40b330
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40b02d;
        }
        default: {
            // 0x40af4c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40b2af
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x40b3c8
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40b02d;
                } else {
                    // 0x40b2bd
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x40af5a;
                }
            } else {
                goto lab_0x40af5a;
            }
        }
    }
  lab_0x40b038:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40b03f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x40afa8;
    } else {
        goto lab_0x40b04c;
    }
  lab_0x40af5a:
    // 0x40af5a
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40b02d;
  lab_0x40b02d:
    // 0x40b02d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x40b038;
  lab_0x40afa8:;
    uint32_t v30 = *(int32_t *)a7; // 0x40afa8
    int64_t v31 = v30; // 0x40afa8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x40afaa
    if ((int64_t)*v32 > v31) {
        // 0x40afaf
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x40afb2
    if (*v33 > v30) {
        // 0x40afb7
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40afba
    int64_t v35 = v31; // 0x40afbe
    int64_t v36 = v15; // 0x40afbe
    int64_t v37; // 0x40aee0
    int64_t v38; // 0x40aee0
    int64_t v39; // 0x40aee0
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x40b128
        int64_t v41 = v40; // 0x40b128
        v2 = v41;
        int64_t v42; // 0x40aee0
        if (*v33 == v40) {
            // 0x40b310
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40b318
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x40b134
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x40b138
                function_40a7e0(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x40b148
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x40b151
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x40b15a
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x40b171
            int64_t v47 = v45 & 0xffffffff; // 0x40b175
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x40b17e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x40b184
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x40b186;
                }
            }
            int64_t v48 = v47 + 1; // 0x40b160
            int64_t v49 = v48 & 0xffffffff; // 0x40b160
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x40b171
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x40b17e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x40b184
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x40b186;
                    }
                }
                // 0x40b160
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x40b328
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x40b186;
    } else {
        goto lab_0x40afc4;
    }
  lab_0x40b04c:
    // 0x40b04c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40b04f
    int64_t v51 = v12; // 0x40b04f
    int64_t v52 = v14; // 0x40b04f
    if (*(char *)v10 == 0) {
        goto lab_0x40afa8;
    } else {
        goto lab_0x40b055;
    }
  lab_0x40afc4:;
    int32_t v53 = v35; // 0x40afc4
    int64_t v54; // 0x40aee0
    int64_t v55; // 0x40aee0
    int64_t v56; // 0x40aee0
    int64_t v57; // 0x40aee0
    int64_t v58; // 0x40aee0
    int64_t v59; // 0x40aee0
    char * v60; // 0x40aee0
    int64_t v61; // 0x40aee0
    int64_t v62; // 0x40afd9
    int64_t v63; // 0x40aee0
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x40b113
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x40b116;
    } else {
        // 0x40afcc
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x40aee0
        int64_t v66 = v65 ? -1 : 1; // 0x40afe0
        int64_t v67 = (int64_t)"--"; // 0x40aee0
        int64_t v68 = v62; // 0x40aee0
        int64_t v69 = 3; // 0x40afe0
        unsigned char v70 = *(char *)v68; // 0x40afe0
        char v71 = *(char *)v67; // 0x40afe0
        char v72 = v71; // 0x40afe0
        bool v73 = false; // 0x40afe0
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
            // 0x40b0d0
            if (*(char *)v62 == 45) {
                // 0x40b190
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x40b190
                if (c == 0) {
                    goto lab_0x40b0da;
                } else {
                    // 0x40b19d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x40b220;
                    } else {
                        if (c == 45) {
                            // 0x40b403
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x40b275;
                        } else {
                            // 0x40b1ae
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x40b220;
                            } else {
                                // 0x40b1b3
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x40b1d4;
                                } else {
                                    // 0x40b1ba
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x40b220;
                                    } else {
                                        goto lab_0x40b1d4;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40b0da;
            }
        } else {
            uint32_t v75 = *v33; // 0x40aff0
            v2 = v75;
            int32_t v76 = *v32; // 0x40aff3
            int64_t v77 = v35 + 1; // 0x40aff6
            int32_t v78 = v77; // 0x40aff9
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x40b360
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x40b007
                    function_40a7e0(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x40b015
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x40b116;
        }
    }
  lab_0x40b055:;
    // 0x40b055
    int64_t v79; // bp-104, 0x40aee0
    int64_t v80 = &v79; // 0x40aeea
    int64_t v81 = v50 + 1; // 0x40b055
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x40b05c
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x40b061
    *v83 = v81;
    char v84 = *(char *)v2; // 0x40b065
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x40b069
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x40b071
    *v86 = v84;
    char * str2 = (char *)v52; // 0x40b076
    int32_t c2 = v84; // 0x40b076
    char * found_char_pos = strchr(str2, c2); // 0x40b076
    int64_t v87 = *v82; // 0x40b07b
    v2 = v87;
    int64_t v88 = *v85; // 0x40b085
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x40b090
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x40b380
            __fprintf_chk(g41, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40b34d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40b0be
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x40b076
    char v91 = *(char *)(v90 + 1); // 0x40b0ab
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x40b065
        if (v91 != 58) {
            // 0x40b0be
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x40b2d4
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x40b3d8
                *v8 = 0;
            } else {
                // 0x40b3bc
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40b2fe
            *v83 = 0;
            // 0x40b0be
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40b2de
        if (v93 != 0) {
            // 0x40b370
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40b2fe
            *v83 = 0;
            // 0x40b0be
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x40b2f1
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40b2fe
            *v83 = 0;
            // 0x40b0be
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40b43a
            __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40b3ea
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x40b3f1
        // 0x40b2fe
        *v83 = 0;
        // 0x40b0be
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x40b249
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40b24b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x40b470
                __fprintf_chk(g41, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x40b421
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x40b428
            // 0x40b0be
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x40b256
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x40b25a
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x40b275;
  lab_0x40b186:
    // 0x40b186
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x40afc4;
  lab_0x40b275:;
    int64_t v99 = function_40a8c0(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x40b293
    // 0x40b0be
    return v99 & 0xffffffff;
  lab_0x40b116:;
    int32_t v100 = v55; // 0x40b116
    if (v100 != (int32_t)v59) {
        // 0x40b11a
        *(int32_t *)a7 = v100;
    }
    // 0x40b0be
    return 0xffffffff;
  lab_0x40b0da:
    // 0x40b0da
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x40b0e1
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40b0be
    return v99 & 0xffffffff;
  lab_0x40b220:
    // 0x40b220
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x40b055;
  lab_0x40b1d4:
    // 0x40b1d4
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_40a8c0(v6, a2, str, a4, a5, v57, v1, v11, (int64_t *)"-"); // 0x40b1fa
    if ((int32_t)v101 != -1) {
        // 0x40b0be
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40b20f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x40b220;
}
// Address range: 0x40b4b0 - 0x40b506
int64_t function_40b4b0(int64_t a1) {
    // 0x40b4b0
    *(int32_t *)&g64 = g37;
    *(int32_t *)&g65 = g36;
    int64_t v1; // 0x40b4b0
    int64_t result = function_40aee0(v1, v1, v1, v1, v1, v1, &g64, a1 & 0xffffffff); // 0x40b4d6
    g37 = *(int32_t *)&g64;
    g69 = (char *)g67;
    *(int32_t *)&g35 = g66;
    return result;
}
// Address range: 0x40b510 - 0x40b528
int64_t function_40b510(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b510
    return function_40b4b0(1);
}
// Address range: 0x40b530 - 0x40b543
int64_t function_40b530(int64_t a1, int64_t a2, char * a3, char (**a4)[6], int32_t a5, int64_t a6) {
    // 0x40b530
    return function_40b4b0(0);
}
// Address range: 0x40b550 - 0x40b565
int64_t function_40b550(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b550
    return function_40aee0(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x40b570 - 0x40b586
int64_t function_40b570(void) {
    // 0x40b570
    return function_40b4b0(0);
}
// Address range: 0x40b590 - 0x40b5a8
int64_t function_40b590(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x40b590
    return function_40aee0(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x40b5b0 - 0x40b6a1
int64_t function_40b5b0(int64_t a1) {
    int32_t fds[2]; // 0x40b605
    // 0x40b5b0
    int64_t v1; // bp-312, 0x40b5b0
    uint32_t result = __fxstat(1, (int32_t)a1, (struct stat *)&v1); // 0x40b5c7
    if (result != 0) {
        // 0x40b5f2
        return result;
    }
    // 0x40b5d2
    int32_t fd2; // 0x40b5b0
    int32_t v2 = fd2 & 0xf000; // 0x40b5d6
    bool result2 = v2 == 0x1000 | v2 == 0xc000;
    if (!result2) {
        // 0x40b5f2
        return result2;
    }
    // 0x40b600
    int32_t fd; // bp-320, 0x40b5b0
    fds[0] = &fd;
    uint32_t result3 = pipe(fds); // 0x40b605
    if (result3 != 0) {
        // 0x40b5f2
        return result3;
    }
    // 0x40b610
    int64_t v3; // bp-168, 0x40b5b0
    uint32_t v4 = __fxstat(1, fd, (struct stat *)&v3); // 0x40b621
    int64_t result4 = v4; // 0x40b626
    int32_t * v5 = __errno_location(); // 0x40b628
    close(fd);
    close(fd2);
    if (v4 != 0) {
        // 0x40b5f2
        return result4;
    }
    // 0x40b649
    int64_t v6; // 0x40b5b0
    if ((uint64_t)v6 > v6) {
        // 0x40b5f2
        return result4;
    }
    // 0x40b65f
    if ((fd2 & 0xf000) == 0x1000) {
        // 0x40b5f2
        return v2 == 0x1000;
    }
    // 0x40b5f2
    return v2 == 0xc000;
}
// Address range: 0x40b6b0 - 0x40b72a
int64_t function_40b6b0(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40b6bb
    int64_t v2 = (int64_t)&g16; // 0x40b6bb
    int32_t * pwc; // 0x40b6b0
    int64_t v3; // 0x40b6b0
    int64_t n; // 0x40b6b0
    if (a2 == 0) {
        goto lab_0x40b702;
    } else {
        // 0x40b6bd
        if (a3 == 0) {
            // 0x40b6e8
            return -2;
        }
        // 0x40b6c9
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x40b702;
        } else {
            goto lab_0x40b6d4;
        }
    }
  lab_0x40b702:
    // 0x40b702
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x40b6b0
    pwc = (int32_t *)&v4;
    goto lab_0x40b6d4;
  lab_0x40b6d4:;
    char * wstr = (char *)v3; // 0x40b6da
    int64_t ps; // 0x40b6b0
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40b6da
    int64_t result = v5; // 0x40b6da
    if (v5 < 0xfffffffe) {
        // 0x40b6e8
        return result;
    }
    int64_t result2 = result; // 0x40b719
    if ((char)function_40ba10(0, v3) == 0) {
        // 0x40b71b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x40b6e8
    return result2;
}
// Address range: 0x40b730 - 0x40b834
int64_t function_40b730(int64_t result, uint64_t a2, int64_t a3) {
    // 0x40b730
    if (a3 == 0) {
        // 0x40b769
        return 0;
    }
    int64_t v1 = result; // 0x40b73c
    int64_t v2 = a3; // 0x40b73c
    int64_t result2; // 0x40b730
    if (result % 8 != 0) {
        char v3 = a2; // 0x40b73e
        int64_t v4 = result; // 0x40b741
        if ((char)result == v3) {
            // 0x40b769
            return result;
        }
        int64_t v5 = a3; // 0x40b741
        v5--;
        result2 = 0;
        while (v5 != 0) {
            // 0x40b750
            v4++;
            v1 = v4;
            v2 = v5;
            if (v4 % 8 == 0) {
                goto lab_0x40b770;
            }
            // 0x40b756
            result2 = v4;
            if (*(char *)v4 == v3) {
                // break -> 0x40b769
                break;
            }
            v5--;
            result2 = 0;
        }
        // 0x40b769
        return result2;
    }
  lab_0x40b770:;
    int64_t result3 = v1; // 0x40b79d
    int64_t v6 = v2; // 0x40b79d
    if (v2 >= 8) {
        int64_t v7 = 256 * a2 & 0xff00 | a2 % 256; // 0x40b77f
        int64_t v8 = 0x10000 * v7 | v7; // 0x40b78c
        int64_t v9 = 0x100000000 * v8 | v8; // 0x40b796
        int64_t v10 = *(int64_t *)v1 ^ v9; // 0x40b7b6
        result3 = v1;
        v6 = v2;
        if (((v10 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v10 - 0x101010101010101) == 0) {
            int64_t v11 = v2 - 8; // 0x40b7e5
            int64_t v12 = v1 + 8; // 0x40b7e9
            while (v11 >= 8) {
                int64_t v13 = *(int64_t *)v12 ^ v9; // 0x40b7d3
                result3 = v12;
                v6 = v11;
                if (((v13 & -0x7f7f7f7f7f7f7f80 ^ -0x7f7f7f7f7f7f7f80) & v13 - 0x101010101010101) != 0) {
                    goto lab_0x40b7fc;
                }
                v11 -= 8;
                v12 += 8;
            }
            // 0x40b7f3
            result3 = v12;
            v6 = v11;
            if (v11 == 0) {
                // 0x40b769
                return 0;
            }
        }
    }
  lab_0x40b7fc:;
    char v14 = a2; // 0x40b7fc
    if (*(char *)result3 == v14) {
        // 0x40b769
        return result3;
    }
    int64_t v15 = result3 + 1;
    result2 = 0;
    while (v15 != v6 + result3) {
        // 0x40b810
        result2 = v15;
        if (*(char *)v15 == v14) {
            // break -> 0x40b769
            break;
        }
        v15++;
        result2 = 0;
    }
    // 0x40b769
    return result2;
}
// Address range: 0x40b840 - 0x40b8e2
int64_t function_40b840(int64_t * a1, int32_t a2) {
    int64_t v1 = (int64_t)a1;
    if (*(int64_t *)(v1 + 8) >= 0x3b9aca00) {
        // 0x40b8d0
        *__errno_location() = 22;
        // 0x40b8c7
        return 0xffffffff;
    }
    int64_t v2 = a2;
    struct timespec * rmtp = (struct timespec *)v2;
    int64_t v3 = v1; // 0x40b869
    int64_t v4 = v1; // 0x40b869
    int64_t rqtp; // bp-40, 0x40b840
    if (a1 <= (int64_t *)0x1fa400) {
      lab_0x40b8b8:
        // 0x40b8b8
        rqtp = v4;
        // 0x40b8c7
        return nanosleep((struct timespec *)&rqtp, rmtp);
    }
    rqtp = 0x1fa400;
    v3 -= 0x1fa400;
    int32_t v5 = nanosleep((struct timespec *)&rqtp, rmtp); // 0x40b897
    while (v5 == 0) {
        // 0x40b870
        v4 = v3;
        if (v3 < 0x1fa401) {
            goto lab_0x40b8b8;
        }
        rqtp = 0x1fa400;
        v3 -= 0x1fa400;
        v5 = nanosleep((struct timespec *)&rqtp, rmtp);
    }
    int64_t result = v5; // 0x40b897
    if (a2 == 0) {
        // 0x40b8c7
        return result;
    }
    // 0x40b8a5
    *(int64_t *)v2 = v3 + v2;
    return result;
}
// Address range: 0x40b8f0 - 0x40b94d
int64_t function_40b8f0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x40b8f7
    int64_t v2; // 0x40b8f0
    int64_t result = function_40bff0(a1, v2); // 0x40b908
    if ((v2 & 32) != 0) {
        // 0x40b930
        if ((int32_t)result == 0) {
            // 0x40b934
            *__errno_location() = 0;
        }
        // 0x40b92a
        return 0xffffffff;
    }
    // 0x40b911
    if ((int32_t)result == 0) {
        // 0x40b92a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x40b918
    if (v1 == 0) {
        // 0x40b91a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40b92a
    return result2;
}
// Address range: 0x40b950 - 0x40ba0c
int64_t function_40b950(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x40b950
    int128_t v1; // 0x40b950
    __asm_comisd(v1, g17);
    bool v2; // 0x40b950
    if (v2 || v2) {
        // 0x40b96c
        return -0x8000000000000000;
    }
    int128_t v3 = __asm_movsd(0x43e0000000000000); // 0x40b95e
    __asm_comisd(v3, v1);
    int64_t v4 = __asm_cvttsd2si(v1); // 0x40b980
    __asm_pxor(v3, v3);
    int128_t v5 = __asm_cvtsi2sd(v4); // 0x40b98b
    int128_t v6 = __asm_mulsd_6(__asm_subsd(v1, v5), 0x41cdcd6500000000); // 0x40b994
    __asm_pxor(v5, v5);
    int64_t v7 = __asm_cvttsd2si(v6); // 0x40b9a0
    __asm_comisd(v6, __asm_cvtsi2sd(v7));
    int64_t result = (v7 >> 63) + v4; // 0x40b9d2
    if ((v7 >> 63 & -0x3b9aca00) + v7 < 0) {
        // 0x40ba00
        return result - 1;
    }
    // 0x40b96c
    return result;
}
// Address range: 0x40ba10 - 0x40ba6e
int64_t function_40ba10(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x40ba16
    if (locale == NULL) {
        // 0x40ba43
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x40ba16
    bool v2; // 0x40ba10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"C"; // 0x40ba10
    int64_t v5 = v1; // 0x40ba10
    int64_t v6 = 2; // 0x40ba35
    unsigned char v7 = *(char *)v5; // 0x40ba35
    char v8 = *(char *)v4; // 0x40ba35
    char v9 = v8; // 0x40ba35
    bool v10 = false; // 0x40ba35
    while (v7 == v8) {
        // 0x40ba28
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
    int64_t v12 = (int64_t)"POSIX"; // 0x40ba41
    int64_t v13 = v1; // 0x40ba41
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x40ba43
        return 0;
    }
    int64_t v14 = 6; // 0x40ba41
    unsigned char v15 = *(char *)v13; // 0x40ba5d
    char v16 = *(char *)v12; // 0x40ba5d
    char v17 = v16; // 0x40ba5d
    bool v18 = false; // 0x40ba5d
    while (v15 == v16) {
        // 0x40ba50
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
// Address range: 0x40ba70 - 0x40bfd2
int64_t function_40ba70(void) {
    char * v1 = nl_langinfo(14); // 0x40ba86
    char * v2 = g68; // 0x40ba8b
    char * v3; // 0x40ba70
    int64_t v4; // 0x40ba70
    int64_t v5; // 0x40ba70
    int64_t v6; // 0x40ba70
    int64_t v7; // 0x40ba70
    int32_t size; // 0x40ba70
    int32_t size2; // 0x40ba70
    int32_t len; // 0x40bb42
    int64_t v8; // 0x40bb42
    char * env_val; // 0x40bb2d
    if (v2 == NULL) {
        // 0x40bb28
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x40bb95;
        } else {
            // 0x40bb3a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x40bb95;
            } else {
                // 0x40bb3f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40bb2d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x40bfc5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x40bb95;
                    } else {
                        // 0x40bf39
                        size2 = len + 14;
                        goto lab_0x40bb5b;
                    }
                } else {
                    goto lab_0x40bb5b;
                }
            }
        }
    } else {
        // 0x40ba70
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x40baaa;
    }
  lab_0x40bddc:;
    // 0x40bddc
    struct _IO_FILE * stream; // 0x40bc1b
    int32_t v10 = __uflow(stream); // 0x40bddf
    int64_t v11; // 0x40ba70
    int64_t v12 = v11; // 0x40bde9
    int64_t v13; // 0x40ba70
    int64_t v14 = v13; // 0x40bde9
    int32_t v15 = v10; // 0x40bde9
    int64_t v16; // 0x40ba70
    int64_t v17 = v16; // 0x40bde9
    int64_t v18 = v11; // 0x40bde9
    int64_t v19 = v13; // 0x40bde9
    int64_t v20 = v16; // 0x40bde9
    if (v10 == -1) {
        // break -> 0x40bdef
        goto lab_0x40bdef;
    }
    goto lab_0x40bc69;
  lab_0x40bc5e:;
    // 0x40bc5e
    int64_t v90; // 0x40ba70
    int64_t * v32; // 0x40bc50
    *v32 = v90 + 1;
    int64_t v89; // 0x40ba70
    v12 = v89;
    int64_t v91; // 0x40ba70
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x40ba70
    v17 = v92;
    goto lab_0x40bc69;
  lab_0x40bc69:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x40ba70
    int32_t v25; // bp-120, 0x40ba70
    int32_t v26; // bp-184, 0x40ba70
    int64_t v27; // 0x40bc1b
    int64_t v28; // 0x40bc38
    int64_t v29; // 0x40bc3d
    int64_t * v30; // 0x40bc54
    switch (c) {
        case 32: {
            goto lab_0x40bc50;
        }
        case 10: {
            goto lab_0x40bc50;
        }
        case 9: {
            goto lab_0x40bc50;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x40be41
            int32_t v33; // 0x40ba70
            char v34; // 0x40ba70
            int32_t v35; // 0x40be4e
            if (v31 < *v30) {
                // 0x40be20
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x40be4b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x40be41
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x40be20
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x40be4b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x40be30
                v36 = v33;
            }
            // 0x40bf1f
            if (v36 == -1) {
                // break -> 0x40bdef
                break;
            }
            goto lab_0x40bc50;
        }
        default: {
            // 0x40bc7f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x40bdef
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x40bca8
            int64_t v39 = v37 + 4; // 0x40bcaa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x40bcb6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x40bcb8
            while (v41 == 0) {
                // 0x40bca8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x40bcd6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x40bce2
            int64_t v45 = v43 + 4; // 0x40bce4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x40bcf0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x40bcf2
            while (v47 == 0) {
                // 0x40bce2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40bcdf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x40bd08
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x40bd18
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40bd1c
            int64_t v52 = v51 + v48; // 0x40bd25
            int64_t * mem; // 0x40ba70
            int64_t v53; // 0x40ba70
            int64_t v54; // 0x40ba70
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x40be5b
                int64_t v56 = v55 + 3; // 0x40be67
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x40bd41
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x40bd50
            if (mem == NULL) {
                // 0x40bf7c
                free((int64_t *)v21);
                function_40bff0(v27, v53);
                v24 = (int64_t)&g16;
                goto lab_0x40bbf4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x40bd68
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x40bd72
            uint32_t v62 = (int32_t)v59; // 0x40bd75
            int64_t v63; // 0x40ba70
            if (v62 >= 8) {
                // 0x40be84
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x40be9e
                int64_t v66 = v61 - v65; // 0x40bea2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x40bead
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x40bebe
                    int64_t v70 = v69 & 0xffffffff; // 0x40bebe
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x40bebb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x40bf4f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x40bd87
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x40bd8b
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
            int64_t v73 = v51 + 1; // 0x40bd9b
            int64_t v74 = v60 - 1; // 0x40bd9f
            uint32_t v75 = (int32_t)v73; // 0x40bda4
            int64_t v76; // 0x40ba70
            if (v75 >= 8) {
                // 0x40bed2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x40bedc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x40beec
                int64_t v80 = v74 - v79; // 0x40bef0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x40befb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x40bf0b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x40bf09
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x40bf66
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x40bf6e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x40bdb6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x40bdba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x40bfb3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x40bdce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40bc5e;
            } else {
                goto lab_0x40bddc;
            }
        }
    }
  lab_0x40bc50:;
    int64_t v93 = v23; // 0x40ba70
    int64_t v94 = v22; // 0x40ba70
    int64_t v95 = v21; // 0x40ba70
    goto lab_0x40bc50_2;
  lab_0x40bb95:;
    int64_t * mem3 = malloc(size); // 0x40bb95
    int64_t v97 = (int64_t)&g16; // 0x40bba0
    int64_t v98; // 0x40ba70
    int64_t path; // 0x40ba70
    if (mem3 == NULL) {
        goto lab_0x40bb72;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x40bb95
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x40bbb6;
    }
  lab_0x40baaa:;
    int64_t str = v1 == NULL ? (int64_t)&g16 : (int64_t)v1; // 0x40ba9d
    char v100 = *v3; // 0x40baaa
    int64_t v101; // 0x40ba70
    if (v100 == 0) {
        // 0x40bb04
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x40ba70
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x40ba70
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x40baf0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x40baf7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x40bac0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40bacd
        char v107 = *(char *)v106; // 0x40bad2
        v102 = v107;
        if (v107 == 0) {
            // 0x40bb04
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40badb
    v104 = v103 + 1;
  lab_0x40baf7:
    // 0x40bb04
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x40bb72:;
    char * v108 = (char *)v97;
    g68 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x40baaa;
  lab_0x40bbb6:;
    int64_t v109 = v98 + path; // 0x40bbb6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x40bbe2
    v24 = (int64_t)&g16;
    if (fd >= 0) {
        // 0x40bc11
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x40bf42
            close(fd);
            v24 = (int64_t)&g16;
        } else {
            // 0x40bc35
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x40bc50_2:;
                uint64_t v96 = *v32; // 0x40bc50
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x40bddc;
                } else {
                    goto lab_0x40bc5e;
                }
            }
          lab_0x40bdef:
            // 0x40bdef
            function_40bff0(v27, v19);
            v24 = (int64_t)&g16;
            if (v18 != 0) {
                // 0x40be0e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x40bbf4;
  lab_0x40bb5b:;
    int64_t * mem4 = malloc(size2); // 0x40bb5b
    v97 = (int64_t)&g16;
    if (mem4 != NULL) {
        // 0x40bc01
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x40bbb6;
    } else {
        goto lab_0x40bb72;
    }
  lab_0x40bbf4:
    // 0x40bbf4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x40bb72;
}
// Address range: 0x40bfe0 - 0x40bfee
int64_t function_40bfe0(int64_t a1, int64_t a2) {
    // 0x40bfe0
    int64_t v1; // 0x40bfe0
    return function_40a6a0(a1, 0, 3, v1);
}
// Address range: 0x40bff0 - 0x40c06b
int64_t function_40bff0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x40bff7
    if (fileno(stream) < 0) {
        // 0x40c057
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x40c00a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40c03b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x40c057
            return fclose(stream);
        }
    }
    // 0x40c00c
    if ((int32_t)function_40c070(a1, v1) == 0) {
        // 0x40c057
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x40c018
    int32_t v3 = *v2; // 0x40c020
    int64_t result = fclose(stream); // 0x40c02e
    if (v3 != 0) {
        // 0x40c060
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x40c030
    return result;
}
// Address range: 0x40c070 - 0x40c0b0
int64_t function_40c070(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40c08a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40c08a
        return fflush(stream);
    }
    // 0x40c098
    function_40c0b0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x40c0b0 - 0x40c107
int64_t function_40c0b0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x40c0b0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x40c0ba
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x40c0eb
    int64_t result = -1; // 0x40c0f4
    if (v1 != -1) {
        // 0x40c0f6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x40c102
    return result;
}
// Address range: 0x40c110 - 0x40c16d
int64_t function_40c110(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40c110
    return function_401930();
}
// Address range: 0x40c170 - 0x40c171
int64_t function_40c170(void) {
    // 0x40c170
    int64_t result; // 0x40c170
    return result;
}
// Address range: 0x40c180 - 0x40c198
int64_t function_40c180(int64_t a1, int64_t a2, int64_t a3) {
    // 0x40c180
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g22);
}
// Address range: 0x40c198 - 0x40c1b8
int64_t function_40c198(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g18; // 0x40c1a2
    while (*(int64_t *)v1 != -1) {
        // 0x40c1a3
        v1 -= 8;
    }
    // 0x40c1b4
    return result;
}
