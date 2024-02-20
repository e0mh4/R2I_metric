// Address range: 0x401df0 - 0x401df5
int64_t function_401df0(void) {
    // 0x401df0
    abort();
    // UNREACHABLE
}
// Address range: 0x401df5 - 0x401dfa
int64_t function_401df5(void) {
    // 0x401df5
    abort();
    // UNREACHABLE
}
// Address range: 0x401dfa - 0x401dff
int64_t function_401dfa(void) {
    // 0x401dfa
    abort();
    // UNREACHABLE
}
// Address range: 0x401dff - 0x401e04
int64_t function_401dff(void) {
    // 0x401dff
    abort();
    // UNREACHABLE
}
// Address range: 0x401e04 - 0x401e09
int64_t function_401e04(void) {
    // 0x401e04
    abort();
    // UNREACHABLE
}
// Address range: 0x401e09 - 0x401e0e
int64_t function_401e09(void) {
    // 0x401e09
    abort();
    // UNREACHABLE
}
// Address range: 0x401e10 - 0x4023f2
int64_t function_401e10(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    char * exec_argv[1]; // 0x4020f9
    // 0x401e10
    function_403060(a2);
    setlocale(LC_ALL, (char *)&g13);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale");
    textdomain("coreutils");
    g21 = 125;
    function_406db0(0x402f00, (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/share/locale", a3);
    int32_t v1; // 0x401e10
    int32_t v2; // 0x401e10
    int32_t result; // 0x401e10
    int64_t v3; // 0x401e10
    int64_t set; // bp-176, 0x401e10
    int32_t act; // bp-184, 0x401e10
    int64_t oset; // bp-312, 0x401e10
    int64_t v4; // 0x401fa6
    int64_t v5; // 0x401fac
    int64_t * file; // 0x401fb0
    int64_t v6; // 0x402092
    int32_t v7; // 0x4020c0
    int128_t v8; // 0x401e10
    int32_t * err_num; // 0x4020fe
    int32_t v9; // 0x402255
    int32_t v10; // 0x402255
    uint32_t v11; // 0x402260
    uint32_t sig_handler; // 0x402269
    int32_t v12; // 0x402271
    char * format; // 0x402379
    int32_t v13; // 0x4022fc
    int32_t v14; // 0x401f74
    while (true) {
        int64_t v15 = function_4062c0(a1 & 0xffffffff, a2, "+k:s:v", (char (**)[11])&g2, 0, a6); // 0x401e7a
        int32_t v16 = v15;
        switch (v16) {
            case -1: {
                // 0x401f74
                v14 = g29;
                if ((int32_t)a1 - v14 < 2) {
                    // 0x401ee9
                    function_402850(125);
                    // UNREACHABLE
                }
                // 0x401f86
                g29 = &g30;
                function_402bf0(*(int64_t *)(8 * (int64_t)v14 + a2));
                v4 = __asm_movsd(v8);
                v5 = 8 * (int64_t)g29 + a2;
                file = (int64_t *)v5;
                g38 = (int32_t)*file;
                if (g41 == 0) {
                    // 0x4022d5
                    setpgid(0, 0);
                }
                // 0x401fc1
                sigemptyset((struct _TYPEDEF_sigset_t *)&set);
                act = 0x402680;
                sigaction(SIGALARM, (struct sigaction *)&act, NULL);
                sigaction(SIGINT, (struct sigaction *)&act, NULL);
                sigaction(SIGQUIT, (struct sigaction *)&act, NULL);
                sigaction(SIGHUP, (struct sigaction *)&act, NULL);
                sigaction(SIGTERM, (struct sigaction *)&act, NULL);
                sigaction(g19, (struct sigaction *)&act, NULL);
                signal(SIGTTIN, SIG_IGN);
                signal(SIGTTOU, SIG_IGN);
                sigemptyset((struct _TYPEDEF_sigset_t *)&set);
                v6 = &act;
                act = 0x4024e0;
                sigaction(SIGSTOP, (struct sigaction *)&act, NULL);
                function_402620(17, v6, 0);
                v7 = fork();
                g43 = v7;
                if (v7 == -1) {
                    // 0x40230b
                    error(0, *__errno_location(), dcgettext(NULL, "fork system call failed", 5));
                    // 0x402141
                    return 125;
                }
                if (v7 == 0) {
                    // 0x4020d8
                    signal(SIGTTIN, SIG_DFL);
                    signal(SIGTTOU, SIG_DFL);
                    exec_argv[0] = (char *)v5;
                    execvp((char *)*file, exec_argv);
                    err_num = __errno_location();
                    function_404c80((int64_t)g38);
                    error(0, *err_num, dcgettext(NULL, "failed to run command %s", 5));
                    // 0x402141
                    return *err_num == 2 ? 127 : 126;
                }
                // 0x40214f
                function_402620(14, v6, 0);
                __asm_movsd_1(v4);
                function_4024f0(1, v6, 0, (int64_t)&g2);
                sigemptyset((struct _TYPEDEF_sigset_t *)&act);
                sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGALARM);
                sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGINT);
                sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGQUIT);
                sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGHUP);
                sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGTERM);
                sigaddset((struct _TYPEDEF_sigset_t *)&act, g19);
                sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGSTOP);
                if (sigprocmask(SIG_BLOCK, (struct _TYPEDEF_sigset_t *)&act, (struct _TYPEDEF_sigset_t *)&oset) != 0) {
                    // 0x40220f
                    error(0, *__errno_location(), dcgettext(NULL, "warning: sigprocmask", 5));
                }
                // 0x402242
                v9 = waitpid(g43, &act, WNOHANG);
                v1 = v9;
                if (v9 == 0) {
                    sigsuspend((struct _TYPEDEF_sigset_t *)&oset);
                    v10 = waitpid(g43, &act, WNOHANG);
                    v1 = v10;
                    while (v10 == 0) {
                        // 0x402238
                        sigsuspend((struct _TYPEDEF_sigset_t *)&oset);
                        v10 = waitpid(g43, &act, WNOHANG);
                        v1 = v10;
                    }
                }
                // 0x40225e
                if (v1 < 0) {
                    // 0x4022a1
                    error(0, *__errno_location(), dcgettext(NULL, "error waiting for command", 5));
                    act = 125;
                    v2 = 125;
                } else {
                    // 0x402260
                    v11 = act;
                    sig_handler = v11 % 128;
                    if (sig_handler != 0) {
                        if ((char)sig_handler < 1) {
                            // 0x40233c
                            error(0, (int32_t)"unknown status from command (%d)" ^ (int32_t)"unknown status from command (%d)", dcgettext(NULL, "unknown status from command (%d)", 5));
                            act = 1;
                            v2 = 1;
                        } else {
                            // 0x4022ea
                            v3 = 1;
                            if ((char)v11 <= -1) {
                                // 0x40236d
                                format = dcgettext(NULL, "the monitored command dumped core", 5);
                                error(0, (int32_t)"the monitored command dumped core" ^ (int32_t)"the monitored command dumped core", format);
                                v3 = (int64_t)format;
                            }
                            // 0x4022ef
                            if (g44 == 0) {
                                // 0x402391
                                if (prctl(PR_SET_DUMPABLE, 0, (int32_t)v3, (int32_t)&g2, 0) != 0) {
                                    // 0x4023c6
                                    error(0, *__errno_location(), dcgettext(NULL, "warning: disabling core dumps failed", 5));
                                } else {
                                    // 0x4023a3
                                    signal(sig_handler, SIG_DFL);
                                    function_402620((int64_t)sig_handler, 0, v3);
                                    raise(sig_handler);
                                }
                            }
                            // 0x4022fc
                            v13 = sig_handler | 128;
                            act = v13;
                            v2 = v13;
                        }
                    } else {
                        // 0x40226e
                        v12 = v11 / 256 % 256;
                        act = v12;
                        v2 = v12;
                    }
                }
                // 0x402278
                result = v2;
                if (g44 != 0) {
                    // 0x402281
                    result = v2;
                    if (g40 == 0) {
                        // 0x40228a
                        act = 124;
                        result = 124;
                    }
                }
                // 0x402141
                return result;
            }
            case 115: {
                // 0x401f30
                int64_t v17; // bp-344, 0x401e10
                int32_t v18 = function_402cc0(g58, &v17); // 0x401f41
                g19 = v18;
                if (v18 == -1) {
                    // 0x401ee9
                    function_402850(125);
                    // UNREACHABLE
                }
                // break -> 0x401e68
                break;
            }
            default: {
                if (v16 > 115) {
                    if (v16 == 128) {
                        // 0x401f58
                        g41 = 1;
                    } else {
                        if (v16 != 129) {
                            if (v16 != 118) {
                              lab_0x401ee9:
                                // 0x401ee9
                                function_402850(125);
                                // UNREACHABLE
                            }
                            // 0x401f68
                            g39 = 1;
                        } else {
                            // 0x401ea5
                            g40 = 1;
                        }
                    }
                } else {
                    if (v16 == -130) {
                        // 0x4023bf
                        function_402850(0);
                        // UNREACHABLE
                    }
                    if (v16 != 107) {
                        if (v16 == -131) {
                            // 0x401eff
                            function_405100((int64_t)g33, "timeout", "GNU coreutils", (int64_t)g20, "Padraig Brady", 0);
                            exit(0);
                            // UNREACHABLE
                        }
                        goto lab_0x401ee9;
                    }
                    // 0x401ec0
                    function_402bf0(g58);
                    g42 = __asm_movsd(v8);
                }
                // break -> 0x401e68
                break;
            }
        }
    }
    // 0x401f74
    v14 = g29;
    if ((int32_t)a1 - v14 < 2) {
        // 0x401ee9
        function_402850(125);
        // UNREACHABLE
    }
    // 0x401f86
    g29 = &g30;
    function_402bf0(*(int64_t *)(8 * (int64_t)v14 + a2));
    v4 = __asm_movsd(v8);
    v5 = 8 * (int64_t)g29 + a2;
    file = (int64_t *)v5;
    g38 = (int32_t)*file;
    if (g41 == 0) {
        // 0x4022d5
        setpgid(0, 0);
    }
    // 0x401fc1
    sigemptyset((struct _TYPEDEF_sigset_t *)&set);
    act = 0x402680;
    sigaction(SIGALARM, (struct sigaction *)&act, NULL);
    sigaction(SIGINT, (struct sigaction *)&act, NULL);
    sigaction(SIGQUIT, (struct sigaction *)&act, NULL);
    sigaction(SIGHUP, (struct sigaction *)&act, NULL);
    sigaction(SIGTERM, (struct sigaction *)&act, NULL);
    sigaction(g19, (struct sigaction *)&act, NULL);
    signal(SIGTTIN, SIG_IGN);
    signal(SIGTTOU, SIG_IGN);
    sigemptyset((struct _TYPEDEF_sigset_t *)&set);
    v6 = &act;
    act = 0x4024e0;
    sigaction(SIGSTOP, (struct sigaction *)&act, NULL);
    function_402620(17, v6, 0);
    v7 = fork();
    g43 = v7;
    if (v7 == -1) {
        // 0x40230b
        error(0, *__errno_location(), dcgettext(NULL, "fork system call failed", 5));
        // 0x402141
        return 125;
    }
    if (v7 == 0) {
        // 0x4020d8
        signal(SIGTTIN, SIG_DFL);
        signal(SIGTTOU, SIG_DFL);
        exec_argv[0] = (char *)v5;
        execvp((char *)*file, exec_argv);
        err_num = __errno_location();
        function_404c80((int64_t)g38);
        error(0, *err_num, dcgettext(NULL, "failed to run command %s", 5));
        // 0x402141
        return *err_num == 2 ? 127 : 126;
    }
    // 0x40214f
    function_402620(14, v6, 0);
    __asm_movsd_1(v4);
    function_4024f0(1, v6, 0, (int64_t)&g2);
    sigemptyset((struct _TYPEDEF_sigset_t *)&act);
    sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGALARM);
    sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGINT);
    sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGQUIT);
    sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGHUP);
    sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGTERM);
    sigaddset((struct _TYPEDEF_sigset_t *)&act, g19);
    sigaddset((struct _TYPEDEF_sigset_t *)&act, SIGSTOP);
    if (sigprocmask(SIG_BLOCK, (struct _TYPEDEF_sigset_t *)&act, (struct _TYPEDEF_sigset_t *)&oset) != 0) {
        // 0x40220f
        error(0, *__errno_location(), dcgettext(NULL, "warning: sigprocmask", 5));
    }
    // 0x402242
    v9 = waitpid(g43, &act, WNOHANG);
    v1 = v9;
    if (v9 == 0) {
        sigsuspend((struct _TYPEDEF_sigset_t *)&oset);
        v10 = waitpid(g43, &act, WNOHANG);
        v1 = v10;
        while (v10 == 0) {
            // 0x402238
            sigsuspend((struct _TYPEDEF_sigset_t *)&oset);
            v10 = waitpid(g43, &act, WNOHANG);
            v1 = v10;
        }
    }
    // 0x40225e
    if (v1 < 0) {
        // 0x4022a1
        error(0, *__errno_location(), dcgettext(NULL, "error waiting for command", 5));
        act = 125;
        v2 = 125;
    } else {
        // 0x402260
        v11 = act;
        sig_handler = v11 % 128;
        if (sig_handler != 0) {
            if ((char)sig_handler < 1) {
                // 0x40233c
                error(0, (int32_t)"unknown status from command (%d)" ^ (int32_t)"unknown status from command (%d)", dcgettext(NULL, "unknown status from command (%d)", 5));
                act = 1;
                v2 = 1;
            } else {
                // 0x4022ea
                v3 = 1;
                if ((char)v11 <= -1) {
                    // 0x40236d
                    format = dcgettext(NULL, "the monitored command dumped core", 5);
                    error(0, (int32_t)"the monitored command dumped core" ^ (int32_t)"the monitored command dumped core", format);
                    v3 = (int64_t)format;
                }
                // 0x4022ef
                if (g44 == 0) {
                    // 0x402391
                    if (prctl(PR_SET_DUMPABLE, 0, (int32_t)v3, (int32_t)&g2, 0) != 0) {
                        // 0x4023c6
                        error(0, *__errno_location(), dcgettext(NULL, "warning: disabling core dumps failed", 5));
                    } else {
                        // 0x4023a3
                        signal(sig_handler, SIG_DFL);
                        function_402620((int64_t)sig_handler, 0, v3);
                        raise(sig_handler);
                    }
                }
                // 0x4022fc
                v13 = sig_handler | 128;
                act = v13;
                v2 = v13;
            }
        } else {
            // 0x40226e
            v12 = v11 / 256 % 256;
            act = v12;
            v2 = v12;
        }
    }
    // 0x402278
    result = v2;
    if (g44 != 0) {
        // 0x402281
        result = v2;
        if (g40 == 0) {
            // 0x40228a
            act = 124;
            result = 124;
        }
    }
    // 0x402141
    return result;
}
// Address range: 0x402400 - 0x40242b
int64_t entry_point(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402400
    int64_t v1; // 0x402400
    __libc_start_main(0x401e10, (int32_t)a4, (char **)&v1, (void (*)())0x406d40, (void (*)())0x406da0, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}
// Address range: 0x40242b - 0x40244a
int64_t function_40242b(void) {
    // 0x40242b
    return 0x60b4c8;
}
// Address range: 0x40244a - 0x402481
int64_t function_40244a(void) {
    // 0x40244a
    return 0;
}
// Address range: 0x402481 - 0x4024d8
int64_t function_402481(void) {
    // 0x402481
    if (g36 != 0) {
        // 0x4024d7
        int64_t result; // 0x402481
        return result;
    }
    int64_t v1 = g37; // 0x4024b4
    int64_t result2; // 0x4024c6
    if (g37 >= ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x4024c6
        result2 = function_40242b();
        g36 = 1;
        return result2;
    }
    v1++;
    while (v1 < ((int64_t)&g16 - (int64_t)&g15 >> 3) - 1) {
        // 0x4024b6
        v1++;
    }
    // 0x4024aa
    g37 = v1;
    // 0x4024c6
    result2 = function_40242b();
    g36 = 1;
    return result2;
}
// Address range: 0x4024d8 - 0x4024dd
int64_t function_4024d8(void) {
    // 0x4024d8
    return function_40244a();
}
// Address range: 0x4024e0 - 0x4024e1
int64_t function_4024e0(void) {
    // 0x4024e0
    int64_t result; // 0x4024e0
    return result;
}
// Address range: 0x4024f0 - 0x402611
int64_t function_4024f0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x4024f0
    int128_t v1; // 0x4024f0
    int128_t v2 = v1;
    int64_t v3 = __asm_movsd(v2); // 0x4024f7
    function_402fa0(a1, a2, a3, a4);
    int64_t value = 0; // bp-40, 0x402506
    bool v4; // 0x4024f0
    int64_t timerid; // bp-48, 0x4024f0
    if (timer_create(0, NULL, (int64_t **)&timerid) == 0) {
        // 0x402590
        if (timer_settime((int64_t *)timerid, 0, (struct itimerspec *)&value, NULL) == 0) {
            // 0x402562
            return 0;
        }
        if ((char)a1 != 0) {
            // 0x4025e8
            error(0, *__errno_location(), dcgettext(NULL, "warning: timer_settime", 5));
        }
        // 0x4025ab
        timer_delete((int64_t *)timerid);
        v4 = false;
    } else {
        // 0x402530
        v4 = false;
        if ((char)a1 != 0) {
            int32_t * err_num = __errno_location(); // 0x402534
            uint32_t v5 = *err_num; // 0x402539
            v4 = v5 < 38;
            if (v5 != 38) {
                // 0x4025c0
                error(0, *err_num, dcgettext(NULL, "warning: timer_create", 5));
                v4 = false;
            }
        }
    }
    int128_t v6 = __asm_movsd_1(v3); // 0x402548
    __asm_comisd(v6, g3);
    int32_t seconds = -1; // 0x40255b
    if (v4) {
        int64_t v7 = __asm_cvttsd2si(v6); // 0x402570
        __asm_pxor(v2, v2);
        __asm_comisd(v6, __asm_cvtsi2sd(v7 & 0xffffffff));
        seconds = v7;
    }
    // 0x402562
    return alarm(seconds);
}
// Address range: 0x402620 - 0x40267b
int64_t function_402620(int64_t sig_num, int64_t a2, int64_t a3) {
    // 0x402620
    int64_t set; // bp-136, 0x402620
    sigemptyset((struct _TYPEDEF_sigset_t *)&set);
    sigaddset((struct _TYPEDEF_sigset_t *)&set, (int32_t)sig_num);
    int32_t v1 = sigprocmask(SIG_UNBLOCK, (struct _TYPEDEF_sigset_t *)&set, NULL); // 0x402643
    int64_t result = v1; // 0x40264a
    if (v1 != 0) {
        // 0x402652
        error(0, *__errno_location(), dcgettext(NULL, "warning: sigprocmask", 5));
        result = &g60;
    }
    // 0x40264c
    return result;
}
// Address range: 0x402680 - 0x40284c
int64_t function_402680(int64_t a1) {
    int64_t v1 = a1 & 0xffffffff; // 0x40268d
    if ((int32_t)a1 == 14) {
        // 0x40268f
        g44 = 1;
        v1 = g19;
    }
    // 0x40269f
    if (g43 == 0) {
        // 0x402841
        _exit((int32_t)v1 + 128);
        // UNREACHABLE
    }
    int128_t v2 = __asm_movsd_1(g42); // 0x4026ad
    __asm_ucomisd(v2, (int64_t)g4);
    int64_t v3 = __asm_movsd(v2); // 0x4026f0
    int32_t * v4 = __errno_location(); // 0x4026f6
    __asm_movsd_1(v3);
    g19 = 9;
    int64_t v5; // 0x402680
    function_4024f0(0, v5, v5, v5);
    g42 = 0;
    if (g39 != 0) {
        // 0x402730
        int64_t v6; // bp-56, 0x402680
        if ((int32_t)function_406520(v1, &v6, v5) != 0) {
            // 0x402800
            __snprintf_chk((char *)&v6, 19, 1, 19, "%d", v1);
        }
        // 0x402744
        function_404c80((int64_t)g38);
        error(0, (int32_t)"sending signal %s to command %s" ^ (int32_t)"sending signal %s to command %s", dcgettext(NULL, "sending signal %s to command %s", 5));
    }
    int32_t sig_handler = v1;
    if (g43 == 0) {
        // 0x402788
        signal(sig_handler, SIG_IGN);
    }
    int64_t result = kill(g43, sig_handler); // 0x4026da
    if (g41 != 0) {
        // 0x4026e0
        return result;
    }
    // 0x4027a0
    signal(sig_handler, SIG_IGN);
    int64_t result2 = kill(0, sig_handler); // 0x4027b0
    switch (sig_handler) {
        case 9: {
        }
        case 18: {
            // 0x4026e0
            return result2;
        }
    }
    if (g43 == 0) {
        // 0x402830
        signal(SIGTSTP, SIG_IGN);
    }
    // 0x4027cb
    kill(g43, SIGTSTP);
    signal(SIGTSTP, SIG_IGN);
    return kill(0, SIGTSTP);
}
// Address range: 0x402850 - 0x402bed
int64_t function_402850(int64_t a1) {
    int32_t status = a1; // 0x402866
    if (status != 0) {
        // 0x40286a
        __fprintf_chk(g35, 1, dcgettext(NULL, "Try '%s --help' for more information.\n", 5));
        // 0x40288f
        exit(status);
        // UNREACHABLE
    }
    // 0x402896
    __printf_chk(1, dcgettext(NULL, "Usage: %s [OPTION] DURATION COMMAND [ARG]...\n  or:  %s [OPTION]\n", 5));
    fputs_unlocked(dcgettext(NULL, "Start COMMAND, and kill it if still running after DURATION.\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\nMandatory arguments to long options are mandatory for short options too.\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --preserve-status\n                 exit with the same status as COMMAND, even when the\n                   command times out\n      --foreground\n                 when not running timeout directly from a shell prompt,\n                   allow COMMAND to read from the TTY and get TTY signals;\n                   in this mode, children of COMMAND will not be timed out\n  -k, --kill-after=DURATION\n                 also send a KILL signal if COMMAND is still running\n                   this long after the initial signal was sent\n  -s, --signal=SIGNAL\n                 specify the signal to be sent on timeout;\n                   SIGNAL may be a name like 'HUP' or a number;\n                   see 'kill -l' for a list of signals\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "  -v, --verbose  diagnose to stderr any signal sent upon timeout\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --help     display this help and exit\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "      --version  output version information and exit\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\nDURATION is a floating point number with an optional suffix:\n's' for seconds (the default), 'm' for minutes, 'h' for hours or 'd' for days.\n", 5), g33);
    fputs_unlocked(dcgettext(NULL, "\nIf the command times out, and --preserve-status is not set, then exit with\nstatus 124.  Otherwise, exit with the status of COMMAND.  If no signal\nis specified, send the TERM signal upon timeout.  The TERM signal kills\nany process that does not block or catch that signal.  It may be necessary\nto use the KILL (9) signal, since this signal cannot be caught, in which\ncase the exit status is 128+9 rather than 124.\n", 5), g33);
    int64_t v1 = &g1; // bp-136, 0x4029cf
    bool v2; // 0x402850
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = &v1;
    int64_t v5 = v4 + 16; // 0x402a50
    int64_t v6 = *(int64_t *)v5; // 0x402a54
    int64_t v7 = 8; // 0x402a5a
    while (v6 != 0) {
        int64_t v8 = (int64_t)"timeout";
        int64_t v9 = v6;
        unsigned char v10 = *(char *)v8; // 0x402a66
        char v11 = *(char *)v9; // 0x402a66
        char v12 = v11; // 0x402a66
        bool v13 = false; // 0x402a66
        while (v10 == v11) {
            // 0x402a5c
            v7--;
            int64_t v14 = v9 + v3; // 0x402a66
            int64_t v15 = v8 + v3; // 0x402a66
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
            // break -> 0x402a72
            break;
        }
        v4 = v5;
        v5 = v4 + 16;
        v6 = *(int64_t *)v5;
        v7 = 8;
    }
    // 0x402a72
    __printf_chk(1, dcgettext(NULL, "\n%s online help: <%s>\n", 5));
    char * locale = setlocale(LC_MESSAGES, NULL);
    if (*(int64_t *)(v4 + 24) == 0) {
        if (locale == NULL) {
            goto lab_0x402b84;
        } else {
            // 0x402b6e
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402bc3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ad4;
            } else {
                goto lab_0x402b84;
            }
        }
    } else {
        if (locale == NULL) {
            goto lab_0x402ad4;
        } else {
            // 0x402aba
            if (strncmp(locale, "en_", 3) != 0) {
                // 0x402bc3
                __printf_chk(1, dcgettext(NULL, "Report %s translation bugs to <https://translationproject.org/team/>\n", 5));
                goto lab_0x402ad4;
            } else {
                goto lab_0x402ad4;
            }
        }
    }
  lab_0x402b84:
    // 0x402b84
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402b14
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40288f
    exit(status);
    // UNREACHABLE
  lab_0x402ad4:
    // 0x402ad4
    __printf_chk(1, dcgettext(NULL, "Full documentation at: <%s%s>\n", 5));
    // 0x402b14
    __printf_chk(1, dcgettext(NULL, "or available locally via: info '(coreutils) %s%s'\n", 5));
    // 0x40288f
    exit(status);
    // UNREACHABLE
}
// Address range: 0x402bf0 - 0x402cbe
int64_t function_402bf0(int64_t a1) {
    // 0x402bf0
    char * v1; // bp-16, 0x402bf0
    int64_t v2; // bp-24, 0x402bf0
    int64_t v3 = function_4054d0(a1, (int64_t *)&v1, &v2, 0x402e70); // 0x402c05
    bool v4 = false; // 0x402c0c
    char * format; // 0x402c73
    if ((char)v3 == 0) {
        uint32_t v5 = *__errno_location(); // 0x402c13
        v4 = v5 < 34;
        if (v5 != 34) {
            // 0x402c5c
            function_404c80(a1);
            format = dcgettext(NULL, "invalid time interval %s", 5);
            error(0, (int32_t)"invalid time interval %s" ^ (int32_t)"invalid time interval %s", format);
            function_402850(125);
            // UNREACHABLE
        }
    }
    int128_t v6 = __asm_movsd_1(v2); // 0x402c18
    __asm_comisd(v6, g4);
    if (v4) {
        // 0x402c5c
        function_404c80(a1);
        format = dcgettext(NULL, "invalid time interval %s", 5);
        error(0, (int32_t)"invalid time interval %s" ^ (int32_t)"invalid time interval %s", format);
        function_402850(125);
        // UNREACHABLE
    }
    unsigned char v7 = *v1; // 0x402c2c
    int64_t result = v7; // 0x402c2c
    if (v7 == 0) {
        // 0x402c4b
        return result;
    }
    // 0x402c33
    if (*(char *)((int64_t)v1 + 1) != 0) {
        // 0x402c5c
        function_404c80(a1);
        format = dcgettext(NULL, "invalid time interval %s", 5);
        error(0, (int32_t)"invalid time interval %s" ^ (int32_t)"invalid time interval %s", format);
        function_402850(125);
        // UNREACHABLE
    }
    if (v7 == 104) {
        // 0x402cb0
        __asm_mulsd(v6, 0x40ac200000000000);
        return 104;
    }
    if (v7 <= 104) {
        if (v7 == 100) {
            // 0x402c43
            __asm_mulsd(v6, 0x40f5180000000000);
            // 0x402c4b
            return result;
        }
        // 0x402c5c
        function_404c80(a1);
        format = dcgettext(NULL, "invalid time interval %s", 5);
        error(0, (int32_t)"invalid time interval %s" ^ (int32_t)"invalid time interval %s", format);
        function_402850(125);
        // UNREACHABLE
    }
    if (v7 == 109) {
        // 0x402c9c
        __asm_mulsd(v6, 0x404e000000000000);
        return result;
    }
    if (v7 == 115) {
        // 0x402c4b
        return result;
    }
    // 0x402c5c
    function_404c80(a1);
    format = dcgettext(NULL, "invalid time interval %s", 5);
    error(0, (int32_t)"invalid time interval %s" ^ (int32_t)"invalid time interval %s", format);
    function_402850(125);
    // UNREACHABLE
}
// Address range: 0x402cc0 - 0x402e64
int64_t function_402cc0(int64_t str, int64_t * a2) {
    char v1 = str;
    int64_t v2; // 0x402cc0
    int64_t v3; // 0x402cc0
    int32_t result; // bp-52, 0x402cc0
    int64_t v4; // 0x402d68
    if (v1 == 57 || (int32_t)v1 < 57) {
        int32_t * v5 = __errno_location(); // 0x402ce1
        *v5 = 0;
        char * endptr; // bp-48, 0x402cc0
        int32_t str_as_l = strtol((char *)str, &endptr, 10); // 0x402cfc
        if ((int64_t)endptr == str) {
            // 0x402d28
            result = -1;
            goto lab_0x402d30;
        } else {
            // 0x402d0b
            if (*endptr != 0) {
                // 0x402d28
                result = -1;
                goto lab_0x402d30;
            } else {
                // 0x402d10
                if (*v5 != 0) {
                    // 0x402d28
                    result = -1;
                    goto lab_0x402d30;
                } else {
                    if (str_as_l == -1) {
                        // 0x402e5b
                        result = -1;
                        goto lab_0x402d30;
                    } else {
                        int64_t v6 = str_as_l; // 0x402cfc
                        int32_t v7 = str_as_l - 254; // 0x402e3d
                        int64_t v8 = (v7 < 0 == (253 - str_as_l & str_as_l) < 0 == (v7 != 0) ? 255 : 127) & v6; // 0x402e50
                        result = v8;
                        v3 = v6;
                        v2 = v8;
                        goto lab_0x402dc9;
                    }
                }
            }
        }
    } else {
        // 0x402d68
        v4 = function_405470(str);
        char * v9 = (char *)v4; // 0x402d6d
        char c = *v9; // 0x402d6d
        if (c != 0) {
            if (strchr("abcdefghijklmnopqrstuvwxyz", (int32_t)c) != NULL) {
                // 0x402d92
                *(char *)v4 = c - 32;
            }
            int64_t v10 = v4 + 1; // 0x402d98
            char v11 = *(char *)v10; // 0x402d9c
            while (v11 != 0) {
                int64_t v12 = v10;
                char c2 = v11;
                if (strchr("abcdefghijklmnopqrstuvwxyz", (int32_t)c2) != NULL) {
                    // 0x402d92
                    *(char *)v12 = c2 - 32;
                }
                // 0x402d98
                v10 = v12 + 1;
                v11 = *(char *)v10;
            }
        }
        // 0x402da4
        if ((int32_t)function_4063c0(v4, &result) != 0) {
            // 0x402df0
            if (*v9 == 83) {
                // 0x402e10
                if (*(char *)(v4 + 1) != 73) {
                    // 0x402df7
                    result = -1;
                    free((int64_t *)v4);
                    goto lab_0x402d30;
                } else {
                    // 0x402e17
                    if (*(char *)(v4 + 2) != 71) {
                        // 0x402df7
                        result = -1;
                        free((int64_t *)v4);
                        goto lab_0x402d30;
                    } else {
                        // 0x402e1e
                        if ((int32_t)function_4063c0(v4 + 3, &result) != 0) {
                            // 0x402df7
                            result = -1;
                            free((int64_t *)v4);
                            goto lab_0x402d30;
                        } else {
                            goto lab_0x402db5;
                        }
                    }
                }
            } else {
                // 0x402df7
                result = -1;
                free((int64_t *)v4);
                goto lab_0x402d30;
            }
        } else {
            goto lab_0x402db5;
        }
    }
  lab_0x402db5:
    // 0x402db5
    free((int64_t *)v4);
    v2 = result;
    if (result < 0) {
        goto lab_0x402d30;
    } else {
        goto lab_0x402dc9;
    }
  lab_0x402d30:
    // 0x402d30
    function_404c80(str);
    error(0, (int32_t)"%s: invalid signal" ^ (int32_t)"%s: invalid signal", dcgettext(NULL, "%s: invalid signal", 5));
    // 0x402ddf
    return 0xffffffff;
  lab_0x402dc9:
    // 0x402dc9
    if ((int32_t)function_406520(v2 & 0xffffffff, a2, v3) == 0) {
        // 0x402ddf
        return result;
    }
    goto lab_0x402d30;
}
// Address range: 0x402e70 - 0x402eda
int64_t function_402e70(int64_t a1, int64_t a2, int64_t a3) {
    // 0x402e70
    int128_t v1; // 0x402e70
    int128_t v2 = v1;
    struct __locale_struct * v3 = g45;
    if (v3 != NULL) {
        // 0x402e94
        return strtod_l((char *)a1, (char **)a2, v3);
    }
    struct __locale_struct * v4 = newlocale(0x1fbf, "C", NULL); // 0x402ecc
    g45 = v4;
    if (v4 != NULL) {
        // 0x402e94
        return strtod_l((char *)a1, (char **)a2, v4);
    }
    if (a2 != 0) {
        // 0x402ead
        *(int64_t *)a2 = a1;
    }
    // 0x402eb0
    __asm_pxor(v2, v2);
    return (int64_t)v4;
}
// Address range: 0x402ee0 - 0x402ee8
int64_t function_402ee0(int64_t a1) {
    // 0x402ee0
    g47 = a1;
    int64_t result; // 0x402ee0
    return result;
}
// Address range: 0x402ef0 - 0x402ef8
int64_t function_402ef0(int64_t a1) {
    // 0x402ef0
    g46 = a1;
    int64_t result; // 0x402ef0
    return result;
}
// Address range: 0x402f00 - 0x402f9e
int64_t function_402f00(void) {
    // 0x402f00
    int32_t * err_num; // 0x402f16
    if ((int32_t)function_4065f0((int64_t)g33) == 0) {
        goto lab_0x402f2c;
    } else {
        // 0x402f16
        err_num = __errno_location();
        if (g46 == 0) {
            goto lab_0x402f43;
        } else {
            // 0x402f27
            if (*err_num != 32) {
                goto lab_0x402f43;
            } else {
                goto lab_0x402f2c;
            }
        }
    }
  lab_0x402f2c:;
    int64_t result = function_4065f0((int64_t)g35); // 0x402f33
    if ((int32_t)result == 0) {
        // 0x402f3c
        return result;
    }
    // 0x402f7e
    _exit(g21);
    // UNREACHABLE
  lab_0x402f43:;
    char * v1 = dcgettext(NULL, "write error", 5); // 0x402f4f
    if (g47 == 0) {
        // 0x402f89
        error(0, *err_num, "%s", v1);
    } else {
        // 0x402f63
        error(0, *err_num, "%s: %s", (char *)function_404ad0((int64_t)g47), v1);
    }
    // 0x402f7e
    _exit(g21);
    // UNREACHABLE
}
// Address range: 0x402fa0 - 0x40305c
int64_t function_402fa0(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x402fa0
    int128_t v1; // 0x402fa0
    __asm_comisd(v1, g5);
    bool v2; // 0x402fa0
    if (v2 || v2) {
        // 0x402fbc
        return -0x8000000000000000;
    }
    int128_t v3 = __asm_movsd_1(0x43e0000000000000); // 0x402fae
    __asm_comisd(v3, v1);
    int64_t v4 = __asm_cvttsd2si(v1); // 0x402fd0
    __asm_pxor(v3, v3);
    int128_t v5 = __asm_cvtsi2sd(v4); // 0x402fdb
    int128_t v6 = __asm_mulsd(__asm_subsd(v1, v5), 0x41cdcd6500000000); // 0x402fe4
    __asm_pxor(v5, v5);
    int64_t v7 = __asm_cvttsd2si(v6); // 0x402ff0
    __asm_comisd(v6, __asm_cvtsi2sd(v7));
    int64_t result = (v7 >> 63) + v4; // 0x403022
    if ((v7 >> 63 & -0x3b9aca00) + v7 < 0) {
        // 0x403050
        return result - 1;
    }
    // 0x402fbc
    return result;
}
// Address range: 0x403060 - 0x4030f9
int64_t function_403060(int64_t str) {
    // 0x403060
    if (str == 0) {
        // 0x4030d9
        fwrite((int64_t *)"A NULL argv[0] was passed through an exec system call.\n", 1, 55, g35);
        abort();
        // UNREACHABLE
    }
    char * found_char_pos = strrchr((char *)str, 47); // 0x40306e
    int64_t result = (int64_t)found_char_pos; // 0x40306e
    if (found_char_pos == NULL) {
        // 0x4030c9
        g48 = str;
        g34 = str;
        return result;
    }
    int64_t v1 = result + 1; // 0x403078
    if (v1 - str < 7) {
        // 0x4030c9
        g48 = str;
        g34 = str;
        return result;
    }
    // 0x403088
    bool v2; // 0x403060
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"/.libs/"; // 0x403060
    int64_t v5 = result - 6; // 0x403060
    int64_t v6 = 7; // 0x403096
    unsigned char v7 = *(char *)v5; // 0x403096
    char v8 = *(char *)v4; // 0x403096
    char v9 = v8; // 0x403096
    bool v10 = false; // 0x403096
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
    int64_t v12 = (int64_t)"lt-"; // 0x4030a0
    int64_t v13 = v1; // 0x4030a0
    int64_t v14 = 3; // 0x4030a0
    if ((v7 >= v11 && !v10) != v7 < v11) {
        // 0x4030c9
        g48 = str;
        g34 = str;
        return result;
    }
    unsigned char v15 = *(char *)v13; // 0x4030b2
    char v16 = *(char *)v12; // 0x4030b2
    char v17 = v16; // 0x4030b2
    bool v18 = false; // 0x4030b2
    while (v15 == v16) {
        // 0x4030a2
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
    int64_t v20 = v1; // 0x4030bc
    if ((v15 >= v19 && !v18) == v15 < v19) {
        // 0x4030be
        v20 = result + 4;
        g32 = v20;
    }
    // 0x4030c9
    g48 = v20;
    g34 = v20;
    return result;
}
// Address range: 0x403100 - 0x4031f2
int64_t function_403100(int64_t a1, int64_t a2) {
    char * v1 = dcgettext(NULL, (char *)a1, 5); // 0x403114
    int64_t result = (int64_t)v1; // 0x403114
    if (result != a1) {
        // 0x403121
        return result;
    }
    int64_t v2 = function_4066b0(); // 0x403130
    char v3 = *(char *)v2 & -33;
    int64_t result2; // 0x4031e6
    if (v3 == 85) {
        // 0x403140
        if ((*(char *)(v2 + 1) & -33) != 84 || (*(char *)(v2 + 2) & -33) != 70 || *(char *)(v2 + 3) != 45 || *(char *)(v2 + 4) != 56 || *(char *)(v2 + 5) != 0) {
            // 0x4031d8
            result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
            return result2;
        }
        char v4 = *v1; // 0x40316e
        int64_t result3 = v4 != 96 ? (int64_t)&g7 : (int64_t)&g10; // 0x40317b
        // 0x403121
        return result3;
    }
    if (v3 != 71 || (*(char *)(v2 + 1) & -33) != 66 || *(char *)(v2 + 2) != 49 || *(char *)(v2 + 3) != 56 || *(char *)(v2 + 4) != 48 || *(char *)(v2 + 5) != 51 || *(char *)(v2 + 6) != 48 || *(char *)(v2 + 7) != 0) {
        // 0x4031d8
        result2 = (int32_t)a2 != 9 ? (int64_t)&g11 : (int64_t)&g6;
        return result2;
    }
    char v5 = *v1; // 0x4031bd
    int64_t result4 = v5 != 96 ? (int64_t)&g8 : (int64_t)&g9; // 0x4031ca
    // 0x403121
    return result4;
}
// Address range: 0x403200 - 0x403257
int64_t function_403200(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int32_t a6) {
    // 0x403200
    __ctype_get_mb_cur_max();
    if ((uint32_t)(int32_t)a5 < 11) {
        // 0x403248
        return a5 & 0xffffffff;
    }
    abort();
    // UNREACHABLE
}
// Address range: 0x403257 - 0x404421
int64_t function_403257(int64_t a1, int64_t a2, int64_t a3, int64_t str) {
    int64_t v1 = str + 1;
    int64_t v2 = 0; // 0x4032a1
    int64_t v3 = 0; // 0x4032a1
    int64_t v4; // 0x403257
    int64_t v5; // 0x403257
    int64_t v6; // 0x403257
    int64_t v7; // 0x403257
    int64_t v8; // 0x403257
    int64_t v9; // 0x403257
    int64_t v10; // 0x403257
    int64_t v11; // 0x403257
    int64_t v12; // 0x403257
    int64_t v13; // 0x403257
    int64_t v14; // 0x403257
    int64_t v15; // 0x403257
    int64_t v16; // 0x403257
    int64_t v17; // 0x403257
    int64_t v18; // 0x403257
    int64_t result; // 0x403257
    int64_t v19; // 0x403257
    int32_t wc; // bp+132, 0x403257
    int64_t ps; // bp+136, 0x403257
    char v20; // 0x403810
    int64_t v21; // 0x403810
    int64_t v22; // 0x403bb8
    int64_t v23; // 0x403257
    int64_t v24; // 0x403bd7
    int32_t v25; // 0x403257
    while (true) {
      lab_0x4032a8_2:
        // 0x4032a8
        v12 = v11;
        v8 = v7;
        v15 = v14;
        result = v2;
        int64_t v26 = v3; // 0x403257
        int64_t v27; // 0x4032dc
        while (true) {
          lab_0x4032a8:
            // 0x4032a8
            v5 = v26;
            bool v28 = v15 == v5; // 0x4032b3
            if (v15 == -1) {
                // 0x4032b5
                v28 = *(char *)(v5 + str) == 0;
            }
            // 0x4032c3
            if (v28) {
                // break (via goto) -> 0x403a28
                goto lab_0x403a28;
            }
            // 0x4032cc
            v27 = v5 + str;
            v20 = *(char *)v27;
            v21 = v20;
            g59 = v21;
            v16 = v15;
            v9 = v8;
            v13 = v12;
            v4 = v15;
            v6 = v8;
            v10 = v12;
            switch (v20) {
                case 0: {
                    // 0x4038bb
                    if (v25 % 2 == 0) {
                        goto lab_0x403401;
                    }
                    // 0x403cdd
                    v26 = v5 + 1;
                    goto lab_0x4032a8;
                }
                case 7: {
                    goto lab_0x403401;
                }
                case 8: {
                    goto lab_0x403401;
                }
                case 9: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 10: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 11: {
                    goto lab_0x403401;
                }
                case 12: {
                    goto lab_0x403401;
                }
                case 13: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 32: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 33: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 34: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 35: {
                    goto lab_0x4033cd;
                }
                case 36: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 37: {
                    goto lab_0x403401;
                }
                case 38: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 39: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 40: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 41: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 42: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 43: {
                    goto lab_0x403401;
                }
                case 44: {
                    goto lab_0x403401;
                }
                case 45: {
                    goto lab_0x403401;
                }
                case 46: {
                    goto lab_0x403401;
                }
                case 47: {
                    goto lab_0x403401;
                }
                case 48: {
                    goto lab_0x403401;
                }
                case 49: {
                    goto lab_0x403401;
                }
                case 50: {
                    goto lab_0x403401;
                }
                case 51: {
                    goto lab_0x403401;
                }
                case 52: {
                    goto lab_0x403401;
                }
                case 53: {
                    goto lab_0x403401;
                }
                case 54: {
                    goto lab_0x403401;
                }
                case 55: {
                    goto lab_0x403401;
                }
                case 56: {
                    goto lab_0x403401;
                }
                case 57: {
                    goto lab_0x403401;
                }
                case 58: {
                    goto lab_0x403401;
                }
                case 59: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 60: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 61: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 62: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 63: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 65: {
                    goto lab_0x403401;
                }
                case 66: {
                    goto lab_0x403401;
                }
                case 67: {
                    goto lab_0x403401;
                }
                case 68: {
                    goto lab_0x403401;
                }
                case 69: {
                    goto lab_0x403401;
                }
                case 70: {
                    goto lab_0x403401;
                }
                case 71: {
                    goto lab_0x403401;
                }
                case 72: {
                    goto lab_0x403401;
                }
                case 73: {
                    goto lab_0x403401;
                }
                case 74: {
                    goto lab_0x403401;
                }
                case 75: {
                    goto lab_0x403401;
                }
                case 76: {
                    goto lab_0x403401;
                }
                case 77: {
                    goto lab_0x403401;
                }
                case 78: {
                    goto lab_0x403401;
                }
                case 79: {
                    goto lab_0x403401;
                }
                case 80: {
                    goto lab_0x403401;
                }
                case 81: {
                    goto lab_0x403401;
                }
                case 82: {
                    goto lab_0x403401;
                }
                case 83: {
                    goto lab_0x403401;
                }
                case 84: {
                    goto lab_0x403401;
                }
                case 85: {
                    goto lab_0x403401;
                }
                case 86: {
                    goto lab_0x403401;
                }
                case 87: {
                    goto lab_0x403401;
                }
                case 88: {
                    goto lab_0x403401;
                }
                case 89: {
                    goto lab_0x403401;
                }
                case 90: {
                    goto lab_0x403401;
                }
                case 91: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 92: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 93: {
                    goto lab_0x403401;
                }
                case 94: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 95: {
                    goto lab_0x403401;
                }
                case 96: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 97: {
                    goto lab_0x403401;
                }
                case 98: {
                    goto lab_0x403401;
                }
                case 99: {
                    goto lab_0x403401;
                }
                case 100: {
                    goto lab_0x403401;
                }
                case 101: {
                    goto lab_0x403401;
                }
                case 102: {
                    goto lab_0x403401;
                }
                case 103: {
                    goto lab_0x403401;
                }
                case 104: {
                    goto lab_0x403401;
                }
                case 105: {
                    goto lab_0x403401;
                }
                case 106: {
                    goto lab_0x403401;
                }
                case 107: {
                    goto lab_0x403401;
                }
                case 108: {
                    goto lab_0x403401;
                }
                case 109: {
                    goto lab_0x403401;
                }
                case 110: {
                    goto lab_0x403401;
                }
                case 111: {
                    goto lab_0x403401;
                }
                case 112: {
                    goto lab_0x403401;
                }
                case 113: {
                    goto lab_0x403401;
                }
                case 114: {
                    goto lab_0x403401;
                }
                case 115: {
                    goto lab_0x403401;
                }
                case 116: {
                    goto lab_0x403401;
                }
                case 117: {
                    goto lab_0x403401;
                }
                case 118: {
                    goto lab_0x403401;
                }
                case 119: {
                    goto lab_0x403401;
                }
                case 120: {
                    goto lab_0x403401;
                }
                case 121: {
                    goto lab_0x403401;
                }
                case 122: {
                    goto lab_0x403401;
                }
                case 123: {
                    goto lab_0x4033a5;
                }
                case 124: {
                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                }
                case 125: {
                    goto lab_0x4033a5;
                }
                case 126: {
                    goto lab_0x4033cd;
                }
                default: {
                    goto lab_0x4037a5;
                }
            }
        }
      lab_0x4037a5:
        if (v23 != 1) {
            // 0x403b10
            ps = 0;
            int64_t len = v15; // 0x403b20
            if (v15 == -1) {
                // 0x403b22
                len = strlen((char *)str);
            }
            // 0x403b4e
            v22 = 0x100000000 * len >> 32;
            v17 = 0;
            while (true) {
              lab_0x403baf:
                // 0x403baf
                v18 = v17;
                uint64_t v29 = v18 + v5; // 0x403bb4
                int64_t v30 = v29 + str;
                v24 = function_406340(&wc, v30, v22 - v29);
                v19 = v18;
                switch (v24) {
                    case 0: {
                        goto lab_0x40412a_2;
                    }
                    case -1: {
                        goto lab_0x40412a_2;
                    }
                    case -2: {
                        // 0x40420d
                        v19 = v18;
                        if (v22 > v29) {
                            // 0x404247
                            v19 = v18;
                            int64_t v31 = v18; // 0x40424a
                            if (*(char *)v30 != 0) {
                                int64_t v32 = v31 + 1; // 0x404257
                                v19 = v32;
                                while (v32 + v5 < v22) {
                                    // 0x404250
                                    v19 = v32;
                                    v31 = v32;
                                    if (*(char *)(v32 + v27) == 0) {
                                        // break -> 0x40412a
                                        break;
                                    }
                                    v32 = v31 + 1;
                                    v19 = v32;
                                }
                            }
                        }
                        goto lab_0x40412a_2;
                    }
                    case 1: {
                        goto lab_0x403b80;
                    }
                    default: {
                        int64_t v33 = v29 + v1; // 0x403c2c
                        char v34 = *(char *)v33; // 0x403c3d
                        unsigned char v35; // 0x403257
                        if (v34 < 125) {
                            // 0x403c48
                            v35 = (v34 + 37) % 64;
                            if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                // 0x403c5f
                                v4 = v22;
                                v6 = 0x100000000 * v8 >> 32;
                                v10 = 0x100000000 * v12 >> 32;
                                return function_403200(v10, v6, str, v4, 2, v25 & -3);
                            }
                        }
                        // 0x403c30
                        v33++;
                        while (v30 + v24 != v33) {
                            // 0x403c3d
                            v34 = *(char *)v33;
                            if (v34 < 125) {
                                // 0x403c48
                                v35 = (v34 + 37) % 64;
                                if (v35 != 0 != ((1 << (int64_t)v35 & 0x20000002b) == 0)) {
                                    // 0x403c5f
                                    v4 = v22;
                                    v6 = 0x100000000 * v8 >> 32;
                                    v10 = 0x100000000 * v12 >> 32;
                                    return function_403200(v10, v6, str, v4, 2, v25 & -3);
                                }
                            }
                            // 0x403c30
                            v33++;
                        }
                        goto lab_0x403b80;
                    }
                }
            }
            goto lab_0x40412a_2;
        } else {
            // 0x4037f4
            __ctype_b_loc();
            v16 = 0x100000000000000 * v15 >> 56;
            v9 = v8;
            v13 = v12;
            goto lab_0x403401;
        }
    }
  lab_0x403a28:
    // 0x403a28
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (result != 0) {
        // 0x40432a
        if (v8 > result) {
            // 0x404333
            *(char *)(v12 + result) = 0;
        }
        // 0x403657
        return result;
    }
    return function_403200(v10, v6, str, v4, 2, v25 & -3);
  lab_0x403401:;
    int64_t v36 = v13;
    int64_t v37 = v9;
    int64_t v38 = v16;
    if (v23 != 0) {
        // 0x403410
        v4 = v38;
        v6 = v37;
        v10 = v36;
        if ((*(int32_t *)((v21 / 8 & 28) + v23) & 1 << (int32_t)(v20 % 32)) != 0) {
            goto lab_0x40361a_2;
        }
    }
    int64_t v39 = result; // 0x403511
    char v40 = v20; // 0x403511
    int64_t v41 = v38; // 0x403511
    v3 = v5 + 1;
    int64_t v42 = v37; // 0x403511
    int64_t v43 = v36; // 0x403511
    goto lab_0x40348d;
  lab_0x40361a_2:
    // 0x403657
    return function_403200(v10, v6, str, v4, 2, v25 & -3);
  lab_0x40412a_2:;
    uint64_t v46 = v19;
    int64_t v47 = 0x100000000 * v8 >> 32;
    int64_t v48 = 0x100000000 * v12 >> 32;
    v16 = v22;
    v9 = v47;
    v13 = v48;
    if (v46 < 2) {
        goto lab_0x403401;
    } else {
        uint64_t v49 = v46 + v5; // 0x403cfe
        int64_t v50 = v5 + 1; // 0x403de1
        v39 = result;
        v40 = v20;
        v41 = v22;
        v3 = v50;
        v42 = v47;
        v43 = v48;
        int64_t v51 = v50; // 0x403de8
        char v52 = v20; // 0x403de8
        int64_t v53 = result; // 0x403de8
        if (v50 < v49) {
            uint64_t v54 = v53;
            if (v47 > v54) {
                // 0x403db1
                *(char *)(v54 + v48) = v52;
            }
            char v55 = *(char *)(v51 + str); // 0x403db5
            int64_t v56 = v54 + 1; // 0x403dba
            int64_t v57 = v51 + 1; // 0x403de1
            v39 = v56;
            v40 = v55;
            v41 = v22;
            v3 = v57;
            v42 = v47;
            v43 = v48;
            v51 = v57;
            while (v57 < v49) {
                // 0x403dac
                v54 = v56;
                if (v47 > v54) {
                    // 0x403db1
                    *(char *)(v54 + v48) = v55;
                }
                // 0x403db5
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
        goto lab_0x40348d;
    }
  lab_0x403b80:
    // 0x403b80
    iswprint(wc);
    int64_t v58 = v24 + v18; // 0x403b9f
    int32_t v59 = mbsinit((struct _TYPEDEF___mbstate_t *)&ps); // 0x403ba2
    v17 = v58;
    v19 = v58;
    if (v59 != 0) {
        // break -> 0x40412a
        goto lab_0x40412a_2;
    }
    goto lab_0x403baf;
  lab_0x4033cd:
    // 0x4033cd
    v16 = v15;
    v9 = v8;
    v13 = v12;
    v4 = v15;
    v6 = v8;
    v10 = v12;
    if (v5 == 0) {
        goto lab_0x40361a_2;
    }
    goto lab_0x403401;
  lab_0x4033a5:;
    bool v60 = v15 == 1; // 0x4033b0
    if (v15 == -1) {
        // 0x4033b2
        v60 = *(char *)v1 == 0;
    }
    // 0x4033be
    v16 = v15;
    v9 = v8;
    v13 = v12;
    if (!v60) {
        goto lab_0x403401;
    } else {
        goto lab_0x4033cd;
    }
  lab_0x40348d:;
    int64_t v44 = v43;
    uint64_t v45 = v39;
    if (v45 < v42) {
        // 0x403492
        *(char *)(v44 + v45) = v40;
    }
    // 0x403496
    v2 = v45 + 1;
    v14 = v41;
    v7 = v42;
    v11 = v44;
    goto lab_0x4032a8_2;
}
// Address range: 0x404430 - 0x4045ce
int64_t function_404430(int64_t a1, int64_t a2, int64_t a3, int64_t * a4) {
    int64_t v1 = 0x100000000 * a1;
    uint64_t v2 = v1 >> 32; // 0x404432
    int32_t * v3 = __errno_location(); // 0x40444c
    int64_t v4 = (int64_t)g23; // 0x404451
    int32_t v5 = *v3; // 0x40445b
    int64_t v6 = v4; // 0x404471
    if (v2 >= (int64_t)*(int32_t *)&g26) {
        if ((int32_t)v2 == 0x7fffffff) {
            // 0x4045c9
            function_405490(a1);
            // UNREACHABLE
        }
        int64_t v7 = v2 + 1; // 0x404480
        int64_t v8 = 0x100000000 * v7 >> 28; // 0x404487
        int64_t v9; // 0x404430
        if (g23 == &g24) {
            int64_t v10 = function_4052a0(0, v8); // 0x4045aa
            int128_t v11 = __asm_movdqa(*(int128_t *)&g24); // 0x4045af
            *(int64_t *)&g23 = v10;
            __asm_movups(*(int128_t *)v10, v11);
            v9 = v10;
        } else {
            int64_t v12 = function_4052a0(v4, v8); // 0x40449b
            *(int64_t *)&g23 = v12;
            v9 = v12;
        }
        // 0x4044aa
        v6 = v9;
        int32_t v13 = *(int32_t *)&g26; // 0x4044aa
        int32_t v14 = v7; // 0x4044b1
        memset((int64_t *)(16 * (int64_t)v13 + v6), 0, 16 * (v14 - v13));
        *(int32_t *)&g26 = v14;
    }
    int64_t v15 = v6 + (v1 >> 28); // 0x4044e1
    int32_t v16 = *(int32_t *)((int64_t)a4 + 4) | 1; // 0x4044eb
    int64_t * v17 = (int64_t *)v15; // 0x4044ee
    uint64_t v18 = *v17; // 0x4044ee
    int64_t * v19 = (int64_t *)(v15 + 8); // 0x4044f1
    int64_t result = *v19; // 0x4044f1
    int64_t v20; // 0x404430
    uint64_t v21 = function_403200(result, v18, a2, a3, v20 & 0xffffffff, v16); // 0x404514
    if (v18 > v21) {
        // 0x40458b
        *v3 = v5;
        return result;
    }
    int64_t v22 = v21 + 1; // 0x404527
    *v17 = v22;
    if (result != (int64_t)&g49) {
        // 0x404537
        free((int64_t *)result);
    }
    int64_t result2 = function_405240(v22); // 0x404551
    *v19 = result2;
    int64_t v23; // 0x404430
    function_403200(result2, v22, a2, a3, (int64_t)*(int32_t *)&v23, v16);
    // 0x40458b
    *v3 = v5;
    return result2;
}
// Address range: 0x4045d0 - 0x404604
int64_t function_4045d0(int64_t a1) {
    int32_t * v1 = __errno_location(); // 0x4045d7
    int64_t result = function_405440(a1 == 0 ? (int64_t)&g50 : a1, 56); // 0x4045f6
    return result;
}
// Address range: 0x404610 - 0x40461f
int64_t function_404610(int64_t a1) {
    uint32_t result = *(int32_t *)(a1 == 0 ? (int64_t)&g50 : a1); // 0x40461c
    return result;
}
// Address range: 0x404620 - 0x40462f
int64_t function_404620(int64_t a1, int64_t a2) {
    int64_t v1 = a1 == 0 ? (int64_t)&g50 : a1; // 0x404628
    *(int32_t *)v1 = (int32_t)a2;
    return (int64_t)&g50;
}
// Address range: 0x404630 - 0x404663
int64_t function_404630(int64_t a1, uint64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g50 + 8 : a1 + 8; // 0x404649
    int32_t * v2 = (int32_t *)((a2 / 8 & 28) + v1); // 0x40464e
    uint32_t v3 = *v2; // 0x40464e
    uint32_t v4 = (int32_t)a2 % 32; // 0x404652
    uint32_t v5 = v3 >> v4;
    *v2 = (v5 ^ (int32_t)a3) % 2 << v4 ^ v3;
    return v5 % 2;
}
// Address range: 0x404670 - 0x404683
int64_t function_404670(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a1 == 0 ? (int64_t)&g50 + 4 : a1 + 4); // 0x40467c
    *v1 = (int32_t)a2;
    return (int64_t)*v1;
}
// Address range: 0x404690 - 0x4046bb
int64_t function_404690(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = a1 == 0 ? (int64_t)&g50 : a1; // 0x404698
    *(int32_t *)v1 = 10;
    if (a2 == 0 || a3 == 0) {
        // 0x4046b5
        abort();
        // UNREACHABLE
    }
    // 0x4046ac
    *(int64_t *)(v1 + 40) = a2;
    *(int64_t *)(v1 + 48) = a3;
    return (int64_t)&g50;
}
// Address range: 0x4046c0 - 0x404732
int64_t function_4046c0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int64_t v1 = a5 == 0 ? (int64_t)&g50 : a5; // 0x4046e2
    int32_t * v2 = __errno_location(); // 0x4046eb
    uint32_t v3 = *(int32_t *)v1; // 0x40470b
    int64_t result = function_403200(a1, a2, a3, a4, (int64_t)v3, *(int32_t *)(v1 + 4)); // 0x40471a
    return result;
}
// Address range: 0x404740 - 0x404821
int64_t function_404740(int64_t a1, int64_t a2, int32_t a3, int64_t a4) {
    int64_t v1 = a4 == 0 ? (int64_t)&g50 : a4; // 0x404762
    int32_t * v2 = __errno_location(); // 0x404768
    int32_t v3 = *(int32_t *)(v1 + 4) | (int32_t)(a3 == 0); // 0x404787
    int32_t * v4 = (int32_t *)v1; // 0x40478a
    int64_t v5 = function_403200(0, 0, a1, a2, (int64_t)*v4, v3); // 0x4047a5
    int64_t v6 = v5 + 1; // 0x4047aa
    int64_t result = function_405240(v6); // 0x4047bf
    function_403200(result, v6, a1, a2, (int64_t)*v4, v3);
    if (a3 != 0) {
        // 0x404804
        *(int64_t *)(int64_t)a3 = v5;
    }
    // 0x40480d
    return result;
}
// Address range: 0x404830 - 0x40483a
int64_t function_404830(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404830
    return function_404740(a1, a2, 0, a3);
}
// Address range: 0x404840 - 0x4048d5
int64_t function_404840(void) {
    uint32_t v1 = *(int32_t *)&g26; // 0x404840
    int64_t v2 = v1; // 0x404840
    int64_t v3 = v2; // 0x404854
    if (v1 >= 2) {
        int64_t v4 = &g26;
        int64_t v5 = v4 + 16; // 0x404873
        free((int64_t *)*(int64_t *)v4);
        v3 = &g60;
        while (v5 != (int64_t)g23 + 40 + (16 * v2 + 0xfffffffe0 & 0xffffffff0)) {
            // 0x404870
            v4 = v5;
            v5 = v4 + 16;
            free((int64_t *)*(int64_t *)v4);
            v3 = &g60;
        }
    }
    int64_t v6 = v3; // 0x40488d
    if (g24 != 0x60b560) {
        // 0x40488f
        free((int64_t *)g24);
        g24 = 256;
        *(int64_t *)&g25 = (int64_t)&g49;
        v6 = &g60;
    }
    int64_t result = v6; // 0x4048b1
    if (g23 != &g24) {
        // 0x4048b3
        free(g23);
        *(int64_t *)&g23 = (int64_t)&g24;
        result = &g60;
    }
    // 0x4048c6
    *(int32_t *)&g26 = 1;
    return result;
}
// Address range: 0x4048e0 - 0x4048f1
int64_t function_4048e0(void) {
    // 0x4048e0
    int64_t v1; // 0x4048e0
    return function_404430(v1, v1, -1, (int64_t *)&g50);
}
// Address range: 0x404900 - 0x40490a
int64_t function_404900(void) {
    // 0x404900
    int64_t v1; // 0x404900
    return function_404430(v1, v1, v1, (int64_t *)&g50);
}
// Address range: 0x404910 - 0x404926
int64_t function_404910(int64_t a1) {
    // 0x404910
    return function_404430(0, a1, -1, (int64_t *)&g50);
}
// Address range: 0x404930 - 0x404942
int64_t function_404930(int64_t a1, int64_t a2) {
    // 0x404930
    return function_404430(0, a1, a2, (int64_t *)&g50);
}
// Address range: 0x404950 - 0x4049b8
int64_t function_404950(int32_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404960
    return function_404430((int64_t)a1, a3, -1, &v1);
}
// Address range: 0x4049c0 - 0x404a24
int64_t function_4049c0(int32_t a1, int64_t a2, int64_t a3, int64_t a4) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x4049d0
    return function_404430((int64_t)a1, a3, a4, &v1);
}
// Address range: 0x404a30 - 0x404a3c
int64_t function_404a30(int64_t a1, int64_t a2) {
    // 0x404a30
    return function_404950(0, a1 & 0xffffffff, a2);
}
// Address range: 0x404a40 - 0x404a4f
int64_t function_404a40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404a40
    return function_4049c0(0, a1 & 0xffffffff, a2, a3);
}
// Address range: 0x404a50 - 0x404ac0
int64_t function_404a50(int64_t a1, int64_t a2, uint64_t a3) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g50); // 0x404a5d
    int128_t v2 = __asm_movdqa(g51); // 0x404a65
    int128_t v3 = __asm_movdqa(g52); // 0x404a6d
    int64_t v4 = __asm_movaps(v1); // bp-72, 0x404a82
    __asm_movaps(v2);
    __asm_movaps(v3);
    int32_t * v5 = (int32_t *)((a3 / 8 & 28) + 8 + (int64_t)&v4); // 0x404a98
    uint32_t v6 = *v5; // 0x404a98
    uint32_t v7 = (int32_t)a3 % 32; // 0x404a9d
    *v5 = ((v6 >> v7) % 2 ^ 1) << v7 ^ v6;
    return function_404430(0, a1, a2, &v4);
}
// Address range: 0x404ac0 - 0x404acd
int64_t function_404ac0(int64_t a1, int64_t a2) {
    // 0x404ac0
    return function_404a50(a1, -1, 0x100000000000000 * a2 >> 56);
}
// Address range: 0x404ad0 - 0x404ae1
int64_t function_404ad0(int64_t a1) {
    // 0x404ad0
    return function_404a50(a1, -1, 58);
}
// Address range: 0x404af0 - 0x404afa
int64_t function_404af0(void) {
    // 0x404af0
    int64_t v1; // 0x404af0
    return function_404a50(v1, v1, 58);
}
// Address range: 0x404b00 - 0x404b6e
int64_t function_404b00(int64_t a1, int64_t a2, int64_t a3) {
    int64_t v1 = 0x100000000 * a2 >> 32; // bp-72, 0x404b1a
    return function_404430(a1, a3, -1, &v1);
}
// Address range: 0x404b70 - 0x404bdc
int64_t function_404b70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5) {
    int128_t v1 = __asm_movdqa(*(int128_t *)&g50); // 0x404b77
    int128_t v2 = __asm_movdqa(g51); // 0x404b7f
    int128_t v3 = __asm_movdqa(g52); // 0x404b87
    __asm_movaps(v1);
    __asm_movaps(v2);
    __asm_movaps(v3);
    int64_t v4 = 10; // bp-72, 0x404ba9
    if (a2 == 0 || a3 == 0) {
        // 0x404bd7
        abort();
        // UNREACHABLE
    }
    // 0x404bba
    return function_404430(a1, a4, a5, &v4);
}
// Address range: 0x404be0 - 0x404be9
int64_t function_404be0(void) {
    // 0x404be0
    int64_t v1; // 0x404be0
    return function_404b70(v1, v1, v1, v1, -1);
}
// Address range: 0x404bf0 - 0x404c07
int64_t function_404bf0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x404bf0
    return function_404b70(0, a1, a2, a3, -1);
}
// Address range: 0x404c10 - 0x404c23
int64_t function_404c10(int64_t a1, int64_t a2, int64_t a3, int64_t a4) {
    // 0x404c10
    return function_404b70(0, a1, a2, a3, a4);
}
// Address range: 0x404c30 - 0x404c3a
int64_t function_404c30(void) {
    // 0x404c30
    int64_t v1; // 0x404c30
    return function_404430(v1, v1, v1, &g22);
}
// Address range: 0x404c40 - 0x404c52
int64_t function_404c40(int64_t a1, int64_t a2) {
    // 0x404c40
    return function_404430(0, a1, a2, &g22);
}
// Address range: 0x404c60 - 0x404c71
int64_t function_404c60(void) {
    // 0x404c60
    int64_t v1; // 0x404c60
    return function_404430(v1, v1, -1, &g22);
}
// Address range: 0x404c80 - 0x404c96
int64_t function_404c80(int64_t a1) {
    // 0x404c80
    return function_404430(0, a1, -1, &g22);
}
// Address range: 0x404ca0 - 0x40507d
int64_t function_404ca0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, uint64_t a6, int64_t a7) {
    struct _IO_FILE * v1 = (struct _IO_FILE *)a1;
    if (a2 == 0) {
        // 0x404d38
        __fprintf_chk(v1, 1, "%s %s\n", (char *)a3, (char *)a4);
    } else {
        // 0x404cbc
        __fprintf_chk(v1, 1, "%s (%s) %s\n", (char *)a2, (char *)a3, (char *)a4);
    }
    // 0x404cd6
    __fprintf_chk(v1, 1, "Copyright %s %d Free Software Foundation, Inc.", dcgettext(NULL, "(C)", 5), 2017);
    int32_t result = fputs_unlocked(dcgettext(NULL, "\nLicense GPLv3+: GNU GPL version 3 or later <https://gnu.org/licenses/gpl.html>.\nThis is free software: you are free to change and redistribute it.\nThere is NO WARRANTY, to the extent permitted by law.\n\n", 5), v1); // 0x404d1b
    if (a6 < 10) {
        // 0x404d2a
        return result;
    }
    char * v2 = dcgettext(NULL, "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n", 5); // 0x404e22
    return __fprintf_chk(v1, 1, v2);
}
// Address range: 0x405080 - 0x4050a0
int64_t function_405080(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x405080
    if (a5 == 0) {
        // 0x40509b
        return function_404ca0(a1, a2, a3, a4, a5, 0, (int64_t)&g60);
    }
    int64_t v1 = 0; // 0x405087
    v1++;
    int64_t v2 = v1; // 0x405099
    while (*(int64_t *)(8 * v1 + a5) != 0) {
        // 0x405090
        v1++;
        v2 = v1;
    }
    // 0x40509b
    return function_404ca0(a1, a2, a3, a4, a5, v2, (int64_t)&g60);
}
// Address range: 0x4050a0 - 0x405100
int64_t function_4050a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    int64_t v1 = a5;
    int64_t v2; // bp-88, 0x4050a0
    int64_t v3 = &v2; // 0x4050a0
    int64_t v4 = 0;
    uint32_t v5 = (int32_t)a5; // 0x4050d3
    int64_t v6; // 0x4050bd
    int64_t * v7; // 0x4050db
    int64_t v8; // 0x4050db
    int64_t v9; // 0x4050e7
    if (v5 < 48) {
        // 0x4050b0
        *(int32_t *)v1 = v5 + 8;
        v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
        *(int64_t *)(8 * v4 + v3) = v6;
        if (v6 == 0) {
            // break -> 0x4050f3
            break;
        }
    } else {
        // 0x4050db
        v7 = (int64_t *)(v1 + 8);
        v8 = *v7;
        *v7 = v8 + 8;
        v9 = *(int64_t *)v8;
        *(int64_t *)(8 * v4 + v3) = v9;
        if (v9 == 0) {
            // break -> 0x4050f3
            break;
        }
    }
    int64_t v10 = 10; // 0x4050d1
    while (v4 != 9) {
        // 0x4050c9
        v4++;
        v5 = *(int32_t *)&v1;
        if (v5 < 48) {
            // 0x4050b0
            *(int32_t *)v1 = v5 + 8;
            v6 = *(int64_t *)(*(int64_t *)(v1 + 16) + (int64_t)v5);
            *(int64_t *)(8 * v4 + v3) = v6;
            v10 = v4;
            if (v6 == 0) {
                // break -> 0x4050f3
                break;
            }
        } else {
            // 0x4050db
            v7 = (int64_t *)(v1 + 8);
            v8 = *v7;
            *v7 = v8 + 8;
            v9 = *(int64_t *)v8;
            *(int64_t *)(8 * v4 + v3) = v9;
            v10 = v4;
            if (v9 == 0) {
                // break -> 0x4050f3
                break;
            }
        }
        // 0x4050c9
        v10 = 10;
    }
    // 0x4050f3
    return function_404ca0(a1, a2, a3, a4, v3, v10, (int64_t)&g60);
}
// Address range: 0x405100 - 0x4051bc
int64_t function_405100(int64_t a1, char * a2, char * a3, int64_t a4, char * a5, int32_t a6) {
    // 0x405100
    int64_t v1; // bp-168, 0x405100
    int64_t v2 = (int64_t)&v1 + 32;
    int64_t v3; // 0x405100
    int64_t v4 = &v3;
    int64_t v5 = 0;
    int64_t v6 = 32;
    int64_t v7; // 0x405100
    int64_t v8; // 0x405100
    int64_t v9; // bp-56, 0x405100
    int64_t v10; // 0x405165
    int64_t v11; // 0x405189
    if ((int32_t)v6 < 48) {
        // 0x405150
        v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
        *(int64_t *)(8 * v5 + v2) = v10;
        v8 = v6 + 8 & 0xffffffff;
        v7 = v4;
        if (v10 == 0) {
            // break -> 0x4051a0
            break;
        }
    } else {
        // 0x405182
        v11 = *(int64_t *)v4;
        *(int64_t *)(8 * v5 + v2) = v11;
        v8 = v6;
        v7 = v4 + 8;
        if (v11 == 0) {
            // break -> 0x4051a0
            break;
        }
    }
    int64_t v12 = v5 + 1; // 0x40517a
    int64_t v13 = 10; // 0x40517a
    while (v5 != 9) {
        // 0x40517c
        v4 = v7;
        v5 = v12;
        v6 = v8;
        if ((int32_t)v6 < 48) {
            // 0x405150
            v10 = *(int64_t *)((v6 & 0xffffffff) + (int64_t)&v9);
            *(int64_t *)(8 * v5 + v2) = v10;
            v8 = v6 + 8 & 0xffffffff;
            v7 = v4;
            v13 = v5;
            if (v10 == 0) {
                // break -> 0x4051a0
                break;
            }
        } else {
            // 0x405182
            v11 = *(int64_t *)v4;
            *(int64_t *)(8 * v5 + v2) = v11;
            v8 = v6;
            v7 = v4 + 8;
            v13 = v5;
            if (v11 == 0) {
                // break -> 0x4051a0
                break;
            }
        }
        // 0x405172
        v12 = v5 + 1;
        v13 = 10;
    }
    // 0x4051a0
    int64_t v14; // bp-136, 0x405100
    int64_t result = function_404ca0(a1, (int64_t)a2, (int64_t)a3, a4, (int64_t)&v14, v13, (int64_t)&g60); // 0x4051af
    return result;
}
// Address range: 0x4051c0 - 0x405234
int64_t function_4051c0(int64_t a1) {
    // 0x4051c0
    __printf_chk(1, dcgettext(NULL, "\nReport bugs to: %s\n", 5));
    __printf_chk(1, dcgettext(NULL, "%s home page: <%s>\n", 5));
    char * v1 = dcgettext(NULL, "General help using GNU software: <https://www.gnu.org/gethelp/>\n", 5); // 0x405223
    return fputs_unlocked(v1, g33);
}
// Address range: 0x405240 - 0x40525a
int64_t function_405240(int64_t size) {
    int64_t * mem = malloc((int32_t)size); // 0x405244
    if (size != 0 != (mem == NULL)) {
        // 0x405253
        return (int64_t)mem;
    }
    // 0x405255
    function_405490(size);
    // UNREACHABLE
}
// Address range: 0x405260 - 0x405281
int64_t function_405260(uint64_t a1, uint64_t a2) {
    uint128_t v1 = (int128_t)a2 * (int128_t)a1; // 0x405263
    int64_t v2 = v1; // 0x405263
    if (v2 < 0) {
        // 0x40527b
        function_405490(v2);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x405279
        return function_405240(v2);
    }
    // 0x40527b
    function_405490(v2);
    // UNREACHABLE
}
// Address range: 0x405290 - 0x405292
int64_t function_405290(void) {
    // 0x405290
    int64_t v1; // 0x405290
    return function_405240(v1);
}
// Address range: 0x4052a0 - 0x4052d6
int64_t function_4052a0(int64_t a1, int64_t a2) {
    int64_t * v1 = (int64_t *)a1;
    if (a2 == 0 == (a1 != 0)) {
        // 0x4052c8
        free(v1);
        return (int32_t)&g60 ^ (int32_t)&g60;
    }
    int64_t * mem = realloc(v1, (int32_t)a2); // 0x4052b1
    if (a2 != 0 != (mem == NULL)) {
        // 0x4052c0
        return (int64_t)mem;
    }
    // 0x4052d1
    function_405490(a1);
    // UNREACHABLE
}
// Address range: 0x4052e0 - 0x405301
int64_t function_4052e0(int64_t a1, uint64_t a2, uint64_t a3) {
    uint128_t v1 = (int128_t)a3 * (int128_t)a2; // 0x4052e3
    int64_t v2 = v1; // 0x4052e3
    if (v2 < 0) {
        // 0x4052fb
        function_405490(a1);
        // UNREACHABLE
    }
    if (v1 <= 0xffffffffffffffff) {
        // 0x4052f9
        return function_4052a0(a1, v2);
    }
    // 0x4052fb
    function_405490(a1);
    // UNREACHABLE
}
// Address range: 0x405310 - 0x405396
int64_t function_405310(int64_t a1, uint64_t a2, uint64_t a3, int64_t a4, int64_t a5) {
    if (a1 != 0) {
        if (0x5555555555555554 / a3 <= a2) {
            // 0x40536b
            function_405490(a1);
            // UNREACHABLE
        }
        int64_t v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4052a0(a1, v1 * a3);
    }
    int64_t v2 = a2; // 0x405353
    if (a2 == 0) {
        // 0x405378
        v2 = 128 / a3 + (int64_t)(a3 >= 129);
    }
    uint128_t v3 = (int128_t)v2 * (int128_t)a3; // 0x405358
    if ((int64_t)v3 > -1 != v3 <= 0xffffffffffffffff) {
        // 0x40536b
        function_405490(a1);
        // UNREACHABLE
    }
    // 0x40533a
    *(int64_t *)a2 = v2;
    return function_4052a0(a1, v2 * a3);
}
// Address range: 0x4053a0 - 0x4053f0
int64_t function_4053a0(int64_t a1, uint64_t a2) {
    int64_t v1; // 0x4053a0
    if (a1 != 0) {
        if (a2 >= 0x5555555555555554) {
            // 0x4053ea
            function_405490(a1);
            // UNREACHABLE
        }
        // 0x4053c2
        v1 = a2 + 1 + a2 / 2;
        *(int64_t *)a2 = v1;
        return function_4052a0(a1, v1);
    }
    if (a2 == 0) {
        // 0x4053d5
        *(int64_t *)a2 = 128;
        return function_4052a0(0, 128);
    }
    // 0x4053e8
    if (a2 < 0) {
        // 0x4053ea
        function_405490(a1);
        // UNREACHABLE
    }
    // 0x4053c2
    v1 = a2;
    *(int64_t *)a2 = v1;
    return function_4052a0(a1, v1);
}
// Address range: 0x4053f0 - 0x405407
int64_t function_4053f0(int64_t a1, int64_t a2) {
    // 0x4053f0
    return (int64_t)memset((int64_t *)function_405240(a1), 0, (int32_t)a1);
}
// Address range: 0x405410 - 0x40543e
int64_t function_405410(uint64_t nmemb, uint64_t size) {
    uint128_t v1 = (int128_t)size * (int128_t)nmemb; // 0x405417
    if ((int64_t)v1 < 0) {
        // 0x405439
        function_405490(nmemb);
        // UNREACHABLE
    }
    if (v1 > 0xffffffffffffffff) {
        // 0x405439
        function_405490(nmemb);
        // UNREACHABLE
    }
    int64_t * mem = calloc((int32_t)nmemb, (int32_t)size); // 0x40542a
    if (mem != NULL) {
        // 0x405434
        return (int64_t)mem;
    }
    // 0x405439
    function_405490(nmemb);
    // UNREACHABLE
}
// Address range: 0x405440 - 0x405468
int64_t function_405440(int64_t a1, int64_t a2) {
    int64_t v1 = function_405240(a2); // 0x40544f
    return (int64_t)memcpy((int64_t *)v1, (int64_t *)a1, (int32_t)a2);
}
// Address range: 0x405470 - 0x405483
int64_t function_405470(int64_t str) {
    // 0x405470
    return function_405440(str, (int64_t)strlen((char *)str) + 1);
}
// Address range: 0x405490 - 0x4054c1
int64_t function_405490(int64_t a1) {
    // 0x405490
    error(g21, (int32_t)"memory exhausted" ^ (int32_t)"memory exhausted", "%s", dcgettext(NULL, "memory exhausted", 5));
    abort();
    // UNREACHABLE
}
// Address range: 0x4054d0 - 0x40556c
int64_t function_4054d0(int64_t a1, int64_t * a2, int64_t * a3, int64_t a4) {
    int32_t * v1 = __errno_location(); // 0x4054e8
    *v1 = 0;
    char * v2; // 0x4054d0
    int64_t v3 = (int64_t)v2; // 0x405501
    int64_t result = 0; // 0x405509
    int128_t v4; // 0x4054d0
    if (v3 != a1) {
        int64_t v5; // 0x4054d0
        if (a2 == NULL) {
            char v6 = *v2; // 0x40554a
            if (v6 != 0) {
                // 0x405532
                *a3 = __asm_movsd(v4);
                return 0;
            }
            unsigned char v7 = llvm_ctpop_i8(v6); // 0x40554a
            __asm_ucomisd(v4, (int64_t)g4);
            v5 = 0;
            if (v7 % 2 != 0) {
                // 0x405532
                *a3 = __asm_movsd(v4);
                return 1;
            }
        } else {
            unsigned char v8 = llvm_ctpop_i8((char)(int64_t)a2); // 0x40550b
            __asm_ucomisd(v4, (int64_t)g4);
            v5 = v8 % 2 == 0 ? (int64_t)v1 & -256 : 0;
        }
        // 0x405521
        result = v5 | (int64_t)(*v1 != 34);
    }
    // 0x405529
    if (a2 != NULL) {
        // 0x40552e
        *a2 = v3;
    }
    // 0x405532
    *a3 = __asm_movsd(v4);
    return result;
}
// Address range: 0x405570 - 0x40564f
int64_t function_405570(int64_t a1, int64_t a2) {
    int32_t * v1 = (int32_t *)(a2 + 44); // 0x40557c
    uint32_t v2 = *v1; // 0x40557c
    int64_t v3 = a2 & 0xffffffff; // 0x405581
    int32_t * v4 = (int32_t *)(a2 + 48); // 0x405584
    uint64_t v5 = (int64_t)*v4; // 0x405584
    int64_t v6; // 0x4055f2
    if (v3 <= v5) {
      lab_0x4055ec_2:
        // 0x4055ec
        *v4 = (int32_t)a2;
        v6 = v3 - v5;
        *v1 = v2 + (int32_t)v6;
        return v6 & 0xffffffff;
    }
    int64_t v7 = a1 + 8; // 0x405572
    int64_t v8 = v2; // 0x405570
    int64_t v9 = v5 - v8;
    uint64_t v10 = v9 & 0xffffffff;
    int64_t v11 = 0x100000000 * v8;
    int64_t v12 = v11 >> 32;
    int64_t v13 = (v11 >> 29) + a1;
    int64_t v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
    if (v8 >= v5) {
        // break (via goto) -> 0x4055ec
        goto lab_0x4055ec_2;
    }
    int64_t v15 = v3;
    int64_t v16 = v15 - v5; // 0x4055a8
    int64_t v17; // 0x4055b6
    int64_t * v18; // 0x4055d0
    int64_t * v19; // 0x4055d3
    int64_t v20; // 0x4055de
    int64_t v21; // 0x4055b6
    while ((v16 & 0xffffffff) > v10) {
        // 0x4055b3
        v17 = v15 - v10;
        v20 = v13;
        v18 = (int64_t *)v20;
        v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
        *v18 = *v19;
        *v19 = *v18;
        v20 += 8;
        while (v14 != v20) {
            // 0x4055d0
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
        }
        // 0x4055e7
        v21 = v17 & 0xffffffff;
        if (v21 <= v5) {
            // break (via goto) -> 0x4055ec
            goto lab_0x4055ec_2;
        }
        if (v8 >= v5) {
            // break (via goto) -> 0x4055ec
            goto lab_0x4055ec_2;
        }
        // 0x4055a2
        v15 = v21;
        v16 = v15 - v5;
    }
    int64_t v22 = v13; // 0x40562b
    int64_t * v23 = (int64_t *)v22; // 0x405630
    int64_t * v24 = (int64_t *)(v22 + 8 * (v5 - v12)); // 0x405633
    *v23 = *v24;
    *v24 = *v23;
    v22 += 8;
    while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
        // 0x405630
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
    }
    // 0x405647
    v8 = v16 + v8 & 0xffffffff;
    while (v15 > v5) {
        // 0x40559d
        v9 = v5 - v8;
        v10 = v9 & 0xffffffff;
        v11 = 0x100000000 * v8;
        v12 = v11 >> 32;
        v13 = (v11 >> 29) + a1;
        v14 = 8 * ((v9 + 0xffffffff & 0xffffffff) + v12) + v7;
        if (v8 >= v5) {
            // break (via goto) -> 0x4055ec
            goto lab_0x4055ec_2;
        }
        // 0x4055a2
        v16 = v15 - v5;
        while ((v16 & 0xffffffff) > v10) {
            // 0x4055b3
            v17 = v15 - v10;
            v20 = v13;
            v18 = (int64_t *)v20;
            v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
            *v18 = *v19;
            *v19 = *v18;
            v20 += 8;
            while (v14 != v20) {
                // 0x4055d0
                v18 = (int64_t *)v20;
                v19 = (int64_t *)(v20 + 8 * ((0x100000000 * v17 >> 32) - v12));
                *v18 = *v19;
                *v19 = *v18;
                v20 += 8;
            }
            // 0x4055e7
            v21 = v17 & 0xffffffff;
            if (v21 <= v5) {
                // break (via goto) -> 0x4055ec
                goto lab_0x4055ec_2;
            }
            if (v8 >= v5) {
                // break (via goto) -> 0x4055ec
                goto lab_0x4055ec_2;
            }
            // 0x4055a2
            v15 = v21;
            v16 = v15 - v5;
        }
        // 0x405610
        v22 = v13;
        v23 = (int64_t *)v22;
        v24 = (int64_t *)(v22 + 8 * (v5 - v12));
        *v23 = *v24;
        *v24 = *v23;
        v22 += 8;
        while (v22 != 8 * ((v16 + 0xffffffff & 0xffffffff) + v12) + v7) {
            // 0x405630
            v23 = (int64_t *)v22;
            v24 = (int64_t *)(v22 + 8 * (v5 - v12));
            *v23 = *v24;
            *v24 = *v23;
            v22 += 8;
        }
        // 0x405647
        v8 = v16 + v8 & 0xffffffff;
    }
    // 0x4055ec
    *v4 = (int32_t)a2;
    v6 = v3 - v5;
    *v1 = v2 + (int32_t)v6;
    return v6 & 0xffffffff;
}
// Address range: 0x405650 - 0x405c6c
int64_t function_405650(int64_t a1, int64_t a2, int64_t str5, int64_t a4, int64_t a5, int64_t a6, int64_t a7, int64_t a8, int64_t * a9) {
    int64_t * v1 = (int64_t *)(a7 + 32); // 0x40566f
    int64_t v2 = *v1; // 0x40566f
    char * str2 = (char *)v2; // 0x40567c
    char c = *str2; // 0x40567c
    int64_t v3 = v2; // 0x4056a8
    int64_t v4 = 0; // 0x405650
    int32_t v5; // 0x405650
    int64_t v6; // 0x405650
    int64_t v7; // 0x405650
    int64_t v8; // 0x405650
    int64_t v9; // 0x405650
    int64_t v10; // 0x405650
    int64_t v11; // 0x405650
    int64_t v12; // 0x405650
    int64_t v13; // 0x405650
    int64_t str3; // 0x405650
    int64_t v14; // 0x405650
    int64_t v15; // 0x405650
    int64_t v16; // 0x405650
    int64_t v17; // 0x405650
    int32_t v18; // 0x405650
    int32_t v19; // 0x405650
    int32_t v20; // 0x405650
    int32_t v21; // 0x405650
    int32_t v22; // 0x405650
    int32_t v23; // 0x405650
    int32_t v24; // 0x405650
    int32_t v25; // 0x405650
    int32_t v26; // 0x405650
    int32_t v27; // 0x405650
    int32_t v28; // 0x405650
    int32_t v29; // 0x405650
    int64_t nmemb; // 0x405650
    int64_t v30; // 0x405650
    switch (c) {
        default: {
            v3++;
            char v31 = *(char *)v3; // 0x4056ac
            while (v31 != 0 == (v31 != 61)) {
                // 0x4056a8
                v3++;
                v31 = *(char *)v3;
            }
            // 0x4056b8
            v4 = v3 - v2;
        }
        case 61: {
        }
        case 0: {
            // 0x4056be
            v30 = 0x100000000 * a8 >> 32;
            int64_t v32 = 0x100000000 * a6 >> 32; // 0x405688
            if (a4 != 0) {
                int32_t n = v4;
                int64_t v33 = 0;
                char * str = (char *)a4; // 0x4056ec
                int64_t v34; // 0x405650
                int64_t v35; // 0x405650
                if (strncmp(str, str2, n) == 0) {
                    // 0x4056f5
                    v35 = a4;
                    v34 = v33;
                    if (v4 == (int64_t)strlen(str)) {
                        goto lab_0x405870;
                    }
                }
                int64_t v36 = a4 + 32; // 0x405706
                int64_t v37 = *(int64_t *)v36; // 0x40570a
                nmemb = v33 + 1;
                while (v37 != 0) {
                    // 0x4056e0
                    v33 = 0x100000000 * nmemb >> 32;
                    int64_t v38 = v36;
                    str = (char *)v37;
                    if (strncmp(str, str2, n) == 0) {
                        // 0x4056f5
                        v35 = v38;
                        v34 = v33;
                        if (v4 == (int64_t)strlen(str)) {
                            goto lab_0x405870;
                        }
                    }
                    // 0x405706
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
                  lab_0x405756:
                    // 0x405756
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
                        goto lab_0x4057b0;
                    } else {
                        if (v11 == 0) {
                            // 0x405920
                            v24 = v7;
                            v28 = v27;
                            v20 = v19;
                            v16 = v15;
                            v12 = v9;
                            goto lab_0x4057b0;
                        } else {
                            if (v39 == 0) {
                                // 0x4058d0
                                if (*(int32_t *)(v11 + 8) != *(int32_t *)(v9 + 8)) {
                                    goto lab_0x40577a;
                                } else {
                                    // 0x4058dc
                                    if (*(int64_t *)(v11 + 16) != *(int64_t *)(v9 + 16)) {
                                        goto lab_0x40577a;
                                    } else {
                                        // 0x4058ea
                                        v24 = v23;
                                        v28 = v27;
                                        v20 = v19;
                                        v16 = v15;
                                        v12 = v11;
                                        if (*(int32_t *)(v11 + 24) != *(int32_t *)(v9 + 24)) {
                                            goto lab_0x40577a;
                                        } else {
                                            goto lab_0x4057b0;
                                        }
                                    }
                                }
                            } else {
                                goto lab_0x40577a;
                            }
                        }
                    }
                }
              lab_0x4057c1:
                if (v29 == 0 != (v17 == 0)) {
                    int64_t v40 = v2; // 0x405996
                    if ((int32_t)v30 != 0) {
                        if (v29 == 0) {
                            // 0x405b42
                            flockfile(g35);
                            int64_t v41 = *v1; // 0x405b62
                            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous; possibilities:", 5), "%s: option '%s%s' is ambiguous; possibilities:", a9, (char *)v41);
                            int64_t v42 = v17; // 0x405baf
                            int64_t v43 = (int64_t)g35;
                            int64_t v44 = v43; // 0x405bc9
                            int64_t v45; // 0x405bcb
                            if (*(char *)v42 != 0) {
                                // 0x405bcb
                                v45 = *(int64_t *)a4;
                                __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                v44 = (int64_t)g35;
                            }
                            int64_t stream = v44;
                            v42++;
                            int64_t v46 = a4 + 32; // 0x405bc3
                            while (v17 + nmemb != v42) {
                                // 0x405bc5
                                v43 = stream;
                                int64_t v47 = v46;
                                v44 = v43;
                                if (*(char *)v42 != 0) {
                                    // 0x405bcb
                                    v45 = *(int64_t *)v47;
                                    __fprintf_chk((struct _IO_FILE *)v43, 1, " '%s%s'", a9, (char *)v45);
                                    v44 = (int64_t)g35;
                                }
                                // 0x405bb8
                                stream = v44;
                                v42++;
                                v46 = v47 + 32;
                            }
                            // 0x405bf0
                            fputc(10, (struct _IO_FILE *)stream);
                            funlockfile(g35);
                            v40 = *v1;
                        } else {
                            // 0x4059a4
                            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' is ambiguous\n", 5), "%s: option '%s%s' is ambiguous\n", a9, str2);
                            v40 = *v1;
                        }
                    }
                    int64_t str4 = v40;
                    if (v21 != 0) {
                        // 0x405aff
                        free((int64_t *)v17);
                    }
                    // 0x4059f9
                    *v1 = str4 + (int64_t)strlen((char *)str4);
                    int32_t * v48 = (int32_t *)a7; // 0x405a10
                    *v48 = *v48 + 1;
                    *(int32_t *)(a7 + 8) = 0;
                    // 0x4058be
                    return 63;
                }
                // 0x4057e0
                v5 = v39;
                if (v13 != 0) {
                    // 0x405864
                    v35 = v13;
                    v34 = v25;
                  lab_0x405870:;
                    int32_t * v49 = (int32_t *)a7; // 0x405880
                    uint32_t v50 = *v49; // 0x405880
                    int64_t v51 = v50; // 0x405880
                    *v1 = 0;
                    uint32_t v52 = v50 + 1; // 0x40588a
                    *v49 = v52;
                    int32_t v53 = *(int32_t *)(v35 + 8); // 0x405893
                    if (*(char *)v3 != 0) {
                        if (v53 == 0) {
                            if ((int32_t)v30 != 0) {
                                int64_t v54 = *(int64_t *)v35; // 0x405abf
                                __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' doesn't allow an argument\n", 5), "%s: option '%s%s' doesn't allow an argument\n", a9, (char *)v54);
                            }
                            // 0x405a6a
                            *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                            // 0x4058be
                            return 63;
                        }
                        // 0x405908
                        *(int64_t *)(a7 + 16) = v3 + 1;
                    } else {
                        if (v53 == 1) {
                            if (v52 >= (int32_t)a1) {
                                if ((int32_t)v30 != 0) {
                                    int64_t v55 = *(int64_t *)v35; // 0x405c1f
                                    __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option '%s%s' requires an argument\n", 5), "%s: option '%s%s' requires an argument\n", a9, (char *)v55);
                                }
                                // 0x405b1d
                                *(int32_t *)(a7 + 8) = *(int32_t *)(v35 + 24);
                                char v56 = *(char *)&v51; // 0x405b30
                                // 0x4058be
                                return 4 * (int64_t)(v56 != 58) | (v56 != 58 ? 59 : 58);
                            }
                            // 0x405a2e
                            *v49 = (int32_t)v51 + 2;
                            int64_t v57 = *(int64_t *)((0x100000000 * (int64_t)v52 >> 29) + a2); // 0x405a42
                            *(int64_t *)(a7 + 16) = v57;
                        }
                    }
                    if (a5 != 0) {
                        // 0x4058ab
                        *(int32_t *)a5 = (int32_t)v34;
                    }
                    int64_t v58 = *(int64_t *)(v35 + 16); // 0x4058ae
                    v51 = v58;
                    uint32_t v59 = *(int32_t *)(v35 + 24); // 0x4058b2
                    int64_t result = v59; // 0x4058b8
                    if (v58 != 0) {
                        // 0x4058ba
                        *(int32_t *)v58 = v59;
                        result = 0;
                    }
                    // 0x4058be
                    return result;
                }
            } else {
                // 0x4056be
                v5 = v32;
            }
            // break -> 0x4057e5
            break;
        }
    }
    // 0x4057e5
    if (v5 != 0) {
        int64_t v60 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2); // 0x4057fd
        if (*(char *)(v60 + 1) != 45) {
            // 0x405807
            if (strchr((char *)str5, (int32_t)c) != NULL) {
                // 0x4058be
                return 0xffffffff;
            }
        }
    }
    if ((int32_t)v30 != 0) {
        // 0x405949
        __fprintf_chk(g35, 1, dcgettext(NULL, "%s: unrecognized option '%s%s'\n", 5), "%s: unrecognized option '%s%s'\n", a9, str2);
    }
    // 0x405836
    *v1 = 0;
    int32_t * v61 = (int32_t *)a7; // 0x405846
    *v61 = *v61 + 1;
    *(int32_t *)(a7 + 8) = 0;
    return 63;
  lab_0x4057b0:
    // 0x4057b0
    v13 = v12;
    v17 = v16;
    v21 = v20;
    v29 = v28;
    v25 = v24;
    int64_t v62 = v9 + 32; // 0x4057b0
    int64_t v63 = *(int64_t *)v62; // 0x4057b4
    v22 = v25;
    v26 = v29;
    v18 = v21;
    v14 = v17;
    v10 = v13;
    v8 = v62;
    str3 = v63;
    v6 = v7 + 1;
    if (v63 == 0) {
        // break -> 0x4057c1
        goto lab_0x4057c1;
    }
    goto lab_0x405756;
  lab_0x40577a:
    // 0x40577a
    v24 = v23;
    v28 = v27;
    v20 = v19;
    v16 = v15;
    v12 = v11;
    int64_t v64; // 0x405650
    int32_t v65; // 0x405650
    int32_t v66; // 0x405650
    if (v27 != 0) {
        goto lab_0x4057b0;
    } else {
        if ((int32_t)v30 == 0) {
            // 0x405930
            v66 = 1;
            v65 = v19;
            v64 = v15;
            v24 = v23;
            v28 = 1;
            v20 = v19;
            v16 = 0;
            v12 = v11;
            if (v15 == 0) {
                goto lab_0x4057b0;
            } else {
                goto lab_0x4057a1;
            }
        } else {
            // 0x405795
            v66 = v27;
            v65 = v19;
            v64 = v15;
            if (v15 == 0) {
                int64_t * mem = calloc((int32_t)nmemb, 1); // 0x405a8c
                int64_t v67 = (int64_t)mem; // 0x405a8c
                v24 = v23;
                v28 = 1;
                v20 = v19;
                v16 = v67;
                v12 = v11;
                if (mem == NULL) {
                    goto lab_0x4057b0;
                } else {
                    // 0x405a9f
                    *(char *)(v67 + (int64_t)v23) = 1;
                    v66 = v27;
                    v65 = 1;
                    v64 = v67;
                    goto lab_0x4057a1;
                }
            } else {
                goto lab_0x4057a1;
            }
        }
    }
  lab_0x4057a1:
    // 0x4057a1
    *(char *)(v64 + v7) = 1;
    v24 = v23;
    v28 = v66;
    v20 = v65;
    v16 = v64;
    v12 = v11;
    goto lab_0x4057b0;
}
// Address range: 0x405c70 - 0x406236
int64_t function_405c70(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6, int64_t * a7, int64_t a8) {
    int64_t v1 = (int64_t)a7;
    int64_t v2 = a3;
    int32_t v3 = a1; // 0x405c91
    if (v3 < 1) {
        // 0x405e4e
        return 0xffffffff;
    }
    int64_t v4 = (int64_t)*(int32_t *)(v1 + 4); // 0x405c8d
    int32_t v5 = *(int32_t *)a7; // 0x405c99
    uint64_t v6 = a1 & 0xffffffff; // 0x405c9b
    int64_t v7 = v2; // 0x405ca0
    int64_t * v8 = (int64_t *)(v1 + 16); // 0x405ca3
    *v8 = 0;
    int64_t v9; // 0x405c70
    int64_t v10; // 0x405c70
    int64_t v11; // 0x405c70
    int64_t v12; // 0x405c70
    int64_t str; // 0x405c70
    int64_t v13; // 0x405c70
    int64_t v14; // 0x405c70
    int64_t v15; // 0x405c70
    int64_t v16; // 0x405c70
    int64_t v17; // 0x405c70
    int32_t v18; // 0x405c70
    char v19; // 0x405c70
    if (v5 == 0) {
        // 0x405e88
        *(int32_t *)a7 = 1;
        v18 = 1;
        goto lab_0x405cba;
    } else {
        // 0x405cb3
        v18 = v5;
        if (*(int32_t *)(v1 + 24) != 0) {
            char v20 = *(char *)&v2; // 0x405d00
            int64_t v21 = *(int64_t *)(v1 + 32); // 0x405d03
            v2 = v21;
            v9 = v21;
            v19 = v20;
            v16 = a6;
            v13 = v7;
            if ((v20 - 43 & -3) != 0) {
                goto lab_0x405dc8;
            } else {
                int64_t v22 = v7 + 1; // 0x405d16
                int64_t v23 = *(char *)v22 == 58 ? 0 : v4; // 0x405d26
                v15 = a6;
                v11 = v23;
                str = v22;
                v10 = v21;
                v17 = a6;
                v12 = v23;
                v14 = v22;
                if (v21 != 0) {
                    goto lab_0x405ddc;
                } else {
                    goto lab_0x405d38;
                }
            }
        } else {
            goto lab_0x405cba;
        }
    }
  lab_0x405cba:
    // 0x405cba
    *(int32_t *)(v1 + 48) = v18;
    *(int32_t *)(v1 + 44) = v18;
    int64_t * v24 = (int64_t *)(v1 + 32); // 0x405cc0
    *v24 = 0;
    int64_t v25; // 0x405c70
    int64_t v26; // 0x405c70
    int64_t v27; // 0x405c70
    switch (*(char *)&v2) {
        case 45: {
            // 0x405db0
            *(int32_t *)(v1 + 40) = 2;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405dbd;
        }
        case 43: {
            // 0x4060c0
            *(int32_t *)(v1 + 40) = 0;
            v2 = 0;
            v27 = a6;
            v25 = v7 + 1;
            goto lab_0x405dbd;
        }
        default: {
            // 0x405cdc
            v2 = 0;
            v26 = a6;
            if ((int32_t)a8 == 0) {
                int64_t v28 = a6 & 0xffffffff; // 0x40603f
                if (getenv("POSIXLY_CORRECT") == NULL) {
                    // 0x406158
                    *(int32_t *)(v1 + 40) = 1;
                    v2 = *v24;
                    v27 = v28;
                    v25 = v7;
                    goto lab_0x405dbd;
                } else {
                    // 0x40604d
                    v2 = *v24;
                    v26 = v28;
                    goto lab_0x405cea;
                }
            } else {
                goto lab_0x405cea;
            }
        }
    }
  lab_0x405dc8:;
    int64_t v29 = v19 == 58 ? 0 : v4; // 0x405dcf
    v15 = v16;
    v11 = v29;
    str = v13;
    v10 = v9;
    v17 = v16;
    v12 = v29;
    v14 = v13;
    if (v9 == 0) {
        goto lab_0x405d38;
    } else {
        goto lab_0x405ddc;
    }
  lab_0x405cea:
    // 0x405cea
    *(int32_t *)(v1 + 40) = 0;
    v27 = v26;
    v25 = v7;
    goto lab_0x405dbd;
  lab_0x405dbd:
    // 0x405dbd
    *(int32_t *)(v1 + 24) = 1;
    v9 = v2;
    v19 = *(char *)v25;
    v16 = v27;
    v13 = v25;
    goto lab_0x405dc8;
  lab_0x405d38:;
    uint32_t v30 = *(int32_t *)a7; // 0x405d38
    int64_t v31 = v30; // 0x405d38
    int32_t * v32 = (int32_t *)(v1 + 48); // 0x405d3a
    if ((int64_t)*v32 > v31) {
        // 0x405d3f
        *v32 = v30;
    }
    int32_t * v33 = (int32_t *)(v1 + 44); // 0x405d42
    if (*v33 > v30) {
        // 0x405d47
        *v33 = v30;
    }
    int32_t * v34 = (int32_t *)(v1 + 40); // 0x405d4a
    int64_t v35 = v31; // 0x405d4e
    int64_t v36 = v15; // 0x405d4e
    int64_t v37; // 0x405c70
    int64_t v38; // 0x405c70
    int64_t v39; // 0x405c70
    if (*v34 == 1) {
        uint32_t v40 = *v32; // 0x405eb8
        int64_t v41 = v40; // 0x405eb8
        v2 = v41;
        int64_t v42; // 0x405c70
        if (*v33 == v40) {
            // 0x4060a0
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x4060a8
                *v33 = v30;
                v2 = v31;
                v42 = v31;
                v38 = v15;
            }
        } else {
            // 0x405ec4
            v42 = v41;
            v38 = v15;
            if (v30 != v40) {
                // 0x405ec8
                function_405570(a2, v1);
                int64_t v43 = (int64_t)*(int32_t *)a7; // 0x405ed8
                v2 = v43;
                v42 = v43;
                v38 = v15 & 0xffffffff;
            }
        }
        int64_t v44 = v42; // 0x405ee1
        if (v6 > v42) {
            int64_t v45 = 0x100000000 * v42 >> 32; // 0x405eea
            int64_t v46 = *(int64_t *)(8 * v45 + a2); // 0x405f01
            int64_t v47 = v45 & 0xffffffff; // 0x405f05
            v2 = v47;
            if (*(char *)v46 == 45) {
                // 0x405f0e
                if (*(char *)(v46 + 1) != 0) {
                    // 0x405f14
                    v37 = v47;
                    v39 = (int64_t)*(int32_t *)a7;
                    goto lab_0x405f16;
                }
            }
            int64_t v48 = v47 + 1; // 0x405ef0
            int64_t v49 = v48 & 0xffffffff; // 0x405ef0
            v2 = v49;
            v45++;
            *(int32_t *)a7 = (int32_t)v48;
            v44 = v49;
            while (v6 > v45) {
                // 0x405f01
                v46 = *(int64_t *)(8 * v45 + a2);
                v47 = v45 & 0xffffffff;
                v2 = v47;
                if (*(char *)v46 == 45) {
                    // 0x405f0e
                    if (*(char *)(v46 + 1) != 0) {
                        // 0x405f14
                        v37 = v47;
                        v39 = (int64_t)*(int32_t *)a7;
                        goto lab_0x405f16;
                    }
                }
                // 0x405ef0
                v48 = v47 + 1;
                v49 = v48 & 0xffffffff;
                v2 = v49;
                v45++;
                *(int32_t *)a7 = (int32_t)v48;
                v44 = v49;
            }
        }
        // 0x4060b8
        v37 = v44;
        v39 = v44 & 0xffffffff;
        goto lab_0x405f16;
    } else {
        goto lab_0x405d54;
    }
  lab_0x405ddc:
    // 0x405ddc
    v15 = v17;
    v11 = v12;
    str = v14;
    int64_t v50 = v10; // 0x405ddf
    int64_t v51 = v12; // 0x405ddf
    int64_t v52 = v14; // 0x405ddf
    if (*(char *)v10 == 0) {
        goto lab_0x405d38;
    } else {
        goto lab_0x405de5;
    }
  lab_0x405d54:;
    int32_t v53 = v35; // 0x405d54
    int64_t v54; // 0x405c70
    int64_t v55; // 0x405c70
    int64_t v56; // 0x405c70
    int64_t v57; // 0x405c70
    int64_t v58; // 0x405c70
    int64_t v59; // 0x405c70
    char * v60; // 0x405c70
    int64_t v61; // 0x405c70
    int64_t v62; // 0x405d69
    int64_t v63; // 0x405c70
    if (v3 == v53) {
        int64_t v64 = (int64_t)*v33; // 0x405ea3
        v2 = v64;
        v55 = v64;
        v59 = (int64_t)*v32;
        goto lab_0x405ea6;
    } else {
        // 0x405d5c
        v62 = *(int64_t *)((0x100000000 * v35 >> 29) + a2);
        bool v65; // 0x405c70
        int64_t v66 = v65 ? -1 : 1; // 0x405d70
        int64_t v67 = (int64_t)"--"; // 0x405c70
        int64_t v68 = v62; // 0x405c70
        int64_t v69 = 3; // 0x405d70
        unsigned char v70 = *(char *)v68; // 0x405d70
        char v71 = *(char *)v67; // 0x405d70
        char v72 = v71; // 0x405d70
        bool v73 = false; // 0x405d70
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
            // 0x405e60
            if (*(char *)v62 == 45) {
                // 0x405f20
                v63 = v62 + 1;
                char c = *(char *)v63; // 0x405f20
                if (c == 0) {
                    goto lab_0x405e6a;
                } else {
                    // 0x405f2d
                    v54 = v63;
                    if (a4 == 0) {
                        goto lab_0x405fb0;
                    } else {
                        if (c == 45) {
                            // 0x406193
                            *(int64_t *)(v1 + 32) = v62 + 2;
                            v60 = "--";
                            v61 = v11;
                            v58 = v36;
                            v56 = str;
                            goto lab_0x406005;
                        } else {
                            // 0x405f3e
                            v54 = v63;
                            if ((int32_t)v36 == 0) {
                                goto lab_0x405fb0;
                            } else {
                                // 0x405f43
                                v57 = v36;
                                if (*(char *)(v62 + 2) != 0) {
                                    goto lab_0x405f64;
                                } else {
                                    // 0x405f4a
                                    v57 = v36 & 0xffffffff;
                                    v54 = v63;
                                    if (strchr((char *)str, (int32_t)c) != NULL) {
                                        goto lab_0x405fb0;
                                    } else {
                                        goto lab_0x405f64;
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                goto lab_0x405e6a;
            }
        } else {
            uint32_t v75 = *v33; // 0x405d80
            v2 = v75;
            int32_t v76 = *v32; // 0x405d83
            int64_t v77 = v35 + 1; // 0x405d86
            int32_t v78 = v77; // 0x405d89
            *(int32_t *)a7 = v78;
            if (v75 == v76) {
                // 0x4060f0
                *v33 = v78;
                v2 = v77 & 0xffffffff;
            } else {
                if (v76 != v78) {
                    // 0x405d97
                    function_405570(a2, v1);
                    v2 = (int64_t)*v33;
                }
            }
            // 0x405da5
            *v32 = v3;
            *(int32_t *)a7 = v3;
            v55 = v2;
            v59 = v6;
            goto lab_0x405ea6;
        }
    }
  lab_0x405de5:;
    // 0x405de5
    int64_t v79; // bp-104, 0x405c70
    int64_t v80 = &v79; // 0x405c7a
    int64_t v81 = v50 + 1; // 0x405de5
    int64_t * v82 = (int64_t *)(v80 + 32); // 0x405dec
    *v82 = v50;
    int64_t * v83 = (int64_t *)(v1 + 32); // 0x405df1
    *v83 = v81;
    char v84 = *(char *)v2; // 0x405df5
    int64_t * v85 = (int64_t *)(v80 + 40); // 0x405df9
    *v85 = v81;
    char * v86 = (char *)(v80 + 28); // 0x405e01
    *v86 = v84;
    char * str2 = (char *)v52; // 0x405e06
    int32_t c2 = v84; // 0x405e06
    char * found_char_pos = strchr(str2, c2); // 0x405e06
    int64_t v87 = *v82; // 0x405e0b
    v2 = v87;
    int64_t v88 = *v85; // 0x405e15
    char * v89 = (char *)(v87 + 1);
    if (*v89 == 0) {
        // 0x405e20
        *(int32_t *)a7 = *(int32_t *)a7 + 1;
    }
    if (found_char_pos == NULL | (*v86 | 1) == 59) {
        if ((int32_t)v51 != 0) {
            // 0x406110
            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: invalid option -- '%c'\n", 5));
        }
        // 0x4060dd
        *(int32_t *)(v1 + 8) = c2;
        // 0x405e4e
        return 63;
    }
    int64_t v90 = (int64_t)found_char_pos; // 0x405e06
    char v91 = *(char *)(v90 + 1); // 0x405e3b
    if (a4 == 0 | *found_char_pos != 87 || v91 != 59) {
        int64_t v92 = v84; // 0x405df5
        if (v91 != 58) {
            // 0x405e4e
            return v92 & 0xffffffff;
        }
        unsigned char v93 = *v89; // 0x406064
        v2 = v93;
        if (*(char *)(v90 + 2) == 58) {
            if (v93 == 0) {
                // 0x406168
                *v8 = 0;
            } else {
                // 0x40614c
                *v8 = v88;
                *(int32_t *)a7 = *(int32_t *)a7 + 1;
            }
            // 0x40608e
            *v83 = 0;
            // 0x405e4e
            return v92 & 0xffffffff;
        }
        int32_t v94 = *(int32_t *)a7; // 0x40606e
        if (v93 != 0) {
            // 0x406100
            *v8 = v88;
            *(int32_t *)a7 = v94 + 1;
            // 0x40608e
            *v83 = 0;
            // 0x405e4e
            return v92 & 0xffffffff;
        }
        if (v94 != v3) {
            // 0x406081
            *(int32_t *)a7 = v94 + 1;
            *v8 = *(int64_t *)(8 * (int64_t)v94 + a2);
            // 0x40608e
            *v83 = 0;
            // 0x405e4e
            return v92 & 0xffffffff;
        }
        if ((int32_t)v51 != 0) {
            // 0x4061ca
            __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
        }
        // 0x40617a
        *(int32_t *)(v1 + 8) = c2;
        char v95 = *str2; // 0x406181
        // 0x40608e
        *v83 = 0;
        // 0x405e4e
        return (4 * (int64_t)(v95 != 58) | (v95 != 58 ? 59 : 58)) & 0xffffffff;
    }
    int64_t v96 = v88; // 0x405fd9
    if (*v89 == 0) {
        int32_t v97 = *(int32_t *)a7; // 0x405fdb
        if (v97 == v3) {
            if ((int32_t)v51 != 0) {
                // 0x406200
                __fprintf_chk(g35, 1, dcgettext(NULL, "%s: option requires an argument -- '%c'\n", 5));
            }
            // 0x4061b1
            *(int32_t *)(v1 + 8) = c2;
            char v98 = *str2; // 0x4061b8
            // 0x405e4e
            return (4 * (int64_t)(v98 != 58) | (v98 != 58 ? 59 : 58)) & 0xffffffff;
        }
        // 0x405fe6
        v96 = *(int64_t *)(8 * (int64_t)v97 + a2);
    }
    // 0x405fea
    *v83 = v96;
    *v8 = 0;
    v60 = "-W ";
    v61 = v51;
    v58 = 0;
    v56 = v52;
    goto lab_0x406005;
  lab_0x405f16:
    // 0x405f16
    *v32 = (int32_t)v37;
    v35 = v39;
    v36 = v38;
    goto lab_0x405d54;
  lab_0x406005:;
    int64_t v99 = function_405650(v6, a2, v56, a4, a5, v58, v1, v61, (int64_t *)v60) & 0xffffffff; // 0x406023
    // 0x405e4e
    return v99 & 0xffffffff;
  lab_0x405ea6:;
    int32_t v100 = v55; // 0x405ea6
    if (v100 != (int32_t)v59) {
        // 0x405eaa
        *(int32_t *)a7 = v100;
    }
    // 0x405e4e
    return 0xffffffff;
  lab_0x405e6a:
    // 0x405e6a
    v99 = 0xffffffff;
    if (*v34 != 0) {
        // 0x405e71
        *v8 = v62;
        *(int32_t *)a7 = v53 + 1;
        v99 = 1;
    }
    // 0x405e4e
    return v99 & 0xffffffff;
  lab_0x405fb0:
    // 0x405fb0
    v2 = v54;
    v50 = v54;
    v51 = v11;
    v52 = str;
    goto lab_0x405de5;
  lab_0x405f64:
    // 0x405f64
    *(int64_t *)(v1 + 32) = v63;
    int64_t v101 = function_405650(v6, a2, str, a4, a5, v57, v1, v11, &g12); // 0x405f8a
    if ((int32_t)v101 != -1) {
        // 0x405e4e
        return v101 & 0xffffffff & 0xffffffff;
    }
    // 0x405f9f
    v54 = *(int64_t *)(8 * (int64_t)*(int32_t *)a7 + a2) + 1;
    goto lab_0x405fb0;
}
// Address range: 0x406240 - 0x406296
int64_t function_406240(int64_t a1) {
    // 0x406240
    *(int32_t *)&g53 = g29;
    *(int32_t *)&g54 = g28;
    int64_t v1; // 0x406240
    int64_t result = function_405c70(v1, v1, v1, v1, v1, v1, &g53, a1 & 0xffffffff); // 0x406266
    g29 = *(int32_t *)&g53;
    g58 = g56;
    *(int32_t *)&g27 = g55;
    return result;
}
// Address range: 0x4062a0 - 0x4062b8
int64_t function_4062a0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4062a0
    return function_406240(1);
}
// Address range: 0x4062c0 - 0x4062d3
int64_t function_4062c0(int64_t a1, int64_t a2, char * a3, char (**a4)[11], int32_t a5, int64_t a6) {
    // 0x4062c0
    return function_406240(0);
}
// Address range: 0x4062e0 - 0x4062f5
int64_t function_4062e0(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x4062e0
    return function_405c70(a1, a2, a3, a4, a5, 0, (int64_t *)a6, 0);
}
// Address range: 0x406300 - 0x406316
int64_t function_406300(void) {
    // 0x406300
    return function_406240(0);
}
// Address range: 0x406320 - 0x406338
int64_t function_406320(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x406320
    return function_405c70(a1, a2, a3, a4, a5, 1, (int64_t *)a6, 0);
}
// Address range: 0x406340 - 0x4063ba
int64_t function_406340(int32_t * a1, int64_t a2, int64_t a3) {
    int64_t v1 = 1; // 0x40634b
    int64_t v2 = (int64_t)&g13; // 0x40634b
    int32_t * pwc; // 0x406340
    int64_t v3; // 0x406340
    int64_t n; // 0x406340
    if (a2 == 0) {
        goto lab_0x406392;
    } else {
        // 0x40634d
        if (a3 == 0) {
            // 0x406378
            return -2;
        }
        // 0x406359
        n = a3;
        v3 = a2;
        pwc = a1;
        v1 = a3;
        v2 = a2;
        if (a1 == NULL) {
            goto lab_0x406392;
        } else {
            goto lab_0x406364;
        }
    }
  lab_0x406392:
    // 0x406392
    n = v1;
    v3 = v2;
    int64_t v4; // bp-28, 0x406340
    pwc = (int32_t *)&v4;
    goto lab_0x406364;
  lab_0x406364:;
    char * wstr = (char *)v3; // 0x40636a
    int64_t ps; // 0x406340
    int32_t v5 = mbrtowc(pwc, wstr, (int32_t)n, (struct _TYPEDEF___mbstate_t *)ps); // 0x40636a
    int64_t result = v5; // 0x40636a
    if (v5 < 0xfffffffe) {
        // 0x406378
        return result;
    }
    int64_t result2 = result; // 0x4063a9
    if ((char)function_406650(0, v3) == 0) {
        // 0x4063ab
        *pwc = (int32_t)*wstr;
        result2 = 1;
    }
    // 0x406378
    return result2;
}
// Address range: 0x4063c0 - 0x40651a
int64_t function_4063c0(int64_t a1, int32_t * a2) {
    char v1 = a1;
    char * str2 = (char *)a1;
    int64_t str = (int64_t)"HUP"; // 0x4063e1
    int64_t v2; // 0x4063c0
    int64_t v3; // 0x4063c0
    int64_t v4; // 0x4063c0
    int32_t v5; // 0x406450
    int64_t v6; // 0x406455
    int32_t v7; // 0x406458
    int64_t v8; // 0x40645d
    int64_t v9; // 0x406471
    bool v10; // 0x4063c0
    if (v1 != 57 && (int32_t)v1 >= 57) {
        int64_t v11 = 0;
        while (strcmp((char *)str, str2) != 0) {
            int64_t v12 = v11 + 1; // 0x4063e8
            str += 12;
            if ((int32_t)v12 == 35) {
                // 0x406450
                v5 = __libc_current_sigrtmin();
                v6 = v5;
                v7 = __libc_current_sigrtmax();
                v8 = v7;
                if (v5 < 1) {
                    goto lab_0x40647c;
                } else {
                    // 0x406464
                    v9 = v10 ? -1 : 1;
                    v2 = (int64_t)"RTMIN";
                    v4 = a1;
                    v3 = 5;
                    goto lab_dec_label_pc_unknown;
                }
            }
            v11 = v12 & 0xffffffff;
        }
        int32_t v13 = *(int32_t *)(12 * v11 + (int64_t)&g31);
        *a2 = v13;
        // 0x406414
        return v13 >> 31;
    }
    // 0x406420
    char * endptr; // bp-48, 0x4063c0
    int32_t str_as_l = strtol(str2, &endptr, 10); // 0x40642a
    int32_t v14 = str_as_l; // 0x406437
    if (str_as_l < 65 == *endptr == 0) {
      lab_0x40640e:
        // 0x40640e
        *a2 = v14;
        // 0x406414
        return v14 >> 31;
    }
  lab_0x406440:
    // 0x406440
    *a2 = -1;
    // 0x406414
    return 0xffffffff;
  lab_0x40647c:;
    int64_t v15; // 0x4063c0
    int64_t v16; // 0x4063c0
    int64_t v17; // 0x4063c0
    int64_t v18; // 0x40648d
    if (v7 < 1) {
        goto lab_0x406440;
    } else {
        // 0x406480
        v18 = v10 ? -1 : 1;
        v15 = (int64_t)"RTMAX";
        v17 = a1;
        v16 = 5;
        goto lab_dec_label_pc_unknown_2;
    }
  lab_dec_label_pc_unknown:;
    unsigned char v19 = *(char *)v4; // 0x406471
    char v20 = *(char *)v2; // 0x406471
    char v21 = v20; // 0x406471
    bool v22 = false; // 0x406471
    if (v19 == v20) {
        int64_t v23 = v3 - 1; // 0x406471
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
    unsigned char v24 = *(char *)v17; // 0x40648d
    char v25 = *(char *)v15; // 0x40648d
    char v26 = v25; // 0x40648d
    bool v27 = false; // 0x40648d
    if (v24 == v25) {
        int64_t v28 = v16 - 1; // 0x40648d
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
        int32_t str_as_l2 = strtol((char *)(a1 + 5), &endptr, 10); // 0x4064e7
        if (str_as_l2 < 0 | *endptr != 0) {
            goto lab_0x406440;
        } else {
            if (0x100000000 * (v8 - v6) >> 32 < (int64_t)str_as_l2) {
                goto lab_0x406440;
            } else {
                // 0x406512
                v14 = str_as_l2 + v5;
                goto lab_0x40640e;
            }
        }
    } else {
        goto lab_0x40647c;
    }
  lab_dec_label_pc_unknown_6:;
    unsigned char v30 = v26;
    if ((v24 >= v30 && !v27) != v24 < v30) {
        goto lab_0x406440;
    } else {
        int32_t str_as_l3 = strtol((char *)(a1 + 5), &endptr, 10); // 0x4064a7
        if (*endptr != 0) {
            goto lab_0x406440;
        } else {
            if (0x100000000 * (v6 - v8) >> 32 > (int64_t)str_as_l3) {
                goto lab_0x406440;
            } else {
                if (str_as_l3 >= 0 == (str_as_l3 != 0)) {
                    goto lab_0x406440;
                } else {
                    // 0x4064ce
                    v14 = str_as_l3 + v7;
                    goto lab_0x40640e;
                }
            }
        }
    }
}
// Address range: 0x406520 - 0x4065ec
int64_t function_406520(int64_t a1, int64_t * str, int64_t a3) {
    int64_t v1 = (int64_t)str;
    uint64_t v2 = a1 & 0xffffffff; // 0x40652e
    int32_t v3 = a1;
    int64_t v4 = (int64_t)&g31; // 0x406530
    int64_t v5 = 0;
    int32_t v6; // 0x406520
    int64_t result; // 0x406520
    while (*(int32_t *)v4 != v3) {
        int64_t v7 = v5 + 1; // 0x406538
        v4 += 12;
        if ((int32_t)v7 == 35) {
            int32_t v8 = __libc_current_sigrtmin(); // 0x406568
            int32_t v9 = __libc_current_sigrtmax(); // 0x406570
            result = 0xffffffff;
            if (v2 < (int64_t)v8 || v2 > (int64_t)v9) {
                return result;
            } else {
                if (v2 > (int64_t)((v9 - v8 >> 1) + v8)) {
                    // 0x40658c
                    *(int32_t *)str = 0x414d5452;
                    *(int16_t *)(v1 + 4) = 88;
                    v6 = v9;
                    goto lab_0x40659f;
                } else {
                    // 0x4065d0
                    *(int32_t *)str = 0x494d5452;
                    *(int16_t *)(v1 + 4) = 78;
                    v6 = v8;
                    goto lab_0x40659f;
                }
            }
        }
        v5 = v7 & 0xffffffff;
    }
    // 0x406548
    strcpy((char *)str, (char *)(12 * v5 + (int64_t)"HUP"));
    result = 0;
  lab_0x40655e:
    // 0x40655e
    return result;
  lab_0x40659f:;
    uint32_t v10 = v3 - v6; // 0x4065a1
    result = 0;
    if (v10 != 0) {
        // 0x4065a6
        __sprintf_chk((char *)(v1 + 5), 1, -1, "%+d", (int64_t)v10);
        return 0;
    }
    return result;
}
// Address range: 0x4065f0 - 0x40664d
int64_t function_4065f0(int64_t a1) {
    int32_t v1 = __fpending((struct _IO_FILE *)a1); // 0x4065f7
    int64_t v2; // 0x4065f0
    int64_t result = function_406c20(a1, v2); // 0x406608
    if ((v2 & 32) != 0) {
        // 0x406630
        if ((int32_t)result == 0) {
            // 0x406634
            *__errno_location() = 0;
        }
        // 0x40662a
        return 0xffffffff;
    }
    // 0x406611
    if ((int32_t)result == 0) {
        // 0x40662a
        return result;
    }
    int64_t result2 = 0xffffffff; // 0x406618
    if (v1 == 0) {
        // 0x40661a
        result2 = *__errno_location() != 9 ? 0xffffffff : 0;
    }
    // 0x40662a
    return result2;
}
// Address range: 0x406650 - 0x4066ae
int64_t function_406650(int32_t locale_category, int64_t a2) {
    char * locale = setlocale(locale_category, NULL); // 0x406656
    if (locale == NULL) {
        // 0x406683
        return 1;
    }
    int64_t v1 = (int64_t)locale; // 0x406656
    bool v2; // 0x406650
    int64_t v3 = v2 ? -1 : 1;
    int64_t v4 = (int64_t)"C"; // 0x406650
    int64_t v5 = v1; // 0x406650
    int64_t v6 = 2; // 0x406675
    unsigned char v7 = *(char *)v5; // 0x406675
    char v8 = *(char *)v4; // 0x406675
    char v9 = v8; // 0x406675
    bool v10 = false; // 0x406675
    while (v7 == v8) {
        // 0x406668
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
    int64_t v12 = (int64_t)"POSIX"; // 0x406681
    int64_t v13 = v1; // 0x406681
    if ((v7 >= v11 && !v10) == v7 < v11) {
        // 0x406683
        return 0;
    }
    int64_t v14 = 6; // 0x406681
    unsigned char v15 = *(char *)v13; // 0x40669d
    char v16 = *(char *)v12; // 0x40669d
    char v17 = v16; // 0x40669d
    bool v18 = false; // 0x40669d
    while (v15 == v16) {
        // 0x406690
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
// Address range: 0x4066b0 - 0x406c12
int64_t function_4066b0(void) {
    char * v1 = nl_langinfo(14); // 0x4066c6
    char * v2 = g57; // 0x4066cb
    char * v3; // 0x4066b0
    int64_t v4; // 0x4066b0
    int64_t v5; // 0x4066b0
    int64_t v6; // 0x4066b0
    int64_t v7; // 0x4066b0
    int32_t size; // 0x4066b0
    int32_t size2; // 0x4066b0
    int32_t len; // 0x406782
    int64_t v8; // 0x406782
    char * env_val; // 0x40676d
    if (v2 == NULL) {
        // 0x406768
        env_val = getenv("CHARSETALIASDIR");
        size = 115;
        v4 = 101;
        v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        v6 = 100;
        if (env_val == NULL) {
            goto lab_0x4067d5;
        } else {
            // 0x40677a
            size = 115;
            v4 = 101;
            v5 = (int64_t)"/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
            v6 = 100;
            if (*env_val == 0) {
                goto lab_0x4067d5;
            } else {
                // 0x40677f
                len = strlen(env_val);
                v8 = len;
                size2 = 14;
                if (len != 0) {
                    int64_t v9 = (int64_t)env_val; // 0x40676d
                    if (*(char *)(v9 - 1 + v8) != 47) {
                        // 0x406c05
                        size = len + 15;
                        v4 = v8 + 1;
                        v5 = v9;
                        v6 = v8;
                        goto lab_0x4067d5;
                    } else {
                        // 0x406b79
                        size2 = len + 14;
                        goto lab_0x40679b;
                    }
                } else {
                    goto lab_0x40679b;
                }
            }
        }
    } else {
        // 0x4066b0
        v3 = v2;
        v7 = (int64_t)v2;
        goto lab_0x4066ea;
    }
  lab_0x406a1c:;
    // 0x406a1c
    struct _IO_FILE * stream; // 0x40685b
    int32_t v10 = __uflow(stream); // 0x406a1f
    int64_t v11; // 0x4066b0
    int64_t v12 = v11; // 0x406a29
    int64_t v13; // 0x4066b0
    int64_t v14 = v13; // 0x406a29
    int32_t v15 = v10; // 0x406a29
    int64_t v16; // 0x4066b0
    int64_t v17 = v16; // 0x406a29
    int64_t v18 = v11; // 0x406a29
    int64_t v19 = v13; // 0x406a29
    int64_t v20 = v16; // 0x406a29
    if (v10 == -1) {
        // break -> 0x406a2f
        goto lab_0x406a2f;
    }
    goto lab_0x4068a9;
  lab_0x40689e:;
    // 0x40689e
    int64_t v90; // 0x4066b0
    int64_t * v32; // 0x406890
    *v32 = v90 + 1;
    int64_t v89; // 0x4066b0
    v12 = v89;
    int64_t v91; // 0x4066b0
    v14 = v91;
    v15 = (int32_t)*(char *)v90;
    int64_t v92; // 0x4066b0
    v17 = v92;
    goto lab_0x4068a9;
  lab_0x4068a9:;
    int64_t v21 = v17;
    int32_t c = v15;
    int64_t v22 = v14;
    int64_t v23 = v12;
    int64_t v24; // 0x4066b0
    int32_t v25; // bp-120, 0x4066b0
    int32_t v26; // bp-184, 0x4066b0
    int64_t v27; // 0x40685b
    int64_t v28; // 0x406878
    int64_t v29; // 0x40687d
    int64_t * v30; // 0x406894
    switch (c) {
        case 32: {
            goto lab_0x406890;
        }
        case 10: {
            goto lab_0x406890;
        }
        case 9: {
            goto lab_0x406890;
        }
        case 35: {
            uint64_t v31 = *v32; // 0x406a81
            int32_t v33; // 0x4066b0
            char v34; // 0x4066b0
            int32_t v35; // 0x406a8e
            if (v31 < *v30) {
                // 0x406a60
                *v32 = v31 + 1;
                v33 = (int32_t)*(char *)v31;
                v34 = 1;
            } else {
                // 0x406a8b
                v35 = __uflow(stream);
                v33 = v35;
                v34 = v35 != -1;
            }
            int32_t v36 = v33;
            while (v36 != 10 && v34 != 0) {
                // 0x406a81
                v31 = *v32;
                if (v31 < *v30) {
                    // 0x406a60
                    *v32 = v31 + 1;
                    v33 = (int32_t)*(char *)v31;
                    v34 = 1;
                } else {
                    // 0x406a8b
                    v35 = __uflow(stream);
                    v33 = v35;
                    v34 = v35 != -1;
                }
                // 0x406a70
                v36 = v33;
            }
            // 0x406b5f
            if (v36 == -1) {
                // break -> 0x406a2f
                break;
            }
            goto lab_0x406890;
        }
        default: {
            // 0x4068bf
            ungetc(c, stream);
            if (fscanf(stream, "%50s %50s", &v26, &v25) < 2) {
                // break -> 0x406a2f
                break;
            }
            int64_t v37 = v29;
            int32_t v38 = *(int32_t *)v37; // 0x4068e8
            int64_t v39 = v37 + 4; // 0x4068ea
            int32_t v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80); // 0x4068f6
            uint32_t v41 = v40 & -0x7f7f7f80; // 0x4068f8
            while (v41 == 0) {
                // 0x4068e8
                v37 = v39;
                v38 = *(int32_t *)v37;
                v39 = v37 + 4;
                v40 = v38 - 0x1010101 & (v38 ^ -0x7f7f7f80);
                v41 = v40 & -0x7f7f7f80;
            }
            unsigned char v42 = (char)((v40 & 0x8080) == 0 ? v41 / 0x10000 : v41); // 0x406916
            int64_t v43 = v28;
            int32_t v44 = *(int32_t *)v43; // 0x406922
            int64_t v45 = v43 + 4; // 0x406924
            int32_t v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80); // 0x406930
            uint32_t v47 = v46 & -0x7f7f7f80; // 0x406932
            while (v47 == 0) {
                // 0x406922
                v43 = v45;
                v44 = *(int32_t *)v43;
                v45 = v43 + 4;
                v46 = v44 - 0x1010101 & (v44 ^ -0x7f7f7f80);
                v47 = v46 & -0x7f7f7f80;
            }
            int64_t v48 = ((v40 & 0x8080) == 0 ? v37 + 6 : v39) - (-1 - v42 < v42 ? 4 : 3) - v29; // 0x40691f
            int32_t v49 = (v46 & 0x8080) == 0 ? v47 / 0x10000 : v47; // 0x406948
            int64_t v50 = (char)v49 == 0 ? 3 : 4; // 0x406958
            int64_t v51 = ((v46 & 0x8080) == 0 ? v43 + 6 : v45) - v50 - v28; // 0x40695c
            int64_t v52 = v51 + v48; // 0x406965
            int64_t * mem; // 0x4066b0
            int64_t v53; // 0x4066b0
            int64_t v54; // 0x4066b0
            if (v23 != 0) {
                int64_t v55 = v52 + v23; // 0x406a9b
                int64_t v56 = v55 + 3; // 0x406aa7
                v54 = v55;
                mem = realloc((int64_t *)v21, (int32_t)v56);
                v53 = v56;
            } else {
                int64_t * mem2 = malloc((int32_t)v52 + 3); // 0x406981
                v54 = v52;
                mem = mem2;
                v53 = v49 & -0x7f7f8000;
            }
            // 0x406990
            if (mem == NULL) {
                // 0x406bbc
                free((int64_t *)v21);
                function_406c20(v27, v53);
                v24 = (int64_t)&g13;
                goto lab_0x406834;
            }
            int64_t v57 = (int64_t)mem;
            int64_t v58 = v54 + 2;
            int64_t v59 = v48 + 1; // 0x4069a8
            int64_t v60 = v58 - v51 + v57;
            int64_t v61 = -2 - v48 + v60; // 0x4069b2
            uint32_t v62 = (int32_t)v59; // 0x4069b5
            int64_t v63; // 0x4066b0
            if (v62 >= 8) {
                // 0x406ac4
                *(int64_t *)v61 = (int64_t)v26;
                int64_t v64 = (v59 & 0xffffffff) - 8;
                *(int64_t *)(v61 + v64) = *(int64_t *)(v64 + v29);
                int64_t v65 = v61 + 8 & -8; // 0x406ade
                int64_t v66 = v61 - v65; // 0x406ae2
                uint32_t v67 = (int32_t)(v66 + v59); // 0x406aed
                v63 = v66;
                if (v67 >= 8) {
                    int64_t v68 = 0;
                    int64_t v69 = v68 + 8; // 0x406afe
                    int64_t v70 = v69 & 0xffffffff; // 0x406afe
                    *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                    v63 = v70;
                    while ((v67 & -8) > (int32_t)v69) {
                        // 0x406afb
                        v68 = v70;
                        v69 = v68 + 8;
                        v70 = v69 & 0xffffffff;
                        *(int64_t *)(v68 + v65) = *(int64_t *)(v29 - v66 + v68);
                        v63 = v70;
                    }
                }
            } else {
                if ((v59 & 4) != 0) {
                    // 0x406b8f
                    *(int32_t *)v61 = v26;
                    int64_t v71 = (v59 & 0xffffffff) - 4;
                    *(int32_t *)(v61 + v71) = *(int32_t *)(v71 + v29);
                    v63 = v61;
                } else {
                    // 0x4069c7
                    v63 = v61;
                    if (v62 != 0) {
                        // 0x4069cb
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
            int64_t v73 = v51 + 1; // 0x4069db
            int64_t v74 = v60 - 1; // 0x4069df
            uint32_t v75 = (int32_t)v73; // 0x4069e4
            int64_t v76; // 0x4066b0
            if (v75 >= 8) {
                // 0x406b12
                *(int64_t *)v74 = (int64_t)v25;
                int64_t v77 = v73 & 0xffffffff; // 0x406b1c
                int64_t v78 = v77 - 8;
                *(int64_t *)(v74 + v78) = *(int64_t *)(v78 + v28);
                int64_t v79 = v60 + 7 & -8; // 0x406b2c
                int64_t v80 = v74 - v79; // 0x406b30
                uint32_t v81 = (int32_t)(v80 + v73); // 0x406b3b
                v76 = v77;
                if (v81 >= 8) {
                    int64_t v82 = 0;
                    int64_t v83 = v82 + 8; // 0x406b4b
                    *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                    v76 = v82;
                    while ((v81 & -8) > (int32_t)v83) {
                        // 0x406b49
                        v82 = v83 & 0xffffffff;
                        v83 = v82 + 8;
                        *(int64_t *)(v82 + v79) = *(int64_t *)(v28 - v80 + v82);
                        v76 = v82;
                    }
                }
            } else {
                if ((v73 & 4) != 0) {
                    // 0x406ba6
                    *(int32_t *)v74 = v25;
                    int64_t v84 = (v73 & 0xffffffff) - 4;
                    uint32_t v85 = *(int32_t *)(v84 + v28); // 0x406bae
                    *(int32_t *)(v74 + v84) = v85;
                    v76 = v85;
                } else {
                    // 0x4069f6
                    v76 = v63;
                    if (v75 != 0) {
                        // 0x4069fa
                        *(char *)v74 = (char)v25;
                        v76 = v25 % 256;
                        if ((v73 & 2) != 0) {
                            int64_t v86 = v73 & 0xffffffff; // 0x406bf3
                            int64_t v87 = v86 - 2;
                            *(int16_t *)(v74 + v87) = *(int16_t *)(v87 + v28);
                            v76 = v86;
                        }
                    }
                }
            }
            uint64_t v88 = *v32; // 0x406a0e
            v89 = v58;
            v90 = v88;
            v91 = v76;
            v92 = v57;
            v11 = v58;
            v13 = v76;
            v16 = v57;
            if (v88 < *v30) {
                goto lab_0x40689e;
            } else {
                goto lab_0x406a1c;
            }
        }
    }
  lab_0x406890:;
    int64_t v93 = v23; // 0x4066b0
    int64_t v94 = v22; // 0x4066b0
    int64_t v95 = v21; // 0x4066b0
    goto lab_0x406890_2;
  lab_0x4067d5:;
    int64_t * mem3 = malloc(size); // 0x4067d5
    int64_t v97 = (int64_t)&g13; // 0x4067e0
    int64_t v98; // 0x4066b0
    int64_t path; // 0x4066b0
    if (mem3 == NULL) {
        goto lab_0x4067b2;
    } else {
        int64_t v99 = (int64_t)mem3; // 0x4067d5
        memcpy(mem3, (int64_t *)v5, (int32_t)v6);
        *(char *)(v6 + v99) = 47;
        path = v99;
        v98 = v4;
        goto lab_0x4067f6;
    }
  lab_0x4066ea:;
    int64_t str = v1 == NULL ? (int64_t)&g13 : (int64_t)v1; // 0x4066dd
    char v100 = *v3; // 0x4066ea
    int64_t v101; // 0x4066b0
    if (v100 == 0) {
        // 0x406744
        v101 = str;
        return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
    }
    char v102 = v100; // 0x4066b0
    int64_t v103 = v7;
    char * str2 = (char *)v103;
    int64_t v104; // 0x4066b0
    while (strcmp((char *)str, str2) != 0) {
        int64_t v105 = v103 + 1;
        if (v102 == 42) {
            // 0x406730
            v104 = v105;
            if (*(char *)v105 == 0) {
                goto lab_0x406737;
            }
        }
        int64_t str3 = v105 + (int64_t)strlen(str2); // 0x406700
        int64_t v106 = str3 + 1 + (int64_t)strlen((char *)str3); // 0x40670d
        char v107 = *(char *)v106; // 0x406712
        v102 = v107;
        if (v107 == 0) {
            // 0x406744
            v101 = str;
            return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
        }
        v103 = v106;
        str2 = (char *)v103;
    }
    // 0x40671b
    v104 = v103 + 1;
  lab_0x406737:
    // 0x406744
    v101 = v104 + (int64_t)strlen(str2);
    return *(char *)v101 == 0 ? (int64_t)"ASCII" : v101;
  lab_0x4067b2:;
    char * v108 = (char *)v97;
    g57 = v108;
    v3 = v108;
    v7 = v97;
    goto lab_0x4066ea;
  lab_0x4067f6:;
    int64_t v109 = v98 + path; // 0x4067f6
    *(int64_t *)v109 = 0x2e74657372616863;
    *(int16_t *)(v109 + 12) = 115;
    *(int32_t *)(v109 + 8) = 0x61696c61;
    int32_t fd = open((char *)path, O_RDONLY); // 0x406822
    v24 = (int64_t)&g13;
    if (fd >= 0) {
        // 0x406851
        stream = fdopen(fd, "r");
        if (stream == NULL) {
            // 0x406b82
            close(fd);
            v24 = (int64_t)&g13;
        } else {
            // 0x406875
            v27 = (int64_t)stream;
            v28 = &v25;
            v29 = &v26;
            v32 = (int64_t *)(v27 + 8);
            v30 = (int64_t *)(v27 + 16);
            v93 = 0;
            v94 = (int64_t)"r";
            v95 = 0;
            while (true) {
              lab_0x406890_2:;
                uint64_t v96 = *v32; // 0x406890
                v89 = v93;
                v90 = v96;
                v91 = v94;
                v92 = v95;
                if (v96 >= *v30) {
                    goto lab_0x406a1c;
                } else {
                    goto lab_0x40689e;
                }
            }
          lab_0x406a2f:
            // 0x406a2f
            function_406c20(v27, v19);
            v24 = (int64_t)&g13;
            if (v18 != 0) {
                // 0x406a4e
                *(char *)(v20 + v18) = 0;
                v24 = v20;
            }
        }
    }
    goto lab_0x406834;
  lab_0x40679b:;
    int64_t * mem4 = malloc(size2); // 0x40679b
    v97 = (int64_t)&g13;
    if (mem4 != NULL) {
        // 0x406841
        memcpy(mem4, (int64_t *)env_val, len);
        path = (int64_t)mem4;
        v98 = v8;
        goto lab_0x4067f6;
    } else {
        goto lab_0x4067b2;
    }
  lab_0x406834:
    // 0x406834
    free((int64_t *)path);
    v97 = v24;
    goto lab_0x4067b2;
}
// Address range: 0x406c20 - 0x406c9b
int64_t function_406c20(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1; // 0x406c27
    if (fileno(stream) < 0) {
        // 0x406c87
        return fclose(stream);
    }
    int64_t v1 = a2; // 0x406c3a
    if (__freading(stream) != 0) {
        int32_t fd = fileno(stream); // 0x406c6b
        v1 = 0;
        if (lseek(fd, 0, SEEK_CUR) == -1) {
            // 0x406c87
            return fclose(stream);
        }
    }
    // 0x406c3c
    if ((int32_t)function_406ca0(a1, v1) == 0) {
        // 0x406c87
        return fclose(stream);
    }
    int32_t * v2 = __errno_location(); // 0x406c48
    int32_t v3 = *v2; // 0x406c50
    int64_t result = fclose(stream); // 0x406c5e
    if (v3 != 0) {
        // 0x406c90
        *v2 = v3;
        result = 0xffffffff;
    }
    // 0x406c60
    return result;
}
// Address range: 0x406ca0 - 0x406ce0
int64_t function_406ca0(int64_t a1, int64_t a2) {
    struct _IO_FILE * stream = (struct _IO_FILE *)a1;
    if (a1 == 0 || __freading(stream) == 0) {
        // 0x406cba
        return fflush(stream);
    }
    if ((a1 & 256) == 0) {
        // 0x406cba
        return fflush(stream);
    }
    // 0x406cc8
    function_406ce0(a1, 0, 1);
    return fflush(stream);
}
// Address range: 0x406ce0 - 0x406d37
int64_t function_406ce0(int64_t stream, int32_t offset, int64_t whence) {
    // 0x406ce0
    if (*(int64_t *)(stream + 16) != *(int64_t *)(stream + 8) || *(int64_t *)(stream + 40) != *(int64_t *)(stream + 32) || *(int64_t *)(stream + 72) != 0) {
        // 0x406cea
        return fseeko((struct _IO_FILE *)stream, offset, (int32_t)whence);
    }
    int32_t v1 = lseek(fileno((struct _IO_FILE *)stream), offset, (int32_t)whence); // 0x406d1b
    int64_t result = -1; // 0x406d24
    if (v1 != -1) {
        // 0x406d26
        *(int32_t *)stream = (int32_t)stream & -17;
        *(int64_t *)(stream + 144) = (int64_t)v1;
        result = 0;
    }
    // 0x406d32
    return result;
}
// Address range: 0x406d40 - 0x406d9d
int64_t function_406d40(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406d40
    return function_401918();
}
// Address range: 0x406da0 - 0x406da1
int64_t function_406da0(void) {
    // 0x406da0
    int64_t result; // 0x406da0
    return result;
}
// Address range: 0x406db0 - 0x406dc8
int64_t function_406db0(int64_t a1, int64_t a2, int64_t a3) {
    // 0x406db0
    return __cxa_atexit((void (*)(int64_t *))a1, NULL, (int64_t *)g18);
}
// Address range: 0x406dc8 - 0x406de8
int64_t function_406dc8(int64_t a1, int64_t a2, int64_t result) {
    int64_t v1 = &g14; // 0x406dd2
    while (*(int64_t *)v1 != -1) {
        // 0x406dd3
        v1 -= 8;
    }
    // 0x406de4
    return result;
}
