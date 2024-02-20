#include "decompile_bn.h"
int64_t sub_401780()
{
    int64_t var_8 = data_60e008;
    /* jump -> data_60e010 */
}

int64_t sub_401796()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4017a6()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4017b6()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4017c6()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4017d6()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4017e6()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401806()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401826()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401846()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401866()
{
    int64_t var_8 = 0xd;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401886()
{
    int64_t var_8 = 0xf;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4018a6()
{
    int64_t var_8 = 0x11;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4018c6()
{
    int64_t var_8 = 0x13;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4018e6()
{
    int64_t var_8 = 0x15;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401906()
{
    int64_t var_8 = 0x17;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401926()
{
    int64_t var_8 = 0x19;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401946()
{
    int64_t var_8 = 0x1b;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401966()
{
    int64_t var_8 = 0x1d;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401986()
{
    int64_t var_8 = 0x1f;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4019a6()
{
    int64_t var_8 = 0x21;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4019c6()
{
    int64_t var_8 = 0x23;
    /* tailcall */
    return sub_401780();
}

int64_t sub_4019e6()
{
    int64_t var_8 = 0x25;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401a06()
{
    int64_t var_8 = 0x27;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401a26()
{
    int64_t var_8 = 0x29;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401a46()
{
    int64_t var_8 = 0x2b;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401a66()
{
    int64_t var_8 = 0x2d;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401a86()
{
    int64_t var_8 = 0x2f;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401aa6()
{
    int64_t var_8 = 0x31;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401ac6()
{
    int64_t var_8 = 0x33;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401ae6()
{
    int64_t var_8 = 0x35;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401b06()
{
    int64_t var_8 = 0x37;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401b26()
{
    int64_t var_8 = 0x39;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401b46()
{
    int64_t var_8 = 0x3b;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401b66()
{
    int64_t var_8 = 0x3d;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401b86()
{
    int64_t var_8 = 0x3f;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401ba6()
{
    int64_t var_8 = 0x41;
    /* tailcall */
    return sub_401780();
}

int64_t sub_401bc6()
{
    int64_t var_8 = 0x43;
    /* tailcall */
    return sub_401780();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    int64_t r12 = 0;
    int64_t var_48 = 0;
    int64_t var_30 = 0;
    int64_t var_3c = 0x1ff;
    char var_34 = 0;
    int64_t rcx;
    int64_t rdx;
    uint64_t r8;
    ssize_t r9;
    rcx = sub_402e70(*argv);
    int32_t var_40;
    setlocale(6, &data_40bacc[0x1b], rdx, rcx, r8, r9, 0, var_40);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_…");
    textdomain("coreutils");
    sub_409f00(sub_402570);
    while (true)
    {
        int32_t rax_1 = getopt_long(argc, argv, "pm:vZ", &data_40a520, nullptr);
        if (rax_1 == 0xffffffff)
        {
            if (data_60e2bc != argc)
            {
                int32_t r13_1;
                if (var_48 != 0)
                {
                    int32_t rax_6 = umask(0);
                    r13_1 = rax_6;
                    umask(rax_6);
                    int32_t var_40_1 = r13_1;
                    if (r12 == 0)
                    {
                        var_3c = 0x1ff;
                    }
                }
                if ((var_48 == 0 && r12 != 0))
                {
                    int32_t rax_7 = umask(0);
                    r13_1 = rax_7;
                    umask(rax_7);
                    int32_t var_40_2 = r13_1;
                }
                if (((var_48 == 0 && r12 != 0) || (var_48 != 0 && r12 != 0)))
                {
                    int16_t* rax_8 = sub_402920(r12);
                    if (rax_8 == 0)
                    {
                        void (* rdx_6)();
                        int64_t rsi_2;
                        int64_t rdi_10;
                        rdx_6 = error(1, 0, dcgettext(nullptr, "invalid mode %s", 5), sub_404a90(r12));
                        /* tailcall */
                        return _start(rdi_10, rsi_2, rdx_6);
                    }
                    var_3c = sub_402cf0(0x1ff, 1, r13_1, rax_8, &*var_3c[4]);
                    free(rax_8);
                }
                int64_t rdx_3 = data_60e2bc;
                return sub_404ed0((argc - rdx_3), &argv[rdx_3], 0x401f70, &var_48);
            }
            error(0, 0, dcgettext(nullptr, "missing operand", 5));
            break;
        }
        bool cond0_1 = rax_1 <= 0x5a;
        if (rax_1 != 0x5a)
        {
            if (cond0_1)
            {
                if (rax_1 == 0xffffff7d)
                {
                    sub_405480(stdout, "mkdir", "GNU coreutils", data_60e250);
                    exit(0);
                    /* no return */
                }
                if (rax_1 == 0xffffff7e)
                {
                    sub_402100(0);
                    /* no return */
                }
                break;
            }
            if (rax_1 == 0x70)
            {
                var_48 = 0x402060;
            }
            else if (rax_1 == 0x76)
            {
                char* var_30_1 = dcgettext(nullptr, "created directory %s", 5);
            }
            else
            {
                if (rax_1 != 0x6d)
                {
                    break;
                }
                r12 = data_60e4a8;
            }
        }
        else if (data_60e4a8 != 0)
        {
            error(0, 0, dcgettext(nullptr, "warning: ignoring --context; it …", 5));
        }
    }
    sub_402100(1);
    /* no return */
}


void sub_401ebb()
{
    return;
}

int64_t sub_401eda()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    return (COMBINE(rdx, rax) / 2);
}

void sub_401f11()
{
    if (data_60e2e8 != 0)
    {
        return;
    }
    while (true)
    {
        int64_t rax_1 = data_60e2f0;
        if (rax_1 >= 0)
        {
            break;
        }
        data_60e2f0 = (rax_1 + 1);
        *(0x60de40 + ((rax_1 + 1) << 3))();
    }
    sub_401ebb();
    data_60e2e8 = 1;
}

int64_t j_sub_401eda()
{
    /* tailcall */
    return sub_401eda();
}

uint64_t sub_401f70(void* arg1, int32_t* arg2, int64_t* arg3)
{
    int64_t rdx = *arg3;
    if ((*(arg3 + 0x14) != 0 && rdx == 0))
    {
        *__errno_location() = 0x5f;
    }
    char rax_3 = (sub_402610(arg1, arg2, rdx, arg3, *(arg3 + 0xc), sub_402040, arg3[2], 0xffffffff, 0xffffffff, 1) ^ 1);
    uint32_t rbp = rax_3;
    if ((rax_3 == 0 && (*(arg3 + 0x14) != 0 && *arg3 != 0)))
    {
        *__errno_location() = 0x5f;
    }
    return rbp;
}

int64_t sub_402010(uint64_t arg1, void* arg2)
{
    sub_404840(4, arg1);
    /* tailcall */
    return sub_402460(stdout, *(arg2 + 0x18), 0);
}

void sub_402040(uint64_t arg1, void* arg2)
{
    if (*(arg2 + 0x18) == 0)
    {
        return;
    }
    /* tailcall */
    return sub_402010(arg1, arg2);
}

uint64_t sub_402060(uint64_t arg1, int64_t arg2, void* arg3)
{
    if (*(arg3 + 0x14) != 0)
    {
        *__errno_location() = 0x5f;
    }
    uint64_t rdi_2 = *(arg3 + 8);
    int32_t rbx_1;
    if ((rdi_2 & 0xc0) != 0)
    {
        rdi_2 = (rdi_2 & 0x3f);
        umask(rdi_2);
        rbx_1 = mkdir(arg2, 0x1ff);
        int32_t* rax_5 = __errno_location();
        int32_t r14_1 = *rax_5;
        umask(*(arg3 + 8));
        *rax_5 = r14_1;
    }
    else
    {
        rbx_1 = mkdir(arg2, 0x1ff);
    }
    if (rbx_1 == 0)
    {
        rbx_1 = ((*(arg3 + 8) >> 8) & 1);
        if (*(arg3 + 0x18) != 0)
        {
            sub_402010(arg1, arg3);
        }
    }
    return rbx_1;
}

noreturn int64_t sub_402100(int32_t arg1) 
{
    int64_t rbp = data_60e308;
    if (arg1 != 0)
    {
        __fprintf_chk(stderr, 1, dcgettext(nullptr, "Try '%s --help' for more informa…", 5), rbp);
    }
    else
    {
        __printf_chk(1, dcgettext(nullptr, "Usage: %s [OPTION]... DIRECTORY.…", 5), rbp);
        fputs_unlocked(dcgettext(nullptr, "Create the DIRECTORY(ies), if th…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "nMandatory arguments to long op…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -m, --mode=MODE   set file mod…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -Z                   set SELin…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --help     display this he…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --version  output version …", 5), stdout);
        void* const var_88 = &data_409f6a;
        void* const* rax_10 = &var_88;
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
            rax_10 = &rax_10[2];
            void* const rdi_8 = *rax_10;
            c_1 = false;
            z_1 = (rdi_8 & rdi_8) == 0;
            if (z_1)
            {
                break;
            }
            void* const rsi_8 = "mkdir";
            int64_t rcx_2 = 6;
            while (rcx_2 != 0)
            {
                char temp0_1 = *rsi_8;
                char temp1_1 = *rdi_8;
                c_1 = temp0_1 < temp1_1;
                z_1 = temp0_1 == temp1_1;
                rsi_8 = (rsi_8 + 1);
                rdi_8 = (rdi_8 + 1);
                rcx_2 = (rcx_2 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
        } while ((((!z_1) && (!c_1)) - 0) != 0);
        void* const rbp_1 = rax_10[1];
        char* rax_21;
        int32_t rax_22;
        void* const r12_1;
        if (rbp_1 == 0)
        {
            int64_t rcx_5;
            int64_t rdx_5;
            uint64_t r8_2;
            ssize_t r9_2;
            rcx_5 = __printf_chk(1, dcgettext(nullptr, "n%s online help: <%s>n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            rax_21 = setlocale(5, nullptr, rdx_5, rcx_5, r8_2, r9_2, var_88, "test invocation");
            if (rax_21 != 0)
            {
                rax_22 = strncmp(rax_21, &data_409fee, 3);
                if (rax_22 != 0)
                {
                    rbp_1 = "mkdir";
                }
            }
            if ((rax_21 == 0 || (rax_21 != 0 && rax_22 == 0)))
            {
                rbp_1 = "mkdir";
                r12_1 = " invocation";
                __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>n", 5), "https://www.gnu.org/software/cor…", "mkdir");
            }
        }
        else
        {
            int64_t rcx_3;
            int64_t rdx_3;
            uint64_t r8_1;
            ssize_t r9_1;
            rcx_3 = __printf_chk(1, dcgettext(nullptr, "n%s online help: <%s>n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            char* rax_13 = setlocale(5, nullptr, rdx_3, rcx_3, r8_1, r9_1, var_88, "test invocation");
            if (rax_13 == 0)
            {
                goto label_402350;
            }
            if (strncmp(rax_13, &data_409fee, 3) == 0)
            {
                goto label_402350;
            }
        }
        if ((((rbp_1 == 0 && rax_21 != 0) && rax_22 != 0) || rbp_1 != 0))
        {
            __printf_chk(1, dcgettext(nullptr, "Report %s translation bugs to <h…", 5), "mkdir");
        label_402350:
            r12_1 = " invocation";
            __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>n", 5), "https://www.gnu.org/software/cor…", "mkdir");
            if (rbp_1 != "mkdir")
            {
                r12_1 = &data_40bacc[0x1b];
            }
        }
        __printf_chk(1, dcgettext(nullptr, "or available locally via: info '…", 5), rbp_1, r12_1);
    }
    exit(arg1);
    /* no return */
}

char* sub_402460(FILE* arg1, char* arg2, char arg3)
{
    int64_t rdx;
    int64_t var_b8 = rdx;
    int64_t rcx;
    int64_t var_b0 = rcx;
    int64_t r8;
    int64_t var_a8 = r8;
    int64_t r9;
    int64_t var_a0 = r9;
    if (arg3 != 0)
    {
        int128_t zmm0;
        int128_t var_98_1 = zmm0;
        int128_t zmm1;
        int128_t var_88_1 = zmm1;
        int128_t zmm2;
        int128_t var_78_1 = zmm2;
        int128_t zmm3;
        int128_t var_68_1 = zmm3;
        int128_t zmm4;
        int128_t var_58_1 = zmm4;
        int128_t zmm5;
        int128_t var_48_1 = zmm5;
        int128_t zmm6;
        int128_t var_38_1 = zmm6;
        int128_t zmm7;
        int128_t var_28_1 = zmm7;
    }
    fputs_unlocked(data_60e308, arg1);
    fwrite_unlocked(&data_40a600, 1, 2, arg1);
    int32_t var_e0 = 0x10;
    void* var_d8 = &arg_8;
    int32_t var_dc = 0x30;
    void var_c8;
    void* var_d0 = &var_c8;
    sub_4066a0(arg1, arg2, &var_e0);
    char* rax = arg1->_IO_write_ptr;
    if (rax >= arg1->_IO_write_end)
    {
        rax = __overflow(arg1, 0xa);
    }
    else
    {
        arg1->_IO_write_ptr = &rax[1];
        *rax = 0xa;
    }
    return rax;
}

int64_t sub_402550(int64_t arg1)
{
    data_60e300 = arg1;
}

int64_t sub_402560(char arg1)
{
    data_60e2f8 = arg1;
}

void sub_402570(void* arg1)
{
    int32_t rax = sub_406760(stdout);
    int32_t* rax_1;
    if (rax != 0)
    {
        rax_1 = __errno_location();
        if ((data_60e2f8 == 0 || (data_60e2f8 != 0 && *rax_1 != 0x20)))
        {
            char* rax_3 = dcgettext(nullptr, "write error", 5);
            int64_t rdi_2 = data_60e300;
            if (rdi_2 == 0)
            {
                error(0, *rax_1, "%s", rax_3);
            }
            else
            {
                error(0, *rax_1, "%s: %s", sub_4048e0(rdi_2), rax_3);
            }
        }
    }
    if (((rax == 0 || ((rax != 0 && data_60e2f8 != 0) && *rax_1 == 0x20)) && sub_406760(stderr) == 0))
    {
        return;
    }
    _exit(data_60e258);
    /* no return */
}

int64_t sub_402610(void* arg1, int32_t* arg2, int64_t arg3, int64_t arg4, 
    int32_t arg5, int64_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, 
    char arg10)
{
    int32_t r15_1;
    if ((*arg1 != 0x2f && *arg2 == 4))
    {
        r15_1 = arg2[1];
        if (r15_1 != 0)
        {
            goto label_402713;
        }
        if (arg3 == 0)
        {
            goto label_402758;
        }
        goto label_402665;
    }
    int64_t rax_13;
    char* rbp_2;
    if (arg3 == 0)
    {
    label_402758:
        rbp_2 = arg1;
    label_402690:;
        int32_t rcx_2 = (arg8 & arg9);
        int32_t rax_4 = ((arg7 & 0xc00) | (arg5 & 0x200));
        int32_t var_dc_1;
        int32_t var_c8;
        int32_t rdx_5;
        if (rcx_2 != 0xffffffff)
        {
            var_dc_1 = (arg5 & 0xffffffc0);
        label_4026bc:;
            int32_t rax_7 = mkdir(rbp_2, var_dc_1);
            r15_1 = rax_7;
            if (rax_7 != 0)
            {
                goto label_4026d6;
            }
            arg6(arg1, arg4);
            rdx_5 = 3;
        label_402808:;
            int32_t rax_21 = sub_404ae0(arg2, rbp_2, rdx_5, &var_c8);
            if (rax_21 < 0xffffffff)
            {
                goto label_4027b5;
            }
            if (rax_21 == 0)
            {
                rbp_2 = &data_40a61b;
            }
            if (sub_406f70(var_c8, rbp_2, var_dc_1, arg8, arg9, arg5, arg7) == 0)
            {
                goto label_4027b5;
            }
            if (r15_1 != 0)
            {
                if (r15_1 == 2)
                {
                    goto label_402713;
                }
                if (arg3 == 0)
                {
                    goto label_402713;
                }
                if (*__errno_location() == 0x14)
                {
                    goto label_402713;
                }
                goto label_40287b;
            }
        label_40287b:;
            int32_t* rax_25 = __errno_location();
            int64_t rax_26 = sub_404a90(arg1);
            void* const rsi_8 = "cannot change permissions of %s";
            if (rcx_2 != 0xffffffff)
            {
                rsi_8 = "cannot change owner and permissi…";
            }
            error(0, *rax_25, dcgettext(nullptr, rsi_8, 5), rax_26);
            rax_13 = 0;
        }
        else
        {
            if (rax_4 != 0)
            {
                var_dc_1 = (arg5 & 0xffffffed);
                goto label_4026bc;
            }
            int32_t rax_14 = mkdir(rbp_2, arg5);
            r15_1 = rax_14;
            if (rax_14 != 0)
            {
            label_4026d6:
                r15_1 = *__errno_location();
                if (arg10 == 0)
                {
                    var_dc_1 = 0xffffffff;
                    rdx_5 = 2;
                    goto label_402808;
                }
                if (r15_1 == 0)
                {
                    goto label_4027b5;
                }
                if (r15_1 == 2)
                {
                    goto label_402713;
                }
                if (arg3 == 0)
                {
                    goto label_402713;
                }
                if (__xstat(1, rbp_2, &var_c8) != 0)
                {
                    goto label_402713;
                }
                int32_t var_b0;
                if ((var_b0 & 0xf000) != 0x4000)
                {
                    goto label_402713;
                }
                goto label_4027b5;
            }
            arg6(arg1, arg4);
            if (((arg7 & arg5) & 0x1ff) != 0)
            {
                var_dc_1 = arg5;
                rdx_5 = 3;
                goto label_402808;
            }
        label_4027b5:
            rax_13 = 1;
        }
    }
    else
    {
    label_402665:;
        void* rax_1 = sub_406de0(arg1, arg2, arg3, arg4);
        if (rax_1 >= 0)
        {
            rbp_2 = (rax_1 + arg1);
            goto label_402690;
        }
        rax_13 = 1;
        if (rax_1 == -1)
        {
            r15_1 = *__errno_location();
        label_402713:
            error(0, r15_1, dcgettext(nullptr, "cannot create directory %s", 5), sub_404a90(arg1));
            rax_13 = 0;
        }
    }
    return rax_13;
}

int16_t* sub_402920(char* arg1)
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
            int16_t* rax_11 = sub_4055c0(0x20);
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
                sub_405810();
                /* no return */
            }
        }
        rax_8 = sub_4055c0(rdi_1);
        int64_t r10_1 = 0;
        char r9_1;
        do
        {
            int32_t rdi_2 = 0;
            bool cond1_1;
            while (true)
            {
                r9_1 = *rbx;
                cond1_1 = r9_1 <= 0x61;
                if (r9_1 == 0x61)
                {
                    rdi_2 = 0xfff;
                }
                else
                {
                    if (cond1_1)
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
            if ((!cond1_1))
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
                bool cond2_1 = rdx_5 <= 0x67;
                int32_t rcx_1;
                void* rsi_1;
                if (rdx_5 == 0x67)
                {
                    rsi_1 = &rbx[2];
                    rcx_1 = 0x38;
                }
                else
                {
                    if ((!cond2_1))
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
                            goto label_4029ce;
                        }
                        if (rdi_2 != 0)
                        {
                            goto label_4029ce;
                        }
                        if ((rdx_5 != 0 && rdx_5 != 0x2c))
                        {
                            goto label_4029ce;
                        }
                        *r10_3 = r9_1;
                        rbx = r8_1;
                        r9_1 = rdx_5;
                        rdi_2 = 0xfff;
                        *(r10_3 + 8) = rcx_4;
                        rcx_1 = 0xfff;
                        r10_3[1] = 1;
                        *(r10_3 + 4) = 0xfff;
                    label_402a62:
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
                    if (((((!cond2_1) && rdx_5 != 0x6f) && rdx_5 != 0x75) || cond2_1))
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
                        goto label_402a58;
                    }
                }
                r10_3[1] = 3;
                *(r10_3 + 4) = rdi_2;
                *(r10_3 + 8) = rcx_1;
                *r10_3 = r9_1;
                r9_1 = rbx[2];
                rbx = rsi_1;
            label_402a58:;
                int32_t rdx_2 = (rcx_1 & rdi_2);
                if (rdi_2 != 0)
                {
                    rcx_1 = rdx_2;
                }
                goto label_402a62;
            }
        } while (r9_1 == 0x2c);
    label_4029ce:
        free(rax_8);
        rax_8 = 0;
    }
    return rax_8;
}

int16_t* sub_402c90(char* arg1)
{
    int16_t* rax_1 = nullptr;
    void var_98;
    if (__xstat(1, arg1, &var_98) == 0)
    {
        rax_1 = sub_4055c0(0x20);
        *rax_1 = 0x13d;
        *(rax_1 + 4) = 0xfff;
        int32_t var_80;
        *(rax_1 + 8) = var_80;
        *(rax_1 + 0xc) = 0xfff;
        *(rax_1 + 0x11) = 0;
    }
    return rax_1;
}

uint64_t sub_402cf0(int32_t arg1, char arg2, int32_t arg3, void* arg4, 
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
                label_402d74:
                    r11_5 = *arg4;
                    r9_3 = (r9_2 & r10_1);
                    if (r12_1 == 0)
                    {
                        goto label_402d80;
                    }
                    goto label_402df0;
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
                label_402d80:
                    r9_4 = (r9_3 & rdx);
                    if (r11_5 == 0x2d)
                    {
                    label_402e40:
                        rbx = (rbx | r9_4);
                        rax_1 = (rax_1 & (!r9_4));
                    label_402d9d:
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
                        goto label_402e0b;
                    }
                }
                else
                {
                label_402df0:
                    r9_4 = (r9_3 & r12_1);
                    if (r11_5 == 0x2d)
                    {
                        goto label_402e40;
                    }
                    if (r11_5 == 0x3d)
                    {
                        rdi = (rdi | (!r12_1));
                        r10_1 = (!rdi);
                    label_402e0b:
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
                    goto label_402d9d;
                }
                rbx = (rbx | r9_4);
                rax_1 = (rax_1 | r9_4);
                goto label_402d9d;
            }
            if (((arg2 == 0 && r11_6 != 2) || (arg2 != 0 && r11_6 != 2)))
            {
                if (r11_6 != 3)
                {
                    goto label_402d74;
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
                goto label_402d74;
            }
        }
    }
    if (arg5 != 0)
    {
        *arg5 = rbx;
    }
    return rax_1;
}

char* sub_402e70(char* arg1)
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
                void* const rdi_1 = &data_40a7d0;
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
    data_60e308 = rbx;
    __progname_full = rbx;
    return rax;
}

char* sub_402f10(char* arg1, int32_t arg2)
{
    char* rax = dcgettext(nullptr, arg1, 5);
    char* rbx = rax;
    if (arg1 == rax)
    {
        char* rax_2 = sub_406870();
        char rdx_2 = (*rax_2 & 0xdf);
        if (rdx_2 != 0x55)
        {
            if (rdx_2 != 0x47)
            {
            label_402ff1:;
                void* const rbx_1 = &data_40a7d4;
                if (arg2 != 9)
                {
                    rbx_1 = "'";
                }
                return rbx_1;
            }
            if ((rax_2[1] & 0xdf) != 0x42)
            {
                goto label_402ff1;
            }
            if (rax_2[2] != 0x31)
            {
                goto label_402ff1;
            }
            if (rax_2[3] != 0x38)
            {
                goto label_402ff1;
            }
            if (rax_2[4] != 0x30)
            {
                goto label_402ff1;
            }
            if (rax_2[5] != 0x33)
            {
                goto label_402ff1;
            }
            if (rax_2[6] != 0x30)
            {
                goto label_402ff1;
            }
            if (rax_2[7] != 0)
            {
                goto label_402ff1;
            }
            bool cond2_1 = *rbx != 0x60;
            rbx = &data_40a7dd;
            if (cond2_1)
            {
                rbx = &data_40a7da;
            }
        }
        else
        {
            if ((rax_2[1] & 0xdf) != 0x54)
            {
                goto label_402ff1;
            }
            if ((rax_2[2] & 0xdf) != 0x46)
            {
                goto label_402ff1;
            }
            if (rax_2[3] != 0x2d)
            {
                goto label_402ff1;
            }
            if (rax_2[4] != 0x38)
            {
                goto label_402ff1;
            }
            if (rax_2[5] != 0)
            {
                goto label_402ff1;
            }
            bool cond1_1 = *rbx != 0x60;
            rbx = &data_40a7e1;
            if (cond1_1)
            {
                rbx = &data_40a7d6;
            }
        }
    }
    return rbx;
}

int64_t sub_403010(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
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
    bool cond1 = r13 == 0xa;
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
    label_4030a8:
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
                    label_40341c:
                        if (var_c0 != 0)
                        {
                            r13_1 = 4;
                        }
                        goto label_403464;
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
                            rbx_1 = sub_403010(r15, var_70, arg3, r11, 5, arg6, arg7, arg8, arg9);
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
                    goto label_40347b;
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
                        goto label_4035b5;
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
                                goto label_403205;
                            }
                            goto label_4034f0;
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
                            goto label_4035b5;
                        }
                        case 7:
                        {
                            rbp_3 = 7;
                            rcx_2 = 0x61;
                            rdx = r11_1 == 2;
                            goto label_4033e0;
                        }
                        case 8:
                        {
                            rbp_3 = 8;
                            rcx_2 = 0x62;
                            rdx = r11_1 == 2;
                        label_4033e0:
                            if (var_c0 == 0)
                            {
                                goto label_4033eb;
                            }
                            rbp_3 = rcx_2;
                            r13 = 0;
                        label_403247:
                            if (var_5c == 0)
                            {
                                goto label_403258;
                            }
                        label_403410:
                            r13_1 = r11_1;
                            rax_14 = rdx;
                            r11 = r9;
                            goto label_403418;
                        }
                        case 9:
                        {
                            rbp_3 = 9;
                            rcx_2 = 0x74;
                            goto label_40364b;
                        }
                        case 0xa:
                        {
                            rbp_3 = 0xa;
                            rcx_2 = 0x6e;
                        label_40364b:
                            rdx = r11_1 == 2;
                            bool rax_26 = (var_5c & rdx);
                            var_b8 = rax_26;
                            if (rax_26 != 0)
                            {
                            label_40365a:
                                r11 = r9;
                                r13_1 = 2;
                                goto label_40341c;
                            }
                            goto label_4033e0;
                        }
                        case 0xb:
                        {
                            rbp_3 = 0xb;
                            rcx_2 = 0x76;
                            rdx = r11_1 == 2;
                            goto label_4033e0;
                        }
                        case 0xc:
                        {
                            rbp_3 = 0xc;
                            rcx_2 = 0x66;
                            rdx = r11_1 == 2;
                            goto label_4033e0;
                        }
                        case 0xd:
                        {
                            rbp_3 = 0xd;
                            rcx_2 = 0x72;
                            goto label_40364b;
                        }
                        case 0x20:
                        {
                            rbp_3 = 0x20;
                            rdx = r11_1 == 2;
                            goto label_4031e6;
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
                        label_4031e6:
                            if (var_5c == 0)
                            {
                                goto label_403205;
                            }
                            if (rdx == 0)
                            {
                                goto label_403205;
                            }
                            goto label_40365a;
                        }
                        case 0x23:
                        case 0x7e:
                        {
                            rdx = r11_1 == 2;
                        label_4031dd:
                            if (r12_1 != 0)
                            {
                                goto label_4033eb;
                            }
                            goto label_4031e6;
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
                        label_403610:
                            rdx = r11_1 == 2;
                        label_403205:
                            rax_8 = ((((var_c0 ^ 1) | rdx) ^ 1) | var_5c);
                            if (rax_8 == 0)
                            {
                                goto label_40330c;
                            }
                            goto label_40320f;
                        }
                        case 0x27:
                        {
                            goto label_40338d;
                        }
                        case 0x3f:
                        {
                            goto label_40335d;
                        }
                        case 0x5c:
                        {
                            if (r11_1 != 2)
                            {
                                goto label_4033ba;
                            }
                            if (var_5c != 0)
                            {
                                goto label_40414d;
                            }
                            r12_1 = (r12_1 + 1);
                            rax_12 = r10;
                            r13 = 0;
                            rbp_3 = 0x5c;
                            goto label_403324;
                        }
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_4031b9;
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
                            goto label_4037b0;
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
                            goto label_4037b0;
                        }
                        if (var_5c != 0)
                        {
                        label_404100:
                            r13_1 = r11_1;
                            r11 = r9;
                        label_403464:
                            rbx_1 = sub_403010(r15, r14, arg3, r11, r13_1, (arg6 & 0xfffffffd), 0, arg8, arg9);
                        label_40347b:
                            return rbx_1;
                        }
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                            goto label_4035b5;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                                goto label_403507;
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
                                goto label_4035b5;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                            label_4034d0:
                                r13 = 0;
                                goto label_40328b;
                            }
                            case 8:
                            {
                                rdx = 0;
                                r13 = 0;
                                rbp_3 = 0x62;
                            label_403258:;
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
                            label_40328b:
                                if (r14 <= rbx_1)
                                {
                                    goto label_403295;
                                }
                                r15[rbx_1] = 0x5c;
                            label_403295:
                                rbx_1 = (rbx_1 + 1);
                                r12_1 = (r12_1 + 1);
                                goto label_40329d;
                            }
                            case 9:
                            {
                                goto label_403480;
                            }
                            case 0xa:
                            {
                                goto label_4033f8;
                            }
                            case 0xb:
                            {
                                goto label_4034e0;
                            }
                            case 0xc:
                            {
                                goto label_4034c0;
                            }
                            case 0xd:
                            {
                                goto label_4034a9;
                            }
                            case 0x20:
                            {
                                rax_27 = var_b8;
                                goto label_40380a;
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
                                goto label_403495;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = var_b8;
                                goto label_4037ea;
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
                                goto label_4037d2;
                            }
                            case 0x27:
                            {
                                goto label_40338d;
                            }
                            case 0x3f:
                            {
                                goto label_40335d;
                            }
                            case 0x5c:
                            {
                                goto label_4033ba;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                goto label_4031b9;
                            }
                        }
                    }
                    else
                    {
                    label_4037b0:
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                        label_4035b0:
                            var_b8 = 0;
                        label_4035b5:;
                            uint64_t rdi_4;
                            if (rax == 1)
                            {
                                r10 = r10;
                                rdi_4 = 1;
                                rax_12 = (*__ctype_b_loc()[rbp_3] & 0x4000);
                                r13 = rax_12 != 0;
                                rdx = rax_12 == 0;
                                rdx = (rdx & var_c0);
                            label_403604:
                                if (rdx == 0)
                                {
                                    goto label_403610;
                                }
                                rdx = var_c0;
                                r13 = 0;
                            label_403b01:
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
                                    goto label_403324;
                                }
                                if ((rdx != 0 && var_5c != 0))
                                {
                                    r13_1 = r11_1;
                                    var_c0 = rax_12;
                                    r11 = r9;
                                    goto label_40341c;
                                }
                                r13 = var_98;
                                goto label_40329d;
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
                                rax_12 = sub_406620(&var_44, rbp_4, (var_98 - r15_1), &var_40);
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
                                            goto label_40341c;
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
                                goto label_403b01;
                            }
                            goto label_403604;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                            label_4034f0:
                                if (var_5c != 0)
                                {
                                    r13_1 = r11_1;
                                    r11 = r9;
                                    var_c0 = r13_1 == 2;
                                    goto label_40341c;
                                }
                                var_b8 = 0;
                            label_403507:
                                rdx = r11_1 == 2;
                                rax_8 = ((r10 ^ 1) & rdx);
                                int64_t rcx_6;
                                if (rax_8 == 0)
                                {
                                    rcx_6 = rbx_1;
                                    if (r14 <= rbx_1)
                                    {
                                        goto label_403552;
                                    }
                                    rax_8 = r10;
                                label_40354a:
                                    r15[rcx_6] = 0x5c;
                                    r10 = rax_8;
                                label_403552:
                                    rbx_1 = (rcx_6 + 1);
                                    if (r11_1 == 2)
                                    {
                                        rax_8 = r13;
                                        rbp_3 = 0x30;
                                        r13 = 0;
                                        goto label_40330c;
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
                                    goto label_403593;
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
                                    goto label_40354a;
                                }
                                rbx_1 = (rbx_1 + 4);
                                r10 = rax_8;
                                r13 = 0;
                                rbp_3 = 0x30;
                                goto label_40330c;
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
                                goto label_4035b0;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                                goto label_4034c5;
                            }
                            case 8:
                            {
                                rbp_3 = 0x62;
                                goto label_4033fd;
                            }
                            case 9:
                            {
                            label_403480:
                                rbp_3 = 0x74;
                                goto label_4033fd;
                            }
                            case 0xa:
                            {
                            label_4033f8:
                                rbp_3 = 0x6e;
                            label_4033fd:
                                rdx = 0;
                                r13 = 0;
                                if (var_5c != 0)
                                {
                                    goto label_403410;
                                }
                                goto label_403258;
                            }
                            case 0xb:
                            {
                            label_4034e0:
                                rbp_3 = 0x76;
                                goto label_4034c5;
                            }
                            case 0xc:
                            {
                            label_4034c0:
                                rbp_3 = 0x66;
                            label_4034c5:
                                if (var_5c == 0)
                                {
                                    goto label_4034d0;
                                }
                                r13_1 = r11_1;
                                rax_14 = 0;
                                r11 = r9;
                            label_403418:
                                var_c0 = (var_c0 & rax_14);
                                goto label_40341c;
                            }
                            case 0xd:
                            {
                                var_b8 = 0;
                            label_4034a9:
                                rbp_3 = 0xd;
                                rcx_2 = 0x72;
                                rdx = r11_1 == 2;
                                goto label_4033e0;
                            }
                            case 0x20:
                            {
                                rax_27 = 0;
                            label_40380a:
                                rbp_3 = 0x20;
                                goto label_4037d2;
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
                            label_403495:
                                rdx = 0;
                            label_4033eb:
                                r13 = 0;
                                goto label_403205;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = 0;
                            label_4037ea:
                                if (r12_1 == 0)
                                {
                                    r13 = var_b8;
                                    rdx = 0;
                                    var_b8 = rax_28;
                                    goto label_403205;
                                }
                                var_b8 = rax_28;
                                r13 = 0;
                            label_40320f:
                                rax_8 = 0;
                                goto label_403211;
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
                            label_4037d2:
                                r13 = var_b8;
                                var_b8 = rax_27;
                                rax_8 = 0;
                                goto label_403211;
                            }
                            case 0x27:
                            {
                                var_b8 = 0;
                            label_40338d:
                                if (r11_1 != 2)
                                {
                                    var_5b_1 = r13;
                                    rdx = 0;
                                    rbp_3 = 0x27;
                                    goto label_403205;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_40414d;
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
                                goto label_40330c;
                            }
                            case 0x3f:
                            {
                                var_b8 = 0;
                            label_40335d:
                                if (r11_1 == 2)
                                {
                                    if (var_5c != 0)
                                    {
                                    label_40414d:
                                        r13_1 = r11_1;
                                        r11 = r9;
                                        goto label_40341c;
                                    }
                                    r13 = 0;
                                    rax_8 = 0;
                                    rbp_3 = 0x3f;
                                label_40330c:
                                    rdx = r11_1 == 2;
                                    if (var_b8 != 0)
                                    {
                                        goto label_403247;
                                    }
                                    r12_1 = (r12_1 + 1);
                                    rax_12 = ((rax_8 ^ 1) & r10);
                                    goto label_403324;
                                }
                                if (r11_1 != 5)
                                {
                                    rbp_3 = 0x3f;
                                    rdx = r11_1 == 2;
                                    r13 = 0;
                                    goto label_403205;
                                }
                                if ((arg6 & 4) == 0)
                                {
                                label_4038f0:
                                    rdx = 0;
                                    r13 = 0;
                                    rbp_3 = 0x3f;
                                    goto label_403205;
                                }
                                int64_t rax_30 = (r12_1 + 2);
                                if (rax_30 >= r9)
                                {
                                    goto label_4038f0;
                                }
                                if (*((arg3 + r12_1) + 1) != 0x3f)
                                {
                                    goto label_4038f0;
                                }
                                rbp_3 = *(arg3 + rax_30);
                                if (rbp_3 > 0x3e)
                                {
                                    goto label_4038f0;
                                }
                                if ((!(TEST_BITQ(0x7000a38200000000, rbp_3))))
                                {
                                    goto label_4038f0;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_404100;
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
                            label_403593:
                                rax_8 = r13;
                                r13 = 0;
                                if (((var_c0 ^ 1) | rdx) != 0)
                                {
                                    goto label_40330c;
                                }
                            label_403211:
                                if (arg7 == 0)
                                {
                                    goto label_40330c;
                                }
                                if (((*(arg7 + ((rbp_3 >> 5) << 2)) >> rbp_3) & 1) == 0)
                                {
                                    goto label_40330c;
                                }
                                rdx = r11_1 == 2;
                                goto label_403247;
                            }
                            case 0x5c:
                            {
                                var_b8 = 0;
                            label_4033ba:
                                rdx = (var_c0 & var_5c);
                                rbp_3 = 0x5c;
                                rcx_2 = 0x5c;
                                rax_1 = var_a0_1 != 0;
                                rdx = (rdx & rax_1);
                                if (rdx == 0)
                                {
                                    goto label_4033e0;
                                }
                                r12_1 = (r12_1 + 1);
                                rax_12 = r10;
                                r13 = 0;
                            label_403324:
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
                                    goto label_40329d;
                                }
                            label_40329d:
                                if (rbx_1 >= r14)
                                {
                                    goto label_4032a6;
                                }
                                r15[rbx_1] = rbp_3;
                            label_4032a6:;
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
                            label_4031b9:
                                rax_1 = r9 != 1;
                                if (r9 == -1)
                                {
                                    rax_1 = *(arg3 + 1) != 0;
                                }
                                rdx = r11_1 == 2;
                                if (rax_1 != 0)
                                {
                                    goto label_4033eb;
                                }
                                goto label_4031dd;
                            }
                        }
                    }
                }
            }
        label_403896:
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
            goto label_4030a8;
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
                goto label_4030a8;
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
            goto label_4030a8;
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
                var_78_1 = &data_40a7d4;
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
                var_78_1 = &data_40a7d4;
            }
            goto label_4030a8;
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
            var_78_1 = &data_40a7d4;
            goto label_4030a8;
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
            goto label_4030a8;
        }
        case 8:
        case 9:
        case 0xa:
        {
            if ((!cond1))
            {
                arg8 = sub_402f10(&data_40a7e5, r13);
                arg9 = sub_402f10("'", r13);
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
            goto label_4030a8;
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
            goto label_403896;
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
        goto label_4030a8;
    }
}

char* sub_404240(int32_t arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4)
{
    int64_t r15 = arg1;
    int32_t* rax = __errno_location();
    int64_t rbx = data_60e298;
    int32_t rax_1 = *rax;
    if (r15 < 0)
    {
        abort();
        /* no return */
    }
    if (data_60e2b0 <= r15)
    {
        if (r15 == 0x7fffffff)
        {
            sub_405810();
            /* no return */
        }
        int32_t r12_1 = (r15 + 1);
        int64_t rsi_1 = (r12_1 << 4);
        if (rbx == 0x60e2a0)
        {
            int64_t rax_9 = sub_405620(0, rsi_1);
            int128_t zmm0 = data_60e2a0;
            rbx = rax_9;
            data_60e298 = rax_9;
            *rax_9 = zmm0;
        }
        else
        {
            int64_t rax_2 = sub_405620(rbx, rsi_1);
            data_60e298 = rax_2;
            rbx = rax_2;
        }
        int64_t rdi_1 = data_60e2b0;
        memset(((rdi_1 << 4) + rbx), 0, ((r12_1 - rdi_1) << 4));
        data_60e2b0 = r12_1;
    }
    int64_t rbx_1 = (rbx + (r15 << 4));
    void* r15_2 = &arg4[2];
    int32_t rax_4 = (arg4[1] | 1);
    uint64_t r11 = *rbx_1;
    char* r12_2 = *(rbx_1 + 8);
    int64_t rax_5 = sub_403010(r12_2, r11, arg2, arg3, *arg4, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    if (r11 <= rax_5)
    {
        size_t rsi_3 = (rax_5 + 1);
        *rbx_1 = rsi_3;
        if (r12_2 != 0x60e320)
        {
            free(r12_2);
        }
        char* rax_6 = sub_4055c0(rsi_3);
        uint32_t r8_1 = *arg4;
        *(rbx_1 + 8) = rax_6;
        r12_2 = rax_6;
        sub_403010(rax_6, rsi_3, arg2, arg3, r8_1, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    }
    *rax = rax_1;
    return r12_2;
}

int64_t sub_4043e0(int64_t arg1)
{
    int64_t rbx = arg1;
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    if (rbx == 0)
    {
        rbx = 0x60e420;
    }
    int64_t rax_1 = sub_4057c0(rbx, 0x38);
    *rax = r12;
    return rax_1;
}

uint64_t sub_404420(int32_t* arg1)
{
    if (arg1 == 0)
    {
        arg1 = &data_60e420;
    }
    return *arg1;
}

void sub_404430(int32_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60e420;
    }
    *arg1 = arg2;
}

uint64_t sub_404440(int64_t arg1, uint8_t arg2, int32_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = 0x60e420;
    }
    char rcx_1 = (arg2 & 0x1f);
    int32_t rsi = *((arg1 + ((arg2 >> 5) << 2)) + 8);
    uint32_t rax_3 = (rsi >> rcx_1);
    *((arg1 + ((arg2 >> 5) << 2)) + 8) = ((((arg3 ^ rax_3) & 1) << rcx_1) ^ rsi);
    return (rax_3 & 1);
}

uint64_t sub_404480(int128_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60e420;
    }
    uint64_t rax = *(arg1 + 4);
    *(arg1 + 4) = arg2;
    return rax;
}

void sub_4044a0(int32_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = &data_60e420;
    }
    *arg1 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *(arg1 + 0x28) = arg2;
        *(arg1 + 0x30) = arg3;
        return;
    }
    int64_t var_8 = 0x60e420;
    abort();
    /* no return */
}

int64_t sub_4044d0(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t* arg5)
{
    int32_t* rbx = arg5;
    if (arg5 == 0)
    {
        rbx = &data_60e420;
    }
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    int64_t rax_2 = sub_403010(arg1, arg2, arg3, arg4, *rbx, rbx[1], &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = r12;
    return rax_2;
}

char* sub_404550(uint64_t arg1, uint64_t arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* rbx = arg4;
    if (arg4 == 0)
    {
        rbx = &data_60e420;
    }
    int32_t* rax = __errno_location();
    int32_t rax_1 = *rax;
    int32_t rbp;
    rbp = arg3 == 0;
    int32_t rbp_1 = (rbp | rbx[1]);
    int64_t rax_2 = sub_403010(nullptr, 0, arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    char* rax_3 = sub_4055c0((rax_2 + 1));
    sub_403010(rax_3, (rax_2 + 1), arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = rax_1;
    if (arg3 != 0)
    {
        *arg3 = rax_2;
    }
    return rax_3;
}

int64_t sub_404640(uint64_t arg1, uint64_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_404550(arg1, arg2, nullptr, arg3);
}

uint64_t sub_404650()
{
    uint64_t rax_2 = data_60e2b0;
    int64_t r12 = data_60e298;
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
    if (rdi_2 != 0x60e320)
    {
        rax_2 = free(rdi_2);
        *data_60e2a0 = 0x100;
        *(data_60e2a0 + 8) = 0x60e320;
    }
    if (r12 != 0x60e2a0)
    {
        rax_2 = free(r12);
        data_60e298 = 0x60e2a0;
    }
    data_60e2b0 = 1;
    return rax_2;
}

int64_t sub_4046f0(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_404240(arg1, arg2, -1, &data_60e420);
}

int64_t sub_404710(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_404240(arg1, arg2, arg3, &data_60e420);
}

int64_t sub_404720(uint64_t arg1)
{
    /* tailcall */
    return sub_404240(0, arg1, -1, &data_60e420);
}

int64_t sub_404740(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_404240(0, arg1, arg2, &data_60e420);
}

char* sub_404760(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_404240(arg1, arg3, -1, &var_48);
}

char* sub_4047d0(int32_t arg1, int32_t arg2, uint64_t arg3, uint64_t arg4)
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
    return sub_404240(arg1, arg3, arg4, &var_48);
}

int64_t sub_404840(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_404760(0, arg1, arg2);
}

int64_t sub_404850(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_4047d0(0, arg1, arg2, arg3);
}

char* sub_404860(uint64_t arg1, uint64_t arg2, uint8_t arg3)
{
    char rcx_1 = (arg3 & 0x1f);
    int64_t var_18 = data_60e450;
    int128_t var_48 = data_60e420;
    int128_t var_38 = data_60e430;
    int128_t var_28 = data_60e440;
    int32_t rdx = *((&var_48 + ((arg3 >> 5) << 2)) + 8);
    *((&var_48 + ((arg3 >> 5) << 2)) + 8) = ((((!(rdx >> rcx_1)) & 1) << rcx_1) ^ rdx);
    return sub_404240(0, arg1, arg2, &var_48);
}

int64_t sub_4048d0(uint64_t arg1, uint8_t arg2)
{
    /* tailcall */
    return sub_404860(arg1, -1, arg2);
}

int64_t sub_4048e0(uint64_t arg1)
{
    /* tailcall */
    return sub_404860(arg1, -1, 0x3a);
}

int64_t sub_404900(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_404860(arg1, arg2, 0x3a);
}

char* sub_404910(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_404240(arg1, arg3, -1, &var_48);
}

char* sub_404980(int32_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, 
    uint64_t arg5)
{
    int128_t var_48 = data_60e420;
    int128_t var_38 = data_60e430;
    int128_t var_28 = data_60e440;
    int64_t var_18 = data_60e450;
    var_48 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *var_28[8] = arg2;
        int64_t var_18_1 = arg3;
        return sub_404240(arg1, arg4, arg5, &var_48);
    }
    abort();
    /* no return */
}

int64_t sub_404a90(uint64_t arg1)
{
    /* tailcall */
    return sub_404240(0, arg1, -1, &data_60e260);
}

int64_t sub_404ab0(int32_t* arg1)
{
    *arg1 = 0;
}

uint64_t sub_404ac0(int32_t* arg1)
{
    if (*arg1 == 4)
    {
        return arg1[1];
    }
    return 0;
}

uint64_t sub_404ae0(int32_t* arg1, char* arg2, int32_t arg3, int32_t* arg4)
{
    int32_t r12_1;
    int32_t r13;
    if (arg4 == 0)
    {
        r13 = -1;
    label_404b34:;
        int32_t rcx = *arg1;
        if (rcx > 5)
        {
        label_404d24:
            __assert_fail("0", "lib/savewd.c", 0x63, "savewd_save");
            /* no return */
        }
        char rax_4 = (1 << rcx);
        if ((rax_4 & 0x36) != 0)
        {
            goto label_404b80;
        }
        if ((rax_4 & 8) != 0)
        {
            if (arg1[1] < 0)
            {
                goto label_404c4b;
            }
            goto label_404b80;
        }
        if (rcx != 0)
        {
            goto label_404d24;
        }
        int32_t rax_6 = sub_4067c0(&data_40a61b, 0, arg3);
        uint64_t rax_7;
        if (rax_6 < 0)
        {
            int32_t rax_16 = *__errno_location();
            if (rax_16 == 0xd)
            {
            label_404cda:
                *arg1 = -0xfffffffd;
            label_404c4b:;
                pid_t rax_12 = fork();
                arg1[1] = rax_12;
                bool cond0_1 = rax_12 > 0;
                if (rax_12 == 0)
                {
                    goto label_404b80;
                }
                if (cond0_1)
                {
                    rax_7 = 1;
                    r12_1 = -2;
                    goto label_404c00;
                }
                *arg1 = 4;
                arg1[1] = *__errno_location();
                goto label_404b80;
            }
            if (rax_16 == 0x74)
            {
                goto label_404cda;
            }
            *arg1 = 4;
            arg1[1] = rax_16;
            goto label_404b80;
        }
        *arg1 = 1;
        arg1[1] = rax_6;
    label_404b80:
        if (r13 < 0)
        {
            int32_t rax_9 = chdir(arg2);
            r12_1 = rax_9;
            if (rax_9 == 0)
            {
            label_404bd7:
                if (*arg1 > 5)
                {
                label_404cf7:
                    __assert_fail("0", "lib/savewd.c", 0x9f, "savewd_chdir");
                    /* no return */
                }
                switch (*arg1)
                {
                    case 0:
                    {
                        goto label_404cf7;
                    }
                    case 1:
                    {
                        *arg1 = 2;
                    label_404bfa:
                        rax_7 = arg4 == 0;
                        r12_1 = 0;
                        break;
                    }
                    case 2:
                    case 4:
                    case 5:
                    {
                        goto label_404bfa;
                    }
                    case 3:
                    {
                        if (arg1[1] != 0)
                        {
                            __assert_fail("wd->val.child == 0", "lib/savewd.c", 0x9b, "savewd_chdir");
                            /* no return */
                        }
                        goto label_404bfa;
                    }
                }
                goto label_404c00;
            }
        }
        else
        {
            rax_7 = fchdir(r13);
            r12_1 = rax_7;
            if (rax_7 == 0)
            {
                goto label_404bd7;
            }
            rax_7 = arg4 == 0;
        label_404c00:
            if ((r13 >= 0 && rax_7 != 0))
            {
                int32_t* rax_10 = __errno_location();
                int32_t rbp_1 = *rax_10;
                close(r13);
                *rax_10 = rbp_1;
                return r12_1;
            }
        }
    }
    else
    {
        int32_t r14_1 = arg3;
        int32_t rax_1 = __open_2(arg2, (((arg3 << 0x11) & 0x20000) | 0x10900));
        *arg4 = rax_1;
        r13 = rax_1;
        int32_t* rax_2;
        rax_2 = __errno_location();
        int32_t rax_3 = *rax_2;
        arg4[1] = rax_3;
        if (r13 < 0)
        {
            if (rax_3 == 0xd)
            {
                goto label_404b34;
            }
            r12_1 = -1;
        }
        else
        {
            if ((r14_1 & 2) == 0)
            {
                goto label_404b34;
            }
            r12_1 = 0;
        }
    }
    return r12_1;
}

int64_t sub_404d30(int32_t* arg1)
{
    if (*arg1 > 4)
    {
        __assert_fail("0", "lib/savewd.c", 0xe2, "savewd_restore");
        /* no return */
    }
    /* jump -> *((*arg1 << 3) + &data_40b598) */
}

uint64_t sub_404e60(int32_t* arg1)
{
    if (*arg1 > 4)
    {
        __assert_fail("0", "lib/savewd.c", 0xfb, "savewd_finish");
        /* no return */
    }
    uint64_t rax = *arg1;
    if ((rax == 1 || rax == 2))
    {
        rax = close(arg1[1]);
    }
    if (rax == 3)
    {
        rax = arg1[1];
        if (rax >= 0)
        {
            __assert_fail("wd->val.child < 0", "lib/savewd.c", 0xf7, "savewd_finish");
            /* no return */
        }
    }
    if ((rax == 0 || rax == 4))
    {
        /* nop */
    }
    *arg1 = 5;
    return rax;
}

uint64_t sub_404ed0(int32_t arg1, int64_t* arg2, int64_t arg3, int64_t arg4)
{
    int32_t rax = (arg1 - 1);
    int32_t var_40 = 0;
    int32_t rbp_1;
    int32_t r14;
    if (rax >= 0)
    {
        rbp_1 = rax;
        if (*arg2[rax] == 0x2f)
        {
            int64_t rax_4 = (arg1 - 2);
            char* rdx;
            do
            {
                rbp_1 = rax_4;
                if (rax_4 < 0)
                {
                    break;
                }
                rdx = arg2[rax_4];
                rax_4 = (rax_4 - 1);
            } while (*rdx == 0x2f);
        }
        if (rbp_1 > 0)
        {
            int64_t* r15_1 = arg2;
            r14 = 0;
            void* rax_6 = &arg2[((rbp_1 - 1) + 1)];
            int32_t rax_7 = 0;
            while (true)
            {
                int32_t var_3c;
                if ((rax_7 != 3 || (rax_7 == 3 && var_3c <= 0)))
                {
                    int32_t rax_8 = arg3(*r15_1, &var_40, arg4);
                    if (r14 < rax_8)
                    {
                        r14 = rax_8;
                    }
                }
                if (*r15_1[1] != 0x2f)
                {
                    int32_t rax_10 = sub_404d30(&var_40, r14);
                    if (r14 < rax_10)
                    {
                        r14 = rax_10;
                    }
                }
                r15_1 = &r15_1[1];
                if (r15_1 == rax_6)
                {
                    break;
                }
                rax_7 = var_40;
            }
        }
    }
    if ((rax < 0 || (rax >= 0 && rbp_1 <= 0)))
    {
        r14 = 0;
        rbp_1 = 0;
    }
    sub_404e60(&var_40);
    if (arg1 > rbp_1)
    {
        int64_t rdx_2 = rbp_1;
        void* r15_2 = &arg2[rdx_2];
        void* rbp_2 = &arg2[(((rax - rbp_1) + rdx_2) + 1)];
        do
        {
            int32_t rax_15 = arg3(*r15_2, &var_40, arg4);
            if (r14 < rax_15)
            {
                r14 = rax_15;
            }
            r15_2 = (r15_2 + 8);
        } while (r15_2 != rbp_2);
    }
    return r14;
}

int64_t sub_405020(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    __fprintf_chk(arg1, 1, "Copyright %s %d Free Software Fo…", dcgettext(nullptr, &data_40b638, 5), 0x7e1);
    fputs_unlocked(dcgettext(nullptr, "nLicense GPLv3+: GNU GPL versio…", 5), arg1);
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
            rax_6 = dcgettext(nullptr, "Written by %s, %s, %s,n%s, %s, …", 5);
            break;
        }
        case 9:
        {
            rsi_1 = "Written by %s, %s, %s,n%s, %s, …";
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
            rsi_1 = "Written by %s, %s, %s,n%s, %s, …";
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
            return __fprintf_chk(arg1, 1, dcgettext(nullptr, "Written by %s.n", 5), *arg5);
            break;
        }
        case 2:
        {
            /* tailcall */
            return __fprintf_chk(arg1, 1, dcgettext(nullptr, "Written by %s and %s.n", 5), *arg5, arg5[1]);
            break;
        }
        case 3:
        {
            /* tailcall */
            return __fprintf_chk(arg1, 1, dcgettext(nullptr, "Written by %s, %s, and %s.n", 5), *arg5, arg5[1], arg5[2]);
            break;
        }
        case 4:
        {
            r14_1 = arg5[3];
            r13_2 = arg5[2];
            r12_4 = arg5[1];
            rbx_5 = *arg5;
            rax_19 = dcgettext(nullptr, "Written by %s, %s, %s,nand %s.n", 5);
            break;
        }
        case 5:
        {
            int64_t r15_2 = arg5[4];
            r14_1 = arg5[3];
            r13_2 = arg5[2];
            r12_4 = arg5[1];
            rbx_5 = *arg5;
            rax_19 = dcgettext(nullptr, "Written by %s, %s, %s,n%s, and …", 5);
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
            rax_22 = dcgettext(nullptr, "Written by %s, %s, %s,n%s, %s, …", 5);
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
            rax_22 = dcgettext(nullptr, "Written by %s, %s, %s,n%s, %s, …", 5);
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

int64_t sub_405400(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_405020(arg1, arg2, arg3, arg4, arg5, r9);
}

int64_t sub_405420(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_405020(arg1, arg2, arg3, arg4, &var_58, r9);
}

int64_t sub_405480(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
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
    return sub_405020(arg1, arg2, arg3, arg4, &var_88, r9_1);
}

int64_t sub_405540()
{
    __printf_chk(1, dcgettext(nullptr, "nReport bugs to: %sn", 5), "bug-coreutils@gnu.org");
    __printf_chk(1, dcgettext(nullptr, "%s home page: <%s>n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
    /* tailcall */
    return fputs_unlocked(dcgettext(nullptr, "General help using GNU software:…", 5), stdout);
}

int64_t sub_4055c0(size_t arg1)
{
    int64_t rax = malloc(arg1);
    if ((rax == 0 && arg1 != 0))
    {
        sub_405810();
        /* no return */
    }
    return rax;
}

int64_t sub_405620(int64_t arg1, size_t arg2)
{
    if ((arg2 == 0 && arg1 != 0))
    {
        free(arg1);
        return 0;
    }
    int64_t rax = realloc(arg1, arg2);
    if ((rax == 0 && arg2 != 0))
    {
        sub_405810();
        /* no return */
    }
    return rax;
}

noreturn int64_t sub_40576a() 
{
    sub_405810();
    /* no return */
}

int64_t sub_405770(size_t arg1)
{
    /* tailcall */
    return memset(sub_4055c0(arg1), 0, arg1);
}

int64_t sub_405790(size_t arg1, size_t arg2)
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
    sub_405810();
    /* no return */
}

int64_t sub_4057c0(int64_t arg1, size_t arg2)
{
    /* tailcall */
    return memcpy(sub_4055c0(arg2), arg1, arg2);
}

int64_t sub_4057f0(char* arg1)
{
    /* tailcall */
    return sub_4057c0(arg1, (strlen(arg1) + 1));
}

noreturn int64_t sub_405810() 
{
    error(data_60e258, 0, "%s", dcgettext(nullptr, "memory exhausted", 5));
    abort();
    /* no return */
}

uint64_t sub_405850(int64_t arg1, int32_t* arg2)
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

uint64_t sub_405930(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
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
            goto label_405b60;
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
                            goto label_405a86;
                        }
                    }
                    else
                    {
                        if (var_70_1 != 0)
                        {
                            goto label_405a86;
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
                        label_405a86:
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
        label_405b60:;
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
                    goto label_405b8e;
                }
                *arg5 = r12;
            label_405b8e:;
                int32_t* rdx_4 = rbx[2];
                rax_14 = rbx[3];
                if (rdx_4 != 0)
                {
                    *rdx_4 = rax_14;
                    rax_14 = 0;
                }
            }
            goto label_405bac;
        }
        if ((var_70_1 != 0 || (var_70_1 == 0 && var_50_1 != 0)))
        {
            if (arg8 != 0)
            {
                if (var_50_1 != 0)
                {
                    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: option '%s%s' is ambiguousn", 5), *arg2, arg9, r14, arg4);
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
        label_405bac:
            return rax_14;
        }
    }
    if ((arg6 != 0 && *(arg2[*arg7] + 1) != 0x2d))
    {
        rax_14 = 0xffffffff;
        if (strchr(arg3, rax_1) != 0)
        {
            goto label_405bac;
        }
    }
    if (arg8 == 0)
    {
        goto label_405b1e;
    }
    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: unrecognized option '%s%s'n", 5), *arg2, arg9, r14, arg4);
label_405b1e:
    *(arg7 + 0x20) = 0;
    *arg7 = (*arg7 + 1);
    arg7[2] = 0;
    return 0x3f;
}

uint64_t sub_405f50(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
    int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8)
{
    int32_t r13 = arg7[1];
    if (arg1 <= 0)
    {
        goto label_40618c;
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
            goto label_406018;
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
        label_406018:;
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
                    sub_405850(arg2, arg7);
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
                void* const rdi = &data_40bac9;
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
                        sub_405850(arg2, arg7);
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
                    goto label_40618c;
                }
                *arg7 = rdx_2;
            label_40618c:
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
                            goto label_406290;
                        }
                        int32_t* var_88_2;
                        int32_t var_80_2;
                        void* const var_78_1;
                        if (rcx_9 == 0x2d)
                        {
                            *(arg7 + 0x20) = &r14_1[2];
                            var_78_1 = &data_40bac9;
                            var_80_2 = r13;
                            var_88_2 = arg7;
                            goto label_406300;
                        }
                        if (arg6 == 0)
                        {
                            goto label_406290;
                        }
                        if (r14_1[2] == 0)
                        {
                            if (strchr(r15_1, rcx_9) != 0)
                            {
                                goto label_406290;
                            }
                            goto label_406251;
                        }
                    label_406251:
                        *(arg7 + 0x20) = &r14_1[1];
                        int32_t rax_12 = sub_405930(rbp_1, arg2, r15_1, arg4, arg5, arg6, arg7, r13, &data_40baca);
                        r14_2 = rax_12;
                        if (rax_12 == 0xffffffff)
                        {
                            r14_1 = arg2[*arg7];
                        label_406290:
                            rdx = &r14_1[1];
                        label_4060d1:
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
                                        goto label_4062ce;
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
                                    label_4062ce:
                                        *(arg7 + 0x20) = r8_1;
                                        arg6 = 0;
                                        *(arg7 + 0x10) = 0;
                                        var_78_1 = &data_40bae8;
                                        var_80_2 = r13;
                                        var_88_2 = arg7;
                                    label_406300:
                                        r14_2 = sub_405930(rbp_1, arg2, r15_1, arg4, arg5, arg6, var_88_2, var_80_2, var_78_1);
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
                                    goto label_4063bd;
                                }
                                int64_t rbp_2 = *arg2;
                                __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: invalid option -- '%c'n", 5), rbp_2, r14_2);
                            label_4063bd:
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
                        goto label_40618c;
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
            goto label_406018;
        }
        goto label_4060d1;
    }
}

uint64_t sub_406580(int32_t arg1, int64_t* arg2, char* arg3)
{
    return _getopt_internal(arg1, arg2, arg3, nullptr, nullptr, 0, 1);
}

uint64_t sub_406620(uint32_t* arg1, char* arg2, uint64_t arg3, mbstate_t* arg4)
{
    uint64_t rbx_1;
    char* rbp_1;
    uint32_t* r12_1;
    if (arg2 == 0)
    {
        arg3 = 1;
        rbp_1 = &data_40bacc[0x1b];
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
                goto label_40664a;
            }
        }
    }
    if ((arg2 == 0 || (arg2 != 0 && arg3 != 0)))
    {
        void var_1c;
        r12_1 = &var_1c;
    label_40664a:;
        uint64_t rax_1 = mbrtowc(r12_1, rbp_1, arg3, arg4);
        rbx_1 = rax_1;
        if ((rax_1 > -3 && sub_406810() == 0))
        {
            rbx_1 = 1;
            *r12_1 = *rbp_1;
        }
    }
    return rbx_1;
}

uint64_t sub_4066a0(FILE* arg1, char* arg2, int64_t arg3)
{
    uint64_t var_800 = 0x7d0;
    void var_7f8;
    char* rax;
    uint16_t x87control;
    int80_t st0;
    rax = sub_4072f0(&var_7f8, &var_800, arg2, arg3, x87control);
    uint64_t rbx = var_800;
    uint64_t rax_1;
    if (rax != 0)
    {
        rax_1 = fwrite(rax, 1, rbx, arg1);
        if (rax_1 < rbx)
        {
            rbx = 0xffffffff;
            if (rax != &var_7f8)
            {
                int32_t* rax_3 = __errno_location();
                int32_t r13_1 = *rax_3;
                free(rax);
                *rax_3 = r13_1;
            }
        }
        else
        {
            if (rax != &var_7f8)
            {
                free(rax);
            }
            if (rbx > 0x7fffffff)
            {
                *__errno_location() = 0x4b;
            }
        }
    }
    if ((((rax != 0 && rax_1 >= rbx) && rbx > 0x7fffffff) || rax == 0))
    {
        rbx = 0xffffffff;
        sub_4072e0(arg1);
    }
    return rbx;
}

uint64_t sub_406760(FILE* arg1)
{
    int32_t* rbp = arg1;
    uint64_t rax = __fpending(arg1);
    int32_t rbx_1 = (*rbp & 0x20);
    uint64_t rax_1 = sub_4071c0(rbp);
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

uint64_t sub_4067c0(char* arg1, int64_t arg2, int32_t arg3)
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
    return sub_407170(open(arg1, arg2, rdx));
}

int64_t sub_406810()
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
        void* const rdi_1 = &data_40baec;
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

char* sub_406870()
{
    char* rax = nl_langinfo(0xe);
    char* r15 = data_60e498;
    char* rbx = rax;
    if (rax == 0)
    {
        rbx = &data_40bacc[0x1b];
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
                    goto label_40696c;
                }
                memcpy(rbp_3, r13_1, r14_1);
                goto label_4069b6;
            }
        }
        char* rax_9 = malloc(rdi_7);
        rbp_3 = rax_9;
        if (rax_9 == 0)
        {
        label_40696c:
            r15 = &data_40bacc[0x1b];
        }
        else
        {
            memcpy(rbp_3, r13_1, r14_1);
            rbp_3[r14_1] = 0x2f;
        label_4069b6:;
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
                            label_406a6c:
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
                                    goto label_406bfb;
                                }
                                int64_t* rcx_2 = &var_b8;
                            label_406aa8:;
                                int32_t rdx_5 = *rcx_2;
                                rcx_2 = (rcx_2 + 4);
                                uint32_t rax_20 = (((rdx_5 - 0x1010101) & (!rdx_5)) & 0x80808080);
                                if (rax_20 == 0)
                                {
                                    goto label_406aa8;
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
                            label_406ae2:;
                                int32_t rsi_5 = *rdx_11;
                                rdx_11 = (rdx_11 + 4);
                                uint32_t rax_23 = (((rsi_5 - 0x1010101) & (!rsi_5)) & 0x80808080);
                                if (rax_23 == 0)
                                {
                                    goto label_406ae2;
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
                                    r15 = &data_40bacc[0x1b];
                                    free(rdi_26);
                                    sub_4071c0(rax_12);
                                    goto label_4069f7;
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
                                    label_406cbb:;
                                        uint64_t r8_1 = rsi_17;
                                        rsi_17 = (rsi_17 + 8);
                                        *(r9_5 + r8_1) = *(r10_2 + r8_1);
                                        if (rsi_17 < rcx_12)
                                        {
                                            goto label_406cbb;
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
                                    label_406d09:;
                                        uint64_t rsi_20 = rcx_14;
                                        rcx_14 = (rcx_14 + 8);
                                        *(rdi_24 + rsi_20) = *(r9_6 + rsi_20);
                                        if (rcx_14 < rdx_20)
                                        {
                                            goto label_406d09;
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
                            goto label_406a6c;
                        }
                        break;
                    }
                label_406bfb:
                    sub_4071c0(rax_12);
                    if (var_d0_1 != 0)
                    {
                        *(r15 + var_d0_1) = 0;
                    }
                }
            }
            if ((((rax_11 >= 0 && rax_12 == 0) || rax_11 < 0) || ((rax_11 >= 0 && rax_12 != 0) && var_d0_1 == 0)))
            {
                r15 = &data_40bacc[0x1b];
            }
        label_4069f7:
            free(rbp_3);
        }
        data_60e498 = r15;
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

void* sub_406de0(void* arg1, int32_t* arg2, int64_t arg3, int64_t arg4)
{
    uint64_t r15;
    uint64_t var_8 = r15;
    void* r13 = arg1;
    void* r12 = arg1;
    char* rbp = nullptr;
    char var_44 = 0;
    void* rax_7;
    bool rax_1;
    char rdx;
    do
    {
        r12 = (r12 + 1);
        rdx = *(r12 - 1);
        if (rdx == 0)
        {
            break;
        }
        do
        {
            rax_1 = *r12;
            if (rax_1 == 0x2f)
            {
                if (rdx == 0x2f)
                {
                    break;
                }
                rbp = r12;
                break;
            }
            rax_1 = rax_1 != 0;
            r15 = rdx == 0x2f;
            r15 = (r15 & rax_1);
            if (r15 == 0)
            {
                break;
            }
            if (rbp == 0)
            {
                break;
            }
            void* rax_3 = (rbp - r13);
            int32_t rdx_2;
            if (rax_3 != 1)
            {
                *rbp = 0;
                if (rax_3 != 2)
                {
                    goto label_406e6e;
                }
                if (*r13 != 0x2e)
                {
                    goto label_406e6e;
                }
                if (*(r13 + 1) != 0x2e)
                {
                    goto label_406e6e;
                }
                r15 = 0;
                var_44 = 0;
                rdx_2 = 0;
            label_406e90:;
                int32_t rax_5 = sub_404ae0(arg2, r13, rdx_2, nullptr);
                if (rax_5 != 0xffffffff)
                {
                    *rbp = 0x2f;
                }
                if ((rax_5 == 0xffffffff || (rax_5 != 0xffffffff && rax_5 != 0)))
                {
                    if (r15 != 0)
                    {
                        int32_t* rax_9 = __errno_location();
                        if (*rax_9 == 2)
                        {
                            *rax_9 = r15;
                        }
                    }
                    rax_7 = rax_5;
                    goto label_406edc;
                }
            }
            else if (*r13 != 0x2e)
            {
                *rbp = 0;
            label_406e6e:
                if (arg3(arg1, r13, arg4) < 0)
                {
                    r15 = *__errno_location();
                    rdx_2 = (var_44 & 1);
                }
                else
                {
                    var_44 = r15;
                    rdx_2 = 1;
                    r15 = 0;
                }
                goto label_406e90;
            }
            r13 = r12;
            r12 = (r12 + 1);
            rdx = *(r12 - 1);
        } while (rdx != 0);
    } while ((rax_1 == 0x2f && rdx != 0x2f));
    rax_7 = (r13 - arg1);
label_406edc:
    return rax_7;
}

uint64_t sub_406f70(int32_t arg1, char* arg2, int32_t arg3, int32_t arg4, 
    int32_t arg5, int32_t arg6, int32_t arg7)
{
    void var_c8;
    void* rdx = &var_c8;
    int32_t rcx;
    int32_t rbx;
    int32_t var_b0;
    if (arg1 < 0)
    {
        int32_t rax_4 = __xstat(1, arg2, rdx);
        rbx = rax_4;
        if (rax_4 != 0)
        {
            goto label_40704f;
        }
        rcx = var_b0;
        if ((rcx & 0xf000) != 0x4000)
        {
            rbx = -1;
            *__errno_location() = 0x14;
        label_40704f:
            return rbx;
        }
    }
    else
    {
        int32_t rax = __fxstat(1, arg1, rdx);
        rbx = rax;
        int32_t* rbp_1;
        int32_t r12_1;
        if (rax != 0)
        {
        label_4070f0:;
            int32_t* rax_12 = __errno_location();
            rbp_1 = rax_12;
            r12_1 = *rax_12;
        label_40706c:
            close(arg1);
            *rbp_1 = r12_1;
            goto label_40704f;
        }
        rcx = var_b0;
        if ((rcx & 0xf000) != 0x4000)
        {
            int32_t* rax_6 = __errno_location();
            r12_1 = 0x14;
            rbx = -1;
            *rax_6 = 0x14;
            rbp_1 = rax_6;
            goto label_40706c;
        }
    }
    int32_t var_ac;
    int32_t rdx_3;
    if ((arg4 == 0xffffffff || (arg4 != 0xffffffff && var_ac == arg4)))
    {
        int32_t var_a8;
        if (arg5 == 0xffffffff)
        {
        label_407091:
            rdx_3 = 0;
        }
        else if (var_a8 == arg5)
        {
            goto label_407091;
        }
    }
    if (((arg4 != 0xffffffff && var_ac != arg4) || ((arg4 == 0xffffffff || (arg4 != 0xffffffff && var_ac == arg4)) && arg5 != 0xffffffff)))
    {
        if (arg1 >= 0)
        {
            int32_t rax_11 = fchown(arg1, arg4, arg5);
            rbx = rax_11;
            if (rax_11 != 0)
            {
                goto label_4070f0;
            }
        }
        else
        {
            uint64_t rdx_1 = arg5;
            uint64_t rsi_1 = arg4;
            if (arg3 == 0xffffffff)
            {
                rbx = chown(arg2, rsi_1, rdx_1);
            }
            else
            {
                rbx = lchown(arg2, rsi_1, rdx_1);
            }
            if (rbx != 0)
            {
                goto label_40704f;
            }
        }
        if ((rcx & 0x49) != 0)
        {
            rdx_3 = (rcx & 0xc00);
        }
    }
    if ((((arg4 == 0xffffffff || (arg4 != 0xffffffff && var_ac == arg4)) && arg5 == 0xffffffff) || (((arg4 != 0xffffffff && var_ac != arg4) || ((arg4 == 0xffffffff || (arg4 != 0xffffffff && var_ac == arg4)) && arg5 != 0xffffffff)) && (rcx & 0x49) != 0)))
    {
        if ((arg7 & ((rcx ^ arg6) | rdx_3)) == 0)
        {
            rbx = 0;
            if (arg1 >= 0)
            {
            label_407118:
                rbx = close(arg1);
            }
            goto label_40704f;
        }
        uint64_t rsi_6 = ((((!arg7) & rcx) & 0xfff) | arg6);
        if (arg1 >= 0)
        {
            int32_t rax_15 = fchmod(arg1, rsi_6);
            rbx = rax_15;
            if (rax_15 != 0)
            {
                goto label_4070f0;
            }
            goto label_407118;
        }
        rbx = chmod(arg2, rsi_6);
        goto label_40704f;
    }
    if ((((arg4 != 0xffffffff && var_ac != arg4) || ((arg4 == 0xffffffff || (arg4 != 0xffffffff && var_ac == arg4)) && arg5 != 0xffffffff)) && (rcx & 0x49) == 0))
    {
        goto label_407091;
    }
}

uint64_t sub_407170(int32_t arg1)
{
    if (arg1 <= 2)
    {
        int32_t rax_1 = sub_408e10(arg1);
        int32_t* rax_2 = __errno_location();
        int32_t r13 = *rax_2;
        close(arg1);
        *rax_2 = r13;
        return rax_1;
    }
    return arg1;
}

int64_t sub_4071c0(FILE* arg1)
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
        if (((rax_1 == 0 || (rax_1 != 0 && rax_6 != -1)) && sub_407240(arg1) != 0))
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

int64_t sub_407240(FILE* arg1)
{
    int32_t* rbx = arg1;
    if ((arg1 != 0 && (__freading(arg1) != 0 && (*rbx & 0x100) != 0)))
    {
        sub_407280(rbx, 0, 1);
        /* tailcall */
        return fflush(rbx);
    }
    /* tailcall */
    return fflush(rbx);
}

off64_t sub_407280(FILE* arg1, off_t arg2, int32_t arg3)
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

int64_t sub_4072e0(int32_t* arg1)
{
    *arg1 = (*arg1 | 0x20);
}

char* sub_4072f0(char* arg1, uint64_t* arg2, char* arg3, int64_t arg4, 
    uint16_t arg5)
{
    int64_t rbp;
    int64_t __saved_rbp = rbp;
    int64_t r15;
    int64_t __saved_r15 = r15;
    int64_t r14;
    int64_t __saved_r14 = r14;
    int64_t r13;
    int64_t __saved_r13 = r13;
    int64_t r12;
    int64_t __saved_r12 = r12;
    int64_t rbx;
    int64_t __saved_rbx = rbx;
    void var_6f8;
    void* rsp_1 = &var_6f8;
    void var_678;
    int64_t var_588;
    char* rbx_2;
    if (sub_409180(arg3, &var_588, &var_678) < 0)
    {
        rbx_2 = nullptr;
    }
    else
    {
        char* var_670;
        void var_668;
        int64_t* var_580;
        void var_568;
        if (sub_408f60(arg4, &var_678) >= 0)
        {
            int64_t var_578;
            int64_t rax_3 = (var_578 + 7);
            if (rax_3 <= 6)
            {
                rax_3 = -1;
            }
            int64_t var_570;
            int64_t rax_4 = (rax_3 + var_570);
            char* var_6a8;
            int64_t rcx;
            char* r8_1;
            if ((rax_3 + var_570) >= rax_3)
            {
                size_t rdi_3 = (rax_4 + 6);
                if (rax_4 >= -6)
                {
                    goto label_407a15;
                }
                char* var_6e0_1;
                char* var_6b0_1;
                int32_t* rdx_1;
                if (rdi_3 <= 0xf9f)
                {
                    var_6e0_1 = nullptr;
                    rsp_1 = (&var_6f8 - ((rax_4 + 0x1d) & 0xfffffffffffffff0));
                    var_6b0_1 = ((rsp_1 + 0xf) & 0xfffffffffffffff0);
                }
                else
                {
                    if (rdi_3 == -1)
                    {
                        goto label_407a15;
                    }
                    char* rax_5;
                    rax_5 = malloc(rdi_3);
                    var_6b0_1 = rax_5;
                    if (rax_5 == 0)
                    {
                        goto label_407a15;
                    }
                    var_6e0_1 = rax_5;
                }
                size_t r12_1 = 0;
                if (arg1 != 0)
                {
                    r12_1 = *arg2;
                }
                int64_t* r14_1 = var_580;
                r8_1 = arg3;
                rbx_2 = arg1;
                int64_t var_6c0_1 = 0;
                uint64_t r15_2 = 0;
                rcx = *r14_1;
                void* r13_1;
                if (rcx != r8_1)
                {
                    while (true)
                    {
                        void* rcx_1 = (rcx - r8_1);
                        void* rax_8 = (r15_2 + rcx_1);
                        r13_1 = rax_8;
                        int32_t var_698;
                        char* r15_7;
                        if ((r15_2 + rcx_1) < r15_2)
                        {
                            if (r12_1 != -1)
                            {
                            label_4078e5:
                                r15_7 = rbx_2;
                                var_6a8 = __errno_location();
                            }
                            else
                            {
                                r13_1 = ffffffffffffffff;
                            label_407563:
                                memcpy(&rbx_2[r15_2], r8_1, rcx_1);
                            label_40756f:
                                if (var_588 == var_6c0_1)
                                {
                                    uint64_t r15_11 = r13_1;
                                    size_t r14_3 = (r13_1 + 1);
                                    if (r13_1 >= -1)
                                    {
                                        if (r12_1 != -1)
                                        {
                                            goto label_4078e5;
                                        }
                                    }
                                    else if (r12_1 < r14_3)
                                    {
                                        bool cond2_1 = r12_1 < 0;
                                        if ((r12_1 == 0 && r14_3 <= 0xc))
                                        {
                                            r12_1 = 0xc;
                                        label_4086c5:
                                            r13_1 = rbx_2 == arg1;
                                            if ((rbx_2 == 0 || (rbx_2 != 0 && r13_1 != 0)))
                                            {
                                                char* rax_150 = malloc(r12_1);
                                                if (rax_150 == 0)
                                                {
                                                    goto label_4078e5;
                                                }
                                                if ((r15_11 == 0 || (r15_11 != 0 && r13_1 == 0)))
                                                {
                                                    rbx_2 = rax_150;
                                                }
                                                if ((r15_11 != 0 && r13_1 != 0))
                                                {
                                                    rbx_2 = memcpy(rax_150, rbx_2, r15_11);
                                                }
                                            }
                                            if ((rbx_2 != 0 && r13_1 == 0))
                                            {
                                                char* rax_126 = realloc(rbx_2, r12_1);
                                                if (rax_126 == 0)
                                                {
                                                    goto label_407afa;
                                                }
                                                rbx_2 = rax_126;
                                            }
                                        }
                                        if (r12_1 != 0)
                                        {
                                            if (cond2_1)
                                            {
                                                goto label_4078e5;
                                            }
                                            r12_1 = (r12_1 + r12_1);
                                            if (r12_1 >= r14_3)
                                            {
                                                goto label_4086c5;
                                            }
                                        }
                                        if (((r12_1 == 0 && r14_3 > 0xc) || r12_1 != 0))
                                        {
                                            if (r14_3 == -1)
                                            {
                                                goto label_4078e5;
                                            }
                                            r12_1 = r14_3;
                                            goto label_4086c5;
                                        }
                                    }
                                    rbx_2[r15_11] = 0;
                                    if ((r12_1 > r14_3 && rbx_2 != arg1))
                                    {
                                        char* rax_127 = realloc(rbx_2, r14_3);
                                        if (rax_127 != 0)
                                        {
                                            rbx_2 = rax_127;
                                        }
                                    }
                                    if (var_6e0_1 != 0)
                                    {
                                        free(var_6e0_1);
                                    }
                                    if (var_580 != &var_568)
                                    {
                                        free(var_580);
                                    }
                                    if (var_670 != &var_668)
                                    {
                                        free(var_670);
                                    }
                                    *arg2 = r15_11;
                                    goto label_407971;
                                }
                                char r15_3 = r14_1[9];
                                int64_t rax_17 = r14_1[0xa];
                                if (r15_3 == 0x25)
                                {
                                    if (rax_17 != -1)
                                    {
                                    label_40801c:
                                        abort();
                                        /* no return */
                                    }
                                    uint64_t rax_47 = (r13_1 + 1);
                                    r15_2 = rax_47;
                                    if (r13_1 < -1)
                                    {
                                        if (r12_1 >= rax_47)
                                        {
                                            goto label_4079e2;
                                        }
                                        bool cond4_1 = r12_1 < 0;
                                        if (r12_1 != 0)
                                        {
                                            if (cond4_1)
                                            {
                                                goto label_4078e5;
                                            }
                                            r12_1 = (r12_1 + r12_1);
                                            if (r12_1 >= rax_47)
                                            {
                                                goto label_4079b7;
                                            }
                                        }
                                        else if (rax_47 <= 0xc)
                                        {
                                            r12_1 = 0xc;
                                        label_4079b7:
                                            rdx_1 = rbx_2 == arg1;
                                            if (rbx_2 == 0)
                                            {
                                            label_4081d3:
                                                var_698 = rdx_1;
                                                char* rax_107 = malloc(r12_1);
                                                rdx_1 = var_698;
                                                if (rax_107 == 0)
                                                {
                                                    goto label_4078e5;
                                                }
                                                if ((r13_1 == 0 || (r13_1 != 0 && rdx_1 == 0)))
                                                {
                                                    rbx_2 = rax_107;
                                                }
                                                if ((r13_1 != 0 && rdx_1 != 0))
                                                {
                                                    char* rax_108;
                                                    rax_108 = memcpy(rax_107, rbx_2, r13_1);
                                                    rbx_2 = rax_108;
                                                }
                                                goto label_4079e2;
                                            }
                                            if (rdx_1 != 0)
                                            {
                                                goto label_4081d3;
                                            }
                                            char* rax_48;
                                            rax_48 = realloc(rbx_2, r12_1);
                                            if (rax_48 == 0)
                                            {
                                                goto label_407afa;
                                            }
                                            rbx_2 = rax_48;
                                            goto label_4079e2;
                                        }
                                        if (rax_47 == -1)
                                        {
                                            goto label_4078e5;
                                        }
                                        r12_1 = rax_47;
                                        goto label_4079b7;
                                    }
                                    if (r12_1 != -1)
                                    {
                                        goto label_4078e5;
                                    }
                                    r15_2 = -1;
                                label_4079e2:
                                    *(rbx_2 + r13_1) = 0x25;
                                label_4079e7:
                                    r8_1 = r14_1[1];
                                    r14_1 = &r14_1[0xb];
                                    rcx = *r14_1;
                                    var_6c0_1 = (var_6c0_1 + 1);
                                    if (rcx == r8_1)
                                    {
                                        break;
                                    }
                                    continue;
                                }
                                else
                                {
                                    if (rax_17 == -1)
                                    {
                                        goto label_40801c;
                                    }
                                    rdx_1 = &var_670[(rax_17 << 5)];
                                    int32_t rax_19 = *rdx_1;
                                    if (r15_3 == 0x6e)
                                    {
                                        uint64_t rax_50 = (rax_19 - 0x12);
                                        if (rax_50 > 4)
                                        {
                                        label_401bfe:
                                            abort();
                                            /* no return */
                                        }
                                        switch (rax_50)
                                        {
                                            case 0:
                                            {
                                                r15_2 = r13_1;
                                                **(rdx_1 + 0x10) = r13_1;
                                                break;
                                            }
                                            case 1:
                                            {
                                                r15_2 = r13_1;
                                                **(rdx_1 + 0x10) = r13_1;
                                                break;
                                            }
                                            case 2:
                                            {
                                                r15_2 = r13_1;
                                                **(rdx_1 + 0x10) = r13_1;
                                                break;
                                            }
                                            case 3:
                                            case 4:
                                            {
                                                r15_2 = r13_1;
                                                **(rdx_1 + 0x10) = r13_1;
                                                break;
                                            }
                                        }
                                        goto label_4079e7;
                                    }
                                    char rax_21 = (r15_3 & 0xdf);
                                    int64_t var_6c8;
                                    char* var_6b8;
                                    int16_t var_680;
                                    if (((rax_21 - 0x45) > 2 && rax_21 != 0x41))
                                    {
                                    label_4075f7:;
                                        char rax_22 = r14_1[2];
                                        void* r15_4 = &var_6b0_1[1];
                                        *var_6b0_1 = 0x25;
                                        if ((rax_22 & 1) != 0)
                                        {
                                            var_6b0_1[1] = 0x27;
                                            r15_4 = &var_6b0_1[2];
                                        }
                                        if ((rax_22 & 2) != 0)
                                        {
                                            *r15_4 = 0x2d;
                                            r15_4 = (r15_4 + 1);
                                        }
                                        if ((rax_22 & 4) != 0)
                                        {
                                            *r15_4 = 0x2b;
                                            r15_4 = (r15_4 + 1);
                                        }
                                        if ((rax_22 & 8) != 0)
                                        {
                                            *r15_4 = 0x20;
                                            r15_4 = (r15_4 + 1);
                                        }
                                        if ((rax_22 & 0x10) != 0)
                                        {
                                            *r15_4 = 0x23;
                                            r15_4 = (r15_4 + 1);
                                        }
                                        if ((rax_22 & 0x40) != 0)
                                        {
                                            *r15_4 = 0x49;
                                            r15_4 = (r15_4 + 1);
                                        }
                                        if ((rax_22 & 0x20) != 0)
                                        {
                                            *r15_4 = 0x30;
                                            r15_4 = (r15_4 + 1);
                                        }
                                        int64_t rsi_6 = r14_1[3];
                                        int64_t rdx_5 = r14_1[4];
                                        if (rsi_6 != rdx_5)
                                        {
                                            uint64_t rcx_4 = (rdx_5 - rsi_6);
                                            memcpy(r15_4, rsi_6, rcx_4);
                                            r15_4 = (r15_4 + rcx_4);
                                        }
                                        int64_t rsi_7 = r14_1[6];
                                        uint64_t rdx_7 = r14_1[7];
                                        if (rsi_7 != rdx_7)
                                        {
                                            uint64_t rcx_7 = (rdx_7 - rsi_7);
                                            memcpy(r15_4, rsi_7, rcx_7);
                                            r15_4 = (r15_4 + rcx_7);
                                        }
                                        if (rax_19 <= 0x10)
                                        {
                                            int32_t rax_23 = (1 << rax_19);
                                            if ((rax_23 & 0x14180) == 0)
                                            {
                                                if ((*rax_23[1] & 0x10) != 0)
                                                {
                                                    *r15_4 = 0x4c;
                                                    r15_4 = (r15_4 + 1);
                                                }
                                                if (((*rax_23[1] & 0x10) == 0 && (*rax_23[1] & 6) != 0))
                                                {
                                                    *r15_4 = 0x6c;
                                                    r15_4 = (r15_4 + 1);
                                                }
                                            }
                                            if (((((rax_23 & 0x14180) == 0 && (*rax_23[1] & 0x10) == 0) && (*rax_23[1] & 6) != 0) || (rax_23 & 0x14180) != 0))
                                            {
                                                *r15_4 = 0x6c;
                                                r15_4 = (r15_4 + 1);
                                            }
                                        }
                                        char rax_24 = r14_1[9];
                                        *(r15_4 + 1) = 0;
                                        *r15_4 = rax_24;
                                        int64_t rax_25 = r14_1[5];
                                        if (rax_25 != -1)
                                        {
                                            void* rax_27 = &var_670[(rax_25 << 5)];
                                            if (*rax_27 != 5)
                                            {
                                                goto label_40801c;
                                            }
                                            var_6b8 = 1;
                                            var_680 = *(rax_27 + 0x10);
                                            goto label_40774e;
                                        }
                                        var_6b8 = 0;
                                    label_40774e:;
                                        int64_t rax_29 = r14_1[8];
                                        if (rax_29 == -1)
                                        {
                                            goto label_407786;
                                        }
                                        void* r8_3 = &var_670[(rax_29 << 5)];
                                        if (*r8_3 != 5)
                                        {
                                            goto label_40801c;
                                        }
                                        uint64_t rax_31 = var_6b8;
                                        *(&var_680 + (rax_31 << 2)) = *(r8_3 + 0x10);
                                        var_6b8 = (rax_31 + 1);
                                    label_407786:;
                                        void* rax_34 = (r13_1 + 2);
                                        char* r11_1;
                                        if (r13_1 < -2)
                                        {
                                            if (r12_1 >= rax_34)
                                            {
                                                goto label_4081c8;
                                            }
                                            bool cond22_1 = r12_1 < 0;
                                            if (r12_1 != 0)
                                            {
                                                if (cond22_1)
                                                {
                                                    goto label_4078e5;
                                                }
                                                r12_1 = (r12_1 + r12_1);
                                                if (r12_1 >= rax_34)
                                                {
                                                    goto label_4077b9;
                                                }
                                            }
                                            else if (rax_34 <= 0xc)
                                            {
                                                r12_1 = 0xc;
                                            label_4077b9:
                                                rdx_7 = rbx_2 == arg1;
                                                if (rbx_2 == 0)
                                                {
                                                label_408173:
                                                    var_6a8 = rdx_7;
                                                    char* rax_105 = malloc(r12_1);
                                                    char rdx_17 = var_6a8;
                                                    r11_1 = rax_105;
                                                    if (rax_105 == 0)
                                                    {
                                                        goto label_4078e5;
                                                    }
                                                    if ((r13_1 != 0 && rdx_17 != 0))
                                                    {
                                                        r11_1 = memcpy(rax_105, rbx_2, r13_1);
                                                    }
                                                    goto label_4077e4;
                                                }
                                                if (rdx_7 != 0)
                                                {
                                                    goto label_408173;
                                                }
                                                char* rax_35 = realloc(rbx_2, r12_1);
                                                r11_1 = rax_35;
                                                if (rax_35 == 0)
                                                {
                                                    goto label_4078e5;
                                                }
                                                goto label_4077e4;
                                            }
                                            if (rax_34 == -1)
                                            {
                                                goto label_4078e5;
                                            }
                                            r12_1 = rax_34;
                                            goto label_4077b9;
                                        }
                                        if (r12_1 != -1)
                                        {
                                            goto label_4078e5;
                                        }
                                    label_4081c8:
                                        r11_1 = rbx_2;
                                    label_4077e4:
                                        *(r11_1 + r13_1) = 0;
                                        int32_t* rax_36 = __errno_location();
                                        char* r11_2 = r11_1;
                                        var_6c8 = r15_4;
                                        var_6a8 = rax_36;
                                        int32_t rax_37 = *rax_36;
                                    label_407822:;
                                        void* rbx_3 = 0x7fffffff;
                                        int32_t var_684 = 0xffffffff;
                                        void* r15_6 = (r12_1 - r13_1);
                                        *var_6a8 = 0;
                                        uint64_t rax_39 = rax_19;
                                        if (r15_6 <= 0x7fffffff)
                                        {
                                            rbx_3 = r15_6;
                                        }
                                        if (rax_39 > 0x11)
                                        {
                                            goto label_401bfe;
                                        }
                                        char* var_6d0_1;
                                        int32_t var_67c;
                                        int32_t rax_56;
                                        int32_t rax_58;
                                        void* rsp_3;
                                        void* rsp_6;
                                        void* rsp_10;
                                        void* rsp_11;
                                        int64_t rdi_18;
                                        int32_t* r9_2;
                                        uint64_t r9_3;
                                        switch (rax_39)
                                        {
                                            case 0:
                                            {
                                                goto label_401bfe;
                                            }
                                            case 1:
                                            {
                                                r9_3 = var_670[((r14_1[0xa] << 5) + 0x10)];
                                                goto label_407c6b;
                                            }
                                            case 2:
                                            {
                                                r9_3 = var_670[((r14_1[0xa] << 5) + 0x10)];
                                                goto label_407c6b;
                                            }
                                            case 3:
                                            {
                                                r9_3 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                                goto label_407c6b;
                                            }
                                            case 4:
                                            {
                                                r9_3 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                                goto label_407c6b;
                                            }
                                            case 5:
                                            case 6:
                                            case 0xd:
                                            case 0xe:
                                            {
                                                r9_3 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                            label_407c6b:;
                                                int32_t rax_66 = var_6b8;
                                                rdi_18 = (r11_2 + r13_1);
                                                var_6d0_1 = r11_2;
                                                if (rax_66 == 1)
                                                {
                                                    *(rsp_1 - 8) = &var_684;
                                                    *(rsp_1 - 0x10) = r9_3;
                                                    rsp_6 = (rsp_1 - 0x10);
                                                    goto label_4080f2;
                                                }
                                                if (rax_66 == 2)
                                                {
                                                    *(rsp_1 - 0x10) = &var_684;
                                                    *(rsp_1 - 0x18) = r9_3;
                                                    rsp_10 = (rsp_1 - 0x18);
                                                    goto label_4080ac;
                                                }
                                                *(rsp_1 - 0x10) = &var_684;
                                                rsp_6 = (rsp_1 - 0x10);
                                                goto label_407cb2;
                                            }
                                            case 7:
                                            case 8:
                                            case 9:
                                            case 0xa:
                                            case 0xf:
                                            case 0x10:
                                            case 0x11:
                                            {
                                                rdi_18 = (r11_2 + r13_1);
                                                r9_2 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                                rax_56 = var_6b8;
                                                var_6d0_1 = r11_2;
                                                break;
                                            }
                                            case 0xb:
                                            {
                                                int512_t zmm0;
                                                zmm0 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                                int32_t rax_83 = var_6b8;
                                                void* rsp_17;
                                                if (rax_83 == 1)
                                                {
                                                    *(rsp_1 - 0x10) = &var_684;
                                                    rsp_17 = (rsp_1 - 0x10);
                                                }
                                                if (rax_83 == 2)
                                                {
                                                    *(rsp_1 - 8) = &var_684;
                                                    *(rsp_1 - 0x10) = var_67c;
                                                    rsp_17 = (rsp_1 - 0x10);
                                                }
                                                if ((rax_83 == 1 || rax_83 == 2))
                                                {
                                                    rax_58 = __snprintf_chk();
                                                    *rsp_17;
                                                    *(rsp_17 + 8);
                                                    rsp_1 = (rsp_17 + 0x10);
                                                }
                                                if ((rax_83 != 1 && rax_83 != 2))
                                                {
                                                    rax_58 = __snprintf_chk();
                                                }
                                                goto label_407b80;
                                            }
                                            case 0xc:
                                            {
                                                rdi_18 = (r11_2 + r13_1);
                                                var_6d0_1 = r11_2;
                                                int80_t x87_r7_2 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                                int32_t rax_76 = var_6b8;
                                                if (rax_76 != 1)
                                                {
                                                    if (rax_76 == 2)
                                                    {
                                                        *(rsp_1 - 0x10) = &var_684;
                                                        *(rsp_1 - 0x20) = x87_r7_2;
                                                        *(rsp_1 - 0x30) = var_67c;
                                                        rax_58 = __snprintf_chk();
                                                        r11_2 = var_6d0_1;
                                                        goto label_407b80;
                                                    }
                                                    rsp_3 = (rsp_1 - 0x10);
                                                    r9_2 = &var_684;
                                                    *rsp_3 = x87_r7_2;
                                                    goto label_407b72;
                                                }
                                                *(rsp_1 - 0x10) = &var_684;
                                                rsp_11 = (rsp_1 - 0x20);
                                                *rsp_11 = x87_r7_2;
                                            label_4080cc:;
                                                rax_58 = __snprintf_chk(rdi_18, rbx_3, 1, -1, var_6b0_1, var_680);
                                                rsp_1 = (rsp_11 + 0x20);
                                                r11_2 = var_6d0_1;
                                            label_407b80:
                                                rdx_1 = var_684;
                                                if (rdx_1 >= 0)
                                                {
                                                    goto label_407b8e;
                                                }
                                                break;
                                            }
                                        }
                                        if (((((((rax_39 == 7 || rax_39 == 8) || rax_39 == 9) || rax_39 == 0xa) || rax_39 == 0xf) || rax_39 == 0x10) || rax_39 == 0x11))
                                        {
                                            if (rax_56 != 1)
                                            {
                                                if (rax_56 == 2)
                                                {
                                                    *(rsp_1 - 0x10) = &var_684;
                                                    *(rsp_1 - 0x18) = r9_2;
                                                    rsp_10 = (rsp_1 - 0x18);
                                                label_4080ac:
                                                    *(rsp_10 - 8) = var_67c;
                                                    rsp_11 = (rsp_10 - 8);
                                                    goto label_4080cc;
                                                }
                                                *(rsp_1 - 0x10) = &var_684;
                                                rsp_3 = (rsp_1 - 0x10);
                                            label_407b72:;
                                                rax_58 = __snprintf_chk(rdi_18, rbx_3, 1, -1, var_6b0_1, r9_2);
                                                r11_2 = var_6d0_1;
                                                *rsp_3;
                                                *(rsp_3 + 8);
                                                rsp_1 = (rsp_3 + 0x10);
                                                goto label_407b80;
                                            }
                                            *(rsp_1 - 8) = &var_684;
                                            *(rsp_1 - 0x10) = r9_2;
                                            rsp_6 = (rsp_1 - 0x10);
                                        label_4080f2:
                                            r9_3 = var_680;
                                        label_407cb2:;
                                            rax_58 = __snprintf_chk(rdi_18, rbx_3, 1, -1, var_6b0_1, r9_3);
                                            rdx_1 = var_684;
                                            *(rsp_6 + 8);
                                            rsp_1 = (rsp_6 + 0x10);
                                            r11_2 = var_6d0_1;
                                            if (rdx_1 >= 0)
                                            {
                                            label_407b8e:;
                                                int64_t rcx_16 = rdx_1;
                                                if ((rcx_16 < rbx_3 && *(&r11_2[rcx_16] + r13_1) != 0))
                                                {
                                                    goto label_40801c;
                                                }
                                                if (rdx_1 < rax_58)
                                                {
                                                label_407ba8:
                                                    var_684 = rax_58;
                                                    rdx_1 = rax_58;
                                                }
                                                if ((rdx_1 + 1) < rbx_3)
                                                {
                                                    rbx_2 = r11_2;
                                                    r15_2 = (rdx_1 + r13_1);
                                                    *var_6a8 = rax_37;
                                                    goto label_4079e7;
                                                }
                                                if (r15_6 > 0x7ffffffe)
                                                {
                                                    if ((r11_2 != arg1 && r11_2 != 0))
                                                    {
                                                        free(r11_2);
                                                    }
                                                    if (var_6e0_1 != 0)
                                                    {
                                                        free(var_6e0_1);
                                                    }
                                                    if (var_580 != &var_568)
                                                    {
                                                        free(var_580);
                                                    }
                                                    if (var_670 != &var_668)
                                                    {
                                                        free(var_670);
                                                    }
                                                    rbx_2 = nullptr;
                                                    *var_6a8 = 0x4b;
                                                    break;
                                                }
                                                uint64_t rax_60 = (rdx_1 + 2);
                                                void* rax_61 = (rax_60 + r13_1);
                                                int64_t rcx_18;
                                                rcx_18 = (rax_60 + r13_1) < rax_60;
                                                if (r12_1 >= 0)
                                                {
                                                    void* rdx_13 = (r12_1 + r12_1);
                                                    if (rcx_18 == 0)
                                                    {
                                                        if (rdx_13 >= rax_61)
                                                        {
                                                            rax_61 = rdx_13;
                                                        }
                                                        if (r12_1 >= rax_61)
                                                        {
                                                            goto label_407822;
                                                        }
                                                        r12_1 = (r12_1 + r12_1);
                                                        if ((r12_1 < rax_61 && rax_61 != -1))
                                                        {
                                                            r12_1 = rax_61;
                                                        }
                                                        if (((r12_1 < rax_61 && rax_61 != -1) || r12_1 >= rax_61))
                                                        {
                                                            rbx_3 = r11_2 == arg1;
                                                            if ((r11_2 == 0 || (r11_2 != 0 && rbx_3 != 0)))
                                                            {
                                                                char* rax_101 = malloc(r12_1);
                                                                if (rax_101 != 0)
                                                                {
                                                                    if ((r13_1 != 0 && rbx_3 != 0))
                                                                    {
                                                                        r11_2 = memcpy(rax_101, r11_2, r13_1);
                                                                        goto label_407822;
                                                                    }
                                                                    r11_2 = rax_101;
                                                                    goto label_407822;
                                                                }
                                                            }
                                                            if ((r11_2 != 0 && rbx_3 == 0))
                                                            {
                                                                char* rax_62 = realloc(r11_2, r12_1);
                                                                if (rax_62 != 0)
                                                                {
                                                                    r11_2 = rax_62;
                                                                    goto label_407822;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else if (r12_1 == -1)
                                                {
                                                    goto label_407822;
                                                }
                                                r15_7 = r11_2;
                                            }
                                        }
                                        if ((((((((((rax_39 == 7 || rax_39 == 8) || rax_39 == 9) || rax_39 == 0xa) || rax_39 == 0xf) || rax_39 == 0x10) || rax_39 == 0x11) && rax_56 == 1) && rdx_1 < 0) || rax_39 == 0xc))
                                        {
                                            if (*(var_6c8 + 1) != 0)
                                            {
                                                *(var_6c8 + 1) = 0;
                                                goto label_407822;
                                            }
                                            if (rax_58 < 0)
                                            {
                                                int32_t rbx_4 = *var_6a8;
                                                if (rbx_4 == 0)
                                                {
                                                    rbx_4 = 0x54;
                                                    if ((r14_1[9] & 0xef) != 0x63)
                                                    {
                                                        rbx_4 = 0x16;
                                                    }
                                                }
                                                if ((r11_2 != arg1 && r11_2 != 0))
                                                {
                                                    free(r11_2);
                                                }
                                                if (var_6e0_1 != 0)
                                                {
                                                    free(var_6e0_1);
                                                }
                                                if (var_580 != &var_568)
                                                {
                                                    free(var_580);
                                                }
                                                if (var_670 != &var_668)
                                                {
                                                    free(var_670);
                                                }
                                                *var_6a8 = rbx_4;
                                                rbx_2 = nullptr;
                                                break;
                                            }
                                            goto label_407ba8;
                                        }
                                    }
                                    if (((rax_21 - 0x45) <= 2 || ((rax_21 - 0x45) > 2 && rax_21 == 0x41)))
                                    {
                                        if (rax_19 != 0xc)
                                        {
                                            goto label_4075f7;
                                        }
                                        long double x87_r7_1 = *(rdx_1 + 0x10);
                                        if ((!(FCMP_UO(x87_r7_1, x87_r7_1))))
                                        {
                                            long double x87_r6_3 = x87_r7_1;
                                            x87_r7_1 = (x87_r7_1 + x87_r7_1);
                                            (x87_r6_3 - x87_r7_1);
                                            bool cond7_1 = x87_r6_3 != x87_r7_1;
                                            if ((FCMP_UO(x87_r6_3, x87_r7_1)))
                                            {
                                                goto label_4075f7;
                                            }
                                            if (cond7_1)
                                            {
                                                goto label_4075f7;
                                            }
                                            goto label_407a7d;
                                        }
                                    label_407a7d:;
                                        char* rdx_11 = r14_1[3];
                                        int64_t rdi_16 = r14_1[4];
                                        int32_t r11_3 = r14_1[2];
                                        int64_t r10_1;
                                        if (rdx_11 == rdi_16)
                                        {
                                            r10_1 = 0;
                                        label_407870:;
                                            void* rdx_9 = r14_1[6];
                                            int64_t rcx_10 = r14_1[7];
                                            int64_t rcx_11;
                                            int64_t rdx_10;
                                            if (rdx_9 != rcx_10)
                                            {
                                                int64_t rsi_10 = r14_1[8];
                                                if (rsi_10 == -1)
                                                {
                                                    char* rax_139 = (rdx_9 + 1);
                                                    rdx_10 = 0;
                                                    if (rcx_10 == rax_139)
                                                    {
                                                    label_408b54:
                                                        rcx_11 = 0xc;
                                                    label_407f41:;
                                                        int64_t rax_97 = rcx_11;
                                                        if (r10_1 >= rcx_11)
                                                        {
                                                            rax_97 = r10_1;
                                                        }
                                                        size_t rax_98 = (rax_97 + 1);
                                                        var_698 = rax_98;
                                                        if (rax_97 >= -1)
                                                        {
                                                            goto label_4078e5;
                                                        }
                                                        void var_2f8;
                                                        int64_t rcx_21;
                                                        if (rax_98 <= 0x2bc)
                                                        {
                                                            rcx_21 = &var_2f8;
                                                        }
                                                        else
                                                        {
                                                            var_6b8 = r11_3;
                                                            var_6a8 = x87_r7_1;
                                                            if (rax_98 == -1)
                                                            {
                                                                goto label_4078e5;
                                                            }
                                                            int64_t rax_99 = malloc(rax_98);
                                                            r11_3 = var_6b8;
                                                            x87_r7_1 = var_6a8;
                                                            rcx_21 = rax_99;
                                                            if (rax_99 == 0)
                                                            {
                                                                goto label_4078e5;
                                                            }
                                                        }
                                                        int64_t r9_6;
                                                        int64_t r15_9;
                                                        if ((!(FCMP_UO(x87_r7_1, x87_r7_1))))
                                                        {
                                                            uint16_t x87status_1;
                                                            int16_t temp0_2;
                                                            temp0_2 = __fnstcw_memmem16(arg5);
                                                            var_680 = temp0_2;
                                                            int32_t r8_7 = var_680;
                                                            int16_t rax_100;
                                                            *rax_100[1] = (*r8_7[1] | 3);
                                                            var_680 = rax_100;
                                                            uint16_t x87control;
                                                            uint16_t x87status_2;
                                                            x87control = __fldcw_memmem16(var_680);
                                                            bool c0_1;
                                                            bool c1_1;
                                                            bool c2_1;
                                                            bool c3_1;
                                                            c0_1 = __fxam(x87_r7_1);
                                                            if ((*((((c0_1) ? 1 : 0) << 8) | ((((c1_1) ? 1 : 0) << 9) | ((((c2_1) ? 1 : 0) << 0xa) | ((((c3_1) ? 1 : 0) << 0xe) | 0x3800))))[1] & 2) != 0)
                                                            {
                                                                *rcx_21 = 0x2d;
                                                                x87_r7_1 = (-x87_r7_1);
                                                                r15_9 = (rcx_21 + 1);
                                                            }
                                                            else if ((r11_3 & 4) != 0)
                                                            {
                                                                r15_9 = (rcx_21 + 1);
                                                                *rcx_21 = 0x2b;
                                                            }
                                                            else
                                                            {
                                                                r15_9 = rcx_21;
                                                                if ((r11_3 & 8) != 0)
                                                                {
                                                                    r15_9 = (rcx_21 + 1);
                                                                    *rcx_21 = 0x20;
                                                                }
                                                            }
                                                            long double x87_r6_4 = 0;
                                                            if (x87_r7_1 <= x87_r6_4)
                                                            {
                                                                (x87_r7_1 - x87_r6_4);
                                                                bool cond14_1 = x87_r7_1 != x87_r6_4;
                                                                if ((FCMP_UO(x87_r7_1, x87_r6_4)))
                                                                {
                                                                    goto label_40801c;
                                                                }
                                                                if (cond14_1)
                                                                {
                                                                    goto label_40801c;
                                                                }
                                                                bool rax_118 = (r14_1[9] & 0xdf);
                                                                int32_t var_6e8;
                                                                if (rax_118 == 0x46)
                                                                {
                                                                    *r15_9 = 0x30;
                                                                    if ((r11_3 & 0x10) != 0)
                                                                    {
                                                                    label_408979:
                                                                        var_6e8 = r10_1;
                                                                        var_6b8 = r11_3;
                                                                        r9_6 = (r15_9 + 2);
                                                                        char rax_137 = *nl_langinfo(0x10000);
                                                                        r11_3 = var_6b8;
                                                                        r10_1 = var_6e8;
                                                                        if (rax_137 == 0)
                                                                        {
                                                                            rax_137 = 0x2e;
                                                                        }
                                                                        *(r15_9 + 1) = rax_137;
                                                                        if (rdx_10 != 0)
                                                                        {
                                                                            int64_t rsi_34 = ((r15_9 + rdx_10) + 2);
                                                                            int64_t rax_138 = r9_6;
                                                                        label_4089f0:
                                                                            rax_138 = (rax_138 + 1);
                                                                            *(rax_138 - 1) = 0x30;
                                                                            if (rax_138 != rsi_34)
                                                                            {
                                                                                goto label_4089f0;
                                                                            }
                                                                            r9_6 = (r9_6 + rdx_10);
                                                                        }
                                                                        goto label_40846b;
                                                                    }
                                                                    if (rdx_10 != 0)
                                                                    {
                                                                        goto label_408979;
                                                                    }
                                                                label_408467:
                                                                    r9_6 = (r15_9 + 1);
                                                                label_40846b:
                                                                    var_680 = r8_7;
                                                                    uint16_t x87status_3;
                                                                    arg5 = __fldcw_memmem16(var_680);
                                                                label_40847c:;
                                                                    uint64_t r8_11 = (r9_6 - rcx_21);
                                                                    if (r10_1 > r8_11)
                                                                    {
                                                                        int64_t r10_2 = (r10_1 - r8_11);
                                                                        int64_t rdi_38 = (r9_6 + r10_2);
                                                                        r8_11 = (rdi_38 - rcx_21);
                                                                        if ((r11_3 & 2) == 0)
                                                                        {
                                                                            if (((r11_3 & 0x20) == 0 || ((r11_3 & 0x20) != 0 && r15_9 == 0)))
                                                                            {
                                                                                int64_t rax_130 = -1;
                                                                                int64_t rdx_26 = ((rcx_21 - 1) - r9_6);
                                                                                if (rcx_21 < r9_6)
                                                                                {
                                                                                label_4087b5:
                                                                                    *(rdi_38 + rax_130) = *(r9_6 + rax_130);
                                                                                    rax_130 = (rax_130 - 1);
                                                                                    if (rdx_26 != rax_130)
                                                                                    {
                                                                                        goto label_4087b5;
                                                                                    }
                                                                                    r9_6 = rcx_21;
                                                                                }
                                                                                if (r10_2 != 0)
                                                                                {
                                                                                    int64_t r10_4 = (r10_2 + r9_6);
                                                                                label_4087d8:
                                                                                    r9_6 = (r9_6 + 1);
                                                                                    *(r9_6 - 1) = 0x20;
                                                                                    if (r9_6 != r10_4)
                                                                                    {
                                                                                        goto label_4087d8;
                                                                                    }
                                                                                }
                                                                            }
                                                                            if (((r11_3 & 0x20) != 0 && r15_9 != 0))
                                                                            {
                                                                                if (r15_9 >= r9_6)
                                                                                {
                                                                                    r15_9 = r9_6;
                                                                                }
                                                                                else
                                                                                {
                                                                                    int64_t rax_119 = -1;
                                                                                    int64_t rdx_21 = ((r15_9 - 1) - r9_6);
                                                                                label_4084cd:
                                                                                    *(rdi_38 + rax_119) = *(r9_6 + rax_119);
                                                                                    rax_119 = (rax_119 - 1);
                                                                                    if (rax_119 != rdx_21)
                                                                                    {
                                                                                        goto label_4084cd;
                                                                                    }
                                                                                }
                                                                                if (r10_2 != 0)
                                                                                {
                                                                                    int64_t r10_3 = (r10_2 + r15_9);
                                                                                label_4084e8:
                                                                                    r15_9 = (r15_9 + 1);
                                                                                    *(r15_9 - 1) = 0x30;
                                                                                    if (r15_9 != r10_3)
                                                                                    {
                                                                                        goto label_4084e8;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                        else if (r10_2 != 0)
                                                                        {
                                                                        label_408940:
                                                                            r9_6 = (r9_6 + 1);
                                                                            *(r9_6 - 1) = 0x20;
                                                                            if (rdi_38 != r9_6)
                                                                            {
                                                                                goto label_408940;
                                                                            }
                                                                        }
                                                                    }
                                                                    if (var_698 <= r8_11)
                                                                    {
                                                                        goto label_40801c;
                                                                    }
                                                                    uint64_t rax_121 = (r13_1 + r8_11);
                                                                    int64_t rsi_24;
                                                                    rsi_24 = (r13_1 + r8_11) < r13_1;
                                                                    r15_2 = rax_121;
                                                                    if ((r12_1 - r13_1) > r8_11)
                                                                    {
                                                                        goto label_4085aa;
                                                                    }
                                                                    if (rsi_24 != 0)
                                                                    {
                                                                        if (r12_1 != -1)
                                                                        {
                                                                            goto label_4078e5;
                                                                        }
                                                                        goto label_4085aa;
                                                                    }
                                                                    if (r12_1 >= rax_121)
                                                                    {
                                                                        goto label_4085aa;
                                                                    }
                                                                    bool cond21_1 = r12_1 < 0;
                                                                    if (r12_1 != 0)
                                                                    {
                                                                        if (cond21_1)
                                                                        {
                                                                            goto label_4078e5;
                                                                        }
                                                                        r12_1 = (r12_1 + r12_1);
                                                                        if (r12_1 >= rax_121)
                                                                        {
                                                                            goto label_408555;
                                                                        }
                                                                    }
                                                                    else if (rax_121 <= 0xc)
                                                                    {
                                                                        r12_1 = 0xc;
                                                                    label_408555:;
                                                                        void* rdx_23;
                                                                        rdx_23 = rbx_2 == arg1;
                                                                        if (rbx_2 == 0)
                                                                        {
                                                                        label_4087ee:
                                                                            var_6b8 = rdx_23;
                                                                            var_698 = rcx_21;
                                                                            char* rax_131 = malloc(r12_1);
                                                                            rcx_21 = var_698;
                                                                            char rdx_27 = var_6b8;
                                                                            if (rax_131 == 0)
                                                                            {
                                                                                goto label_4078e5;
                                                                            }
                                                                            if ((r13_1 == 0 || (r13_1 != 0 && rdx_27 == 0)))
                                                                            {
                                                                                rbx_2 = rax_131;
                                                                            }
                                                                            if ((r13_1 != 0 && rdx_27 != 0))
                                                                            {
                                                                                var_698 = rcx_21;
                                                                                rcx_21 = var_698;
                                                                                rbx_2 = memcpy(rax_131, rbx_2, r13_1);
                                                                            }
                                                                            goto label_4085aa;
                                                                        }
                                                                        if (rdx_23 != 0)
                                                                        {
                                                                            goto label_4087ee;
                                                                        }
                                                                        var_6a8 = r8_11;
                                                                        var_698 = rcx_21;
                                                                        char* rax_122 = realloc(rbx_2, r12_1);
                                                                        if (rax_122 == 0)
                                                                        {
                                                                            goto label_4078e5;
                                                                        }
                                                                        rcx_21 = var_698;
                                                                        r8_11 = var_6a8;
                                                                        rbx_2 = rax_122;
                                                                    label_4085aa:
                                                                        var_698 = rcx_21;
                                                                        memcpy((rbx_2 + r13_1), rcx_21, r8_11);
                                                                        int64_t rcx_25 = var_698;
                                                                        if (rcx_25 != &var_2f8)
                                                                        {
                                                                            free(rcx_25);
                                                                        }
                                                                        goto label_4079e7;
                                                                    }
                                                                    if (rax_121 == -1)
                                                                    {
                                                                        goto label_4078e5;
                                                                    }
                                                                    r12_1 = rax_121;
                                                                    goto label_408555;
                                                                }
                                                                if (rax_118 != 0x45)
                                                                {
                                                                    int32_t var_6f0;
                                                                    if (rax_118 == 0x47)
                                                                    {
                                                                        *r15_9 = 0x30;
                                                                        if ((r11_3 & 0x10) == 0)
                                                                        {
                                                                            goto label_408467;
                                                                        }
                                                                        int64_t r9_8 = (r15_9 + 2);
                                                                        if (rdx_10 == 0)
                                                                        {
                                                                            var_6a8 = r11_3;
                                                                            r11_3 = var_6a8;
                                                                            char rax_156 = *nl_langinfo(0x10000);
                                                                            r9_6 = r9_8;
                                                                            if (rax_156 == 0)
                                                                            {
                                                                                rax_156 = 0x2e;
                                                                            }
                                                                            *(r15_9 + 1) = rax_156;
                                                                        }
                                                                        else
                                                                        {
                                                                            char* rsi_32 = (rdx_10 - 1);
                                                                            var_6f0 = r10_1;
                                                                            var_6e8 = r9_8;
                                                                            var_6c8 = r11_3;
                                                                            var_6b8 = rdx_10;
                                                                            char rax_134 = *nl_langinfo(0x10000);
                                                                            r11_3 = var_6c8;
                                                                            r9_6 = var_6e8;
                                                                            r10_1 = var_6f0;
                                                                            if (rax_134 == 0)
                                                                            {
                                                                                rax_134 = 0x2e;
                                                                            }
                                                                            *(r15_9 + 1) = rax_134;
                                                                            if (rsi_32 != 0)
                                                                            {
                                                                                void* rdx_30 = &var_6b8[(r15_9 + 1)];
                                                                                int64_t rax_135 = r9_6;
                                                                            label_40891e:
                                                                                rax_135 = (rax_135 + 1);
                                                                                *(rax_135 - 1) = 0x30;
                                                                                if (rax_135 != rdx_30)
                                                                                {
                                                                                    goto label_40891e;
                                                                                }
                                                                                r9_6 = &rsi_32[r9_6];
                                                                            }
                                                                        }
                                                                        goto label_40846b;
                                                                    }
                                                                    if (rax_118 != 0x41)
                                                                    {
                                                                        goto label_40801c;
                                                                    }
                                                                    char* rax_142 = (r15_9 + 2);
                                                                    *r15_9 = 0x30;
                                                                    char rax_143 = r14_1[9];
                                                                    *(r15_9 + 2) = 0x30;
                                                                    *(r15_9 + 1) = (rax_143 + 0x17);
                                                                    char* rsi_41;
                                                                    if ((r11_3 & 0x10) == 0)
                                                                    {
                                                                        rsi_41 = (r15_9 + 3);
                                                                    }
                                                                    if (((r11_3 & 0x10) != 0 || ((r11_3 & 0x10) == 0 && rdx_10 != 0 != 0)))
                                                                    {
                                                                        var_6f0 = r10_1;
                                                                        var_6e8 = rcx_21;
                                                                        var_6c8 = r11_3;
                                                                        rsi_41 = (r15_9 + 4);
                                                                        char rax_153 = *nl_langinfo(0x10000);
                                                                        r11_3 = var_6c8;
                                                                        rcx_21 = var_6e8;
                                                                        r10_1 = var_6f0;
                                                                        if (rax_153 == 0)
                                                                        {
                                                                            rax_153 = 0x2e;
                                                                        }
                                                                        *(r15_9 + 3) = rax_153;
                                                                        if (rdx_10 != 0)
                                                                        {
                                                                            int64_t rdi_53 = ((r15_9 + rdx_10) + 4);
                                                                            char* rax_154 = rsi_41;
                                                                        label_408d65:
                                                                            rax_154 = &rax_154[1];
                                                                            rax_154[-1] = 0x30;
                                                                            if (rax_154 != rdi_53)
                                                                            {
                                                                                goto label_408d65;
                                                                            }
                                                                            rsi_41 = &rsi_41[rdx_10];
                                                                        }
                                                                    }
                                                                    char rax_145 = r14_1[9];
                                                                    r9_6 = &rsi_41[3];
                                                                    *(rsi_41 + 1) = 0x302b;
                                                                    r15_9 = rax_142;
                                                                    *rsi_41 = (rax_145 + 0xf);
                                                                    goto label_40846b;
                                                                }
                                                                *r15_9 = 0x30;
                                                                char* rsi_27;
                                                                if ((r11_3 & 0x10) == 0)
                                                                {
                                                                    rsi_27 = (r15_9 + 1);
                                                                }
                                                                if (((r11_3 & 0x10) != 0 || ((r11_3 & 0x10) == 0 && rdx_10 != 0 != 0)))
                                                                {
                                                                    var_6e8 = r10_1;
                                                                    var_6b8 = r11_3;
                                                                    rsi_27 = (r15_9 + 2);
                                                                    char rax_148 = *nl_langinfo(0x10000);
                                                                    r11_3 = var_6b8;
                                                                    r10_1 = var_6e8;
                                                                    if (rax_148 == 0)
                                                                    {
                                                                        rax_148 = 0x2e;
                                                                    }
                                                                    *(r15_9 + 1) = rax_148;
                                                                    if (rdx_10 != 0)
                                                                    {
                                                                        int64_t rdi_50 = ((r15_9 + rdx_10) + 2);
                                                                        char* rax_149 = rsi_27;
                                                                    label_408c50:
                                                                        rax_149 = &rax_149[1];
                                                                        rax_149[-1] = 0x30;
                                                                        if (rax_149 != rdi_50)
                                                                        {
                                                                            goto label_408c50;
                                                                        }
                                                                        rsi_27 = &rsi_27[rdx_10];
                                                                    }
                                                                }
                                                                char rax_123 = r14_1[9];
                                                                r9_6 = &rsi_27[4];
                                                                rsi_27[3] = 0x30;
                                                                *rsi_27 = rax_123;
                                                                *(rsi_27 + 1) = 0x302b;
                                                                goto label_40846b;
                                                            }
                                                            long double x87_r6_7 = (x87_r6_4 + x87_r6_4);
                                                            (x87_r6_7 - x87_r6_4);
                                                            bool cond15_1 = x87_r6_7 != x87_r6_4;
                                                            if ((!(FCMP_O(x87_r6_7, x87_r6_4))))
                                                            {
                                                                goto label_40801c;
                                                            }
                                                            if (cond15_1)
                                                            {
                                                                goto label_40801c;
                                                            }
                                                            r9_6 = (r15_9 + 3);
                                                            if ((r14_1[9] - 0x41) > 0x19)
                                                            {
                                                                *(r15_9 + 2) = 0x66;
                                                                *r15_9 = 0x6e69;
                                                                r15_9 = 0;
                                                            }
                                                            else
                                                            {
                                                                *(r15_9 + 2) = 0x46;
                                                                *r15_9 = 0x4e49;
                                                                r15_9 = 0;
                                                            }
                                                            goto label_40846b;
                                                        }
                                                        r9_6 = (rcx_21 + 3);
                                                        if ((r15_3 - 0x41) > 0x19)
                                                        {
                                                            *(rcx_21 + 2) = 0x6e;
                                                            r15_9 = 0;
                                                            *rcx_21 = 0x616e;
                                                        }
                                                        else
                                                        {
                                                            *(rcx_21 + 2) = 0x4e;
                                                            r15_9 = 0;
                                                            *rcx_21 = 0x414e;
                                                        }
                                                        goto label_40847c;
                                                    }
                                                    char* rsi_36 = rax_139;
                                                label_408ab3:;
                                                    char* rdi_49 = &rsi_36[1];
                                                    int64_t rax_140 = (*rsi_36 - 0x30);
                                                    int64_t rsi_39 = -1;
                                                    if (rdx_10 <= 0x1999999999999999)
                                                    {
                                                        int64_t rsi_40 = (rdx_10 * 5);
                                                        rsi_39 = (rsi_40 + rsi_40);
                                                    }
                                                    rsi_36 = rdi_49;
                                                    rdx_10 = (rax_140 + rsi_39);
                                                    if ((rax_140 + rsi_39) < rax_140)
                                                    {
                                                        if (rcx_10 == rdi_49)
                                                        {
                                                            goto label_4078e5;
                                                        }
                                                    label_408ae7:
                                                        rsi_36 = &rdi_49[1];
                                                        if (rsi_36[-1] != 0x30)
                                                        {
                                                            if (rcx_10 != rsi_36)
                                                            {
                                                                rdi_49 = rsi_36;
                                                                goto label_408ae7;
                                                            }
                                                            goto label_4078e5;
                                                        }
                                                        rdx_10 = -1;
                                                    }
                                                    if (rcx_10 != rsi_36)
                                                    {
                                                        goto label_408ab3;
                                                    }
                                                }
                                                else
                                                {
                                                    void* r8_4 = &var_670[(rsi_10 << 5)];
                                                    if (*r8_4 != 5)
                                                    {
                                                        goto label_40801c;
                                                    }
                                                    rdx_10 = *(r8_4 + 0x10);
                                                    if (rdx_10 < 0)
                                                    {
                                                        goto label_407f20;
                                                    }
                                                }
                                                if (rdx_10 == 0)
                                                {
                                                    goto label_408b54;
                                                }
                                                rcx_11 = (rdx_10 + 0xc);
                                                if (rdx_10 >= -0xc)
                                                {
                                                    goto label_4078e5;
                                                }
                                                goto label_407f41;
                                            }
                                        label_407f20:;
                                            bool cond9_1 = rax_21 != 0x41;
                                            rcx_11 = 0xc;
                                            if (rax_21 != 0x41)
                                            {
                                                rcx_11 = 0x12;
                                            }
                                            rdx_10 = 0;
                                            if (cond9_1)
                                            {
                                                rdx_10 = 6;
                                            }
                                            goto label_407f41;
                                        }
                                        int64_t rcx_12 = r14_1[5];
                                        if (rcx_12 != -1)
                                        {
                                            void* rcx_14 = &var_670[(rcx_12 << 5)];
                                            if (*rcx_14 != 5)
                                            {
                                                goto label_40801c;
                                            }
                                            r10_1 = *(rcx_14 + 0x10);
                                            if (r10_1 < 0)
                                            {
                                                r11_3 = (r11_3 | 2);
                                                r10_1 = (-r10_1);
                                            }
                                            goto label_407870;
                                        }
                                        r10_1 = 0;
                                        var_698 = rcx_12;
                                    label_408a21:;
                                        char* rsi_35 = &rdx_11[1];
                                        int64_t r9_10 = -1;
                                        int64_t rdx_34 = (*rdx_11 - 0x30);
                                        if (r10_1 <= 0x1999999999999999)
                                        {
                                            int64_t r9_11 = (r10_1 * 5);
                                            r9_10 = (r9_11 + r9_11);
                                        }
                                        r10_1 = (rdx_34 + r9_10);
                                        rdx_11 = rsi_35;
                                        if ((rdx_34 + r9_10) < rdx_34)
                                        {
                                            int64_t rcx_26 = var_698;
                                            if (rdi_16 != rsi_35)
                                            {
                                            label_408a66:
                                                rdx_11 = &rdx_11[1];
                                                if (rdx_11[-1] == 0x30)
                                                {
                                                    var_698 = rcx_26;
                                                    r10_1 = -1;
                                                }
                                                else if (rdi_16 != rdx_11)
                                                {
                                                    goto label_408a66;
                                                }
                                            }
                                            if ((rdi_16 == rsi_35 || (rdi_16 != rsi_35 && rdx_11[-1] != 0x30)))
                                            {
                                                r10_1 = rcx_26;
                                            }
                                        }
                                        if ((((((rdx_34 + r9_10) < rdx_34 && rdi_16 != rsi_35) && rdx_11[-1] == 0x30) || (rdx_34 + r9_10) >= rdx_34) && rdi_16 != rdx_11))
                                        {
                                            goto label_408a21;
                                        }
                                        goto label_407870;
                                    }
                                }
                            }
                            if ((r15_7 != arg1 && r15_7 != 0))
                            {
                                goto label_407b0b;
                            }
                        }
                        else
                        {
                            if (r12_1 >= rax_8)
                            {
                                goto label_407563;
                            }
                            bool cond0_1 = r12_1 < 0;
                            if ((r12_1 == 0 && rax_8 <= 0xc))
                            {
                                r12_1 = 0xc;
                                rdx_1 = rbx_2 == arg1;
                                if (rbx_2 == 0)
                                {
                                label_40744a:
                                    var_6a8 = rdx_1;
                                    var_698 = rcx_1;
                                    char* rax_9 = malloc(r12_1);
                                    rcx_1 = var_698;
                                    char rdx_2 = var_6a8;
                                    if (rax_9 == 0)
                                    {
                                        goto label_4078e5;
                                    }
                                    if ((r15_2 == 0 || (r15_2 != 0 && rdx_2 == 0)))
                                    {
                                        rbx_2 = rax_9;
                                    }
                                    if ((r15_2 != 0 && rdx_2 != 0))
                                    {
                                        var_698 = rcx_1;
                                        rcx_1 = var_698;
                                        rbx_2 = memcpy(rax_9, rbx_2, r15_2);
                                    }
                                    goto label_407563;
                                }
                            }
                            if (r12_1 != 0)
                            {
                                if (cond0_1)
                                {
                                    goto label_4078e5;
                                }
                                r12_1 = (r12_1 + r12_1);
                                if (r12_1 >= rax_8)
                                {
                                    goto label_407512;
                                }
                            }
                            if (((r12_1 == 0 && rax_8 > 0xc) || r12_1 != 0))
                            {
                                if (rax_8 == -1)
                                {
                                    goto label_4078e5;
                                }
                                r12_1 = rax_8;
                            label_407512:
                                rdx_1 = rbx_2 == arg1;
                                if (rbx_2 == 0)
                                {
                                    goto label_40744a;
                                }
                            }
                            if (((((r12_1 == 0 && rax_8 > 0xc) || r12_1 != 0) && rax_8 != -1) || (r12_1 == 0 && rax_8 <= 0xc)))
                            {
                                if (rdx_1 != 0)
                                {
                                    goto label_40744a;
                                }
                                var_698 = rcx_1;
                                char* rax_15 = realloc(rbx_2, r12_1);
                                if (rax_15 != 0)
                                {
                                    rcx_1 = var_698;
                                    rbx_2 = rax_15;
                                    goto label_407563;
                                }
                            label_407afa:
                                r15_7 = rbx_2;
                                var_6a8 = __errno_location();
                            label_407b0b:
                                free(r15_7);
                            }
                        }
                        if (var_6e0_1 == 0)
                        {
                            break;
                        }
                        free(var_6e0_1);
                        break;
                    }
                }
                if ((rcx == r8_1 || (((rcx != r8_1 && (!UNIMPLEMENTED_COND)) && (!(UNIMPLEMENTED_COND && var_6e0_1 == 0))) && (!UNIMPLEMENTED_COND))))
                {
                    r13_1 = r15_2;
                    goto label_40756f;
                }
                if ((((rcx != r8_1 && (!UNIMPLEMENTED_COND)) && UNIMPLEMENTED_COND) && var_6e0_1 == 0))
                {
                    goto label_407a15;
                }
            }
            else
            {
            label_407a15:
                var_6a8 = __errno_location();
            }
            if (((rax_3 + var_570) < rax_3 || ((((rax_3 + var_570) >= rax_3 && rax_4 < -6) && rcx != r8_1) && UNIMPLEMENTED_COND)))
            {
                if (var_580 != &var_568)
                {
                    free(var_580);
                }
                if (var_670 == &var_668)
                {
                    goto label_407958;
                }
                free(var_670);
            label_407958:
                rbx_2 = nullptr;
                *var_6a8 = 0xc;
            }
        }
        else
        {
            if (var_580 != &var_568)
            {
                free(var_580);
            }
            if (var_670 != &var_668)
            {
                free(var_670);
            }
            rbx_2 = nullptr;
            *__errno_location() = 0x16;
        }
    }
label_407971:
    return rbx_2;
}

int64_t sub_408e10(int32_t arg1)
{
    /* tailcall */
    return sub_408e20(arg1, 0, 3);
}

uint64_t sub_408e20(int32_t arg1, int32_t arg2, int32_t arg3)
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
    if (data_60e4a0 < 0)
    {
        rax_5 = sub_408e20();
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
                rax_17 = sub_408e20(arg1, 0, arg3);
                rbx = rax_17;
                if (rax_17 >= 0)
                {
                    data_60e4a0 = 0xffffffff;
                }
            }
        }
    }
    if (((((data_60e4a0 >= 0 && rax_2 < 0) && *rax_15 == 0x16) && rax_17 >= 0) || (rax_5 >= 0 && data_60e4a0 == 0xffffffff)))
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
    if ((data_60e4a0 >= 0 && (rax_2 >= 0 || (rax_2 < 0 && *rax_15 != 0x16))))
    {
        data_60e4a0 = 1;
    }
    return rbx;
}

int64_t sub_408f60(int64_t, void* arg2)
{
    int32_t* rax = *(arg2 + 8);
    if (*arg2 == 0)
    {
        return 0;
    }
    if (*rax > 0x16)
    {
        return 0xffffffff;
    }
    /* jump -> *((*rax << 3) + &data_40bc40) */
}

int64_t sub_409180(char* arg1, int64_t* arg2, int64_t* arg3)
{
    void* rcx = &arg2[4];
    void* rax = &arg3[2];
    int64_t* r8 = arg2;
    void* r9 = 7;
    int64_t r11 = 7;
    int64_t r13 = 0;
    *arg2 = 0;
    arg2[1] = rcx;
    void* var_60 = rcx;
    *arg3 = 0;
    arg3[1] = rax;
    void* var_70 = nullptr;
    int64_t var_78 = 0;
    void* var_68 = nullptr;
    while (true)
    {
        char rax_1 = *arg1;
        int64_t rax_6;
        if (rax_1 == 0)
        {
            *(rcx + (r13 * 0x58)) = arg1;
            r8[2] = var_78;
            r8[3] = var_70;
            rax_6 = 0;
        }
        else
        {
            void* rbp_1 = &arg1[1];
            if (rax_1 != 0x25)
            {
                goto label_4091f8;
            }
            void* r14_1 = ffffffffffffffff;
            char** r12_1 = (rcx + (r13 * 0x58));
            *r12_1 = arg1;
            r12_1[2] = 0;
            r12_1[3] = 0;
            r12_1[4] = 0;
            r12_1[5] = -1;
            r12_1[6] = 0;
            r12_1[7] = 0;
            r12_1[8] = -1;
            r12_1[0xa] = -1;
            char rbx_1 = arg1[1];
            if ((rbx_1 - 0x30) > 9)
            {
                goto label_4092c6;
            }
            void* rax_29 = rbp_1;
            char rdx_14;
            do
            {
                rax_29 = (rax_29 + 1);
                rdx_14 = *rax_29;
            } while ((rdx_14 - 0x30) <= 9);
            void* r13_1;
            if (rdx_14 == 0x24)
            {
                int64_t rax_64 = 0;
                void* rcx_16;
                int64_t rdx_28;
                int64_t rdi_16;
                char rsi_21;
                do
                {
                    int64_t rsi_19 = -1;
                    int64_t rdx_27 = (rbx_1 - 0x30);
                    if (rax_64 <= 0x1999999999999999)
                    {
                        int64_t rsi_20 = (rax_64 * 5);
                        rsi_19 = (rsi_20 + rsi_20);
                    }
                    rcx_16 = rbp_1;
                    while (true)
                    {
                        rbx_1 = *(rbp_1 + 1);
                        rdx_28 = (rdx_27 + rsi_19);
                        rdi_16 = (rdx_27 + rsi_19) < rdx_27;
                        rax_64 = rdx_28;
                        rbp_1 = (rbp_1 + 1);
                        rsi_21 = (rbx_1 - 0x30);
                        if (rdi_16 == 0)
                        {
                            break;
                        }
                        if (rsi_21 > 9)
                        {
                            break;
                        }
                        rsi_19 = -1;
                        rcx_16 = rbp_1;
                        rdx_27 = (rbx_1 - 0x30);
                    }
                    if (rdi_16 != 0)
                    {
                        break;
                    }
                } while (rsi_21 <= 9);
                if (rdi_16 != 0)
                {
                    goto label_409948;
                }
                r14_1 = (rdx_28 - 1);
                if (r14_1 <= -3)
                {
                    rbp_1 = (rcx_16 + 2);
                    rbx_1 = *(rcx_16 + 2);
                    goto label_4092c6;
                }
            label_409948:
                r13_1 = arg3[1];
            }
            else
            {
                r14_1 = ffffffffffffffff;
            label_4092c6:;
                void* rcx_1;
                while (true)
                {
                    rcx_1 = (rbp_1 + 1);
                    if (rbx_1 == 0x27)
                    {
                        r12_1[2] = (r12_1[2] | 1);
                    }
                    else if (rbx_1 == 0x2d)
                    {
                        r12_1[2] = (r12_1[2] | 2);
                    }
                    else if (rbx_1 == 0x2b)
                    {
                        r12_1[2] = (r12_1[2] | 4);
                    }
                    else if (rbx_1 == 0x20)
                    {
                        r12_1[2] = (r12_1[2] | 8);
                    }
                    else if (rbx_1 == 0x23)
                    {
                        r12_1[2] = (r12_1[2] | 0x10);
                    }
                    else if (rbx_1 == 0x30)
                    {
                        r12_1[2] = (r12_1[2] | 0x20);
                    }
                    else
                    {
                        if (rbx_1 != 0x49)
                        {
                            break;
                        }
                        r12_1[2] = (r12_1[2] | 0x40);
                    }
                    rbx_1 = *rcx_1;
                    rbp_1 = rcx_1;
                }
                if (rbx_1 != 0x2a)
                {
                    if ((rbx_1 - 0x30) <= 9)
                    {
                        r12_1[3] = rbp_1;
                        if ((*rbp_1 - 0x30) <= 9)
                        {
                            void* rcx_15 = rbp_1;
                            void* rdx_21;
                            while (true)
                            {
                                rdx_21 = (rcx_15 + 1);
                                if ((*(rcx_15 + 1) - 0x30) > 9)
                                {
                                    break;
                                }
                                rcx_15 = rdx_21;
                            }
                            rcx_1 = (rcx_15 + 2);
                            int64_t rax_57 = (rdx_21 - rbp_1);
                            rbp_1 = rdx_21;
                            if (var_78 >= rax_57)
                            {
                                rax_57 = var_78;
                            }
                            var_78 = rax_57;
                        }
                        r12_1[4] = rbp_1;
                        rbx_1 = *rbp_1;
                    }
                    goto label_409338;
                }
                int64_t rax_12 = 1;
                r12_1[3] = rbp_1;
                r12_1[4] = rcx_1;
                if (var_78 != 0)
                {
                    rax_12 = var_78;
                }
                var_78 = rax_12;
                int32_t rax_13 = *(rbp_1 + 1);
                void* rbx_2;
                if ((rax_13 - 0x30) <= 9)
                {
                    void* rdx_17 = rcx_1;
                    char rsi_10;
                    do
                    {
                        rdx_17 = (rdx_17 + 1);
                        rsi_10 = *rdx_17;
                    } while ((rsi_10 - 0x30) <= 9);
                    if (rsi_10 == 0x24)
                    {
                        void* rsi_11 = nullptr;
                        void* rdx_20;
                        int64_t rbp_2;
                        void* rdi_5;
                        char rbx_6;
                        do
                        {
                            void* const rdx_18 = ffffffffffffffff;
                            int64_t rax_43 = (rax_13 - 0x30);
                            if (rsi_11 <= 0x1999999999999999)
                            {
                                void* rdx_19 = (rsi_11 * 5);
                                rdx_18 = (rdx_19 + rdx_19);
                            }
                            rdi_5 = rcx_1;
                            while (true)
                            {
                                rdx_20 = (rdx_18 + rax_43);
                                rax_13 = *(rcx_1 + 1);
                                rbp_2 = (rdx_18 + rax_43) < rdx_18;
                                rsi_11 = rdx_20;
                                rcx_1 = (rcx_1 + 1);
                                rbx_6 = (rax_13 - 0x30);
                                if (rbp_2 == 0)
                                {
                                    break;
                                }
                                if (rbx_6 > 9)
                                {
                                    break;
                                }
                                rdx_18 = ffffffffffffffff;
                                rdi_5 = rcx_1;
                                rax_43 = (rax_13 - 0x30);
                            }
                            if (rbp_2 != 0)
                            {
                                break;
                            }
                        } while (rbx_6 <= 9);
                        if (rbp_2 != 0)
                        {
                            goto label_409948;
                        }
                        rbx_2 = (rdx_20 - 1);
                        if (rbx_2 > -3)
                        {
                            goto label_409948;
                        }
                        r12_1[5] = rbx_2;
                        rcx_1 = (rdi_5 + 2);
                        goto label_4093dc;
                    }
                }
                rbx_2 = r12_1[5];
                if (rbx_2 != -1)
                {
                    goto label_4093dc;
                }
                void* rax_41 = (var_68 + 1);
                r12_1[5] = var_68;
                if (var_68 == -1)
                {
                    goto label_409948;
                }
                rbx_2 = var_68;
                var_68 = rax_41;
            label_4093dc:
                r13_1 = arg3[1];
                int64_t rdx_4;
                void* rsi_7;
                if (r9 <= rbx_2)
                {
                    void* r9_1 = (r9 + r9);
                    void* rax_36 = (rbx_2 + 1);
                    if (r9_1 <= rbx_2)
                    {
                        r9_1 = rax_36;
                    }
                    if (r9_1 <= 0x7ffffffffffffff)
                    {
                        int64_t rsi_6 = (r9_1 << 5);
                        if (rax == r13_1)
                        {
                            void* rax_63 = malloc(rsi_6);
                            r9 = r9_1;
                            if (rax_63 == 0)
                            {
                                goto label_409b39;
                            }
                            rdx_4 = *arg3;
                            rsi_7 = rax;
                            r13_1 = rax_63;
                        label_409c54:
                            memcpy(r13_1, rsi_7, (rdx_4 << 5));
                            rdx_4 = *arg3;
                        label_40970d:
                            arg3[1] = r13_1;
                            goto label_4093ec;
                        }
                        void* rax_37 = realloc(r13_1, rsi_6);
                        rsi_7 = arg3[1];
                        r13_1 = rax_37;
                        r9 = r9_1;
                        if (rax_37 != 0)
                        {
                            rdx_4 = *arg3;
                            if (rax == rsi_7)
                            {
                                goto label_409c54;
                            }
                            goto label_40970d;
                        }
                        goto label_409b20;
                    }
                label_409b1d:
                    rsi_7 = r13_1;
                label_409b20:
                    if (rax == rsi_7)
                    {
                        goto label_409b39;
                    }
                label_409b2f:
                    free(rsi_7);
                label_409b39:;
                    int64_t rdi_12 = r8[1];
                    if (var_60 != rdi_12)
                    {
                        free(rdi_12);
                    }
                    break;
                }
                rdx_4 = *arg3;
            label_4093ec:
                if (rdx_4 <= rbx_2)
                {
                    do
                    {
                        rdx_4 = (rdx_4 + 1);
                        *((r13_1 + (rdx_4 << 5)) - 0x20) = 0;
                    } while (rdx_4 <= rbx_2);
                    *arg3 = rdx_4;
                    goto label_409418;
                }
            label_409418:;
                void* rax_16 = (r13_1 + (rbx_2 << 5));
                int32_t rdx_5 = *rax_16;
                if (rdx_5 == 0)
                {
                    *rax_16 = 5;
                    rbx_1 = *rcx_1;
                    rbp_1 = rcx_1;
                    rcx_1 = (rcx_1 + 1);
                    if (rbx_1 == 0x2e)
                    {
                        goto label_409440;
                    }
                    goto label_409341;
                }
                if (rdx_5 == 5)
                {
                    rbx_1 = *rcx_1;
                    rbp_1 = rcx_1;
                    rcx_1 = (rcx_1 + 1);
                label_409338:
                    if (rbx_1 != 0x2e)
                    {
                        goto label_409341;
                    }
                label_409440:;
                    bool cond0_1 = *(rbp_1 + 1) != 0x2a;
                    r12_1[6] = rbp_1;
                    if (cond0_1)
                    {
                        void* rax_35;
                        if ((*(rbp_1 + 1) - 0x30) > 9)
                        {
                            rbp_1 = rcx_1;
                            rax_35 = 1;
                        }
                        else
                        {
                            do
                            {
                                rcx_1 = (rcx_1 + 1);
                            } while ((*rcx_1 - 0x30) <= 9);
                            rax_35 = (rcx_1 - rbp_1);
                            rbp_1 = rcx_1;
                        }
                        r12_1[7] = rcx_1;
                        rbx_1 = *rcx_1;
                        if (var_70 >= rax_35)
                        {
                            rax_35 = var_70;
                        }
                        var_70 = rax_35;
                        goto label_409341;
                    }
                    void* rax_17 = 2;
                    char* rcx_4 = (rbp_1 + 2);
                    r12_1[7] = rcx_4;
                    if (var_70 >= 2)
                    {
                        rax_17 = var_70;
                    }
                    var_70 = rax_17;
                    int32_t rax_18 = *(rbp_1 + 2);
                    void* rbx_4;
                    if ((rax_18 - 0x30) <= 9)
                    {
                        char* rdx_31 = rcx_4;
                        char rsi_23;
                        do
                        {
                            rdx_31 = &rdx_31[1];
                            rsi_23 = *rdx_31;
                        } while ((rsi_23 - 0x30) <= 9);
                        if (rsi_23 != 0x24)
                        {
                            goto label_40947f;
                        }
                        void* rsi_24 = nullptr;
                        void* rdx_34;
                        int64_t rbp_3;
                        char* rdi_18;
                        char rbx_7;
                        do
                        {
                            void* const rdx_32 = ffffffffffffffff;
                            int64_t rax_67 = (rax_18 - 0x30);
                            if (rsi_24 <= 0x1999999999999999)
                            {
                                void* rdx_33 = (rsi_24 * 5);
                                rdx_32 = (rdx_33 + rdx_33);
                            }
                            rdi_18 = rcx_4;
                            while (true)
                            {
                                rdx_34 = (rdx_32 + rax_67);
                                rbp_3 = (rdx_32 + rax_67) < rdx_32;
                                rcx_4 = &rcx_4[1];
                                rax_18 = *rcx_4;
                                rsi_24 = rdx_34;
                                rbx_7 = (rax_18 - 0x30);
                                if (rbp_3 == 0)
                                {
                                    break;
                                }
                                if (rbx_7 > 9)
                                {
                                    break;
                                }
                                rdx_32 = ffffffffffffffff;
                                rdi_18 = rcx_4;
                                rax_67 = (rax_18 - 0x30);
                            }
                            if (rbp_3 != 0)
                            {
                                break;
                            }
                        } while (rbx_7 <= 9);
                        if (rbp_3 != 0)
                        {
                            goto label_409948;
                        }
                        rbx_4 = (rdx_34 - 1);
                        if (rbx_4 > -3)
                        {
                            goto label_409948;
                        }
                        r12_1[8] = rbx_4;
                        rcx_4 = &rdi_18[2];
                        goto label_40948e;
                    }
                label_40947f:
                    rbx_4 = r12_1[8];
                    if (rbx_4 != -1)
                    {
                        goto label_40948e;
                    }
                    void* rax_65 = (var_68 + 1);
                    r12_1[8] = var_68;
                    if (var_68 == -1)
                    {
                        goto label_409948;
                    }
                    rbx_4 = var_68;
                    var_68 = rax_65;
                label_40948e:
                    r13_1 = arg3[1];
                    void* var_58;
                    int64_t rdx_7;
                    if (r9 <= rbx_4)
                    {
                        void* r9_3 = (r9 + r9);
                        void* rax_61 = (rbx_4 + 1);
                        if (r9_3 <= rbx_4)
                        {
                            r9_3 = rax_61;
                        }
                        if (r9_3 > 0x7ffffffffffffff)
                        {
                            goto label_409b1d;
                        }
                        int64_t rsi_18 = (r9_3 << 5);
                        var_58 = rcx_4;
                        if (rax == r13_1)
                        {
                            void* rax_69 = malloc(rsi_18);
                            rcx_4 = var_58;
                            r9 = r9_3;
                            if (rax_69 == 0)
                            {
                                goto label_409b39;
                            }
                            rdx_7 = *arg3;
                            rsi_7 = rax;
                            r13_1 = rax_69;
                        label_409e06:
                            memcpy(r13_1, rsi_7, (rdx_7 << 5));
                            rdx_7 = *arg3;
                        label_409bec:
                            arg3[1] = r13_1;
                            goto label_40949e;
                        }
                        void* rax_62 = realloc(r13_1, rsi_18);
                        rsi_7 = arg3[1];
                        rcx_4 = var_58;
                        r13_1 = rax_62;
                        r9 = r9_3;
                        if (rax_62 != 0)
                        {
                            rdx_7 = *arg3;
                            if (rax == rsi_7)
                            {
                                goto label_409e06;
                            }
                            goto label_409bec;
                        }
                        goto label_409b20;
                    }
                    rdx_7 = *arg3;
                label_40949e:
                    if (rdx_7 <= rbx_4)
                    {
                        do
                        {
                            rdx_7 = (rdx_7 + 1);
                            *((r13_1 + (rdx_7 << 5)) - 0x20) = 0;
                        } while (rdx_7 <= rbx_4);
                        *arg3 = rdx_7;
                        goto label_4094cb;
                    }
                label_4094cb:;
                    void* rax_23 = ((rbx_4 << 5) + r13_1);
                    int32_t rdx_8 = *rax_23;
                    if (rdx_8 == 0)
                    {
                        *rax_23 = 5;
                        rbp_1 = rcx_4;
                        rbx_1 = *rcx_4;
                    label_409341:;
                        int32_t rax_11 = 0;
                        while (true)
                        {
                            rbp_1 = (rbp_1 + 1);
                            if (rbx_1 == 0x68)
                            {
                                rax_11 = (rax_11 | (1 << (rax_11 & 1)));
                            }
                            else if (rbx_1 == 0x4c)
                            {
                                rax_11 = (rax_11 | 4);
                            }
                            else
                            {
                                if ((rbx_1 != 0x6c && (rbx_1 != 0x6a && ((rbx_1 & 0xdf) != 0x5a && rbx_1 != 0x74))))
                                {
                                    break;
                                }
                                rax_11 = (rax_11 + 8);
                            }
                            rbx_1 = *rbp_1;
                        }
                        char rdx_9 = (rbx_1 - 0x25);
                        if (rdx_9 > 0x53)
                        {
                            goto label_409948;
                        }
                        int32_t rcx_6;
                        switch (rdx_9)
                        {
                            case 0:
                            {
                                goto label_409571;
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
                            case 0x1a:
                            case 0x1b:
                            case 0x1d:
                            case 0x1f:
                            case 0x23:
                            case 0x24:
                            case 0x25:
                            case 0x26:
                            case 0x28:
                            case 0x29:
                            case 0x2a:
                            case 0x2b:
                            case 0x2c:
                            case 0x2d:
                            case 0x2f:
                            case 0x30:
                            case 0x31:
                            case 0x32:
                            case 0x34:
                            case 0x35:
                            case 0x36:
                            case 0x37:
                            case 0x38:
                            case 0x39:
                            case 0x3a:
                            case 0x3b:
                            case 0x3d:
                            case 0x46:
                            case 0x48:
                            case 0x4c:
                            case 0x4d:
                            case 0x51:
                            case 0x52:
                            {
                                goto label_409948;
                            }
                            case 0x1c:
                            case 0x20:
                            case 0x21:
                            case 0x22:
                            case 0x3c:
                            case 0x40:
                            case 0x41:
                            case 0x42:
                            {
                                rcx_6 = 0xc;
                                if (rax_11 <= 0xf)
                                {
                                    int32_t rcx_12;
                                    rcx_12 = (rax_11 & 4) != 0;
                                    rcx_6 = (rcx_12 + 0xb);
                                }
                                goto label_409519;
                            }
                            case 0x1e:
                            {
                                rcx_6 = 0xe;
                                rbx_1 = 0x63;
                                goto label_409519;
                            }
                            case 0x2e:
                            {
                                rcx_6 = 0x10;
                                rbx_1 = 0x73;
                                goto label_409519;
                            }
                            case 0x33:
                            case 0x4a:
                            case 0x50:
                            case 0x53:
                            {
                                rcx_6 = 0xa;
                                if ((rax_11 <= 0xf && (rax_11 & 4) == 0))
                                {
                                    rcx_6 = 8;
                                    if (rax_11 <= 7)
                                    {
                                        rcx_6 = 2;
                                        if ((rax_11 & 2) == 0)
                                        {
                                            rcx_6 = (((2 - 2) & 2) + 4);
                                        }
                                    }
                                }
                                goto label_409519;
                            }
                            case 0x3e:
                            {
                                int32_t rcx_8;
                                rcx_8 = rax_11 > 7;
                                rcx_6 = (rcx_8 + 0xd);
                                goto label_409519;
                            }
                            case 0x3f:
                            case 0x44:
                            {
                                rcx_6 = 9;
                                if ((rax_11 <= 0xf && (rax_11 & 4) == 0))
                                {
                                    rcx_6 = 7;
                                    if (rax_11 <= 7)
                                    {
                                        rcx_6 = 1;
                                        if ((rax_11 & 2) == 0)
                                        {
                                            rcx_6 = (((1 - 1) & 2) + 3);
                                        }
                                    }
                                }
                                goto label_409519;
                            }
                            case 0x49:
                            {
                                rcx_6 = 0x16;
                                if ((rax_11 <= 0xf && (rax_11 & 4) == 0))
                                {
                                    rcx_6 = 0x15;
                                    if (rax_11 <= 7)
                                    {
                                        rcx_6 = 0x12;
                                        if ((rax_11 & 2) == 0)
                                        {
                                            int32_t rcx_9;
                                            rcx_9 = (rax_11 & 1) == 0;
                                            rcx_6 = (rcx_9 + 0x13);
                                        }
                                    }
                                }
                                goto label_409519;
                            }
                            case 0x4b:
                            {
                                rcx_6 = 0x11;
                                goto label_409519;
                            }
                            case 0x4e:
                            {
                                int32_t rcx_5;
                                rcx_5 = rax_11 > 7;
                                rcx_6 = (rcx_5 + 0xf);
                            label_409519:
                                if (r14_1 == -1)
                                {
                                    void* rax_51 = (var_68 + 1);
                                    r12_1[0xa] = var_68;
                                    if (var_68 == -1)
                                    {
                                        goto label_409948;
                                    }
                                    r14_1 = var_68;
                                    var_68 = rax_51;
                                    goto label_409528;
                                }
                                r12_1[0xa] = r14_1;
                            label_409528:
                                r13_1 = arg3[1];
                                if (r9 > r14_1)
                                {
                                    goto label_409535;
                                }
                                void* r9_2 = (r9 + r9);
                                void* rax_48 = (r14_1 + 1);
                                if (r9_2 <= r14_1)
                                {
                                    r9_2 = rax_48;
                                }
                                if (r9_2 > 0x7ffffffffffffff)
                                {
                                    goto label_409b1d;
                                }
                                size_t rsi_13 = (r9_2 << 5);
                                var_58 = rcx_6;
                                void* rax_58;
                                if (rax == r13_1)
                                {
                                    rax_58 = malloc(rsi_13);
                                    rcx_6 = var_58;
                                    r9 = r9_2;
                                    if (rax_58 == 0)
                                    {
                                        goto label_409b39;
                                    }
                                    goto label_409ad9;
                                }
                                void* rax_49 = realloc(r13_1, rsi_13);
                                rcx_6 = var_58;
                                r13_1 = rax_49;
                                r9 = r9_2;
                                if (rax_49 == 0)
                                {
                                    goto label_409e73;
                                }
                                if (rax != arg3[1])
                                {
                                    goto label_409a1b;
                                }
                                rax_58 = r13_1;
                                r13_1 = rax;
                            label_409ad9:;
                                void* rsi_16 = r13_1;
                                r13_1 = rax_58;
                                var_58 = rcx_6;
                                memcpy(rax_58, rsi_16, (*arg3 << 5));
                                rcx_6 = var_58;
                            label_409a1b:
                                arg3[1] = r13_1;
                            label_409535:;
                                int64_t rax_24 = *arg3;
                                if (rax_24 <= r14_1)
                                {
                                    do
                                    {
                                        rax_24 = (rax_24 + 1);
                                        *((r13_1 + (rax_24 << 5)) - 0x20) = 0;
                                    } while (rax_24 <= r14_1);
                                    *arg3 = rax_24;
                                }
                                void* rax_25 = (r13_1 + (r14_1 << 5));
                                int32_t rdx_13 = *rax_25;
                                if (rdx_13 == 0)
                                {
                                    *rax_25 = rcx_6;
                                label_409571:
                                    r12_1[9] = rbx_1;
                                    int64_t rax_26 = *r8;
                                    r12_1[1] = rbp_1;
                                    r13 = (rax_26 + 1);
                                    *r8 = r13;
                                    if (r11 > r13)
                                    {
                                        rcx = r8[1];
                                    label_4091f8:
                                        arg1 = rbp_1;
                                        continue;
                                    }
                                    else
                                    {
                                        if (r11 >= 0)
                                        {
                                            int64_t rbx_5 = (r11 + r11);
                                            if (rbx_5 > 0x2e8ba2e8ba2e8ba)
                                            {
                                                goto label_409e73;
                                            }
                                            int64_t r12_2 = r8[1];
                                            int64_t rsi_3 = (r11 * 0xb0);
                                            if (var_60 == r12_2)
                                            {
                                                void* rax_38 = malloc(rsi_3);
                                                rcx = rax_38;
                                                if (rax_38 != 0)
                                                {
                                                label_409768:
                                                    rcx = memcpy(rcx, r12_2, (r13 * 0x58));
                                                    r13 = *r8;
                                                label_40960f:
                                                    r8[1] = rcx;
                                                    r11 = rbx_5;
                                                    goto label_4091f8;
                                                }
                                                rsi_7 = arg3[1];
                                                if (rax == rsi_7)
                                                {
                                                    break;
                                                }
                                                goto label_409b2f;
                                            }
                                            void* rax_28 = realloc(r12_2, rsi_3);
                                            rcx = rax_28;
                                            if (rax_28 == 0)
                                            {
                                                goto label_409e73;
                                            }
                                            r12_2 = r8[1];
                                            r13 = *r8;
                                            if (var_60 == r12_2)
                                            {
                                                goto label_409768;
                                            }
                                            goto label_40960f;
                                        }
                                    label_409e73:
                                        rsi_7 = arg3[1];
                                    }
                                    goto label_409b20;
                                }
                                if (rdx_13 == rcx_6)
                                {
                                    goto label_409571;
                                }
                                break;
                            }
                        }
                    }
                    else if (rdx_8 == 5)
                    {
                        rbx_1 = *rcx_4;
                        rbp_1 = rcx_4;
                        goto label_409341;
                    }
                }
            }
            if (rax == r13_1)
            {
                goto label_409965;
            }
            free(r13_1);
        label_409965:;
            int64_t rdi_7 = r8[1];
            if (var_60 != rdi_7)
            {
                free(rdi_7);
            }
            *__errno_location() = 0x16;
            rax_6 = 0xffffffff;
        }
        return rax_6;
    }
    *__errno_location() = 0xc;
    return 0xffffffff;
}



int64_t sub_409f00(void (* arg1)(void*))
{
    int64_t rdx = data_60e248;
    /* tailcall */
    return __cxa_atexit(arg1, nullptr, rdx);
}

int64_t sub_409f18(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rbx = &data_60de30;
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

