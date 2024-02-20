#include "decompile_bn.h"
int64_t sub_4011e0()
{
    int64_t var_8 = data_608008;
    /* jump -> data_608010 */
}

int64_t sub_4011f6()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401206()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401216()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401226()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401236()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401246()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401256()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401266()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401276()
{
    int64_t var_8 = 8;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401286()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401296()
{
    int64_t var_8 = 0xa;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4012a6()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4012b6()
{
    int64_t var_8 = 0xc;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4012c6()
{
    int64_t var_8 = 0xd;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4012d6()
{
    int64_t var_8 = 0xe;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4012e6()
{
    int64_t var_8 = 0xf;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4012f6()
{
    int64_t var_8 = 0x10;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401306()
{
    int64_t var_8 = 0x11;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401316()
{
    int64_t var_8 = 0x12;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401326()
{
    int64_t var_8 = 0x13;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401336()
{
    int64_t var_8 = 0x14;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401346()
{
    int64_t var_8 = 0x15;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401356()
{
    int64_t var_8 = 0x16;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401366()
{
    int64_t var_8 = 0x17;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401376()
{
    int64_t var_8 = 0x18;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401386()
{
    int64_t var_8 = 0x19;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_401396()
{
    int64_t var_8 = 0x1a;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4013a6()
{
    int64_t var_8 = 0x1b;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4013b6()
{
    int64_t var_8 = 0x1c;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4013c6()
{
    int64_t var_8 = 0x1d;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4013d6()
{
    int64_t var_8 = 0x1e;
    /* tailcall */
    return sub_4011e0();
}

int64_t sub_4013e6()
{
    int64_t var_8 = 0x1f;
    /* tailcall */
    return sub_4011e0();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    char* rdi = *argv;
    if (rdi == 0)
    {
        rdi = "frcode";
    }
    sub_401cb0(rdi);
    if (sub_405810(sub_401c10) != 0)
    {
        error(1, *__errno_location(), dcgettext(nullptr, "The atexit library function fail…", 5));
    }
    int64_t r14 = 0;
    int32_t r15 = 0;
    int32_t r12 = 0xa;
    uint64_t var_48 = 0x402;
    char* var_50 = sub_403c70(0x402);
    char* rax_2 = sub_403c70(0x402);
    *rax_2 = 0;
    char* rbp_1 = rax_2;
    int32_t rax_4;
    while (true)
    {
        int32_t rax_3;
        int32_t rdi_2;
        rax_3 = getopt_long(argc, argv, "hv0S:", &data_405a60, nullptr);
        if (rax_3 != 0xffffffff)
        {
            bool cond0_1 = rax_3 <= 0x53;
            if (rax_3 == 0x53)
            {
                int64_t rax_8 = data_608400;
                int32_t* rax_9 = __errno_location();
                *rax_9 = 0;
                char* var_40;
                int64_t rax_10 = strtol(rax_8, &var_40, 0xa);
                r14 = rax_10;
                char* r8_1;
                if (rax_10 == 0)
                {
                    r8_1 = var_40;
                    if (r8_1 == data_608400)
                    {
                        error(1, 0, dcgettext(nullptr, "You need to specify a security l…", 5));
                    label_401711:
                        r14 = -1;
                    label_40169c:
                        error(1, 0, dcgettext(nullptr, "slocate security level %ld is un…", 5), r14);
                    }
                    else if (*r8_1 != 0)
                    {
                    label_40170c:
                        error(1, 0, dcgettext(nullptr, "Security level %s has unexpected…", 5), rax_8, r8_1);
                        goto label_401711;
                    }
                }
                else
                {
                    if ((0x7fffffffffffffff + r14) > -3)
                    {
                        if (*rax_9 != 0)
                        {
                            error(1, 0, dcgettext(nullptr, "Security level %s is outside the…", 5), rax_8);
                            goto label_401711;
                        }
                        r8_1 = var_40;
                        if (*r8_1 == 0)
                        {
                            goto label_40169c;
                        }
                        goto label_40170c;
                    }
                    r8_1 = var_40;
                    if (*r8_1 != 0)
                    {
                        goto label_40170c;
                    }
                    if (r14 != 1)
                    {
                        goto label_40169c;
                    }
                }
                r15 = 1;
                continue;
            }
            else if (cond0_1)
            {
                r12 = 0;
                if (rax_3 == 0x30)
                {
                    continue;
                }
            }
            else
            {
                if (rax_3 == 0x68)
                {
                    sub_401b10(stdout);
                    rax_4 = 0;
                    break;
                }
                if (rax_3 == 0x76)
                {
                    sub_401b70("frcode");
                    rax_4 = 0;
                    break;
                }
            }
        }
        else if (data_60821c == argc)
        {
            uint64_t* const rsi_3 = stdout;
            if (r15 != 0)
            {
                fputc(((rdi_2 - rdi_2) + 0x31), rsi_3);
                fputc(0, stdout);
            }
            else if (fwrite(&data_405a40, 1, 0xa, stdout) != 0xa)
            {
                error(1, *__errno_location(), dcgettext(nullptr, "Failed to write to standard outp…", 5));
            }
            uint64_t var_68_2 = 0x402;
            int32_t r13_1 = 0;
            while (true)
            {
                int32_t rax_16 = getdelim(&var_50, &var_48, r12, stdin);
                if (rax_16 <= 0)
                {
                    break;
                }
                var_50[(rax_16 - 1)] = 0;
                char* rsi_6 = var_50;
                char rdx_5 = *rbp_1;
                char* rax_18 = rsi_6;
                char* rdi_9;
                if ((*rsi_6 != rdx_5 || (*rsi_6 == rdx_5 && rdx_5 == 0)))
                {
                    rdi_9 = rbp_1;
                }
                if ((*rsi_6 == rdx_5 && rdx_5 != 0))
                {
                    void* rcx_4 = &rbp_1[0x7ffffffe];
                    rdi_9 = rbp_1;
                    do
                    {
                        rdi_9 = &rdi_9[1];
                        rax_18 = &rax_18[1];
                        char rdx_6 = *rdi_9;
                        if (*rax_18 != rdx_6)
                        {
                            break;
                        }
                        if (rdx_6 == 0)
                        {
                            break;
                        }
                    } while (rdi_9 != rcx_4);
                }
                int32_t rdi_10 = (rdi_9 - rbp_1);
                int32_t r14_2 = rdi_10;
                int32_t rbx_2 = (rdi_10 - r13_1);
                if ((rbx_2 + 0x8000) > 0xffff)
                {
                    r14_2 = 0;
                    rbx_2 = (-r13_1);
                }
                if (r15 == 0)
                {
                    uint64_t* const rsi_7 = stdout;
                    if ((rbx_2 + 0x7f) > 0xfe)
                    {
                        if (_IO_putc(0x80, rsi_7) == 0xffffffff)
                        {
                            sub_401ae0();
                        }
                        if (rbx_2 > 0x7fff)
                        {
                            __assert_fail("c <= SHRT_MAX", "frcode.c", 0x7b, "put_short");
                            /* no return */
                        }
                        if (rbx_2 < 0xffff8000)
                        {
                            __assert_fail("c >= SHRT_MIN", "frcode.c", 0x7c, "put_short");
                            /* no return */
                        }
                        if (_IO_putc((rbx_2 >> 8), stdout) == 0xffffffff)
                        {
                            goto label_4018c9;
                        }
                        if (_IO_putc(rbx_2, stdout) != 0xffffffff)
                        {
                            goto label_40185d;
                        }
                        goto label_4018c9;
                    }
                    if (_IO_putc(rbx_2, rsi_7) != 0xffffffff)
                    {
                    label_40185d:
                        rsi_6 = var_50;
                    }
                    else
                    {
                    label_4018c9:
                        sub_401ae0();
                        rsi_6 = var_50;
                    }
                }
                int32_t rax_27 = fputs(&rsi_6[r14_2], stdout);
                int32_t rax_29;
                if (rax_27 != 0xffffffff)
                {
                    rax_29 = _IO_putc(0, stdout);
                }
                if ((rax_27 == 0xffffffff || (rax_27 != 0xffffffff && rax_29 == 0xffffffff)))
                {
                    sub_401ae0();
                }
                r15 = 0;
                r13_1 = r14_2;
                uint64_t rcx_5 = var_68_2;
                var_50 = rbp_1;
                var_68_2 = var_48;
                rbp_1 = var_50;
                var_48 = rcx_5;
            }
            free(var_50);
            free(rbp_1);
            rax_4 = 0;
            break;
        }
        sub_401b10(stderr);
        rax_4 = 1;
        break;
    }
    return rax_4;
}


void sub_401a2b()
{
    return;
}

int64_t sub_401a4a()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    return (COMBINE(rdx, rax) / 2);
}

void sub_401a81()
{
    if (data_608248 != 0)
    {
        return;
    }
    while (true)
    {
        int64_t rax_1 = data_608250;
        if (rax_1 >= 0)
        {
            break;
        }
        data_608250 = (rax_1 + 1);
        *(0x607e40 + ((rax_1 + 1) << 3))();
    }
    sub_401a2b();
    data_608248 = 1;
}

int64_t j_sub_401a4a()
{
    /* tailcall */
    return sub_401a4a();
}

int64_t sub_401ae0()
{
    /* tailcall */
    return error(1, *__errno_location(), dcgettext(nullptr, "write error", 5));
}

int64_t sub_401b10(FILE* arg1)
{
    fprintf(arg1, dcgettext(nullptr, "Usage: %s [-0 | --null] [--versi…", 5), data_608268);
    /* tailcall */
    return fputs(dcgettext(nullptr, "nReport bugs to <bug-findutils@…", 5), arg1);
}

char* sub_401b70(int64_t arg1)
{
    sub_403ed0(stderr);
    char* rax = dcgettext(nullptr, "Kevin Dalley", 5);
    dcgettext(nullptr, "James Youngman", 5);
    dcgettext(nullptr, "Eric B. Decker", 5);
    sub_403b40(stdout, arg1, "GNU findutils", data_6081b0);
    return rax;
}

int64_t sub_401bf0(int64_t arg1)
{
    data_608260 = arg1;
}

int64_t sub_401c00(char arg1)
{
    data_608258 = arg1;
}

void sub_401c10(void* arg1)
{
    int32_t rax = sub_4051c0(stdout);
    int32_t* rax_1;
    if (rax != 0)
    {
        rax_1 = __errno_location();
        if ((data_608258 == 0 || (data_608258 != 0 && *rax_1 != 0x20)))
        {
            char* rax_3 = dcgettext(nullptr, "write error", 5);
            int64_t rdi_2 = data_608260;
            if (rdi_2 == 0)
            {
                error(0, *rax_1, "%s", rax_3);
            }
            else
            {
                error(0, *rax_1, "%s: %s", sub_403500(rdi_2), rax_3);
            }
        }
    }
    if (((rax == 0 || ((rax != 0 && data_608258 != 0) && *rax_1 == 0x20)) && sub_4051c0(stderr) == 0))
    {
        return;
    }
    _exit(data_6081b8);
    /* no return */
}

char* sub_401cb0(char* arg1)
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
                void* const rdi_1 = &data_405b68;
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
    data_608268 = rbx;
    __progname_full = rbx;
    return rax;
}

char* sub_401d50(char* arg1, int32_t arg2)
{
    char* rax = dcgettext(nullptr, arg1, 5);
    char* rbx = rax;
    if (arg1 == rax)
    {
        char* rax_2 = sub_405230();
        char rdx_2 = (*rax_2 & 0xdf);
        if (rdx_2 != 0x55)
        {
            if (rdx_2 != 0x47)
            {
            label_401e31:;
                void* const rbx_1 = &data_405b6c;
                if (arg2 != 9)
                {
                    rbx_1 = "'";
                }
                return rbx_1;
            }
            if ((rax_2[1] & 0xdf) != 0x42)
            {
                goto label_401e31;
            }
            if (rax_2[2] != 0x31)
            {
                goto label_401e31;
            }
            if (rax_2[3] != 0x38)
            {
                goto label_401e31;
            }
            if (rax_2[4] != 0x30)
            {
                goto label_401e31;
            }
            if (rax_2[5] != 0x33)
            {
                goto label_401e31;
            }
            if (rax_2[6] != 0x30)
            {
                goto label_401e31;
            }
            if (rax_2[7] != 0)
            {
                goto label_401e31;
            }
            bool cond2_1 = *rbx != 0x60;
            rbx = &data_405b75;
            if (cond2_1)
            {
                rbx = &data_405b72;
            }
        }
        else
        {
            if ((rax_2[1] & 0xdf) != 0x54)
            {
                goto label_401e31;
            }
            if ((rax_2[2] & 0xdf) != 0x46)
            {
                goto label_401e31;
            }
            if (rax_2[3] != 0x2d)
            {
                goto label_401e31;
            }
            if (rax_2[4] != 0x38)
            {
                goto label_401e31;
            }
            if (rax_2[5] != 0)
            {
                goto label_401e31;
            }
            bool cond1_1 = *rbx != 0x60;
            rbx = &data_405b79;
            if (cond1_1)
            {
                rbx = &data_405b6e;
            }
        }
    }
    return rbx;
}

int64_t sub_401e50(char* arg1, int64_t arg2, uint64_t arg3, uint64_t arg4, 
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
    char const* const var_70;
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
            var_70 = "'";
            break;
        }
        case 6:
        {
            var_5b = true;
            rbx = 0;
            r11 = 5;
            var_ac = 1;
            var_98 = 1;
            var_70 = &data_405b6c;
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
            var_70 = "'";
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
        var_70 = "'";
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
        var_70 = "'";
    }
    if (r11 == 5)
    {
        if (rbp_1 != 0)
        {
            var_5b = true;
            rbx = 0;
            var_ac = 1;
            var_98 = 1;
            var_70 = &data_405b6c;
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
            var_70 = &data_405b6c;
        }
    }
    if (((r11 == 8 || r11 == 9) || r11 == 0xa))
    {
        if ((!cond0))
        {
            arg8 = sub_401d50(&data_405b7d, r11);
            arg9 = sub_401d50("'", r11);
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
                    char const rdx_10 = *var_70;
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
                    goto label_40257d;
                }
                switch (r12_2)
                {
                    case 0:
                    {
                        if (var_ac != 0)
                        {
                        label_402498:
                            if (var_5b == 0)
                            {
                                var_a8 = 0;
                            label_4024af:
                                rdx = r10_1 == 2;
                                rax_2 = ((r8 ^ 1) & rdx);
                                int64_t rcx_4;
                                if (rax_2 == 0)
                                {
                                    rcx_4 = rbx;
                                    if (rbx < r14)
                                    {
                                        goto label_4024f5;
                                    }
                                    goto label_4024fa;
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
                                    goto label_402377;
                                }
                                r8 = rax_2;
                            label_4024f5:
                                r15[rcx_4] = 0x5c;
                            label_4024fa:
                                rbx = (rcx_4 + 1);
                                rax_2 = (r13 + 1);
                                if (r10_1 == 2)
                                {
                                    r13 = rax_2;
                                    r12_2 = 0x30;
                                label_402377:
                                    if (var_a8 != 0)
                                    {
                                        goto label_4022e3;
                                    }
                                    goto label_402087;
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
                            label_40252b:
                                if (var_ac == 0)
                                {
                                    goto label_4022d0;
                                }
                                if (rdx != 0)
                                {
                                    goto label_4022d0;
                                }
                                if (arg7 == 0)
                                {
                                    goto label_402554;
                                }
                                goto label_402022;
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
                                label_402022:
                                    if (((*(arg7 + ((r12_2 >> 5) << 2)) >> r12_2) & 1) == 0)
                                    {
                                        goto label_402554;
                                    }
                                    rax_2 = r10_1 == 2;
                                    goto label_402031;
                                }
                                r12_2 = 0;
                            label_402565:
                                r13 = (r13 + 1);
                                rbp_1 = ((rbp_1 ^ 1) & r8);
                                goto label_402758;
                            }
                            r13 = (r13 + 1);
                            rbp_1 = r8;
                            r12_2 = 0;
                        label_402758:
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
                                goto label_402087;
                            }
                        label_402087:
                            if (rbx >= r14)
                            {
                                goto label_402090;
                            }
                            r15[rbx] = r12_2;
                        label_402090:
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
                        goto label_40257d;
                    }
                    case 7:
                    {
                        r12_2 = 7;
                        rcx_1 = 0x61;
                        rdx = r10_1 == 2;
                    label_4023d0:
                        if (var_ac == 0)
                        {
                            goto label_4022c5;
                        }
                        rax_2 = rdx;
                        r12_2 = rcx_1;
                    label_402031:
                        if (var_5b == 0)
                        {
                        label_40203c:
                            r13 = (r13 + 1);
                            goto label_402046;
                        }
                    label_4023fe:
                        r10_2 = r11_1;
                        r11_3 = r10_1;
                        break;
                    }
                    case 8:
                    {
                        r12_2 = 8;
                        rcx_1 = 0x62;
                        rdx = r10_1 == 2;
                        goto label_4023d0;
                    }
                    case 9:
                    {
                        r12_2 = 9;
                        rcx_1 = 0x74;
                        goto label_40260c;
                    }
                    case 0xa:
                    {
                        r12_2 = 0xa;
                        rcx_1 = 0x6e;
                    label_40260c:
                        rdx = r10_1 == 2;
                        rax_2 = (var_5b & rdx);
                        var_a8 = rax_2;
                        if (rax_2 == 0)
                        {
                            goto label_4023d0;
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
                        goto label_4023d0;
                    }
                    case 0xc:
                    {
                        r12_2 = 0xc;
                        rcx_1 = 0x66;
                        rdx = r10_1 == 2;
                        goto label_4023d0;
                    }
                    case 0xd:
                    {
                        r12_2 = 0xd;
                        rcx_1 = 0x72;
                        goto label_40260c;
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
                    label_4022ab:
                        rax_2 = (var_5b & rdx);
                        if (rax_2 == 0)
                        {
                            goto label_4022c5;
                        }
                    label_402aeb:
                        r10_2 = r11_1;
                        r11_3 = r10_1;
                        break;
                    }
                    case 0x23:
                    case 0x7e:
                    {
                        rdx = r10_1 == 2;
                    label_4022a1:
                        if (r13 != 0)
                        {
                            goto label_4022c5;
                        }
                        goto label_4022ab;
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
                    label_4025d4:
                        rdx = r10_1 == 2;
                    label_4022c5:
                        rbp_1 = ((((var_ac ^ 1) | rdx) ^ 1) | var_5b);
                        if (rbp_1 == 0)
                        {
                            goto label_4022d0;
                        }
                        goto label_401ff8;
                    }
                    case 0x27:
                    {
                        goto label_402325;
                    }
                    case 0x3f:
                    {
                        goto label_4022f5;
                    }
                    case 0x5c:
                    {
                        if (r10_1 != 2)
                        {
                            goto label_4023aa;
                        }
                        if (var_5b != 0)
                        {
                            goto label_402e2f;
                        }
                        r13 = (r13 + 1);
                        rbp_1 = r8;
                        r12_2 = 0x5c;
                        goto label_402758;
                    }
                    case 0x7b:
                    case 0x7d:
                    {
                        goto label_402281;
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
                        goto label_402800;
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
                        goto label_402800;
                    }
                    if (var_5b != 0)
                    {
                    label_402e21:
                        r10_2 = r11_1;
                        r11_3 = r10_1;
                    label_402679:
                        rbx = sub_401e50(r15, r14, arg3, r10_2, r11_3, (arg6 & 0xfffffffd), 0, arg8, arg9);
                        break;
                    }
                    r12_2 = *r9;
                    if (r12_2 > 0x7e)
                    {
                        goto label_40257d;
                    }
                    switch (r12_2)
                    {
                        case 0:
                        {
                            goto label_4024af;
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
                            goto label_40257d;
                        }
                        case 7:
                        {
                            goto label_402420;
                        }
                        case 8:
                        {
                            goto label_402410;
                        }
                        case 9:
                        {
                            goto label_402488;
                        }
                        case 0xa:
                        {
                            goto label_4023e8;
                        }
                        case 0xb:
                        {
                            goto label_402478;
                        }
                        case 0xc:
                        {
                            goto label_402468;
                        }
                        case 0xd:
                        {
                            goto label_402439;
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
                            goto label_402395;
                        }
                        case 0x23:
                        case 0x7e:
                        {
                            goto label_402455;
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
                            goto label_401ff8;
                        }
                        case 0x27:
                        {
                            goto label_402325;
                        }
                        case 0x3f:
                        {
                            goto label_4022f5;
                        }
                        case 0x5c:
                        {
                            goto label_4023aa;
                        }
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_402281;
                        }
                    }
                }
                else
                {
                label_402800:
                    r12_2 = *r9;
                    if (r12_2 > 0x7e)
                    {
                    label_402578:
                        var_a8 = 0;
                    label_40257d:;
                        uint64_t rcx_5;
                        if (rax == 1)
                        {
                            var_90 = r8;
                            r8 = var_90;
                            rcx_5 = 1;
                            uint32_t rdx_5;
                            rdx_5 = (*(*__ctype_b_loc() + (r12_2 << 1)) >> 0xe);
                            rdx = ((rdx_5 ^ 1) & var_ac);
                        label_4025c8:
                            if (rdx == 0)
                            {
                                goto label_4025d4;
                            }
                            rdx = var_ac;
                        label_402b1e:;
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
                                goto label_402758;
                            }
                            if ((rdx != 0 && var_5b != 0))
                            {
                                goto label_402aeb;
                            }
                            goto label_402087;
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
                            rax_2 = sub_405190(&var_44, r12_3, (var_90 - r14_1), &var_40);
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
                                goto label_402b1e;
                            }
                            goto label_4025c8;
                        }
                    }
                    else
                    {
                        switch (r12_2)
                        {
                            case 0:
                            {
                                goto label_402498;
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
                                goto label_402578;
                            }
                            case 7:
                            {
                            label_402420:
                                r12_2 = 0x61;
                                rax_2 = 0;
                                goto label_4023f0;
                            }
                            case 8:
                            {
                            label_402410:
                                r12_2 = 0x62;
                                rax_2 = 0;
                                goto label_4023f0;
                            }
                            case 9:
                            {
                            label_402488:
                                r12_2 = 0x74;
                                rax_2 = 0;
                                goto label_4023f0;
                            }
                            case 0xa:
                            {
                            label_4023e8:
                                r12_2 = 0x6e;
                                rax_2 = 0;
                            label_4023f0:
                                if (var_5b != 0)
                                {
                                    goto label_4023fe;
                                }
                                goto label_40203c;
                            }
                            case 0xb:
                            {
                            label_402478:
                                r12_2 = 0x76;
                                rax_2 = 0;
                                goto label_4023f0;
                            }
                            case 0xc:
                            {
                            label_402468:
                                r12_2 = 0x66;
                                rax_2 = 0;
                                goto label_4023f0;
                            }
                            case 0xd:
                            {
                                var_a8 = 0;
                            label_402439:
                                r12_2 = 0xd;
                                rcx_1 = 0x72;
                                rdx = r10_1 == 2;
                                goto label_4023d0;
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
                            label_402395:
                                rdx = 0;
                                goto label_4022c5;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                var_a8 = 0;
                            label_402455:
                                if (r13 != 0)
                                {
                                    goto label_401ff8;
                                }
                                rdx = 0;
                                goto label_4022c5;
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
                            label_401ff8:
                                rbp_1 = 0;
                                if (arg7 != 0)
                                {
                                    goto label_402022;
                                }
                            label_402554:
                                rax_2 = r10_1 == 2;
                                if (var_a8 == 0)
                                {
                                    goto label_402565;
                                }
                                goto label_402031;
                            }
                            case 0x27:
                            {
                                var_a8 = 0;
                            label_402325:
                                rdx = 0;
                                r12_2 = 0x27;
                                if (r10_1 != 2)
                                {
                                    goto label_4022c5;
                                }
                                if (var_5b != 0)
                                {
                                    goto label_402e2f;
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
                                goto label_402377;
                            }
                            case 0x3f:
                            {
                                var_a8 = 0;
                            label_4022f5:
                                if (r10_1 != 2)
                                {
                                    if (r10_1 != 5)
                                    {
                                        r12_2 = 0x3f;
                                        rdx = r10_1 == 2;
                                        goto label_4022c5;
                                    }
                                    if ((arg6 & 4) == 0)
                                    {
                                        rdx = 0;
                                        r12_2 = 0x3f;
                                        goto label_4022c5;
                                    }
                                    rax_2 = (r13 + 2);
                                    rdx = 0;
                                    r12_2 = 0x3f;
                                    if (rax_2 >= r11_1)
                                    {
                                        goto label_4022c5;
                                    }
                                    if (*((arg3 + r13) + 1) != 0x3f)
                                    {
                                        goto label_4022c5;
                                    }
                                    r12_2 = *(arg3 + rax_2);
                                    if (r12_2 > 0x3e)
                                    {
                                    label_402e13:
                                        r12_2 = 0x3f;
                                        goto label_4022c5;
                                    }
                                    if ((!(TEST_BITQ(0x7000a38200000000, r12_2))))
                                    {
                                        goto label_402e13;
                                    }
                                    if (var_5b != 0)
                                    {
                                        goto label_402e21;
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
                                    goto label_40252b;
                                }
                                if (var_5b == 0)
                                {
                                    rbp_1 = 0;
                                    r12_2 = 0x3f;
                                label_4022d0:
                                    r13 = (r13 + 1);
                                    if (var_a8 == 0)
                                    {
                                        rbp_1 = ((rbp_1 ^ 1) & r8);
                                        goto label_402758;
                                    }
                                label_4022e3:
                                    rax_2 = r10_1 == 2;
                                label_402046:
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
                                    goto label_402087;
                                }
                            label_402e2f:
                                r10_2 = r11_1;
                                r11_3 = r10_1;
                                rax_2 = var_5b;
                                break;
                            }
                            case 0x5c:
                            {
                                var_a8 = 0;
                            label_4023aa:
                                rbp_1 = (var_ac & var_5b);
                                r12_2 = 0x5c;
                                rcx_1 = 0x5c;
                                rax_2 = var_98 != 0;
                                rdx = (rbp_1 & rax_2);
                                if (rdx == 0)
                                {
                                    goto label_4023d0;
                                }
                                r13 = (r13 + 1);
                                rbp_1 = r8;
                                goto label_402758;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                var_a8 = 0;
                            label_402281:
                                rax_2 = r11_1 != 1;
                                if (r11_1 == -1)
                                {
                                    rax_2 = *(arg3 + 1) != 0;
                                }
                                rdx = r10_1 == 2;
                                if (rax_2 != 0)
                                {
                                    goto label_4022c5;
                                }
                                goto label_4022a1;
                            }
                        }
                    }
                }
            }
        }
        if (var_ac == 0)
        {
            goto label_402679;
        }
        if (rax_2 != 0)
        {
            r11_3 = 4;
        }
        goto label_402679;
    }
    return rbx;
}

char* sub_402e60(int32_t arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4)
{
    int64_t r15 = arg1;
    int32_t* rax = __errno_location();
    int64_t rbx = data_6081f8;
    int32_t rax_1 = *rax;
    if (r15 < 0)
    {
        abort();
        /* no return */
    }
    if (data_608210 <= r15)
    {
        uint64_t rdx = (r15 + 1);
        int32_t r12_1 = rdx;
        uint64_t rsi_1 = (rdx << 4);
        uint64_t rdx_1;
        if (rbx == 0x608200)
        {
            int64_t rax_9 = sub_403cc0(0, rsi_1);
            int128_t zmm0 = data_608200;
            rdx_1 = rdx;
            rbx = rax_9;
            data_6081f8 = rax_9;
            *rax_9 = zmm0;
        }
        else
        {
            int64_t rax_2 = sub_403cc0(rbx, rsi_1);
            rdx_1 = rdx;
            data_6081f8 = rax_2;
            rbx = rax_2;
        }
        uint64_t rdi_1 = data_608210;
        memset(((rdi_1 << 4) + rbx), 0, ((rdx_1 - rdi_1) << 4));
        data_608210 = r12_1;
    }
    int64_t rbx_1 = (rbx + (r15 << 4));
    void* r15_2 = &arg4[2];
    int32_t rax_4 = (arg4[1] | 1);
    int64_t r11 = *rbx_1;
    char* r12_2 = *(rbx_1 + 8);
    int64_t rax_5 = sub_401e50(r12_2, r11, arg2, arg3, *arg4, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    if (r11 <= rax_5)
    {
        uint64_t rsi_3 = (rax_5 + 1);
        *rbx_1 = rsi_3;
        if (r12_2 != 0x608280)
        {
            free(r12_2);
        }
        char* rax_6 = sub_403c70(rsi_3);
        int32_t r8_1 = *arg4;
        *(rbx_1 + 8) = rax_6;
        r12_2 = rax_6;
        sub_401e50(rax_6, rsi_3, arg2, arg3, r8_1, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    }
    *rax = rax_1;
    return r12_2;
}

int64_t sub_403000(int64_t arg1)
{
    int64_t rbx = arg1;
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    if (rbx == 0)
    {
        rbx = 0x608380;
    }
    int64_t rax_1 = sub_403e30(rbx, 0x38);
    *rax = r12;
    return rax_1;
}

uint64_t sub_403040(int32_t* arg1)
{
    if (arg1 == 0)
    {
        arg1 = &data_608380;
    }
    return *arg1;
}

void sub_403050(int32_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_608380;
    }
    *arg1 = arg2;
}

uint64_t sub_403060(int64_t arg1, uint8_t arg2, int32_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = 0x608380;
    }
    char rcx_1 = (arg2 & 0x1f);
    int32_t rsi = *((arg1 + ((arg2 >> 5) << 2)) + 8);
    uint32_t rax_3 = (rsi >> rcx_1);
    *((arg1 + ((arg2 >> 5) << 2)) + 8) = ((((arg3 ^ rax_3) & 1) << rcx_1) ^ rsi);
    return (rax_3 & 1);
}

uint64_t sub_4030a0(int128_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_608380;
    }
    uint64_t rax = *(arg1 + 4);
    *(arg1 + 4) = arg2;
    return rax;
}

void sub_4030c0(int32_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = &data_608380;
    }
    *arg1 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *(arg1 + 0x28) = arg2;
        *(arg1 + 0x30) = arg3;
        return;
    }
    int64_t var_8 = 0x608380;
    abort();
    /* no return */
}

int64_t sub_4030f0(char* arg1, int64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t* arg5)
{
    int32_t* rbx = arg5;
    if (arg5 == 0)
    {
        rbx = &data_608380;
    }
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    int64_t rax_2 = sub_401e50(arg1, arg2, arg3, arg4, *rbx, rbx[1], &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = r12;
    return rax_2;
}

char* sub_403170(uint64_t arg1, uint64_t arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* rbx = arg4;
    if (arg4 == 0)
    {
        rbx = &data_608380;
    }
    int32_t* rax = __errno_location();
    int32_t rax_1 = *rax;
    int32_t rbp;
    rbp = arg3 == 0;
    int32_t rbp_1 = (rbp | rbx[1]);
    int64_t rax_2 = sub_401e50(nullptr, 0, arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    char* rax_3 = sub_403c70((rax_2 + 1));
    sub_401e50(rax_3, (rax_2 + 1), arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = rax_1;
    if (arg3 != 0)
    {
        *arg3 = rax_2;
    }
    return rax_3;
}

int64_t sub_403260(uint64_t arg1, uint64_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_403170(arg1, arg2, nullptr, arg3);
}

uint64_t sub_403270()
{
    uint64_t rax_2 = data_608210;
    int64_t r12 = data_6081f8;
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
    if (rdi_2 != 0x608280)
    {
        rax_2 = free(rdi_2);
        *data_608200 = 0x100;
        *(data_608200 + 8) = 0x608280;
    }
    if (r12 != 0x608200)
    {
        rax_2 = free(r12);
        data_6081f8 = 0x608200;
    }
    data_608210 = 1;
    return rax_2;
}

int64_t sub_403310(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_402e60(arg1, arg2, -1, &data_608380);
}

int64_t sub_403330(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_402e60(arg1, arg2, arg3, &data_608380);
}

int64_t sub_403340(uint64_t arg1)
{
    /* tailcall */
    return sub_402e60(0, arg1, -1, &data_608380);
}

int64_t sub_403360(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_402e60(0, arg1, arg2, &data_608380);
}

char* sub_403380(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_402e60(arg1, arg3, -1, &var_48);
}

char* sub_4033f0(int32_t arg1, int32_t arg2, uint64_t arg3, uint64_t arg4)
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
    return sub_402e60(arg1, arg3, arg4, &var_48);
}

int64_t sub_403460(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403380(0, arg1, arg2);
}

int64_t sub_403470(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_4033f0(0, arg1, arg2, arg3);
}

char* sub_403480(uint64_t arg1, uint64_t arg2, uint8_t arg3)
{
    char rcx_1 = (arg3 & 0x1f);
    int64_t var_18 = data_6083b0;
    int128_t var_48 = data_608380;
    int128_t var_38 = data_608390;
    int128_t var_28 = data_6083a0;
    int32_t rdx = *((&var_48 + ((arg3 >> 5) << 2)) + 8);
    *((&var_48 + ((arg3 >> 5) << 2)) + 8) = ((((!(rdx >> rcx_1)) & 1) << rcx_1) ^ rdx);
    return sub_402e60(0, arg1, arg2, &var_48);
}

int64_t sub_4034f0(uint64_t arg1, uint8_t arg2)
{
    /* tailcall */
    return sub_403480(arg1, -1, arg2);
}

int64_t sub_403500(uint64_t arg1)
{
    /* tailcall */
    return sub_403480(arg1, -1, 0x3a);
}

int64_t sub_403520(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403480(arg1, arg2, 0x3a);
}

char* sub_403530(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_402e60(arg1, arg3, -1, &var_48);
}

char* sub_4035a0(int32_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, 
    uint64_t arg5)
{
    int128_t var_48 = data_608380;
    int128_t var_38 = data_608390;
    int128_t var_28 = data_6083a0;
    int64_t var_18 = data_6083b0;
    var_48 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *var_28[8] = arg2;
        int64_t var_18_1 = arg3;
        return sub_402e60(arg1, arg4, arg5, &var_48);
    }
    abort();
    /* no return */
}

int64_t sub_4036d0(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
    int64_t* arg5, int64_t arg6)
{
    if (arg2 == 0)
    {
        fprintf();
    }
    else
    {
        fprintf();
    }
    fprintf(arg1, "Copyright %s %d Free Software Fo…", dcgettext(nullptr, &data_4068cb, 5), 0x7df);
    fputs(dcgettext(nullptr, "nLicense GPLv3+: GNU GPL versio…", 5), arg1);
    int64_t var_58_2;
    int64_t var_50_1;
    int64_t var_48_1;
    int64_t var_40;
    int64_t rbx_2;
    char* rsi_2;
    int64_t r12_2;
    int64_t r13_1;
    int64_t r14_1;
    int64_t r15_1;
    if (arg6 > 9)
    {
        rsi_2 = "Written by %s, %s, %s,n%s, %s, …";
        r14_1 = arg5[7];
        r13_1 = arg5[6];
        var_40 = arg5[8];
        r12_2 = arg5[5];
        r15_1 = arg5[4];
        var_48_1 = arg5[3];
        var_50_1 = arg5[2];
        rbx_2 = *arg5;
        var_58_2 = arg5[1];
    }
    else
    {
        int64_t var_78;
        int64_t var_70;
        int64_t var_68;
        int64_t var_68_2;
        int64_t var_60;
        int64_t var_58;
        int64_t var_58_1;
        int64_t var_50;
        int64_t var_48;
        char* rax_5;
        char* rax_23;
        int64_t rcx_11;
        int64_t rbx_1;
        int64_t rbx_7;
        int64_t r8_10;
        int64_t r9_1;
        int64_t r9_9;
        switch (arg6)
        {
            case 0:
            {
                abort();
                /* no return */
            }
            case 1:
            {
                /* tailcall */
                return fprintf(arg1, dcgettext(nullptr, "Written by %s.n", 5), *arg5);
                break;
            }
            case 2:
            {
                /* tailcall */
                return fprintf(arg1, dcgettext(nullptr, "Written by %s and %s.n", 5), *arg5, arg5[1]);
                break;
            }
            case 3:
            {
                /* tailcall */
                return fprintf(arg1, dcgettext(nullptr, "Written by %s, %s, and %s.n", 5), *arg5, arg5[1], arg5[2]);
                break;
            }
            case 4:
            {
                /* tailcall */
                return fprintf(arg1, dcgettext(nullptr, "Written by %s, %s, %s,nand %s.n", 5), *arg5, arg5[1], arg5[2], arg5[3]);
                break;
            }
            case 5:
            {
                int64_t r15_2 = arg5[4];
                int64_t r14_3 = arg5[3];
                int64_t r13_4 = arg5[2];
                int64_t r12_6 = arg5[1];
                rbx_7 = *arg5;
                rax_23 = dcgettext(nullptr, "Written by %s, %s, %s,n%s, and …", 5);
                r9_9 = r14_3;
                r8_10 = r13_4;
                var_68_2 = r15_2;
                rcx_11 = r12_6;
                break;
            }
            case 6:
            {
                int64_t r12_7 = arg5[5];
                int64_t r15_3 = arg5[4];
                int64_t r14_4 = arg5[3];
                int64_t r13_5 = arg5[2];
                rbx_7 = *arg5;
                var_58 = arg5[1];
                rax_23 = dcgettext(nullptr, "Written by %s, %s, %s,n%s, %s, …", 5);
                var_60 = r12_7;
                r9_9 = r14_4;
                var_68_2 = r15_3;
                r8_10 = r13_5;
                rcx_11 = var_58;
                break;
            }
            case 7:
            {
                int64_t r13_6 = arg5[6];
                int64_t r12_8 = arg5[5];
                int64_t r15_4 = arg5[4];
                int64_t r14_5 = arg5[3];
                var_50 = arg5[2];
                var_58_1 = arg5[1];
                rbx_1 = *arg5;
                rax_5 = dcgettext(nullptr, "Written by %s, %s, %s,n%s, %s, …", 5);
                r9_1 = r14_5;
                var_68 = r13_6;
                var_70 = r12_8;
                var_78 = r15_4;
                break;
            }
            case 8:
            {
                int64_t r14 = arg5[7];
                int64_t r13 = arg5[6];
                int64_t r12_1 = arg5[5];
                int64_t r15 = arg5[4];
                var_48 = arg5[3];
                rbx_1 = *arg5;
                var_50 = arg5[2];
                var_58_1 = arg5[1];
                rax_5 = dcgettext(nullptr, "Written by %s, %s, %s,n%s, %s, …", 5);
                var_60 = r14;
                var_68 = r13;
                var_70 = r12_1;
                var_78 = r15;
                r9_1 = var_48;
                break;
            }
            case 9:
            {
                rsi_2 = "Written by %s, %s, %s,n%s, %s, …";
                r14_1 = arg5[7];
                r13_1 = arg5[6];
                var_40 = arg5[8];
                r12_2 = arg5[5];
                r15_1 = arg5[4];
                var_48_1 = arg5[3];
                var_50_1 = arg5[2];
                rbx_2 = *arg5;
                var_58_2 = arg5[1];
                break;
            }
        }
        if ((arg6 == 5 || arg6 == 6))
        {
            fprintf(arg1, rax_23, rbx_7, rcx_11, r8_10, r9_9, var_68_2, var_60, var_58);
            return var_68_2;
        }
        else if ((arg6 == 7 || arg6 == 8))
        {
            return fprintf(arg1, rax_5, rbx_1, var_58_1, var_50, r9_1, var_78, var_70, var_68, var_60, var_58_1, var_50, var_48);
        }
    }
    return fprintf(arg1, dcgettext(nullptr, rsi_2, 5), rbx_2, var_58_2, var_50_1, var_48_1, r15_1, r12_2, r13_1, r14_1, var_40);
}

int64_t sub_403ac0(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_4036d0(arg1, arg2, arg3, arg4, arg5, r9);
}

int64_t sub_403ae0(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_4036d0(arg1, arg2, arg3, arg4, &var_58, r9);
}

int64_t sub_403b40(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
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
    return sub_4036d0(arg1, arg2, arg3, arg4, &var_88, r9_1);
}

int64_t sub_403c00()
{
    printf(dcgettext(nullptr, "nReport bugs to: %sn", 5), "bug-findutils@gnu.org");
    printf(dcgettext(nullptr, "%s home page: <%s>n", 5), "GNU findutils", "http://www.gnu.org/software/find…");
    /* tailcall */
    return fputs(dcgettext(nullptr, "General help using GNU software:…", 5), stdout);
}

int64_t sub_403c70(uint64_t arg1)
{
    int64_t rax = malloc(arg1);
    if ((rax == 0 && arg1 != 0))
    {
        sub_403e90();
        /* no return */
    }
    return rax;
}

int64_t sub_403cc0(int64_t arg1, uint64_t arg2)
{
    if ((arg2 == 0 && arg1 != 0))
    {
        free(arg1);
        return 0;
    }
    int64_t rax = realloc(arg1, arg2);
    if ((rax == 0 && arg2 != 0))
    {
        sub_403e90();
        /* no return */
    }
    return rax;
}

int64_t sub_403df0(uint64_t arg1)
{
    /* tailcall */
    return memset(sub_403c70(arg1), 0, arg1);
}

int64_t sub_403e10(uint64_t arg1, uint64_t arg2)
{
    int64_t rax = calloc(arg1, arg2);
    if (rax == 0)
    {
        sub_403e90();
        /* no return */
    }
    return rax;
}

int64_t sub_403e30(int64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return memcpy(sub_403c70(arg2), arg1, arg2);
}

int64_t sub_403e60(char* arg1)
{
    uint64_t rbx = (strlen(arg1) + 1);
    /* tailcall */
    return memcpy(sub_403c70(rbx), arg1, rbx);
}

noreturn int64_t sub_403e90() 
{
    error(data_6081b8, 0, "%s", dcgettext(nullptr, "memory exhausted", 5));
    abort();
    /* no return */
}

int64_t sub_403ed0(FILE* arg1)
{
    int32_t* rbx = arg1;
    if ((arg1 != 0 && (__freading(arg1) != 0 && (*rbx & 0x100) != 0)))
    {
        sub_403f10(rbx, 0, 1);
        /* tailcall */
        return fflush(rbx);
    }
    /* tailcall */
    return fflush(rbx);
}

off64_t sub_403f10(FILE* arg1, off_t arg2, int32_t arg3)
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

uint64_t sub_403f70(int64_t arg1, int32_t* arg2)
{
    int64_t r11 = (arg1 + 8);
    int32_t r12 = arg2[0xc];
    int32_t rbp = *arg2;
    int64_t rbx = arg2[0xd];
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
    arg2[0xd] = rbp;
    uint64_t rax_3 = (rbp - r8);
    arg2[0xc] = (r12 + rax_3);
    return rax_3;
}

uint64_t sub_404050(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
    int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8)
{
    char* var_98 = arg3;
    int32_t rax = arg7[1];
    if (arg1 <= 0)
    {
        goto label_40439a;
    }
    *(arg7 + 0x10) = 0;
    int32_t rax_1 = *arg7;
    int32_t rbp_1 = arg1;
    if (rax_1 == 0)
    {
        *arg7 = 1;
        rax_1 = 1;
    }
    uint32_t rax_5;
    char* r8;
    if ((rax_1 == 0 || (rax_1 != 0 && arg7[6] == 0)))
    {
        arg7[0xd] = rax_1;
        arg7[0xc] = rax_1;
        *(arg7 + 0x20) = 0;
        char* rax_17;
        char rax_19;
        if (arg8 == 0)
        {
            rax_17 = getenv("POSIXLY_CORRECT");
            if (rax_17 == 0)
            {
                arg7[0xb] = 0;
                rax_19 = *var_98;
                if (rax_19 == 0x2b)
                {
                    r8 = *(arg7 + 0x20);
                }
                if ((rax_19 != 0x2d && rax_19 != 0x2b))
                {
                    arg7[0xa] = 1;
                    r8 = *(arg7 + 0x20);
                label_404103:
                    arg7[6] = 1;
                    rax_5 = *var_98;
                }
                if (rax_19 == 0x2d)
                {
                    r8 = *(arg7 + 0x20);
                label_404370:
                    arg7[0xa] = 2;
                    var_98 = &var_98[1];
                    goto label_404103;
                }
            }
            else
            {
                r8 = *(arg7 + 0x20);
                arg7[0xb] = 1;
                char rax_24 = *var_98;
                if (rax_24 == 0x2d)
                {
                    goto label_404370;
                }
                if (rax_24 != 0x2b)
                {
                    goto label_4040fa;
                }
            }
        }
        else
        {
            arg7[0xb] = 1;
            r8 = nullptr;
            char rax_3 = *var_98;
            if (rax_3 == 0x2d)
            {
                goto label_404370;
            }
            if (rax_3 != 0x2b)
            {
            label_4040fa:
                arg7[0xa] = 0;
                goto label_404103;
            }
        }
        if (((((arg8 == 0 && rax_17 == 0) && rax_19 == 0x2b) || (arg8 == 0 && rax_17 != 0)) || arg8 != 0))
        {
            arg7[0xa] = 0;
            var_98 = &var_98[1];
            goto label_404103;
        }
    }
    if ((rax_1 != 0 && arg7[6] != 0))
    {
        r8 = *(arg7 + 0x20);
        rax_5 = *var_98;
        if (((rax_5 - 0x2b) & 0xfd) == 0)
        {
            rax_5 = var_98[1];
            var_98 = &var_98[1];
        }
    }
    int32_t rax_6 = 0;
    if (rax_5 != 0x3a)
    {
        rax_6 = rax;
    }
    int32_t r13_1;
    if ((r8 == 0 || (r8 != 0 && *r8 == 0)))
    {
        int32_t rax_13 = *arg7;
        if (arg7[0xd] > rax_13)
        {
            arg7[0xd] = rax_13;
        }
        if (rax_13 < arg7[0xc])
        {
            arg7[0xc] = rax_13;
        }
        if (arg7[0xa] == 1)
        {
            int32_t rdx_8 = arg7[0xd];
            if (arg7[0xc] == rdx_8)
            {
                if (rax_13 != rdx_8)
                {
                    arg7[0xc] = rax_13;
                    rdx_8 = rax_13;
                }
            }
            else if (rax_13 != rdx_8)
            {
                sub_403f70(arg2, arg7);
                rdx_8 = *arg7;
            }
            char* rcx_2;
            if (rbp_1 > rdx_8)
            {
                int64_t rax_20 = rdx_8;
                do
                {
                    rcx_2 = arg2[rax_20];
                    int32_t rsi_5 = rax_20;
                    rdx_8 = rax_20;
                    if ((*rcx_2 == 0x2d && rcx_2[1] != 0))
                    {
                        break;
                    }
                    rdx_8 = (rsi_5 + 1);
                    rax_20 = (rax_20 + 1);
                    *arg7 = rdx_8;
                } while (rbp_1 > rax_20);
                if ((*rcx_2 == 0x2d && rcx_2[1] != 0))
                {
                    rax_13 = *arg7;
                }
            }
            if ((rbp_1 <= rdx_8 || (rbp_1 > rdx_8 && (!(*rcx_2 == 0x2d && rcx_2[1] != 0)))))
            {
                rax_13 = rdx_8;
            }
            arg7[0xd] = rdx_8;
        }
        bool c_1 = rbp_1 < rax_13;
        bool z_1 = rbp_1 == rax_13;
        int64_t rcx;
        char* rdx_6;
        int32_t rdx_7;
        char* rsi_2;
        if (z_1)
        {
            rbp_1 = arg7[0xd];
            rdx_7 = arg7[0xc];
        }
        else
        {
            rcx = 3;
            void* const rdi_2 = &data_406c90;
            rdx_6 = arg2[rax_13];
            rsi_2 = rdx_6;
            while (rcx != 0)
            {
                char temp0_1 = *rsi_2;
                char temp1_1 = *rdi_2;
                c_1 = temp0_1 < temp1_1;
                z_1 = temp0_1 == temp1_1;
                rsi_2 = &rsi_2[1];
                rdi_2 = (rdi_2 + 1);
                rcx = (rcx - 1);
                if ((!z_1))
                {
                    break;
                }
            }
            rcx = ((!z_1) && (!c_1));
            rcx = (rcx - 0);
            if (rcx == 0)
            {
                rdx_7 = arg7[0xc];
                int32_t rcx_1 = arg7[0xd];
                int32_t rax_14 = (rax_13 + 1);
                *arg7 = rax_14;
                if (rdx_7 == rcx_1)
                {
                    arg7[0xc] = rax_14;
                    rdx_7 = rax_14;
                }
                else if (rax_14 != rcx_1)
                {
                    sub_403f70(arg2, arg7);
                    rdx_7 = arg7[0xc];
                }
                arg7[0xd] = rbp_1;
                *arg7 = rbp_1;
            }
        }
        if ((z_1 || ((!z_1) && rcx == 0)))
        {
            if (rdx_7 == rbp_1)
            {
                goto label_40439a;
            }
            *arg7 = rdx_7;
        label_40439a:
            r13_1 = -1;
            goto label_40433a;
        }
        if (((!z_1) && rcx != 0))
        {
            char rcx_3;
            if (*rdx_6 == 0x2d)
            {
                rcx_3 = rdx_6[1];
                if (rcx_3 != 0)
                {
                    rsi_2 = arg4 != 0;
                    int64_t rax_21;
                    rax_21 = rcx_3 == 0x2d;
                    r8 = ((rdx_6 + (rax_21 & rsi_2)) + 1);
                    *(arg7 + 0x20) = r8;
                }
            }
            if ((*rdx_6 != 0x2d || (*rdx_6 == 0x2d && rcx_3 == 0)))
            {
                if (arg7[0xa] == 0)
                {
                    goto label_40439a;
                }
                *(arg7 + 0x10) = rdx_6;
                r13_1 = 1;
                *arg7 = (rax_13 + 1);
            label_40433a:
                return r13_1;
            }
        }
    }
    int32_t var_60;
    int32_t var_50;
    int32_t* rax_45;
    if (arg4 != 0)
    {
        int64_t rax_7 = *arg7;
        int64_t rdx = rax_7;
        void* rax_8 = arg2[rax_7];
        int32_t rsi = *(rax_8 + 1);
        if (rsi != 0x2d)
        {
            if (arg6 == 0)
            {
                goto label_404198;
            }
            if (*(rax_8 + 2) != 0)
            {
                goto label_4045e0;
            }
            rdx = rdx;
            if (strchr(var_98, rsi) != 0)
            {
                goto label_404198;
            }
            goto label_4045e0;
        }
    label_4045e0:;
        char rax_32 = *r8;
        char* r13_4 = r8;
        int32_t var_6c_3;
        int32_t rax_35;
        if ((rax_32 == 0 || rax_32 == 0x3d))
        {
            var_6c_3 = 0;
            rax_35 = 0;
        }
        if ((rax_32 != 0 && rax_32 != 0x3d))
        {
            while (true)
            {
                r13_4 = &r13_4[1];
                char rax_33 = *r13_4;
                if (rax_33 == 0)
                {
                    break;
                }
                if (rax_33 == 0x3d)
                {
                    break;
                }
                if ((!(rax_33 != 0 && rax_33 != 0x3d)))
                {
                    /* nop */
                }
            }
            rax_35 = (r13_4 - r8);
            var_6c_3 = rax_35;
        }
        int64_t* rbx_7 = arg4;
        char* r15_3 = *rbx_7;
        int64_t* var_80_4;
        int32_t rax_38;
        int32_t rax_39;
        char rax_41;
        int32_t rsi_10;
        if (r15_3 != 0)
        {
            uint64_t rax_36 = rax_35;
            int64_t** r14_5 = nullptr;
            char* rsi_8 = r8;
            int32_t rbp_3 = 0;
            var_60 = 0xffffffff;
            var_50 = 0;
            var_80_4 = nullptr;
            while (true)
            {
                rax_38 = strncmp(r15_3, rsi_8, rax_36);
                if (rax_38 == 0)
                {
                    rax_39 = strlen(r15_3);
                    if (var_6c_3 == rax_39)
                    {
                        break;
                    }
                    if (var_80_4 == 0)
                    {
                        var_80_4 = rbx_7;
                        rbx_7 = &rbx_7[4];
                        r15_3 = *rbx_7;
                        var_60 = rbp_3;
                        rbp_3 = (rbp_3 + 1);
                        if (r15_3 == 0)
                        {
                            break;
                        }
                    }
                    else if (var_50 == 0)
                    {
                        if (arg6 != 0)
                        {
                        label_404681:;
                            int64_t** rax_37;
                            rax_37 = malloc(0x10);
                            if (rax_37 != 0)
                            {
                                *rax_37 = rbx_7;
                                rax_37[1] = r14_5;
                                r14_5 = rax_37;
                            }
                            else
                            {
                                if (r14_5 != 0)
                                {
                                    int64_t** rdi_17 = r14_5;
                                    do
                                    {
                                        r14_5 = r14_5[1];
                                        free(rdi_17);
                                        rdi_17 = r14_5;
                                    } while (r14_5 != 0);
                                }
                                var_50 = 1;
                            }
                        }
                        else
                        {
                            if (var_80_4[1] != rbx_7[1])
                            {
                                goto label_404681;
                            }
                            if (var_80_4[2] != rbx_7[2])
                            {
                                goto label_404681;
                            }
                            if (var_80_4[3] != rbx_7[3])
                            {
                                goto label_404681;
                            }
                            var_50 = arg6;
                        }
                    }
                }
                if ((rax_38 != 0 || ((rax_38 == 0 && var_6c_3 != rax_39) && var_80_4 != 0)))
                {
                    rbx_7 = &rbx_7[4];
                    r15_3 = *rbx_7;
                    rbp_3 = (rbp_3 + 1);
                    if (r15_3 == 0)
                    {
                        break;
                    }
                }
                rsi_8 = *(arg7 + 0x20);
            }
            char* r13_6;
            if ((!(rax_38 == 0 && var_6c_3 == rax_39)))
            {
                rax_41 = var_50;
                r13_6 = r13_4;
                rsi_10 = r14_5 != 0;
                rdx = *arg7;
                if (((rax_41 == 0 && rsi_10 == 0) && var_80_4 != 0))
                {
                label_404736:;
                    int32_t rax_42 = (rdx + 1);
                    *arg7 = rax_42;
                    int32_t rcx_6 = var_80_4[1];
                    if (*r13_6 == 0)
                    {
                        if (rcx_6 != 1)
                        {
                            goto label_404761;
                        }
                        if (rax_42 < rbp_1)
                        {
                            *arg7 = (rdx + 2);
                            *(arg7 + 0x10) = arg2[rax_42];
                            goto label_404761;
                        }
                        if (rax_6 != 0)
                        {
                            int64_t rbx_35 = *arg2;
                            fprintf(stderr, dcgettext(nullptr, "%s: option '--%s' requires an ar…", 5), rbx_35, *var_80_4);
                        }
                        char* rbx_30 = *(arg7 + 0x20);
                        *(arg7 + 0x20) = &rbx_30[strlen(rbx_30)];
                        arg7[2] = var_80_4[3];
                        if (*var_98 != 0x3a)
                        {
                            goto label_404b66;
                        }
                    label_404de8:
                        r13_1 = 0x3a;
                    }
                    else if (rcx_6 == 0)
                    {
                        if (rax_6 != 0)
                        {
                            char* rax_55 = arg2[(rax_42 - 1)];
                            int64_t rbp_6 = *var_80_4;
                            int64_t rbx_14 = *arg2;
                            if (rax_55[1] == 0x2d)
                            {
                                fprintf(stderr, dcgettext(nullptr, "%s: option '--%s' doesn't allow …", 5), rbx_14, rbp_6);
                            }
                            else
                            {
                                fprintf(stderr, dcgettext(nullptr, "%s: option '%c%s' doesn't allow …", 5), rbx_14, *rax_55, rbp_6);
                            }
                        }
                        char* rbx_15 = *(arg7 + 0x20);
                        r13_1 = 0x3f;
                        *(arg7 + 0x20) = &rbx_15[strlen(rbx_15)];
                        arg7[2] = var_80_4[3];
                    }
                    else
                    {
                        *(arg7 + 0x10) = &r13_6[1];
                    label_404761:;
                        char* rbx_9 = *(arg7 + 0x20);
                        *(arg7 + 0x20) = &rbx_9[strlen(rbx_9)];
                        if (arg5 != 0)
                        {
                            *arg5 = var_60;
                        }
                        rax_45 = var_80_4[2];
                        r13_1 = var_80_4[3];
                        if (rax_45 != 0)
                        {
                        label_40479c:
                            *rax_45 = r13_1;
                            r13_1 = 0;
                        }
                    }
                }
                if ((rax_41 != 0 || (rax_41 == 0 && rsi_10 != 0)))
                {
                    if (rax_6 == 0)
                    {
                    label_404b71:;
                        char* rbx_22 = *(arg7 + 0x20);
                        var_98 = rdx;
                        uint64_t rax_71 = strlen(rbx_22);
                        arg7[2] = 0;
                        *(arg7 + 0x20) = &rbx_22[rax_71];
                        *arg7 = (var_98 + 1);
                        if (r14_5 != 0)
                        {
                            int64_t** rdi_23 = r14_5;
                            int64_t** rbx_24;
                            do
                            {
                                rbx_24 = rdi_23[1];
                                free(rdi_23);
                                rdi_23 = rbx_24;
                            } while (rbx_24 != 0);
                        }
                        goto label_404b66;
                    }
                    if (rsi_10 != 0)
                    {
                        int64_t** var_40_1 = r14_5;
                        int64_t rbp_7 = arg2[rdx];
                        int64_t rbx_18 = *arg2;
                        fprintf(stderr, dcgettext(nullptr, "%s: option '%s' is ambiguous; po…", 5), rbx_18, rbp_7);
                        void var_48;
                        int64_t** rbx_19 = &var_48;
                        int64_t* rax_68 = var_80_4;
                        while (true)
                        {
                            fprintf(stderr, " '--%s'", *rax_68);
                            rbx_19 = rbx_19[1];
                            if (rbx_19 == 0)
                            {
                                break;
                            }
                            rax_68 = *rbx_19;
                        }
                        fputc(0xa, stderr);
                        goto label_404b43;
                    }
                    if (rax_41 == 0)
                    {
                        goto label_404b71;
                    }
                    int64_t rbp_10 = arg2[rdx];
                    int64_t rbx_29 = *arg2;
                    fprintf(stderr, dcgettext(nullptr, "%s: option '%s' is ambiguousn", 5), rbx_29, rbp_10);
                label_404b43:;
                    char* rbx_20 = *(arg7 + 0x20);
                    uint64_t rax_70 = strlen(rbx_20);
                    *arg7 = (*arg7 + 1);
                    arg7[2] = 0;
                    *(arg7 + 0x20) = &rbx_20[rax_70];
                label_404b66:
                    r13_1 = 0x3f;
                }
            }
            if ((rax_38 == 0 && var_6c_3 == rax_39))
            {
                r13_6 = r13_4;
                if ((var_50 != 0 || (var_50 == 0 && r14_5 != 0)))
                {
                    int64_t** rdi_12 = r14_5;
                    if (r14_5 != 0)
                    {
                        int64_t** r14_6;
                        do
                        {
                            r14_6 = rdi_12[1];
                            free(rdi_12);
                            rdi_12 = r14_6;
                        } while (r14_6 != 0);
                    }
                }
                rdx = *arg7;
                var_60 = rbp_3;
                var_80_4 = rbx_7;
                goto label_404736;
            }
        }
        if ((r15_3 == 0 || ((((r15_3 != 0 && (!(rax_38 == 0 && var_6c_3 == rax_39))) && rax_41 == 0) && rsi_10 == 0) && var_80_4 == 0)))
        {
            char* rbx_12;
            char* rbp_9;
            if (arg6 != 0)
            {
                rbx_12 = arg2[rdx];
                if (rbx_12[1] != 0x2d)
                {
                    char* r8_2 = *(arg7 + 0x20);
                    r8 = r8_2;
                    rdx = rdx;
                    if (strchr(var_98, *r8_2) != 0)
                    {
                        goto label_404198;
                    }
                    if (rax_6 == 0)
                    {
                        goto label_404952;
                    }
                    goto label_404916;
                }
                if (rax_6 == 0)
                {
                    goto label_404952;
                }
                rbp_9 = *(arg7 + 0x20);
            label_404cd9:;
                int64_t rbx_28 = *arg2;
                fprintf(stderr, dcgettext(nullptr, "%s: unrecognized option '--%s'n", 5), rbx_28, rbp_9);
                rdx = *arg7;
                goto label_404952;
            }
            if (rax_6 == 0)
            {
                goto label_404952;
            }
            rbp_9 = *(arg7 + 0x20);
            rbx_12 = arg2[rdx];
            r8 = rbp_9;
            if (rbx_12[1] == 0x2d)
            {
                goto label_404cd9;
            }
        label_404916:;
            int32_t rbp_5 = *rbx_12;
            int64_t rbx_13 = *arg2;
            fprintf(stderr, dcgettext(nullptr, "%s: unrecognized option '%c%s'n", 5), rbx_13, rbp_5, r8);
            rdx = *arg7;
        label_404952:
            r13_1 = 0x3f;
            *(arg7 + 0x20) = 0x406cd4;
            *arg7 = (rdx + 1);
            arg7[2] = 0;
        }
        goto label_40433a;
    }
label_404198:;
    void* rbx_6 = &r8[1];
    *(arg7 + 0x20) = rbx_6;
    r13_1 = *r8;
    char r14_1 = r13_1;
    char* rax_10 = strchr(var_98, r13_1);
    if (r8[1] == 0)
    {
        *arg7 = (*arg7 + 1);
    }
    if (((r14_1 - 0x3a) > 1 && rax_10 != 0))
    {
        char rdx_1 = rax_10[1];
        if ((*rax_10 == 0x57 && rdx_1 == 0x3b))
        {
            if (arg4 == 0)
            {
            label_404e37:
                *(arg7 + 0x20) = 0;
                r13_1 = 0x57;
            }
            else
            {
                int64_t rax_25 = *arg7;
                if (r8[1] != 0)
                {
                    *(arg7 + 0x10) = rbx_6;
                    *arg7 = (rax_25 + 1);
                label_4044e8:
                    *(arg7 + 0x20) = rbx_6;
                    char r13_2 = *rbx_6;
                    void* r14_3 = rbx_6;
                    if (r13_2 != 0)
                    {
                        while (r13_2 != 0x3d)
                        {
                            r14_3 = (r14_3 + 1);
                            r13_2 = *r14_3;
                            if (r13_2 == 0)
                            {
                                break;
                            }
                        }
                    }
                    char* r15_1 = *arg4;
                    if (r15_1 == 0)
                    {
                        goto label_404e37;
                    }
                    var_50 = r13_2;
                    uint64_t rax_28 = (r14_3 - rbx_6);
                    var_60 = r14_3;
                    int32_t r13_3 = 0;
                    uint64_t rsi_6 = rax_28;
                    char* var_58;
                    var_58 = rbp_1;
                    int64_t* rbp_2 = arg4;
                    char* r12_1 = r15_1;
                    int64_t* r15_2 = nullptr;
                    int32_t var_6c_2 = 0;
                    int64_t* var_78;
                    var_78 = 0;
                    int32_t rax_30;
                    uint64_t rax_31;
                    do
                    {
                        rax_30 = strncmp(r12_1, rbx_6, rax_28);
                        if (rax_30 == 0)
                        {
                            rax_31 = strlen(r12_1);
                            if (rsi_6 == rax_31)
                            {
                                break;
                            }
                            if (r15_2 == 0)
                            {
                                var_6c_2 = r13_3;
                                r15_2 = rbp_2;
                            }
                            else
                            {
                                if (((arg6 != 0 || (arg6 == 0 && r15_2[1] != rbp_2[1])) || ((arg6 == 0 && r15_2[1] == rbp_2[1]) && r15_2[2] != rbp_2[2])))
                                {
                                    var_78 = 1;
                                }
                                if (((arg6 == 0 && r15_2[1] == rbp_2[1]) && r15_2[2] == rbp_2[2]))
                                {
                                    int32_t rax_74 = 1;
                                    if (r15_2[3] == rbp_2[3])
                                    {
                                        rax_74 = var_78;
                                    }
                                    var_78 = rax_74;
                                }
                            }
                        }
                        rbp_2 = &rbp_2[4];
                        r12_1 = *rbp_2;
                        r13_3 = (r13_3 + 1);
                    } while (r12_1 != 0);
                    int32_t rbp_8;
                    char r13_9;
                    int64_t r14_8;
                    if ((rax_30 == 0 && rsi_6 == rax_31))
                    {
                        r14_8 = var_60;
                        r13_9 = var_50;
                        rbp_8 = var_58;
                        var_6c_2 = r13_3;
                        r15_2 = rbp_2;
                    label_404c1b:;
                        int32_t rax_75 = r15_2[1];
                        if (r13_9 == 0)
                        {
                            if (rax_75 == 1)
                            {
                                int64_t rax_97 = *arg7;
                                if (rax_97 < rbp_8)
                                {
                                    *arg7 = (rax_97 + 1);
                                    *(arg7 + 0x10) = arg2[rax_97];
                                    goto label_404c49;
                                }
                                if (rax_6 != 0)
                                {
                                    int64_t rbx_39 = *arg2;
                                    fprintf(stderr, dcgettext(nullptr, "%s: option '-W %s' requires an a…", 5), rbx_39, *r15_2);
                                }
                                int64_t rdx_30 = *(arg7 + 0x20);
                                int64_t rcx_21 = -1;
                                int64_t rdi_35 = rdx_30;
                                while (rcx_21 != 0)
                                {
                                    bool cond9_1 = 0 != *rdi_35;
                                    rdi_35 = (rdi_35 + 1);
                                    rcx_21 = (rcx_21 - 1);
                                    if ((!cond9_1))
                                    {
                                        break;
                                    }
                                }
                                *(arg7 + 0x20) = ((rdx_30 + (!rcx_21)) - 1);
                                if (*var_98 != 0x3a)
                                {
                                    goto label_404b66;
                                }
                                goto label_404de8;
                            }
                            *(arg7 + 0x10) = 0;
                        label_404c49:
                            *(arg7 + 0x20) = (rbx_6 + strlen(rbx_6));
                            if (arg5 != 0)
                            {
                                *arg5 = var_6c_2;
                            }
                            rax_45 = r15_2[2];
                            r13_1 = r15_2[3];
                            if (rax_45 != 0)
                            {
                                goto label_40479c;
                            }
                        }
                        else
                        {
                            if (rax_75 != 0)
                            {
                                *(arg7 + 0x10) = (r14_8 + 1);
                                goto label_404c49;
                            }
                            if (rax_6 != 0)
                            {
                                int64_t rbx_38 = *arg2;
                                fprintf(stderr, dcgettext(nullptr, "%s: option '-W %s' doesn't allow…", 5), rbx_38, *r15_2);
                                rbx_6 = *(arg7 + 0x20);
                            }
                            r13_1 = 0x3f;
                            *(arg7 + 0x20) = (rbx_6 + strlen(rbx_6));
                        }
                    }
                    else
                    {
                        r13_9 = var_50;
                        r14_8 = var_60;
                        rbp_8 = var_58;
                        if (var_78 == 0)
                        {
                            if (r15_2 == 0)
                            {
                                goto label_404e37;
                            }
                            goto label_404c1b;
                        }
                        if (rax_6 != 0)
                        {
                            int64_t rbp_12 = *arg2;
                            fprintf(stderr, dcgettext(nullptr, "%s: option '-W %s' is ambiguousn", 5), rbp_12, rbx_6);
                            rbx_6 = *(arg7 + 0x20);
                        }
                        r13_1 = 0x3f;
                        uint64_t rax_92 = strlen(rbx_6);
                        *arg7 = (*arg7 + 1);
                        *(arg7 + 0x20) = (rbx_6 + rax_92);
                    }
                }
                else
                {
                    if (rbp_1 != rax_25)
                    {
                        *arg7 = (rax_25 + 1);
                        rbx_6 = arg2[rax_25];
                        *(arg7 + 0x10) = rbx_6;
                        goto label_4044e8;
                    }
                    if (rax_6 != 0)
                    {
                        int64_t rbx_37 = *arg2;
                        fprintf(stderr, dcgettext(nullptr, "%s: option requires an argument …", 5), rbx_37, r13_1);
                    }
                    arg7[2] = r13_1;
                    int64_t r13_12;
                    r13_12 = *var_98 != 0x3a;
                    r13_1 = ((r13_12 * 5) + 0x3a);
                }
            }
        }
        if (((*rax_10 != 0x57 || (*rax_10 == 0x57 && rdx_1 != 0x3b)) && rdx_1 == 0x3a))
        {
            char rdx_2 = r8[1];
            if (rax_10[2] != 0x3a)
            {
                int64_t rax_11 = *arg7;
                if (rdx_2 != 0)
                {
                    *(arg7 + 0x10) = rbx_6;
                    *arg7 = (rax_11 + 1);
                }
                else if (rbp_1 != rax_11)
                {
                    *arg7 = (rax_11 + 1);
                    *(arg7 + 0x10) = arg2[rax_11];
                }
                else
                {
                    if (rax_6 != 0)
                    {
                        int64_t rbx_33 = *arg2;
                        fprintf(stderr, dcgettext(nullptr, "%s: option requires an argument …", 5), rbx_33, r13_1);
                    }
                    arg7[2] = r13_1;
                    int64_t r13_11;
                    r13_11 = *var_98 != 0x3a;
                    r13_1 = ((r13_11 * 5) + 0x3a);
                }
            }
            else if (rdx_2 == 0)
            {
                *(arg7 + 0x10) = 0;
            }
            else
            {
                *(arg7 + 0x10) = rbx_6;
                *arg7 = (*arg7 + 1);
            }
            *(arg7 + 0x20) = 0;
        }
    }
    if (((r14_1 - 0x3a) <= 1 || ((r14_1 - 0x3a) > 1 && rax_10 == 0)))
    {
        if (rax_6 == 0)
        {
            goto label_4047cc;
        }
        int64_t rbx_17 = *arg2;
        fprintf(stderr, dcgettext(nullptr, "%s: invalid option -- '%c'n", 5), rbx_17, r13_1);
    label_4047cc:
        arg7[2] = r13_1;
        r13_1 = 0x3f;
    }
    goto label_40433a;
}

uint64_t sub_4050f0(int32_t arg1, int64_t* arg2, char* arg3)
{
    return _getopt_internal(arg1, arg2, arg3, nullptr, nullptr, 0, 1);
}

int64_t sub_405190(wchar_t* arg1, char* arg2, uint64_t arg3, mbstate_t* arg4)
{
    if (arg2 == 0)
    {
        arg3 = 1;
        arg2 = &data_406cb9[0x1b];
        arg1 = nullptr;
    }
    else if (arg3 == 0)
    {
        return -2;
    }
    /* tailcall */
    return mbrtowc(arg1, arg2, arg3, arg4);
}

uint64_t sub_4051c0(FILE* arg1)
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

char* sub_405230()
{
    char* rax = nl_langinfo(0xe);
    char* r15 = data_6083f8;
    char* rbx = rax;
    if (rax == 0)
    {
        rbx = &data_406cb9[0x1b];
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
                    goto label_40532c;
                }
                memcpy(rbp_3, r13_1, r14_1);
                goto label_405376;
            }
        }
        char* rax_9 = malloc(rdi_7);
        rbp_3 = rax_9;
        if (rax_9 == 0)
        {
        label_40532c:
            r15 = &data_406cb9[0x1b];
        }
        else
        {
            memcpy(rbp_3, r13_1, r14_1);
            rbp_3[r14_1] = 0x2f;
        label_405376:;
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
                            label_40542c:
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
                                    goto label_4055bb;
                                }
                                int64_t* rcx_2 = &var_b8;
                            label_405468:;
                                int32_t rdx_5 = *rcx_2;
                                rcx_2 = (rcx_2 + 4);
                                uint32_t rax_20 = (((rdx_5 - 0x1010101) & (!rdx_5)) & 0x80808080);
                                if (rax_20 == 0)
                                {
                                    goto label_405468;
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
                            label_4054a2:;
                                int32_t rsi_5 = *rdx_11;
                                rdx_11 = (rdx_11 + 4);
                                uint32_t rax_23 = (((rsi_5 - 0x1010101) & (!rsi_5)) & 0x80808080);
                                if (rax_23 == 0)
                                {
                                    goto label_4054a2;
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
                                    r15 = &data_406cb9[0x1b];
                                    free(rdi_26);
                                    fclose(rax_12);
                                    goto label_4053b7;
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
                                    label_40567b:;
                                        uint64_t r8_1 = rsi_17;
                                        rsi_17 = (rsi_17 + 8);
                                        *(r9_5 + r8_1) = *(r10_2 + r8_1);
                                        if (rsi_17 < rcx_12)
                                        {
                                            goto label_40567b;
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
                                    label_4056c9:;
                                        uint64_t rsi_20 = rcx_14;
                                        rcx_14 = (rcx_14 + 8);
                                        *(rdi_24 + rsi_20) = *(r9_6 + rsi_20);
                                        if (rcx_14 < rdx_20)
                                        {
                                            goto label_4056c9;
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
                            goto label_40542c;
                        }
                        break;
                    }
                label_4055bb:
                    fclose(rax_12);
                    if (var_d0_1 != 0)
                    {
                        *(r15 + var_d0_1) = 0;
                    }
                }
            }
            if ((((rax_11 >= 0 && rax_12 == 0) || rax_11 < 0) || ((rax_11 >= 0 && rax_12 != 0) && var_d0_1 == 0)))
            {
                r15 = &data_406cb9[0x1b];
            }
        label_4053b7:
            free(rbp_3);
        }
        data_6083f8 = r15;
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



int64_t sub_405810(void (* arg1)(void*))
{
    /* tailcall */
    return __cxa_atexit(arg1, nullptr, data_6081a8);
}

int64_t sub_405828(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rbx = &data_607e30;
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

