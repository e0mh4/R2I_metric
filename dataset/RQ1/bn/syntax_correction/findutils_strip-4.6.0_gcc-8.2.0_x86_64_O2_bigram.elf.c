#include "decompile_bn.h"
int64_t sub_400f80()
{
    int64_t var_8 = data_606008;
    /* jump -> data_606010 */
}

int64_t sub_400f96()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_400f80();
}

int64_t sub_400fa6()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_400f80();
}

int64_t sub_400fb6()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_400f80();
}

int64_t sub_400fc6()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_400f80();
}

int64_t sub_400fd6()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_400f80();
}

int64_t sub_400fe6()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_400f80();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    char* rdi = *argv;
    if (rdi == 0)
    {
        rdi = "bigram";
    }
    int64_t rcx;
    int64_t rdx;
    uint64_t r8;
    ssize_t r9;
    rcx = sub_4015b0(rdi);
    char* var_38;
    uint64_t var_30;
    setlocale(6, &data_403a05, rdx, rcx, r8, r9, var_38, var_30);
    bindtextdomain("findutils", "/home/dongkwan/data/scripts/gnu_…");
    textdomain("findutils");
    if (sub_4038b0(sub_401510) != 0)
    {
        error(1, *__errno_location(), dcgettext(nullptr, "The atexit library function fail…", 5));
    }
    uint64_t r12 = 0x402;
    var_30 = 0x402;
    var_38 = sub_402fd0(0x402);
    char* rax_2 = sub_402fd0(0x402);
    *rax_2 = 0;
    char* rbp = rax_2;
    while (true)
    {
        int32_t rax_3 = __getdelim(&var_38, &var_30, 0xa, stdin);
        if (rax_3 <= 0)
        {
            break;
        }
        var_38[(rax_3 - 1)] = 0;
        char* rdx_2 = var_38;
        char rax_5 = *rbp;
        int32_t rdi_2 = *rdx_2;
        int64_t rax_8;
        int64_t rbx_1;
        if ((rax_5 == 0 || (rax_5 != 0 && rax_5 != rdi_2)))
        {
            rax_8 = 0;
            rbx_1 = 0;
        }
        if ((rax_5 != 0 && rax_5 == rdi_2))
        {
            char* rcx_2 = rdx_2;
            char* rax_6 = rbp;
            char rsi_1;
            do
            {
                rax_6 = &rax_6[1];
                rcx_2 = &rcx_2[1];
                rsi_1 = *rax_6;
                if (*rcx_2 != rsi_1)
                {
                    break;
                }
            } while (rsi_1 != 0);
            int32_t rax_7 = (rax_6 - rbp);
            rbx_1 = rax_7;
            rax_8 = rax_7;
            rdi_2 = rdx_2[rax_8];
        }
        if (rdi_2 != 0)
        {
            int64_t r13_1 = (rax_8 + 1);
            if (rdx_2[(rax_8 + 1)] != 0)
            {
                int64_t rbx_2 = (rbx_1 + 2);
                do
                {
                    _IO_putc(rdi_2, stdout);
                    _IO_putc(var_38[r13_1], stdout);
                    _IO_putc(0xa, stdout);
                    rdx_2 = var_38;
                    rdi_2 = rdx_2[rbx_2];
                    if (rdi_2 == 0)
                    {
                        break;
                    }
                    r13_1 = (rbx_2 + 1);
                    rbx_2 = (rbx_2 + 2);
                } while (rdx_2[r13_1] != 0);
            }
        }
        var_38 = rbp;
        rbp = rdx_2;
        var_30 = r12;
        r12 = var_30;
    }
    free(var_38);
    free(rbp);
    return 0;
}


void sub_40143b()
{
    return;
}

int64_t sub_40145a()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    return (COMBINE(rdx, rax) / 2);
}

void sub_401491()
{
    if (data_606208 != 0)
    {
        return;
    }
    while (true)
    {
        int64_t rax_1 = data_606210;
        if (rax_1 >= 0)
        {
            break;
        }
        data_606210 = (rax_1 + 1);
        *(0x605e40 + ((rax_1 + 1) << 3))();
    }
    sub_40143b();
    data_606208 = 1;
}

int64_t j_sub_40145a()
{
    /* tailcall */
    return sub_40145a();
}

int64_t sub_4014f0(int64_t arg1)
{
    data_606220 = arg1;
}

int64_t sub_401500(char arg1)
{
    data_606218 = arg1;
}

void sub_401510(void* arg1)
{
    int32_t rax = sub_403260(stdout);
    int32_t* rax_1;
    if (rax != 0)
    {
        rax_1 = __errno_location();
        if ((data_606218 == 0 || (data_606218 != 0 && *rax_1 != 0x20)))
        {
            char* rax_3 = dcgettext(nullptr, "write error", 5);
            int64_t rdi_2 = data_606220;
            if (rdi_2 == 0)
            {
                error(0, *rax_1, "%s", rax_3);
            }
            else
            {
                error(0, *rax_1, "%s: %s", sub_402e00(rdi_2), rax_3);
            }
        }
    }
    if (((rax == 0 || ((rax != 0 && data_606218 != 0) && *rax_1 == 0x20)) && sub_403260(stderr) == 0))
    {
        return;
    }
    _exit(data_606170);
    /* no return */
}

char* sub_4015b0(char* arg1)
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
                void* const rdi_1 = &data_403a00;
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
    data_606228 = rbx;
    __progname_full = rbx;
    return rax;
}

char* sub_401650(char* arg1, int32_t arg2)
{
    char* rax = dcgettext(nullptr, arg1, 5);
    char* rbx = rax;
    if (arg1 == rax)
    {
        char* rax_2 = sub_4032d0();
        char rdx_2 = (*rax_2 & 0xdf);
        if (rdx_2 != 0x55)
        {
            if (rdx_2 != 0x47)
            {
            label_401731:;
                void* const rbx_1 = &data_403a04;
                if (arg2 != 9)
                {
                    rbx_1 = &data_403a15;
                }
                return rbx_1;
            }
            if ((rax_2[1] & 0xdf) != 0x42)
            {
                goto label_401731;
            }
            if (rax_2[2] != 0x31)
            {
                goto label_401731;
            }
            if (rax_2[3] != 0x38)
            {
                goto label_401731;
            }
            if (rax_2[4] != 0x30)
            {
                goto label_401731;
            }
            if (rax_2[5] != 0x33)
            {
                goto label_401731;
            }
            if (rax_2[6] != 0x30)
            {
                goto label_401731;
            }
            if (rax_2[7] != 0)
            {
                goto label_401731;
            }
            bool cond2_1 = *rbx != 0x60;
            rbx = &data_403a0d;
            if (cond2_1)
            {
                rbx = &data_403a0a;
            }
        }
        else
        {
            if ((rax_2[1] & 0xdf) != 0x54)
            {
                goto label_401731;
            }
            if ((rax_2[2] & 0xdf) != 0x46)
            {
                goto label_401731;
            }
            if (rax_2[3] != 0x2d)
            {
                goto label_401731;
            }
            if (rax_2[4] != 0x38)
            {
                goto label_401731;
            }
            if (rax_2[5] != 0)
            {
                goto label_401731;
            }
            bool cond1_1 = *rbx != 0x60;
            rbx = &data_403a11;
            if (cond1_1)
            {
                rbx = &data_403a06;
            }
        }
    }
    return rbx;
}

int64_t sub_401750(char* arg1, int64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t arg5, int32_t arg6, int64_t arg7, char* arg8, char* arg9)
{
    char* r15 = arg1;
    int64_t r14 = arg2;
    uint32_t rbp_1 = (arg6 & 2);
    uint64_t rax;
    uint32_t rdx;
    rax = __ctype_get_mb_cur_max();
    int32_t r11 = arg5;
    bool cond0 = r11 == 0xa;
    if (r11 > 0xa)
    {
        abort();
        /* no return */
    }
    int32_t var_ac;
    uint64_t var_98;
    void* const var_70;
    bool var_5b;
    int64_t rbx;
    switch (r11)
    {
        case 0:
        {
            var_5b = false;
            rbx = 0;
            var_ac = 0;
            var_98 = 0;
            var_70 = nullptr;
            break;
        }
        case 3:
        {
            var_5b = true;
            rbx = 0;
            r11 = 2;
            var_ac = 1;
            var_98 = 1;
            var_70 = &data_403a15;
            break;
        }
        case 6:
        {
            var_5b = true;
            rbx = 0;
            r11 = 5;
            var_ac = 1;
            var_98 = 1;
            var_70 = &data_403a04;
            break;
        }
        case 7:
        {
            var_5b = false;
            rbx = 0;
            var_ac = 1;
            var_98 = 0;
            var_70 = nullptr;
            break;
        }
    }
    if (r11 == 2)
    {
        if (rbp_1 != 0)
        {
            var_5b = true;
            rbx = 0;
            var_ac = 0;
            var_98 = 1;
            var_70 = &data_403a15;
        }
        else
        {
            var_ac = 0;
        }
    }
    if ((r11 == 1 || (r11 == 4 && rbp_1 != 0)))
    {
        var_5b = true;
        rbx = 0;
        r11 = 2;
        var_ac = 0;
        var_98 = 1;
        var_70 = &data_403a15;
    }
    if ((r11 == 4 && rbp_1 == 0))
    {
        var_ac = 1;
    }
    if (((r11 == 2 && rbp_1 == 0) || (r11 == 4 && rbp_1 == 0)))
    {
        if (r14 != 0)
        {
            *r15 = 0x27;
        }
        var_5b = false;
        rbx = 1;
        r11 = 2;
        var_98 = 1;
        var_70 = &data_403a15;
    }
    if (r11 == 5)
    {
        if (rbp_1 != 0)
        {
            var_5b = true;
            rbx = 0;
            var_ac = 1;
            var_98 = 1;
            var_70 = &data_403a04;
        }
        else
        {
            if (r14 != 0)
            {
                *r15 = 0x22;
            }
            var_5b = false;
            rbx = 1;
            var_ac = 1;
            var_98 = 1;
            var_70 = &data_403a04;
        }
    }
    if (((r11 == 8 || r11 == 9) || r11 == 0xa))
    {
        if ((!cond0))
        {
            arg8 = sub_401650(&data_403a17, r11);
            arg9 = sub_401650(&data_403a15, r11);
        }
        rbx = 0;
        if (rbp_1 == 0)
        {
            char rax_13 = *arg8;
            if (rax_13 != 0)
            {
                do
                {
                    if (r14 > rbx)
                    {
                        r15[rbx] = rax_13;
                    }
                    rbx = (rbx + 1);
                    rax_13 = arg8[rbx];
                } while (rax_13 != 0);
            }
        }
        var_5b = rbp_1 != 0;
        uint64_t rax_14;
        rax_14 = strlen(arg9);
        var_ac = 1;
        var_98 = rax_14;
        var_70 = arg9;
    }
    uint64_t r11_1 = arg4;
    int32_t r10_1 = r11;
    uint64_t r13 = 0;
    uint32_t r8 = 0;
    while (true)
    {
        rbp_1 = r11_1 != r13;
        if (r11_1 == -1)
        {
            rbp_1 = *(arg3 + r13) != 0;
        }
        uint64_t rax_2;
        int32_t r11_3;
        uint64_t r10_2;
        if (rbp_1 == 0)
        {
            uint32_t rcx_7 = var_5b;
            r10_2 = r11_1;
            r11_3 = r10_1;
            int32_t rax_23;
            rax_23 = r10_1 == 2;
            rdx = rbx == 0;
            rax_2 = ((rax_23 & rcx_7) & rdx);
            if (rax_2 == 0)
            {
                if ((var_70 != 0 && rcx_7 == 0))
                {
                    char rdx_10 = *var_70;
                    if (rdx_10 != 0)
                    {
                        void* rax_25 = (var_70 - rbx);
                        do
                        {
                            if (r14 > rbx)
                            {
                                r15[rbx] = rdx_10;
                            }
                            rbx = (rbx + 1);
                            rdx_10 = *(rax_25 + rbx);
                        } while (rdx_10 != 0);
                    }
                }
                if (rbx < r14)
                {
                    r15[rbx] = 0;
                }
                break;
            }
        }
        else
        {
            rax_2 = r10_1 != 2;
            rax_2 = (rax_2 & var_ac);
            uint64_t r9 = (arg3 + r13);
            uint64_t var_a8;
            var_a8 = rax_2;
            int32_t rcx_1;
            uint64_t r12_2;
            if (rax_2 == 0)
            {
                r12_2 = *r9;
                if (r12_2 > 0x7e)
                {
                    goto label_401e7d;
                }
                switch (r12_2)
                {
                    case 0:
                    {
                        if (var_ac != 0)
                        {
                        label_401d98:
                            if (var_5b == 0)
                            {
                                var_a8 = 0;
                            label_401daf:
                                rdx = r10_1 == 2;
                                rax_2 = ((r8 ^ 1) & rdx);
                                int64_t rcx_4;
                                if (rax_2 == 0)
                                {
                                    rcx_4 = rbx;
                                    if (rbx < r14)
                                    {
                                        goto label_401df5;
                                    }
                                    goto label_401dfa;
                                }
                                if (rbx < r14)
                                {
                                    r15[rbx] = 0x27;
                                }
                                if (r14 > (rbx + 1))
                                {
                                    r15[(rbx + 1)] = 0x24;
                                }
                                if (r14 > (rbx + 2))
                                {
                                    r15[(rbx + 2)] = 0x27;
                                }
                                rcx_4 = (rbx + 3);
                                if (r14 <= rcx_4)
                                {
                                    rbx = (rbx + 4);
                                    r13 = (r13 + 1);
                                    r8 = rax_2;
                                    r12_2 = 0x30;
                                    goto label_401c77;
                                }
                                r8 = rax_2;
                            label_401df5:
                                r15[rcx_4] = 0x5c;
                            label_401dfa:
                                rbx = (rcx_4 + 1);
                                rax_2 = (r13 + 1);
                                if (r10_1 == 2)
                                {
                                    r13 = rax_2;
                                    r12_2 = 0x30;
                                label_401c77:
                                    if (var_a8 != 0)
                                    {
                                        goto label_401be3;
                                    }
                                    goto label_401987;
                                }
                                r12_2 = 0x30;
                                if (rax_2 < r11_1)
                                {
                                    rax_2 = (*(arg3 + rax_2) - 0x30);
                                    if (rax_2 <= 9)
                                    {
                                        if (r14 > rbx)
                                        {
                                            r15[rbx] = 0x30;
                                        }
                                        if (r14 > (rcx_4 + 2))
                                        {
                                            r15[(rcx_4 + 2)] = 0x30;
                                        }
                                        rbx = (rcx_4 + 3);
                                        r12_2 = 0x30;
                                    }
                                }
                            label_401e2b:
                                if (var_ac == 0)
                                {
                                    goto label_401bd0;
                                }
                                if (rdx != 0)
                                {
                                    goto label_401bd0;
                                }
                                if (arg7 == 0)
                                {
                                    goto label_401e54;
                                }
                                goto label_401922;
                            }
                            rax_2 = r10_1;
                            r10_2 = r11_1;
                            r11_3 = rax_2;
                            rax_2 = rax_2 == 2;
                        }
                        else if ((arg6 & 1) != 0)
                        {
                            r13 = (r13 + 1);
                            continue;
                        }
                        else
                        {
                            if (var_5b != 0)
                            {
                                rbp_1 = 0;
                                if (arg7 != 0)
                                {
                                    var_a8 = 0;
                                    r12_2 = 0;
                                label_401922:
                                    if (((*(arg7 + ((r12_2 >> 5) << 2)) >> r12_2) & 1) == 0)
                                    {
                                        goto label_401e54;
                                    }
                                    rax_2 = r10_1 == 2;
                                    goto label_401931;
                                }
                                r12_2 = 0;
                            label_401e65:
                                r13 = (r13 + 1);
                                rbp_1 = ((rbp_1 ^ 1) & r8);
                                goto label_402058;
                            }
                            r13 = (r13 + 1);
                            rbp_1 = r8;
                            r12_2 = 0;
                        label_402058:
                            if (rbp_1 != 0)
                            {
                                if (rbx < r14)
                                {
                                    r15[rbx] = 0x27;
                                }
                                if (r14 > (rbx + 1))
                                {
                                    r15[(rbx + 1)] = 0x27;
                                }
                                rbx = (rbx + 2);
                                r8 = 0;
                                goto label_401987;
                            }
                        label_401987:
                            if (rbx >= r14)
                            {
                                goto label_401990;
                            }
                            r15[rbx] = r12_2;
                        label_401990:
                            rbx = (rbx + 1);
                            continue;
                        }
                        break;
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
                        goto label_401e7d;
                    }
                    case 7:
                    {
                        r12_2 = 7;
                        rcx_1 = 0x61;
                        rdx = r10_1 == 2;
                    label_401cd0:
                        if (var_ac == 0)
                        {
                            goto label_401bc5;
                        }
                        rax_2 = rdx;
                        r12_2 = rcx_1;
                    label_401931:
                        if (var_5b == 0)
                        {
                        label_40193c:
                            r13 = (r13 + 1);
                            goto label_401946;
                        }
                    label_401cfe:
                        r10_2 = r11_1;
                        r11_3 = r10_1;
                        break;
                    }
                    case 8:
                    {
                        r12_2 = 8;
                        rcx_1 = 0x62;
                        rdx = r10_1 == 2;
                        goto label_401cd0;
                    }
                    case 9:
                    {
                        r12_2 = 9;
                        rcx_1 = 0x74;
                        goto label_401f0c;
                    }
                    case 0xa:
                    {
                        r12_2 = 0xa;
                        rcx_1 = 0x6e;
                    label_401f0c:
                        rdx = r10_1 == 2;
                        rax_2 = (var_5b & rdx);
                        var_a8 = rax_2;
                        if (rax_2 == 0)
                        {
                            goto label_401cd0;
                        }
                        r10_2 = r11_1;
                        r11_3 = r10_1;
                        rax_2 = var_a8;
                        break;
                    }
                    case 0xb:
                    {
                        r12_2 = 0xb;
                        rcx_1 = 0x76;
                        rdx = r10_1 == 2;
                        goto label_401cd0;
                    }
                    case 0xc:
                    {
                        r12_2 = 0xc;
                        rcx_1 = 0x66;
                        rdx = r10_1 == 2;
                        goto label_401cd0;
                    }
                    case 0xd:
                    {
                        r12_2 = 0xd;
                        rcx_1 = 0x72;
                        goto label_401f0c;
                    }
                    case 0x20:
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
                        rdx = r10_1 == 2;
                    label_401bab:
                        rax_2 = (var_5b & rdx);
                        if (rax_2 == 0)
                        {
                            goto label_401bc5;
                        }
                    label_4023eb:
                        r10_2 = r11_1;
                        r11_3 = r10_1;
                        break;
                    }
                    case 0x23:
                    case 0x7e:
                    {
                        rdx = r10_1 == 2;
                    label_401ba1:
                        if (r13 != 0)
                        {
                            goto label_401bc5;
                        }
                        goto label_401bab;
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
                    label_401ed4:
                        rdx = r10_1 == 2;
                    label_401bc5:
                        rbp_1 = ((((var_ac ^ 1) | rdx) ^ 1) | var_5b);
                        if (rbp_1 == 0)
                        {
                            goto label_401bd0;
                        }
                        goto label_4018f8;
                    }
                    case 0x27:
                    {
                        goto label_401c25;
                    }
                    case 0x3f:
                    {
                        goto label_401bf5;
                    }
                    case 0x5c:
                    {
                        if (r10_1 != 2)
                        {
                            goto label_401caa;
                        }
                        if (var_5b != 0)
                        {
                            goto label_40272f;
                        }
                        r13 = (r13 + 1);
                        rbp_1 = r8;
                        r12_2 = 0x5c;
                        goto label_402058;
                    }
                    case 0x7b:
                    case 0x7d:
                    {
                        goto label_401b81;
                    }
                }
            }
            else
            {
                int32_t var_90;
                uint64_t var_88;
                int32_t var_80;
                if (var_98 != 0)
                {
                    uint64_t r12_1 = (r13 + var_98);
                    if ((r11_1 == -1 && var_98 > 1))
                    {
                        var_88 = r8;
                        var_90 = r9;
                        uint64_t rax_4;
                        rax_4 = strlen(arg3);
                        r8 = var_88;
                        r9 = var_90;
                        r11_1 = rax_4;
                    }
                    if (r12_1 > r11_1)
                    {
                        goto label_402100;
                    }
                    int64_t var_78;
                    var_78 = r10_1;
                    var_80 = r11_1;
                    var_88 = r8;
                    var_90 = r9;
                    int32_t rax_5;
                    rax_5 = memcmp(r9, var_70, var_98);
                    r9 = var_90;
                    r8 = var_88;
                    r11_1 = var_80;
                    r10_1 = var_78;
                    if (rax_5 != 0)
                    {
                        goto label_402100;
                    }
                    if (var_5b != 0)
                    {
                    label_402721:
                        r10_2 = r11_1;
                        r11_3 = r10_1;
                    label_401f79:
                        rbx = sub_401750(r15, r14, arg3, r10_2, r11_3, (arg6 & 0xfffffffd), 0, arg8, arg9);
                        break;
                    }
                    r12_2 = *r9;
                    if (r12_2 > 0x7e)
                    {
                        goto label_401e7d;
                    }
                    switch (r12_2)
                    {
                        case 0:
                        {
                            goto label_401daf;
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
                            goto label_401e7d;
                        }
                        case 7:
                        {
                            goto label_401d20;
                        }
                        case 8:
                        {
                            goto label_401d10;
                        }
                        case 9:
                        {
                            goto label_401d88;
                        }
                        case 0xa:
                        {
                            goto label_401ce8;
                        }
                        case 0xb:
                        {
                            goto label_401d78;
                        }
                        case 0xc:
                        {
                            goto label_401d68;
                        }
                        case 0xd:
                        {
                            goto label_401d39;
                        }
                        case 0x20:
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
                            goto label_401c95;
                        }
                        case 0x23:
                        case 0x7e:
                        {
                            goto label_401d55;
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
                            goto label_4018f8;
                        }
                        case 0x27:
                        {
                            goto label_401c25;
                        }
                        case 0x3f:
                        {
                            goto label_401bf5;
                        }
                        case 0x5c:
                        {
                            goto label_401caa;
                        }
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_401b81;
                        }
                    }
                }
                else
                {
                label_402100:
                    r12_2 = *r9;
                    if (r12_2 > 0x7e)
                    {
                    label_401e78:
                        var_a8 = 0;
                    label_401e7d:;
                        uint64_t rcx_5;
                        if (rax == 1)
                        {
                            var_90 = r8;
                            r8 = var_90;
                            rcx_5 = 1;
                            uint32_t rdx_5;
                            rdx_5 = (*(*__ctype_b_loc() + (r12_2 << 1)) >> 0xe);
                            rdx = ((rdx_5 ^ 1) & var_ac);
                        label_401ec8:
                            if (rdx == 0)
                            {
                                goto label_401ed4;
                            }
                            rdx = var_ac;
                        label_40241e:;
                            uint64_t rcx_13 = (rcx_5 + r13);
                            rax_2 = 0;
                            char rsi_11 = var_a8;
                            while (true)
                            {
                                if (rdx != 0)
                                {
                                    rbp_1 = r10_1 == 2;
                                    rax_2 = rbp_1;
                                    if (var_5b != 0)
                                    {
                                        break;
                                    }
                                    uint32_t rax_30;
                                    rax_30 = ((r8 ^ 1) & rbp_1);
                                    if (rax_30 != 0)
                                    {
                                        if (rbx < r14)
                                        {
                                            r15[rbx] = 0x27;
                                        }
                                        if (r14 > (rbx + 1))
                                        {
                                            r15[(rbx + 1)] = 0x24;
                                        }
                                        if (r14 > (rbx + 2))
                                        {
                                            r15[(rbx + 2)] = 0x27;
                                        }
                                        rbx = (rbx + 3);
                                        r8 = rax_30;
                                    }
                                    if (rbx < r14)
                                    {
                                        r15[rbx] = 0x5c;
                                    }
                                    if (r14 > (rbx + 1))
                                    {
                                        r15[(rbx + 1)] = ((r12_2 >> 6) + 0x30);
                                    }
                                    if (r14 > (rbx + 2))
                                    {
                                        int32_t rax_34;
                                        rax_34 = (r12_2 >> 3);
                                        r15[(rbx + 2)] = ((rax_34 & 7) + 0x30);
                                    }
                                    r13 = (r13 + 1);
                                    rbx = (rbx + 3);
                                    r12_2 = ((r12_2 & 7) + 0x30);
                                    if (rcx_13 <= r13)
                                    {
                                        break;
                                    }
                                    rax_2 = rdx;
                                }
                                else
                                {
                                    rbp_1 = ((rax_2 ^ 1) & r8);
                                    if (rsi_11 != 0)
                                    {
                                        if (rbx < r14)
                                        {
                                            r15[rbx] = 0x5c;
                                        }
                                        rbx = (rbx + 1);
                                    }
                                    r13 = (r13 + 1);
                                    if (r13 >= rcx_13)
                                    {
                                        break;
                                    }
                                    if (rbp_1 == 0)
                                    {
                                        rsi_11 = 0;
                                    }
                                    else
                                    {
                                        if (rbx < r14)
                                        {
                                            r15[rbx] = 0x27;
                                        }
                                        if (r14 > (rbx + 1))
                                        {
                                            r15[(rbx + 1)] = 0x27;
                                        }
                                        rbx = (rbx + 2);
                                        rsi_11 = 0;
                                        r8 = 0;
                                    }
                                }
                                if (rbx < r14)
                                {
                                    r15[rbx] = r12_2;
                                }
                                r12_2 = *(arg3 + r13);
                                rbx = (rbx + 1);
                            }
                            if ((rdx == 0 && r13 >= rcx_13))
                            {
                                goto label_402058;
                            }
                            if ((rdx != 0 && var_5b != 0))
                            {
                                goto label_4023eb;
                            }
                            goto label_401987;
                        }
                        mbstate_t var_40;
                        var_40.__count = 0;
                        var_40.__value = 0;
                        if (r11_1 == -1)
                        {
                            var_88 = r8;
                            var_90 = r9;
                            r8 = var_88;
                            r9 = var_90;
                            r11_1 = strlen(arg3);
                        }
                        char var_5a_1 = r8;
                        uint64_t rbx_1 = 0;
                        char var_59_1 = r12_2;
                        var_80 = r15;
                        var_90 = r11_1;
                        var_88 = r10_1;
                        while (true)
                        {
                            uint64_t r14_1 = (r13 + rbx_1);
                            uint64_t r12_3 = (arg3 + r14_1);
                            wchar_t var_44;
                            rax_2 = sub_403230(&var_44, r12_3, (var_90 - r14_1), &var_40);
                            uint64_t r15_1 = rax_2;
                            if (rax_2 == 0)
                            {
                                rbp_1 = (rbp_1 ^ 1);
                                rcx_5 = rbx_1;
                                r15 = var_80;
                                r8 = var_5a_1;
                                r12_2 = var_59_1;
                                rdx = (var_ac & rbp_1);
                                r11_1 = var_90;
                                r10_1 = var_88;
                                break;
                            }
                            if (rax_2 == -1)
                            {
                                rcx_5 = rbx_1;
                                r8 = var_5a_1;
                                r12_2 = var_59_1;
                                r15 = var_80;
                                r11_1 = var_90;
                                r10_1 = var_88;
                                rdx = var_ac;
                                break;
                            }
                            if (rax_2 == -2)
                            {
                                r11_1 = var_90;
                                rax_2 = rbx_1;
                                rcx_5 = rbx_1;
                                r8 = var_5a_1;
                                r12_2 = var_59_1;
                                r15 = var_80;
                                r10_1 = var_88;
                                if ((r14_1 < r11_1 && *r12_3 != 0))
                                {
                                    do
                                    {
                                        rax_2 = (rax_2 + 1);
                                        if (r11_1 <= (r13 + rax_2))
                                        {
                                            break;
                                        }
                                    } while (*(r9 + rax_2) != 0);
                                    rcx_5 = rax_2;
                                }
                                rdx = var_ac;
                                break;
                            }
                            rax_2 = var_88 == 2;
                            rax_2 = (rax_2 & var_5b);
                            if ((rax_2 != 0 && r15_1 != 1))
                            {
                                char* rdx_13 = ((arg3 + r14_1) + 1);
                                uint64_t r8_2 = ((arg3 + r15_1) + r14_1);
                                char rcx_11;
                                do
                                {
                                    rcx_11 = (*rdx_13 - 0x5b);
                                    if ((rcx_11 <= 0x21 && ((1 << rcx_11) & 0x20000002b) != 0))
                                    {
                                        break;
                                    }
                                    rdx_13 = &rdx_13[1];
                                } while (r8_2 != rdx_13);
                                if ((rcx_11 <= 0x21 && ((1 << rcx_11) & 0x20000002b) != 0))
                                {
                                    r15 = var_80;
                                    r10_2 = var_90;
                                    r11_3 = var_88;
                                    break;
                                }
                            }
                            mbstate_t* rdi_6 = &var_40;
                            if (iswprint(var_44) == 0)
                            {
                                rbp_1 = 0;
                            }
                            rbx_1 = (rbx_1 + r15_1);
                            rax_2 = mbsinit(rdi_6);
                            if (rax_2 != 0)
                            {
                                rcx_5 = rbx_1;
                                r8 = var_5a_1;
                                r12_2 = var_59_1;
                                r15 = var_80;
                                r11_1 = var_90;
                                r10_1 = var_88;
                                rdx = ((rbp_1 ^ 1) & var_ac);
                                break;
                            }
                        }
                        if (rax_2 == 0)
                        {
                            if (rcx_5 > 1)
                            {
                                goto label_40241e;
                            }
                            goto label_401ec8;
                        }
                    }
                    else
                    {
                        switch (r12_2)
                        {
                            case 0:
                            {
                                goto label_401d98;
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
                                goto label_401e78;
                            }
                            case 7:
                            {
                            label_401d20:
                                r12_2 = 0x61;
                                rax_2 = 0;
                                goto label_401cf0;
                            }
                            case 8:
                            {
                            label_401d10:
                                r12_2 = 0x62;
                                rax_2 = 0;
                                goto label_401cf0;
                            }
                            case 9:
                            {
                            label_401d88:
                                r12_2 = 0x74;
                                rax_2 = 0;
                                goto label_401cf0;
                            }
                            case 0xa:
                            {
                            label_401ce8:
                                r12_2 = 0x6e;
                                rax_2 = 0;
                            label_401cf0:
                                if (var_5b != 0)
                                {
                                    goto label_401cfe;
                                }
                                goto label_40193c;
                            }
                            case 0xb:
                            {
                            label_401d78:
                                r12_2 = 0x76;
                                rax_2 = 0;
                                goto label_401cf0;
                            }
                            case 0xc:
                            {
                            label_401d68:
                                r12_2 = 0x66;
                                rax_2 = 0;
                                goto label_401cf0;
                            }
                            case 0xd:
                            {
                                var_a8 = 0;
                            label_401d39:
                                r12_2 = 0xd;
                                rcx_1 = 0x72;
                                rdx = r10_1 == 2;
                                goto label_401cd0;
                            }
                            case 0x20:
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
                                var_a8 = 0;
                            label_401c95:
                                rdx = 0;
                                goto label_401bc5;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                var_a8 = 0;
                            label_401d55:
                                if (r13 != 0)
                                {
                                    goto label_4018f8;
                                }
                                rdx = 0;
                                goto label_401bc5;
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
                                var_a8 = 0;
                            label_4018f8:
                                rbp_1 = 0;
                                if (arg7 != 0)
                                {
                                    goto label_401922;
                                }
                            label_401e54:
                                rax_2 = r10_1 == 2;
                                if (var_a8 == 0)
                                {
                                    goto label_401e65;
                                }
                                goto label_401931;
                            }
                            case 0x27:
                            {
                                var_a8 = 0;
                            label_401c25:
                                rdx = 0;
                                r12_2 = 0x27;
                                if (r10_1 != 2)
                                {
                                    goto label_401bc5;
                                }
                                if (var_5b != 0)
                                {
                                    goto label_40272f;
                                }
                                if (rbx < r14)
                                {
                                    r15[rbx] = 0x27;
                                }
                                if (r14 > (rbx + 1))
                                {
                                    r15[(rbx + 1)] = 0x5c;
                                }
                                if (r14 > (rbx + 2))
                                {
                                    r15[(rbx + 2)] = 0x27;
                                }
                                rbx = (rbx + 3);
                                r13 = (r13 + 1);
                                r8 = 0;
                                r12_2 = 0x27;
                                goto label_401c77;
                            }
                            case 0x3f:
                            {
                                var_a8 = 0;
                            label_401bf5:
                                if (r10_1 != 2)
                                {
                                    if (r10_1 != 5)
                                    {
                                        r12_2 = 0x3f;
                                        rdx = r10_1 == 2;
                                        goto label_401bc5;
                                    }
                                    if ((arg6 & 4) == 0)
                                    {
                                        rdx = 0;
                                        r12_2 = 0x3f;
                                        goto label_401bc5;
                                    }
                                    rax_2 = (r13 + 2);
                                    rdx = 0;
                                    r12_2 = 0x3f;
                                    if (rax_2 >= r11_1)
                                    {
                                        goto label_401bc5;
                                    }
                                    if (*((arg3 + r13) + 1) != 0x3f)
                                    {
                                        goto label_401bc5;
                                    }
                                    r12_2 = *(arg3 + rax_2);
                                    if (r12_2 > 0x3e)
                                    {
                                    label_402713:
                                        r12_2 = 0x3f;
                                        goto label_401bc5;
                                    }
                                    if ((!(TEST_BITQ(0x7000a38200000000, r12_2))))
                                    {
                                        goto label_402713;
                                    }
                                    if (var_5b != 0)
                                    {
                                        goto label_402721;
                                    }
                                    if (rbx < r14)
                                    {
                                        r15[rbx] = 0x3f;
                                    }
                                    if (r14 > (rbx + 1))
                                    {
                                        r15[(rbx + 1)] = 0x22;
                                    }
                                    if (r14 > (rbx + 2))
                                    {
                                        r15[(rbx + 2)] = 0x22;
                                    }
                                    if (r14 > (rbx + 3))
                                    {
                                        r15[(rbx + 3)] = 0x3f;
                                    }
                                    rbx = (rbx + 4);
                                    rdx = 0;
                                    rbp_1 = 0;
                                    r13 = rax_2;
                                    goto label_401e2b;
                                }
                                if (var_5b == 0)
                                {
                                    rbp_1 = 0;
                                    r12_2 = 0x3f;
                                label_401bd0:
                                    r13 = (r13 + 1);
                                    if (var_a8 == 0)
                                    {
                                        rbp_1 = ((rbp_1 ^ 1) & r8);
                                        goto label_402058;
                                    }
                                label_401be3:
                                    rax_2 = r10_1 == 2;
                                label_401946:
                                    rdx = ((r8 ^ 1) & rax_2);
                                    if (rdx != 0)
                                    {
                                        if (r14 > rbx)
                                        {
                                            r15[rbx] = 0x27;
                                        }
                                        if (r14 > (rbx + 1))
                                        {
                                            r15[(rbx + 1)] = 0x24;
                                        }
                                        if (r14 > (rbx + 2))
                                        {
                                            r15[(rbx + 2)] = 0x27;
                                        }
                                        rbx = (rbx + 3);
                                        r8 = rdx;
                                    }
                                    if (rbx < r14)
                                    {
                                        r15[rbx] = 0x5c;
                                    }
                                    rbx = (rbx + 1);
                                    goto label_401987;
                                }
                            label_40272f:
                                r10_2 = r11_1;
                                r11_3 = r10_1;
                                rax_2 = var_5b;
                                break;
                            }
                            case 0x5c:
                            {
                                var_a8 = 0;
                            label_401caa:
                                rbp_1 = (var_ac & var_5b);
                                r12_2 = 0x5c;
                                rcx_1 = 0x5c;
                                rax_2 = var_98 != 0;
                                rdx = (rbp_1 & rax_2);
                                if (rdx == 0)
                                {
                                    goto label_401cd0;
                                }
                                r13 = (r13 + 1);
                                rbp_1 = r8;
                                goto label_402058;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                var_a8 = 0;
                            label_401b81:
                                rax_2 = r11_1 != 1;
                                if (r11_1 == -1)
                                {
                                    rax_2 = *(arg3 + 1) != 0;
                                }
                                rdx = r10_1 == 2;
                                if (rax_2 != 0)
                                {
                                    goto label_401bc5;
                                }
                                goto label_401ba1;
                            }
                        }
                    }
                }
            }
        }
        if (var_ac == 0)
        {
            goto label_401f79;
        }
        if (rax_2 != 0)
        {
            r11_3 = 4;
        }
        goto label_401f79;
    }
    return rbx;
}

char* sub_402760(int32_t arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4)
{
    int64_t r15 = arg1;
    int32_t* rax = __errno_location();
    int64_t rbx = data_6061b8;
    int32_t rax_1 = *rax;
    if (r15 < 0)
    {
        abort();
        /* no return */
    }
    if (data_6061d0 <= r15)
    {
        uint64_t rdx = (r15 + 1);
        int32_t r12_1 = rdx;
        uint64_t rsi_1 = (rdx << 4);
        uint64_t rdx_1;
        if (rbx == 0x6061c0)
        {
            int64_t rax_9 = sub_403020(0, rsi_1);
            int128_t zmm0 = data_6061c0;
            rdx_1 = rdx;
            rbx = rax_9;
            data_6061b8 = rax_9;
            *rax_9 = zmm0;
        }
        else
        {
            int64_t rax_2 = sub_403020(rbx, rsi_1);
            rdx_1 = rdx;
            data_6061b8 = rax_2;
            rbx = rax_2;
        }
        uint64_t rdi_1 = data_6061d0;
        memset(((rdi_1 << 4) + rbx), 0, ((rdx_1 - rdi_1) << 4));
        data_6061d0 = r12_1;
    }
    int64_t rbx_1 = (rbx + (r15 << 4));
    void* r15_2 = &arg4[2];
    int32_t rax_4 = (arg4[1] | 1);
    int64_t r11 = *rbx_1;
    char* r12_2 = *(rbx_1 + 8);
    int64_t rax_5 = sub_401750(r12_2, r11, arg2, arg3, *arg4, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    if (r11 <= rax_5)
    {
        uint64_t rsi_3 = (rax_5 + 1);
        *rbx_1 = rsi_3;
        if (r12_2 != 0x606240)
        {
            free(r12_2);
        }
        char* rax_6 = sub_402fd0(rsi_3);
        int32_t r8_1 = *arg4;
        *(rbx_1 + 8) = rax_6;
        r12_2 = rax_6;
        sub_401750(rax_6, rsi_3, arg2, arg3, r8_1, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    }
    *rax = rax_1;
    return r12_2;
}

int64_t sub_402900(int64_t arg1)
{
    int64_t rbx = arg1;
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    if (rbx == 0)
    {
        rbx = 0x606340;
    }
    int64_t rax_1 = sub_403190(rbx, 0x38);
    *rax = r12;
    return rax_1;
}

uint64_t sub_402940(int32_t* arg1)
{
    if (arg1 == 0)
    {
        arg1 = &data_606340;
    }
    return *arg1;
}

void sub_402950(int32_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_606340;
    }
    *arg1 = arg2;
}

uint64_t sub_402960(int64_t arg1, uint8_t arg2, int32_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = 0x606340;
    }
    char rcx_1 = (arg2 & 0x1f);
    int32_t rsi = *((arg1 + ((arg2 >> 5) << 2)) + 8);
    uint32_t rax_3 = (rsi >> rcx_1);
    *((arg1 + ((arg2 >> 5) << 2)) + 8) = ((((arg3 ^ rax_3) & 1) << rcx_1) ^ rsi);
    return (rax_3 & 1);
}

uint64_t sub_4029a0(int128_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_606340;
    }
    uint64_t rax = *(arg1 + 4);
    *(arg1 + 4) = arg2;
    return rax;
}

void sub_4029c0(int32_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = &data_606340;
    }
    *arg1 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *(arg1 + 0x28) = arg2;
        *(arg1 + 0x30) = arg3;
        return;
    }
    int64_t var_8 = 0x606340;
    abort();
    /* no return */
}

int64_t sub_4029f0(char* arg1, int64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t* arg5)
{
    int32_t* rbx = arg5;
    if (arg5 == 0)
    {
        rbx = &data_606340;
    }
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    int64_t rax_2 = sub_401750(arg1, arg2, arg3, arg4, *rbx, rbx[1], &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = r12;
    return rax_2;
}

char* sub_402a70(uint64_t arg1, uint64_t arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* rbx = arg4;
    if (arg4 == 0)
    {
        rbx = &data_606340;
    }
    int32_t* rax = __errno_location();
    int32_t rax_1 = *rax;
    int32_t rbp;
    rbp = arg3 == 0;
    int32_t rbp_1 = (rbp | rbx[1]);
    int64_t rax_2 = sub_401750(nullptr, 0, arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    char* rax_3 = sub_402fd0((rax_2 + 1));
    sub_401750(rax_3, (rax_2 + 1), arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = rax_1;
    if (arg3 != 0)
    {
        *arg3 = rax_2;
    }
    return rax_3;
}

int64_t sub_402b60(uint64_t arg1, uint64_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_402a70(arg1, arg2, nullptr, arg3);
}

uint64_t sub_402b70()
{
    uint64_t rax_2 = data_6061d0;
    int64_t r12 = data_6061b8;
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
    if (rdi_2 != 0x606240)
    {
        rax_2 = free(rdi_2);
        *data_6061c0 = 0x100;
        *(data_6061c0 + 8) = 0x606240;
    }
    if (r12 != 0x6061c0)
    {
        rax_2 = free(r12);
        data_6061b8 = 0x6061c0;
    }
    data_6061d0 = 1;
    return rax_2;
}

int64_t sub_402c10(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_402760(arg1, arg2, -1, &data_606340);
}

int64_t sub_402c30(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_402760(arg1, arg2, arg3, &data_606340);
}

int64_t sub_402c40(uint64_t arg1)
{
    /* tailcall */
    return sub_402760(0, arg1, -1, &data_606340);
}

int64_t sub_402c60(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_402760(0, arg1, arg2, &data_606340);
}

char* sub_402c80(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_402760(arg1, arg3, -1, &var_48);
}

char* sub_402cf0(int32_t arg1, int32_t arg2, uint64_t arg3, uint64_t arg4)
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
    return sub_402760(arg1, arg3, arg4, &var_48);
}

int64_t sub_402d60(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_402c80(0, arg1, arg2);
}

int64_t sub_402d70(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_402cf0(0, arg1, arg2, arg3);
}

char* sub_402d80(uint64_t arg1, uint64_t arg2, uint8_t arg3)
{
    char rcx_1 = (arg3 & 0x1f);
    int64_t var_18 = data_606370;
    int128_t var_48 = data_606340;
    int128_t var_38 = data_606350;
    int128_t var_28 = data_606360;
    int32_t rdx = *((&var_48 + ((arg3 >> 5) << 2)) + 8);
    *((&var_48 + ((arg3 >> 5) << 2)) + 8) = ((((!(rdx >> rcx_1)) & 1) << rcx_1) ^ rdx);
    return sub_402760(0, arg1, arg2, &var_48);
}

int64_t sub_402df0(uint64_t arg1, uint8_t arg2)
{
    /* tailcall */
    return sub_402d80(arg1, -1, arg2);
}

int64_t sub_402e00(uint64_t arg1)
{
    /* tailcall */
    return sub_402d80(arg1, -1, 0x3a);
}

int64_t sub_402e20(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_402d80(arg1, arg2, 0x3a);
}

char* sub_402e30(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_402760(arg1, arg3, -1, &var_48);
}

char* sub_402ea0(int32_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, 
    uint64_t arg5)
{
    int128_t var_48 = data_606340;
    int128_t var_38 = data_606350;
    int128_t var_28 = data_606360;
    int64_t var_18 = data_606370;
    var_48 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *var_28[8] = arg2;
        int64_t var_18_1 = arg3;
        return sub_402760(arg1, arg4, arg5, &var_48);
    }
    abort();
    /* no return */
}

int64_t sub_402fd0(uint64_t arg1)
{
    int64_t rax = malloc(arg1);
    if ((rax == 0 && arg1 != 0))
    {
        sub_4031f0();
        /* no return */
    }
    return rax;
}

int64_t sub_403020(int64_t arg1, uint64_t arg2)
{
    if ((arg2 == 0 && arg1 != 0))
    {
        free(arg1);
        return 0;
    }
    int64_t rax = realloc(arg1, arg2);
    if ((rax == 0 && arg2 != 0))
    {
        sub_4031f0();
        /* no return */
    }
    return rax;
}

int64_t sub_403150(uint64_t arg1)
{
    /* tailcall */
    return memset(sub_402fd0(arg1), 0, arg1);
}

int64_t sub_403170(uint64_t arg1, uint64_t arg2)
{
    int64_t rax = calloc(arg1, arg2);
    if (rax == 0)
    {
        sub_4031f0();
        /* no return */
    }
    return rax;
}

int64_t sub_403190(int64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return memcpy(sub_402fd0(arg2), arg1, arg2);
}

int64_t sub_4031c0(char* arg1)
{
    uint64_t rbx = (strlen(arg1) + 1);
    /* tailcall */
    return memcpy(sub_402fd0(rbx), arg1, rbx);
}

noreturn int64_t sub_4031f0() 
{
    error(data_606170, 0, "%s", dcgettext(nullptr, "memory exhausted", 5));
    abort();
    /* no return */
}

int64_t sub_403230(wchar_t* arg1, char* arg2, uint64_t arg3, mbstate_t* arg4)
{
    if (arg2 == 0)
    {
        arg3 = 1;
        arg2 = &data_403a05;
        arg1 = nullptr;
    }
    else if (arg3 == 0)
    {
        return -2;
    }
    /* tailcall */
    return mbrtowc(arg1, arg2, arg3, arg4);
}

uint64_t sub_403260(FILE* arg1)
{
    uint64_t rax = __fpending(arg1);
    int32_t rax_1 = ferror(arg1);
    uint64_t rax_2 = fclose(arg1);
    if ((rax_1 != 0 && rax_2 == 0))
    {
        *__errno_location() = 0;
        rax_2 = 0xffffffff;
    }
    if (((rax_1 != 0 && rax_2 != 0) || ((rax_1 == 0 && rax_2 != 0) && rax != 0)))
    {
        rax_2 = 0xffffffff;
    }
    if (((rax_1 == 0 && rax_2 != 0) && rax == 0))
    {
        int32_t* rax_3;
        rax_3 = *__errno_location() != 9;
        rax_2 = (-rax_3);
    }
    return rax_2;
}

char* sub_4032d0()
{
    char* rax = nl_langinfo(0xe);
    char* r15 = data_606378;
    char* rbx = rax;
    if (rax == 0)
    {
        rbx = &data_403a05;
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
            rdi_7 = 0x74;
            r12_1 = 0x66;
            r14_1 = 0x65;
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
                    goto label_4033cc;
                }
                memcpy(rbp_3, r13_1, r14_1);
                goto label_403416;
            }
        }
        char* rax_9 = malloc(rdi_7);
        rbp_3 = rax_9;
        if (rax_9 == 0)
        {
        label_4033cc:
            r15 = &data_403a05;
        }
        else
        {
            memcpy(rbp_3, r13_1, r14_1);
            rbp_3[r14_1] = 0x2f;
        label_403416:;
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
                            label_4034cc:
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
                                    goto label_40365b;
                                }
                                int64_t* rcx_2 = &var_b8;
                            label_403508:;
                                int32_t rdx_5 = *rcx_2;
                                rcx_2 = (rcx_2 + 4);
                                uint32_t rax_20 = (((rdx_5 - 0x1010101) & (!rdx_5)) & 0x80808080);
                                if (rax_20 == 0)
                                {
                                    goto label_403508;
                                }
                                uint32_t rdx_8 = (rax_20 >> 0x10);
                                int32_t temp0_1 = (rax_20 & 0x8080);
                                bool cond2_1 = temp0_1 == 0;
                                if (temp0_1 == 0)
                                {
                                    rax_20 = rdx_8;
                                }
                                void* rdx_9 = (rcx_2 + 2);
                                if (cond2_1)
                                {
                                    rcx_2 = rdx_9;
                                }
                                char rdx_10 = rax_20;
                                int64_t* rdx_11 = &var_78;
                                void* rcx_4 = ((rcx_2 - 3) - &var_b8);
                            label_403542:;
                                int32_t rsi_5 = *rdx_11;
                                rdx_11 = (rdx_11 + 4);
                                uint32_t rax_23 = (((rsi_5 - 0x1010101) & (!rsi_5)) & 0x80808080);
                                if (rax_23 == 0)
                                {
                                    goto label_403542;
                                }
                                uint32_t rsi_8 = (rax_23 >> 0x10);
                                int32_t temp2_1 = (rax_23 & 0x8080);
                                bool cond3_1 = temp2_1 == 0;
                                if (temp2_1 == 0)
                                {
                                    rax_23 = rsi_8;
                                }
                                void* rsi_9 = (rdx_11 + 2);
                                if (cond3_1)
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
                                    r15 = &data_403a05;
                                    free(rdi_26);
                                    fclose(rax_12);
                                    goto label_403457;
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
                                    label_40371b:;
                                        uint64_t r8_1 = rsi_17;
                                        rsi_17 = (rsi_17 + 8);
                                        *(r9_5 + r8_1) = *(r10_2 + r8_1);
                                        if (rsi_17 < rcx_12)
                                        {
                                            goto label_40371b;
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
                                    label_403769:;
                                        uint64_t rsi_20 = rcx_14;
                                        rcx_14 = (rcx_14 + 8);
                                        *(rdi_24 + rsi_20) = *(r9_6 + rsi_20);
                                        if (rcx_14 < rdx_20)
                                        {
                                            goto label_403769;
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
                            goto label_4034cc;
                        }
                        break;
                    }
                label_40365b:
                    fclose(rax_12);
                    if (var_d0_1 != 0)
                    {
                        *(r15 + var_d0_1) = 0;
                    }
                }
            }
            if ((((rax_11 >= 0 && rax_12 == 0) || rax_11 < 0) || ((rax_11 >= 0 && rax_12 != 0) && var_d0_1 == 0)))
            {
                r15 = &data_403a05;
            }
        label_403457:
            free(rbp_3);
        }
        data_606378 = r15;
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



int64_t sub_4038b0(void (* arg1)(void*))
{
    int64_t rdx = data_606168;
    /* tailcall */
    return __cxa_atexit(arg1, nullptr, rdx);
}

int64_t sub_4038c8(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rbx = &data_605e30;
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

