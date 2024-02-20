int64_t sub_401410()
{
    int64_t var_8 = data_60a008;
    /* jump -> data_60a010 */
}

int64_t sub_401436()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401446()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401456()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401466()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4014b6()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4014c6()
{
    int64_t var_8 = 0xa;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4014d6()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4014e6()
{
    int64_t var_8 = 0xc;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401536()
{
    int64_t var_8 = 0x11;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401546()
{
    int64_t var_8 = 0x12;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401556()
{
    int64_t var_8 = 0x13;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401566()
{
    int64_t var_8 = 0x14;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4015b6()
{
    int64_t var_8 = 0x19;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4015c6()
{
    int64_t var_8 = 0x1a;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4015d6()
{
    int64_t var_8 = 0x1b;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4015e6()
{
    int64_t var_8 = 0x1c;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401636()
{
    int64_t var_8 = 0x21;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401646()
{
    int64_t var_8 = 0x22;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401656()
{
    int64_t var_8 = 0x23;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401666()
{
    int64_t var_8 = 0x24;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4016b6()
{
    int64_t var_8 = 0x29;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4016c6()
{
    int64_t var_8 = 0x2a;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4016d6()
{
    int64_t var_8 = 0x2b;
    /* tailcall */
    return sub_401410();
}

int64_t sub_4016e6()
{
    int64_t var_8 = 0x2c;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401736()
{
    int64_t var_8 = 0x31;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401746()
{
    int64_t var_8 = 0x32;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401756()
{
    int64_t var_8 = 0x33;
    /* tailcall */
    return sub_401410();
}

int64_t sub_401766()
{
    int64_t var_8 = 0x34;
    /* tailcall */
    return sub_401410();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    uint64_t rbp;
    uint64_t var_28 = rbp;
    int64_t rcx;
    int64_t rdx;
    uint64_t r8;
    ssize_t r9;
    rcx = sub_402a30(*argv);
    void var_168;
    char var_160;
    setlocale(6, &data_407fec[0x1b], rdx, rcx, r8, r9, var_168, var_160);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_…");
    textdomain("coreutils");
    sub_406570(sub_4028d0);
    char var_15f = 0;
    char var_160_1 = 0;
    char var_15d = 0;
    char var_11b = 0;
    char var_ec = 0;
    char var_15e = 0;
    while (true)
    {
        int32_t rax_1 = getopt_long(argc, argv, "benstuvAET", &data_406c60, nullptr);
        if (rax_1 == 0xffffffff)
        {
            uint64_t rbx = rax_1;
            int64_t var_c8;
            if (__fxstat(1, 1, &var_c8) >= 0)
            {
                uint64_t var_90;
                uint64_t r15_1 = var_90;
                if ((r15_1 - 0x20000) > 0x1ffffffffffe0000)
                {
                    r15_1 = 0x20000;
                }
                int64_t rdx_3 = data_60a29c;
                char var_e9_1 = 0;
                int64_t rax_5 = getpagesize();
                char var_eb_1 = 1;
                int64_t rax_6 = var_c8;
                data_60a2e0 = &data_407fea;
                int64_t var_118_1 = rdx_3;
                int32_t var_b0;
                int32_t rax_9 = (var_b0 & 0xf000);
                char rax_10 = (var_15e | var_15d);
                bool c_1 = argc < rdx_3;
                bool z_1 = argc == rdx_3;
                void* const rax_11;
                if ((!((!z_1) && (argc - rdx_3) < 0 == (argc + (-rdx_3)))))
                {
                    rax_11 = &data_407fea;
                    goto label_401b0d;
                }
                while (true)
                {
                    rdx_3 = var_118_1;
                    rax_11 = argv[rdx_3];
                    data_60a2e0 = rax_11;
                label_401b0d:
                    void* const rdi_6 = &data_407fea;
                    int64_t rcx_4 = 2;
                    void* const rsi_3 = rax_11;
                label_401b1a:
                    if (rcx_4 != 0)
                    {
                        char temp4_1 = *rsi_3;
                        char temp5_1 = *rdi_6;
                        c_1 = temp4_1 < temp5_1;
                        z_1 = temp4_1 == temp5_1;
                        rsi_3 = (rsi_3 + 1);
                        rdi_6 = (rdi_6 + 1);
                        rcx_4 = (rcx_4 - 1);
                        if (z_1)
                        {
                            goto label_401b1a;
                        }
                    }
                    rbp = ((!z_1) && (!c_1));
                    rbp = (rbp - 0);
                    int32_t rbp_1 = rbp;
                    int32_t* rax_42;
                    uint64_t rbx_1;
                    int32_t r9_3;
                    if (rbp_1 == 0)
                    {
                        data_60a2dc = 0;
                        var_e9_1 = 1;
                    }
                    else
                    {
                        int32_t rax_45 = open(rax_11, 0, rdx_3, rcx_4);
                        rbp_1 = rax_45;
                        data_60a2dc = rax_45;
                        if (rax_45 < 0)
                        {
                        label_402011:
                            error(0, *__errno_location(), "%s", sub_4044d0(0, 3, data_60a2e0));
                            var_eb_1 = 0;
                        label_401ae3:
                            var_118_1 = (var_118_1 + 1);
                            int32_t rax_16 = var_118_1;
                            c_1 = argc < rax_16;
                            z_1 = argc == rax_16;
                            if ((!(z_1 || (argc - rax_16) < 0 != (argc + (-rax_16)))))
                            {
                                continue;
                            }
                            else
                            {
                                int32_t rax_76;
                                if (var_e9_1 != 0)
                                {
                                    rax_76 = close(0);
                                    if (rax_76 < 0)
                                    {
                                        rbx_1 = dcgettext(nullptr, "closing standard input", 5);
                                        rax_42 = error(1, *__errno_location(), rbx_1);
                                    }
                                }
                                if ((var_e9_1 == 0 || (var_e9_1 != 0 && rax_76 >= 0)))
                                {
                                    return (var_eb_1 ^ 1);
                                }
                            }
                            goto label_4022bb;
                        }
                    }
                    bool c_2;
                    bool z_2;
                    if (__fxstat(1, rbp_1, &var_c8) < 0)
                    {
                        uint64_t rax_56 = sub_4044d0(0, 3, data_60a2e0);
                        int32_t* rax_57 = __errno_location();
                        c_2 = false;
                        z_2 = (rax_57 ^ rax_57) == 0;
                        error(0, *rax_57, "%s", rax_56);
                        var_eb_1 = 0;
                    }
                    else
                    {
                        uint64_t rax_19 = 0x20000;
                        if ((var_90 - 0x20000) <= 0x1ffffffffffe0000)
                        {
                            rax_19 = var_90;
                        }
                        sub_402970(rbp_1, 0, 0, 2);
                        if (rax_9 != 0x8000)
                        {
                        label_401bad:
                            int64_t r14_2 = (rax_5 - 1);
                            int64_t var_100;
                            char r13_1;
                            if (rax_10 == 0)
                            {
                                r13_1 = ((var_160_1 | var_15f) | var_11b);
                                if (r13_1 != 0)
                                {
                                    goto label_401bd9;
                                }
                                uint64_t r12_9 = rax_19;
                                if (r15_1 >= rax_19)
                                {
                                    r12_9 = r15_1;
                                }
                                int64_t rax_65 = sub_404cd0((r12_9 + r14_2));
                                int64_t rbp_8 = (rax_65 + r14_2);
                                var_100 = rax_65;
                                rbp = (rbp_8 - (COMBINE(0, rbp_8) % rax_5));
                            label_4021fe:
                                uint64_t rax_69 = sub_404670(data_60a2dc, rbp, r12_9);
                                if (rax_69 == -1)
                                {
                                    error(0, *__errno_location(), "%s", sub_4044d0(0, 3, data_60a2e0));
                                label_40223a:
                                    char temp15_1 = var_eb_1;
                                    var_eb_1 = (var_eb_1 & r13_1);
                                    c_2 = false;
                                    z_2 = (temp15_1 & r13_1) == 0;
                                    goto label_401abe;
                                }
                                if (rax_69 == 0)
                                {
                                    goto label_40226e;
                                }
                                if (rax_69 == sub_4029b0(1, rbp, rax_69))
                                {
                                    goto label_4021fe;
                                }
                                goto label_40234c;
                            }
                        label_401bd9:
                            int64_t rax_21 = sub_404cd0((rax_5 + rax_19));
                            var_100 = rax_21;
                            int64_t rax_23 = sub_404cd0((((rax_5 + r15_1) + 0x12) + (rax_19 << 2)));
                            char var_11c_1 = 1;
                            int64_t r13_3 = (rax_23 + r14_2);
                            int64_t var_f8 = rax_23;
                            int64_t r14_3 = (r14_2 + rax_21);
                            int32_t var_15c = rbx;
                            char* r13_4 = (r13_3 - (COMBINE(0, r13_3) % rax_5));
                            rbx_1 = data_60a2d8;
                            uint64_t r14_4 = (r14_3 - (COMBINE(0, r14_3) % rax_5));
                            void* rdx_11 = &r13_4[r15_1];
                            uint64_t r12_3 = (r14_4 + 1);
                            int64_t var_150_1 = r14_4;
                            rbp = r12_3;
                            char rax_28 = (var_ec ^ 1);
                            char* r14_5 = r13_4;
                            char rax_30 = (var_15f ^ 1);
                        label_401c68:
                            if (rdx_11 <= r14_5)
                            {
                            label_401de7:
                                char* r12_6 = r13_4;
                            label_401dfb:
                                if (r15_1 != sub_4029b0(1, r12_6, r15_1))
                                {
                                    rbx = dcgettext(nullptr, "write error", 5);
                                    error(1, *__errno_location(), rbx);
                                label_40226e:
                                    r13_1 = 1;
                                    goto label_40223a;
                                }
                                r12_6 = &r12_6[r15_1];
                                void* rcx_6 = (r14_5 - r12_6);
                                if (r15_1 <= rcx_6)
                                {
                                    goto label_401dfb;
                                }
                                memmove(r13_4, r12_6, rcx_6);
                                r14_5 = (r13_4 + rcx_6);
                                if (rbp > var_150_1)
                                {
                                    goto label_401c7e;
                                }
                                goto label_401e3f;
                            }
                        label_401c73:
                            uint64_t rax_33;
                            char r12_4;
                            if (rbp <= var_150_1)
                            {
                            label_401e3f:
                                rbx_1 = (rbx_1 + 1);
                                uint64_t rdx_15 = (rbp + 1);
                                if (rbx_1 > 0)
                                {
                                    if (rbx_1 != 1)
                                    {
                                        rbx_1 = 2;
                                        if (var_11b != 0)
                                        {
                                            r12_4 = *rbp;
                                            rbp = rdx_15;
                                            goto label_401ce6;
                                        }
                                    }
                                    if ((rax_28 != 0 && var_15e != 0))
                                    {
                                        sub_402480();
                                        r14_5 = stpcpy(r14_5, data_60a1f8);
                                    }
                                }
                                void* rax_39 = &r14_5[1];
                                if (var_15d != 0)
                                {
                                    void* rcx_8 = &r14_5[2];
                                    *r14_5 = 0x24;
                                    r14_5 = rax_39;
                                    rax_39 = rcx_8;
                                }
                                *r14_5 = 0xa;
                                r14_5 = rax_39;
                                rax_33 = rbp;
                                rbp = rdx_15;
                                goto label_401ce2;
                            }
                        label_401c7e:
                            int32_t var_cc = 0;
                            int32_t rbp_6;
                            char r9_2;
                            if (var_11c_1 != 0)
                            {
                                rbp_6 = data_60a2dc;
                                if (ioctl(rbp_6, 0x541b, &var_cc) < 0)
                                {
                                    rax_42 = __errno_location();
                                    int32_t rcx_9 = *rax_42;
                                    r9_3 = rcx_9 == 0x5f;
                                    if (rcx_9 <= 0x26)
                                    {
                                        r9_3 = (r9_3 | ((0x4002480000 >> rcx_9) & 1));
                                    }
                                    if (r9_3 == 0)
                                    {
                                    label_4022bb:
                                        uint64_t var_158;
                                        var_158 = r9_3;
                                        rbx = var_15c;
                                        error(0, *rax_42, dcgettext(nullptr, "cannot do ioctl on %s", 5), sub_404400(4, data_60a2e0));
                                        data_60a2d8 = rbx_1;
                                        r9_2 = var_158;
                                    label_401aaf:
                                        char temp13_1 = var_eb_1;
                                        var_eb_1 = (var_eb_1 & r9_2);
                                        c_2 = false;
                                        z_2 = (temp13_1 & r9_2) == 0;
                                        free(var_f8);
                                    label_401abe:
                                        free(var_100);
                                        goto label_401ac3;
                                    }
                                    var_11c_1 = 0;
                                }
                                if (var_cc == 0)
                                {
                                    goto label_401c97;
                                }
                                goto label_401cb2;
                            }
                        label_401c97:
                            uint64_t rbp_5 = (r14_5 - r13_4);
                            if (r14_5 != r13_4)
                            {
                                if (rbp_5 != sub_4029b0(1, r13_4, rbp_5))
                                {
                                    error(1, *__errno_location(), dcgettext(nullptr, "write error", 5));
                                label_40234c:
                                    error(1, *__errno_location(), dcgettext(nullptr, "write error", 5));
                                    break;
                                }
                                rbp_6 = data_60a2dc;
                                r14_5 = r13_4;
                                goto label_401cb2;
                            }
                            rbp_6 = data_60a2dc;
                        label_401cb2:
                            ssize_t rax_31 = sub_404670(rbp_6, r14_4, rax_19);
                            if (rax_31 == -1)
                            {
                                rbp = rbx_1;
                                rbx = var_15c;
                                error(0, *__errno_location(), "%s", sub_4044d0(0, 3, data_60a2e0));
                                void* r14_1 = (r14_5 - r13_4);
                                if (r14_5 != r13_4)
                                {
                                    if (r14_1 != sub_4029b0(1, r13_4, r14_1))
                                    {
                                    label_402177:
                                        sub_4024f0();
                                        /* no return */
                                    }
                                    goto label_401aa1;
                                }
                            label_401aa1:
                                data_60a2d8 = rbp;
                                r9_2 = 0;
                                goto label_401aaf;
                            }
                            if (rax_31 == 0)
                            {
                                rbp = rbx_1;
                                rbx = var_15c;
                                void* r14_6 = (r14_5 - r13_4);
                                if (r14_5 != r13_4)
                                {
                                    if (r14_6 != sub_4029b0(1, r13_4, r14_6))
                                    {
                                        goto label_402177;
                                    }
                                    goto label_40204a;
                                }
                            label_40204a:
                                data_60a2d8 = rbp;
                                r9_2 = 1;
                                goto label_401aaf;
                            }
                            rbp = r12_3;
                            int64_t rax_32 = (rax_31 + r14_4);
                            var_150_1 = rax_32;
                            *rax_32 = 0xa;
                            rax_33 = r14_4;
                        label_401ce2:
                            r12_4 = *rax_33;
                        label_401ce6:
                            if (r12_4 == 0xa)
                            {
                                goto label_401c68;
                            }
                            if ((rbx_1 >= 0 && var_15e != 0))
                            {
                                sub_402480();
                                r14_5 = stpcpy(r14_5, data_60a1f8);
                            }
                            if (var_160_1 != 0)
                            {
                            label_401d79:
                                void* rax_36;
                                if (r12_4 > 0x1f)
                                {
                                    if (r12_4 <= 0x7e)
                                    {
                                        *r14_5 = r12_4;
                                        rax_36 = &r14_5[1];
                                    }
                                    else if (r12_4 == 0x7f)
                                    {
                                        rax_36 = &r14_5[2];
                                        *r14_5 = 0x3f5e;
                                    }
                                    else
                                    {
                                        *r14_5 = 0x2d4d;
                                        if (r12_4 <= 0x9f)
                                        {
                                            r14_5[2] = 0x5e;
                                            rax_36 = &r14_5[4];
                                            r14_5[3] = (r12_4 - 0x40);
                                        }
                                        else if (r12_4 == 0xff)
                                        {
                                            rax_36 = &r14_5[4];
                                            *(r14_5 + 2) = 0x3f5e;
                                        }
                                        else
                                        {
                                            rax_36 = &r14_5[3];
                                            r14_5[2] = (r12_4 - 0x80);
                                        }
                                    }
                                    goto label_401d6d;
                                }
                                if ((r12_4 == 9 && rax_30 != 0))
                                {
                                    rax_36 = &r14_5[1];
                                    *r14_5 = 9;
                                label_401d6d:
                                    rbp = (rbp + 1);
                                    r12_4 = *(rbp - 1);
                                    r14_5 = rax_36;
                                    goto label_401d79;
                                }
                                if (r12_4 != 0xa)
                                {
                                    *r14_5 = 0x5e;
                                    rax_36 = &r14_5[2];
                                    r14_5[1] = (r12_4 + 0x40);
                                    goto label_401d6d;
                                }
                            }
                            else
                            {
                            label_401d39:
                                void* rax_35;
                                if ((r12_4 == 9 && var_15f != 0))
                                {
                                    rax_35 = &r14_5[2];
                                    *r14_5 = 0x495e;
                                }
                                if (((r12_4 != 9 || (r12_4 == 9 && var_15f == 0)) && r12_4 != 0xa))
                                {
                                    rax_35 = &r14_5[1];
                                    *r14_5 = r12_4;
                                }
                                if (((r12_4 == 9 && var_15f != 0) || ((r12_4 != 9 || (r12_4 == 9 && var_15f == 0)) && r12_4 != 0xa)))
                                {
                                    rbp = (rbp + 1);
                                    r12_4 = *(rbp - 1);
                                    r14_5 = rax_35;
                                    goto label_401d39;
                                }
                            }
                            rbx_1 = var_15c;
                            if (rdx_11 > r14_5)
                            {
                                goto label_401c73;
                            }
                            goto label_401de7;
                        }
                        if (var_c8 != rax_6)
                        {
                            goto label_401bad;
                        }
                        int64_t var_c0;
                        if (var_c0 != var_c0)
                        {
                            goto label_401bad;
                        }
                        int64_t var_98;
                        if (lseek(data_60a2dc, 0, 1) >= var_98)
                        {
                            goto label_401bad;
                        }
                        uint64_t rax_53 = sub_4044d0(0, 3, data_60a2e0);
                        char* rax_54 = dcgettext(nullptr, "%s: input file is output file", 5);
                        c_2 = false;
                        z_2 = (rax_54 ^ rax_54) == 0;
                        error(0, 0, rax_54, rax_53);
                        var_eb_1 = 0;
                    }
                label_401ac3:
                    int64_t rsi_2 = data_60a2e0;
                    void* const rdi_5 = &data_407fea;
                    int64_t rcx_3 = 2;
                label_401ad4:
                    if (rcx_3 != 0)
                    {
                        char temp9_1 = *rsi_2;
                        char temp10_1 = *rdi_5;
                        c_2 = temp9_1 < temp10_1;
                        z_2 = temp9_1 == temp10_1;
                        rsi_2 = (rsi_2 + 1);
                        rdi_5 = (rdi_5 + 1);
                        rcx_3 = (rcx_3 - 1);
                        if (z_2)
                        {
                            goto label_401ad4;
                        }
                    }
                    if ((((!z_2) && (!c_2)) - 0) == 0)
                    {
                        goto label_401ae3;
                    }
                    if (close(data_60a2dc) < 0)
                    {
                        goto label_402011;
                    }
                    goto label_401ae3;
                }
            }
            void (* rdx_37)();
            int64_t rsi_25;
            int64_t rdi_23;
            rdx_37 = error(1, *__errno_location(), dcgettext(nullptr, "standard output", 5));
            /* tailcall */
            return _start(rdi_23, rsi_25, rdx_37);
        }
        bool cond:2_1 = rax_1 <= 0x62;
        if (rax_1 == 0x62)
        {
            var_ec = 1;
            var_15e = 1;
        }
        else
        {
            if (cond:2_1)
            {
                bool cond:5_1 = rax_1 <= 0x41;
                if (rax_1 == 0x41)
                {
                    var_15f = 1;
                    var_160_1 = 1;
                    var_15d = 1;
                    continue;
                }
                else
                {
                    if (cond:5_1)
                    {
                        if (rax_1 == 0xffffff7d)
                        {
                            int64_t var_178 = 0;
                            sub_404b90(stdout, &data_4065d0, "GNU coreutils", data_60a218);
                            exit(0);
                            /* no return */
                        }
                        if (rax_1 == 0xffffff7e)
                        {
                            sub_402520(0);
                            /* no return */
                        }
                        break;
                    }
                    if (rax_1 != 0x45)
                    {
                        if (rax_1 != 0x54)
                        {
                            break;
                        }
                        var_15f = 1;
                        continue;
                    }
                }
            }
            else
            {
                bool cond:6_1 = rax_1 <= 0x73;
                if (rax_1 == 0x73)
                {
                    var_11b = 1;
                    continue;
                }
                else if ((!cond:6_1))
                {
                    bool cond:11_1 = rax_1 >= 0x75;
                    if (rax_1 == 0x75)
                    {
                        continue;
                    }
                    else if ((!cond:11_1))
                    {
                        var_15f = 1;
                        var_160_1 = 1;
                        continue;
                    }
                    else
                    {
                        if (rax_1 != 0x76)
                        {
                            break;
                        }
                        var_160_1 = 1;
                        continue;
                    }
                }
                else if (rax_1 == 0x65)
                {
                    var_160_1 = 1;
                }
                else
                {
                    if (rax_1 != 0x6e)
                    {
                        break;
                    }
                    var_15e = 1;
                    continue;
                }
            }
            var_15d = 1;
        }
    }
    sub_402520(1);
    /* no return */
}

int64_t _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t rax;
    int64_t var_8 = rax;
    __libc_start_main(main, __return_addr, &arg_8, init, fini, arg3, &var_8);
    /* no return */
}

void sub_4023cb()
{
    return;
}

int64_t sub_4023ea()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    return (COMBINE(rdx, rax) / 2);
}

void sub_402421()
{
    if (data_60a2c8 != 0)
    {
        return;
    }
    while (true)
    {
        int64_t rax_1 = data_60a2d0;
        if (rax_1 >= 0)
        {
            break;
        }
        data_60a2d0 = (rax_1 + 1);
        *(0x609e40 + ((rax_1 + 1) << 3))();
    }
    sub_4023cb();
    data_60a2c8 = 1;
}

int64_t j_sub_4023ea()
{
    /* tailcall */
    return sub_4023ea();
}

void* sub_402480()
{
    void* rcx = data_60a1f0;
    void* rax = &data_60a211;
    do
    {
        char rdx_1 = *rax;
        if (rdx_1 <= 0x38)
        {
            *rax = (rdx_1 + 1);
            return rax;
        }
        rax = (rax - 1);
        *(rax + 1) = 0x30;
    } while (rcx <= rax);
    void* rdx_3;
    if (rcx <= &data_60a200)
    {
        data_60a200 = 0x3e;
        rdx_3 = rcx;
    }
    else
    {
        rdx_3 = (rcx - 1);
        *(rcx - 1) = 0x31;
        data_60a1f0 = rdx_3;
    }
    int64_t rax_1 = data_60a1f8;
    if (rax_1 > rdx_3)
    {
        rax_1 = (rax_1 - 1);
        data_60a1f8 = rax_1;
    }
    return rax_1;
}

int64_t sub_4024f0() __noreturn
{
    int32_t rdi = error(1, *__errno_location(), dcgettext(nullptr, "write error", 5));
    /* tailcall */
    return sub_402520(rdi);
}

int64_t sub_402520(int32_t arg1) __noreturn
{
    int64_t rbp = data_60a2f8;
    if (arg1 != 0)
    {
        __fprintf_chk(stderr, 1, dcgettext(nullptr, "Try '%s --help' for more informa…", 5), rbp);
    }
    else
    {
        __printf_chk(1, dcgettext(nullptr, "Usage: %s [OPTION]... [FILE]...\n", 5), rbp);
        fputs_unlocked(dcgettext(nullptr, "Concatenate FILE(s) to standard …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\nWith no FILE, or when FILE is …", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "\n  -A, --show-all           equ…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -t                       equiv…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --help     display this he…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --version  output version …", 5), stdout);
        int64_t rbp_1 = data_60a2f8;
        __printf_chk(1, dcgettext(nullptr, "\nExamples:\n  %s f - g  Output …", 5), rbp_1, rbp_1);
        void* const var_88 = &data_4065d4;
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
            void* const rdi_8 = *rax_12;
            c_1 = false;
            z_1 = (rdi_8 & rdi_8) == 0;
            if (z_1)
            {
                break;
            }
            void* const rsi_9 = &data_4065d0;
            int64_t rcx_2 = 4;
            while (rcx_2 != 0)
            {
                char temp0_1 = *rsi_9;
                char temp1_1 = *rdi_8;
                c_1 = temp0_1 < temp1_1;
                z_1 = temp0_1 == temp1_1;
                rsi_9 = (rsi_9 + 1);
                rdi_8 = (rdi_8 + 1);
                rcx_2 = (rcx_2 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
        } while ((((!z_1) && (!c_1)) - 0) != 0);
        void* const rbp_2 = rax_12[1];
        char* rax_23;
        int32_t rax_24;
        void* const r12_1;
        if (rbp_2 == 0)
        {
            int64_t rcx_5;
            int64_t rdx_6;
            uint64_t r8_2;
            ssize_t r9_2;
            rcx_5 = __printf_chk(1, dcgettext(nullptr, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            rax_23 = setlocale(5, nullptr, rdx_6, rcx_5, r8_2, r9_2, var_88, "test invocation");
            if (rax_23 != 0)
            {
                rax_24 = strncmp(rax_23, &data_406658, 3);
                if (rax_24 != 0)
                {
                    rbp_2 = &data_4065d0;
                }
            }
            if ((rax_23 == 0 || (rax_23 != 0 && rax_24 == 0)))
            {
                rbp_2 = &data_4065d0;
                r12_1 = " invocation";
                __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/cor…", &data_4065d0);
            }
        }
        else
        {
            int64_t rcx_3;
            int64_t rdx_4;
            uint64_t r8_1;
            ssize_t r9_1;
            rcx_3 = __printf_chk(1, dcgettext(nullptr, "\n%s online help: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            char* rax_15 = setlocale(5, nullptr, rdx_4, rcx_3, r8_1, r9_1, var_88, "test invocation");
            if (rax_15 == 0)
            {
                goto label_402798;
            }
            if (strncmp(rax_15, &data_406658, 3) == 0)
            {
                goto label_402798;
            }
        }
        if ((((rbp_2 == 0 && rax_23 != 0) && rax_24 != 0) || rbp_2 != 0))
        {
            __printf_chk(1, dcgettext(nullptr, "Report %s translation bugs to <h…", 5), &data_4065d0);
        label_402798:
            r12_1 = " invocation";
            __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>\n", 5), "https://www.gnu.org/software/cor…", &data_4065d0);
            if (rbp_2 != &data_4065d0)
            {
                r12_1 = &data_407fec[0x1b];
            }
        }
        __printf_chk(1, dcgettext(nullptr, "or available locally via: info '…", 5), rbp_2, r12_1);
    }
    exit(arg1);
    /* no return */
}

int64_t sub_4028b0(int64_t arg1)
{
    data_60a2f0 = arg1;
}

int64_t sub_4028c0(char arg1)
{
    data_60a2e8 = arg1;
}

void sub_4028d0(void* arg1)
{
    int32_t rax = sub_405db0(stdout);
    int32_t* rax_1;
    if (rax != 0)
    {
        rax_1 = __errno_location();
        if ((data_60a2e8 == 0 || (data_60a2e8 != 0 && *rax_1 != 0x20)))
        {
            char* rax_3 = dcgettext(nullptr, "write error", 5);
            int64_t rdi_2 = data_60a2f0;
            if (rdi_2 == 0)
            {
                error(0, *rax_1, "%s", rax_3);
            }
            else
            {
                error(0, *rax_1, "%s: %s", sub_4044a0(rdi_2), rax_3);
            }
        }
    }
    if (((rax == 0 || ((rax != 0 && data_60a2e8 != 0) && *rax_1 == 0x20)) && sub_405db0(stderr) == 0))
    {
        return;
    }
    _exit(data_60a220);
    /* no return */
}

int64_t sub_402970(int32_t arg1, int64_t arg2, off64_t arg3, int32_t arg4)
{
    /* tailcall */
    return posix_fadvise(arg1, arg2, arg3, arg4);
}

void sub_402980(FILE* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        return;
    }
    /* tailcall */
    return posix_fadvise(fileno(arg1), 0, 0, arg2);
}

int64_t sub_4029b0(int32_t arg1, int64_t arg2, uint64_t arg3)
{
    int64_t r12;
    if (arg3 == 0)
    {
        r12 = 0;
    }
    else
    {
        int64_t rbp_1 = arg2;
        uint64_t rbx_1 = arg3;
        r12 = 0;
        ssize_t rax_1;
        uint64_t temp0_1;
        do
        {
            rax_1 = sub_4046d0(arg1, rbp_1, rbx_1);
            if (rax_1 == -1)
            {
                break;
            }
            if (rax_1 == 0)
            {
                *__errno_location() = 0x1c;
                return r12;
            }
            r12 = (r12 + rax_1);
            rbp_1 = (rbp_1 + rax_1);
            temp0_1 = rbx_1;
            rbx_1 = (rbx_1 - rax_1);
        } while (temp0_1 != rax_1);
    }
    return r12;
}

char* sub_402a30(char* arg1)
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
                void* const rdi_1 = &data_406df0;
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
    data_60a2f8 = rbx;
    __progname_full = rbx;
    return rax;
}

char* sub_402ad0(char* arg1, int32_t arg2)
{
    char* rax = dcgettext(nullptr, arg1, 5);
    char* rbx = rax;
    if (arg1 == rax)
    {
        char* rax_2 = sub_405e70();
        char rdx_2 = (*rax_2 & 0xdf);
        if (rdx_2 != 0x55)
        {
            if (rdx_2 != 0x47)
            {
            label_402bb1:
                void* const rbx_1 = &data_406df4;
                if (arg2 != 9)
                {
                    rbx_1 = "'";
                }
                return rbx_1;
            }
            if ((rax_2[1] & 0xdf) != 0x42)
            {
                goto label_402bb1;
            }
            if (rax_2[2] != 0x31)
            {
                goto label_402bb1;
            }
            if (rax_2[3] != 0x38)
            {
                goto label_402bb1;
            }
            if (rax_2[4] != 0x30)
            {
                goto label_402bb1;
            }
            if (rax_2[5] != 0x33)
            {
                goto label_402bb1;
            }
            if (rax_2[6] != 0x30)
            {
                goto label_402bb1;
            }
            if (rax_2[7] != 0)
            {
                goto label_402bb1;
            }
            bool cond:2_1 = *rbx != 0x60;
            rbx = &data_406dfd;
            if (cond:2_1)
            {
                rbx = &data_406dfa;
            }
        }
        else
        {
            if ((rax_2[1] & 0xdf) != 0x54)
            {
                goto label_402bb1;
            }
            if ((rax_2[2] & 0xdf) != 0x46)
            {
                goto label_402bb1;
            }
            if (rax_2[3] != 0x2d)
            {
                goto label_402bb1;
            }
            if (rax_2[4] != 0x38)
            {
                goto label_402bb1;
            }
            if (rax_2[5] != 0)
            {
                goto label_402bb1;
            }
            bool cond:1_1 = *rbx != 0x60;
            rbx = &data_406e01;
            if (cond:1_1)
            {
                rbx = &data_406df6;
            }
        }
    }
    return rbx;
}

int64_t sub_402bd0(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
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
    label_402c68:
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
                    label_402fdc:
                        if (var_c0 != 0)
                        {
                            r13_1 = 4;
                        }
                        goto label_403024;
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
                            rbx_1 = sub_402bd0(r15, var_70, arg3, r11, 5, arg6, arg7, arg8, arg9);
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
                    goto label_40303b;
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
                        goto label_403175;
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
                                goto label_402dc5;
                            }
                            goto label_4030b0;
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
                            goto label_403175;
                        }
                        case 7:
                        {
                            rbp_3 = 7;
                            rcx_2 = 0x61;
                            rdx = r11_1 == 2;
                            goto label_402fa0;
                        }
                        case 8:
                        {
                            rbp_3 = 8;
                            rcx_2 = 0x62;
                            rdx = r11_1 == 2;
                        label_402fa0:
                            if (var_c0 == 0)
                            {
                                goto label_402fab;
                            }
                            rbp_3 = rcx_2;
                            r13 = 0;
                        label_402e07:
                            if (var_5c == 0)
                            {
                                goto label_402e18;
                            }
                        label_402fd0:
                            r13_1 = r11_1;
                            rax_14 = rdx;
                            r11 = r9;
                            goto label_402fd8;
                        }
                        case 9:
                        {
                            rbp_3 = 9;
                            rcx_2 = 0x74;
                            goto label_40320b;
                        }
                        case 0xa:
                        {
                            rbp_3 = 0xa;
                            rcx_2 = 0x6e;
                        label_40320b:
                            rdx = r11_1 == 2;
                            bool rax_26 = (var_5c & rdx);
                            var_b8 = rax_26;
                            if (rax_26 != 0)
                            {
                            label_40321a:
                                r11 = r9;
                                r13_1 = 2;
                                goto label_402fdc;
                            }
                            goto label_402fa0;
                        }
                        case 0xb:
                        {
                            rbp_3 = 0xb;
                            rcx_2 = 0x76;
                            rdx = r11_1 == 2;
                            goto label_402fa0;
                        }
                        case 0xc:
                        {
                            rbp_3 = 0xc;
                            rcx_2 = 0x66;
                            rdx = r11_1 == 2;
                            goto label_402fa0;
                        }
                        case 0xd:
                        {
                            rbp_3 = 0xd;
                            rcx_2 = 0x72;
                            goto label_40320b;
                        }
                        case 0x20:
                        {
                            rbp_3 = 0x20;
                            rdx = r11_1 == 2;
                            goto label_402da6;
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
                        label_402da6:
                            if (var_5c == 0)
                            {
                                goto label_402dc5;
                            }
                            if (rdx == 0)
                            {
                                goto label_402dc5;
                            }
                            goto label_40321a;
                        }
                        case 0x23:
                        case 0x7e:
                        {
                            rdx = r11_1 == 2;
                        label_402d9d:
                            if (r12_1 != 0)
                            {
                                goto label_402fab;
                            }
                            goto label_402da6;
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
                        label_4031d0:
                            rdx = r11_1 == 2;
                        label_402dc5:
                            rax_8 = ((((var_c0 ^ 1) | rdx) ^ 1) | var_5c);
                            if (rax_8 == 0)
                            {
                                goto label_402ecc;
                            }
                            goto label_402dcf;
                        }
                        case 0x27:
                        {
                            goto label_402f4d;
                        }
                        case 0x3f:
                        {
                            goto label_402f1d;
                        }
                        case 0x5c:
                        {
                            if (r11_1 != 2)
                            {
                                goto label_402f7a;
                            }
                            if (var_5c != 0)
                            {
                                goto label_403d0d;
                            }
                            r12_1 = (r12_1 + 1);
                            rax_12 = r10;
                            r13 = 0;
                            rbp_3 = 0x5c;
                            goto label_402ee4;
                        }
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_402d79;
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
                            goto label_403370;
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
                            goto label_403370;
                        }
                        if (var_5c != 0)
                        {
                        label_403cc0:
                            r13_1 = r11_1;
                            r11 = r9;
                        label_403024:
                            rbx_1 = sub_402bd0(r15, r14, arg3, r11, r13_1, (arg6 & 0xfffffffd), 0, arg8, arg9);
                        label_40303b:
                            return rbx_1;
                        }
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                            goto label_403175;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                                goto label_4030c7;
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
                                goto label_403175;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                            label_403090:
                                r13 = 0;
                                goto label_402e4b;
                            }
                            case 8:
                            {
                                rdx = 0;
                                r13 = 0;
                                rbp_3 = 0x62;
                            label_402e18:
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
                            label_402e4b:
                                if (r14 <= rbx_1)
                                {
                                    goto label_402e55;
                                }
                                r15[rbx_1] = 0x5c;
                            label_402e55:
                                rbx_1 = (rbx_1 + 1);
                                r12_1 = (r12_1 + 1);
                                goto label_402e5d;
                            }
                            case 9:
                            {
                                goto label_403040;
                            }
                            case 0xa:
                            {
                                goto label_402fb8;
                            }
                            case 0xb:
                            {
                                goto label_4030a0;
                            }
                            case 0xc:
                            {
                                goto label_403080;
                            }
                            case 0xd:
                            {
                                goto label_403069;
                            }
                            case 0x20:
                            {
                                rax_27 = var_b8;
                                goto label_4033ca;
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
                                goto label_403055;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = var_b8;
                                goto label_4033aa;
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
                                goto label_403392;
                            }
                            case 0x27:
                            {
                                goto label_402f4d;
                            }
                            case 0x3f:
                            {
                                goto label_402f1d;
                            }
                            case 0x5c:
                            {
                                goto label_402f7a;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                goto label_402d79;
                            }
                        }
                    }
                    else
                    {
                    label_403370:
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                        label_403170:
                            var_b8 = 0;
                        label_403175:
                            uint64_t rdi_4;
                            if (rax == 1)
                            {
                                r10 = r10;
                                rdi_4 = 1;
                                rax_12 = (*__ctype_b_loc()[rbp_3] & 0x4000);
                                r13 = rax_12 != 0;
                                rdx = rax_12 == 0;
                                rdx = (rdx & var_c0);
                            label_4031c4:
                                if (rdx == 0)
                                {
                                    goto label_4031d0;
                                }
                                rdx = var_c0;
                                r13 = 0;
                            label_4036c1:
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
                                    goto label_402ee4;
                                }
                                if ((rdx != 0 && var_5c != 0))
                                {
                                    r13_1 = r11_1;
                                    var_c0 = rax_12;
                                    r11 = r9;
                                    goto label_402fdc;
                                }
                                r13 = var_98;
                                goto label_402e5d;
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
                                rax_12 = sub_405d30(&var_44, rbp_4, (var_98 - r15_1), &var_40);
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
                                            goto label_402fdc;
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
                                goto label_4036c1;
                            }
                            goto label_4031c4;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                            label_4030b0:
                                if (var_5c != 0)
                                {
                                    r13_1 = r11_1;
                                    r11 = r9;
                                    var_c0 = r13_1 == 2;
                                    goto label_402fdc;
                                }
                                var_b8 = 0;
                            label_4030c7:
                                rdx = r11_1 == 2;
                                rax_8 = ((r10 ^ 1) & rdx);
                                int64_t rcx_6;
                                if (rax_8 == 0)
                                {
                                    rcx_6 = rbx_1;
                                    if (r14 <= rbx_1)
                                    {
                                        goto label_403112;
                                    }
                                    rax_8 = r10;
                                label_40310a:
                                    r15[rcx_6] = 0x5c;
                                    r10 = rax_8;
                                label_403112:
                                    rbx_1 = (rcx_6 + 1);
                                    if (r11_1 == 2)
                                    {
                                        rax_8 = r13;
                                        rbp_3 = 0x30;
                                        r13 = 0;
                                        goto label_402ecc;
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
                                    goto label_403153;
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
                                    goto label_40310a;
                                }
                                rbx_1 = (rbx_1 + 4);
                                r10 = rax_8;
                                r13 = 0;
                                rbp_3 = 0x30;
                                goto label_402ecc;
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
                                goto label_403170;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                                goto label_403085;
                            }
                            case 8:
                            {
                                rbp_3 = 0x62;
                                goto label_402fbd;
                            }
                            case 9:
                            {
                            label_403040:
                                rbp_3 = 0x74;
                                goto label_402fbd;
                            }
                            case 0xa:
                            {
                            label_402fb8:
                                rbp_3 = 0x6e;
                            label_402fbd:
                                rdx = 0;
                                r13 = 0;
                                if (var_5c != 0)
                                {
                                    goto label_402fd0;
                                }
                                goto label_402e18;
                            }
                            case 0xb:
                            {
                            label_4030a0:
                                rbp_3 = 0x76;
                                goto label_403085;
                            }
                            case 0xc:
                            {
                            label_403080:
                                rbp_3 = 0x66;
                            label_403085:
                                if (var_5c == 0)
                                {
                                    goto label_403090;
                                }
                                r13_1 = r11_1;
                                rax_14 = 0;
                                r11 = r9;
                            label_402fd8:
                                var_c0 = (var_c0 & rax_14);
                                goto label_402fdc;
                            }
                            case 0xd:
                            {
                                var_b8 = 0;
                            label_403069:
                                rbp_3 = 0xd;
                                rcx_2 = 0x72;
                                rdx = r11_1 == 2;
                                goto label_402fa0;
                            }
                            case 0x20:
                            {
                                rax_27 = 0;
                            label_4033ca:
                                rbp_3 = 0x20;
                                goto label_403392;
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
                            label_403055:
                                rdx = 0;
                            label_402fab:
                                r13 = 0;
                                goto label_402dc5;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = 0;
                            label_4033aa:
                                if (r12_1 == 0)
                                {
                                    r13 = var_b8;
                                    rdx = 0;
                                    var_b8 = rax_28;
                                    goto label_402dc5;
                                }
                                var_b8 = rax_28;
                                r13 = 0;
                            label_402dcf:
                                rax_8 = 0;
                                goto label_402dd1;
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
                            label_403392:
                                r13 = var_b8;
                                var_b8 = rax_27;
                                rax_8 = 0;
                                goto label_402dd1;
                            }
                            case 0x27:
                            {
                                var_b8 = 0;
                            label_402f4d:
                                if (r11_1 != 2)
                                {
                                    var_5b_1 = r13;
                                    rdx = 0;
                                    rbp_3 = 0x27;
                                    goto label_402dc5;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_403d0d;
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
                                goto label_402ecc;
                            }
                            case 0x3f:
                            {
                                var_b8 = 0;
                            label_402f1d:
                                if (r11_1 == 2)
                                {
                                    if (var_5c != 0)
                                    {
                                    label_403d0d:
                                        r13_1 = r11_1;
                                        r11 = r9;
                                        goto label_402fdc;
                                    }
                                    r13 = 0;
                                    rax_8 = 0;
                                    rbp_3 = 0x3f;
                                label_402ecc:
                                    rdx = r11_1 == 2;
                                    if (var_b8 != 0)
                                    {
                                        goto label_402e07;
                                    }
                                    r12_1 = (r12_1 + 1);
                                    rax_12 = ((rax_8 ^ 1) & r10);
                                    goto label_402ee4;
                                }
                                if (r11_1 != 5)
                                {
                                    rbp_3 = 0x3f;
                                    rdx = r11_1 == 2;
                                    r13 = 0;
                                    goto label_402dc5;
                                }
                                if ((arg6 & 4) == 0)
                                {
                                label_4034b0:
                                    rdx = 0;
                                    r13 = 0;
                                    rbp_3 = 0x3f;
                                    goto label_402dc5;
                                }
                                int64_t rax_30 = (r12_1 + 2);
                                if (rax_30 >= r9)
                                {
                                    goto label_4034b0;
                                }
                                if (*((arg3 + r12_1) + 1) != 0x3f)
                                {
                                    goto label_4034b0;
                                }
                                rbp_3 = *(arg3 + rax_30);
                                if (rbp_3 > 0x3e)
                                {
                                    goto label_4034b0;
                                }
                                if ((!(TEST_BITQ(0x7000a38200000000, rbp_3))))
                                {
                                    goto label_4034b0;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_403cc0;
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
                            label_403153:
                                rax_8 = r13;
                                r13 = 0;
                                if (((var_c0 ^ 1) | rdx) != 0)
                                {
                                    goto label_402ecc;
                                }
                            label_402dd1:
                                if (arg7 == 0)
                                {
                                    goto label_402ecc;
                                }
                                if (((*(arg7 + ((rbp_3 >> 5) << 2)) >> rbp_3) & 1) == 0)
                                {
                                    goto label_402ecc;
                                }
                                rdx = r11_1 == 2;
                                goto label_402e07;
                            }
                            case 0x5c:
                            {
                                var_b8 = 0;
                            label_402f7a:
                                rdx = (var_c0 & var_5c);
                                rbp_3 = 0x5c;
                                rcx_2 = 0x5c;
                                rax_1 = var_a0_1 != 0;
                                rdx = (rdx & rax_1);
                                if (rdx == 0)
                                {
                                    goto label_402fa0;
                                }
                                r12_1 = (r12_1 + 1);
                                rax_12 = r10;
                                r13 = 0;
                            label_402ee4:
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
                                    goto label_402e5d;
                                }
                            label_402e5d:
                                if (rbx_1 >= r14)
                                {
                                    goto label_402e66;
                                }
                                r15[rbx_1] = rbp_3;
                            label_402e66:
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
                            label_402d79:
                                rax_1 = r9 != 1;
                                if (r9 == -1)
                                {
                                    rax_1 = *(arg3 + 1) != 0;
                                }
                                rdx = r11_1 == 2;
                                if (rax_1 != 0)
                                {
                                    goto label_402fab;
                                }
                                goto label_402d9d;
                            }
                        }
                    }
                }
            }
        label_403456:
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
            goto label_402c68;
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
                goto label_402c68;
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
            goto label_402c68;
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
                var_78_1 = &data_406df4;
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
                var_78_1 = &data_406df4;
            }
            goto label_402c68;
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
            var_78_1 = &data_406df4;
            goto label_402c68;
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
            goto label_402c68;
        }
        case 8:
        case 9:
        case 0xa:
        {
            if ((!cond:1))
            {
                arg8 = sub_402ad0(&data_406e05, r13);
                arg9 = sub_402ad0("'", r13);
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
            goto label_402c68;
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
            goto label_403456;
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
        goto label_402c68;
    }
}

char* sub_403e00(int32_t arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4)
{
    int64_t r15 = arg1;
    int32_t* rax = __errno_location();
    int64_t rbx = data_60a278;
    int32_t rax_1 = *rax;
    if (r15 < 0)
    {
        abort();
        /* no return */
    }
    if (data_60a290 <= r15)
    {
        if (r15 == 0x7fffffff)
        {
            sub_404f20();
            /* no return */
        }
        int32_t r12_1 = (r15 + 1);
        int64_t rsi_1 = (r12_1 << 4);
        if (rbx == 0x60a280)
        {
            int64_t rax_9 = sub_404d30(0, rsi_1);
            int128_t zmm0 = data_60a280;
            rbx = rax_9;
            data_60a278 = rax_9;
            *rax_9 = zmm0;
        }
        else
        {
            int64_t rax_2 = sub_404d30(rbx, rsi_1);
            data_60a278 = rax_2;
            rbx = rax_2;
        }
        int64_t rdi_1 = data_60a290;
        memset(((rdi_1 << 4) + rbx), 0, ((r12_1 - rdi_1) << 4));
        data_60a290 = r12_1;
    }
    int64_t rbx_1 = (rbx + (r15 << 4));
    void* r15_2 = &arg4[2];
    int32_t rax_4 = (arg4[1] | 1);
    uint64_t r11 = *rbx_1;
    char* r12_2 = *(rbx_1 + 8);
    int64_t rax_5 = sub_402bd0(r12_2, r11, arg2, arg3, *arg4, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    if (r11 <= rax_5)
    {
        size_t rsi_3 = (rax_5 + 1);
        *rbx_1 = rsi_3;
        if (r12_2 != 0x60a300)
        {
            free(r12_2);
        }
        char* rax_6 = sub_404cd0(rsi_3);
        uint32_t r8_1 = *arg4;
        *(rbx_1 + 8) = rax_6;
        r12_2 = rax_6;
        sub_402bd0(rax_6, rsi_3, arg2, arg3, r8_1, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    }
    *rax = rax_1;
    return r12_2;
}

int64_t sub_403fa0(int64_t arg1)
{
    int64_t rbx = arg1;
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    if (rbx == 0)
    {
        rbx = 0x60a400;
    }
    int64_t rax_1 = sub_404ed0(rbx, 0x38);
    *rax = r12;
    return rax_1;
}

uint64_t sub_403fe0(int32_t* arg1)
{
    if (arg1 == 0)
    {
        arg1 = &data_60a400;
    }
    return *arg1;
}

void sub_403ff0(int32_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60a400;
    }
    *arg1 = arg2;
}

uint64_t sub_404000(int64_t arg1, uint8_t arg2, int32_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = 0x60a400;
    }
    char rcx_1 = (arg2 & 0x1f);
    int32_t rsi = *((arg1 + ((arg2 >> 5) << 2)) + 8);
    uint32_t rax_3 = (rsi >> rcx_1);
    *((arg1 + ((arg2 >> 5) << 2)) + 8) = ((((arg3 ^ rax_3) & 1) << rcx_1) ^ rsi);
    return (rax_3 & 1);
}

uint64_t sub_404040(int128_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60a400;
    }
    uint64_t rax = *(arg1 + 4);
    *(arg1 + 4) = arg2;
    return rax;
}

void sub_404060(int32_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = &data_60a400;
    }
    *arg1 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *(arg1 + 0x28) = arg2;
        *(arg1 + 0x30) = arg3;
        return;
    }
    int64_t var_8 = 0x60a400;
    abort();
    /* no return */
}

int64_t sub_404090(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t* arg5)
{
    int32_t* rbx = arg5;
    if (arg5 == 0)
    {
        rbx = &data_60a400;
    }
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    int64_t rax_2 = sub_402bd0(arg1, arg2, arg3, arg4, *rbx, rbx[1], &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = r12;
    return rax_2;
}

char* sub_404110(uint64_t arg1, uint64_t arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* rbx = arg4;
    if (arg4 == 0)
    {
        rbx = &data_60a400;
    }
    int32_t* rax = __errno_location();
    int32_t rax_1 = *rax;
    int32_t rbp;
    rbp = arg3 == 0;
    int32_t rbp_1 = (rbp | rbx[1]);
    int64_t rax_2 = sub_402bd0(nullptr, 0, arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    char* rax_3 = sub_404cd0((rax_2 + 1));
    sub_402bd0(rax_3, (rax_2 + 1), arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = rax_1;
    if (arg3 != 0)
    {
        *arg3 = rax_2;
    }
    return rax_3;
}

int64_t sub_404200(uint64_t arg1, uint64_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_404110(arg1, arg2, nullptr, arg3);
}

uint64_t sub_404210()
{
    uint64_t rax_2 = data_60a290;
    int64_t r12 = data_60a278;
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
    if (rdi_2 != 0x60a300)
    {
        rax_2 = free(rdi_2);
        *data_60a280 = 0x100;
        *(data_60a280 + 8) = 0x60a300;
    }
    if (r12 != 0x60a280)
    {
        rax_2 = free(r12);
        data_60a278 = 0x60a280;
    }
    data_60a290 = 1;
    return rax_2;
}

int64_t sub_4042b0(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403e00(arg1, arg2, -1, &data_60a400);
}

int64_t sub_4042d0(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_403e00(arg1, arg2, arg3, &data_60a400);
}

int64_t sub_4042e0(uint64_t arg1)
{
    /* tailcall */
    return sub_403e00(0, arg1, -1, &data_60a400);
}

int64_t sub_404300(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403e00(0, arg1, arg2, &data_60a400);
}

char* sub_404320(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_403e00(arg1, arg3, -1, &var_48);
}

char* sub_404390(int32_t arg1, int32_t arg2, uint64_t arg3, uint64_t arg4)
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
    return sub_403e00(arg1, arg3, arg4, &var_48);
}

int64_t sub_404400(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_404320(0, arg1, arg2);
}

int64_t sub_404410(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_404390(0, arg1, arg2, arg3);
}

char* sub_404420(uint64_t arg1, uint64_t arg2, uint8_t arg3)
{
    char rcx_1 = (arg3 & 0x1f);
    int64_t var_18 = data_60a430;
    int128_t var_48 = data_60a400;
    int128_t var_38 = data_60a410;
    int128_t var_28 = data_60a420;
    int32_t rdx = *((&var_48 + ((arg3 >> 5) << 2)) + 8);
    *((&var_48 + ((arg3 >> 5) << 2)) + 8) = ((((!(rdx >> rcx_1)) & 1) << rcx_1) ^ rdx);
    return sub_403e00(0, arg1, arg2, &var_48);
}

int64_t sub_404490(uint64_t arg1, uint8_t arg2)
{
    /* tailcall */
    return sub_404420(arg1, -1, arg2);
}

int64_t sub_4044a0(uint64_t arg1)
{
    /* tailcall */
    return sub_404420(arg1, -1, 0x3a);
}

int64_t sub_4044c0(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_404420(arg1, arg2, 0x3a);
}

char* sub_4044d0(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_403e00(arg1, arg3, -1, &var_48);
}

char* sub_404540(int32_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, 
    uint64_t arg5)
{
    int128_t var_48 = data_60a400;
    int128_t var_38 = data_60a410;
    int128_t var_28 = data_60a420;
    int64_t var_18 = data_60a430;
    var_48 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *var_28[8] = arg2;
        int64_t var_18_1 = arg3;
        return sub_403e00(arg1, arg4, arg5, &var_48);
    }
    abort();
    /* no return */
}

ssize_t sub_404670(int32_t arg1, int64_t arg2, uint64_t arg3)
{
    uint64_t rbx = arg3;
    ssize_t rax_1;
    while (true)
    {
        rax_1 = read(arg1, arg2, rbx);
        if (rax_1 >= 0)
        {
            break;
        }
        int32_t rax_3 = *__errno_location();
        if (rax_3 != 4)
        {
            if (rbx <= 0x7fffe000)
            {
                break;
            }
            if (rax_3 != 0x16)
            {
                break;
            }
            rbx = 0x7fffe000;
        }
    }
    return rax_1;
}

ssize_t sub_4046d0(int32_t arg1, int64_t arg2, uint64_t arg3)
{
    uint64_t rbx = arg3;
    ssize_t rax_1;
    while (true)
    {
        rax_1 = write(arg1, arg2, rbx);
        if (rax_1 >= 0)
        {
            break;
        }
        int32_t rax_3 = *__errno_location();
        if (rax_3 != 4)
        {
            if (rax_3 != 0x16)
            {
                break;
            }
            if (rbx <= 0x7fffe000)
            {
                break;
            }
            rbx = 0x7fffe000;
        }
    }
    return rax_1;
}

int64_t sub_404730(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    __fprintf_chk(arg1, 1, "Copyright %s %d Free Software Fo…", dcgettext(nullptr, &data_407b4b, 5), 0x7e1);
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

int64_t sub_404b10(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_404730(arg1, arg2, arg3, arg4, arg5, r9);
}

int64_t sub_404b30(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_404730(arg1, arg2, arg3, arg4, &var_58, r9);
}

int64_t sub_404b90(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
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
    return sub_404730(arg1, arg2, arg3, arg4, &var_88, r9_1);
}

int64_t sub_404c50()
{
    __printf_chk(1, dcgettext(nullptr, "\nReport bugs to: %s\n", 5), "bug-coreutils@gnu.org");
    __printf_chk(1, dcgettext(nullptr, "%s home page: <%s>\n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
    /* tailcall */
    return fputs_unlocked(dcgettext(nullptr, "General help using GNU software:…", 5), stdout);
}

int64_t sub_404cd0(size_t arg1)
{
    int64_t rax = malloc(arg1);
    if ((rax == 0 && arg1 != 0))
    {
        sub_404f20();
        /* no return */
    }
    return rax;
}

int64_t sub_404d30(int64_t arg1, size_t arg2)
{
    if ((arg2 == 0 && arg1 != 0))
    {
        free(arg1);
        return 0;
    }
    int64_t rax = realloc(arg1, arg2);
    if ((rax == 0 && arg2 != 0))
    {
        sub_404f20();
        /* no return */
    }
    return rax;
}

int64_t sub_404e7a() __noreturn
{
    sub_404f20();
    /* no return */
}

int64_t sub_404e80(size_t arg1)
{
    /* tailcall */
    return memset(sub_404cd0(arg1), 0, arg1);
}

int64_t sub_404ea0(size_t arg1, size_t arg2)
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
    sub_404f20();
    /* no return */
}

int64_t sub_404ed0(int64_t arg1, size_t arg2)
{
    /* tailcall */
    return memcpy(sub_404cd0(arg2), arg1, arg2);
}

int64_t sub_404f00(char* arg1)
{
    /* tailcall */
    return sub_404ed0(arg1, (strlen(arg1) + 1));
}

int64_t sub_404f20() __noreturn
{
    error(data_60a220, 0, "%s", dcgettext(nullptr, "memory exhausted", 5));
    abort();
    /* no return */
}

uint64_t sub_404f60(int64_t arg1, int32_t* arg2)
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

uint64_t sub_405040(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
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
            goto label_405270;
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
                            goto label_405196;
                        }
                    }
                    else
                    {
                        if (var_70_1 != 0)
                        {
                            goto label_405196;
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
                        label_405196:
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
        label_405270:
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
                    goto label_40529e;
                }
                *arg5 = r12;
            label_40529e:
                int32_t* rdx_4 = rbx[2];
                rax_14 = rbx[3];
                if (rdx_4 != 0)
                {
                    *rdx_4 = rax_14;
                    rax_14 = 0;
                }
            }
            goto label_4052bc;
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
        label_4052bc:
            return rax_14;
        }
    }
    if ((arg6 != 0 && *(arg2[*arg7] + 1) != 0x2d))
    {
        rax_14 = 0xffffffff;
        if (strchr(arg3, rax_1) != 0)
        {
            goto label_4052bc;
        }
    }
    if (arg8 == 0)
    {
        goto label_40522e;
    }
    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: unrecognized option '%s%s'\n", 5), *arg2, arg9, r14, arg4);
label_40522e:
    *(arg7 + 0x20) = 0;
    *arg7 = (*arg7 + 1);
    arg7[2] = 0;
    return 0x3f;
}

uint64_t sub_405660(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
    int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8)
{
    int32_t r13 = arg7[1];
    if (arg1 <= 0)
    {
        goto label_40589c;
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
            goto label_405728;
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
        label_405728:
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
                    sub_404f60(arg2, arg7);
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
                void* const rdi = &data_407fe9;
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
                        sub_404f60(arg2, arg7);
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
                    goto label_40589c;
                }
                *arg7 = rdx_2;
            label_40589c:
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
                            goto label_4059a0;
                        }
                        int32_t* var_88_2;
                        int32_t var_80_2;
                        void* const var_78_1;
                        if (rcx_9 == 0x2d)
                        {
                            *(arg7 + 0x20) = &r14_1[2];
                            var_78_1 = &data_407fe9;
                            var_80_2 = r13;
                            var_88_2 = arg7;
                            goto label_405a10;
                        }
                        if (arg6 == 0)
                        {
                            goto label_4059a0;
                        }
                        if (r14_1[2] == 0)
                        {
                            if (strchr(r15_1, rcx_9) != 0)
                            {
                                goto label_4059a0;
                            }
                            goto label_405961;
                        }
                    label_405961:
                        *(arg7 + 0x20) = &r14_1[1];
                        int32_t rax_12 = sub_405040(rbp_1, arg2, r15_1, arg4, arg5, arg6, arg7, r13, &data_407fea);
                        r14_2 = rax_12;
                        if (rax_12 == 0xffffffff)
                        {
                            r14_1 = arg2[*arg7];
                        label_4059a0:
                            rdx = &r14_1[1];
                        label_4057e1:
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
                                        goto label_4059de;
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
                                    label_4059de:
                                        *(arg7 + 0x20) = r8_1;
                                        arg6 = 0;
                                        *(arg7 + 0x10) = 0;
                                        var_78_1 = &data_408008;
                                        var_80_2 = r13;
                                        var_88_2 = arg7;
                                    label_405a10:
                                        r14_2 = sub_405040(rbp_1, arg2, r15_1, arg4, arg5, arg6, var_88_2, var_80_2, var_78_1);
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
                                    goto label_405acd;
                                }
                                int64_t rbp_2 = *arg2;
                                __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: invalid option -- '%c'\n", 5), rbp_2, r14_2);
                            label_405acd:
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
                        goto label_40589c;
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
            goto label_405728;
        }
        goto label_4057e1;
    }
}

uint64_t sub_405c90(int32_t arg1, int64_t* arg2, char* arg3)
{
    return _getopt_internal(arg1, arg2, arg3, nullptr, nullptr, 0, 1);
}

uint64_t sub_405d30(uint32_t* arg1, char* arg2, uint64_t arg3, mbstate_t* arg4)
{
    uint64_t rbx_1;
    char* rbp_1;
    uint32_t* r12_1;
    if (arg2 == 0)
    {
        arg3 = 1;
        rbp_1 = &data_407fec[0x1b];
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
                goto label_405d5a;
            }
        }
    }
    if ((arg2 == 0 || (arg2 != 0 && arg3 != 0)))
    {
        void var_1c;
        r12_1 = &var_1c;
    label_405d5a:
        uint64_t rax_1 = mbrtowc(r12_1, rbp_1, arg3, arg4);
        rbx_1 = rax_1;
        if ((rax_1 > -3 && sub_405e10() == 0))
        {
            rbx_1 = 1;
            *r12_1 = *rbp_1;
        }
    }
    return rbx_1;
}

uint64_t sub_405db0(FILE* arg1)
{
    int32_t* rbp = arg1;
    uint64_t rax = __fpending(arg1);
    int32_t rbx_1 = (*rbp & 0x20);
    uint64_t rax_1 = sub_4063e0(rbp);
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

int64_t sub_405e10()
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
        void* const rdi_1 = &data_40800c;
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

char* sub_405e70()
{
    char* rax = nl_langinfo(0xe);
    char* r15 = data_60a478;
    char* rbx = rax;
    if (rax == 0)
    {
        rbx = &data_407fec[0x1b];
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
                    goto label_405f6c;
                }
                memcpy(rbp_3, r13_1, r14_1);
                goto label_405fb6;
            }
        }
        char* rax_9 = malloc(rdi_7);
        rbp_3 = rax_9;
        if (rax_9 == 0)
        {
        label_405f6c:
            r15 = &data_407fec[0x1b];
        }
        else
        {
            memcpy(rbp_3, r13_1, r14_1);
            rbp_3[r14_1] = 0x2f;
        label_405fb6:
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
                rax_12 = fdopen(rax_11, &data_4066fd);
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
                            label_40606c:
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
                                    goto label_4061fb;
                                }
                                int64_t* rcx_2 = &var_b8;
                            label_4060a8:
                                int32_t rdx_5 = *rcx_2;
                                rcx_2 = (rcx_2 + 4);
                                uint32_t rax_20 = (((rdx_5 - 0x1010101) & (!rdx_5)) & 0x80808080);
                                if (rax_20 == 0)
                                {
                                    goto label_4060a8;
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
                            label_4060e2:
                                int32_t rsi_5 = *rdx_11;
                                rdx_11 = (rdx_11 + 4);
                                uint32_t rax_23 = (((rsi_5 - 0x1010101) & (!rsi_5)) & 0x80808080);
                                if (rax_23 == 0)
                                {
                                    goto label_4060e2;
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
                                    r15 = &data_407fec[0x1b];
                                    free(rdi_26);
                                    sub_4063e0(rax_12);
                                    goto label_405ff7;
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
                                    label_4062bb:
                                        uint64_t r8_1 = rsi_17;
                                        rsi_17 = (rsi_17 + 8);
                                        *(r9_5 + r8_1) = *(r10_2 + r8_1);
                                        if (rsi_17 < rcx_12)
                                        {
                                            goto label_4062bb;
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
                                    label_406309:
                                        uint64_t rsi_20 = rcx_14;
                                        rcx_14 = (rcx_14 + 8);
                                        *(rdi_24 + rsi_20) = *(r9_6 + rsi_20);
                                        if (rcx_14 < rdx_20)
                                        {
                                            goto label_406309;
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
                            goto label_40606c;
                        }
                        break;
                    }
                label_4061fb:
                    sub_4063e0(rax_12);
                    if (var_d0_1 != 0)
                    {
                        *(r15 + var_d0_1) = 0;
                    }
                }
            }
            if ((((rax_11 >= 0 && rax_12 == 0) || rax_11 < 0) || ((rax_11 >= 0 && rax_12 != 0) && var_d0_1 == 0)))
            {
                r15 = &data_407fec[0x1b];
            }
        label_405ff7:
            free(rbp_3);
        }
        data_60a478 = r15;
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

int64_t sub_4063e0(FILE* arg1)
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
        if (((rax_1 == 0 || (rax_1 != 0 && rax_6 != -1)) && sub_406460(arg1) != 0))
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

int64_t sub_406460(FILE* arg1)
{
    int32_t* rbx = arg1;
    if ((arg1 != 0 && (__freading(arg1) != 0 && (*rbx & 0x100) != 0)))
    {
        sub_4064a0(rbx, 0, 1);
        /* tailcall */
        return fflush(rbx);
    }
    /* tailcall */
    return fflush(rbx);
}

off64_t sub_4064a0(FILE* arg1, off_t arg2, int32_t arg3)
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

int64_t sub_406570(void (* arg1)(void*))
{
    int64_t rdx = data_60a1e8;
    /* tailcall */
    return __cxa_atexit(arg1, nullptr, rdx);
}

int64_t sub_406588(int64_t arg1, int64_t arg2, int64_t arg3)
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

