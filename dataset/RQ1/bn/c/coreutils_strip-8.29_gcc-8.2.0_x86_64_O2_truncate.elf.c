int64_t sub_401360()
{
    int64_t var_8 = data_60a008;
    /* jump -> data_60a010 */
}

int64_t sub_401376()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401386()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401396()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4013a6()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4013b6()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4013c6()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4013d6()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4013e6()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401416()
{
    int64_t var_8 = 0xa;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401426()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401456()
{
    int64_t var_8 = 0xe;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401466()
{
    int64_t var_8 = 0xf;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401496()
{
    int64_t var_8 = 0x12;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4014a6()
{
    int64_t var_8 = 0x13;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4014d6()
{
    int64_t var_8 = 0x16;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4014e6()
{
    int64_t var_8 = 0x17;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4014f6()
{
    int64_t var_8 = 0x18;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401506()
{
    int64_t var_8 = 0x19;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401516()
{
    int64_t var_8 = 0x1a;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401526()
{
    int64_t var_8 = 0x1b;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401536()
{
    int64_t var_8 = 0x1c;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401546()
{
    int64_t var_8 = 0x1d;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401556()
{
    int64_t var_8 = 0x1e;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401566()
{
    int64_t var_8 = 0x1f;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401576()
{
    int64_t var_8 = 0x20;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401586()
{
    int64_t var_8 = 0x21;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401596()
{
    int64_t var_8 = 0x22;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4015a6()
{
    int64_t var_8 = 0x23;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4015b6()
{
    int64_t var_8 = 0x24;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4015c6()
{
    int64_t var_8 = 0x25;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4015d6()
{
    int64_t var_8 = 0x26;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4015e6()
{
    int64_t var_8 = 0x27;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401616()
{
    int64_t var_8 = 0x2a;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401626()
{
    int64_t var_8 = 0x2b;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401656()
{
    int64_t var_8 = 0x2e;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401666()
{
    int64_t var_8 = 0x2f;
    /* tailcall */
    return sub_401360();
}

int64_t sub_401696()
{
    int64_t var_8 = 0x32;
    /* tailcall */
    return sub_401360();
}

int64_t sub_4016a6()
{
    int64_t var_8 = 0x33;
    /* tailcall */
    return sub_401360();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    uint64_t r13;
    uint64_t var_18 = r13;
    char rbp = 0;
    char* rbx = nullptr;
    int64_t rcx;
    int64_t rdx;
    uint64_t r8;
    ssize_t r9;
    rcx = sub_4025c0(*argv);
    void var_f8;
    char var_f0;
    setlocale(6, &data_408844[0x1b], rdx, rcx, r8, r9, var_f8, var_f0);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_…");
    textdomain("coreutils");
    sub_4068b0(sub_402520);
    while (true)
    {
        int32_t rax_1 = getopt_long(argc, argv, "cor:s:", &data_4071a0, nullptr);
        int32_t rdx_4;
        char const* const rsi_10;
        if (rax_1 == 0xffffffff)
        {
            int64_t rdx_5 = data_60a25c;
            int64_t r15_1 = data_60a298;
            void* r12_1 = &argv[rdx_5];
            uint64_t r14_1 = (argc - rdx_5);
            int32_t var_e4;
            uint64_t var_d8;
            void var_c8;
            int32_t var_b0;
            uint64_t var_98;
            char* rbp_2;
            if (r15_1 != 0)
            {
                int64_t rbx_1;
                int64_t rbp_1;
                char const* const rsi_3;
                if ((rbx == 0 && rbp != 0))
                {
                    rbp_1 = sub_4041c0(1, "--reference");
                    rsi_3 = "you must specify a relative %s w…";
                    rbx_1 = sub_4041c0(0, "--size");
                    goto label_401a55;
                }
                if ((data_60a2a0 == 1 && rbp == 0))
                {
                    rbp_1 = sub_4041c0(1, "--size");
                    rsi_3 = "%s was specified but %s was not";
                    rbx_1 = sub_4041c0(0, "--io-blocks");
                    goto label_401a55;
                }
                if (r14_1 <= 0)
                {
                    goto label_401ba6;
                }
                if (__xstat(1, r15_1, &var_c8) != 0)
                {
                    error(1, *__errno_location(), dcgettext(nullptr, "cannot stat %s", 5), sub_403f90(4, r15_1));
                label_402010:
                    rbp_1 = sub_4041c0(1, "--reference");
                    rsi_3 = "you must specify either %s or %s";
                    rbx_1 = sub_4041c0(0, "--size");
                label_401a55:
                    error(0, 0, dcgettext(nullptr, rsi_3, 5), rbx_1, rbp_1);
                    break;
                }
                rax_1 = (var_b0 & 0xd000);
                uint64_t rdx_8;
                if (rax_1 != 0x8000)
                {
                    r14_1 = open(r15_1, 0);
                    int32_t* rax_67 = __errno_location();
                    if (r14_1 >= 0)
                    {
                        var_f0 = lseek(r14_1, 0, 2);
                        var_e4 = *rax_67;
                        rax_1 = close(r14_1);
                        rdx_8 = var_f0;
                        if (rdx_8 < 0)
                        {
                            *rax_67 = var_e4;
                        }
                    }
                }
                else
                {
                    rdx_8 = var_98;
                }
                if (((((rax_1 != 0x8000 && r14_1 >= 0) && rdx_8 < 0) || (rax_1 != 0x8000 && r14_1 < 0)) || (rax_1 == 0x8000 && rdx_8 < 0)))
                {
                    rbp_2 = sub_403f90(4, data_60a298);
                    rbx = dcgettext(nullptr, "cannot get the size of %s", 5);
                    error(1, *__errno_location(), rbx, rbp_2);
                    goto label_401f72;
                }
                if (((rax_1 == 0x8000 && rdx_8 >= 0) || ((rax_1 != 0x8000 && r14_1 >= 0) && rdx_8 >= 0)))
                {
                    var_d8 = -1;
                    if (rbp != 0)
                    {
                        var_d8 = rdx_8;
                        rdx_8 = r13;
                    }
                    r13 = rdx_8;
                }
                goto label_401ac4;
            }
            if (rbp == 0)
            {
                goto label_402010;
            }
            if (r14_1 <= 0)
            {
            label_401ba6:
                rdx_4 = 5;
                rsi_10 = "missing file operand";
            }
            else
            {
                var_d8 = -1;
            label_401ac4:
                var_f0 = 0;
                uint64_t var_e0 = r13;
                var_e4 = (((rax_1 - rax_1) & 0x40) + 0x801);
                while (true)
                {
                    r12_1 = (r12_1 + 8);
                    rbp_2 = *(r12_1 - 8);
                    if (rbp_2 == 0)
                    {
                        return var_f0;
                    }
                    int32_t rax_24 = open(rbp_2, var_e4, 0x1b6);
                    r13 = rax_24;
                    if (rax_24 == 0xffffffff)
                    {
                        int32_t* rax_33 = __errno_location();
                        if ((data_60a2a1 != 0 && *rax_33 == 2))
                        {
                            continue;
                        }
                        error(0, *rax_33, dcgettext(nullptr, "cannot open %s for writing", 5), sub_403f90(4, rbp_2));
                        var_f0 = 1;
                    }
                    else
                    {
                        char const* const rsi_8;
                        int64_t r14_2;
                        char r15_3;
                        if (data_60a2a0 == 0)
                        {
                            uint64_t rax_56;
                            char const* const rsi_21;
                            int64_t r14_7;
                            if (rbx == 0)
                            {
                            label_401c26:
                                r14_1 = var_e0;
                            label_401c2b:
                                if (rbx != 0)
                                {
                                    rax_56 = var_d8;
                                    if (rax_56 == -1)
                                    {
                                        goto label_401e0b;
                                    }
                                label_401da4:
                                    if (rbx == 2)
                                    {
                                        if (r14_1 < rax_56)
                                        {
                                            r14_1 = rax_56;
                                        }
                                        goto label_401c33;
                                    }
                                    if (rbx == 3)
                                    {
                                        if (r14_1 > rax_56)
                                        {
                                            r14_1 = rax_56;
                                        }
                                        goto label_401c45;
                                    }
                                    if (rbx == 4)
                                    {
                                        r14_1 = (r14_1 * (COMBINE(0, rax_56) / r14_1));
                                    }
                                    else
                                    {
                                        if (rbx == 5)
                                        {
                                        label_401f72:
                                            r14_1 = (r14_1 * (COMBINE(0, ((r14_1 + rax_56) - 1)) / r14_1));
                                            if (r14_1 >= 0)
                                            {
                                                goto label_401c45;
                                            }
                                            rsi_21 = "overflow rounding up size of fil…";
                                            r14_7 = sub_403f90(4, rbp_2);
                                        label_401e38:
                                            r15_3 = 0;
                                            error(0, 0, dcgettext(nullptr, rsi_21, 5), r14_7);
                                            goto label_401b8b;
                                        }
                                        if ((0x7fffffffffffffff - rax_56) < r14_1)
                                        {
                                            rsi_21 = "overflow extending size of file …";
                                            r14_7 = sub_403f90(4, rbp_2);
                                            goto label_401e38;
                                        }
                                        r14_1 = (r14_1 + rax_56);
                                    }
                                    goto label_401c33;
                                }
                            label_401c33:
                                if (r14_1 >= 0)
                                {
                                    goto label_401c45;
                                }
                                r14_1 = 0;
                            label_401c45:
                                r15_3 = 1;
                                if (ftruncate(r13) == 0xffffffff)
                                {
                                    int64_t rax_39 = sub_403f90(4, rbp_2);
                                    r15_3 = 0;
                                    error(0, *__errno_location(), dcgettext(nullptr, "failed to truncate %s at %ld byt…", 5), rax_39, r14_1);
                                }
                                goto label_401b8b;
                            }
                            if (var_d8 >= 0)
                            {
                                goto label_401c26;
                            }
                            if (__fxstat(1, rax_24, &var_c8) != 0)
                            {
                                goto label_401b5d;
                            }
                            r14_1 = var_e0;
                        label_401e0b:
                            if ((var_b0 & 0xd000) != 0x8000)
                            {
                                rax_56 = lseek(r13, 0, 2);
                                if (rax_56 < 0)
                                {
                                    rsi_8 = "cannot get the size of %s";
                                    r14_2 = sub_403f90(4, rbp_2);
                                    goto label_401b67;
                                }
                                goto label_401da4;
                            }
                            rax_56 = var_98;
                            if (rax_56 < 0)
                            {
                                rsi_21 = "%s has unusable, apparently nega…";
                                r14_7 = sub_403f90(4, rbp_2);
                                goto label_401e38;
                            }
                            goto label_401da4;
                        }
                        if (__fxstat(1, rax_24, &var_c8) == 0)
                        {
                            int64_t var_90;
                            int64_t r15_6 = var_90;
                            if ((r15_6 - 1) > 0x1fffffffffffffff)
                            {
                                r15_6 = 0x200;
                            }
                            int64_t rax_45;
                            int64_t rdx_15;
                            rdx_15 = HIGHD(-0x8000000000000000);
                            rax_45 = LOWD(-0x8000000000000000);
                            int64_t rax_47;
                            int64_t rdx_17;
                            if (var_e0 >= (COMBINE(rdx_15, rax_45) / r15_6))
                            {
                                rdx_17 = HIGHD(0x7fffffffffffffff);
                                rax_47 = LOWD(0x7fffffffffffffff);
                                r14_1 = (var_e0 * r15_6);
                            }
                            if ((var_e0 < (COMBINE(rdx_15, rax_45) / r15_6) || (var_e0 >= (COMBINE(rdx_15, rax_45) / r15_6) && var_e0 > (COMBINE(rdx_17, rax_47) / r15_6))))
                            {
                                error(0, 0, dcgettext(nullptr, "overflow in %ld * %ld byte block…", 5), var_e0, r15_6, sub_403f90(4, rbp_2));
                                r15_3 = 0;
                                goto label_401b8b;
                            }
                            goto label_401c2b;
                        }
                    label_401b5d:
                        rsi_8 = "cannot fstat %s";
                        r14_2 = sub_403f90(4, rbp_2);
                    label_401b67:
                        r15_3 = 0;
                        error(0, *__errno_location(), dcgettext(nullptr, rsi_8, 5), r14_2);
                    label_401b8b:
                        if (close(r13) != 0)
                        {
                            error(0, *__errno_location(), dcgettext(nullptr, "failed to close %s", 5), sub_403f90(4, rbp_2));
                            var_f0 = 1;
                        }
                        else
                        {
                            var_f0 = (var_f0 | (r15_3 ^ 1));
                        }
                    }
                }
            }
        }
        else
        {
            bool cond:0_1 = rax_1 <= 0x63;
            if (rax_1 == 0x63)
            {
                data_60a2a1 = 1;
                continue;
            }
            else
            {
                if (cond:0_1)
                {
                    if (rax_1 == 0xffffff7d)
                    {
                        sub_404660(stdout, "truncate", "GNU coreutils", data_60a1f0);
                        exit(0);
                        /* no return */
                    }
                    if (rax_1 == 0xffffff7e)
                    {
                        sub_402140(0);
                        /* no return */
                    }
                    break;
                }
                if (rax_1 == 0x72)
                {
                    data_60a298 = data_60a440;
                    continue;
                }
                else if (rax_1 == 0x73)
                {
                    uint16_t* rcx_1 = *__ctype_b_loc();
                    int64_t rax_3 = data_60a440;
                    uint64_t rsi_1;
                    int64_t rdi_2;
                    while (true)
                    {
                        rsi_1 = *rax_3;
                        rdi_2 = rax_3;
                        rax_3 = (rax_3 + 1);
                        if ((*(&rcx_1[rsi_1] + 1) & 0x20) == 0)
                        {
                            break;
                        }
                        data_60a440 = rax_3;
                    }
                    bool cond:2_1 = rsi_1 <= 0x2f;
                    if (rsi_1 == 0x2f)
                    {
                        rbx = 4;
                        data_60a440 = (rdi_2 + 1);
                    }
                    else if (cond:2_1)
                    {
                        if (rsi_1 == 0x25)
                        {
                            rbx = 5;
                            data_60a440 = (rdi_2 + 1);
                        }
                    }
                    else if (rsi_1 == 0x3c)
                    {
                        rbx = 3;
                        data_60a440 = (rdi_2 + 1);
                    }
                    else if (rsi_1 == 0x3e)
                    {
                        rbx = 2;
                        data_60a440 = (rdi_2 + 1);
                    }
                    int64_t rax_4 = data_60a440;
                    int32_t rdx_1;
                    while (true)
                    {
                        uint64_t rsi_2 = *rax_4;
                        rax_4 = (rax_4 + 1);
                        rdx_1 = rsi_2;
                        if ((*(&rcx_1[rsi_2] + 1) & 0x20) == 0)
                        {
                            break;
                        }
                        data_60a440 = rax_4;
                    }
                    rdx_4 = 5;
                    if (((rdx_1 - 0x2b) & 0xfd) != 0)
                    {
                        r13 = sub_404b20(data_60a440, -0x8000000000000000, 0x7fffffffffffffff, "EgGkKmMPtTYZ0", dcgettext(nullptr, "Invalid number", 5), 0);
                        if ((&rbx[-4] > 1 || (&rbx[-4] <= 1 && r13 != 0)))
                        {
                            rbp = 1;
                            continue;
                        }
                        if ((&rbx[-4] <= 1 && r13 == 0))
                        {
                            rdx_4 = error(1, 0, dcgettext(nullptr, "division by zero", 5));
                        }
                    }
                    else if (rbx == 0)
                    {
                        rbx = 1;
                        rbp = 1;
                        r13 = sub_404b20(data_60a440, -0x8000000000000000, 0x7fffffffffffffff, "EgGkKmMPtTYZ0", dcgettext(nullptr, "Invalid number", 5), 0);
                        continue;
                    }
                    rsi_10 = "multiple relative modifiers spec…";
                }
                else
                {
                    if (rax_1 != 0x6f)
                    {
                        break;
                    }
                    data_60a2a0 = 1;
                    continue;
                }
            }
        }
        error(0, 0, dcgettext(nullptr, rsi_10, rdx_4));
        sub_402140(1);
        /* no return */
    }
    sub_402140(1);
    /* no return */
}

int64_t _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t rax;
    int64_t var_8 = rax;
    __libc_start_main(main, __return_addr, &arg_8, init, fini, arg3, &var_8);
    /* no return */
}

void sub_40208b()
{
    return;
}

int64_t sub_4020aa()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    return (COMBINE(rdx, rax) / 2);
}

void sub_4020e1()
{
    if (data_60a288 != 0)
    {
        return;
    }
    while (true)
    {
        int64_t rax_1 = data_60a290;
        if (rax_1 >= 0)
        {
            break;
        }
        data_60a290 = (rax_1 + 1);
        *(0x609e40 + ((rax_1 + 1) << 3))();
    }
    sub_40208b();
    data_60a288 = 1;
}

int64_t j_sub_4020aa()
{
    /* tailcall */
    return sub_4020aa();
}

int64_t sub_402140(int32_t arg1) __noreturn
{
    int64_t rbp = data_60a2b8;
    if (arg1 != 0)
    {
        __fprintf_chk(stderr, 1, dcgettext(nullptr, "Try '%s --help' for more informa…", 5), rbp);
    }
    else
    {
        __printf_chk(1, dcgettext(nullptr, "Usage: %s OPTION... FILE...\n", 5), rbp);
        fputs_unlocked(dcgettext(nullptr, "Shrink or extend the size of eac…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\nMandatory arguments to long op…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -c, --no-create        do not …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -o, --io-blocks        treat S…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -r, --reference=RFILE  base si…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --help     display this he…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --version  output version …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\nThe SIZE argument is an intege…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\nSIZE may also be prefixed by o…", 5), stdout);
        void* const var_88 = &data_40692a;
        void* const* rax_13 = &var_88;
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
            rax_13 = &rax_13[2];
            void* const rdi_11 = *rax_13;
            c_1 = false;
            z_1 = (rdi_11 & rdi_11) == 0;
            if (z_1)
            {
                break;
            }
            void* const rsi_11 = "truncate";
            int64_t rcx_2 = 9;
            while (rcx_2 != 0)
            {
                char temp0_1 = *rsi_11;
                char temp1_1 = *rdi_11;
                c_1 = temp0_1 < temp1_1;
                z_1 = temp0_1 == temp1_1;
                rsi_11 = (rsi_11 + 1);
                rdi_11 = (rdi_11 + 1);
                rcx_2 = (rcx_2 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
        } while ((((!z_1) && (!c_1)) - 0) != 0);
        void* const rbp_1 = rax_13[1];
        char* rax_24;
        int32_t rax_25;
        void* const r12_1;
        if (rbp_1 == 0)
        {
            int64_t rcx_5;
            int64_t rdx_5;
            uint64_t r8_2;
            ssize_t r9_2;
            rcx_5 = __printf_chk(1, dcgettext(nullptr, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            rax_24 = setlocale(5, nullptr, rdx_5, rcx_5, r8_2, r9_2, var_88, "test invocation");
            if (rax_24 != 0)
            {
                rax_25 = strncmp(rax_24, &data_4069ae, 3);
                if (rax_25 != 0)
                {
                    rbp_1 = "truncate";
                }
            }
            if ((rax_24 == 0 || (rax_24 != 0 && rax_25 == 0)))
            {
                rbp_1 = "truncate";
                r12_1 = " invocation";
                __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/cor…", "truncate");
            }
        }
        else
        {
            int64_t rcx_3;
            int64_t rdx_3;
            uint64_t r8_1;
            ssize_t r9_1;
            rcx_3 = __printf_chk(1, dcgettext(nullptr, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            char* rax_16 = setlocale(5, nullptr, rdx_3, rcx_3, r8_1, r9_1, var_88, "test invocation");
            if (rax_16 == 0)
            {
                goto label_4023f0;
            }
            if (strncmp(rax_16, &data_4069ae, 3) == 0)
            {
                goto label_4023f0;
            }
        }
        if ((((rbp_1 == 0 && rax_24 != 0) && rax_25 != 0) || rbp_1 != 0))
        {
            __printf_chk(1, dcgettext(nullptr, "Report %s translation bugs to <h…", 5), "truncate");
        label_4023f0:
            r12_1 = " invocation";
            __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/cor…", "truncate");
            if (rbp_1 != "truncate")
            {
                r12_1 = &data_408844[0x1b];
            }
        }
        __printf_chk(1, dcgettext(nullptr, "or available locally via: info '…", 5), rbp_1, r12_1);
    }
    exit(arg1);
    /* no return */
}

int64_t sub_402500(int64_t arg1)
{
    data_60a2b0 = arg1;
}

int64_t sub_402510(char arg1)
{
    data_60a2a8 = arg1;
}

void sub_402520(void* arg1)
{
    int32_t rax = sub_4060f0(stdout);
    int32_t* rax_1;
    if (rax != 0)
    {
        rax_1 = __errno_location();
        if ((data_60a2a8 == 0 || (data_60a2a8 != 0 && *rax_1 != 0x20)))
        {
            char* rax_3 = dcgettext(nullptr, "write error", 5);
            int64_t rdi_2 = data_60a2b0;
            if (rdi_2 == 0)
            {
                error(0, *rax_1, "%s", rax_3);
            }
            else
            {
                error(0, *rax_1, "%s: %s", sub_404030(rdi_2), rax_3);
            }
        }
    }
    if (((rax == 0 || ((rax != 0 && data_60a2a8 != 0) && *rax_1 == 0x20)) && sub_4060f0(stderr) == 0))
    {
        return;
    }
    _exit(data_60a1f8);
    /* no return */
}

char* sub_4025c0(char* arg1)
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
                void* const rdi_1 = &data_4072d8;
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
    data_60a2b8 = rbx;
    __progname_full = rbx;
    return rax;
}

char* sub_402660(char* arg1, int32_t arg2)
{
    char* rax = dcgettext(nullptr, arg1, 5);
    char* rbx = rax;
    if (arg1 == rax)
    {
        char* rax_2 = sub_4061b0();
        char rdx_2 = (*rax_2 & 0xdf);
        if (rdx_2 != 0x55)
        {
            if (rdx_2 != 0x47)
            {
            label_402741:
                void* const rbx_1 = &data_4072dc;
                if (arg2 != 9)
                {
                    rbx_1 = "'";
                }
                return rbx_1;
            }
            if ((rax_2[1] & 0xdf) != 0x42)
            {
                goto label_402741;
            }
            if (rax_2[2] != 0x31)
            {
                goto label_402741;
            }
            if (rax_2[3] != 0x38)
            {
                goto label_402741;
            }
            if (rax_2[4] != 0x30)
            {
                goto label_402741;
            }
            if (rax_2[5] != 0x33)
            {
                goto label_402741;
            }
            if (rax_2[6] != 0x30)
            {
                goto label_402741;
            }
            if (rax_2[7] != 0)
            {
                goto label_402741;
            }
            bool cond:2_1 = *rbx != 0x60;
            rbx = &data_4072e5;
            if (cond:2_1)
            {
                rbx = &data_4072e2;
            }
        }
        else
        {
            if ((rax_2[1] & 0xdf) != 0x54)
            {
                goto label_402741;
            }
            if ((rax_2[2] & 0xdf) != 0x46)
            {
                goto label_402741;
            }
            if (rax_2[3] != 0x2d)
            {
                goto label_402741;
            }
            if (rax_2[4] != 0x38)
            {
                goto label_402741;
            }
            if (rax_2[5] != 0)
            {
                goto label_402741;
            }
            bool cond:1_1 = *rbx != 0x60;
            rbx = &data_4072e9;
            if (cond:1_1)
            {
                rbx = &data_4072de;
            }
        }
    }
    return rbx;
}

int64_t sub_402760(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
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
    label_4027f8:
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
                    label_402b6c:
                        if (var_c0 != 0)
                        {
                            r13_1 = 4;
                        }
                        goto label_402bb4;
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
                            rbx_1 = sub_402760(r15, var_70, arg3, r11, 5, arg6, arg7, arg8, arg9);
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
                    goto label_402bcb;
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
                        goto label_402d05;
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
                                goto label_402955;
                            }
                            goto label_402c40;
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
                            goto label_402d05;
                        }
                        case 7:
                        {
                            rbp_3 = 7;
                            rcx_2 = 0x61;
                            rdx = r11_1 == 2;
                            goto label_402b30;
                        }
                        case 8:
                        {
                            rbp_3 = 8;
                            rcx_2 = 0x62;
                            rdx = r11_1 == 2;
                        label_402b30:
                            if (var_c0 == 0)
                            {
                                goto label_402b3b;
                            }
                            rbp_3 = rcx_2;
                            r13 = 0;
                        label_402997:
                            if (var_5c == 0)
                            {
                                goto label_4029a8;
                            }
                        label_402b60:
                            r13_1 = r11_1;
                            rax_14 = rdx;
                            r11 = r9;
                            goto label_402b68;
                        }
                        case 9:
                        {
                            rbp_3 = 9;
                            rcx_2 = 0x74;
                            goto label_402d9b;
                        }
                        case 0xa:
                        {
                            rbp_3 = 0xa;
                            rcx_2 = 0x6e;
                        label_402d9b:
                            rdx = r11_1 == 2;
                            bool rax_26 = (var_5c & rdx);
                            var_b8 = rax_26;
                            if (rax_26 != 0)
                            {
                            label_402daa:
                                r11 = r9;
                                r13_1 = 2;
                                goto label_402b6c;
                            }
                            goto label_402b30;
                        }
                        case 0xb:
                        {
                            rbp_3 = 0xb;
                            rcx_2 = 0x76;
                            rdx = r11_1 == 2;
                            goto label_402b30;
                        }
                        case 0xc:
                        {
                            rbp_3 = 0xc;
                            rcx_2 = 0x66;
                            rdx = r11_1 == 2;
                            goto label_402b30;
                        }
                        case 0xd:
                        {
                            rbp_3 = 0xd;
                            rcx_2 = 0x72;
                            goto label_402d9b;
                        }
                        case 0x20:
                        {
                            rbp_3 = 0x20;
                            rdx = r11_1 == 2;
                            goto label_402936;
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
                        label_402936:
                            if (var_5c == 0)
                            {
                                goto label_402955;
                            }
                            if (rdx == 0)
                            {
                                goto label_402955;
                            }
                            goto label_402daa;
                        }
                        case 0x23:
                        case 0x7e:
                        {
                            rdx = r11_1 == 2;
                        label_40292d:
                            if (r12_1 != 0)
                            {
                                goto label_402b3b;
                            }
                            goto label_402936;
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
                        label_402d60:
                            rdx = r11_1 == 2;
                        label_402955:
                            rax_8 = ((((var_c0 ^ 1) | rdx) ^ 1) | var_5c);
                            if (rax_8 == 0)
                            {
                                goto label_402a5c;
                            }
                            goto label_40295f;
                        }
                        case 0x27:
                        {
                            goto label_402add;
                        }
                        case 0x3f:
                        {
                            goto label_402aad;
                        }
                        case 0x5c:
                        {
                            if (r11_1 != 2)
                            {
                                goto label_402b0a;
                            }
                            if (var_5c != 0)
                            {
                                goto label_40389d;
                            }
                            r12_1 = (r12_1 + 1);
                            rax_12 = r10;
                            r13 = 0;
                            rbp_3 = 0x5c;
                            goto label_402a74;
                        }
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_402909;
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
                            goto label_402f00;
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
                            goto label_402f00;
                        }
                        if (var_5c != 0)
                        {
                        label_403850:
                            r13_1 = r11_1;
                            r11 = r9;
                        label_402bb4:
                            rbx_1 = sub_402760(r15, r14, arg3, r11, r13_1, (arg6 & 0xfffffffd), 0, arg8, arg9);
                        label_402bcb:
                            return rbx_1;
                        }
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                            goto label_402d05;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                                goto label_402c57;
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
                                goto label_402d05;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                            label_402c20:
                                r13 = 0;
                                goto label_4029db;
                            }
                            case 8:
                            {
                                rdx = 0;
                                r13 = 0;
                                rbp_3 = 0x62;
                            label_4029a8:
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
                            label_4029db:
                                if (r14 <= rbx_1)
                                {
                                    goto label_4029e5;
                                }
                                r15[rbx_1] = 0x5c;
                            label_4029e5:
                                rbx_1 = (rbx_1 + 1);
                                r12_1 = (r12_1 + 1);
                                goto label_4029ed;
                            }
                            case 9:
                            {
                                goto label_402bd0;
                            }
                            case 0xa:
                            {
                                goto label_402b48;
                            }
                            case 0xb:
                            {
                                goto label_402c30;
                            }
                            case 0xc:
                            {
                                goto label_402c10;
                            }
                            case 0xd:
                            {
                                goto label_402bf9;
                            }
                            case 0x20:
                            {
                                rax_27 = var_b8;
                                goto label_402f5a;
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
                                goto label_402be5;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = var_b8;
                                goto label_402f3a;
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
                                goto label_402f22;
                            }
                            case 0x27:
                            {
                                goto label_402add;
                            }
                            case 0x3f:
                            {
                                goto label_402aad;
                            }
                            case 0x5c:
                            {
                                goto label_402b0a;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                goto label_402909;
                            }
                        }
                    }
                    else
                    {
                    label_402f00:
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                        label_402d00:
                            var_b8 = 0;
                        label_402d05:
                            uint64_t rdi_4;
                            if (rax == 1)
                            {
                                r10 = r10;
                                rdi_4 = 1;
                                rax_12 = (*__ctype_b_loc()[rbp_3] & 0x4000);
                                r13 = rax_12 != 0;
                                rdx = rax_12 == 0;
                                rdx = (rdx & var_c0);
                            label_402d54:
                                if (rdx == 0)
                                {
                                    goto label_402d60;
                                }
                                rdx = var_c0;
                                r13 = 0;
                            label_403251:
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
                                    goto label_402a74;
                                }
                                if ((rdx != 0 && var_5c != 0))
                                {
                                    r13_1 = r11_1;
                                    var_c0 = rax_12;
                                    r11 = r9;
                                    goto label_402b6c;
                                }
                                r13 = var_98;
                                goto label_4029ed;
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
                                rax_12 = sub_406070(&var_44, rbp_4, (var_98 - r15_1), &var_40);
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
                                            goto label_402b6c;
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
                                goto label_403251;
                            }
                            goto label_402d54;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                            label_402c40:
                                if (var_5c != 0)
                                {
                                    r13_1 = r11_1;
                                    r11 = r9;
                                    var_c0 = r13_1 == 2;
                                    goto label_402b6c;
                                }
                                var_b8 = 0;
                            label_402c57:
                                rdx = r11_1 == 2;
                                rax_8 = ((r10 ^ 1) & rdx);
                                int64_t rcx_6;
                                if (rax_8 == 0)
                                {
                                    rcx_6 = rbx_1;
                                    if (r14 <= rbx_1)
                                    {
                                        goto label_402ca2;
                                    }
                                    rax_8 = r10;
                                label_402c9a:
                                    r15[rcx_6] = 0x5c;
                                    r10 = rax_8;
                                label_402ca2:
                                    rbx_1 = (rcx_6 + 1);
                                    if (r11_1 == 2)
                                    {
                                        rax_8 = r13;
                                        rbp_3 = 0x30;
                                        r13 = 0;
                                        goto label_402a5c;
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
                                    goto label_402ce3;
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
                                    goto label_402c9a;
                                }
                                rbx_1 = (rbx_1 + 4);
                                r10 = rax_8;
                                r13 = 0;
                                rbp_3 = 0x30;
                                goto label_402a5c;
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
                                goto label_402d00;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                                goto label_402c15;
                            }
                            case 8:
                            {
                                rbp_3 = 0x62;
                                goto label_402b4d;
                            }
                            case 9:
                            {
                            label_402bd0:
                                rbp_3 = 0x74;
                                goto label_402b4d;
                            }
                            case 0xa:
                            {
                            label_402b48:
                                rbp_3 = 0x6e;
                            label_402b4d:
                                rdx = 0;
                                r13 = 0;
                                if (var_5c != 0)
                                {
                                    goto label_402b60;
                                }
                                goto label_4029a8;
                            }
                            case 0xb:
                            {
                            label_402c30:
                                rbp_3 = 0x76;
                                goto label_402c15;
                            }
                            case 0xc:
                            {
                            label_402c10:
                                rbp_3 = 0x66;
                            label_402c15:
                                if (var_5c == 0)
                                {
                                    goto label_402c20;
                                }
                                r13_1 = r11_1;
                                rax_14 = 0;
                                r11 = r9;
                            label_402b68:
                                var_c0 = (var_c0 & rax_14);
                                goto label_402b6c;
                            }
                            case 0xd:
                            {
                                var_b8 = 0;
                            label_402bf9:
                                rbp_3 = 0xd;
                                rcx_2 = 0x72;
                                rdx = r11_1 == 2;
                                goto label_402b30;
                            }
                            case 0x20:
                            {
                                rax_27 = 0;
                            label_402f5a:
                                rbp_3 = 0x20;
                                goto label_402f22;
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
                            label_402be5:
                                rdx = 0;
                            label_402b3b:
                                r13 = 0;
                                goto label_402955;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = 0;
                            label_402f3a:
                                if (r12_1 == 0)
                                {
                                    r13 = var_b8;
                                    rdx = 0;
                                    var_b8 = rax_28;
                                    goto label_402955;
                                }
                                var_b8 = rax_28;
                                r13 = 0;
                            label_40295f:
                                rax_8 = 0;
                                goto label_402961;
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
                            label_402f22:
                                r13 = var_b8;
                                var_b8 = rax_27;
                                rax_8 = 0;
                                goto label_402961;
                            }
                            case 0x27:
                            {
                                var_b8 = 0;
                            label_402add:
                                if (r11_1 != 2)
                                {
                                    var_5b_1 = r13;
                                    rdx = 0;
                                    rbp_3 = 0x27;
                                    goto label_402955;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_40389d;
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
                                goto label_402a5c;
                            }
                            case 0x3f:
                            {
                                var_b8 = 0;
                            label_402aad:
                                if (r11_1 == 2)
                                {
                                    if (var_5c != 0)
                                    {
                                    label_40389d:
                                        r13_1 = r11_1;
                                        r11 = r9;
                                        goto label_402b6c;
                                    }
                                    r13 = 0;
                                    rax_8 = 0;
                                    rbp_3 = 0x3f;
                                label_402a5c:
                                    rdx = r11_1 == 2;
                                    if (var_b8 != 0)
                                    {
                                        goto label_402997;
                                    }
                                    r12_1 = (r12_1 + 1);
                                    rax_12 = ((rax_8 ^ 1) & r10);
                                    goto label_402a74;
                                }
                                if (r11_1 != 5)
                                {
                                    rbp_3 = 0x3f;
                                    rdx = r11_1 == 2;
                                    r13 = 0;
                                    goto label_402955;
                                }
                                if ((arg6 & 4) == 0)
                                {
                                label_403040:
                                    rdx = 0;
                                    r13 = 0;
                                    rbp_3 = 0x3f;
                                    goto label_402955;
                                }
                                int64_t rax_30 = (r12_1 + 2);
                                if (rax_30 >= r9)
                                {
                                    goto label_403040;
                                }
                                if (*((arg3 + r12_1) + 1) != 0x3f)
                                {
                                    goto label_403040;
                                }
                                rbp_3 = *(arg3 + rax_30);
                                if (rbp_3 > 0x3e)
                                {
                                    goto label_403040;
                                }
                                if ((!(TEST_BITQ(0x7000a38200000000, rbp_3))))
                                {
                                    goto label_403040;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_403850;
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
                            label_402ce3:
                                rax_8 = r13;
                                r13 = 0;
                                if (((var_c0 ^ 1) | rdx) != 0)
                                {
                                    goto label_402a5c;
                                }
                            label_402961:
                                if (arg7 == 0)
                                {
                                    goto label_402a5c;
                                }
                                if (((*(arg7 + ((rbp_3 >> 5) << 2)) >> rbp_3) & 1) == 0)
                                {
                                    goto label_402a5c;
                                }
                                rdx = r11_1 == 2;
                                goto label_402997;
                            }
                            case 0x5c:
                            {
                                var_b8 = 0;
                            label_402b0a:
                                rdx = (var_c0 & var_5c);
                                rbp_3 = 0x5c;
                                rcx_2 = 0x5c;
                                rax_1 = var_a0_1 != 0;
                                rdx = (rdx & rax_1);
                                if (rdx == 0)
                                {
                                    goto label_402b30;
                                }
                                r12_1 = (r12_1 + 1);
                                rax_12 = r10;
                                r13 = 0;
                            label_402a74:
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
                                    goto label_4029ed;
                                }
                            label_4029ed:
                                if (rbx_1 >= r14)
                                {
                                    goto label_4029f6;
                                }
                                r15[rbx_1] = rbp_3;
                            label_4029f6:
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
                            label_402909:
                                rax_1 = r9 != 1;
                                if (r9 == -1)
                                {
                                    rax_1 = *(arg3 + 1) != 0;
                                }
                                rdx = r11_1 == 2;
                                if (rax_1 != 0)
                                {
                                    goto label_402b3b;
                                }
                                goto label_40292d;
                            }
                        }
                    }
                }
            }
        label_402fe6:
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
            goto label_4027f8;
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
                goto label_4027f8;
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
            goto label_4027f8;
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
                var_78_1 = &data_4072dc;
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
                var_78_1 = &data_4072dc;
            }
            goto label_4027f8;
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
            var_78_1 = &data_4072dc;
            goto label_4027f8;
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
            goto label_4027f8;
        }
        case 8:
        case 9:
        case 0xa:
        {
            if ((!cond:1))
            {
                arg8 = sub_402660(&data_4072ed, r13);
                arg9 = sub_402660("'", r13);
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
            goto label_4027f8;
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
            goto label_402fe6;
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
        goto label_4027f8;
    }
}

char* sub_403990(int32_t arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4)
{
    int64_t r15 = arg1;
    int32_t* rax = __errno_location();
    int64_t rbx = data_60a238;
    int32_t rax_1 = *rax;
    if (r15 < 0)
    {
        abort();
        /* no return */
    }
    if (data_60a250 <= r15)
    {
        if (r15 == 0x7fffffff)
        {
            sub_4049f0();
            /* no return */
        }
        int32_t r12_1 = (r15 + 1);
        int64_t rsi_1 = (r12_1 << 4);
        if (rbx == 0x60a240)
        {
            int64_t rax_9 = sub_404800(0, rsi_1);
            int128_t zmm0 = data_60a240;
            rbx = rax_9;
            data_60a238 = rax_9;
            *rax_9 = zmm0;
        }
        else
        {
            int64_t rax_2 = sub_404800(rbx, rsi_1);
            data_60a238 = rax_2;
            rbx = rax_2;
        }
        int64_t rdi_1 = data_60a250;
        memset(((rdi_1 << 4) + rbx), 0, ((r12_1 - rdi_1) << 4));
        data_60a250 = r12_1;
    }
    int64_t rbx_1 = (rbx + (r15 << 4));
    void* r15_2 = &arg4[2];
    int32_t rax_4 = (arg4[1] | 1);
    uint64_t r11 = *rbx_1;
    char* r12_2 = *(rbx_1 + 8);
    int64_t rax_5 = sub_402760(r12_2, r11, arg2, arg3, *arg4, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    if (r11 <= rax_5)
    {
        size_t rsi_3 = (rax_5 + 1);
        *rbx_1 = rsi_3;
        if (r12_2 != 0x60a2c0)
        {
            free(r12_2);
        }
        char* rax_6 = sub_4047a0(rsi_3);
        uint32_t r8_1 = *arg4;
        *(rbx_1 + 8) = rax_6;
        r12_2 = rax_6;
        sub_402760(rax_6, rsi_3, arg2, arg3, r8_1, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    }
    *rax = rax_1;
    return r12_2;
}

int64_t sub_403b30(int64_t arg1)
{
    int64_t rbx = arg1;
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    if (rbx == 0)
    {
        rbx = 0x60a3c0;
    }
    int64_t rax_1 = sub_4049a0(rbx, 0x38);
    *rax = r12;
    return rax_1;
}

uint64_t sub_403b70(int32_t* arg1)
{
    if (arg1 == 0)
    {
        arg1 = &data_60a3c0;
    }
    return *arg1;
}

void sub_403b80(int32_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60a3c0;
    }
    *arg1 = arg2;
}

uint64_t sub_403b90(int64_t arg1, uint8_t arg2, int32_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = 0x60a3c0;
    }
    char rcx_1 = (arg2 & 0x1f);
    int32_t rsi = *((arg1 + ((arg2 >> 5) << 2)) + 8);
    uint32_t rax_3 = (rsi >> rcx_1);
    *((arg1 + ((arg2 >> 5) << 2)) + 8) = ((((arg3 ^ rax_3) & 1) << rcx_1) ^ rsi);
    return (rax_3 & 1);
}

uint64_t sub_403bd0(int128_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60a3c0;
    }
    uint64_t rax = *(arg1 + 4);
    *(arg1 + 4) = arg2;
    return rax;
}

void sub_403bf0(int32_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = &data_60a3c0;
    }
    *arg1 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *(arg1 + 0x28) = arg2;
        *(arg1 + 0x30) = arg3;
        return;
    }
    int64_t var_8 = 0x60a3c0;
    abort();
    /* no return */
}

int64_t sub_403c20(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t* arg5)
{
    int32_t* rbx = arg5;
    if (arg5 == 0)
    {
        rbx = &data_60a3c0;
    }
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    int64_t rax_2 = sub_402760(arg1, arg2, arg3, arg4, *rbx, rbx[1], &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = r12;
    return rax_2;
}

char* sub_403ca0(uint64_t arg1, uint64_t arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* rbx = arg4;
    if (arg4 == 0)
    {
        rbx = &data_60a3c0;
    }
    int32_t* rax = __errno_location();
    int32_t rax_1 = *rax;
    int32_t rbp;
    rbp = arg3 == 0;
    int32_t rbp_1 = (rbp | rbx[1]);
    int64_t rax_2 = sub_402760(nullptr, 0, arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    char* rax_3 = sub_4047a0((rax_2 + 1));
    sub_402760(rax_3, (rax_2 + 1), arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = rax_1;
    if (arg3 != 0)
    {
        *arg3 = rax_2;
    }
    return rax_3;
}

int64_t sub_403d90(uint64_t arg1, uint64_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_403ca0(arg1, arg2, nullptr, arg3);
}

uint64_t sub_403da0()
{
    uint64_t rax_2 = data_60a250;
    int64_t r12 = data_60a238;
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
    if (rdi_2 != 0x60a2c0)
    {
        rax_2 = free(rdi_2);
        *data_60a240 = 0x100;
        *(data_60a240 + 8) = 0x60a2c0;
    }
    if (r12 != 0x60a240)
    {
        rax_2 = free(r12);
        data_60a238 = 0x60a240;
    }
    data_60a250 = 1;
    return rax_2;
}

int64_t sub_403e40(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403990(arg1, arg2, -1, &data_60a3c0);
}

int64_t sub_403e60(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_403990(arg1, arg2, arg3, &data_60a3c0);
}

int64_t sub_403e70(uint64_t arg1)
{
    /* tailcall */
    return sub_403990(0, arg1, -1, &data_60a3c0);
}

int64_t sub_403e90(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403990(0, arg1, arg2, &data_60a3c0);
}

char* sub_403eb0(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_403990(arg1, arg3, -1, &var_48);
}

char* sub_403f20(int32_t arg1, int32_t arg2, uint64_t arg3, uint64_t arg4)
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
    return sub_403990(arg1, arg3, arg4, &var_48);
}

int64_t sub_403f90(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403eb0(0, arg1, arg2);
}

int64_t sub_403fa0(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_403f20(0, arg1, arg2, arg3);
}

char* sub_403fb0(uint64_t arg1, uint64_t arg2, uint8_t arg3)
{
    char rcx_1 = (arg3 & 0x1f);
    int64_t var_18 = data_60a3f0;
    int128_t var_48 = data_60a3c0;
    int128_t var_38 = data_60a3d0;
    int128_t var_28 = data_60a3e0;
    int32_t rdx = *((&var_48 + ((arg3 >> 5) << 2)) + 8);
    *((&var_48 + ((arg3 >> 5) << 2)) + 8) = ((((!(rdx >> rcx_1)) & 1) << rcx_1) ^ rdx);
    return sub_403990(0, arg1, arg2, &var_48);
}

int64_t sub_404020(uint64_t arg1, uint8_t arg2)
{
    /* tailcall */
    return sub_403fb0(arg1, -1, arg2);
}

int64_t sub_404030(uint64_t arg1)
{
    /* tailcall */
    return sub_403fb0(arg1, -1, 0x3a);
}

int64_t sub_404050(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403fb0(arg1, arg2, 0x3a);
}

char* sub_404060(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_403990(arg1, arg3, -1, &var_48);
}

char* sub_4040d0(int32_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, 
    uint64_t arg5)
{
    int128_t var_48 = data_60a3c0;
    int128_t var_38 = data_60a3d0;
    int128_t var_28 = data_60a3e0;
    int64_t var_18 = data_60a3f0;
    var_48 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *var_28[8] = arg2;
        int64_t var_18_1 = arg3;
        return sub_403990(arg1, arg4, arg5, &var_48);
    }
    abort();
    /* no return */
}

int64_t sub_404190(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_403990(arg1, arg2, arg3, &data_60a200);
}

int64_t sub_4041a0(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403990(0, arg1, arg2, &data_60a200);
}

int64_t sub_4041c0(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403990(arg1, arg2, -1, &data_60a200);
}

int64_t sub_4041e0(uint64_t arg1)
{
    /* tailcall */
    return sub_403990(0, arg1, -1, &data_60a200);
}

int64_t sub_404200(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    __fprintf_chk(arg1, 1, "Copyright %s %d Free Software Fo…", dcgettext(nullptr, &data_40802b, 5), 0x7e1);
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

int64_t sub_4045e0(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_404200(arg1, arg2, arg3, arg4, arg5, r9);
}

int64_t sub_404600(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_404200(arg1, arg2, arg3, arg4, &var_58, r9);
}

int64_t sub_404660(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
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
    return sub_404200(arg1, arg2, arg3, arg4, &var_88, r9_1);
}

int64_t sub_404720()
{
    __printf_chk(1, dcgettext(nullptr, "\nReport bugs to: %s\n", 5), "bug-coreutils@gnu.org");
    __printf_chk(1, dcgettext(nullptr, "%s home page: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
    /* tailcall */
    return fputs_unlocked(dcgettext(nullptr, "General help using GNU software:…", 5), stdout);
}

int64_t sub_4047a0(size_t arg1)
{
    int64_t rax = malloc(arg1);
    if ((rax == 0 && arg1 != 0))
    {
        sub_4049f0();
        /* no return */
    }
    return rax;
}

int64_t sub_404800(int64_t arg1, size_t arg2)
{
    if ((arg2 == 0 && arg1 != 0))
    {
        free(arg1);
        return 0;
    }
    int64_t rax = realloc(arg1, arg2);
    if ((rax == 0 && arg2 != 0))
    {
        sub_4049f0();
        /* no return */
    }
    return rax;
}

int64_t sub_40494a() __noreturn
{
    sub_4049f0();
    /* no return */
}

int64_t sub_404950(size_t arg1)
{
    /* tailcall */
    return memset(sub_4047a0(arg1), 0, arg1);
}

int64_t sub_404970(size_t arg1, size_t arg2)
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
    sub_4049f0();
    /* no return */
}

int64_t sub_4049a0(int64_t arg1, size_t arg2)
{
    /* tailcall */
    return memcpy(sub_4047a0(arg2), arg1, arg2);
}

int64_t sub_4049d0(char* arg1)
{
    /* tailcall */
    return sub_4049a0(arg1, (strlen(arg1) + 1));
}

int64_t sub_4049f0() __noreturn
{
    error(data_60a1f8, 0, "%s", dcgettext(nullptr, "memory exhausted", 5));
    abort();
    /* no return */
}

int64_t sub_404a30(char* arg1, int32_t arg2, int64_t arg3, int64_t arg4, 
    char* arg5, int64_t arg6, int32_t arg7)
{
    int32_t rbx = arg7;
    int64_t var_40;
    int32_t rax = sub_404b50(arg1, nullptr, arg2, &var_40, arg5);
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
                goto label_404a8a;
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
            goto label_404a8a;
        }
    }
    if ((rax != 0 || (rax == 0 && (rbp < arg3 || (rbp >= arg3 && rbp > arg4)))))
    {
        *r14_1 = 0x4b;
    label_404a8a:
        int64_t rax_2 = sub_4041e0(arg1);
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

int64_t sub_404b20(char* arg1, int64_t arg2, int64_t arg3, char* arg4, 
    int64_t arg5, int32_t arg6)
{
    return sub_404a30(arg1, 0xa, arg2, arg3, arg4, arg5, arg6);
}

uint64_t sub_404b50(char* arg1, int64_t* arg2, int32_t arg3, int64_t* arg4, 
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
            label_404bcb:
                *arg4 = rbp_1;
            }
            else
            {
                r13_1 = *r15;
                if (r13_1 == 0)
                {
                    goto label_404bcb;
                }
                if (strchr(arg5, r13_1) != 0)
                {
                    goto label_404c2d;
                }
            label_404cd9:
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
                label_404c2d:
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
                            goto label_404c36;
                        }
                        rax_7 = strchr(arg5, 0x30);
                        if (rax_7 == 0)
                        {
                            goto label_404c36;
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
                                        goto label_404cd9;
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
                                        goto label_404e58;
                                    }
                                    case 0xf:
                                    case 0x2f:
                                    {
                                        rsi_4 = 1;
                                        rcx_2 = 0x400;
                                        r9_2 = -0x20000000000000;
                                        goto label_404ec0;
                                    }
                                    case 0x14:
                                    {
                                        rsi_4 = 1;
                                        rcx_5 = 0x400;
                                        r9_5 = -0x20000000000000;
                                        goto label_404ff8;
                                    }
                                    case 0x15:
                                    {
                                        rsi_4 = 1;
                                        rcx_6 = 0x400;
                                        r9_6 = -0x20000000000000;
                                        goto label_405060;
                                    }
                                }
                                if ((rdx_2 == 2 || rdx_2 == 0x22))
                                {
                                    rsi_4 = 1;
                                    rcx_4 = 0x400;
                                    r9_4 = -0x20000000000000;
                                    goto label_404f90;
                                }
                                if (rdx_2 == 0)
                                {
                                    rsi_4 = 1;
                                    rcx_3 = 0x400;
                                    r9_3 = -0x20000000000000;
                                    goto label_404f28;
                                }
                                if (rdx_2 == 0x1e)
                                {
                                    rsi_4 = 1;
                                    goto label_404d18;
                                }
                            }
                        }
                        if (rax_8 == 0x42)
                        {
                            goto label_405248;
                        }
                        if (rax_8 == 0x69)
                        {
                            rax_6 = 0x400;
                            int32_t rsi_6;
                            rsi_6 = r15[2] == 0x42;
                            rsi_2 = ((rsi_6 + rsi_6) + 1);
                            goto label_404c40;
                        }
                        if (rax_8 == 0x44)
                        {
                        label_405248:
                            rsi_2 = 2;
                            rax_6 = 0x3e8;
                            goto label_404c40;
                        }
                    }
                    else
                    {
                    label_404c36:
                        rsi_2 = 1;
                        rax_6 = 0x400;
                    label_404c40:
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
                            goto label_404de8;
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
                            goto label_404de8;
                        }
                        int64_t rax_19;
                        int64_t rdx_9;
                        rdx_9 = HIGHD(0x7fffffffffffffff);
                        rax_19 = LOWD(0x7fffffffffffffff);
                        rax_16 = (COMBINE(rdx_9, rax_19) / rcx);
                        if (rbp_1 > rax_16)
                        {
                            goto label_4051a0;
                        }
                        rbp_1 = (rbp_1 * rcx);
                        if (rbp_1 < rdi_4)
                        {
                            goto label_404de8;
                        }
                    }
                    if (((((rdx_1 > 0x2f && (r13_2 == 9 || r13_2 == 0x29)) || ((((((rdx_1 <= 0x2f && (TEST_BITQ(0x814400308945, rdx_1))) && rax_7 != 0) && rax_8 != 0x44) && rax_8 != 0x69) && rax_8 != 0x42) && (rdx_2 == 6 || rdx_2 == 0x26))) && rbp_1 >= rax_14) || (((rdx_1 > 0x2f && (r13_2 == 0xb || r13_2 == 0x2b)) || ((((((rdx_1 <= 0x2f && (TEST_BITQ(0x814400308945, rdx_1))) && rax_7 != 0) && rax_8 != 0x44) && rax_8 != 0x69) && rax_8 != 0x42) && (rdx_2 == 8 || rdx_2 == 0x28))) && rbp_1 >= rdi_4)))
                    {
                        if (rax_16 < rbp_1)
                        {
                            goto label_4051a0;
                        }
                        rbp_1 = (rbp_1 * rcx);
                        goto label_404d18;
                    }
                    if ((rdx_1 > 0x2f && r13_2 == 0x20))
                    {
                        rsi_4 = rsi_2;
                    }
                    if (((rdx_1 > 0x2f && r13_2 == 0x20) || ((((((rdx_1 <= 0x2f && (TEST_BITQ(0x814400308945, rdx_1))) && rax_7 != 0) && rax_8 != 0x44) && rax_8 != 0x69) && rax_8 != 0x42) && rdx_2 == 0x1d)))
                    {
                        if (rbp_1 < -0x40000000000000)
                        {
                            goto label_404de8;
                        }
                        if (rbp_1 > 0x3fffffffffffff)
                        {
                            goto label_4051a0;
                        }
                        rbp_1 = (rbp_1 << 9);
                        goto label_404d18;
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
                                label_404de8:
                                    rbp_1 = -0x8000000000000000;
                                    r12_1 = 1;
                                    goto label_404d18;
                                }
                                if (rbp_1 <= 0x1fffffffffffff)
                                {
                                    rbp_1 = (rbp_1 << 0xa);
                                    goto label_404d18;
                                }
                            label_4051a0:
                                rbp_1 = 0x7fffffffffffffff;
                                r12_1 = 1;
                                goto label_404d18;
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
                                goto label_404cd9;
                            }
                            case 0x21:
                            {
                                rsi_4 = rsi_2;
                            label_404d18:
                                void* rsi_5 = &r15[rsi_4];
                                int32_t rax_12 = (r12_1 | 2);
                                *rbx = rsi_5;
                                if (*rsi_5 != 0)
                                {
                                    r12_1 = rax_12;
                                }
                                goto label_404bcb;
                            }
                            case 0x35:
                            {
                                rsi_4 = rsi_2;
                                if (rbp_1 < -0x4000000000000000)
                                {
                                    goto label_404de8;
                                }
                                if (rbp_1 > 0x3fffffffffffffff)
                                {
                                    goto label_4051a0;
                                }
                                rbp_1 = (rbp_1 + rbp_1);
                                goto label_404d18;
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
                            label_404f28:
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
                                goto label_405190;
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
                            label_404f90:
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
                                goto label_405190;
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
                            label_404e58:
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
                            label_405190:
                                r12_1 = (r12_1 | r10_1);
                                goto label_404d18;
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
                            label_404ec0:
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
                                goto label_405190;
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
                        label_404ff8:
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
                            goto label_405190;
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
                        label_405060:
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
                            goto label_405190;
                        }
                        if (r13_2 > 0x35)
                        {
                            goto label_404cd9;
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

uint64_t sub_4052a0(int64_t arg1, int32_t* arg2)
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

uint64_t sub_405380(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
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
            goto label_4055b0;
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
                            goto label_4054d6;
                        }
                    }
                    else
                    {
                        if (var_70_1 != 0)
                        {
                            goto label_4054d6;
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
                        label_4054d6:
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
        label_4055b0:
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
                    goto label_4055de;
                }
                *arg5 = r12;
            label_4055de:
                int32_t* rdx_4 = rbx[2];
                rax_14 = rbx[3];
                if (rdx_4 != 0)
                {
                    *rdx_4 = rax_14;
                    rax_14 = 0;
                }
            }
            goto label_4055fc;
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
        label_4055fc:
            return rax_14;
        }
    }
    if ((arg6 != 0 && *(arg2[*arg7] + 1) != 0x2d))
    {
        rax_14 = 0xffffffff;
        if (strchr(arg3, rax_1) != 0)
        {
            goto label_4055fc;
        }
    }
    if (arg8 == 0)
    {
        goto label_40556e;
    }
    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: unrecognized option '%s%s'\n", 5), *arg2, arg9, r14, arg4);
label_40556e:
    *(arg7 + 0x20) = 0;
    *arg7 = (*arg7 + 1);
    arg7[2] = 0;
    return 0x3f;
}

uint64_t sub_4059a0(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
    int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8)
{
    int32_t r13 = arg7[1];
    if (arg1 <= 0)
    {
        goto label_405bdc;
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
            goto label_405a68;
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
        label_405a68:
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
                    sub_4052a0(arg2, arg7);
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
                void* const rdi = &data_408841;
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
                        sub_4052a0(arg2, arg7);
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
                    goto label_405bdc;
                }
                *arg7 = rdx_2;
            label_405bdc:
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
                            goto label_405ce0;
                        }
                        int32_t* var_88_2;
                        int32_t var_80_2;
                        void* const var_78_1;
                        if (rcx_9 == 0x2d)
                        {
                            *(arg7 + 0x20) = &r14_1[2];
                            var_78_1 = &data_408841;
                            var_80_2 = r13;
                            var_88_2 = arg7;
                            goto label_405d50;
                        }
                        if (arg6 == 0)
                        {
                            goto label_405ce0;
                        }
                        if (r14_1[2] == 0)
                        {
                            if (strchr(r15_1, rcx_9) != 0)
                            {
                                goto label_405ce0;
                            }
                            goto label_405ca1;
                        }
                    label_405ca1:
                        *(arg7 + 0x20) = &r14_1[1];
                        int32_t rax_12 = sub_405380(rbp_1, arg2, r15_1, arg4, arg5, arg6, arg7, r13, &data_408842);
                        r14_2 = rax_12;
                        if (rax_12 == 0xffffffff)
                        {
                            r14_1 = arg2[*arg7];
                        label_405ce0:
                            rdx = &r14_1[1];
                        label_405b21:
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
                                        goto label_405d1e;
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
                                    label_405d1e:
                                        *(arg7 + 0x20) = r8_1;
                                        arg6 = 0;
                                        *(arg7 + 0x10) = 0;
                                        var_78_1 = &data_408860;
                                        var_80_2 = r13;
                                        var_88_2 = arg7;
                                    label_405d50:
                                        r14_2 = sub_405380(rbp_1, arg2, r15_1, arg4, arg5, arg6, var_88_2, var_80_2, var_78_1);
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
                                    goto label_405e0d;
                                }
                                int64_t rbp_2 = *arg2;
                                __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: invalid option -- '%c'\n", 5), rbp_2, r14_2);
                            label_405e0d:
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
                        goto label_405bdc;
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
            goto label_405a68;
        }
        goto label_405b21;
    }
}

uint64_t sub_405fd0(int32_t arg1, int64_t* arg2, char* arg3)
{
    return _getopt_internal(arg1, arg2, arg3, nullptr, nullptr, 0, 1);
}

uint64_t sub_406070(uint32_t* arg1, char* arg2, uint64_t arg3, mbstate_t* arg4)
{
    uint64_t rbx_1;
    char* rbp_1;
    uint32_t* r12_1;
    if (arg2 == 0)
    {
        arg3 = 1;
        rbp_1 = &data_408844[0x1b];
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
                goto label_40609a;
            }
        }
    }
    if ((arg2 == 0 || (arg2 != 0 && arg3 != 0)))
    {
        void var_1c;
        r12_1 = &var_1c;
    label_40609a:
        uint64_t rax_1 = mbrtowc(r12_1, rbp_1, arg3, arg4);
        rbx_1 = rax_1;
        if ((rax_1 > -3 && sub_406150() == 0))
        {
            rbx_1 = 1;
            *r12_1 = *rbp_1;
        }
    }
    return rbx_1;
}

uint64_t sub_4060f0(FILE* arg1)
{
    int32_t* rbp = arg1;
    uint64_t rax = __fpending(arg1);
    int32_t rbx_1 = (*rbp & 0x20);
    uint64_t rax_1 = sub_406720(rbp);
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

int64_t sub_406150()
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
        void* const rdi_1 = &data_408864;
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

char* sub_4061b0()
{
    char* rax = nl_langinfo(0xe);
    char* r15 = data_60a438;
    char* rbx = rax;
    if (rax == 0)
    {
        rbx = &data_408844[0x1b];
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
                    goto label_4062ac;
                }
                memcpy(rbp_3, r13_1, r14_1);
                goto label_4062f6;
            }
        }
        char* rax_9 = malloc(rdi_7);
        rbp_3 = rax_9;
        if (rax_9 == 0)
        {
        label_4062ac:
            r15 = &data_408844[0x1b];
        }
        else
        {
            memcpy(rbp_3, r13_1, r14_1);
            rbp_3[r14_1] = 0x2f;
        label_4062f6:
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
                            label_4063ac:
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
                                    goto label_40653b;
                                }
                                int64_t* rcx_2 = &var_b8;
                            label_4063e8:
                                int32_t rdx_5 = *rcx_2;
                                rcx_2 = (rcx_2 + 4);
                                uint32_t rax_20 = (((rdx_5 - 0x1010101) & (!rdx_5)) & 0x80808080);
                                if (rax_20 == 0)
                                {
                                    goto label_4063e8;
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
                            label_406422:
                                int32_t rsi_5 = *rdx_11;
                                rdx_11 = (rdx_11 + 4);
                                uint32_t rax_23 = (((rsi_5 - 0x1010101) & (!rsi_5)) & 0x80808080);
                                if (rax_23 == 0)
                                {
                                    goto label_406422;
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
                                    r15 = &data_408844[0x1b];
                                    free(rdi_26);
                                    sub_406720(rax_12);
                                    goto label_406337;
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
                                    label_4065fb:
                                        uint64_t r8_1 = rsi_17;
                                        rsi_17 = (rsi_17 + 8);
                                        *(r9_5 + r8_1) = *(r10_2 + r8_1);
                                        if (rsi_17 < rcx_12)
                                        {
                                            goto label_4065fb;
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
                                    label_406649:
                                        uint64_t rsi_20 = rcx_14;
                                        rcx_14 = (rcx_14 + 8);
                                        *(rdi_24 + rsi_20) = *(r9_6 + rsi_20);
                                        if (rcx_14 < rdx_20)
                                        {
                                            goto label_406649;
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
                            goto label_4063ac;
                        }
                        break;
                    }
                label_40653b:
                    sub_406720(rax_12);
                    if (var_d0_1 != 0)
                    {
                        *(r15 + var_d0_1) = 0;
                    }
                }
            }
            if ((((rax_11 >= 0 && rax_12 == 0) || rax_11 < 0) || ((rax_11 >= 0 && rax_12 != 0) && var_d0_1 == 0)))
            {
                r15 = &data_408844[0x1b];
            }
        label_406337:
            free(rbp_3);
        }
        data_60a438 = r15;
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

int64_t sub_406720(FILE* arg1)
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
        if (((rax_1 == 0 || (rax_1 != 0 && rax_6 != -1)) && sub_4067a0(arg1) != 0))
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

int64_t sub_4067a0(FILE* arg1)
{
    int32_t* rbx = arg1;
    if ((arg1 != 0 && (__freading(arg1) != 0 && (*rbx & 0x100) != 0)))
    {
        sub_4067e0(rbx, 0, 1);
        /* tailcall */
        return fflush(rbx);
    }
    /* tailcall */
    return fflush(rbx);
}

off64_t sub_4067e0(FILE* arg1, off_t arg2, int32_t arg3)
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

void init()
{
    _init();
}

void fini()
{
    return;
}

int64_t sub_4068b0(void (* arg1)(void*))
{
    int64_t rdx = data_60a1e8;
    /* tailcall */
    return __cxa_atexit(arg1, nullptr, rdx);
}

int64_t sub_4068c8(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rbx = &data_609e30;
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

