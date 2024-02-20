int64_t sub_4017c0()
{
    int64_t var_8 = data_60f008;
    /* jump -> data_60f010 */
}

int64_t sub_4017d6()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_4017c0();
}

int64_t sub_4017e6()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_4017c0();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    int64_t r15 = 0;
    char* r14 = nullptr;
    int64_t r13 = 0;
    uint64_t r12 = 0;
    int64_t rbp = argc;
    int64_t var_e0 = 0;
    int64_t rcx;
    int64_t rdx;
    uint64_t r8;
    ssize_t r9;
    rcx = sub_403510(*argv);
    void var_118;
    int32_t var_110;
    setlocale(6, &data_40c8fc[0x1b], rdx, rcx, r8, r9, var_118, var_110);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_…");
    textdomain("coreutils");
    sub_40a910(sub_402d90);
    data_60f338 = 0;
    data_60f339 = 0;
    data_60f33a = 0;
    while (true)
    {
        int32_t rax_1 = getopt_long(rbp, argv, "Rcfvr::w::x::X::s::t::u::g::o::a…", &data_40b3c0, nullptr);
        char* var_100;
        if (rax_1 == 0xffffffff)
        {
            if (r15 == 0)
            {
                int64_t rax_37 = data_60f2dc;
                int32_t rdx_21;
                if (r14 == 0)
                {
                    rdx_21 = (rax_37 + 1);
                    r14 = argv[rax_37];
                    data_60f2dc = rdx_21;
                    if ((rdx_21 >= rbp && r14 == 0))
                    {
                        goto label_402608;
                    }
                }
                if ((r14 != 0 && rbp <= rax_37))
                {
                    rdx_21 = rax_37;
                }
                if (((r14 != 0 && rbp <= rax_37) || (r14 == 0 && rdx_21 >= rbp)))
                {
                    if (argv[(rdx_21 - 1)] != r14)
                    {
                        goto label_402608;
                    }
                    error(0, 0, dcgettext(nullptr, "missing operand after %s", 5), sub_405130(argv[(rbp - 1)]));
                }
                if (((r14 == 0 && rdx_21 < rbp) || (r14 != 0 && rbp > rax_37)))
                {
                    int16_t* rax_38 = sub_402fc0(r14);
                    data_60f340 = rax_38;
                    if (rax_38 == 0)
                    {
                        error(0, 0, dcgettext(nullptr, "invalid mode: %s", 5), sub_405130(r14));
                        sub_4029c0(1);
                        /* no return */
                    }
                    data_60f33c = umask(0);
                label_401f6b:
                    int32_t* rax_9 = __errno_location();
                    r12 = (r12 & data_60f33a);
                    uint64_t rbx_1;
                    if (r12 == 0)
                    {
                        data_60f330 = 0;
                    }
                    else
                    {
                        int64_t* rax_76 = sub_405150(&data_60f320);
                        data_60f330 = rax_76;
                        if (rax_76 == 0)
                        {
                            rbx_1 = sub_404ee0(4, "/");
                            error(1, *rax_9, dcgettext(nullptr, "failed to get attributes of %s", 5), rbx_1);
                            goto label_4026e2;
                        }
                    }
                    r14 = nullptr;
                    rbx_1 = 1;
                    rbp = sub_4059d0(&argv[data_60f2dc], 0x411, 0);
                    void var_c7;
                    var_100 = &var_c7;
                    int64_t rax_12 = fts_read(rbp);
                    r13 = rax_12;
                    if (rax_12 != 0)
                    {
                        do
                        {
                            r12 = *(rax_12 + 0x38);
                            uint32_t r15_1;
                            char* rsi_16;
                            int64_t r15_7;
                            int32_t var_10c;
                            void var_d4;
                            void var_d3;
                            void var_c8;
                            if (*(rax_12 + 0x70) > 0xd)
                            {
                            label_40212d:
                                int64_t rax_21 = data_60f330;
                                if (rax_21 == 0)
                                {
                                label_402149:
                                    int32_t rdi_15 = *(r13 + 0x90);
                                    int64_t rax_22 = *(r13 + 0x30);
                                    int32_t r15_4 = (rdi_15 & 0xf000);
                                    var_10c = rdi_15;
                                    int32_t rax_23 = sub_403390(rdi_15, r15_4 == 0x4000, data_60f33c, data_60f340, nullptr);
                                    var_110 = rax_23;
                                    if (r15_4 == 0xa000)
                                    {
                                        int32_t rax_40 = data_60f250;
                                        if (rax_40 == 2)
                                        {
                                            goto label_402365;
                                        }
                                        if (rax_40 != 0)
                                        {
                                            goto label_402365;
                                        }
                                        r15_1 = 1;
                                        __printf_chk(1, dcgettext(nullptr, "neither symbolic link %s nor ref…", 5), sub_404ee0(4, r12));
                                        goto label_4020f8;
                                    }
                                    if (fchmodat(*(rbp + 0x2c), rax_22, rax_23, 0) != 0)
                                    {
                                        if (data_60f339 == 0)
                                        {
                                            error(0, *rax_9, dcgettext(nullptr, "changing permissions of %s", 5), sub_404ee0(4, r12));
                                        }
                                        goto label_402058;
                                    }
                                    if (data_60f250 != 2)
                                    {
                                        int32_t rax_44 = var_110;
                                        int32_t rcx_13;
                                        *rcx_13[1] = (*var_110[1] & 0xe);
                                        int32_t rax_63;
                                        if (*rcx_13[1] != 0)
                                        {
                                            rax_63 = __fxstatat(1, *(rbp + 0x2c), rax_22, &var_c8, 0);
                                            int32_t var_b0;
                                            if (rax_63 == 0)
                                            {
                                                rax_44 = var_b0;
                                            }
                                            else
                                            {
                                            label_4026e2:
                                                if (data_60f339 == 0)
                                                {
                                                    error(0, *rax_9, dcgettext(nullptr, "getting new attributes of %s", 5), sub_404ee0(4, r12));
                                                }
                                            }
                                        }
                                        if ((((*rcx_13[1] != 0 && rax_63 == 0) || *rcx_13[1] == 0) && ((rax_44 ^ var_10c) & 0xfff) != 0))
                                        {
                                            sub_402e30(var_110, &var_d4);
                                            char var_ca_2 = r14;
                                            sub_402e30(var_10c, &var_c8);
                                            char var_be_2 = r14;
                                            char* rax_46 = dcgettext(nullptr, "mode of %s changed from %04lo (%…", 5);
                                            int64_t rax_47;
                                            int64_t rdi_20;
                                            rax_47 = sub_404ee0(4, r12);
                                            __printf_chk(1, rax_46, rax_47, (var_10c & 0xfff), var_100, (var_110 & 0xfff), &var_d3, rdi_20);
                                        }
                                        if ((((((*rcx_13[1] != 0 && rax_63 == 0) || *rcx_13[1] == 0) && ((rax_44 ^ var_10c) & 0xfff) == 0) || (*rcx_13[1] != 0 && rax_63 != 0)) && data_60f250 == 0))
                                        {
                                            sub_402e30(var_110, &var_d4);
                                            char var_ca_4 = r14;
                                            sub_402e30(var_10c, &var_c8);
                                            char var_be_4 = r14;
                                            __printf_chk(1, dcgettext(nullptr, "mode of %s retained as %04lo (%s…", 5), sub_404ee0(4, r12), (var_110 & 0xfff), &var_d3);
                                        }
                                    }
                                    r15_1 = data_60f338;
                                    if (r15_1 != 0)
                                    {
                                        int32_t rax_51 = sub_403390(var_10c, (var_10c & 0xf000) == 0x4000, 0, data_60f340, nullptr);
                                        if ((var_110 & (!rax_51)) != 0)
                                        {
                                            int64_t var_108;
                                            var_108 = rax_51;
                                            r15_1 = 0;
                                            sub_402e30(var_110, &var_d4);
                                            sub_402e30(var_108, &var_c8);
                                            char var_be_3 = r14;
                                            char var_ca_3 = r14;
                                            error(0, 0, dcgettext(nullptr, "%s: new permissions are %s, not …", 5), sub_404fb0(0, 3, r12), &var_d3, var_100);
                                        }
                                        goto label_4020f8;
                                    }
                                label_402365:
                                    r15_1 = 1;
                                label_4020f8:
                                    if (data_60f33a == 0)
                                    {
                                        fts_set(rbp, r13, 4);
                                    }
                                }
                                else
                                {
                                    if (*(r13 + 0x80) != *rax_21)
                                    {
                                        goto label_402149;
                                    }
                                    if (*(r13 + 0x78) != *(rax_21 + 8))
                                    {
                                        goto label_402149;
                                    }
                                    if (strcmp(r12, "/") != 0)
                                    {
                                        char* rax_88 = sub_404e00(1, 4, "/");
                                        error(0, 0, dcgettext(nullptr, "it is dangerous to operate recur…", 5), sub_404e00(0, 4, r12), rax_88);
                                    }
                                    else
                                    {
                                        error(0, 0, dcgettext(nullptr, "it is dangerous to operate recur…", 5), sub_404ee0(4, r12));
                                    }
                                    r15_1 = 0;
                                    error(0, 0, dcgettext(nullptr, "use --no-preserve-root to overri…", 5));
                                    fts_set(rbp, r13, 4);
                                    fts_read(rbp);
                                }
                            }
                            else
                            {
                                switch (*(rax_12 + 0x70))
                                {
                                    case 0:
                                    case 1:
                                    case 3:
                                    case 5:
                                    case 8:
                                    case 9:
                                    case 0xb:
                                    case 0xc:
                                    {
                                        goto label_40212d;
                                    }
                                    case 2:
                                    {
                                        if (sub_405a20(rbp, r13) == 0)
                                        {
                                            goto label_40212d;
                                        }
                                        r15_1 = 0;
                                        error(0, 0, dcgettext(nullptr, "WARNING: Circular directory stru…", 5), sub_404fb0(0, 3, r12));
                                        break;
                                    }
                                    case 4:
                                    {
                                        if (data_60f339 != 0)
                                        {
                                            goto label_402058;
                                        }
                                        rsi_16 = "cannot read directory %s";
                                        r15_7 = sub_404ee0(4, r12);
                                    label_40228e:
                                        error(0, *(r13 + 0x40), dcgettext(nullptr, rsi_16, 5), r15_7);
                                    label_402058:
                                        if (data_60f250 == 2)
                                        {
                                        label_402310:
                                            r15_1 = 0;
                                            goto label_4020f8;
                                        }
                                        if (data_60f250 != 0)
                                        {
                                            goto label_402310;
                                        }
                                        sub_402e30(var_110, &var_d4);
                                        char var_ca_1 = r14;
                                        sub_402e30(var_10c, &var_c8);
                                        char var_be_1 = r14;
                                        char* rax_17 = dcgettext(nullptr, "failed to change mode of %s from…", 5);
                                        int64_t rax_18;
                                        int64_t rdx_3;
                                        rax_18 = sub_404ee0(4, r12);
                                        r15_1 = 0;
                                        __printf_chk(1, rax_17, rax_18, (var_10c & 0xfff), var_100, (var_110 & 0xfff), &var_d3, rdx_3);
                                        goto label_4020f8;
                                    }
                                    case 6:
                                    {
                                        r15_1 = 1;
                                        break;
                                    }
                                    case 7:
                                    {
                                        if (data_60f339 == 0)
                                        {
                                            error(0, *(r13 + 0x40), "%s", sub_404fb0(0, 3, r12));
                                        }
                                        goto label_402058;
                                    }
                                    case 0xa:
                                    {
                                        if (*(r13 + 0x58) != 0)
                                        {
                                        label_402252:
                                            if (data_60f339 != 0)
                                            {
                                                goto label_402058;
                                            }
                                            rsi_16 = "cannot access %s";
                                            r15_7 = sub_404ee0(4, r12);
                                            goto label_40228e;
                                        }
                                        if (*(r13 + 0x20) != 0)
                                        {
                                            goto label_402252;
                                        }
                                        *(r13 + 0x20) = 1;
                                        r15_1 = 1;
                                        fts_set(rbp, r13, 1);
                                        break;
                                    }
                                    case 0xd:
                                    {
                                        if (data_60f339 == 0)
                                        {
                                            error(0, 0, dcgettext(nullptr, "cannot operate on dangling symli…", 5), sub_404ee0(4, r12));
                                        }
                                        goto label_402058;
                                    }
                                }
                            }
                            rbx_1 = (rbx_1 & r15_1);
                            rax_12 = fts_read(rbp);
                            r13 = rax_12;
                        } while (rax_12 != 0);
                    }
                    if (*rax_9 != 0)
                    {
                        rbx_1 = data_60f339;
                        if (rbx_1 == 0)
                        {
                            error(0, *rax_9, dcgettext(nullptr, "fts_read failed", 5));
                        }
                        else
                        {
                            rbx_1 = 0;
                        }
                    }
                    if (fts_close(rbp) != 0)
                    {
                        rbx_1 = 0;
                        error(0, *rax_9, dcgettext(nullptr, "fts_close failed", 5));
                    }
                    return (rbx_1 ^ 1);
                }
            }
            else
            {
                char const* const rsi_33;
                if (r14 == 0)
                {
                    if (rbp <= data_60f2dc)
                    {
                    label_402608:
                        rsi_33 = "missing operand";
                        goto label_40261d;
                    }
                    int16_t* rax_8 = sub_403330(r15);
                    data_60f340 = rax_8;
                    if (rax_8 == 0)
                    {
                        int64_t rax_98 = sub_404ee0(4, r15);
                        void (* rdx_35)();
                        int64_t rsi_45;
                        int64_t rdi_32;
                        rdx_35 = error(1, *__errno_location(), dcgettext(nullptr, "failed to get attributes of %s", 5), rax_98);
                        /* tailcall */
                        return _start(rdi_32, rsi_45, rdx_35);
                    }
                    goto label_401f6b;
                }
                rsi_33 = "cannot combine mode and --refere…";
            label_40261d:
                error(0, 0, dcgettext(nullptr, rsi_33, 5));
            }
            break;
        }
        bool cond:0_1 = rax_1 <= 0x63;
        if (rax_1 == 0x63)
        {
            data_60f250 = 1;
        }
        else
        {
            if ((!cond:0_1))
            {
                bool cond:1_1 = rax_1 <= 0x76;
                if (rax_1 == 0x76)
                {
                    data_60f250 = 0;
                    continue;
                }
                else if (cond:1_1)
                {
                    bool cond:5_1 = rax_1 > 0x6f;
                    if (rax_1 != 0x6f)
                    {
                        if ((cond:5_1 && rax_1 < 0x72))
                        {
                            break;
                        }
                        if ((!cond:5_1))
                        {
                            if (rax_1 == 0x66)
                            {
                                data_60f339 = 1;
                                continue;
                            }
                            if ((rax_1 != 0x66 && rax_1 != 0x67))
                            {
                                break;
                            }
                        }
                    }
                }
                else
                {
                    bool cond:6_1 = rax_1 <= 0x80;
                    if (rax_1 == 0x80)
                    {
                        r12 = 0;
                        continue;
                    }
                    else
                    {
                        if ((cond:6_1 && rax_1 > 0x78))
                        {
                            break;
                        }
                        if ((!cond:6_1))
                        {
                            if (rax_1 == 0x81)
                            {
                                r12 = 1;
                                continue;
                            }
                            else
                            {
                                if (rax_1 != 0x82)
                                {
                                    break;
                                }
                                r15 = data_60f4e8;
                                continue;
                            }
                        }
                    }
                }
            }
            else if (rax_1 > 0x37)
            {
                bool cond:2_1 = rax_1 <= 0x52;
                if (rax_1 == 0x52)
                {
                    data_60f33a = 1;
                    continue;
                }
                else
                {
                    if ((cond:2_1 && rax_1 != 0x3d))
                    {
                        break;
                    }
                    if (((!cond:2_1) && (rax_1 != 0x58 && rax_1 != 0x61)))
                    {
                        break;
                    }
                }
            }
            else if (rax_1 < 0x30)
            {
                bool cond:4_1 = rax_1 > 0xffffff7e;
                if (rax_1 == 0xffffff7e)
                {
                    sub_4029c0(0);
                    /* no return */
                }
                if ((cond:4_1 && (rax_1 - 0x2b) > 1))
                {
                    break;
                }
                if ((!cond:4_1))
                {
                    if (rax_1 == 0xffffff7d)
                    {
                        int64_t var_128_1 = 0;
                        sub_405600(stdout, "chmod", "GNU coreutils", data_60f258);
                        exit(0);
                        /* no return */
                    }
                    break;
                }
            }
            char* r8_2 = argv[(data_60f2dc - 1)];
            uint64_t rax_5 = strlen(r8_2);
            char* r8_3 = r8_2;
            int64_t rcx_2;
            rcx_2 = r13 != 0;
            uint64_t rdx_1 = rax_5;
            int64_t rcx_3 = (rcx_2 + r13);
            int64_t r9_2 = (rax_5 + rcx_3);
            if (var_e0 <= r9_2)
            {
                var_100 = r8_3;
                var_e0 = (r9_2 + 1);
                rdx_1 = rax_5;
                r14 = sub_4058a0(r14, &var_e0);
                r8_3 = var_100;
            }
            r14[r13] = 0x2c;
            memcpy(&r14[rcx_3], r8_3, (rdx_1 + 1));
            data_60f338 = 1;
            r13 = r9_2;
        }
    }
    sub_4029c0(1);
    /* no return */
}

int64_t _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t rax;
    int64_t var_8 = rax;
    __libc_start_main(main, __return_addr, &arg_8, init, fini, arg3, &var_8);
    /* no return */
}

void sub_40290b()
{
    return;
}

int64_t sub_40292a()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    return (COMBINE(rdx, rax) / 2);
}

void sub_402961()
{
    if (data_60f308 != 0)
    {
        return;
    }
    while (true)
    {
        int64_t rax_1 = data_60f310;
        if (rax_1 >= 0)
        {
            break;
        }
        data_60f310 = (rax_1 + 1);
        *(0x60ee40 + ((rax_1 + 1) << 3))();
    }
    sub_40290b();
    data_60f308 = 1;
}

int64_t j_sub_40292a()
{
    /* tailcall */
    return sub_40292a();
}

int64_t sub_4029c0(int32_t arg1) __noreturn
{
    int64_t rbp = data_60f358;
    if (arg1 != 0)
    {
        __fprintf_chk(stderr, 1, dcgettext(nullptr, "Try '%s --help' for more informa…", 5), rbp);
    }
    else
    {
        __printf_chk(1, dcgettext(nullptr, "Usage: %s [OPTION]... MODE[,MODE…", 5), rbp, rbp, rbp);
        fputs_unlocked(dcgettext(nullptr, "Change the mode of each FILE to …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -c, --changes          like ve…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --no-preserve-root  do not…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --reference=RFILE  use RFI…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -R, --recursive        change …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --help     display this he…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --version  output version …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\nEach MODE is of the form '[ugo…", 5), stdout);
        void* const var_88 = &data_40a96a;
        void* const* rax_12 = &var_88;
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
            rax_12 = &rax_12[2];
            void* const rdi_10 = *rax_12;
            c_1 = false;
            z_1 = (rdi_10 & rdi_10) == 0;
            if (z_1)
            {
                break;
            }
            void* const rsi_10 = "chmod";
            int64_t rcx_2 = 6;
            while (rcx_2 != 0)
            {
                char temp0_1 = *rsi_10;
                char temp1_1 = *rdi_10;
                c_1 = temp0_1 < temp1_1;
                z_1 = temp0_1 == temp1_1;
                rsi_10 = (rsi_10 + 1);
                rdi_10 = (rdi_10 + 1);
                rcx_2 = (rcx_2 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
        } while ((((!z_1) && (!c_1)) - 0) != 0);
        void* const rbp_1 = rax_12[1];
        char* rax_23;
        int32_t rax_24;
        void* const r12_1;
        if (rbp_1 == 0)
        {
            int64_t rcx_5;
            int64_t rdx_5;
            uint64_t r8_3;
            ssize_t r9_2;
            rcx_5 = __printf_chk(1, dcgettext(nullptr, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            rax_23 = setlocale(5, nullptr, rdx_5, rcx_5, r8_3, r9_2, var_88, "test invocation");
            if (rax_23 != 0)
            {
                rax_24 = strncmp(rax_23, &data_40a9ee, 3);
                if (rax_24 != 0)
                {
                    rbp_1 = "chmod";
                }
            }
            if ((rax_23 == 0 || (rax_23 != 0 && rax_24 == 0)))
            {
                rbp_1 = "chmod";
                r12_1 = " invocation";
                __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/cor…", "chmod");
            }
        }
        else
        {
            int64_t rcx_3;
            int64_t rdx_3;
            uint64_t r8_2;
            ssize_t r9_1;
            rcx_3 = __printf_chk(1, dcgettext(nullptr, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            char* rax_15 = setlocale(5, nullptr, rdx_3, rcx_3, r8_2, r9_1, var_88, "test invocation");
            if (rax_15 == 0)
            {
                goto label_402c58;
            }
            if (strncmp(rax_15, &data_40a9ee, 3) == 0)
            {
                goto label_402c58;
            }
        }
        if ((((rbp_1 == 0 && rax_23 != 0) && rax_24 != 0) || rbp_1 != 0))
        {
            __printf_chk(1, dcgettext(nullptr, "Report %s translation bugs to <h…", 5), "chmod");
        label_402c58:
            r12_1 = " invocation";
            __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/cor…", "chmod");
            if (rbp_1 != "chmod")
            {
                r12_1 = &data_40c8fc[0x1b];
            }
        }
        __printf_chk(1, dcgettext(nullptr, "or available locally via: info '…", 5), rbp_1, r12_1);
    }
    exit(arg1);
    /* no return */
}

int64_t sub_402d70(int64_t arg1)
{
    data_60f350 = arg1;
}

int64_t sub_402d80(char arg1)
{
    data_60f348 = arg1;
}

void sub_402d90(void* arg1)
{
    int32_t rax = sub_408b70(stdout);
    int32_t* rax_1;
    if (rax != 0)
    {
        rax_1 = __errno_location();
        if ((data_60f348 == 0 || (data_60f348 != 0 && *rax_1 != 0x20)))
        {
            char* rax_3 = dcgettext(nullptr, "write error", 5);
            int64_t rdi_2 = data_60f350;
            if (rdi_2 == 0)
            {
                error(0, *rax_1, "%s", rax_3);
            }
            else
            {
                error(0, *rax_1, "%s: %s", sub_404f80(rdi_2), rax_3);
            }
        }
    }
    if (((rax == 0 || ((rax != 0 && data_60f348 != 0) && *rax_1 == 0x20)) && sub_408b70(stderr) == 0))
    {
        return;
    }
    _exit(data_60f260);
    /* no return */
}

uint64_t sub_402e30(int32_t arg1, char* arg2)
{
    char rax = 0x2d;
    int32_t rdx = (arg1 & 0xf000);
    if (rdx != 0x8000)
    {
        rax = 0x64;
        if (rdx != 0x4000)
        {
            rax = 0x62;
            if (rdx != 0x6000)
            {
                rax = 0x63;
                if (rdx != 0x2000)
                {
                    rax = 0x6c;
                    if (rdx != 0xa000)
                    {
                        rax = 0x70;
                        if (rdx != 0x1000)
                        {
                            rax = 0x73;
                            if (rdx != 0xc000)
                            {
                                rax = 0x3f;
                            }
                        }
                    }
                }
            }
        }
    }
    *arg2 = rax;
    int32_t rax_2 = (arg1 & 0x100);
    arg2[1] = (((rax_2 - rax_2) & 0xbb) + 0x72);
    int32_t rax_7 = (arg1 & 0x80);
    arg2[2] = (((rax_7 - rax_7) & 0xb6) + 0x77);
    int32_t rax_12 = (arg1 & 0x40);
    char rax_13 = (rax_12 - rax_12);
    char rax_15;
    if ((arg1 & 0x800) == 0)
    {
        rax_15 = ((rax_13 & 0xb5) + 0x78);
    }
    else
    {
        rax_15 = ((rax_13 & 0xe0) + 0x73);
    }
    arg2[3] = rax_15;
    int32_t rax_17 = (arg1 & 0x20);
    arg2[4] = (((rax_17 - rax_17) & 0xbb) + 0x72);
    int32_t rax_22 = (arg1 & 0x10);
    arg2[5] = (((rax_22 - rax_22) & 0xb6) + 0x77);
    int32_t rax_27 = (arg1 & 8);
    char rax_28 = (rax_27 - rax_27);
    char rax_30;
    if ((arg1 & 0x400) == 0)
    {
        rax_30 = ((rax_28 & 0xb5) + 0x78);
    }
    else
    {
        rax_30 = ((rax_28 & 0xe0) + 0x73);
    }
    arg2[6] = rax_30;
    int32_t rax_32 = (arg1 & 4);
    arg2[7] = (((rax_32 - rax_32) & 0xbb) + 0x72);
    int32_t rax_37 = (arg1 & 2);
    arg2[8] = (((rax_37 - rax_37) & 0xb6) + 0x77);
    int32_t rax_42 = (arg1 & 1);
    int32_t rax_43 = (rax_42 - rax_42);
    if ((arg1 & 0x200) == 0)
    {
        uint64_t rax_49 = ((rax_43 & 0xffffffb5) + 0x78);
        arg2[9] = rax_49;
        *(arg2 + 0xa) = 0x20;
        return rax_49;
    }
    uint64_t rax_45 = ((rax_43 & 0xffffffe0) + 0x74);
    arg2[9] = rax_45;
    *(arg2 + 0xa) = 0x20;
    return rax_45;
}

int64_t sub_402fb0(void* arg1, char* arg2)
{
    /* tailcall */
    return sub_402e30(*(arg1 + 0x18), arg2);
}

int16_t* sub_402fc0(char* arg1)
{
    char* rcx = arg1;
    char* rbx = arg1;
    int32_t rdx = *arg1;
    int64_t rax_8;
    if ((rdx - 0x30) <= 7)
    {
        uint64_t rbp_1 = 0;
        do
        {
            rbp_1 = ((rdx + (rbp_1 << 3)) - 0x30);
            rcx = &rcx[1];
            if (rbp_1 > 0xfff)
            {
                return 0;
            }
            rdx = *rcx;
        } while ((rdx - 0x30) <= 7);
        rax_8 = 0;
        if (rdx == 0)
        {
            int32_t rbx_4 = ((rbp_1 & 0xc00) | 0x3ff);
            if ((rcx - rbx) >= 5)
            {
                rbx_4 = 0xfff;
            }
            int16_t* rax_11 = sub_405740(0x20);
            *rax_11 = 0x13d;
            *(rax_11 + 4) = 0xfff;
            *(rax_11 + 8) = rbp_1;
            *(rax_11 + 0xc) = rbx_4;
            *(rax_11 + 0x11) = 0;
            return rax_11;
        }
    }
    else
    {
        int64_t rdi = 1;
        int64_t rdi_1;
        if (rdx == 0)
        {
            rdi_1 = 0x10;
        }
        else
        {
            do
            {
                bool rax_2 = (rdx & 0xef) == 0x2d;
                rdx = rdx == 0x2b;
                rcx = &rcx[1];
                char rax_3 = (rax_2 | rdx);
                rdx = *rcx;
                rdi = (rdi + rax_3);
            } while (rdx != 0);
            uint64_t rax_6;
            rax_6 = (rdi >> 0x3c) != 0;
            rdi_1 = (rdi << 4);
            if ((rdi_1 < 0 || (rdi_1 >= 0 && rax_6 != 0)))
            {
                sub_405990();
                /* no return */
            }
        }
        rax_8 = sub_405740(rdi_1);
        int64_t r10_1 = 0;
        char r9_1;
        do
        {
            int32_t rdi_2 = 0;
            bool cond:1_1;
            while (true)
            {
                r9_1 = *rbx;
                cond:1_1 = r9_1 <= 0x61;
                if (r9_1 == 0x61)
                {
                    rdi_2 = 0xfff;
                }
                else
                {
                    if (cond:1_1)
                    {
                        break;
                    }
                    if (r9_1 == 0x6f)
                    {
                        rdi_2 = (rdi_2 | 0x207);
                    }
                    else if (r9_1 == 0x75)
                    {
                        rdi_2 = (rdi_2 | 0x9c0);
                    }
                    else
                    {
                        if (r9_1 != 0x67)
                        {
                            break;
                        }
                        rdi_2 = (rdi_2 | 0x438);
                    }
                }
                rbx = &rbx[1];
            }
            if ((!cond:1_1))
            {
                break;
            }
            if ((r9_1 != 0x2d && (r9_1 != 0x3d && r9_1 != 0x2b)))
            {
                break;
            }
            int64_t r11_1 = (r10_1 + 1);
            char* r10_3 = ((r10_1 << 4) + rax_8);
            while (true)
            {
                uint32_t rdx_5 = rbx[1];
                void* r8_1 = &rbx[1];
                bool cond:2_1 = rdx_5 <= 0x67;
                int32_t rcx_1;
                void* rsi_1;
                if (rdx_5 == 0x67)
                {
                    rsi_1 = &rbx[2];
                    rcx_1 = 0x38;
                }
                else
                {
                    if ((!cond:2_1))
                    {
                        rsi_1 = &rbx[2];
                        if (rdx_5 != 0x6f)
                        {
                            rcx_1 = 0x1c0;
                        }
                        else
                        {
                            rcx_1 = 7;
                        }
                    }
                    else if ((rdx_5 - 0x30) <= 7)
                    {
                        uint64_t rcx_4 = 0;
                        do
                        {
                            rcx_4 = ((rdx_5 + (rcx_4 << 3)) - 0x30);
                            r8_1 = (r8_1 + 1);
                            if (rcx_4 > 0xfff)
                            {
                                break;
                            }
                            rdx_5 = *r8_1;
                        } while ((rdx_5 - 0x30) <= 7);
                        if (rcx_4 > 0xfff)
                        {
                            goto label_40306e;
                        }
                        if (rdi_2 != 0)
                        {
                            goto label_40306e;
                        }
                        if ((rdx_5 != 0 && rdx_5 != 0x2c))
                        {
                            goto label_40306e;
                        }
                        *r10_3 = r9_1;
                        rbx = r8_1;
                        r9_1 = rdx_5;
                        rdi_2 = 0xfff;
                        *(r10_3 + 8) = rcx_4;
                        rcx_1 = 0xfff;
                        r10_3[1] = 1;
                        *(r10_3 + 4) = 0xfff;
                    label_403102:
                        *(r10_3 + 0xc) = rcx_1;
                        int64_t rcx_2 = (r11_1 + 1);
                        r10_3 = &r10_3[0x10];
                        if (((r9_1 & 0xef) != 0x2d && r9_1 != 0x2b))
                        {
                            if (r9_1 == 0x2c)
                            {
                                rbx = &rbx[1];
                                r10_1 = r11_1;
                                break;
                            }
                            if (r9_1 != 0)
                            {
                                break;
                            }
                            *((rax_8 + (r11_1 << 4)) + 1) = 0;
                            return rax_8;
                        }
                        r11_1 = rcx_2;
                        continue;
                    }
                    if (((((!cond:2_1) && rdx_5 != 0x6f) && rdx_5 != 0x75) || cond:2_1))
                    {
                        char rsi_4 = (rdx_5 - 0x58);
                        char rbx_1 = 1;
                        rcx_1 = 0;
                        if (rsi_4 <= 0x20)
                        {
                            do
                            {
                                switch (rsi_4)
                                {
                                    case 0:
                                    {
                                        rbx_1 = 2;
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
                                    case 0x1d:
                                    case 0x1e:
                                    {
                                        break;
                                        break;
                                    }
                                    case 0x1a:
                                    {
                                        rcx_1 = (rcx_1 | 0x124);
                                        break;
                                    }
                                    case 0x1b:
                                    {
                                        *rcx_1[1] = (*rcx_1[1] | 0xc);
                                        break;
                                    }
                                    case 0x1c:
                                    {
                                        *rcx_1[1] = (*rcx_1[1] | 2);
                                        break;
                                    }
                                    case 0x1f:
                                    {
                                        rcx_1 = (rcx_1 | 0x92);
                                        break;
                                    }
                                    case 0x20:
                                    {
                                        rcx_1 = (rcx_1 | 0x49);
                                        break;
                                    }
                                }
                                r8_1 = (r8_1 + 1);
                                rdx_5 = *r8_1;
                                rsi_4 = (rdx_5 - 0x58);
                            } while (rsi_4 <= 0x20);
                        }
                        *r10_3 = r9_1;
                        r9_1 = rdx_5;
                        r10_3[1] = rbx_1;
                        rbx = r8_1;
                        *(r10_3 + 4) = rdi_2;
                        *(r10_3 + 8) = rcx_1;
                        goto label_4030f8;
                    }
                }
                r10_3[1] = 3;
                *(r10_3 + 4) = rdi_2;
                *(r10_3 + 8) = rcx_1;
                *r10_3 = r9_1;
                r9_1 = rbx[2];
                rbx = rsi_1;
            label_4030f8:
                int32_t rdx_2 = (rcx_1 & rdi_2);
                if (rdi_2 != 0)
                {
                    rcx_1 = rdx_2;
                }
                goto label_403102;
            }
        } while (r9_1 == 0x2c);
    label_40306e:
        free(rax_8);
        rax_8 = 0;
    }
    return rax_8;
}

int16_t* sub_403330(char* arg1)
{
    int16_t* rax_1 = nullptr;
    void var_98;
    if (__xstat(1, arg1, &var_98) == 0)
    {
        rax_1 = sub_405740(0x20);
        *rax_1 = 0x13d;
        *(rax_1 + 4) = 0xfff;
        int32_t var_80;
        *(rax_1 + 8) = var_80;
        *(rax_1 + 0xc) = 0xfff;
        *(rax_1 + 0x11) = 0;
    }
    return rax_1;
}

uint64_t sub_403390(int32_t arg1, char arg2, int32_t arg3, void* arg4, 
    int32_t* arg5)
{
    char r11_6 = *(arg4 + 1);
    uint64_t rax_1 = (arg1 & 0xfff);
    int32_t rbx = 0;
    if (r11_6 != 0)
    {
        int32_t rdx = (!arg3);
        while (true)
        {
            int32_t r12_1 = *(arg4 + 4);
            int32_t r9_2 = *(arg4 + 8);
            int32_t rdi;
            int32_t r9_3;
            int32_t r10_1;
            char r11_5;
            if (arg2 == 0)
            {
                r10_1 = -1;
                rdi = 0;
                if ((r11_6 == 2 && (rax_1 & 0x49) == 0))
                {
                label_403414:
                    r11_5 = *arg4;
                    r9_3 = (r9_2 & r10_1);
                    if (r12_1 == 0)
                    {
                        goto label_403420;
                    }
                    goto label_403490;
                }
            }
            else
            {
                int32_t r10_2 = *(arg4 + 0xc);
                r10_1 = (r10_2 | 0xfffff3ff);
                rdi = ((!r10_2) & 0xc00);
            }
            if (((arg2 != 0 && r11_6 == 2) || (arg2 == 0 && r11_6 == 2)))
            {
                r11_5 = *arg4;
                r9_3 = ((r9_2 | 0x49) & r10_1);
                int32_t r9_4;
                if (r12_1 == 0)
                {
                label_403420:
                    r9_4 = (r9_3 & rdx);
                    if (r11_5 == 0x2d)
                    {
                    label_4034e0:
                        rbx = (rbx | r9_4);
                        rax_1 = (rax_1 & (!r9_4));
                    label_40343d:
                        arg4 = (arg4 + 0x10);
                        r11_6 = *(arg4 + 1);
                        if (r11_6 == 0)
                        {
                            break;
                        }
                        continue;
                    }
                    else if (r11_5 == 0x3d)
                    {
                        goto label_4034ab;
                    }
                }
                else
                {
                label_403490:
                    r9_4 = (r9_3 & r12_1);
                    if (r11_5 == 0x2d)
                    {
                        goto label_4034e0;
                    }
                    if (r11_5 == 0x3d)
                    {
                        rdi = (rdi | (!r12_1));
                        r10_1 = (!rdi);
                    label_4034ab:
                        arg4 = (arg4 + 0x10);
                        r11_6 = *(arg4 + 1);
                        rbx = (rbx | (r10_1 & 0xfff));
                        rax_1 = ((rax_1 & rdi) | r9_4);
                        if (r11_6 == 0)
                        {
                            break;
                        }
                        continue;
                    }
                }
                if (r11_5 != 0x2b)
                {
                    goto label_40343d;
                }
                rbx = (rbx | r9_4);
                rax_1 = (rax_1 | r9_4);
                goto label_40343d;
            }
            if (((arg2 == 0 && r11_6 != 2) || (arg2 != 0 && r11_6 != 2)))
            {
                if (r11_6 != 3)
                {
                    goto label_403414;
                }
                int32_t r9_1 = (r9_2 & rax_1);
                int32_t r11_1 = (r9_1 & 0x124);
                int32_t r11_4 = ((!(r11_1 - r11_1)) & 0x124);
                int32_t r13_1;
                r13_1 = (r11_4 | 0x92);
                if ((r9_1 & 0x92) != 0)
                {
                    r11_4 = r13_1;
                }
                int32_t r13_3 = (r11_4 | 0x49);
                if ((r9_1 & 0x49) != 0)
                {
                    r11_4 = r13_3;
                }
                r9_2 = (r9_1 | r11_4);
                goto label_403414;
            }
        }
    }
    if (arg5 != 0)
    {
        *arg5 = rbx;
    }
    return rax_1;
}

char* sub_403510(char* arg1)
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
                void* const rdi_1 = &data_40b680;
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
    data_60f358 = rbx;
    __progname_full = rbx;
    return rax;
}

char* sub_4035b0(char* arg1, int32_t arg2)
{
    char* rax = dcgettext(nullptr, arg1, 5);
    char* rbx = rax;
    if (arg1 == rax)
    {
        char* rax_2 = sub_40a020();
        char rdx_2 = (*rax_2 & 0xdf);
        if (rdx_2 != 0x55)
        {
            if (rdx_2 != 0x47)
            {
            label_403691:
                void* const rbx_1 = &data_40b684;
                if (arg2 != 9)
                {
                    rbx_1 = "'";
                }
                return rbx_1;
            }
            if ((rax_2[1] & 0xdf) != 0x42)
            {
                goto label_403691;
            }
            if (rax_2[2] != 0x31)
            {
                goto label_403691;
            }
            if (rax_2[3] != 0x38)
            {
                goto label_403691;
            }
            if (rax_2[4] != 0x30)
            {
                goto label_403691;
            }
            if (rax_2[5] != 0x33)
            {
                goto label_403691;
            }
            if (rax_2[6] != 0x30)
            {
                goto label_403691;
            }
            if (rax_2[7] != 0)
            {
                goto label_403691;
            }
            bool cond:2_1 = *rbx != 0x60;
            rbx = &data_40b68d;
            if (cond:2_1)
            {
                rbx = &data_40b68a;
            }
        }
        else
        {
            if ((rax_2[1] & 0xdf) != 0x54)
            {
                goto label_403691;
            }
            if ((rax_2[2] & 0xdf) != 0x46)
            {
                goto label_403691;
            }
            if (rax_2[3] != 0x2d)
            {
                goto label_403691;
            }
            if (rax_2[4] != 0x38)
            {
                goto label_403691;
            }
            if (rax_2[5] != 0)
            {
                goto label_403691;
            }
            bool cond:1_1 = *rbx != 0x60;
            rbx = &data_40b691;
            if (cond:1_1)
            {
                rbx = &data_40b686;
            }
        }
    }
    return rbx;
}

int64_t sub_4036b0(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
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
    label_403748:
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
                    label_403abc:
                        if (var_c0 != 0)
                        {
                            r13_1 = 4;
                        }
                        goto label_403b04;
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
                            rbx_1 = sub_4036b0(r15, var_70, arg3, r11, 5, arg6, arg7, arg8, arg9);
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
                    goto label_403b1b;
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
                        goto label_403c55;
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
                                goto label_4038a5;
                            }
                            goto label_403b90;
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
                            goto label_403c55;
                        }
                        case 7:
                        {
                            rbp_3 = 7;
                            rcx_2 = 0x61;
                            rdx = r11_1 == 2;
                            goto label_403a80;
                        }
                        case 8:
                        {
                            rbp_3 = 8;
                            rcx_2 = 0x62;
                            rdx = r11_1 == 2;
                        label_403a80:
                            if (var_c0 == 0)
                            {
                                goto label_403a8b;
                            }
                            rbp_3 = rcx_2;
                            r13 = 0;
                        label_4038e7:
                            if (var_5c == 0)
                            {
                                goto label_4038f8;
                            }
                        label_403ab0:
                            r13_1 = r11_1;
                            rax_14 = rdx;
                            r11 = r9;
                            goto label_403ab8;
                        }
                        case 9:
                        {
                            rbp_3 = 9;
                            rcx_2 = 0x74;
                            goto label_403ceb;
                        }
                        case 0xa:
                        {
                            rbp_3 = 0xa;
                            rcx_2 = 0x6e;
                        label_403ceb:
                            rdx = r11_1 == 2;
                            bool rax_26 = (var_5c & rdx);
                            var_b8 = rax_26;
                            if (rax_26 != 0)
                            {
                            label_403cfa:
                                r11 = r9;
                                r13_1 = 2;
                                goto label_403abc;
                            }
                            goto label_403a80;
                        }
                        case 0xb:
                        {
                            rbp_3 = 0xb;
                            rcx_2 = 0x76;
                            rdx = r11_1 == 2;
                            goto label_403a80;
                        }
                        case 0xc:
                        {
                            rbp_3 = 0xc;
                            rcx_2 = 0x66;
                            rdx = r11_1 == 2;
                            goto label_403a80;
                        }
                        case 0xd:
                        {
                            rbp_3 = 0xd;
                            rcx_2 = 0x72;
                            goto label_403ceb;
                        }
                        case 0x20:
                        {
                            rbp_3 = 0x20;
                            rdx = r11_1 == 2;
                            goto label_403886;
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
                        label_403886:
                            if (var_5c == 0)
                            {
                                goto label_4038a5;
                            }
                            if (rdx == 0)
                            {
                                goto label_4038a5;
                            }
                            goto label_403cfa;
                        }
                        case 0x23:
                        case 0x7e:
                        {
                            rdx = r11_1 == 2;
                        label_40387d:
                            if (r12_1 != 0)
                            {
                                goto label_403a8b;
                            }
                            goto label_403886;
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
                        label_403cb0:
                            rdx = r11_1 == 2;
                        label_4038a5:
                            rax_8 = ((((var_c0 ^ 1) | rdx) ^ 1) | var_5c);
                            if (rax_8 == 0)
                            {
                                goto label_4039ac;
                            }
                            goto label_4038af;
                        }
                        case 0x27:
                        {
                            goto label_403a2d;
                        }
                        case 0x3f:
                        {
                            goto label_4039fd;
                        }
                        case 0x5c:
                        {
                            if (r11_1 != 2)
                            {
                                goto label_403a5a;
                            }
                            if (var_5c != 0)
                            {
                                goto label_4047ed;
                            }
                            r12_1 = (r12_1 + 1);
                            rax_12 = r10;
                            r13 = 0;
                            rbp_3 = 0x5c;
                            goto label_4039c4;
                        }
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_403859;
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
                            goto label_403e50;
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
                            goto label_403e50;
                        }
                        if (var_5c != 0)
                        {
                        label_4047a0:
                            r13_1 = r11_1;
                            r11 = r9;
                        label_403b04:
                            rbx_1 = sub_4036b0(r15, r14, arg3, r11, r13_1, (arg6 & 0xfffffffd), 0, arg8, arg9);
                        label_403b1b:
                            return rbx_1;
                        }
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                            goto label_403c55;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                                goto label_403ba7;
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
                                goto label_403c55;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                            label_403b70:
                                r13 = 0;
                                goto label_40392b;
                            }
                            case 8:
                            {
                                rdx = 0;
                                r13 = 0;
                                rbp_3 = 0x62;
                            label_4038f8:
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
                            label_40392b:
                                if (r14 <= rbx_1)
                                {
                                    goto label_403935;
                                }
                                r15[rbx_1] = 0x5c;
                            label_403935:
                                rbx_1 = (rbx_1 + 1);
                                r12_1 = (r12_1 + 1);
                                goto label_40393d;
                            }
                            case 9:
                            {
                                goto label_403b20;
                            }
                            case 0xa:
                            {
                                goto label_403a98;
                            }
                            case 0xb:
                            {
                                goto label_403b80;
                            }
                            case 0xc:
                            {
                                goto label_403b60;
                            }
                            case 0xd:
                            {
                                goto label_403b49;
                            }
                            case 0x20:
                            {
                                rax_27 = var_b8;
                                goto label_403eaa;
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
                                goto label_403b35;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = var_b8;
                                goto label_403e8a;
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
                                goto label_403e72;
                            }
                            case 0x27:
                            {
                                goto label_403a2d;
                            }
                            case 0x3f:
                            {
                                goto label_4039fd;
                            }
                            case 0x5c:
                            {
                                goto label_403a5a;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                goto label_403859;
                            }
                        }
                    }
                    else
                    {
                    label_403e50:
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                        label_403c50:
                            var_b8 = 0;
                        label_403c55:
                            uint64_t rdi_4;
                            if (rax == 1)
                            {
                                r10 = r10;
                                rdi_4 = 1;
                                rax_12 = (*__ctype_b_loc()[rbp_3] & 0x4000);
                                r13 = rax_12 != 0;
                                rdx = rax_12 == 0;
                                rdx = (rdx & var_c0);
                            label_403ca4:
                                if (rdx == 0)
                                {
                                    goto label_403cb0;
                                }
                                rdx = var_c0;
                                r13 = 0;
                            label_4041a1:
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
                                    goto label_4039c4;
                                }
                                if ((rdx != 0 && var_5c != 0))
                                {
                                    r13_1 = r11_1;
                                    var_c0 = rax_12;
                                    r11 = r9;
                                    goto label_403abc;
                                }
                                r13 = var_98;
                                goto label_40393d;
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
                                rax_12 = sub_408af0(&var_44, rbp_4, (var_98 - r15_1), &var_40);
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
                                            goto label_403abc;
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
                                goto label_4041a1;
                            }
                            goto label_403ca4;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                            label_403b90:
                                if (var_5c != 0)
                                {
                                    r13_1 = r11_1;
                                    r11 = r9;
                                    var_c0 = r13_1 == 2;
                                    goto label_403abc;
                                }
                                var_b8 = 0;
                            label_403ba7:
                                rdx = r11_1 == 2;
                                rax_8 = ((r10 ^ 1) & rdx);
                                int64_t rcx_6;
                                if (rax_8 == 0)
                                {
                                    rcx_6 = rbx_1;
                                    if (r14 <= rbx_1)
                                    {
                                        goto label_403bf2;
                                    }
                                    rax_8 = r10;
                                label_403bea:
                                    r15[rcx_6] = 0x5c;
                                    r10 = rax_8;
                                label_403bf2:
                                    rbx_1 = (rcx_6 + 1);
                                    if (r11_1 == 2)
                                    {
                                        rax_8 = r13;
                                        rbp_3 = 0x30;
                                        r13 = 0;
                                        goto label_4039ac;
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
                                    goto label_403c33;
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
                                    goto label_403bea;
                                }
                                rbx_1 = (rbx_1 + 4);
                                r10 = rax_8;
                                r13 = 0;
                                rbp_3 = 0x30;
                                goto label_4039ac;
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
                                goto label_403c50;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                                goto label_403b65;
                            }
                            case 8:
                            {
                                rbp_3 = 0x62;
                                goto label_403a9d;
                            }
                            case 9:
                            {
                            label_403b20:
                                rbp_3 = 0x74;
                                goto label_403a9d;
                            }
                            case 0xa:
                            {
                            label_403a98:
                                rbp_3 = 0x6e;
                            label_403a9d:
                                rdx = 0;
                                r13 = 0;
                                if (var_5c != 0)
                                {
                                    goto label_403ab0;
                                }
                                goto label_4038f8;
                            }
                            case 0xb:
                            {
                            label_403b80:
                                rbp_3 = 0x76;
                                goto label_403b65;
                            }
                            case 0xc:
                            {
                            label_403b60:
                                rbp_3 = 0x66;
                            label_403b65:
                                if (var_5c == 0)
                                {
                                    goto label_403b70;
                                }
                                r13_1 = r11_1;
                                rax_14 = 0;
                                r11 = r9;
                            label_403ab8:
                                var_c0 = (var_c0 & rax_14);
                                goto label_403abc;
                            }
                            case 0xd:
                            {
                                var_b8 = 0;
                            label_403b49:
                                rbp_3 = 0xd;
                                rcx_2 = 0x72;
                                rdx = r11_1 == 2;
                                goto label_403a80;
                            }
                            case 0x20:
                            {
                                rax_27 = 0;
                            label_403eaa:
                                rbp_3 = 0x20;
                                goto label_403e72;
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
                            label_403b35:
                                rdx = 0;
                            label_403a8b:
                                r13 = 0;
                                goto label_4038a5;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = 0;
                            label_403e8a:
                                if (r12_1 == 0)
                                {
                                    r13 = var_b8;
                                    rdx = 0;
                                    var_b8 = rax_28;
                                    goto label_4038a5;
                                }
                                var_b8 = rax_28;
                                r13 = 0;
                            label_4038af:
                                rax_8 = 0;
                                goto label_4038b1;
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
                            label_403e72:
                                r13 = var_b8;
                                var_b8 = rax_27;
                                rax_8 = 0;
                                goto label_4038b1;
                            }
                            case 0x27:
                            {
                                var_b8 = 0;
                            label_403a2d:
                                if (r11_1 != 2)
                                {
                                    var_5b_1 = r13;
                                    rdx = 0;
                                    rbp_3 = 0x27;
                                    goto label_4038a5;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_4047ed;
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
                                goto label_4039ac;
                            }
                            case 0x3f:
                            {
                                var_b8 = 0;
                            label_4039fd:
                                if (r11_1 == 2)
                                {
                                    if (var_5c != 0)
                                    {
                                    label_4047ed:
                                        r13_1 = r11_1;
                                        r11 = r9;
                                        goto label_403abc;
                                    }
                                    r13 = 0;
                                    rax_8 = 0;
                                    rbp_3 = 0x3f;
                                label_4039ac:
                                    rdx = r11_1 == 2;
                                    if (var_b8 != 0)
                                    {
                                        goto label_4038e7;
                                    }
                                    r12_1 = (r12_1 + 1);
                                    rax_12 = ((rax_8 ^ 1) & r10);
                                    goto label_4039c4;
                                }
                                if (r11_1 != 5)
                                {
                                    rbp_3 = 0x3f;
                                    rdx = r11_1 == 2;
                                    r13 = 0;
                                    goto label_4038a5;
                                }
                                if ((arg6 & 4) == 0)
                                {
                                label_403f90:
                                    rdx = 0;
                                    r13 = 0;
                                    rbp_3 = 0x3f;
                                    goto label_4038a5;
                                }
                                int64_t rax_30 = (r12_1 + 2);
                                if (rax_30 >= r9)
                                {
                                    goto label_403f90;
                                }
                                if (*((arg3 + r12_1) + 1) != 0x3f)
                                {
                                    goto label_403f90;
                                }
                                rbp_3 = *(arg3 + rax_30);
                                if (rbp_3 > 0x3e)
                                {
                                    goto label_403f90;
                                }
                                if ((!(TEST_BITQ(0x7000a38200000000, rbp_3))))
                                {
                                    goto label_403f90;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_4047a0;
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
                            label_403c33:
                                rax_8 = r13;
                                r13 = 0;
                                if (((var_c0 ^ 1) | rdx) != 0)
                                {
                                    goto label_4039ac;
                                }
                            label_4038b1:
                                if (arg7 == 0)
                                {
                                    goto label_4039ac;
                                }
                                if (((*(arg7 + ((rbp_3 >> 5) << 2)) >> rbp_3) & 1) == 0)
                                {
                                    goto label_4039ac;
                                }
                                rdx = r11_1 == 2;
                                goto label_4038e7;
                            }
                            case 0x5c:
                            {
                                var_b8 = 0;
                            label_403a5a:
                                rdx = (var_c0 & var_5c);
                                rbp_3 = 0x5c;
                                rcx_2 = 0x5c;
                                rax_1 = var_a0_1 != 0;
                                rdx = (rdx & rax_1);
                                if (rdx == 0)
                                {
                                    goto label_403a80;
                                }
                                r12_1 = (r12_1 + 1);
                                rax_12 = r10;
                                r13 = 0;
                            label_4039c4:
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
                                    goto label_40393d;
                                }
                            label_40393d:
                                if (rbx_1 >= r14)
                                {
                                    goto label_403946;
                                }
                                r15[rbx_1] = rbp_3;
                            label_403946:
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
                            label_403859:
                                rax_1 = r9 != 1;
                                if (r9 == -1)
                                {
                                    rax_1 = *(arg3 + 1) != 0;
                                }
                                rdx = r11_1 == 2;
                                if (rax_1 != 0)
                                {
                                    goto label_403a8b;
                                }
                                goto label_40387d;
                            }
                        }
                    }
                }
            }
        label_403f36:
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
            goto label_403748;
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
                goto label_403748;
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
            goto label_403748;
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
                var_78_1 = &data_40b684;
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
                var_78_1 = &data_40b684;
            }
            goto label_403748;
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
            var_78_1 = &data_40b684;
            goto label_403748;
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
            goto label_403748;
        }
        case 8:
        case 9:
        case 0xa:
        {
            if ((!cond:1))
            {
                arg8 = sub_4035b0(&data_40b695, r13);
                arg9 = sub_4035b0("'", r13);
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
            goto label_403748;
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
            goto label_403f36;
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
        goto label_403748;
    }
}

char* sub_4048e0(int32_t arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4)
{
    int64_t r15 = arg1;
    int32_t* rax = __errno_location();
    int64_t rbx = data_60f2b8;
    int32_t rax_1 = *rax;
    if (r15 < 0)
    {
        abort();
        /* no return */
    }
    if (data_60f2d0 <= r15)
    {
        if (r15 == 0x7fffffff)
        {
            sub_405990();
            /* no return */
        }
        int32_t r12_1 = (r15 + 1);
        int64_t rsi_1 = (r12_1 << 4);
        if (rbx == 0x60f2c0)
        {
            int64_t rax_9 = sub_4057a0(0, rsi_1);
            int128_t zmm0 = data_60f2c0;
            rbx = rax_9;
            data_60f2b8 = rax_9;
            *rax_9 = zmm0;
        }
        else
        {
            int64_t rax_2 = sub_4057a0(rbx, rsi_1);
            data_60f2b8 = rax_2;
            rbx = rax_2;
        }
        int64_t rdi_1 = data_60f2d0;
        memset(((rdi_1 << 4) + rbx), 0, ((r12_1 - rdi_1) << 4));
        data_60f2d0 = r12_1;
    }
    int64_t rbx_1 = (rbx + (r15 << 4));
    void* r15_2 = &arg4[2];
    int32_t rax_4 = (arg4[1] | 1);
    uint64_t r11 = *rbx_1;
    char* r12_2 = *(rbx_1 + 8);
    int64_t rax_5 = sub_4036b0(r12_2, r11, arg2, arg3, *arg4, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    if (r11 <= rax_5)
    {
        size_t rsi_3 = (rax_5 + 1);
        *rbx_1 = rsi_3;
        if (r12_2 != 0x60f360)
        {
            free(r12_2);
        }
        char* rax_6 = sub_405740(rsi_3);
        uint32_t r8_1 = *arg4;
        *(rbx_1 + 8) = rax_6;
        r12_2 = rax_6;
        sub_4036b0(rax_6, rsi_3, arg2, arg3, r8_1, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    }
    *rax = rax_1;
    return r12_2;
}

int64_t sub_404a80(int64_t arg1)
{
    int64_t rbx = arg1;
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    if (rbx == 0)
    {
        rbx = 0x60f460;
    }
    int64_t rax_1 = sub_405940(rbx, 0x38);
    *rax = r12;
    return rax_1;
}

uint64_t sub_404ac0(int32_t* arg1)
{
    if (arg1 == 0)
    {
        arg1 = &data_60f460;
    }
    return *arg1;
}

void sub_404ad0(int32_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60f460;
    }
    *arg1 = arg2;
}

uint64_t sub_404ae0(int64_t arg1, uint8_t arg2, int32_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = 0x60f460;
    }
    char rcx_1 = (arg2 & 0x1f);
    int32_t rsi = *((arg1 + ((arg2 >> 5) << 2)) + 8);
    uint32_t rax_3 = (rsi >> rcx_1);
    *((arg1 + ((arg2 >> 5) << 2)) + 8) = ((((arg3 ^ rax_3) & 1) << rcx_1) ^ rsi);
    return (rax_3 & 1);
}

uint64_t sub_404b20(int128_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60f460;
    }
    uint64_t rax = *(arg1 + 4);
    *(arg1 + 4) = arg2;
    return rax;
}

void sub_404b40(int32_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = &data_60f460;
    }
    *arg1 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *(arg1 + 0x28) = arg2;
        *(arg1 + 0x30) = arg3;
        return;
    }
    int64_t var_8 = 0x60f460;
    abort();
    /* no return */
}

int64_t sub_404b70(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t* arg5)
{
    int32_t* rbx = arg5;
    if (arg5 == 0)
    {
        rbx = &data_60f460;
    }
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    int64_t rax_2 = sub_4036b0(arg1, arg2, arg3, arg4, *rbx, rbx[1], &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = r12;
    return rax_2;
}

char* sub_404bf0(uint64_t arg1, uint64_t arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* rbx = arg4;
    if (arg4 == 0)
    {
        rbx = &data_60f460;
    }
    int32_t* rax = __errno_location();
    int32_t rax_1 = *rax;
    int32_t rbp;
    rbp = arg3 == 0;
    int32_t rbp_1 = (rbp | rbx[1]);
    int64_t rax_2 = sub_4036b0(nullptr, 0, arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    char* rax_3 = sub_405740((rax_2 + 1));
    sub_4036b0(rax_3, (rax_2 + 1), arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = rax_1;
    if (arg3 != 0)
    {
        *arg3 = rax_2;
    }
    return rax_3;
}

int64_t sub_404ce0(uint64_t arg1, uint64_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_404bf0(arg1, arg2, nullptr, arg3);
}

uint64_t sub_404cf0()
{
    uint64_t rax_2 = data_60f2d0;
    int64_t r12 = data_60f2b8;
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
    if (rdi_2 != 0x60f360)
    {
        rax_2 = free(rdi_2);
        *data_60f2c0 = 0x100;
        *(data_60f2c0 + 8) = 0x60f360;
    }
    if (r12 != 0x60f2c0)
    {
        rax_2 = free(r12);
        data_60f2b8 = 0x60f2c0;
    }
    data_60f2d0 = 1;
    return rax_2;
}

int64_t sub_404d90(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_4048e0(arg1, arg2, -1, &data_60f460);
}

int64_t sub_404db0(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_4048e0(arg1, arg2, arg3, &data_60f460);
}

int64_t sub_404dc0(uint64_t arg1)
{
    /* tailcall */
    return sub_4048e0(0, arg1, -1, &data_60f460);
}

int64_t sub_404de0(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_4048e0(0, arg1, arg2, &data_60f460);
}

char* sub_404e00(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_4048e0(arg1, arg3, -1, &var_48);
}

char* sub_404e70(int32_t arg1, int32_t arg2, uint64_t arg3, uint64_t arg4)
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
    return sub_4048e0(arg1, arg3, arg4, &var_48);
}

int64_t sub_404ee0(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_404e00(0, arg1, arg2);
}

int64_t sub_404ef0(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_404e70(0, arg1, arg2, arg3);
}

char* sub_404f00(uint64_t arg1, uint64_t arg2, uint8_t arg3)
{
    char rcx_1 = (arg3 & 0x1f);
    int64_t var_18 = data_60f490;
    int128_t var_48 = data_60f460;
    int128_t var_38 = data_60f470;
    int128_t var_28 = data_60f480;
    int32_t rdx = *((&var_48 + ((arg3 >> 5) << 2)) + 8);
    *((&var_48 + ((arg3 >> 5) << 2)) + 8) = ((((!(rdx >> rcx_1)) & 1) << rcx_1) ^ rdx);
    return sub_4048e0(0, arg1, arg2, &var_48);
}

int64_t sub_404f70(uint64_t arg1, uint8_t arg2)
{
    /* tailcall */
    return sub_404f00(arg1, -1, arg2);
}

int64_t sub_404f80(uint64_t arg1)
{
    /* tailcall */
    return sub_404f00(arg1, -1, 0x3a);
}

int64_t sub_404fa0(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_404f00(arg1, arg2, 0x3a);
}

char* sub_404fb0(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_4048e0(arg1, arg3, -1, &var_48);
}

char* sub_405020(int32_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, 
    uint64_t arg5)
{
    int128_t var_48 = data_60f460;
    int128_t var_38 = data_60f470;
    int128_t var_28 = data_60f480;
    int64_t var_18 = data_60f490;
    var_48 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *var_28[8] = arg2;
        int64_t var_18_1 = arg3;
        return sub_4048e0(arg1, arg4, arg5, &var_48);
    }
    abort();
    /* no return */
}

int64_t sub_405130(uint64_t arg1)
{
    /* tailcall */
    return sub_4048e0(0, arg1, -1, &data_60f280);
}

int64_t* sub_405150(int64_t* arg1)
{
    int64_t var_98;
    if (__lxstat(1, "/", &var_98) != 0)
    {
        return 0;
    }
    int64_t var_90;
    *arg1 = var_90;
    arg1[1] = var_98;
    return arg1;
}

int64_t sub_4051a0(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    __fprintf_chk(arg1, 1, "Copyright %s %d Free Software Fo…", dcgettext(nullptr, &data_40c3eb, 5), 0x7e1);
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

int64_t sub_405580(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_4051a0(arg1, arg2, arg3, arg4, arg5, r9);
}

int64_t sub_4055a0(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_4051a0(arg1, arg2, arg3, arg4, &var_58, r9);
}

int64_t sub_405600(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
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
    return sub_4051a0(arg1, arg2, arg3, arg4, &var_88, r9_1);
}

int64_t sub_4056c0()
{
    __printf_chk(1, dcgettext(nullptr, "\nReport bugs to: %s\n", 5), "bug-coreutils@gnu.org");
    __printf_chk(1, dcgettext(nullptr, "%s home page: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
    /* tailcall */
    return fputs_unlocked(dcgettext(nullptr, "General help using GNU software:…", 5), stdout);
}

int64_t sub_405740(size_t arg1)
{
    int64_t rax = malloc(arg1);
    if ((rax == 0 && arg1 != 0))
    {
        sub_405990();
        /* no return */
    }
    return rax;
}

int64_t sub_4057a0(int64_t arg1, size_t arg2)
{
    if ((arg2 == 0 && arg1 != 0))
    {
        free(arg1);
        return 0;
    }
    int64_t rax = realloc(arg1, arg2);
    if ((rax == 0 && arg2 != 0))
    {
        sub_405990();
        /* no return */
    }
    return rax;
}

int64_t sub_4058a0(int64_t arg1, int64_t* arg2)
{
    size_t rax = *arg2;
    bool cond:0_1;
    if (arg1 == 0)
    {
        cond:0_1 = rax >= 0;
        if (rax == 0)
        {
            *arg2 = 0x80;
            /* tailcall */
            return sub_4057a0(arg1, 0x80);
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
        return sub_4057a0(arg1, rax);
    }
    if (((arg1 != 0 && rax > 0x5555555555555553) || ((arg1 == 0 && rax != 0) && (!cond:0_1))))
    {
        size_t var_8 = rax;
        sub_405990();
        /* no return */
    }
}

int64_t sub_4058f0(size_t arg1)
{
    /* tailcall */
    return memset(sub_405740(arg1), 0, arg1);
}

int64_t sub_405910(size_t arg1, size_t arg2)
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
    sub_405990();
    /* no return */
}

int64_t sub_405940(int64_t arg1, size_t arg2)
{
    /* tailcall */
    return memcpy(sub_405740(arg2), arg1, arg2);
}

int64_t sub_405970(char* arg1)
{
    /* tailcall */
    return sub_405940(arg1, (strlen(arg1) + 1));
}

int64_t sub_405990() __noreturn
{
    error(data_60f260, 0, "%s", dcgettext(nullptr, "memory exhausted", 5));
    abort();
    /* no return */
}

void** sub_4059d0(int64_t* arg1, int32_t arg2, int64_t arg3)
{
    void** rax = fts_open(arg1, (arg2 | 0x200), arg3);
    if (rax != 0)
    {
        return rax;
    }
    if (*__errno_location() == 0x16)
    {
        __assert_fail("errno != EINVAL", "lib/xfts.c", 0x29, "xfts_open");
        /* no return */
    }
    sub_405990();
    /* no return */
}

int64_t sub_405a20(void* arg1, void* arg2)
{
    int64_t rax = 1;
    int32_t rdx = (*(arg1 + 0x48) & 0x11);
    if (rdx != 0x10)
    {
        rax = 0;
        if (rdx == 0x11)
        {
            rax = *(arg2 + 0x58) != 0;
            return rax;
        }
    }
    return rax;
}

int64_t sub_405a50(int64_t* arg1, int64_t* arg2)
{
    if (arg1[1] == arg2[1])
    {
        int64_t rax;
        rax = *arg1 == *arg2;
        return rax;
    }
    return 0;
}

uint64_t sub_405a70(void* arg1, int64_t arg2)
{
    return (COMBINE(0, *(arg1 + 8)) % arg2);
}

uint64_t sub_405a80(int64_t* arg1, int64_t arg2)
{
    return (COMBINE(0, *arg1) % arg2);
}

int64_t sub_405a90(int64_t* arg1, int64_t* arg2)
{
    int64_t rax;
    rax = *arg1 == *arg2;
    return rax;
}

uint64_t sub_405aa0(int64_t* arg1, int64_t* arg2)
{
    uint64_t rax = 0xffffffff;
    int64_t rdx = *(*arg2 + 0x80);
    int64_t temp0 = *(*arg1 + 0x80);
    bool cond:0 = temp0 > rdx;
    if (temp0 >= rdx)
    {
        rax = cond:0;
        rax = rax;
    }
    return rax;
}

uint64_t sub_405ad0(void* arg1, void* arg2, char arg3)
{
    struct stat* rbp = (arg2 + 0x78);
    char rax = *(arg1 + 0x48);
    char* rsi = *(arg2 + 0x30);
    int32_t rax_3;
    if ((*(arg2 + 0x58) == 0 && (rax & 1) != 0))
    {
    label_405af8:
        if (__xstat(1, rsi, rbp) == 0)
        {
        label_405b6d:
            int32_t rax_8 = (*(arg2 + 0x90) & 0xf000);
            uint64_t rax_10;
            if (rax_8 == 0x4000)
            {
                rax_10 = *(arg2 + 0x88);
                if ((rax_10 <= 1 || (rax_10 > 1 && *(arg2 + 0x58) <= 0)))
                {
                    rax_10 = -1;
                }
                if ((rax_10 > 1 && *(arg2 + 0x58) > 0))
                {
                    uint64_t rdx_3 = (rax_10 - 2);
                    if ((*(arg1 + 0x48) & 0x20) == 0)
                    {
                        rax_10 = rdx_3;
                    }
                }
                bool cond:1_1 = *(arg2 + 0x108) != 0x2e;
                *(arg2 + 0x68) = rax_10;
                if (((!cond:1_1) && (*(arg2 + 0x109) == 0 || (*(arg2 + 0x109) != 0 && (*(arg2 + 0x108) & 0xffff00) == 0x2e00))))
                {
                    rax_10 = (((1 - 1) & 0xfffffffc) + 5);
                }
            }
            else if (rax_8 == 0xa000)
            {
                rax_10 = 0xc;
            }
            else
            {
                rax_8 = rax_8 == 0x8000;
                uint64_t rax_9 = rax_8;
                rax_10 = ((rax_9 * 5) + 3);
            }
            return rax_10;
        }
        int32_t* rax_2 = __errno_location();
        rax_3 = *rax_2;
        if (rax_3 == 2)
        {
            if (__lxstat(1, *(arg2 + 0x30), rbp) == 0)
            {
                *rax_2 = 0;
                return 0xd;
            }
            rax_3 = *rax_2;
        }
        goto label_405bab;
    }
    if ((rax & 2) != 0)
    {
        goto label_405af8;
    }
    if (arg3 != 0)
    {
        goto label_405af8;
    }
    if (__fxstatat(1, *(arg1 + 0x2c), rsi, rbp, 0x100) == 0)
    {
        goto label_405b6d;
    }
    rax_3 = *__errno_location();
label_405bab:
    *(arg2 + 0x40) = rax_3;
    void* rdi_1 = (&rbp->st_ino & 0xfffffffffffffff8);
    *(arg2 + 0x78) = 0;
    rbp->__glibc_reserved[2] = 0;
    for (uint64_t rcx_3 = (((rbp - rdi_1) + 0x90) >> 3); rcx_3 != 0; rcx_3 = (rcx_3 - 1))
    {
        *rdi_1 = 0;
        rdi_1 = (rdi_1 + 8);
    }
    return 0xa;
}

void* sub_405c80(void* arg1, void* arg2, uint64_t arg3)
{
    void* rbx = arg2;
    __compar_fn_t r13 = *(arg1 + 0x40);
    void* rdi = *(arg1 + 0x10);
    if (*(arg1 + 0x38) < arg3)
    {
        int64_t rsi = (arg3 + 0x28);
        *(arg1 + 0x38) = rsi;
        void* rax_1;
        if (rsi <= 0x1fffffffffffffff)
        {
            rax_1 = realloc(rdi, (rsi << 3));
            rdi = rax_1;
            if (rax_1 == 0)
            {
                rdi = *(arg1 + 0x10);
            }
            else
            {
                *(arg1 + 0x10) = rax_1;
            }
        }
        if (((rsi <= 0x1fffffffffffffff && rax_1 == 0) || rsi > 0x1fffffffffffffff))
        {
            free(rdi);
            *(arg1 + 0x10) = 0;
            *(arg1 + 0x38) = 0;
            return rbx;
        }
    }
    void* rdx = rdi;
    if (rbx != 0)
    {
        do
        {
            rdx = (rdx + 8);
            *(rdx - 8) = rbx;
            rbx = *(rbx + 0x10);
        } while (rbx != 0);
    }
    qsort(rdi, arg3, 8, r13);
    int64_t* r8 = *(arg1 + 0x10);
    void* rax_2 = *r8;
    int64_t* rdx_1 = r8;
    void* rsi_3 = rax_2;
    int64_t rcx_2 = (arg3 - 1);
    void* rdx_2;
    if (arg3 == 1)
    {
        rdx_2 = rax_2;
    }
    else
    {
        while (true)
        {
            int64_t rdi_1 = rdx_1[1];
            rdx_1 = &rdx_1[1];
            *(rsi_3 + 0x10) = rdi_1;
            int64_t temp1_1 = rcx_2;
            rcx_2 = (rcx_2 - 1);
            if (temp1_1 == 1)
            {
                break;
            }
            rsi_3 = *rdx_1;
        }
        rdx_2 = r8[(arg3 - 1)];
    }
    *(rdx_2 + 0x10) = 0;
    return rax_2;
}

void* sub_405d80(void* arg1, int64_t arg2, uint64_t arg3)
{
    void* rax = malloc(((arg3 + 0x110) & 0xfffffffffffffff8));
    if (rax != 0)
    {
        memcpy((rax + 0x108), arg2, arg3);
        int64_t rax_1 = *(arg1 + 0x20);
        *((rax + arg3) + 0x108) = 0;
        *(rax + 0x60) = arg3;
        *(rax + 0x50) = arg1;
        *(rax + 0x38) = rax_1;
        *(rax + 0x40) = 0;
        *(rax + 0x18) = 0;
        *(rax + 0x72) = 0x30000;
        *(rax + 0x20) = 0;
        *(rax + 0x28) = 0;
    }
    return rax;
}

void sub_405e10(void* arg1)
{
    if (arg1 == 0)
    {
        return;
    }
    void* rbx = arg1;
    void* rbp_1;
    do
    {
        DIR* rdi = *(rbx + 0x18);
        rbp_1 = *(rbx + 0x10);
        if (rdi != 0)
        {
            closedir(rdi);
        }
        void* rdi_1 = rbx;
        rbx = rbp_1;
        free(rdi_1);
    } while (rbp_1 != 0);
}

uint64_t sub_405e60(void* arg1)
{
    uint64_t rax_2;
    while (true)
    {
        rax_2 = sub_409f80(arg1);
        if (rax_2 != 0)
        {
            break;
        }
        int32_t rax_1 = sub_409fd0(arg1);
        if (rax_1 >= 0)
        {
            close(rax_1);
        }
    }
    return rax_2;
}

int64_t sub_405ea0(void* arg1)
{
    void* rbx = *(arg1 + 0x50);
    if ((*(rbx + 0x49) & 2) != 0)
    {
        int64_t* r12_1 = *(rbx + 0x50);
        int64_t var_98;
        int64_t* rax_9;
        if (r12_1 == 0)
        {
            rax_9 = sub_4095a0(0xd, nullptr, 0x405a80, 0x405a90, 0x4017f0);
            r12_1 = rax_9;
            *(rbx + 0x50) = rax_9;
            if ((rax_9 == 0 && fstatfs(*(*(arg1 + 0x50) + 0x2c), &var_98) == 0))
            {
            label_405f4d:
                return var_98;
            }
        }
        if ((r12_1 != 0 || (r12_1 == 0 && rax_9 != 0)))
        {
            var_98 = *(arg1 + 0x78);
            void* rax_2 = sub_409330(r12_1, &var_98);
            int64_t rax_3;
            int32_t rax_5;
            if (rax_2 == 0)
            {
                rax_5 = fstatfs(*(*(arg1 + 0x50) + 0x2c), &var_98);
                if (rax_5 == 0)
                {
                    int64_t* rax_6 = malloc(0x10);
                    rax_3 = var_98;
                    if (rax_6 != 0)
                    {
                        int64_t rdx_1 = *(arg1 + 0x78);
                        rax_6[1] = rax_3;
                        *rax_6 = rdx_1;
                        int64_t rax_7 = sub_409d40(r12_1, rax_6);
                        if (rax_7 != 0)
                        {
                            if (rax_6 != rax_7)
                            {
                                abort();
                                /* no return */
                            }
                            goto label_405f4d;
                        }
                        free(rax_6);
                        rax_3 = var_98;
                    }
                }
            }
            else
            {
                rax_3 = *(rax_2 + 8);
            }
            if ((rax_2 != 0 || (rax_2 == 0 && rax_5 == 0)))
            {
                return rax_3;
            }
        }
    }
    return 0;
}

uint64_t sub_405fc0(void* arg1)
{
    int64_t rax = sub_405ea0(arg1);
    bool cond:0 = rax <= 0x9fa0;
    int32_t rdx;
    if ((rax == 0x9fa0 || ((!cond:0) && rax == 0x5346414f)))
    {
        rdx = 0;
    }
    if (rax != 0x9fa0)
    {
        if (((!cond:0) && rax != 0x5346414f))
        {
            rdx = 2;
            if (rax != 0x58465342)
            {
                int32_t rdx_1;
                rdx_1 = rax == 0x52654973;
                rdx = (rdx_1 + 1);
            }
        }
        if (cond:0)
        {
            rdx = 0;
            if (rax != 0)
            {
                int32_t rdx_2;
                rdx_2 = rax != 0x6969;
                return rdx_2;
            }
        }
    }
    return rdx;
}

void sub_406030(void* arg1, int32_t arg2, char arg3)
{
    int32_t rsi = *(arg1 + 0x2c);
    if ((rsi == arg2 && rsi != 0xffffff9c))
    {
        abort();
        /* no return */
    }
    if (arg3 != 0)
    {
        uint64_t rax = sub_409f90((arg1 + 0x60), rsi);
        if (rax >= 0)
        {
            close(rax);
            *(arg1 + 0x2c) = arg2;
            return;
        }
    }
    else if (((*(arg1 + 0x48) & 4) == 0 && rsi >= 0))
    {
        close(rsi);
        *(arg1 + 0x2c) = arg2;
        return;
    }
    *(arg1 + 0x2c) = arg2;
}

uint64_t sub_4060a0(void* arg1)
{
    int32_t rdx = *(arg1 + 0x48);
    int32_t rbp_1 = (rdx & 4);
    if (rbp_1 != 0)
    {
        rbp_1 = 0;
    }
    else
    {
        *rdx[1] = (*rdx[1] & 2);
        if (*rdx[1] == 0)
        {
            rbp_1 = fchdir(*(arg1 + 0x28)) != 0;
        }
        else
        {
            sub_406030(arg1, 0xffffff9c, 1);
        }
    }
    sub_405e60((arg1 + 0x60));
    return rbp_1;
}

int64_t sub_406100(int64_t* arg1, int64_t* arg2, int64_t arg3)
{
    int64_t rcx = *arg2;
    int64_t rdi = *arg1;
    size_t rax = ((rcx + arg3) + 0x100);
    if (rcx > rax)
    {
        free(rdi);
        *arg1 = 0;
        *__errno_location() = 0x24;
        return 0;
    }
    *arg2 = rax;
    int64_t rax_1 = realloc(rdi, rax);
    if (rax_1 == 0)
    {
        free(*arg1);
        *arg1 = 0;
        return 0;
    }
    *arg1 = rax_1;
    return 1;
}

int64_t* sub_406170(int32_t arg1, int64_t** arg2)
{
    int64_t* rax;
    if ((arg1 & 0x102) != 0)
    {
        rax = sub_4095a0(0x1f, nullptr, 0x405a70, 0x405a50, 0x4017f0);
        *arg2 = rax;
        rax = rax != 0;
    }
    else
    {
        int64_t* rax_1 = malloc(0x20);
        *arg2 = rax_1;
        rax = nullptr;
        if (rax_1 != 0)
        {
            sub_408bd0(rax_1);
            return 1;
        }
    }
    return rax;
}

int64_t sub_4061d0(int64_t arg1, int32_t arg2, char* arg3)
{
    uint64_t rdx_4 = ((((arg2 << 0xd) & 0x20000) | ((arg2 << 7) & 0x40000)) | 0x90900);
    if ((arg2 & 0x200) == 0)
    {
        /* tailcall */
        return sub_408c60(arg3, rdx_4, rdx_4);
    }
    /* tailcall */
    return sub_40a590(arg1, arg3, rdx_4, arg3);
}

uint64_t sub_406220(void* arg1, void* arg2, int32_t arg3, char* arg4)
{
    int32_t rbp = arg3;
    int32_t r12 = *(arg1 + 0x48);
    int32_t rdx_1 = (r12 & 4);
    bool c = false;
    bool z = (arg4 & arg4) == 0;
    int32_t r12_1;
    char r14_1;
    if ((!z))
    {
        void* const rdi = &data_40c7aa;
        int64_t rcx = 3;
        char* rsi = arg4;
        while (rcx != 0)
        {
            char temp0_1 = *rsi;
            char temp1_1 = *rdi;
            c = temp0_1 < temp1_1;
            z = temp0_1 == temp1_1;
            rsi = &rsi[1];
            rdi = (rdi + 1);
            rcx = (rcx - 1);
            if ((!z))
            {
                break;
            }
        }
        if (((((!z) && (!c)) - 0) == 0 && rdx_1 == 0))
        {
            if (rbp >= 0)
            {
                r12_1 = rbp;
                r14_1 = 1;
                goto label_4062df;
            }
            if ((r12 & 0x200) == 0)
            {
                r14_1 = 1;
                goto label_406368;
            }
            void* rdx_2 = (arg1 + 0x60);
            char rax_1 = sub_409f80(rdx_2);
            r14_1 = rax_1;
            if (rax_1 != 0)
            {
                goto label_406368;
            }
            int32_t rax_2 = sub_409fd0(rdx_2);
            r12_1 = rax_2;
            if (rax_2 < 0)
            {
                r12 = *(arg1 + 0x48);
                r14_1 = 1;
                goto label_406368;
            }
            rbp = rax_2;
            r14_1 = 1;
            goto label_4062df;
        }
    }
    int32_t rbx_1;
    if ((((z || ((!z) && (((!z) && (!c)) - 0) != 0)) && rdx_1 != 0) || ((!z) && (((!z) && (!c)) - 0) == 0)))
    {
        if (((r12 & 0x200) == 0 || ((r12 & 0x200) != 0 && rbp < 0)))
        {
            rbx_1 = 0;
        }
        if (((r12 & 0x200) != 0 && rbp >= 0))
        {
            rbx_1 = 0;
            close(rbp);
        }
    }
    if (((z || ((!z) && (((!z) && (!c)) - 0) != 0)) && rdx_1 == 0))
    {
        if (rbp < 0)
        {
            r14_1 = 0;
        label_406368:
            int32_t rax_9 = sub_4061d0(*(arg1 + 0x2c), r12, arg4);
            r12_1 = rax_9;
            if (rax_9 >= 0)
            {
                goto label_4062df;
            }
            rbx_1 = -1;
        }
        else
        {
            r12_1 = rbp;
            r14_1 = 0;
        label_4062df:
            int64_t var_c8;
            int32_t rax_3 = __fxstat(1, r12_1, &var_c8);
            rbx_1 = rax_3;
            int64_t var_c0;
            if ((rax_3 == 0 && (*(arg2 + 0x78) != var_c8 || (*(arg2 + 0x78) == var_c8 && *(arg2 + 0x80) != var_c0))))
            {
                *__errno_location() = 2;
            }
            if (((rax_3 == 0 && (*(arg2 + 0x78) != var_c8 || (*(arg2 + 0x78) == var_c8 && *(arg2 + 0x80) != var_c0))) || rax_3 != 0))
            {
                rbx_1 = -1;
            }
            if (((*(arg2 + 0x80) == var_c0 && rax_3 == 0) && *(arg2 + 0x78) == var_c8))
            {
                if ((*(arg1 + 0x49) & 2) != 0)
                {
                    sub_406030(arg1, r12_1, (r14_1 ^ 1));
                }
                else
                {
                    rbx_1 = fchdir(r12_1);
                }
            }
            if (((((rax_3 == 0 && (*(arg2 + 0x78) != var_c8 || (*(arg2 + 0x78) == var_c8 && *(arg2 + 0x80) != var_c0))) || rax_3 != 0) || (((rax_3 == 0 && *(arg2 + 0x78) == var_c8) && *(arg2 + 0x80) == var_c0) && (*(arg1 + 0x49) & 2) == 0)) && rbp < 0))
            {
                int32_t* rax_7 = __errno_location();
                int32_t r13_1 = *rax_7;
                close(r12_1);
                *rax_7 = r13_1;
            }
        }
    }
    return rbx_1;
}

int64_t sub_4063f0(int32_t arg1, int64_t* arg2, int64_t* arg3)
{
    if ((arg1 & 0x102) == 0)
    {
        int64_t rax_6 = sub_408be0(*arg2, &arg3[0xf]);
        if (rax_6 != 0)
        {
            *arg3 = arg3;
            arg3[0xe] = 2;
            return rax_6;
        }
    }
    else
    {
        int64_t* rax = malloc(0x18);
        int64_t rax_3;
        if (rax != 0)
        {
            int64_t rax_1 = arg3[0xf];
            int64_t* rdi = *arg2;
            rax[2] = arg3;
            *rax = rax_1;
            rax[1] = arg3[0x10];
            rax_3 = sub_409d40(rdi, rax);
            if (rax != rax_3)
            {
                free(rax);
                if (rax_3 != 0)
                {
                    int64_t rax_4 = *(rax_3 + 0x10);
                    arg3[0xe] = 2;
                    *arg3 = rax_4;
                }
            }
        }
        if ((rax == 0 || ((rax != 0 && rax != rax_3) && rax_3 == 0)))
        {
            return 0;
        }
    }
    return 1;
}

void* sub_4064a0(int32_t arg1, void*** arg2, void* arg3)
{
    if ((arg1 & 0x102) != 0)
    {
        int64_t var_28_1 = *(arg3 + 0x78);
        int64_t var_20_1 = *(arg3 + 0x80);
        int64_t rax_3 = sub_409d80(*arg2);
        if (rax_3 != 0)
        {
            return free(rax_3);
        }
    }
    else
    {
        void* rax = *(arg3 + 8);
        void** rcx_1;
        if ((rax != 0 && *(rax + 0x58) >= 0))
        {
            rcx_1 = *arg2;
            if ((rcx_1[2] != 0 && (*rcx_1 == *(arg3 + 0x80) && rcx_1[1] == *(arg3 + 0x78))))
            {
                int64_t rdx = *(rax + 0x78);
                rax = *(rax + 0x80);
                rcx_1[1] = rdx;
                *rcx_1 = rax;
            }
        }
        if (((rax == 0 || (rax != 0 && *(rax + 0x58) < 0)) || ((rax != 0 && *(rax + 0x58) >= 0) && rcx_1[2] != 0)))
        {
            return rax;
        }
    }
    abort();
    /* no return */
}

void* const sub_406540(int64_t* arg1, int32_t arg2)
{
    int64_t* r13 = *arg1;
    DIR* rdi = r13[3];
    void* const var_80;
    int64_t var_60_1;
    char var_39_1;
    int32_t rdi_1;
    if (rdi == 0)
    {
        int32_t rax_31 = arg1[9];
        int32_t rcx_7 = (rax_31 & 0x10);
        if (rcx_7 != 0)
        {
            rcx_7 = 0x20000;
            if ((rax_31 & 1) != 0)
            {
                int32_t rcx_9;
                rcx_9 = r13[0xb] != 0;
                rcx_7 = (rcx_9 << 0x11);
            }
        }
        char* rsi_8 = r13[6];
        uint64_t rdi_9 = 0xffffff9c;
        int32_t rdx_18 = (((rax_31 << 7) & 0x40000) | rcx_7);
        if ((rax_31 & 0x204) == 0x200)
        {
            rdi_9 = *(arg1 + 0x2c);
        }
        int32_t rax_34 = sub_40a590(rdi_9, rsi_8, (rdx_18 | 0x90900), rcx_7);
        int32_t rbx_2 = rax_34;
        DIR* rax_35;
        if (rax_34 >= 0)
        {
            rax_35 = fdopendir(rax_34);
            if (rax_35 == 0)
            {
                int32_t* rax_58 = __errno_location();
                int32_t r12_2 = *rax_58;
                close(rbx_2);
                *rax_58 = r12_2;
            }
            else
            {
                bool cond:2_1 = r13[0xe] == 0xb;
                r13[3] = rax_35;
                int32_t rdi_11;
                if (cond:2_1)
                {
                    rax_35 = sub_405ad0(arg1, r13, 0);
                    r13[0xe] = rax_35;
                }
                else
                {
                    rdi_11 = arg1[9];
                    if ((rdi_11 & 0x100) != 0)
                    {
                        sub_4064a0(rdi_11, &arg1[0xb], r13);
                        sub_405ad0(arg1, r13, 0);
                        rax_35 = sub_4063f0(arg1[9], &arg1[0xb], r13);
                    }
                }
                if (((cond:2_1 || ((!cond:2_1) && (rdi_11 & 0x100) == 0)) || (((!cond:2_1) && (rdi_11 & 0x100) != 0) && rax_35 != 0)))
                {
                    var_60_1 = (((rax_35 - rax_35) & 0x186a1) - 1);
                    if (arg2 != 2)
                    {
                        int32_t rax_46;
                        int64_t r12;
                        char r14_2;
                        if (((arg1[9] & 0x38) == 0x18 && r13[0x11] == 2))
                        {
                            rax_46 = sub_405fc0(r13);
                            if ((rax_46 != 0 && arg2 == 3))
                            {
                                r14_2 = 0;
                                r12 = 1;
                            }
                        }
                        if ((((arg1[9] & 0x38) != 0x18 || ((arg1[9] & 0x38) == 0x18 && r13[0x11] != 2)) || (((arg1[9] & 0x38) == 0x18 && r13[0x11] == 2) && rax_46 == 0)))
                        {
                            r14_2 = 1;
                            r12 = arg2 == 3;
                        }
                        if (((((arg1[9] & 0x38) != 0x18 || ((arg1[9] & 0x38) == 0x18 && r13[0x11] != 2)) || (((arg1[9] & 0x38) == 0x18 && r13[0x11] == 2) && rax_46 == 0)) || ((((arg1[9] & 0x38) == 0x18 && r13[0x11] == 2) && rax_46 != 0) && arg2 == 3)))
                        {
                            int16_t rbp_3;
                            DIR* rdi_13;
                            if ((*(arg1 + 0x49) & 2) != 0)
                            {
                                int32_t rax_61 = sub_40a6b0(rbx_2, 0x406, 3);
                                rbx_2 = rax_61;
                                if (rax_61 >= 0)
                                {
                                    goto label_406a0a;
                                }
                                rdi_13 = r13[3];
                                rbp_3 = (*(r13 + 0x72) | 1);
                                if (r12 == 0)
                                {
                                label_406d9a:
                                    *(r13 + 0x72) = rbp_3;
                                    closedir(rdi_13);
                                    rdi_1 = arg1[9];
                                label_406a6f:
                                    r13[3] = 0;
                                    var_39_1 = 0;
                                    goto label_406594;
                                }
                                if (r14_2 == 0)
                                {
                                    goto label_406d9a;
                                }
                            label_406a3e:
                                r13[8] = *__errno_location();
                            label_406a42:
                                *(r13 + 0x72) = rbp_3;
                                closedir(rdi_13);
                                rdi_1 = arg1[9];
                                r13[3] = 0;
                                if (((rdi_1 & 0x200) != 0 && rbx_2 >= 0))
                                {
                                    close(rbx_2);
                                    rdi_1 = arg1[9];
                                }
                                goto label_406a6f;
                            }
                        label_406a0a:
                            if (sub_406220(arg1, r13, rbx_2, nullptr) == 0)
                            {
                                goto label_40658b;
                            }
                            rdi_13 = r13[3];
                            rbp_3 = (*(r13 + 0x72) | 1);
                            if (r12 == 0)
                            {
                                goto label_406a42;
                            }
                            if (r14_2 != 0)
                            {
                                goto label_406a3e;
                            }
                            goto label_406a42;
                        }
                    }
                    var_39_1 = 0;
                    rdi_1 = arg1[9];
                    goto label_406594;
                }
                if ((((!cond:2_1) && (rdi_11 & 0x100) != 0) && rax_35 == 0))
                {
                    var_80 = nullptr;
                    *__errno_location() = 0xc;
                }
            }
        }
        if (((rax_34 >= 0 && rax_35 == 0) || rax_34 < 0))
        {
            r13[3] = 0;
            if (arg2 != 3)
            {
                goto label_406cc5;
            }
            goto label_406def;
        }
    }
    else if (dirfd(rdi) < 0)
    {
        closedir(r13[3]);
        r13[3] = 0;
        if (arg2 != 3)
        {
            goto label_406cc5;
        }
    label_406def:
        r13[0xe] = 4;
        r13[8] = *__errno_location();
    label_406cc5:
        var_80 = nullptr;
    }
    else
    {
        if (arg1[8] != 0)
        {
            var_60_1 = -1;
        label_40658b:
            var_39_1 = 1;
            rdi_1 = arg1[9];
            goto label_406594;
        }
        var_60_1 = 0x186a0;
        rdi_1 = arg1[9];
        var_39_1 = 1;
    label_406594:
        int64_t rcx_1 = r13[9];
        int64_t var_88_1 = rcx_1;
        int64_t var_50_1 = (rcx_1 - 1);
        if (*((r13[7] + rcx_1) - 1) != 0x2f)
        {
            var_50_1 = rcx_1;
            var_88_1 = (rcx_1 + 1);
        }
        void* var_58_1 = nullptr;
        if ((rdi_1 & 4) != 0)
        {
            char* rax_5 = (var_50_1 + arg1[4]);
            *rax_5 = 0x2f;
            var_58_1 = &rax_5[1];
        }
        char var_3a_1 = 0;
        uint64_t rbp_1 = 0;
        int64_t var_78_1 = (arg1[6] - var_88_1);
        void* var_90_1 = nullptr;
        int64_t rax_9 = (r13[0xb] + 1);
        var_80 = nullptr;
        while (true)
        {
            DIR* r15_2 = r13[3];
            int32_t* rax_13;
            struct dirent64* rax_14;
            int64_t* r13_2;
            int64_t* r15_4;
            if (r15_2 == 0)
            {
                r13_2 = r13;
                r15_4 = arg1;
            }
            else
            {
                rax_13 = __errno_location();
                *rax_13 = 0;
                rax_14 = readdir(r15_2);
                if (rax_14 == 0)
                {
                    int32_t rax_52 = *rax_13;
                    r13_2 = r13;
                    r15_4 = arg1;
                    if (rax_52 != 0)
                    {
                        r13_2[8] = rax_52;
                        int64_t rax_54 = (rdi | rbp_1);
                        r13_2[0xe] = (((rax_54 - rax_54) & 0xfffd) + 7);
                    }
                    DIR* rdi_23 = r13_2[3];
                    if (rdi_23 != 0)
                    {
                        closedir(rdi_23);
                        r13_2[3] = 0;
                    }
                }
            }
            if (((r15_2 == 0 || (r15_2 != 0 && rax_14 == 0)) && var_3a_1 != 0))
            {
            label_40682f:
                void* rax_28 = r15_4[1];
                int64_t rcx_5 = r15_4[4];
                if (rax_28 != 0)
                {
                    do
                    {
                        int64_t rdx_8 = *(rax_28 + 0x30);
                        if (rdx_8 != (rax_28 + 0x108))
                        {
                            *(rax_28 + 0x30) = ((rdx_8 - *(rax_28 + 0x38)) + rcx_5);
                        }
                        *(rax_28 + 0x38) = rcx_5;
                        rax_28 = *(rax_28 + 0x10);
                    } while (rax_28 != 0);
                }
                void* const rax_29 = var_80;
                while (*(rax_29 + 0x58) >= 0)
                {
                    int64_t rdx_12 = *(rax_29 + 0x30);
                    if (rdx_12 != (rax_29 + 0x108))
                    {
                        *(rax_29 + 0x30) = ((rdx_12 - *(rax_29 + 0x38)) + rcx_5);
                    }
                    void* rdx_11 = *(rax_29 + 0x10);
                    *(rax_29 + 0x38) = rcx_5;
                    if (rdx_11 == 0)
                    {
                        rdx_11 = *(rax_29 + 8);
                    }
                    rax_29 = rdx_11;
                }
            }
            if ((r15_2 != 0 && rax_14 != 0))
            {
                void* r15_1;
                if ((arg1[9] & 0x20) != 0)
                {
                label_4066b3:
                    uint64_t rax_15 = strlen(&rax_14->d_name);
                    void* rax_16 = sub_405d80(arg1, &rax_14->d_name, rax_15);
                    r15_1 = rax_16;
                    if (rax_16 == 0)
                    {
                    label_406aab:
                        int32_t rbx_3 = *rax_13;
                        free(r15_1);
                        sub_405e10(var_80);
                        closedir(r13[3]);
                        r13[3] = 0;
                        r13[0xe] = 7;
                        var_80 = nullptr;
                        arg1[9] = (arg1[9] | 0x4000);
                        *rax_13 = rbx_3;
                        break;
                    }
                    if (var_78_1 <= rax_15)
                    {
                        int64_t rax_23 = arg1[4];
                        char rax_25 = sub_406100(&arg1[4], &arg1[6], ((var_50_1 + rax_15) + 2));
                        if (rax_25 == 0)
                        {
                            goto label_406aab;
                        }
                        void* rdx_5 = arg1[4];
                        if (rdx_5 == rax_23)
                        {
                            rax_25 = var_3a_1;
                        }
                        else
                        {
                            void* rdx_6 = (rdx_5 + var_88_1);
                            if ((arg1[9] & 4) == 0)
                            {
                                rdx_6 = var_58_1;
                            }
                            var_58_1 = rdx_6;
                        }
                        var_3a_1 = rax_25;
                        var_78_1 = (arg1[6] - var_88_1);
                        goto label_4066e3;
                    }
                label_4066e3:
                    int64_t r8_2 = (rax_15 + var_88_1);
                    if ((rax_15 + var_88_1) < rax_15)
                    {
                        free(r15_1);
                        sub_405e10(var_80);
                        closedir(r13[3]);
                        r13[3] = 0;
                        r13[0xe] = 7;
                        var_80 = nullptr;
                        arg1[9] = (arg1[9] | 0x4000);
                        *rax_13 = 0x24;
                        break;
                    }
                    void* rsi_1 = (r15_1 + 0x108);
                    *(r15_1 + 0x58) = rax_9;
                    int64_t rax_18 = *arg1;
                    *(r15_1 + 0x48) = r8_2;
                    *(r15_1 + 8) = rax_18;
                    *(r15_1 + 0x80) = rax_14->d_ino;
                    int32_t rax_20 = arg1[9];
                    if ((rax_20 & 4) != 0)
                    {
                        *(r15_1 + 0x30) = *(r15_1 + 0x38);
                        memmove(var_58_1, rsi_1, (*(r15_1 + 0x60) + 1));
                        rax_20 = arg1[9];
                    }
                    else
                    {
                        *(r15_1 + 0x30) = rsi_1;
                    }
                    if ((arg1[8] == 0 || (arg1[8] != 0 && (*rax_20[1] & 4) != 0)))
                    {
                        uint32_t rdx_2 = rax_14->d_type;
                        uint64_t rdx_3 = (rdx_2 - 1);
                        int64_t rax_10;
                        if (((rax_20 & 0x18) != 0x18 || ((rax_20 & 0x18) == 0x18 && (rdx_2 & 0xfb) == 0)))
                        {
                            *(r15_1 + 0x70) = 0xb;
                            if (rdx_3 > 0xb)
                            {
                                *(r15_1 + 0x90) = 0;
                                rax_10 = 2;
                            }
                            else
                            {
                                *(r15_1 + 0x90) = *((rdx_3 << 2) + 0x40c7c0);
                                rax_10 = 2;
                            }
                        }
                        if (((rax_20 & 0x18) == 0x18 && (rdx_2 & 0xfb) != 0))
                        {
                            *(r15_1 + 0x70) = 0xb;
                            if (rdx_3 <= 0xb)
                            {
                                *(r15_1 + 0x90) = *((rdx_3 << 2) + 0x40c7c0);
                                rax_10 = 1;
                            }
                            else
                            {
                                *(r15_1 + 0x90) = 0;
                                rax_10 = 1;
                            }
                        }
                        *(r15_1 + 0xa8) = rax_10;
                    }
                    if ((arg1[8] != 0 && (*rax_20[1] & 4) == 0))
                    {
                        *(r15_1 + 0x70) = sub_405ad0(arg1, r15_1, 0);
                    }
                    *(r15_1 + 0x10) = 0;
                    if (var_80 != 0)
                    {
                        rbp_1 = (rbp_1 + 1);
                        *(var_90_1 + 0x10) = r15_1;
                        if (rbp_1 < var_60_1)
                        {
                            goto label_406663;
                        }
                        goto label_406821;
                    }
                    var_80 = r15_1;
                    rbp_1 = (rbp_1 + 1);
                    if (rbp_1 < var_60_1)
                    {
                        goto label_406663;
                    }
                label_406821:
                    r13_2 = r13;
                    r15_4 = arg1;
                    if (var_3a_1 != 0)
                    {
                        goto label_40682f;
                    }
                }
                else
                {
                    if (rax_14->d_name[0] != 0x2e)
                    {
                        goto label_4066b3;
                    }
                    if ((rax_14->d_name[1] != 0 && rax_14->d_name[1] != 0x2e))
                    {
                        goto label_4066b3;
                    }
                    r15_1 = var_90_1;
                label_406663:
                    var_90_1 = r15_1;
                    continue;
                }
            }
            if ((r15_4[9] & 4) != 0)
            {
                if ((r15_4[6] == var_88_1 || (r15_4[6] != var_88_1 && rbp_1 == 0)))
                {
                    var_58_1 = (var_58_1 - 1);
                }
                *var_58_1 = 0;
            }
            if ((rdi == 0 && var_39_1 != 0))
            {
                if ((arg2 != 1 && rbp_1 != 0))
                {
                    goto label_406bb1;
                }
                int32_t rax_50;
                if (r13_2[0xb] != 0)
                {
                    rax_50 = sub_406220(r15_4, r13_2[1], 0xffffffff, &data_40c7aa) != 0;
                }
                else
                {
                    rax_50 = sub_4060a0(r15_4) != 0;
                }
                if (rax_50 != 0)
                {
                    r13_2[0xe] = 7;
                    r15_4[9] = (r15_4[9] | 0x4000);
                    sub_405e10(var_80);
                    var_80 = nullptr;
                    break;
                }
            }
            if (rbp_1 == 0)
            {
                if (arg2 == 3)
                {
                    int16_t rax_66 = r13_2[0xe];
                    if ((rax_66 != 4 && rax_66 != 7))
                    {
                        r13_2[0xe] = 6;
                    }
                }
                sub_405e10(var_80);
                var_80 = nullptr;
                break;
            }
        label_406bb1:
            int64_t rax_51 = r15_4[8];
            int64_t rax_64;
            if (rbp_1 > 0x2710)
            {
                if (rax_51 != 0)
                {
                label_406be0:
                    /* tailcall */
                    return sub_405c80(r15_4, var_80, rbp_1);
                }
                rax_64 = sub_405ea0(r13_2);
                if ((rax_64 == 0x6969 || rax_64 == 0x1021994))
                {
                    rax_51 = r15_4[8];
                }
                if ((rax_64 != 0x6969 && rax_64 != 0x1021994))
                {
                    r15_4[8] = 0x405aa0;
                    void* rax_65 = sub_405c80(r15_4, var_80, rbp_1);
                    r15_4[8] = 0;
                    var_80 = rax_65;
                }
            }
            if ((((((rbp_1 > 0x2710 && rax_51 == 0) && (rax_64 == 0x6969 || rax_64 == 0x1021994)) || rbp_1 <= 0x2710) && rax_51 != 0) && rbp_1 != 1))
            {
                goto label_406be0;
            }
            break;
        }
    }
    return var_80;
}

void** fts_open(int64_t* arg1, int32_t arg2, int64_t arg3)
{
    void** rbx;
    if ((((arg2 & 0xffffe000) != 0 || ((arg2 & 0xffffe000) == 0 && (arg2 & 0x204) == 0x204)) || (((arg2 & 0xffffe000) == 0 && (arg2 & 0x204) != 0x204) && (arg2 & 0x12) == 0)))
    {
        rbx = nullptr;
        *__errno_location() = 0x16;
    }
    if ((((arg2 & 0xffffe000) == 0 && (arg2 & 0x204) != 0x204) && (arg2 & 0x12) != 0))
    {
        void** rax_3 = calloc(0x80, 1);
        rbx = rax_3;
        if (rax_3 != 0)
        {
            rax_3[8] = arg3;
            if ((arg2 & 2) != 0)
            {
                int32_t rax_21;
                *rax_21[1] = (*arg2[1] & 0xfd);
                rbx[9] = (rax_21 | 4);
            }
            else
            {
                rax_3[9] = arg2;
            }
            char* rdi = *arg1;
            *(rbx + 0x2c) = 0xffffff9c;
            int64_t rdx;
            if (rdi == 0)
            {
                rdx = 0x1000;
            }
            else
            {
                int64_t* r15_1 = arg1;
                uint64_t r12_1 = 0;
                do
                {
                    uint64_t rax_4 = strlen(rdi);
                    if (r12_1 < rax_4)
                    {
                        r12_1 = rax_4;
                    }
                    r15_1 = &r15_1[1];
                    rdi = *r15_1;
                } while (rdi != 0);
                rdx = (r12_1 + 1);
                if (rdx < 0x1000)
                {
                    rdx = 0x1000;
                }
            }
            char rax_5 = sub_406100(&rbx[4], &rbx[6], rdx);
            char var_42_1 = rax_5;
            if (rax_5 == 0)
            {
                goto label_4071cb;
            }
            char* r15_2 = *arg1;
            void* const var_50_1;
            void* rax_6;
            void* r12_2;
            if (r15_2 == 0)
            {
                var_50_1 = nullptr;
                if (arg3 == 0)
                {
                label_407202:
                    r12_2 = nullptr;
                label_407146:
                    void* rax_17 = sub_405d80(rbx, 0x40c917, 0);
                    *rbx = rax_17;
                    if (rax_17 != 0)
                    {
                        *(rax_17 + 0x10) = r12_2;
                        int32_t rdi_7 = rbx[9];
                        *(rax_17 + 0x70) = 9;
                        if (sub_406170(rdi_7, &rbx[0xb]) == 0)
                        {
                            goto label_4071b3;
                        }
                        int32_t rsi_4 = rbx[9];
                        if ((rsi_4 & 0x204) == 0)
                        {
                            int32_t rax_25 = sub_4061d0(*(rbx + 0x2c), rsi_4, &data_40c7ab);
                            rbx[5] = rax_25;
                            if (rax_25 < 0)
                            {
                                rbx[9] = (rbx[9] | 4);
                            }
                        }
                        sub_409f60(&rbx[0xc], 0xffffffff);
                    }
                    else
                    {
                    label_4071b3:
                        sub_405e10(r12_2);
                        free(var_50_1);
                    label_4071c6:
                        free(rbx[4]);
                    label_4071cb:
                        void** rdi_12 = rbx;
                        rbx = nullptr;
                        free(rdi_12);
                    }
                }
            }
            else
            {
                rax_6 = sub_405d80(rbx, 0x40c917, 0);
                var_50_1 = rax_6;
                if (rax_6 != 0)
                {
                    r15_2 = *arg1;
                    *(rax_6 + 0x58) = -1;
                    *(rax_6 + 0x68) = -1;
                }
            }
            if (((r15_2 == 0 && arg3 != 0) || ((r15_2 != 0 && rax_6 != 0) && arg3 != 0)))
            {
                var_42_1 = ((rbx[9] >> 0xa) & 1);
            }
            if ((((r15_2 == 0 && arg3 != 0) || ((r15_2 != 0 && rax_6 != 0) && arg3 != 0)) || ((r15_2 != 0 && rax_6 != 0) && arg3 == 0)))
            {
                if (r15_2 == 0)
                {
                    goto label_407202;
                }
                void* const var_40_1 = nullptr;
                r12_2 = nullptr;
                uint64_t rbp_4 = 0;
                char rax_11 = (((arg2 >> 0xc) ^ 1) & 1);
                void* rax_13;
                do
                {
                    uint64_t rax_12 = strlen(r15_2);
                    if ((rax_12 > 2 && (rax_11 != 0 && r15_2[(rax_12 - 1)] == 0x2f)))
                    {
                        while (r15_2[(rax_12 - 2)] == 0x2f)
                        {
                            rax_12 = (rax_12 - 1);
                            if (rax_12 == 1)
                            {
                                break;
                            }
                        }
                    }
                    rax_13 = sub_405d80(rbx, r15_2, rax_12);
                    if (rax_13 == 0)
                    {
                        break;
                    }
                    *(rax_13 + 0x58) = 0;
                    *(rax_13 + 8) = var_50_1;
                    *(rax_13 + 0x30) = (rax_13 + 0x108);
                    if ((r12_2 == 0 || (r12_2 != 0 && var_42_1 == 0)))
                    {
                        *(rax_13 + 0x70) = sub_405ad0(rbx, rax_13, 0);
                        if (arg3 != 0)
                        {
                        label_4070b8:
                            *(rax_13 + 0x10) = r12_2;
                            r12_2 = rax_13;
                        }
                        else
                        {
                            *(rax_13 + 0x10) = 0;
                            if (r12_2 != 0)
                            {
                                goto label_407250;
                            }
                            var_40_1 = rax_13;
                            r12_2 = rax_13;
                        }
                    }
                    if ((r12_2 != 0 && var_42_1 != 0))
                    {
                        *(rax_13 + 0xa8) = 2;
                        *(rax_13 + 0x70) = 0xb;
                        if (arg3 != 0)
                        {
                            goto label_4070b8;
                        }
                        *(rax_13 + 0x10) = 0;
                    label_407250:
                        void* const rax_24 = var_40_1;
                        var_40_1 = rax_13;
                        *(rax_24 + 0x10) = rax_13;
                    }
                    rbp_4 = (rbp_4 + 1);
                    r15_2 = arg1[rbp_4];
                } while (r15_2 != 0);
                if (rax_13 == 0)
                {
                    goto label_4071b3;
                }
                if ((arg3 != 0 && rbp_4 > 1))
                {
                    r12_2 = sub_405c80(rbx, r12_2, rbp_4);
                }
                goto label_407146;
            }
            if ((r15_2 != 0 && rax_6 == 0))
            {
                goto label_4071c6;
            }
        }
    }
    return rbx;
}

uint64_t fts_close(int64_t* arg1)
{
    void* rdi = *arg1;
    if (rdi != 0)
    {
        void* rbx_1;
        if (*(rdi + 0x58) < 0)
        {
            rbx_1 = rdi;
        }
        else
        {
            while (true)
            {
                rbx_1 = *(rdi + 0x10);
                if (rbx_1 != 0)
                {
                    free(rdi);
                    rdi = rbx_1;
                    if (*(rbx_1 + 0x58) < 0)
                    {
                        break;
                    }
                }
                else
                {
                    rbx_1 = *(rdi + 8);
                    free(rdi);
                    rdi = rbx_1;
                    if (*(rbx_1 + 0x58) < 0)
                    {
                        break;
                    }
                }
            }
        }
        free(rbx_1);
    }
    void* rdi_2 = arg1[1];
    if (rdi_2 != 0)
    {
        sub_405e10(rdi_2);
    }
    free(arg1[2]);
    free(arg1[4]);
    int16_t rax = arg1[9];
    int32_t rbx_2;
    if ((*rax[1] & 2) != 0)
    {
        int32_t rdi_5 = *(arg1 + 0x2c);
        if (rdi_5 < 0)
        {
            goto label_407322;
        }
        if (close(rdi_5) == 0)
        {
            goto label_407322;
        }
        rbx_2 = *__errno_location();
    }
    else if ((rax & 4) != 0)
    {
    label_407322:
        rbx_2 = 0;
    }
    else
    {
        int32_t rax_2 = fchdir(arg1[5]);
        int32_t rax_8;
        int32_t* r12_1;
        if (rax_2 != 0)
        {
            int32_t* rax_7 = __errno_location();
            r12_1 = rax_7;
            rbx_2 = *rax_7;
            rax_8 = close(arg1[5]);
        }
        else
        {
            if (close(arg1[5]) == 0)
            {
                goto label_407322;
            }
            r12_1 = __errno_location();
        }
        if ((((rax_2 != 0 && rax_8 != 0) && rbx_2 == 0) || rax_2 == 0))
        {
            rbx_2 = *r12_1;
        }
    }
    sub_405e60(&arg1[0xc]);
    int64_t* rdi_7 = arg1[0xa];
    if (rdi_7 != 0)
    {
        sub_4097e0(rdi_7);
    }
    int64_t* rdi_8 = arg1[0xb];
    if ((arg1[9] & 0x102) == 0)
    {
        free(rdi_8);
    }
    else if (rdi_8 != 0)
    {
        sub_4097e0(rdi_8);
    }
    free(arg1);
    if (rbx_2 != 0)
    {
        *__errno_location() = rbx_2;
        rbx_2 = -1;
    }
    return rbx_2;
}

int64_t* fts_read(int64_t* arg1)
{
    int64_t* rbp = *arg1;
    if (rbp == 0)
    {
        goto label_407548;
    }
    int32_t rdx_1 = arg1[9];
    if ((*rdx_1[1] & 0x40) != 0)
    {
        goto label_407548;
    }
    int16_t rax_1 = *(rbp + 0x74);
    *(rbp + 0x74) = 3;
    if (rax_1 == 1)
    {
        rbp[0xe] = sub_405ad0(arg1, rbp, 0);
        goto label_407555;
    }
    int16_t rcx_1 = rbp[0xe];
    int16_t rax_16;
    int64_t* rbx_1;
    if ((rax_1 == 2 && (rcx_1 - 0xc) <= 1))
    {
        int16_t rax_22 = sub_405ad0(arg1, rbp, 1);
        rbp[0xe] = rax_22;
        if (rax_22 == 1)
        {
            int32_t rsi_17 = arg1[9];
            if ((rsi_17 & 4) == 0)
            {
                int32_t rax_43 = sub_4061d0(*(arg1 + 0x2c), rsi_17, &data_40c7ab);
                *(rbp + 0x44) = rax_43;
                if (rax_43 < 0)
                {
                    int32_t rax_45 = *__errno_location();
                    rbp[0xe] = 7;
                    rbp[8] = rax_45;
                    *arg1 = rbp;
                    goto label_407555;
                }
                *(rbp + 0x72) = (*(rbp + 0x72) | 2);
                rax_16 = rbp[0xe];
                rbx_1 = rbp;
            label_407757:
                *arg1 = rbx_1;
                if (rax_16 == 0xb)
                {
                    goto label_4077e0;
                }
                goto label_407761;
            }
            *arg1 = rbp;
            rbx_1 = rbp;
        }
        else
        {
            *arg1 = rbp;
            if (rax_22 != 0xb)
            {
                goto label_407555;
            }
            rbx_1 = rbp;
        label_4077e0:
            int64_t rax_23 = rbx_1[0x15];
            if (rax_23 != 2)
            {
                if (rax_23 != 1)
                {
                label_401c18:
                    abort();
                    /* no return */
                }
            label_407809:
                return rbx_1;
            }
            void* rbp_3 = rbx_1[1];
            if (*(rbp_3 + 0x68) != 0)
            {
            label_40796b:
                rax_16 = sub_405ad0(arg1, rbx_1, 0);
                int32_t rdx_14 = rbx_1[0x12];
                rbx_1[0xe] = rax_16;
                if ((rdx_14 & 0xf000) != 0x4000)
                {
                    goto label_407761;
                }
                if (rbx_1[0xb] != 0)
                {
                    int64_t rdx_16 = (*(rbp_3 + 0x68) - 1);
                    if (rdx_16 <= -3)
                    {
                        *(rbp_3 + 0x68) = rdx_16;
                    }
                    if (rax_16 == 1)
                    {
                        goto label_40778b;
                    }
                    goto label_407809;
                }
                if (rax_16 == 1)
                {
                    goto label_407779;
                }
                goto label_407809;
            }
            if ((arg1[9] & 0x18) != 0x18)
            {
                goto label_40796b;
            }
            if (sub_405fc0(rbp_3) != 2)
            {
                goto label_40796b;
            }
            rax_16 = rbx_1[0xe];
        label_407761:
            rbp = rbx_1;
            if (rax_16 != 1)
            {
                goto label_407555;
            }
        }
        if (rbx_1[0xb] != 0)
        {
            goto label_40778b;
        }
    label_407779:
        arg1[3] = rbx_1[0xf];
    label_40778b:
        rbp = rbx_1;
        if (sub_4063f0(arg1[9], &arg1[0xb], rbx_1) == 0)
        {
            rbp = nullptr;
            *__errno_location() = 0xc;
        }
        goto label_407555;
    }
    if ((((rax_1 == 2 && (rcx_1 - 0xc) > 1) && rcx_1 == 1) || ((rax_1 != 2 && rcx_1 == 1) && rax_1 != 4)))
    {
        if ((rdx_1 & 0x40) == 0)
        {
        label_40758b:
            void* rdi_4 = arg1[1];
            if (rdi_4 == 0)
            {
                goto label_407841;
            }
            if ((*rdx_1[1] & 0x20) != 0)
            {
                *rdx_1[1] = (*rdx_1[1] & 0xdf);
                arg1[9] = rdx_1;
                sub_405e10(rdi_4);
                arg1[1] = 0;
            label_407841:
                int64_t* rax_26 = sub_406540(arg1, 3);
                rbx_1 = rax_26;
                arg1[1] = rax_26;
                if (rax_26 == 0)
                {
                    int32_t rdi_18 = arg1[9];
                    if ((rdi_18 & 0x4000) != 0)
                    {
                        goto label_407548;
                    }
                    if ((rbp[8] != 0 && rbp[0xe] != 4))
                    {
                        rbp[0xe] = 7;
                    }
                    sub_4064a0(rdi_18, &arg1[0xb], rbp);
                    goto label_407555;
                }
            label_4075f5:
                arg1[1] = 0;
                goto label_40771a;
            }
            if (sub_406220(arg1, rbp, 0xffffffff, rbp[6]) == 0)
            {
                rbx_1 = arg1[1];
            }
            else
            {
                rbx_1 = arg1[1];
                int32_t rax_10 = *__errno_location();
                *(rbp + 0x72) = (*(rbp + 0x72) | 1);
                rbp[8] = rax_10;
                if (rbx_1 != 0)
                {
                    int64_t* rax_11 = rbx_1;
                    do
                    {
                        rax_11[6] = *(rax_11[1] + 0x30);
                        rax_11 = rax_11[2];
                    } while (rax_11 != 0);
                }
            }
            goto label_4075f5;
        }
        if (rbp[0xf] == arg1[3])
        {
            goto label_40758b;
        }
    }
    if (((rcx_1 == 1 && rax_1 == 4) || ((((rax_1 == 2 && (rcx_1 - 0xc) > 1) && rcx_1 == 1) || ((rax_1 != 2 && rcx_1 == 1) && rax_1 != 4)) && (rdx_1 & 0x40) != 0)))
    {
        if ((*(rbp + 0x72) & 2) == 0)
        {
            goto label_40761c;
        }
        close(*(rbp + 0x44));
    label_40761c:
        void* rdi_6 = arg1[1];
        if (rdi_6 != 0)
        {
            sub_405e10(rdi_6);
            arg1[1] = 0;
        }
        int32_t rdi_7 = arg1[9];
        rbp[0xe] = 6;
        sub_4064a0(rdi_7, &arg1[0xb], rbp);
        goto label_407555;
    }
    if (((rax_1 != 2 && rcx_1 != 1) || ((rax_1 == 2 && (rcx_1 - 0xc) > 1) && rcx_1 != 1)))
    {
        int16_t rax_2;
        do
        {
            rbx_1 = rbp[2];
            if (rbx_1 == 0)
            {
                break;
            }
            *arg1 = rbx_1;
            free(rbp);
            if (rbx_1[0xb] == 0)
            {
                break;
            }
            rax_2 = *(rbx_1 + 0x74);
            rbp = rbx_1;
        } while (rax_2 == 4);
        if ((rbx_1 != 0 && rbx_1[0xb] == 0))
        {
            if (sub_4060a0(arg1) != 0)
            {
                arg1[9] = (arg1[9] | 0x4000);
            label_407548:
                rbp = nullptr;
            label_407555:
                return rbp;
            }
            int64_t* rdi_9 = arg1[0xb];
            if ((arg1[9] & 0x102) == 0)
            {
                free(rdi_9);
            }
            else if (rdi_9 != 0)
            {
                sub_4097e0(rdi_9);
            }
            int64_t rdx_7 = rbx_1[0xc];
            void* rbp_1 = &rbx_1[0x21];
            int64_t rdi_10 = arg1[4];
            rbx_1[9] = rdx_7;
            memmove(rdi_10, rbp_1, (rdx_7 + 1));
            char* rax_13 = strrchr(rbp_1, 0x2f);
            if ((rax_13 != 0 && (rbp_1 != rax_13 || (rbp_1 == rax_13 && *(rbp_1 + 1) != 0))))
            {
                uint64_t rax_14 = strlen(&rax_13[1]);
                memmove(rbp_1, &rax_13[1], (rax_14 + 1));
                rbx_1[0xc] = rax_14;
            }
            int64_t rax_15 = arg1[4];
            int32_t rdi_14 = arg1[9];
            rbx_1[7] = rax_15;
            rbx_1[6] = rax_15;
            sub_406170(rdi_14, &arg1[0xb]);
            rax_16 = rbx_1[0xe];
            goto label_407757;
        }
        if (rbx_1 == 0)
        {
            rbx_1 = rbp[1];
            if (rbx_1[3] != 0)
            {
                int64_t rax_34 = rbx_1[9];
                char* rdx_17 = arg1[4];
                *arg1 = rbx_1;
                rdx_17[rax_34] = 0;
                int64_t* rax_35 = sub_406540(arg1, 3);
                rbx_1 = rax_35;
                if (rax_35 != 0)
                {
                    free(rbp);
                label_40771a:
                    void* rcx_4 = rbx_1[1];
                    int64_t rdx_10 = *(rcx_4 + 0x48);
                    int64_t rax_17 = (rdx_10 - 1);
                    if (*((*(rcx_4 + 0x38) + rdx_10) - 1) != 0x2f)
                    {
                        rax_17 = rdx_10;
                    }
                    char* rax_18 = (rax_17 + arg1[4]);
                    *rax_18 = 0x2f;
                    memmove(&rax_18[1], &rbx_1[0x21], (rbx_1[0xc] + 1));
                    rax_16 = rbx_1[0xe];
                    goto label_407757;
                }
                if ((*(arg1 + 0x49) & 0x40) != 0)
                {
                    goto label_407548;
                }
                rbx_1 = rbp[1];
            }
            *arg1 = rbx_1;
            free(rbp);
            if (rbx_1[0xb] == -1)
            {
                rbp = nullptr;
                free(rbx_1);
                *__errno_location() = 0;
                *arg1 = 0;
                goto label_407555;
            }
            if (rbx_1[0xe] == 0xb)
            {
                goto label_401c18;
            }
            arg1[4][rbx_1[9]] = 0;
            int32_t rax_29;
            int32_t rdi_2;
            if (rbx_1[0xb] == 0)
            {
                rax_29 = sub_4060a0(arg1);
                if (rax_29 == 0)
                {
                label_40750b:
                    rdi_2 = arg1[9];
                }
            }
            else
            {
                char rax_4 = *(rbx_1 + 0x72);
                if ((rax_4 & 2) != 0)
                {
                    int16_t rax_27 = arg1[9];
                    int32_t rdi_19 = *(rbx_1 + 0x44);
                    if ((rax_27 & 4) == 0)
                    {
                        if ((*rax_27[1] & 2) != 0)
                        {
                            sub_406030(arg1, rdi_19, 1);
                            rdi_19 = *(rbx_1 + 0x44);
                        }
                        else
                        {
                            if (fchdir() != 0)
                            {
                                rbx_1[8] = *__errno_location();
                                arg1[9] = (arg1[9] | 0x4000);
                            }
                            rdi_19 = *(rbx_1 + 0x44);
                        }
                    }
                    close(rdi_19);
                    goto label_40750b;
                }
                if ((rax_4 & 1) != 0)
                {
                    goto label_40750b;
                }
                if (sub_406220(arg1, rbx_1[1], 0xffffffff, &data_40c7aa) == 0)
                {
                    goto label_40750b;
                }
            }
            if (((rbx_1[0xb] == 0 && rax_29 != 0) || rbx_1[0xb] != 0))
            {
                rbx_1[8] = *__errno_location();
                arg1[9] = (arg1[9] | 0x4000);
                if (rbx_1[0xe] == 2)
                {
                    goto label_407548;
                }
                rdi_2 = arg1[9];
            }
            if (((((rbx_1[0xb] == 0 && rax_29 == 0) && rbx_1[0xe] != 2) || (rbx_1[0xb] == 0 && rax_29 != 0)) || rbx_1[0xb] != 0))
            {
                if (rbx_1[8] != 0)
                {
                    rbx_1[0xe] = 7;
                }
                else
                {
                    rbx_1[0xe] = 6;
                    sub_4064a0(rdi_2, &arg1[0xb], rbx_1);
                    rdi_2 = arg1[9];
                }
            }
            if ((rdi_2 & 0x4000) != 0)
            {
                goto label_407548;
            }
            goto label_407809;
        }
        if (rax_2 == 2)
        {
            int16_t rax_36 = sub_405ad0(arg1, rbx_1, 1);
            rbx_1[0xe] = rax_36;
            if (rax_36 == 1)
            {
                int32_t rsi_18 = arg1[9];
                if ((rsi_18 & 4) == 0)
                {
                    int32_t rax_41 = sub_4061d0(*(arg1 + 0x2c), rsi_18, &data_40c7ab);
                    *(rbx_1 + 0x44) = rax_41;
                    if (rax_41 < 0)
                    {
                        int32_t rax_47 = *__errno_location();
                        rbx_1[0xe] = 7;
                        rbx_1[8] = rax_47;
                    }
                    else
                    {
                        *(rbx_1 + 0x72) = (*(rbx_1 + 0x72) | 2);
                    }
                }
            }
            *(rbx_1 + 0x74) = 3;
        }
        goto label_40771a;
    }
}

int64_t fts_set(int64_t arg1, void* arg2, int32_t arg3)
{
    if (arg3 > 4)
    {
        *__errno_location() = 0x16;
        return 1;
    }
    *(arg2 + 0x74) = arg3;
    return 0;
}

void* fts_children(int64_t* arg1, int32_t arg2)
{
    int32_t* rax = __errno_location();
    if ((arg2 & 0xffffdfff) != 0)
    {
        *rax = 0x16;
        return 0;
    }
    void* r12 = *arg1;
    *rax = 0;
    if ((*(arg1 + 0x49) & 0x40) != 0)
    {
        return 0;
    }
    int16_t rdx = *(r12 + 0x70);
    if (rdx == 9)
    {
        return *(r12 + 0x10);
    }
    void* rax_1 = nullptr;
    if (rdx == 1)
    {
        void* rdi = arg1[1];
        if (rdi != 0)
        {
            sub_405e10(rdi);
        }
        int32_t r14_1 = 1;
        if (arg2 == 0x2000)
        {
            arg1[9] = (arg1[9] | 0x2000);
            r14_1 = 2;
        }
        int32_t rsi;
        if ((*(r12 + 0x58) == 0 && **(r12 + 0x30) != 0x2f))
        {
            rsi = arg1[9];
        }
        if (((*(r12 + 0x58) != 0 || (*(r12 + 0x58) == 0 && **(r12 + 0x30) == 0x2f)) || ((*(r12 + 0x58) == 0 && **(r12 + 0x30) != 0x2f) && (rsi & 4) != 0)))
        {
            rax_1 = sub_406540(arg1, r14_1);
            arg1[1] = rax_1;
        }
        if (((*(r12 + 0x58) == 0 && **(r12 + 0x30) != 0x2f) && (rsi & 4) == 0))
        {
            int32_t rax_3 = sub_4061d0(*(arg1 + 0x2c), rsi, &data_40c7ab);
            if (rax_3 < 0)
            {
                arg1[1] = 0;
                rax_1 = nullptr;
            }
            else
            {
                arg1[1] = sub_406540(arg1, r14_1);
                int32_t rax_5;
                if ((*(arg1 + 0x49) & 2) != 0)
                {
                    sub_406030(arg1, rax_3, 1);
                }
                else
                {
                    rax_5 = fchdir(rax_3);
                    if (rax_5 != 0)
                    {
                        int32_t rbx_1 = *rax;
                        close(rax_3);
                        rax_1 = nullptr;
                        *rax = rbx_1;
                    }
                    else
                    {
                        close(rax_3);
                    }
                }
                if (((*(arg1 + 0x49) & 2) != 0 || ((*(arg1 + 0x49) & 2) == 0 && rax_5 == 0)))
                {
                    rax_1 = arg1[1];
                }
            }
        }
    }
    return rax_1;
}

uint64_t sub_407d20(int64_t arg1, int32_t* arg2)
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

uint64_t sub_407e00(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
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
            goto label_408030;
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
                            goto label_407f56;
                        }
                    }
                    else
                    {
                        if (var_70_1 != 0)
                        {
                            goto label_407f56;
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
                        label_407f56:
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
        label_408030:
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
                    goto label_40805e;
                }
                *arg5 = r12;
            label_40805e:
                int32_t* rdx_4 = rbx[2];
                rax_14 = rbx[3];
                if (rdx_4 != 0)
                {
                    *rdx_4 = rax_14;
                    rax_14 = 0;
                }
            }
            goto label_40807c;
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
        label_40807c:
            return rax_14;
        }
    }
    if ((arg6 != 0 && *(arg2[*arg7] + 1) != 0x2d))
    {
        rax_14 = 0xffffffff;
        if (strchr(arg3, rax_1) != 0)
        {
            goto label_40807c;
        }
    }
    if (arg8 == 0)
    {
        goto label_407fee;
    }
    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: unrecognized option '%s%s'\n", 5), *arg2, arg9, r14, arg4);
label_407fee:
    *(arg7 + 0x20) = 0;
    *arg7 = (*arg7 + 1);
    arg7[2] = 0;
    return 0x3f;
}

uint64_t sub_408420(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
    int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8)
{
    int32_t r13 = arg7[1];
    if (arg1 <= 0)
    {
        goto label_40865c;
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
            goto label_4084e8;
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
        label_4084e8:
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
                    sub_407d20(arg2, arg7);
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
                void* const rdi = &data_40c8f9;
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
                        sub_407d20(arg2, arg7);
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
                    goto label_40865c;
                }
                *arg7 = rdx_2;
            label_40865c:
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
                            goto label_408760;
                        }
                        int32_t* var_88_2;
                        int32_t var_80_2;
                        void* const var_78_1;
                        if (rcx_9 == 0x2d)
                        {
                            *(arg7 + 0x20) = &r14_1[2];
                            var_78_1 = &data_40c8f9;
                            var_80_2 = r13;
                            var_88_2 = arg7;
                            goto label_4087d0;
                        }
                        if (arg6 == 0)
                        {
                            goto label_408760;
                        }
                        if (r14_1[2] == 0)
                        {
                            if (strchr(r15_1, rcx_9) != 0)
                            {
                                goto label_408760;
                            }
                            goto label_408721;
                        }
                    label_408721:
                        *(arg7 + 0x20) = &r14_1[1];
                        int32_t rax_12 = sub_407e00(rbp_1, arg2, r15_1, arg4, arg5, arg6, arg7, r13, &data_40c8fa);
                        r14_2 = rax_12;
                        if (rax_12 == 0xffffffff)
                        {
                            r14_1 = arg2[*arg7];
                        label_408760:
                            rdx = &r14_1[1];
                        label_4085a1:
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
                                        goto label_40879e;
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
                                    label_40879e:
                                        *(arg7 + 0x20) = r8_1;
                                        arg6 = 0;
                                        *(arg7 + 0x10) = 0;
                                        var_78_1 = &data_40c918;
                                        var_80_2 = r13;
                                        var_88_2 = arg7;
                                    label_4087d0:
                                        r14_2 = sub_407e00(rbp_1, arg2, r15_1, arg4, arg5, arg6, var_88_2, var_80_2, var_78_1);
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
                                    goto label_40888d;
                                }
                                int64_t rbp_2 = *arg2;
                                __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: invalid option -- '%c'\n", 5), rbp_2, r14_2);
                            label_40888d:
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
                        goto label_40865c;
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
            goto label_4084e8;
        }
        goto label_4085a1;
    }
}

uint64_t sub_408a50(int32_t arg1, int64_t* arg2, char* arg3)
{
    return _getopt_internal(arg1, arg2, arg3, nullptr, nullptr, 0, 1);
}

uint64_t sub_408af0(uint32_t* arg1, char* arg2, uint64_t arg3, mbstate_t* arg4)
{
    uint64_t rbx_1;
    char* rbp_1;
    uint32_t* r12_1;
    if (arg2 == 0)
    {
        arg3 = 1;
        rbp_1 = &data_40c8fc[0x1b];
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
                goto label_408b1a;
            }
        }
    }
    if ((arg2 == 0 || (arg2 != 0 && arg3 != 0)))
    {
        void var_1c;
        r12_1 = &var_1c;
    label_408b1a:
        uint64_t rax_1 = mbrtowc(r12_1, rbp_1, arg3, arg4);
        rbx_1 = rax_1;
        if ((rax_1 > -3 && sub_408cb0() == 0))
        {
            rbx_1 = 1;
            *r12_1 = *rbp_1;
        }
    }
    return rbx_1;
}

uint64_t sub_408b70(FILE* arg1)
{
    int32_t* rbp = arg1;
    uint64_t rax = __fpending(arg1);
    int32_t rbx_1 = (*rbp & 0x20);
    uint64_t rax_1 = sub_40a630(rbp);
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

int64_t sub_408bd0(void* arg1)
{
    *(arg1 + 0x10) = 0;
    *(arg1 + 0x18) = 0x95f616;
}

int64_t sub_408be0(int64_t* arg1, int64_t* arg2)
{
    if (arg1[3] != 0x95f616)
    {
        int64_t rax;
        int64_t var_8 = rax;
        __assert_fail("state->magic == 9827862", "lib/cycle-check.c", 0x3c, "cycle_check");
        /* no return */
    }
    int64_t rax_1 = arg1[2];
    int64_t rdx = arg2[1];
    if (rax_1 == 0)
    {
        arg1[2] = 1;
    }
    else
    {
        if ((*arg1 == rdx && *arg2 == arg1[1]))
        {
            return 1;
        }
        int64_t rcx_1 = (rax_1 + 1);
        arg1[2] = rcx_1;
        if ((rax_1 & rcx_1) != 0)
        {
            return 0;
        }
        if (rcx_1 == 0)
        {
            return 1;
        }
    }
    int64_t rax_3 = *arg2;
    *arg1 = rdx;
    arg1[1] = rax_3;
    return 0;
}

uint64_t sub_408c60(char* arg1, int64_t arg2, int32_t arg3)
{
    uint64_t rdx = 0;
    if ((arg2 & 0x40) != 0)
    {
        int32_t var_50_1 = 0x10;
        rdx = arg3;
        void* var_48_1 = &arg_8;
        void var_38;
        void* var_40_1 = &var_38;
    }
    return sub_40a5e0(open(arg1, arg2, rdx));
}

int64_t sub_408cb0()
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
        void* const rdi_1 = &data_40c954;
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

int64_t sub_408d10(int64_t arg1)
{
    int64_t rsi = 0xa;
    if (arg1 >= 0xa)
    {
        rsi = arg1;
    }
    int64_t rsi_1 = (rsi | 1);
    if (rsi_1 != -1)
    {
        do
        {
            int64_t rax_2;
            int64_t rdx_1;
            rdx_1 = HIGHD((rsi_1 * -0x5555555555555555));
            rax_2 = LOWD((rsi_1 * -0x5555555555555555));
            uint64_t rcx_2 = (rsi_1 - ((rdx_1 >> 1) * 3));
            uint64_t rax_6 = rcx_2;
            int64_t rdi;
            if ((rsi_1 > 9 && rcx_2 != 0))
            {
                int64_t r8_1 = 0x10;
                rdi = 9;
                int64_t rcx_3 = 3;
                uint64_t temp1_1;
                do
                {
                    rcx_3 = (rcx_3 + 2);
                    rdi = (rdi + r8_1);
                    temp1_1 = (COMBINE(0, rsi_1) % rcx_3);
                    rax_6 = temp1_1;
                    if (rdi >= rsi_1)
                    {
                        break;
                    }
                    r8_1 = (r8_1 + 8);
                } while (temp1_1 != 0);
            }
            if (((rsi_1 <= 9 || ((rsi_1 > 9 && rcx_2 != 0) && rdi >= rsi_1)) && rax_6 != 0))
            {
                break;
            }
            rsi_1 = (rsi_1 + 2);
        } while (rsi_1 != -1);
    }
    return rsi_1;
}

uint64_t sub_408db0(int64_t arg1, int64_t arg2)
{
    return (COMBINE(0, (RORQ(arg1, 3))) % arg2);
}

int64_t sub_408dc0(int64_t arg1, int64_t arg2)
{
    int64_t rax;
    rax = arg1 == arg2;
    return rax;
}

int64_t sub_408dd0(void* arg1, int64_t arg2)
{
    int64_t rax = *(arg1 + 0x30)(arg2, *(arg1 + 0x10));
    if (*(arg1 + 0x10) <= rax)
    {
        abort();
        /* no return */
    }
    return ((rax << 4) + *arg1);
}

int64_t sub_408e00(void* arg1, int64_t arg2, int64_t* arg3, char arg4)
{
    int64_t* rax = sub_408dd0(arg1, arg2);
    *arg3 = rax;
    int64_t rsi = *rax;
    if (rsi != 0)
    {
        int64_t* rbx_1 = rax;
        char rax_1;
        if (rsi != arg2)
        {
            rax_1 = *(arg1 + 0x38)(arg2, rsi);
            if (rax_1 != 0)
            {
                rsi = *rbx_1;
            }
            else
            {
                int64_t* rax_2 = rbx_1[1];
                if (rax_2 != 0)
                {
                    rsi = *rax_2;
                    if (arg2 != rsi)
                    {
                        do
                        {
                            if (*(arg1 + 0x38)(arg2, rsi) != 0)
                            {
                                rax_2 = rbx_1[1];
                                rsi = *rax_2;
                                break;
                            }
                            rbx_1 = rbx_1[1];
                            rax_2 = rbx_1[1];
                            if (rax_2 == 0)
                            {
                                return 0;
                            }
                            rsi = *rax_2;
                        } while (rsi != arg2);
                    }
                    if (arg4 != 0)
                    {
                        rbx_1[1] = rax_2[1];
                        *rax_2 = 0;
                        rax_2[1] = *(arg1 + 0x48);
                        *(arg1 + 0x48) = rax_2;
                    }
                    goto label_408eb9;
                }
            }
        }
        if (((rsi != arg2 && rax_1 != 0) || rsi == arg2))
        {
            if (arg4 == 0)
            {
            label_408eb9:
                return rsi;
            }
            int128_t* rax_5 = rbx_1[1];
            if (rax_5 != 0)
            {
                *rbx_1 = *rax_5;
                *rax_5 = 0;
                *(rax_5 + 8) = *(arg1 + 0x48);
                *(arg1 + 0x48) = rax_5;
                return rsi;
            }
            *rbx_1 = 0;
            goto label_408eb9;
        }
    }
    return 0;
}

int64_t sub_408f20(int64_t* arg1)
{
    int32_t* rax_3 = *arg1;
    if (rax_3 != 0x40c9d0)
    {
        int32_t zmm0 = rax_3[2];
        if (((zmm0 == 0.100000001f | (FCMP_UO(zmm0, 0.100000001f))) || (zmm0 < 0.100000001f | (FCMP_UO(zmm0, 0.100000001f)))))
        {
        label_408f8a:
            *arg1 = 0x40c9d0;
            return 0;
        }
        if (((0.899999976f == zmm0 | (FCMP_UO(0.899999976f, zmm0))) || (0.899999976f < zmm0 | (FCMP_UO(0.899999976f, zmm0)))))
        {
            goto label_408f8a;
        }
        float zmm1 = rax_3[3];
        if (((zmm1 == 1.10000002f | (FCMP_UO(zmm1, 1.10000002f))) || (zmm1 < 1.10000002f | (FCMP_UO(zmm1, 1.10000002f)))))
        {
            goto label_408f8a;
        }
        zmm1 = *rax_3;
        if ((zmm1 < 0f | (FCMP_UO(zmm1, 0f))))
        {
            goto label_408f8a;
        }
        zmm1 = (zmm1 + 0.100000001f);
        int32_t zmm2 = rax_3[1];
        if (((zmm2 == zmm1 | (FCMP_UO(zmm2, zmm1))) || (zmm2 < zmm1 | (FCMP_UO(zmm2, zmm1)))))
        {
            goto label_408f8a;
        }
        int512_t zmm3;
        zmm3 = 0x3f800000;
        if ((1f < zmm2 | (FCMP_UO(1f, zmm2))))
        {
            goto label_408f8a;
        }
        if ((!((!(zmm0 == zmm1 | (FCMP_UO(zmm0, zmm1)))) && (!(zmm0 < zmm1 | (FCMP_UO(zmm0, zmm1)))))))
        {
            goto label_408f8a;
        }
    }
    return 1;
}

int64_t sub_408fa0(void* arg1, int64_t* arg2, char arg3)
{
    int64_t* r12 = *arg2;
    if (r12 < arg2[1])
    {
        do
        {
            int64_t r15_2 = *r12;
            if (r15_2 != 0)
            {
                int64_t* rbx_1 = r12[1];
                if (rbx_1 != 0)
                {
                    while (true)
                    {
                        int64_t r15_1 = *rbx_1;
                        int64_t* rax_1 = sub_408dd0(arg1, r15_1);
                        int64_t* rdx = rbx_1[1];
                        if (*rax_1 != 0)
                        {
                            rbx_1[1] = rax_1[1];
                            rax_1[1] = rbx_1;
                            rbx_1 = rdx;
                            if (rdx == 0)
                            {
                                break;
                            }
                        }
                        else
                        {
                            *rax_1 = r15_1;
                            *(arg1 + 0x18) = (*(arg1 + 0x18) + 1);
                            *rbx_1 = 0;
                            rbx_1[1] = *(arg1 + 0x48);
                            *(arg1 + 0x48) = rbx_1;
                            rbx_1 = rdx;
                            if (rdx == 0)
                            {
                                break;
                            }
                        }
                    }
                    r15_2 = *r12;
                }
                r12[1] = 0;
                if (arg3 == 0)
                {
                    int64_t* rax_3 = sub_408dd0(arg1, r15_2);
                    if (*rax_3 == 0)
                    {
                        *rax_3 = r15_2;
                        *(arg1 + 0x18) = (*(arg1 + 0x18) + 1);
                    }
                    else
                    {
                        int64_t* rax_4 = *(arg1 + 0x48);
                        if (rax_4 != 0)
                        {
                            *(arg1 + 0x48) = rax_4[1];
                        }
                        else
                        {
                            rax_4 = malloc(0x10);
                            if (rax_4 == 0)
                            {
                                return 0;
                            }
                        }
                        int64_t rdx_2 = rax_3[1];
                        *rax_4 = r15_2;
                        rax_4[1] = rdx_2;
                        rax_3[1] = rax_4;
                    }
                    *r12 = 0;
                    r12 = &r12[2];
                    arg2[3] = (arg2[3] - 1);
                    if (arg2[1] <= r12)
                    {
                        break;
                    }
                    continue;
                }
            }
            r12 = &r12[2];
        } while (arg2[1] > r12);
    }
    return 1;
}

int64_t sub_4090f0(void* arg1)
{
    return *(arg1 + 0x10);
}

int64_t sub_409100(void* arg1)
{
    return *(arg1 + 0x18);
}

int64_t sub_409110(void* arg1)
{
    return *(arg1 + 0x20);
}

int64_t sub_409120(int64_t* arg1)
{
    int64_t* rsi = *arg1;
    int64_t rdi = arg1[1];
    int64_t rax = 0;
    if (rsi >= rdi)
    {
        return 0;
    }
    while (true)
    {
        if (*rsi == 0)
        {
            rsi = &rsi[2];
            if (rsi >= rdi)
            {
                break;
            }
        }
        else
        {
            void* rdx_1 = rsi[1];
            int64_t rcx_1 = 1;
            if (rdx_1 != 0)
            {
                do
                {
                    rdx_1 = *(rdx_1 + 8);
                    rcx_1 = (rcx_1 + 1);
                } while (rdx_1 != 0);
            }
            if (rax < rcx_1)
            {
                rax = rcx_1;
            }
            rsi = &rsi[2];
            if (rsi >= rdi)
            {
                break;
            }
        }
    }
    return rax;
}

int64_t sub_409170(int64_t* arg1)
{
    int64_t* rcx = *arg1;
    int64_t rsi = arg1[1];
    int64_t rdx = 0;
    int64_t r8 = 0;
    if (rcx < rsi)
    {
        do
        {
            if (*rcx != 0)
            {
                void* rax_1 = rcx[1];
                r8 = (r8 + 1);
                rdx = (rdx + 1);
                if (rax_1 != 0)
                {
                    do
                    {
                        rax_1 = *(rax_1 + 8);
                        rdx = (rdx + 1);
                    } while (rax_1 != 0);
                    rcx = &rcx[2];
                    if (rcx >= rsi)
                    {
                        break;
                    }
                    continue;
                }
            }
            rcx = &rcx[2];
        } while (rcx < rsi);
    }
    if (arg1[3] == r8)
    {
        int64_t rax_2;
        rax_2 = arg1[4] == rdx;
        return rax_2;
    }
    return 0;
}

int64_t sub_4091e0(int64_t* arg1, FILE* arg2)
{
    int64_t rbx = 0;
    int64_t r12 = arg1[2];
    int64_t r13 = arg1[3];
    int64_t* rsi = *arg1;
    int64_t rdi = arg1[1];
    if (rsi < rdi)
    {
        while (true)
        {
            if (*rsi == 0)
            {
                rsi = &rsi[2];
                if (rsi >= rdi)
                {
                    break;
                }
            }
            else
            {
                void* rax_1 = rsi[1];
                int64_t rdx_1 = 1;
                if (rax_1 != 0)
                {
                    do
                    {
                        rax_1 = *(rax_1 + 8);
                        rdx_1 = (rdx_1 + 1);
                    } while (rax_1 != 0);
                }
                if (rbx < rdx_1)
                {
                    rbx = rdx_1;
                }
                rsi = &rsi[2];
                if (rsi >= rdi)
                {
                    break;
                }
            }
        }
    }
    __fprintf_chk(arg2, 1, "# entries:         %lu\n");
    __fprintf_chk(arg2, 1, "# buckets:         %lu\n", r12);
    __fprintf_chk(arg2, 1, "# buckets used:    %lu (%.2f%%)\n", r13);
    /* tailcall */
    return __fprintf_chk(arg2, 1, "max bucket length: %lu\n", rbx);
}

int64_t sub_409330(void* arg1, int64_t arg2)
{
    int64_t rbp = arg2;
    int64_t* rax = sub_408dd0(arg1, arg2);
    int64_t rsi = *rax;
    if (rsi != 0)
    {
        int64_t* rbx_1 = rax;
        while (true)
        {
            if (rsi != rbp)
            {
                if (*(arg1 + 0x38)(rbp, rsi) != 0)
                {
                    rbp = *rbx_1;
                }
                else
                {
                    rbx_1 = rbx_1[1];
                    if (rbx_1 == 0)
                    {
                        break;
                    }
                    rsi = *rbx_1;
                    continue;
                }
            }
            return rbp;
        }
    }
    return 0;
}

int64_t sub_409390(int64_t* arg1)
{
    if (arg1[4] == 0)
    {
        return 0;
    }
    int64_t* rdx = *arg1;
    int64_t rcx = arg1[1];
    if (rdx < rcx)
    {
        do
        {
            int64_t rax_1 = *rdx;
            if (rax_1 != 0)
            {
                return rax_1;
            }
            rdx = &rdx[2];
        } while (rdx < rcx);
    }
    abort();
    /* no return */
}

int64_t sub_4093e0(void* arg1, int64_t arg2)
{
    int64_t* rax = sub_408dd0(arg1, arg2);
    int64_t* rcx = rax;
    int64_t* rdx = rax;
    do
    {
        int64_t rax_1 = *rdx;
        rdx = rdx[1];
        if (rax_1 == arg2)
        {
            if (rdx != 0)
            {
                return *rdx;
            }
            break;
        }
    } while (rdx != 0);
    int64_t rdx_1 = *(arg1 + 8);
    int64_t rax_2;
    do
    {
        rcx = &rcx[2];
        if (rdx_1 <= rcx)
        {
            rax_2 = 0;
            break;
        }
        rax_2 = *rcx;
    } while (rax_2 == 0);
    return rax_2;
}

int64_t sub_409450(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rdx = *arg1;
    if (arg1[1] <= rdx)
    {
        return 0;
    }
    int64_t r9 = 0;
    do
    {
        int64_t r8_1 = *rdx;
        if (r8_1 != 0)
        {
            if (arg3 <= r9)
            {
                break;
            }
            *(arg2 + (r9 << 3)) = r8_1;
            int64_t* r8_2 = rdx[1];
            int64_t rcx_1 = (r9 + 1);
            if (r8_2 != 0)
            {
                do
                {
                    if (arg3 == rcx_1)
                    {
                        return arg3;
                    }
                    rcx_1 = (rcx_1 + 1);
                    *((arg2 + (rcx_1 << 3)) - 8) = *r8_2;
                    r8_2 = r8_2[1];
                } while (r8_2 != 0);
            }
            r9 = rcx_1;
        }
        rdx = &rdx[2];
    } while (arg1[1] > rdx);
    return r9;
}

int64_t sub_4094c0(int64_t* arg1, int64_t arg2, int64_t arg3)
{
    int64_t* r14 = *arg1;
    int64_t rbp;
    if (arg1[1] <= r14)
    {
        rbp = 0;
    }
    else
    {
        rbp = 0;
        do
        {
            int64_t rdi = *r14;
            if (rdi != 0)
            {
                int64_t* rbx_1 = r14;
                while (true)
                {
                    if (arg2(rdi, arg3) == 0)
                    {
                        return rbp;
                    }
                    rbx_1 = rbx_1[1];
                    rbp = (rbp + 1);
                    if (rbx_1 == 0)
                    {
                        break;
                    }
                    rdi = *rbx_1;
                }
            }
            r14 = &r14[2];
        } while (arg1[1] > r14);
    }
    return rbp;
}

uint64_t sub_409540(char* arg1, int64_t arg2)
{
    uint64_t rcx = *arg1;
    uint64_t rdx = 0;
    if (rcx != 0)
    {
        do
        {
            arg1 = &arg1[1];
            int64_t rax_4 = (((rdx << 5) - rdx) + rcx);
            rcx = *arg1;
            rdx = (COMBINE(0, rax_4) % arg2);
        } while (rcx != 0);
    }
    return rdx;
}

void sub_409580(int64_t* arg1)
{
    arg1[2] = 0;
    *arg1 = 0x3f80000000000000;
    arg1[1] = 0x3fb4fdf43f4ccccd;
}

int64_t* sub_4095a0(int64_t arg1, void* arg2, int64_t arg3, int64_t arg4, 
    int64_t arg5)
{
    int64_t r13 = arg4;
    int64_t r12 = arg3;
    int64_t rbp = arg1;
    if (arg3 == 0)
    {
        r12 = 0x408db0;
    }
    if (arg4 == 0)
    {
        r13 = 0x408dc0;
    }
    int64_t* rax = malloc(0x50);
    int64_t* rbx = rax;
    if (rax != 0)
    {
        int64_t* rdi = &rax[5];
        float zmm1_1;
        if (arg2 == 0)
        {
            rax[5] = 0x40c9d0;
            zmm1_1 = 0.800000012f;
            if (sub_408f20(rdi) != 0)
            {
                float zmm0_1;
                if (rbp < 0)
                {
                label_409713:
                    zmm0_1 = ((rbp >> 1) | (rbp & 1));
                    zmm0_1 = (zmm0_1 + zmm0_1);
                label_4096c7:
                    zmm0_1 = (zmm0_1 / zmm1_1);
                    if ((!(zmm0_1 < 1.84467441e+19f | (FCMP_UO(zmm0_1, 1.84467441e+19f)))))
                    {
                        goto label_409680;
                    }
                    if ((zmm0_1 < 9.22337204e+18f | (FCMP_UO(zmm0_1, 9.22337204e+18f))))
                    {
                        rbp = (truncf(zmm0_1, arg4));
                    }
                    else
                    {
                        zmm0_1 = (zmm0_1 - 9.22337204e+18f);
                        rbp = ((truncf(zmm0_1, arg4)) ^ 0x8000000000000000);
                    }
                    goto label_409613;
                }
            label_4096c2:
                zmm0_1 = rbp;
                goto label_4096c7;
            }
        label_409680:
            int64_t* rdi_3 = rbx;
            rbx = nullptr;
            free(rdi_3);
        }
        else
        {
            rax[5] = arg2;
            if (sub_408f20(rdi) == 0)
            {
                goto label_409680;
            }
            if (*(arg2 + 0x10) == 0)
            {
                zmm1_1 = *(arg2 + 8);
                if (rbp < 0)
                {
                    goto label_409713;
                }
                goto label_4096c2;
            }
        label_409613:
            size_t rax_2 = sub_408d10(rbp);
            uint64_t rax_3;
            rax_3 = (rax_2 >> 0x3d) != 0;
            uint64_t rax_4 = rax_3;
            if ((TEST_BITQ(rax_2, 0x3c)))
            {
                goto label_409680;
            }
            if (rax_4 != 0)
            {
                goto label_409680;
            }
            rbx[2] = rax_2;
            if (rax_2 == 0)
            {
                goto label_409680;
            }
            int64_t rax_5 = calloc(rax_2, 0x10);
            *rbx = rax_5;
            if (rax_5 == 0)
            {
                goto label_409680;
            }
            rbx[3] = 0;
            rbx[4] = 0;
            rbx[1] = ((rax_2 << 4) + rax_5);
            rbx[6] = r12;
            rbx[7] = r13;
            rbx[8] = arg5;
            rbx[9] = 0;
        }
    }
    return rbx;
}

void sub_409730(int64_t* arg1)
{
    int64_t* r12 = *arg1;
    if (r12 < arg1[1])
    {
        while (true)
        {
            if (*r12 == 0)
            {
                r12 = &r12[2];
                if (arg1[1] <= r12)
                {
                    break;
                }
            }
            else
            {
                int64_t* rbx_1 = r12[1];
                int64_t rax = arg1[8];
                if (rbx_1 != 0)
                {
                    int64_t* rdx_1;
                    do
                    {
                        if (rax != 0)
                        {
                            rax(*rbx_1);
                            rax = arg1[8];
                        }
                        rdx_1 = rbx_1[1];
                        int64_t rcx_1 = arg1[9];
                        *rbx_1 = 0;
                        rbx_1[1] = rcx_1;
                        arg1[9] = rbx_1;
                        rbx_1 = rdx_1;
                    } while (rdx_1 != 0);
                }
                if (rax != 0)
                {
                    rax(*r12);
                }
                *r12 = 0;
                r12 = &r12[2];
                r12[-1] = 0;
                if (arg1[1] <= r12)
                {
                    break;
                }
            }
        }
    }
    arg1[3] = 0;
    arg1[4] = 0;
}

int64_t sub_4097e0(int64_t* arg1)
{
    int64_t* rbp = *arg1;
    int64_t rax = arg1[1];
    if (((arg1[8] != 0 && arg1[4] != 0) && rbp < rax))
    {
        while (true)
        {
            int64_t rdi = *rbp;
            if (rdi == 0)
            {
                rbp = &rbp[2];
                if (rax <= rbp)
                {
                    break;
                }
            }
            else
            {
                int64_t* rbx_1 = rbp;
                while (true)
                {
                    arg1[8](rdi);
                    rbx_1 = rbx_1[1];
                    if (rbx_1 == 0)
                    {
                        break;
                    }
                    rdi = *rbx_1;
                }
                rax = arg1[1];
                rbp = &rbp[2];
                if (rax <= rbp)
                {
                    break;
                }
            }
        }
        rbp = *arg1;
    }
    if ((((arg1[8] == 0 || (arg1[8] != 0 && arg1[4] == 0)) || ((arg1[8] != 0 && arg1[4] != 0) && rbp < rax)) && rbp < rax))
    {
        do
        {
            void* rdi_1 = rbp[1];
            if (rdi_1 != 0)
            {
                void* rbx_2;
                do
                {
                    rbx_2 = *(rdi_1 + 8);
                    free(rdi_1);
                    rdi_1 = rbx_2;
                } while (rbx_2 != 0);
            }
            rbp = &rbp[2];
        } while (arg1[1] > rbp);
    }
    void* rdi_2 = arg1[9];
    if (rdi_2 != 0)
    {
        void* rbx_3;
        do
        {
            rbx_3 = *(rdi_2 + 8);
            free(rdi_2);
            rdi_2 = rbx_3;
        } while (rbx_3 != 0);
    }
    free(*arg1);
    /* tailcall */
    return free(arg1);
}

uint64_t sub_4098c0(int64_t* arg1, int64_t arg2)
{
    void* r12 = arg1[5];
    int32_t rbx_4;
    if (*(r12 + 0x10) == 0)
    {
        float zmm0;
        if (arg2 < 0)
        {
            zmm0 = ((arg2 >> 1) | (arg2 & 1));
            zmm0 = (zmm0 + zmm0);
        }
        else
        {
            zmm0 = arg2;
        }
        zmm0 = (zmm0 / *(r12 + 8));
        if ((!(zmm0 < 1.84467441e+19f | (FCMP_UO(zmm0, 1.84467441e+19f)))))
        {
        label_409a30:
            rbx_4 = 0;
        label_409a3c:
            return rbx_4;
        }
        if ((zmm0 < 9.22337204e+18f | (FCMP_UO(zmm0, 9.22337204e+18f))))
        {
            arg2 = (truncf(zmm0, 0x28));
        }
        else
        {
            zmm0 = (zmm0 - 9.22337204e+18f);
            arg2 = ((truncf(zmm0, 0x28)) ^ 0x8000000000000000);
        }
    }
    size_t rax_1 = sub_408d10(arg2);
    uint64_t rax_2;
    rax_2 = (rax_1 >> 0x3d) != 0;
    uint64_t rax_3 = rax_2;
    if ((rax_1 << 3) < 0)
    {
        rax_3 = 1;
    }
    if (rax_1 == 0)
    {
        goto label_409a30;
    }
    if (rax_3 != 0)
    {
        goto label_409a30;
    }
    if (arg1[2] == rax_1)
    {
        return 1;
    }
    int64_t rax_4 = calloc(rax_1, 0x10);
    int64_t var_68 = rax_4;
    if (rax_4 == 0)
    {
        goto label_409a30;
    }
    int64_t rbx_3 = ((rax_1 << 4) + rax_4);
    int64_t var_38_1 = arg1[6];
    int64_t var_48_1 = 0;
    int64_t var_30_1 = arg1[7];
    void* var_40_1 = r12;
    int64_t var_28_1 = arg1[8];
    int64_t rax_8 = arg1[9];
    int32_t rax_9 = sub_408fa0(&var_68, arg1, 0);
    rbx_4 = rax_9;
    if (rax_9 == 0)
    {
        arg1[9] = rax_8;
        if ((sub_408fa0(arg1, &var_68, 1) != 0 && sub_408fa0(arg1, &var_68, 0) != 0))
        {
            free(var_68);
            return rbx_4;
        }
        abort();
        /* no return */
    }
    free(*arg1);
    *arg1 = var_68;
    arg1[1] = rbx_3;
    arg1[2] = rax_1;
    arg1[3] = 0;
    arg1[9] = rax_8;
    goto label_409a3c;
}

int64_t sub_409ac0(int64_t* arg1, int64_t arg2, int64_t* arg3)
{
    if (arg2 != 0)
    {
        int64_t* var_20;
        int64_t rax_1 = sub_408e00(arg1, arg2, &var_20, 0);
        if (rax_1 != 0)
        {
            if (arg3 != 0)
            {
                *arg3 = rax_1;
            }
            return 0;
        }
        int64_t rax_3 = arg1[3];
        int64_t rax_4;
        void* rdx_2;
        float zmm1;
        if (rax_3 < 0)
        {
            rax_4 = arg1[2];
            zmm1 = ((rax_3 >> 1) | (rax_3 & 1));
            rdx_2 = arg1[5];
            zmm1 = (zmm1 + zmm1);
        }
        else
        {
            rdx_2 = arg1[5];
            zmm1 = rax_3;
            rax_4 = arg1[2];
        }
        float zmm0_1;
        if (((rax_3 < 0 && rax_4 >= 0) || (rax_3 >= 0 && rax_4 >= 0)))
        {
            zmm0_1 = (rax_4 * *(rdx_2 + 8));
            if ((!((!(zmm1 == zmm0_1 | (FCMP_UO(zmm1, zmm0_1)))) && (!(zmm1 < zmm0_1 | (FCMP_UO(zmm1, zmm0_1)))))))
            {
            label_409b42:
                int64_t* r12_2 = var_20;
                if (*r12_2 == 0)
                {
                    *r12_2 = arg2;
                    arg1[4] = (arg1[4] + 1);
                    arg1[3] = (arg1[3] + 1);
                    return 1;
                }
                int64_t* rax_5 = arg1[9];
                if (rax_5 == 0)
                {
                    rax_5 = malloc(0x10);
                }
                else
                {
                    arg1[9] = rax_5[1];
                }
                int64_t rdx_4 = r12_2[1];
                *rax_5 = arg2;
                rax_5[1] = rdx_4;
                r12_2[1] = rax_5;
                arg1[4] = (arg1[4] + 1);
                return 1;
                goto label_409c54;
            }
        label_409be5:
            sub_408f20(&arg1[5]);
            void* rdx_8 = arg1[5];
            int64_t rax_9 = arg1[2];
            float zmm2_1 = *(rdx_8 + 8);
            float zmm0_2;
            if (rax_9 < 0)
            {
                zmm0_2 = ((rax_9 >> 1) | (rax_9 & 1));
                zmm0_2 = (zmm0_2 + zmm0_2);
            }
            else
            {
                zmm0_2 = rax_9;
            }
            int64_t rax_10 = arg1[3];
            float zmm1_1;
            if (rax_10 < 0)
            {
                zmm1_1 = ((rax_10 >> 1) | (rax_10 & 1));
                zmm1_1 = (zmm1_1 + zmm1_1);
            }
            else
            {
                zmm1_1 = rax_10;
            }
            float zmm3_1 = (zmm2_1 * zmm0_2);
            if (((zmm1_1 == zmm3_1 | (FCMP_UO(zmm1_1, zmm3_1))) || (zmm1_1 < zmm3_1 | (FCMP_UO(zmm1_1, zmm3_1)))))
            {
                goto label_409b42;
            }
            zmm0_2 = (zmm0_2 * *(rdx_8 + 0xc));
            if (*(rdx_8 + 0x10) == 0)
            {
                zmm0_2 = (zmm0_2 * zmm2_1);
            }
            if ((!(zmm0_2 < 1.84467441e+19f | (FCMP_UO(zmm0_2, 1.84467441e+19f)))))
            {
            label_409c54:
                return 0xffffffff;
            }
            int64_t rsi;
            if ((!(zmm0_2 < 9.22337204e+18f | (FCMP_UO(zmm0_2, 9.22337204e+18f)))))
            {
                zmm0_2 = (zmm0_2 - 9.22337204e+18f);
                rsi = ((truncf(zmm0_2, arg1)) ^ 0x8000000000000000);
            }
            else
            {
                rsi = (truncf(zmm0_2, arg1));
            }
            if (sub_4098c0(arg1, rsi) == 0)
            {
                goto label_409c54;
            }
            if (sub_408e00(arg1, arg2, &var_20, 0) == 0)
            {
                goto label_409b42;
            }
        }
        if (((rax_3 < 0 && rax_4 < 0) || (rax_3 >= 0 && rax_4 < 0)))
        {
            zmm0_1 = ((rax_4 >> 1) | (rax_4 & 1));
            zmm0_1 = (zmm0_1 + zmm0_1);
            zmm0_1 = (zmm0_1 * *(rdx_2 + 8));
            if ((!((zmm1 == zmm0_1 | (FCMP_UO(zmm1, zmm0_1))) || (zmm1 < zmm0_1 | (FCMP_UO(zmm1, zmm0_1))))))
            {
                goto label_409be5;
            }
            goto label_409b42;
        }
    }
    abort();
    /* no return */
}

int64_t sub_409d40(int64_t* arg1, int64_t arg2)
{
    int64_t rbx = arg2;
    int64_t var_10;
    int32_t rax = sub_409ac0(arg1, arg2, &var_10);
    if (rax == 0xffffffff)
    {
        return 0;
    }
    if (rax == 0)
    {
        rbx = var_10;
    }
    return rbx;
}

int64_t sub_409d80(int64_t* arg1)
{
    int64_t* var_20;
    int64_t rsi;
    int64_t rax = sub_408e00(arg1, rsi, &var_20, 1);
    if (rax != 0)
    {
        int64_t* rax_1 = var_20;
        arg1[4] = (arg1[4] - 1);
        if (*rax_1 == 0)
        {
            int64_t rax_3 = arg1[3];
            int64_t rax_4 = (rax_3 - 1);
            arg1[3] = rax_4;
            int64_t rax_5;
            float* rdx_1;
            float zmm0_1;
            if ((rax_3 - 1) < 0)
            {
                rax_5 = arg1[2];
                zmm0_1 = ((rax_4 >> 1) | (rax_4 & 1));
                rdx_1 = arg1[5];
                zmm0_1 = (zmm0_1 + zmm0_1);
            }
            else
            {
                rdx_1 = arg1[5];
                zmm0_1 = rax_4;
                rax_5 = arg1[2];
            }
            float zmm1;
            if ((((rax_3 - 1) < 0 && rax_5 >= 0) || ((rax_3 - 1) >= 0 && rax_5 >= 0)))
            {
                zmm1 = rax_5;
            }
            if ((((rax_3 - 1) < 0 && rax_5 < 0) || ((rax_3 - 1) >= 0 && rax_5 < 0)))
            {
                zmm1 = ((rax_5 >> 1) | (rax_5 & 1));
                zmm1 = (zmm1 + zmm1);
            }
            zmm1 = (zmm1 * *rdx_1);
            if ((!((zmm1 == zmm0_1 | (FCMP_UO(zmm1, zmm0_1))) || (zmm1 < zmm0_1 | (FCMP_UO(zmm1, zmm0_1))))))
            {
                sub_408f20(&arg1[5]);
                int64_t rax_6 = arg1[2];
                int32_t* rdx_2 = arg1[5];
                float zmm0_2;
                if (rax_6 < 0)
                {
                    zmm0_2 = ((rax_6 >> 1) | (rax_6 & 1));
                    zmm0_2 = (zmm0_2 + zmm0_2);
                }
                else
                {
                    zmm0_2 = rax_6;
                }
                int64_t rax_7 = arg1[3];
                float zmm1_1;
                if (rax_7 < 0)
                {
                    zmm1_1 = ((rax_7 >> 1) | (rax_7 & 1));
                    zmm1_1 = (zmm1_1 + zmm1_1);
                }
                else
                {
                    zmm1_1 = rax_7;
                }
                float zmm2_1 = (*rdx_2 * zmm0_2);
                if ((!((zmm2_1 == zmm1_1 | (FCMP_UO(zmm2_1, zmm1_1))) || (zmm2_1 < zmm1_1 | (FCMP_UO(zmm2_1, zmm1_1))))))
                {
                    zmm0_2 = (zmm0_2 * rdx_2[1]);
                    if (rdx_2[4] == 0)
                    {
                        zmm0_2 = (zmm0_2 * rdx_2[2]);
                    }
                    int64_t rsi_1;
                    if ((!(zmm0_2 < 9.22337204e+18f | (FCMP_UO(zmm0_2, 9.22337204e+18f)))))
                    {
                        zmm0_2 = (zmm0_2 - 9.22337204e+18f);
                        rsi_1 = ((truncf(zmm0_2, arg1)) ^ 0x8000000000000000);
                    }
                    else
                    {
                        rsi_1 = (truncf(zmm0_2, arg1));
                    }
                    if (sub_4098c0(arg1, rsi_1) == 0)
                    {
                        void* rdi_2 = arg1[9];
                        if (rdi_2 != 0)
                        {
                            void* r12_1;
                            do
                            {
                                r12_1 = *(rdi_2 + 8);
                                free(rdi_2);
                                rdi_2 = r12_1;
                            } while (r12_1 != 0);
                        }
                        arg1[9] = 0;
                    }
                }
            }
        }
    }
    return rax;
}

int64_t sub_409f60(int32_t* arg1, int32_t arg2)
{
    *(arg1 + 0x14) = 0;
    arg1[7] = 1;
    *arg1 = arg2;
    arg1[1] = arg2;
    arg1[2] = arg2;
    arg1[3] = arg2;
    arg1[4] = arg2;
}

uint64_t sub_409f80(void* arg1)
{
    return *(arg1 + 0x1c);
}

uint64_t sub_409f90(void* arg1, int32_t arg2)
{
    uint32_t rdx_1 = (*(arg1 + 0x1c) ^ 1);
    int32_t rcx_2 = ((*(arg1 + 0x14) + rdx_1) & 3);
    void* r8 = (arg1 + (rcx_2 << 2));
    uint64_t rax_1 = *r8;
    *r8 = arg2;
    int32_t rsi = *(arg1 + 0x18);
    *(arg1 + 0x14) = rcx_2;
    if (rsi == rcx_2)
    {
        *(arg1 + 0x18) = ((rdx_1 + rsi) & 3);
    }
    *(arg1 + 0x1c) = 0;
    return rax_1;
}

uint64_t sub_409fd0(void* arg1)
{
    if (*(arg1 + 0x1c) != 0)
    {
        abort();
        /* no return */
    }
    uint64_t rax = *(arg1 + 0x14);
    void* rcx = (arg1 + (rax << 2));
    int32_t rdx = rax;
    uint64_t rax_1 = *rcx;
    *rcx = *(arg1 + 0x10);
    if (rdx == *(arg1 + 0x18))
    {
        *(arg1 + 0x1c) = 1;
        return rax_1;
    }
    *(arg1 + 0x14) = ((rdx + 3) & 3);
    return rax_1;
}

char* sub_40a020()
{
    char* rax = nl_langinfo(0xe);
    char* r15 = data_60f4d8;
    char* rbx = rax;
    if (rax == 0)
    {
        rbx = &data_40c8fc[0x1b];
    }
    if (r15 == 0)
    {
        char* rax_6 = getenv("CHARSETALIASDIR");
        char* r13_1 = rax_6;
        size_t rdi_7;
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
            size_t rdi_6;
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
                    goto label_40a11c;
                }
                memcpy(rbp_3, r13_1, r14_1);
                goto label_40a166;
            }
        }
        char* rax_9 = malloc(rdi_7);
        rbp_3 = rax_9;
        if (rax_9 == 0)
        {
        label_40a11c:
            r15 = &data_40c8fc[0x1b];
        }
        else
        {
            memcpy(rbp_3, r13_1, r14_1);
            rbp_3[r14_1] = 0x2f;
        label_40a166:
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
                            label_40a21c:
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
                                    goto label_40a3ab;
                                }
                                int64_t* rcx_2 = &var_b8;
                            label_40a258:
                                int32_t rdx_5 = *rcx_2;
                                rcx_2 = (rcx_2 + 4);
                                uint32_t rax_20 = (((rdx_5 - 0x1010101) & (!rdx_5)) & 0x80808080);
                                if (rax_20 == 0)
                                {
                                    goto label_40a258;
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
                            label_40a292:
                                int32_t rsi_5 = *rdx_11;
                                rdx_11 = (rdx_11 + 4);
                                uint32_t rax_23 = (((rsi_5 - 0x1010101) & (!rsi_5)) & 0x80808080);
                                if (rax_23 == 0)
                                {
                                    goto label_40a292;
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
                                    r15 = &data_40c8fc[0x1b];
                                    free(rdi_26);
                                    sub_40a630(rax_12);
                                    goto label_40a1a7;
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
                                    label_40a46b:
                                        uint64_t r8_1 = rsi_17;
                                        rsi_17 = (rsi_17 + 8);
                                        *(r9_5 + r8_1) = *(r10_2 + r8_1);
                                        if (rsi_17 < rcx_12)
                                        {
                                            goto label_40a46b;
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
                                    label_40a4b9:
                                        uint64_t rsi_20 = rcx_14;
                                        rcx_14 = (rcx_14 + 8);
                                        *(rdi_24 + rsi_20) = *(r9_6 + rsi_20);
                                        if (rcx_14 < rdx_20)
                                        {
                                            goto label_40a4b9;
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
                            goto label_40a21c;
                        }
                        break;
                    }
                label_40a3ab:
                    sub_40a630(rax_12);
                    if (var_d0_1 != 0)
                    {
                        *(r15 + var_d0_1) = 0;
                    }
                }
            }
            if ((((rax_11 >= 0 && rax_12 == 0) || rax_11 < 0) || ((rax_11 >= 0 && rax_12 != 0) && var_d0_1 == 0)))
            {
                r15 = &data_40c8fc[0x1b];
            }
        label_40a1a7:
            free(rbp_3);
        }
        data_60f4d8 = r15;
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

uint64_t sub_40a590(int64_t arg1, char* arg2, int64_t arg3, int32_t arg4)
{
    uint64_t rcx = 0;
    if ((arg3 & 0x40) != 0)
    {
        int32_t var_50_1 = 0x18;
        rcx = arg4;
        void* var_48_1 = &arg_8;
        void var_38;
        void* var_40_1 = &var_38;
    }
    return sub_40a5e0(openat(arg1, arg2, arg3, rcx));
}

uint64_t sub_40a5e0(int32_t arg1)
{
    if (arg1 <= 2)
    {
        int32_t rax_1 = sub_40a890(arg1);
        int32_t* rax_2 = __errno_location();
        int32_t r13 = *rax_2;
        close(arg1);
        *rax_2 = r13;
        return rax_1;
    }
    return arg1;
}

int64_t sub_40a630(FILE* arg1)
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
        if (((rax_1 == 0 || (rax_1 != 0 && rax_6 != -1)) && sub_40a7f0(arg1) != 0))
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

uint64_t sub_40a6b0(int32_t arg1, int32_t arg2, int32_t arg3)
{
    void* var_58 = &arg_8;
    int64_t rcx;
    int64_t var_30 = rcx;
    int32_t var_60 = 0x10;
    void var_48;
    void* var_50 = &var_48;
    if (arg2 != 0x406)
    {
        return fcntl();
    }
    int32_t var_60_1 = 0x18;
    int32_t rax_2;
    int32_t rax_5;
    int32_t* rax_15;
    int32_t rax_17;
    int32_t rbx;
    if (data_60f4e0 < 0)
    {
        rax_5 = sub_40a6b0();
        rbx = rax_5;
    }
    else
    {
        rax_2 = fcntl();
        rbx = rax_2;
        if (rax_2 < 0)
        {
            rax_15 = __errno_location();
            if (*rax_15 == 0x16)
            {
                rax_17 = sub_40a6b0(arg1, 0, arg3);
                rbx = rax_17;
                if (rax_17 >= 0)
                {
                    data_60f4e0 = 0xffffffff;
                }
            }
        }
    }
    if (((((data_60f4e0 >= 0 && rax_2 < 0) && *rax_15 == 0x16) && rax_17 >= 0) || (rax_5 >= 0 && data_60f4e0 == 0xffffffff)))
    {
        int32_t rax_7 = fcntl(rbx, 1);
        int32_t rax_10;
        if (rax_7 >= 0)
        {
            rax_10 = fcntl(rbx, 2, (rax_7 | 1));
        }
        if ((rax_7 < 0 || (rax_7 >= 0 && rax_10 == 0xffffffff)))
        {
            int32_t* rax_11 = __errno_location();
            int32_t rdi_2 = rbx;
            rbx = -1;
            int32_t r12_1 = *rax_11;
            close(rdi_2);
            *rax_11 = r12_1;
        }
    }
    if ((data_60f4e0 >= 0 && (rax_2 >= 0 || (rax_2 < 0 && *rax_15 != 0x16))))
    {
        data_60f4e0 = 1;
    }
    return rbx;
}

int64_t sub_40a7f0(FILE* arg1)
{
    int32_t* rbx = arg1;
    if ((arg1 != 0 && (__freading(arg1) != 0 && (*rbx & 0x100) != 0)))
    {
        sub_40a830(rbx, 0, 1);
        /* tailcall */
        return fflush(rbx);
    }
    /* tailcall */
    return fflush(rbx);
}

off64_t sub_40a830(FILE* arg1, off_t arg2, int32_t arg3)
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

int64_t sub_40a890(int32_t arg1)
{
    /* tailcall */
    return sub_40a6b0(arg1, 0, 3);
}

void init()
{
    _init();
}

void fini()
{
    return;
}

int64_t sub_40a910(void (* arg1)(void*))
{
    int64_t rdx = data_60f248;
    /* tailcall */
    return __cxa_atexit(arg1, nullptr, rdx);
}

int64_t sub_40a928(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rbx = &data_60ee30;
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

