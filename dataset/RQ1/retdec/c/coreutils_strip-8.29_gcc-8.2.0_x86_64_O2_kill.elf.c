// Address range: 0x401820 - 0x401825
int64_t function_401820(void) {
    // 0x401820
    abort();
    // UNREACHABLE
}
// Address range: 0x401825 - 0x40182a
int64_t function_401825(void) {
    // 0x401825
    abort();
    // UNREACHABLE
}
// Address range: 0x40182a - 0x40182f
int64_t function_40182a(void) {
    // 0x40182a
    abort();
    // UNREACHABLE
}
// Address range: 0x40182f - 0x401834
int64_t function_40182f(void) {
    // 0x40182f
    abort();
    // UNREACHABLE
}
// Address range: 0x401834 - 0x401839
int64_t function_401834(void) {
    // 0x401834
    abort();
    // UNREACHABLE
}
// Address range: 0x401839 - 0x40183e
int64_t function_401839(void) {
    // 0x401839
    abort();
    // UNREACHABLE
}
// Address range: 0x401840 - 0x401dd4
int64_t function_401840(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a1 & 0xffffffff; // 0x401855
    int64_t v2; // bp-136, 0x401840
    int64_t v3 = &v2; // 0x401862
    function_4024c0(a2);
    setlocale(LC_ALL, (char *)&g11);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    function_406170(0x402420, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int64_t v4 = 0xffffffff; // 0x40189b
    int64_t v5 = 0; // 0x40189b
    int64_t v6 = 0; // 0x40189b
    int32_t v7; // 0x401840
    int64_t v8; // 0x401840
    int64_t v9; // 0x401840
    int64_t v10; // 0x401840
    int64_t v11; // 0x401840
    int64_t v12; // 0x401840
    int32_t v13; // 0x401840
    int64_t v14; // 0x401840
    int64_t v15; // 0x401840
    while (true) {
      lab_0x4018a0_2:
        // 0x4018a0
        v14 = v4;
        v8 = v5;
        v10 = v6;
        uint32_t v16; // 0x401840
        while (true) {
          lab_0x4018a0:
            // 0x4018a0
            v11 = v10;
            v9 = v8;
            int64_t v17 = function_405680(v1, a2, "0::1::2::3::4::5::6::7::8::9::A::B::C::D::E::F::G::H::I::J::K::M::N::O::P::Q::R::S::T::U::V::W::X::Y::Z::Lln:s:t", &g3, 0, a6); // 0x4018b3
            v16 = (int32_t)v17;
            v12 = 1;
            switch (v16) {
                case -1: {
                    goto lab_0x401a01;
                }
                case 76: {
                    goto lab_0x4018ee;
                }
                default: {
                    if (v16 <= 76) {
                        // break -> 0x401978
                        break;
                    }
                    // 0x4018d0
                    v12 = v11;
                    if (v16 != 108) {
                        if (v16 <= 108) {
                            if (v16 > 90) {
                                goto lab_0x40190a;
                            } else {
                                // 0x40191e
                                v13 = g27;
                                goto lab_0x401925;
                            }
                        }
                        if (v16 == 115) {
                            // 0x401a50
                            v15 = g47;
                            goto lab_0x401955;
                        }
                        // 0x4018e2
                        v12 = 1;
                        if (v16 != 116) {
                            if (v16 == 110) {
                                // 0x401a50
                                v15 = g47;
                                goto lab_0x401955;
                            } else {
                                goto lab_0x40190a;
                            }
                        }
                    }
                    goto lab_0x4018ee;
                }
            }
        }
        if (v16 > 57) {
            if (v16 <= 64) {
                // 0x40190a
                function_401ec0(1);
                // UNREACHABLE
            }
            int32_t v18 = g27; // 0x40191e
            v13 = v18;
            goto lab_0x401925;
        } else {
            if (v16 <= 47) {
                if (v16 == -131) {
                    struct _IO_FILE * v19 = g30; // 0x40199d
                    char (*v20)[5] = g18; // 0x4019a4
                    function_404560((int64_t)v19, "kill", "GNU coreutils", (int64_t)v20, "Paul Eggert", 0);
                    exit(0);
                    // UNREACHABLE
                }
                if (v16 == -130) {
                    // 0x4019dd
                    function_401ec0(0);
                    // UNREACHABLE
                }
                goto lab_0x40190a;
            }
            int32_t v21 = g27; // 0x4019e8
            v13 = 2;
            if (v21 != 2) {
                int32_t v22 = v21 - 1; // 0x4019f8
                g27 = v22;
                v7 = v22;
                goto lab_0x401a01_2;
            }
            goto lab_0x401925;
        }
    }
  lab_0x401a01:
    // 0x401a01
    v7 = g27;
    goto lab_0x401a01_2;
  lab_0x401a90:;
    // 0x401a90
    int64_t v76; // 0x401840
    function_4040e0(v76);
    error(0, (int32_t)"%s: invalid process id" ^ (int32_t)"%s: invalid process id", dcgettext(NULL, "%s: invalid process id", 5));
    int64_t v77 = 1; // 0x401abe
    goto lab_0x401ac3;
  lab_0x401ac3:;
    // 0x401ac3
    int64_t v75; // 0x401840
    int64_t v79 = v75 + 8; // 0x401ac3
    int64_t v80 = *(int64_t *)v79; // 0x401ac7
    int64_t v73 = v80; // 0x401acd
    int64_t v74 = v77; // 0x401acd
    v75 = v79;
    int64_t v78 = v77; // 0x401acd
    if (v80 == 0) {
        // break -> 0x401afb
        goto lab_0x401afb;
    }
    goto lab_0x401acf;
  lab_0x4018ee:
    // 0x4018ee
    v8 = 1;
    v10 = v12;
    int64_t v71 = (int64_t)"multiple -l or -t options specified"; // 0x4018f1
    if (v9 != 0) {
        goto lab_0x401d7a;
    }
    goto lab_0x4018a0;
  lab_0x401925:;
    int64_t v81 = *(int64_t *)(a2 - 8 + 8 * (int64_t)v13); // 0x401931
    int64_t v82 = g47; // 0x401937
    int64_t v83 = v81; // 0x401937
    if (g47 == 0) {
        int64_t v84 = -1; // 0x401a64
        int64_t v85 = 0; // 0x401a64
        while (v84 != 0) {
            int64_t v86 = v83;
            v84--;
            bool v87; // 0x401840
            v83 = v86 + (v87 ? -1 : 1);
            v85 = v84;
            if (*(char *)v86 == 0) {
                // break -> 
                break;
            }
            v85 = 0;
        }
        int64_t v88 = v81 - 1 + -1 - v85; // 0x401a69
        g47 = v88;
        v82 = v88;
    }
    // 0x40193d
    if (v82 != v81 + 2) {
        // 0x401d94
        error(0, (int32_t)"invalid option -- %c" ^ (int32_t)"invalid option -- %c", dcgettext(NULL, "invalid option -- %c", 5));
        function_401ec0(1);
        // UNREACHABLE
    }
    int64_t v89 = v81 + 1; // 0x40194a
    g47 = v89;
    v15 = v89;
    goto lab_0x401955;
  lab_0x401955:;
    int64_t v90 = v15;
    if (v14 != 0xffffffff) {
        // 0x401d3c
        function_4040e0(v90);
        error(0, (int32_t)"%s: multiple signals specified" ^ (int32_t)"%s: multiple signals specified", dcgettext(NULL, "%s: multiple signals specified", 5));
        function_401ec0(1);
        // UNREACHABLE
    }
    // 0x40195e
    int64_t v91; // bp-120, 0x401840
    int64_t v92 = function_402250(v90, &v91); // 0x401963
    v4 = v92 & 0xffffffff;
    v5 = v9;
    v6 = v11;
    if ((int32_t)v92 < 0) {
      lab_0x40190a:
        // 0x40190a
        function_401ec0(1);
        // UNREACHABLE
    }
    goto lab_0x4018a0_2;
  lab_0x401a01_2:;
    int64_t v23 = v7; // 0x401a01
    int64_t v24; // 0x401840
    char * str; // bp-88, 0x401840
    if (v14 == 0xffffffff) {
        // 0x401b0d
        v24 = 15;
        if (v9 != 0) {
            int64_t v25 = v1 > v23 ? 8 * v23 + a2 : 0;
            if ((char)v11 == 0) {
                if (v25 == 0) {
                    int64_t v26 = 1; // 0x401840
                    int64_t v27 = function_4058e0(v26, (int64_t *)&str, (int64_t)"0::1::2::3::4::5::6::7::8::9::A::B::C::D::E::F::G::H::I::J::K::M::N::O::P::Q::R::S::T::U::V::W::X::Y::Z::Lln:s:t"); // 0x401d29
                    if ((int32_t)v27 == 0) {
                        // 0x401d32
                        puts((char *)&str);
                    }
                    int64_t v28 = v26 + 1; // 0x401d18
                    v26 = v28 & 0xffffffff;
                    while ((int32_t)v28 != 65) {
                        // 0x401d24
                        v27 = function_4058e0(v26, (int64_t *)&str, (int64_t)"0::1::2::3::4::5::6::7::8::9::A::B::C::D::E::F::G::H::I::J::K::M::N::O::P::Q::R::S::T::U::V::W::X::Y::Z::Lln:s:t");
                        if ((int32_t)v27 == 0) {
                            // 0x401d32
                            puts((char *)&str);
                        }
                        // 0x401d18
                        v28 = v26 + 1;
                        v26 = v28 & 0xffffffff;
                    }
                    // 0x401afb
                    return 0;
                }
                int64_t * v29 = (int64_t *)v25; // 0x401c32
                int64_t v30 = *v29; // 0x401c32
                if (v30 == 0) {
                    // 0x401afb
                    return 0;
                }
                int64_t v31 = v25; // 0x401c2e
                int64_t v32 = function_402250(v30, (int64_t *)&str); // 0x401c44
                int64_t v33 = 1; // 0x401c4b
                int64_t v34; // 0x401840
                char v35; // 0x401c19
                if ((int32_t)v32 >= 0) {
                    // 0x401c15
                    v34 = 0;
                    v35 = *(char *)*v29;
                    if (v35 == 57 || (int32_t)v35 < 57) {
                        // 0x401c24
                        puts((char *)&str);
                        v33 = v34;
                    } else {
                        // 0x401c8d
                        __printf_chk(1, "%d\n", v32 & 0xffffffff);
                        v33 = v34;
                    }
                }
                // 0x401c2e
                v31 += 8;
                int64_t * v36 = (int64_t *)v31; // 0x401c32
                int64_t v37 = *v36; // 0x401c32
                int64_t * v38 = v36; // 0x401c39
                int64_t v39 = v33; // 0x401c39
                while (v37 != 0) {
                    // 0x401c3f
                    v32 = function_402250(v37, (int64_t *)&str);
                    v33 = 1;
                    if ((int32_t)v32 >= 0) {
                        // 0x401c15
                        v34 = v39;
                        v35 = *(char *)*v38;
                        if (v35 == 57 || (int32_t)v35 < 57) {
                            // 0x401c24
                            puts((char *)&str);
                            v33 = v34;
                        } else {
                            // 0x401c8d
                            __printf_chk(1, "%d\n", v32 & 0xffffffff);
                            v33 = v34;
                        }
                    }
                    // 0x401c2e
                    v31 += 8;
                    v36 = (int64_t *)v31;
                    v37 = *v36;
                    v38 = v36;
                    v39 = v33;
                }
                // 0x401afb
                return v33 & 0xffffffff;
            }
            int64_t v40 = (int64_t)&str; // 0x401b33
            int64_t v41 = (int64_t)"0::1::2::3::4::5::6::7::8::9::A::B::C::D::E::F::G::H::I::J::K::M::N::O::P::Q::R::S::T::U::V::W::X::Y::Z::Lln:s:t"; // 0x401b38
            int64_t v42 = 1; // 0x401b38
            int64_t v43 = 0;
            int64_t v44 = function_4058e0(v42, (int64_t *)&str, v41); // 0x401b46
            int64_t v45 = v41; // 0x401b4d
            int64_t v46 = v43; // 0x401b4d
            int64_t v47; // 0x401840
            int32_t v48; // 0x401b52
            int64_t v49; // 0x401b54
            int32_t v50; // 0x401b60
            uint32_t v51; // 0x401b62
            unsigned char v52; // 0x401b80
            if ((int32_t)v44 == 0) {
                v47 = v40;
                v48 = *(int32_t *)v47;
                v49 = v47 + 4;
                v50 = v48 - 0x1010101 & (v48 ^ -0x7f7f7f80);
                v51 = v50 & -0x7f7f7f80;
                while (v51 == 0) {
                    // 0x401b52
                    v47 = v49;
                    v48 = *(int32_t *)v47;
                    v49 = v47 + 4;
                    v50 = v48 - 0x1010101 & (v48 ^ -0x7f7f7f80);
                    v51 = v50 & -0x7f7f7f80;
                }
                // 0x401b69
                v52 = (char)((v50 & 0x8080) == 0 ? v51 / 0x10000 : v51);
                v45 = ((v50 & 0x8080) == 0 ? v47 + 6 : v49) - (-1 - v52 < v52 ? 4 : 3) - v40;
                v46 = (v45 > (v43 & 0xffffffff) ? v45 : v43) & 0xffffffff;
            }
            int64_t v53 = v46;
            int64_t v54 = v45;
            int64_t v55 = v42 + 1; // 0x401b94
            v41 = v54;
            v42 = v55 & 0xffffffff;
            while ((int32_t)v55 != 65) {
                // 0x401b40
                v43 = v53;
                v44 = function_4058e0(v42, (int64_t *)&str, v41);
                v45 = v41;
                v46 = v43;
                if ((int32_t)v44 == 0) {
                    v47 = v40;
                    v48 = *(int32_t *)v47;
                    v49 = v47 + 4;
                    v50 = v48 - 0x1010101 & (v48 ^ -0x7f7f7f80);
                    v51 = v50 & -0x7f7f7f80;
                    while (v51 == 0) {
                        // 0x401b52
                        v47 = v49;
                        v48 = *(int32_t *)v47;
                        v49 = v47 + 4;
                        v50 = v48 - 0x1010101 & (v48 ^ -0x7f7f7f80);
                        v51 = v50 & -0x7f7f7f80;
                    }
                    // 0x401b69
                    v52 = (char)((v50 & 0x8080) == 0 ? v51 / 0x10000 : v51);
                    v45 = ((v50 & 0x8080) == 0 ? v47 + 6 : v49) - (-1 - v52 < v52 ? 4 : 3) - v40;
                    v46 = (v45 > (v43 & 0xffffffff) ? v45 : v43) & 0xffffffff;
                }
                // 0x401b94
                v53 = v46;
                v54 = v45;
                v55 = v42 + 1;
                v41 = v54;
                v42 = v55 & 0xffffffff;
            }
            if (v25 == 0) {
                int64_t * v56 = (int64_t *)(v3 - 16);
                int64_t sig_num = 1;
                int64_t v57 = function_4058e0(sig_num, (int64_t *)&str, v54); // 0x401cc9
                int64_t v58 = v54; // 0x401cd0
                char * v59; // 0x401cd4
                if ((int32_t)v57 == 0) {
                    // 0x401cd2
                    v59 = strsignal((int32_t)sig_num);
                    *(int64_t *)(v3 - 8) = v54;
                    *v56 = v59 == NULL ? (int64_t)&g2 : (int64_t)v59;
                    __printf_chk(1, "%*d %-*s %s\n", 2, sig_num, v53 & 0xffffffff, &str);
                    v58 = 2;
                }
                int64_t v60 = sig_num + 1; // 0x401cb8
                while ((int32_t)v60 != 65) {
                    // 0x401cc4
                    sig_num = v60 & 0xffffffff;
                    int64_t v61 = v58;
                    v57 = function_4058e0(sig_num, (int64_t *)&str, v61);
                    v58 = v61;
                    if ((int32_t)v57 == 0) {
                        // 0x401cd2
                        v59 = strsignal((int32_t)sig_num);
                        *(int64_t *)(v3 - 8) = v61;
                        *v56 = v59 == NULL ? (int64_t)&g2 : (int64_t)v59;
                        __printf_chk(1, "%*d %-*s %s\n", 2, sig_num, v53 & 0xffffffff, &str);
                        v58 = 2;
                    }
                    // 0x401cb8
                    v60 = sig_num + 1;
                }
                // 0x401afb
                return 0;
            }
            int64_t v62 = *(int64_t *)v25; // 0x401bb5
            if (v62 == 0) {
                // 0x401afb
                return 0;
            }
            int64_t * v63 = (int64_t *)(v3 - 16);
            int64_t v64 = v25; // 0x401bb1
            int64_t v65 = function_402250(v62, (int64_t *)&str); // 0x401bc5
            uint32_t sig_num2 = (int32_t)v65; // 0x401bcd
            int64_t v66 = 1; // 0x401bcf
            int64_t v67; // 0x401bca
            char * v68; // 0x401bd3
            if (sig_num2 >= 0) {
                // 0x401bd1
                v66 = 0;
                v67 = v65 & 0xffffffff;
                v68 = strsignal(sig_num2);
                *(int64_t *)(v3 - 8) = v67;
                *v63 = v68 == NULL ? (int64_t)&g2 : (int64_t)v68;
                __printf_chk(1, "%*d %-*s %s\n", 2, v67, v53 & 0xffffffff, &str);
            }
            // 0x401bb1
            v64 += 8;
            int64_t v69 = *(int64_t *)v64; // 0x401bb5
            int64_t v70 = v66; // 0x401bbc
            while (v69 != 0) {
                // 0x401bc2
                v65 = function_402250(v69, (int64_t *)&str);
                sig_num2 = (int32_t)v65;
                v66 = 1;
                if (sig_num2 >= 0) {
                    // 0x401bd1
                    v66 = v70;
                    v67 = v65 & 0xffffffff;
                    v68 = strsignal(sig_num2);
                    *(int64_t *)(v3 - 8) = v67;
                    *v63 = v68 == NULL ? (int64_t)&g2 : (int64_t)v68;
                    __printf_chk(1, "%*d %-*s %s\n", 2, v67, v53 & 0xffffffff, &str);
                }
                // 0x401bb1
                v64 += 8;
                v69 = *(int64_t *)v64;
                v70 = v66;
            }
            // 0x401afb
            return v66 & 0xffffffff;
        }
    } else {
        // 0x401a11
        v24 = v14;
        v71 = (int64_t)"cannot combine signal with -l or -t";
        if (v9 != 0) {
          lab_0x401d7a:
            // 0x401d7a
            error(0, 0, dcgettext(NULL, (char *)v71, 5));
            // 0x40190a
            function_401ec0(1);
            // UNREACHABLE
        }
    }
    // 0x401a24
    if (v1 <= v23) {
        // 0x401d7a
        error(0, 0, dcgettext(NULL, (char *)(int64_t)"no process ID specified", 5));
        // 0x40190a
        function_401ec0(1);
        // UNREACHABLE
    }
    int64_t v72 = 8 * v23 + a2; // 0x401a37
    int32_t * err_num = __errno_location(); // 0x401a43
    int32_t sig_num3 = v24;
    v73 = *(int64_t *)v72;
    v74 = 0;
    v75 = v72;
    while (true) {
      lab_0x401acf:
        // 0x401acf
        v76 = v73;
        *err_num = 0;
        int32_t pid = __strtol_internal((char *)v76, &str, 10, 0); // 0x401ae3
        if (*err_num == 34) {
            goto lab_0x401a90;
        } else {
            if ((int64_t)pid >= 0x80000000) {
                goto lab_0x401a90;
            } else {
                // 0x401af6
                if (v76 == (int64_t)str) {
                    goto lab_0x401a90;
                } else {
                    // 0x401a87
                    if (*str == 0) {
                        // 0x401c55
                        v77 = v74;
                        if (kill(pid, sig_num3) != 0) {
                            // 0x401c66
                            error(0, *err_num, "%s", (char *)function_4040e0(v76));
                            v77 = 1;
                        }
                        goto lab_0x401ac3;
                    } else {
                        goto lab_0x401a90;
                    }
                }
            }
        }
    }
  lab_0x401afb:
    // 0x401afb
    return v78 & 0xffffffff;
}
// Address range: 0x401de0 - 0x401e0b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x401de0
    int64_t v1; // 0x401de0
    __libc_start_main(0x401840, (int32_t)a4, (char **)&v1, (void (*)())0x406100, (void (*)())0x406160, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x401e0b - 0x401e2a
int64_t function_401e0b(void) {
    // 0x401e0b
    return 0x609428;
}
// Address range: 0x401e2a - 0x401e61
int64_t function_401e2a(void) {
    // 0x401e2a
    return 0;
}
// Address range: 0x401e61 - 0x401eb8
int64_t function_401e61(void) {
    // 0x401e61
    if (g33 != 0) {
        // 0x401eb7
        int64_t result; // 0x401e61
        return result;
    }
    int64_t v1 = g34; // 0x401e94
    int64_t result2; // 0x401ea6
    if (g34 >= ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401ea6
        result2 = function_401e0b();
        g33 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g15 - (int64_t)&g14 >> 3) - 1) {
        // 0x401e96
        v1++;
    }
    // 0x401e8a
    g34 = v1;
    // 0x401ea6
    result2 = function_401e0b();
    g33 = 1;
    return result2;
}
// Address range: 0x401eb8 - 0x401ebd
int64_t function_401eb8(void) {
    // 0x401eb8
    return function_401e2a();
}
// Address range: 0x401ec0 - 0x402245
int64_t function_401ec0(int64_t a1) {
    int32_t status = a1; // 0x401ed6
    if (status != 0) {
        // 0x401eda
        __fprintf_chk(g32, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x401eff
        exit(status);
        // UNREACHABLE
    }
    // 0x401f06
    __printf_chk(1, dcgettext(NULL, "Usage: %s [-s SIGNAL | -SIGNAL] PID...\n  or:  %s -l [SIGNAL]...\n  or:  %s -t [SIGNAL]...\n", 5));
    fputs_unlocked(dcgettext(NULL, "Send signals to processes, or list signals.\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "  -s, --signal=SIGNAL, -SIGNAL\n                   specify the name or number of the signal to be sent\n  -l, --list       list signal names, or convert signal names to/from numbers\n  -t, --table      print a table of signal information\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g30);
    fputs_unlocked(dcgettext(NULL, "\nSIGNAL may be a signal name like 'HUP', or a signal number like '1',\nor the exit status of a process terminated by a signal.\nPID is an integer; if negative it identifies a process group.\n", 5), g30);
    __printf_chk(1, dcgettext(NULL, "\nNOTE: your shell may have its own version of %s, which usually supersedes\nthe version described here.  Please refer to your shell's documentation\nfor details about the options it supports.\n", 5));
    int64_t v1 = &g1; // bp-136, 0x402021
    bool v2; // 0x401ec0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x4020a8
    int64_t v6 = *(int64_t *)v5; // 0x4020ac
    int64_t v7 = 5; // 0x4020b2
    while (v6 != 0) {
        int64_t v8 = (int64_t)"kill";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x4020be
        char v11 = *(char *)v9; // 0x4020be
        char v12 = v11; // 0x4020be
        bool v13 = false; // 0x4020be
        while (v10 == v11) {
            // 0x4020b4
            v7--;
            int64_t v14 = v9 + v3; // 0x4020be
            int64_t v15 = v8 + v3; // 0x4020be
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
            // break -> 0x4020ca
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 5;
    }
    // 0x4020ca
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x4021dc;
        } else {
            // 0x4021c6
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40221b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40212c;
            } else {
                goto lab_0x4021dc;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x40212c;
        } else {
            // 0x402112
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x40221b
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x40212c;
            } else {
                goto lab_0x40212c;
            }
        }
    }
  lab_0x4021dc:
    // 0x4021dc
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40216c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401eff
    exit(status);
    // UNREACHABLE
  lab_0x40212c:
    // 0x40212c
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x40216c
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x401eff
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402250 - 0x4023f4
int64_t function_402250(int64_t str, int64_t * a2) {
    char v1 = str;
    int64_t v2; // 0x402250
    int64_t v3; // 0x402250
    int32_t result; // bp-52, 0x402250
    int64_t v4; // 0x4022f8
    if (v1 == 57 || (int32_t)v1 < 57) {
        int32_t * v5 = __errno_location(); // 0x402271
        *v5 = 0;
        char * endptr; // bp-48, 0x402250
        int32_t str_as_l = strtol((char *)str, &endptr, 10); // 0x40228c
        if ((int64_t)endptr == str) {
            // 0x4022b8
            result = -1;
            goto lab_0x4022c0;
        } else {
            // 0x40229b
            if (*endptr != 0) {
                // 0x4022b8
                result = -1;
                goto lab_0x4022c0;
            } else {
                // 0x4022a0
                if (*v5 != 0) {
                    // 0x4022b8
                    result = -1;
                    goto lab_0x4022c0;
                } else {
                    if (str_as_l == -1) {
                        // 0x4023eb
                        result = -1;
                        goto lab_0x4022c0;
                    } else {
                        int64_t v6 = str_as_l; // 0x40228c
                        int32_t v7 = str_as_l - 254; // 0x4023cd
                        int64_t v8 = (v7 < 0 == (253 - str_as_l & str_as_l) < 0 == (v7 != 0) ? 255 : 127) & v6; // 0x4023e0
                        result = v8;
                        v3 = v6;
                        v2 = v8;
                        goto lab_0x402359;
                    }
                }
            }
        }
    } else {
        // 0x4022f8
        v4 = function_4048d0(str);
        char * v9 = (char *)v4; // 0x4022fd
        char c = *v9; // 0x4022fd
        if (c != 0) {
            if (strchr("abcdefghijklmnopqrstuvwxyz", (int32_t)c) != NULL) {
                // 0x402322
                *(char *)v4 = c - 32;
            }
            int64_t v10 = v4 + 1; // 0x402328
            char v11 = *(char *)v10; // 0x40232c
            while (v11 != 0) {
                int64_t v12 = v10;
                char c2 = v11;
                if (strchr("abcdefghijklmnopqrstuvwxyz", (int32_t)c2) != NULL) {
                    // 0x402322
                    *(char *)v12 = c2 - 32;
                }
                // 0x402328
                v10 = v12 + 1;
                v11 = *(char *)v10;
            }
        }
        // 0x402334
        if ((int32_t)function_405780(v4, &result) != 0) {
            // 0x402380
            if (*v9 == 83) {
                // 0x4023a0
                if (*(char *)(v4 + 1) != 73) {
                    // 0x402387
                    result = -1;
                    free((int64_t *)v4);
                    goto lab_0x4022c0;
                } else {
                    // 0x4023a7
                    if (*(char *)(v4 + 2) != 71) {
                        // 0x402387
                        result = -1;
                        free((int64_t *)v4);
                        goto lab_0x4022c0;
                    } else {
                        // 0x4023ae
                        if ((int32_t)function_405780(v4 + 3, &result) != 0) {
                            // 0x402387
                            result = -1;
                            free((int64_t *)v4);
                            goto lab_0x4022c0;
                        } else {
                            goto lab_0x402345;
                        }
                    }
                }
            } else {
                // 0x402387
                result = -1;
                free((int64_t *)v4);
                goto lab_0x4022c0;
            }
        } else {
            goto lab_0x402345;
        }
    }
  lab_0x402345:
    // 0x402345
    free((int64_t *)v4);
    v2 = result;
    if (result < 0) {
        goto lab_0x4022c0;
    } else {
        goto lab_0x402359;
    }
  lab_0x4022c0:
    // 0x4022c0
    function_4040e0(str);
    error(0, (int32_t)"%s: invalid signal" ^ (int32_t)"%s: invalid signal", dcgettext(NULL, "%s: invalid signal", 5));
    // 0x40236f
    return 0xffffffff;
  lab_0x402359:
    // 0x402359
    if ((int32_t)function_4058e0(v2 & 0xffffffff, a2, v3) == 0) {
        // 0x40236f
        return result;
    }
    goto lab_0x4022c0;
}
// Address range: 0x402400 - 0x402408
int64_t function_402400(int64_t a1) {
    // 0x402400
    g36 = a1;
    int64_t result; // 0x402400
    return result;
}
// Address range: 0x402410 - 0x402418
int64_t function_402410(int64_t a1) {
    // 0x402410
    g35 = a1;
    int64_t result; // 0x402410
    return result;
}
// Address range: 0x402420 - 0x4024be
int64_t function_402420(void) {
    // 0x402420
    int32_t * err_num; // 0x402436
    if ((int32_t)function_4059b0((int64_t)g30) == 0) {
        goto lab_0x40244c;
    } else {
        // 0x402436
        err_num = __errno_location();
        if (g35 == 0) {
            goto lab_0x402463;
        } else {
            // 0x402447
            if (*err_num != 32) {
                goto lab_0x402463;
            } else {
                goto lab_0x40244c;
            }
        }
    }
  lab_0x40244c:;
    int64_t result = function_4059b0((int64_t)g32); // 0x402453
    if ((int32_t)result == 0) {
        // 0x40245c
        return result;
    }
    // 0x40249e
    _exit(g19);
    // UNREACHABLE
  lab_0x402463:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x40246f
    if (g36 == 0) {
        // 0x4024a9
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402483
        error(0, *err_num, "%s: %s", (char *)function_403f30((int64_t)g36), v1);
    }
    // 0x40249e
    _exit(g19);
    // UNREACHABLE
}
// Address range: 0x4024c0 - 0x402559
int64_t function_4024c0(int64_t str) {
    // 0x4024c0
    if (str == 0) {
        // 0x402539
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g32);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x4024ce
    int64_t result = (int64_t)found_char_pos; // 0x4024ce
    if (found_char_pos == NULL) {
        // 0x402529
        g37 = str;
        g31 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x4024d8
    if (v1 - str < 7) {
        // 0x402529
        g37 = str;
        g31 = str;
        return result;
    }
    // 0x4024e8
    bool v2; // 0x4024c0
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x4024c0
    int64_t v5 = result - 6; // 0x4024c0
    int64_t v6 = 7; // 0x4024f6
    unsigned char v7 = *(char *)v5; // 0x4024f6
    char v8 = *(char *)v4; // 0x4024f6
    char v9 = v8; // 0x4024f6
    bool v10 = false; // 0x4024f6
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
    int64_t v12 = (int64_t)"lt-"; // 0x402500
    int64_t v13 = v1; // 0x402500
    int64_t v14 = 3; // 0x402500
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x402529
        g37 = str;
        g31 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x402512
    char v16 = *(char *)v12; // 0x402512
    char v17 = v16; // 0x402512
    bool v18 = false; // 0x402512
    while (v15 == v16) {
        // 0x402502
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
    int64_t v20 = v1; // 0x40251c
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x40251e
        v20 = result + 4;
        g29 = v20;
    }
    // 0x402529
    g37 = v20;
    g31 = v20;
    return result;
}
// Address range: 0x402560 - 0x402652
int64_t function_402560(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x402574
    int64_t result = (int64_t)v1; // 0x402574
    if (result != a1) {
        // 0x402581
        return result;
    }
    int64_t v2 = function_405a70(); // 0x402590
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x402646
    if (v3 == 85) {
        // 0x4025a0
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x402638
            result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
            return result2;
        }
        char v4 = *v1; // 0x4025ce
        int64_t result3 = v4 != 96 ? (int64_t)&g5 : (int64_t)&g8; // 0x4025db
        // 0x402581
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x402638
        result2 = (int32_t)a2 != 9 ? (int64_t)&g9 : (int64_t)&g4;
        return result2;
    }
    char v5 = *v1; // 0x40261d
    int64_t result4 = v5 != 96 ? (int64_t)&g6 : (int64_t)&g7; // 0x40262a
    // 0x402581
    return result4;
}
// Address range: 0x402660 - 0x4026b7
int64_t function_402660(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x402660
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x4026a8
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x4026b7 - 0x403881
int64_t function_4026b7(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x402701
    int64_t v3 = 0; // 0x402701
    int64_t v4; // 0x4026b7
    int64_t v5; // 0x4026b7
    int64_t v6; // 0x4026b7
    int64_t v7; // 0x4026b7
    int64_t v8; // 0x4026b7
    int64_t v9; // 0x4026b7
    int64_t v10; // 0x4026b7
    int64_t v11; // 0x4026b7
    int64_t v12; // 0x4026b7
    int64_t v13; // 0x4026b7
    int64_t v14; // 0x4026b7
    int64_t v15; // 0x4026b7
    int64_t v16; // 0x4026b7
    int64_t v17; // 0x4026b7
    int64_t v18; // 0x4026b7
    int64_t result; // 0x4026b7
    int64_t v19; // 0x4026b7
    int32_t wc; // bp+132, 0x4026b7
    int64_t ps; // bp+136, 0x4026b7
    char v20; // 0x402c70
    int64_t v21; // 0x402c70
    int64_t v22; // 0x403018
    int64_t v23; // 0x4026b7
    int64_t v24; // 0x403037
    int32_t v25; // 0x4026b7
    while (true) {
      lab_0x402708_2:
        // 0x402708
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x4026b7
        int64_t v27; // 0x40273c
        while (true) {
          lab_0x402708:
            // 0x402708
            v5 = v26;
            bool v28 = v15 == v5; // 0x402713
            if (v15 == -1) {
                // 0x402715
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x402723
            if (v28) {
                // break (via goto) -> 0x402e88
                goto lab_0x402e88;
            }
            // 0x40272c
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g48 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x402d1b
                    if (v25 % 2 == 0) {
                        goto lab_0x402861;
                    }
                    // 0x40313d
                    v26 = v5 + 1;
                    goto lab_0x402708;
                }
                case 7: {
                    goto lab_0x402861;
                }
                case 8: {
                    goto lab_0x402861;
                }
                case 9: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x402861;
                }
                case 12: {
                    goto lab_0x402861;
                }
                case 13: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x40282d;
                }
                case 36: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x402861;
                }
                case 38: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x402861;
                }
                case 44: {
                    goto lab_0x402861;
                }
                case 45: {
                    goto lab_0x402861;
                }
                case 46: {
                    goto lab_0x402861;
                }
                case 47: {
                    goto lab_0x402861;
                }
                case 48: {
                    goto lab_0x402861;
                }
                case 49: {
                    goto lab_0x402861;
                }
                case 50: {
                    goto lab_0x402861;
                }
                case 51: {
                    goto lab_0x402861;
                }
                case 52: {
                    goto lab_0x402861;
                }
                case 53: {
                    goto lab_0x402861;
                }
                case 54: {
                    goto lab_0x402861;
                }
                case 55: {
                    goto lab_0x402861;
                }
                case 56: {
                    goto lab_0x402861;
                }
                case 57: {
                    goto lab_0x402861;
                }
                case 58: {
                    goto lab_0x402861;
                }
                case 59: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x402861;
                }
                case 66: {
                    goto lab_0x402861;
                }
                case 67: {
                    goto lab_0x402861;
                }
                case 68: {
                    goto lab_0x402861;
                }
                case 69: {
                    goto lab_0x402861;
                }
                case 70: {
                    goto lab_0x402861;
                }
                case 71: {
                    goto lab_0x402861;
                }
                case 72: {
                    goto lab_0x402861;
                }
                case 73: {
                    goto lab_0x402861;
                }
                case 74: {
                    goto lab_0x402861;
                }
                case 75: {
                    goto lab_0x402861;
                }
                case 76: {
                    goto lab_0x402861;
                }
                case 77: {
                    goto lab_0x402861;
                }
                case 78: {
                    goto lab_0x402861;
                }
                case 79: {
                    goto lab_0x402861;
                }
                case 80: {
                    goto lab_0x402861;
                }
                case 81: {
                    goto lab_0x402861;
                }
                case 82: {
                    goto lab_0x402861;
                }
                case 83: {
                    goto lab_0x402861;
                }
                case 84: {
                    goto lab_0x402861;
                }
                case 85: {
                    goto lab_0x402861;
                }
                case 86: {
                    goto lab_0x402861;
                }
                case 87: {
                    goto lab_0x402861;
                }
                case 88: {
                    goto lab_0x402861;
                }
                case 89: {
                    goto lab_0x402861;
                }
                case 90: {
                    goto lab_0x402861;
                }
                case 91: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x402861;
                }
                case 94: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x402861;
                }
                case 96: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x402861;
                }
                case 98: {
                    goto lab_0x402861;
                }
                case 99: {
                    goto lab_0x402861;
                }
                case 100: {
                    goto lab_0x402861;
                }
                case 101: {
                    goto lab_0x402861;
                }
                case 102: {
                    goto lab_0x402861;
                }
                case 103: {
                    goto lab_0x402861;
                }
                case 104: {
                    goto lab_0x402861;
                }
                case 105: {
                    goto lab_0x402861;
                }
                case 106: {
                    goto lab_0x402861;
                }
                case 107: {
                    goto lab_0x402861;
                }
                case 108: {
                    goto lab_0x402861;
                }
                case 109: {
                    goto lab_0x402861;
                }
                case 110: {
                    goto lab_0x402861;
                }
                case 111: {
                    goto lab_0x402861;
                }
                case 112: {
                    goto lab_0x402861;
                }
                case 113: {
                    goto lab_0x402861;
                }
                case 114: {
                    goto lab_0x402861;
                }
                case 115: {
                    goto lab_0x402861;
                }
                case 116: {
                    goto lab_0x402861;
                }
                case 117: {
                    goto lab_0x402861;
                }
                case 118: {
                    goto lab_0x402861;
                }
                case 119: {
                    goto lab_0x402861;
                }
                case 120: {
                    goto lab_0x402861;
                }
                case 121: {
                    goto lab_0x402861;
                }
                case 122: {
                    goto lab_0x402861;
                }
                case 123: {
                    goto lab_0x402805;
                }
                case 124: {
                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x402805;
                }
                case 126: {
                    goto lab_0x40282d;
                }
                default: {
                    goto lab_0x402c05;
                }
            }
        }
      lab_0x402c05:
        if (v23 != 1) {
            // 0x402f70
            ps = 0;
            int64_t len = v15; // 0x402f80
            if (v15 == -1) {
                // 0x402f82
                len = strlen((char *)str);
            }
            // 0x402fae
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x40300f:
                // 0x40300f
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403014
                int64_t v30 = v29 + str;
                v24 = function_405700(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40358a_2;
                    }
                    case -1: {
                        goto lab_0x40358a_2;
                    }
                    case -2: {
                        // 0x40366d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x4036a7
                            v19 = v18;
                            int64_t v31 = v18; // 0x4036aa
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x4036b7
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x4036b0
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40358a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40358a_2;
                    }
                    case 1: {
                        goto lab_0x402fe0;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x40308c
                        char v34 = *(char *)v33; // 0x40309d
                        unsigned char v35; // 0x4026b7
                        if (v34 < 125) {
                            // 0x4030a8
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x4030bf
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_402660(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403090
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x40309d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x4030a8
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x4030bf
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_402660(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403090
                            v33++;
                        }
                        goto lab_0x402fe0;
                    }
                }
            }
            goto lab_0x40358a_2;
        } else {
            // 0x402c54
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x402861;
        }
    }
  lab_0x402e88:
    // 0x402e88
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40378a
        if (v8 > result) {
            // 0x403793
            *(char *)(v12 + result) = 0;
        }
        // 0x402ab7
        return result;
    }
    return function_402660(v10, v6, str, v4, 2, v25 & -3);
  lab_0x402861:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x402870
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x402a7a_2;
        }
    }
    int64_t v39 = result; // 0x402971
    char v40 = v20; // 0x402971
    int64_t v41 = v38; // 0x402971
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x402971
    int64_t v43 = v36; // 0x402971
    goto lab_0x4028ed;
  lab_0x402a7a_2:
    // 0x402ab7
    return function_402660(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40358a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x402861;
    } else {
        uint64_t v49 = v46 + v5; // 0x40315e
        int64_t v50 = v5 + 1; // 0x403241
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403248
        char v52 = v20; // 0x403248
        int64_t v53 = result; // 0x403248
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403211
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403215
            int64_t v56 = v54 + 1; // 0x40321a
            int64_t v57 = v51 + 1; // 0x403241
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x40320c
                v54 = v56;
                if (v47 > v54) {
                    // 0x403211
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403215
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
        goto lab_0x4028ed;
    }
  lab_0x402fe0:
    // 0x402fe0
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x402fff
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403002
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40358a
        goto lab_0x40358a_2;
    }
    goto lab_0x40300f;
  lab_0x40282d:
    // 0x40282d
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x402a7a_2;
    }
    goto lab_0x402861;
  lab_0x402805:;
    bool v60 = v15 == 1; // 0x402810
    if (v15 == -1) {
        // 0x402812
        v60 = *(char *)v1 == 0;
    }
    // 0x40281e
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x402861;
    } else {
        goto lab_0x40282d;
    }
  lab_0x4028ed:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x4028f2
        *(char *)(v44 + v45) = v40;
    }
    // 0x4028f6
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x402708_2;
}
// Address range: 0x403890 - 0x403a2e
int64_t function_403890(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x403892
    int32_t * v3 = __errno_location(); // 0x4038ac
    int64_t v4 = (int64_t)g21; // 0x4038b1
    int32_t v5 = *v3; // 0x4038bb
    int64_t v6 = v4; // 0x4038d1
    if (v2 >= (int64_t)*(int32_t *)&g24) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x403a29
            function_4048f0(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x4038e0
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x4038e7
        int64_t v9; // 0x403890
        if (g21 == &g22) {
            int64_t v10 = function_404700(0, v8); // 0x403a0a
            int128_t v11 = __asm_movdqa(*(int128_t *)&g22); // 0x403a0f
            *(int64_t *)&g21 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_404700(v4, v8); // 0x4038fb
            *(int64_t *)&g21 = v12;
            v9 = v12;
        }
        // 0x40390a
        v6 = v9;
        int32_t v13 = *(int32_t *)&g24; // 0x40390a
        int32_t v14 = v7; // 0x403911
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g24 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x403941
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x40394b
    int64_t * v17 = (int64_t *)v15; // 0x40394e
    uint64_t v18 = *v17; // 0x40394e
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x403951
    int64_t result = *v19; // 0x403951
    int64_t v20; // 0x403890
    uint64_t v21 = function_402660(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x403974
    if (v18 > v21) {
        // 0x4039eb
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x403987
    *v17 = v22;
    if (result != (int64_t)&g38) {
        // 0x403997
        free((int64_t *)result);
    }
    int64_t result2 = function_4046a0(v22); // 0x4039b1
    *v19 = result2;
    int64_t v23; // 0x403890
    function_402660(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x4039eb
    *v3 = v5;
    return result2;
}
// Address range: 0x403a30 - 0x403a64
int64_t function_403a30(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x403a37
    int64_t result = function_4048a0(a1 == 0 ? (int64_t)&g39 : a1, 56); // 0x403a56
    return result;
}
// Address range: 0x403a70 - 0x403a7f
int64_t function_403a70(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g39 : a1); // 0x403a7c
    return result;
}
// Address range: 0x403a80 - 0x403a8f
int64_t function_403a80(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403a88
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g39;
}
// Address range: 0x403a90 - 0x403ac3
int64_t function_403a90(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 + 8 : a1 + 8; // 0x403aa9
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x403aae
    uint32_t v3 = *v2; // 0x403aae
    uint32_t v4 = (int32_t)a2 % 32; // 0x403ab2
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x403ad0 - 0x403ae3
int64_t function_403ad0(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g39 + 4 : a1 + 4); // 0x403adc
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x403af0 - 0x403b1b
int64_t function_403af0(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g39 : a1; // 0x403af8
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x403b15
        abort();
        // UNREACHABLE
    }
    // 0x403b0c
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g39;
}
// Address range: 0x403b20 - 0x403b92
int64_t function_403b20(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g39 : a5; // 0x403b42
    int32_t * v2 = __errno_location(); // 0x403b4b
    uint32_t v3 = *(int32_t *)v1; // 0x403b6b
    int64_t result = function_402660(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x403b7a
    return result;
}
// Address range: 0x403ba0 - 0x403c81
int64_t function_403ba0(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g39 : a4; // 0x403bc2
    int32_t * v2 = __errno_location(); // 0x403bc8
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x403be7
    int32_t * v4 = (int32_t *)v1; // 0x403bea
    int64_t v5 = function_402660(0, 0, a1, a2, (int64_t)*v4, v3); // 0x403c05
    int64_t v6 = v5 + 1; // 0x403c0a
    int64_t result = function_4046a0(v6); // 0x403c1f
    function_402660(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x403c64
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x403c6d
    return result;
}
// Address range: 0x403c90 - 0x403c9a
int64_t function_403c90(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403c90
    return function_403ba0(a1, a2, 0, a3);
}
// Address range: 0x403ca0 - 0x403d35
int64_t function_403ca0(void) {
    uint32_t v1 = *(int32_t *)&g24; // 0x403ca0
    int64_t v2 = v1; // 0x403ca0
    int64_t v3 = v2; // 0x403cb4
    if (v1 >= 2) {
        int64_t v4 = &g24;
        int64_t v5 = v4 + 16; // 0x403cd3
        free((int64_t *)*(int64_t *)v4);
        v3 = &g49;
        while (v5 != (int64_t)g21 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x403cd0
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g49;
        }
    }
    int64_t v6 = v3; // 0x403ced
    if (g22 != 0x6094a0) {
        // 0x403cef
        free((int64_t *)g22);
        g22 = 256;
        *(int64_t *)&g23 = (int64_t)&g38;
        v6 = &g49;
    }
    int64_t result = v6; // 0x403d11
    if (g21 != &g22) {
        // 0x403d13
        free(g21);
        *(int64_t *)&g21 = (int64_t)&g22;
        result = &g49;
    }
    // 0x403d26
    *(int32_t *)&g24 = 1;
    return result;
}
// Address range: 0x403d40 - 0x403d51
int64_t function_403d40(void) {
    // 0x403d40
    int64_t v1; // 0x403d40
    return function_403890(v1, v1, -1, (int64_t *)&g39);
}
// Address range: 0x403d60 - 0x403d6a
int64_t function_403d60(void) {
    // 0x403d60
    int64_t v1; // 0x403d60
    return function_403890(v1, v1, v1, (int64_t *)&g39);
}
// Address range: 0x403d70 - 0x403d86
int64_t function_403d70(int64_t a1) {
    // 0x403d70
    return function_403890(0, a1, -1, (int64_t *)&g39);
}
// Address range: 0x403d90 - 0x403da2
int64_t function_403d90(int64_t a1, int64_t a2) {
    // 0x403d90
    return function_403890(0, a1, a2, (int64_t *)&g39);
}
// Address range: 0x403db0 - 0x403e18
int64_t function_403db0(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403dc0
    return function_403890((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x403e20 - 0x403e84
int64_t function_403e20(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403e30
    return function_403890((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x403e90 - 0x403e9c
int64_t function_403e90(int64_t a1, int64_t a2) {
    // 0x403e90
    return function_403db0(0, a1 & 0xffffffff, a2);
}
// Address range: 0x403ea0 - 0x403eaf
int64_t function_403ea0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x403ea0
    return function_403e20(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x403eb0 - 0x403f20
int64_t function_403eb0(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403ebd
    int128_t v2 = __asm_movdqa(g40); // 0x403ec5
    int128_t v3 = __asm_movdqa(g41); // 0x403ecd
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x403ee2
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x403ef8
    uint32_t v6 = *v5; // 0x403ef8
    uint32_t v7 = (int32_t)a3 % 32; // 0x403efd
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_403890(0, a1, a2, &v4);
}
// Address range: 0x403f20 - 0x403f2d
int64_t function_403f20(int64_t a1, int64_t a2) {
    // 0x403f20
    return function_403eb0(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x403f30 - 0x403f41
int64_t function_403f30(int64_t a1) {
    // 0x403f30
    return function_403eb0(a1, -1, 58);
}
// Address range: 0x403f50 - 0x403f5a
int64_t function_403f50(void) {
    // 0x403f50
    int64_t v1; // 0x403f50
    return function_403eb0(v1, v1, 58);
}
// Address range: 0x403f60 - 0x403fce
int64_t function_403f60(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x403f7a
    return function_403890(a1, a3, -1, &v1);
}
// Address range: 0x403fd0 - 0x40403c
int64_t function_403fd0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g39); // 0x403fd7
    int128_t v2 = __asm_movdqa(g40); // 0x403fdf
    int128_t v3 = __asm_movdqa(g41); // 0x403fe7
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404009
    if (a2 == 0 || a3 == 0) {
        // 0x404037
        abort();
        // UNREACHABLE
    }
    // 0x40401a
    return function_403890(a1, a4, a5, &v4);
}
// Address range: 0x404040 - 0x404049
int64_t function_404040(void) {
    // 0x404040
    int64_t v1; // 0x404040
    return function_403fd0(v1, v1, v1, v1, -1);
}
// Address range: 0x404050 - 0x404067
int64_t function_404050(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404050
    return function_403fd0(0, a1, a2, a3, -1);
}
// Address range: 0x404070 - 0x404083
int64_t function_404070(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404070
    return function_403fd0(0, a1, a2, a3, a4);
}
// Address range: 0x404090 - 0x40409a
int64_t function_404090(void) {
    // 0x404090
    int64_t v1; // 0x404090
    return function_403890(v1, v1, v1, &g20);
}
// Address range: 0x4040a0 - 0x4040b2
int64_t function_4040a0(int64_t a1, int64_t a2) {
    // 0x4040a0
    return function_403890(0, a1, a2, &g20);
}
// Address range: 0x4040c0 - 0x4040d1
int64_t function_4040c0(void) {
    // 0x4040c0
    int64_t v1; // 0x4040c0
    return function_403890(v1, v1, -1, &g20);
}
// Address range: 0x4040e0 - 0x4040f6
int64_t function_4040e0(int64_t a1) {
    // 0x4040e0
    return function_403890(0, a1, -1, &g20);
}
// Address range: 0x404100 - 0x4044dd
int64_t function_404100(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404198
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x40411c
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404136
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x40417b
    if (a6 < 10) {
        // 0x40418a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404282
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x4044e0 - 0x404500
int64_t function_4044e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4044e0
    if (a5 == 0) {
        // 0x4044fb
        return function_404100(a1, a2, a3, a4, a5, 0, (int64_t)&g49);
    }
    int64_t v1 = 0; // 0x4044e7
    v1++;
    int64_t v2 = v1; // 0x4044f9
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x4044f0
        v1++;
        v2 = v1;
    }
    // 0x4044fb
    return function_404100(a1, a2, a3, a4, a5, v2, (int64_t)&g49);
}
// Address range: 0x404500 - 0x404560
int64_t function_404500(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x404500
    int64_t v3 = &v2; // 0x404500
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x404533
    int64_t v6; // 0x40451d
    int64_t * v7; // 0x40453b
    int64_t v8; // 0x40453b
    int64_t v9; // 0x404547
    if (v5 < 48) {
        // 0x404510
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x404553
            break;
        }
    } else {
        // 0x40453b
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x404553
            break;
        }
    }
    int64_t v10 = 10; // 0x404531
    while (v4 != 9) {
        // 0x404529
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x404510
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x404553
                break;
            }
        } else {
            // 0x40453b
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x404553
                break;
            }
        }
        // 0x404529
        v10 = 10;
    }
    // 0x404553
    return function_404100(a1, a2, a3, a4, v3, v10, (int64_t)&g49);
}
// Address range: 0x404560 - 0x40461c
int64_t function_404560(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x404560
    int64_t v1; // bp-168, 0x404560
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x404560
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x404560
    int64_t v8; // 0x404560
    int64_t v9; // bp-56, 0x404560
    int64_t v10; // 0x4045c5
    int64_t v11; // 0x4045e9
    if ((int32_t)v6 < 48) {
        // 0x4045b0
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x404600
            break;
        }
    } else {
        // 0x4045e2
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x404600
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x4045da
    int64_t v13 = 10; // 0x4045da
    while (v5 != 9) {
        // 0x4045dc
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x4045b0
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x404600
                break;
            }
        } else {
            // 0x4045e2
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x404600
                break;
            }
        }
        // 0x4045d2
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x404600
    int64_t v14; // bp-136, 0x404560
    int64_t result = function_404100(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g49); // 0x40460f
    return result;
}
// Address range: 0x404620 - 0x404694
int64_t function_404620(int64_t a1) {
    // 0x404620
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x404683
    return fputs_unlocked(v1, g30);
}
// Address range: 0x4046a0 - 0x4046ba
int64_t function_4046a0(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x4046a4
    if (size != 0 != (mem == NULL)) {
        // 0x4046b3
        return (int64_t)mem;
    }
    // 0x4046b5
    function_4048f0(size);
    // UNREACHABLE
}
// Address range: 0x4046c0 - 0x4046e1
int64_t function_4046c0(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x4046c3
    int64_t v2 = v1; // 0x4046c3
    if (v2 < 0) {
        // 0x4046db
        function_4048f0(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4046d9
        return function_4046a0(v2);
    }
    // 0x4046db
    function_4048f0(v2);
    // UNREACHABLE
}
// Address range: 0x4046f0 - 0x4046f2
int64_t function_4046f0(void) {
    // 0x4046f0
    int64_t v1; // 0x4046f0
    return function_4046a0(v1);
}
// Address range: 0x404700 - 0x404736
int64_t function_404700(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x404728
        free(v1);
        return (int32_t)&g49 ^ (int32_t)&g49;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x404711
    if (a2 != 0 != (mem == NULL)) {
        // 0x404720
        return (int64_t)mem;
    }
    // 0x404731
    function_4048f0(a1);
    // UNREACHABLE
}
// Address range: 0x404740 - 0x404761
int64_t function_404740(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x404743
    int64_t v2 = v1; // 0x404743
    if (v2 < 0) {
        // 0x40475b
        function_4048f0(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x404759
        return function_404700(a1, v2);
    }
    // 0x40475b
    function_4048f0(a1);
    // UNREACHABLE
}
// Address range: 0x404770 - 0x4047f6
int64_t function_404770(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x4047cb
            function_4048f0(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404700(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x4047b3
    if (a2 == 0) {
        // 0x4047d8
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x4047b8
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x4047cb
        function_4048f0(a1);
        // UNREACHABLE
    }
    // 0x40479a
    *(int64_t *)a2 = v2;
    return function_404700(a1, v2 * a3);
}
// Address range: 0x404800 - 0x404850
int64_t function_404800(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x404800
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x40484a
            function_4048f0(a1);
            // UNREACHABLE
        }
        // 0x404822
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_404700(a1, v1);
    }
    if (a2 == 0) {
        // 0x404835
        *(int64_t *)a2 = 128;
        return function_404700(0, 128);
    }
    // 0x404848
    if (a2 < 0) {
        // 0x40484a
        function_4048f0(a1);
        // UNREACHABLE
    }
    // 0x404822
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_404700(a1, v1);
}
// Address range: 0x404850 - 0x404867
int64_t function_404850(int64_t a1, int64_t a2) {
    // 0x404850
    return (int64_t)memset((int64_t *)function_4046a0(a1), 0, (int32_t)a1);
}
// Address range: 0x404870 - 0x40489e
int64_t function_404870(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x404877
    if ((int64_t)v1 < 0) {
        // 0x404899
        function_4048f0(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x404899
        function_4048f0(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40488a
    if (mem != NULL) {
        // 0x404894
        return (int64_t)mem;
    }
    // 0x404899
    function_4048f0(nmemb);
    // UNREACHABLE
}
// Address range: 0x4048a0 - 0x4048c8
int64_t function_4048a0(int64_t a1, int64_t a2) {
    int64_t v1 = function_4046a0(a2); // 0x4048af
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x4048d0 - 0x4048e3
int64_t function_4048d0(int64_t str) {
    // 0x4048d0
    return function_4048a0(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x4048f0 - 0x404921
int64_t function_4048f0(int64_t a1) {
    // 0x4048f0
    error(g19, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x404930 - 0x404a0f
int64_t function_404930(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40493c
    uint32_t v2 = *v1; // 0x40493c
    int64_t v3 = a2 & 0xffffffff; // 0x404941
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x404944
    uint64_t v5 = (int64_t)*v4; // 0x404944
    int64_t v6; // 0x4049b2
    if (v3 <= v5) {
      lab_0x4049ac_2:
        // 0x4049ac
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x404932
    int64_t v8 = v2; // 0x404930
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4049ac
        goto lab_0x4049ac_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x404968
    int64_t v17; // 0x404976
    int64_t * v18; // 0x404990
    int64_t * v19; // 0x404993
    int64_t v20; // 0x40499e
    int64_t v21; // 0x404976
    while ((v16 & 0xffffffff) > v10) {
        // 0x404973
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x404990
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4049a7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4049ac
            goto lab_0x4049ac_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4049ac
            goto lab_0x4049ac_2;
        }
        // 0x404962
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x4049eb
    int64_t * v23 = (int64_t *)v22; // 0x4049f0
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x4049f3
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x4049f0
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x404a07
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40495d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4049ac
            goto lab_0x4049ac_2;
        }
        // 0x404962
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x404973
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x404990
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4049a7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4049ac
                goto lab_0x4049ac_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4049ac
                goto lab_0x4049ac_2;
            }
            // 0x404962
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x4049d0
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x4049f0
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x404a07
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4049ac
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x404a10 - 0x40502c
int64_t function_404a10(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x404a2f
    int64_t v2 = *v1; // 0x404a2f
    char * str2 = (char *)v2; // 0x404a3c
    char c = *str2; // 0x404a3c
    int64_t v3 = v2; // 0x404a68
    int64_t v4 = 0; // 0x404a10
    int32_t v5; // 0x404a10
    int64_t v6; // 0x404a10
    int64_t v7; // 0x404a10
    int64_t v8; // 0x404a10
    int64_t v9; // 0x404a10
    int64_t v10; // 0x404a10
    int64_t v11; // 0x404a10
    int64_t v12; // 0x404a10
    int64_t v13; // 0x404a10
    int64_t str3; // 0x404a10
    int64_t v14; // 0x404a10
    int64_t v15; // 0x404a10
    int64_t v16; // 0x404a10
    int64_t v17; // 0x404a10
    int32_t v18; // 0x404a10
    int32_t v19; // 0x404a10
    int32_t v20; // 0x404a10
    int32_t v21; // 0x404a10
    int32_t v22; // 0x404a10
    int32_t v23; // 0x404a10
    int32_t v24; // 0x404a10
    int32_t v25; // 0x404a10
    int32_t v26; // 0x404a10
    int32_t v27; // 0x404a10
    int32_t v28; // 0x404a10
    int32_t v29; // 0x404a10
    int64_t nmemb; // 0x404a10
    int64_t v30; // 0x404a10
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x404a6c
            while (v31 != 0 == (v31 != 61)) {
                // 0x404a68
                v3++;
                v31 = *(char *)v3;
            }
            // 0x404a78
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x404a7e
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x404a48
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x404aac
                int64_t v34; // 0x404a10
                int64_t v35; // 0x404a10
                if (strncmp(str, str2, n) == 0) {
                    // 0x404ab5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x404c30;
                    }
                }
                int64_t v36 = a4 + 32; // 0x404ac6
                int64_t v37 = *(int64_t *)v36; // 0x404aca
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x404aa0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x404ab5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x404c30;
                        }
                    }
                    // 0x404ac6
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
                  lab_0x404b16:
                    // 0x404b16
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
                        goto lab_0x404b70;
                    } else {
                        if (v11 == 0) {
                            // 0x404ce0
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x404b70;
                        } else {
                            if (v39 == 0) {
                                // 0x404c90
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x404b3a;
                                } else {
                                    // 0x404c9c
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x404b3a;
                                    } else {
                                        // 0x404caa
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x404b3a;
                                        } else {
                                            goto lab_0x404b70;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x404b3a;
                            }
                        }
                    }
                }
              lab_0x404b81:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x404d56
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x404f02
                            flockfile(g32);
                            int64_t v41 = *v1; // 0x404f22
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x404f6f
                            int64_t v43 = (int64_t)g32;
                            int64_t v44 = v43; // 0x404f89
                            int64_t v45; // 0x404f8b
                            if (*(char *)v42 != 0) {
                                // 0x404f8b
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g32;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x404f83
                            while (v17 + nmemb != v42) {
                                // 0x404f85
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x404f8b
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g32;
                                }
                                // 0x404f78
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x404fb0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g32);
                            v40 = *v1;
                        } else {
                            // 0x404d64
                            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x404ebf
                        free((int64_t *)v17);
                    }
                    // 0x404db9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x404dd0
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x404c7e
                    return 63;
                }
                // 0x404ba0
                v5 = v39;
                if (v13 != 0) {
                    // 0x404c24
                    v35 = v13;
                    v34 = v25;
                  lab_0x404c30:;
                    int32_t * v49 = (int32_t *)a7; // 0x404c40
                    uint32_t v50 = *v49; // 0x404c40
                    int64_t v51 = v50; // 0x404c40
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x404c4a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x404c53
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x404e7f
                                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x404e2a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x404c7e
                            return 63;
                        }
                        // 0x404cc8
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x404fdf
                                    __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x404edd
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x404ef0
                                // 0x404c7e
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x404dee
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x404e02
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x404c6b
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x404c6e
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x404c72
                    int64_t result = v59; // 0x404c78
                    if (v58 != 0) {
                        // 0x404c7a
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x404c7e
                    return result;
                }
            } else {
                // 0x404a7e
                v5 = v32;
            }
            // break -> 0x404ba5
            break;
        }
    }
    // 0x404ba5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x404bbd
        if (*(char *)(v60 + 1) != 45) {
            // 0x404bc7
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x404c7e
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x404d09
        __fprintf_chk(g32, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x404bf6
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x404c06
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x404b70:
    // 0x404b70
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x404b70
    int64_t v63 = *(int64_t *)v62; // 0x404b74
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x404b81
        goto lab_0x404b81;
    }
    goto lab_0x404b16;
  lab_0x404b3a:
    // 0x404b3a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x404a10
    int32_t v65; // 0x404a10
    int32_t v66; // 0x404a10
    if (v27 != 0) {
        goto lab_0x404b70;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x404cf0
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x404b70;
            } else {
                goto lab_0x404b61;
            }
        } else {
            // 0x404b55
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x404e4c
                int64_t v67 = (int64_t)mem; // 0x404e4c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x404b70;
                } else {
                    // 0x404e5f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x404b61;
                }
            } else {
                goto lab_0x404b61;
            }
        }
    }
  lab_0x404b61:
    // 0x404b61
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x404b70;
}
// Address range: 0x405030 - 0x4055f6
int64_t function_405030(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405051
    if (v3 < 1) {
        // 0x40520e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x40504d
    int32_t v5 = *(int32_t *)a7; // 0x405059
    uint64_t v6 = a1 & 0xffffffff; // 0x40505b
    int64_t v7 = v2; // 0x405060
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405063
    *v8 = 0;
    int64_t v9; // 0x405030
    int64_t v10; // 0x405030
    int64_t v11; // 0x405030
    int64_t v12; // 0x405030
    int64_t str; // 0x405030
    int64_t v13; // 0x405030
    int64_t v14; // 0x405030
    int64_t v15; // 0x405030
    int64_t v16; // 0x405030
    int64_t v17; // 0x405030
    int32_t v18; // 0x405030
    char v19; // 0x405030
    if (v5 == 0) {
        // 0x405248
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x40507a;
    } else {
        // 0x405073
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x4050c0
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x4050c3
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405188;
            } else {
                int64_t v22 = v7 + 1; // 0x4050d6
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x4050e6
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x40519c;
                } else {
                    goto lab_0x4050f8;
                }
            }
        } else {
            goto lab_0x40507a;
        }
    }
  lab_0x40507a:
    // 0x40507a
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405080
    *v24 = 0;
    int64_t v25; // 0x405030
    int64_t v26; // 0x405030
    int64_t v27; // 0x405030
    switch (*(char *)&v2) {
        case 45: {
            // 0x405170
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40517d;
        }
        case 43: {
            // 0x405480
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x40517d;
        }
        default: {
            // 0x40509c
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x4053ff
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x405518
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x40517d;
                } else {
                    // 0x40540d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x4050aa;
                }
            } else {
                goto lab_0x4050aa;
            }
        }
    }
  lab_0x405188:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x40518f
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x4050f8;
    } else {
        goto lab_0x40519c;
    }
  lab_0x4050aa:
    // 0x4050aa
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x40517d;
  lab_0x40517d:
    // 0x40517d
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405188;
  lab_0x4050f8:;
    uint32_t v30 = *(int32_t *)a7; // 0x4050f8
    int64_t v31 = v30; // 0x4050f8
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x4050fa
    if ((int64_t)*v32 > v31) {
        // 0x4050ff
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405102
    if (*v33 > v30) {
        // 0x405107
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x40510a
    int64_t v35 = v31; // 0x40510e
    int64_t v36 = v15; // 0x40510e
    int64_t v37; // 0x405030
    int64_t v38; // 0x405030
    int64_t v39; // 0x405030
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405278
        int64_t v41 = v40; // 0x405278
        v2 = v41;
        int64_t v42; // 0x405030
        if (*v33 == v40) {
            // 0x405460
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405468
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405284
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405298
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x4052a1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x4052aa
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x4052c1
            int64_t v47 = v45 & 0xffffffff; // 0x4052c5
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x4052ce
                if (*(char *)(v46 + 1) != 0) {
                    // 0x4052d4
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x4052d6;
                }
            }
            int64_t v48 = v47 + 1; // 0x4052b0
            int64_t v49 = v48 & 0xffffffff; // 0x4052b0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x4052c1
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x4052ce
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x4052d4
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x4052d6;
                    }
                }
                // 0x4052b0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x405478
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x4052d6;
    } else {
        goto lab_0x405114;
    }
  lab_0x40519c:
    // 0x40519c
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x40519f
    int64_t v51 = v12; // 0x40519f
    int64_t v52 = v14; // 0x40519f
    if (*(char *)v10 == 0) {
        goto lab_0x4050f8;
    } else {
        goto lab_0x4051a5;
    }
  lab_0x405114:;
    int32_t v53 = v35; // 0x405114
    int64_t v54; // 0x405030
    int64_t v55; // 0x405030
    int64_t v56; // 0x405030
    int64_t v57; // 0x405030
    int64_t v58; // 0x405030
    int64_t v59; // 0x405030
    char * v60; // 0x405030
    int64_t v61; // 0x405030
    int64_t v62; // 0x405129
    int64_t v63; // 0x405030
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405263
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405266;
    } else {
        // 0x40511c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405030
        int64_t v66 = v65 ? -1 : 1; // 0x405130
        int64_t v67 = (int64_t)"--"; // 0x405030
        int64_t v68 = v62; // 0x405030
        int64_t v69 = 3; // 0x405130
        unsigned char v70 = *(char *)v68; // 0x405130
        char v71 = *(char *)v67; // 0x405130
        char v72 = v71; // 0x405130
        bool v73 = false; // 0x405130
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
            // 0x405220
            if (*(char *)v62 == 45) {
                // 0x4052e0
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x4052e0
                if (c == 0) {
                    goto lab_0x40522a;
                } else {
                    // 0x4052ed
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405370;
                    } else {
                        if (c == 45) {
                            // 0x405553
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x4053c5;
                        } else {
                            // 0x4052fe
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405370;
                            } else {
                                // 0x405303
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405324;
                                } else {
                                    // 0x40530a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405370;
                                    } else {
                                        goto lab_0x405324;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x40522a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405140
            v2 = v75;
            int32_t v76 = *v32; // 0x405143
            int64_t v77 = v35 + 1; // 0x405146
            int32_t v78 = v77; // 0x405149
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4054b0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405157
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405165
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405266;
        }
    }
  lab_0x4051a5:;
    // 0x4051a5
    int64_t v79; // bp-104, 0x405030
    int64_t v80 = &v79; // 0x40503a
    int64_t v81 = v50 + 1; // 0x4051a5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x4051ac
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x4051b1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x4051b5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x4051b9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x4051c1
    *v86 = v84;
    char * str2 = (char *)v52; // 0x4051c6
    int32_t c2 = v84; // 0x4051c6
    char * found_char_pos = strchr(str2, c2); // 0x4051c6
    int64_t v87 = *v82; // 0x4051cb
    v2 = v87;
    int64_t v88 = *v85; // 0x4051d5
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x4051e0
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x4054d0
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x40549d
        *(int32_t *)(v1 + 8) = c2;
        // 0x40520e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x4051c6
    char v91 = *(char *)(v90 + 1); // 0x4051fb
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x4051b5
        if (v91 != 58) {
            // 0x40520e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x405424
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x405528
                *v8 = 0;
            } else {
                // 0x40550c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40544e
            *v83 = 0;
            // 0x40520e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40542e
        if (v93 != 0) {
            // 0x4054c0
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40544e
            *v83 = 0;
            // 0x40520e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x405441
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40544e
            *v83 = 0;
            // 0x40520e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x40558a
            __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40553a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x405541
        // 0x40544e
        *v83 = 0;
        // 0x40520e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405399
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x40539b
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x4055c0
                __fprintf_chk(g32, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x405571
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x405578
            // 0x40520e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x4053a6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x4053aa
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x4053c5;
  lab_0x4052d6:
    // 0x4052d6
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405114;
  lab_0x4053c5:;
    int64_t v99 = function_404a10(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x4053e3
    // 0x40520e
    return v99 & 0xffffffff;
  lab_0x405266:;
    int32_t v100 = v55; // 0x405266
    if (v100 != (int32_t)v59) {
        // 0x40526a
        *(int32_t *)a7 = v100;
    }
    // 0x40520e
    return 0xffffffff;
  lab_0x40522a:
    // 0x40522a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405231
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x40520e
    return v99 & 0xffffffff;
  lab_0x405370:
    // 0x405370
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x4051a5;
  lab_0x405324:
    // 0x405324
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_404a10(v6, a2, str, a4, a5, v57, v1, v11, &g10); // 0x40534a
    if ((int32_t)v101 != -1) {
        // 0x40520e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x40535f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405370;
}
// Address range: 0x405600 - 0x405656
int64_t function_405600(int64_t a1) {
    // 0x405600
    *(int32_t *)&g42 = g27;
    *(int32_t *)&g43 = g26;
    int64_t v1; // 0x405600
    int64_t result = function_405030(v1, v1, v1, v1, v1, v1, &g42, a1 & 0xffffffff); // 0x405626
    g27 = *(int32_t *)&g42;
    g47 = g45;
    *(int32_t *)&g25 = g44;
    return result;
}
// Address range: 0x405660 - 0x405678
int64_t function_405660(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405660
    return function_405600(1);
}
// Address range: 0x405680 - 0x405693
int64_t function_405680(int64_t a1, int64_t a2, char * a3, char (**a4)[5], int32_t a5, int64_t a6) {
    // 0x405680
    return function_405600(0);
}
// Address range: 0x4056a0 - 0x4056b5
int64_t function_4056a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4056a0
    return function_405030(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x4056c0 - 0x4056d6
int64_t function_4056c0(void) {
    // 0x4056c0
    return function_405600(0);
}
// Address range: 0x4056e0 - 0x4056f8
int64_t function_4056e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4056e0
    return function_405030(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x405700 - 0x40577a
int64_t function_405700(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40570b
    int64_t v2 = (int64_t)&g11; // 0x40570b
    int32_t * pwc; // 0x405700
    int64_t v3; // 0x405700
    int64_t n; // 0x405700
    if (a2 == 0) {
        goto lab_0x405752;
    } else {
        // 0x40570d
        if (a3 == 0) {
            // 0x405738
            return -2;
        }
        // 0x405719
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x405752;
        } else {
            goto lab_0x405724;
        }
    }
  lab_0x405752:
    // 0x405752
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x405700
    pwc = (int32_t *)&v4;
    goto lab_0x405724;
  lab_0x405724:;
    char * wstr = (char *)v3; // 0x40572a
    int64_t ps; // 0x405700
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40572a
    int64_t result = v5; // 0x40572a
    if (v5 < 0xfffffffe) {
        // 0x405738
        return result;
    }
    int64_t result2 = result; // 0x405769
    if ((char)function_405a10(0, v3) == 0) {
        // 0x40576b
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x405738
    return result2;
}
// Address range: 0x405780 - 0x4058da
int64_t function_405780(int64_t a1, int32_t * a2) {
    char v1 = a1;
    char * str2 = (char *)a1;
    int64_t str = (int64_t)"HUP"; // 0x4057a1
    int64_t v2; // 0x405780
    int64_t v3; // 0x405780
    int64_t v4; // 0x405780
    int32_t v5; // 0x405810
    int64_t v6; // 0x405815
    int32_t v7; // 0x405818
    int64_t v8; // 0x40581d
    int64_t v9; // 0x405831
    bool v10; // 0x405780
    if (v1 != 57 && (int32_t)v1 >= 57) {
        int64_t v11 = 0;
        while (strcmp((char *)str, str2) != 0) {
            int64_t v12 = v11 + 1; // 0x4057a8
            str += 12;
            if ((int32_t)v12 == 35) {
                // 0x405810
                v5 = __libc_current_sigrtmin();
                v6 = v5;
                v7 = __libc_current_sigrtmax();
                v8 = v7;
                if (v5 < 1) {
                    goto lab_0x40583c;
                } else {
                    // 0x405824
                    v9 = v10 ? -1 : 1;
                    v2 = (int64_t)"RTMIN";
                    v4 = a1;
                    v3 = 5;
                    goto lab_dec_label_pc_unknown;
                }
            }
            v11 = v12 & 0xffffffff;
        }
        int32_t v13 = *(int32_t *)(12 * v11 + (int64_t)&g28);
        *a2 = v13;
        // 0x4057d4
        return v13 >> 31;
    }
    // 0x4057e0
    char * endptr; // bp-48, 0x405780
    int32_t str_as_l = strtol(str2, &endptr, 10); // 0x4057ea
    int32_t v14 = str_as_l; // 0x4057f7
    if (str_as_l < 65 == *endptr == 0) {
      lab_0x4057ce:
        // 0x4057ce
        *a2 = v14;
        // 0x4057d4
        return v14 >> 31;
    }
  lab_0x405800:
    // 0x405800
    *a2 = -1;
    // 0x4057d4
    return 0xffffffff;
  lab_0x40583c:;
    int64_t v15; // 0x405780
    int64_t v16; // 0x405780
    int64_t v17; // 0x405780
    int64_t v18; // 0x40584d
    if (v7 < 1) {
        goto lab_0x405800;
    } else {
        // 0x405840
        v18 = v10 ? -1 : 1;
        v15 = (int64_t)"RTMAX";
        v17 = a1;
        v16 = 5;
        goto lab_dec_label_pc_unknown_2;
    }
  lab_dec_label_pc_unknown:;
    unsigned char v19 = *(char *)v4; // 0x405831
    char v20 = *(char *)v2; // 0x405831
    char v21 = v20; // 0x405831
    bool v22 = false; // 0x405831
    if (v19 == v20) {
        int64_t v23 = v3 - 1; // 0x405831
        v2 += v9;
        v4 += v9;
        v3 = v23;
        v21 = v19;
        v22 = true;
        if (v23 == 0) {
            goto lab_dec_label_pc_unknown_4;
        } else {
            goto lab_dec_label_pc_unknown;
        }
    } else {
        goto lab_dec_label_pc_unknown_4;
    }
  lab_dec_label_pc_unknown_2:;
    unsigned char v24 = *(char *)v17; // 0x40584d
    char v25 = *(char *)v15; // 0x40584d
    char v26 = v25; // 0x40584d
    bool v27 = false; // 0x40584d
    if (v24 == v25) {
        int64_t v28 = v16 - 1; // 0x40584d
        v15 += v18;
        v17 += v18;
        v16 = v28;
        v26 = v24;
        v27 = true;
        if (v28 == 0) {
            goto lab_dec_label_pc_unknown_6;
        } else {
            goto lab_dec_label_pc_unknown_2;
        }
    } else {
        goto lab_dec_label_pc_unknown_6;
    }
  lab_dec_label_pc_unknown_4:;
    unsigned char v29 = v21;
    if ((v19 >= v29 && !v22) == v19 < v29) {
        int32_t str_as_l2 = strtol((char *)(a1 + 5), &endptr, 10); // 0x4058a7
        if (str_as_l2 < 0 | *endptr != 0) {
            goto lab_0x405800;
        } else {
            if (0x100000000 * (v8 - v6) >> 32 < (int64_t)str_as_l2) {
                goto lab_0x405800;
            } else {
                // 0x4058d2
                v14 = str_as_l2 + v5;
                goto lab_0x4057ce;
            }
        }
    } else {
        goto lab_0x40583c;
    }
  lab_dec_label_pc_unknown_6:;
    unsigned char v30 = v26;
    if ((v24 >= v30 && !v27) != v24 < v30) {
        goto lab_0x405800;
    } else {
        int32_t str_as_l3 = strtol((char *)(a1 + 5), &endptr, 10); // 0x405867
        if (*endptr != 0) {
            goto lab_0x405800;
        } else {
            if (0x100000000 * (v6 - v8) >> 32 > (int64_t)str_as_l3) {
                goto lab_0x405800;
            } else {
                if (str_as_l3 >= 0 == (str_as_l3 != 0)) {
                    goto lab_0x405800;
                } else {
                    // 0x40588e
                    v14 = str_as_l3 + v7;
                    goto lab_0x4057ce;
                }
            }
        }
    }
}
// Address range: 0x4058e0 - 0x4059ac
int64_t function_4058e0(int64_t a1, int64_t * str, int64_t a3) {
    int64_t v1 = (int64_t)str;
    uint64_t v2 = a1 & 0xffffffff; // 0x4058ee
    int32_t v3 = a1;
    int64_t v4 = (int64_t)&g28; // 0x4058f0
    int64_t v5 = 0;
    int32_t v6; // 0x4058e0
    int64_t result; // 0x4058e0
    while (*(int32_t *)v4 != v3) {
        int64_t v7 = v5 + 1; // 0x4058f8
        v4 += 12;
        if ((int32_t)v7 == 35) {
            int32_t v8 = __libc_current_sigrtmin(); // 0x405928
            int32_t v9 = __libc_current_sigrtmax(); // 0x405930
            result = 0xffffffff;
            if (v2 < (int64_t)v8 || v2 > (int64_t)v9) {
                return result;
            } else {
                if (v2 > (int64_t)((v9 - v8 >> 1) + v8)) {
                    // 0x40594c
                    *(int32_t *)str = 0x414d5452;
                    *(int16_t *)(v1 + 4) = 88;
                    v6 = v9;
                    goto lab_0x40595f;
                } else {
                    // 0x405990
                    *(int32_t *)str = 0x494d5452;
                    *(int16_t *)(v1 + 4) = 78;
                    v6 = v8;
                    goto lab_0x40595f;
                }
            }
        }
        v5 = v7 & 0xffffffff;
    }
    // 0x405908
    strcpy((char *)str, (char *)(12 * v5 + (int64_t)"HUP"));
    result = 0;
  lab_0x40591e:
    // 0x40591e
    return result;
  lab_0x40595f:;
    uint32_t v10 = v3 - v6; // 0x405961
    result = 0;
    if (v10 != 0) {
        // 0x405966
        __sprintf_chk((char *)(v1 + 5), 1, -1, "%+d", (int64_t)v10);
        return 0;
    }
    return result;
}
// Address range: 0x4059b0 - 0x405a0d
int64_t function_4059b0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4059b7
    int64_t v2; // 0x4059b0
    int64_t result = function_405fe0(a1, v2); // 0x4059c8
    if ((v2 & 32) != 0) {
        // 0x4059f0
        if ((int32_t)result == 0) {
            // 0x4059f4
            *__errno_location() = 0;
        }
        // 0x4059ea
        return 0xffffffff;
    }
    // 0x4059d1
    if ((int32_t)result == 0) {
        // 0x4059ea
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x4059d8
    if (v1 == 0) {
        // 0x4059da
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x4059ea
    return result2;
}
// Address range: 0x405a10 - 0x405a6e
int64_t function_405a10(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x405a16
    if (locale == NULL) {
        // 0x405a43
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x405a16
    bool v2; // 0x405a10
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)&g12; // 0x405a10
    int64_t v5 = v1; // 0x405a10
    int64_t v6 = 2; // 0x405a35
    unsigned char v7 = *(char *)v5; // 0x405a35
    char v8 = *(char *)v4; // 0x405a35
    char v9 = v8; // 0x405a35
    bool v10 = false; // 0x405a35
    while (v7 == v8) {
        // 0x405a28
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
    int64_t v12 = (int64_t)"POSIX"; // 0x405a41
    int64_t v13 = v1; // 0x405a41
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x405a43
        return 0;
    }
    int64_t v14 = 6; // 0x405a41
    unsigned char v15 = *(char *)v13; // 0x405a5d
    char v16 = *(char *)v12; // 0x405a5d
    char v17 = v16; // 0x405a5d
    bool v18 = false; // 0x405a5d
    while (v15 == v16) {
        // 0x405a50
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
// Address range: 0x405a70 - 0x405fd2
int64_t function_405a70(void) {
    char * v1 = nl_langinfo(14); // 0x405a86
    char * v2 = g46; // 0x405a8b
    char * v3; // 0x405a70
    int64_t v4; // 0x405a70
    int64_t v5; // 0x405a70
    int64_t v6; // 0x405a70
    int64_t v7; // 0x405a70
    int32_t size; // 0x405a70
    int32_t size2; // 0x405a70
    int32_t len; // 0x405b42
    int64_t v8; // 0x405b42
    char * env_val; // 0x405b2d
    if (v2 == NULL) {
        // 0x405b28
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x405b95;
        } else {
            // 0x405b3a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x405b95;
            } else {
                // 0x405b3f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x405b2d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x405fc5
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x405b95;
                    } else {
                        // 0x405f39
                        size2 = len + 14;
                        goto lab_0x405b5b;
                    }
                } else {
                    goto lab_0x405b5b;
                }
            }
        }
    } else {
        // 0x405a70
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x405aaa;
    }
  lab_0x405ddc:;
    // 0x405ddc
    struct _IO_FILE * stream; // 0x405c1b
    int32_t v10 = __uflow(stream); // 0x405ddf
    int64_t v11; // 0x405a70
    int64_t v12 = v11; // 0x405de9
    int64_t v13; // 0x405a70
    int64_t v14 = v13; // 0x405de9
    int32_t v15 = v10; // 0x405de9
    int64_t v16; // 0x405a70
    int64_t v17 = v16; // 0x405de9
    int64_t v18 = v11; // 0x405de9
    int64_t v19 = v13; // 0x405de9
    int64_t v20 = v16; // 0x405de9
    if (v10 == -1) {
        // break -> 0x405def
        goto lab_0x405def;
    }
    goto lab_0x405c69;
  lab_0x405c5e:;
    // 0x405c5e
    int64_t v90; // 0x405a70
    int64_t * v32; // 0x405c50
    *v32 = v90 + 1;
    int64_t v89; // 0x405a70
    v12 = v89;
    int64_t v91; // 0x405a70
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x405a70
    v17 = v92;
    goto lab_0x405c69;
  lab_0x405c69:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x405a70
    int32_t v25; // bp-120, 0x405a70
    int32_t v26; // bp-184, 0x405a70
    int64_t v27; // 0x405c1b
    int64_t v28; // 0x405c38
    int64_t v29; // 0x405c3d
    int64_t * v30; // 0x405c54
    switch (c) {
        case 32: {
            goto lab_0x405c50;
        }
        case 10: {
            goto lab_0x405c50;
        }
        case 9: {
            goto lab_0x405c50;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x405e41
            int32_t v33; // 0x405a70
            char v34; // 0x405a70
            int32_t v35; // 0x405e4e
            if (v31 < *v30) {
                // 0x405e20
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x405e4b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x405e41
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x405e20
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x405e4b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x405e30
                v36 = v33;
            }
            // 0x405f1f
            if (v36 == -1) {
                // break -> 0x405def
                break;
            }
            goto lab_0x405c50;
        }
        default: {
            // 0x405c7f
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x405def
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x405ca8
            int64_t v39 = v37 + 4; // 0x405caa
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x405cb6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x405cb8
            while (v41 == 0) {
                // 0x405ca8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x405cd6
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x405ce2
            int64_t v45 = v43 + 4; // 0x405ce4
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x405cf0
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x405cf2
            while (v47 == 0) {
                // 0x405ce2
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x405cdf
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x405d08
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x405d18
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x405d1c
            int64_t v52 = v51 + v48; // 0x405d25
            int64_t * mem; // 0x405a70
            int64_t v53; // 0x405a70
            int64_t v54; // 0x405a70
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x405e5b
                int64_t v56 = v55 + 3; // 0x405e67
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x405d41
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x405d50
            if (mem == NULL) {
                // 0x405f7c
                free((int64_t *)v21);
                function_405fe0(v27, v53);
                v24 = (int64_t)&g11;
                goto lab_0x405bf4;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x405d68
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x405d72
            uint32_t v62 = (int32_t)v59; // 0x405d75
            int64_t v63; // 0x405a70
            if (v62 >= 8) {
                // 0x405e84
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x405e9e
                int64_t v66 = v61 - v65; // 0x405ea2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x405ead
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x405ebe
                    int64_t v70 = v69 & 0xffffffff; // 0x405ebe
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x405ebb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x405f4f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x405d87
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x405d8b
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
            int64_t v73 = v51 + 1; // 0x405d9b
            int64_t v74 = v60 - 1; // 0x405d9f
            uint32_t v75 = (int32_t)v73; // 0x405da4
            int64_t v76; // 0x405a70
            if (v75 >= 8) {
                // 0x405ed2
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x405edc
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x405eec
                int64_t v80 = v74 - v79; // 0x405ef0
                uint32_t v81 = (int32_t)(v80 + v73); // 0x405efb
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x405f0b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x405f09
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x405f66
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x405f6e
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x405db6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x405dba
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x405fb3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x405dce
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x405c5e;
            } else {
                goto lab_0x405ddc;
            }
        }
    }
  lab_0x405c50:;
    int64_t v93 = v23; // 0x405a70
    int64_t v94 = v22; // 0x405a70
    int64_t v95 = v21; // 0x405a70
    goto lab_0x405c50_2;
  lab_0x405b95:;
    int64_t * mem3 = malloc(size); // 0x405b95
    int64_t v97 = (int64_t)&g11; // 0x405ba0
    int64_t v98; // 0x405a70
    int64_t path; // 0x405a70
    if (mem3 == NULL) {
        goto lab_0x405b72;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x405b95
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x405bb6;
    }
  lab_0x405aaa:;
    int64_t str = v1 == NULL ? (int64_t)&g11 : (int64_t)v1; // 0x405a9d
    char v100 = *v3; // 0x405aaa
    int64_t v101; // 0x405a70
    if (v100 == 0) {
        // 0x405b04
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x405a70
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x405a70
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x405af0
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x405af7;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x405ac0
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x405acd
        char v107 = *(char *)v106; // 0x405ad2
        v102 = v107;
        if (v107 == 0) {
            // 0x405b04
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x405adb
    v104 = v103 + 1;
  lab_0x405af7:
    // 0x405b04
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x405b72:;
    char * v108 = (char *)v97;
    g46 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x405aaa;
  lab_0x405bb6:;
    int64_t v109 = v98 + path; // 0x405bb6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x405be2
    v24 = (int64_t)&g11;
    if (fd >= 0) {
        // 0x405c11
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x405f42
            close(fd);
            v24 = (int64_t)&g11;
        } else {
            // 0x405c35
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x405c50_2:;
                uint64_t v96 = *v32; // 0x405c50
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x405ddc;
                } else {
                    goto lab_0x405c5e;
                }
            }
          lab_0x405def:
            // 0x405def
            function_405fe0(v27, v19);
            v24 = (int64_t)&g11;
            if (v18 != 0) {
                // 0x405e0e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x405bf4;
  lab_0x405b5b:;
    int64_t * mem4 = malloc(size2); // 0x405b5b
    v97 = (int64_t)&g11;
    if (mem4 != NULL) {
        // 0x405c01
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x405bb6;
    } else {
        goto lab_0x405b72;
    }
  lab_0x405bf4:
    // 0x405bf4
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x405b72;
}
// Address range: 0x405fe0 - 0x40605b
int64_t function_405fe0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x405fe7
    if (fileno(stream) < 0) {
        // 0x406047
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x405ffa
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x40602b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406047
            return fclose(stream);
        }
    }
    // 0x405ffc
    if ((int32_t)function_406060(a1, v1) == 0) {
        // 0x406047
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406008
    int32_t v3 = *v2; // 0x406010
    int64_t result = fclose(stream); // 0x40601e
    if (v3 != 0) {
        // 0x406050
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406020
    return result;
}
// Address range: 0x406060 - 0x4060a0
int64_t function_406060(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x40607a
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x40607a
        return fflush(stream);
    }
    // 0x406088
    function_4060a0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x4060a0 - 0x4060f7
int64_t function_4060a0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x4060a0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x4060aa
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x4060db
    int64_t result = -1; // 0x4060e4
    if (v1 != -1) {
        // 0x4060e6
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x4060f2
    return result;
}
// Address range: 0x406100 - 0x40615d
int64_t function_406100(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406100
    return function_401448();
}
// Address range: 0x406160 - 0x406161
int64_t function_406160(void) {
    // 0x406160
    int64_t result; // 0x406160
    return result;
}
// Address range: 0x406170 - 0x406188
int64_t function_406170(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406170
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g17);
}
// Address range: 0x406188 - 0x4061a8
int64_t function_406188(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g13; // 0x406192
    while (*(int64_t *)v1 != -1) {
        // 0x406193
        v1 -= 8;
    }
    // 0x4061a4
    return result;
}
