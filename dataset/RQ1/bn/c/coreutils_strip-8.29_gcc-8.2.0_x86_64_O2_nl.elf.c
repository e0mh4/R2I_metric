int64_t sub_4017a0()
{
    int64_t var_8 = data_61b008;
    /* jump -> data_61b010 */
}

int64_t sub_4017b6()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_4017a0();
}

int64_t sub_4017c6()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_4017a0();
}

int64_t sub_4017d6()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_4017a0();
}

int64_t sub_4017e6()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_4017a0();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    uint64_t r13 = 0x7fffffffffffffff;
    int32_t rbx_1 = 1;
    int64_t rcx;
    int64_t rdx;
    uint64_t r8;
    ssize_t r9;
    rcx = sub_402e00(*argv);
    int64_t var_38;
    int32_t rbx;
    setlocale(6, &data_41505a, rdx, rcx, r8, r9, var_38, rbx);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_…");
    textdomain("coreutils");
    sub_414e30(sub_402bd0);
    data_61b368 = 0;
    while (true)
    {
        int32_t rax_1 = getopt_long(argc, argv, "h:b:f:v:i:pl:s:w:n:d:", &data_415980, nullptr);
        int64_t rbx_2;
        char const* const rsi_2;
        int64_t r14_1;
        if (rax_1 != 0xffffffff)
        {
            bool cond:2_1 = rax_1 <= 0x69;
            if (rax_1 == 0x69)
            {
                data_61b270 = sub_405360(data_61b940, 1, r13, &data_41505a, dcgettext(nullptr, "invalid line number increment", 5), 0);
            }
            else if (cond:2_1)
            {
                bool cond:4_1 = rax_1 <= 0x62;
                if (rax_1 == 0x62)
                {
                    if (sub_4022e0(&data_61b2a0, &data_61b760, 0x61b5e0) != 0)
                    {
                        continue;
                    }
                    else
                    {
                        rsi_2 = "invalid body numbering style: %s";
                        rbx_2 = sub_404a20(data_61b940);
                    }
                    goto label_401ed8;
                }
                if ((!cond:4_1))
                {
                    if (rax_1 != 0x66)
                    {
                        if (rax_1 == 0x68)
                        {
                            if (sub_4022e0(&data_61b298, &data_61b720, 0x61b4e0) != 0)
                            {
                                continue;
                            }
                            else
                            {
                                rsi_2 = "invalid header numbering style: …";
                                rbx_2 = sub_404a20(data_61b940);
                            }
                            goto label_401ed8;
                        }
                        if (rax_1 == 0x64)
                        {
                            data_61b280 = data_61b940;
                            continue;
                        }
                        goto label_401cda;
                    }
                    if (sub_4022e0(&data_61b290, &data_61b6e0, 0x61b3e0) != 0)
                    {
                        continue;
                    }
                    else
                    {
                        rsi_2 = "invalid footer numbering style: …";
                        rbx_2 = sub_404a20(data_61b940);
                    }
                    goto label_401ed8;
                }
                if (rax_1 == 0xffffff7d)
                {
                    int64_t var_48 = 0;
                    sub_404ea0(stdout, &data_414e99, "GNU coreutils", data_61b2a8);
                    exit(0);
                    /* no return */
                }
                rbx_1 = 0;
                if (rax_1 == 0xffffff7e)
                {
                    break;
                }
            }
            else
            {
                bool cond:5_1 = rax_1 <= 0x70;
                if (rax_1 == 0x70)
                {
                    data_61b268 = 0;
                }
                else
                {
                    if ((!cond:5_1))
                    {
                        if (rax_1 == 0x76)
                        {
                            data_61b278 = sub_405360(data_61b940, -0x8000000000000000, r13, &data_41505a, dcgettext(nullptr, "invalid starting line number", 5), 0);
                            continue;
                        }
                        else if (rax_1 == 0x77)
                        {
                            data_61b258 = sub_405360(data_61b940, 1, 0x7fffffff, &data_41505a, dcgettext(nullptr, "invalid line number field width", 5), 0);
                            continue;
                        }
                        else if (rax_1 == 0x73)
                        {
                            data_61b288 = data_61b940;
                            continue;
                        }
                        goto label_401cda;
                    }
                    if (rax_1 == 0x6c)
                    {
                        data_61b260 = sub_405360(data_61b940, 1, r13, &data_41505a, dcgettext(nullptr, "invalid line number of blank lin…", 5), 0);
                    }
                    else
                    {
                        bool c_1 = rax_1 < 0x6e;
                        bool z_1 = rax_1 == 0x6e;
                        if (z_1)
                        {
                            r14_1 = data_61b940;
                            void* const rdi_2 = &data_414f5f;
                            int64_t rcx_1 = 3;
                            int64_t rsi_1 = r14_1;
                            while (rcx_1 != 0)
                            {
                                char temp1_1 = *rsi_1;
                                char temp2_1 = *rdi_2;
                                c_1 = temp1_1 < temp2_1;
                                z_1 = temp1_1 == temp2_1;
                                rsi_1 = (rsi_1 + 1);
                                rdi_2 = (rdi_2 + 1);
                                rcx_1 = (rcx_1 - 1);
                                if ((!z_1))
                                {
                                    break;
                                }
                            }
                            rax_1 = ((!z_1) && (!c_1));
                            rax_1 = (rax_1 - 0);
                            if (rax_1 == 0)
                            {
                                data_61b250 = "%-*ld%s";
                                continue;
                            }
                            else if (strcmp(r14_1, &data_414f62) == 0)
                            {
                                data_61b250 = "%*ld%s";
                                continue;
                            }
                            else if (strcmp(r14_1, &data_414f65) == 0)
                            {
                                data_61b250 = "%0*ld%s";
                                continue;
                            }
                            goto label_4021d3;
                        }
                    label_401cda:
                        rbx_1 = 0;
                    }
                }
            }
        }
        else
        {
            if (rbx_1 == 0)
            {
                sub_4027c0(1);
                /* no return */
            }
            int64_t rdi_13 = data_61b280;
            int64_t rcx_4 = -1;
            while (rcx_4 != 0)
            {
                bool cond:0_1 = 0 != *rdi_13;
                rdi_13 = (rdi_13 + 1);
                rcx_4 = (rcx_4 - 1);
                if ((!cond:0_1))
                {
                    break;
                }
            }
            int64_t rcx_5 = (!rcx_4);
            r14_1 = rcx_5;
            int64_t rdi_14 = ((rcx_5 - 1) * 3);
            data_61b3b8 = rdi_14;
            int64_t rax_23 = sub_404fe0((rdi_14 + 1));
            int64_t r15_1 = data_61b280;
            data_61b3c0 = rax_23;
            strcpy(stpcpy(stpcpy(rax_23, r15_1), r15_1), r15_1);
            int64_t rdi_19 = ((rcx_5 - 1) + (rcx_5 - 1));
            data_61b3a8 = rdi_19;
            int64_t rax_26 = sub_404fe0((rdi_19 + 1));
            int64_t r15_2 = data_61b280;
            data_61b3b0 = rax_26;
            strcpy(stpcpy(rax_26, r15_2), r15_2);
            data_61b398 = (rcx_5 - 1);
            char* rax_28 = sub_404fe0(r14_1);
            int64_t rsi_8 = data_61b280;
            data_61b3a0 = rax_28;
            strcpy(rax_28, rsi_8);
            sub_402cb0(&data_61b380);
            int64_t rdi_25 = data_61b288;
            int64_t rcx_6 = -1;
            while (rcx_6 != 0)
            {
                bool cond:1_1 = 0 != *rdi_25;
                rdi_25 = (rdi_25 + 1);
                rcx_6 = (rcx_6 - 1);
                if ((!cond:1_1))
                {
                    break;
                }
            }
            int64_t rax_30 = sub_404fe0(((((!rcx_6) - 1) + data_61b258) + 1));
            data_61b378 = rax_30;
            r13 = (((!rcx_6) - 1) + data_61b258);
            int64_t rax_32 = memset(rax_30, 0x20, r13);
            data_61b3c8 = 0x61b760;
            *(rax_32 + r13) = 0;
            data_61b370 = data_61b278;
            data_61b7a0 = data_61b2a0;
            int32_t rax_35 = data_61b31c;
            bool cond:3_1 = rax_35 >= argc;
            if (rax_35 == argc)
            {
                rbx_1 = sub_402420(&data_417122);
            }
            else if ((!cond:3_1))
            {
                do
                {
                    rbx_1 = (rbx_1 & sub_402420(argv[rax_35]));
                    rax_35 = (data_61b31c + 1);
                    data_61b31c = rax_35;
                } while (rax_35 < argc);
            }
            int32_t rax_40;
            if (data_61b368 != 0)
            {
                rax_40 = sub_405ae0(stdin);
                if (rax_40 == 0xffffffff)
                {
                    error(1, *__errno_location(), &data_417122);
                }
            }
            if ((data_61b368 == 0 || (data_61b368 != 0 && rax_40 != 0xffffffff)))
            {
                return (rbx_1 ^ 1);
            }
        label_4021d3:
            rsi_2 = "invalid line numbering format: %…";
            rbx_2 = sub_404a20(r14_1);
        label_401ed8:
            rbx_1 = 0;
            error(0, 0, dcgettext(nullptr, rsi_2, 5), rbx_2);
        }
    }
    sub_4027c0(0);
    /* no return */
}

int64_t _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t rax;
    int64_t var_8 = rax;
    __libc_start_main(main, __return_addr, &arg_8, init, fini, arg3, &var_8);
    /* no return */
}

void sub_40222b()
{
    return;
}

int64_t sub_40224a()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    return (COMBINE(rdx, rax) / 2);
}

void sub_402281()
{
    if (data_61b348 != 0)
    {
        return;
    }
    while (true)
    {
        int64_t rax_1 = data_61b350;
        if (rax_1 >= 0)
        {
            break;
        }
        data_61b350 = (rax_1 + 1);
        *(0x61ae40 + ((rax_1 + 1) << 3))();
    }
    sub_40222b();
    data_61b348 = 1;
}

int64_t j_sub_40224a()
{
    /* tailcall */
    return sub_40224a();
}

int64_t sub_4022e0(int64_t* arg1, int64_t* arg2, int64_t arg3)
{
    int64_t r8_1 = data_61b940;
    char rcx = *r8_1;
    bool cond:0 = rcx <= 0x6e;
    if (rcx != 0x6e)
    {
        if ((!cond:0))
        {
            if (rcx == 0x70)
            {
                data_61b940 = (r8_1 + 1);
                *arg1 = r8_1;
                int64_t rbp = data_61b940;
                *arg2 = 0;
                arg2[4] = arg3;
                arg2[1] = 0;
                arg2[5] = 0;
                data_61b948 = 0x2c6;
                int64_t rax_3 = sub_413d70(rbp, strlen(rbp), arg2);
                if (rax_3 != 0)
                {
                    error(1, 0, "%s", rax_3);
                    /* tailcall */
                    return sub_4023b0();
                }
                return 1;
            }
            if (rcx != 0x74)
            {
                return 0;
            }
        }
        else if (rcx != 0x61)
        {
            return 0;
        }
    }
    *arg1 = r8_1;
    return 1;
}

int64_t sub_4023b0()
{
    __printf_chk(1, data_61b250, data_61b258, data_61b370, data_61b288);
    int64_t rax_1 = data_61b370;
    int64_t rdx_2 = (data_61b270 + rax_1);
    if (rax_1 > rdx_2)
    {
        /* tailcall */
        return sub_402420(error(1, 0, dcgettext(nullptr, "line number overflow", 5)));
    }
    data_61b370 = rdx_2;
    return rax_1;
}

int64_t sub_402420(char* arg1)
{
    char* rsi = arg1;
    int64_t rcx = 2;
    void* const rdi = &data_417122;
    int64_t __saved_rbx;
    bool c = &__saved_rbx < 8;
    bool z = &__saved_rbx == 8;
    while (rcx != 0)
    {
        char temp1_1 = *rsi;
        char temp2_1 = *rdi;
        c = temp1_1 < temp2_1;
        z = temp1_1 == temp2_1;
        rsi = &rsi[1];
        rdi = (rdi + 1);
        rcx = (rcx - 1);
        if ((!z))
        {
            break;
        }
    }
    uint64_t* rax_20;
    uint64_t* const r12;
    if ((((!z) && (!c)) - 0) != 0)
    {
        rax_20 = fopen(arg1, "r");
        r12 = rax_20;
    }
    else
    {
        data_61b368 = 1;
        r12 = stdin;
    }
    if (((((!z) && (!c)) - 0) == 0 || ((((!z) && (!c)) - 0) != 0 && rax_20 != 0)))
    {
        sub_402c80(r12, 2);
        while (true)
        {
            if (sub_402de0(&data_61b380, r12) == 0)
            {
                break;
            }
            int64_t rbx_1 = data_61b388;
            uint64_t rbp_1 = (rbx_1 - 1);
            if (rbp_1 > 1)
            {
                int64_t r15_1 = data_61b390;
                if (*r15_1 == **&data_61b280)
                {
                    if ((rbp_1 == data_61b3b8 && memcmp(r15_1, data_61b3c0, rbp_1) == 0))
                    {
                        int64_t rax_16 = data_61b298;
                        bool cond:5_1 = data_61b268 == 0;
                        data_61b3c8 = 0x61b720;
                        data_61b7a0 = rax_16;
                        if (cond:5_1)
                        {
                            goto label_40261a;
                        }
                    label_402613:
                        data_61b370 = data_61b278;
                    label_40261a:
                        uint64_t* const rdi_6 = stdout;
                        char* rax_12 = stdout[5];
                        if (rax_12 >= stdout[6])
                        {
                            __overflow(rdi_6, 0xa);
                            continue;
                        }
                        else
                        {
                            stdout[5] = &rax_12[1];
                            *rax_12 = 0xa;
                            continue;
                        }
                    }
                    if ((rbp_1 == data_61b3a8 && memcmp(r15_1, data_61b3b0, rbp_1) == 0))
                    {
                        int64_t rax_14 = data_61b2a0;
                        bool cond:6_1 = data_61b268 != 0;
                        data_61b3c8 = 0x61b760;
                        data_61b7a0 = rax_14;
                        if ((!cond:6_1))
                        {
                            goto label_40261a;
                        }
                        goto label_402613;
                    }
                    if ((rbp_1 == data_61b398 && memcmp(r15_1, data_61b3a0, rbp_1) == 0))
                    {
                        int64_t rax_10 = data_61b290;
                        bool cond:7_1 = data_61b268 == 0;
                        data_61b3c8 = 0x61b6e0;
                        data_61b7a0 = rax_10;
                        if (cond:7_1)
                        {
                            goto label_40261a;
                        }
                        goto label_402613;
                    }
                }
            }
            char rax_5 = **&data_61b7a0;
            bool cond:4_1 = rax_5 <= 0x6e;
            if (rax_5 != 0x6e)
            {
                if (cond:4_1)
                {
                    if (rax_5 != 0x61)
                    {
                        goto label_40251e;
                    }
                    int64_t rdx_3 = data_61b260;
                    if (rdx_3 <= 1)
                    {
                    label_4024f7:
                        sub_4023b0();
                        rbx_1 = data_61b388;
                        goto label_40251e;
                    }
                    if (rbx_1 <= 1)
                    {
                        int64_t rax_8 = (data_61b360 + 1);
                        data_61b360 = rax_8;
                        if (rdx_3 != rax_8)
                        {
                            goto label_40256c;
                        }
                    }
                    sub_4023b0();
                    rbx_1 = data_61b388;
                    data_61b360 = 0;
                    goto label_40251e;
                }
                if (rax_5 == 0x70)
                {
                    int64_t rax_6 = sub_4146f0(data_61b3c8, data_61b390, rbp_1, 0, rbp_1, nullptr);
                    if (rax_6 == -2)
                    {
                        /* tailcall */
                        return sub_4027c0(error(1, *__errno_location(), dcgettext(nullptr, "error in regular expression sear…", 5)));
                    }
                    if (rax_6 == -1)
                    {
                        goto label_40256c;
                    }
                    goto label_4024f7;
                }
                if (rax_5 != 0x74)
                {
                    goto label_40251e;
                }
                if (rbx_1 <= 1)
                {
                    goto label_40256c;
                }
                goto label_4024f7;
            }
        label_40256c:
            fputs_unlocked(data_61b378, stdout);
            rbx_1 = data_61b388;
        label_40251e:
            fwrite_unlocked(data_61b390, 1, rbx_1, stdout);
        }
        bool c_1 = false;
        bool z_1 = (*r12 & 0x20) == 0;
        if (z_1)
        {
            void* const rdi_9 = &data_417122;
            int64_t rcx_2 = 2;
            char* rsi_7 = arg1;
            while (rcx_2 != 0)
            {
                char temp4_1 = *rsi_7;
                char temp5_1 = *rdi_9;
                c_1 = temp4_1 < temp5_1;
                z_1 = temp4_1 == temp5_1;
                rsi_7 = &rsi_7[1];
                rdi_9 = (rdi_9 + 1);
                rcx_2 = (rcx_2 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
            int64_t rax_1;
            rax_1 = ((!z_1) && (!c_1));
            rax_1 = (rax_1 - 0);
            if (rax_1 == 0)
            {
                clearerr_unlocked(r12);
                return 1;
            }
            if (sub_405ae0(r12) != 0xffffffff)
            {
                return 1;
            }
        }
    }
    if (((((((!z) && (!c)) - 0) != 0 && rax_20 == 0) || (((!z) && (!c)) - 0) == 0) || ((((!z) && (!c)) - 0) != 0 && rax_20 != 0)))
    {
        error(0, *__errno_location(), "%s", sub_4048a0(0, 3, arg1));
        return 0;
    }
}

int64_t sub_4027c0(int32_t arg1) __noreturn
{
    int64_t rbp = data_61b7b8;
    if (arg1 != 0)
    {
        __fprintf_chk(stderr, 1, dcgettext(nullptr, "Try '%s --help' for more informa…", 5), rbp);
    }
    else
    {
        __printf_chk(1, dcgettext(nullptr, "Usage: %s [OPTION]... [FILE]...\n", 5), rbp);
        fputs_unlocked(dcgettext(nullptr, "Write each FILE to standard outp…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\nWith no FILE, or when FILE is …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\nMandatory arguments to long op…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -b, --body-numbering=STYLE    …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -h, --header-numbering=STYLE  …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -v, --starting-line-number=NUM…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --help     display this he…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --version  output version …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\nBy default, selects -v1 -i1 -l…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\n  a         number all lines\n…", 5), stdout);
        void* const var_88 = &data_414e9c;
        void* const* rax_14 = &var_88;
        void* const var_78_1 = "coreutils";
        void* const var_70_1 = "Multi-call invocation";
        void* const var_68_1 = "sha224sum";
        void* const var_60_1 = "sha2 utilities";
        void* const var_58_1 = "sha256sum";
        void* const var_50_1 = "sha2 utilities";
        void* const var_48_1 = "sha384sum";
        void* const var_40_1 = "sha2 utilities";
        void* const var_38_1 = "sha512sum";
        void* const var_30_1 = "sha2 utilities";
        int64_t var_28_1 = 0;
        int64_t var_20_1 = 0;
        bool c_1;
        bool z_1;
        do
        {
            rax_14 = &rax_14[2];
            void* const rdi_12 = *rax_14;
            c_1 = false;
            z_1 = (rdi_12 & rdi_12) == 0;
            if (z_1)
            {
                break;
            }
            void* const rsi_12 = &data_414e99;
            int64_t rcx_2 = 3;
            while (rcx_2 != 0)
            {
                char temp0_1 = *rsi_12;
                char temp1_1 = *rdi_12;
                c_1 = temp0_1 < temp1_1;
                z_1 = temp0_1 == temp1_1;
                rsi_12 = (rsi_12 + 1);
                rdi_12 = (rdi_12 + 1);
                rcx_2 = (rcx_2 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
        } while ((((!z_1) && (!c_1)) - 0) != 0);
        void* const rbp_1 = rax_14[1];
        char* rax_25;
        int32_t rax_26;
        void* const r12_1;
        if (rbp_1 == 0)
        {
            int64_t rcx_5;
            int64_t rdx_5;
            uint64_t r8_2;
            ssize_t r9_2;
            rcx_5 = __printf_chk(1, dcgettext(nullptr, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            rax_25 = setlocale(5, nullptr, rdx_5, rcx_5, r8_2, r9_2, var_88, "test invocation");
            if (rax_25 != 0)
            {
                rax_26 = strncmp(rax_25, &data_414f20, 3);
                if (rax_26 != 0)
                {
                    rbp_1 = &data_414e99;
                }
            }
            if ((rax_25 == 0 || (rax_25 != 0 && rax_26 == 0)))
            {
                rbp_1 = &data_414e99;
                r12_1 = " invocation";
                __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/cor…", &data_414e99);
            }
        }
        else
        {
            int64_t rcx_3;
            int64_t rdx_3;
            uint64_t r8_1;
            ssize_t r9_1;
            rcx_3 = __printf_chk(1, dcgettext(nullptr, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            char* rax_17 = setlocale(5, nullptr, rdx_3, rcx_3, r8_1, r9_1, var_88, "test invocation");
            if (rax_17 == 0)
            {
                goto label_402a98;
            }
            if (strncmp(rax_17, &data_414f20, 3) == 0)
            {
                goto label_402a98;
            }
        }
        if ((((rbp_1 == 0 && rax_25 != 0) && rax_26 != 0) || rbp_1 != 0))
        {
            __printf_chk(1, dcgettext(nullptr, "Report %s translation bugs to <h…", 5), &data_414e99);
        label_402a98:
            r12_1 = " invocation";
            __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/cor…", &data_414e99);
            if (rbp_1 != &data_414e99)
            {
                r12_1 = &data_41505a;
            }
        }
        __printf_chk(1, dcgettext(nullptr, "or available locally via: info '…", 5), rbp_1, r12_1);
    }
    exit(arg1);
    /* no return */
}

int64_t sub_402bb0(int64_t arg1)
{
    data_61b7b0 = arg1;
}

int64_t sub_402bc0(char arg1)
{
    data_61b7a8 = arg1;
}

void sub_402bd0(void* arg1)
{
    int32_t rax = sub_414790(stdout);
    int32_t* rax_1;
    if (rax != 0)
    {
        rax_1 = __errno_location();
        if ((data_61b7a8 == 0 || (data_61b7a8 != 0 && *rax_1 != 0x20)))
        {
            char* rax_3 = dcgettext(nullptr, "write error", 5);
            int64_t rdi_2 = data_61b7b0;
            if (rdi_2 == 0)
            {
                error(0, *rax_1, "%s", rax_3);
            }
            else
            {
                error(0, *rax_1, "%s: %s", sub_404870(rdi_2), rax_3);
            }
        }
    }
    if (((rax == 0 || ((rax != 0 && data_61b7a8 != 0) && *rax_1 == 0x20)) && sub_414790(stderr) == 0))
    {
        return;
    }
    _exit(data_61b2b0);
    /* no return */
}

int64_t sub_402c70(int32_t arg1, int64_t arg2, off64_t arg3, int32_t arg4)
{
    /* tailcall */
    return posix_fadvise(arg1, arg2, arg3, arg4);
}

void sub_402c80(FILE* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        return;
    }
    /* tailcall */
    return posix_fadvise(fileno(arg1), 0, 0, arg2);
}

int64_t sub_402cb0(int128_t* arg1)
{
    arg1[1] = 0;
    *arg1 = 0;
}

int64_t* sub_402cc0(int64_t* arg1, char* arg2, char arg3)
{
    int32_t r13 = arg3;
    char* r14 = arg1[2];
    char var_3d = r13;
    void* rsi_1 = (*arg1 + r14);
    char* r15 = r14;
    if ((*arg2 & 0x10) == 0)
    {
        while (true)
        {
            char* rdx_1 = *(arg2 + 8);
            int32_t rax_3;
            int32_t rbp_1;
            if (rdx_1 < *(arg2 + 0x10))
            {
                *(arg2 + 8) = &rdx_1[1];
                rbp_1 = *rdx_1;
            }
            else
            {
                rax_3 = __uflow(arg2);
                rbp_1 = rax_3;
            }
            char* rax_2;
            void* rax_7;
            char rdx;
            if ((rdx_1 < *(arg2 + 0x10) || (rdx_1 >= *(arg2 + 0x10) && rax_3 != 0xffffffff)))
            {
                rdx = rbp_1;
                if (r15 == rsi_1)
                {
                    goto label_402d6d;
                }
                rax_2 = r15;
            label_402d15:
                r15 = &rax_2[1];
                *rax_2 = rdx;
                if (rbp_1 != r13)
                {
                    continue;
                }
                else
                {
                label_402dd6:
                    rax_7 = r15;
                }
            }
            if ((rdx_1 >= *(arg2 + 0x10) && rax_3 == 0xffffffff))
            {
                if (r14 == r15)
                {
                    break;
                }
                if ((*arg2 & 0x20) != 0)
                {
                    break;
                }
                if (r15[-1] == var_3d)
                {
                    goto label_402dd6;
                }
                rbp_1 = r13;
                if (r15 == rsi_1)
                {
                    rdx = var_3d;
                label_402d6d:
                    void* var_48;
                    var_48 = rdx;
                    int64_t r15_1 = *arg1;
                    char* rax_5 = sub_405140(r14, arg1);
                    void* rsi_3 = *arg1;
                    rdx = var_48;
                    r14 = rax_5;
                    rax_2 = &rax_5[r15_1];
                    arg1[2] = r14;
                    rsi_1 = (rsi_3 + r14);
                    goto label_402d15;
                }
                rax_7 = &r15[1];
                *r15 = arg3;
            }
            arg1[1] = (rax_7 - r14);
            return arg1;
        }
    }
    return 0;
}

int64_t sub_402de0(int64_t* arg1, char* arg2)
{
    /* tailcall */
    return sub_402cc0(arg1, arg2, 0xa);
}

int64_t sub_402df0(void* arg1)
{
    /* tailcall */
    return free(*(arg1 + 0x10));
}

char* sub_402e00(char* arg1)
{
    if (arg1 == 0)
    {
        fwrite("A NULL argv[0] was passed throug…", 1, 0x37, stderr);
        abort();
        /* no return */
    }
    void* rbx = arg1;
    char* rax = strrchr(arg1, 0x2f);
    if (rax != 0)
    {
        void* r8_1 = &rax[1];
        int64_t rdx_2 = (r8_1 - rbx);
        bool c_1 = rdx_2 < 6;
        bool z_1 = rdx_2 == 6;
        if ((!(z_1 || (rdx_2 - 6) < 0 != (rdx_2 - 6))))
        {
            void* rsi_1 = &rax[-6];
            void* const rdi = "/.libs/";
            int64_t rcx_1 = 7;
            while (rcx_1 != 0)
            {
                char temp0_1 = *rsi_1;
                char temp1_1 = *rdi;
                c_1 = temp0_1 < temp1_1;
                z_1 = temp0_1 == temp1_1;
                rsi_1 = (rsi_1 + 1);
                rdi = (rdi + 1);
                rcx_1 = (rcx_1 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
            rdx_2 = ((!z_1) && (!c_1));
            rdx_2 = (rdx_2 - 0);
            bool c_2 = false;
            bool z_2 = (rdx_2 & rdx_2) == 0;
            if (z_2)
            {
                void* const rdi_1 = &data_415bb8;
                int64_t rcx_2 = 3;
                void* rsi_2 = r8_1;
                rbx = r8_1;
                while (rcx_2 != 0)
                {
                    char temp2_1 = *rsi_2;
                    char temp3_1 = *rdi_1;
                    c_2 = temp2_1 < temp3_1;
                    z_2 = temp2_1 == temp3_1;
                    rsi_2 = (rsi_2 + 1);
                    rdi_1 = (rdi_1 + 1);
                    rcx_2 = (rcx_2 - 1);
                    if ((!z_2))
                    {
                        break;
                    }
                }
                rdx_2 = ((!z_2) && (!c_2));
                rdx_2 = (rdx_2 - 0);
                if (rdx_2 == 0)
                {
                    rbx = &rax[4];
                    program_invocation_short_name = rbx;
                }
            }
        }
    }
    data_61b7b8 = rbx;
    __progname_full = rbx;
    return rax;
}

char* sub_402ea0(char* arg1, int32_t arg2)
{
    char* rax = dcgettext(nullptr, arg1, 5);
    char* rbx = rax;
    if (arg1 == rax)
    {
        char* rax_2 = sub_414850();
        char rdx_2 = (*rax_2 & 0xdf);
        if (rdx_2 != 0x55)
        {
            if (rdx_2 != 0x47)
            {
            label_402f81:
                void* const rbx_1 = &data_415bbc;
                if (arg2 != 9)
                {
                    rbx_1 = "'";
                }
                return rbx_1;
            }
            if ((rax_2[1] & 0xdf) != 0x42)
            {
                goto label_402f81;
            }
            if (rax_2[2] != 0x31)
            {
                goto label_402f81;
            }
            if (rax_2[3] != 0x38)
            {
                goto label_402f81;
            }
            if (rax_2[4] != 0x30)
            {
                goto label_402f81;
            }
            if (rax_2[5] != 0x33)
            {
                goto label_402f81;
            }
            if (rax_2[6] != 0x30)
            {
                goto label_402f81;
            }
            if (rax_2[7] != 0)
            {
                goto label_402f81;
            }
            bool cond:2_1 = *rbx != 0x60;
            rbx = &data_415bc5;
            if (cond:2_1)
            {
                rbx = &data_415bc2;
            }
        }
        else
        {
            if ((rax_2[1] & 0xdf) != 0x54)
            {
                goto label_402f81;
            }
            if ((rax_2[2] & 0xdf) != 0x46)
            {
                goto label_402f81;
            }
            if (rax_2[3] != 0x2d)
            {
                goto label_402f81;
            }
            if (rax_2[4] != 0x38)
            {
                goto label_402f81;
            }
            if (rax_2[5] != 0)
            {
                goto label_402f81;
            }
            bool cond:1_1 = *rbx != 0x60;
            rbx = &data_415bc9;
            if (cond:1_1)
            {
                rbx = &data_415bbe;
            }
        }
    }
    return rbx;
}

int64_t sub_402fa0(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
    uint32_t arg5, int32_t arg6, int64_t arg7, char* arg8, char* arg9)
{
    char* r15 = arg1;
    uint64_t r14 = arg2;
    uint32_t r13 = arg5;
    uint64_t rax;
    uint64_t rdx;
    rax = __ctype_get_mb_cur_max();
    int32_t rbp_1 = (arg6 & 2);
    bool var_5c = rbp_1 != 0;
    bool cond:1 = r13 == 0xa;
    if (r13 > 0xa)
    {
        abort();
        /* no return */
    }
    uint64_t r11 = arg4;
    uint64_t var_c0;
    char var_a9;
    uint64_t var_a0_1;
    char const* const var_78_1;
    uint64_t var_70;
    char var_5b_1;
    uint64_t rax_1;
    int64_t rbx_1;
    uint32_t r10;
    if ((r13 == 1 || (r13 == 4 && rbp_1 != 0)))
    {
        var_a9 = 1;
        r10 = 0;
        rbx_1 = 0;
        r13 = 2;
        var_5b_1 = 0;
        var_70 = 0;
        var_5c = true;
        var_c0 = 0;
        var_a0_1 = 1;
        var_78_1 = "'";
    label_403038:
        while (true)
        {
            uint64_t r9 = r11;
            int64_t r12_1 = 0;
            uint32_t r11_1 = r13;
            while (true)
            {
                r13 = r9 != r12_1;
                if (r9 == -1)
                {
                    r13 = *(arg3 + r12_1) != 0;
                }
                uint32_t r13_1;
                if (r13 == 0)
                {
                    r11 = r9;
                    rdx = r11_1 == 2;
                    if ((rbx_1 == 0 && (var_5c & rdx) != 0))
                    {
                        r13_1 = 2;
                    label_4033ac:
                        if (var_c0 != 0)
                        {
                            r13_1 = 4;
                        }
                        goto label_4033f4;
                    }
                    rax_1 = (var_5c ^ 1);
                    rdx = (rdx & rax_1);
                    if (rdx == 0)
                    {
                        rdx = rax_1;
                    }
                    else if (var_5b_1 != 0)
                    {
                        if (var_a9 != 0)
                        {
                            rbx_1 = sub_402fa0(r15, var_70, arg3, r11, 5, arg6, arg7, arg8, arg9);
                        }
                        else
                        {
                            rax_1 = r14 == 0;
                            rdx = var_70 != 0;
                            rax_1 = (rax_1 & rdx);
                            if (rax_1 != 0)
                            {
                                r14 = var_70;
                                break;
                            }
                            rdx = var_5b_1;
                        }
                    }
                    if (((rdx == 0 || (rdx != 0 && var_5b_1 == 0)) || ((rdx != 0 && var_5b_1 != 0) && var_a9 == 0)))
                    {
                        if ((var_78_1 != 0 && rdx != 0))
                        {
                            char const rdx_17 = *var_78_1;
                            if (rdx_17 != 0)
                            {
                                void* rax_51 = (var_78_1 - rbx_1);
                                do
                                {
                                    if (r14 > rbx_1)
                                    {
                                        r15[rbx_1] = rdx_17;
                                    }
                                    rbx_1 = (rbx_1 + 1);
                                    rdx_17 = *(rax_51 + rbx_1);
                                } while (rdx_17 != 0);
                            }
                        }
                        if (r14 > rbx_1)
                        {
                            r15[rbx_1] = 0;
                        }
                    }
                    goto label_40340b;
                }
                rax_1 = r11_1 != 2;
                rax_1 = (rax_1 & var_c0);
                char* r8 = (arg3 + r12_1);
                uint64_t var_b8;
                var_b8 = rax_1;
                uint32_t rax_8;
                uint64_t rax_12;
                char rax_14;
                int32_t rcx_2;
                uint64_t rbp_3;
                if (rax_1 == 0)
                {
                    rbp_3 = *r8;
                    if (rbp_3 > 0x7e)
                    {
                        goto label_403545;
                    }
                    switch (rbp_3)
                    {
                        case 0:
                        {
                            if (var_c0 == 0)
                            {
                                if ((arg6 & 1) != 0)
                                {
                                    r12_1 = (r12_1 + 1);
                                    continue;
                                }
                                else
                                {
                                    var_b8 = 0;
                                    rdx = r11_1 == 2;
                                    r13 = 0;
                                    rbp_3 = 0;
                                }
                                goto label_403195;
                            }
                            goto label_403480;
                        }
                        case 1:
                        case 2:
                        case 3:
                        case 4:
                        case 5:
                        case 6:
                        case 0xe:
                        case 0xf:
                        case 0x10:
                        case 0x11:
                        case 0x12:
                        case 0x13:
                        case 0x14:
                        case 0x15:
                        case 0x16:
                        case 0x17:
                        case 0x18:
                        case 0x19:
                        case 0x1a:
                        case 0x1b:
                        case 0x1c:
                        case 0x1d:
                        case 0x1e:
                        case 0x1f:
                        case 0x40:
                        {
                            goto label_403545;
                        }
                        case 7:
                        {
                            rbp_3 = 7;
                            rcx_2 = 0x61;
                            rdx = r11_1 == 2;
                            goto label_403370;
                        }
                        case 8:
                        {
                            rbp_3 = 8;
                            rcx_2 = 0x62;
                            rdx = r11_1 == 2;
                        label_403370:
                            if (var_c0 == 0)
                            {
                                goto label_40337b;
                            }
                            rbp_3 = rcx_2;
                            r13 = 0;
                        label_4031d7:
                            if (var_5c == 0)
                            {
                                goto label_4031e8;
                            }
                        label_4033a0:
                            r13_1 = r11_1;
                            rax_14 = rdx;
                            r11 = r9;
                            goto label_4033a8;
                        }
                        case 9:
                        {
                            rbp_3 = 9;
                            rcx_2 = 0x74;
                            goto label_4035db;
                        }
                        case 0xa:
                        {
                            rbp_3 = 0xa;
                            rcx_2 = 0x6e;
                        label_4035db:
                            rdx = r11_1 == 2;
                            bool rax_26 = (var_5c & rdx);
                            var_b8 = rax_26;
                            if (rax_26 != 0)
                            {
                            label_4035ea:
                                r11 = r9;
                                r13_1 = 2;
                                goto label_4033ac;
                            }
                            goto label_403370;
                        }
                        case 0xb:
                        {
                            rbp_3 = 0xb;
                            rcx_2 = 0x76;
                            rdx = r11_1 == 2;
                            goto label_403370;
                        }
                        case 0xc:
                        {
                            rbp_3 = 0xc;
                            rcx_2 = 0x66;
                            rdx = r11_1 == 2;
                            goto label_403370;
                        }
                        case 0xd:
                        {
                            rbp_3 = 0xd;
                            rcx_2 = 0x72;
                            goto label_4035db;
                        }
                        case 0x20:
                        {
                            rbp_3 = 0x20;
                            rdx = r11_1 == 2;
                            goto label_403176;
                        }
                        case 0x21:
                        case 0x22:
                        case 0x24:
                        case 0x26:
                        case 0x28:
                        case 0x29:
                        case 0x2a:
                        case 0x3b:
                        case 0x3c:
                        case 0x3d:
                        case 0x3e:
                        case 0x5b:
                        case 0x5e:
                        case 0x60:
                        case 0x7c:
                        {
                            rdx = r11_1 == 2;
                            r13 = 0;
                        label_403176:
                            if (var_5c == 0)
                            {
                                goto label_403195;
                            }
                            if (rdx == 0)
                            {
                                goto label_403195;
                            }
                            goto label_4035ea;
                        }
                        case 0x23:
                        case 0x7e:
                        {
                            rdx = r11_1 == 2;
                        label_40316d:
                            if (r12_1 != 0)
                            {
                                goto label_40337b;
                            }
                            goto label_403176;
                        }
                        case 0x25:
                        case 0x2b:
                        case 0x2c:
                        case 0x2d:
                        case 0x2e:
                        case 0x2f:
                        case 0x30:
                        case 0x31:
                        case 0x32:
                        case 0x33:
                        case 0x34:
                        case 0x35:
                        case 0x36:
                        case 0x37:
                        case 0x38:
                        case 0x39:
                        case 0x3a:
                        case 0x41:
                        case 0x42:
                        case 0x43:
                        case 0x44:
                        case 0x45:
                        case 0x46:
                        case 0x47:
                        case 0x48:
                        case 0x49:
                        case 0x4a:
                        case 0x4b:
                        case 0x4c:
                        case 0x4d:
                        case 0x4e:
                        case 0x4f:
                        case 0x50:
                        case 0x51:
                        case 0x52:
                        case 0x53:
                        case 0x54:
                        case 0x55:
                        case 0x56:
                        case 0x57:
                        case 0x58:
                        case 0x59:
                        case 0x5a:
                        case 0x5d:
                        case 0x5f:
                        case 0x61:
                        case 0x62:
                        case 0x63:
                        case 0x64:
                        case 0x65:
                        case 0x66:
                        case 0x67:
                        case 0x68:
                        case 0x69:
                        case 0x6a:
                        case 0x6b:
                        case 0x6c:
                        case 0x6d:
                        case 0x6e:
                        case 0x6f:
                        case 0x70:
                        case 0x71:
                        case 0x72:
                        case 0x73:
                        case 0x74:
                        case 0x75:
                        case 0x76:
                        case 0x77:
                        case 0x78:
                        case 0x79:
                        case 0x7a:
                        {
                        label_4035a0:
                            rdx = r11_1 == 2;
                        label_403195:
                            rax_8 = ((((var_c0 ^ 1) | rdx) ^ 1) | var_5c);
                            if (rax_8 == 0)
                            {
                                goto label_40329c;
                            }
                            goto label_40319f;
                        }
                        case 0x27:
                        {
                            goto label_40331d;
                        }
                        case 0x3f:
                        {
                            goto label_4032ed;
                        }
                        case 0x5c:
                        {
                            if (r11_1 != 2)
                            {
                                goto label_40334a;
                            }
                            if (var_5c != 0)
                            {
                                goto label_4040dd;
                            }
                            r12_1 = (r12_1 + 1);
                            rax_12 = r10;
                            r13 = 0;
                            rbp_3 = 0x5c;
                            goto label_4032b4;
                        }
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_403149;
                        }
                    }
                }
                else
                {
                    char var_98;
                    uint64_t var_90;
                    uint32_t var_88;
                    char rax_27;
                    char rax_28;
                    if (var_a0_1 != 0)
                    {
                        int64_t rbp_2 = (r12_1 + var_a0_1);
                        if ((r9 == -1 && var_a0_1 > 1))
                        {
                            var_90 = r10;
                            var_98 = r8;
                            uint64_t rax_3;
                            rax_3 = strlen(arg3);
                            r10 = var_90;
                            r8 = var_98;
                            r9 = rax_3;
                        }
                        if (rbp_2 > r9)
                        {
                            goto label_403740;
                        }
                        uint64_t var_80;
                        var_80 = r11_1;
                        var_88 = r9;
                        var_90 = r10;
                        var_98 = r8;
                        int32_t rax_4;
                        rax_4 = memcmp(r8, var_78_1, var_a0_1);
                        r8 = var_98;
                        r10 = var_90;
                        r9 = var_88;
                        r11_1 = var_80;
                        if (rax_4 != 0)
                        {
                            goto label_403740;
                        }
                        if (var_5c != 0)
                        {
                        label_404090:
                            r13_1 = r11_1;
                            r11 = r9;
                        label_4033f4:
                            rbx_1 = sub_402fa0(r15, r14, arg3, r11, r13_1, (arg6 & 0xfffffffd), 0, arg8, arg9);
                        label_40340b:
                            return rbx_1;
                        }
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                            goto label_403545;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                                goto label_403497;
                            }
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 0xe:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            case 0x14:
                            case 0x15:
                            case 0x16:
                            case 0x17:
                            case 0x18:
                            case 0x19:
                            case 0x1a:
                            case 0x1b:
                            case 0x1c:
                            case 0x1d:
                            case 0x1e:
                            case 0x1f:
                            case 0x40:
                            {
                                goto label_403545;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                            label_403460:
                                r13 = 0;
                                goto label_40321b;
                            }
                            case 8:
                            {
                                rdx = 0;
                                r13 = 0;
                                rbp_3 = 0x62;
                            label_4031e8:
                                uint32_t rax_10;
                                rax_10 = ((r10 ^ 1) & rdx);
                                if (rax_10 != 0)
                                {
                                    if (r14 > rbx_1)
                                    {
                                        r15[rbx_1] = 0x27;
                                    }
                                    if ((rbx_1 + 1) < r14)
                                    {
                                        r15[(rbx_1 + 1)] = 0x24;
                                    }
                                    if ((rbx_1 + 2) < r14)
                                    {
                                        r15[(rbx_1 + 2)] = 0x27;
                                    }
                                    rbx_1 = (rbx_1 + 3);
                                    r10 = rax_10;
                                }
                            label_40321b:
                                if (r14 <= rbx_1)
                                {
                                    goto label_403225;
                                }
                                r15[rbx_1] = 0x5c;
                            label_403225:
                                rbx_1 = (rbx_1 + 1);
                                r12_1 = (r12_1 + 1);
                                goto label_40322d;
                            }
                            case 9:
                            {
                                goto label_403410;
                            }
                            case 0xa:
                            {
                                goto label_403388;
                            }
                            case 0xb:
                            {
                                goto label_403470;
                            }
                            case 0xc:
                            {
                                goto label_403450;
                            }
                            case 0xd:
                            {
                                goto label_403439;
                            }
                            case 0x20:
                            {
                                rax_27 = var_b8;
                                goto label_40379a;
                            }
                            case 0x21:
                            case 0x22:
                            case 0x24:
                            case 0x26:
                            case 0x28:
                            case 0x29:
                            case 0x2a:
                            case 0x3b:
                            case 0x3c:
                            case 0x3d:
                            case 0x3e:
                            case 0x5b:
                            case 0x5e:
                            case 0x60:
                            case 0x7c:
                            {
                                goto label_403425;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = var_b8;
                                goto label_40377a;
                            }
                            case 0x25:
                            case 0x2b:
                            case 0x2c:
                            case 0x2d:
                            case 0x2e:
                            case 0x2f:
                            case 0x30:
                            case 0x31:
                            case 0x32:
                            case 0x33:
                            case 0x34:
                            case 0x35:
                            case 0x36:
                            case 0x37:
                            case 0x38:
                            case 0x39:
                            case 0x3a:
                            case 0x41:
                            case 0x42:
                            case 0x43:
                            case 0x44:
                            case 0x45:
                            case 0x46:
                            case 0x47:
                            case 0x48:
                            case 0x49:
                            case 0x4a:
                            case 0x4b:
                            case 0x4c:
                            case 0x4d:
                            case 0x4e:
                            case 0x4f:
                            case 0x50:
                            case 0x51:
                            case 0x52:
                            case 0x53:
                            case 0x54:
                            case 0x55:
                            case 0x56:
                            case 0x57:
                            case 0x58:
                            case 0x59:
                            case 0x5a:
                            case 0x5d:
                            case 0x5f:
                            case 0x61:
                            case 0x62:
                            case 0x63:
                            case 0x64:
                            case 0x65:
                            case 0x66:
                            case 0x67:
                            case 0x68:
                            case 0x69:
                            case 0x6a:
                            case 0x6b:
                            case 0x6c:
                            case 0x6d:
                            case 0x6e:
                            case 0x6f:
                            case 0x70:
                            case 0x71:
                            case 0x72:
                            case 0x73:
                            case 0x74:
                            case 0x75:
                            case 0x76:
                            case 0x77:
                            case 0x78:
                            case 0x79:
                            case 0x7a:
                            {
                                rax_27 = var_b8;
                                goto label_403762;
                            }
                            case 0x27:
                            {
                                goto label_40331d;
                            }
                            case 0x3f:
                            {
                                goto label_4032ed;
                            }
                            case 0x5c:
                            {
                                goto label_40334a;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                goto label_403149;
                            }
                        }
                    }
                    else
                    {
                    label_403740:
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                        label_403540:
                            var_b8 = 0;
                        label_403545:
                            uint64_t rdi_4;
                            if (rax == 1)
                            {
                                r10 = r10;
                                rdi_4 = 1;
                                rax_12 = (*__ctype_b_loc()[rbp_3] & 0x4000);
                                r13 = rax_12 != 0;
                                rdx = rax_12 == 0;
                                rdx = (rdx & var_c0);
                            label_403594:
                                if (rdx == 0)
                                {
                                    goto label_4035a0;
                                }
                                rdx = var_c0;
                                r13 = 0;
                            label_403a91:
                                var_98 = r13;
                                int32_t rsi_7 = 0;
                                int64_t rcx_11 = (rdi_4 + r12_1);
                                char rdi_9 = var_b8;
                                while (true)
                                {
                                    if (rdx != 0)
                                    {
                                        rax_12 = r11_1 == 2;
                                        if (var_5c != 0)
                                        {
                                            break;
                                        }
                                        rax_12 = (rax_12 & (r10 ^ 1));
                                        if (rax_12 != 0)
                                        {
                                            if (r14 > rbx_1)
                                            {
                                                r15[rbx_1] = 0x27;
                                            }
                                            if (r14 > (rbx_1 + 1))
                                            {
                                                r15[(rbx_1 + 1)] = 0x24;
                                            }
                                            if (r14 > (rbx_1 + 2))
                                            {
                                                r15[(rbx_1 + 2)] = 0x27;
                                            }
                                            rbx_1 = (rbx_1 + 3);
                                            r10 = rax_12;
                                        }
                                        if (r14 > rbx_1)
                                        {
                                            r15[rbx_1] = 0x5c;
                                        }
                                        if (r14 > (rbx_1 + 1))
                                        {
                                            r15[(rbx_1 + 1)] = ((rbp_3 >> 6) + 0x30);
                                        }
                                        if (r14 > (rbx_1 + 2))
                                        {
                                            int32_t rax_40;
                                            rax_40 = (rbp_3 >> 3);
                                            r15[(rbx_1 + 2)] = ((rax_40 & 7) + 0x30);
                                        }
                                        r12_1 = (r12_1 + 1);
                                        rbx_1 = (rbx_1 + 3);
                                        rbp_3 = ((rbp_3 & 7) + 0x30);
                                        if (r12_1 >= rcx_11)
                                        {
                                            break;
                                        }
                                        rsi_7 = rdx;
                                    }
                                    else
                                    {
                                        rax_12 = ((rsi_7 ^ 1) & r10);
                                        if (rdi_9 != 0)
                                        {
                                            if (r14 > rbx_1)
                                            {
                                                r15[rbx_1] = 0x5c;
                                            }
                                            rbx_1 = (rbx_1 + 1);
                                        }
                                        r12_1 = (r12_1 + 1);
                                        if (r12_1 >= rcx_11)
                                        {
                                            break;
                                        }
                                        if (rax_12 == 0)
                                        {
                                            rdi_9 = 0;
                                        }
                                        else
                                        {
                                            if (r14 > rbx_1)
                                            {
                                                r15[rbx_1] = 0x27;
                                            }
                                            if (r14 > (rbx_1 + 1))
                                            {
                                                r15[(rbx_1 + 1)] = 0x27;
                                            }
                                            rbx_1 = (rbx_1 + 2);
                                            rdi_9 = 0;
                                            r10 = 0;
                                        }
                                    }
                                    if (r14 > rbx_1)
                                    {
                                        r15[rbx_1] = rbp_3;
                                    }
                                    rbp_3 = *(arg3 + r12_1);
                                    rbx_1 = (rbx_1 + 1);
                                }
                                if ((rdx == 0 && r12_1 >= rcx_11))
                                {
                                    r13 = var_98;
                                    goto label_4032b4;
                                }
                                if ((rdx != 0 && var_5c != 0))
                                {
                                    r13_1 = r11_1;
                                    var_c0 = rax_12;
                                    r11 = r9;
                                    goto label_4033ac;
                                }
                                r13 = var_98;
                                goto label_40322d;
                            }
                            mbstate_t var_40;
                            var_40.__count = 0;
                            var_40.__value = 0;
                            if (r9 == -1)
                            {
                                var_90 = r10;
                                var_98 = r8;
                                r10 = var_90;
                                r8 = var_98;
                                r9 = strlen(arg3);
                            }
                            uint64_t rbx_2 = 0;
                            char var_5a_1 = r10;
                            char var_59_1 = rbp_3;
                            var_88 = r15;
                            var_98 = r9;
                            var_90 = r11_1;
                            while (true)
                            {
                                int64_t r15_1 = (r12_1 + rbx_2);
                                char* rbp_4 = (arg3 + r15_1);
                                uint32_t var_44;
                                rax_12 = sub_4069d0(&var_44, rbp_4, (var_98 - r15_1), &var_40);
                                if (rax_12 != 0)
                                {
                                    if (rax_12 == -1)
                                    {
                                        rdi_4 = rbx_2;
                                        rbp_3 = var_59_1;
                                        r13 = 0;
                                        r10 = var_5a_1;
                                        r15 = var_88;
                                        r9 = var_98;
                                        r11_1 = var_90;
                                        rdx = var_c0;
                                        break;
                                    }
                                    if (rax_12 == -2)
                                    {
                                        r9 = var_98;
                                        rax_12 = rbx_2;
                                        rdi_4 = rbx_2;
                                        r10 = var_5a_1;
                                        rbp_3 = var_59_1;
                                        r15 = var_88;
                                        r11_1 = var_90;
                                        if ((r15_1 < r9 && *rbp_4 != 0))
                                        {
                                            do
                                            {
                                                rax_12 = (rax_12 + 1);
                                                if ((r12_1 + rax_12) >= r9)
                                                {
                                                    break;
                                                }
                                            } while (r8[rax_12] != 0);
                                            rdi_4 = rax_12;
                                        }
                                        rdx = var_c0;
                                        r13 = 0;
                                        break;
                                    }
                                    if ((var_90 == 2 && (var_5c != 0 && rax_12 != 1)))
                                    {
                                        char* rax_34 = ((arg3 + r15_1) + 1);
                                        int64_t rsi_6 = ((arg3 + rax_12) + r15_1);
                                        char rcx_9;
                                        do
                                        {
                                            rcx_9 = (*rax_34 - 0x5b);
                                            if ((rcx_9 <= 0x21 && ((1 << rcx_9) & 0x20000002b) != 0))
                                            {
                                                break;
                                            }
                                            rax_34 = &rax_34[1];
                                        } while (rsi_6 != rax_34);
                                        if ((rcx_9 <= 0x21 && ((1 << rcx_9) & 0x20000002b) != 0))
                                        {
                                            r15 = var_88;
                                            r13_1 = 2;
                                            r11 = var_98;
                                            goto label_4033ac;
                                        }
                                    }
                                    mbstate_t* rdi_7 = &var_40;
                                    if (iswprint(var_44) == 0)
                                    {
                                        r13 = 0;
                                    }
                                    rbx_2 = (rbx_2 + rax_12);
                                    if (mbsinit(rdi_7) == 0)
                                    {
                                        continue;
                                    }
                                }
                                rdi_4 = rbx_2;
                                rbp_3 = var_59_1;
                                r10 = var_5a_1;
                                r15 = var_88;
                                r9 = var_98;
                                r11_1 = var_90;
                                rdx = ((r13 ^ 1) & var_c0);
                                break;
                            }
                            if (rdi_4 > 1)
                            {
                                goto label_403a91;
                            }
                            goto label_403594;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                            label_403480:
                                if (var_5c != 0)
                                {
                                    r13_1 = r11_1;
                                    r11 = r9;
                                    var_c0 = r13_1 == 2;
                                    goto label_4033ac;
                                }
                                var_b8 = 0;
                            label_403497:
                                rdx = r11_1 == 2;
                                rax_8 = ((r10 ^ 1) & rdx);
                                int64_t rcx_6;
                                if (rax_8 == 0)
                                {
                                    rcx_6 = rbx_1;
                                    if (r14 <= rbx_1)
                                    {
                                        goto label_4034e2;
                                    }
                                    rax_8 = r10;
                                label_4034da:
                                    r15[rcx_6] = 0x5c;
                                    r10 = rax_8;
                                label_4034e2:
                                    rbx_1 = (rcx_6 + 1);
                                    if (r11_1 == 2)
                                    {
                                        rax_8 = r13;
                                        rbp_3 = 0x30;
                                        r13 = 0;
                                        goto label_40329c;
                                    }
                                    rbp_3 = 0x30;
                                    if ((r12_1 + 1) < r9)
                                    {
                                        char rax_20 = *((arg3 + r12_1) + 1);
                                        var_98 = rax_20;
                                        if ((rax_20 - 0x30) <= 9)
                                        {
                                            if (r14 > rbx_1)
                                            {
                                                r15[rbx_1] = 0x30;
                                            }
                                            if (r14 > (rcx_6 + 2))
                                            {
                                                r15[(rcx_6 + 2)] = 0x30;
                                            }
                                            rbx_1 = (rcx_6 + 3);
                                            rbp_3 = 0x30;
                                        }
                                    }
                                    goto label_403523;
                                }
                                if (r14 > rbx_1)
                                {
                                    r15[rbx_1] = 0x27;
                                }
                                if (r14 > (rbx_1 + 1))
                                {
                                    r15[(rbx_1 + 1)] = 0x24;
                                }
                                if (r14 > (rbx_1 + 2))
                                {
                                    r15[(rbx_1 + 2)] = 0x27;
                                }
                                rcx_6 = (rbx_1 + 3);
                                if (r14 > rcx_6)
                                {
                                    goto label_4034da;
                                }
                                rbx_1 = (rbx_1 + 4);
                                r10 = rax_8;
                                r13 = 0;
                                rbp_3 = 0x30;
                                goto label_40329c;
                            }
                            case 1:
                            case 2:
                            case 3:
                            case 4:
                            case 5:
                            case 6:
                            case 0xe:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                            case 0x12:
                            case 0x13:
                            case 0x14:
                            case 0x15:
                            case 0x16:
                            case 0x17:
                            case 0x18:
                            case 0x19:
                            case 0x1a:
                            case 0x1b:
                            case 0x1c:
                            case 0x1d:
                            case 0x1e:
                            case 0x1f:
                            case 0x40:
                            {
                                goto label_403540;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                                goto label_403455;
                            }
                            case 8:
                            {
                                rbp_3 = 0x62;
                                goto label_40338d;
                            }
                            case 9:
                            {
                            label_403410:
                                rbp_3 = 0x74;
                                goto label_40338d;
                            }
                            case 0xa:
                            {
                            label_403388:
                                rbp_3 = 0x6e;
                            label_40338d:
                                rdx = 0;
                                r13 = 0;
                                if (var_5c != 0)
                                {
                                    goto label_4033a0;
                                }
                                goto label_4031e8;
                            }
                            case 0xb:
                            {
                            label_403470:
                                rbp_3 = 0x76;
                                goto label_403455;
                            }
                            case 0xc:
                            {
                            label_403450:
                                rbp_3 = 0x66;
                            label_403455:
                                if (var_5c == 0)
                                {
                                    goto label_403460;
                                }
                                r13_1 = r11_1;
                                rax_14 = 0;
                                r11 = r9;
                            label_4033a8:
                                var_c0 = (var_c0 & rax_14);
                                goto label_4033ac;
                            }
                            case 0xd:
                            {
                                var_b8 = 0;
                            label_403439:
                                rbp_3 = 0xd;
                                rcx_2 = 0x72;
                                rdx = r11_1 == 2;
                                goto label_403370;
                            }
                            case 0x20:
                            {
                                rax_27 = 0;
                            label_40379a:
                                rbp_3 = 0x20;
                                goto label_403762;
                            }
                            case 0x21:
                            case 0x22:
                            case 0x24:
                            case 0x26:
                            case 0x28:
                            case 0x29:
                            case 0x2a:
                            case 0x3b:
                            case 0x3c:
                            case 0x3d:
                            case 0x3e:
                            case 0x5b:
                            case 0x5e:
                            case 0x60:
                            case 0x7c:
                            {
                                var_b8 = 0;
                            label_403425:
                                rdx = 0;
                            label_40337b:
                                r13 = 0;
                                goto label_403195;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = 0;
                            label_40377a:
                                if (r12_1 == 0)
                                {
                                    r13 = var_b8;
                                    rdx = 0;
                                    var_b8 = rax_28;
                                    goto label_403195;
                                }
                                var_b8 = rax_28;
                                r13 = 0;
                            label_40319f:
                                rax_8 = 0;
                                goto label_4031a1;
                            }
                            case 0x25:
                            case 0x2b:
                            case 0x2c:
                            case 0x2d:
                            case 0x2e:
                            case 0x2f:
                            case 0x30:
                            case 0x31:
                            case 0x32:
                            case 0x33:
                            case 0x34:
                            case 0x35:
                            case 0x36:
                            case 0x37:
                            case 0x38:
                            case 0x39:
                            case 0x3a:
                            case 0x41:
                            case 0x42:
                            case 0x43:
                            case 0x44:
                            case 0x45:
                            case 0x46:
                            case 0x47:
                            case 0x48:
                            case 0x49:
                            case 0x4a:
                            case 0x4b:
                            case 0x4c:
                            case 0x4d:
                            case 0x4e:
                            case 0x4f:
                            case 0x50:
                            case 0x51:
                            case 0x52:
                            case 0x53:
                            case 0x54:
                            case 0x55:
                            case 0x56:
                            case 0x57:
                            case 0x58:
                            case 0x59:
                            case 0x5a:
                            case 0x5d:
                            case 0x5f:
                            case 0x61:
                            case 0x62:
                            case 0x63:
                            case 0x64:
                            case 0x65:
                            case 0x66:
                            case 0x67:
                            case 0x68:
                            case 0x69:
                            case 0x6a:
                            case 0x6b:
                            case 0x6c:
                            case 0x6d:
                            case 0x6e:
                            case 0x6f:
                            case 0x70:
                            case 0x71:
                            case 0x72:
                            case 0x73:
                            case 0x74:
                            case 0x75:
                            case 0x76:
                            case 0x77:
                            case 0x78:
                            case 0x79:
                            case 0x7a:
                            {
                                rax_27 = 0;
                            label_403762:
                                r13 = var_b8;
                                var_b8 = rax_27;
                                rax_8 = 0;
                                goto label_4031a1;
                            }
                            case 0x27:
                            {
                                var_b8 = 0;
                            label_40331d:
                                if (r11_1 != 2)
                                {
                                    var_5b_1 = r13;
                                    rdx = 0;
                                    rbp_3 = 0x27;
                                    goto label_403195;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_4040dd;
                                }
                                if (r14 != 0)
                                {
                                    rdx = 0;
                                }
                                if ((r14 == 0 || (r14 != 0 && var_70 != 0)))
                                {
                                    if (r14 > rbx_1)
                                    {
                                        r15[rbx_1] = 0x27;
                                    }
                                    if (r14 > (rbx_1 + 1))
                                    {
                                        r15[(rbx_1 + 1)] = 0x5c;
                                    }
                                    if (r14 <= (rbx_1 + 2))
                                    {
                                        rdx = r14;
                                        r14 = var_70;
                                    }
                                    else
                                    {
                                        rdx = r14;
                                        r15[(rbx_1 + 2)] = 0x27;
                                        r14 = var_70;
                                    }
                                }
                                var_5b_1 = r13;
                                rbx_1 = (rbx_1 + 3);
                                rax_8 = 0;
                                r10 = 0;
                                var_70 = r14;
                                rbp_3 = 0x27;
                                r14 = rdx;
                                goto label_40329c;
                            }
                            case 0x3f:
                            {
                                var_b8 = 0;
                            label_4032ed:
                                if (r11_1 == 2)
                                {
                                    if (var_5c != 0)
                                    {
                                    label_4040dd:
                                        r13_1 = r11_1;
                                        r11 = r9;
                                        goto label_4033ac;
                                    }
                                    r13 = 0;
                                    rax_8 = 0;
                                    rbp_3 = 0x3f;
                                label_40329c:
                                    rdx = r11_1 == 2;
                                    if (var_b8 != 0)
                                    {
                                        goto label_4031d7;
                                    }
                                    r12_1 = (r12_1 + 1);
                                    rax_12 = ((rax_8 ^ 1) & r10);
                                    goto label_4032b4;
                                }
                                if (r11_1 != 5)
                                {
                                    rbp_3 = 0x3f;
                                    rdx = r11_1 == 2;
                                    r13 = 0;
                                    goto label_403195;
                                }
                                if ((arg6 & 4) == 0)
                                {
                                label_403880:
                                    rdx = 0;
                                    r13 = 0;
                                    rbp_3 = 0x3f;
                                    goto label_403195;
                                }
                                int64_t rax_30 = (r12_1 + 2);
                                if (rax_30 >= r9)
                                {
                                    goto label_403880;
                                }
                                if (*((arg3 + r12_1) + 1) != 0x3f)
                                {
                                    goto label_403880;
                                }
                                rbp_3 = *(arg3 + rax_30);
                                if (rbp_3 > 0x3e)
                                {
                                    goto label_403880;
                                }
                                if ((!(TEST_BITQ(0x7000a38200000000, rbp_3))))
                                {
                                    goto label_403880;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_404090;
                                }
                                if (r14 > rbx_1)
                                {
                                    r15[rbx_1] = 0x3f;
                                }
                                if (r14 > (rbx_1 + 1))
                                {
                                    r15[(rbx_1 + 1)] = 0x22;
                                }
                                if (r14 > (rbx_1 + 2))
                                {
                                    r15[(rbx_1 + 2)] = 0x22;
                                }
                                if (r14 > (rbx_1 + 3))
                                {
                                    r15[(rbx_1 + 3)] = 0x3f;
                                }
                                rbx_1 = (rbx_1 + 4);
                                rdx = 0;
                                r13 = 0;
                                r12_1 = rax_30;
                            label_403523:
                                rax_8 = r13;
                                r13 = 0;
                                if (((var_c0 ^ 1) | rdx) != 0)
                                {
                                    goto label_40329c;
                                }
                            label_4031a1:
                                if (arg7 == 0)
                                {
                                    goto label_40329c;
                                }
                                if (((*(arg7 + ((rbp_3 >> 5) << 2)) >> rbp_3) & 1) == 0)
                                {
                                    goto label_40329c;
                                }
                                rdx = r11_1 == 2;
                                goto label_4031d7;
                            }
                            case 0x5c:
                            {
                                var_b8 = 0;
                            label_40334a:
                                rdx = (var_c0 & var_5c);
                                rbp_3 = 0x5c;
                                rcx_2 = 0x5c;
                                rax_1 = var_a0_1 != 0;
                                rdx = (rdx & rax_1);
                                if (rdx == 0)
                                {
                                    goto label_403370;
                                }
                                r12_1 = (r12_1 + 1);
                                rax_12 = r10;
                                r13 = 0;
                            label_4032b4:
                                if (rax_12 != 0)
                                {
                                    if (r14 > rbx_1)
                                    {
                                        r15[rbx_1] = 0x27;
                                    }
                                    if (r14 > (rbx_1 + 1))
                                    {
                                        r15[(rbx_1 + 1)] = 0x27;
                                    }
                                    rbx_1 = (rbx_1 + 2);
                                    r10 = 0;
                                    goto label_40322d;
                                }
                            label_40322d:
                                if (rbx_1 >= r14)
                                {
                                    goto label_403236;
                                }
                                r15[rbx_1] = rbp_3;
                            label_403236:
                                char rdi_2 = var_a9;
                                rbx_1 = (rbx_1 + 1);
                                if (r13 == 0)
                                {
                                    rdi_2 = 0;
                                }
                                var_a9 = rdi_2;
                                continue;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                var_b8 = 0;
                            label_403149:
                                rax_1 = r9 != 1;
                                if (r9 == -1)
                                {
                                    rax_1 = *(arg3 + 1) != 0;
                                }
                                rdx = r11_1 == 2;
                                if (rax_1 != 0)
                                {
                                    goto label_40337b;
                                }
                                goto label_40316d;
                            }
                        }
                    }
                }
            }
        label_403826:
            *r15 = 0x27;
            r13 = 2;
            rbx_1 = 1;
            var_78_1 = "'";
            var_a0_1 = 1;
            var_5c = false;
            var_5b_1 = rax_1;
        }
    }
    if ((r13 == 4 && rbp_1 == 0))
    {
        var_c0 = 1;
    }
    switch (r13)
    {
        case 0:
        {
            var_a9 = 1;
            r10 = 0;
            rbx_1 = 0;
            var_5b_1 = 0;
            var_70 = 0;
            var_5c = false;
            var_c0 = 0;
            var_a0_1 = 0;
            var_78_1 = nullptr;
            goto label_403038;
        }
        case 2:
        {
            if (rbp_1 != 0)
            {
                var_a9 = 1;
                r10 = 0;
                rbx_1 = 0;
                var_5b_1 = 0;
                var_70 = 0;
                var_5c = true;
                var_c0 = 0;
                var_a0_1 = 1;
                var_78_1 = "'";
                goto label_403038;
            }
            var_c0 = 0;
            break;
        }
        case 3:
        {
            var_a9 = 1;
            r10 = 0;
            rbx_1 = 0;
            r13 = 2;
            var_5b_1 = 0;
            var_70 = 0;
            var_5c = true;
            var_c0 = 1;
            var_a0_1 = 1;
            var_78_1 = "'";
            goto label_403038;
        }
        case 5:
        {
            if (rbp_1 != 0)
            {
                var_a9 = 1;
                r10 = 0;
                rbx_1 = 0;
                var_5b_1 = 0;
                var_70 = 0;
                var_5c = true;
                var_c0 = 1;
                var_a0_1 = 1;
                var_78_1 = &data_415bbc;
            }
            else
            {
                if (r14 == 0)
                {
                    var_70 = 0;
                    r10 = 0;
                    var_a9 = 1;
                    var_5b_1 = 0;
                }
                else
                {
                    *r15 = 0x22;
                    r10 = 0;
                    var_a9 = 1;
                    var_5b_1 = 0;
                    var_70 = 0;
                }
                var_5c = false;
                rbx_1 = 1;
                var_c0 = 1;
                var_a0_1 = 1;
                var_78_1 = &data_415bbc;
            }
            goto label_403038;
        }
        case 6:
        {
            var_a9 = 1;
            r10 = 0;
            rbx_1 = 0;
            r13 = 5;
            var_5b_1 = 0;
            var_70 = 0;
            var_5c = true;
            var_c0 = 1;
            var_a0_1 = 1;
            var_78_1 = &data_415bbc;
            goto label_403038;
        }
        case 7:
        {
            var_a9 = 1;
            r10 = 0;
            rbx_1 = 0;
            var_5b_1 = 0;
            var_70 = 0;
            var_5c = false;
            var_c0 = 1;
            var_a0_1 = 0;
            var_78_1 = nullptr;
            goto label_403038;
        }
        case 8:
        case 9:
        case 0xa:
        {
            if ((!cond:1))
            {
                arg8 = sub_402ea0(&data_415bcd, r13);
                arg9 = sub_402ea0("'", r13);
            }
            rbx_1 = 0;
            if (rbp_1 == 0)
            {
                char rax_49 = *arg8;
                if (rax_49 != 0)
                {
                    do
                    {
                        if (r14 > rbx_1)
                        {
                            r15[rbx_1] = rax_49;
                        }
                        rbx_1 = (rbx_1 + 1);
                        rax_49 = arg8[rbx_1];
                    } while (rax_49 != 0);
                }
            }
            uint64_t rax_46;
            rax_46 = strlen(arg9);
            var_a9 = 1;
            r10 = 0;
            var_a0_1 = rax_46;
            var_5b_1 = 0;
            var_78_1 = arg9;
            var_70 = 0;
            var_c0 = 1;
            goto label_403038;
        }
    }
    if (((r13 == 4 && rbp_1 == 0) || r13 == 2))
    {
        if (r14 != 0)
        {
            r10 = 0;
            rax_1 = 0;
            var_a9 = 1;
            var_70 = 0;
            goto label_403826;
        }
        var_a9 = 1;
        r10 = 0;
        rbx_1 = 1;
        r13 = 2;
        var_70 = 0;
        var_5b_1 = 0;
        var_5c = false;
        var_a0_1 = 1;
        var_78_1 = "'";
        goto label_403038;
    }
}

char* sub_4041d0(int32_t arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4)
{
    int64_t r15 = arg1;
    int32_t* rax = __errno_location();
    int64_t rbx = data_61b2f8;
    int32_t rax_1 = *rax;
    if (r15 < 0)
    {
        abort();
        /* no return */
    }
    if (data_61b310 <= r15)
    {
        if (r15 == 0x7fffffff)
        {
            sub_405230();
            /* no return */
        }
        int32_t r12_1 = (r15 + 1);
        int64_t rsi_1 = (r12_1 << 4);
        if (rbx == 0x61b300)
        {
            int64_t rax_9 = sub_405040(0, rsi_1);
            int128_t zmm0 = data_61b300;
            rbx = rax_9;
            data_61b2f8 = rax_9;
            *rax_9 = zmm0;
        }
        else
        {
            int64_t rax_2 = sub_405040(rbx, rsi_1);
            data_61b2f8 = rax_2;
            rbx = rax_2;
        }
        int64_t rdi_1 = data_61b310;
        memset(((rdi_1 << 4) + rbx), 0, ((r12_1 - rdi_1) << 4));
        data_61b310 = r12_1;
    }
    int64_t rbx_1 = (rbx + (r15 << 4));
    void* r15_2 = &arg4[2];
    int32_t rax_4 = (arg4[1] | 1);
    uint64_t r11 = *rbx_1;
    char* r12_2 = *(rbx_1 + 8);
    int64_t rax_5 = sub_402fa0(r12_2, r11, arg2, arg3, *arg4, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    if (r11 <= rax_5)
    {
        uint64_t rsi_3 = (rax_5 + 1);
        *rbx_1 = rsi_3;
        if (r12_2 != 0x61b7c0)
        {
            free(r12_2);
        }
        char* rax_6 = sub_404fe0(rsi_3);
        uint32_t r8_1 = *arg4;
        *(rbx_1 + 8) = rax_6;
        r12_2 = rax_6;
        sub_402fa0(rax_6, rsi_3, arg2, arg3, r8_1, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    }
    *rax = rax_1;
    return r12_2;
}

int64_t sub_404370(int64_t arg1)
{
    int64_t rbx = arg1;
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    if (rbx == 0)
    {
        rbx = 0x61b8c0;
    }
    int64_t rax_1 = sub_4051e0(rbx, 0x38);
    *rax = r12;
    return rax_1;
}

uint64_t sub_4043b0(int32_t* arg1)
{
    if (arg1 == 0)
    {
        arg1 = &data_61b8c0;
    }
    return *arg1;
}

void sub_4043c0(int32_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_61b8c0;
    }
    *arg1 = arg2;
}

uint64_t sub_4043d0(int64_t arg1, uint8_t arg2, int32_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = 0x61b8c0;
    }
    char rcx_1 = (arg2 & 0x1f);
    int32_t rsi = *((arg1 + ((arg2 >> 5) << 2)) + 8);
    uint32_t rax_3 = (rsi >> rcx_1);
    *((arg1 + ((arg2 >> 5) << 2)) + 8) = ((((arg3 ^ rax_3) & 1) << rcx_1) ^ rsi);
    return (rax_3 & 1);
}

uint64_t sub_404410(int128_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_61b8c0;
    }
    uint64_t rax = *(arg1 + 4);
    *(arg1 + 4) = arg2;
    return rax;
}

void sub_404430(int32_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = &data_61b8c0;
    }
    *arg1 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *(arg1 + 0x28) = arg2;
        *(arg1 + 0x30) = arg3;
        return;
    }
    int64_t var_8 = 0x61b8c0;
    abort();
    /* no return */
}

int64_t sub_404460(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t* arg5)
{
    int32_t* rbx = arg5;
    if (arg5 == 0)
    {
        rbx = &data_61b8c0;
    }
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    int64_t rax_2 = sub_402fa0(arg1, arg2, arg3, arg4, *rbx, rbx[1], &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = r12;
    return rax_2;
}

char* sub_4044e0(uint64_t arg1, uint64_t arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* rbx = arg4;
    if (arg4 == 0)
    {
        rbx = &data_61b8c0;
    }
    int32_t* rax = __errno_location();
    int32_t rax_1 = *rax;
    int32_t rbp;
    rbp = arg3 == 0;
    int32_t rbp_1 = (rbp | rbx[1]);
    int64_t rax_2 = sub_402fa0(nullptr, 0, arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    char* rax_3 = sub_404fe0((rax_2 + 1));
    sub_402fa0(rax_3, (rax_2 + 1), arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = rax_1;
    if (arg3 != 0)
    {
        *arg3 = rax_2;
    }
    return rax_3;
}

int64_t sub_4045d0(uint64_t arg1, uint64_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_4044e0(arg1, arg2, nullptr, arg3);
}

uint64_t sub_4045e0()
{
    uint64_t rax_2 = data_61b310;
    int64_t r12 = data_61b2f8;
    if (rax_2 > 1)
    {
        int64_t* rbx_1 = (r12 + 0x18);
        int64_t rbp_1 = ((r12 + ((rax_2 - 2) << 4)) + 0x28);
        do
        {
            int64_t rdi_1 = *rbx_1;
            rbx_1 = &rbx_1[2];
            rax_2 = free(rdi_1);
        } while (rbx_1 != rbp_1);
    }
    int64_t rdi_2 = *(r12 + 8);
    if (rdi_2 != 0x61b7c0)
    {
        rax_2 = free(rdi_2);
        *data_61b300 = 0x100;
        *(data_61b300 + 8) = 0x61b7c0;
    }
    if (r12 != 0x61b300)
    {
        rax_2 = free(r12);
        data_61b2f8 = 0x61b300;
    }
    data_61b310 = 1;
    return rax_2;
}

int64_t sub_404680(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_4041d0(arg1, arg2, -1, &data_61b8c0);
}

int64_t sub_4046a0(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_4041d0(arg1, arg2, arg3, &data_61b8c0);
}

int64_t sub_4046b0(uint64_t arg1)
{
    /* tailcall */
    return sub_4041d0(0, arg1, -1, &data_61b8c0);
}

int64_t sub_4046d0(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_4041d0(0, arg1, arg2, &data_61b8c0);
}

char* sub_4046f0(int32_t arg1, int32_t arg2, uint64_t arg3)
{
    if (arg2 == 0xa)
    {
        abort();
        /* no return */
    }
    int32_t var_48 = arg2;
    int32_t var_44 = 0;
    int64_t var_40 = 0;
    int64_t var_38 = 0;
    int64_t var_30 = 0;
    int64_t var_28 = 0;
    int64_t var_20 = 0;
    int64_t var_18 = 0;
    return sub_4041d0(arg1, arg3, -1, &var_48);
}

char* sub_404760(int32_t arg1, int32_t arg2, uint64_t arg3, uint64_t arg4)
{
    if (arg2 == 0xa)
    {
        abort();
        /* no return */
    }
    int32_t var_48 = arg2;
    int32_t var_44 = 0;
    int64_t var_40 = 0;
    int64_t var_38 = 0;
    int64_t var_30 = 0;
    int64_t var_28 = 0;
    int64_t var_20 = 0;
    int64_t var_18 = 0;
    return sub_4041d0(arg1, arg3, arg4, &var_48);
}

int64_t sub_4047d0(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_4046f0(0, arg1, arg2);
}

int64_t sub_4047e0(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_404760(0, arg1, arg2, arg3);
}

char* sub_4047f0(uint64_t arg1, uint64_t arg2, uint8_t arg3)
{
    char rcx_1 = (arg3 & 0x1f);
    int64_t var_18 = data_61b8f0;
    int128_t var_48 = data_61b8c0;
    int128_t var_38 = data_61b8d0;
    int128_t var_28 = data_61b8e0;
    int32_t rdx = *((&var_48 + ((arg3 >> 5) << 2)) + 8);
    *((&var_48 + ((arg3 >> 5) << 2)) + 8) = ((((!(rdx >> rcx_1)) & 1) << rcx_1) ^ rdx);
    return sub_4041d0(0, arg1, arg2, &var_48);
}

int64_t sub_404860(uint64_t arg1, uint8_t arg2)
{
    /* tailcall */
    return sub_4047f0(arg1, -1, arg2);
}

int64_t sub_404870(uint64_t arg1)
{
    /* tailcall */
    return sub_4047f0(arg1, -1, 0x3a);
}

int64_t sub_404890(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_4047f0(arg1, arg2, 0x3a);
}

char* sub_4048a0(int32_t arg1, int32_t arg2, uint64_t arg3)
{
    if (arg2 == 0xa)
    {
        abort();
        /* no return */
    }
    int32_t var_48 = arg2;
    int64_t var_40 = 0x400000000000000;
    int32_t var_44 = 0;
    int64_t var_38 = 0;
    int64_t var_30 = 0;
    int64_t var_28 = 0;
    int64_t var_20 = 0;
    int64_t var_18 = 0;
    return sub_4041d0(arg1, arg3, -1, &var_48);
}

char* sub_404910(int32_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, 
    uint64_t arg5)
{
    int128_t var_48 = data_61b8c0;
    int128_t var_38 = data_61b8d0;
    int128_t var_28 = data_61b8e0;
    int64_t var_18 = data_61b8f0;
    var_48 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *var_28[8] = arg2;
        int64_t var_18_1 = arg3;
        return sub_4041d0(arg1, arg4, arg5, &var_48);
    }
    abort();
    /* no return */
}

int64_t sub_404a20(uint64_t arg1)
{
    /* tailcall */
    return sub_4041d0(0, arg1, -1, &data_61b2c0);
}

int64_t sub_404a40(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
    int64_t* arg5, int64_t arg6)
{
    if (arg2 == 0)
    {
        __fprintf_chk();
    }
    else
    {
        __fprintf_chk();
    }
    __fprintf_chk(arg1, 1, "Copyright %s %d Free Software Fo…", dcgettext(nullptr, &data_41690b, 5), 0x7e1);
    fputs_unlocked(dcgettext(nullptr, "\nLicense GPLv3+: GNU GPL versio…", 5), arg1);
    int64_t var_58;
    int64_t var_50_1;
    int64_t var_48;
    int64_t var_40;
    char* rax_6;
    int64_t rbx_1;
    char* rsi_1;
    int64_t r12_1;
    int64_t r13;
    int64_t r14;
    int64_t r15_1;
    switch (arg6)
    {
        case 0:
        {
            abort();
            /* no return */
        }
        case 8:
        {
            r13 = arg5[6];
            r12_1 = arg5[5];
            r15_1 = arg5[4];
            var_48 = arg5[7];
            r14 = arg5[3];
            rbx_1 = *arg5;
            var_58 = arg5[2];
            var_50_1 = arg5[1];
            rax_6 = dcgettext(nullptr, "Written by %s, %s, %s,\n%s, %s, …", 5);
            break;
        }
        case 9:
        {
            rsi_1 = "Written by %s, %s, %s,\n%s, %s, …";
            r13 = arg5[6];
            r12_1 = arg5[5];
            var_40 = arg5[8];
            r15_1 = arg5[4];
            r14 = arg5[3];
            var_48 = arg5[7];
            var_58 = arg5[2];
            rbx_1 = *arg5;
            var_50_1 = arg5[1];
            break;
        }
        default:
            rsi_1 = "Written by %s, %s, %s,\n%s, %s, …";
            r13 = arg5[6];
            r12_1 = arg5[5];
            var_40 = arg5[8];
            r15_1 = arg5[4];
            r14 = arg5[3];
            var_48 = arg5[7];
            var_58 = arg5[2];
            rbx_1 = *arg5;
            var_50_1 = arg5[1];
    }
    int64_t var_60;
    if ((arg6 > 9 || arg6 == 9))
    {
        rax_6 = dcgettext(nullptr, rsi_1, 5);
        var_60 = var_40;
    }
    int64_t var_78_1;
    int64_t var_70_1;
    int64_t var_68_2;
    int64_t var_58_1;
    int64_t var_50;
    char* rax_19;
    char* rax_22;
    int64_t rbx_5;
    int64_t rbx_6;
    int64_t r9_9;
    int64_t r12_4;
    int64_t r13_2;
    int64_t r14_1;
    switch (arg6)
    {
        case 1:
        {
            /* tailcall */
            return __fprintf_chk(arg1, 1, dcgettext(nullptr, "Written by %s.\n", 5), *arg5);
            break;
        }
        case 2:
        {
            /* tailcall */
            return __fprintf_chk(arg1, 1, dcgettext(nullptr, "Written by %s and %s.\n", 5), *arg5, arg5[1]);
            break;
        }
        case 3:
        {
            /* tailcall */
            return __fprintf_chk(arg1, 1, dcgettext(nullptr, "Written by %s, %s, and %s.\n", 5), *arg5, arg5[1], arg5[2]);
            break;
        }
        case 4:
        {
            r14_1 = arg5[3];
            r13_2 = arg5[2];
            r12_4 = arg5[1];
            rbx_5 = *arg5;
            rax_19 = dcgettext(nullptr, "Written by %s, %s, %s,\nand %s.\n", 5);
            break;
        }
        case 5:
        {
            int64_t r15_2 = arg5[4];
            r14_1 = arg5[3];
            r13_2 = arg5[2];
            r12_4 = arg5[1];
            rbx_5 = *arg5;
            rax_19 = dcgettext(nullptr, "Written by %s, %s, %s,\n%s, and …", 5);
            var_60 = r15_2;
            break;
        }
        case 6:
        {
            int64_t r12_5 = arg5[5];
            int64_t r15_3 = arg5[4];
            int64_t r14_2 = arg5[3];
            var_58_1 = arg5[1];
            int64_t r13_3 = arg5[2];
            rbx_6 = *arg5;
            rax_22 = dcgettext(nullptr, "Written by %s, %s, %s,\n%s, %s, …", 5);
            r9_9 = r13_3;
            var_68_2 = r12_5;
            var_70_1 = r15_3;
            var_78_1 = r14_2;
            break;
        }
        case 7:
        {
            int64_t r13_4 = arg5[6];
            int64_t r12_6 = arg5[5];
            int64_t r15_4 = arg5[4];
            int64_t r14_3 = arg5[3];
            var_50 = arg5[2];
            rbx_6 = *arg5;
            var_58_1 = arg5[1];
            rax_22 = dcgettext(nullptr, "Written by %s, %s, %s,\n%s, %s, …", 5);
            var_60 = r13_4;
            var_68_2 = r12_6;
            var_70_1 = r15_4;
            var_78_1 = r14_3;
            r9_9 = var_50;
            break;
        }
        default:
            return __fprintf_chk(arg1, 1, rax_6, rbx_1, var_50_1, var_58, r14, r15_1, r12_1, r13, var_48, var_60, var_58, var_50_1, var_48, var_40);
    }
    if ((arg6 == 4 || arg6 == 5))
    {
        __fprintf_chk(arg1, 1, rax_19, rbx_5, r12_4, r13_2, r14_1, var_60);
        return r14_1;
    }
    else if ((arg6 == 6 || arg6 == 7))
    {
        return __fprintf_chk(arg1, 1, rax_22, rbx_6, var_58_1, r9_9, var_78_1, var_70_1, var_68_2, var_60, var_58_1, var_50);
    }
}

int64_t sub_404e20(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
    int64_t* arg5)
{
    int64_t r9 = 0;
    if (*arg5 != 0)
    {
        do
        {
            r9 = (r9 + 1);
        } while (arg5[r9] != 0);
    }
    /* tailcall */
    return sub_404a40(arg1, arg2, arg3, arg4, arg5, r9);
}

int64_t sub_404e40(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
    int32_t* arg5)
{
    int64_t r9 = 0;
    void var_58;
    do
    {
        int32_t rax_3 = *arg5;
        if (rax_3 <= 0x2f)
        {
            int64_t* r10_2 = (rax_3 + *(arg5 + 0x10));
            *arg5 = (rax_3 + 8);
            int64_t rax_2 = *r10_2;
            *(&var_58 + (r9 << 3)) = rax_2;
            if (rax_2 == 0)
            {
                break;
            }
        }
        else
        {
            int64_t* r10_3 = *(arg5 + 8);
            *(arg5 + 8) = &r10_3[1];
            int64_t rax_5 = *r10_3;
            *(&var_58 + (r9 << 3)) = rax_5;
            if (rax_5 == 0)
            {
                break;
            }
        }
        r9 = (r9 + 1);
    } while (r9 != 0xa);
    return sub_404a40(arg1, arg2, arg3, arg4, &var_58, r9);
}

int64_t sub_404ea0(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    char r11 = 0;
    int64_t r8;
    int64_t var_18 = r8;
    void* r10 = &arg_8;
    int32_t r8_1 = 0x20;
    void* var_98 = &arg_8;
    int64_t r9;
    int64_t var_10 = r9;
    int64_t r9_1 = 0;
    int32_t var_a0 = 0x20;
    void var_38;
    void* var_90 = &var_38;
    void var_88;
    do
    {
        if (r8_1 <= 0x2f)
        {
            uint64_t rax_1 = r8_1;
            r8_1 = (r8_1 + 8);
            r11 = 1;
            int64_t rax_3 = *(rax_1 + &var_38);
            *(&var_88 + (r9_1 << 3)) = rax_3;
            if (rax_3 == 0)
            {
                break;
            }
        }
        else
        {
            void* rax_4 = r10;
            r10 = (r10 + 8);
            int64_t rax_5 = *rax_4;
            *(&var_88 + (r9_1 << 3)) = rax_5;
            if (rax_5 == 0)
            {
                break;
            }
        }
        r9_1 = (r9_1 + 1);
    } while (r9_1 != 0xa);
    if (r11 != 0)
    {
        int32_t var_a0_1 = r8_1;
    }
    return sub_404a40(arg1, arg2, arg3, arg4, &var_88, r9_1);
}

int64_t sub_404f60()
{
    __printf_chk(1, dcgettext(nullptr, "\nReport bugs to: %s\n", 5), "bug-coreutils@gnu.org");
    __printf_chk(1, dcgettext(nullptr, "%s home page: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
    /* tailcall */
    return fputs_unlocked(dcgettext(nullptr, "General help using GNU software:…", 5), stdout);
}

int64_t sub_404fe0(uint64_t arg1)
{
    int64_t rax = malloc(arg1);
    if ((rax == 0 && arg1 != 0))
    {
        sub_405230();
        /* no return */
    }
    return rax;
}

int64_t sub_405040(int64_t arg1, uint64_t arg2)
{
    if ((arg2 == 0 && arg1 != 0))
    {
        free(arg1);
        return 0;
    }
    int64_t rax = realloc(arg1, arg2);
    if ((rax == 0 && arg2 != 0))
    {
        sub_405230();
        /* no return */
    }
    return rax;
}

int64_t sub_405140(int64_t arg1, int64_t* arg2)
{
    uint64_t rax = *arg2;
    bool cond:0_1;
    if (arg1 == 0)
    {
        cond:0_1 = rax >= 0;
        if (rax == 0)
        {
            *arg2 = 0x80;
            /* tailcall */
            return sub_405040(arg1, 0x80);
        }
    }
    if ((arg1 != 0 && rax <= 0x5555555555555553))
    {
        rax = (((rax >> 1) + rax) + 1);
    }
    if (((arg1 != 0 && rax <= 0x5555555555555553) || ((arg1 == 0 && rax != 0) && cond:0_1)))
    {
        *arg2 = rax;
        /* tailcall */
        return sub_405040(arg1, rax);
    }
    if (((arg1 != 0 && rax > 0x5555555555555553) || ((arg1 == 0 && rax != 0) && (!cond:0_1))))
    {
        uint64_t var_8 = rax;
        sub_405230();
        /* no return */
    }
}

int64_t sub_405190(uint64_t arg1)
{
    /* tailcall */
    return memset(sub_404fe0(arg1), 0, arg1);
}

int64_t sub_4051b0(uint64_t arg1, uint64_t arg2)
{
    int64_t rax;
    bool rdx;
    rdx = HIGHD((arg1 * arg2));
    rax = LOWD((arg1 * arg2));
    if ((rax >= 0 && ((arg1 * arg2) >> 0x40) != 0 == 0))
    {
        int64_t rax_1 = calloc(arg1, arg2);
        if (rax_1 != 0)
        {
            return rax_1;
        }
    }
    sub_405230();
    /* no return */
}

int64_t sub_4051e0(int64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return memcpy(sub_404fe0(arg2), arg1, arg2);
}

int64_t sub_405210(char* arg1)
{
    /* tailcall */
    return sub_4051e0(arg1, (strlen(arg1) + 1));
}

int64_t sub_405230() __noreturn
{
    error(data_61b2b0, 0, "%s", dcgettext(nullptr, "memory exhausted", 5));
    abort();
    /* no return */
}

int64_t sub_405270(char* arg1, int32_t arg2, int64_t arg3, int64_t arg4, 
    char* arg5, int64_t arg6, int32_t arg7)
{
    int32_t rbx = arg7;
    int64_t var_40;
    int32_t rax = sub_405390(arg1, nullptr, arg2, &var_40, arg5);
    int64_t rbp;
    int32_t* r14_1;
    if (rax == 0)
    {
        rbp = var_40;
        if ((rbp < arg3 || (rbp >= arg3 && rbp > arg4)))
        {
            r14_1 = __errno_location();
            if (rbp <= 0x3fffffff)
            {
                int32_t rax_6 = 0x22;
                if (rbp <= -0x40000001)
                {
                    rax_6 = 0x4b;
                }
                *r14_1 = rax_6;
                goto label_4052ca;
            }
        }
    }
    else
    {
        int32_t* rax_5 = __errno_location();
        r14_1 = rax_5;
        if (rax != 1)
        {
            if (rax == 3)
            {
                *rax_5 = 0;
            }
            goto label_4052ca;
        }
    }
    if ((rax != 0 || (rax == 0 && (rbp < arg3 || (rbp >= arg3 && rbp > arg4)))))
    {
        *r14_1 = 0x4b;
    label_4052ca:
        int64_t rax_2 = sub_404a20(arg1);
        uint64_t rsi = *r14_1;
        if (rsi == 0x16)
        {
            rsi = 0;
        }
        if (rbx == 0)
        {
            rbx = 1;
        }
        error(rbx, rsi, "%s: %s", arg6, rax_2);
        rbp = var_40;
    }
    return rbp;
}

int64_t sub_405360(char* arg1, int64_t arg2, int64_t arg3, char* arg4, 
    int64_t arg5, int32_t arg6)
{
    return sub_405270(arg1, 0xa, arg2, arg3, arg4, arg5, arg6);
}

uint64_t sub_405390(char* arg1, int64_t* arg2, int32_t arg3, int64_t* arg4, 
    char* arg5)
{
    if (arg3 > 0x24)
    {
        __assert_fail("0 <= strtol_base && strtol_base …", "lib/xstrtol.c", 0x60, "xstrtoimax");
        /* no return */
    }
    int64_t* rbx = arg2;
    void var_40;
    if (arg2 == 0)
    {
        rbx = &var_40;
    }
    int32_t* rax = __errno_location();
    *rax = 0;
    char* r15 = *rbx;
    int64_t rbp_1 = __strtol_internal(arg1, rbx, arg3, 0);
    int32_t r12_1;
    uint32_t r13_1;
    if (r15 != arg1)
    {
        int32_t rax_2 = *rax;
        if (rax_2 != 0)
        {
            r12_1 = 4;
        }
        if (rax_2 == 0x22)
        {
            r12_1 = 1;
        }
        if (rax_2 == 0)
        {
            r12_1 = 0;
        }
        if ((rax_2 == 0 || rax_2 == 0x22))
        {
            if (arg5 == 0)
            {
            label_40540b:
                *arg4 = rbp_1;
            }
            else
            {
                r13_1 = *r15;
                if (r13_1 == 0)
                {
                    goto label_40540b;
                }
                if (strchr(arg5, r13_1) != 0)
                {
                    goto label_40546d;
                }
            label_405519:
                r12_1 = (r12_1 | 2);
                *arg4 = rbp_1;
            }
        }
    }
    else
    {
        if (arg5 != 0)
        {
            r13_1 = *r15;
            r12_1 = 4;
            if (r13_1 != 0)
            {
                rbp_1 = 1;
                r12_1 = 0;
                if (strchr(arg5, r13_1) != 0)
                {
                label_40546d:
                    uint64_t rdx_1 = (r13_1 - 0x45);
                    int32_t rax_6;
                    char* rax_7;
                    char rax_8;
                    int64_t rax_14;
                    int64_t rcx;
                    int64_t rcx_1;
                    int64_t rcx_2;
                    int64_t rcx_3;
                    int64_t rcx_4;
                    int64_t rcx_5;
                    int64_t rcx_6;
                    uint64_t rdx_2;
                    int32_t rsi_2;
                    int64_t rsi_4;
                    int64_t rdi_4;
                    int64_t r9_1;
                    int64_t r9_2;
                    int64_t r9_3;
                    int64_t r9_4;
                    int64_t r9_5;
                    int64_t r9_6;
                    char r13_2;
                    if (rdx_1 <= 0x2f)
                    {
                        char var_49_1 = rdx_1;
                        if ((!(TEST_BITQ(0x814400308945, rdx_1))))
                        {
                            goto label_405476;
                        }
                        rax_7 = strchr(arg5, 0x30);
                        if (rax_7 == 0)
                        {
                            goto label_405476;
                        }
                        rax_8 = r15[1];
                        if ((rax_8 != 0x44 && rax_8 != 0x69))
                        {
                            rdx_2 = var_49_1;
                            if (rax_8 != 0x42)
                            {
                                switch (rdx_2)
                                {
                                    case 1:
                                    case 3:
                                    case 4:
                                    case 5:
                                    case 7:
                                    case 9:
                                    case 0xa:
                                    case 0xc:
                                    case 0xd:
                                    case 0xe:
                                    case 0x10:
                                    case 0x11:
                                    case 0x12:
                                    case 0x13:
                                    case 0x16:
                                    case 0x17:
                                    case 0x18:
                                    case 0x19:
                                    case 0x1a:
                                    case 0x1b:
                                    case 0x1c:
                                    case 0x1f:
                                    case 0x20:
                                    case 0x21:
                                    case 0x23:
                                    case 0x24:
                                    case 0x25:
                                    case 0x27:
                                    case 0x29:
                                    case 0x2a:
                                    case 0x2b:
                                    case 0x2c:
                                    case 0x2d:
                                    case 0x2e:
                                    {
                                        goto label_405519;
                                    }
                                    case 6:
                                    case 0x26:
                                    {
                                        rcx = 0x400;
                                        rax_14 = -0x20000000000000;
                                        break;
                                    }
                                    case 8:
                                    case 0x28:
                                    {
                                        rcx = 0x400;
                                        rdi_4 = -0x20000000000000;
                                        break;
                                    }
                                    case 0x1d:
                                    {
                                        /* nop */
                                        break;
                                    }
                                }
                                switch (rdx_2)
                                {
                                    case 0xb:
                                    {
                                        rsi_4 = 1;
                                        rcx_1 = 0x400;
                                        r9_1 = -0x20000000000000;
                                        goto label_405698;
                                    }
                                    case 0xf:
                                    case 0x2f:
                                    {
                                        rsi_4 = 1;
                                        rcx_2 = 0x400;
                                        r9_2 = -0x20000000000000;
                                        goto label_405700;
                                    }
                                    case 0x14:
                                    {
                                        rsi_4 = 1;
                                        rcx_5 = 0x400;
                                        r9_5 = -0x20000000000000;
                                        goto label_405838;
                                    }
                                    case 0x15:
                                    {
                                        rsi_4 = 1;
                                        rcx_6 = 0x400;
                                        r9_6 = -0x20000000000000;
                                        goto label_4058a0;
                                    }
                                }
                                if ((rdx_2 == 2 || rdx_2 == 0x22))
                                {
                                    rsi_4 = 1;
                                    rcx_4 = 0x400;
                                    r9_4 = -0x20000000000000;
                                    goto label_4057d0;
                                }
                                if (rdx_2 == 0)
                                {
                                    rsi_4 = 1;
                                    rcx_3 = 0x400;
                                    r9_3 = -0x20000000000000;
                                    goto label_405768;
                                }
                                if (rdx_2 == 0x1e)
                                {
                                    rsi_4 = 1;
                                    goto label_405558;
                                }
                            }
                        }
                        if (rax_8 == 0x42)
                        {
                            goto label_405a88;
                        }
                        if (rax_8 == 0x69)
                        {
                            rax_6 = 0x400;
                            int32_t rsi_6;
                            rsi_6 = r15[2] == 0x42;
                            rsi_2 = ((rsi_6 + rsi_6) + 1);
                            goto label_405480;
                        }
                        if (rax_8 == 0x44)
                        {
                        label_405a88:
                            rsi_2 = 2;
                            rax_6 = 0x3e8;
                            goto label_405480;
                        }
                    }
                    else
                    {
                    label_405476:
                        rsi_2 = 1;
                        rax_6 = 0x400;
                    label_405480:
                        r13_2 = (r13_1 - 0x42);
                        if ((r13_2 == 9 || r13_2 == 0x29))
                        {
                            rcx = rax_6;
                            rsi_4 = rsi_2;
                            int64_t rax_13;
                            int64_t rdx_3;
                            rdx_3 = HIGHD(-0x8000000000000000);
                            rax_13 = LOWD(-0x8000000000000000);
                            rax_14 = (COMBINE(rdx_3, rax_13) / rcx);
                        }
                    }
                    int64_t rax_16;
                    if (((rdx_1 > 0x2f && (r13_2 == 9 || r13_2 == 0x29)) || ((((((rdx_1 <= 0x2f && (TEST_BITQ(0x814400308945, rdx_1))) && rax_7 != 0) && rax_8 != 0x44) && rax_8 != 0x69) && rax_8 != 0x42) && (rdx_2 == 6 || rdx_2 == 0x26))))
                    {
                        if (rbp_1 < rax_14)
                        {
                            goto label_405628;
                        }
                        int64_t rax_15;
                        int64_t rdx_5;
                        rdx_5 = HIGHD(0x7fffffffffffffff);
                        rax_15 = LOWD(0x7fffffffffffffff);
                        rax_16 = (COMBINE(rdx_5, rax_15) / rcx);
                    }
                    if ((rdx_1 > 0x2f && (r13_2 == 0xb || r13_2 == 0x2b)))
                    {
                        rcx = rax_6;
                        rsi_4 = rsi_2;
                        int64_t rax_17;
                        int64_t rdx_7;
                        rdx_7 = HIGHD(-0x8000000000000000);
                        rax_17 = LOWD(-0x8000000000000000);
                        rdi_4 = (COMBINE(rdx_7, rax_17) / rcx);
                    }
                    if (((rdx_1 > 0x2f && (r13_2 == 0xb || r13_2 == 0x2b)) || ((((((rdx_1 <= 0x2f && (TEST_BITQ(0x814400308945, rdx_1))) && rax_7 != 0) && rax_8 != 0x44) && rax_8 != 0x69) && rax_8 != 0x42) && (rdx_2 == 8 || rdx_2 == 0x28))))
                    {
                        if (rbp_1 < rdi_4)
                        {
                            goto label_405628;
                        }
                        int64_t rax_19;
                        int64_t rdx_9;
                        rdx_9 = HIGHD(0x7fffffffffffffff);
                        rax_19 = LOWD(0x7fffffffffffffff);
                        rax_16 = (COMBINE(rdx_9, rax_19) / rcx);
                        if (rbp_1 > rax_16)
                        {
                            goto label_4059e0;
                        }
                        rbp_1 = (rbp_1 * rcx);
                        if (rbp_1 < rdi_4)
                        {
                            goto label_405628;
                        }
                    }
                    if (((((rdx_1 > 0x2f && (r13_2 == 9 || r13_2 == 0x29)) || ((((((rdx_1 <= 0x2f && (TEST_BITQ(0x814400308945, rdx_1))) && rax_7 != 0) && rax_8 != 0x44) && rax_8 != 0x69) && rax_8 != 0x42) && (rdx_2 == 6 || rdx_2 == 0x26))) && rbp_1 >= rax_14) || (((rdx_1 > 0x2f && (r13_2 == 0xb || r13_2 == 0x2b)) || ((((((rdx_1 <= 0x2f && (TEST_BITQ(0x814400308945, rdx_1))) && rax_7 != 0) && rax_8 != 0x44) && rax_8 != 0x69) && rax_8 != 0x42) && (rdx_2 == 8 || rdx_2 == 0x28))) && rbp_1 >= rdi_4)))
                    {
                        if (rax_16 < rbp_1)
                        {
                            goto label_4059e0;
                        }
                        rbp_1 = (rbp_1 * rcx);
                        goto label_405558;
                    }
                    if ((rdx_1 > 0x2f && r13_2 == 0x20))
                    {
                        rsi_4 = rsi_2;
                    }
                    if (((rdx_1 > 0x2f && r13_2 == 0x20) || ((((((rdx_1 <= 0x2f && (TEST_BITQ(0x814400308945, rdx_1))) && rax_7 != 0) && rax_8 != 0x44) && rax_8 != 0x69) && rax_8 != 0x42) && rdx_2 == 0x1d)))
                    {
                        if (rbp_1 < -0x40000000000000)
                        {
                            goto label_405628;
                        }
                        if (rbp_1 > 0x3fffffffffffff)
                        {
                            goto label_4059e0;
                        }
                        rbp_1 = (rbp_1 << 9);
                        goto label_405558;
                    }
                    if (rdx_1 > 0x2f)
                    {
                        switch (r13_2)
                        {
                            case 0:
                            {
                                rsi_4 = rsi_2;
                                if (rbp_1 < -0x20000000000000)
                                {
                                label_405628:
                                    rbp_1 = -0x8000000000000000;
                                    r12_1 = 1;
                                    goto label_405558;
                                }
                                if (rbp_1 <= 0x1fffffffffffff)
                                {
                                    rbp_1 = (rbp_1 << 0xa);
                                    goto label_405558;
                                }
                            label_4059e0:
                                rbp_1 = 0x7fffffffffffffff;
                                r12_1 = 1;
                                goto label_405558;
                            }
                            case 1:
                            case 2:
                            case 4:
                            case 6:
                            case 7:
                            case 8:
                            case 0xa:
                            case 0xc:
                            case 0xd:
                            case 0xf:
                            case 0x10:
                            case 0x11:
                            case 0x13:
                            case 0x14:
                            case 0x15:
                            case 0x16:
                            case 0x19:
                            case 0x1a:
                            case 0x1b:
                            case 0x1c:
                            case 0x1d:
                            case 0x1e:
                            case 0x1f:
                            case 0x22:
                            case 0x23:
                            case 0x24:
                            case 0x26:
                            case 0x27:
                            case 0x28:
                            case 0x2a:
                            case 0x2c:
                            case 0x2d:
                            case 0x2e:
                            case 0x2f:
                            case 0x30:
                            case 0x31:
                            case 0x33:
                            case 0x34:
                            {
                                goto label_405519;
                            }
                            case 0x21:
                            {
                                rsi_4 = rsi_2;
                            label_405558:
                                void* rsi_5 = &r15[rsi_4];
                                int32_t rax_12 = (r12_1 | 2);
                                *rbx = rsi_5;
                                if (*rsi_5 != 0)
                                {
                                    r12_1 = rax_12;
                                }
                                goto label_40540b;
                            }
                            case 0x35:
                            {
                                rsi_4 = rsi_2;
                                if (rbp_1 < -0x4000000000000000)
                                {
                                    goto label_405628;
                                }
                                if (rbp_1 > 0x3fffffffffffffff)
                                {
                                    goto label_4059e0;
                                }
                                rbp_1 = (rbp_1 + rbp_1);
                                goto label_405558;
                            }
                        }
                        int32_t r10_1;
                        switch (r13_2)
                        {
                            case 3:
                            {
                                rcx_3 = rax_6;
                                rsi_4 = rsi_2;
                                int64_t rax_28;
                                int64_t rdx_19;
                                rdx_19 = HIGHD(-0x8000000000000000);
                                rax_28 = LOWD(-0x8000000000000000);
                                r9_3 = (COMBINE(rdx_19, rax_28) / rcx_3);
                            label_405768:
                                int32_t rdi_7 = 6;
                                r10_1 = 0;
                                do
                                {
                                    if (rbp_1 < r9_3)
                                    {
                                        rbp_1 = -0x8000000000000000;
                                        r10_1 = 1;
                                    }
                                    else
                                    {
                                        int64_t rax_30;
                                        int64_t rdx_21;
                                        rdx_21 = HIGHD(0x7fffffffffffffff);
                                        rax_30 = LOWD(0x7fffffffffffffff);
                                        if ((COMBINE(rdx_21, rax_30) / rcx_3) < rbp_1)
                                        {
                                            rbp_1 = 0x7fffffffffffffff;
                                            r10_1 = 1;
                                        }
                                        else
                                        {
                                            rbp_1 = (rbp_1 * rcx_3);
                                        }
                                    }
                                    rdi_7 = (rdi_7 - 1);
                                } while (rdi_7 != 1);
                                goto label_4059d0;
                            }
                            case 5:
                            case 0x25:
                            {
                                rcx_4 = rax_6;
                                rsi_4 = rsi_2;
                                int64_t rax_32;
                                int64_t rdx_23;
                                rdx_23 = HIGHD(-0x8000000000000000);
                                rax_32 = LOWD(-0x8000000000000000);
                                r9_4 = (COMBINE(rdx_23, rax_32) / rcx_4);
                            label_4057d0:
                                int32_t rdi_8 = 3;
                                r10_1 = 0;
                                do
                                {
                                    if (rbp_1 < r9_4)
                                    {
                                        rbp_1 = -0x8000000000000000;
                                        r10_1 = 1;
                                    }
                                    else
                                    {
                                        int64_t rax_34;
                                        int64_t rdx_25;
                                        rdx_25 = HIGHD(0x7fffffffffffffff);
                                        rax_34 = LOWD(0x7fffffffffffffff);
                                        if ((COMBINE(rdx_25, rax_34) / rcx_4) < rbp_1)
                                        {
                                            rbp_1 = 0x7fffffffffffffff;
                                            r10_1 = 1;
                                        }
                                        else
                                        {
                                            rbp_1 = (rbp_1 * rcx_4);
                                        }
                                    }
                                    rdi_8 = (rdi_8 - 1);
                                } while (rdi_8 != 1);
                                goto label_4059d0;
                            }
                            case 0xe:
                            {
                                rcx_1 = rax_6;
                                rsi_4 = rsi_2;
                                int64_t rax_20;
                                int64_t rdx_11;
                                rdx_11 = HIGHD(-0x8000000000000000);
                                rax_20 = LOWD(-0x8000000000000000);
                                r9_1 = (COMBINE(rdx_11, rax_20) / rcx_1);
                            label_405698:
                                int32_t rdi_5 = 5;
                                r10_1 = 0;
                                do
                                {
                                    if (r9_1 > rbp_1)
                                    {
                                        rbp_1 = -0x8000000000000000;
                                        r10_1 = 1;
                                    }
                                    else
                                    {
                                        int64_t rax_22;
                                        int64_t rdx_13;
                                        rdx_13 = HIGHD(0x7fffffffffffffff);
                                        rax_22 = LOWD(0x7fffffffffffffff);
                                        if ((COMBINE(rdx_13, rax_22) / rcx_1) < rbp_1)
                                        {
                                            rbp_1 = 0x7fffffffffffffff;
                                            r10_1 = 1;
                                        }
                                        else
                                        {
                                            rbp_1 = (rbp_1 * rcx_1);
                                        }
                                    }
                                    rdi_5 = (rdi_5 - 1);
                                } while (rdi_5 != 1);
                            label_4059d0:
                                r12_1 = (r12_1 | r10_1);
                                goto label_405558;
                            }
                            case 0x12:
                            case 0x32:
                            {
                                rcx_2 = rax_6;
                                rsi_4 = rsi_2;
                                int64_t rax_24;
                                int64_t rdx_15;
                                rdx_15 = HIGHD(-0x8000000000000000);
                                rax_24 = LOWD(-0x8000000000000000);
                                r9_2 = (COMBINE(rdx_15, rax_24) / rcx_2);
                            label_405700:
                                int32_t rdi_6 = 4;
                                r10_1 = 0;
                                do
                                {
                                    if (r9_2 > rbp_1)
                                    {
                                        rbp_1 = -0x8000000000000000;
                                        r10_1 = 1;
                                    }
                                    else
                                    {
                                        int64_t rax_26;
                                        int64_t rdx_17;
                                        rdx_17 = HIGHD(0x7fffffffffffffff);
                                        rax_26 = LOWD(0x7fffffffffffffff);
                                        if ((COMBINE(rdx_17, rax_26) / rcx_2) < rbp_1)
                                        {
                                            rbp_1 = 0x7fffffffffffffff;
                                            r10_1 = 1;
                                        }
                                        else
                                        {
                                            rbp_1 = (rbp_1 * rcx_2);
                                        }
                                    }
                                    rdi_6 = (rdi_6 - 1);
                                } while (rdi_6 != 1);
                                goto label_4059d0;
                            }
                        }
                        if (r13_2 == 0x17)
                        {
                            rcx_5 = rax_6;
                            rsi_4 = rsi_2;
                            int64_t rax_36;
                            int64_t rdx_27;
                            rdx_27 = HIGHD(-0x8000000000000000);
                            rax_36 = LOWD(-0x8000000000000000);
                            r9_5 = (COMBINE(rdx_27, rax_36) / rcx_5);
                        label_405838:
                            int32_t rdi_9 = 8;
                            r10_1 = 0;
                            do
                            {
                                if (r9_5 > rbp_1)
                                {
                                    rbp_1 = -0x8000000000000000;
                                    r10_1 = 1;
                                }
                                else
                                {
                                    int64_t rax_38;
                                    int64_t rdx_29;
                                    rdx_29 = HIGHD(0x7fffffffffffffff);
                                    rax_38 = LOWD(0x7fffffffffffffff);
                                    if ((COMBINE(rdx_29, rax_38) / rcx_5) < rbp_1)
                                    {
                                        rbp_1 = 0x7fffffffffffffff;
                                        r10_1 = 1;
                                    }
                                    else
                                    {
                                        rbp_1 = (rbp_1 * rcx_5);
                                    }
                                }
                                rdi_9 = (rdi_9 - 1);
                            } while (rdi_9 != 1);
                            goto label_4059d0;
                        }
                        if (r13_2 == 0x18)
                        {
                            rcx_6 = rax_6;
                            rsi_4 = rsi_2;
                            int64_t rax_40;
                            int64_t rdx_31;
                            rdx_31 = HIGHD(-0x8000000000000000);
                            rax_40 = LOWD(-0x8000000000000000);
                            r9_6 = (COMBINE(rdx_31, rax_40) / rcx_6);
                        label_4058a0:
                            int32_t rdi_10 = 7;
                            r10_1 = 0;
                            do
                            {
                                if (r9_6 > rbp_1)
                                {
                                    rbp_1 = -0x8000000000000000;
                                    r10_1 = 1;
                                }
                                else
                                {
                                    int64_t rax_42;
                                    int64_t rdx_33;
                                    rdx_33 = HIGHD(0x7fffffffffffffff);
                                    rax_42 = LOWD(0x7fffffffffffffff);
                                    if ((COMBINE(rdx_33, rax_42) / rcx_6) < rbp_1)
                                    {
                                        rbp_1 = 0x7fffffffffffffff;
                                        r10_1 = 1;
                                    }
                                    else
                                    {
                                        rbp_1 = (rbp_1 * rcx_6);
                                    }
                                }
                                rdi_10 = (rdi_10 - 1);
                            } while (rdi_10 != 1);
                            goto label_4059d0;
                        }
                        if (r13_2 > 0x35)
                        {
                            goto label_405519;
                        }
                    }
                }
            }
        }
        if ((arg5 == 0 || (arg5 != 0 && r13_1 != 0)))
        {
            r12_1 = 4;
        }
    }
    return r12_1;
}

int64_t sub_405ae0(FILE* arg1)
{
    FILE* rdi = arg1;
    if (fileno(arg1) >= 0)
    {
        int32_t rax_1 = __freading(rdi);
        off64_t rax_6;
        if (rax_1 != 0)
        {
            rax_6 = lseek(fileno(arg1), 0, 1);
        }
        if (((rax_1 == 0 || (rax_1 != 0 && rax_6 != -1)) && sub_405b60(arg1) != 0))
        {
            int32_t* rax_3 = __errno_location();
            int32_t r12 = *rax_3;
            int64_t rax_4 = fclose(arg1);
            if (r12 != 0)
            {
                *rax_3 = r12;
                rax_4 = 0xffffffff;
            }
            return rax_4;
        }
        rdi = arg1;
    }
    /* tailcall */
    return fclose(rdi);
}

int64_t sub_405b60(FILE* arg1)
{
    int32_t* rbx = arg1;
    if ((arg1 != 0 && (__freading(arg1) != 0 && (*rbx & 0x100) != 0)))
    {
        sub_405ba0(rbx, 0, 1);
        /* tailcall */
        return fflush(rbx);
    }
    /* tailcall */
    return fflush(rbx);
}

off64_t sub_405ba0(FILE* arg1, off_t arg2, int32_t arg3)
{
    if ((arg1->_IO_read_end == arg1->_IO_read_ptr && (arg1->_IO_write_ptr == arg1->_IO_write_base && arg1->_IO_save_base == 0)))
    {
        off64_t rax_3 = lseek(fileno(arg1), arg2, arg3);
        if (rax_3 != -1)
        {
            arg1->_flags = (arg1->_flags & 0xffffffef);
            arg1->_offset = rax_3;
            rax_3 = 0;
        }
        return rax_3;
    }
    /* tailcall */
    return fseeko(arg1, arg2, arg3);
}

uint64_t sub_405c00(int64_t arg1, int32_t* arg2)
{
    int64_t r11 = (arg1 + 8);
    int32_t r12 = arg2[0xb];
    int32_t rbp = *arg2;
    int64_t rbx = arg2[0xc];
    int32_t r9 = r12;
    int32_t r10 = rbp;
    int32_t r8 = rbx;
    while (r10 > r8)
    {
        int32_t r14_2;
        while (r9 < r8)
        {
            r14_2 = (r10 - r8);
            int32_t rdx_2 = (r8 - r9);
            if (r14_2 <= rdx_2)
            {
                break;
            }
            int64_t rcx_1 = r9;
            r10 = (r10 - rdx_2);
            int64_t* rax_1 = (arg1 + (rcx_1 << 3));
            int64_t r13_1 = (r11 + (((rdx_2 - 1) + rcx_1) << 3));
            int64_t rdx_6 = (r10 - rcx_1);
            do
            {
                int64_t rcx_2 = *rax_1;
                *rax_1 = rax_1[rdx_6];
                rax_1[rdx_6] = rcx_2;
                rax_1 = &rax_1[1];
            } while (r13_1 != rax_1);
            if (r10 <= r8)
            {
                break;
            }
        }
        if (r9 >= r8)
        {
            break;
        }
        int64_t rdx_7 = r9;
        int64_t* rax_4 = (arg1 + (rdx_7 << 3));
        int64_t r13_2 = (r11 + (((r14_2 - 1) + rdx_7) << 3));
        int64_t rcx_6 = (rbx - rdx_7);
        do
        {
            int64_t rcx_7 = *rax_4;
            *rax_4 = rax_4[rcx_6];
            rax_4[rcx_6] = rcx_7;
            rax_4 = &rax_4[1];
        } while (rax_4 != r13_2);
        r9 = (r9 + r14_2);
    }
    arg2[0xc] = rbp;
    uint64_t rax_3 = (rbp - r8);
    arg2[0xb] = (r12 + rax_3);
    return rax_3;
}

uint64_t sub_405ce0(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
    int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8, int64_t arg9)
{
    char* r14 = *(arg7 + 0x20);
    char rax_1 = *r14;
    char* rbp = r14;
    uint64_t r13_1;
    if ((rax_1 == 0x3d || rax_1 == 0))
    {
        r13_1 = 0;
    }
    if ((rax_1 != 0x3d && rax_1 != 0))
    {
        while (true)
        {
            rbp = &rbp[1];
            char rax_2 = *rbp;
            if (rax_2 == 0)
            {
                break;
            }
            if (rax_2 == 0x3d)
            {
                break;
            }
            if ((!(rax_2 != 0 && rax_2 != 0x3d)))
            {
                /* nop */
            }
        }
        r13_1 = (rbp - r14);
    }
    int64_t* rbx = arg4;
    int64_t r12 = 0;
    char* rax_3 = *rbx;
    char* r15 = rax_3;
    uint64_t rax_14;
    if (rax_3 != 0)
    {
        int32_t rax_4;
        uint64_t rax_5;
        int32_t r8;
        while (true)
        {
            rax_4 = strncmp(r15, r14, r13_1);
            if (rax_4 == 0)
            {
                rax_5 = strlen(r15);
                if (rax_5 == r13_1)
                {
                    break;
                }
            }
            rbx = &rbx[4];
            r15 = *rbx;
            r8 = (r12 + 1);
            if (r15 == 0)
            {
                break;
            }
            r12 = r8;
        }
        if ((rax_4 == 0 && rax_5 == r13_1))
        {
            goto label_405f10;
        }
        rbx = nullptr;
        int32_t var_44_1 = 0xffffffff;
        char* rdi_2 = rax_3;
        int64_t r15_1 = 0;
        int32_t var_50_1 = 0;
        int32_t var_40_1 = 0;
        char* var_70_1 = nullptr;
        int64_t* rbp_1 = arg4;
        do
        {
            if (strncmp(rdi_2, r14, r13_1) == 0)
            {
                if (rbx == 0)
                {
                    var_44_1 = r15_1;
                    rbx = rbp_1;
                }
                else if (((((arg6 != 0 || (arg6 == 0 && rbx[1] != rbp_1[1])) || ((arg6 == 0 && rbx[1] == rbp_1[1]) && rbx[2] != rbp_1[2])) || (((arg6 == 0 && rbx[1] == rbp_1[1]) && rbx[2] == rbp_1[2]) && rbx[3] != rbp_1[3])) && var_50_1 == 0))
                {
                    if (arg8 == 0)
                    {
                        var_50_1 = 1;
                        if (var_70_1 != 0)
                        {
                            goto label_405e36;
                        }
                    }
                    else
                    {
                        if (var_70_1 != 0)
                        {
                            goto label_405e36;
                        }
                        char* rax_36 = calloc(r8, 1);
                        var_70_1 = rax_36;
                        if (rax_36 == 0)
                        {
                            var_50_1 = 1;
                        }
                        else
                        {
                            var_40_1 = 1;
                            var_70_1[var_44_1] = 1;
                        label_405e36:
                            var_70_1[r15_1] = 1;
                        }
                    }
                }
            }
            rbp_1 = &rbp_1[4];
            rdi_2 = *rbp_1;
            r15_1 = (r15_1 + 1);
        } while (rdi_2 != 0);
        if (((var_70_1 == 0 && var_50_1 == 0) && rbx != 0))
        {
            r12 = var_44_1;
        label_405f10:
            int32_t rdx_3 = *arg7;
            *(arg7 + 0x20) = 0;
            int32_t rax_18 = (rdx_3 + 1);
            *arg7 = rax_18;
            int32_t rcx_4 = rbx[1];
            if (*rbp != 0)
            {
                if (rcx_4 != 0)
                {
                    *(arg7 + 0x10) = &rbp[1];
                }
                else
                {
                    if (arg8 != 0)
                    {
                        __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: option '%s%s' doesn't allow …", 5), *arg2, arg9, *rbx, arg4);
                    }
                    arg7[2] = rbx[3];
                    rax_14 = 0x3f;
                }
            }
            if ((rcx_4 == 1 && *rbp == 0))
            {
                if (rax_18 < arg1)
                {
                    *arg7 = (rdx_3 + 2);
                    *(arg7 + 0x10) = arg2[rax_18];
                }
                else
                {
                    if (arg8 != 0)
                    {
                        __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: option '%s%s' requires an ar…", 5), *arg2, arg9, *rbx, arg4);
                    }
                    arg7[2] = rbx[3];
                    char* rax_43;
                    rax_43 = *arg3 != 0x3a;
                    rax_14 = ((rax_43 * 5) + 0x3a);
                }
            }
            if ((((*rbp != 0 && rcx_4 != 0) || ((*rbp == 0 && rcx_4 == 1) && rax_18 < arg1)) || (*rbp == 0 && rcx_4 != 1)))
            {
                if (arg5 == 0)
                {
                    goto label_405f3e;
                }
                *arg5 = r12;
            label_405f3e:
                int32_t* rdx_4 = rbx[2];
                rax_14 = rbx[3];
                if (rdx_4 != 0)
                {
                    *rdx_4 = rax_14;
                    rax_14 = 0;
                }
            }
            goto label_405f5c;
        }
        if ((var_70_1 != 0 || (var_70_1 == 0 && var_50_1 != 0)))
        {
            if (arg8 != 0)
            {
                if (var_50_1 != 0)
                {
                    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: option '%s%s' is ambiguous\n", 5), *arg2, arg9, r14, arg4);
                    r14 = *(arg7 + 0x20);
                }
                else
                {
                    flockfile(stderr);
                    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: option '%s%s' is ambiguous; …", 5), *arg2, arg9, *(arg7 + 0x20), arg4);
                    uint64_t* const rdi_13 = stderr;
                    int64_t* rbx_4 = arg4;
                    char* rbp_5 = var_70_1;
                    void* r12_2 = &var_70_1[(r12 + 1)];
                    do
                    {
                        if (*rbp_5 != 0)
                        {
                            __fprintf_chk(rdi_13, 1, " '%s%s'", arg9, *rbx_4);
                            rdi_13 = stderr;
                        }
                        rbp_5 = &rbp_5[1];
                        rbx_4 = &rbx_4[4];
                    } while (r12_2 != rbp_5);
                    fputc(0xa, stderr);
                    funlockfile(stderr);
                    r14 = *(arg7 + 0x20);
                }
            }
            if (var_40_1 != 0)
            {
                free(var_70_1);
            }
            *(arg7 + 0x20) = &r14[strlen(r14)];
            *arg7 = (*arg7 + 1);
            arg7[2] = 0;
            rax_14 = 0x3f;
        label_405f5c:
            return rax_14;
        }
    }
    if ((arg6 != 0 && *(arg2[*arg7] + 1) != 0x2d))
    {
        rax_14 = 0xffffffff;
        if (strchr(arg3, rax_1) != 0)
        {
            goto label_405f5c;
        }
    }
    if (arg8 == 0)
    {
        goto label_405ece;
    }
    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: unrecognized option '%s%s'\n", 5), *arg2, arg9, r14, arg4);
label_405ece:
    *(arg7 + 0x20) = 0;
    *arg7 = (*arg7 + 1);
    arg7[2] = 0;
    return 0x3f;
}

uint64_t sub_406300(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
    int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8)
{
    int32_t r13 = arg7[1];
    if (arg1 <= 0)
    {
        goto label_40653c;
    }
    int32_t rax_1 = *arg7;
    int32_t rbp_1 = arg1;
    char* r15_1 = arg3;
    *(arg7 + 0x10) = 0;
    if (rax_1 == 0)
    {
        *arg7 = 1;
        rax_1 = 1;
    }
    uint32_t rax_3;
    char* rdx;
    if ((rax_1 == 0 || (rax_1 != 0 && arg7[6] == 0)))
    {
        arg7[0xc] = rax_1;
        arg7[0xb] = rax_1;
        *(arg7 + 0x20) = 0;
        char rax_2 = *r15_1;
        if (rax_2 == 0x2d)
        {
            arg7[0xa] = 2;
            r15_1 = &r15_1[1];
            rdx = nullptr;
        }
        else if (rax_2 == 0x2b)
        {
            arg7[0xa] = 0;
            r15_1 = &r15_1[1];
            rdx = nullptr;
        }
        else
        {
            rdx = nullptr;
            char* rax_16;
            if (arg8 == 0)
            {
                rax_16 = getenv("POSIXLY_CORRECT");
                if (rax_16 == 0)
                {
                    arg7[0xa] = 1;
                    rdx = *(arg7 + 0x20);
                }
                else
                {
                    rdx = *(arg7 + 0x20);
                }
            }
            if (((arg8 == 0 && rax_16 != 0) || arg8 != 0))
            {
                arg7[0xa] = 0;
            }
        }
        arg7[6] = 1;
        rax_3 = *r15_1;
    }
    if ((rax_1 != 0 && arg7[6] != 0))
    {
        rax_3 = *arg3;
        rdx = *(arg7 + 0x20);
    }
    if (((((rax_1 != 0 && arg7[6] != 0) && ((rax_3 - 0x2b) & 0xfd) != 0) || rax_1 == 0) || (rax_1 != 0 && arg7[6] == 0)))
    {
        if (rax_3 == 0x3a)
        {
            r13 = 0;
        }
        if (rdx == 0)
        {
            goto label_4063c8;
        }
    }
    if (((rax_1 != 0 && arg7[6] != 0) && ((rax_3 - 0x2b) & 0xfd) == 0))
    {
        char rax_4 = r15_1[1];
        r15_1 = &r15_1[1];
        if (rax_4 == 0x3a)
        {
            r13 = 0;
        }
        if (rdx == 0)
        {
        label_4063c8:
            int32_t rax_5 = *arg7;
            if (arg7[0xc] > rax_5)
            {
                arg7[0xc] = rax_5;
            }
            if (rax_5 < arg7[0xb])
            {
                arg7[0xb] = rax_5;
            }
            if (arg7[0xa] == 1)
            {
                int32_t rdx_5 = arg7[0xc];
                if (arg7[0xb] == rdx_5)
                {
                    if (rax_5 != rdx_5)
                    {
                        arg7[0xb] = rax_5;
                        rdx_5 = rax_5;
                    }
                }
                else if (rax_5 != rdx_5)
                {
                    sub_405c00(arg2, arg7);
                    rdx_5 = *arg7;
                }
                char* rcx_8;
                if (rbp_1 > rdx_5)
                {
                    int64_t rax_10 = rdx_5;
                    do
                    {
                        rcx_8 = arg2[rax_10];
                        int32_t rsi_5 = rax_10;
                        rdx_5 = rax_10;
                        if ((*rcx_8 == 0x2d && rcx_8[1] != 0))
                        {
                            break;
                        }
                        rdx_5 = (rsi_5 + 1);
                        rax_10 = (rax_10 + 1);
                        *arg7 = rdx_5;
                    } while (rbp_1 > rax_10);
                    if ((*rcx_8 == 0x2d && rcx_8[1] != 0))
                    {
                        rax_5 = *arg7;
                    }
                }
                if ((rbp_1 <= rdx_5 || (rbp_1 > rdx_5 && (!(*rcx_8 == 0x2d && rcx_8[1] != 0)))))
                {
                    rax_5 = rdx_5;
                }
                arg7[0xc] = rdx_5;
            }
            bool c_1 = rbp_1 < rax_5;
            bool z_1 = rbp_1 == rax_5;
            int64_t rcx_3;
            int32_t rdx_2;
            char* r14_1;
            if (z_1)
            {
                rbp_1 = arg7[0xc];
                rdx_2 = arg7[0xb];
            }
            else
            {
                rcx_3 = 3;
                void* const rdi = &data_417121;
                r14_1 = arg2[rax_5];
                char* rsi_1 = r14_1;
                while (rcx_3 != 0)
                {
                    char temp0_1 = *rsi_1;
                    char temp1_1 = *rdi;
                    c_1 = temp0_1 < temp1_1;
                    z_1 = temp0_1 == temp1_1;
                    rsi_1 = &rsi_1[1];
                    rdi = (rdi + 1);
                    rcx_3 = (rcx_3 - 1);
                    if ((!z_1))
                    {
                        break;
                    }
                }
                rcx_3 = ((!z_1) && (!c_1));
                rcx_3 = (rcx_3 - 0);
                if (rcx_3 == 0)
                {
                    rdx_2 = arg7[0xb];
                    int32_t rcx_4 = arg7[0xc];
                    int32_t rax_6 = (rax_5 + 1);
                    *arg7 = rax_6;
                    if (rdx_2 == rcx_4)
                    {
                        arg7[0xb] = rax_6;
                        rdx_2 = rax_6;
                    }
                    else if (rax_6 != rcx_4)
                    {
                        sub_405c00(arg2, arg7);
                        rdx_2 = arg7[0xb];
                    }
                    arg7[0xc] = rbp_1;
                    *arg7 = rbp_1;
                }
            }
            int32_t r14_2;
            if ((z_1 || ((!z_1) && rcx_3 == 0)))
            {
                if (rdx_2 == rbp_1)
                {
                    goto label_40653c;
                }
                *arg7 = rdx_2;
            label_40653c:
                r14_2 = -1;
            }
            if (((!z_1) && rcx_3 != 0))
            {
                char rcx_9;
                if (*r14_1 == 0x2d)
                {
                    rcx_9 = r14_1[1];
                    if (rcx_9 != 0)
                    {
                        if (arg4 == 0)
                        {
                            goto label_406640;
                        }
                        int32_t* var_88_2;
                        int32_t var_80_2;
                        void* const var_78_1;
                        if (rcx_9 == 0x2d)
                        {
                            *(arg7 + 0x20) = &r14_1[2];
                            var_78_1 = &data_417121;
                            var_80_2 = r13;
                            var_88_2 = arg7;
                            goto label_4066b0;
                        }
                        if (arg6 == 0)
                        {
                            goto label_406640;
                        }
                        if (r14_1[2] == 0)
                        {
                            if (strchr(r15_1, rcx_9) != 0)
                            {
                                goto label_406640;
                            }
                            goto label_406601;
                        }
                    label_406601:
                        *(arg7 + 0x20) = &r14_1[1];
                        int32_t rax_12 = sub_405ce0(rbp_1, arg2, r15_1, arg4, arg5, arg6, arg7, r13, &data_417122);
                        r14_2 = rax_12;
                        if (rax_12 == 0xffffffff)
                        {
                            r14_1 = arg2[*arg7];
                        label_406640:
                            rdx = &r14_1[1];
                        label_406481:
                            *(arg7 + 0x20) = &rdx[1];
                            r14_2 = *rdx;
                            int32_t var_4c;
                            var_4c = r14_2;
                            char* rax_7 = strchr(r15_1, r14_2);
                            char rcx_5 = var_4c;
                            void* r8_1 = &rdx[1];
                            if (rdx[1] == 0)
                            {
                                *arg7 = (*arg7 + 1);
                            }
                            if (((rcx_5 - 0x3a) > 1 && rax_7 != 0))
                            {
                                char rcx_7 = rax_7[1];
                                if (((*rax_7 == 0x57 && arg4 != 0) && rcx_7 == 0x3b))
                                {
                                    if (rdx[1] != 0)
                                    {
                                        goto label_40667e;
                                    }
                                    int64_t rax_14 = *arg7;
                                    if (rax_14 == rbp_1)
                                    {
                                        if (r13 != 0)
                                        {
                                            int64_t rbp_4 = *arg2;
                                            __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: option requires an argument …", 5), rbp_4, r14_2);
                                        }
                                        arg7[2] = r14_2;
                                        int64_t r14_4;
                                        r14_4 = *r15_1 != 0x3a;
                                        r14_2 = ((r14_4 * 5) + 0x3a);
                                    }
                                    else
                                    {
                                        r8_1 = arg2[rax_14];
                                    label_40667e:
                                        *(arg7 + 0x20) = r8_1;
                                        arg6 = 0;
                                        *(arg7 + 0x10) = 0;
                                        var_78_1 = &data_417140;
                                        var_80_2 = r13;
                                        var_88_2 = arg7;
                                    label_4066b0:
                                        r14_2 = sub_405ce0(rbp_1, arg2, r15_1, arg4, arg5, arg6, var_88_2, var_80_2, var_78_1);
                                    }
                                }
                                if ((((*rax_7 != 0x57 || (*rax_7 == 0x57 && arg4 == 0)) || ((*rax_7 == 0x57 && arg4 != 0) && rcx_7 != 0x3b)) && rcx_7 == 0x3a))
                                {
                                    char rdx_9 = rdx[1];
                                    if (rax_7[2] != 0x3a)
                                    {
                                        int64_t rax_17 = *arg7;
                                        if (rdx_9 != 0)
                                        {
                                            *(arg7 + 0x10) = r8_1;
                                            *arg7 = (rax_17 + 1);
                                        }
                                        else if (rbp_1 != rax_17)
                                        {
                                            int64_t rax_18 = arg2[rax_17];
                                            *arg7 = (rax_17 + 1);
                                            *(arg7 + 0x10) = rax_18;
                                        }
                                        else
                                        {
                                            if (r13 != 0)
                                            {
                                                int64_t rbp_3 = *arg2;
                                                __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: option requires an argument …", 5), rbp_3, r14_2);
                                            }
                                            arg7[2] = r14_2;
                                            int64_t r14_3;
                                            r14_3 = *r15_1 != 0x3a;
                                            r14_2 = ((r14_3 * 5) + 0x3a);
                                        }
                                    }
                                    else if (rdx_9 == 0)
                                    {
                                        *(arg7 + 0x10) = 0;
                                    }
                                    else
                                    {
                                        *(arg7 + 0x10) = r8_1;
                                        *arg7 = (*arg7 + 1);
                                    }
                                    *(arg7 + 0x20) = 0;
                                }
                            }
                            if (((rcx_5 - 0x3a) <= 1 || ((rcx_5 - 0x3a) > 1 && rax_7 == 0)))
                            {
                                if (r13 == 0)
                                {
                                    goto label_40676d;
                                }
                                int64_t rbp_2 = *arg2;
                                __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: invalid option -- '%c'\n", 5), rbp_2, r14_2);
                            label_40676d:
                                arg7[2] = r14_2;
                                r14_2 = 0x3f;
                            }
                        }
                    }
                }
                if ((*r14_1 != 0x2d || (*r14_1 == 0x2d && rcx_9 == 0)))
                {
                    if (arg7[0xa] == 0)
                    {
                        goto label_40653c;
                    }
                    *(arg7 + 0x10) = r14_1;
                    r14_2 = 1;
                    *arg7 = (rax_5 + 1);
                }
            }
            if ((((z_1 || ((!z_1) && rcx_3 == 0)) && rdx_2 != rbp_1) || ((!z_1) && rcx_3 != 0)))
            {
                return r14_2;
            }
        }
    }
    if (((((((rax_1 != 0 && arg7[6] != 0) && ((rax_3 - 0x2b) & 0xfd) != 0) || rax_1 == 0) || (rax_1 != 0 && arg7[6] == 0)) && rdx != 0) || ((rax_1 != 0 && arg7[6] != 0) && ((rax_3 - 0x2b) & 0xfd) == 0)))
    {
        if (*rdx == 0)
        {
            goto label_4063c8;
        }
        goto label_406481;
    }
}

uint64_t sub_406930(int32_t arg1, int64_t* arg2, char* arg3)
{
    return _getopt_internal(arg1, arg2, arg3, nullptr, nullptr, 0, 1);
}

uint64_t sub_4069d0(uint32_t* arg1, char* arg2, uint64_t arg3, mbstate_t* arg4)
{
    uint64_t rbx_1;
    char* rbp_1;
    uint32_t* r12_1;
    if (arg2 == 0)
    {
        arg3 = 1;
        rbp_1 = &data_41505a;
    }
    else
    {
        rbx_1 = -2;
        if (arg3 != 0)
        {
            r12_1 = arg1;
            rbp_1 = arg2;
            if (arg1 != 0)
            {
                goto label_4069fa;
            }
        }
    }
    if ((arg2 == 0 || (arg2 != 0 && arg3 != 0)))
    {
        void var_1c;
        r12_1 = &var_1c;
    label_4069fa:
        uint64_t rax_1 = mbrtowc(r12_1, rbp_1, arg3, arg4);
        rbx_1 = rax_1;
        if ((rax_1 > -3 && sub_4147f0() == 0))
        {
            rbx_1 = 1;
            *r12_1 = *rbp_1;
        }
    }
    return rbx_1;
}

int64_t sub_406a50(void* arg1, void* arg2)
{
    int64_t rax;
    rax = arg1 == 0;
    rax = (rax | arg2 == 0);
    if (rax != 0)
    {
        return 0;
    }
    int64_t rdx_1 = *(arg1 + 8);
    if (rdx_1 == *(arg2 + 8))
    {
        do
        {
            int64_t temp0_1 = rdx_1;
            rdx_1 = (rdx_1 - 1);
            if ((temp0_1 - 1) < 0)
            {
                return 1;
            }
        } while (*(*(arg1 + 0x10) + (rdx_1 << 3)) == *(*(arg2 + 0x10) + (rdx_1 << 3)));
    }
    return rax;
}

int64_t sub_406aa0(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rbx = arg1;
    while (true)
    {
        int64_t* rax_1 = rbx[1];
        if (rax_1 == 0)
        {
            rax_1 = rbx[2];
            if (rax_1 == 0)
            {
                int64_t rax_2 = arg2(arg3, rbx);
                if (rax_2 != 0)
                {
                    return rax_2;
                }
                while (true)
                {
                    int64_t* rdx = *rbx;
                    if (rdx == 0)
                    {
                        return rax_2;
                    }
                    rax_1 = rdx[2];
                    bool cond:0_1 = rax_1 == rbx;
                    rbx = rdx;
                    if ((rax_1 == 0 | cond:0_1) == 0)
                    {
                        break;
                    }
                    rax_2 = arg2(arg3, rbx, rdx);
                    if (rax_2 != 0)
                    {
                        return rax_2;
                    }
                }
            }
        }
        rbx = rax_1;
    }
}

int64_t sub_406b10(char* arg1, void* arg2, int32_t arg3)
{
    int64_t rax_12 = *(arg2 + 0x48);
    if (*(arg2 + 0x68) <= rax_12)
    {
        arg1[8] = 2;
        return 0;
    }
    char* r8 = *(arg2 + 8);
    bool cond:0 = *(arg2 + 0x90) <= 1;
    char rcx = r8[rax_12];
    *arg1 = rcx;
    if (((cond:0 || ((!cond:0) && rax_12 == *(arg2 + 0x30))) || (((!cond:0) && rax_12 != *(arg2 + 0x30)) && *(*(arg2 + 0x10) + (rax_12 << 2)) != 0xffffffff)))
    {
        if (rcx != 0x5c)
        {
            if (rcx == 0x5b)
            {
                if ((rax_12 + 1) < *(arg2 + 0x58))
                {
                    char rax_4 = r8[(rax_12 + 1)];
                    *arg1 = rax_4;
                    if (rax_4 != 0x3a)
                    {
                        if (rax_4 == 0x3d)
                        {
                            arg1[8] = 0x1c;
                            return 2;
                        }
                        if (rax_4 == 0x2e)
                        {
                            arg1[8] = 0x1a;
                            return 2;
                        }
                    }
                    else if ((arg3 & 4) != 0)
                    {
                        arg1[8] = 0x1e;
                        return 2;
                    }
                }
                arg1[8] = 1;
                *arg1 = 0x5b;
                return 1;
            }
            if (rcx == 0x5d)
            {
                arg1[8] = 0x15;
                return 1;
            }
            if (rcx == 0x5e)
            {
                arg1[8] = 0x19;
                return 1;
            }
            if (rcx == 0x2d)
            {
                arg1[8] = 0x16;
                return 1;
            }
        }
        else if ((arg3 & 1) != 0)
        {
            int64_t rdx_1 = (rax_12 + 1);
            if (rdx_1 < *(arg2 + 0x58))
            {
                *(arg2 + 0x48) = rdx_1;
                char rax_7 = r8[(rax_12 + 1)];
                arg1[8] = 1;
                *arg1 = rax_7;
                return 1;
            }
        }
    }
    arg1[8] = 1;
    return 1;
}

int64_t sub_406c40(int64_t arg1, void* arg2)
{
    if ((*(arg2 + 0x30) == 0x11 && arg1 == *(arg2 + 0x28)))
    {
        *(arg2 + 0x32) = (*(arg2 + 0x32) | 8);
        return 0;
    }
    return 0;
}

uint64_t sub_406c60(void* arg1, int32_t arg2, int64_t arg3, int64_t arg4, 
    int64_t arg5)
{
    void* r9 = *(arg1 + 0x98);
    void* r13 = (*(r9 + 0x30) + (arg4 * 0x18));
    if (*(r13 + 8) > 0)
    {
        int64_t r14_1 = arg3;
        int64_t rbx_1 = 0;
        int64_t rax_2 = (arg5 * 0x28);
        int64_t rax_3 = (1 << arg3);
        int16_t rax_4 = (!rax_3);
        int32_t rax_6 = (arg2 & 2);
        int32_t rsi_1 = (arg2 & 1);
        do
        {
            int64_t rbp_1 = *(*(r13 + 0x10) + (rbx_1 << 3));
            int64_t* rax_10 = ((rbp_1 << 4) + *r9);
            char rdx_1 = rax_10[1];
            if (rdx_1 == 8)
            {
                if ((rsi_1 != 0 && *rax_10 == r14_1))
                {
                    return 0xffffffff;
                }
            }
            else if (rdx_1 == 9)
            {
                if ((rax_6 != 0 && *rax_10 == r14_1))
                {
                    return 0;
                }
            }
            else if ((rdx_1 == 4 && arg5 != -1))
            {
                void* r12_2 = (rax_2 + *(arg1 + 0xd8));
                int64_t rax_15 = (rbp_1 * 0x18);
                do
                {
                    if ((*r12_2 == rbp_1 && (r14_1 > 0x3f || (r14_1 <= 0x3f && (rax_3 & *(r12_2 + 0x22)) != 0))))
                    {
                        int64_t rcx_2 = **((*(r9 + 0x28) + rax_15) + 0x10);
                        if (arg4 == rcx_2)
                        {
                            return (-(arg2 & 1));
                        }
                        int32_t rax_19 = sub_406c60(arg1, arg2, r14_1, rcx_2, arg5);
                        if (rax_19 == 0xffffffff)
                        {
                            return 0xffffffff;
                        }
                        if ((rax_19 == 0 && rax_6 != 0))
                        {
                            return 0;
                        }
                        if (r14_1 <= 0x3f)
                        {
                            *(r12_2 + 0x22) = (*(r12_2 + 0x22) & rax_4);
                        }
                    }
                    r12_2 = (r12_2 + 0x28);
                } while (*(r12_2 - 8) != 0);
                rbx_1 = (rbx_1 + 1);
                if (*(r13 + 8) <= rbx_1)
                {
                    break;
                }
                continue;
            }
            rbx_1 = (rbx_1 + 1);
        } while (*(r13 + 8) > rbx_1);
    }
    return (arg2 >> 1);
}

int64_t sub_406e70(void* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
    int64_t arg5, int64_t arg6)
{
    void* rax = (*(arg1 + 0xd8) + (arg2 * 0x28));
    int64_t r10 = *(rax + 0x10);
    if (r10 > arg5)
    {
        return 0xffffffff;
    }
    int64_t rax_1 = *(rax + 0x18);
    if (rax_1 < arg5)
    {
        return 1;
    }
    int32_t rsi_1;
    rsi_1 = r10 == arg5;
    if (rax_1 == arg5)
    {
        rsi_1 = (rsi_1 | 2);
    }
    else if (r10 != arg5)
    {
        return 0;
    }
    /* tailcall */
    return sub_406c60(arg1, rsi_1, arg3, arg4, arg6);
}

int64_t sub_406ee0(void* arg1, uint64_t arg2)
{
    if (*(arg1 + 0x90) > 1)
    {
        if (arg2 > 0x1fffffffffffffff)
        {
        label_406f7b:
            return 0xc;
        }
        int64_t rax_1 = realloc(*(arg1 + 0x10), (arg2 << 2));
        if (rax_1 == 0)
        {
            goto label_406f7b;
        }
        int64_t rdi_1 = *(arg1 + 0x18);
        *(arg1 + 0x10) = rax_1;
        if (rdi_1 != 0)
        {
            int64_t rax_2 = realloc(rdi_1, (arg2 << 3));
            if (rax_2 == 0)
            {
                goto label_406f7b;
            }
            *(arg1 + 0x18) = rax_2;
        }
    }
    if (*(arg1 + 0x8b) == 0)
    {
        goto label_406f46;
    }
    int64_t rax_4 = realloc(*(arg1 + 8), arg2);
    if (rax_4 == 0)
    {
        goto label_406f7b;
    }
    *(arg1 + 8) = rax_4;
label_406f46:
    *(arg1 + 0x40) = arg2;
    return 0;
}

int64_t sub_406f80(int64_t* arg1, int64_t arg2)
{
    int64_t rsi = arg1[1];
    int64_t rax = arg1[2];
    int64_t rax_1;
    if (*arg1 == rsi)
    {
        *arg1 = ((rsi + 1) + (rsi + 1));
        rax = realloc(rax, ((rsi + 1) << 4));
        if (rax == 0)
        {
            rax_1 = 0;
        }
        else
        {
            arg1[2] = rax;
            rsi = arg1[1];
        }
    }
    if (((*arg1 == rsi && rax != 0) || *arg1 != rsi))
    {
        arg1[1] = (rsi + 1);
        *(rax + (rsi << 3)) = arg2;
        rax_1 = 1;
    }
    return rax_1;
}

int64_t* sub_406ff0(int64_t* arg1, int64_t arg2)
{
    int64_t rdx = *arg1;
    int64_t* rax_1;
    if (rdx == 0)
    {
        *arg1 = 1;
        arg1[1] = 1;
        rax_1 = malloc(8);
        arg1[2] = rax_1;
        if (rax_1 != 0)
        {
            *rax_1 = arg2;
            return 1;
        }
        arg1[1] = 0;
        *arg1 = 0;
    }
    else
    {
        int64_t rsi = arg1[1];
        int64_t* rax = arg1[2];
        if (rsi == 0)
        {
            *rax = arg2;
            rax_1 = 1;
            arg1[1] = (arg1[1] + 1);
        }
        else
        {
            if (rdx == rsi)
            {
                *arg1 = (rsi + rsi);
                rax = realloc(rax, (rsi << 4));
                if (rax == 0)
                {
                    rax_1 = nullptr;
                }
                else
                {
                    arg1[2] = rax;
                    rsi = arg1[1];
                }
            }
            if (((rdx == rsi && rax != 0) || rdx != rsi))
            {
                void* rdx_2 = (rsi << 3);
                if (*rax <= arg2)
                {
                    int64_t rcx_2 = *((rax + rdx_2) - 8);
                    if (arg2 < rcx_2)
                    {
                        do
                        {
                            *(rax + rdx_2) = rcx_2;
                            rdx_2 = (rdx_2 - 8);
                            rcx_2 = *((rax + rdx_2) - 8);
                        } while (rcx_2 > arg2);
                    }
                }
                else if (rsi > 0)
                {
                    void* rdx_1 = (rdx_2 + rax);
                    do
                    {
                        int64_t rcx_1 = *(rdx_1 - 8);
                        rdx_1 = (rdx_1 - 8);
                        *(rdx_1 + 8) = rcx_1;
                    } while (rdx_1 != rax);
                    rdx_2 = nullptr;
                }
                *(rax + rdx_2) = arg2;
                rax_1 = 1;
                arg1[1] = (arg1[1] + 1);
            }
        }
    }
    return rax_1;
}

int64_t sub_407120(void* arg1, int64_t* arg2, int64_t arg3)
{
    void* r12 = &arg2[4];
    int64_t r15 = arg2[2];
    *arg2 = arg3;
    arg2[5] = 0;
    arg2[4] = r15;
    int64_t rax = malloc((r15 << 3));
    arg2[6] = rax;
    if (rax != 0)
    {
        int64_t rbx_1 = 0;
        if (r15 > 0)
        {
            do
            {
                int64_t rsi = *(arg2[3] + (rbx_1 << 3));
                if (((*(((rsi << 4) + *arg1) + 8) & 8) == 0 && sub_406f80(r12, rsi) == 0))
                {
                    return 0xc;
                }
                rbx_1 = (rbx_1 + 1);
            } while (arg2[2] > rbx_1);
        }
        int64_t* rbx_2 = (*(arg1 + 0x40) + ((arg3 & *(arg1 + 0x88)) * 0x18));
        int64_t rdx_1 = *rbx_2;
        int64_t rax_8 = rbx_2[2];
        int64_t rsi_1 = (rdx_1 + 1);
        if (rbx_2[1] <= rdx_1)
        {
            int64_t r12_1 = (rsi_1 + rsi_1);
            rax_8 = realloc(rax_8, (rsi_1 << 4));
            if (rax_8 != 0)
            {
                rdx_1 = *rbx_2;
                rbx_2[2] = rax_8;
                rbx_2[1] = r12_1;
                rsi_1 = (rdx_1 + 1);
            }
        }
        if (((rbx_2[1] <= rdx_1 && rax_8 != 0) || rbx_2[1] > rdx_1))
        {
            *rbx_2 = rsi_1;
            *(rax_8 + (rdx_1 << 3)) = arg2;
            return 0;
        }
    }
    return 0xc;
}

uint64_t sub_407220(char arg1, int64_t arg2)
{
    uint32_t rbx = arg1;
    uint64_t rax = btowc(rbx);
    if ((rax == 0xffffffff && arg2 == 0))
    {
        rax = rbx;
    }
    return rax;
}

void sub_407250(int64_t* arg1)
{
    int64_t r12 = arg1[0xb];
    if (arg1[8] <= r12)
    {
        r12 = arg1[8];
    }
    int64_t rbx = arg1[6];
    if (r12 <= rbx)
    {
        arg1[6] = rbx;
        arg1[7] = rbx;
        return;
    }
    int32_t** rax = __ctype_toupper_loc();
    do
    {
        int64_t rcx_1 = arg1[0xf];
        uint64_t rdx_4 = *((*arg1 + rbx) + arg1[5]);
        if (rcx_1 != 0)
        {
            rdx_4 = *(rcx_1 + rdx_4);
        }
        arg1[1][rbx] = *rax[rdx_4];
        rbx = (rbx + 1);
    } while (r12 != rbx);
    arg1[6] = r12;
    arg1[7] = r12;
}

void sub_4072d0(int64_t* arg1)
{
    int64_t r12 = arg1[0xb];
    int64_t rbp = arg1[6];
    if (arg1[8] <= r12)
    {
        r12 = arg1[8];
    }
    if (r12 > rbp)
    {
        void* r13_1 = &arg1[4];
        while (true)
        {
            int64_t rdi_2 = arg1[0xf];
            int64_t r14_1 = arg1[4];
            uint64_t rdx_2 = (r12 - rbp);
            char* rsi_3;
            if (rdi_2 == 0)
            {
                rsi_3 = ((arg1[5] + rbp) + *arg1);
            }
            else
            {
                void var_68;
                if (arg1[0x12] > 0)
                {
                    int64_t rax_5 = 0;
                    rsi_3 = &var_68;
                    if (rdx_2 > 0)
                    {
                        while (true)
                        {
                            char rcx_10 = *(rdi_2 + *(((*arg1 + rbp) + rax_5) + arg1[5]));
                            (arg1[1] + rbp)[rax_5] = rcx_10;
                            *(&var_68 + rax_5) = rcx_10;
                            if (arg1[0x12] <= (rax_5 + 1))
                            {
                                break;
                            }
                            rax_5 = (rax_5 + 1);
                            if (rdx_2 == rax_5)
                            {
                                break;
                            }
                            rdi_2 = arg1[0xf];
                        }
                    }
                }
                if ((arg1[0x12] <= 0 || (arg1[0x12] > 0 && rdx_2 <= 0)))
                {
                    rsi_3 = &var_68;
                }
            }
            uint32_t var_6c;
            uint64_t rax = sub_4069d0(&var_6c, rsi_3, rdx_2, r13_1);
            uint64_t rdx_4;
            if ((rax - 1) <= -3)
            {
                rdx_4 = var_6c;
                if ((rax == -2 && arg1[8] < arg1[0xb]))
                {
                    arg1[4] = r14_1;
                    break;
                }
            }
            if (((rax - 1) > -3 || ((rax - 1) <= -3 && rax == -2)))
            {
                int64_t rcx_4 = arg1[0xf];
                rdx_4 = *((*arg1 + rbp) + arg1[5]);
                var_6c = rdx_4;
                if (rcx_4 != 0)
                {
                    rdx_4 = *(rcx_4 + rdx_4);
                    var_6c = rdx_4;
                }
                arg1[4] = r14_1;
                rax = 1;
            }
            int64_t rcx_2 = arg1[2];
            int64_t rsi_4 = (rbp + 1);
            int64_t rdi_1 = (rbp << 2);
            *(rcx_2 + (rbp << 2)) = rdx_4;
            rbp = (rbp + rax);
            if (rsi_4 >= rbp)
            {
                rbp = rsi_4;
                if (rbp >= r12)
                {
                    break;
                }
            }
            else
            {
                int32_t* rdx_5 = ((rcx_2 + rdi_1) + 4);
                int64_t rcx_3 = (rcx_2 + (rbp << 2));
                do
                {
                    *rdx_5 = 0xffffffff;
                    rdx_5 = &rdx_5[1];
                } while (rcx_3 != rdx_5);
                if (rbp >= r12)
                {
                    break;
                }
            }
        }
    }
    arg1[6] = rbp;
    arg1[7] = rbp;
}

int64_t sub_407480(int64_t* arg1)
{
    int64_t rbx = arg1[0xb];
    if (arg1[8] <= rbx)
    {
        rbx = arg1[8];
    }
    int64_t r15 = arg1[6];
    int64_t r12_1;
    if ((*(arg1 + 0x8a) == 0 && (arg1[0xf] == 0 && *(arg1 + 0x8c) == 0)))
    {
        int64_t rax_11;
        if (r15 >= rbx)
        {
        label_407733:
            arg1[6] = r15;
            rax_11 = 0;
            arg1[7] = r15;
        }
        else
        {
            void* var_a8_1 = &arg1[4];
            while (true)
            {
                int64_t rbp_5 = r15;
                char* r12_4 = ((arg1[5] + r15) + *arg1);
                uint64_t r13_2 = *r12_4;
                int32_t rax_13;
                if ((r13_2 & 0x80) == 0)
                {
                    rax_13 = mbsinit(var_a8_1);
                    if (rax_13 != 0)
                    {
                        arg1[1][r15] = *__ctype_toupper_loc()[r13_2];
                        *(arg1[2] + (r15 << 2)) = *(arg1[1] + r15);
                        r15 = (r15 + 1);
                    }
                }
                if (((r13_2 & 0x80) != 0 || ((r13_2 & 0x80) == 0 && rax_13 == 0)))
                {
                    mbstate_t rax_14;
                    rax_14.__count = arg1[4];
                    rax_14.__value = *(arg1 + 0x24);
                    uint64_t rdx_10 = (rbx - r15);
                    mbstate_t var_80;
                    var_80.__count = rax_14.__count;
                    var_80.__value = rax_14.__value;
                    uint64_t var_98_1 = rdx_10;
                    wint_t var_84;
                    int32_t* var_90_1 = &var_84;
                    uint64_t rax_15 = sub_4069d0(&var_84, r12_4, rdx_10, var_a8_1);
                    if (rax_15 <= -3)
                    {
                        wint_t rdx_11 = var_84;
                        wchar_t rax_16 = towupper(rdx_11);
                        if (rdx_11 == rax_16)
                        {
                            memcpy((arg1[1] + r15), ((arg1[5] + r15) + *arg1), rax_15);
                        }
                        else
                        {
                            void var_78;
                            if (rax_15 != wcrtomb(&var_78, rax_16, &var_80))
                            {
                                r12_1 = r15;
                                while (true)
                                {
                                    mbstate_t rax_4;
                                    rax_4.__count = arg1[4];
                                    rax_4.__value = *(arg1 + 0x24);
                                    int64_t rdx_1 = arg1[0xf];
                                    var_80.__count = rax_4.__count;
                                    var_80.__value = rax_4.__value;
                                    char* var_a0_1;
                                    if (rdx_1 == 0)
                                    {
                                        var_a0_1 = ((arg1[5] + r12_1) + *arg1);
                                    }
                                    else
                                    {
                                        int32_t rax_34 = arg1[0x12];
                                        if ((rax_34 > 0 && var_98_1 > 0))
                                        {
                                            uint64_t r10_2 = (rax_34 - 1);
                                            int64_t rax_35 = 0;
                                            void* rdi_15 = ((arg1[5] + r12_1) + *arg1);
                                            do
                                            {
                                                *(&var_78 + rax_35) = *(rdx_1 + *(rdi_15 + rax_35));
                                                if (r10_2 == rax_35)
                                                {
                                                    break;
                                                }
                                                rax_35 = (rax_35 + 1);
                                            } while (var_98_1 != rax_35);
                                        }
                                        var_a0_1 = &var_78;
                                    }
                                    uint64_t rax_5 = sub_4069d0(var_90_1, var_a0_1, var_98_1, var_a8_1);
                                    if (rax_5 <= -3)
                                    {
                                        wint_t rdx_3 = var_84;
                                        var_a8_1 = rdx_3;
                                        wint_t rax_6 = towupper(rdx_3);
                                        int64_t r8_1 = r15;
                                        uint64_t rax_7;
                                        int64_t r8_2;
                                        if (var_a8_1 != rax_6)
                                        {
                                            rax_7 = wcrtomb(&var_78, rax_6, &var_80);
                                            void* rcx_2 = &var_78;
                                            r8_1 = r15;
                                            uint64_t r10_1 = rax_7;
                                            if (rax_5 == rax_7)
                                            {
                                                memcpy((arg1[1] + r15), rcx_2, rax_5);
                                                r8_2 = r8_1;
                                            }
                                            else if (rax_7 != -1)
                                            {
                                                int64_t rax_42 = (r15 + rax_7);
                                                int64_t rax_43 = arg1[8];
                                                if (rax_42 > rax_43)
                                                {
                                                    goto label_4075ef;
                                                }
                                                if (arg1[3] == 0)
                                                {
                                                    int64_t rax_49 = malloc((rax_43 << 3));
                                                    arg1[3] = rax_49;
                                                    if (rax_49 == 0)
                                                    {
                                                        rax_11 = 0xc;
                                                        break;
                                                    }
                                                }
                                                if (*(arg1 + 0x8c) == 0)
                                                {
                                                    if (r15 != 0)
                                                    {
                                                        int64_t rdx_30 = arg1[3];
                                                        int64_t rax_44 = 0;
                                                        do
                                                        {
                                                            *(rdx_30 + (rax_44 << 3)) = rax_44;
                                                            rax_44 = (rax_44 + 1);
                                                        } while (r15 != rax_44);
                                                    }
                                                    *(arg1 + 0x8c) = 1;
                                                }
                                                memcpy((arg1[1] + r15), rcx_2, r10_1);
                                                int64_t rdi_20 = (rax_5 - 1);
                                                wint_t* rsi_16 = (arg1[2] + (r15 << 2));
                                                int64_t rax_46 = arg1[3];
                                                *rsi_16 = rax_6;
                                                int64_t* rcx_9 = (rax_46 + (r15 << 3));
                                                int64_t rax_47 = 1;
                                                *rcx_9 = r12_1;
                                                if (r10_1 > 1)
                                                {
                                                    do
                                                    {
                                                        int64_t rdx_32 = rax_47;
                                                        if (rax_47 >= rax_5)
                                                        {
                                                            rdx_32 = rdi_20;
                                                        }
                                                        rcx_9[rax_47] = (rdx_32 + r12_1);
                                                        rsi_16[rax_47] = 0xffffffff;
                                                        rax_47 = (rax_47 + 1);
                                                    } while (rax_47 != r10_1);
                                                }
                                                uint64_t r10_4 = (r10_1 - rax_5);
                                                rbx = (arg1[0xb] + r10_4);
                                                arg1[0xb] = rbx;
                                                if (r12_1 < arg1[0xc])
                                                {
                                                    arg1[0xd] = (arg1[0xd] + r10_4);
                                                }
                                                r15 = rax_42;
                                                if (arg1[8] <= rbx)
                                                {
                                                    rbx = arg1[8];
                                                }
                                                r12_1 = (r12_1 + rax_5);
                                                goto label_4074ba;
                                            }
                                        }
                                        if ((var_a8_1 == rax_6 || (var_a8_1 != rax_6 && rax_5 != rax_7)))
                                        {
                                            memcpy((arg1[1] + r15), var_a0_1, rax_5);
                                            r8_2 = r8_1;
                                        }
                                        int64_t rax_8;
                                        if (*(arg1 + 0x8c) == 0)
                                        {
                                            rax_8 = (r12_1 + rax_5);
                                        }
                                        else
                                        {
                                            rax_8 = r12_1;
                                            if (rax_5 != 0)
                                            {
                                                rax_8 = (rax_5 + r12_1);
                                                int64_t rdx_29 = (arg1[3] + ((r15 - r12_1) << 3));
                                                do
                                                {
                                                    *(rdx_29 + (r12_1 << 3)) = r12_1;
                                                    r12_1 = (r12_1 + 1);
                                                } while (rax_8 != r12_1);
                                            }
                                        }
                                        r12_1 = rax_8;
                                        int64_t rax_9 = arg1[2];
                                        r15 = (r15 + 1);
                                        int64_t rsi_4 = (r8_2 + rax_5);
                                        int64_t rdx_7 = (r8_2 << 2);
                                        *(rax_9 + (r8_2 << 2)) = rax_6;
                                        if (r15 < rsi_4)
                                        {
                                            int32_t* rdx_8 = ((rax_9 + rdx_7) + 4);
                                            int64_t rcx_3 = (rax_9 + (rsi_4 << 2));
                                            do
                                            {
                                                *rdx_8 = 0xffffffff;
                                                rdx_8 = &rdx_8[1];
                                            } while (rcx_3 != rdx_8);
                                            r15 = rsi_4;
                                        }
                                    label_4074ba:
                                        if (r15 < rbx)
                                        {
                                            var_a8_1 = &arg1[4];
                                            var_98_1 = (rbx - r15);
                                            var_90_1 = &var_84;
                                            continue;
                                        }
                                    }
                                    else
                                    {
                                        if ((rax_5 != -2 || (rax_5 == -2 && arg1[8] >= arg1[0xb])))
                                        {
                                            int64_t rdx_25 = arg1[0xf];
                                            uint64_t rax_40 = *((*arg1 + r12_1) + arg1[5]);
                                            if (rdx_25 != 0)
                                            {
                                                rax_40 = *(rdx_25 + rax_40);
                                            }
                                            int64_t rcx_6 = r15;
                                            arg1[1][r15] = rax_40;
                                            if (*(arg1 + 0x8c) != 0)
                                            {
                                                *(arg1[3] + (r15 << 3)) = r12_1;
                                            }
                                            r12_1 = (r12_1 + 1);
                                            r15 = (r15 + 1);
                                            *(arg1[2] + (rcx_6 << 2)) = rax_40;
                                            if (rax_5 == -1)
                                            {
                                                mbstate_t rax_41;
                                                rax_41.__count = var_80.__count;
                                                rax_41.__value = var_80.__value;
                                                arg1[4] = rax_41.__count;
                                                *(arg1 + 0x24) = rax_41.__value;
                                            }
                                            goto label_4074ba;
                                        }
                                        if ((rax_5 == -2 && arg1[8] < arg1[0xb]))
                                        {
                                        label_4075ef:
                                            mbstate_t rax_10;
                                            rax_10.__count = var_80.__count;
                                            rax_10.__value = var_80.__value;
                                            arg1[4] = rax_10.__count;
                                            *(arg1 + 0x24) = rax_10.__value;
                                        }
                                    }
                                    arg1[6] = r15;
                                    rax_11 = 0;
                                    arg1[7] = r12_1;
                                    goto label_407618;
                                }
                                break;
                            }
                            memcpy((arg1[1] + r15), &var_78, rax_15);
                        }
                        int64_t rax_18 = arg1[2];
                        int64_t rdx_15 = (rbp_5 << 2);
                        r15 = (r15 + 1);
                        *(rax_18 + (rbp_5 << 2)) = rax_16;
                        int64_t rbp_6 = (rbp_5 + rax_15);
                        if (r15 < rbp_6)
                        {
                            int32_t* rcx_5 = ((rax_18 + rdx_15) + 4);
                            int64_t rax_19 = (rax_18 + (rbp_6 << 2));
                            do
                            {
                                *rcx_5 = 0xffffffff;
                                rcx_5 = &rcx_5[1];
                            } while (rax_19 != rcx_5);
                            r15 = rbp_6;
                        }
                    }
                    else if (rax_15 != -2)
                    {
                        uint32_t rax_32 = *((*arg1 + r15) + arg1[5]);
                        arg1[1][r15] = rax_32;
                        r15 = (r15 + 1);
                        *(arg1[2] + (rbp_5 << 2)) = rax_32;
                        mbstate_t rax_33;
                        rax_33.__count = var_80.__count;
                        rax_33.__value = var_80.__value;
                        arg1[4] = rax_33.__count;
                        *(arg1 + 0x24) = rax_33.__value;
                    }
                    else
                    {
                        if (arg1[8] < arg1[0xb])
                        {
                            mbstate_t rax_48;
                            rax_48.__count = var_80.__count;
                            rax_48.__value = var_80.__value;
                            arg1[4] = rax_48.__count;
                            *(arg1 + 0x24) = rax_48.__value;
                            goto label_407733;
                        }
                        uint32_t rax_28 = *((*arg1 + r15) + arg1[5]);
                        arg1[1][r15] = rax_28;
                        r15 = (r15 + 1);
                        *(arg1[2] + (rbp_5 << 2)) = rax_28;
                    }
                }
                if (rbx <= r15)
                {
                    goto label_407733;
                }
            }
        }
    label_407618:
        return rax_11;
    }
    r12_1 = arg1[7];
    goto label_4074ba;
}

uint64_t sub_407a80(int64_t* arg1, int32_t arg2)
{
    int64_t rax = arg1[8];
    if (rax <= 0xffffffffffffffe)
    {
        uint64_t rdx_1 = arg1[0xb];
        uint64_t rax_1 = (rax + rax);
        uint64_t rsi = arg2;
        if (rax_1 > rdx_1)
        {
            rax_1 = rdx_1;
        }
        if (rax_1 >= rsi)
        {
            rsi = rax_1;
        }
        int32_t rax_2 = sub_406ee0(arg1, rsi);
        int64_t rax_4;
        int64_t rdi;
        if (rax_2 == 0)
        {
            rdi = arg1[0x17];
            if (rdi != 0)
            {
                rax_4 = realloc(rdi, ((arg1[8] << 3) + 8));
                if (rax_4 != 0)
                {
                    arg1[0x17] = rax_4;
                }
            }
            if (((rdi != 0 && rax_4 != 0) || rdi == 0))
            {
                int32_t rax_5 = arg1[0x12];
                if (arg1[0x11] != 0)
                {
                    if (rax_5 <= 1)
                    {
                        sub_407250(arg1);
                        return rax_2;
                    }
                    /* tailcall */
                    return sub_407480(arg1);
                }
                if (rax_5 > 1)
                {
                    sub_4072d0(arg1);
                    return rax_2;
                }
                int64_t rcx_2 = arg1[0xf];
                if (rcx_2 != 0)
                {
                    int64_t rsi_4 = arg1[0xb];
                    int64_t rax_8 = arg1[6];
                    if (arg1[8] <= rsi_4)
                    {
                        rsi_4 = arg1[8];
                    }
                    if (rsi_4 <= rax_8)
                    {
                        arg1[6] = rax_8;
                        arg1[7] = rax_8;
                    }
                    else
                    {
                        while (true)
                        {
                            arg1[1][rax_8] = *(rcx_2 + *((*arg1 + rax_8) + arg1[5]));
                            rax_8 = (rax_8 + 1);
                            if (rsi_4 == rax_8)
                            {
                                break;
                            }
                            rcx_2 = arg1[0xf];
                        }
                        arg1[6] = rsi_4;
                        arg1[7] = rsi_4;
                    }
                }
            }
        }
        if ((rax_2 != 0 || (rax_2 == 0 && ((rdi != 0 && rax_4 != 0) || rdi == 0))))
        {
            return rax_2;
        }
    }
    return 0xc;
}

uint64_t sub_407bd0(int64_t* arg1, int64_t arg2)
{
    int64_t rax = arg1[8];
    int64_t r12 = arg1[0x18];
    uint64_t rax_1;
    if ((rax > arg2 || (rax <= arg2 && rax >= arg1[0xb])))
    {
        int64_t rax_2 = arg1[6];
        if ((rax_2 <= arg2 && rax_2 < arg1[0xb]))
        {
            rax_1 = sub_407a80(arg1, (arg2 + 1));
            if (rax_1 != 0)
            {
                goto label_407c0a;
            }
        }
    }
    if ((rax <= arg2 && rax < arg1[0xb]))
    {
        rax_1 = sub_407a80(arg1, (arg2 + 1));
        if (rax_1 != 0)
        {
        label_407c0a:
            return rax_1;
        }
    }
    if (r12 >= arg2)
    {
        goto label_407c04;
    }
    memset(((arg1[0x17] + (r12 << 3)) + 8), 0, ((arg2 - r12) << 3));
    arg1[0x18] = arg2;
label_407c04:
    rax_1 = 0;
    goto label_407c0a;
}

int64_t sub_407c60(int64_t* arg1)
{
    free(*arg1);
    free(arg1[3]);
    /* tailcall */
    return free(arg1);
}

uint64_t sub_407c80(int64_t* arg1)
{
    uint64_t rax = (arg1[1] & 0x400ff);
    if (rax == 6)
    {
        /* tailcall */
        return sub_407c60(*arg1);
    }
    if (rax == 3)
    {
        /* tailcall */
        return free(*arg1);
    }
    return rax;
}

int64_t sub_407cb0(int64_t arg1, void* arg2)
{
    sub_407c80((arg2 + 0x28));
    return 0;
}

int64_t sub_407cd0(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    int64_t rdi = arg1[2];
    int64_t rbp = arg1[1];
    int64_t rax_10;
    int64_t r12_1;
    int64_t r13_1;
    if (rdi >= rbp)
    {
        int64_t r14_1 = (rbp + rbp);
        if (r14_1 > 0xaaaaaaaaaaaaaaa)
        {
            goto label_407e92;
        }
        int64_t rax_11 = realloc(*arg1, (rbp << 5));
        if (rax_11 == 0)
        {
            goto label_407e92;
        }
        *arg1 = rax_11;
        int64_t r13_3 = (rbp << 4);
        int64_t rbp_2 = ((rbp + r14_1) << 4);
        r12_1 = realloc(arg1[3], r13_3);
        int64_t rax_13 = realloc(arg1[4], r13_3);
        r13_1 = realloc(arg1[5], rbp_2);
        int64_t rax_15 = realloc(arg1[6], rbp_2);
        if (r12_1 != 0)
        {
            if (rax_13 == 0)
            {
                goto label_407e6c;
            }
            if (r13_1 == 0)
            {
                goto label_407e6c;
            }
            if (rax_15 == 0)
            {
                goto label_407e6c;
            }
            arg1[3] = r12_1;
            rdi = arg1[2];
            arg1[4] = rax_13;
            arg1[5] = r13_1;
            arg1[6] = rax_15;
            arg1[1] = r14_1;
            goto label_407d0c;
        }
    label_407e6c:
        free(r12_1);
        free(rax_13);
        free(r13_1);
        free(rax_15);
    label_407e92:
        rax_10 = -1;
    }
    else
    {
        r12_1 = arg1[3];
        r13_1 = arg1[5];
    label_407d0c:
        int64_t* rax_3 = ((rdi << 4) + *arg1);
        rax_3[1] = arg3;
        *rax_3 = arg2;
        rax_3[1] = (arg3 & 0xfffc00ff);
        int32_t rcx_2;
        rcx_2 = arg3 == 6;
        if (arg3 == 5)
        {
            rcx_2 = *(arg1 + 0xb4) > 1;
        }
        int128_t zmm0 = 0;
        *(rax_3 + 0xa) = ((*(rax_3 + 0xa) & 0xef) | (rcx_2 << 4));
        *(r12_1 + (rdi << 3)) = -1;
        int64_t rax_4 = arg1[2];
        int128_t* rax_6 = (r13_1 + (rax_4 * 0x18));
        *rax_6 = zmm0;
        rax_6[1] = 0;
        int64_t rax_7 = arg1[2];
        int128_t* rax_9 = (arg1[6] + (rax_7 * 0x18));
        *rax_9 = zmm0;
        rax_9[1] = 0;
        rax_10 = arg1[2];
        arg1[2] = (rax_10 + 1);
    }
    return rax_10;
}

int64_t sub_407ea0(int64_t** arg1, int64_t arg2, int32_t arg3)
{
    int64_t r13_1 = (arg2 << 4);
    int64_t* rax = *arg1;
    int64_t rax_1 = sub_407cd0(arg1, *(rax + r13_1), *((rax + r13_1) + 8));
    if (rax_1 != -1)
    {
        int64_t* r8_1 = *arg1;
        int32_t rdi;
        rdi = (arg3 & 0x3ff);
        void* rsi_3 = &r8_1[(rax_1 * 2)];
        int32_t rcx_6 = ((*(rsi_3 + 8) & 0xfffc00ff) | ((rdi & 0x3ff) << 8));
        *(rsi_3 + 8) = rcx_6;
        int32_t rdx_7 = (((((*((r8_1 + r13_1) + 8) >> 8) | rdi) & 0x3ff) << 8) | (rcx_6 & 0xfffc00ff));
        *(rsi_3 + 8) = rdx_7;
        *(rsi_3 + 0xa) = ((rdx_7 >> 0x10) | 4);
        arg1[4][rax_1] = arg2;
    }
    return rax_1;
}

int64_t sub_407f40(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
    int32_t arg5)
{
    int64_t r9 = arg2;
    int64_t r13 = arg3;
    int32_t r12 = arg5;
    int64_t rax_12;
    while (true)
    {
        int64_t rcx = *arg1;
        void* rdi = arg1[5];
        int64_t r14_1 = r13;
        void* rax_3 = ((r9 << 4) + rcx);
        int64_t var_48_1;
        int64_t rbp_2;
        if (*(rax_3 + 8) != 4)
        {
            int64_t r14_3 = (r9 * 0x18);
            void* r8 = (rdi + r14_3);
            int64_t rsi = *(r8 + 8);
            if (rsi == 0)
            {
                int64_t rax_23 = arg1[3];
                *(rax_23 + (r13 << 3)) = *(rax_23 + (r9 << 3));
                rax_12 = 0;
                break;
            }
            rbp_2 = (r13 * 0x18);
            void* rdi_1 = (rdi + rbp_2);
            int64_t r15_1 = **(r8 + 0x10);
            *(rdi_1 + 8) = 0;
            if (rsi != 1)
            {
                int64_t rdx = arg1[2];
                int64_t rsi_1 = (rdx - 1);
                void* rax_6 = ((rsi_1 << 4) + rcx);
                if ((*(rax_6 + 0xa) & 4) == 0)
                {
                label_408149:
                    int64_t rax_21 = sub_407ea0(arg1, r15_1, r12);
                    if (rax_21 == -1)
                    {
                        goto label_408075;
                    }
                    if (sub_406ff0((arg1[5] + rbp_2), rax_21) == 0)
                    {
                        goto label_408075;
                    }
                    rax_12 = sub_407f40(arg1, r15_1, rax_21, arg4, r12);
                    if (rax_12 != 0)
                    {
                        break;
                    }
                    goto label_408041;
                }
                if (rsi_1 <= 0)
                {
                    goto label_408149;
                }
                int64_t r8_2 = arg1[4];
                void* rcx_2 = (((rcx - rax_6) + (rdx << 4)) - 0x20);
                while ((!(*(r8_2 + (rsi_1 << 3)) == r15_1 && r12 == ((*(rax_6 + 8) >> 8) & 0x3ff))))
                {
                    rax_6 = (rax_6 + rcx_2);
                    rsi_1 = (rsi_1 - 1);
                    if ((*(rax_6 + 0xa) & 4) == 0)
                    {
                        break;
                    }
                    if (rsi_1 <= 0)
                    {
                        break;
                    }
                }
                if ((!(*(r8_2 + (rsi_1 << 3)) == r15_1 && r12 == ((*(rax_6 + 8) >> 8) & 0x3ff))))
                {
                    goto label_408149;
                }
                if (sub_406ff0(rdi_1, rsi_1) == 0)
                {
                    goto label_408075;
                }
            label_408041:
                int64_t r9_1 = *(*((arg1[5] + r14_3) + 0x10) + 8);
                var_48_1 = r9_1;
                int64_t rax_10 = sub_407ea0(arg1, r9_1, r12);
                r13 = rax_10;
                if (rax_10 == -1)
                {
                    goto label_408075;
                }
                goto label_408064;
            }
            if ((r9 != arg4 || (r9 == arg4 && r9 == r13)))
            {
                r12 = (r12 | ((*(rax_3 + 8) >> 8) & 0x3ff));
                int64_t rax_16 = sub_407ea0(arg1, r15_1, r12);
                r13 = rax_16;
                if ((rax_16 != -1 && sub_406ff0((arg1[5] + rbp_2), rax_16) != 0))
                {
                    r9 = r15_1;
                    continue;
                }
            }
            if ((r9 == arg4 && r9 != r13))
            {
                rax_12 = 0;
                if (sub_406ff0(rdi_1, r15_1) != 0)
                {
                    break;
                }
            }
            goto label_408075;
        }
        int64_t r15_2 = (r9 << 3);
        rbp_2 = (r13 * 0x18);
        int64_t r9_2 = *(arg1[3] + (r9 << 3));
        *((rdi + rbp_2) + 8) = 0;
        int64_t rax_19 = sub_407ea0(arg1, r9_2, r12);
        r13 = rax_19;
        if (rax_19 == -1)
        {
        label_408075:
            rax_12 = 0xc;
            break;
        }
        int64_t* rax_20 = arg1[3];
        var_48_1 = r9_2;
        rax_20[r14_1] = *(rax_20 + r15_2);
    label_408064:
        r9 = var_48_1;
        if (sub_406ff0((arg1[5] + rbp_2), r13) == 0)
        {
            goto label_408075;
        }
    }
    return rax_12;
}

int64_t sub_4081d0(void* arg1)
{
    free(*(arg1 + 0x30));
    free(*(arg1 + 0x48));
    void* rax = *(arg1 + 0x50);
    if (rax != (arg1 + 8))
    {
        free(*(rax + 0x10));
        free(*(arg1 + 0x50));
    }
    free(*(arg1 + 0x18));
    free(*(arg1 + 0x60));
    free(*(arg1 + 0x58));
    /* tailcall */
    return free(arg1);
}

int64_t sub_408230(void* arg1)
{
    free(*(arg1 + 0x10));
    int64_t rax = free(*(arg1 + 0x18));
    if (*(arg1 + 0x8b) != 0)
    {
        /* tailcall */
        return free(*(arg1 + 8));
    }
    return rax;
}

void sub_408270(void* arg1)
{
    if (*(arg1 + 0xe8) > 0)
    {
        int64_t r13_1 = 0;
        do
        {
            void* r12_1 = *(*(arg1 + 0xf8) + (r13_1 << 3));
            if (*(r12_1 + 0x20) > 0)
            {
                int64_t rbx_1 = 0;
                do
                {
                    void* rbp_1 = *(*(r12_1 + 0x28) + (rbx_1 << 3));
                    rbx_1 = (rbx_1 + 1);
                    free(*(rbp_1 + 0x20));
                    free(rbp_1);
                } while (*(r12_1 + 0x20) > rbx_1);
            }
            free(*(r12_1 + 0x28));
            void* rax_3 = *(r12_1 + 0x10);
            if (rax_3 != 0)
            {
                free(*(rax_3 + 0x10));
                free(*(r12_1 + 0x10));
            }
            r13_1 = (r13_1 + 1);
            free(r12_1);
        } while (*(arg1 + 0xe8) > r13_1);
    }
    *(arg1 + 0xe8) = 0;
    *(arg1 + 0xc8) = 0;
}

int64_t sub_408330(void* arg1, void* arg2)
{
    char rax = *(arg2 + 0x30);
    int64_t rdx = *(arg2 + 0x38);
    int64_t rax_3;
    if (rax <= 0x10)
    {
        switch (rax)
        {
            case 2:
            {
                if (*(arg2 + 0x20) != 0)
                {
                    __assert_fail("node->next == NULL", "lib/regcomp.c", 0x5a9, "link_nfa_nodes");
                    /* no return */
                }
                goto label_408368;
            }
            case 4:
            {
                int64_t rbx_2 = *(*(arg2 + 0x20) + 0x38);
                *(*(arg1 + 0x18) + (rdx << 3)) = rbx_2;
                if (*(arg2 + 0x30) != 4)
                {
                    goto label_408368;
                }
                int64_t* rbp_2 = (*(arg1 + 0x28) + (rdx * 0x18));
                *rbp_2 = 1;
                rbp_2[1] = 1;
                int64_t* rax_13 = malloc(8);
                rbp_2[2] = rax_13;
                if (rax_13 == 0)
                {
                    rbp_2[1] = 0;
                    rax_3 = 0xc;
                    *rbp_2 = 0;
                }
                else
                {
                    *rax_13 = rbx_2;
                    rax_3 = 0;
                }
                goto label_40836e;
            }
            case 8:
            case 9:
            case 0xc:
            {
                int64_t rbp_3 = *(*(arg2 + 0x20) + 0x38);
                int64_t* rbx_3 = (*(arg1 + 0x28) + (rdx * 0x18));
                *rbx_3 = 1;
                rbx_3[1] = 1;
                int64_t* rax_16 = malloc(8);
                rbx_3[2] = rax_16;
                if (rax_16 != 0)
                {
                    *rax_16 = rbp_3;
                    return 0;
                }
                rbx_3[1] = 0;
                rax_3 = 0xc;
                *rbx_3 = 0;
                goto label_40836e;
            }
            case 0xa:
            case 0xb:
            {
                *(arg1 + 0xb0) = (*(arg1 + 0xb0) | 1);
                void* rax_4 = *(arg2 + 8);
                int64_t rbp_1;
                if (rax_4 == 0)
                {
                    rbp_1 = *(*(arg2 + 0x20) + 0x38);
                }
                else
                {
                    rbp_1 = *(*(rax_4 + 0x18) + 0x38);
                }
                void* rax_6 = *(arg2 + 0x10);
                int64_t r12_1;
                if (rax_6 == 0)
                {
                    r12_1 = *(*(arg2 + 0x20) + 0x38);
                }
                else
                {
                    r12_1 = *(*(rax_6 + 0x18) + 0x38);
                }
                if (rbp_1 < 0)
                {
                    __assert_fail("left > -1", "lib/regcomp.c", 0x5b9, "link_nfa_nodes");
                    /* no return */
                }
                if (r12_1 < 0)
                {
                    __assert_fail("right > -1", "lib/regcomp.c", 0x5ba, "link_nfa_nodes");
                    /* no return */
                }
                int64_t* rbx_1 = (*(arg1 + 0x28) + (rdx * 0x18));
                *rbx_1 = 2;
                int64_t* rax_9 = malloc(0x10);
                rbx_1[2] = rax_9;
                if (rax_9 == 0)
                {
                    rax_3 = 0xc;
                }
                else
                {
                    bool cond:0_1 = rbp_1 >= r12_1;
                    if (rbp_1 == r12_1)
                    {
                        rbx_1[1] = 1;
                        *rax_9 = rbp_1;
                        rax_3 = 0;
                    }
                    else
                    {
                        rbx_1[1] = 2;
                        if (cond:0_1)
                        {
                            *rax_9 = r12_1;
                            rax_9[1] = rbp_1;
                            rax_3 = 0;
                        }
                        else
                        {
                            *rax_9 = rbp_1;
                            rax_9[1] = r12_1;
                            rax_3 = 0;
                        }
                    }
                }
                goto label_40836e;
            }
            case 0x10:
            {
                goto label_408368;
            }
        }
    }
    if ((rax & 8) != 0)
    {
        __assert_fail("!IS_EPSILON_NODE (node->token.ty…", "lib/regcomp.c", 0x5cc, "link_nfa_nodes");
        /* no return */
    }
    *(*(arg1 + 0x18) + (rdx << 3)) = *(*(arg2 + 0x20) + 0x38);
label_408368:
    rax_3 = 0;
label_40836e:
    return rax_3;
}

uint64_t sub_4085b0(void* arg1, int64_t arg2)
{
    int64_t rcx_1 = *(arg1 + 0x30);
    int64_t rax = (arg2 + 1);
    uint64_t rax_1;
    int64_t rdx_1;
    if (rax < rcx_1)
    {
        rdx_1 = *(arg1 + 0x10);
        int64_t rdi = (rax << 2);
        if (*(rdx_1 + (rax << 2)) == 0xffffffff)
        {
            int64_t rcx = (rcx_1 - arg2);
            int64_t rsi = ((rdx_1 + rdi) - 4);
            int64_t rdx_2 = 2;
            do
            {
                rax_1 = rdx_2;
                if (rdx_2 == rcx)
                {
                    return rax_1;
                }
                rdx_2 = (rdx_2 + 1);
            } while (*((rsi + (rdx_2 << 2)) - 4) == 0xffffffff);
        }
    }
    if ((rax >= rcx_1 || (rax < rcx_1 && *(rdx_1 + (rax << 2)) != 0xffffffff)))
    {
        rax_1 = 1;
    }
    return rax_1;
}

int64_t sub_408600(int64_t arg1, int64_t* arg2, int64_t arg3)
{
    if (arg1 > 0)
    {
        int64_t r8_1 = *arg2;
        uint64_t rdi = (arg1 - 1);
        uint64_t rcx_2;
        int64_t rsi;
        for (rsi = 0; rsi < rdi; rdi = rcx_2)
        {
            rcx_2 = ((rsi + rdi) >> 1);
            uint64_t rax_1;
            if (arg3 > *(r8_1 + (rcx_2 << 3)))
            {
                rax_1 = rcx_2;
                rcx_2 = rdi;
            }
            else
            {
                for (; rsi < rcx_2; rcx_2 = rax_1)
                {
                    rax_1 = ((rsi + rcx_2) >> 1);
                    if (*(r8_1 + (rax_1 << 3)) < arg3)
                    {
                        break;
                    }
                }
                if (rsi >= rcx_2)
                {
                    break;
                }
            }
            rsi = (rax_1 + 1);
        }
        if (arg3 == *(r8_1 + (rsi << 3)))
        {
            return (rsi + 1);
        }
    }
    return 0;
}

int64_t sub_408670(void* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, 
    int32_t arg5)
{
    int64_t* r14 = &arg2[2];
    int64_t rbx = arg3;
    int64_t rax_7;
    while (true)
    {
        if (sub_408600(arg2[1], r14, rbx) == 0)
        {
            int64_t* rax_4 = ((rbx << 4) + *arg1);
            if ((rax_4[1] != arg5 || (rax_4[1] == arg5 && *rax_4 != arg4)))
            {
                if (sub_406ff0(arg2, rbx) == 0)
                {
                label_408740:
                    rax_7 = 0xc;
                    break;
                }
                int64_t rbx_2 = (rbx * 0x18);
                void* rdx_3 = (*(arg1 + 0x28) + rbx_2);
                int64_t rax_6 = *(rdx_3 + 8);
                if (rax_6 != 0)
                {
                    int64_t* rdx_4 = *(rdx_3 + 0x10);
                    if (rax_6 == 2)
                    {
                        rax_7 = sub_408670(arg1, arg2, rdx_4[1], arg4, arg5);
                        if (rax_7 != 0)
                        {
                            break;
                        }
                        rdx_4 = *((*(arg1 + 0x28) + rbx_2) + 0x10);
                    }
                    rbx = *rdx_4;
                    continue;
                }
            }
            if ((((rax_4[1] == arg5 && *rax_4 == arg4) && arg5 == 9) && sub_406ff0(arg2, rbx) == 0))
            {
                goto label_408740;
            }
        }
        return 0;
    }
    return rax_7;
}

void sub_408770(int64_t* arg1, int64_t* arg2, int64_t arg3)
{
    if (arg3 < *arg1)
    {
        int64_t rax = *arg2;
        do
        {
            *(rax + (arg3 << 3)) = *((rax + (arg3 << 3)) + 8);
            arg3 = (arg3 + 1);
        } while (arg3 < *arg1);
    }
}

int64_t sub_4087a0(void* arg1, void* arg2)
{
    char rax_9 = *(arg2 + 0x30);
    if (rax_9 == 4)
    {
        int64_t rax_5 = *(arg1 + 0xe0);
        if (rax_5 != 0)
        {
            int64_t rcx_2 = *(rax_5 + (*(arg2 + 0x28) << 3));
            *(arg2 + 0x28) = rcx_2;
            *(arg1 + 0xa0) = (*(arg1 + 0xa0) | (1 << rcx_2));
            return 0;
        }
    }
    else if (rax_9 == 0x11)
    {
        void* rax_1 = *(arg2 + 8);
        if ((rax_1 != 0 && *(rax_1 + 0x30) == 0x11))
        {
            int64_t rcx_1 = *(rax_1 + 0x28);
            void** rax_2 = *(rax_1 + 8);
            *(arg2 + 8) = rax_2;
            if (rax_2 != 0)
            {
                *rax_2 = arg2;
            }
            int64_t rax_3 = *(arg1 + 0xe0);
            *(rax_3 + (rcx_1 << 3)) = *(rax_3 + (*(arg2 + 0x28) << 3));
            if (rcx_1 <= 0x3f)
            {
                *(arg1 + 0xa0) = (*(arg1 + 0xa0) & (ROLQ(-2, rcx_1)));
            }
        }
    }
    return 0;
}

int64_t sub_408830(int64_t, void* arg2)
{
    char rax_6 = *(arg2 + 0x30);
    void* rdx = *(arg2 + 8);
    if (rax_6 == 0xb)
    {
        *(rdx + 0x20) = arg2;
        return 0;
    }
    if (rax_6 == 0x10)
    {
        void* rax_4 = *(arg2 + 0x10);
        *(rdx + 0x20) = *(rax_4 + 0x18);
        *(rax_4 + 0x20) = *(arg2 + 0x20);
        return 0;
    }
    if (rdx != 0)
    {
        *(rdx + 0x20) = *(arg2 + 0x20);
    }
    void* rax_1 = *(arg2 + 0x10);
    if (rax_1 != 0)
    {
        *(rax_1 + 0x20) = *(arg2 + 0x20);
    }
    return 0;
}

int64_t sub_408890(void* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4, 
    int64_t arg5, int64_t arg6, int64_t arg7)
{
    int64_t rbx = 0;
    int64_t rax = *(arg1 + 0x98);
    int64_t r15 = *(arg1 + 0xc8);
    int64_t r10_4;
    for (int64_t rax_1 = r15; rbx < rax_1; rax_1 = r10_4)
    {
        int64_t r11_1 = (rbx + rax_1);
        int64_t rbp_1 = *(arg1 + 0xd8);
        r10_4 = (((r11_1 >> 0x3f) + r11_1) >> 1);
        int64_t r13_1;
        if (arg5 > *((rbp_1 + (r10_4 * 0x28)) + 8))
        {
            r13_1 = r10_4;
            r10_4 = rax_1;
        }
        else
        {
            int64_t rax_5;
            for (; rbx < r10_4; r10_4 = rax_5)
            {
                int64_t r11_3 = (rbx + r10_4);
                rax_5 = (((r11_3 >> 0x3f) + r11_3) >> 1);
                r13_1 = rax_5;
                if (*((rbp_1 + (rax_5 * 0x28)) + 8) < arg5)
                {
                    break;
                }
            }
            if (rbx >= r10_4)
            {
                break;
            }
        }
        rbx = (r13_1 + 1);
    }
    if (r15 <= rbx)
    {
        rbx = -1;
    }
    else if (arg5 != *((*(arg1 + 0xd8) + (rbx * 0x28)) + 8))
    {
        rbx = -1;
    }
    int64_t rax_8 = r15;
    int64_t rbp_2;
    int64_t r10_8;
    for (rbp_2 = 0; rbp_2 < rax_8; rax_8 = r10_8)
    {
        int64_t r11_6 = (rbp_2 + rax_8);
        int64_t r11_7 = *(arg1 + 0xd8);
        r10_8 = (((r11_6 >> 0x3f) + r11_6) >> 1);
        int64_t r14_1;
        if (arg7 > *((r11_7 + (r10_8 * 0x28)) + 8))
        {
            r14_1 = r10_8;
            r10_8 = rax_8;
        }
        else
        {
            int64_t rax_12;
            for (; rbp_2 < r10_8; r10_8 = rax_12)
            {
                int64_t r13_3 = (rbp_2 + r10_8);
                rax_12 = (((r13_3 >> 0x3f) + r13_3) >> 1);
                r14_1 = rax_12;
                if (*((r11_7 + (rax_12 * 0x28)) + 8) < arg7)
                {
                    break;
                }
            }
            if (rbp_2 >= r10_8)
            {
                break;
            }
        }
        rbp_2 = (r14_1 + 1);
    }
    if (r15 <= rbp_2)
    {
        rbp_2 = -1;
    }
    else if (arg7 != *((*(arg1 + 0xd8) + (rbp_2 * 0x28)) + 8))
    {
        rbp_2 = -1;
    }
    int32_t rax_21;
    int32_t rax_23;
    int64_t rax_24;
    if (*arg2 > 0)
    {
        int64_t r14_2 = 0;
        do
        {
            int64_t rsi = *(*arg3 + (r14_2 << 3));
            int64_t r12_1 = *((*(*(arg1 + 0xd8) + (rsi * 0x28)) << 4) + *rax);
            rax_21 = sub_406e70(arg1, rsi, r12_1, arg4, arg5, rbx);
            rax_23 = sub_406e70(arg1, *(*arg3 + (r14_2 << 3)), r12_1, arg6, arg7, rbp_2);
            if (rax_21 != rax_23)
            {
                break;
            }
            r14_2 = (r14_2 + 1);
        } while (r14_2 < *arg2);
        if (rax_21 != rax_23)
        {
            rax_24 = 1;
        }
    }
    if ((*arg2 <= 0 || (*arg2 > 0 && rax_21 == rax_23)))
    {
        rax_24 = 0;
    }
    if (((*arg2 <= 0 || (*arg2 > 0 && rax_21 == rax_23)) || (*arg2 > 0 && rax_21 != rax_23)))
    {
        return rax_24;
    }
}

int64_t sub_408ae0(int64_t* arg1, int64_t arg2, int64_t* arg3)
{
    int64_t* rbp = arg3;
    int64_t* rbx = arg1;
    int64_t rax_1;
    while (true)
    {
        int64_t* rcx;
        rax_1 = arg2(rbp, rbx, arg3, rcx);
        if (rax_1 != 0)
        {
            break;
        }
        arg3 = rbx[1];
        rcx = nullptr;
        if (arg3 == 0)
        {
            while (true)
            {
                arg3 = rbx[2];
                if ((arg3 != rcx && arg3 != 0))
                {
                    break;
                }
                int64_t* rdx = *rbx;
                rcx = rbx;
                if (rdx == 0)
                {
                    return rax_1;
                }
                rbx = rdx;
            }
        }
        rbx = arg3;
    }
    return rax_1;
}

int64_t sub_408b40(int64_t* arg1, void* arg2)
{
    if (arg2 != 0)
    {
        int64_t rax_1 = *(arg2 + 8);
        if (rax_1 != 0)
        {
            int64_t rdx = arg1[1];
            int64_t rsi = *arg1;
            int64_t rax_6;
            int64_t rax_11;
            if (rsi < (rdx + (rax_1 << 1)))
            {
                int64_t rax_9 = (rax_1 + rsi);
                int64_t rbp_2 = (rax_9 + rax_9);
                rax_11 = realloc(arg1[2], (rax_9 << 4));
                if (rax_11 == 0)
                {
                    rax_6 = 0xc;
                }
                else
                {
                    rdx = arg1[1];
                    arg1[2] = rax_11;
                    *arg1 = rbp_2;
                    rax_1 = *(arg2 + 8);
                }
            }
            if (((rsi >= (rdx + (rax_1 << 1)) && rdx == 0) || ((rsi < (rdx + (rax_1 << 1)) && rax_11 != 0) && rdx == 0)))
            {
                int64_t rdi_7 = arg1[2];
                int64_t rsi_7 = *(arg2 + 0x10);
                arg1[1] = rax_1;
                memcpy(rdi_7, rsi_7, (*(arg2 + 8) << 3));
            label_408c42:
                rax_6 = 0;
            }
            if ((((rsi < (rdx + (rax_1 << 1)) && rax_11 == 0) || (rsi >= (rdx + (rax_1 << 1)) && rdx == 0)) || ((rsi < (rdx + (rax_1 << 1)) && rax_11 != 0) && rdx == 0)))
            {
                return rax_6;
            }
            if (((rsi >= (rdx + (rax_1 << 1)) && rdx != 0) || ((rsi < (rdx + (rax_1 << 1)) && rax_11 != 0) && rdx != 0)))
            {
                int64_t rbp_1 = (rdx + (rax_1 << 1));
                int64_t rax_2 = (rax_1 - 1);
                int64_t rdx_1 = (rdx - 1);
                int64_t rdi_1 = (!rax_2);
                while (rdi_1 < 0)
                {
                    while (rdx_1 >= 0)
                    {
                        int64_t rcx_1 = arg1[2];
                        int64_t rsi_2 = *(*(arg2 + 0x10) + (rax_2 << 3));
                        int64_t temp1_1 = *(rcx_1 + (rdx_1 << 3));
                        bool cond:0_1 = temp1_1 >= rsi_2;
                        if (temp1_1 == rsi_2)
                        {
                            rax_2 = (rax_2 - 1);
                            rdx_1 = (rdx_1 - 1);
                            rdi_1 = (!rax_2);
                            break;
                        }
                        if (cond:0_1)
                        {
                            rdx_1 = (rdx_1 - 1);
                            break;
                        }
                        rax_2 = (rax_2 - 1);
                        rbp_1 = (rbp_1 - 1);
                        *(rcx_1 + (rbp_1 << 3)) = rsi_2;
                        rdi_1 = (!rax_2);
                        if (rdi_1 >= 0)
                        {
                            break;
                        }
                    }
                    if (rdx_1 < 0)
                    {
                        break;
                    }
                }
                if (rax_2 >= 0)
                {
                    rbp_1 = (rbp_1 - (rax_2 + 1));
                    memcpy((arg1[2] + (rbp_1 << 3)), *(arg2 + 0x10), ((rax_2 + 1) << 3));
                }
                int64_t rcx_2 = arg1[1];
                int64_t r8_1 = ((rcx_2 + (*(arg2 + 8) << 1)) - 1);
                int64_t rdx_5 = (r8_1 - rbp_1);
                int64_t rdx_6 = (rdx_5 + 1);
                if (rdx_5 != -1)
                {
                    int64_t rax_5 = (rcx_2 - 1);
                    int64_t rdi_4 = arg1[2];
                    arg1[1] = (rcx_2 + rdx_6);
                    while (true)
                    {
                        int64_t rsi_4 = *(rdi_4 + (r8_1 << 3));
                        int64_t rcx_4 = *(rdi_4 + (rax_5 << 3));
                        int64_t* r9_2 = (rdi_4 + ((rax_5 + rdx_6) << 3));
                        if (rsi_4 <= rcx_4)
                        {
                            *r9_2 = rcx_4;
                            int64_t temp2_1 = rax_5;
                            rax_5 = (rax_5 - 1);
                            if ((temp2_1 - 1) < 0)
                            {
                                memcpy(rdi_4, (rdi_4 + (rbp_1 << 3)), (rdx_6 << 3));
                                return 0;
                            }
                        }
                        else
                        {
                            r8_1 = (r8_1 - 1);
                            *r9_2 = rsi_4;
                            int64_t temp3_1 = rdx_6;
                            rdx_6 = (rdx_6 - 1);
                            if (temp3_1 == 1)
                            {
                                break;
                            }
                        }
                    }
                }
                goto label_408c42;
            }
        }
    }
    return 0;
}

int64_t sub_408d10(int128_t* arg1, int64_t* arg2, int64_t arg3, char arg4)
{
    int64_t rbp_1 = (arg3 * 0x18);
    void* rbx_1 = (arg2[5] + rbp_1);
    int64_t var_70 = 0;
    int64_t var_78 = (*(rbx_1 + 8) + 1);
    int64_t rax_1 = malloc(((*(rbx_1 + 8) + 1) << 3));
    if (rax_1 != 0)
    {
        void* rdx = *arg2;
        int64_t r13_2 = (arg3 << 4);
        *((arg2[6] + rbp_1) + 8) = -1;
        void* rax_3 = (rdx + r13_2);
        int32_t r8_1 = *(rax_3 + 8);
        int64_t rax_6;
        int128_t* rax_12;
        if ((r8_1 & 0x3ff00) != 0)
        {
            if (*(rbx_1 + 8) == 0)
            {
            label_408f08:
                if (sub_406ff0(&var_78, arg3) != 0)
                {
                    rax_12 = arg2[6];
                label_408f1b:
                    *(rax_12 + rbp_1) = var_78;
                    *((rax_12 + rbp_1) + 0x10) = rax_1;
                label_408f32:
                    int128_t zmm1 = var_78;
                    arg1[1] = rax_1;
                    *arg1 = zmm1;
                    return 0;
                }
            }
            else if ((*((rdx + (**(rbx_1 + 0x10) << 4)) + 0xa) & 4) == 0)
            {
                rax_6 = sub_407f40(arg2, arg3, arg3, arg3, ((r8_1 >> 8) & 0x3ff));
                if (rax_6 != 0)
                {
                    return rax_6;
                }
                rax_3 = (*arg2 + r13_2);
            }
        }
        if (((r8_1 & 0x3ff00) == 0 || ((r8_1 & 0x3ff00) != 0 && *(rbx_1 + 8) != 0)))
        {
            if ((*(rax_3 + 8) & 8) == 0)
            {
                goto label_408f08;
            }
            void* rsi = arg2[5];
            void* rax_4 = (rsi + rbp_1);
            if (*(rax_4 + 8) <= 0)
            {
                goto label_408f08;
            }
            char r13_3 = 0;
            int64_t r14_1 = 0;
            while (true)
            {
                int64_t rdx_1 = *(*(rax_4 + 0x10) + (r14_1 << 3));
                int64_t rbx_3 = (rdx_1 * 0x18);
                int128_t* rax_10 = (arg2[6] + rbx_3);
                int64_t rcx = *(rax_10 + 8);
                if (rcx == -1)
                {
                    rax_4 = (rsi + rbp_1);
                    r13_3 = 1;
                    r14_1 = (r14_1 + 1);
                    if (*(rax_4 + 8) <= r14_1)
                    {
                        break;
                    }
                }
                else
                {
                    int128_t var_58;
                    int64_t var_48;
                    if (rcx != 0)
                    {
                        var_58 = *rax_10;
                        var_48 = rax_10[1];
                    }
                    else
                    {
                        rax_6 = sub_408d10(&var_58, arg2);
                        if (rax_6 != 0)
                        {
                            return rax_6;
                        }
                    }
                    rax_6 = sub_408b40(&var_78, &var_58);
                    if (rax_6 != 0)
                    {
                        return rax_6;
                    }
                    if (*((arg2[6] + rbx_3) + 8) == 0)
                    {
                        r13_3 = 1;
                        free(var_48);
                    }
                    rsi = arg2[5];
                    r14_1 = (r14_1 + 1);
                    rax_4 = (rsi + rbp_1);
                    if (*(rax_4 + 8) <= r14_1)
                    {
                        break;
                    }
                }
            }
            if (sub_406ff0(&var_78, arg3) != 0)
            {
                rax_12 = arg2[6];
                void* rdx_2 = (rax_12 + rbp_1);
                if (arg4 == 1)
                {
                    goto label_408f1b;
                }
                if (r13_3 == 0)
                {
                    goto label_408f1b;
                }
                *(rdx_2 + 8) = 0;
                goto label_408f32;
            }
        }
    }
    return 0xc;
}

uint64_t sub_408f70(int64_t* arg1, int128_t* arg2, int64_t arg3, int32_t arg4)
{
    int64_t r12 = *(arg2 + 8);
    int64_t var_40 = 0;
    int64_t var_48 = r12;
    int64_t rax = malloc((r12 << 3));
    if (rax == 0)
    {
        return 0xc;
    }
    if (r12 > 0)
    {
        int64_t r12_1 = 0;
        do
        {
            int64_t rdx = *(arg2[1] + (r12_1 << 3));
            void* rsi = (arg1[6] + (rdx * 0x18));
            int64_t r9_1 = *(rsi + 8);
            int32_t rax_6;
            if (r9_1 > 0)
            {
                int64_t r11_1 = *(rsi + 0x10);
                int64_t r10_1 = *arg1;
                int64_t rcx_1 = 0;
                int64_t* rax_5;
                int64_t rdi_1;
                do
                {
                    rdi_1 = *(r11_1 + (rcx_1 << 3));
                    rax_5 = ((rdi_1 << 4) + r10_1);
                    if ((arg4 == rax_5[1] && arg3 == *rax_5))
                    {
                        break;
                    }
                    rcx_1 = (rcx_1 + 1);
                } while (r9_1 != rcx_1);
                if ((!(arg4 == rax_5[1] && arg3 == *rax_5)))
                {
                    goto label_409075;
                }
                if (rdi_1 == -1)
                {
                    goto label_409075;
                }
                rax_6 = sub_408670(arg1, &var_48, rdx, arg3, arg4);
                if (rax_6 == 0)
                {
                    goto label_409033;
                }
                goto label_409087;
            }
        label_409075:
            rax_6 = sub_408b40(&var_48, rsi);
            if (rax_6 != 0)
            {
            label_409087:
                free(rax);
                return rax_6;
            }
        label_409033:
            r12_1 = (r12_1 + 1);
        } while (*(arg2 + 8) > r12_1);
    }
    free(arg2[1]);
    int128_t zmm0 = var_48;
    arg2[1] = rax;
    *arg2 = zmm0;
    return 0;
}

int64_t sub_4090b0(int64_t* arg1, void* arg2, void* arg3)
{
    int64_t r10 = *(arg2 + 8);
    if (r10 != 0)
    {
        int64_t r8_1 = *(arg3 + 8);
        if (r8_1 != 0)
        {
            int64_t rax_1 = (r10 + r8_1);
            int64_t rcx = arg1[1];
            int64_t r13 = *arg1;
            int64_t rdi = arg1[2];
            int64_t rax_4;
            int64_t rax_5;
            if ((rax_1 + rcx) > r13)
            {
                int64_t r13_2 = (r13 + rax_1);
                rax_5 = realloc(rdi, (r13_2 << 3));
                rdi = rax_5;
                if (rax_5 == 0)
                {
                    rax_4 = 0xc;
                }
                else
                {
                    rcx = arg1[1];
                    r10 = *(arg2 + 8);
                    arg1[2] = rax_5;
                    *arg1 = r13_2;
                    r8_1 = *(arg3 + 8);
                }
            }
            if ((((rax_1 + rcx) > r13 && rax_5 != 0) || (rax_1 + rcx) <= r13))
            {
                int64_t r13_1 = *(arg2 + 0x10);
                int64_t r11_1 = *(arg3 + 0x10);
                int64_t rax_2 = (r8_1 - 1);
                int64_t r10_1 = (r10 - 1);
                int64_t rsi_1 = ((rcx + r10) + r8_1);
                int64_t rcx_1 = (rcx - 1);
                int64_t r8_2 = *(r13_1 + (r10_1 << 3));
                int64_t rdx_1 = *(r11_1 + (rax_2 << 3));
                while (true)
                {
                    bool cond:0_1 = r8_2 >= rdx_1;
                    if (r8_2 != rdx_1)
                    {
                        int64_t temp1_1;
                        while ((!cond:0_1))
                        {
                            temp1_1 = rax_2;
                            rax_2 = (rax_2 - 1);
                            if ((temp1_1 - 1) < 0)
                            {
                                break;
                            }
                        label_40912d:
                            rdx_1 = *(r11_1 + (rax_2 << 3));
                            cond:0_1 = r8_2 >= rdx_1;
                            if (r8_2 == rdx_1)
                            {
                                break;
                            }
                        }
                        if (((!cond:0_1) && (temp1_1 - 1) < 0))
                        {
                            break;
                        }
                        if (cond:0_1)
                        {
                            int64_t temp0_1 = r10_1;
                            r10_1 = (r10_1 - 1);
                            if ((temp0_1 - 1) < 0)
                            {
                                break;
                            }
                            r8_2 = *(r13_1 + (r10_1 << 3));
                            continue;
                        }
                    }
                    int64_t r9_1;
                    if (rcx_1 >= 0)
                    {
                        do
                        {
                            r9_1 = *(rdi + (rcx_1 << 3));
                            if (r9_1 <= r8_2)
                            {
                                break;
                            }
                            rcx_1 = (rcx_1 - 1);
                        } while (rcx_1 != -1);
                    }
                    if (((rcx_1 < 0 || ((rcx_1 >= 0 && r9_1 <= r8_2) && r9_1 != r8_2)) || (rcx_1 >= 0 && r9_1 > r8_2)))
                    {
                        rsi_1 = (rsi_1 - 1);
                        *(rdi + (rsi_1 << 3)) = r8_2;
                    }
                    int64_t temp2_1 = r10_1;
                    r10_1 = (r10_1 - 1);
                    if ((temp2_1 - 1) >= 0)
                    {
                        int64_t temp3_1 = rax_2;
                        rax_2 = (rax_2 - 1);
                        if ((temp3_1 - 1) >= 0)
                        {
                            r8_2 = *(r13_1 + (r10_1 << 3));
                            goto label_40912d;
                        }
                    }
                    break;
                }
                int64_t rcx_2 = arg1[1];
                int64_t rdx_4 = ((*(arg2 + 8) + rcx_2) + *(arg3 + 8));
                int64_t rax_3 = (rcx_2 - 1);
                int64_t r9_2 = (rdx_4 - 1);
                int64_t rdx_5 = (rdx_4 - rsi_1);
                arg1[1] = (rcx_2 + rdx_5);
                uint64_t rdx_6;
                if ((rdx_5 <= 0 || (rdx_5 > 0 && rax_3 < 0)))
                {
                    rdx_6 = (rdx_5 << 3);
                }
                if ((rdx_5 > 0 && rax_3 >= 0))
                {
                    while (true)
                    {
                        int64_t r8_3 = *(rdi + (r9_2 << 3));
                        int64_t rcx_4 = *(rdi + (rax_3 << 3));
                        int64_t* r10_3 = (rdi + ((rax_3 + rdx_5) << 3));
                        if (r8_3 <= rcx_4)
                        {
                            rax_3 = (rax_3 - 1);
                            *r10_3 = rcx_4;
                            if (rax_3 == -1)
                            {
                                rdx_6 = (rdx_5 << 3);
                                rdi = arg1[2];
                                break;
                            }
                        }
                        else
                        {
                            r9_2 = (r9_2 - 1);
                            *r10_3 = r8_3;
                            int64_t temp4_1 = rdx_5;
                            rdx_5 = (rdx_5 - 1);
                            if (temp4_1 == 1)
                            {
                                rdi = arg1[2];
                                rdx_6 = 0;
                                break;
                            }
                        }
                    }
                }
                memcpy(rdi, (rdi + (rsi_1 << 3)), rdx_6);
                rax_4 = 0;
            }
            return rax_4;
        }
    }
    return 0;
}

void* sub_409270(int64_t* arg1, int32_t* arg2, int64_t* arg3, int64_t* arg4, 
    int128_t* arg5)
{
    int64_t rdi = *arg2;
    int32_t rax;
    void* rax_1;
    int64_t* rax_2;
    int64_t r9_3;
    int64_t* r10;
    if (rdi == 0xf)
    {
        rax_2 = malloc(0x3c8);
        r10 = rax_2;
        if (rax_2 == 0)
        {
            rax_1 = nullptr;
        }
        else
        {
            int64_t rax_3 = *arg1;
            r9_3 = 8;
            *arg1 = r10;
            rdi = 0;
            *r10 = rax_3;
            rax = 1;
        }
    }
    else
    {
        r10 = *arg1;
        rax = (rdi + 1);
        r9_3 = ((rdi << 6) + 8);
    }
    if ((rdi != 0xf || (rdi == 0xf && rax_2 != 0)))
    {
        *arg2 = rax;
        rax_1 = (r10 + r9_3);
        int64_t rsi_1 = (rdi << 6);
        void* rdi_1 = (r10 + rsi_1);
        *(rdi_1 + 8) = 0;
        *(rdi_1 + 0x10) = arg3;
        *(rdi_1 + 0x18) = arg4;
        *(rdi_1 + 0x30) = *arg5;
        *((r10 + rsi_1) + 0x3a) = (*((r10 + rsi_1) + 0x3a) & 0xf3);
        *(rdi_1 + 0x20) = 0;
        *(rdi_1 + 0x28) = 0;
        *(rdi_1 + 0x40) = -1;
        if (arg3 != 0)
        {
            *arg3 = rax_1;
        }
        if (arg4 != 0)
        {
            *arg4 = rax_1;
        }
    }
    return rax_1;
}

void*** sub_409350(int64_t* arg1, void* arg2)
{
    int64_t* r13 = (arg2 + 0x70);
    int32_t* r12 = (arg2 + 0x80);
    int64_t* rbx = arg1;
    void** rbp = *arg1;
    void*** var_30;
    int64_t* r14 = &var_30;
    void*** rax_1;
    while (true)
    {
        rax_1 = sub_409270(r13, r12, nullptr, nullptr, &rbx[5]);
        *r14 = rax_1;
        if (rax_1 == 0)
        {
            break;
        }
        *rax_1 = rbp;
        rbp = *r14;
        *(rbp + 0x32) = (*(rbp + 0x32) | 4);
        int64_t* rax_2 = rbx[1];
        if (rax_2 != 0)
        {
            r14 = &rbp[1];
            rbx = rax_2;
        }
        else
        {
            int64_t* rdx_1 = nullptr;
            int64_t* rax_3;
            while (true)
            {
                rax_3 = rbx[2];
                if ((rax_3 != 0 && rax_3 != rdx_1))
                {
                    break;
                }
                int64_t* rax_4 = *rbx;
                rbp = *rbp;
                rdx_1 = rbx;
                if (rax_4 == 0)
                {
                    break;
                }
                rbx = rax_4;
            }
            if ((!(rax_3 != 0 && rax_3 != rdx_1)))
            {
                rax_1 = var_30;
                break;
            }
            r14 = &rbp[2];
            rbx = rax_3;
        }
    }
    return rax_1;
}

int64_t* sub_409400(int32_t* arg1, int64_t* arg2, void* arg3)
{
    void* rbx = *arg2;
    int64_t* rbp = *(arg3 + 8);
    void* var_60_1;
    void var_48;
    void* r11_1;
    void* r13_1;
    void* r15_2;
    void* rbx_1;
    if ((arg2[7] & 0x10) == 0)
    {
        r13_1 = (rbx + 0x70);
        char var_40_7 = 8;
        var_60_1 = (rbx + 0x80);
        rbx_1 = sub_409270(r13_1, (rbx + 0x80), nullptr, nullptr, &var_48);
        char var_40_8 = 9;
        void* rax_18 = sub_409270(r13_1, (rbx + 0x80), nullptr, nullptr, &var_48);
        r15_2 = rax_18;
        r11_1 = rax_18;
        if (rbp == 0)
        {
            goto label_4094ca;
        }
    }
    else
    {
        int64_t rax;
        if (rbp != 0)
        {
            rax = *(arg3 + 0x28);
            if ((rax <= 0x3f && (TEST_BITQ(*(rbx + 0xa0), rax))))
            {
                r13_1 = (rbx + 0x70);
                char var_40_1 = 8;
                var_60_1 = (rbx + 0x80);
                rbx_1 = sub_409270(r13_1, (rbx + 0x80), nullptr, nullptr, &var_48);
                char var_40_2 = 9;
                r15_2 = sub_409270(r13_1, (rbx + 0x80), nullptr, nullptr, &var_48);
            }
        }
        else
        {
            r13_1 = (rbx + 0x70);
            char var_40_5 = 8;
            var_60_1 = (rbx + 0x80);
            rbx_1 = sub_409270(r13_1, (rbx + 0x80), nullptr, nullptr, &var_48);
            char var_40_6 = 9;
            void* rax_15 = sub_409270(r13_1, (rbx + 0x80), nullptr, nullptr, &var_48);
            r11_1 = rax_15;
            r15_2 = rax_15;
        label_4094ca:
            char var_40_4 = 0x10;
            void* rax_5 = sub_409270(r13_1, var_60_1, rbx_1, r11_1, &var_48);
            rbp = rax_5;
            if (rax_5 == 0)
            {
            label_40960d:
                rbp = nullptr;
                *arg1 = 0xc;
            }
            else
            {
                if (r11_1 == 0)
                {
                    goto label_40960d;
                }
                if (rbx_1 == 0)
                {
                    goto label_40960d;
                }
                if (r15_2 == 0)
                {
                    goto label_40960d;
                }
                int64_t rax_6 = *(arg3 + 0x28);
                *(r15_2 + 0x28) = rax_6;
                *(rbx_1 + 0x28) = rax_6;
                char rax_8 = (*(arg3 + 0x32) & 8);
                *(r15_2 + 0x32) = ((*(r15_2 + 0x32) & 0xf7) | rax_8);
                *(rbx_1 + 0x32) = ((*(rbx_1 + 0x32) & 0xf7) | rax_8);
            }
        }
        if ((((rbp != 0 && rax > 0x3f) || ((rbp != 0 && rax <= 0x3f) && (!(TEST_BITQ(*(rbx + 0xa0), rax))))) || rbp == 0))
        {
            return rbp;
        }
    }
    char var_40_3 = 0x10;
    r11_1 = sub_409270(r13_1, var_60_1, rbp, r15_2, &var_48);
    goto label_4094ca;
}

uint64_t sub_409620(int64_t* arg1, void* arg2)
{
    void* rdx = *(arg2 + 8);
    int32_t var_1c = 0;
    if ((rdx != 0 && *(rdx + 0x30) == 0x11))
    {
        int64_t* rax_2 = sub_409400(&var_1c, arg1, rdx);
        *(arg2 + 8) = rax_2;
        if (rax_2 != 0)
        {
            *rax_2 = arg2;
        }
    }
    void* rdx_1 = *(arg2 + 0x10);
    if ((rdx_1 != 0 && *(rdx_1 + 0x30) == 0x11))
    {
        int64_t* rax_3 = sub_409400(&var_1c, arg1, rdx_1);
        *(arg2 + 0x10) = rax_3;
        if (rax_3 != 0)
        {
            *rax_3 = arg2;
        }
    }
    return var_1c;
}

int64_t sub_4096a0(int64_t* arg1, void* arg2)
{
    int64_t rdx_1 = *(arg2 + 8);
    arg1[1] = rdx_1;
    if (rdx_1 <= 0)
    {
        arg1[2] = 0;
        *arg1 = 0;
        return 0;
    }
    int64_t rbx = (rdx_1 << 3);
    *arg1 = rdx_1;
    int64_t rax = malloc(rbx);
    arg1[2] = rax;
    int64_t rax_1;
    if (rax == 0)
    {
        arg1[1] = 0;
        rax_1 = 0xc;
        *arg1 = 0;
    }
    else
    {
        memcpy(rax, *(arg2 + 0x10), rbx);
        rax_1 = 0;
    }
    return rax_1;
}

int64_t sub_409720(int64_t* arg1, void* arg2, void* arg3)
{
    int64_t rax_1;
    if (arg2 != 0)
    {
        int64_t r12_1 = *(arg2 + 8);
        if ((arg3 != 0 && r12_1 > 0))
        {
            int64_t r15_1 = *(arg3 + 8);
            if (r15_1 <= 0)
            {
                goto label_409831;
            }
            int64_t rdi = (r12_1 + r15_1);
            *arg1 = rdi;
            int64_t* rax = malloc((rdi << 3));
            arg1[2] = rax;
            if (rax != 0)
            {
                int64_t* rdi_2 = rax;
                int64_t r10 = *(arg2 + 0x10);
                int64_t r14 = 0;
                int64_t rcx = 0;
                int64_t rdx = 0;
                while (true)
                {
                    int64_t* rsi = (r10 + (rdx << 3));
                    if (r15_1 <= rcx)
                    {
                        int64_t r12_2 = (r12_1 - rdx);
                        r14 = (r14 + r12_2);
                        memcpy(rdi_2, rsi, (r12_2 << 3));
                        break;
                    }
                    int64_t r9_1 = *(arg3 + 0x10);
                    int64_t rsi_1 = *rsi;
                    r14 = (r14 + 1);
                    int64_t r8_1 = *(r9_1 + (rcx << 3));
                    bool cond:0_1 = rsi_1 == r8_1;
                    if (rsi_1 <= r8_1)
                    {
                        r8_1 = cond:0_1;
                        *rdi_2 = rsi_1;
                        rdx = (rdx + 1);
                        rcx = (rcx + r8_1);
                    }
                    else
                    {
                        rcx = (rcx + 1);
                        *rdi_2 = r8_1;
                    }
                    r12_1 = *(arg2 + 8);
                    rdi_2 = &rdi_2[1];
                    if (rdx >= r12_1)
                    {
                        int64_t rdx_2 = *(arg3 + 8);
                        if (rcx < rdx_2)
                        {
                            void* rdi_4 = &rax[r14];
                            int64_t rbx_3 = (rdx_2 - rcx);
                            r14 = (r14 + rbx_3);
                            memcpy(rdi_4, (r9_1 + (rcx << 3)), (rbx_3 << 3));
                        }
                        break;
                    }
                }
                arg1[1] = r14;
                return 0;
            }
            rax_1 = 0xc;
            goto label_409818;
        }
        if (r12_1 > 0)
        {
            goto label_409831;
        }
    }
    if (arg3 == 0)
    {
    label_4097f9:
        arg1[2] = 0;
        rax_1 = 0;
        *arg1 = 0;
    label_409818:
        return rax_1;
    }
    if (*(arg3 + 8) <= 0)
    {
        goto label_4097f9;
    }
    arg2 = arg3;
label_409831:
    /* tailcall */
    return sub_4096a0(arg1, arg2);
}

int64_t* sub_4098b0(int32_t* arg1, void* arg2, void* arg3, int32_t arg4)
{
    int64_t r10 = *(arg3 + 8);
    bool cond:0 = r10 <= 0;
    int64_t* r14_1;
    if (r10 == 0)
    {
        *arg1 = 0;
        r14_1 = nullptr;
    }
    else
    {
        int64_t r12_1 = (arg4 + r10);
        if ((!cond:0))
        {
            int64_t rax_1 = *(arg3 + 0x10);
            int64_t r10_1 = (rax_1 + (r10 << 3));
            do
            {
                r12_1 = (r12_1 + *rax_1);
                rax_1 = (rax_1 + 8);
            } while (r10_1 != rax_1);
        }
        char r15_1 = arg4;
        int64_t* rax_5 = (*(arg2 + 0x40) + ((*(arg2 + 0x88) & r12_1) * 0x18));
        int64_t r11_1 = *rax_5;
        if (r11_1 > 0)
        {
            int64_t rbx_1 = rax_5[2];
            int64_t r10_2 = 0;
            do
            {
                r14_1 = *(rbx_1 + (r10_2 << 3));
                if (((*r14_1 == r12_1 && (r14_1[0xd] & 0xf) == arg4) && sub_406a50(r14_1[0xa], arg3) != 0))
                {
                    return r14_1;
                }
                r10_2 = (r10_2 + 1);
            } while (r10_2 != r11_1);
        }
        int64_t* rax_10 = calloc(0x70, 1);
        r14_1 = rax_10;
        int32_t rax_12;
        int32_t rax_31;
        if (rax_10 != 0)
        {
            void* rax_11 = &rax_10[1];
            rax_12 = sub_4096a0(rax_11, arg3);
            if (rax_12 != 0)
            {
                free(r14_1);
            }
            else
            {
                bool cond:1_1 = *(arg3 + 8) <= 0;
                r14_1[0xd] = ((r14_1[0xd] & 0xf0) | (r15_1 & 0xf));
                r14_1[0xa] = rax_11;
                if ((!cond:1_1))
                {
                    int64_t* rax_17 = &r14_1[3];
                    int64_t r10_3 = 0;
                    int64_t r14_2 = 0;
                    do
                    {
                        void* rax_21 = ((*(*(arg3 + 0x10) + (r14_2 << 3)) << 4) + *arg2);
                        uint32_t rsi_2 = *(rax_21 + 8);
                        uint32_t rbx_3;
                        rbx_3 = ((*(rax_21 + 8) >> 8) & 0x3ff);
                        uint32_t rdi_2 = rbx_3;
                        if ((rsi_2 != 1 || (rsi_2 == 1 && rdi_2 != 0)))
                        {
                            uint32_t rdx_3 = r14_1[0xd];
                            uint32_t rax_22;
                            rax_22 = (*(rax_21 + 0xa) >> 4);
                            uint32_t r11_2;
                            r11_2 = (rdx_3 >> 5);
                            char rax_26 = ((((rax_22 | r11_2) & 1) << 5) | (rdx_3 & 0xdf));
                            r14_1[0xd] = rax_26;
                            if (rsi_2 == 2)
                            {
                                r14_1[0xd] = (rax_26 | 0x10);
                            }
                            else if (rsi_2 == 4)
                            {
                                r14_1[0xd] = (rax_26 | 0x40);
                            }
                            if (rdi_2 != 0)
                            {
                                if (rax_11 == r14_1[0xa])
                                {
                                    int64_t* rax_34 = malloc(0x18);
                                    r14_1[0xa] = rax_34;
                                    if (rax_34 == 0)
                                    {
                                        sub_4081d0(r14_1);
                                        goto label_409b0d;
                                    }
                                    if (sub_4096a0(rax_34, arg3) != 0)
                                    {
                                        goto label_409b0d;
                                    }
                                    r14_1[0xd] = (r14_1[0xd] | 0x80);
                                    r10_3 = 0;
                                }
                                if ((rbx_3 & 1) != 0)
                                {
                                    if ((r15_1 & 1) == 0)
                                    {
                                    label_409aa3:
                                        int64_t rdx_6 = (r14_2 - r10_3);
                                        if ((r14_2 - r10_3) >= 0)
                                        {
                                            int64_t rax_29 = r14_1[2];
                                            if (rdx_6 < rax_29)
                                            {
                                                r14_1[2] = (rax_29 - 1);
                                                sub_408770(&r14_1[2], rax_17, rdx_6);
                                            }
                                        }
                                        r10_3 = (r10_3 + 1);
                                    }
                                    else if ((rbx_3 & 2) != 0)
                                    {
                                        goto label_409aa3;
                                    }
                                }
                                else if (((rbx_3 & 2) != 0 && (r15_1 & 1) != 0))
                                {
                                    goto label_409aa3;
                                }
                                if (((rbx_3 & 1) == 0 || ((rbx_3 & 1) != 0 && (r15_1 & 1) != 0)))
                                {
                                    if (((rbx_3 & 0x10) != 0 && (r15_1 & 2) == 0))
                                    {
                                        goto label_409aa3;
                                    }
                                    if (((rbx_3 & 0x40) != 0 && (r15_1 & 4) == 0))
                                    {
                                        goto label_409aa3;
                                    }
                                }
                            }
                        }
                        r14_2 = (r14_2 + 1);
                    } while (r14_2 < *(arg3 + 8));
                }
                rax_31 = sub_407120(arg2, r14_1, r12_1);
                if (rax_31 != 0)
                {
                    sub_4081d0(r14_1);
                }
            }
        }
        if ((((rax_10 != 0 && rax_12 != 0) || ((rax_10 != 0 && rax_12 == 0) && rax_31 != 0)) || rax_10 == 0))
        {
        label_409b0d:
            r14_1 = nullptr;
            *arg1 = 0xc;
        }
    }
    return r14_1;
}

int64_t* sub_409bb0(int32_t* arg1, int64_t* arg2, void* arg3)
{
    int64_t rbp = *(arg3 + 8);
    bool cond:0 = rbp <= 0;
    int64_t* rbx_1;
    if (rbp == 0)
    {
        *arg1 = 0;
        rbx_1 = nullptr;
    }
    else
    {
        if ((!cond:0))
        {
            int64_t rax_1 = *(arg3 + 0x10);
            int64_t rcx_1 = (rax_1 + (rbp << 3));
            do
            {
                rbp = (rbp + *rax_1);
                rax_1 = (rax_1 + 8);
            } while (rcx_1 != rax_1);
        }
        int64_t* rax_5 = (arg2[8] + ((arg2[0x11] & rbp) * 0x18));
        int64_t r10_1 = *rax_5;
        if (r10_1 > 0)
        {
            int64_t r11_1 = rax_5[2];
            int64_t r9_1 = 0;
            do
            {
                rbx_1 = *(r11_1 + (r9_1 << 3));
                if ((*rbx_1 == rbp && sub_406a50(&rbx_1[1], arg3) != 0))
                {
                    return rbx_1;
                }
                r9_1 = (r9_1 + 1);
            } while (r10_1 != r9_1);
        }
        int64_t* rax_7 = calloc(0x70, 1);
        rbx_1 = rax_7;
        int32_t rax_8;
        int32_t rax_18;
        if (rax_7 != 0)
        {
            void* r15_1 = &rax_7[1];
            rax_8 = sub_4096a0(r15_1, arg3);
            if (rax_8 != 0)
            {
                free(rbx_1);
            }
            else
            {
                int64_t rax_9 = *(arg3 + 8);
                rbx_1[0xa] = r15_1;
                if (rax_9 > 0)
                {
                    int64_t* rsi_2 = *(arg3 + 0x10);
                    int64_t r8_1 = *arg2;
                    void* r9_2 = &rsi_2[rax_9];
                    while (true)
                    {
                        void* rax_12 = ((*rsi_2 << 4) + r8_1);
                        uint32_t rdi_2 = *(rax_12 + 8);
                        if (rdi_2 != 1)
                        {
                            uint32_t rcx_2 = rbx_1[0xd];
                            uint32_t rdx_1;
                            rdx_1 = (*(rax_12 + 0xa) >> 4);
                            uint32_t r10_2;
                            r10_2 = (rcx_2 >> 5);
                            char rdx_5 = ((((rdx_1 | r10_2) & 1) << 5) | (rcx_2 & 0xdf));
                            rbx_1[0xd] = rdx_5;
                            if (rdi_2 != 2)
                            {
                                if (rdi_2 == 4)
                                {
                                    rbx_1[0xd] = (rdx_5 | 0x40);
                                    goto label_409ccb;
                                }
                                if (rdi_2 == 0xc)
                                {
                                    goto label_409d10;
                                }
                                if ((*(rax_12 + 8) & 0x3ff00) == 0)
                                {
                                    goto label_409ccb;
                                }
                                goto label_409d10;
                            }
                            rbx_1[0xd] = (rdx_5 | 0x10);
                        label_409ccb:
                            rsi_2 = &rsi_2[1];
                            if (r9_2 == rsi_2)
                            {
                                break;
                            }
                        }
                        else
                        {
                            if ((*(rax_12 + 8) & 0x3ff00) == 0)
                            {
                                goto label_409ccb;
                            }
                            uint32_t rdx_7 = rbx_1[0xd];
                            uint32_t rax_13;
                            rax_13 = (*(rax_12 + 0xa) >> 4);
                            uint32_t rcx_4;
                            rcx_4 = (rdx_7 >> 5);
                            rbx_1[0xd] = ((((rax_13 | rcx_4) & 1) << 5) | (rdx_7 & 0xdf));
                        label_409d10:
                            rsi_2 = &rsi_2[1];
                            rbx_1[0xd] = (rbx_1[0xd] | 0x80);
                            if (r9_2 == rsi_2)
                            {
                                break;
                            }
                        }
                    }
                }
                rax_18 = sub_407120(arg2, rbx_1, rbp);
                if (rax_18 != 0)
                {
                    sub_4081d0(rbx_1);
                }
            }
        }
        if ((((rax_7 != 0 && rax_8 != 0) || ((rax_7 != 0 && rax_8 == 0) && rax_18 != 0)) || rax_7 == 0))
        {
            *arg1 = 0xc;
            rbx_1 = nullptr;
        }
    }
    return rbx_1;
}

uint64_t sub_409da0(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    if (arg4 <= 0)
    {
        return 0;
    }
    int64_t rbx = 0;
    uint64_t rax_1;
    while (true)
    {
        void* rsi_2 = *(arg2 + (rbx << 3));
        void* rdx_2 = *(arg3 + (rbx << 3));
        if (rsi_2 == 0)
        {
            *(arg2 + (rbx << 3)) = rdx_2;
            rbx = (rbx + 1);
            if (arg4 != rbx)
            {
                continue;
            }
        }
        else
        {
            if (rdx_2 != 0)
            {
                void var_48;
                rax_1 = sub_409720(&var_48, (rsi_2 + 8), (rdx_2 + 8));
                int32_t var_4c = rax_1;
                if (rax_1 != 0)
                {
                    break;
                }
                *(arg2 + (rbx << 3)) = sub_409bb0(&var_4c, arg1, &var_48);
                int64_t var_38;
                free(var_38);
                rax_1 = var_4c;
                if (rax_1 != 0)
                {
                    break;
                }
            }
            rbx = (rbx + 1);
            if (arg4 != rbx)
            {
                continue;
            }
        }
        rax_1 = 0;
        break;
    }
    return rax_1;
}

uint64_t sub_409e50(void* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, 
    int32_t arg5)
{
    int64_t r11 = 0;
    int64_t rbp = *(arg1 + 0xc8);
    int64_t r9_4;
    for (int64_t rax = rbp; r11 < rax; rax = r9_4)
    {
        int64_t r10_1 = (r11 + rax);
        int64_t r12_1 = *(arg1 + 0xd8);
        r9_4 = (((r10_1 >> 0x3f) + r10_1) >> 1);
        int64_t rbx_1;
        if (arg3 > *((r12_1 + (r9_4 * 0x28)) + 8))
        {
            rbx_1 = r9_4;
            r9_4 = rax;
        }
        else
        {
            int64_t rax_4;
            for (; r9_4 > r11; r9_4 = rax_4)
            {
                int64_t r10_3 = (r9_4 + r11);
                rax_4 = (((r10_3 >> 0x3f) + r10_3) >> 1);
                rbx_1 = rax_4;
                if (arg3 > *((r12_1 + (rax_4 * 0x28)) + 8))
                {
                    break;
                }
            }
            if (r9_4 <= r11)
            {
                break;
            }
        }
        r11 = (rbx_1 + 1);
    }
    uint64_t rax_22;
    if (rbp > r11)
    {
        void* rax_5 = *(arg1 + 0xd8);
        int64_t rbx_2 = (r11 * 0x28);
        if ((*((rax_5 + rbx_2) + 8) == arg3 && r11 != -1))
        {
            int64_t* r13_1 = *(arg1 + 0x98);
            int64_t* var_98_1 = &arg2[2];
            while (true)
            {
                int64_t* r15_1 = (rax_5 + rbx_2);
                int32_t var_5c;
                int64_t var_58;
                int64_t* var_48;
                int64_t rax_13;
                int64_t rax_17;
                int64_t* rax_18;
                int64_t r14_2;
                int64_t r14_3;
                do
                {
                    int64_t r9_7 = *r15_1;
                    int64_t r10_10 = arg2[1];
                    rax_13 = sub_408600(r10_10, var_98_1, r9_7);
                    if (rax_13 != 0)
                    {
                        r14_2 = ((r15_1[3] + arg3) - r15_1[2]);
                        if (arg3 != r14_2)
                        {
                            int64_t rcx_2 = *(r13_1[3] + (r9_7 << 3));
                            int64_t rax_7 = (r14_2 << 3);
                            int64_t** r10_6 = (*(arg1 + 0xb8) + rax_7);
                            int64_t* r9_6 = *r10_6;
                            int64_t rax_8;
                            char rax_10;
                            int64_t* rax_23;
                            int64_t** r10_8;
                            if (r9_6 == 0)
                            {
                                var_58 = 1;
                                int64_t var_50_2 = 1;
                                rax_23 = malloc(8);
                                var_48 = rax_23;
                                if (rax_23 != 0)
                                {
                                    var_5c = 0;
                                    r10_8 = r10_6;
                                    *rax_23 = rcx_2;
                                }
                            }
                            else
                            {
                                rax_8 = sub_408600(r9_6[2], &r9_6[3], rcx_2);
                                if (rax_8 == 0)
                                {
                                    var_5c = sub_4096a0(&var_58, &r9_6[1]);
                                    rax_10 = sub_406ff0(&var_58, rcx_2);
                                    if ((var_5c != 0 || (var_5c == 0 && rax_10 != 1)))
                                    {
                                        free(var_48);
                                        rax_22 = var_5c;
                                        if (rax_22 != 0)
                                        {
                                            return rax_22;
                                        }
                                    }
                                }
                            }
                            if (((r9_6 == 0 && rax_23 == 0) || ((r9_6 != 0 && rax_8 == 0) && (var_5c != 0 || (var_5c == 0 && rax_10 != 1)))))
                            {
                                return 0xc;
                            }
                            if ((((r9_6 != 0 && rax_8 == 0) && var_5c == 0) && rax_10 == 1))
                            {
                                r10_8 = (rax_7 + *(arg1 + 0xb8));
                            }
                            if (((r9_6 == 0 && rax_23 != 0) || (((r9_6 != 0 && rax_8 == 0) && var_5c == 0) && rax_10 == 1)))
                            {
                                *r10_8 = sub_409bb0(&var_5c, r13_1, &var_58);
                                free(var_48);
                                if (*(*(arg1 + 0xb8) + (r14_2 << 3)) == 0)
                                {
                                    rax_22 = var_5c;
                                    if (rax_22 != 0)
                                    {
                                        return rax_22;
                                    }
                                }
                            }
                        }
                        else
                        {
                            r14_3 = **((r13_1[5] + (r9_7 * 0x18)) + 0x10);
                            rax_17 = sub_408600(r10_10, var_98_1, r14_3);
                            if (rax_17 == 0)
                            {
                                var_58 = 1;
                                int64_t var_50_1 = 1;
                                rax_18 = malloc(8);
                                var_48 = rax_18;
                                break;
                            }
                        }
                    }
                    r15_1 = &r15_1[5];
                } while (r15_1[-1] != 0);
                if ((!((rax_13 != 0 && arg3 == r14_2) && rax_17 == 0)))
                {
                    goto label_40a150;
                }
                int32_t rax_19;
                if (rax_18 == 0)
                {
                    int64_t var_50_3 = 0;
                    rax_19 = 0xc;
                    var_58 = 0;
                }
                else
                {
                    *rax_18 = r14_3;
                    rax_19 = 0;
                }
                var_5c = rax_19;
                int32_t rax_20 = sub_408f70(r13_1, &var_58, arg4, arg5);
                int32_t rax_21 = sub_408b40(arg2, &var_58);
                free(var_48);
                rax_22 = var_5c;
                if (((rax_20 | rax_21) | rax_22) != 0)
                {
                    if (rax_22 == 0)
                    {
                        rax_22 = rax_21;
                        if (rax_20 != 0)
                        {
                            rax_22 = rax_20;
                        }
                    }
                    break;
                }
                rax_5 = *(arg1 + 0xd8);
            }
            goto label_40a160;
        }
    }
label_40a150:
    rax_22 = 0;
label_40a160:
    return rax_22;
}

int64_t sub_40a1e0(void* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4)
{
    void* r12 = *(arg1 + 0x98);
    int64_t rax_7;
    if (*arg2 > 0)
    {
        int64_t rbx_1 = 0;
        do
        {
            int64_t rbp_1 = *(*arg3 + (rbx_1 << 3));
            int64_t* rax_4 = ((rbp_1 << 4) + *r12);
            if (rax_4[1] == 8)
            {
                int64_t rax_5 = *rax_4;
                if ((rax_5 <= 0x3f && (TEST_BITQ(*(r12 + 0xa0), rax_5))))
                {
                    int64_t rcx_1 = *(arg1 + 0xe8);
                    int64_t r9_1 = *(arg1 + 0xf8);
                    int64_t rax_9;
                    if (rcx_1 == *(arg1 + 0xf0))
                    {
                        int64_t rax_8 = (rcx_1 + rcx_1);
                        rax_9 = realloc(r9_1, (rcx_1 << 4));
                        r9_1 = rax_9;
                        if (rax_9 != 0)
                        {
                            *(arg1 + 0xf8) = rax_9;
                            rcx_1 = *(arg1 + 0xe8);
                            *(arg1 + 0xf0) = rax_8;
                        }
                    }
                    if (((rcx_1 == *(arg1 + 0xf0) && rax_9 != 0) || rcx_1 != *(arg1 + 0xf0)))
                    {
                        int64_t* rax_6 = calloc(1, 0x30);
                        *(r9_1 + (rcx_1 << 3)) = rax_6;
                        if (rax_6 != 0)
                        {
                            *rax_6 = arg4;
                            rbx_1 = (rbx_1 + 1);
                            rax_6[1] = rbp_1;
                            *(arg1 + 0xe8) = (rcx_1 + 1);
                            if (rbx_1 >= *arg2)
                            {
                                break;
                            }
                            continue;
                        }
                    }
                    rax_7 = 0xc;
                    goto label_40a2d0;
                }
            }
            rbx_1 = (rbx_1 + 1);
        } while (rbx_1 < *arg2);
    }
    rax_7 = 0;
label_40a2d0:
    return rax_7;
}

uint64_t sub_40a330(void* arg1, int64_t arg2, int32_t arg3, int32_t arg4 @ rax)
{
    if (arg2 < 0)
    {
        return *(arg1 + 0x70);
    }
    uint64_t rax_1;
    if (*(arg1 + 0x58) == arg2)
    {
        rax_1 = (((arg4 - arg4) & 2) + 8);
    }
    else if (*(arg1 + 0x90) <= 1)
    {
        uint64_t rax_3 = *(*(arg1 + 8) + arg2);
        char rcx_1 = rax_3;
        rax_1 = 1;
        if (((*(*(arg1 + 0x80) + ((rax_3 >> 6) << 3)) >> rcx_1) & 1) == 0)
        {
            rax_1 = 0;
            if (rcx_1 == 0xa)
            {
            label_40a3ca:
                int32_t rax_7;
                rax_7 = *(arg1 + 0x8d) != 0;
                return (rax_7 + rax_7);
            }
        }
    }
    else
    {
        int64_t rax = *(arg1 + 0x10);
        wint_t rbx_1;
        while (true)
        {
            rbx_1 = *(rax + (arg2 << 2));
            if (rbx_1 != 0xffffffff)
            {
                break;
            }
            arg2 = (arg2 - 1);
            if (arg2 == -1)
            {
                return *(arg1 + 0x70);
            }
        }
        int32_t rax_12;
        if (*(arg1 + 0x8e) != 0)
        {
            rax_12 = iswalnum(rbx_1);
            if ((rax_12 != 0 || (rax_12 == 0 && rbx_1 == 0x5f)))
            {
                rax_1 = 1;
            }
        }
        if ((*(arg1 + 0x8e) == 0 || ((*(arg1 + 0x8e) != 0 && rax_12 == 0) && rbx_1 != 0x5f)))
        {
            rax_1 = 0;
            if (rbx_1 == 0xa)
            {
                goto label_40a3ca;
            }
        }
    }
    return rax_1;
}

uint64_t sub_40a420(void* arg1, char* arg2, int64_t arg3)
{
    char rcx = *(arg1 + 8)[arg3];
    char rax = arg2[8];
    bool cond:0 = rax <= 3;
    if (rax == 3)
    {
        if (((*(*arg2 + ((rcx >> 6) << 3)) >> rcx) & 1) == 0)
        {
            return 0;
        }
    }
    else if (cond:0)
    {
        if (rax != 1)
        {
            return 0;
        }
        if (*arg2 != rcx)
        {
        label_40a4e5:
            return 0;
        }
    }
    else
    {
        if (rax != 5)
        {
            if (rax != 7)
            {
                return 0;
            }
            if (rcx < 0)
            {
                goto label_40a4e5;
            }
        }
        if (rcx == 0xa)
        {
            if ((*(*(arg1 + 0x98) + 0xd8) & 0x40) == 0)
            {
                return 0;
            }
        }
        else if ((rcx == 0 && (*(*(arg1 + 0x98) + 0xd8) & 0x80) != 0))
        {
            goto label_40a4e5;
        }
    }
    int32_t rbx = *(arg2 + 8);
    uint64_t rax_3 = 1;
    if ((rbx & 0x3ff00) != 0)
    {
        uint32_t rbx_1 = (rbx >> 8);
        int32_t rax_4 = sub_40a330(arg1, arg3, *(arg1 + 0xa0), 1);
        uint32_t rcx_2;
        rcx_2 = (rbx_1 & 0x3ff);
        if ((rbx_1 & 4) != 0)
        {
            rax_3 = 0;
            if (((rax_4 & 1) != 0 && (rbx_1 & 8) != 0))
            {
                return 0;
            }
        }
        else if (((rbx_1 & 8) != 0 && (rax_4 & 1) != 0))
        {
            return 0;
        }
        if ((((rbx_1 & 4) != 0 && (rax_4 & 1) != 0) || (rbx_1 & 4) == 0))
        {
            if ((rcx_2 & 0x20) != 0)
            {
                rax_3 = 0;
            }
            if (((rcx_2 & 0x20) == 0 || ((rcx_2 & 0x20) != 0 && (rax_4 & 2) != 0)))
            {
                rax_3 = 1;
                int32_t rdx_3 = ((rax_4 >> 3) & 1);
                if ((rcx_2 & 0x80) != 0)
                {
                    rax_3 = rdx_3;
                }
            }
        }
    }
    return rax_3;
}

int64_t sub_40a550(void* arg1, int64_t arg2, int64_t* arg3, int64_t arg4)
{
    int32_t rax;
    int32_t rax_1 = sub_40a330(arg1, arg4, *(arg1 + 0xa0), rax);
    if (arg2 > 0)
    {
        int64_t r9_1 = *arg3;
        int32_t rax_2 = (rax_1 & 1);
        int64_t rsi_1 = 0;
        int32_t rbp_2 = (rax_1 & 8);
        int32_t r11_2 = (rax_1 & 2);
        int64_t r8_1 = **(arg1 + 0x98);
        do
        {
            int64_t rax_3 = *(r9_1 + (rsi_1 << 3));
            void* rdx_4 = ((rax_3 << 4) + r8_1);
            uint32_t rcx_1 = (*(rdx_4 + 8) >> 8);
            uint32_t rdi;
            rdi = (rcx_1 & 0x3ff);
            if (*(rdx_4 + 8) == 2)
            {
                if (rdi == 0)
                {
                label_40a5f0:
                    return rax_3;
                }
                if ((((rdi & 0x20) == 0 || ((rdi & 0x20) != 0 && r11_2 != 0)) && ((((rcx_1 & 4) == 0 && (rcx_1 & 8) == 0) || (((rcx_1 & 4) == 0 && (rcx_1 & 8) != 0) && rax_2 == 0)) || (((rcx_1 & 4) != 0 && rax_2 != 0) && (rcx_1 & 8) == 0))))
                {
                    if ((rdi & 0x80) == 0)
                    {
                        goto label_40a5f0;
                    }
                    if (rbp_2 != 0)
                    {
                        goto label_40a5f0;
                    }
                }
            }
            rsi_1 = (rsi_1 + 1);
        } while (rsi_1 != arg2);
    }
    return 0;
}

int64_t sub_40a620(int64_t* arg1, int64_t arg2, int32_t arg3)
{
    int32_t r10 = arg3;
    int64_t r15 = arg2;
    int64_t rax = arg1[5];
    int64_t rbp_1 = (arg2 - rax);
    if (rax > arg2)
    {
        if (arg1[0x12] > 1)
        {
            arg1[4] = 0;
        }
        int64_t rax_1 = arg1[0xa];
        arg1[6] = 0;
        rbp_1 = r15;
        arg1[5] = 0;
        arg1[0xb] = rax_1;
        int64_t rax_2 = arg1[0xc];
        arg1[7] = 0;
        arg1[0xd] = rax_2;
        int32_t rax_4 = (r10 & 1);
        *(arg1 + 0x8c) = 0;
        bool cond:0_1 = *(arg1 + 0x8b) == 0;
        arg1[0xe] = (((rax_4 - rax_4) & 2) + 4);
        if (cond:0_1)
        {
            arg1[1] = *arg1;
            if (rbp_1 == 0)
            {
                goto label_40a780;
            }
            goto label_40a6b3;
        }
    }
    int64_t rax_10;
    int64_t rcx_2;
    uint64_t rsi_1;
    if (rbp_1 == 0)
    {
    label_40a780:
        rsi_1 = arg1[0x12];
        rax_10 = arg1[0xb];
        rcx_2 = arg1[0xd];
    label_40a728:
        arg1[5] = r15;
        arg1[0xb] = rax_10;
        arg1[0xd] = rcx_2;
        if (rsi_1 > 1)
        {
            int64_t rax_11;
            if (arg1[0x11] != 0)
            {
                rax_11 = sub_407480(arg1);
                if (rax_11 == 0)
                {
                    goto label_40a74e;
                }
            }
            else
            {
                sub_4072d0(arg1);
            label_40a74e:
                arg1[9] = 0;
                rax_11 = 0;
            }
            return rax_11;
        }
    }
    else
    {
    label_40a6b3:
        uint64_t rax_21 = arg1[7];
        char rdx = *(arg1 + 0x8c);
        int64_t r14_1 = arg1[6];
        char rdx_2;
        if (rax_21 <= rbp_1)
        {
            if (rdx != 0)
            {
                int64_t rdx_35 = arg1[0xa];
                *(arg1 + 0x8c) = 0;
                arg1[0xb] = ((rdx_35 + rbp_1) - r15);
                arg1[0xd] = ((arg1[0xc] + rbp_1) - r15);
            }
            rsi_1 = arg1[0x12];
            int64_t r11_1 = arg1[5];
            arg1[6] = 0;
            if (rsi_1 <= 1)
            {
                uint64_t rcx_3 = *((r11_1 + (*arg1 + rbp_1)) - 1);
                int64_t rax_15 = arg1[0xf];
                arg1[7] = 0;
                if (rax_15 != 0)
                {
                    rcx_3 = *(rax_15 + rcx_3);
                }
                int32_t rdx_5 = 1;
                if (((*(arg1[0x10] + ((rcx_3 >> 6) << 3)) >> rcx_3) & 1) == 0)
                {
                    rdx_5 = 0;
                    if (rcx_3 == 0xa)
                    {
                        int32_t rdx_6;
                        rdx_6 = *(arg1 + 0x8d) != 0;
                        rdx_5 = (rdx_6 + rdx_6);
                    }
                }
                int64_t rax_20 = arg1[0xb];
                int64_t rcx_4 = arg1[0xd];
                arg1[0xe] = rdx_5;
                rax_10 = (rax_20 - rbp_1);
                rcx_2 = (rcx_4 - rbp_1);
                if (*(arg1 + 0x8b) == 0)
                {
                label_40a724:
                    arg1[1] = (arg1[1] + rbp_1);
                    goto label_40a728;
                }
                arg1[5] = r15;
                arg1[0xb] = rax_10;
                arg1[0xd] = rcx_2;
            }
            else
            {
                if (*(arg1 + 0x89) == 0)
                {
                    goto label_40a8a1;
                }
                int64_t rcx_13 = *arg1;
                int64_t r13_4 = (rcx_13 + r11_1);
                int64_t rdx_25 = ((rbp_1 - rsi_1) + r13_4);
                char* r12_5 = ((r13_4 + rbp_1) - 1);
                if (rcx_13 < rdx_25)
                {
                    rcx_13 = rdx_25;
                }
                if (rcx_13 > r12_5)
                {
                    goto label_40a8a1;
                }
                while ((*r12_5 & 0xc0) == 0x80)
                {
                    r12_5 = (r12_5 - 1);
                    if (rcx_13 > r12_5)
                    {
                        break;
                    }
                }
                if ((*r12_5 & 0xc0) == 0x80)
                {
                    goto label_40a8a1;
                }
                int64_t rcx_14 = arg1[0xf];
                char* rsi_10 = r12_5;
                uint64_t rdx_30 = ((arg1[0xb] + r13_4) - r12_5);
                if (rcx_14 != 0)
                {
                    int32_t rsi_16 = 6;
                    if (rdx_30 <= 6)
                    {
                        rsi_16 = rdx_30;
                    }
                    int64_t rax_45 = (rsi_16 - 1);
                    void var_46;
                    if ((rsi_16 - 1) >= 0)
                    {
                        do
                        {
                            *(&var_46 + rax_45) = *(rcx_14 + r12_5[rax_45]);
                            rax_45 = (rax_45 - 1);
                        } while (rax_45 >= 0);
                    }
                    rsi_10 = &var_46;
                }
                uint32_t var_40;
                var_40 = 0;
                uint32_t var_4c;
                uint64_t rax_38 = sub_4069d0(&var_4c, rsi_10, rdx_30, &var_40);
                void* rdx_32 = ((r13_4 + rbp_1) - r12_5);
                uint32_t rdx_8;
                void* r12_3;
                if ((rdx_32 <= rax_38 && rax_38 <= -3))
                {
                    void* rax_40 = (rax_38 - rdx_32);
                    rdx_8 = var_4c;
                    arg1[4] = 0;
                    r12_3 = rax_40;
                    arg1[6] = rax_40;
                }
                int64_t r13_1;
                if (((rdx_32 > rax_38 || (rdx_32 <= rax_38 && rax_38 > -3)) || ((rdx_32 <= rax_38 && rax_38 <= -3) && rdx_8 == 0xffffffff)))
                {
                    r11_1 = arg1[5];
                    rax_21 = arg1[7];
                label_40a8a1:
                    r13_1 = (r11_1 + rax_21);
                    if (r15 > r13_1)
                    {
                        void* rax_22 = &arg1[4];
                        uint32_t* var_68_1 = &var_40;
                        do
                        {
                            int64_t rax_23 = arg1[4];
                            uint64_t r12_2 = (arg1[0xa] - r13_1);
                            rax_21 = sub_4069d0(var_68_1, (*arg1 + r13_1), r12_2, rax_22);
                            rdx_8 = var_40;
                            if ((rax_21 - 1) > -4)
                            {
                                if ((rax_21 == 0 || (rax_21 != 0 && r12_2 == 0)))
                                {
                                    rdx_8 = 0;
                                }
                                if ((rax_21 != 0 && r12_2 != 0))
                                {
                                    rdx_8 = *(*arg1 + r13_1);
                                }
                                arg1[4] = rax_23;
                                rax_21 = 1;
                            }
                            r13_1 = (r13_1 + rax_21);
                        } while (r15 > r13_1);
                        void* r13_2 = (r13_1 - r15);
                        r12_3 = r13_2;
                        arg1[6] = r13_2;
                        if (rdx_8 == 0xffffffff)
                        {
                            goto label_40acd0;
                        }
                    }
                    else
                    {
                        void* r13_5 = (r13_1 - r15);
                        arg1[6] = r13_5;
                        r12_3 = r13_5;
                    label_40acd0:
                        arg1[0xe] = sub_40a330(arg1, (r14_1 - 1), r10, rax_21);
                    label_40a94c:
                        bool cond:7_1 = r12_3 <= 0;
                        if (r12_3 != 0)
                        {
                            if ((!cond:7_1))
                            {
                                int32_t* rax_43 = arg1[2];
                                void* rdx_41 = &rax_43[r12_3];
                                do
                                {
                                    *rax_43 = 0xffffffff;
                                    rax_43 = &rax_43[1];
                                } while (rdx_41 != rax_43);
                            }
                            rdx_2 = *(arg1 + 0x8b);
                            if (rdx_2 != 0)
                            {
                                memset(arg1[1], 0xff, r12_3);
                                r12_3 = arg1[6];
                            }
                        }
                        if (((r12_3 != 0 && rdx_2 != 0) || r12_3 == 0))
                        {
                            rdx_2 = *(arg1 + 0x8b);
                        }
                        arg1[7] = r12_3;
                    }
                }
                if ((((rdx_32 <= rax_38 && rax_38 <= -3) && rdx_8 != 0xffffffff) || (((rdx_32 > rax_38 || (rdx_32 <= rax_38 && rax_38 > -3)) || ((rdx_32 <= rax_38 && rax_38 <= -3) && rdx_8 == 0xffffffff)) && r15 > r13_1)))
                {
                    int32_t rax_25;
                    if (*(arg1 + 0x8e) == 0)
                    {
                    label_40a934:
                        rax_25 = 0;
                        if (rdx_8 == 0xa)
                        {
                            int32_t rax_24;
                            rax_24 = *(arg1 + 0x8d) != 0;
                            rax_25 = (rax_24 + rax_24);
                        }
                        goto label_40a949;
                    }
                    if (iswalnum(rdx_8) == 0)
                    {
                        if (rdx_8 != 0x5f)
                        {
                            goto label_40a934;
                        }
                        goto label_40adc0;
                    }
                label_40adc0:
                    rax_25 = 1;
                label_40a949:
                    arg1[0xe] = rax_25;
                    goto label_40a94c;
                }
            label_40a714:
                rsi_1 = arg1[0x12];
                rax_10 = (arg1[0xb] - rbp_1);
                rcx_2 = (arg1[0xd] - rbp_1);
            }
        }
        else
        {
            if (rdx == 0)
            {
                uint64_t r14_2 = (r14_1 - rbp_1);
                bool cond:2_1 = arg1[0x12] > 1;
                arg1[0xe] = sub_40a330(arg1, (rbp_1 - 1), r10, rax_21);
                if (cond:2_1)
                {
                    int64_t rdi_2 = arg1[2];
                    memmove(rdi_2, (rdi_2 + (rbp_1 << 2)), (r14_2 << 2));
                    r14_2 = (arg1[6] - rbp_1);
                }
                rdx_2 = *(arg1 + 0x8b);
                if (rdx_2 != 0)
                {
                    int64_t rdi_5 = arg1[1];
                    memmove(rdi_5, (rdi_5 + rbp_1), r14_2);
                    rdx_2 = *(arg1 + 0x8b);
                    r14_2 = (arg1[6] - rbp_1);
                }
                arg1[7] = (arg1[7] - rbp_1);
                arg1[6] = r14_2;
                goto label_40a714;
            }
            int64_t r13_3 = arg1[3];
            int64_t rcx_7 = r14_1;
            int64_t rdi_4 = 0;
            int64_t rax_29;
            int64_t rsi_5;
            int64_t r12_4;
            while (true)
            {
                int64_t rdx_9 = (rdi_4 + rcx_7);
                rax_29 = (((rdx_9 >> 0x3f) + rdx_9) >> 1);
                int64_t rdx_10 = *(r13_3 + (rax_29 << 3));
                rsi_5 = rax_29;
                bool cond:3_1 = rdx_10 >= rbp_1;
                if (rdx_10 > rbp_1)
                {
                    rcx_7 = rax_29;
                }
                else
                {
                    if (cond:3_1)
                    {
                        r12_4 = rax_29;
                        rsi_5 = (rsi_5 - 1);
                        break;
                    }
                    rdi_4 = (rax_29 + 1);
                }
                if (rdi_4 >= rcx_7)
                {
                    r12_4 = (rax_29 + 1);
                    if (rdx_10 >= rbp_1)
                    {
                        r12_4 = rax_29;
                        rsi_5 = (rax_29 - 1);
                    }
                    break;
                }
            }
            arg1[0xe] = sub_40a330(arg1, rsi_5, r10, rax_29);
            if (((rbp_1 != r12_4 || (rbp_1 == r12_4 && rbp_1 >= r14_1)) || ((rbp_1 == r12_4 && rbp_1 < r14_1) && *(r13_3 + (r12_4 << 3)) != rbp_1)))
            {
                int64_t rax_35 = arg1[0xa];
                int64_t rcx_10 = arg1[0xc];
                *(arg1 + 0x8c) = 0;
                rax_10 = (rax_35 - r15);
                rcx_2 = (rcx_10 - r15);
                arg1[0xb] = (rax_10 + rbp_1);
                arg1[0xd] = (rcx_2 + rbp_1);
                if (r12_4 > 0)
                {
                    while (*((r13_3 + (r12_4 << 3)) - 8) == rbp_1)
                    {
                        int64_t temp2_1 = r12_4;
                        r12_4 = (r12_4 - 1);
                        if (temp2_1 == 1)
                        {
                            break;
                        }
                    }
                }
                bool cond:8_1 = r12_4 != r14_1;
                int64_t rdx_20;
                if (r12_4 < r14_1)
                {
                    rdx_20 = arg1[2];
                    while (*(rdx_20 + (r12_4 << 2)) == 0xffffffff)
                    {
                        r12_4 = (r12_4 + 1);
                        if (r12_4 == r14_1)
                        {
                            break;
                        }
                    }
                }
                uint64_t rdx_22;
                if (((r12_4 >= r14_1 && cond:8_1) || (r12_4 < r14_1 && *(rdx_20 + (r12_4 << 2)) != 0xffffffff)))
                {
                    rdx_22 = (*(r13_3 + (r12_4 << 3)) - rbp_1);
                    arg1[6] = rdx_22;
                    bool cond:9_1 = rdx_22 <= 0;
                    if (rdx_22 != 0)
                    {
                        if ((!cond:9_1))
                        {
                            int32_t* rax_36 = arg1[2];
                            void* rcx_11 = &rax_36[rdx_22];
                            do
                            {
                                *rax_36 = 0xffffffff;
                                rax_36 = &rax_36[1];
                            } while (rcx_11 != rax_36);
                        }
                        memset(arg1[1], 0xff, rdx_22);
                        rdx_22 = arg1[6];
                        rax_10 = (arg1[0xb] - rbp_1);
                        rcx_2 = (arg1[0xd] - rbp_1);
                    }
                }
                if (((r12_4 >= r14_1 && (!cond:8_1)) || (r12_4 < r14_1 && *(rdx_20 + (r12_4 << 2)) == 0xffffffff)))
                {
                    arg1[6] = 0;
                    rdx_22 = 0;
                }
                arg1[7] = rdx_22;
                rsi_1 = arg1[0x12];
                rdx_2 = *(arg1 + 0x8b);
            }
            if (((rbp_1 == r12_4 && rbp_1 < r14_1) && *(r13_3 + (r12_4 << 3)) == rbp_1))
            {
                int64_t rdi_7 = arg1[2];
                memmove(rdi_7, (rdi_7 + (rbp_1 << 2)), ((r14_1 - rbp_1) << 2));
                int64_t rdi_8 = arg1[1];
                memmove(rdi_8, (rdi_8 + rbp_1), (arg1[6] - rbp_1));
                int64_t rax_31 = arg1[6];
                arg1[7] = (arg1[7] - rbp_1);
                int64_t rax_32 = (rax_31 - rbp_1);
                arg1[6] = rax_32;
                if (rax_32 > 0)
                {
                    int64_t rcx_8 = arg1[3];
                    int64_t rax_33 = 0;
                    int64_t rsi_9 = (rcx_8 + (rbp_1 << 3));
                    do
                    {
                        *(rcx_8 + (rax_33 << 3)) = (*(rsi_9 + (rax_33 << 3)) - rbp_1);
                        rax_33 = (rax_33 + 1);
                    } while (arg1[6] > rax_33);
                }
                rsi_1 = arg1[0x12];
                rdx_2 = *(arg1 + 0x8b);
                rax_10 = (arg1[0xb] - rbp_1);
                rcx_2 = (arg1[0xd] - rbp_1);
            }
        }
        if ((rax_21 > rbp_1 || (rax_21 <= rbp_1 && rsi_1 > 1)))
        {
            if (rdx_2 != 0)
            {
                goto label_40a728;
            }
            goto label_40a724;
        }
    }
    if (*(arg1 + 0x8b) == 0)
    {
        arg1[6] = rax_10;
        goto label_40a74e;
    }
    if (arg1[0x11] != 0)
    {
        sub_407250(arg1);
    }
    else
    {
        int64_t rcx_16 = arg1[0xf];
        if (rcx_16 != 0)
        {
            int64_t rdx_33 = arg1[6];
            if (arg1[8] <= rax_10)
            {
                rax_10 = arg1[8];
            }
            if (rax_10 <= rdx_33)
            {
                rax_10 = rdx_33;
            }
            else
            {
                while (true)
                {
                    arg1[1][rdx_33] = *(rcx_16 + *((*arg1 + rdx_33) + r15));
                    rdx_33 = (rdx_33 + 1);
                    if (rax_10 == rdx_33)
                    {
                        break;
                    }
                    r15 = arg1[5];
                    rcx_16 = arg1[0xf];
                }
            }
            arg1[6] = rax_10;
            arg1[7] = rax_10;
        }
    }
    goto label_40a74e;
}

uint64_t sub_40ae10(void* arg1, int64_t arg2, void* arg3, void* arg4)
{
    int128_t var_58 = 0;
    void* rbp = (*(arg1 + 0x38) + (arg2 * 0x18));
    int64_t var_48 = 0;
    int64_t r10 = *(rbp + 8);
    int64_t rdi_10;
    if (r10 <= 0)
    {
        rdi_10 = 0;
    }
    else
    {
        int64_t rbx_1 = 0;
        do
        {
            int64_t rax_4 = *(*(rbp + 0x10) + (rbx_1 << 3));
            if ((arg2 != rax_4 && (*(((rax_4 << 4) + *arg1) + 8) & 8) != 0))
            {
                void* r11_1 = (rbp + 0x10);
                int64_t r9_2 = (rax_4 * 0x18);
                void* rcx_1 = (*(arg1 + 0x28) + r9_2);
                int64_t* r15_1 = *(rcx_1 + 0x10);
                int64_t r8_1 = *r15_1;
                int64_t rax_5 = sub_408600(r10, r11_1, r8_1);
                if (*(rcx_1 + 8) > 1)
                {
                    int64_t rax_1;
                    if (rax_5 == 0)
                    {
                        rax_1 = sub_408600(*(arg3 + 8), (arg3 + 0x10), r8_1);
                        if (rax_1 != 0)
                        {
                        label_40ae94:
                            int32_t rax_2 = sub_4090b0(&var_58, arg4, (*(arg1 + 0x38) + r9_2));
                            if (rax_2 != 0)
                            {
                                int64_t var_70_1;
                                var_70_1 = rax_2;
                                free(var_48);
                                return var_70_1;
                            }
                            r10 = *(rbp + 8);
                        }
                    }
                    if ((rax_5 != 0 || (rax_5 == 0 && rax_1 == 0)))
                    {
                        int64_t r15_2 = r15_1[1];
                        if (((r15_2 > 0 && sub_408600(r10, r11_1, r15_2) == 0) && sub_408600(*(arg3 + 8), (arg3 + 0x10), r15_2) != 0))
                        {
                            goto label_40ae94;
                        }
                    }
                }
                else if ((rax_5 == 0 && sub_408600(*(arg3 + 8), (arg3 + 0x10), r8_1) != 0))
                {
                    goto label_40ae94;
                }
            }
            rbx_1 = (rbx_1 + 1);
        } while (r10 > rbx_1);
        int64_t r9_3 = 0;
        if (r10 > 0)
        {
            do
            {
                int64_t r10_1 = *(*(rbp + 0x10) + (r9_3 << 3));
                if (sub_408600(*var_58[8], &var_48, r10_1) == 0)
                {
                    int64_t r11_2 = *(arg3 + 8);
                    int64_t* r12_2 = (arg3 + 0x10);
                    int64_t rax_11 = sub_408600(r11_2, r12_2, r10_1);
                    int64_t rax_12 = (rax_11 - 1);
                    if (((rax_11 - 1) >= 0 && rax_12 < r11_2))
                    {
                        *(arg3 + 8) = (r11_2 - 1);
                        sub_408770((arg3 + 8), r12_2, rax_12);
                    }
                }
                r9_3 = (r9_3 + 1);
            } while (*(rbp + 8) > r9_3);
        }
        rdi_10 = var_48;
    }
    free(rdi_10);
    return 0;
}

int64_t sub_40b040(void* arg1, void* arg2)
{
    void* rax = malloc(0x3800);
    int64_t rax_26;
    if (rax == 0)
    {
    label_40b400:
        rax_26 = 0;
    }
    else
    {
        void* r9_1 = arg2;
        int32_t zmm0[0x4] = 0;
        int32_t var_98[0x4] = zmm0;
        void* rax_2 = (rax + 0x1800);
        bool cond:0_1 = *(r9_1 + 0x10) <= 0;
        int32_t var_88_1[0x4] = zmm0;
        *(r9_1 + 0x58) = 0;
        *(r9_1 + 0x60) = 0;
        uint32_t var_d8;
        int64_t var_78;
        int32_t var_58[0x4];
        void* r8_1;
        int64_t r12_1;
        if (cond:0_1)
        {
            free(rax);
        }
        else
        {
            r12_1 = 0;
            int64_t var_d0_1 = 0;
            r8_1 = arg1;
            do
            {
                int64_t rax_3 = (var_d0_1 << 3);
                char* r15_3 = ((*(*(r9_1 + 0x18) + (var_d0_1 << 3)) << 4) + *r8_1);
                uint32_t rbp_1 = r15_3[8];
                uint16_t rax_6 = ((*(r15_3 + 8) >> 8) & 0x3ff);
                switch (rbp_1)
                {
                    case 1:
                    {
                        uint64_t rcx_5 = *r15_3;
                        uint64_t rdx_9 = ((rcx_5 >> 3) & 0x18);
                        *(&var_98 + rdx_9) = (*(&var_98 + rdx_9) | (1 << rcx_5));
                        break;
                    }
                    case 3:
                    {
                        int64_t rsi_10 = *r15_3;
                        int64_t rdx_27 = 0;
                        do
                        {
                            *(&var_98 + rdx_27) = (*(&var_98 + rdx_27) | *(rsi_10 + rdx_27));
                            rdx_27 = (rdx_27 + 8);
                        } while (rdx_27 != 0x20);
                        break;
                    }
                    case 5:
                    {
                        if (*(r8_1 + 0xb4) <= 1)
                        {
                            zmm0 = _mm_cmpeq_epi32(zmm0, zmm0);
                            var_98 = zmm0;
                            var_88_1 = zmm0;
                        }
                        else
                        {
                            int64_t rsi_8 = *(r8_1 + 0x78);
                            int64_t rdx_21 = 0;
                            do
                            {
                                *(&var_98 + rdx_21) = (*(&var_98 + rdx_21) | *(rsi_8 + rdx_21));
                                rdx_21 = (rdx_21 + 8);
                            } while (rdx_21 != 0x20);
                        }
                        break;
                    }
                    case 7:
                    {
                        zmm0 = _mm_cmpeq_epi32(zmm0, zmm0);
                        var_98 = zmm0;
                        break;
                    }
                }
                if ((rbp_1 == 5 || rbp_1 == 7))
                {
                    int32_t rdx_22 = *(r8_1 + 0xd8);
                    if ((rdx_22 & 0x40) == 0)
                    {
                        var_98[0] = (var_98[0] & 0xfffffffffffffbff);
                    }
                    if ((rdx_22 & 0x80) != 0)
                    {
                        var_98[0] = (var_98[0] & 0xfffffffffffffffe);
                    }
                }
                if ((((rbp_1 == 1 || rbp_1 == 3) || rbp_1 == 7) || rbp_1 == 5))
                {
                    if (rax_6 == 0)
                    {
                    label_40b4f5:
                        int64_t r13_4 = 0;
                        if (r12_1 > 0)
                        {
                            int64_t rbp_6 = r12_1;
                            void* r12_3 = rax_2;
                            while (true)
                            {
                                int64_t rdx_16 = (r13_4 << 5);
                                if (rbp_1 == 1)
                                {
                                    uint64_t rcx_8 = *r15_3;
                                    if (((*((((rcx_8 >> 3) & 0x18) + rax_2) + rdx_16) >> rcx_8) & 1) == 0)
                                    {
                                    label_40b53e:
                                        r13_4 = (r13_4 + 1);
                                        r12_3 = (r12_3 + 0x20);
                                        if (r13_4 >= rbp_6)
                                        {
                                        label_40b66f:
                                            r12_1 = rbp_6;
                                            break;
                                        }
                                        continue;
                                    }
                                }
                                int64_t rcx_9 = 0;
                                int64_t rax_37 = 0;
                                do
                                {
                                    int64_t rdx_18 = (*(&var_98 + (rax_37 << 3)) & *(r12_3 + (rax_37 << 3)));
                                    &var_78[rax_37] = rdx_18;
                                    rax_37 = (rax_37 + 1);
                                    rcx_9 = (rcx_9 | rdx_18);
                                } while (rax_37 != 4);
                                if (rcx_9 == 0)
                                {
                                    goto label_40b53e;
                                }
                                int64_t rbx_8 = 0;
                                int64_t rdi_18 = 0;
                                int64_t rdx_19 = 0;
                                do
                                {
                                    int64_t rsi_4 = *(&var_98 + (rdx_19 << 3));
                                    int64_t rax_38 = *(r12_3 + (rdx_19 << 3));
                                    int64_t rcx_12 = ((!rsi_4) & rax_38);
                                    int64_t rax_40 = ((!rax_38) & rsi_4);
                                    *(&var_58 + (rdx_19 << 3)) = rcx_12;
                                    rdi_18 = (rdi_18 | rcx_12);
                                    *(&var_98 + (rdx_19 << 3)) = rax_40;
                                    rdx_19 = (rdx_19 + 1);
                                    rbx_8 = (rbx_8 | rax_40);
                                } while (rdx_19 != 4);
                                int64_t* rdx_20 = (rax + (r13_4 * 0x18));
                                int32_t rax_46;
                                if (rdi_18 != 0)
                                {
                                    void* rax_44 = ((rbp_6 << 5) + rax_2);
                                    *rax_44 = var_58;
                                    int128_t var_48;
                                    *(rax_44 + 0x10) = var_48;
                                    *r12_3 = var_78;
                                    int64_t var_68;
                                    *(r12_3 + 0x10) = var_68;
                                    rax_46 = sub_4096a0((rax + (rbp_6 * 0x18)), rdx_20);
                                    if (rax_46 == 0)
                                    {
                                        rbp_6 = (rbp_6 + 1);
                                    }
                                }
                                if ((((rdi_18 != 0 && rax_46 == 0) || rdi_18 == 0) && sub_406ff0(rdx_20, *(*(r9_1 + 0x18) + rax_3)) != 0))
                                {
                                    if (rbx_8 != 0)
                                    {
                                        goto label_40b53e;
                                    }
                                    goto label_40b66f;
                                }
                                r12_1 = rbp_6;
                                goto label_40b718;
                            }
                        }
                        if (r12_1 == r13_4)
                        {
                            void* rax_52 = ((r12_1 << 5) + rax_2);
                            var_d8 = r9_1;
                            *rax_52 = var_98;
                            *(rax_52 + 0x10) = var_88_1;
                            int64_t rbp_7 = *(*(r9_1 + 0x18) + rax_3);
                            void* r13_5 = (rax + (r12_1 * 0x18));
                            *r13_5 = 1;
                            *(r13_5 + 8) = 1;
                            int64_t* rax_55 = malloc(8);
                            r9_1 = var_d8;
                            *(r13_5 + 0x10) = rax_55;
                            if (rax_55 == 0)
                            {
                                *(r13_5 + 8) = 0;
                                *r13_5 = 0;
                                if (r12_1 == 0)
                                {
                                    free(rax);
                                    goto label_40b400;
                                }
                            label_40b718:
                                void* rbx_9 = (rax + 0x10);
                                void* rbp_8 = (rbx_9 + (r12_1 * 0x18));
                                do
                                {
                                    int64_t rdi_24 = *rbx_9;
                                    rbx_9 = (rbx_9 + 0x18);
                                    free(rdi_24);
                                } while (rbp_8 != rbx_9);
                                free(rax);
                                goto label_40b400;
                            }
                            *rax_55 = rbp_7;
                            r12_1 = (r12_1 + 1);
                            goto label_40b6f9;
                        }
                    }
                    else
                    {
                        int16_t rdx_24;
                        if ((rax_6 & 0x20) != 0)
                        {
                            zmm0 = 0;
                            var_98 = zmm0;
                            var_88_1 = zmm0;
                            *rdx_24[1] = (*var_98[0][1] & 4);
                            if (*rdx_24[1] != 0)
                            {
                                var_98[0] = 0x400;
                            }
                        }
                        if ((((rax_6 & 0x20) != 0 && *rdx_24[1] != 0) || (rax_6 & 0x20) == 0))
                        {
                            if ((rax_6 & 0x80) != 0)
                            {
                            label_40b6f9:
                                zmm0 = 0;
                                var_98 = zmm0;
                                var_88_1 = zmm0;
                            }
                            else
                            {
                                int64_t rsi_2;
                                int64_t rsi_9;
                                if ((rax_6 & 4) != 0)
                                {
                                    if ((rbp_1 == 1 && (r15_3[0xa] & 0x40) == 0))
                                    {
                                        goto label_40b6f9;
                                    }
                                    if (((rbp_1 != 1 && *(r8_1 + 0xb4) <= 1) || ((rbp_1 == 1 && (r15_3[0xa] & 0x40) != 0) && *(r8_1 + 0xb4) <= 1)))
                                    {
                                        rsi_9 = 0;
                                        int64_t rdx_26 = 0;
                                        do
                                        {
                                            int64_t rcx_17 = (*(&var_98 + (rdx_26 << 3)) & *((r8_1 + (rdx_26 << 3)) + 0xb8));
                                            *(&var_98 + (rdx_26 << 3)) = rcx_17;
                                            rdx_26 = (rdx_26 + 1);
                                            rsi_9 = (rsi_9 | rcx_17);
                                        } while (rdx_26 != 4);
                                    }
                                    if (((rbp_1 != 1 && *(r8_1 + 0xb4) > 1) || ((rbp_1 == 1 && (r15_3[0xa] & 0x40) != 0) && *(r8_1 + 0xb4) > 1)))
                                    {
                                        int64_t rdi_17 = *(r8_1 + 0x78);
                                        rsi_2 = 0;
                                        int64_t rcx_6 = 0;
                                        do
                                        {
                                            int64_t rdx_13 = (((!*(rdi_17 + (rcx_6 << 3))) | *((r8_1 + (rcx_6 << 3)) + 0xb8)) & *(&var_98 + (rcx_6 << 3)));
                                            *(&var_98 + (rcx_6 << 3)) = rdx_13;
                                            rcx_6 = (rcx_6 + 1);
                                            rsi_2 = (rsi_2 | rdx_13);
                                        } while (rcx_6 != 4);
                                    }
                                }
                                if ((((rax_6 & 4) == 0 || (((rax_6 & 4) != 0 && ((rbp_1 != 1 && *(r8_1 + 0xb4) <= 1) || ((rbp_1 == 1 && (r15_3[0xa] & 0x40) != 0) && *(r8_1 + 0xb4) <= 1))) && rsi_9 != 0)) || (((rax_6 & 4) != 0 && ((rbp_1 != 1 && *(r8_1 + 0xb4) > 1) || ((rbp_1 == 1 && (r15_3[0xa] & 0x40) != 0) && *(r8_1 + 0xb4) > 1))) && rsi_2 != 0)))
                                {
                                    if ((rax_6 & 8) == 0)
                                    {
                                        goto label_40b4f5;
                                    }
                                    if ((rbp_1 == 1 && (r15_3[0xa] & 0x40) != 0))
                                    {
                                        goto label_40b6f9;
                                    }
                                    if (*(r8_1 + 0xb4) <= 1)
                                    {
                                        int64_t rcx_15 = 0;
                                        int64_t rdx_25 = 0;
                                        do
                                        {
                                            int64_t rax_60 = ((!*((r8_1 + (rdx_25 << 3)) + 0xb8)) & *(&var_98 + (rdx_25 << 3)));
                                            *(&var_98 + (rdx_25 << 3)) = rax_60;
                                            rdx_25 = (rdx_25 + 1);
                                            rcx_15 = (rcx_15 | rax_60);
                                        } while (rdx_25 != 4);
                                        if (rcx_15 != 0)
                                        {
                                            goto label_40b4f5;
                                        }
                                    }
                                    else
                                    {
                                        int64_t rsi_3 = *(r8_1 + 0x78);
                                        int64_t rcx_7 = 0;
                                        int64_t rdx_14 = 0;
                                        do
                                        {
                                            int64_t rax_30 = ((!(*((r8_1 + (rdx_14 << 3)) + 0xb8) & *(rsi_3 + (rdx_14 << 3)))) & *(&var_98 + (rdx_14 << 3)));
                                            *(&var_98 + (rdx_14 << 3)) = rax_30;
                                            rdx_14 = (rdx_14 + 1);
                                            rcx_7 = (rcx_7 | rax_30);
                                        } while (rdx_14 != 4);
                                        if (rcx_7 != 0)
                                        {
                                            goto label_40b4f5;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                var_d0_1 = (var_d0_1 + 1);
            } while (var_d0_1 < *(r9_1 + 0x10));
            if (r12_1 <= 0)
            {
                free(rax);
                if (r12_1 != 0)
                {
                    goto label_40b400;
                }
            }
        }
        if ((cond:0_1 || ((!cond:0_1) && r12_1 <= 0)))
        {
            rax_26 = calloc(8, 0x100);
            *(arg2 + 0x58) = rax_26;
            rax_26 = rax_26 != 0;
        }
        if (((!cond:0_1) && r12_1 > 0))
        {
            int64_t var_70_1 = 0;
            var_78 = (r12_1 + 1);
            int64_t rbx_2 = ((r12_1 + 1) << 3);
            int64_t rax_8 = malloc(rbx_2);
            int64_t r13_1 = rax_8;
            if (rax_8 == 0)
            {
                goto label_40b8fa;
            }
            var_98[0] = 0;
            if (r12_1 > 0xaaaaaaaaaaaa855)
            {
                goto label_40b8fa;
            }
            int64_t rax_10 = (r12_1 * 0x18);
            int64_t* rax_11 = malloc(rax_10);
            if (rax_11 == 0)
            {
                goto label_40b8fa;
            }
            zmm0 = 0;
            int64_t r15_4 = 0;
            void* r13_2 = rax;
            void* var_b8;
            var_b8 = 0;
            void* rax_13 = (rax_11 + (rbx_2 - 8));
            var_d8 = r12_1;
            int64_t* var_d0_2 = rax_13;
            void* rbx_4 = ((rbx_2 - 8) + rax_13);
            int64_t* rbp_3 = (r13_2 + 8);
            var_58 = zmm0;
            int32_t var_48_1[0x4] = zmm0;
            while (true)
            {
                int64_t var_70_2 = 0;
                int64_t r14_2 = 0;
                int64_t rax_16;
                int32_t rax_18;
                if (*rbp_3 > 0)
                {
                    do
                    {
                        rax_16 = *(*(r8_1 + 0x18) + (*(rbp_3[1] + (r14_2 << 3)) << 3));
                        if (rax_16 != -1)
                        {
                            rax_18 = sub_408b40(&var_78, (*(r8_1 + 0x30) + (rax_16 * 0x18)));
                            var_98[0] = rax_18;
                            if (rax_18 != 0)
                            {
                                break;
                            }
                        }
                        r14_2 = (r14_2 + 1);
                    } while (*rbp_3 > r14_2);
                }
                if ((*rbp_3 <= 0 || (*rbp_3 > 0 && (!(rax_16 != -1 && rax_18 != 0)))))
                {
                    int64_t* rax_19 = sub_4098b0(&var_98, r8_1, &var_78, 0);
                    rax_11[r15_4] = rax_19;
                    if ((rax_19 != 0 || (rax_19 == 0 && var_98[0] == 0)))
                    {
                        if (rax_19[0xd] < 0)
                        {
                            int64_t* rax_63 = sub_4098b0(&var_98, r8_1, &var_78, 1);
                            var_d0_2[r15_4] = rax_63;
                            if ((rax_63 != 0 || (rax_63 == 0 && var_98[0] == 0)))
                            {
                                if (rax_63 != rax_11[r15_4])
                                {
                                    char rdi_33 = var_b8;
                                    if (*(r8_1 + 0xb4) >= 2)
                                    {
                                        rdi_33 = 1;
                                    }
                                    var_b8 = rdi_33;
                                }
                                int64_t* rax_64 = sub_4098b0(&var_98, r8_1, &var_78, 2);
                                *(rbx_4 + (r15_4 << 3)) = rax_64;
                                if (rax_64 != 0)
                                {
                                    goto label_40b28a;
                                }
                                if (var_98[0] == 0)
                                {
                                    goto label_40b28a;
                                }
                            }
                        }
                        else
                        {
                            var_d0_2[r15_4] = rax_19;
                            *(rbx_4 + (r15_4 << 3)) = rax_19;
                        label_40b28a:
                            int64_t rax_20 = 0;
                            do
                            {
                                *(&var_58 + rax_20) = (*(&var_58 + rax_20) | *((r13_2 + rax_20) + 0x1800));
                                rax_20 = (rax_20 + 8);
                            } while (rax_20 != 0x20);
                            r15_4 = (r15_4 + 1);
                            rbp_3 = &rbp_3[3];
                            r13_2 = (r13_2 + 0x20);
                            if (r15_4 == var_d8)
                            {
                                break;
                            }
                            continue;
                        }
                    }
                }
                r12_1 = var_d8;
                goto label_40b8ea;
            }
            r12_1 = var_d8;
            var_d8 = &var_58;
            void* rbx_5;
            if (var_b8 != 0)
            {
                rbx_5 = calloc(8, 0x200);
                *(arg2 + 0x60) = rbx_5;
                if (rbx_5 != 0)
                {
                    int64_t* rdx_31 = var_d8;
                    void* rbp_10 = rbx_5;
                    void* r11_2 = (rax + 0x1820);
                    void var_38;
                    do
                    {
                        uint64_t rax_70 = *rdx_31;
                        void* r8_3 = rbp_10;
                        int64_t rcx_21 = 1;
                        if (rax_70 != 0)
                        {
                            do
                            {
                                if ((rax_70 & 1) != 0)
                                {
                                    int64_t r10_2;
                                    if ((*(r11_2 - 0x20) & rcx_21) != 0)
                                    {
                                        r10_2 = 0;
                                    }
                                    else
                                    {
                                        void* rdi_38 = r11_2;
                                        int64_t rsi_16 = 0;
                                        int64_t r9_4;
                                        do
                                        {
                                            r9_4 = *rdi_38;
                                            rsi_16 = (rsi_16 + 1);
                                            rdi_38 = (rdi_38 + 0x20);
                                            r10_2 = rsi_16;
                                        } while ((r9_4 & rcx_21) == 0);
                                    }
                                    *r8_3 = rax_11[r10_2];
                                    *(r8_3 + 0x800) = var_d0_2[r10_2];
                                }
                                rcx_21 = (rcx_21 + rcx_21);
                                r8_3 = (r8_3 + 8);
                                rax_70 = (rax_70 >> 1);
                            } while (rax_70 != 0);
                        }
                        rdx_31 = &rdx_31[1];
                        rbp_10 = (rbp_10 + 0x200);
                        r11_2 = (r11_2 + 8);
                    } while (&var_38 != rdx_31);
                }
            }
            else
            {
                rbx_5 = calloc(8, 0x100);
                *(arg2 + 0x58) = rbx_5;
            }
            if (((var_b8 != 0 && rbx_5 == 0) || (var_b8 == 0 && rbx_5 == 0)))
            {
            label_40b8ea:
                free(rax_11);
                r13_1 = rax_8;
            label_40b8fa:
                free(r13_1);
                void* rbx_10 = (rax + 0x10);
                void* rbp_9 = (rbx_10 + (r12_1 * 0x18));
                do
                {
                    int64_t rdi_28 = *rbx_10;
                    rbx_10 = (rbx_10 + 0x18);
                    free(rdi_28);
                } while (rbx_10 != rbp_9);
                free(rax);
                goto label_40b400;
            }
            if ((var_b8 == 0 && rbx_5 != 0))
            {
                int64_t r11_1 = 0;
                int64_t* rdx_4 = var_d8;
                void* r8_2 = (rax + 0x1820);
                do
                {
                    uint64_t rax_23 = *(rdx_4 + r11_1);
                    int64_t rcx_3 = 1;
                    void* rdi_10 = ((r11_1 << 6) + rbx_5);
                    if (rax_23 != 0)
                    {
                        do
                        {
                            if ((rax_23 & 1) != 0)
                            {
                                int64_t r9_3;
                                if ((*((rax + r11_1) + 0x1800) & rcx_3) != 0)
                                {
                                    r9_3 = 0;
                                }
                                else
                                {
                                    void* rsi_13 = (r8_2 + r11_1);
                                    int64_t r9_2 = 0;
                                    int64_t r15_5;
                                    do
                                    {
                                        r15_5 = *rsi_13;
                                        r9_2 = (r9_2 + 1);
                                        rsi_13 = (rsi_13 + 0x20);
                                    } while ((r15_5 & rcx_3) == 0);
                                    r9_3 = (r9_2 << 3);
                                }
                                if ((*((r8_1 + r11_1) + 0xb8) & rcx_3) == 0)
                                {
                                    *rdi_10 = *(rax_11 + r9_3);
                                }
                                else
                                {
                                    *rdi_10 = *(var_d0_2 + r9_3);
                                }
                            }
                            rcx_3 = (rcx_3 + rcx_3);
                            rdi_10 = (rdi_10 + 8);
                            rax_23 = (rax_23 >> 1);
                        } while (rax_23 != 0);
                    }
                    r11_1 = (r11_1 + 8);
                } while (r11_1 != 0x20);
            }
            if (((var_b8 != 0 && rbx_5 != 0) || (var_b8 == 0 && rbx_5 != 0)))
            {
                if ((*var_58[0][1] & 4) != 0)
                {
                    int64_t rax_24 = 0;
                    do
                    {
                        if ((*((rax + (rax_24 << 5)) + 0x1801) & 4) != 0)
                        {
                            int64_t rax_66 = *(rbx_4 + (rax_24 << 3));
                            *(rbx_5 + 0x50) = rax_66;
                            if (var_b8 != 0)
                            {
                                *(rbx_5 + 0x850) = rax_66;
                            }
                            break;
                        }
                        rax_24 = (rax_24 + 1);
                    } while (rax_24 != r12_1);
                }
                free(rax_11);
                free(rax_8);
                void* rbp_5 = (rax + 0x10);
                void* rbx_7 = (rax_10 + rbp_5);
                do
                {
                    int64_t rdi_13 = *rbp_5;
                    rbp_5 = (rbp_5 + 0x18);
                    free(rdi_13);
                } while (rbx_7 != rbp_5);
                free(rax);
                rax_26 = 1;
            }
        }
    }
    return rax_26;
}

int64_t sub_40bb50(int64_t* arg1, void* arg2)
{
    if (*(arg2 + 0x30) == 0x10)
    {
        void* rax = *(arg2 + 8);
        int64_t rax_1 = *(rax + 0x38);
        *(arg2 + 0x18) = *(rax + 0x18);
        *(arg2 + 0x38) = rax_1;
        return 0;
    }
    *(arg2 + 0x18) = arg2;
    int64_t rax_3 = sub_407cd0(arg1, *(arg2 + 0x28), *(arg2 + 0x30));
    *(arg2 + 0x38) = rax_3;
    int64_t rax_4;
    if (rax_3 == -1)
    {
        rax_4 = 0xc;
    }
    else
    {
        rax_4 = 0;
        if (*(arg2 + 0x30) == 0xc)
        {
            void* rdx_4 = ((rax_3 << 4) + *arg1);
            *(rdx_4 + 8) = ((*(rdx_4 + 8) & 0xfffc00ff) | ((*(arg2 + 0x28) & 0x3ff) << 8));
        }
    }
    return rax_4;
}

int64_t sub_40bbe0(int64_t* arg1)
{
    void* rdi = *arg1;
    if ((rdi != 0 && arg1[2] != 0))
    {
        int64_t rbx_1 = 0;
        while (true)
        {
            int64_t rax_1 = rbx_1;
            rbx_1 = (rbx_1 + 1);
            sub_407c80((rdi + (rax_1 << 4)));
            if (arg1[2] <= rbx_1)
            {
                break;
            }
            rdi = *arg1;
        }
    }
    int64_t rbx_2 = 0;
    free(arg1[3]);
    if (arg1[2] != 0)
    {
        do
        {
            int64_t rax_3 = arg1[6];
            if (rax_3 != 0)
            {
                free(*((rax_3 + (rbx_2 * 0x18)) + 0x10));
            }
            int64_t rax_4 = arg1[7];
            if (rax_4 != 0)
            {
                free(*((rax_4 + (rbx_2 * 0x18)) + 0x10));
            }
            int64_t rax_5 = arg1[5];
            if (rax_5 != 0)
            {
                free(*((rax_5 + (rbx_2 * 0x18)) + 0x10));
            }
            rbx_2 = (rbx_2 + 1);
        } while (arg1[2] > rbx_2);
    }
    int64_t r13 = 0;
    free(arg1[5]);
    free(arg1[6]);
    free(arg1[7]);
    free(*arg1);
    int64_t rdi_10 = arg1[8];
    if (rdi_10 != 0)
    {
        while (true)
        {
            int64_t rbx_3 = 0;
            int64_t* rbp_1 = (rdi_10 + (r13 * 0x18));
            if (*rbp_1 > 0)
            {
                do
                {
                    void* rdi_11 = *(rbp_1[2] + (rbx_3 << 3));
                    rbx_3 = (rbx_3 + 1);
                    sub_4081d0(rdi_11);
                } while (rbx_3 < *rbp_1);
            }
            r13 = (r13 + 1);
            free(rbp_1[2]);
            if (arg1[0x11] < r13)
            {
                break;
            }
            rdi_10 = arg1[8];
        }
        rdi_10 = arg1[8];
    }
    free(rdi_10);
    int64_t rdi_13 = arg1[0xf];
    if (rdi_13 != 0x417ba0)
    {
        free(rdi_13);
    }
    free(arg1[0x1c]);
    /* tailcall */
    return free(arg1);
}

int64_t sub_40bd60(int64_t* arg1)
{
    if (*arg1 > 0)
    {
        int64_t rbx_1 = 0;
        do
        {
            int64_t rbp_1 = (rbx_1 * 3);
            rbx_1 = (rbx_1 + 1);
            int64_t rbp_2 = (rbp_1 << 4);
            free(*((arg1[2] + rbp_2) + 0x28));
            free(*((arg1[2] + rbp_2) + 0x10));
        } while (rbx_1 < *arg1);
    }
    /* tailcall */
    return free(arg1[2]);
}

int64_t sub_40bdb0(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4, 
    int64_t arg5, int128_t* arg6)
{
    int64_t rax = *arg1;
    int64_t rax_1 = (rax - 1);
    *arg1 = rax_1;
    if ((rax - 1) < 0)
    {
        __assert_fail("num >= 0", "lib/regexec.c", 0x54f, "pop_fail_stack");
        /* no return */
    }
    int64_t rbx_1 = (rax_1 * 0x30);
    int64_t* rax_3 = (*arg2 + rbx_1);
    *arg3 = *rax_3;
    memcpy(arg5, rax_3[2], (arg4 << 4));
    free(arg6[1]);
    free(*((*arg2 + rbx_1) + 0x10));
    void* rbx_2 = (rbx_1 + *arg2);
    *arg6 = *(rbx_2 + 0x18);
    arg6[1] = *(rbx_2 + 0x28);
    return *(rbx_2 + 8);
}

int64_t sub_40be40(int64_t* arg1, char* arg2)
{
    uint64_t rax = strlen(arg2);
    if (rax != 1)
    {
        return 3;
    }
    uint64_t rcx = *arg2;
    uint64_t rdx_2 = ((rcx >> 3) & 0x18);
    *(arg1 + rdx_2) = (*(arg1 + rdx_2) | (rax << rcx));
    return 0;
}

int64_t sub_40be90(void* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4, 
    int64_t* arg5, void* arg6, int64_t arg7)
{
    void* const r12 = arg6;
    bool c = false;
    bool z = (arg7 & 0x400000) == 0;
    int64_t rax_1;
    int64_t rcx_1;
    bool c_2;
    bool z_2;
    if ((!z))
    {
        void* const rdi = "upper";
        int64_t rcx = 6;
        void* rsi = arg6;
        while (rcx != 0)
        {
            char temp2_1 = *rsi;
            char temp3_1 = *rdi;
            c = temp2_1 < temp3_1;
            z = temp2_1 == temp3_1;
            rsi = (rsi + 1);
            rdi = (rdi + 1);
            rcx = (rcx - 1);
            if ((!z))
            {
                break;
            }
        }
        char rax = (((!z) && (!c)) - 0);
        bool c_1 = false;
        bool z_1 = (rax & rax) == 0;
        if ((!z_1))
        {
            int64_t rcx_6 = 6;
            void* const rdi_4 = "lower";
            void* rsi_5 = arg6;
            while (rcx_6 != 0)
            {
                char temp6_1 = *rsi_5;
                char temp7_1 = *rdi_4;
                c_1 = temp6_1 < temp7_1;
                z_1 = temp6_1 == temp7_1;
                rsi_5 = (rsi_5 + 1);
                rdi_4 = (rdi_4 + 1);
                rcx_6 = (rcx_6 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
            rcx_1 = *arg4;
            if ((((!z_1) && (!c_1)) - 0) == 0)
            {
                r12 = "alpha";
            }
            rax_1 = *arg3;
            int64_t temp10_1 = *arg5;
            c_2 = temp10_1 < rcx_1;
            z_2 = temp10_1 == rcx_1;
            if (z_2)
            {
                goto label_40bff5;
            }
            goto label_40beec;
        }
        r12 = "alpha";
    }
    rcx_1 = *arg4;
    rax_1 = *arg3;
    int64_t temp1_1 = *arg5;
    c_2 = temp1_1 < rcx_1;
    z_2 = temp1_1 == rcx_1;
    if ((!z_2))
    {
        goto label_40beec;
    }
label_40bff5:
    int64_t r14_1 = ((rcx_1 + rcx_1) + 1);
    rax_1 = realloc(rax_1, (r14_1 << 3));
    c_2 = false;
    z_2 = (rax_1 & rax_1) == 0;
    int64_t rax_6;
    if (z_2)
    {
        rax_6 = 0xc;
    }
    else
    {
        *arg3 = rax_1;
        *arg5 = r14_1;
        rcx_1 = *arg4;
    label_40beec:
        *arg4 = (rcx_1 + 1);
        void* const rdi_2 = "alnum";
        int64_t rcx_2 = 6;
        void* const rsi_1 = r12;
        *(rax_1 + (rcx_1 << 3)) = wctype(r12);
        while (rcx_2 != 0)
        {
            char temp4_1 = *rsi_1;
            char temp5_1 = *rdi_2;
            c_2 = temp4_1 < temp5_1;
            z_2 = temp4_1 == temp5_1;
            rsi_1 = (rsi_1 + 1);
            rdi_2 = (rdi_2 + 1);
            rcx_2 = (rcx_2 - 1);
            if ((!z_2))
            {
                break;
            }
        }
        wctype_t rax_2;
        rax_2 = ((!z_2) && (!c_2));
        rax_2 = (rax_2 - 0);
        bool c_3 = false;
        bool z_3 = (rax_2 & rax_2) == 0;
        if ((!z_3))
        {
            void* const rdi_3 = "cntrl";
            int64_t rcx_3 = 6;
            void* const rsi_2 = r12;
            while (rcx_3 != 0)
            {
                char temp8_1 = *rsi_2;
                char temp9_1 = *rdi_3;
                c_3 = temp8_1 < temp9_1;
                z_3 = temp8_1 == temp9_1;
                rsi_2 = (rsi_2 + 1);
                rdi_3 = (rdi_3 + 1);
                rcx_3 = (rcx_3 - 1);
                if ((!z_3))
                {
                    break;
                }
            }
            rax_2 = ((!z_3) && (!c_3));
            rax_2 = (rax_2 - 0);
            bool c_4 = false;
            bool z_4 = (rax_2 & rax_2) == 0;
            if (z_4)
            {
                int64_t rcx_4 = 0;
                uint16_t* rdx_1 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_23 = 0;
                    do
                    {
                        if ((rdx_1[rax_23] & 2) != 0)
                        {
                            uint64_t rcx_16 = *(arg1 + rax_23);
                            uint64_t rsi_20 = ((rcx_16 >> 3) & 0x18);
                            *(arg2 + rsi_20) = (*(arg2 + rsi_20) | (1 << rcx_16));
                        }
                        rax_23 = (rax_23 + 1);
                    } while (rax_23 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((rdx_1[rcx_4] & 2) != 0)
                        {
                            int64_t rax_5 = (rcx_4 >> 6);
                            arg2[rax_5] = (arg2[rax_5] | (1 << rcx_4));
                        }
                        rcx_4 = (rcx_4 + 1);
                    } while (rcx_4 != 0x100);
                }
                goto label_40bf74;
            }
            void* const rdi_6 = "lower";
            int64_t rcx_7 = 6;
            void* const rsi_7 = r12;
            while (rcx_7 != 0)
            {
                char temp11_1 = *rsi_7;
                char temp12_1 = *rdi_6;
                c_4 = temp11_1 < temp12_1;
                z_4 = temp11_1 == temp12_1;
                rsi_7 = (rsi_7 + 1);
                rdi_6 = (rdi_6 + 1);
                rcx_7 = (rcx_7 - 1);
                if ((!z_4))
                {
                    break;
                }
            }
            rax_2 = ((!z_4) && (!c_4));
            rax_2 = (rax_2 - 0);
            bool c_5 = false;
            bool z_5 = (rax_2 & rax_2) == 0;
            if (z_5)
            {
                int64_t rcx_10 = 0;
                uint16_t* rdx_5 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_24 = 0;
                    do
                    {
                        if ((*(&rdx_5[rax_24] + 1) & 2) != 0)
                        {
                            uint64_t rcx_17 = *(arg1 + rax_24);
                            uint64_t rsi_23 = ((rcx_17 >> 3) & 0x18);
                            *(arg2 + rsi_23) = (*(arg2 + rsi_23) | (1 << rcx_17));
                        }
                        rax_24 = (rax_24 + 1);
                    } while (rax_24 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((*(&rdx_5[rcx_10] + 1) & 2) != 0)
                        {
                            int64_t rax_15 = (rcx_10 >> 6);
                            arg2[rax_15] = (arg2[rax_15] | (1 << rcx_10));
                        }
                        rcx_10 = (rcx_10 + 1);
                    } while (rcx_10 != 0x100);
                }
                goto label_40bf74;
            }
            void* const rdi_7 = "space";
            int64_t rcx_8 = 6;
            void* const rsi_8 = r12;
            while (rcx_8 != 0)
            {
                char temp13_1 = *rsi_8;
                char temp14_1 = *rdi_7;
                c_5 = temp13_1 < temp14_1;
                z_5 = temp13_1 == temp14_1;
                rsi_8 = (rsi_8 + 1);
                rdi_7 = (rdi_7 + 1);
                rcx_8 = (rcx_8 - 1);
                if ((!z_5))
                {
                    break;
                }
            }
            rax_2 = ((!z_5) && (!c_5));
            rax_2 = (rax_2 - 0);
            bool c_6 = false;
            bool z_6 = (rax_2 & rax_2) == 0;
            if (z_6)
            {
                int64_t rcx_9 = 0;
                uint16_t* rdx_4 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_34 = 0;
                    do
                    {
                        if ((*(&rdx_4[rax_34] + 1) & 0x20) != 0)
                        {
                            uint64_t rcx_25 = *(arg1 + rax_34);
                            uint64_t rsi_34 = ((rcx_25 >> 3) & 0x18);
                            *(arg2 + rsi_34) = (*(arg2 + rsi_34) | (1 << rcx_25));
                        }
                        rax_34 = (rax_34 + 1);
                    } while (rax_34 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((*(&rdx_4[rcx_9] + 1) & 0x20) != 0)
                        {
                            int64_t rax_12 = (rcx_9 >> 6);
                            arg2[rax_12] = (arg2[rax_12] | (1 << rcx_9));
                        }
                        rcx_9 = (rcx_9 + 1);
                    } while (rcx_9 != 0x100);
                }
                goto label_40bf74;
            }
            void* const rdi_8 = "alpha";
            int64_t rcx_11 = 6;
            void* const rsi_11 = r12;
            while (rcx_11 != 0)
            {
                char temp15_1 = *rsi_11;
                char temp16_1 = *rdi_8;
                c_6 = temp15_1 < temp16_1;
                z_6 = temp15_1 == temp16_1;
                rsi_11 = (rsi_11 + 1);
                rdi_8 = (rdi_8 + 1);
                rcx_11 = (rcx_11 - 1);
                if ((!z_6))
                {
                    break;
                }
            }
            rax_2 = ((!z_6) && (!c_6));
            rax_2 = (rax_2 - 0);
            bool c_7 = false;
            bool z_7 = (rax_2 & rax_2) == 0;
            if (z_7)
            {
                int64_t rcx_14 = 0;
                uint16_t* rdx_7 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_33 = 0;
                    do
                    {
                        if ((*(&rdx_7[rax_33] + 1) & 4) != 0)
                        {
                            uint64_t rcx_24 = *(arg1 + rax_33);
                            uint64_t rsi_31 = ((rcx_24 >> 3) & 0x18);
                            *(arg2 + rsi_31) = (*(arg2 + rsi_31) | (1 << rcx_24));
                        }
                        rax_33 = (rax_33 + 1);
                    } while (rax_33 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((*(&rdx_7[rcx_14] + 1) & 4) != 0)
                        {
                            int64_t rax_21 = (rcx_14 >> 6);
                            arg2[rax_21] = (arg2[rax_21] | (1 << rcx_14));
                        }
                        rcx_14 = (rcx_14 + 1);
                    } while (rcx_14 != 0x100);
                }
                goto label_40bf74;
            }
            void* const rdi_9 = "digit";
            int64_t rcx_12 = 6;
            void* const rsi_12 = r12;
            while (rcx_12 != 0)
            {
                char temp17_1 = *rsi_12;
                char temp18_1 = *rdi_9;
                c_7 = temp17_1 < temp18_1;
                z_7 = temp17_1 == temp18_1;
                rsi_12 = (rsi_12 + 1);
                rdi_9 = (rdi_9 + 1);
                rcx_12 = (rcx_12 - 1);
                if ((!z_7))
                {
                    break;
                }
            }
            rax_2 = ((!z_7) && (!c_7));
            rax_2 = (rax_2 - 0);
            bool c_8 = false;
            bool z_8 = (rax_2 & rax_2) == 0;
            if (z_8)
            {
                int64_t rcx_13 = 0;
                uint16_t* rdx_6 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_35 = 0;
                    do
                    {
                        if ((*(&rdx_6[rax_35] + 1) & 8) != 0)
                        {
                            uint64_t rcx_26 = *(arg1 + rax_35);
                            uint64_t rsi_37 = ((rcx_26 >> 3) & 0x18);
                            *(arg2 + rsi_37) = (*(arg2 + rsi_37) | (1 << rcx_26));
                        }
                        rax_35 = (rax_35 + 1);
                    } while (rax_35 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((*(&rdx_6[rcx_13] + 1) & 8) != 0)
                        {
                            int64_t rax_18 = (rcx_13 >> 6);
                            arg2[rax_18] = (arg2[rax_18] | (1 << rcx_13));
                        }
                        rcx_13 = (rcx_13 + 1);
                    } while (rcx_13 != 0x100);
                }
                goto label_40bf74;
            }
            void* const rdi_10 = "print";
            int64_t rcx_18 = 6;
            void* const rsi_24 = r12;
            while (rcx_18 != 0)
            {
                char temp19_1 = *rsi_24;
                char temp20_1 = *rdi_10;
                c_8 = temp19_1 < temp20_1;
                z_8 = temp19_1 == temp20_1;
                rsi_24 = (rsi_24 + 1);
                rdi_10 = (rdi_10 + 1);
                rcx_18 = (rcx_18 - 1);
                if ((!z_8))
                {
                    break;
                }
            }
            rax_2 = ((!z_8) && (!c_8));
            rax_2 = (rax_2 - 0);
            bool c_9 = false;
            bool z_9 = (rax_2 & rax_2) == 0;
            if (z_9)
            {
                int64_t rcx_19 = 0;
                uint16_t* rdx_8 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_50 = 0;
                    do
                    {
                        if ((*(&rdx_8[rax_50] + 1) & 0x40) != 0)
                        {
                            uint64_t rcx_34 = *(arg1 + rax_50);
                            uint64_t rsi_44 = ((rcx_34 >> 3) & 0x18);
                            *(arg2 + rsi_44) = (*(arg2 + rsi_44) | (1 << rcx_34));
                        }
                        rax_50 = (rax_50 + 1);
                    } while (rax_50 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((*(&rdx_8[rcx_19] + 1) & 0x40) != 0)
                        {
                            int64_t rax_27 = (rcx_19 >> 6);
                            arg2[rax_27] = (arg2[rax_27] | (1 << rcx_19));
                        }
                        rcx_19 = (rcx_19 + 1);
                    } while (rcx_19 != 0x100);
                }
                goto label_40bf74;
            }
            void* const rdi_11 = "upper";
            int64_t rcx_20 = 6;
            void* const rsi_26 = r12;
            while (rcx_20 != 0)
            {
                char temp21_1 = *rsi_26;
                char temp22_1 = *rdi_11;
                c_9 = temp21_1 < temp22_1;
                z_9 = temp21_1 == temp22_1;
                rsi_26 = (rsi_26 + 1);
                rdi_11 = (rdi_11 + 1);
                rcx_20 = (rcx_20 - 1);
                if ((!z_9))
                {
                    break;
                }
            }
            rax_2 = ((!z_9) && (!c_9));
            rax_2 = (rax_2 - 0);
            bool c_10 = false;
            bool z_10 = (rax_2 & rax_2) == 0;
            if (z_10)
            {
                int64_t rcx_21 = 0;
                uint16_t* rax_29 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rdx_21 = 0;
                    do
                    {
                        if ((*(&rax_29[rdx_21] + 1) & 1) != 0)
                        {
                            uint64_t rcx_36 = *(arg1 + rdx_21);
                            uint64_t rsi_50 = ((rcx_36 >> 3) & 0x18);
                            *(arg2 + rsi_50) = (*(arg2 + rsi_50) | (1 << rcx_36));
                        }
                        rdx_21 = (rdx_21 + 1);
                    } while (rdx_21 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((*(&rax_29[rcx_21] + 1) & 1) != 0)
                        {
                            int64_t rdx_10 = (rcx_21 >> 6);
                            arg2[rdx_10] = (arg2[rdx_10] | (1 << rcx_21));
                        }
                        rcx_21 = (rcx_21 + 1);
                    } while (rcx_21 != 0x100);
                }
                goto label_40bf74;
            }
            void* const rdi_12 = "blank";
            int64_t rcx_22 = 6;
            void* const rsi_28 = r12;
            while (rcx_22 != 0)
            {
                char temp23_1 = *rsi_28;
                char temp24_1 = *rdi_12;
                c_10 = temp23_1 < temp24_1;
                z_10 = temp23_1 == temp24_1;
                rsi_28 = (rsi_28 + 1);
                rdi_12 = (rdi_12 + 1);
                rcx_22 = (rcx_22 - 1);
                if ((!z_10))
                {
                    break;
                }
            }
            rax_2 = ((!z_10) && (!c_10));
            rax_2 = (rax_2 - 0);
            bool c_11 = false;
            bool z_11 = (rax_2 & rax_2) == 0;
            if (z_11)
            {
                int64_t rcx_23 = 0;
                uint16_t* rdx_11 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_51 = 0;
                    do
                    {
                        if ((rdx_11[rax_51] & 1) != 0)
                        {
                            uint64_t rcx_35 = *(arg1 + rax_51);
                            uint64_t rsi_47 = ((rcx_35 >> 3) & 0x18);
                            *(arg2 + rsi_47) = (*(arg2 + rsi_47) | (1 << rcx_35));
                        }
                        rax_51 = (rax_51 + 1);
                    } while (rax_51 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((rdx_11[rcx_23] & 1) != 0)
                        {
                            int64_t rax_32 = (rcx_23 >> 6);
                            arg2[rax_32] = (arg2[rax_32] | (1 << rcx_23));
                        }
                        rcx_23 = (rcx_23 + 1);
                    } while (rcx_23 != 0x100);
                }
                goto label_40bf74;
            }
            void* const rdi_14 = "graph";
            int64_t rcx_27 = 6;
            void* const rsi_38 = r12;
            while (rcx_27 != 0)
            {
                char temp25_1 = *rsi_38;
                char temp26_1 = *rdi_14;
                c_11 = temp25_1 < temp26_1;
                z_11 = temp25_1 == temp26_1;
                rsi_38 = (rsi_38 + 1);
                rdi_14 = (rdi_14 + 1);
                rcx_27 = (rcx_27 - 1);
                if ((!z_11))
                {
                    break;
                }
            }
            rax_2 = ((!z_11) && (!c_11));
            rax_2 = (rax_2 - 0);
            if (rax_2 == 0)
            {
                int64_t rcx_28 = 0;
                uint16_t* rsi_39 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_39 = 0;
                    do
                    {
                        if (rsi_39[rax_39] < 0)
                        {
                            uint64_t rcx_29 = *(arg1 + rax_39);
                            uint64_t rdx_14 = ((rcx_29 >> 3) & 0x18);
                            *(arg2 + rdx_14) = (*(arg2 + rdx_14) | (1 << rcx_29));
                        }
                        rax_39 = (rax_39 + 1);
                    } while (rax_39 != 0x100);
                }
                else
                {
                    do
                    {
                        if (rsi_39[rcx_28] < 0)
                        {
                            int64_t rax_38 = (rcx_28 >> 6);
                            arg2[rax_38] = (arg2[rax_38] | (1 << rcx_28));
                        }
                        rcx_28 = (rcx_28 + 1);
                    } while (rcx_28 != 0x100);
                }
                goto label_40bf74;
            }
            if (strcmp(r12, "punct") == 0)
            {
                int64_t rcx_30 = 0;
                uint16_t* rsi_40 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_44 = 0;
                    do
                    {
                        if ((rsi_40[rax_44] & 4) != 0)
                        {
                            uint64_t rcx_31 = *(arg1 + rax_44);
                            uint64_t rdx_17 = ((rcx_31 >> 3) & 0x18);
                            *(arg2 + rdx_17) = (*(arg2 + rdx_17) | (1 << rcx_31));
                        }
                        rax_44 = (rax_44 + 1);
                    } while (rax_44 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((rsi_40[rcx_30] & 4) != 0)
                        {
                            int64_t rax_43 = (rcx_30 >> 6);
                            arg2[rax_43] = (arg2[rax_43] | (1 << rcx_30));
                        }
                        rcx_30 = (rcx_30 + 1);
                    } while (rcx_30 != 0x100);
                }
                goto label_40bf74;
            }
            if (strcmp(r12, "xdigit") == 0)
            {
                int64_t rcx_32 = 0;
                uint16_t* rsi_41 = *__ctype_b_loc();
                if (arg1 != 0)
                {
                    int64_t rax_49 = 0;
                    do
                    {
                        if ((*(&rsi_41[rax_49] + 1) & 0x10) != 0)
                        {
                            uint64_t rcx_33 = *(arg1 + rax_49);
                            uint64_t rdx_20 = ((rcx_33 >> 3) & 0x18);
                            *(arg2 + rdx_20) = (*(arg2 + rdx_20) | (1 << rcx_33));
                        }
                        rax_49 = (rax_49 + 1);
                    } while (rax_49 != 0x100);
                }
                else
                {
                    do
                    {
                        if ((*(&rsi_41[rcx_32] + 1) & 0x10) != 0)
                        {
                            int64_t rax_48 = (rcx_32 >> 6);
                            arg2[rax_48] = (arg2[rax_48] | (1 << rcx_32));
                        }
                        rcx_32 = (rcx_32 + 1);
                    } while (rcx_32 != 0x100);
                }
                goto label_40bf74;
            }
            rax_6 = 4;
        }
        else
        {
            int64_t rcx_5 = 0;
            uint16_t* rdx_2 = *__ctype_b_loc();
            if (arg1 != 0)
            {
                int64_t rax_22 = 0;
                do
                {
                    if ((rdx_2[rax_22] & 8) != 0)
                    {
                        uint64_t rcx_15 = *(arg1 + rax_22);
                        uint64_t rsi_17 = ((rcx_15 >> 3) & 0x18);
                        *(arg2 + rsi_17) = (*(arg2 + rsi_17) | (1 << rcx_15));
                    }
                    rax_22 = (rax_22 + 1);
                } while (rax_22 != 0x100);
            }
            else
            {
                do
                {
                    if ((rdx_2[rcx_5] & 8) != 0)
                    {
                        int64_t rax_9 = (rcx_5 >> 6);
                        arg2[rax_9] = (arg2[rax_9] | (1 << rcx_5));
                    }
                    rcx_5 = (rcx_5 + 1);
                } while (rcx_5 != 0x100);
            }
        label_40bf74:
            rax_6 = 0;
        }
    }
    return rax_6;
}

void* sub_40c660(void* arg1, void* arg2, void* arg3, char* arg4, char arg5, 
    int32_t* arg6)
{
    char* r13 = arg4;
    int64_t var_60 = 0;
    int64_t* rax = calloc(0x20, 1);
    if (rax == 0)
    {
        goto label_40c835;
    }
    int64_t* rax_1 = calloc(0x50, 1);
    void* r14_1;
    if (rax_1 == 0)
    {
        r14_1 = nullptr;
        free(rax);
        *arg6 = 0xc;
    }
    else
    {
        rax_1[4] = ((rax_1[4] & 0xfe) | (arg5 & 1));
        int32_t rax_5 = sub_40be90(arg2, rax, &rax_1[3], &rax_1[9], &var_60, arg3, 0);
        if (rax_5 != 0)
        {
            void* var_78;
            var_78 = rax_5;
            r14_1 = nullptr;
            free(rax);
            sub_407c60(rax_1);
            *arg6 = var_78;
        }
        else
        {
            int64_t rcx_2 = *r13;
            if (rcx_2 != 0)
            {
                do
                {
                    int64_t rax_6 = (rcx_2 + 0x3f);
                    if (rcx_2 >= 0)
                    {
                        rax_6 = rcx_2;
                    }
                    r13 = &r13[1];
                    uint8_t rdx_6 = ((rcx_2 >> 0x3f) >> 0x3a);
                    int64_t rax_7 = (rax_6 >> 6);
                    int64_t rdx_7 = (1 << (((rcx_2 + rdx_6) & 0x3f) - rdx_6));
                    rcx_2 = *r13;
                    rax[rax_7] = (rax[rax_7] | rdx_7);
                } while (rcx_2 != 0);
            }
            if (arg5 != 0)
            {
                int64_t* rax_8 = rax;
                void* rdx_8 = &rax[4];
                do
                {
                    *rax_8 = (!*rax_8);
                    rax_8 = &rax_8[1];
                } while (rdx_8 != rax_8);
            }
            if (*(arg1 + 0xb4) > 1)
            {
                int64_t* rcx_6 = *(arg1 + 0x78);
                int64_t rax_9 = 0;
                do
                {
                    *(rax + rax_9) = (*(rax + rax_9) & *(rcx_6 + rax_9));
                    rax_9 = (rax_9 + 8);
                } while (rax_9 != 0x20);
            }
            void* r12_1 = (arg1 + 0x70);
            void* r13_1 = (arg1 + 0x80);
            char var_50_1 = 3;
            int64_t* var_58 = rax;
            void* rax_10 = sub_409270(r12_1, r13_1, nullptr, nullptr, &var_58);
            r14_1 = rax_10;
            void* rax_11;
            if (rax_10 != 0)
            {
                if (*(arg1 + 0xb4) <= 1)
                {
                    sub_407c60(rax_1);
                }
                else
                {
                    *(arg1 + 0xb0) = (*(arg1 + 0xb0) | 2);
                    char var_50_2 = 6;
                    var_58 = rax_1;
                    rax_11 = sub_409270(r12_1, r13_1, nullptr, nullptr, &var_58);
                }
            }
            if ((rax_10 == 0 || ((rax_10 != 0 && *(arg1 + 0xb4) > 1) && rax_11 == 0)))
            {
                free(rax);
                sub_407c60(rax_1);
            label_40c835:
                r14_1 = nullptr;
                *arg6 = 0xc;
            }
            if (((rax_10 != 0 && *(arg1 + 0xb4) > 1) && rax_11 != 0))
            {
                char var_40_1 = 0xa;
                void var_48;
                r14_1 = sub_409270(r12_1, r13_1, r14_1, rax_11, &var_48);
            }
        }
    }
    return r14_1;
}

int64_t* sub_40c8a0(int64_t* arg1, int64_t* arg2, int64_t* arg3, char* arg4)
{
    int32_t r12 = 0;
    int64_t* rax = *arg1;
    int64_t* var_178 = rax;
    if (*(rax + 0xb4) == 1)
    {
        r12 = ((arg1[3] >> 0x16) & 1);
    }
    int64_t rbx = 0;
    if (*arg2 > 0)
    {
        do
        {
            int64_t r14_1 = *(*arg3 + (rbx << 3));
            int64_t* rcx = *var_178;
            int64_t rax_5 = (r14_1 << 4);
            char* rsi = (rcx + rax_5);
            rax = rsi[8];
            char rdx_1 = rax;
            mbstate_t var_140;
            char var_138;
            if (rax == 1)
            {
                uint64_t rdx_2 = *rsi;
                arg4[rdx_2] = 1;
                if (r12 != 0)
                {
                    arg4[*__ctype_tolower_loc()[rdx_2]] = 1;
                }
                if (((*(arg1 + 0x1a) & 0x40) != 0 && *(var_178 + 0xb4) > 1))
                {
                    char* rax_11 = *var_178;
                    var_138 = rax_11[rax_5];
                    int64_t rdx_5 = (r14_1 + 1);
                    void* rax_12;
                    uint64_t r13_1;
                    if (var_178[2] > rdx_5)
                    {
                        rax_12 = &rax_11[(rax_5 + 0x10)];
                        if ((*(rax_12 + 8) & 0x2000ff) == 0x200001)
                        {
                            void var_137;
                            void* rsi_2 = &var_137;
                            do
                            {
                                rsi_2 = (rsi_2 + 1);
                                rdx_5 = (rdx_5 + 1);
                                *(rsi_2 - 1) = *rax_12;
                                if (var_178[2] <= rdx_5)
                                {
                                    break;
                                }
                                rax_12 = ((rdx_5 << 4) + *var_178);
                            } while ((*(rax_12 + 8) & 0x2000ff) == 0x200001);
                            r13_1 = (rsi_2 - &var_138);
                        }
                    }
                    if ((var_178[2] <= rdx_5 || (var_178[2] > rdx_5 && (*(rax_12 + 8) & 0x2000ff) != 0x200001)))
                    {
                        r13_1 = 1;
                    }
                    var_140.__count = 0;
                    var_140.__value = 0;
                    uint32_t var_144;
                    if ((sub_4069d0(&var_144, &var_138, r13_1, &var_140) == r13_1 && wcrtomb(&var_138, towlower(var_144), &var_140) != -1))
                    {
                        rbx = (rbx + 1);
                        arg4[var_138] = 1;
                        rax = arg2;
                        if (rbx >= *rax)
                        {
                            break;
                        }
                        continue;
                    }
                }
            }
            else if (rax == 3)
            {
                int64_t var_170_3 = 0;
                while (true)
                {
                    uint64_t r14_3 = 0;
                    int64_t rbp_2 = *(*(rcx + rax_5) + var_170_3);
                    int64_t r13_3 = (var_170_3 << 3);
                    do
                    {
                        if ((TEST_BITQ(rbp_2, r14_3)))
                        {
                            void* rax_37 = &arg4[r13_3];
                            arg4[r13_3] = 1;
                            if (r12 != 0)
                            {
                                if ((r13_3 + 0x80) <= 0x17f)
                                {
                                    rax_37 = &arg4[*__ctype_tolower_loc()[r13_3]];
                                }
                                *rax_37 = 1;
                            }
                        }
                        r14_3 = (r14_3 + 1);
                        r13_3 = (r13_3 + 1);
                    } while (r14_3 != 0x40);
                    var_170_3 = (var_170_3 + 8);
                    if (var_170_3 == 0x20)
                    {
                        break;
                    }
                    rcx = *var_178;
                }
            }
            else if (rax == 6)
            {
                wint_t** r13_2 = *rsi;
                if ((*(var_178 + 0xb4) <= 1 || (((*(var_178 + 0xb4) > 1 && r13_2[9] == 0) && (r13_2[4] & 1) == 0) && r13_2[8] == 0)))
                {
                    int64_t r14_2 = 0;
                    if (r13_2[5] > 0)
                    {
                        do
                        {
                            var_140.__count = 0;
                            var_140.__value = 0;
                            int64_t rbp_1 = (r14_2 << 2);
                            if (wcrtomb(&var_138, *r13_2[r14_2], &var_140) != -1)
                            {
                                uint64_t rdx_9 = var_138;
                                arg4[rdx_9] = 1;
                                if (r12 != 0)
                                {
                                    arg4[*__ctype_tolower_loc()[rdx_9]] = 1;
                                }
                            }
                            if ((((*(arg1 + 0x1a) & 0x40) != 0 && *(var_178 + 0xb4) > 1) && wcrtomb(&var_138, towlower(*(*r13_2 + rbp_1)), &var_140) != -1))
                            {
                                arg4[var_138] = 1;
                            }
                            r14_2 = (r14_2 + 1);
                        } while (r14_2 < r13_2[5]);
                    }
                }
                if ((*(var_178 + 0xb4) > 1 && ((r13_2[9] != 0 || (r13_2[9] == 0 && (r13_2[4] & 1) != 0)) || ((r13_2[9] == 0 && (r13_2[4] & 1) == 0) && r13_2[8] != 0))))
                {
                    var_140.__count = 0;
                    do
                    {
                        var_138 = 0;
                        if (sub_4069d0(nullptr, &var_140, 1, &var_138) == -2)
                        {
                            arg4[var_140.__count] = 1;
                        }
                        var_140.__count = (var_140.__count + 1);
                    } while (var_140.__count != 0xff);
                }
            }
            else
            {
                int128_t zmm0;
                if (((rdx_1 & 0xfd) != 5 && rax == 2))
                {
                    zmm0 = data_417de0;
                    *arg4 = zmm0;
                    *(arg4 + 0x10) = zmm0;
                    *(arg4 + 0x20) = zmm0;
                    *(arg4 + 0x30) = zmm0;
                    *(arg4 + 0x40) = zmm0;
                    *(arg4 + 0x50) = zmm0;
                    *(arg4 + 0x60) = zmm0;
                    *(arg4 + 0x70) = zmm0;
                    *(arg4 + 0x80) = zmm0;
                    *(arg4 + 0x90) = zmm0;
                    *(arg4 + 0xa0) = zmm0;
                    *(arg4 + 0xb0) = zmm0;
                    *(arg4 + 0xc0) = zmm0;
                    *(arg4 + 0xd0) = zmm0;
                    *(arg4 + 0xe0) = zmm0;
                    *(arg4 + 0xf0) = zmm0;
                }
                if ((rdx_1 & 0xfd) == 5)
                {
                    zmm0 = data_417de0;
                    *arg4 = zmm0;
                    *(arg4 + 0x10) = zmm0;
                    *(arg4 + 0x20) = zmm0;
                    *(arg4 + 0x30) = zmm0;
                    *(arg4 + 0x40) = zmm0;
                    *(arg4 + 0x50) = zmm0;
                    *(arg4 + 0x60) = zmm0;
                    *(arg4 + 0x70) = zmm0;
                    *(arg4 + 0x80) = zmm0;
                    *(arg4 + 0x90) = zmm0;
                    *(arg4 + 0xa0) = zmm0;
                    *(arg4 + 0xb0) = zmm0;
                    *(arg4 + 0xc0) = zmm0;
                    *(arg4 + 0xd0) = zmm0;
                    *(arg4 + 0xe0) = zmm0;
                    *(arg4 + 0xf0) = zmm0;
                    if (rax != 2)
                    {
                        break;
                    }
                }
                if ((((rdx_1 & 0xfd) != 5 && rax == 2) || (rdx_1 & 0xfd) == 5))
                {
                    rax = arg1;
                    rax[7] = (rax[7] | 1);
                    break;
                }
            }
            rax = arg2;
            rbx = (rbx + 1);
        } while (rbx < *rax);
    }
    return rax;
}

uint64_t sub_40cd80(void* arg1, int64_t* arg2, int64_t arg3, void* arg4, 
    int64_t arg5)
{
    int64_t* r10 = (arg1 + (arg3 << 4));
    char r11 = r10[1];
    int32_t rbp_1;
    if (r11 == 7)
    {
        char* rax_12 = *(arg4 + 8);
        char rdx_3 = rax_12[arg5];
        if (rdx_3 <= 0xc1)
        {
        label_40cdce:
            rbp_1 = 0;
        }
        else
        {
            int64_t rcx_1 = *(arg4 + 0x58);
            int64_t rsi_3 = (arg5 + 1);
            if (rsi_3 >= rcx_1)
            {
                goto label_40cdce;
            }
            char rdi_2 = rax_12[(arg5 + 1)];
            if (rdx_3 > 0xdf)
            {
                int64_t rdi_3;
                if ((((((rdx_3 > 0xef && rdx_3 > 0xf7) && rdx_3 > 0xfb) && rdx_3 <= 0xfd) && rdx_3 != 0xfc) || (rdx_3 == 0xfc && rdi_2 > 0x83)))
                {
                    rdi_3 = 6;
                    rbp_1 = 6;
                }
                if (((((rdx_3 > 0xef && rdx_3 > 0xf7) && rdx_3 <= 0xfb) && rdx_3 != 0xf8) || (rdx_3 == 0xf8 && rdi_2 > 0x87)))
                {
                    rdi_3 = 5;
                    rbp_1 = 5;
                }
                if ((((rdx_3 > 0xef && rdx_3 <= 0xf7) && rdx_3 != 0xf0) || (rdx_3 == 0xf0 && rdi_2 > 0x8f)))
                {
                    rdi_3 = 4;
                    rbp_1 = 4;
                }
                if (((rdx_3 <= 0xef && rdx_3 != 0xe0) || (rdx_3 == 0xe0 && rdi_2 > 0x9f)))
                {
                    rdi_3 = 3;
                    rbp_1 = 3;
                }
                if ((((((((((rdx_3 <= 0xef && rdx_3 != 0xe0) || (rdx_3 == 0xe0 && rdi_2 > 0x9f)) || ((rdx_3 > 0xef && rdx_3 <= 0xf7) && rdx_3 != 0xf0)) || (rdx_3 == 0xf0 && rdi_2 > 0x8f)) || (((rdx_3 > 0xef && rdx_3 > 0xf7) && rdx_3 <= 0xfb) && rdx_3 != 0xf8)) || (rdx_3 == 0xf8 && rdi_2 > 0x87)) || ((((rdx_3 > 0xef && rdx_3 > 0xf7) && rdx_3 > 0xfb) && rdx_3 <= 0xfd) && rdx_3 != 0xfc)) || (rdx_3 == 0xfc && rdi_2 > 0x83)) && rcx_1 >= (arg5 + rdi_3)))
                {
                    void* rdx_5 = &rax_12[rsi_3];
                    void* rax_14 = &rax_12[(arg5 + rdi_3)];
                    while ((*rdx_5 - 0x80) <= 0x3f)
                    {
                        rdx_5 = (rdx_5 + 1);
                        if (rax_14 == rdx_5)
                        {
                            return rbp_1;
                        }
                    }
                }
                goto label_40cdce;
            }
            rbp_1 = 2;
            if ((rdi_2 - 0x80) > 0x3f)
            {
                goto label_40cdce;
            }
        }
    }
    else
    {
        if (*(arg4 + 0x90) == 1)
        {
            goto label_40cdce;
        }
        int32_t rax_1 = sub_4085b0(arg4, arg5);
        rbp_1 = rax_1;
        if (r11 == 5)
        {
            if (rax_1 <= 1)
            {
                goto label_40cdce;
            }
            char rax_3 = *arg2;
            if (((rax_3 & 0x40) == 0 && *(arg4 + 8)[arg5] == 0xa))
            {
                goto label_40cdce;
            }
            if (((rax_3 & 0x80) != 0 && *(arg4 + 8)[arg5] == 0))
            {
                goto label_40cdce;
            }
        }
        else
        {
            if (r11 != 6)
            {
                goto label_40cdce;
            }
            if (rax_1 <= 1)
            {
                goto label_40cdce;
            }
            int64_t* r13_1 = *r10;
            int64_t rsi_1 = r13_1[8];
            int64_t rdx_2 = r13_1[5];
            if (rsi_1 != 0)
            {
            label_40ce31:
                wint_t r12_1 = *(*(arg4 + 0x10) + (arg5 << 2));
                if (rdx_2 <= 0)
                {
                label_40ce63:
                    if (r13_1[9] <= 0)
                    {
                        goto label_40cf3c;
                    }
                    int64_t rbx_2 = 0;
                    int32_t rax_11;
                    do
                    {
                        rax_11 = iswctype(r12_1, *(r13_1[3] + (rbx_2 << 3)));
                        if (rax_11 != 0)
                        {
                            break;
                        }
                        rbx_2 = (rbx_2 + 1);
                    } while (rbx_2 < r13_1[9]);
                    if (rax_11 != 0)
                    {
                        goto label_40ce92;
                    }
                    rsi_1 = r13_1[8];
                label_40cf3c:
                    if (rsi_1 <= 0)
                    {
                        goto label_40cf6d;
                    }
                    int64_t rdx_6 = r13_1[1];
                    int64_t rax_15 = 0;
                    while ((!(r12_1 >= *(rdx_6 + (rax_15 << 2)) && r12_1 <= *(r13_1[2] + (rax_15 << 2)))))
                    {
                        rax_15 = (rax_15 + 1);
                        if (rax_15 == rsi_1)
                        {
                            break;
                        }
                    }
                    if ((!(r12_1 >= *(rdx_6 + (rax_15 << 2)) && r12_1 <= *(r13_1[2] + (rax_15 << 2)))))
                    {
                        goto label_40cf6d;
                    }
                    goto label_40ce92;
                }
                int32_t* rcx = *r13_1;
                if (r12_1 != *rcx)
                {
                    int64_t rax_8 = 0;
                    do
                    {
                        rax_8 = (rax_8 + 1);
                        if (rdx_2 == rax_8)
                        {
                            break;
                        }
                    } while (r12_1 != rcx[rax_8]);
                    if (rdx_2 == rax_8)
                    {
                        goto label_40ce63;
                    }
                    goto label_40ce92;
                }
            label_40ce92:
                if ((r13_1[4] & 1) != 0)
                {
                    goto label_40cdce;
                }
            }
            else
            {
                if ((rdx_2 | r13_1[9]) != 0)
                {
                    goto label_40ce31;
                }
            label_40cf6d:
                if ((r13_1[4] & 1) == 0)
                {
                    goto label_40cdce;
                }
            }
        }
    }
    return rbp_1;
}

uint64_t sub_40d010(void* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, 
    int64_t arg5, int64_t arg6, int32_t arg7)
{
    int64_t* rbx = *(arg1 + 0x98);
    int64_t r15 = arg2[1];
    int64_t rax_3 = *((arg3 << 4) + *rbx);
    int32_t var_80 = 0;
    int64_t rax_5 = (*(arg1 + 0xe0) + arg6);
    uint64_t rax_28;
    int64_t rbx_9;
    if (rax_5 >= r15)
    {
        rbx_9 = (rax_5 + 1);
        if ((0x7fffffffffffffff - r15) < rbx_9)
        {
        label_40d6e8:
            rax_28 = 0xc;
        }
        else
        {
            int64_t r14_4 = (r15 + rbx_9);
            if (r14_4 > 0x1fffffffffffffff)
            {
                goto label_40d6e8;
            }
            int64_t rax_38 = realloc(arg2[2], (r14_4 << 3));
            if (rax_38 == 0)
            {
                goto label_40d6e8;
            }
            arg2[2] = rax_38;
            arg2[1] = r14_4;
            memset((rax_38 + (r15 << 3)), 0, (rbx_9 << 3));
        }
    }
    if ((rax_5 < r15 || (rax_5 >= r15 && (0x7fffffffffffffff - r15) >= rbx_9)))
    {
        int64_t rcx = *(arg1 + 0xb8);
        int32_t rdx = *(arg1 + 0xa0);
        int64_t rbx_1 = *arg2;
        int64_t r14_1 = arg2[2];
        int64_t rcx_1 = *(arg1 + 0x48);
        *(arg1 + 0xb8) = r14_1;
        int32_t var_f8_1;
        if (rbx_1 == 0)
        {
            *(arg1 + 0x48) = arg4;
            var_f8_1 = sub_40a330(arg1, (arg4 - 1), rdx, arg2);
        }
        else
        {
            *(arg1 + 0x48) = rbx_1;
            var_f8_1 = sub_40a330(arg1, (rbx_1 - 1), rdx, arg2);
        }
        int64_t var_78;
        int64_t var_70;
        int64_t* var_68;
        int64_t* rax_34;
        int32_t rax_35;
        if ((rbx_1 == 0 || (rbx_1 != 0 && rbx_1 == arg4)))
        {
            var_78 = 1;
            var_70 = 1;
            rax_34 = malloc(8);
            var_68 = rax_34;
            if (rax_34 == 0)
            {
                goto label_40d6e8;
            }
            *rax_34 = arg3;
            rbx_1 = arg4;
            var_80 = 0;
            rax_35 = sub_408f70(rbx, &var_78, rax_3, arg7);
            var_80 = rax_35;
            if (rax_35 != 0)
            {
            label_40d4cd:
                free(var_68);
                rax_28 = var_80;
            }
        }
        int64_t* r15_1;
        if ((rbx_1 != 0 && rbx_1 != arg4))
        {
            r15_1 = *(r14_1 + (rbx_1 << 3));
            if ((r15_1 == 0 || (r15_1 != 0 && (r15_1[0xd] & 0x40) == 0)))
            {
                var_68 = nullptr;
                var_78 = 0;
            }
            if ((r15_1 != 0 && (r15_1[0xd] & 0x40) != 0))
            {
                rax_28 = sub_4096a0(&var_78, &r15_1[1]);
                var_80 = rax_28;
            }
        }
        if (((((rbx_1 == 0 || (rbx_1 != 0 && rbx_1 == arg4)) && rax_34 != 0) && rax_35 == 0) || (((((rbx_1 != 0 && rbx_1 != arg4) && r15_1 != 0) && (r15_1[0xd] & 0x40) != 0) && rax_28 == 0) && (r15_1[0xd] & 0x40) != 0)))
        {
            if (var_70 != 0)
            {
                int32_t rax_29 = sub_409e50(arg1, &var_78, rbx_1, rax_3, arg7);
                var_80 = rax_29;
                if (rax_29 != 0)
                {
                    goto label_40d4cd;
                }
                goto label_40d555;
            }
        label_40d555:
            int64_t* rax_30 = sub_4098b0(&var_80, rbx, &var_78, var_f8_1);
            r15_1 = rax_30;
            if (rax_30 == 0)
            {
                if (var_80 != 0)
                {
                    goto label_40d4cd;
                }
                goto label_40d56e;
            }
        label_40d56e:
            *(*(arg1 + 0xb8) + (rbx_1 << 3)) = r15_1;
        }
        if (((((rbx_1 != 0 && rbx_1 != arg4) && (r15_1 == 0 || (r15_1 != 0 && (r15_1[0xd] & 0x40) == 0))) || ((((rbx_1 != 0 && rbx_1 != arg4) && r15_1 != 0) && rax_28 == 0) && (r15_1[0xd] & 0x40) == 0)) || (((((rbx_1 == 0 || (rbx_1 != 0 && rbx_1 == arg4)) && rax_34 != 0) && rax_35 == 0) || (((((rbx_1 != 0 && rbx_1 != arg4) && r15_1 != 0) && (r15_1[0xd] & 0x40) != 0) && rax_28 == 0) && (r15_1[0xd] & 0x40) != 0)) && var_70 == 0)))
        {
            if (rbx_1 < arg6)
            {
                if (*(arg1 + 0xe0) < 0)
                {
                    goto label_40d425;
                }
                int64_t var_e8_1 = 0;
                uint64_t rax_8 = *(arg1 + 0xb8);
                int64_t r14_2 = (rbx_1 + 1);
                void* rsi_1;
                while (true)
                {
                    rsi_1 = *(rax_8 + (r14_2 << 3));
                    int64_t var_70_1 = 0;
                    var_f8_1 = (r14_2 - 1);
                    int64_t rcx_4 = (r14_2 << 3);
                    if (rsi_1 != 0)
                    {
                        rax_8 = sub_408b40(&var_78, (rsi_1 + 8));
                        var_80 = rax_8;
                        if (rax_8 != 0)
                        {
                            break;
                        }
                        if ((rax_8 == 0 && r15_1 == 0))
                        {
                        label_40d351:
                            rbx_1 = r14_2;
                        }
                    }
                    if ((rsi_1 == 0 && r15_1 == 0))
                    {
                        rbx_1 = r14_2;
                    }
                    if (((rsi_1 == 0 && r15_1 == 0) || ((rsi_1 != 0 && rax_8 == 0) && r15_1 == 0)))
                    {
                        int64_t* rax_24 = sub_4098b0(&var_80, rbx, &var_78, sub_40a330(arg1, var_f8_1, *(arg1 + 0xa0), rax_8));
                        r15_1 = rax_24;
                        if (rax_24 != 0)
                        {
                            rax_8 = *(arg1 + 0xb8);
                            var_e8_1 = 0;
                            *(rax_8 + rcx_4) = r15_1;
                        }
                        else
                        {
                            if (var_80 != 0)
                            {
                                break;
                            }
                            rax_8 = *(arg1 + 0xb8);
                            var_e8_1 = (var_e8_1 + 1);
                            *(rax_8 + rcx_4) = 0;
                        }
                        if (arg6 <= r14_2)
                        {
                            break;
                        }
                        r14_2 = (r14_2 + 1);
                        if (*(arg1 + 0xe0) < var_e8_1)
                        {
                            break;
                        }
                        continue;
                    }
                    if (((rsi_1 == 0 && r15_1 != 0) || ((rsi_1 != 0 && rax_8 == 0) && r15_1 != 0)))
                    {
                        void** rbp_1 = *(arg1 + 0x98);
                        int32_t var_7c = 0;
                        int128_t var_58 = 0;
                        if (r15_1[5] > 0)
                        {
                            int64_t* var_d0_1 = &rbp_1[0x1b];
                            int64_t r14_3 = 0;
                            while (true)
                            {
                                void* rdi_4 = *rbp_1;
                                int64_t r13_2 = *(r15_1[6] + (r14_3 << 3));
                                int64_t rbx_3 = (r13_2 << 4);
                                void* rsi_3 = (rdi_4 + rbx_3);
                                int64_t var_f0_1;
                                if ((*(rsi_3 + 0xa) & 0x10) != 0)
                                {
                                    int32_t rax_15 = sub_40cd80(rdi_4, var_d0_1, r13_2, arg1, var_f8_1);
                                    if (rax_15 > 1)
                                    {
                                        var_f0_1 = (r13_2 << 3);
                                        int64_t rbx_5 = (rax_15 + var_f8_1);
                                        int64_t rdx_4 = *(rbp_1[3] + (r13_2 << 3));
                                        int64_t r13_3 = (rbx_5 << 3);
                                        void* rsi_6 = *(*(arg1 + 0xb8) + (rbx_5 << 3));
                                        *var_58[8] = 0;
                                        if (rsi_6 != 0)
                                        {
                                            int32_t rax_18 = sub_408b40(&var_58, (rsi_6 + 8));
                                            var_7c = rax_18;
                                            if (rax_18 != 0)
                                            {
                                            label_40d32d:
                                                free(nullptr);
                                                rax_8 = var_7c;
                                                var_80 = rax_8;
                                                if (rax_8 != 0)
                                                {
                                                    goto label_40d4cd;
                                                }
                                                goto label_40d351;
                                            }
                                        }
                                        if (sub_406ff0(&var_58, rdx_4) == 0)
                                        {
                                        label_40d4b8:
                                            free(nullptr);
                                            var_80 = 0xc;
                                            break;
                                        }
                                        int64_t** r13_4 = (r13_3 + *(arg1 + 0xb8));
                                        *r13_4 = sub_409bb0(&var_7c, rbp_1, &var_58);
                                        if (*(*(arg1 + 0xb8) + (rbx_5 << 3)) != 0)
                                        {
                                            goto label_40d202;
                                        }
                                        if (var_7c == 0)
                                        {
                                            goto label_40d202;
                                        }
                                        goto label_40d32d;
                                    }
                                    if (rax_15 != 0)
                                    {
                                        goto label_40d1e8;
                                    }
                                    rsi_3 = (rbx_3 + *rbp_1);
                                }
                                if (sub_40a420(arg1, rsi_3, var_f8_1) != 0)
                                {
                                label_40d1e8:
                                    var_f0_1 = (r13_2 << 3);
                                label_40d202:
                                    if (sub_406ff0(&var_78, *(rbp_1[3] + var_f0_1)) != 0)
                                    {
                                        goto label_40d20f;
                                    }
                                    goto label_40d4b8;
                                }
                            label_40d20f:
                                r14_3 = (r14_3 + 1);
                                if (r14_3 >= r15_1[5])
                                {
                                    goto label_40d58d;
                                }
                            }
                            break;
                        }
                    label_40d58d:
                        rax_8 = free(nullptr);
                        var_80 = 0;
                        goto label_40d351;
                    }
                }
                if ((rsi_1 != 0 && rax_8 != 0))
                {
                    goto label_40d4cd;
                }
                goto label_40d425;
            }
        label_40d425:
            free(var_68);
            void* rax_26 = *(*(arg1 + 0xb8) + (arg6 << 3));
            if (rax_26 == 0)
            {
                *arg2 = rbx_1;
                *(arg1 + 0xb8) = rcx;
                *(arg1 + 0x48) = rcx_1;
                rax_28 = 1;
            }
            else
            {
                *arg2 = rbx_1;
                *(arg1 + 0xb8) = rcx;
                *(arg1 + 0x48) = rcx_1;
                int64_t rax_27;
                rax_27 = sub_408600(*(rax_26 + 0x10), (rax_26 + 0x18), arg5) == 0;
                rax_28 = rax_27;
            }
        }
    }
    return rax_28;
}

int64_t sub_40d730(int64_t* arg1, void* arg2, int64_t arg3, int64_t* arg4, 
    char arg5)
{
    void* r12 = arg2;
    int64_t* rax = *arg1;
    int64_t var_58 = 0;
    int64_t var_50 = 2;
    int64_t var_48 = 0;
    int64_t* var_90;
    int64_t rax_1;
    if (arg5 == 0)
    {
        var_90 = nullptr;
    }
    else
    {
        rax_1 = malloc(0x60);
        var_90 = &var_58;
        int64_t var_48_1 = rax_1;
    }
    if ((arg5 == 0 || (arg5 != 0 && rax_1 != 0)))
    {
        int64_t var_68 = 0;
        int128_t var_78 = 0;
        int64_t rbx_1 = rax[0x12];
        int64_t rax_4 = (arg3 << 4);
        char var_c1_1;
        void* var_b8_1;
        void* rax_48;
        if (rax_4 > 0xfbf)
        {
            rax_48 = malloc(rax_4);
            var_c1_1 = 1;
            var_b8_1 = rax_48;
            if ((rax_48 == 0 && var_90 != 0))
            {
                sub_40bd60(var_90);
            }
        }
        else
        {
            var_c1_1 = 0;
            void var_d8;
            var_b8_1 = (((&var_d8 - (rax_4 + 0x10)) + 0xf) & 0xfffffffffffffff0);
        }
        if ((rax_4 <= 0xfbf || (rax_4 > 0xfbf && rax_48 != 0)))
        {
            memcpy(var_b8_1, arg4, rax_4);
            int64_t rcx = *arg4;
            int64_t var_80 = rcx;
            int64_t* var_c0_1 = &var_68;
        label_40d909:
            int64_t rax_8 = arg4[1];
            if (rax_8 >= rcx)
            {
                do
                {
                    int64_t r15_1 = rbx_1;
                    int64_t r9_1 = (rbx_1 << 4);
                    int64_t* rsi_4 = (*rax + r9_1);
                    uint32_t rdx_4 = rsi_4[1];
                    if (rdx_4 == 8)
                    {
                        int64_t rdx_6 = (*rsi_4 + 1);
                        if (arg3 > rdx_6)
                        {
                            void* rdx_8 = &arg4[(rdx_6 * 2)];
                            *(rdx_8 + 8) = -1;
                            rax_8 = arg4[1];
                            *rdx_8 = rcx;
                        }
                    }
                    else if (rdx_4 == 9)
                    {
                        int64_t rdx_13 = (*rsi_4 + 1);
                        if (arg3 > rdx_13)
                        {
                            int64_t rdx_14 = (rdx_13 << 4);
                            void* rax_22 = (arg4 + rdx_14);
                            if (*rax_22 < rcx)
                            {
                                *(rax_22 + 8) = rcx;
                                memcpy(var_b8_1, arg4, rax_4);
                                rax_8 = arg4[1];
                            }
                            else
                            {
                                if (((*(rsi_4 + 0xa) & 8) == 0 || ((*(rsi_4 + 0xa) & 8) != 0 && *(var_b8_1 + rdx_14) == -1)))
                                {
                                    *(rax_22 + 8) = rcx;
                                    rax_8 = arg4[1];
                                }
                                if (((*(rsi_4 + 0xa) & 8) != 0 && *(var_b8_1 + rdx_14) != -1))
                                {
                                    memcpy(arg4, var_b8_1, rax_4);
                                    rax_8 = arg4[1];
                                }
                            }
                        }
                    }
                    if ((rcx == rax_8 && *(r12 + 0xb0) == rbx_1))
                    {
                        if (var_90 == 0)
                        {
                            free(var_68);
                            if (var_c1_1 == 0)
                            {
                                break;
                            }
                            free(var_b8_1);
                            return 0;
                        }
                        if (arg3 == 0)
                        {
                        label_40dd0e:
                            free(var_68);
                            if (var_c1_1 != 0)
                            {
                                free(var_b8_1);
                            }
                            sub_40bd60(var_90);
                            return 0;
                        }
                        int64_t* rax_37 = arg4;
                        int64_t rdx_21 = 0;
                        while ((!(*rax_37 >= 0 && rax_37[1] == -1)))
                        {
                            rdx_21 = (rdx_21 + 1);
                            rax_37 = &rax_37[2];
                            if (arg3 == rdx_21)
                            {
                                break;
                            }
                        }
                        if ((!(*rax_37 >= 0 && rax_37[1] == -1)))
                        {
                            goto label_40dd0e;
                        }
                        if (arg3 == rdx_21)
                        {
                            goto label_40dd0e;
                        }
                        int64_t rax_38 = sub_40bdb0(var_90, &var_90[2], &var_80, arg3, arg4, &var_78);
                        rbx_1 = rax_38;
                        r15_1 = rax_38;
                        r9_1 = (rax_38 << 4);
                    }
                    void** r14_1 = *(r12 + 0x98);
                    void* rdi_1 = *r14_1;
                    char* rsi_1 = (rdi_1 + r9_1);
                    char rax_9 = rsi_1[8];
                    if ((rax_9 & 8) == 0)
                    {
                        int64_t rcx_1;
                        uint64_t rcx_5;
                        int64_t r15_4;
                        if ((rsi_1[0xa] & 0x10) != 0)
                        {
                            rcx_5 = sub_40cd80(rdi_1, &r14_1[0x1b], rbx_1, r12, var_80);
                            int64_t rdx_2;
                            if (rcx_5 != 0)
                            {
                            label_40dcb9:
                                r15_4 = var_80;
                            label_40dbb8:
                                rdx_2 = (r15_4 + rcx_5);
                                rbx_1 = *(r14_1[3] + (rbx_1 << 3));
                            label_40d8b2:
                                var_80 = rdx_2;
                                if (var_90 != 0)
                                {
                                    if (rdx_2 > *(r12 + 0xa8))
                                    {
                                        goto label_40da5a;
                                    }
                                    void* rax_13 = *(*(r12 + 0xb8) + (rdx_2 << 3));
                                    if (rax_13 == 0)
                                    {
                                        goto label_40da5a;
                                    }
                                    if (sub_408600(*(rax_13 + 0x10), (rax_13 + 0x18), rbx_1) == 0)
                                    {
                                        goto label_40da5a;
                                    }
                                    goto label_40d8f4;
                                }
                            label_40d8f4:
                                *var_78[8] = 0;
                                goto label_40d8fc;
                            }
                            rcx_1 = var_80;
                            rsi_1 = (*r14_1 + r9_1);
                        label_40d88a:
                            if (sub_40a420(r12, rsi_1, rcx_1) != 0)
                            {
                                rdx_2 = (rcx_1 + 1);
                                rbx_1 = *(r14_1[3] + (r15_1 << 3));
                                goto label_40d8b2;
                            }
                            goto label_40da2a;
                        }
                        if (rax_9 != 4)
                        {
                            rcx_1 = var_80;
                            goto label_40d88a;
                        }
                        void* rax_27 = &arg4[((*rsi_1 + 1) * 2)];
                        int64_t rdx_16 = *(rax_27 + 8);
                        int64_t rdi_11 = *rax_27;
                        rcx_5 = (rdx_16 - rdi_11);
                        if (var_90 == 0)
                        {
                            if (rcx_5 != 0)
                            {
                                goto label_40dcb9;
                            }
                        label_40dd86:
                            if (sub_406ff0(&var_78, rbx_1) == 0)
                            {
                                goto label_40de04;
                            }
                            int64_t rcx_10 = var_80;
                            rbx_1 = **((r14_1[5] + (rbx_1 * 0x18)) + 0x10);
                            void* rax_44 = *(*(r12 + 0xb8) + (rcx_10 << 3));
                            if (sub_408600(*(rax_44 + 0x10), (rax_44 + 0x18), rbx_1) == 0)
                            {
                                rcx_1 = rcx_10;
                                rsi_1 = (*r14_1 + r9_1);
                                goto label_40d88a;
                            }
                            goto label_40d8fc;
                        }
                        if (rdi_11 == -1)
                        {
                            goto label_40da5a;
                        }
                        if (rdx_16 == -1)
                        {
                            goto label_40da5a;
                        }
                        if (rcx_5 != 0)
                        {
                            int64_t rax_28 = *(r12 + 8);
                            r15_4 = var_80;
                            if (memcmp((rdi_11 + rax_28), (rax_28 + r15_4), rcx_5) == 0)
                            {
                                goto label_40dbb8;
                            }
                            goto label_40da5a;
                        }
                        goto label_40dd86;
                    }
                    void* r9_3 = *(*(r12 + 0xb8) + (var_80 << 3));
                    void* r15_2 = (r14_1[5] + (rbx_1 * 0x18));
                    if (sub_406ff0(&var_78, rbx_1) == 0)
                    {
                    label_40de04:
                        free(var_68);
                        if (var_c1_1 != 0)
                        {
                        label_40df77:
                            free(var_b8_1);
                        }
                        if (var_90 != 0)
                        {
                        label_40dc8d:
                            sub_40bd60(var_90);
                            return 0xc;
                        }
                        return 0xc;
                    }
                    int64_t r10_1 = *(r15_2 + 8);
                    if (r10_1 > 0)
                    {
                        int64_t r11_1 = *(r9_3 + 0x10);
                        void* rax_18 = (r9_3 + 0x18);
                        int64_t r15_3 = *(r15_2 + 0x10);
                        int64_t r9_5 = 0;
                        int64_t r12_1 = -1;
                        int64_t rax_19;
                        int64_t r14_2;
                        do
                        {
                            r14_2 = *(r15_3 + (r9_5 << 3));
                            rax_19 = sub_408600(r11_1, rax_18, r14_2);
                            if (rax_19 != 0)
                            {
                                if (r12_1 != -1)
                                {
                                    break;
                                }
                                r12_1 = r14_2;
                            }
                            r9_5 = (r9_5 + 1);
                        } while (r10_1 != r9_5);
                        if ((rax_19 != 0 && r12_1 != -1))
                        {
                            rbx_1 = r12_1;
                            if (sub_408600(*var_78[8], var_c0_1, rbx_1) != 0)
                            {
                                rbx_1 = r14_2;
                            }
                            else if (var_90 != 0)
                            {
                                int64_t r15_5 = *var_90;
                                int64_t rdx_19 = var_80;
                                int64_t rax_32 = (r15_5 + 1);
                                *var_90 = rax_32;
                                int64_t rax_33;
                                if (rax_32 != var_90[1])
                                {
                                    rax_33 = var_90[2];
                                }
                                else
                                {
                                    rax_33 = realloc(var_90[2], (rax_32 * 0x60));
                                    if (rax_33 == 0)
                                    {
                                    label_40dc74:
                                        free(var_68);
                                        if (var_c1_1 != 0)
                                        {
                                            goto label_40df77;
                                        }
                                        goto label_40dc8d;
                                    }
                                    var_90[1] = (var_90[1] << 1);
                                    var_90[2] = rax_33;
                                }
                                int64_t* r15_8 = ((r15_5 * 0x30) + rax_33);
                                r15_8[1] = r14_2;
                                *r15_8 = rdx_19;
                                int64_t rax_34 = malloc(rax_4);
                                r15_8[2] = rax_34;
                                if (rax_34 == 0)
                                {
                                    goto label_40dc74;
                                }
                                memcpy(rax_34, arg4, rax_4);
                                if (sub_4096a0(&r15_8[3], &var_78) != 0)
                                {
                                    goto label_40dc74;
                                }
                            }
                        label_40d8fc:
                            if (rbx_1 >= 0)
                            {
                                goto label_40d905;
                            }
                        label_40da20:
                            if (rbx_1 == -2)
                            {
                                goto label_40de04;
                            }
                            goto label_40da2a;
                        }
                        rbx_1 = r12_1;
                        if (rbx_1 >= 0)
                        {
                        label_40d905:
                            rcx = var_80;
                            goto label_40d909;
                        }
                        goto label_40da20;
                    }
                label_40da2a:
                    if (var_90 == 0)
                    {
                        int64_t rax_21 = free(var_68);
                        if (var_c1_1 != 0)
                        {
                            var_90 = 1;
                            free(var_b8_1);
                            rax_21 = 1;
                        }
                        return rax_21;
                    }
                label_40da5a:
                    rcx = var_80;
                    rbx_1 = sub_40bdb0(var_90, &var_90[2], &var_80, arg3, arg4, &var_78);
                    rax_8 = arg4[1];
                } while (rax_8 >= rcx);
            }
            if ((rax_8 < rcx || (rax_8 >= rcx && (!(((rcx == rax_8 && *(r12 + 0xb0) == rbx_1) && var_90 == 0) && var_c1_1 == 0)))))
            {
                free(var_68);
                int64_t* rdi_9;
                if (var_c1_1 != 0)
                {
                    free(var_b8_1);
                    rdi_9 = var_90;
                }
                else
                {
                    rdi_9 = var_90;
                }
                if (((var_c1_1 != 0 && rdi_9 != 0) || (var_c1_1 == 0 && rdi_9 != 0)))
                {
                    sub_40bd60(rdi_9);
                }
            }
            return 0;
        }
    }
    return 0xc;
}

uint64_t sub_40e000(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4, 
    int64_t arg5)
{
    uint64_t rax = sub_40d010(arg1, &arg3[2], *arg3, arg3[1], arg4, arg5, 8);
    if (rax == 0)
    {
        int64_t r15_1 = arg3[1];
        int64_t rax_1 = arg1[0x19];
        int64_t rdx_2 = arg1[0x1a];
        int64_t rcx_2 = *arg2;
        void* rdi = arg1[0x1b];
        int64_t rsi_1 = r15_1;
        int64_t rax_6;
        if (rax_1 >= rdx_2)
        {
            rax_6 = realloc(rdi, (rdx_2 * 0x50));
            if (rax_6 == 0)
            {
                free(arg1[0x1b]);
                rax = 0xc;
            }
            else
            {
                int64_t rdx_9 = arg1[0x1a];
                int64_t rsi_7 = arg1[0x19];
                arg1[0x1b] = rax_6;
                memset((rax_6 + (rsi_7 * 0x28)), 0, (rdx_9 * 0x28));
                arg1[0x1a] = (arg1[0x1a] << 1);
                rax_1 = arg1[0x19];
                rdi = arg1[0x1b];
                rsi_1 = arg3[1];
            }
        }
        if (((rax_1 >= rdx_2 && rax_6 != 0) || rax_1 < rdx_2))
        {
            int64_t rdx_4 = (rax_1 * 0x28);
            if (rax_1 > 0)
            {
                void* r8_1 = ((rdi + rdx_4) - 0x28);
                if (arg5 == *(r8_1 + 8))
                {
                    *(r8_1 + 0x20) = 1;
                }
            }
            int64_t* rdi_1 = (rdi + rdx_4);
            int32_t rdx_5;
            rdx_5 = r15_1 == rcx_2;
            *rdi_1 = arg4;
            rdi_1[1] = arg5;
            *(rdi_1 + 0x22) = (-rdx_5);
            rdi_1[2] = rcx_2;
            rdi_1[3] = r15_1;
            arg1[0x19] = (rax_1 + 1);
            rdi_1[4] = 0;
            if (arg1[0x1c] < (r15_1 - rcx_2))
            {
                arg1[0x1c] = (r15_1 - rcx_2);
            }
            /* tailcall */
            return sub_407bd0(arg1, ((rsi_1 + arg5) - *arg2));
        }
    }
    return rax;
}

uint64_t sub_40e1a0(int64_t* arg1, int64_t* arg2, int64_t* arg3)
{
    int64_t* r14 = arg1;
    void* r15 = arg1[9];
    int64_t* rax = arg1[0x13];
    int64_t rax_1 = (r15 << 3);
    int64_t var_e0 = 0;
    if (*arg2 > 0)
    {
        do
        {
            int64_t r13_1 = *(*arg3 + (var_e0 << 3));
            int64_t rbp_2 = (r13_1 << 4);
            void* rax_6 = (*rax + rbp_2);
            if (*(rax_6 + 8) == 4)
            {
                int32_t rbx_1 = *(rax_6 + 8);
                if ((rbx_1 & 0x3ff00) != 0)
                {
                    uint32_t rbx_2 = (rbx_1 >> 8);
                    char rax_7 = sub_40a330(r14, r15, r14[0x14], rax_6);
                    uint32_t rcx_2;
                    rcx_2 = (rbx_2 & 0x3ff);
                    if ((((rcx_2 & 0x20) == 0 || ((rcx_2 & 0x20) != 0 && (rax_7 & 2) != 0)) && ((((rbx_2 & 4) == 0 && (rbx_2 & 8) == 0) || (((rbx_2 & 4) != 0 && (rax_7 & 1) != 0) && (rbx_2 & 8) == 0)) || (((rbx_2 & 4) == 0 && (rbx_2 & 8) != 0) && (rax_7 & 1) == 0))))
                    {
                        if ((rcx_2 & 0x80) == 0)
                        {
                            goto label_40e2b0;
                        }
                        if ((rax_7 & 8) != 0)
                        {
                            goto label_40e2b0;
                        }
                    }
                }
                else
                {
                label_40e2b0:
                    int64_t rbx_3 = r14[0x19];
                    int64_t rcx_3 = 0;
                    int64_t rdx_7;
                    for (int64_t rax_8 = rbx_3; rcx_3 < rax_8; rax_8 = rdx_7)
                    {
                        int64_t rsi_1 = (rcx_3 + rax_8);
                        int64_t r8_1 = r14[0x1b];
                        rdx_7 = (((rsi_1 >> 0x3f) + rsi_1) >> 1);
                        int64_t rdi_4;
                        if (r15 > *((r8_1 + (rdx_7 * 0x28)) + 8))
                        {
                            rdi_4 = rdx_7;
                            rdx_7 = rax_8;
                        }
                        else
                        {
                            int64_t rax_12;
                            for (; rdx_7 > rcx_3; rdx_7 = rax_12)
                            {
                                int64_t rsi_3 = (rdx_7 + rcx_3);
                                rax_12 = (((rsi_3 >> 0x3f) + rsi_3) >> 1);
                                rdi_4 = rax_12;
                                if (r15 > *((r8_1 + (rax_12 * 0x28)) + 8))
                                {
                                    break;
                                }
                            }
                            if (rdx_7 <= rcx_3)
                            {
                                break;
                            }
                        }
                        rcx_3 = (rdi_4 + 1);
                    }
                    if (rbx_3 > rcx_3)
                    {
                        void* rax_14 = (r14[0x1b] + (rcx_3 * 0x28));
                        if (*(rax_14 + 8) != r15)
                        {
                            goto label_40e378;
                        }
                        if (rcx_3 == -1)
                        {
                            goto label_40e378;
                        }
                        while (r13_1 != *rax_14)
                        {
                            rax_14 = (rax_14 + 0x28);
                            if (*(rax_14 - 8) == 0)
                            {
                                break;
                            }
                        }
                        if (r13_1 != *rax_14)
                        {
                            goto label_40e378;
                        }
                        goto label_40e34f;
                    }
                label_40e378:
                    int64_t** rax_15 = r14[0x13];
                    int64_t* rdx_9 = *rax_15;
                    int64_t rax_16 = *(rdx_9 + rbp_2);
                    int32_t var_5c;
                    if (r14[0x1d] <= 0)
                    {
                    label_40e34f:
                        var_5c = 0;
                    }
                    else
                    {
                        int64_t var_d8_1 = 0;
                        char* var_c8_1 = r14[1];
                        uint64_t rax_39;
                        while (true)
                        {
                            int64_t* rbx_5 = *(r14[0x1f] + (var_d8_1 << 3));
                            if (rax_16 == rdx_9[(rbx_5[1] * 2)])
                            {
                                void* r12_2 = *rbx_5;
                                void* r10_5 = r15;
                                void** rdx_19;
                                int64_t rbp_6;
                                void* r15_1;
                                if (rbx_5[4] > 0)
                                {
                                    void** rcx_13 = r12_2;
                                    rbp_6 = 0;
                                    char* r12_3 = var_c8_1;
                                    void* r8_2 = r10_5;
                                    void** r13_3;
                                    do
                                    {
                                        int64_t* r9_1 = *(rbx_5[5] + (rbp_6 << 3));
                                        r13_3 = r9_1[1];
                                        rdx_19 = (r13_3 - rcx_13);
                                        r15_1 = (rdx_19 + r8_2);
                                        if (rdx_19 > 0)
                                        {
                                            if (r14[6] < r15_1)
                                            {
                                                if (r14[0xb] < r15_1)
                                                {
                                                    break;
                                                }
                                                rax_39 = sub_407bd0(r14, r15_1);
                                                if (rax_39 != 0)
                                                {
                                                    return rax_39;
                                                }
                                                r12_3 = r14[1];
                                            }
                                            if (memcmp((r12_3 + r8_2), (r12_3 + rcx_13), rdx_19) != 0)
                                            {
                                                break;
                                            }
                                        }
                                        rax_39 = sub_40e000(r14, rbx_5, r9_1, r13_1, r15);
                                        r12_3 = r14[1];
                                        if (rax_39 > 1)
                                        {
                                            return rax_39;
                                        }
                                        rbp_6 = (rbp_6 + 1);
                                        rcx_13 = r13_3;
                                        r8_2 = r15_1;
                                    } while (rbp_6 < rbx_5[4]);
                                    if (((r14[6] < r15_1 && r14[0xb] < r15_1) && rdx_19 > 0))
                                    {
                                        var_c8_1 = r12_3;
                                        r10_5 = r8_2;
                                        r12_2 = rcx_13;
                                        if ((rbx_5[4] <= rbp_6 && rbp_6 > 0))
                                        {
                                            r13_3 = rcx_13;
                                            r15_1 = r8_2;
                                            goto label_40e7ec;
                                        }
                                    }
                                    if ((!((rdx_19 > 0 && r14[6] < r15_1) && r14[0xb] < r15_1)))
                                    {
                                        var_c8_1 = r12_3;
                                    label_40e7ec:
                                        r12_2 = (r13_3 + 1);
                                        r10_5 = r15_1;
                                    }
                                }
                                if ((((rbx_5[4] <= 0 || (rbx_5[4] > 0 && (!((rdx_19 > 0 && r14[6] < r15_1) && r14[0xb] < r15_1)))) || ((((rbx_5[4] > 0 && rdx_19 > 0) && r14[6] < r15_1) && r14[0xb] < r15_1) && rbx_5[4] <= rbp_6)) && r15 >= r12_2))
                                {
                                    void* r15_2 = r10_5;
                                    do
                                    {
                                        if ((r12_2 - *rbx_5) > 0)
                                        {
                                            if (r14[6] <= r15_2)
                                            {
                                                if (r14[0xb] <= r15_2)
                                                {
                                                    break;
                                                }
                                                rax_39 = sub_407a80(r14, (r15_2 + 1));
                                                if (rax_39 != 0)
                                                {
                                                    return rax_39;
                                                }
                                                var_c8_1 = r14[1];
                                            }
                                            void* rax_45 = (r15_2 + 1);
                                            if (*(var_c8_1 + r15_2) != *((var_c8_1 + r12_2) - 1))
                                            {
                                                break;
                                            }
                                            r15_2 = rax_45;
                                        }
                                        void* rax_47 = *(r14[0x17] + (r12_2 << 3));
                                        if (rax_47 != 0)
                                        {
                                            int64_t rcx_17 = *(rax_47 + 0x10);
                                            if (rcx_17 > 0)
                                            {
                                                int64_t rdi_23 = *(rax_47 + 0x18);
                                                int64_t rdx_23 = 0;
                                                int64_t* rsi_17 = *rax_15;
                                                void* rax_51;
                                                int64_t rbp_8;
                                                do
                                                {
                                                    rbp_8 = *(rdi_23 + (rdx_23 << 3));
                                                    rax_51 = &rsi_17[(rbp_8 * 2)];
                                                    if ((*(rax_51 + 8) == 9 && rax_16 == *rax_51))
                                                    {
                                                        break;
                                                    }
                                                    rdx_23 = (rdx_23 + 1);
                                                } while (rcx_17 != rdx_23);
                                                if (((*(rax_51 + 8) == 9 && rax_16 == *rax_51) && rbp_8 != -1))
                                                {
                                                    int64_t* rsi_18 = rbx_5[2];
                                                    void** rcx_18 = *rbx_5;
                                                    if (rsi_18 == 0)
                                                    {
                                                        int64_t* rax_54 = calloc(0x18, ((r12_2 - rcx_18) + 1));
                                                        rsi_18 = rax_54;
                                                        rbx_5[2] = rax_54;
                                                        if (rax_54 == 0)
                                                        {
                                                        label_40e976:
                                                            return 0xc;
                                                        }
                                                    }
                                                    rax_39 = sub_40d010(r14, rsi_18, rbx_5[1], rcx_18, rbp_8, r12_2, 9);
                                                    if (rax_39 != 1)
                                                    {
                                                        if (rax_39 != 0)
                                                        {
                                                            return rax_39;
                                                        }
                                                        int64_t rax_52 = rbx_5[3];
                                                        if (rbx_5[4] == rax_52)
                                                        {
                                                            void** rdx_29 = ((rax_52 + rax_52) + 1);
                                                            int64_t rax_56 = realloc(rbx_5[5], (rdx_29 << 3));
                                                            if (rax_56 == 0)
                                                            {
                                                                goto label_40e976;
                                                            }
                                                            rbx_5[5] = rax_56;
                                                            rbx_5[3] = rdx_29;
                                                        }
                                                        int64_t* rax_53 = calloc(1, 0x28);
                                                        if (rax_53 == 0)
                                                        {
                                                            goto label_40e976;
                                                        }
                                                        int64_t rdx_26 = rbx_5[4];
                                                        *(rbx_5[5] + (rdx_26 << 3)) = rax_53;
                                                        *rax_53 = rbp_8;
                                                        rax_53[1] = r12_2;
                                                        rbx_5[4] = (rdx_26 + 1);
                                                        sub_40e000(r14, rbx_5, rax_53, r13_1, r15);
                                                    }
                                                }
                                            }
                                        }
                                        r12_2 = (r12_2 + 1);
                                    } while (r15 >= r12_2);
                                }
                            }
                            var_d8_1 = (var_d8_1 + 1);
                            if (var_d8_1 >= r14[0x1d])
                            {
                                break;
                            }
                            rdx_9 = *rax_15;
                        }
                        var_5c = 0;
                        if (rbx_3 < r14[0x19])
                        {
                            int64_t rax_23 = (r13_1 << 3);
                            int64_t rax_25 = (r13_1 * 0x18);
                            int64_t r14_1 = rbx_3;
                            do
                            {
                                int64_t* rax_36 = (r14[0x1b] + (r14_1 * 0x28));
                                if ((r13_1 == *rax_36 && r15 == rax_36[1]))
                                {
                                    void* rbp_5 = rax_36[3];
                                    int64_t rax_37 = rax_36[2];
                                    int64_t rdx_16 = rax[6];
                                    void* rdi_14 = (rbp_5 - rax_37);
                                    void* var_d0_2;
                                    if (rbp_5 == rax_37)
                                    {
                                        int64_t rcx_6 = **((rax[5] + rax_25) + 0x10);
                                        var_d0_2 = (rdx_16 + (rcx_6 * 0x18));
                                    }
                                    else
                                    {
                                        int64_t rcx_11 = *(rax[3] + rax_23);
                                        var_d0_2 = (rdx_16 + (rcx_11 * 0x18));
                                    }
                                    void* rbp_4 = ((rbp_5 + r15) - rax_37);
                                    int32_t rax_27 = sub_40a330(r14, (rbp_4 - 1), r14[0x14], rax_37);
                                    int64_t r10_1 = (rbp_4 << 3);
                                    int64_t var_d8_2 = 0;
                                    int64_t* rax_28 = r14[0x17];
                                    void** r11_1 = (rax_28 + r10_1);
                                    void* rax_29 = *(rax_28 + rax_1);
                                    void* rdx_11 = *r11_1;
                                    if (rax_29 != 0)
                                    {
                                        var_d8_2 = *(rax_29 + 0x10);
                                    }
                                    int64_t var_48;
                                    int32_t rax_31;
                                    int64_t* rdx_14;
                                    if (rdx_11 == 0)
                                    {
                                        rdx_14 = r14[0x17];
                                        *r11_1 = sub_4098b0(&var_5c, rax, var_d0_2, rax_27);
                                    }
                                    else
                                    {
                                        void** var_c0;
                                        var_c0 = rax_27;
                                        void var_58;
                                        rax_31 = sub_409720(&var_58, *(rdx_11 + 0x50), var_d0_2);
                                        int32_t rcx_9 = var_c0;
                                        var_5c = rax_31;
                                        if (rax_31 == 0)
                                        {
                                            void** r10_3 = (r10_1 + r14[0x17]);
                                            *r10_3 = sub_4098b0(&var_5c, rax, &var_58, rcx_9);
                                            free(var_48);
                                            rdx_14 = r14[0x17];
                                        }
                                    }
                                    if (((rdx_11 == 0 && rdx_14[rbp_4] == 0) || ((rdx_11 != 0 && rax_31 == 0) && rdx_14[rbp_4] == 0)))
                                    {
                                        rax_39 = var_5c;
                                        if (rax_39 != 0)
                                        {
                                            return rax_39;
                                        }
                                    }
                                    if (((((((rdx_11 == 0 && *(rdx_14 + (rbp_4 << 3)) != 0) || ((rdx_11 != 0 && rax_31 == 0) && *(rdx_14 + (rbp_4 << 3)) != 0)) || (rdx_11 == 0 && *(rdx_14 + (rbp_4 << 3)) == 0)) || ((rdx_11 != 0 && rax_31 == 0) && *(rdx_14 + (rbp_4 << 3)) == 0)) && rdi_14 == 0) && *(*(rdx_14 + rax_1) + 0x10) > var_d8_2))
                                    {
                                        int64_t* r8_4 = (var_d0_2 + 0x10);
                                        void* rbp_7 = (var_d0_2 + 8);
                                        rax_39 = sub_40a1e0(r14, rbp_7, r8_4, r15);
                                        var_5c = rax_39;
                                        if (rax_39 != 0)
                                        {
                                            return rax_39;
                                        }
                                        rax_39 = sub_40e1a0(r14, rbp_7, r8_4);
                                        var_5c = rax_39;
                                        if (rax_39 != 0)
                                        {
                                            return rax_39;
                                        }
                                        r14_1 = (r14_1 + 1);
                                        if (r14_1 >= r14[0x19])
                                        {
                                            break;
                                        }
                                        continue;
                                    }
                                    if ((rdx_11 != 0 && rax_31 != 0))
                                    {
                                        free(var_48);
                                        return var_5c;
                                    }
                                }
                                r14_1 = (r14_1 + 1);
                            } while (r14_1 < r14[0x19]);
                        }
                    }
                }
            }
            var_e0 = (var_e0 + 1);
        } while (var_e0 < *arg2);
    }
    return 0;
}

int64_t* sub_40ea20(int32_t* arg1, int64_t* arg2, int64_t* arg3)
{
    int64_t r12 = arg2[9];
    void* r15 = arg2[0x13];
    int64_t rbp = (r12 << 3);
    int64_t* r14_1 = (arg2[0x17] + rbp);
    void* rax_2;
    int32_t rax_4;
    int64_t* rbp_1;
    if (arg2[0x18] >= r12)
    {
        rax_2 = *r14_1;
        if (rax_2 == 0)
        {
            *r14_1 = arg3;
            rbp_1 = arg3;
        }
        else
        {
            int128_t* rax_3 = *(rax_2 + 0x50);
            int128_t var_58;
            if (arg3 == 0)
            {
                var_58 = *rax_3;
                int64_t rax_8 = rax_3[1];
                int64_t var_48_1 = rax_8;
                int64_t* rax_10 = sub_4098b0(arg1, r15, &var_58, sub_40a330(arg2, (r12 - 1), arg2[0x14], rax_8));
                rbp_1 = rax_10;
                *r14_1 = rax_10;
            }
            else
            {
                void* r14_2 = arg3[0xa];
                rax_4 = sub_409720(&var_58, r14_2, rax_3);
                *arg1 = rax_4;
                if (rax_4 != 0)
                {
                label_40ebd0:
                    rbp_1 = nullptr;
                }
                else
                {
                    int64_t rax_5 = arg2[9];
                    int64_t* rax_7 = sub_4098b0(arg1, r15, &var_58, sub_40a330(arg2, (rax_5 - 1), arg2[0x14], rax_5));
                    rbp_1 = rax_7;
                    *(arg2[0x17] + rbp) = rax_7;
                    int64_t var_48;
                    if (r14_2 != 0)
                    {
                        free(var_48);
                    }
                }
            }
        }
    }
    else
    {
        *r14_1 = arg3;
        rbp_1 = arg3;
        arg2[0x18] = r12;
    }
    if (((((arg2[0x18] < r12 || (arg2[0x18] >= r12 && rax_2 == 0)) || ((arg2[0x18] >= r12 && rax_2 != 0) && arg3 == 0)) || (((arg2[0x18] >= r12 && rax_2 != 0) && arg3 != 0) && rax_4 == 0)) && *(r15 + 0x98) != 0))
    {
        if (rbp_1 == 0)
        {
            goto label_40ebd0;
        }
        int64_t* r14_3 = &rbp_1[2];
        int64_t* r15_1 = &rbp_1[3];
        int32_t rax_11 = sub_40a1e0(arg2, r14_3, r15_1, r12);
        *arg1 = rax_11;
        if (rax_11 != 0)
        {
            goto label_40ebd0;
        }
        if ((rbp_1[0xd] & 0x40) != 0)
        {
            int32_t rax_12 = sub_40e1a0(arg2, r14_3, r15_1);
            *arg1 = rax_12;
            if (rax_12 != 0)
            {
                goto label_40ebd0;
            }
            rbp_1 = *(arg2[0x17] + (r12 << 3));
        }
    }
    return rbp_1;
}

uint64_t sub_40ebe0(void* arg1, int64_t* arg2)
{
    int64_t rbx = arg2[3];
    int64_t rbp = arg2[2];
    int64_t var_58 = 1;
    int64_t var_50 = 1;
    int64_t* rax = malloc(8);
    if (rax == 0)
    {
        return 0xc;
    }
    *rax = rbp;
    int32_t rax_1 = sub_410670(arg1, arg2, rbx, &var_58);
    if (rax_1 == 0)
    {
        int32_t var_7c_1 = 0;
        int64_t* var_60_1 = &arg2[6];
        if (rbx > 0)
        {
            while (true)
            {
                int64_t rdi_1 = *arg2;
                int64_t rax_3 = (rbx << 3);
                if (*(rdi_1 + (rbx << 3)) == 0)
                {
                    var_7c_1 = (var_7c_1 + 1);
                }
                else
                {
                    var_7c_1 = 0;
                }
                if (((*(rdi_1 + (rbx << 3)) == 0 && *(arg1 + 0xe0) >= var_7c_1) || (*(rdi_1 + (rbx << 3)) != 0 && *(arg1 + 0xe0) >= 0)))
                {
                    rbx = (rbx - 1);
                    int64_t var_50_1 = 0;
                    void* r14_1 = *((*(arg1 + 0xb8) + rax_3) - 8);
                    if (r14_1 != 0)
                    {
                        int64_t* r12_1 = *(arg1 + 0x98);
                        if (*(r14_1 + 0x28) > 0)
                        {
                            int32_t var_90;
                            var_90 = 0;
                            do
                            {
                                int64_t rbp_1 = *(*(r14_1 + 0x30) + (var_90 << 3));
                                int64_t r11_2 = (rbp_1 << 4);
                                char* rsi_1 = (*r12_1 + r11_2);
                                if ((rsi_1[0xa] & 0x10) == 0)
                                {
                                    goto label_40ece6;
                                }
                                void** r10_1 = *(arg1 + 0x98);
                                int64_t rax_14 = arg2[3];
                                int32_t rax_15 = sub_40cd80(*r10_1, &r10_1[0x1b], rbp_1, arg1, rbx);
                                bool cond:2_1 = rax_15 != 0;
                                int32_t r9_1 = rax_15;
                                int64_t rax_17;
                                void* rax_18;
                                if (rax_15 > 0)
                                {
                                    rax_17 = (rax_15 + rbx);
                                    if (rax_14 >= rax_17)
                                    {
                                        rax_18 = *(*arg2 + (rax_17 << 3));
                                        if ((rax_18 != 0 && sub_408600(*(rax_18 + 0x10), (rax_18 + 0x18), *(r10_1[3] + (rbp_1 << 3))) == 0))
                                        {
                                            rsi_1 = (*r12_1 + r11_2);
                                            goto label_40ece6;
                                        }
                                    }
                                }
                                char rax_5;
                                void* rax_7;
                                int64_t rax_8;
                                if (((rax_15 <= 0 && (!cond:2_1)) || ((rax_15 > 0 && rax_14 >= rax_17) && rax_18 == 0)))
                                {
                                    rsi_1 = (*r12_1 + r11_2);
                                label_40ece6:
                                    rax_5 = sub_40a420(arg1, rsi_1, rbx);
                                    if (rax_5 != 0)
                                    {
                                        rax_7 = *(*arg2 + rax_3);
                                        if (rax_7 != 0)
                                        {
                                            rax_8 = sub_408600(*(rax_7 + 0x10), (rax_7 + 0x18), *(r12_1[3] + (rbp_1 << 3)));
                                            if (rax_8 != 0)
                                            {
                                                r9_1 = 1;
                                            }
                                        }
                                    }
                                }
                                if (((((((((rax_15 <= 0 && (!cond:2_1)) || ((rax_15 > 0 && rax_14 >= rax_17) && rax_18 == 0)) && rax_5 != 0) && rax_7 != 0) && rax_8 != 0) || (rax_15 <= 0 && cond:2_1)) || (rax_15 > 0 && rax_14 < rax_17)) || ((rax_15 > 0 && rax_14 >= rax_17) && rax_18 != 0)))
                                {
                                    if (arg2[5] != 0)
                                    {
                                        if (sub_408890(arg1, &arg2[5], var_60_1, *(r12_1[3] + (rbp_1 << 3)), (r9_1 + rbx), rbp_1, rbx) == 0)
                                        {
                                            goto label_40ed5f;
                                        }
                                    }
                                    else
                                    {
                                    label_40ed5f:
                                        if (sub_406ff0(&var_58, rbp_1) == 0)
                                        {
                                            rax_1 = 0xc;
                                            goto label_40ee8e;
                                        }
                                    }
                                }
                                var_90 = (var_90 + 1);
                            } while (var_90 < *(r14_1 + 0x28));
                        }
                    }
                    rax_1 = sub_410670(arg1, arg2, rbx, &var_58);
                    if (rax_1 != 0)
                    {
                        break;
                    }
                    if (rbx == 0)
                    {
                        break;
                    }
                    continue;
                }
                if (((*(rdi_1 + (rbx << 3)) == 0 && *(arg1 + 0xe0) < var_7c_1) || (*(rdi_1 + (rbx << 3)) != 0 && *(arg1 + 0xe0) < 0)))
                {
                    memset(rdi_1, 0, rax_3);
                    free(rax);
                    return 0;
                }
            }
        }
        if ((rbx <= 0 || (rbx > 0 && rax_1 == 0)))
        {
            rax_1 = 0;
        }
    }
label_40ee8e:
    free(rax);
    return rax_1;
}

uint64_t sub_40ef10(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, 
    int64_t arg5, int64_t arg6, int64_t arg7, int64_t* arg8, int32_t arg9)
{
    int64_t rbp = arg5;
    int64_t rbx = arg4;
    int64_t rcx = 0x20;
    int64_t* rax = *arg1;
    void* var_138;
    int64_t* rdi = &var_138;
    char* rax_1 = nullptr;
    for (; rcx != 0; rcx = (rcx - 1))
    {
        *rdi = 0;
        rdi = &rdi[1];
    }
    char* rcx_1 = arg1[4];
    char* var_1d8 = rcx_1;
    if (rcx_1 != 0)
    {
        uint32_t rdx_1 = arg1[7];
        if (((rdx_1 & 8) == 0 || ((rdx_1 & 8) != 0 && rbx == arg5)))
        {
            var_1d8 = nullptr;
        }
        if (((rdx_1 & 8) != 0 && rbx != arg5))
        {
            if ((rdx_1 & 1) == 0)
            {
                rax_1 = rcx_1;
            }
            var_1d8 = rax_1;
        }
    }
    int64_t var_1a8 = 0;
    int64_t rax_3 = arg1[6];
    if (rax_3 < arg7)
    {
        int64_t rsi_3 = ((arg7 - 1) - rax_3);
        arg7 = (arg7 + (rax_3 - (arg7 - 1)));
        var_1a8 = rsi_3;
    }
    int32_t var_1ec_1;
    if (arg1[2] == 0)
    {
    label_40ff20:
        var_1ec_1 = 1;
    }
    else
    {
        void* rax_5 = rax[9];
        if (rax_5 == 0)
        {
            goto label_40ff20;
        }
        void* rdx_4 = rax[0xa];
        if (rdx_4 == 0)
        {
            goto label_40ff20;
        }
        void* rcx_2 = rax[0xb];
        if (rcx_2 == 0)
        {
            goto label_40ff20;
        }
        if (rax[0xc] == 0)
        {
            goto label_40ff20;
        }
        if (*(rax_5 + 0x10) != 0)
        {
            goto label_40f061;
        }
        if (*(rdx_4 + 0x10) != 0)
        {
            goto label_40f061;
        }
        if ((*(rcx_2 + 0x10) != 0 && arg1[7] < 0))
        {
            goto label_40f061;
        }
        if (rbx != 0)
        {
            var_1ec_1 = 1;
        }
        if ((rbx == 0 || (rbx != 0 && rbp == 0)))
        {
            rbp = 0;
            rbx = 0;
        label_40f061:
            uint32_t var_1f0_1 = 1;
            if (arg7 == 0)
            {
                int64_t* rax_50;
                rax_50 = rax[0x13] != 0;
                var_1f0_1 = rax_50;
            }
            int64_t rdi_2 = arg1[5];
            int32_t rax_7 = arg1[3];
            int32_t rdx_5 = *(rax + 0xb4);
            int64_t rax_8 = rax[2];
            int32_t var_a8_1 = rdx_5;
            int64_t rsi_5 = (rax_8 + 1);
            int64_t var_228_1 = rax_8;
            int64_t rax_9 = rdx_5;
            if (rsi_5 < rax_9)
            {
                rsi_5 = rax_9;
            }
            int64_t rax_10 = (arg3 + 1);
            int64_t var_c0_1 = rdi_2;
            int64_t var_e8_1 = arg3;
            if (rsi_5 > rax_10)
            {
                rsi_5 = rax_10;
            }
            int64_t var_d0_1 = arg3;
            int64_t var_d8_1 = arg3;
            var_138 = arg2;
            uint64_t rax_13 = (rax_7 & 0x400000);
            bool var_b0_1 = rax_13 != 0;
            bool cond:3_1 = (rax_13 | rdi_2) != 0;
            uint8_t rax_15 = rax[0x16];
            uint8_t rdx_6 = rax_15;
            rax_15 = (rax_15 >> 3);
            rdx_6 = (rdx_6 >> 2);
            char var_ae_1 = (rax_15 & 1);
            char var_af_1 = (rdx_6 & 1);
            int32_t rax_17;
            int32_t rcx_4;
            int32_t rdx_8;
            rax_17 = sub_406ee0(&var_138, rsi_5);
            var_1ec_1 = rax_17;
            int64_t var_60;
            int64_t var_40;
            int64_t* rdi_9;
            int64_t* var_80;
            if (rax_17 != 0)
            {
            label_40f958:
                rdi_9 = var_80;
            }
            else
            {
                void* var_b8_1 = &rax[0x17];
                uint8_t rax_19 = rax[0x16];
                int32_t var_230_1;
                var_230_1 = rax_19;
                rax_19 = (rax_19 >> 4);
                char var_aa_1 = (rax_19 & 1);
                void* var_130;
                int64_t rax_22;
                if (cond:3_1 == 0)
                {
                    var_130 = arg2;
                    rax_22 = arg3;
                }
                if ((cond:3_1 != 0 || (cond:3_1 == 0 && *(rax + 0xb4) > 1)))
                {
                    rax_22 = 0;
                }
                uint8_t rax_24 = arg1[7];
                int64_t var_d8_2 = arg6;
                var_230_1 = rax_24;
                rax_24 = (rax_24 >> 7);
                uint8_t var_ab_1 = rax_24;
                int64_t r15_1 = rax[0x13];
                int64_t var_90_1 = -1;
                int64_t r12_1 = (r15_1 + r15_1);
                if (r12_1 > 0)
                {
                    if (r12_1 > 0x666666666666666)
                    {
                    label_40ff61:
                        rdi_9 = var_80;
                        var_1ec_1 = 0xc;
                    }
                    else
                    {
                        int64_t rax_27 = malloc(((r12_1 + (r15_1 << 3)) << 3));
                        var_60 = rax_27;
                        int64_t rax_28;
                        rax_28 = malloc((r15_1 << 4));
                        var_40 = rax_28;
                        if (rax_28 == 0)
                        {
                            goto label_40ff61;
                        }
                        if (rax_27 == 0)
                        {
                            goto label_40ff61;
                        }
                    }
                }
                if ((r12_1 <= 0 || (r12_1 > 0 && r12_1 <= 0x666666666666666)))
                {
                    int64_t var_68_1 = r12_1;
                    int32_t var_58_1 = 1;
                    int64_t var_48_1 = r12_1;
                    int64_t var_f8;
                    if ((arg7 <= 1 && (rax[0x16] & 2) == 0))
                    {
                        var_80 = nullptr;
                    label_40f2c9:
                        int64_t var_180 = rbx;
                        int32_t rax_32 = (arg9 & 1);
                        int32_t var_c8_1 = (((rax_32 - rax_32) & 2) + 4);
                        bool cond:8_1 = rbx >= rbp;
                        int32_t rax_36;
                        rax_36 = rbx <= rbp;
                        int32_t rax_37 = ((rax_36 + rax_36) - 1);
                        int64_t rax_38 = rbp;
                        if (rbx <= rbp)
                        {
                            rax_38 = rbx;
                        }
                        int64_t rax_39 = rbp;
                        if (cond:8_1)
                        {
                            rax_39 = rbx;
                        }
                        int32_t rsi_8 = *(rax + 0xb4);
                        int32_t rax_41 = 8;
                        if (var_1d8 != 0)
                        {
                            rcx_4 = 4;
                            if (rsi_8 != 1)
                            {
                                int64_t rax_43 = arg1[3];
                                int64_t var_230_2 = rax_43;
                                int32_t rcx_5;
                                rcx_5 = ((rax_43 & 0x400000) | rdi_2) == 0;
                                rcx_4 = (rcx_5 << 2);
                            }
                            int32_t rdx_9;
                            rdx_9 = rbx <= rbp;
                            int32_t rax_46;
                            rax_46 = rdi_2 != 0;
                            rax_41 = ((rax_46 | rcx_4) | (rdx_9 + rdx_9));
                        }
                        rcx_4 = rbx > rax_39;
                        rdx_8 = rbx < rax_38;
                        rcx_4 = (rcx_4 | rdx_8);
                        if (rcx_4 != 0)
                        {
                        label_40f8b0:
                            rdi_9 = var_80;
                            var_1ec_1 = 1;
                        }
                        else
                        {
                            int64_t* rdx_10 = nullptr;
                            if (rbx <= rbp)
                            {
                                rdx_10 = &var_180;
                            }
                            bool cond:11_1 = rdx_10 != 0;
                            int32_t rax_48 = (rax_41 - 4);
                            uint64_t rax_49 = rax_48;
                            if (rax_49 > 4)
                            {
                            label_40fe21:
                                int64_t rcx_22 = rax_39;
                                int32_t rax_121;
                                int64_t rdx_39;
                                do
                                {
                                    int64_t var_110;
                                    rdx_39 = (rbx - var_110);
                                    if (rax_22 <= rdx_39)
                                    {
                                        rax_121 = sub_40a620(&var_138, rbx, arg9);
                                        if (rax_121 != 0)
                                        {
                                            var_1ec_1 = rax_121;
                                            break;
                                        }
                                        rdx_39 = (rbx - var_110);
                                    }
                                    char* rax_119 = var_1d8;
                                    if (arg3 > rbx)
                                    {
                                        rax_119 = &var_1d8[*(var_130 + rdx_39)];
                                    }
                                    if (*rax_119 != 0)
                                    {
                                        goto label_40f495;
                                    }
                                    rbx = (rbx + rax_37);
                                    var_180 = rbx;
                                    if (rbx < rax_38)
                                    {
                                        break;
                                    }
                                } while (rbx <= rcx_22);
                                if ((rax_22 <= rdx_39 && rax_121 != 0))
                                {
                                    goto label_40f958;
                                }
                                goto label_40f8b0;
                            }
                            int64_t var_90_2;
                            void* rax_140;
                            int32_t rax_145;
                            void* rcx_30;
                            int32_t rbp_4;
                            int64_t r12_2;
                            do
                            {
                                int64_t rax_83;
                                switch (rax_49)
                                {
                                    case 0:
                                    case 1:
                                    {
                                        if (rax_38 > rbx)
                                        {
                                            break;
                                        }
                                        char rcx_6 = 0;
                                        int64_t rax_52 = rbx;
                                        uint64_t rdx_11;
                                        do
                                        {
                                            rdx_11 = 0;
                                            if (arg3 > rax_52)
                                            {
                                                rdx_11 = *(arg2 + rax_52);
                                            }
                                            if (rdi_2 != 0)
                                            {
                                                rdx_11 = *(rdi_2 + rdx_11);
                                            }
                                            if (var_1d8[rdx_11] != 0)
                                            {
                                                break;
                                            }
                                            rax_52 = (rax_52 - 1);
                                            rcx_6 = 1;
                                        } while (rax_52 >= rax_38);
                                        if (var_1d8[rdx_11] == 0)
                                        {
                                            var_180 = rax_52;
                                            rdi_9 = var_80;
                                            var_1ec_1 = 1;
                                            break;
                                        }
                                        if (rcx_6 != 0)
                                        {
                                            var_180 = rax_52;
                                            rbx = rax_52;
                                        }
                                        break;
                                    }
                                    case 2:
                                    {
                                        if (rax_39 > rbx)
                                        {
                                            int64_t rax_89 = (rbx + 1);
                                            if (var_1d8[*(arg2 + rbx)] == 0)
                                            {
                                                uint64_t rdx_22;
                                                do
                                                {
                                                    rbx = rax_89;
                                                    if (rax_39 == rax_89)
                                                    {
                                                        break;
                                                    }
                                                    rdx_22 = *(arg2 + rax_89);
                                                    rax_89 = (rax_89 + 1);
                                                } while (var_1d8[rdx_22] == 0);
                                                if (rax_39 != rax_89)
                                                {
                                                    goto label_410208;
                                                }
                                                var_180 = rax_39;
                                            }
                                        }
                                        break;
                                    }
                                    case 3:
                                    {
                                        if (rax_39 > rbx)
                                        {
                                            rax_83 = (rbx + 1);
                                            if (var_1d8[*(rdi_2 + *(arg2 + rbx))] == 0)
                                            {
                                                uint64_t rdx_20;
                                                do
                                                {
                                                    rbx = rax_83;
                                                    if (rax_39 == rax_83)
                                                    {
                                                        break;
                                                    }
                                                    rdx_20 = *(rdi_2 + *(arg2 + rax_83));
                                                    rax_83 = (rbx + 1);
                                                } while (var_1d8[rdx_20] == 0);
                                                if (rax_39 == rax_83)
                                                {
                                                    var_180 = rax_39;
                                                }
                                                else
                                                {
                                                label_410208:
                                                    var_180 = rbx;
                                                }
                                            }
                                        }
                                        break;
                                    }
                                }
                                if ((((((((rax_49 == 3 && rax_39 > rbx) && *(var_1d8 + *(rdi_2 + *(arg2 + rbx))) == 0) && rax_39 == rax_83) || (rax_49 == 3 && rax_39 <= rbx)) || (rax_49 == 2 && rax_39 <= rbx)) || ((rax_49 == 2 && rax_39 > rbx) && *(var_1d8 + *(arg2 + rbx)) == 0)) && rax_39 == rbx))
                                {
                                    uint64_t rax_86 = 0;
                                    if (arg3 > rax_39)
                                    {
                                        rax_86 = *(arg2 + rax_39);
                                    }
                                    if (rdi_2 != 0)
                                    {
                                        rax_86 = *(rdi_2 + rax_86);
                                    }
                                    if (var_1d8[rax_86] == 0)
                                    {
                                        break;
                                    }
                                }
                            label_40f495:
                                int32_t rax_53 = sub_40a620(&var_138, rbx, arg9);
                                var_1ec_1 = rax_53;
                                if (rax_53 != 0)
                                {
                                    goto label_40f958;
                                }
                                int32_t* var_128;
                                if (((rsi_8 == 1 || (rsi_8 != 1 && rax_22 == 0)) || ((rsi_8 != 1 && rax_22 != 0) && *var_128 != 0xffffffff)))
                                {
                                    int32_t var_58_2 = 0;
                                    int64_t var_70_1 = 0;
                                    char rax_56 = (var_1f0_1 & 1);
                                    int64_t* r14_2 = rax[9];
                                    int32_t var_188 = 0;
                                    int64_t var_f0;
                                    int64_t var_228_2 = var_f0;
                                    if (r14_2[0xd] < 0)
                                    {
                                        int32_t rax_58 = sub_40a330(&var_138, (var_f0 - 1), arg9, var_f0);
                                        if ((rax_58 & 1) != 0)
                                        {
                                            r14_2 = rax[0xa];
                                        }
                                        else if (rax_58 != 0)
                                        {
                                            if ((rax_58 & 6) == 6)
                                            {
                                                r14_2 = rax[0xc];
                                            }
                                            else
                                            {
                                                if ((rax_58 & 2) != 0)
                                                {
                                                    r14_2 = rax[0xb];
                                                }
                                                if (((rax_58 & 2) == 0 && (rax_58 & 4) != 0))
                                                {
                                                    r14_2 = sub_4098b0(&var_188, rax, r14_2[0xa], rax_58);
                                                }
                                            }
                                        }
                                        if ((((((rax_58 & 1) != 0 || (((rax_58 & 1) == 0 && rax_58 != 0) && (rax_58 & 6) == 6)) || ((((rax_58 & 1) == 0 && rax_58 != 0) && (rax_58 & 6) != 6) && (rax_58 & 2) != 0)) || (((((rax_58 & 1) == 0 && rax_58 != 0) && (rax_58 & 6) != 6) && (rax_58 & 2) == 0) && (rax_58 & 4) != 0)) && r14_2 == 0))
                                        {
                                            int32_t rax_136 = var_188;
                                            var_1ec_1 = rax_136;
                                            if (rax_136 != 0xc)
                                            {
                                                __assert_fail("err == REG_ESPACE", "lib/regexec.c", 0x431, "check_matching");
                                                /* no return */
                                            }
                                            break;
                                        }
                                    }
                                    bool var_18b_1;
                                    char rax_61;
                                    bool cond:13_1;
                                    if (var_80 != 0)
                                    {
                                        cond:13_1 = rax[0x13] != 0;
                                        var_80[var_228_2] = r14_2;
                                        if (cond:13_1)
                                        {
                                            int64_t* rbx_15 = &r14_2[2];
                                            void* rbp_7 = &r14_2[3];
                                            int32_t rax_154 = sub_40a1e0(&var_138, rbx_15, rbp_7, 0);
                                            var_188 = rax_154;
                                            if (rax_154 == 0)
                                            {
                                                rax_61 = r14_2[0xd];
                                                if ((rax_61 & 0x40) != 0)
                                                {
                                                    rax_154 = sub_40e1a0(&var_138, rbx_15, rbp_7);
                                                    var_188 = rax_154;
                                                    if (rax_154 == 0)
                                                    {
                                                        rax_61 = r14_2[0xd];
                                                    }
                                                }
                                                if ((((rax_61 & 0x40) != 0 && rax_154 == 0) || (rax_61 & 0x40) == 0))
                                                {
                                                    var_18b_1 = false;
                                                    goto label_40f5a8;
                                                }
                                            }
                                            r12_2 = rax_154;
                                        }
                                    }
                                    int64_t* var_178;
                                    int64_t var_168;
                                    if ((var_80 == 0 || (var_80 != 0 && (!cond:13_1))))
                                    {
                                        var_18b_1 = cond:11_1;
                                        rax_61 = r14_2[0xd];
                                    label_40f5a8:
                                        char var_218_1 = 0;
                                        r12_2 = -1;
                                        if ((rax_61 & 0x10) == 0)
                                        {
                                        label_40f5c8:
                                            int64_t rbx_2 = var_f0;
                                            int64_t var_210_1 = r12_2;
                                            int64_t* var_1e8_1 = rdx_10;
                                        label_40f63b:
                                            int64_t* rax_63;
                                            int64_t rax_67;
                                            int64_t* rbp_1;
                                            int64_t rbp_3;
                                            if (arg6 > rbx_2)
                                            {
                                                rax_67 = (rbx_2 + 1);
                                                if (((rax_67 >= var_f8 && var_f8 < arg3) || (((rax_67 < var_f8 || (rax_67 >= var_f8 && var_f8 >= arg3)) && rax_67 >= rax_22) && rax_22 < arg3)))
                                                {
                                                    int32_t rax_96 = sub_407a80(&var_138, (rax_67 + 1));
                                                    var_188 = rax_96;
                                                    if (rax_96 != 0)
                                                    {
                                                        if (rax_96 == 0xc)
                                                        {
                                                            break;
                                                        }
                                                        __assert_fail("err == REG_ESPACE", "lib/regexec.c", 0x468, "check_matching");
                                                        /* no return */
                                                    }
                                                    rbx_2 = var_f0;
                                                    if ((r14_2[0xd] & 0x20) == 0)
                                                    {
                                                        goto label_40f688;
                                                    }
                                                }
                                                if ((((((rax_67 < var_f8 || (rax_67 >= var_f8 && var_f8 >= arg3)) && (rax_67 < rax_22 || (rax_67 >= rax_22 && rax_22 >= arg3))) && (r14_2[0xd] & 0x20) != 0) || (rax_67 >= var_f8 && var_f8 < arg3)) || (((rax_67 < var_f8 || (rax_67 >= var_f8 && var_f8 >= arg3)) && rax_67 >= rax_22) && rax_22 < arg3)))
                                                {
                                                    if (r14_2[2] > 0)
                                                    {
                                                        void* rax_97 = &rax[0x1b];
                                                        int64_t r12_3 = 0;
                                                        int64_t r8_2 = rbx_2;
                                                    label_40fbf0:
                                                        void* r9_1 = *rax;
                                                        int64_t r15_4 = *(r14_2[3] + (r12_3 << 3));
                                                        void* rax_109 = ((r15_4 << 4) + r9_1);
                                                        if ((*(rax_109 + 0xa) & 0x10) == 0)
                                                        {
                                                            goto label_40fbde;
                                                        }
                                                        int32_t rbx_7 = *(rax_109 + 8);
                                                        if ((rbx_7 & 0x3ff00) != 0)
                                                        {
                                                            char rax_110 = sub_40a330(&var_138, r8_2, arg9, rax_109);
                                                            uint32_t rdx_34 = (rbx_7 >> 8);
                                                            uint32_t rcx_20;
                                                            rcx_20 = (rdx_34 & 0x3ff);
                                                            if ((rdx_34 & 4) != 0)
                                                            {
                                                                if ((rax_110 & 1) == 0)
                                                                {
                                                                    goto label_40fbde;
                                                                }
                                                                if ((rdx_34 & 8) != 0)
                                                                {
                                                                    goto label_40fbde;
                                                                }
                                                            }
                                                            else if (((rdx_34 & 8) != 0 && (rax_110 & 1) != 0))
                                                            {
                                                                goto label_40fbde;
                                                            }
                                                            if (((rcx_20 & 0x20) != 0 && (rax_110 & 2) == 0))
                                                            {
                                                                goto label_40fbde;
                                                            }
                                                            if ((rcx_20 & 0x80) == 0)
                                                            {
                                                                goto label_40fade;
                                                            }
                                                            if ((rax_110 & 8) == 0)
                                                            {
                                                                goto label_40fbde;
                                                            }
                                                            goto label_40fade;
                                                        }
                                                    label_40fade:
                                                        int32_t rax_98 = sub_40cd80(r9_1, rax_97, r15_4, &var_138, r8_2);
                                                        if (rax_98 != 0)
                                                        {
                                                            int64_t rbx_6 = (rax_98 + var_f0);
                                                            void** rdi_22 = &var_138;
                                                            if (var_58_2 >= rax_98)
                                                            {
                                                                rax_98 = var_58_2;
                                                            }
                                                            var_58_2 = rax_98;
                                                            int32_t rax_99 = sub_407bd0(rdi_22, rbx_6);
                                                            int32_t var_184 = rax_99;
                                                            int64_t* rdx_31;
                                                            if (rax_99 == 0)
                                                            {
                                                                int64_t rax_101 = *(rax[3] + (r15_4 << 3));
                                                                int64_t r15_2 = (rbx_6 << 3);
                                                                void* r8_4 = (var_80 + r15_2);
                                                                int64_t** var_208_1 = r8_4;
                                                                int128_t* rdx_28 = (rax[6] + (rax_101 * 0x18));
                                                                void* rax_103 = *r8_4;
                                                                if (rax_103 == 0)
                                                                {
                                                                    var_178 = *rdx_28;
                                                                    int64_t rax_111 = rdx_28[1];
                                                                    var_168 = rax_111;
                                                                    rdx_31 = var_80;
                                                                    *var_208_1 = sub_4098b0(&var_184, rax, &var_178, sub_40a330(&var_138, (rbx_6 - 1), arg9, rax_111));
                                                                    if (rdx_31[rbx_6] != 0)
                                                                    {
                                                                        goto label_40fbd6;
                                                                    }
                                                                label_40fcd0:
                                                                    rax_99 = var_184;
                                                                    if (rax_99 == 0)
                                                                    {
                                                                        goto label_40fbd6;
                                                                    }
                                                                    goto label_40fec8;
                                                                }
                                                                rax_99 = sub_409720(&var_178, *(rax_103 + 0x50), rdx_28);
                                                                var_184 = rax_99;
                                                                if (rax_99 != 0)
                                                                {
                                                                    goto label_40fec0;
                                                                }
                                                                *(r15_2 + var_80) = sub_4098b0(&var_184, rax, &var_178, sub_40a330(&var_138, (rbx_6 - 1), arg9, rax_99));
                                                                free(var_168);
                                                                rdx_31 = var_80;
                                                                if (rdx_31[rbx_6] != 0)
                                                                {
                                                                    goto label_40fbd6;
                                                                }
                                                                goto label_40fcd0;
                                                            }
                                                        label_40fec0:
                                                            rdx_31 = var_80;
                                                        label_40fec8:
                                                            var_188 = rax_99;
                                                            if (rdx_31 != 0)
                                                            {
                                                                goto label_40fed4;
                                                            }
                                                            goto label_40ff10;
                                                        }
                                                    label_40fbd6:
                                                        r8_2 = var_f0;
                                                    label_40fbde:
                                                        r12_3 = (r12_3 + 1);
                                                        if (r12_3 < r14_2[2])
                                                        {
                                                            goto label_40fbf0;
                                                        }
                                                        rbx_2 = r8_2;
                                                        goto label_40ff33;
                                                    }
                                                label_40ff33:
                                                    var_188 = 0;
                                                label_40f688:
                                                    var_f0 = (rbx_2 + 1);
                                                    uint64_t rbx_3 = *(var_130 + rbx_2);
                                                label_40f69c:
                                                    rax_63 = r14_2[0xb];
                                                    if (rax_63 == 0)
                                                    {
                                                        rbp_3 = r14_2[0xc];
                                                        if (rbp_3 != 0)
                                                        {
                                                            rax_63 = sub_40a330(&var_138, (var_f0 - 1), arg9, var_f0);
                                                            if ((rax_63 & 1) == 0)
                                                            {
                                                                rbp_1 = *(rbp_3 + (rbx_3 << 3));
                                                            }
                                                            else
                                                            {
                                                                rbp_1 = *((rbp_3 + (rbx_3 << 3)) + 0x800);
                                                            }
                                                        }
                                                        else
                                                        {
                                                            if (sub_40b040(rax, r14_2) != 0)
                                                            {
                                                                goto label_40f69c;
                                                            }
                                                            var_188 = 0xc;
                                                            if (var_80 == 0)
                                                            {
                                                            label_40ff10:
                                                                rdi_9 = nullptr;
                                                                break;
                                                            }
                                                        label_40fed4:
                                                            rbp_1 = nullptr;
                                                        label_40f6cb:
                                                            rbp_1 = sub_40ea20(&var_188, &var_138, rbp_1);
                                                        }
                                                    }
                                                    else
                                                    {
                                                        rbp_1 = rax_63[rbx_3];
                                                    }
                                                    if ((((rax_63 != 0 || (rax_63 == 0 && rbp_3 != 0)) && var_80 == 0) || (rax_63 == 0 && rbp_3 == 0)))
                                                    {
                                                        if (rbp_1 == 0)
                                                        {
                                                            rdi_9 = var_80;
                                                            if (var_188 != 0)
                                                            {
                                                                break;
                                                            }
                                                            if (rdi_9 == 0)
                                                            {
                                                                goto label_40f9f0;
                                                            }
                                                            if ((var_218_1 & (rax_56 ^ 1)) != 0)
                                                            {
                                                                goto label_40f9f0;
                                                            }
                                                        label_40f714:
                                                            int64_t rax_74 = var_f0;
                                                            char rcx_9 = 0;
                                                        label_40f733:
                                                            int64_t rdx_17 = (rax_74 + 1);
                                                            if (0 >= rdx_17)
                                                            {
                                                                rax_74 = rdx_17;
                                                                rcx_9 = 1;
                                                                if (rdi_9[rdx_17] == 0)
                                                                {
                                                                    goto label_40f733;
                                                                }
                                                                var_f0 = rdx_17;
                                                                rax_63 = sub_40ea20(&var_188, &var_138, nullptr);
                                                                if (var_188 != 0)
                                                                {
                                                                    rbp_1 = rax_63;
                                                                    if (rax_63 == 0)
                                                                    {
                                                                        goto label_40f9f0;
                                                                    }
                                                                    goto label_40f5e3;
                                                                }
                                                                if (rax_63 == 0)
                                                                {
                                                                    rdi_9 = var_80;
                                                                    goto label_40f714;
                                                                }
                                                                rbp_1 = rax_63;
                                                                goto label_40f5e3;
                                                            }
                                                            r12_2 = var_210_1;
                                                            if (rcx_9 != 0)
                                                            {
                                                                var_f0 = rax_74;
                                                            }
                                                        }
                                                        else
                                                        {
                                                        label_40f5e3:
                                                            rbx_2 = var_f0;
                                                            rax_63 = r14_2 == rbp_1;
                                                            bool temp0_1 = (var_18b_1 & rax_63);
                                                            var_18b_1 = temp0_1;
                                                            int64_t rax_64 = rax_67;
                                                            if (temp0_1 == 0)
                                                            {
                                                                rax_64 = var_228_2;
                                                            }
                                                            var_228_2 = rax_64;
                                                            char rax_65 = rbp_1[0xd];
                                                            if ((rax_65 & 0x10) == 0)
                                                            {
                                                                goto label_40f638;
                                                            }
                                                            if ((rax_65 < 0 && sub_40a550(&var_138, rbp_1[2], &rbp_1[3], rbx_2) == 0))
                                                            {
                                                                goto label_40f638;
                                                            }
                                                            if (var_1f0_1 != 0)
                                                            {
                                                                var_210_1 = rbx_2;
                                                                var_218_1 = 1;
                                                                var_1e8_1 = nullptr;
                                                            label_40f638:
                                                                r14_2 = rbp_1;
                                                                goto label_40f63b;
                                                            }
                                                            r12_2 = rbx_2;
                                                        }
                                                    }
                                                    if (((rax_63 != 0 || (rax_63 == 0 && rbp_3 != 0)) && var_80 != 0))
                                                    {
                                                        goto label_40f6cb;
                                                    }
                                                }
                                                if ((((rax_67 < var_f8 || (rax_67 >= var_f8 && var_f8 >= arg3)) && (rax_67 < rax_22 || (rax_67 >= rax_22 && rax_22 >= arg3))) && (r14_2[0xd] & 0x20) == 0))
                                                {
                                                    goto label_40f688;
                                                }
                                            }
                                            else
                                            {
                                            label_40f9f0:
                                                r12_2 = var_210_1;
                                            }
                                            if (((arg6 <= rbx_2 || ((((arg6 > rbx_2 && (((((rax_67 < var_f8 || (rax_67 >= var_f8 && var_f8 >= arg3)) && (rax_67 < rax_22 || (rax_67 >= rax_22 && rax_22 >= arg3))) && (r14_2[0xd] & 0x20) != 0) || (rax_67 >= var_f8 && var_f8 < arg3)) || (((rax_67 < var_f8 || (rax_67 >= var_f8 && var_f8 >= arg3)) && rax_67 >= rax_22) && rax_22 < arg3))) && r14_2[2] <= 0) && (((rax_63 != 0 || (rax_63 == 0 && rbp_3 != 0)) && var_80 == 0) || (rax_63 == 0 && rbp_3 == 0))) && rbp_1 == 0)) && var_1e8_1 != 0))
                                            {
                                                *var_1e8_1 = (*var_1e8_1 + var_228_2);
                                            }
                                        }
                                        else
                                        {
                                            if (r14_2[0xd] < 0)
                                            {
                                                int64_t rax_138 = sub_40a550(&var_138, r14_2[2], &r14_2[3], var_228_2);
                                                var_218_1 = rax_138;
                                                if (rax_138 == 0)
                                                {
                                                    goto label_40f5c8;
                                                }
                                            }
                                            r12_2 = var_228_2;
                                            var_218_1 = 1;
                                            if (var_1f0_1 != 0)
                                            {
                                                goto label_40f5c8;
                                            }
                                        }
                                    }
                                    if (r12_2 == -1)
                                    {
                                        goto label_40fdc3;
                                    }
                                    if (r12_2 == -2)
                                    {
                                        break;
                                    }
                                    var_90_2 = r12_2;
                                    int64_t var_88_1;
                                    int64_t* rbx_4;
                                    int64_t r14_3;
                                    if (((arg1[7] & 0x10) == 0 && arg7 > 1))
                                    {
                                        rbx_4 = var_80;
                                        void* rax_77 = rbx_4[r12_2];
                                        int64_t rax_78 = sub_40a550(&var_138, *(rax_77 + 0x10), (rax_77 + 0x18), r12_2);
                                        r14_3 = rax_78;
                                        var_88_1 = rax_78;
                                        if (((rax[0x16] & 1) == 0 && rax[0x13] != 0))
                                        {
                                            goto label_40ffa7;
                                        }
                                    }
                                    if ((((arg1[7] & 0x10) != 0 || ((arg1[7] & 0x10) == 0 && arg7 <= 1)) && rax[0x13] != 0))
                                    {
                                        rbx_4 = var_80;
                                        void* rax_123 = rbx_4[r12_2];
                                        var_88_1 = sub_40a550(&var_138, *(rax_123 + 0x10), (rax_123 + 0x18), r12_2);
                                    label_40ffa7:
                                        r14_3 = var_88_1;
                                    }
                                    int32_t rax_115;
                                    int64_t* rax_126;
                                    uint64_t rbx_9;
                                    int64_t rbp_6;
                                    if (((((arg1[7] & 0x10) == 0 && arg7 > 1) && (rax[0x16] & 1) != 0) || (((arg1[7] & 0x10) != 0 || ((arg1[7] & 0x10) == 0 && arg7 <= 1)) && rax[0x13] != 0)))
                                    {
                                        if (r12_2 > 0x1ffffffffffffffe)
                                        {
                                            rdi_9 = rbx_4;
                                            var_1ec_1 = 0xc;
                                            break;
                                        }
                                        rbp_6 = (r12_2 + 1);
                                        rbx_9 = (rbp_6 << 3);
                                        rax_126 = malloc(rbx_9);
                                        if (rax_126 == 0)
                                        {
                                            break;
                                        }
                                        if ((rax[0x13] == 0 && rax_126 != 0))
                                        {
                                            var_178 = rax_126;
                                            int64_t var_170_1 = 0;
                                            var_168 = r14_3;
                                            int64_t var_160_1 = r12_2;
                                            int128_t var_158_1 = 0;
                                            rax_115 = sub_40ebe0(&var_138, &var_178);
                                            rbp_4 = rax_115;
                                            free(nullptr);
                                            if ((rax_115 == 0 && *rax_126 != 0))
                                            {
                                            label_410129:
                                                free(var_80);
                                                var_80 = rax_126;
                                                int64_t var_88_2 = r14_3;
                                                var_90_2 = r12_2;
                                            }
                                        }
                                    }
                                    if ((((((((((((arg1[7] & 0x10) == 0 && arg7 > 1) && (rax[0x16] & 1) != 0) || (((arg1[7] & 0x10) != 0 || ((arg1[7] & 0x10) == 0 && arg7 <= 1)) && rax[0x13] != 0)) && r12_2 <= 0x1ffffffffffffffe) && rax_126 != 0) && rax[0x13] == 0) && rax_115 == 0) && *rax_126 != 0) || (((arg1[7] & 0x10) != 0 || ((arg1[7] & 0x10) == 0 && arg7 <= 1)) && rax[0x13] == 0)) || (((arg1[7] & 0x10) == 0 && arg7 > 1) && (rax[0x16] & 1) == 0)))
                                    {
                                        if (arg7 == 0)
                                        {
                                            break;
                                        }
                                        rax_140 = &arg8[2];
                                        rcx_30 = &arg8[(arg7 * 2)];
                                        if (arg7 > 1)
                                        {
                                            break;
                                        }
                                        *arg8 = 0;
                                        arg8[1] = var_90_2;
                                        break;
                                    }
                                    if (((((((arg1[7] & 0x10) == 0 && arg7 > 1) && (rax[0x16] & 1) != 0) || (((arg1[7] & 0x10) != 0 || ((arg1[7] & 0x10) == 0 && arg7 <= 1)) && rax[0x13] != 0)) && r12_2 <= 0x1ffffffffffffffe) && rax_126 != 0))
                                    {
                                        int64_t* var_218_2;
                                        if (rax[0x13] == 0)
                                        {
                                            if ((rax_115 == 0 && *rax_126 == 0))
                                            {
                                                free(rax_126);
                                            label_40fdc3:
                                                sub_408270(&var_138);
                                                rbx = var_180;
                                            }
                                            if (rax_115 != 0)
                                            {
                                            label_4105a9:
                                                var_218_2 = nullptr;
                                            label_410575:
                                                free(rax_126);
                                                free(var_218_2);
                                                rax_145 = rbp_4;
                                                if (rbp_4 != 1)
                                                {
                                                    break;
                                                }
                                                goto label_40fdc3;
                                            }
                                        }
                                        else
                                        {
                                            int64_t* rax_128 = malloc(rbx_9);
                                            var_218_2 = rax_128;
                                            if (rax_128 == 0)
                                            {
                                                free(rax_126);
                                                rdi_9 = var_80;
                                                var_1ec_1 = 0xc;
                                                break;
                                            }
                                        label_410029:
                                            memset(rax_128, 0, (rbp_6 << 3));
                                            int128_t var_158_2 = 0;
                                            var_178 = rax_126;
                                            int64_t* var_170_2 = rax_128;
                                            var_168 = r14_3;
                                            int64_t var_160_2 = r12_2;
                                            var_228_2 = sub_40ebe0(&var_138, &var_178);
                                            free(nullptr);
                                            int32_t rax_130 = var_228_2;
                                            if (rax_130 != 0)
                                            {
                                                rbp_4 = rax_130;
                                                goto label_410575;
                                            }
                                            if (*rax_126 != 0)
                                            {
                                            label_410103:
                                                rbp_4 = sub_409da0(rax, rax_126, rax_128, rbp_6);
                                                free(rax_128);
                                                if (rbp_4 != 0)
                                                {
                                                    goto label_4105a9;
                                                }
                                                goto label_410129;
                                            }
                                            if (*rax_128 != 0)
                                            {
                                                goto label_410103;
                                            }
                                        label_4100b0:
                                            r12_2 = (r12_2 - 1);
                                            if (r12_2 != -1)
                                            {
                                                void* rax_131 = var_80[r12_2];
                                                if (rax_131 == 0)
                                                {
                                                    goto label_4100b0;
                                                }
                                                if ((*(rax_131 + 0x68) & 0x10) == 0)
                                                {
                                                    goto label_4100b0;
                                                }
                                                rbp_6 = (r12_2 + 1);
                                                r14_3 = sub_40a550(&var_138, *(rax_131 + 0x10), (rax_131 + 0x18), r12_2);
                                                goto label_410029;
                                            }
                                            free(rax_126);
                                            free(rax_128);
                                            sub_408270(&var_138);
                                            rbx = var_180;
                                        }
                                    }
                                }
                                rbx = (rbx + rax_37);
                                var_180 = rbx;
                                if (rbx < rax_38)
                                {
                                    break;
                                }
                                if (rbx > rax_39)
                                {
                                    break;
                                }
                                rax_49 = rax_48;
                            } while (rax_49 <= 4);
                            if ((/* if (unimplemented  {jmp qword [rax*8+0x4172e8]} && rbp_4 != 1)... */ && rbp_4 != 1))
                            {
                                goto label_41058f;
                            }
                            if ((/* if (unimplemented  {jmp qword [rax*8+0x4172e8]} && arg7 u> 1)... */ && arg7 > 1))
                            {
                            label_410320:
                                *(rax_140 + 8) = -1;
                                rax_140 = (rax_140 + 0x10);
                                *(rax_140 - 0x10) = -1;
                                if (rcx_30 != rax_140)
                                {
                                    goto label_410320;
                                }
                                *arg8 = 0;
                                arg8[1] = var_90_2;
                                int64_t rdx_51;
                                if ((arg1[7] & 0x10) != 0)
                                {
                                label_410617:
                                    rdx_51 = 0;
                                label_4103d3:
                                    int64_t rcx_32 = 0;
                                    int64_t rdi_54 = var_180;
                                    int64_t* rax_147 = arg8;
                                label_410403:
                                    if (rdx_51 == -1)
                                    {
                                        goto label_410423;
                                    }
                                    int64_t rsi_45 = rax_147[1];
                                    char var_ac;
                                    if (var_ac == 0)
                                    {
                                        goto label_41041c;
                                    }
                                    int64_t var_120;
                                    if (rax_22 != rdx_51)
                                    {
                                        rdx_51 = *(var_120 + (rdx_51 << 3));
                                        goto label_41062f;
                                    }
                                    rdx_51 = rax_22;
                                label_41062f:
                                    *rax_147 = rdx_51;
                                    if (rax_22 != rsi_45)
                                    {
                                        rsi_45 = *(var_120 + (rsi_45 << 3));
                                        goto label_41041c;
                                    }
                                    rsi_45 = rax_22;
                                label_41041c:
                                    *rax_147 = (rdx_51 + rdi_54);
                                    rax_147[1] = (rsi_45 + rdi_54);
                                label_410423:
                                    rcx_32 = (rcx_32 + 1);
                                    rax_147 = &rax_147[2];
                                    if (rcx_32 != arg7)
                                    {
                                        rdx_51 = *rax_147;
                                        goto label_410403;
                                    }
                                    if (var_1a8 > 0)
                                    {
                                        void* rax_150 = &arg8[(arg7 * 2)];
                                        void* rcx_36 = &arg8[((var_1a8 + arg7) * 2)];
                                    label_410478:
                                        *rax_150 = -1;
                                        rax_150 = (rax_150 + 0x10);
                                        *(rax_150 - 8) = -1;
                                        if (rcx_36 != rax_150)
                                        {
                                            goto label_410478;
                                        }
                                        goto label_41048d;
                                    }
                                label_41048d:
                                    rdi_9 = var_80;
                                    int64_t rsi_47 = rax[0x1c];
                                    if (rsi_47 != 0)
                                    {
                                        int64_t r8_8 = (arg7 - 1);
                                        int64_t rax_153 = 0;
                                    label_41050b:
                                        if (rax_153 != r8_8)
                                        {
                                            int64_t rdx_53 = *(rsi_47 + (rax_153 << 3));
                                            if (rdx_53 == rax_153)
                                            {
                                                goto label_410507;
                                            }
                                            int64_t rcx_39 = (rax_153 << 4);
                                            *((arg8 + rcx_39) + 0x10) = arg8[((rdx_53 + 1) * 2)];
                                            *((arg8 + rcx_39) + 0x18) = arg8[(((*(rsi_47 + (rax_153 << 3)) + 1) * 2) + 1)];
                                        label_410507:
                                            rax_153 = (rax_153 + 1);
                                            goto label_41050b;
                                        }
                                    }
                                }
                                else
                                {
                                    if (arg7 == 1)
                                    {
                                        goto label_410617;
                                    }
                                    bool r8_6 = false;
                                    if ((rax[0x16] & 1) != 0)
                                    {
                                        r8_6 = rax[0x13] > 0;
                                    }
                                    rax_145 = sub_40d730(arg1, &var_138, arg7, arg8, r8_6);
                                    if (rax_145 == 0)
                                    {
                                        rdx_51 = *arg8;
                                        goto label_4103d3;
                                    }
                                label_41058f:
                                    rdi_9 = var_80;
                                    var_1ec_1 = rax_145;
                                }
                            }
                            else
                            {
                                if (/* if (unimplemented  {jmp qword [rax*8+0x4172e8]})... */)
                                {
                                    goto label_410617;
                                }
                                if ((/* if (unimplemented  {jmp qword [rax*8+0x4172e8]} && rax_49.d u> 4)... */ && rax_49 > 4))
                                {
                                    goto label_40fe21;
                                }
                                if (((rax_49 == 0 || rax_49 == 1) && rax_38 > rbx))
                                {
                                    goto label_40f8b0;
                                }
                                if (/* if (unimplemented  {jmp qword [rax*8+0x4172e8]})... */)
                                {
                                    goto label_40ff12;
                                }
                                if ((/* if (unimplemented  {jmp qword [rax*8+0x4172e8]} && r12_2 == -2)... */ && r12_2 == -2))
                                {
                                    goto label_40ff61;
                                }
                                if ((/* if (unimplemented  {jmp qword [rax*8+0x4172e8]} && arg7 == 0)... */ && arg7 == 0))
                                {
                                    goto label_40f958;
                                }
                            }
                        }
                    }
                    if ((arg7 > 1 || (arg7 <= 1 && (rax[0x16] & 2) != 0)))
                    {
                        if (var_f8 > 0x1ffffffffffffffe)
                        {
                            goto label_40ff61;
                        }
                        int64_t* rax_30;
                        rax_30 = malloc(((var_f8 << 3) + 8));
                        rdi_9 = rax_30;
                        var_80 = rax_30;
                        if (rax_30 != 0)
                        {
                            goto label_40f2c9;
                        }
                    label_40ff12:
                        var_1ec_1 = 0xc;
                    }
                }
            }
            free(rdi_9);
            if (rax[0x13] != 0)
            {
                sub_408270(&var_138);
                free(var_40);
                free(var_60);
            }
            sub_408230(&var_138);
        }
    }
    return var_1ec_1;
}

uint64_t sub_410670(void* arg1, int64_t* arg2, int64_t arg3, int64_t* arg4)
{
    int64_t rcx = (arg3 << 3);
    int64_t* rbx = arg2;
    int64_t* r12 = *(arg1 + 0x98);
    int64_t rdx = arg4[1];
    int64_t* rcx_1 = (rcx + *(arg1 + 0xb8));
    void* rdi = *rcx_1;
    int32_t var_7c = 0;
    uint64_t rax_1;
    if (rdi == 0)
    {
        int64_t** rax_51 = (rcx + *arg2);
        if (rdx != 0)
        {
            *rax_51 = sub_409bb0(&var_7c, r12, arg4);
            rax_1 = var_7c;
        }
        else
        {
            *rax_51 = nullptr;
            rax_1 = 0;
        }
    }
    else
    {
        int32_t var_78;
        if (rdx != 0)
        {
            var_78 = 0;
            int64_t* rax_2 = sub_409bb0(&var_78, r12, arg4);
            rax_1 = var_78;
            if (rax_1 == 0)
            {
                int64_t r13_1 = rax_2[7];
                void* rax_3 = &rax_2[7];
                if (r13_1 == 0)
                {
                    int64_t rdi_2 = arg4[1];
                    rax_2[8] = 0;
                    rax_2[7] = rdi_2;
                    int64_t rax_4 = malloc((rdi_2 << 3));
                    rax_2[9] = rax_4;
                    if (rax_4 != 0)
                    {
                        var_78 = 0;
                        if (arg4[1] <= 0)
                        {
                            goto label_4107bd;
                        }
                        int32_t rax_8;
                        do
                        {
                            int64_t rax_6 = *(arg4[2] + (r13_1 << 3));
                            rax_8 = sub_408b40(rax_3, (r12[7] + (rax_6 * 0x18)));
                            var_78 = rax_8;
                            if (rax_8 != 0)
                            {
                                break;
                            }
                            r13_1 = (r13_1 + 1);
                        } while (r13_1 < arg4[1]);
                        if (rax_8 == 0)
                        {
                            goto label_4107bd;
                        }
                    }
                    rax_1 = 0xc;
                }
                else
                {
                label_4107bd:
                    void* rax_10 = (rdi + 8);
                    rax_1 = sub_4090b0(arg4, rax_10, rax_3);
                    var_7c = rax_1;
                    if (rax_1 == 0)
                    {
                        int64_t temp0_1 = rbx[5];
                        bool cond:1_1 = temp0_1 <= 0;
                        if (temp0_1 != 0)
                        {
                            int64_t rax_55 = *(arg1 + 0xd8);
                            if ((!cond:1_1))
                            {
                                int64_t r15_5 = 0;
                                do
                                {
                                    int64_t* rdx_20 = (rax_55 + (*(rbx[6] + (r15_5 << 3)) * 0x28));
                                    if ((arg3 > rdx_20[2] && arg3 <= rdx_20[1]))
                                    {
                                        int64_t* rax_59 = *r12;
                                        int64_t rsi_17 = arg4[1];
                                        int64_t r8_3 = rax_59[(*rdx_20 * 2)];
                                        if (arg3 != rdx_20[3])
                                        {
                                            int64_t r13_5 = 0;
                                            if (rsi_17 > 0)
                                            {
                                                void* rax_60;
                                                while (true)
                                                {
                                                    int64_t rsi_18 = *(arg4[2] + (r13_5 << 3));
                                                    rax_60 = &rax_59[(rsi_18 * 2)];
                                                    if (((*(rax_60 + 8) - 8) > 1 || ((*(rax_60 + 8) - 8) <= 1 && r8_3 != *rax_60)))
                                                    {
                                                        r13_5 = (r13_5 + 1);
                                                        if (r13_5 >= arg4[1])
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    if (((*(rax_60 + 8) - 8) <= 1 && r8_3 == *rax_60))
                                                    {
                                                        rax_1 = sub_40ae10(r12, rsi_18, arg4, rax_10);
                                                        if (rax_1 != 0)
                                                        {
                                                            break;
                                                        }
                                                        r13_5 = (r13_5 + 1);
                                                        if (r13_5 >= arg4[1])
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    rax_59 = *r12;
                                                }
                                                if ((((*(rax_60 + 8) - 8) <= 1 && r8_3 == *rax_60) && rax_1 != 0))
                                                {
                                                    goto label_4106fa;
                                                }
                                            }
                                        }
                                        else if (rsi_17 > 0)
                                        {
                                            int64_t* r10_2 = arg4[2];
                                            int64_t r9_4 = -1;
                                            void* r11_1 = &r10_2[rsi_17];
                                            int64_t* rcx_15 = r10_2;
                                            int64_t rsi_19 = -1;
                                            while (true)
                                            {
                                                int64_t rdi_20 = *rcx_15;
                                                void* rdx_29 = &rax_59[(rdi_20 * 2)];
                                                uint32_t r13_6 = *(rdx_29 + 8);
                                                if (r13_6 != 8)
                                                {
                                                    if ((r13_6 == 9 && r8_3 == *rdx_29))
                                                    {
                                                        r9_4 = rdi_20;
                                                    }
                                                    rcx_15 = &rcx_15[1];
                                                    if (r11_1 == rcx_15)
                                                    {
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    if (r8_3 == *rdx_29)
                                                    {
                                                        rsi_19 = rdi_20;
                                                    }
                                                    rcx_15 = &rcx_15[1];
                                                    if (r11_1 == rcx_15)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            if (rsi_19 >= 0)
                                            {
                                                rax_1 = sub_40ae10(r12, rsi_19, arg4, rax_10);
                                                if (((rax_1 == 0 && r9_4 >= 0) && arg4[1] > 0))
                                                {
                                                    r10_2 = arg4[2];
                                                }
                                                if (rax_1 != 0)
                                                {
                                                    goto label_4106fa;
                                                }
                                            }
                                            if (((((rsi_19 >= 0 && rax_1 == 0) && r9_4 >= 0) && arg4[1] > 0) || (rsi_19 < 0 && r9_4 >= 0)))
                                            {
                                                int64_t rbx_9 = 0;
                                                int64_t rax_63;
                                                int64_t rax_64;
                                                while (true)
                                                {
                                                    int64_t r10_3 = r10_2[rbx_9];
                                                    int64_t r9_6 = (r10_3 * 0x18);
                                                    void* rax_62 = (r12[7] + r9_6);
                                                    rax_63 = sub_408600(*(rax_62 + 8), (rax_62 + 0x10), r9_4);
                                                    if (rax_63 == 0)
                                                    {
                                                        void* r9_7 = (r9_6 + r12[6]);
                                                        rax_64 = sub_408600(*(r9_7 + 8), (r9_7 + 0x10), r9_4);
                                                        if (rax_64 == 0)
                                                        {
                                                            rax_1 = sub_40ae10(r12, r10_3, arg4, rax_10);
                                                            if (rax_1 != 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                    }
                                                    if ((rax_63 != 0 || (rax_63 == 0 && rax_64 != 0)))
                                                    {
                                                        rbx_9 = (rbx_9 + 1);
                                                    }
                                                    if (arg4[1] <= rbx_9)
                                                    {
                                                        break;
                                                    }
                                                    r10_2 = arg4[2];
                                                }
                                                if (((rax_63 == 0 && rax_64 == 0) && rax_1 != 0))
                                                {
                                                    goto label_4106fa;
                                                }
                                            }
                                        }
                                    }
                                    r15_5 = (r15_5 + 1);
                                } while (r15_5 < rbx[5]);
                            }
                            var_7c = 0;
                        }
                        int64_t** r13_3 = (rcx + *rbx);
                        *r13_3 = sub_409bb0(&var_7c, r12, arg4);
                        rax_1 = var_7c;
                        if (rax_1 == 0)
                        {
                            rax_1 = 0;
                            if ((*(*(rcx + *(arg1 + 0xb8)) + 0x68) & 0x40) != 0)
                            {
                                goto label_410832;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            *(*arg2 + (arg3 << 3)) = 0;
            rax_1 = 0;
            if ((*(*rcx_1 + 0x68) & 0x40) != 0)
            {
            label_410832:
                int64_t r12_1 = 0;
                int64_t rsi_5 = *(arg1 + 0xc8);
                int64_t rdx_11;
                for (int64_t rax_15 = rsi_5; r12_1 < rax_15; rax_15 = rdx_11)
                {
                    int64_t rcx_2 = (r12_1 + rax_15);
                    int64_t rdi_8 = *(arg1 + 0xd8);
                    rdx_11 = (((rcx_2 >> 0x3f) + rcx_2) >> 1);
                    int64_t r8_1;
                    if (arg3 > *((rdi_8 + (rdx_11 * 0x28)) + 8))
                    {
                        r8_1 = rdx_11;
                        rdx_11 = rax_15;
                    }
                    else
                    {
                        int64_t rax_19;
                        for (; r12_1 < rdx_11; rdx_11 = rax_19)
                        {
                            int64_t rcx_4 = (r12_1 + rdx_11);
                            rax_19 = (((rcx_4 >> 0x3f) + rcx_4) >> 1);
                            r8_1 = rax_19;
                            if (arg3 > *((rdi_8 + (rax_19 * 0x28)) + 8))
                            {
                                break;
                            }
                        }
                        if (r12_1 >= rdx_11)
                        {
                            break;
                        }
                    }
                    r12_1 = (r8_1 + 1);
                }
                if (rsi_5 <= r12_1)
                {
                label_410b8c:
                    rax_1 = 0;
                }
                else
                {
                    int64_t rsi_6 = (r12_1 * 0x28);
                    if (arg3 != *((*(arg1 + 0xd8) + rsi_6) + 8))
                    {
                        goto label_410b8c;
                    }
                    if (r12_1 == -1)
                    {
                        goto label_410b8c;
                    }
                    int64_t* r13_4 = *(arg1 + 0x98);
                    var_78 = 0;
                    if (*(rdi + 0x10) <= 0)
                    {
                        goto label_410b8c;
                    }
                    int64_t r15_3 = 0;
                    int64_t var_48;
                    do
                    {
                        int64_t rbp_1 = *(*(rdi + 0x18) + (r15_3 << 3));
                        char rax_29 = *(((rbp_1 << 4) + *r13_4) + 8);
                        if (((rbp_1 != rbx[2] && rax_29 == 4) || ((rbp_1 == rbx[2] && arg3 != rbx[3]) && rax_29 == 4)))
                        {
                            int64_t r12_2 = r12_1;
                            int64_t* rbx_3 = (rsi_6 + *(arg1 + 0xd8));
                            int64_t rax_32 = (rbp_1 * 0x18);
                            int64_t rax_33 = (rbp_1 << 3);
                            while (true)
                            {
                                if (rbp_1 == *rbx_3)
                                {
                                    int64_t rax_46 = rbx_3[3];
                                    int64_t r10_1 = (arg3 + (rax_46 - rbx_3[2]));
                                    int64_t r9_1;
                                    if (rax_46 != rbx_3[2])
                                    {
                                        r9_1 = *(r13_4[3] + rax_33);
                                    }
                                    else
                                    {
                                        r9_1 = **((r13_4[5] + rax_32) + 0x10);
                                    }
                                    if (r10_1 <= rbx[3])
                                    {
                                        void* rax_36 = *(*rbx + (r10_1 << 3));
                                        if (((rax_36 != 0 && sub_408600(*(rax_36 + 0x10), (rax_36 + 0x18), r9_1) != 0) && sub_408890(arg1, &rbx[5], &rbx[6], rbp_1, arg3, r9_1, r10_1) == 0))
                                        {
                                            int128_t var_68;
                                            int128_t var_58;
                                            if (var_78 == 0)
                                            {
                                                var_78 = *rbx;
                                                var_68 = *(rbx + 0x10);
                                                var_58 = *(rbx + 0x20);
                                                var_48 = rbx[6];
                                                rax_1 = sub_4096a0(&var_58, &rbx[4]);
                                            }
                                            char rax_39;
                                            int64_t rsi_12;
                                            if ((var_78 != 0 || (var_78 == 0 && rax_1 == 0)))
                                            {
                                                var_68 = rbp_1;
                                                *var_68[8] = arg3;
                                                rax_39 = sub_406ff0(&var_58, r12_2);
                                                if (rax_39 == 0)
                                                {
                                                    rax_1 = 0xc;
                                                }
                                                else
                                                {
                                                    int64_t rbx_5 = *(var_78 + rcx);
                                                    rax_1 = sub_40ebe0(arg1, &var_78);
                                                    if (rax_1 == 0)
                                                    {
                                                        rsi_12 = rbx[1];
                                                        int64_t* rdx_15 = var_78;
                                                        if (rsi_12 != 0)
                                                        {
                                                            rax_1 = sub_409da0(r13_4, rsi_12, rdx_15, (arg3 + 1));
                                                            rdx_15 = var_78;
                                                        }
                                                        int64_t r9_2 = *var_58[8];
                                                        *(rdx_15 + rcx) = rbx_5;
                                                        int64_t rax_42 = sub_408600(r9_2, &var_48, r12_2);
                                                        int64_t rax_43 = (rax_42 - 1);
                                                        if (((rax_42 - 1) >= 0 && r9_2 > rax_43))
                                                        {
                                                            *var_58[8] = (r9_2 - 1);
                                                            sub_408770(&*var_58[8], &var_48, rax_43);
                                                        }
                                                        rbx_3 = (*(arg1 + 0xd8) + (r12_2 * 0x28));
                                                    }
                                                }
                                            }
                                            if ((((((var_78 != 0 || (var_78 == 0 && rax_1 == 0)) && rax_39 == 0) || (var_78 == 0 && rax_1 != 0)) || (((var_78 != 0 || (var_78 == 0 && rax_1 == 0)) && rax_39 != 0) && rax_1 != 0)) || ((((var_78 != 0 || (var_78 == 0 && rax_1 == 0)) && rax_39 != 0) && rax_1 == 0) && rsi_12 != 0)))
                                            {
                                                if (var_78 == 0)
                                                {
                                                    goto label_4106fa;
                                                }
                                                goto label_410c14;
                                            }
                                        }
                                    }
                                }
                                r12_2 = (r12_2 + 1);
                                void* rax_45 = &rbx_3[5];
                                if (rbx_3[4] == 0)
                                {
                                    break;
                                }
                                rbx_3 = rax_45;
                            }
                        }
                        r15_3 = (r15_3 + 1);
                    } while (r15_3 < *(rdi + 0x10));
                    if (var_78 == 0)
                    {
                        goto label_410b8c;
                    }
                    rax_1 = 0;
                label_410c14:
                    void* var_d0;
                    var_d0 = rax_1;
                    free(var_48);
                    rax_1 = var_d0;
                }
            }
        }
    }
label_4106fa:
    return rax_1;
}

int64_t sub_410ea0(int32_t* arg1, void* arg2, char* arg3, int32_t arg4, 
    int32_t arg5, char arg6)
{
    int64_t r11 = arg4;
    int64_t r12 = *(arg2 + 0x48);
    if (*(arg2 + 0x90) != 1)
    {
        int32_t rax_1 = sub_4085b0(arg2, r12);
        if (rax_1 > 1)
        {
            int64_t rdx_2 = *(arg2 + 0x10);
            *arg1 = 1;
            arg1[2] = *(rdx_2 + (r12 << 2));
            *(arg2 + 0x48) = (rax_1 + r12);
            return 0;
        }
    }
    char rax_8 = arg3[8];
    int64_t r11_1 = (r11 + r12);
    *(arg2 + 0x48) = r11_1;
    int64_t rax_3;
    if (((rax_8 & 0xfb) != 0x1a && rax_8 != 0x1c))
    {
        if ((rax_8 == 0x16 && arg6 == 0))
        {
            void var_38;
            sub_406b10(&var_38, arg2, arg5);
            rax_3 = 0xb;
        }
        char var_30;
        if (((rax_8 != 0x16 || (rax_8 == 0x16 && arg6 != 0)) || ((rax_8 == 0x16 && arg6 == 0) && var_30 == 0x15)))
        {
            char rax_2 = *arg3;
            *arg1 = 0;
            arg1[2] = rax_2;
            rax_3 = 0;
        }
    }
    if (((rax_8 & 0xfb) == 0x1a || ((rax_8 & 0xfb) != 0x1a && rax_8 == 0x1c)))
    {
        if (r11_1 >= *(arg2 + 0x68))
        {
            return 7;
        }
        char r9 = *arg3;
        int64_t r8 = 0;
        int64_t rax_9;
        int64_t r12_1;
        while (true)
        {
            r12_1 = r8;
            char r13_1;
            if (rax_8 != 0x1e)
            {
            label_410f79:
                char* rdx_4 = *(arg2 + 8);
                rax_9 = (r11_1 + 1);
                *(arg2 + 0x48) = rax_9;
                r13_1 = rdx_4[r11_1];
            }
            else
            {
                if (*(arg2 + 0x8b) == 0)
                {
                    goto label_410f79;
                }
                if (*(arg2 + 0x8c) == 0)
                {
                    rax_9 = (r11_1 + 1);
                    char* r11_3 = ((r11_1 + *arg2) + *(arg2 + 0x28));
                    *(arg2 + 0x48) = rax_9;
                    r13_1 = *r11_3;
                }
                else
                {
                    if ((r11_1 != *(arg2 + 0x30) && *(*(arg2 + 0x10) + (r11_1 << 2)) == 0xffffffff))
                    {
                        goto label_410f79;
                    }
                    r13_1 = *((*(*(arg2 + 0x18) + (r11_1 << 3)) + *arg2) + *(arg2 + 0x28));
                    if ((r13_1 & 0x80) != 0)
                    {
                        goto label_410f79;
                    }
                    int64_t rax_18 = 1;
                    if (*(arg2 + 0x90) != 1)
                    {
                        rax_18 = sub_4085b0(arg2, r11_1);
                    }
                    rax_9 = (rax_18 + r11_1);
                    *(arg2 + 0x48) = rax_9;
                }
            }
            if (*(arg2 + 0x68) <= rax_9)
            {
                return 7;
            }
            if ((r9 == r13_1 && *(arg2 + 8)[rax_9] == 0x5d))
            {
                break;
            }
            *(arg1 + 8)[r8] = r13_1;
            r8 = (r8 + 1);
            if (r8 == 0x20)
            {
                return 7;
            }
            rax_8 = arg3[8];
            r11_1 = *(arg2 + 0x48);
        }
        *(arg2 + 0x48) = (rax_9 + 1);
        *(arg1 + 8)[r12_1] = 0;
        char rdx_6 = arg3[8];
        if (rdx_6 == 0x1c)
        {
            *arg1 = 2;
            rax_3 = 0;
        }
        else if (rdx_6 == 0x1e)
        {
            *arg1 = 4;
            rax_3 = 0;
        }
        else
        {
            rax_3 = 0;
            if (rdx_6 == 0x1a)
            {
                *arg1 = 3;
            }
        }
    }
    if (((((rax_8 & 0xfb) == 0x1a || ((rax_8 & 0xfb) != 0x1a && rax_8 == 0x1c)) && r11_1 < *(arg2 + 0x68)) || ((rax_8 & 0xfb) != 0x1a && rax_8 != 0x1c)))
    {
        return rax_3;
    }
}

int64_t sub_4110c0(char* arg1, void** arg2, int64_t arg3)
{
    int64_t r12 = arg2[9];
    int64_t rax_15;
    if (arg2[0xd] <= r12)
    {
        arg1[8] = 2;
        rax_15 = 0;
    }
    else
    {
        char* rdx = arg2[1];
        int32_t rax = arg2[0x12];
        int32_t* rbx_1 = arg1;
        char rbp_1 = rdx[r12];
        char r14_2 = (arg1[0xa] & 0x9f);
        arg1[0xa] = r14_2;
        *arg1 = rbp_1;
        char* rdx_1;
        if ((rax <= 1 && rbp_1 != 0x5c))
        {
            rbx_1[2] = 1;
            uint32_t rax_10;
            rax_10 = (*__ctype_b_loc()[rbp_1] >> 3);
            uint64_t rcx_4;
            rcx_4 = rbp_1 == 0x5f;
            *(rbx_1 + 0xa) = (r14_2 | (((rax_10 & 1) | rcx_4) << 6));
            rdx_1 = rdx;
        label_411165:
            char rbp_2 = (rbp_1 - 0xa);
            if (rbp_2 > 0x73)
            {
            label_4113e8:
                rax_15 = 1;
            }
            else
            {
                switch (rbp_2)
                {
                    case 0:
                    {
                        rax_15 = 1;
                        if ((arg3 & 0x800) != 0)
                        {
                            goto label_41140a;
                        }
                        break;
                    }
                    case 1:
                    case 2:
                    case 3:
                    case 4:
                    case 5:
                    case 6:
                    case 7:
                    case 8:
                    case 9:
                    case 0xa:
                    case 0xb:
                    case 0xc:
                    case 0xd:
                    case 0xe:
                    case 0xf:
                    case 0x10:
                    case 0x11:
                    case 0x12:
                    case 0x13:
                    case 0x14:
                    case 0x15:
                    case 0x16:
                    case 0x17:
                    case 0x18:
                    case 0x19:
                    case 0x1b:
                    case 0x1c:
                    case 0x1d:
                    case 0x22:
                    case 0x23:
                    case 0x25:
                    case 0x26:
                    case 0x27:
                    case 0x28:
                    case 0x29:
                    case 0x2a:
                    case 0x2b:
                    case 0x2c:
                    case 0x2d:
                    case 0x2e:
                    case 0x2f:
                    case 0x30:
                    case 0x31:
                    case 0x32:
                    case 0x33:
                    case 0x34:
                    case 0x36:
                    case 0x37:
                    case 0x38:
                    case 0x39:
                    case 0x3a:
                    case 0x3b:
                    case 0x3c:
                    case 0x3d:
                    case 0x3e:
                    case 0x3f:
                    case 0x40:
                    case 0x41:
                    case 0x42:
                    case 0x43:
                    case 0x44:
                    case 0x45:
                    case 0x46:
                    case 0x47:
                    case 0x48:
                    case 0x49:
                    case 0x4a:
                    case 0x4b:
                    case 0x4c:
                    case 0x4d:
                    case 0x4e:
                    case 0x4f:
                    case 0x50:
                    case 0x52:
                    case 0x53:
                    case 0x55:
                    case 0x56:
                    case 0x57:
                    case 0x58:
                    case 0x59:
                    case 0x5a:
                    case 0x5b:
                    case 0x5c:
                    case 0x5d:
                    case 0x5e:
                    case 0x5f:
                    case 0x60:
                    case 0x61:
                    case 0x62:
                    case 0x63:
                    case 0x64:
                    case 0x65:
                    case 0x66:
                    case 0x67:
                    case 0x68:
                    case 0x69:
                    case 0x6a:
                    case 0x6b:
                    case 0x6c:
                    case 0x6d:
                    case 0x6e:
                    case 0x6f:
                    case 0x70:
                    {
                        goto label_4113e8;
                    }
                    case 0x1a:
                    {
                        int64_t r12_1;
                        if ((arg3 & 8) == 0)
                        {
                            r12_1 = (r12 + 1);
                            if (r12_1 != arg2[0xb])
                            {
                                arg2[9] = r12_1;
                                void var_48;
                                sub_4110c0(&var_48, arg2, arg3);
                                arg2[9] = (arg2[9] - 1);
                                rax_15 = 1;
                            }
                        }
                        char var_40;
                        if ((((arg3 & 8) != 0 || ((arg3 & 8) == 0 && r12_1 == arg2[0xb])) || (((arg3 & 8) == 0 && r12_1 != arg2[0xb]) && (var_40 - 9) <= 1)))
                        {
                            rbx_1[2] = 0xc;
                            rax_15 = 1;
                            *rbx_1 = 0x20;
                        }
                        break;
                    }
                    case 0x1e:
                    {
                        rax_15 = 1;
                        if ((arg3 & 0x2000) != 0)
                        {
                        label_4112da:
                            rbx_1[2] = 8;
                        }
                        break;
                    }
                    case 0x1f:
                    {
                        rax_15 = 1;
                        if ((arg3 & 0x2000) != 0)
                        {
                        label_4112fa:
                            rbx_1[2] = 9;
                        }
                        break;
                    }
                    case 0x20:
                    {
                        rbx_1[2] = 0xb;
                        rax_15 = 1;
                        break;
                    }
                    case 0x21:
                    {
                        rax_15 = 1;
                        if ((arg3 & 0x402) == 0)
                        {
                        label_411332:
                            rbx_1[2] = 0x12;
                        }
                        break;
                    }
                    case 0x24:
                    {
                        rbx_1[2] = 5;
                        rax_15 = 1;
                        break;
                    }
                    case 0x35:
                    {
                        rax_15 = 1;
                        if ((arg3 & 0x402) == 0)
                        {
                        label_411362:
                            rbx_1[2] = 0x13;
                        }
                        break;
                    }
                    case 0x51:
                    {
                        rbx_1[2] = 0x14;
                        rax_15 = 1;
                        break;
                    }
                    case 0x54:
                    {
                        if ((arg3 & 0x800008) == 0)
                        {
                            if (r12 == 0)
                            {
                                goto label_411392;
                            }
                            if (rdx_1[(r12 - 1)] != 0xa)
                            {
                                goto label_4113e8;
                            }
                            if ((arg3 & 0x800) == 0)
                            {
                                goto label_4113e8;
                            }
                            goto label_411392;
                        }
                    label_411392:
                        rbx_1[2] = 0xc;
                        rax_15 = 1;
                        *rbx_1 = 0x10;
                        break;
                    }
                    case 0x71:
                    {
                        rax_15 = 1;
                        if ((arg3 & 0x1200) == 0x1200)
                        {
                        label_4113c9:
                            rbx_1[2] = 0x17;
                        }
                        break;
                    }
                    case 0x72:
                    {
                        if ((arg3 & 0x8400) != 0x8000)
                        {
                            goto label_4113e8;
                        }
                    label_41140a:
                        rbx_1[2] = 0xa;
                        rax_15 = 1;
                        break;
                    }
                    case 0x73:
                    {
                        rax_15 = 1;
                        if ((arg3 & 0x1200) == 0x1200)
                        {
                        label_411491:
                            rbx_1[2] = 0x18;
                        }
                        break;
                    }
                }
            }
        }
        if (((rax > 1 && r12 != arg2[6]) && *(arg2[2] + (r12 << 2)) == 0xffffffff))
        {
            *(arg1 + 8) = ((*(arg1 + 8) & 0xffdfff00) | 0x200001);
            rax_15 = 1;
        }
        if (((rax <= 1 && rbp_1 == 0x5c) || ((rax > 1 && (r12 == arg2[6] || (r12 != arg2[6] && *(arg2[2] + (r12 << 2)) != 0xffffffff))) && rbp_1 == 0x5c)))
        {
            int64_t rcx_5 = (r12 + 1);
            if (rcx_5 >= arg2[0xb])
            {
                rbx_1[2] = 0x24;
                return 1;
            }
            uint32_t var_50;
            char r14_5;
            wint_t rbp_4;
            if (*(arg2 + 0x8b) == 0)
            {
            label_41120e:
                uint32_t rdi_1 = rdx[(r12 + 1)];
                var_50 = rdi_1;
                r14_5 = rdi_1;
            label_41121b:
                *rbx_1 = r14_5;
                rbx_1[2] = 1;
                if (rax > 1)
                {
                    rbp_4 = *(arg2[2] + (rcx_5 << 2));
                    goto label_411230;
                }
                uint32_t rax_28;
                rax_28 = (*__ctype_b_loc()[r14_5] >> 3);
                uint64_t rdx_4;
                rdx_4 = r14_5 == 0x5f;
                *(rbx_1 + 0xa) = ((((rax_28 & 1) | rdx_4) << 6) | (*(rbx_1 + 0xa) & 0xbf));
            }
            else
            {
                if (rax <= 1)
                {
                label_4116ea:
                    void* rsi_1 = *arg2;
                    int64_t rdi_5 = arg2[5];
                    if (*(arg2 + 0x8c) == 0)
                    {
                        uint32_t rdi_8 = *((rsi_1 + rcx_5) + rdi_5);
                        r14_5 = rdi_8;
                        var_50 = rdi_8;
                        goto label_41121b;
                    }
                    uint32_t rdi_6 = *((rsi_1 + rdi_5) + *(arg2[3] + (rcx_5 << 3)));
                    r14_5 = rdi_6;
                    var_50 = rdi_6;
                    if ((rdi_6 & 0x80) != 0)
                    {
                        goto label_41120e;
                    }
                    goto label_41121b;
                }
                int64_t rdi_4 = arg2[2];
                int64_t r8_1 = (rcx_5 << 2);
                rbp_4 = *(rdi_4 + (rcx_5 << 2));
                if (rbp_4 != 0xffffffff)
                {
                    if (arg2[6] == (r12 + 2))
                    {
                        goto label_4116ea;
                    }
                    if (*((rdi_4 + r8_1) + 4) != 0xffffffff)
                    {
                        goto label_4116ea;
                    }
                }
                uint32_t rax_34 = rdx[(r12 + 1)];
                rbx_1[2] = 1;
                r14_5 = rax_34;
                *rbx_1 = rax_34;
                var_50 = rax_34;
            label_411230:
                int32_t rax_17;
                int32_t rdx_2;
                rax_17 = iswalnum(rbp_4);
                rax_17 = rax_17 != 0;
                rdx_2 = rbp_4 == 0x5f;
                *(rbx_1 + 0xa) = ((*(rbx_1 + 0xa) & 0xbf) | ((rax_17 | rdx_2) << 6));
            }
            char r14_6 = (r14_5 - 0x27);
            switch (r14_6)
            {
                case 0:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0xc;
                        *rbx_1 = 0x80;
                    }
                    break;
                }
                case 1:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x2000) == 0)
                    {
                        goto label_4112da;
                    }
                    break;
                }
                case 2:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x2000) == 0)
                    {
                        goto label_4112fa;
                    }
                    break;
                }
                case 4:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x402) == 2)
                    {
                        goto label_411332;
                    }
                    break;
                }
                case 0xa:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                case 0xf:
                case 0x10:
                case 0x11:
                case 0x12:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x4000) == 0)
                    {
                        rbx_1[2] = 4;
                        *rbx_1 = (var_50 - 0x31);
                    }
                    break;
                }
                case 0x15:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0xc;
                        *rbx_1 = 6;
                    }
                    break;
                }
                case 0x17:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0xc;
                        *rbx_1 = 9;
                    }
                    break;
                }
                case 0x18:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x402) == 2)
                    {
                        goto label_411362;
                    }
                    break;
                }
                case 0x1b:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0xc;
                        *rbx_1 = 0x200;
                    }
                    break;
                }
                case 0x2c:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0x23;
                    }
                    break;
                }
                case 0x30:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0x21;
                    }
                    break;
                }
                case 0x39:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0xc;
                        *rbx_1 = 0x40;
                    }
                    break;
                }
                case 0x3b:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0xc;
                        *rbx_1 = 0x100;
                    }
                    break;
                }
                case 0x4c:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0x22;
                    }
                    break;
                }
                case 0x50:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x80000) == 0)
                    {
                        rbx_1[2] = 0x20;
                    }
                    break;
                }
                case 0x54:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x1200) == 0x200)
                    {
                        goto label_4113c9;
                    }
                    break;
                }
                case 0x55:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x8400) == 0)
                    {
                        rbx_1[2] = 0xa;
                    }
                    break;
                }
                case 0x56:
                {
                    rax_15 = 2;
                    if ((arg3 & 0x1200) == 0x200)
                    {
                        goto label_411491;
                    }
                    break;
                }
                default:
                    rax_15 = 2;
            }
        }
        if (((rax > 1 && (r12 == arg2[6] || (r12 != arg2[6] && *(arg2[2] + (r12 << 2)) != 0xffffffff))) && rbp_1 != 0x5c))
        {
            int64_t rax_1 = arg2[2];
            rbx_1[2] = 1;
            wint_t r14_3 = *(rax_1 + (r12 << 2));
            int32_t rax_2;
            int32_t rcx_2;
            rax_2 = iswalnum(r14_3);
            rax_2 = rax_2 != 0;
            rcx_2 = r14_3 == 0x5f;
            *(rbx_1 + 0xa) = ((*(rbx_1 + 0xa) & 0xbf) | ((rax_2 | rcx_2) << 6));
            rdx_1 = rdx;
            goto label_411165;
        }
    }
    return rax_15;
}

int64_t sub_411770(void** arg1, char* arg2, int64_t arg3)
{
    int64_t rbx = -1;
    while (true)
    {
        uint64_t rdx_1 = *arg2;
        arg1[9] = (arg1[9] + sub_4110c0(arg2, arg1, arg3));
        char rax_3 = arg2[8];
        if (rax_3 == 2)
        {
            rbx = -2;
            break;
        }
        if (rax_3 == 0x18)
        {
            break;
        }
        if (rdx_1 == 0x2c)
        {
            break;
        }
        if ((rax_3 == 1 && ((rdx_1 - 0x30) <= 9 && rbx != -2)))
        {
            if (rbx == -1)
            {
                rbx = (rdx_1 - 0x30);
                continue;
            }
            else
            {
                int64_t rbx_1 = (rdx_1 + (rbx * 0xa));
                if (rbx_1 > 0x8030)
                {
                    rbx_1 = 0x8030;
                }
                rbx = (rbx_1 - 0x30);
                continue;
            }
        }
        rbx = -2;
    }
    return rbx;
}

void* sub_411830(void** arg1, int64_t* arg2, char* arg3, int64_t arg4, 
    int64_t arg5, int32_t* arg6)
{
    int32_t* rbx;
    int32_t* var_30 = rbx;
    int32_t* rax = *arg2;
    char rax_1 = arg3[8];
    if (rax_1 > 0x24)
    {
        goto label_4119a8;
    }
    char* r12_1 = arg3;
    void** r15_1 = arg1;
    void* var_100_1;
    void** var_f8;
    char var_e0;
    void var_58;
    char* rcx_8;
    void* rdx_26;
    void* rsi_21;
    char r8_9;
    int32_t* r9_3;
    switch (rax_1)
    {
        case 0:
        case 2:
        case 3:
        case 6:
        case 7:
        case 0xa:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x15:
        case 0x16:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        {
            goto label_4119a8;
        }
        case 1:
        {
            rbx = &rax[0x1c];
            int32_t* rbp_7 = &rax[0x20];
            void* rax_56 = sub_409270(rbx, rbp_7, nullptr, nullptr, r12_1);
            var_100_1 = rax_56;
            if (rax_56 == 0)
            {
                goto label_4121c6;
            }
            void* r14_5 = var_100_1;
            if (rax[0x2d] <= 1)
            {
                goto label_4118e0;
            }
            int64_t rax_58;
            void* rax_61;
            void* rax_62;
            do
            {
                rax_58 = r15_1[9];
                if (r15_1[0xd] <= rax_58)
                {
                    break;
                }
                if (rax_58 == r15_1[6])
                {
                    break;
                }
                if (*(r15_1[2] + (rax_58 << 2)) != 0xffffffff)
                {
                    break;
                }
                r15_1[9] = (r15_1[9] + sub_4110c0(r12_1, r15_1, arg4));
                rax_61 = sub_409270(rbx, rbp_7, nullptr, nullptr, r12_1);
                char var_50_6 = 0x10;
                rax_62 = sub_409270(rbx, rbp_7, r14_5, rax_61, &var_58);
                r14_5 = rax_62;
                rax_62 = rax_62 == 0;
            } while ((rax_61 == 0 | rax_62) == 0);
            if (r15_1[0xd] > rax_58)
            {
                goto label_4121c6;
            }
            var_100_1 = r14_5;
            goto label_4118e0;
        }
        case 4:
        {
            int64_t rax_65 = (1 << *r12_1);
            if ((*(rax + 0xa8) & rax_65) != 0)
            {
                *(rax + 0xa0) = (*(rax + 0xa0) | rax_65);
                void* rax_66 = sub_409270(&rax[0x1c], &rax[0x20], nullptr, nullptr, r12_1);
                var_100_1 = rax_66;
                if (rax_66 == 0)
                {
                    goto label_4121c6;
                }
                *(rax + 0x98) = (*(rax + 0x98) + 1);
                rax[0x2c] = (rax[0x2c] | 2);
            label_4118e0:
                uint64_t rbp_2 = r12_1[8];
                r15_1[9] = (r15_1[9] + sub_4110c0(r12_1, r15_1, arg4));
                while (true)
                {
                    if (rbp_2 > 0x17)
                    {
                        return var_100_1;
                    }
                    rbx = rbp_2 == 0x12;
                    if ((!(TEST_BITQ(0x8c0800, rbp_2))))
                    {
                        return var_100_1;
                    }
                    int64_t r13_2 = r15_1[9];
                    int128_t zmm0 = *r12_1;
                    int64_t var_118_2;
                    char rax_14;
                    void* rax_21;
                    void* rdx_7;
                    void* rdx_18;
                    void* rbp_3;
                    int64_t* r14_4;
                    if (rbp_2 == 0x17)
                    {
                        var_f8 = zmm0;
                        int64_t rax_31 = sub_411770(r15_1, r12_1, arg4);
                        zmm0 = var_f8;
                        var_118_2 = rax_31;
                        if (rax_31 == -1)
                        {
                            if (r12_1[8] != 1)
                            {
                            label_411eb5:
                                *arg6 = 0xa;
                            label_411ebb:
                                if (var_100_1 == 0)
                                {
                                    goto label_4119a8;
                                }
                                goto label_411c67;
                            }
                            if (*r12_1 != 0x2c)
                            {
                                goto label_411eb5;
                            }
                            rbx = nullptr;
                        label_411dc4:
                            var_f8 = zmm0;
                            int64_t rax_34 = sub_411770(r15_1, r12_1, arg4);
                            zmm0 = var_f8;
                            var_118_2 = rax_34;
                            if (rax_34 != -2)
                            {
                                if ((var_118_2 != -1 && var_118_2 < rbx))
                                {
                                    goto label_411eb5;
                                }
                                if (r12_1[8] != 0x18)
                                {
                                    goto label_411eb5;
                                }
                                if (var_118_2 != -1)
                                {
                                    goto label_411e7e;
                                }
                                int64_t rax_36;
                                rax_36 = rbx > 0x7fff;
                                if (rax_36 == 0)
                                {
                                    goto label_411e30;
                                }
                                goto label_411e8b;
                            }
                            goto label_411d52;
                        }
                        if (var_118_2 != -2)
                        {
                            char rax_32 = r12_1[8];
                            if (rax_32 == 0x18)
                            {
                                rbx = var_118_2;
                            label_411e7e:
                                int64_t rax_42;
                                rax_42 = var_118_2 > 0x7fff;
                                if (rax_42 == 0)
                                {
                                label_411e30:
                                    r15_1[9] = (r15_1[9] + sub_4110c0(r12_1, r15_1, arg4));
                                    if (var_100_1 == 0)
                                    {
                                        goto label_411d87;
                                    }
                                    if ((var_118_2 | rbx) == 0)
                                    {
                                        sub_406aa0(var_100_1, 0x407cb0, 0);
                                        if (*arg6 == 0)
                                        {
                                            goto label_411d8f;
                                        }
                                        goto label_411c67;
                                    }
                                    if (rbx > 0)
                                    {
                                        if (rbx == 1)
                                        {
                                            r14_4 = var_100_1;
                                            rdx_7 = r14_4;
                                        }
                                        else
                                        {
                                            void* r14_3 = var_100_1;
                                            int64_t rbp_5 = 2;
                                            var_e0 = r12_1;
                                            int64_t* r13_4 = &rax[0x1c];
                                            int32_t* rax_25 = (rax - -0x80);
                                            int64_t* r15_2 = r14_3;
                                            void* rax_27;
                                            do
                                            {
                                                int64_t* rax_26 = sub_409350(r15_2, rax);
                                                r15_2 = rax_26;
                                                char var_50_5 = 0x10;
                                                rax_27 = sub_409270(r13_4, rax_25, r14_3, rax_26, &var_58);
                                                r14_3 = rax_27;
                                                if (r15_2 == 0)
                                                {
                                                    break;
                                                }
                                                if (rax_27 == 0)
                                                {
                                                    break;
                                                }
                                                rbp_5 = (rbp_5 + 1);
                                            } while (rbx >= rbp_5);
                                            if (r15_2 == 0)
                                            {
                                                goto label_411c55;
                                            }
                                            r14_4 = r15_2;
                                            r12_1 = var_e0;
                                            rdx_7 = rax_27;
                                        }
                                        if (rbx != var_118_2)
                                        {
                                            goto label_411f1c;
                                        }
                                        goto label_411ef0;
                                    }
                                    rbp_3 = var_100_1;
                                    rdx_18 = nullptr;
                                label_411f36:
                                    var_f8 = rdx_18;
                                    if (*(rbp_3 + 0x30) == 0x11)
                                    {
                                        goto label_411cf4;
                                    }
                                label_411cf9:
                                    if (var_118_2 == -1)
                                    {
                                        goto label_411a45;
                                    }
                                    rax_14 = 0xa;
                                    goto label_411a4a;
                                }
                            label_411e8b:
                                *arg6 = 0xf;
                                goto label_411ebb;
                            }
                            if (rax_32 != 1)
                            {
                                goto label_411d52;
                            }
                            if (*r12_1 != 0x2c)
                            {
                                if ((arg4 & 0x200000) == 0)
                                {
                                    goto label_411eb5;
                                }
                                goto label_411d61;
                            }
                            rbx = var_118_2;
                            goto label_411dc4;
                        }
                    label_411d52:
                        if ((arg4 & 0x200000) != 0)
                        {
                        label_411d61:
                            r15_1[9] = r13_2;
                            rax_21 = var_100_1;
                            *r12_1 = zmm0;
                            r12_1[8] = 1;
                        label_411b55:
                            if (*arg6 == 0)
                            {
                            label_411b62:
                                var_100_1 = rax_21;
                                goto label_411b67;
                            }
                            if (rax_21 != 0)
                            {
                                goto label_411b62;
                            }
                            goto label_411ebb;
                        }
                        if (r12_1[8] != 2)
                        {
                            goto label_411eb5;
                        }
                        *arg6 = 9;
                        goto label_411ebb;
                    }
                    rbx = rbx;
                    if (rbp_2 != 0x13)
                    {
                        r15_1[9] = (r15_1[9] + sub_4110c0(r12_1, r15_1, arg4));
                        if (var_100_1 != 0)
                        {
                            if (rbp_2 == 0x12)
                            {
                                r14_4 = var_100_1;
                                var_118_2 = -1;
                                rbx = 1;
                                rdx_7 = r14_4;
                            label_411f1c:
                                void*** rax_45 = sub_409350(r14_4, rax);
                                rdx_18 = rdx_7;
                                rbp_3 = rax_45;
                                if (rax_45 == 0)
                                {
                                    goto label_411c55;
                                }
                                goto label_411f36;
                            }
                            rbp_3 = var_100_1;
                            if (*(rbp_3 + 0x30) == 0x11)
                            {
                                var_118_2 = -1;
                                rbp_3 = var_100_1;
                                rbx = nullptr;
                                var_f8 = nullptr;
                                goto label_411cf4;
                            }
                            var_118_2 = -1;
                            rbx = nullptr;
                            var_f8 = nullptr;
                        label_411a45:
                            rax_14 = 0xb;
                            goto label_411a4a;
                        }
                        goto label_411d87;
                    }
                    r15_1[9] = (r15_1[9] + sub_4110c0(r12_1, r15_1, arg4));
                    if (var_100_1 != 0)
                    {
                        rbp_3 = var_100_1;
                        if (*(rbp_3 + 0x30) == 0x11)
                        {
                            rbp_3 = var_100_1;
                            var_118_2 = 1;
                            var_f8 = nullptr;
                        label_411cf4:
                            sub_406aa0(rbp_3, 0x406c40, *(rbp_3 + 0x28));
                            goto label_411cf9;
                        }
                        var_118_2 = 1;
                        rax_14 = 0xa;
                        var_f8 = nullptr;
                    label_411a4a:
                        char var_50_1 = rax_14;
                        int64_t* r13_3 = &rax[0x1c];
                        int32_t* r14_2 = &rax[0x20];
                        void* rax_16 = sub_409270(r13_3, r14_2, rbp_3, nullptr, &var_58);
                        rdx_7 = rax_16;
                        if (rax_16 == 0)
                        {
                        label_411c55:
                            *arg6 = 0xc;
                        label_411c67:
                            sub_406aa0(var_100_1, 0x407cb0, 0);
                            return nullptr;
                        }
                        rbx = (rbx + 2);
                        if (rbx > var_118_2)
                        {
                            goto label_411b1f;
                        }
                        var_e0 = r12_1;
                        void* r12_2 = rbp_3;
                        void* rbp_4 = rax_16;
                        void* rax_19;
                        do
                        {
                            void*** rax_17 = sub_409350(r12_2, rax);
                            r12_2 = rax_17;
                            char var_50_2 = 0x10;
                            void* rax_18 = sub_409270(r13_3, r14_2, rbp_4, rax_17, &var_58);
                            if (r12_2 == 0)
                            {
                                break;
                            }
                            if (rax_18 == 0)
                            {
                                break;
                            }
                            char var_50_3 = 0xa;
                            rax_19 = sub_409270(r13_3, r14_2, rax_18, nullptr, &var_58);
                            rbp_4 = rax_19;
                            if (rax_19 == 0)
                            {
                                break;
                            }
                            rbx = (rbx + 1);
                        } while (rbx <= var_118_2);
                        if (r12_2 == 0)
                        {
                            goto label_411c55;
                        }
                        r12_1 = var_e0;
                        rdx_7 = rax_19;
                    label_411b1f:
                        int64_t* rax_20 = var_f8;
                        if (rax_20 == 0)
                        {
                        label_411ef0:
                            var_100_1 = rdx_7;
                            goto label_411b67;
                        }
                        char var_50_4 = 0x10;
                        rax_21 = sub_409270(r13_3, r14_2, rax_20, rdx_7, &var_58);
                        goto label_411b55;
                    }
                label_411d87:
                    if (*arg6 != 0)
                    {
                        goto label_4119a8;
                    }
                label_411d8f:
                    var_100_1 = nullptr;
                label_411b67:
                    rbp_2 = r12_1[8];
                    if ((arg4 & 0x1000000) != 0)
                    {
                        if ((rbp_2 != 0xb && rbp_2 != 0x17))
                        {
                            continue;
                        }
                        if (var_100_1 == 0)
                        {
                            break;
                        }
                        sub_406aa0(var_100_1, 0x407cb0, 0);
                        break;
                    }
                }
                goto label_411ba5;
            }
            var_100_1 = nullptr;
            *arg6 = 6;
            goto label_411910;
        }
        case 5:
        {
            void* rax_67 = sub_409270(&rax[0x1c], &rax[0x20], nullptr, nullptr, r12_1);
            var_100_1 = rax_67;
            if (rax_67 == 0)
            {
                goto label_4121c6;
            }
            if (rax[0x2d] > 1)
            {
                rax[0x2c] = (rax[0x2c] | 2);
            }
            goto label_4118e0;
        }
        case 8:
        {
            rbx = arg2[6];
            arg2[6] = (rbx + 1);
            r15_1[9] = (r15_1[9] + sub_4110c0(r12_1, arg1, (arg4 | 0x800000)));
            void* rax_10 = nullptr;
            if (r12_1[8] != 9)
            {
                rax_10 = sub_412e60(r15_1, arg2, r12_1, arg4, (arg5 + 1), arg6);
                if (*arg6 != 0)
                {
                    goto label_4119a8;
                }
                if (r12_1[8] != 9)
                {
                    if (rax_10 != 0)
                    {
                        sub_406aa0(rax_10, 0x407cb0, 0);
                    }
                    *arg6 = 8;
                    goto label_4119a8;
                }
            }
            if (rbx <= 8)
            {
                *(rax + 0xa8) = (*(rax + 0xa8) | (1 << rbx));
            }
            char var_50_8 = 0x11;
            void* rax_79 = sub_409270(&rax[0x1c], &rax[0x20], rax_10, nullptr, &var_58);
            var_100_1 = rax_79;
            if (rax_79 == 0)
            {
                goto label_4121c6;
            }
            *(rax_79 + 0x28) = rbx;
            goto label_4118e0;
        }
        case 0xc:
        {
            int32_t r14_6 = *r12_1;
            if ((r14_6 & 0x30f) != 0)
            {
                char rax_69 = rax[0x2c];
                if ((rax_69 & 0x10) == 0)
                {
                    char rax_70 = (rax_69 | 0x10);
                    rax[0x2c] = rax_70;
                    int32_t rbx_6;
                    int32_t rbp_10;
                    if ((rax_70 & 8) != 0)
                    {
                        rbx_6 = 0;
                        rbp_10 = 0;
                    }
                    else
                    {
                        *(rax + 0xb8) = 0x3ff000000000000;
                        *(rax + 0xc0) = 0x7fffffe87fffffe;
                        if ((rax_70 & 4) == 0)
                        {
                            rbx_6 = 0x80;
                            rbp_10 = 2;
                        }
                    }
                    if (((rax_70 & 8) != 0 || ((rax_70 & 8) == 0 && (rax_70 & 4) == 0)))
                    {
                        void* rsi_52 = &rax[(rbp_10 * 2)];
                        int32_t r9_11 = ((rbx_6 + 0x100) - (rbp_10 << 6));
                        void* rdi_65 = &*__ctype_b_loc()[rbx_6];
                        do
                        {
                            int64_t rax_137 = 0;
                            do
                            {
                                char rcx_40 = rax_137;
                                if (((*(rdi_65 + (rax_137 << 1)) & 8) != 0 || ((*(rdi_65 + (rax_137 << 1)) & 8) == 0 && (rbx_6 + rax_137) == 0x5f)))
                                {
                                    *(rsi_52 + 0xb8) = (*(rsi_52 + 0xb8) | (1 << rcx_40));
                                }
                                rax_137 = (rax_137 + 1);
                            } while (rax_137 != 0x40);
                            rbx_6 = (rbx_6 + 0x40);
                            rsi_52 = (rsi_52 + 8);
                            rdi_65 = (rdi_65 - -0x80);
                        } while (r9_11 != rbx_6);
                    }
                    if (((rax_70 & 8) == 0 && (rax_70 & 4) != 0))
                    {
                        *(rax + 0xc8) = 0;
                        r14_6 = *r12_1;
                    }
                }
            }
            int64_t* r13_7 = &rax[0x1c];
            int32_t* rbp_8 = &rax[0x20];
            if (((r14_6 - 0x100) & 0xfffffeff) != 0)
            {
                void* rax_89 = sub_409270(r13_7, rbp_8, nullptr, nullptr, r12_1);
                var_100_1 = rax_89;
                if (rax_89 == 0)
                {
                    goto label_4121c6;
                }
            }
            else
            {
                int64_t* rbx_4;
                if (r14_6 == 0x100)
                {
                    *r12_1 = 6;
                    void* rax_97 = sub_409270(r13_7, rbp_8, nullptr, nullptr, r12_1);
                    *r12_1 = 9;
                    rbx_4 = rax_97;
                }
                else
                {
                    *r12_1 = 5;
                    int64_t* rax_73 = sub_409270(r13_7, rbp_8, nullptr, nullptr, r12_1);
                    *r12_1 = 0xa;
                    rbx_4 = rax_73;
                }
                void* rax_74 = sub_409270(r13_7, rbp_8, nullptr, nullptr, r12_1);
                char var_50_7 = 0xa;
                void* rax_75 = sub_409270(r13_7, rbp_8, rbx_4, rax_74, &var_58);
                void* rcx_14 = rax_75;
                var_100_1 = rax_75;
                rax_75 = rax_74 == 0;
                if ((rbx_4 == 0 | rax_75) != 0)
                {
                    goto label_4121c6;
                }
                if (rcx_14 == 0)
                {
                    goto label_4121c6;
                }
            }
            r15_1[9] = (r15_1[9] + sub_4110c0(r12_1, r15_1, arg4));
            goto label_411910;
        }
        case 0x14:
        {
            int64_t var_b0 = 0;
            int64_t* rax_46 = calloc(0x20, 1);
            int64_t* r13_5 = calloc(0x50, 1);
            int64_t* rax_47;
            rax_47 = r13_5 == 0;
            if ((rax_46 == 0 | rax_47) == 0)
            {
                rbx = sub_406b10(r12_1, r15_1, arg4);
                char rax_49 = r12_1[8];
                if (rax_49 != 2)
                {
                    var_e0 = 0;
                    if (rax_49 == 0x19)
                    {
                        r13_5[4] = (r13_5[4] | 1);
                        if ((arg4 & 0x100) != 0)
                        {
                            *rax_46 = (*rax_46 | 0x400);
                        }
                        r15_1[9] = (r15_1[9] + rbx);
                        rbx = sub_406b10(r12_1, r15_1, arg4);
                        rax_49 = r12_1[8];
                        var_e0 = 1;
                    }
                    if (rax_49 == 0x15)
                    {
                        r12_1[8] = 1;
                    }
                    var_f8 = nullptr;
                    char r9_1 = 1;
                    int64_t var_100_2 = 0;
                    while (true)
                    {
                        int64_t* var_78;
                        int64_t* var_a0_1 = &var_78;
                        int32_t var_a8 = 3;
                        int32_t rax_50 = sub_410ea0(&var_a8, r15_1, r12_1, rbx, arg4, (r9_1 & 1));
                        if (rax_50 == 0)
                        {
                            rbx = sub_406b10(r12_1, r15_1, arg4);
                            uint64_t rax_52 = var_a8;
                            char var_80;
                            char rdx_25;
                            if (((rax_52 - 2) & 0xfffffffd) != 0)
                            {
                                rdx_25 = r12_1[8];
                                if (rdx_25 == 0x16)
                                {
                                    r15_1[9] = (r15_1[9] + rbx);
                                    int32_t r10_2 = arg4;
                                    void var_88;
                                    int32_t rax_99 = sub_406b10(&var_88, r15_1, r10_2);
                                    if (var_80 == 0x15)
                                    {
                                        r15_1[9] = (r15_1[9] + (-rbx));
                                        rax_52 = var_a8;
                                        r12_1[8] = 1;
                                    }
                                    if ((var_80 != 2 && var_80 != 0x15))
                                    {
                                        int32_t var_98 = 3;
                                        void* var_90_1 = &var_58;
                                        rax_50 = sub_410ea0(&var_98, r15_1, &var_88, rax_99, r10_2, 1);
                                        if (rax_50 == 0)
                                        {
                                            int32_t r8_25 = var_a8;
                                            int64_t* rdx_47 = nullptr;
                                            rbx = sub_406b10(r12_1, r15_1, arg4);
                                            int32_t rax_102 = (r8_25 - 2);
                                            if (rax[0x2d] >= 2)
                                            {
                                                rdx_47 = r13_5;
                                            }
                                            if ((rax_102 & 0xfffffffd) == 0)
                                            {
                                            label_412b9b:
                                                *arg6 = 0xb;
                                                goto label_4124ef;
                                            }
                                            int32_t rsi_42 = var_98;
                                            if (((rsi_42 - 2) & 0xfffffffd) == 0)
                                            {
                                                goto label_412b9b;
                                            }
                                            bool var_d8_1 = r8_25 == 3;
                                            uint32_t rcx_28;
                                            char rdi_51;
                                            void* r9_7;
                                            if (r8_25 != 3)
                                            {
                                                if ((rsi_42 != 3 && r8_25 != 0))
                                                {
                                                    rdi_51 = 0;
                                                    rcx_28 = 0;
                                                    if (rsi_42 == 0)
                                                    {
                                                    label_412b89:
                                                        rcx_28 = var_90_1;
                                                    }
                                                }
                                                if (rsi_42 == 3)
                                                {
                                                    r9_7 = var_90_1;
                                                    int64_t rcx_41 = -1;
                                                    void* rdi_66 = r9_7;
                                                    while (rcx_41 != 0)
                                                    {
                                                        bool cond:13_1 = 0 != *rdi_66;
                                                        rdi_66 = (rdi_66 + 1);
                                                        rcx_41 = (rcx_41 - 1);
                                                        if ((!cond:13_1))
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    if (((!rcx_41) - 1) > 1)
                                                    {
                                                        goto label_412a9a;
                                                    }
                                                    rdi_51 = 0;
                                                    if (r8_25 != 0)
                                                    {
                                                        goto label_412746;
                                                    }
                                                }
                                            }
                                            if (((rsi_42 != 3 && r8_25 == 0) || (r8_25 != 3 && rsi_42 == 3)))
                                            {
                                                rdi_51 = var_a0_1;
                                            }
                                            if (r8_25 == 3)
                                            {
                                                int64_t rcx_42 = -1;
                                                int64_t* rdi_67 = var_a0_1;
                                                while (rcx_42 != 0)
                                                {
                                                    bool cond:12_1 = 0 != *rdi_67;
                                                    rdi_67 = (rdi_67 + 1);
                                                    rcx_42 = (rcx_42 - 1);
                                                    if ((!cond:12_1))
                                                    {
                                                        break;
                                                    }
                                                }
                                                if (((!rcx_42) - 1) > 1)
                                                {
                                                label_412a9a:
                                                    *arg6 = 3;
                                                    goto label_4124ef;
                                                }
                                                if (rsi_42 == 3)
                                                {
                                                    int64_t rcx_38 = -1;
                                                    void* rdi_63 = var_90_1;
                                                    while (rcx_38 != 0)
                                                    {
                                                        bool cond:14_1 = 0 != *rdi_63;
                                                        rdi_63 = (rdi_63 + 1);
                                                        rcx_38 = (rcx_38 - 1);
                                                        if ((!cond:14_1))
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    if (((!rcx_38) - 1) > 1)
                                                    {
                                                        goto label_412a9a;
                                                    }
                                                }
                                                rdi_51 = *var_a0_1;
                                            }
                                            if ((((rsi_42 != 3 && r8_25 == 0) || (r8_25 != 3 && rsi_42 == 3)) || r8_25 == 3))
                                            {
                                                if (rsi_42 == 0)
                                                {
                                                    goto label_412b89;
                                                }
                                                rcx_28 = 0;
                                                if (rsi_42 == 3)
                                                {
                                                    r9_7 = var_90_1;
                                                label_412746:
                                                    rcx_28 = *r9_7;
                                                }
                                            }
                                            if ((((((rsi_42 != 3 && r8_25 == 0) || (r8_25 != 3 && rsi_42 == 3)) || r8_25 == 3) && rsi_42 != 0) || ((r8_25 != 3 && rsi_42 != 3) && r8_25 != 0)))
                                            {
                                                uint32_t r8_26;
                                                if (r8_25 == 0)
                                                {
                                                label_412b5b:
                                                    var_d8_1 = rdx_47;
                                                    rsi_42 = var_98;
                                                    r8_26 = sub_407220(rdi_51, rdx_47);
                                                    rdx_47 = var_d8_1;
                                                }
                                                else
                                                {
                                                    r8_26 = var_a0_1;
                                                    if (var_d8_1 != 0)
                                                    {
                                                        goto label_412b5b;
                                                    }
                                                }
                                                int32_t r9_8;
                                                if (rsi_42 == 0)
                                                {
                                                label_412aaf:
                                                    var_d8_1 = rdx_47;
                                                    rdx_47 = var_d8_1;
                                                    r9_8 = sub_407220(rcx_28, rdx_47);
                                                }
                                                else
                                                {
                                                    r9_8 = var_90_1;
                                                    if (rsi_42 == 3)
                                                    {
                                                        goto label_412aaf;
                                                    }
                                                }
                                                if (r8_26 == 0xffffffff)
                                                {
                                                    goto label_412a9a;
                                                }
                                                if (r9_8 == 0xffffffff)
                                                {
                                                    goto label_412a9a;
                                                }
                                                if (((arg4 & 0x10000) != 0 && r8_26 > r9_8))
                                                {
                                                    goto label_412b9b;
                                                }
                                                if (rdx_47 != 0)
                                                {
                                                    int64_t rax_106 = rdx_47[8];
                                                    int64_t rcx_29 = rdx_47[1];
                                                    if (rax_106 == var_f8)
                                                    {
                                                        var_d8_1 = rdx_47;
                                                        int64_t r11_3 = (((var_f8 + var_f8) + 1) << 2);
                                                        var_f8 = ((var_f8 + var_f8) + 1);
                                                        uint32_t var_d0;
                                                        var_d0 = realloc(rcx_29, r11_3);
                                                        int64_t rax_147 = realloc(*(var_d8_1 + 0x10), r11_3);
                                                        rcx_29 = var_d0;
                                                        if (rcx_29 != 0)
                                                        {
                                                            rdx_47 = var_d8_1;
                                                            if (rax_147 != 0)
                                                            {
                                                                rdx_47[2] = rax_147;
                                                                rax_106 = rdx_47[8];
                                                                rdx_47[1] = rcx_29;
                                                            }
                                                        }
                                                        if ((rcx_29 == 0 || (rcx_29 != 0 && rax_147 == 0)))
                                                        {
                                                            free(rcx_29);
                                                            free(rax_147);
                                                            *arg6 = 0xc;
                                                            goto label_4124ef;
                                                        }
                                                    }
                                                    *(rcx_29 + (rax_106 << 2)) = r8_26;
                                                    int64_t rcx_30 = rdx_47[2];
                                                    rdx_47[8] = (rax_106 + 1);
                                                    *(rcx_30 + (rax_106 << 2)) = r9_8;
                                                    goto label_4127d0;
                                                }
                                            label_4127d0:
                                                int64_t rax_107 = 0;
                                                do
                                                {
                                                    char rcx_31 = rax_107;
                                                    if ((r8_26 <= rax_107 && r9_8 >= rax_107))
                                                    {
                                                        int64_t rdx_49 = (rax_107 >> 6);
                                                        rax_46[rdx_49] = (rax_46[rdx_49] | (1 << rcx_31));
                                                    }
                                                    rax_107 = (rax_107 + 1);
                                                } while (rax_107 != 0x100);
                                                *arg6 = 0;
                                            }
                                            goto label_41244f;
                                        }
                                    }
                                    if (var_80 == 2)
                                    {
                                        goto label_4125ba;
                                    }
                                }
                                if (rdx_25 == 2)
                                {
                                label_4125ba:
                                    *arg6 = 7;
                                    goto label_4124ef;
                                }
                            }
                            if (((((((rax_52 - 2) & 0xfffffffd) != 0 && rdx_25 == 0x16) && var_80 == 0x15) || ((rax_52 - 2) & 0xfffffffd) == 0) || ((((rax_52 - 2) & 0xfffffffd) != 0 && rdx_25 != 2) && rdx_25 != 0x16)))
                            {
                                if (rax_52 > 4)
                                {
                                    __assert_fail("0", "lib/regcomp.c", 0xcf3, "parse_bracket_exp");
                                    /* no return */
                                }
                                switch (rax_52)
                                {
                                    case 0:
                                    {
                                        uint64_t rcx_21 = var_a0_1;
                                        uint64_t rax_85 = ((rcx_21 >> 3) & 0x18);
                                        *(rax_46 + rax_85) = (*(rax_46 + rax_85) | (1 << rcx_21));
                                    label_41244f:
                                        char rax_81 = r12_1[8];
                                        if (rax_81 == 2)
                                        {
                                            goto label_4125ba;
                                        }
                                        if (rax_81 != 0x15)
                                        {
                                            r9_1 = 0;
                                            continue;
                                        }
                                        else
                                        {
                                            r15_1[9] = (r15_1[9] + rbx);
                                            if (var_e0 != 0)
                                            {
                                                int64_t* rax_116 = rax_46;
                                                void* rdx_50 = &rax_46[4];
                                                do
                                                {
                                                    *rax_116 = (!*rax_116);
                                                    rax_116 = &rax_116[1];
                                                } while (rdx_50 != rax_116);
                                            }
                                            int32_t rdx_51 = rax[0x2d];
                                            if (rdx_51 > 1)
                                            {
                                                int64_t* rcx_35 = *(rax + 0x78);
                                                int64_t rax_119 = 0;
                                                do
                                                {
                                                    *(rax_46 + rax_119) = (*(rax_46 + rax_119) & *(rcx_35 + rax_119));
                                                    rax_119 = (rax_119 + 8);
                                                } while (rax_119 != 0x20);
                                            }
                                            if (r13_5[5] != 0)
                                            {
                                            label_4129aa:
                                                rax[0x2c] = (rax[0x2c] | 2);
                                                int64_t* rbp_9 = &rax[0x1c];
                                                rbx = &rax[0x20];
                                                char var_70_2 = 6;
                                                var_78 = r13_5;
                                                void* rax_125 = sub_409270(rbp_9, rbx, nullptr, nullptr, &var_78);
                                                var_100_1 = rax_125;
                                                void* rdx_53 = &rax_46[4];
                                                int64_t* rax_126 = rax_46;
                                                if (rax_125 != 0)
                                                {
                                                    while (*rax_126 == 0)
                                                    {
                                                        rax_126 = &rax_126[1];
                                                        if (rdx_53 == rax_126)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    if (*rax_126 == 0)
                                                    {
                                                        free(rax_46);
                                                        break;
                                                    }
                                                    char var_70_3 = 3;
                                                    var_78 = rax_46;
                                                    int64_t* rax_128 = sub_409270(rbp_9, rbx, nullptr, nullptr, &var_78);
                                                    if (rax_128 != 0)
                                                    {
                                                        char var_50_9 = 0xa;
                                                        void* rax_129 = sub_409270(rbp_9, rbx, rax_128, var_100_1, &var_58);
                                                        var_100_1 = rax_129;
                                                        if (rax_129 != 0)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                if (r13_5[6] != 0)
                                                {
                                                    goto label_4129aa;
                                                }
                                                if (r13_5[7] != 0)
                                                {
                                                    goto label_4129aa;
                                                }
                                                if (r13_5[8] != 0)
                                                {
                                                    goto label_4129aa;
                                                }
                                                if (rdx_51 > 1)
                                                {
                                                    if (r13_5[9] != 0)
                                                    {
                                                        goto label_4129aa;
                                                    }
                                                    if ((r13_5[4] & 1) != 0)
                                                    {
                                                        goto label_4129aa;
                                                    }
                                                    goto label_41294b;
                                                }
                                            label_41294b:
                                                sub_407c60(r13_5);
                                                char var_70_1 = 3;
                                                var_78 = rax_46;
                                                void* rax_122 = sub_409270(&rax[0x1c], &rax[0x20], nullptr, nullptr, &var_78);
                                                var_100_1 = rax_122;
                                                if (rax_122 != 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                        goto label_412993;
                                    }
                                    case 1:
                                    {
                                        int64_t rdx_37 = r13_5[5];
                                        int64_t rax_82 = *r13_5;
                                        if (rdx_37 == var_100_2)
                                        {
                                            int64_t rsi_44 = (((var_100_2 + var_100_2) + 1) << 2);
                                            var_100_2 = ((var_100_2 + var_100_2) + 1);
                                            rax_82 = realloc(rax_82, rsi_44);
                                            if (rax_82 == 0)
                                            {
                                            label_412993:
                                                *arg6 = 0xc;
                                                goto label_4124ef;
                                            }
                                            *r13_5 = rax_82;
                                            rdx_37 = r13_5[5];
                                        }
                                        r13_5[5] = (rdx_37 + 1);
                                        *(rax_82 + (rdx_37 << 2)) = var_a0_1;
                                        goto label_41244f;
                                    }
                                    case 2:
                                    {
                                        int32_t rax_80 = sub_40be40(rax_46, var_a0_1);
                                        *arg6 = rax_80;
                                        if (rax_80 != 0)
                                        {
                                            goto label_4124ef;
                                        }
                                        goto label_41244f;
                                    }
                                    case 3:
                                    {
                                        int32_t rax_88 = sub_40be40(rax_46, var_a0_1);
                                        *arg6 = rax_88;
                                        if (rax_88 != 0)
                                        {
                                            goto label_4124ef;
                                        }
                                        goto label_41244f;
                                    }
                                    case 4:
                                    {
                                        int32_t rax_86 = sub_40be90(r15_1[0xf], rax_46, &r13_5[3], &r13_5[9], &var_b0, var_a0_1, arg4);
                                        *arg6 = rax_86;
                                        if (rax_86 != 0)
                                        {
                                            goto label_4124ef;
                                        }
                                        goto label_41244f;
                                    }
                                }
                            }
                        }
                        *arg6 = rax_50;
                        goto label_4124ef;
                    }
                    goto label_4118e0;
                }
                *arg6 = 2;
            label_4124ef:
                free(rax_46);
                sub_407c60(r13_5);
                if (*arg6 != 0)
                {
                    goto label_4119a8;
                }
                var_100_1 = nullptr;
                goto label_4118e0;
            }
            free(rax_46);
            free(r13_5);
        label_4121c6:
            *arg6 = 0xc;
        label_4119a8:
            var_100_1 = nullptr;
            goto label_411910;
        }
        case 0x17:
        {
            if ((arg4 & 0x1000000) != 0)
            {
            label_411ba5:
                var_100_1 = nullptr;
                *arg6 = 0xd;
                goto label_411910;
            }
            break;
        }
        case 0x18:
        {
        label_4118a5:
            r12_1[8] = 1;
            void* rax_3 = sub_409270(&rax[0x1c], &rax[0x20], nullptr, nullptr, r12_1);
            var_100_1 = rax_3;
            if (rax_3 == 0)
            {
                goto label_4121c6;
            }
            goto label_4118e0;
        }
        case 0x20:
        case 0x21:
        {
            rbx = arg6;
            rsi_21 = arg1[0xf];
            rcx_8 = &data_414f22;
            arg5 = rax_1 == 0x21;
            rdx_26 = "alnum";
            r9_3 = rbx;
            r8_9 = arg5;
            break;
        }
        case 0x22:
        case 0x23:
        {
            rbx = arg6;
            rsi_21 = arg1[0xf];
            rcx_8 = &data_41505a;
            arg5 = rax_1 == 0x23;
            rdx_26 = "space";
            r9_3 = rbx;
            r8_9 = arg5;
            break;
        }
        case 0x24:
        {
            var_100_1 = nullptr;
            *arg6 = 5;
        label_411910:
            return var_100_1;
            break;
        }
    }
    if ((((rax_1 == 0x20 || rax_1 == 0x21) || rax_1 == 0x22) || rax_1 == 0x23))
    {
        void* rax_53 = sub_40c660(rax, rsi_21, rdx_26, rcx_8, r8_9, r9_3);
        var_100_1 = rax_53;
        if (*rbx == 0)
        {
            goto label_4118e0;
        }
        if (rax_53 == 0)
        {
            goto label_4119a8;
        }
        goto label_4118e0;
    }
    if ((((rax_1 == 0xb || rax_1 == 0x12) || rax_1 == 0x13) || rax_1 == 0x17))
    {
        if ((arg4 & 0x20) != 0)
        {
            goto label_411ba5;
        }
        if ((arg4 & 0x10) != 0)
        {
            r15_1[9] = (r15_1[9] + sub_4110c0(r12_1, r15_1, arg4));
            var_100_1 = sub_411830(r15_1, arg2, r12_1, arg4, arg5, arg6, arg5, arg4, rax);
            goto label_411910;
        }
        if (rax_1 != 9)
        {
            goto label_4118a5;
        }
    }
    if ((rax_1 == 9 || ((((rax_1 == 0xb || rax_1 == 0x12) || rax_1 == 0x13) || rax_1 == 0x17) && (arg4 & 0x20) == 0)))
    {
        if ((arg4 & 0x20000) != 0)
        {
            goto label_4118a5;
        }
        var_100_1 = nullptr;
        *arg6 = 0x10;
        goto label_411910;
    }
}

void* sub_412d20(void** arg1, int64_t* arg2, char* arg3, int64_t arg4, 
    int64_t arg5, int32_t* arg6)
{
    void* rax = *arg2;
    void* rax_1 = sub_411830(arg1, arg2, arg3, arg4, arg5, arg6);
    void* r14 = rax_1;
    if ((*arg6 == 0 || (*arg6 != 0 && rax_1 != 0)))
    {
        while (true)
        {
            char rax_2 = arg3[8];
            if ((rax_2 & 0xf7) == 2)
            {
                return r14;
            }
            void* rax_3;
            while (true)
            {
                if ((rax_2 == 9 && arg5 != 0))
                {
                    return r14;
                }
                rax_3 = sub_411830(arg1, arg2, arg3, arg4, arg5, arg6);
                if ((*arg6 != 0 && rax_3 == 0))
                {
                    break;
                }
                if (r14 == 0)
                {
                    break;
                }
                if (rax_3 == 0)
                {
                    break;
                }
                char var_40_1 = 0x10;
                void var_48;
                void* rax_6 = sub_409270((rax + 0x70), (rax + 0x80), r14, rax_3, &var_48);
                if (rax_6 == 0)
                {
                    sub_406aa0(rax_3, 0x407cb0, 0);
                    sub_406aa0(r14, 0x407cb0, 0);
                    *arg6 = 0xc;
                    return nullptr;
                }
                r14 = rax_6;
                rax_2 = arg3[8];
                if ((rax_2 & 0xf7) == 2)
                {
                    return r14;
                }
            }
            if ((*arg6 != 0 && rax_3 == 0))
            {
                break;
            }
            if (r14 == 0)
            {
                r14 = rax_3;
            }
        }
        if (r14 != 0)
        {
            sub_406aa0(r14, 0x407cb0, 0);
        }
    }
    return nullptr;
}

void* sub_412e60(void** arg1, int64_t* arg2, char* arg3, int64_t arg4, 
    int64_t arg5, int32_t* arg6)
{
    void* rbx = *arg2;
    int64_t rax = *(rbx + 0xa8);
    void* rax_1 = sub_412d20(arg1, arg2, arg3, arg4, arg5, arg6);
    void* r15 = rax_1;
    if ((*arg6 == 0 || (*arg6 != 0 && rax_1 != 0)))
    {
        while (true)
        {
            if (arg3[8] != 0xa)
            {
                return r15;
            }
            arg1[9] = (arg1[9] + sub_4110c0(arg3, arg1, (arg4 | 0x800000)));
            char rax_11 = arg3[8];
            int64_t* rcx_1;
            if (((rax_11 & 0xf7) == 2 || (((rax_11 & 0xf7) != 2 && rax_11 == 9) && arg5 != 0)))
            {
                rcx_1 = nullptr;
            }
            if (((rax_11 & 0xf7) != 2 && (rax_11 != 9 || (rax_11 == 9 && arg5 == 0))))
            {
                int64_t rax_3 = *(rbx + 0xa8);
                *(rbx + 0xa8) = rax;
                rcx_1 = sub_412d20(arg1, arg2, arg3, arg4, arg5, arg6);
                if ((*arg6 != 0 && rcx_1 == 0))
                {
                    break;
                }
                *(rbx + 0xa8) = (*(rbx + 0xa8) | rax_3);
            }
            char var_40_1 = 0xa;
            void var_48;
            void* rax_8 = sub_409270((rbx + 0x70), (rbx + 0x80), r15, rcx_1, &var_48);
            r15 = rax_8;
            if (rax_8 == 0)
            {
                *arg6 = 0xc;
                return r15;
            }
        }
        if (r15 != 0)
        {
            sub_406aa0(r15, 0x407cb0, 0);
        }
    }
    return nullptr;
}

uint64_t sub_412fc0(int64_t* arg1, char* arg2, int64_t arg3, int64_t arg4)
{
    char* r14 = arg2;
    arg1[7] = (arg1[7] & 0x90);
    bool cond:0 = arg1[1] <= 0xe7;
    int32_t var_10c = 0;
    int64_t* rbx = *arg1;
    arg1[3] = arg4;
    arg1[2] = 0;
    arg1[6] = 0;
    uint64_t rax_50;
    int64_t* rax_56;
    if (cond:0)
    {
        rax_56 = realloc(rbx, 0xe8);
        rbx = rax_56;
        if (rax_56 == 0)
        {
            rax_50 = 0xc;
        }
        else
        {
            arg1[1] = 0xe8;
            *arg1 = rax_56;
        }
    }
    if (((cond:0 && rax_56 != 0) || (!cond:0)))
    {
        arg1[2] = 0xe8;
        void* rdi_1 = (&rbx[1] & 0xfffffffffffffff8);
        *rbx = 0;
        rbx[0x1c] = 0;
        for (uint64_t rcx_3 = (((rbx - rdi_1) + 0xe8) >> 3); rcx_3 != 0; rcx_3 = (rcx_3 - 1))
        {
            *rdi_1 = 0;
            rdi_1 = (rdi_1 + 8);
        }
        rbx[0x10] = 0xf;
        if (arg3 <= 0x555555555555554)
        {
            uint64_t rax_1 = (arg3 + 1);
            rbx[1] = rax_1;
            *rbx = malloc((rax_1 << 4));
            uint64_t rsi;
            int64_t r15_1;
            if (arg3 == 0)
            {
                r15_1 = 0;
                rsi = 1;
            }
            else
            {
                rsi = 1;
                do
                {
                    rsi = (rsi + rsi);
                } while (arg3 >= rsi);
                r15_1 = (rsi - 1);
            }
            int64_t rax_3 = calloc(0x18, rsi);
            rbx[0x11] = r15_1;
            rbx[8] = rax_3;
            *(rbx + 0xb4) = __ctype_get_mb_cur_max();
            char* rax_5 = nl_langinfo(0xe);
            if (((*rax_5 & 0xdf) == 0x55 && ((rax_5[1] & 0xdf) == 0x54 && (rax_5[2] & 0xdf) == 0x46)))
            {
                char temp0_1 = rax_5[3];
                bool c_1 = temp0_1 < 0x2d;
                bool z_1 = temp0_1 == 0x2d;
                void* const rdi_4 = &data_4171e6;
                int64_t rcx_4 = 2;
                int64_t rdx_6;
                rdx_6 = z_1;
                void* rsi_1 = &rax_5[(rdx_6 + 3)];
                while (rcx_4 != 0)
                {
                    char temp1_1 = *rsi_1;
                    char temp2_1 = *rdi_4;
                    c_1 = temp1_1 < temp2_1;
                    z_1 = temp1_1 == temp2_1;
                    rsi_1 = (rsi_1 + 1);
                    rdi_4 = (rdi_4 + 1);
                    rcx_4 = (rcx_4 - 1);
                    if ((!z_1))
                    {
                        break;
                    }
                }
                rax_5 = ((!z_1) && (!c_1));
                rax_5 = (rax_5 - 0);
                if (rax_5 == 0)
                {
                    rbx[0x16] = (rbx[0x16] | 4);
                }
            }
            char rax_6 = rbx[0x16];
            bool cond:1_1 = *(rbx + 0xb4) <= 1;
            rbx[0x16] = (rax_6 & 0xf7);
            if ((!cond:1_1))
            {
                if ((rax_6 & 4) != 0)
                {
                    rbx[0xf] = 0x417ba0;
                }
                else
                {
                    int64_t rax_51 = calloc(0x20, 1);
                    rbx[0xf] = rax_51;
                    if (rax_51 == 0)
                    {
                        goto label_4139a0;
                    }
                    int64_t r15_5 = 0;
                    do
                    {
                        int32_t rdx_39 = (r15_5 << 3);
                        int32_t rcx_18 = 0;
                        do
                        {
                            wint_t rax_52 = btowc(rdx_39);
                            int32_t rdi_45 = (rdx_39 & 0xffffff80);
                            if (rax_52 != 0xffffffff)
                            {
                                int64_t* r8_5 = (rbx[0xf] + r15_5);
                                *r8_5 = (*r8_5 | (1 << rcx_18));
                                if ((rdi_45 == 0 && rax_52 == rdx_39))
                                {
                                    rcx_18 = (rcx_18 + 1);
                                    rdx_39 = (rdx_39 + 1);
                                    if (rcx_18 == 0x40)
                                    {
                                        break;
                                    }
                                    continue;
                                }
                            }
                            if (((rax_52 == 0xffffffff && rdi_45 == 0) || (rax_52 != 0xffffffff && rdi_45 == 0)))
                            {
                                rbx[0x16] = (rbx[0x16] | 8);
                            }
                            rcx_18 = (rcx_18 + 1);
                            rdx_39 = (rdx_39 + 1);
                        } while (rcx_18 != 0x40);
                        r15_5 = (r15_5 + 8);
                    } while (r15_5 != 0x20);
                }
            }
            if (*rbx == 0)
            {
                goto label_4139a0;
            }
            if (rbx[8] == 0)
            {
                goto label_4139a0;
            }
            int64_t rcx_5 = 0x12;
            int64_t rdx_9 = arg1[5];
            char* var_d0;
            int64_t* rdi_5 = &var_d0;
            var_10c = 0;
            for (; rcx_5 != 0; rcx_5 = (rcx_5 - 1))
            {
                *rdi_5 = 0;
                rdi_5 = &rdi_5[1];
            }
            int32_t rdi_6 = *(rbx + 0xb4);
            uint64_t rax_8 = (arg4 & 0x400000);
            char* var_d8 = r14;
            bool var_50_1 = rax_8 != 0;
            int64_t rdx_10 = (rdx_9 | rax_8);
            uint8_t rax_9 = rbx[0x16];
            bool rsi_2 = rdx_10 != 0;
            uint8_t rcx_6 = rax_9;
            rax_9 = (rax_9 >> 3);
            int64_t var_88_1 = arg3;
            rcx_6 = (rcx_6 >> 2);
            int32_t var_48_1 = rdi_6;
            char var_4f_1 = (rcx_6 & 1);
            char var_4e_1 = (rax_9 & 1);
            int64_t var_70_1 = arg3;
            int64_t var_78_1 = arg3;
            int32_t rax_11;
            if (arg3 != 0)
            {
                rax_11 = sub_406ee0(&var_d8, rax_1);
                if (rax_11 != 0)
                {
                    goto label_413718;
                }
                rdi_6 = *(rbx + 0xb4);
            }
            if (rsi_2 == 0)
            {
                goto label_413211;
            }
            r14 = var_d0;
        label_413211:
            var_d0 = r14;
            int64_t var_a8;
            int64_t var_98;
            if (rax_8 == 0)
            {
                if (rdi_6 > 1)
                {
                    sub_4072d0(&var_d8);
                    var_10c = 0;
                }
                else
                {
                    int64_t rcx_8 = var_98;
                    if (rdx_10 != 0)
                    {
                        int64_t rax_14 = var_a8;
                        if (arg3 <= rcx_8)
                        {
                            rcx_8 = arg3;
                        }
                        if (rcx_8 <= rax_14)
                        {
                            rcx_8 = rax_14;
                        }
                        else
                        {
                            while (true)
                            {
                                int64_t var_b0;
                                r14[rax_14] = *(rdx_9 + var_d8[(rax_14 + var_b0)]);
                                rax_14 = (rax_14 + 1);
                                if (rcx_8 == rax_14)
                                {
                                    break;
                                }
                                r14 = var_d0;
                            }
                        }
                    }
                    int64_t var_a8_1 = rcx_8;
                    int64_t var_a0_1 = rcx_8;
                    var_10c = 0;
                }
                goto label_413309;
            }
            if (rdi_6 > 1)
            {
                do
                {
                    rax_11 = sub_407480(&var_d8);
                    if (rax_11 != 0)
                    {
                        break;
                    }
                    int64_t var_a0;
                    if (arg3 <= var_a0)
                    {
                        break;
                    }
                    if (var_98 > (*(rbx + 0xb4) + var_a8))
                    {
                        break;
                    }
                    rax_11 = sub_406ee0(&var_d8, (var_98 + var_98));
                } while (rax_11 == 0);
                if (rax_11 != 0)
                {
                    goto label_413718;
                }
                var_10c = 0;
                goto label_413309;
            }
            sub_407250(&var_d8);
            var_10c = 0;
        label_413309:
            void* r12_1 = *arg1;
            arg1[6] = 0;
            *(r12_1 + 0xd8) = arg4;
            int32_t var_108;
            int64_t var_90;
            int64_t var_90_1 = (var_90 + sub_4110c0(&var_108, &var_d8, (arg4 | 0x800000)));
            void* rax_17 = sub_412e60(&var_d8, arg1, &var_108, arg4, 0, &var_10c);
            int32_t var_130;
            void var_f8;
            char var_f0_1;
            void* rax_18;
            void* rdx_19;
            int64_t* r9_2;
            void* r13_1;
            void* r14_1;
            void* r15_3;
            if (var_10c == 0)
            {
                r15_3 = (r12_1 + 0x70);
                var_130 = rax_17;
                r13_1 = (r12_1 + 0x80);
                var_f0_1 = 2;
                rax_18 = sub_409270(r15_3, r13_1, nullptr, nullptr, &var_f8);
                r9_2 = var_130;
                r14_1 = rax_18;
                rdx_19 = rax_18;
                if (r9_2 != 0)
                {
                    goto label_4133b6;
                }
                goto label_4133c9;
            }
            int64_t* r15_4;
            if (rax_17 == 0)
            {
                rbx[0xd] = 0;
                r15_4 = *arg1;
                goto label_413928;
            }
            r15_3 = (r12_1 + 0x70);
            var_130 = rax_17;
            r13_1 = (r12_1 + 0x80);
            char var_f0_2 = 2;
            r9_2 = var_130;
            r14_1 = sub_409270(r15_3, r13_1, nullptr, nullptr, &var_f8);
        label_4133b6:
            var_f0_1 = 0x10;
            rdx_19 = r14_1;
            r14_1 = sub_409270(r15_3, r13_1, r9_2, r14_1, &var_f8);
        label_4133c9:
            r15_4 = *arg1;
            rdx_19 = rdx_19 == 0;
            rax_18 = r14_1 == 0;
            rdx_19 = (rdx_19 | rax_18);
            if (rdx_19 != 0)
            {
                var_10c = 0xc;
                rbx[0xd] = 0;
                goto label_413928;
            }
            int64_t r13_2 = r15_4[1];
            rbx[0xd] = r14_1;
            int64_t rdx_21 = (r13_2 << 3);
            var_130 = rdx_21;
            int64_t r13_4 = (r13_2 * 0x18);
            int64_t rax_19 = malloc(rdx_21);
            r15_4[3] = rax_19;
            int64_t rax_20 = malloc(var_130);
            r15_4[4] = rax_20;
            int64_t rax_21 = malloc(r13_4);
            r15_4[5] = rax_21;
            var_130 = rax_21;
            int64_t rax_22 = malloc(r13_4);
            int64_t rcx_12 = var_130;
            r15_4[6] = rax_22;
            if (rax_19 == 0)
            {
            label_413920:
                var_10c = 0xc;
                goto label_413928;
            }
            if (rax_20 == 0)
            {
                goto label_413920;
            }
            if (rcx_12 == 0)
            {
                goto label_413920;
            }
            if (rax_22 == 0)
            {
                goto label_413920;
            }
            int64_t r13_5 = arg1[6];
            int64_t rax_23 = malloc((r13_5 << 3));
            r15_4[0x1c] = rax_23;
            if (rax_23 != 0)
            {
                int64_t rdx_24 = 0;
                if (r13_5 != 0)
                {
                    do
                    {
                        *(rax_23 + (rdx_24 << 3)) = rdx_24;
                        rdx_24 = (rdx_24 + 1);
                    } while (rdx_24 != r13_5);
                }
                sub_408ae0(r15_4[0xd], 0x4087a0, r15_4);
                int64_t rdx_26 = arg1[6];
                int64_t rax_24;
                int64_t* rdi_19;
                if (rdx_26 == 0)
                {
                    rdi_19 = r15_4[0x1c];
                }
                else
                {
                    rdi_19 = r15_4[0x1c];
                    rax_24 = *rdi_19;
                    if (rax_24 == 0)
                    {
                        do
                        {
                            rax_24 = (rax_24 + 1);
                            if (rax_24 == rdx_26)
                            {
                                break;
                            }
                        } while (rdi_19[rax_24] == rax_24);
                    }
                }
                if ((rdx_26 == 0 || ((rdx_26 != 0 && rax_24 == 0) && rax_24 == rdx_26)))
                {
                    free(rdi_19);
                    r15_4[0x1c] = 0;
                }
            }
            rax_11 = sub_406aa0(r15_4[0xd], 0x409620, arg1);
            if (rax_11 != 0)
            {
                goto label_413718;
            }
            rax_11 = sub_406aa0(r15_4[0xd], 0x40bb50, r15_4);
            if (rax_11 != 0)
            {
                goto label_413718;
            }
            sub_408ae0(r15_4[0xd], 0x408830, r15_4);
            int64_t rdx_31;
            rax_11 = sub_408ae0(r15_4[0xd], 0x408330, r15_4);
            if (rax_11 != 0)
            {
                goto label_413718;
            }
            char r13_6 = 0;
            int64_t r14_3 = 0;
            int64_t var_e8;
            int64_t r9_4;
            while (true)
            {
                if (r15_4[2] != r14_3)
                {
                    goto label_413566;
                }
                while (r13_6 != 0)
                {
                    do
                    {
                        r13_6 = 0;
                        r14_3 = 0;
                    label_413566:
                        r9_4 = (r14_3 * 0x18);
                        if (*((r15_4[6] + r9_4) + 8) != 0)
                        {
                            break;
                        }
                        var_130 = r9_4;
                        rax_11 = sub_408d10(&var_f8, r15_4, r14_3, 1);
                        if (rax_11 != 0)
                        {
                            break;
                        }
                        r14_3 = (r14_3 + 1);
                        if (*((r15_4[6] + var_130) + 8) != 0)
                        {
                            break;
                        }
                        r13_6 = 1;
                        free(var_e8);
                    } while (r15_4[2] == r14_3);
                    if (*((r15_4[6] + r9_4) + 8) == 0)
                    {
                        break;
                    }
                    r14_3 = (r14_3 + 1);
                    if (r15_4[2] != r14_3)
                    {
                        break;
                    }
                }
                if ((!(r13_6 != 0 && *((r15_4[6] + r9_4) + 8) == 0)))
                {
                    break;
                }
                if ((*((r15_4[6] + r9_4) + 8) == 0 && r13_6 != 0))
                {
                    if (rax_11 != 0)
                    {
                        break;
                    }
                    if ((*((r15_4[6] + r9_4) + 8) == 0 && rax_11 != 0))
                    {
                        /* nop */
                    }
                }
            }
            if (((r13_6 != 0 && *((r15_4[6] + r9_4) + 8) == 0) && rax_11 != 0))
            {
                goto label_413718;
            }
            if (r13_6 != 0)
            {
                goto label_413566;
            }
            if (((arg1[7] & 0x10) == 0 && (arg1[6] != 0 && (r15_4[0x16] & 1) != 0)))
            {
                goto label_41363b;
            }
            if (r15_4[0x13] != 0)
            {
            label_41363b:
                int64_t rax_27 = malloc((r14_3 * 0x18));
                r15_4[7] = rax_27;
                if (rax_27 == 0)
                {
                    var_10c = 0xc;
                    r15_4 = *arg1;
                    goto label_413928;
                }
                rdx_31 = 0;
                if (r14_3 == 0)
                {
                    goto label_41373d;
                }
                int64_t rax_29;
                while (true)
                {
                    int64_t rcx_13 = (rdx_31 * 3);
                    rdx_31 = (rdx_31 + 1);
                    int128_t* rax_28 = (rax_27 + (rcx_13 << 3));
                    *rax_28 = 0;
                    rax_28[1] = 0;
                    rax_29 = r15_4[2];
                    if (rax_29 <= rdx_31)
                    {
                        break;
                    }
                    rax_27 = r15_4[7];
                }
                if (rax_29 == 0)
                {
                    goto label_41373d;
                }
                int64_t var_128_3 = 0;
                int64_t rax_30 = r15_4[6];
                char rax_33;
                void* rsi_14;
                do
                {
                    int64_t r14_4 = 0;
                    int64_t rsi_13 = (var_128_3 * 0x18);
                    rsi_14 = (rsi_13 + rax_30);
                    int64_t rcx_14 = *(rsi_14 + 0x10);
                    if (*(rsi_14 + 8) > 0)
                    {
                        do
                        {
                            var_130 = rcx_14;
                            rax_33 = sub_406f80((r15_4[7] + (*(rcx_14 + (r14_4 << 3)) * 0x18)), var_128_3);
                            if (rax_33 == 0)
                            {
                                break;
                            }
                            rax_30 = r15_4[6];
                            r14_4 = (r14_4 + 1);
                            rcx_14 = var_130;
                        } while (r14_4 < *((rax_30 + rsi_13) + 8));
                        if (rax_33 == 0)
                        {
                            break;
                        }
                    }
                    var_128_3 = (var_128_3 + 1);
                } while (r15_4[2] > var_128_3);
                if ((!(*(rsi_14 + 8) > 0 && rax_33 == 0)))
                {
                    goto label_41373d;
                }
                rax_11 = 0xc;
            label_413718:
                var_10c = rax_11;
                r15_4 = *arg1;
            label_413928:
                int64_t* rdi_39 = r15_4[0xe];
                if (rdi_39 != 0)
                {
                    int64_t* r12_3;
                    do
                    {
                        r12_3 = *rdi_39;
                        free(rdi_39);
                        rdi_39 = r12_3;
                    } while (r12_3 != 0);
                }
                r15_4[0xe] = 0;
                int64_t rdi_40 = r15_4[4];
                r15_4[0x10] = 0xf;
                r15_4[0xd] = 0;
                free(rdi_40);
                r15_4[4] = 0;
                sub_408230(&var_d8);
                goto label_413981;
            }
        label_41373d:
            var_10c = 0;
            uint64_t rax_34;
            rax_34 = (rbx[0x16] >> 2);
            rdx_31 = rax_8 == 0;
            rax_34 = (rax_34 & rdx_31);
            if ((rax_34 != 0 && arg1[5] == 0))
            {
                int64_t rdi_47 = rbx[2];
                int64_t* rdx_41;
                char r9_8;
                if (rdi_47 != 0)
                {
                    char* r8_6 = *rbx;
                    r9_8 = 0;
                    int64_t rcx_20 = 0;
                    rdx_41 = r8_6;
                    while (true)
                    {
                        if (rdx_41[1] <= 0xc)
                        {
                            switch (rdx_41[1])
                            {
                                case 1:
                                {
                                    if (*rdx_41 < 0)
                                    {
                                        r13_6 = rax_34;
                                    }
                                    break;
                                }
                                case 3:
                                {
                                    void* rsi_30 = *rdx_41;
                                    if (*(rsi_30 + 0x10) != 0)
                                    {
                                        break;
                                    }
                                    if ((*(rsi_30 + 0x10) == 0 && *(rsi_30 + 0x18) != 0))
                                    {
                                        break;
                                    }
                                    break;
                                }
                                case 5:
                                {
                                    r9_8 = rax_34;
                                    break;
                                }
                                case 6:
                                {
                                    break;
                                    break;
                                }
                                case 0xc:
                                {
                                    int32_t rsi_29 = *rdx_41;
                                    bool cond:12_1 = rsi_29 <= 0x20;
                                    if (rsi_29 != 0x20)
                                    {
                                        if ((cond:12_1 && rsi_29 != 0x10))
                                        {
                                            break;
                                        }
                                        if (((!cond:12_1) && (rsi_29 != 0x40 && rsi_29 != 0x80)))
                                        {
                                            break;
                                        }
                                    }
                                    break;
                                }
                            }
                            if ((((((((((rdx_41[1] == 1 || rdx_41[1] == 2) || rdx_41[1] == 3) || rdx_41[1] == 4) || rdx_41[1] == 5) || rdx_41[1] == 8) || rdx_41[1] == 9) || rdx_41[1] == 0xa) || rdx_41[1] == 0xb) || rdx_41[1] == 0xc))
                            {
                                rcx_20 = (rcx_20 + 1);
                                rdx_41 = &rdx_41[2];
                            }
                            if ((((((((((rdx_41[1] == 5 || rdx_41[1] == 2) || rdx_41[1] == 4) || rdx_41[1] == 8) || rdx_41[1] == 9) || rdx_41[1] == 0xa) || rdx_41[1] == 0xb) || rdx_41[1] == 1) || rdx_41[1] == 0xc) || rdx_41[1] == 3))
                            {
                                if (rcx_20 == rdi_47)
                                {
                                    break;
                                }
                                continue;
                            }
                        }
                        abort();
                        /* no return */
                    }
                    if (rdx_41[1] != 6)
                    {
                        r13_6 = (r13_6 | r9_8);
                        if (r13_6 != 0)
                        {
                            rax_34 = &r8_6[(rcx_20 << 4)];
                            do
                            {
                                char rdx_45 = r8_6[8];
                                if (rdx_45 != 1)
                                {
                                    if (rdx_45 == 5)
                                    {
                                        r8_6[8] = 7;
                                    }
                                }
                                else if (*r8_6 < 0)
                                {
                                    r8_6[0xa] = (r8_6[0xa] & 0xdf);
                                }
                                r8_6 = &r8_6[0x10];
                            } while (rax_34 != r8_6);
                            goto label_413d36;
                        }
                    }
                }
                if ((rdi_47 == 0 || (rdi_47 != 0 && rdx_41[1] != 6)))
                {
                    r9_8 = 0;
                label_413d36:
                    bool cond:14_1 = rbx[0x13] > 0;
                    char rdx_46 = rbx[0x16];
                    *(rbx + 0xb4) = 1;
                    rax_34 = cond:14_1;
                    char rax_61 = ((rax_34 | r9_8) & 1);
                    rbx[0x16] = ((rax_61 + rax_61) | (rdx_46 & 0xf9));
                }
            }
            int64_t rax_37 = *(*(rbx[0xd] + 0x18) + 0x38);
            rbx[0x12] = rax_37;
            int32_t rax_39 = sub_4096a0(&var_f8, (rbx[6] + (rax_37 * 0x18)));
            int32_t r13_7 = rax_39;
            var_108 = rax_39;
            if (rax_39 == 0)
            {
                if (rbx[0x13] > 0)
                {
                    int64_t r10_1 = var_f0_1;
                    if (r10_1 > 0)
                    {
                        int64_t r9_6 = 0;
                        do
                        {
                            int64_t rdi_31 = var_e8;
                            int64_t r8_3 = *rbx;
                            int64_t rsi_19 = *(rdi_31 + (r9_6 << 3));
                            int64_t* rcx_17 = ((rsi_19 << 4) + r8_3);
                            if (rcx_17[1] == 4)
                            {
                                int64_t rdx_34 = 0;
                                int64_t* rax_42;
                                do
                                {
                                    rax_42 = ((*(rdi_31 + (rdx_34 << 3)) << 4) + r8_3);
                                    if ((rax_42[1] == 9 && *rax_42 == *rcx_17))
                                    {
                                        break;
                                    }
                                    rdx_34 = (rdx_34 + 1);
                                } while (r10_1 != rdx_34);
                                if ((rax_42[1] == 9 && *rax_42 == *rcx_17))
                                {
                                    int64_t r11_2 = **((rbx[5] + (rsi_19 * 0x18)) + 0x10);
                                    if (sub_408600(r10_1, &var_e8, r11_2) == 0)
                                    {
                                        int32_t rax_48 = sub_408b40(&var_f8, (rbx[6] + (r11_2 * 0x18)));
                                        if (rax_48 != 0)
                                        {
                                            r13_7 = rax_48;
                                            goto label_41389f;
                                        }
                                        r10_1 = var_f0_1;
                                        r9_6 = 1;
                                        if (r10_1 <= 1)
                                        {
                                            break;
                                        }
                                        continue;
                                    }
                                }
                            }
                            r9_6 = (r9_6 + 1);
                        } while (r10_1 > r9_6);
                    }
                }
                int64_t* rax_49 = sub_4098b0(&var_108, rbx, &var_f8, 0);
                rbx[9] = rax_49;
                if (rax_49 == 0)
                {
                label_413b18:
                    r13_7 = var_108;
                }
                else
                {
                    if (rax_49[0xd] >= 0)
                    {
                        rbx[0xc] = rax_49;
                        rbx[0xb] = rax_49;
                        rbx[0xa] = rax_49;
                    }
                    else
                    {
                        rbx[0xa] = sub_4098b0(&var_108, rbx, &var_f8, 1);
                        rbx[0xb] = sub_4098b0(&var_108, rbx, &var_f8, 2);
                        int64_t* rax_55 = sub_4098b0(&var_108, rbx, &var_f8, 6);
                        bool cond:11_1 = rbx[0xa] == 0;
                        rbx[0xc] = rax_55;
                        if (cond:11_1)
                        {
                            goto label_413b18;
                        }
                        if (rbx[0xb] == 0)
                        {
                            goto label_413b18;
                        }
                        if (rax_55 == 0)
                        {
                            goto label_413b18;
                        }
                    }
                    free(var_e8);
                }
            }
        label_41389f:
            void* r12_2 = *arg1;
            var_10c = r13_7;
            int64_t* rdi_36 = *(r12_2 + 0x70);
            if (rdi_36 != 0)
            {
                int64_t* r13_8;
                do
                {
                    r13_8 = *rdi_36;
                    free(rdi_36);
                    rdi_36 = r13_8;
                } while (r13_8 != 0);
            }
            *(r12_2 + 0x70) = 0;
            int64_t rdi_37 = *(r12_2 + 0x20);
            *(r12_2 + 0x80) = 0xf;
            *(r12_2 + 0x68) = 0;
            free(rdi_37);
            *(r12_2 + 0x20) = 0;
            sub_408230(&var_d8);
            rax_50 = var_10c;
            if (rax_50 != 0)
            {
                goto label_413981;
            }
        }
        else
        {
        label_4139a0:
            var_10c = 0xc;
        label_413981:
            sub_40bbe0(rbx);
            *arg1 = 0;
            rax_50 = var_10c;
            arg1[1] = 0;
        }
    }
    return rax_50;
}

int64_t sub_413d70(char* arg1, int64_t arg2, int64_t* arg3)
{
    int64_t rcx = data_61b948;
    arg3[7] = (((arg3[7] & 0xef) | (((rcx >> 0x19) & 1) << 4)) | 0x80);
    int32_t rax_8 = sub_412fc0(arg3, arg1, arg2, rcx);
    if (rax_8 == 0)
    {
        return 0;
    }
    /* tailcall */
    return dcgettext(nullptr, &*"Success"[*((rax_8 << 3) + 0x417bc0)], 5);
}

int64_t sub_413de0(int64_t arg1)
{
    int64_t rax = data_61b948;
    data_61b948 = arg1;
    return rax;
}

int64_t sub_413df0(int64_t* arg1)
{
    int64_t* rbp = arg1[4];
    void* r12 = *arg1;
    *rbp = 0;
    rbp[0x1f] = 0;
    void* rdi_1 = (&rbp[1] & 0xfffffffffffffff8);
    for (uint64_t rcx_3 = (((rbp - rdi_1) + 0x100) >> 3); rcx_3 != 0; rcx_3 = (rcx_3 - 1))
    {
        *rdi_1 = 0;
        rdi_1 = (rdi_1 + 8);
    }
    void* rsi = *(r12 + 0x48);
    sub_40c8a0(arg1, (rsi + 0x10), (rsi + 0x18), rbp);
    void* rax = *(r12 + 0x50);
    if (*(r12 + 0x48) != rax)
    {
        sub_40c8a0(arg1, (rax + 0x10), (rax + 0x18), rbp);
        rax = *(r12 + 0x48);
    }
    void* rsi_3 = *(r12 + 0x58);
    if (rsi_3 != rax)
    {
        sub_40c8a0(arg1, (rsi_3 + 0x10), (rsi_3 + 0x18), rbp);
        rax = *(r12 + 0x48);
    }
    void* rsi_5 = *(r12 + 0x60);
    if (rsi_5 != rax)
    {
        sub_40c8a0(arg1, (rsi_5 + 0x10), (rsi_5 + 0x18), rbp);
    }
    arg1[7] = (arg1[7] | 8);
    return 0;
}

int64_t sub_413ec0(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, 
    int64_t arg5, int64_t arg6, int64_t* arg7, char arg8)
{
    int64_t r8 = (arg5 + arg4);
    int64_t* r12 = arg7;
    int64_t r12_1;
    if ((arg4 < 0 || (arg4 >= 0 && arg4 > arg3)))
    {
        r12_1 = -1;
    }
    if ((arg4 >= 0 && arg4 <= arg3))
    {
        int32_t var_3c_1;
        uint32_t rax_1;
        if ((r8 > arg3 || ((r8 <= arg3 && arg5 >= 0) && arg4 > r8)))
        {
            r8 = arg3;
        label_413f2c:
            rax_1 = arg1[7];
            uint32_t rcx;
            rcx = (rax_1 >> 5);
            var_3c_1 = (rcx & 3);
            if ((r8 > arg4 && (arg1[4] != 0 && (rax_1 & 8) == 0)))
            {
                sub_413df0(arg1);
                rax_1 = arg1[7];
            }
        }
        if (((r8 <= arg3 && (arg5 < 0 || (arg5 >= 0 && arg4 <= r8))) && r8 < 0))
        {
        label_4141e8:
            rax_1 = arg1[7];
            r8 = 0;
            uint32_t rcx_7;
            rcx_7 = (rax_1 >> 5);
            var_3c_1 = (rcx_7 & 3);
        }
        if (((((r8 <= arg3 && (arg5 < 0 || (arg5 >= 0 && arg4 <= r8))) && r8 < 0) || r8 > arg3) || ((r8 <= arg3 && arg5 >= 0) && arg4 > r8)))
        {
            uint64_t rdi_1;
            int64_t r13_1;
            int64_t r14_1;
            if ((rax_1 & 0x10) == 0)
            {
                if (r12 == 0)
                {
                    goto label_414120;
                }
                int64_t rcx_1 = arg1[6];
                if ((rax_1 & 6) == 4)
                {
                    r14_1 = *r12;
                    if (r14_1 > rcx_1)
                    {
                        goto label_413f73;
                    }
                    r13_1 = r14_1;
                    if (r14_1 <= 0)
                    {
                        goto label_414120;
                    }
                    goto label_413f7d;
                }
            label_413f73:
                r14_1 = (rcx_1 + 1);
                r13_1 = r14_1;
            label_413f7d:
                rdi_1 = (r14_1 << 4);
                goto label_413f90;
            }
        label_414120:
            rdi_1 = 0x10;
            r14_1 = 1;
            r13_1 = 1;
            r12 = nullptr;
        label_413f90:
            int64_t* rax_3 = malloc(rdi_1);
            if (rax_3 == 0)
            {
                r12_1 = -2;
            }
            else
            {
                int32_t rax_5 = sub_40ef10(arg1, arg2, arg3, arg4, r8, arg6, r14_1, rax_3, var_3c_1);
                if (rax_5 == 0)
                {
                    if (r12 != 0)
                    {
                        int64_t rdx_1 = (r13_1 + 1);
                        uint32_t rax_7;
                        rax_7 = (arg1[7] >> 1);
                        int32_t rax_8 = (rax_7 & 3);
                        char r9_1;
                        if (rax_8 == 0)
                        {
                            int64_t r14_2 = (rdx_1 << 3);
                            int64_t rax_15 = malloc(r14_2);
                            r12[1] = rax_15;
                            if (rax_15 == 0)
                            {
                                goto label_4142b2;
                            }
                            int64_t rax_16 = malloc(r14_2);
                            r12[2] = rax_16;
                            if (rax_16 == 0)
                            {
                                free(rax_15);
                            label_4142b2:
                                r9_1 = 0;
                                goto label_4140c9;
                            }
                            *r12 = rdx_1;
                            r9_1 = 1;
                        }
                        else if (rax_8 != 1)
                        {
                            if (rax_8 != 2)
                            {
                                __assert_fail("regs_allocated == REGS_FIXED", "lib/regexec.c", 0x1f8, "re_copy_regs");
                                /* no return */
                            }
                            if (r14_1 > *r12)
                            {
                                __assert_fail("regs->num_regs >= nregs", "lib/regexec.c", 0x1fa, "re_copy_regs");
                                /* no return */
                            }
                            r9_1 = 2;
                        }
                        else
                        {
                            r9_1 = 1;
                            if (*r12 < rdx_1)
                            {
                                int64_t rcx_8 = (rdx_1 << 3);
                                int64_t var_50_1;
                                var_50_1 = 1;
                                int64_t rax_17 = realloc(r12[1], rcx_8);
                                if (rax_17 == 0)
                                {
                                    goto label_4142b2;
                                }
                                int64_t rax_18 = realloc(r12[2], rcx_8);
                                r9_1 = 1;
                                if (rax_18 == 0)
                                {
                                    free(rax_17);
                                    r9_1 = 0;
                                label_4140c9:
                                    char rax_12 = ((arg1[7] & 0xf9) | (r9_1 + r9_1));
                                    arg1[7] = rax_12;
                                    if ((rax_12 & 6) != 0)
                                    {
                                        goto label_4140dd;
                                    }
                                    goto label_413fe0;
                                }
                                r12[1] = rax_17;
                                r12[2] = rax_18;
                                *r12 = rdx_1;
                            }
                        }
                        int64_t rdx_2;
                        if (r13_1 <= 0)
                        {
                            rdx_2 = 0;
                            r13_1 = 0;
                        }
                        else
                        {
                            int64_t* r8_2 = r12[1];
                            int64_t* rdi_4 = r12[2];
                            rdx_2 = r13_1;
                            int64_t rax_9 = 0;
                            int64_t rsi_3 = (r13_1 << 3);
                            do
                            {
                                *(r8_2 + rax_9) = *(rax_3 + (rax_9 << 1));
                                *(rdi_4 + rax_9) = *((rax_3 + (rax_9 << 1)) + 8);
                                rax_9 = (rax_9 + 8);
                            } while (rax_9 != rsi_3);
                        }
                        if (*r12 <= rdx_2)
                        {
                            goto label_4140c9;
                        }
                        int64_t rsi_4 = r12[2];
                        int64_t rcx_5 = r12[1];
                        do
                        {
                            r13_1 = (r13_1 + 1);
                            *(rsi_4 + (rdx_2 << 3)) = -1;
                            *(rcx_5 + (rdx_2 << 3)) = -1;
                            rdx_2 = r13_1;
                        } while (*r12 > r13_1);
                        goto label_4140c9;
                    }
                label_4140dd:
                    r12_1 = *rax_3;
                    if (arg8 != 0)
                    {
                        if (arg4 != r12_1)
                        {
                            __assert_fail("pmatch[0].rm_so == start", "lib/regexec.c", 0x1bd, "re_search_stub");
                            /* no return */
                        }
                        r12_1 = (rax_3[1] - r12_1);
                    }
                    goto label_413fea;
                }
                r12_1 = -1;
                if (rax_5 == 1)
                {
                    goto label_413fea;
                }
            label_413fe0:
                r12_1 = -2;
            label_413fea:
                free(rax_3);
            }
        }
        if (((r8 <= arg3 && (arg5 < 0 || (arg5 >= 0 && arg4 <= r8))) && r8 >= 0))
        {
            if (arg5 >= 0)
            {
                goto label_413f2c;
            }
            if (arg4 > r8)
            {
                goto label_413f2c;
            }
            goto label_4141e8;
        }
    }
    return r12_1;
}

int64_t sub_414320(int64_t* arg1, void* arg2, uint64_t arg3, void* arg4, 
    uint64_t arg5, int64_t arg6, int64_t arg7, int64_t* arg8, int64_t arg9, 
    int32_t arg10)
{
    void* const r14 = arg4;
    int64_t rcx = arg6;
    int64_t rbx_1;
    if (((arg5 >> 0x3f) | (arg9 >> 0x3f)) != 0)
    {
    label_414430:
        rbx_1 = -2;
    }
    else
    {
        if (arg3 < 0)
        {
            goto label_414430;
        }
        uint64_t r15_2 = (arg3 + arg5);
        if ((arg3 + arg5))
        {
            goto label_414430;
        }
        void* const r13_1;
        if (arg5 != 0)
        {
            r13_1 = nullptr;
            if (arg3 == 0)
            {
                goto label_4143ab;
            }
            void* rax_5 = malloc(r15_2);
            r13_1 = rax_5;
            if (rax_5 == 0)
            {
                goto label_414430;
            }
            memcpy(rax_5, arg2, arg3);
            memcpy((r13_1 + arg3), r14, arg5);
            r14 = r13_1;
            goto label_4143ab;
        }
        r14 = arg2;
        r13_1 = nullptr;
    label_4143ab:
        rbx_1 = sub_413ec0(arg1, r14, r15_2, rcx, arg7, arg9, arg8, arg10);
        free(r13_1);
    }
    return rbx_1;
}

uint64_t sub_414450(int64_t* arg1, char* arg2, int32_t arg3, int64_t arg4 @ r14)
{
    int64_t var_8 = arg4;
    uint64_t rbx = arg3;
    *arg1 = 0;
    int64_t r14_2 = (((arg4 - arg4) & 0xfd4fca) + 0x3b2fc);
    arg1[1] = 0;
    arg1[2] = 0;
    int64_t rax_1 = malloc(0x100);
    arg1[4] = rax_1;
    if (rax_1 == 0)
    {
        return 0xc;
    }
    int32_t rax_2 = 0;
    int64_t r13_3 = (((rbx << 0x15) & 0x400000) | r14_2);
    if ((rbx & 4) != 0)
    {
        rax_2 = 1;
        r13_3 = ((r13_3 & 0xffffffffffffffbf) | 0x100);
    }
    arg1[5] = 0;
    arg1[7] = ((((rbx >> 3) & 1) << 4) | ((arg1[7] & 0x6f) | (rax_2 << 7)));
    int32_t rax_8 = sub_412fc0(arg1, arg2, strlen(arg2), r13_3);
    int32_t rbx_5 = rax_8;
    if (rax_8 == 0x10)
    {
        rbx_5 = 8;
    }
    if ((rax_8 == 0x10 || (rax_8 != 0x10 && rax_8 != 0)))
    {
        free(arg1[4]);
        arg1[4] = 0;
    }
    if (rax_8 == 0)
    {
        sub_413df0(arg1);
    }
    return rbx_5;
}

uint64_t sub_414560(int32_t arg1, int64_t arg2, int64_t arg3, int64_t arg4)
{
    if (arg1 > 0x10)
    {
        abort();
        /* no return */
    }
    char* rax = dcgettext(nullptr, &*"Success"[*((arg1 << 3) + 0x417bc0)], 5);
    uint64_t rbx = (strlen(rax) + 1);
    if (arg4 != 0)
    {
        uint64_t rdx = rbx;
        if (rbx > arg4)
        {
            rdx = (arg4 - 1);
            *((arg3 + arg4) - 1) = 0;
        }
        memcpy(arg3, rax, rdx);
    }
    return rbx;
}

int64_t sub_4145e0(int64_t* arg1)
{
    int64_t* rdi = *arg1;
    if (rdi != 0)
    {
        sub_40bbe0(rdi);
    }
    *arg1 = 0;
    int64_t rdi_1 = arg1[4];
    arg1[1] = 0;
    free(rdi_1);
    arg1[4] = 0;
    int64_t rax = free(arg1[5]);
    arg1[5] = 0;
    return rax;
}

uint64_t sub_414630(int64_t* arg1, char* arg2, int64_t arg3, int64_t* arg4, 
    int32_t arg5)
{
    if ((arg5 & 0xfffffff8) != 0)
    {
        return 2;
    }
    int64_t rcx;
    uint64_t rdx;
    if ((arg5 & 4) != 0)
    {
        rcx = *arg4;
        rdx = arg4[1];
    }
    else
    {
        rcx = 0;
        rdx = strlen(arg2);
    }
    int64_t var_48;
    int64_t* var_40;
    int32_t var_38;
    if ((((arg5 & 4) != 0 && (arg1[7] & 0x10) != 0) || ((arg5 & 4) == 0 && (arg1[7] & 0x10) != 0)))
    {
        var_38 = arg5;
        var_40 = nullptr;
        var_48 = 0;
    }
    if ((((arg5 & 4) != 0 && (arg1[7] & 0x10) == 0) || ((arg5 & 4) == 0 && (arg1[7] & 0x10) == 0)))
    {
        var_38 = arg5;
        var_40 = arg4;
        var_48 = arg3;
    }
    int32_t rax_2;
    rax_2 = sub_40ef10(arg1, arg2, rdx, rcx, rdx, rdx, var_48, var_40, var_38) != 0;
    return rax_2;
}

int64_t sub_4146d0(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, 
    int64_t* arg5)
{
    return sub_413ec0(arg1, arg2, arg3, arg4, 0, arg3, arg5, 1);
}

int64_t sub_4146f0(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, 
    int64_t arg5, int64_t* arg6)
{
    return sub_413ec0(arg1, arg2, arg3, arg4, arg5, arg3, arg6, 0);
}

int64_t sub_414710(int64_t* arg1, void* arg2, uint64_t arg3, void* arg4, 
    uint64_t arg5, int64_t arg6, int64_t* arg7, int64_t arg8)
{
    return sub_414320(arg1, arg2, arg3, arg4, arg5, arg6, 0, arg7, arg8, 1);
}

int64_t sub_414730(int64_t* arg1, void* arg2, uint64_t arg3, void* arg4, 
    uint64_t arg5, int64_t arg6, int64_t arg7, int64_t* arg8, int64_t arg9)
{
    return sub_414320(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, 0);
}

void sub_414750(void* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, 
    int64_t arg5)
{
    if (arg3 == 0)
    {
        *(arg1 + 0x38) = (*(arg1 + 0x38) & 0xf9);
        *arg2 = 0;
        arg2[2] = 0;
        arg2[1] = 0;
        return;
    }
    *(arg1 + 0x38) = ((*(arg1 + 0x38) & 0xfffffff9) | 2);
    *arg2 = arg3;
    arg2[1] = arg4;
    arg2[2] = arg5;
}

uint64_t sub_414790(FILE* arg1)
{
    int32_t* rbp = arg1;
    uint64_t rax = __fpending(arg1);
    int32_t rbx_1 = (*rbp & 0x20);
    uint64_t rax_1 = sub_405ae0(rbp);
    if ((rbx_1 != 0 && rax_1 == 0))
    {
        *__errno_location() = 0;
        rax_1 = 0xffffffff;
    }
    if (((rbx_1 != 0 && rax_1 != 0) || ((rbx_1 == 0 && rax_1 != 0) && rax != 0)))
    {
        rax_1 = 0xffffffff;
    }
    if (((rbx_1 == 0 && rax_1 != 0) && rax == 0))
    {
        int32_t* rax_2;
        rax_2 = *__errno_location() != 9;
        rax_1 = (-rax_2);
    }
    return rax_1;
}

int64_t sub_4147f0()
{
    void var_8;
    int64_t rcx;
    int64_t rdx;
    int32_t rdi;
    uint64_t r8;
    ssize_t r9;
    char* rax = setlocale(rdi, nullptr, rdx, rcx, r8, r9, var_8, __return_addr);
    int64_t rax_1 = 1;
    bool c = false;
    bool z = (rax & rax) == 0;
    if ((!z))
    {
        int64_t rcx_1 = 2;
        void* const rdi_1 = &data_417df0;
        char* rsi_1 = rax;
        while (rcx_1 != 0)
        {
            char temp0_1 = *rsi_1;
            char temp1_1 = *rdi_1;
            c = temp0_1 < temp1_1;
            z = temp0_1 == temp1_1;
            rsi_1 = &rsi_1[1];
            rdi_1 = (rdi_1 + 1);
            rcx_1 = (rcx_1 - 1);
            if ((!z))
            {
                break;
            }
        }
        rcx_1 = ((!z) && (!c));
        rcx_1 = (rcx_1 - 0);
        rax_1 = 0;
        bool c_1 = false;
        bool z_1 = (rcx_1 & rcx_1) == 0;
        if ((!z_1))
        {
            void* const rdi_2 = "POSIX";
            int64_t rcx_2 = 6;
            char* rsi_2 = rax;
            while (rcx_2 != 0)
            {
                char temp2_1 = *rsi_2;
                char temp3_1 = *rdi_2;
                c_1 = temp2_1 < temp3_1;
                z_1 = temp2_1 == temp3_1;
                rsi_2 = &rsi_2[1];
                rdi_2 = (rdi_2 + 1);
                rcx_2 = (rcx_2 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
            rax_1 = ((!z_1) && (!c_1));
            rax_1 = (rax_1 - 0);
            rax_1 = rax_1 != 0;
            return rax_1;
        }
    }
    return rax_1;
}

char* sub_414850()
{
    char* rax = nl_langinfo(0xe);
    char* r15 = data_61b938;
    char* rbx = rax;
    if (rax == 0)
    {
        rbx = &data_41505a;
    }
    if (r15 == 0)
    {
        char* rax_6 = getenv("CHARSETALIASDIR");
        char* r13_1 = rax_6;
        uint64_t rdi_7;
        uint64_t r12_1;
        uint64_t r14_1;
        if ((rax_6 == 0 || (rax_6 != 0 && *rax_6 == 0)))
        {
            rdi_7 = 0x73;
            r12_1 = 0x65;
            r14_1 = 0x64;
            r13_1 = "/home/dongkwan/data/scripts/gnu_…";
        }
        char* rbp_3;
        if ((rax_6 != 0 && *rax_6 != 0))
        {
            uint64_t rax_7 = strlen(rax_6);
            r12_1 = rax_7;
            r14_1 = rax_7;
            uint64_t rdi_6;
            if (rax_7 == 0)
            {
                rdi_6 = 0xe;
            }
            else if (r13_1[(rax_7 - 1)] != 0x2f)
            {
                rdi_7 = (rax_7 + 0xf);
                r12_1 = (r12_1 + 1);
            }
            else
            {
                rdi_6 = (rax_7 + 0xe);
            }
            if ((rax_7 == 0 || (rax_7 != 0 && r13_1[(rax_7 - 1)] == 0x2f)))
            {
                char* rax_8 = malloc(rdi_6);
                rbp_3 = rax_8;
                if (rax_8 == 0)
                {
                    goto label_41494c;
                }
                memcpy(rbp_3, r13_1, r14_1);
                goto label_414996;
            }
        }
        char* rax_9 = malloc(rdi_7);
        rbp_3 = rax_9;
        if (rax_9 == 0)
        {
        label_41494c:
            r15 = &data_41505a;
        }
        else
        {
            memcpy(rbp_3, r13_1, r14_1);
            rbp_3[r14_1] = 0x2f;
        label_414996:
            int64_t* r12_2 = &rbp_3[r12_1];
            *r12_2 = 0x2e74657372616863;
            *(r12_2 + 0xc) = 0x73;
            r12_2[1] = 0x61696c61;
            int32_t rax_11 = open(rbp_3, 0);
            void* var_d0_1;
            FILE* rax_12;
            if (rax_11 >= 0)
            {
                r15 = nullptr;
                rax_12 = fdopen(rax_11, "r");
                var_d0_1 = nullptr;
                if (rax_12 == 0)
                {
                    close(rax_11);
                }
                else
                {
                    while (true)
                    {
                        char* rax_14 = rax_12->_IO_read_ptr;
                        uint32_t rdi_13;
                        if (rax_14 < rax_12->_IO_read_end)
                        {
                            do
                            {
                                rax_12->_IO_read_ptr = &rax_14[1];
                                rdi_13 = *rax_14;
                            label_414a4c:
                                if ((rdi_13 - 9) <= 1)
                                {
                                    break;
                                }
                                if (rdi_13 == 0x20)
                                {
                                    break;
                                }
                                if (rdi_13 == 0x23)
                                {
                                    break;
                                }
                                ungetc(rdi_13, rax_12);
                                int64_t var_b8;
                                int64_t var_78;
                                if (fscanf(rax_12, "%50s %50s", &var_b8, &var_78) <= 1)
                                {
                                    goto label_414bdb;
                                }
                                int64_t* rcx_2 = &var_b8;
                            label_414a88:
                                int32_t rdx_5 = *rcx_2;
                                rcx_2 = (rcx_2 + 4);
                                uint32_t rax_20 = (((rdx_5 - 0x1010101) & (!rdx_5)) & 0x80808080);
                                if (rax_20 == 0)
                                {
                                    goto label_414a88;
                                }
                                uint32_t rdx_8 = (rax_20 >> 0x10);
                                int32_t temp0_1 = (rax_20 & 0x8080);
                                bool cond:2_1 = temp0_1 == 0;
                                if (temp0_1 == 0)
                                {
                                    rax_20 = rdx_8;
                                }
                                void* rdx_9 = (rcx_2 + 2);
                                if (cond:2_1)
                                {
                                    rcx_2 = rdx_9;
                                }
                                char rdx_10 = rax_20;
                                int64_t* rdx_11 = &var_78;
                                void* rcx_4 = ((rcx_2 - 3) - &var_b8);
                            label_414ac2:
                                int32_t rsi_5 = *rdx_11;
                                rdx_11 = (rdx_11 + 4);
                                uint32_t rax_23 = (((rsi_5 - 0x1010101) & (!rsi_5)) & 0x80808080);
                                if (rax_23 == 0)
                                {
                                    goto label_414ac2;
                                }
                                uint32_t rsi_8 = (rax_23 >> 0x10);
                                int32_t temp2_1 = (rax_23 & 0x8080);
                                bool cond:3_1 = temp2_1 == 0;
                                if (temp2_1 == 0)
                                {
                                    rax_23 = rsi_8;
                                }
                                void* rsi_9 = (rdx_11 + 2);
                                if (cond:3_1)
                                {
                                    rdx_11 = rsi_9;
                                }
                                char rsi_10 = rax_23;
                                void* rdx_13 = ((rdx_11 - 3) - &var_78);
                                void* rax_24 = (rcx_4 + rdx_13);
                                void* var_c0 = rdx_13;
                                char* rax_25;
                                void* rcx_6;
                                void* rdx_14;
                                if (var_d0_1 != 0)
                                {
                                    void* rax_31 = (rax_24 + var_d0_1);
                                    var_d0_1 = (rax_31 + 2);
                                    rax_25 = realloc(r15, (rax_31 + 3));
                                    rdx_14 = var_c0;
                                    rcx_6 = rcx_4;
                                }
                                else
                                {
                                    var_d0_1 = (rax_24 + 2);
                                    rax_25 = malloc((rax_24 + 3));
                                    rcx_6 = rcx_4;
                                    rdx_14 = var_c0;
                                }
                                if (rax_25 == 0)
                                {
                                    char* rdi_26 = r15;
                                    r15 = &data_41505a;
                                    free(rdi_26);
                                    sub_405ae0(rax_12);
                                    goto label_4149d7;
                                }
                                int32_t rcx_7 = (rcx_6 + 1);
                                void* rdi_17 = (var_d0_1 - rdx_14);
                                void* rsi_13 = (((-2 - rcx_6) + rdi_17) + rax_25);
                                if (rcx_7 >= 8)
                                {
                                    *rsi_13 = var_b8;
                                    uint64_t r9_3 = rcx_7;
                                    *((rsi_13 + r9_3) - 8) = *(&var_c0 + r9_3);
                                    void* r9_5 = ((rsi_13 + 8) & 0xfffffffffffffff8);
                                    void* rsi_16 = (rsi_13 - r9_5);
                                    int64_t* r10_2 = (&var_b8 - rsi_16);
                                    int32_t rcx_11 = ((rcx_7 + rsi_16) & 0xfffffff8);
                                    if (rcx_11 >= 8)
                                    {
                                        int32_t rcx_12 = (rcx_11 & 0xfffffff8);
                                        int32_t rsi_17 = 0;
                                    label_414c9b:
                                        uint64_t r8_1 = rsi_17;
                                        rsi_17 = (rsi_17 + 8);
                                        *(r9_5 + r8_1) = *(r10_2 + r8_1);
                                        if (rsi_17 < rcx_12)
                                        {
                                            goto label_414c9b;
                                        }
                                    }
                                }
                                else if ((rcx_7 & 4) != 0)
                                {
                                    uint64_t rcx_15 = rcx_7;
                                    *rsi_13 = var_b8;
                                    *((rsi_13 + rcx_15) - 4) = *(&*var_c0[4] + rcx_15);
                                }
                                else if (rcx_7 != 0)
                                {
                                    *rsi_13 = var_b8;
                                    if ((rcx_7 & 2) != 0)
                                    {
                                        uint64_t rcx_16 = rcx_7;
                                        *((rsi_13 + rcx_16) - 2) = *(&*var_c0[6] + rcx_16);
                                    }
                                }
                                int32_t rdx_15 = (rdx_14 + 1);
                                void* rcx_8 = ((rax_25 + rdi_17) - 1);
                                if (rdx_15 >= 8)
                                {
                                    *rcx_8 = var_78;
                                    uint64_t rsi_19 = rdx_15;
                                    void var_80;
                                    *((rcx_8 + rsi_19) - 8) = *(&var_80 + rsi_19);
                                    void* rdi_24 = ((rcx_8 + 8) & 0xfffffffffffffff8);
                                    void* rcx_13 = (rcx_8 - rdi_24);
                                    int64_t* r9_6 = (&var_78 - rcx_13);
                                    int32_t rdx_19 = ((rdx_15 + rcx_13) & 0xfffffff8);
                                    if (rdx_19 >= 8)
                                    {
                                        int32_t rdx_20 = (rdx_19 & 0xfffffff8);
                                        int32_t rcx_14 = 0;
                                    label_414ce9:
                                        uint64_t rsi_20 = rcx_14;
                                        rcx_14 = (rcx_14 + 8);
                                        *(rdi_24 + rsi_20) = *(r9_6 + rsi_20);
                                        if (rcx_14 < rdx_20)
                                        {
                                            goto label_414ce9;
                                        }
                                    }
                                }
                                else if ((rdx_15 & 4) != 0)
                                {
                                    uint64_t rdx_21 = rdx_15;
                                    *rcx_8 = var_78;
                                    void var_7c;
                                    *((rcx_8 + rdx_21) - 4) = *(&var_7c + rdx_21);
                                }
                                else if (rdx_15 != 0)
                                {
                                    *rcx_8 = var_78;
                                    if ((rdx_15 & 2) != 0)
                                    {
                                        uint64_t rsi_23 = rdx_15;
                                        void var_7a;
                                        *((rcx_8 + rsi_23) - 2) = *(&var_7a + rsi_23);
                                    }
                                }
                                r15 = rax_25;
                                rax_14 = rax_12->_IO_read_ptr;
                            } while (rax_14 < rax_12->_IO_read_end);
                            if (((!((rdi_13 - 9) > 1 && rdi_13 == 0x23)) && (rdi_13 - 9) <= 1))
                            {
                                continue;
                            }
                            if (((rdi_13 - 9) > 1 && rdi_13 == 0x23))
                            {
                                int32_t rax_29;
                                bool rdx_17;
                                do
                                {
                                    char* rax_30 = rax_12->_IO_read_ptr;
                                    if (rax_30 < rax_12->_IO_read_end)
                                    {
                                        rax_12->_IO_read_ptr = &rax_30[1];
                                        rax_29 = *rax_30;
                                        rdx_17 = true;
                                    }
                                    else
                                    {
                                        rax_29 = __uflow(rax_12);
                                        rdx_17 = rax_29 != 0xffffffff;
                                    }
                                    if (rax_29 == 0xa)
                                    {
                                        break;
                                    }
                                } while (rdx_17 != 0);
                                if (rax_29 == 0xffffffff)
                                {
                                    break;
                                }
                                continue;
                            }
                        }
                        uint32_t rax_26 = __uflow(rax_12);
                        rdi_13 = rax_26;
                        if (rax_26 != 0xffffffff)
                        {
                            goto label_414a4c;
                        }
                        break;
                    }
                label_414bdb:
                    sub_405ae0(rax_12);
                    if (var_d0_1 != 0)
                    {
                        *(r15 + var_d0_1) = 0;
                    }
                }
            }
            if ((((rax_11 >= 0 && rax_12 == 0) || rax_11 < 0) || ((rax_11 >= 0 && rax_12 != 0) && var_d0_1 == 0)))
            {
                r15 = &data_41505a;
            }
        label_4149d7:
            free(rbp_3);
        }
        data_61b938 = r15;
    }
    char rbp_2 = *r15;
    if (rbp_2 != 0)
    {
        while (true)
        {
            if ((strcmp(rbx, r15) != 0 && (rbp_2 != 0x2a || (rbp_2 == 0x2a && r15[1] != 0))))
            {
                void* rbp_1 = &r15[(strlen(r15) + 1)];
                r15 = ((rbp_1 + strlen(rbp_1)) + 1);
                rbp_2 = *r15;
                if (rbp_2 == 0)
                {
                    break;
                }
                continue;
            }
            rbx = &r15[(strlen(r15) + 1)];
            break;
        }
    }
    if (*rbx == 0)
    {
        rbx = "ASCII";
    }
    return rbx;
}

void init()
{
    _init();
}

void fini()
{
    return;
}

int64_t sub_414e30(void (* arg1)(void*))
{
    int64_t rdx = data_61b248;
    /* tailcall */
    return __cxa_atexit(arg1, nullptr, rdx);
}

int64_t sub_414e48(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rbx = &data_61ae30;
    while (true)
    {
        int64_t rax_1 = *rbx;
        if (rax_1 == -1)
        {
            break;
        }
        rax_1();
        rbx = (rbx - 8);
    }
    return arg3;
}

