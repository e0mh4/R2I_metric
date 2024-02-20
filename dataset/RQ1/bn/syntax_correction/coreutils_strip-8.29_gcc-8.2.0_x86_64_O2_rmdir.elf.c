#include "decompile_bn.h"
int64_t sub_401440()
{
    int64_t var_8 = data_60c008;
    /* jump -> data_60c010 */
}

int64_t sub_401466()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401486()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4014a6()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4014c6()
{
    int64_t var_8 = 7;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4014e6()
{
    int64_t var_8 = 9;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401506()
{
    int64_t var_8 = 0xb;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401526()
{
    int64_t var_8 = 0xd;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401546()
{
    int64_t var_8 = 0xf;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401566()
{
    int64_t var_8 = 0x11;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401586()
{
    int64_t var_8 = 0x13;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4015a6()
{
    int64_t var_8 = 0x15;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4015c6()
{
    int64_t var_8 = 0x17;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4015e6()
{
    int64_t var_8 = 0x19;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401606()
{
    int64_t var_8 = 0x1b;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401626()
{
    int64_t var_8 = 0x1d;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401646()
{
    int64_t var_8 = 0x1f;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401666()
{
    int64_t var_8 = 0x21;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401686()
{
    int64_t var_8 = 0x23;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4016a6()
{
    int64_t var_8 = 0x25;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4016c6()
{
    int64_t var_8 = 0x27;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4016e6()
{
    int64_t var_8 = 0x29;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401706()
{
    int64_t var_8 = 0x2b;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401726()
{
    int64_t var_8 = 0x2d;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401746()
{
    int64_t var_8 = 0x2f;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401766()
{
    int64_t var_8 = 0x31;
    /* tailcall */
    return sub_401440();
}

int64_t sub_401786()
{
    int64_t var_8 = 0x33;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4017a6()
{
    int64_t var_8 = 0x35;
    /* tailcall */
    return sub_401440();
}

int64_t sub_4017c6()
{
    int64_t var_8 = 0x37;
    /* tailcall */
    return sub_401440();
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    sub_402220(*argv);
    setlocale(6, &data_40a0ac[0x1b]);
    bindtextdomain("coreutils", "/home/dongkwan/data/scripts/gnu_…");
    textdomain("coreutils");
    sub_408850(sub_402140);
    data_60c29a = 0;
    while (true)
    {
        int32_t rax_1 = getopt_long(argc, argv, &data_408942, &data_408d60, nullptr);
        if (rax_1 == 0xffffffff)
        {
            int32_t rax_3 = data_60c25c;
            bool cond0_1 = rax_3 < argc;
            if (rax_3 != argc)
            {
                int32_t r13 = 1;
                if (cond0_1)
                {
                    do
                    {
                        uint64_t rbx_1 = argv[rax_3];
                        if (data_60c298 != 0)
                        {
                            sub_403bf0(4, rbx_1);
                            sub_402030(stdout, dcgettext(nullptr, "removing directory, %s", 5), 0);
                        }
                        if (rmdir(rbx_1) != 0)
                        {
                            int32_t* rax_9 = __errno_location();
                            if (sub_401c30(*rax_9) == 0)
                            {
                                r13 = 0;
                                error(0, *rax_9, dcgettext(nullptr, "failed to remove %s", 5), sub_403bf0(4, rbx_1));
                            }
                        }
                        else
                        {
                            uint32_t r14_1 = data_60c29a;
                            if (r14_1 != 0)
                            {
                                sub_4021e0(rbx_1);
                                uint32_t r8_2;
                                while (true)
                                {
                                    char* rax_14 = strrchr(rbx_1, 0x2f);
                                    if (rax_14 != 0)
                                    {
                                        if (rbx_1 < rax_14)
                                        {
                                            while (*rax_14 == 0x2f)
                                            {
                                                rax_14 = (rax_14 - 1);
                                                if (rbx_1 == rax_14)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                        bool cond3_1;
                                        if ((rbx_1 >= rax_14 || (rbx_1 < rax_14 && *rax_14 != 0x2f)))
                                        {
                                            cond3_1 = data_60c298 != 0;
                                            rax_14[1] = 0;
                                        }
                                        bool cond4_1;
                                        if ((rbx_1 < rax_14 && *rax_14 == 0x2f))
                                        {
                                            cond4_1 = data_60c298 == 0;
                                            *(rbx_1 + 1) = 0;
                                        }
                                        if ((((rbx_1 >= rax_14 || (rbx_1 < rax_14 && *rax_14 != 0x2f)) && cond3_1) || ((rbx_1 < rax_14 && *rax_14 == 0x2f) && (!cond4_1))))
                                        {
                                            sub_403bf0(4, rbx_1);
                                            sub_402030(stdout, dcgettext(nullptr, "removing directory, %s", 5), 0);
                                        }
                                        if (rmdir(rbx_1) == 0)
                                        {
                                            continue;
                                        }
                                        else
                                        {
                                            int32_t* rax_16 = __errno_location();
                                            char rax_17 = sub_401c30(*rax_16);
                                            if (rax_17 == 0)
                                            {
                                                error(0, *rax_16, dcgettext(nullptr, "failed to remove directory %s", 5), sub_403bf0(4, rbx_1));
                                                r8_2 = rax_17;
                                                break;
                                            }
                                        }
                                    }
                                    r8_2 = r14_1;
                                    break;
                                }
                                r13 = (r13 & r8_2);
                            }
                        }
                        rax_3 = (data_60c25c + 1);
                        data_60c25c = rax_3;
                    } while (rax_3 < argc);
                }
                return (r13 ^ 1);
            }
            error(0, 0, dcgettext(nullptr, "missing operand", 5));
            break;
        }
        bool cond1_1 = rax_1 <= 0x70;
        if (rax_1 == 0x70)
        {
            data_60c29a = 1;
        }
        else
        {
            if (cond1_1)
            {
                if (rax_1 == 0xffffff7d)
                {
                    sub_4042c0(stdout, "rmdir", "GNU coreutils", data_60c1f0);
                    exit(0);
                    /* no return */
                }
                if (rax_1 == 0xffffff7e)
                {
                    sub_401d20(0);
                    /* no return */
                }
                break;
            }
            if (rax_1 == 0x76)
            {
                data_60c298 = 1;
            }
            else
            {
                if (rax_1 != 0x80)
                {
                    break;
                }
                data_60c299 = 1;
            }
        }
    }
    sub_401d20(1);
    /* no return */
}


void sub_401b7b()
{
    return;
}

int64_t sub_401b9a()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    return (COMBINE(rdx, rax) / 2);
}

void sub_401bd1()
{
    if (data_60c288 != 0)
    {
        return;
    }
    while (true)
    {
        int64_t rax_1 = data_60c290;
        if (rax_1 >= 0)
        {
            break;
        }
        data_60c290 = (rax_1 + 1);
        *(0x60be40 + ((rax_1 + 1) << 3))();
    }
    sub_401b7b();
    data_60c288 = 1;
}

int64_t j_sub_401b9a()
{
    /* tailcall */
    return sub_401b9a();
}

uint64_t sub_401c30(int32_t arg1)
{
    if (data_60c299 != 0)
    {
        uint64_t rbx;
        rbx = arg1 == 0x11;
        rbx = (rbx | arg1 == 0x27);
        int32_t rax_5;
        if (((rbx == 0 && arg1 <= 0x1e) && ((1 << arg1) & 0x40032002) != 0))
        {
            rax_5 = openat(0xffffff9c);
            if (rax_5 >= 0)
            {
                DIR* rax_6 = fdopendir(rax_5);
                if (rax_6 == 0)
                {
                    close(rax_5);
                }
                else
                {
                    int32_t* rax_7 = __errno_location();
                    *rax_7 = 0;
                    while (true)
                    {
                        struct dirent64* rax_8 = readdir(rax_6);
                        if (rax_8 == 0)
                        {
                            rbx = *rax_7;
                            closedir(rax_6);
                            rbx = rbx == 0;
                            break;
                        }
                        if (rax_8->d_name[0] == 0x2e)
                        {
                            int64_t rdx_1;
                            rdx_1 = rax_8->d_name[1] == 0x2e;
                            char rax_9 = rax_8->d_name[(1 + rdx_1)];
                            if (rax_9 == 0)
                            {
                                continue;
                            }
                            if (rax_9 == 0x2f)
                            {
                                continue;
                            }
                        }
                        closedir(rax_6);
                        break;
                    }
                }
            }
        }
        if ((rbx != 0 || (((rbx == 0 && arg1 <= 0x1e) && ((1 << arg1) & 0x40032002) != 0) && rax_5 >= 0)))
        {
            return rbx;
        }
    }
    return 0;
}

noreturn int64_t sub_401d20(int32_t arg1) 
{
    int64_t rbp = data_60c2b0;
    if (arg1 != 0)
    {
        __fprintf_chk(stderr, 1, dcgettext(nullptr, "Try '%s --help' for more informa…", 5), rbp);
    }
    else
    {
        __printf_chk(1, dcgettext(nullptr, "Usage: %s [OPTION]... DIRECTORY.…", 5), rbp);
        fputs_unlocked(dcgettext(nullptr, "Remove the DIRECTORY(ies), if th…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "  -p, --parents   remove DIRECTO…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --help     display this he…", 5), stdout);
        fputs_unlocked(dcgettext(nullptr, "      --version  output version …", 5), stdout);
        void* const var_88 = &data_4088aa;
        void* const* rax_8 = &var_88;
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
            rax_8 = &rax_8[2];
            void* const rdi_6 = *rax_8;
            c_1 = false;
            z_1 = (rdi_6 & rdi_6) == 0;
            if (z_1)
            {
                break;
            }
            void* const rsi_6 = "rmdir";
            int64_t rcx_2 = 6;
            while (rcx_2 != 0)
            {
                char temp0_1 = *rsi_6;
                char temp1_1 = *rdi_6;
                c_1 = temp0_1 < temp1_1;
                z_1 = temp0_1 == temp1_1;
                rsi_6 = (rsi_6 + 1);
                rdi_6 = (rdi_6 + 1);
                rcx_2 = (rcx_2 - 1);
                if ((!z_1))
                {
                    break;
                }
            }
        } while ((((!z_1) && (!c_1)) - 0) != 0);
        void* const rbp_1 = rax_8[1];
        char* rax_19;
        int32_t rax_20;
        void* const r12_1;
        if (rbp_1 == 0)
        {
            int64_t rcx_5;
            int64_t rdx_5;
            uint64_t r8_2;
            ssize_t r9_2;
            rcx_5 = __printf_chk(1, dcgettext(nullptr, "n%s online help: <%s>n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            rax_19 = setlocale(5, nullptr, rdx_5, rcx_5, r8_2, r9_2, var_88, "test invocation");
            if (rax_19 != 0)
            {
                rax_20 = strncmp(rax_19, &data_40892e, 3);
                if (rax_20 != 0)
                {
                    rbp_1 = "rmdir";
                }
            }
            if ((rax_19 == 0 || (rax_19 != 0 && rax_20 == 0)))
            {
                rbp_1 = "rmdir";
                r12_1 = " invocation";
                __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>n", 5), "https://www.gnu.org/software/cor…", "rmdir");
            }
        }
        else
        {
            int64_t rcx_3;
            int64_t rdx_3;
            uint64_t r8_1;
            ssize_t r9_1;
            rcx_3 = __printf_chk(1, dcgettext(nullptr, "n%s online help: <%s>n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
            char* rax_11 = setlocale(5, nullptr, rdx_3, rcx_3, r8_1, r9_1, var_88, "test invocation");
            if (rax_11 == 0)
            {
                goto label_401f20;
            }
            if (strncmp(rax_11, &data_40892e, 3) == 0)
            {
                goto label_401f20;
            }
        }
        if ((((rbp_1 == 0 && rax_19 != 0) && rax_20 != 0) || rbp_1 != 0))
        {
            __printf_chk(1, dcgettext(nullptr, "Report %s translation bugs to <h…", 5), "rmdir");
        label_401f20:
            r12_1 = " invocation";
            __printf_chk(1, dcgettext(nullptr, "Full documentation at: <%s%s>n", 5), "https://www.gnu.org/software/cor…", "rmdir");
            if (rbp_1 != "rmdir")
            {
                r12_1 = &data_40a0ac[0x1b];
            }
        }
        __printf_chk(1, dcgettext(nullptr, "or available locally via: info '…", 5), rbp_1, r12_1);
    }
    exit(arg1);
    /* no return */
}

char* sub_402030(FILE* arg1, char* arg2, char arg3)
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
    fputs_unlocked(data_60c2b0, arg1);
    fwrite_unlocked(&data_408e40, 1, 2, arg1);
    int32_t var_e0 = 0x10;
    void* var_d8 = &arg_8;
    int32_t var_dc = 0x30;
    void var_c8;
    void* var_d0 = &var_c8;
    sub_4054e0(arg1, arg2, &var_e0);
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

int64_t sub_402120(int64_t arg1)
{
    data_60c2a8 = arg1;
}

int64_t sub_402130(char arg1)
{
    data_60c2a0 = arg1;
}

void sub_402140(void* arg1)
{
    int32_t rax = sub_4055a0(stdout);
    int32_t* rax_1;
    if (rax != 0)
    {
        rax_1 = __errno_location();
        if ((data_60c2a0 == 0 || (data_60c2a0 != 0 && *rax_1 != 0x20)))
        {
            char* rax_3 = dcgettext(nullptr, "write error", 5);
            int64_t rdi_2 = data_60c2a8;
            if (rdi_2 == 0)
            {
                error(0, *rax_1, "%s", rax_3);
            }
            else
            {
                error(0, *rax_1, "%s: %s", sub_403c90(rdi_2), rax_3);
            }
        }
    }
    if (((rax == 0 || ((rax != 0 && data_60c2a0 != 0) && *rax_1 == 0x20)) && sub_4055a0(stderr) == 0))
    {
        return;
    }
    _exit(data_60c1f8);
    /* no return */
}

uint64_t sub_4021e0(char* arg1)
{
    char* rax = sub_405600(arg1);
    char* rbx = rax;
    if (*rax == 0)
    {
        rbx = arg1;
    }
    void* rbx_1 = &rbx[sub_405660(rbx)];
    bool cond1 = *rbx_1 != 0;
    *rbx_1 = 0;
    uint64_t rax_1;
    rax_1 = cond1;
    return rax_1;
}

char* sub_402220(char* arg1)
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
                void* const rdi_1 = &data_408ea0;
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
    data_60c2b0 = rbx;
    __progname_full = rbx;
    return rax;
}

char* sub_4022c0(char* arg1, int32_t arg2)
{
    char* rax = dcgettext(nullptr, arg1, 5);
    char* rbx = rax;
    if (arg1 == rax)
    {
        char* rax_2 = sub_4056f0();
        char rdx_2 = (*rax_2 & 0xdf);
        if (rdx_2 != 0x55)
        {
            if (rdx_2 != 0x47)
            {
            label_4023a1:;
                void* const rbx_1 = &data_408ea4;
                if (arg2 != 9)
                {
                    rbx_1 = "'";
                }
                return rbx_1;
            }
            if ((rax_2[1] & 0xdf) != 0x42)
            {
                goto label_4023a1;
            }
            if (rax_2[2] != 0x31)
            {
                goto label_4023a1;
            }
            if (rax_2[3] != 0x38)
            {
                goto label_4023a1;
            }
            if (rax_2[4] != 0x30)
            {
                goto label_4023a1;
            }
            if (rax_2[5] != 0x33)
            {
                goto label_4023a1;
            }
            if (rax_2[6] != 0x30)
            {
                goto label_4023a1;
            }
            if (rax_2[7] != 0)
            {
                goto label_4023a1;
            }
            bool cond2_1 = *rbx != 0x60;
            rbx = &data_408ead;
            if (cond2_1)
            {
                rbx = &data_408eaa;
            }
        }
        else
        {
            if ((rax_2[1] & 0xdf) != 0x54)
            {
                goto label_4023a1;
            }
            if ((rax_2[2] & 0xdf) != 0x46)
            {
                goto label_4023a1;
            }
            if (rax_2[3] != 0x2d)
            {
                goto label_4023a1;
            }
            if (rax_2[4] != 0x38)
            {
                goto label_4023a1;
            }
            if (rax_2[5] != 0)
            {
                goto label_4023a1;
            }
            bool cond1_1 = *rbx != 0x60;
            rbx = &data_408eb1;
            if (cond1_1)
            {
                rbx = &data_408ea6;
            }
        }
    }
    return rbx;
}

int64_t sub_4023c0(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
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
    label_402458:
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
                    label_4027cc:
                        if (var_c0 != 0)
                        {
                            r13_1 = 4;
                        }
                        goto label_402814;
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
                            rbx_1 = sub_4023c0(r15, var_70, arg3, r11, 5, arg6, arg7, arg8, arg9);
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
                    goto label_40282b;
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
                        goto label_402965;
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
                                goto label_4025b5;
                            }
                            goto label_4028a0;
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
                            goto label_402965;
                        }
                        case 7:
                        {
                            rbp_3 = 7;
                            rcx_2 = 0x61;
                            rdx = r11_1 == 2;
                            goto label_402790;
                        }
                        case 8:
                        {
                            rbp_3 = 8;
                            rcx_2 = 0x62;
                            rdx = r11_1 == 2;
                        label_402790:
                            if (var_c0 == 0)
                            {
                                goto label_40279b;
                            }
                            rbp_3 = rcx_2;
                            r13 = 0;
                        label_4025f7:
                            if (var_5c == 0)
                            {
                                goto label_402608;
                            }
                        label_4027c0:
                            r13_1 = r11_1;
                            rax_14 = rdx;
                            r11 = r9;
                            goto label_4027c8;
                        }
                        case 9:
                        {
                            rbp_3 = 9;
                            rcx_2 = 0x74;
                            goto label_4029fb;
                        }
                        case 0xa:
                        {
                            rbp_3 = 0xa;
                            rcx_2 = 0x6e;
                        label_4029fb:
                            rdx = r11_1 == 2;
                            bool rax_26 = (var_5c & rdx);
                            var_b8 = rax_26;
                            if (rax_26 != 0)
                            {
                            label_402a0a:
                                r11 = r9;
                                r13_1 = 2;
                                goto label_4027cc;
                            }
                            goto label_402790;
                        }
                        case 0xb:
                        {
                            rbp_3 = 0xb;
                            rcx_2 = 0x76;
                            rdx = r11_1 == 2;
                            goto label_402790;
                        }
                        case 0xc:
                        {
                            rbp_3 = 0xc;
                            rcx_2 = 0x66;
                            rdx = r11_1 == 2;
                            goto label_402790;
                        }
                        case 0xd:
                        {
                            rbp_3 = 0xd;
                            rcx_2 = 0x72;
                            goto label_4029fb;
                        }
                        case 0x20:
                        {
                            rbp_3 = 0x20;
                            rdx = r11_1 == 2;
                            goto label_402596;
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
                        label_402596:
                            if (var_5c == 0)
                            {
                                goto label_4025b5;
                            }
                            if (rdx == 0)
                            {
                                goto label_4025b5;
                            }
                            goto label_402a0a;
                        }
                        case 0x23:
                        case 0x7e:
                        {
                            rdx = r11_1 == 2;
                        label_40258d:
                            if (r12_1 != 0)
                            {
                                goto label_40279b;
                            }
                            goto label_402596;
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
                        label_4029c0:
                            rdx = r11_1 == 2;
                        label_4025b5:
                            rax_8 = ((((var_c0 ^ 1) | rdx) ^ 1) | var_5c);
                            if (rax_8 == 0)
                            {
                                goto label_4026bc;
                            }
                            goto label_4025bf;
                        }
                        case 0x27:
                        {
                            goto label_40273d;
                        }
                        case 0x3f:
                        {
                            goto label_40270d;
                        }
                        case 0x5c:
                        {
                            if (r11_1 != 2)
                            {
                                goto label_40276a;
                            }
                            if (var_5c != 0)
                            {
                                goto label_4034fd;
                            }
                            r12_1 = (r12_1 + 1);
                            rax_12 = r10;
                            r13 = 0;
                            rbp_3 = 0x5c;
                            goto label_4026d4;
                        }
                        case 0x7b:
                        case 0x7d:
                        {
                            goto label_402569;
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
                            goto label_402b60;
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
                            goto label_402b60;
                        }
                        if (var_5c != 0)
                        {
                        label_4034b0:
                            r13_1 = r11_1;
                            r11 = r9;
                        label_402814:
                            rbx_1 = sub_4023c0(r15, r14, arg3, r11, r13_1, (arg6 & 0xfffffffd), 0, arg8, arg9);
                        label_40282b:
                            return rbx_1;
                        }
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                            goto label_402965;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                                goto label_4028b7;
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
                                goto label_402965;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                            label_402880:
                                r13 = 0;
                                goto label_40263b;
                            }
                            case 8:
                            {
                                rdx = 0;
                                r13 = 0;
                                rbp_3 = 0x62;
                            label_402608:;
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
                            label_40263b:
                                if (r14 <= rbx_1)
                                {
                                    goto label_402645;
                                }
                                r15[rbx_1] = 0x5c;
                            label_402645:
                                rbx_1 = (rbx_1 + 1);
                                r12_1 = (r12_1 + 1);
                                goto label_40264d;
                            }
                            case 9:
                            {
                                goto label_402830;
                            }
                            case 0xa:
                            {
                                goto label_4027a8;
                            }
                            case 0xb:
                            {
                                goto label_402890;
                            }
                            case 0xc:
                            {
                                goto label_402870;
                            }
                            case 0xd:
                            {
                                goto label_402859;
                            }
                            case 0x20:
                            {
                                rax_27 = var_b8;
                                goto label_402bba;
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
                                goto label_402845;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = var_b8;
                                goto label_402b9a;
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
                                goto label_402b82;
                            }
                            case 0x27:
                            {
                                goto label_40273d;
                            }
                            case 0x3f:
                            {
                                goto label_40270d;
                            }
                            case 0x5c:
                            {
                                goto label_40276a;
                            }
                            case 0x7b:
                            case 0x7d:
                            {
                                goto label_402569;
                            }
                        }
                    }
                    else
                    {
                    label_402b60:
                        rbp_3 = *r8;
                        if (rbp_3 > 0x7e)
                        {
                        label_402960:
                            var_b8 = 0;
                        label_402965:;
                            uint64_t rdi_4;
                            if (rax == 1)
                            {
                                r10 = r10;
                                rdi_4 = 1;
                                rax_12 = (*__ctype_b_loc()[rbp_3] & 0x4000);
                                r13 = rax_12 != 0;
                                rdx = rax_12 == 0;
                                rdx = (rdx & var_c0);
                            label_4029b4:
                                if (rdx == 0)
                                {
                                    goto label_4029c0;
                                }
                                rdx = var_c0;
                                r13 = 0;
                            label_402eb1:
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
                                    goto label_4026d4;
                                }
                                if ((rdx != 0 && var_5c != 0))
                                {
                                    r13_1 = r11_1;
                                    var_c0 = rax_12;
                                    r11 = r9;
                                    goto label_4027cc;
                                }
                                r13 = var_98;
                                goto label_40264d;
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
                                rax_12 = sub_405460(&var_44, rbp_4, (var_98 - r15_1), &var_40);
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
                                            goto label_4027cc;
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
                                goto label_402eb1;
                            }
                            goto label_4029b4;
                        }
                        switch (rbp_3)
                        {
                            case 0:
                            {
                            label_4028a0:
                                if (var_5c != 0)
                                {
                                    r13_1 = r11_1;
                                    r11 = r9;
                                    var_c0 = r13_1 == 2;
                                    goto label_4027cc;
                                }
                                var_b8 = 0;
                            label_4028b7:
                                rdx = r11_1 == 2;
                                rax_8 = ((r10 ^ 1) & rdx);
                                int64_t rcx_6;
                                if (rax_8 == 0)
                                {
                                    rcx_6 = rbx_1;
                                    if (r14 <= rbx_1)
                                    {
                                        goto label_402902;
                                    }
                                    rax_8 = r10;
                                label_4028fa:
                                    r15[rcx_6] = 0x5c;
                                    r10 = rax_8;
                                label_402902:
                                    rbx_1 = (rcx_6 + 1);
                                    if (r11_1 == 2)
                                    {
                                        rax_8 = r13;
                                        rbp_3 = 0x30;
                                        r13 = 0;
                                        goto label_4026bc;
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
                                    goto label_402943;
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
                                    goto label_4028fa;
                                }
                                rbx_1 = (rbx_1 + 4);
                                r10 = rax_8;
                                r13 = 0;
                                rbp_3 = 0x30;
                                goto label_4026bc;
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
                                goto label_402960;
                            }
                            case 7:
                            {
                                rbp_3 = 0x61;
                                goto label_402875;
                            }
                            case 8:
                            {
                                rbp_3 = 0x62;
                                goto label_4027ad;
                            }
                            case 9:
                            {
                            label_402830:
                                rbp_3 = 0x74;
                                goto label_4027ad;
                            }
                            case 0xa:
                            {
                            label_4027a8:
                                rbp_3 = 0x6e;
                            label_4027ad:
                                rdx = 0;
                                r13 = 0;
                                if (var_5c != 0)
                                {
                                    goto label_4027c0;
                                }
                                goto label_402608;
                            }
                            case 0xb:
                            {
                            label_402890:
                                rbp_3 = 0x76;
                                goto label_402875;
                            }
                            case 0xc:
                            {
                            label_402870:
                                rbp_3 = 0x66;
                            label_402875:
                                if (var_5c == 0)
                                {
                                    goto label_402880;
                                }
                                r13_1 = r11_1;
                                rax_14 = 0;
                                r11 = r9;
                            label_4027c8:
                                var_c0 = (var_c0 & rax_14);
                                goto label_4027cc;
                            }
                            case 0xd:
                            {
                                var_b8 = 0;
                            label_402859:
                                rbp_3 = 0xd;
                                rcx_2 = 0x72;
                                rdx = r11_1 == 2;
                                goto label_402790;
                            }
                            case 0x20:
                            {
                                rax_27 = 0;
                            label_402bba:
                                rbp_3 = 0x20;
                                goto label_402b82;
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
                            label_402845:
                                rdx = 0;
                            label_40279b:
                                r13 = 0;
                                goto label_4025b5;
                            }
                            case 0x23:
                            case 0x7e:
                            {
                                rax_28 = 0;
                            label_402b9a:
                                if (r12_1 == 0)
                                {
                                    r13 = var_b8;
                                    rdx = 0;
                                    var_b8 = rax_28;
                                    goto label_4025b5;
                                }
                                var_b8 = rax_28;
                                r13 = 0;
                            label_4025bf:
                                rax_8 = 0;
                                goto label_4025c1;
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
                            label_402b82:
                                r13 = var_b8;
                                var_b8 = rax_27;
                                rax_8 = 0;
                                goto label_4025c1;
                            }
                            case 0x27:
                            {
                                var_b8 = 0;
                            label_40273d:
                                if (r11_1 != 2)
                                {
                                    var_5b_1 = r13;
                                    rdx = 0;
                                    rbp_3 = 0x27;
                                    goto label_4025b5;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_4034fd;
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
                                goto label_4026bc;
                            }
                            case 0x3f:
                            {
                                var_b8 = 0;
                            label_40270d:
                                if (r11_1 == 2)
                                {
                                    if (var_5c != 0)
                                    {
                                    label_4034fd:
                                        r13_1 = r11_1;
                                        r11 = r9;
                                        goto label_4027cc;
                                    }
                                    r13 = 0;
                                    rax_8 = 0;
                                    rbp_3 = 0x3f;
                                label_4026bc:
                                    rdx = r11_1 == 2;
                                    if (var_b8 != 0)
                                    {
                                        goto label_4025f7;
                                    }
                                    r12_1 = (r12_1 + 1);
                                    rax_12 = ((rax_8 ^ 1) & r10);
                                    goto label_4026d4;
                                }
                                if (r11_1 != 5)
                                {
                                    rbp_3 = 0x3f;
                                    rdx = r11_1 == 2;
                                    r13 = 0;
                                    goto label_4025b5;
                                }
                                if ((arg6 & 4) == 0)
                                {
                                label_402ca0:
                                    rdx = 0;
                                    r13 = 0;
                                    rbp_3 = 0x3f;
                                    goto label_4025b5;
                                }
                                int64_t rax_30 = (r12_1 + 2);
                                if (rax_30 >= r9)
                                {
                                    goto label_402ca0;
                                }
                                if (*((arg3 + r12_1) + 1) != 0x3f)
                                {
                                    goto label_402ca0;
                                }
                                rbp_3 = *(arg3 + rax_30);
                                if (rbp_3 > 0x3e)
                                {
                                    goto label_402ca0;
                                }
                                if ((!(TEST_BITQ(0x7000a38200000000, rbp_3))))
                                {
                                    goto label_402ca0;
                                }
                                if (var_5c != 0)
                                {
                                    goto label_4034b0;
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
                            label_402943:
                                rax_8 = r13;
                                r13 = 0;
                                if (((var_c0 ^ 1) | rdx) != 0)
                                {
                                    goto label_4026bc;
                                }
                            label_4025c1:
                                if (arg7 == 0)
                                {
                                    goto label_4026bc;
                                }
                                if (((*(arg7 + ((rbp_3 >> 5) << 2)) >> rbp_3) & 1) == 0)
                                {
                                    goto label_4026bc;
                                }
                                rdx = r11_1 == 2;
                                goto label_4025f7;
                            }
                            case 0x5c:
                            {
                                var_b8 = 0;
                            label_40276a:
                                rdx = (var_c0 & var_5c);
                                rbp_3 = 0x5c;
                                rcx_2 = 0x5c;
                                rax_1 = var_a0_1 != 0;
                                rdx = (rdx & rax_1);
                                if (rdx == 0)
                                {
                                    goto label_402790;
                                }
                                r12_1 = (r12_1 + 1);
                                rax_12 = r10;
                                r13 = 0;
                            label_4026d4:
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
                                    goto label_40264d;
                                }
                            label_40264d:
                                if (rbx_1 >= r14)
                                {
                                    goto label_402656;
                                }
                                r15[rbx_1] = rbp_3;
                            label_402656:;
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
                            label_402569:
                                rax_1 = r9 != 1;
                                if (r9 == -1)
                                {
                                    rax_1 = *(arg3 + 1) != 0;
                                }
                                rdx = r11_1 == 2;
                                if (rax_1 != 0)
                                {
                                    goto label_40279b;
                                }
                                goto label_40258d;
                            }
                        }
                    }
                }
            }
        label_402c46:
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
            goto label_402458;
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
                goto label_402458;
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
            goto label_402458;
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
                var_78_1 = &data_408ea4;
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
                var_78_1 = &data_408ea4;
            }
            goto label_402458;
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
            var_78_1 = &data_408ea4;
            goto label_402458;
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
            goto label_402458;
        }
        case 8:
        case 9:
        case 0xa:
        {
            if ((!cond1))
            {
                arg8 = sub_4022c0(&data_408eb5, r13);
                arg9 = sub_4022c0("'", r13);
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
            goto label_402458;
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
            goto label_402c46;
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
        goto label_402458;
    }
}

char* sub_4035f0(int32_t arg1, uint64_t arg2, uint64_t arg3, int32_t* arg4)
{
    int64_t r15 = arg1;
    int32_t* rax = __errno_location();
    int64_t rbx = data_60c238;
    int32_t rax_1 = *rax;
    if (r15 < 0)
    {
        abort();
        /* no return */
    }
    if (data_60c250 <= r15)
    {
        if (r15 == 0x7fffffff)
        {
            sub_404650();
            /* no return */
        }
        int32_t r12_1 = (r15 + 1);
        int64_t rsi_1 = (r12_1 << 4);
        if (rbx == 0x60c240)
        {
            int64_t rax_9 = sub_404460(0, rsi_1);
            int128_t zmm0 = data_60c240;
            rbx = rax_9;
            data_60c238 = rax_9;
            *rax_9 = zmm0;
        }
        else
        {
            int64_t rax_2 = sub_404460(rbx, rsi_1);
            data_60c238 = rax_2;
            rbx = rax_2;
        }
        int64_t rdi_1 = data_60c250;
        memset(((rdi_1 << 4) + rbx), 0, ((r12_1 - rdi_1) << 4));
        data_60c250 = r12_1;
    }
    int64_t rbx_1 = (rbx + (r15 << 4));
    void* r15_2 = &arg4[2];
    int32_t rax_4 = (arg4[1] | 1);
    uint64_t r11 = *rbx_1;
    char* r12_2 = *(rbx_1 + 8);
    int64_t rax_5 = sub_4023c0(r12_2, r11, arg2, arg3, *arg4, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    if (r11 <= rax_5)
    {
        size_t rsi_3 = (rax_5 + 1);
        *rbx_1 = rsi_3;
        if (r12_2 != 0x60c2c0)
        {
            free(r12_2);
        }
        char* rax_6 = sub_404400(rsi_3);
        uint32_t r8_1 = *arg4;
        *(rbx_1 + 8) = rax_6;
        r12_2 = rax_6;
        sub_4023c0(rax_6, rsi_3, arg2, arg3, r8_1, rax_4, r15_2, *(arg4 + 0x28), *(arg4 + 0x30));
    }
    *rax = rax_1;
    return r12_2;
}

int64_t sub_403790(int64_t arg1)
{
    int64_t rbx = arg1;
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    if (rbx == 0)
    {
        rbx = 0x60c3c0;
    }
    int64_t rax_1 = sub_404600(rbx, 0x38);
    *rax = r12;
    return rax_1;
}

uint64_t sub_4037d0(int32_t* arg1)
{
    if (arg1 == 0)
    {
        arg1 = &data_60c3c0;
    }
    return *arg1;
}

void sub_4037e0(int32_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60c3c0;
    }
    *arg1 = arg2;
}

uint64_t sub_4037f0(int64_t arg1, uint8_t arg2, int32_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = 0x60c3c0;
    }
    char rcx_1 = (arg2 & 0x1f);
    int32_t rsi = *((arg1 + ((arg2 >> 5) << 2)) + 8);
    uint32_t rax_3 = (rsi >> rcx_1);
    *((arg1 + ((arg2 >> 5) << 2)) + 8) = ((((arg3 ^ rax_3) & 1) << rcx_1) ^ rsi);
    return (rax_3 & 1);
}

uint64_t sub_403830(int128_t* arg1, int32_t arg2)
{
    if (arg1 == 0)
    {
        arg1 = &data_60c3c0;
    }
    uint64_t rax = *(arg1 + 4);
    *(arg1 + 4) = arg2;
    return rax;
}

void sub_403850(int32_t* arg1, int64_t arg2, int64_t arg3)
{
    if (arg1 == 0)
    {
        arg1 = &data_60c3c0;
    }
    *arg1 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *(arg1 + 0x28) = arg2;
        *(arg1 + 0x30) = arg3;
        return;
    }
    int64_t var_8 = 0x60c3c0;
    abort();
    /* no return */
}

int64_t sub_403880(char* arg1, uint64_t arg2, uint64_t arg3, uint64_t arg4, 
    int32_t* arg5)
{
    int32_t* rbx = arg5;
    if (arg5 == 0)
    {
        rbx = &data_60c3c0;
    }
    int32_t* rax = __errno_location();
    int32_t r12 = *rax;
    int64_t rax_2 = sub_4023c0(arg1, arg2, arg3, arg4, *rbx, rbx[1], &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = r12;
    return rax_2;
}

char* sub_403900(uint64_t arg1, uint64_t arg2, int64_t* arg3, int32_t* arg4)
{
    int32_t* rbx = arg4;
    if (arg4 == 0)
    {
        rbx = &data_60c3c0;
    }
    int32_t* rax = __errno_location();
    int32_t rax_1 = *rax;
    int32_t rbp;
    rbp = arg3 == 0;
    int32_t rbp_1 = (rbp | rbx[1]);
    int64_t rax_2 = sub_4023c0(nullptr, 0, arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    char* rax_3 = sub_404400((rax_2 + 1));
    sub_4023c0(rax_3, (rax_2 + 1), arg1, arg2, *rbx, rbp_1, &rbx[2], *(rbx + 0x28), *(rbx + 0x30));
    *rax = rax_1;
    if (arg3 != 0)
    {
        *arg3 = rax_2;
    }
    return rax_3;
}

int64_t sub_4039f0(uint64_t arg1, uint64_t arg2, int32_t* arg3)
{
    /* tailcall */
    return sub_403900(arg1, arg2, nullptr, arg3);
}

uint64_t sub_403a00()
{
    uint64_t rax_2 = data_60c250;
    int64_t r12 = data_60c238;
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
    if (rdi_2 != 0x60c2c0)
    {
        rax_2 = free(rdi_2);
        *data_60c240 = 0x100;
        *(data_60c240 + 8) = 0x60c2c0;
    }
    if (r12 != 0x60c240)
    {
        rax_2 = free(r12);
        data_60c238 = 0x60c240;
    }
    data_60c250 = 1;
    return rax_2;
}

int64_t sub_403aa0(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_4035f0(arg1, arg2, -1, &data_60c3c0);
}

int64_t sub_403ac0(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_4035f0(arg1, arg2, arg3, &data_60c3c0);
}

int64_t sub_403ad0(uint64_t arg1)
{
    /* tailcall */
    return sub_4035f0(0, arg1, -1, &data_60c3c0);
}

int64_t sub_403af0(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_4035f0(0, arg1, arg2, &data_60c3c0);
}

char* sub_403b10(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_4035f0(arg1, arg3, -1, &var_48);
}

char* sub_403b80(int32_t arg1, int32_t arg2, uint64_t arg3, uint64_t arg4)
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
    return sub_4035f0(arg1, arg3, arg4, &var_48);
}

int64_t sub_403bf0(int32_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403b10(0, arg1, arg2);
}

int64_t sub_403c00(int32_t arg1, uint64_t arg2, uint64_t arg3)
{
    /* tailcall */
    return sub_403b80(0, arg1, arg2, arg3);
}

char* sub_403c10(uint64_t arg1, uint64_t arg2, uint8_t arg3)
{
    char rcx_1 = (arg3 & 0x1f);
    int64_t var_18 = data_60c3f0;
    int128_t var_48 = data_60c3c0;
    int128_t var_38 = data_60c3d0;
    int128_t var_28 = data_60c3e0;
    int32_t rdx = *((&var_48 + ((arg3 >> 5) << 2)) + 8);
    *((&var_48 + ((arg3 >> 5) << 2)) + 8) = ((((!(rdx >> rcx_1)) & 1) << rcx_1) ^ rdx);
    return sub_4035f0(0, arg1, arg2, &var_48);
}

int64_t sub_403c80(uint64_t arg1, uint8_t arg2)
{
    /* tailcall */
    return sub_403c10(arg1, -1, arg2);
}

int64_t sub_403c90(uint64_t arg1)
{
    /* tailcall */
    return sub_403c10(arg1, -1, 0x3a);
}

int64_t sub_403cb0(uint64_t arg1, uint64_t arg2)
{
    /* tailcall */
    return sub_403c10(arg1, arg2, 0x3a);
}

char* sub_403cc0(int32_t arg1, int32_t arg2, uint64_t arg3)
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
    return sub_4035f0(arg1, arg3, -1, &var_48);
}

char* sub_403d30(int32_t arg1, int64_t arg2, int64_t arg3, uint64_t arg4, 
    uint64_t arg5)
{
    int128_t var_48 = data_60c3c0;
    int128_t var_38 = data_60c3d0;
    int128_t var_28 = data_60c3e0;
    int64_t var_18 = data_60c3f0;
    var_48 = 0xa;
    if ((arg2 != 0 && arg3 != 0))
    {
        *var_28[8] = arg2;
        int64_t var_18_1 = arg3;
        return sub_4035f0(arg1, arg4, arg5, &var_48);
    }
    abort();
    /* no return */
}

int64_t sub_403e60(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    __fprintf_chk(arg1, 1, "Copyright %s %d Free Software Fo…", dcgettext(nullptr, &data_409c0b, 5), 0x7e1);
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

int64_t sub_404240(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_403e60(arg1, arg2, arg3, arg4, arg5, r9);
}

int64_t sub_404260(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4, 
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
    return sub_403e60(arg1, arg2, arg3, arg4, &var_58, r9);
}

int64_t sub_4042c0(FILE* arg1, int64_t arg2, int64_t arg3, int64_t arg4)
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
    return sub_403e60(arg1, arg2, arg3, arg4, &var_88, r9_1);
}

int64_t sub_404380()
{
    __printf_chk(1, dcgettext(nullptr, "nReport bugs to: %sn", 5), "bug-coreutils@gnu.org");
    __printf_chk(1, dcgettext(nullptr, "%s home page: <%s>n", 5), "GNU coreutils", "https://www.gnu.org/software/cor…");
    /* tailcall */
    return fputs_unlocked(dcgettext(nullptr, "General help using GNU software:…", 5), stdout);
}

int64_t sub_404400(size_t arg1)
{
    int64_t rax = malloc(arg1);
    if ((rax == 0 && arg1 != 0))
    {
        sub_404650();
        /* no return */
    }
    return rax;
}

int64_t sub_404460(int64_t arg1, size_t arg2)
{
    if ((arg2 == 0 && arg1 != 0))
    {
        free(arg1);
        return 0;
    }
    int64_t rax = realloc(arg1, arg2);
    if ((rax == 0 && arg2 != 0))
    {
        sub_404650();
        /* no return */
    }
    return rax;
}

noreturn int64_t sub_4045aa() 
{
    sub_404650();
    /* no return */
}

int64_t sub_4045b0(size_t arg1)
{
    /* tailcall */
    return memset(sub_404400(arg1), 0, arg1);
}

int64_t sub_4045d0(size_t arg1, size_t arg2)
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
    sub_404650();
    /* no return */
}

int64_t sub_404600(int64_t arg1, size_t arg2)
{
    /* tailcall */
    return memcpy(sub_404400(arg2), arg1, arg2);
}

int64_t sub_404630(char* arg1)
{
    /* tailcall */
    return sub_404600(arg1, (strlen(arg1) + 1));
}

noreturn int64_t sub_404650() 
{
    error(data_60c1f8, 0, "%s", dcgettext(nullptr, "memory exhausted", 5));
    abort();
    /* no return */
}

uint64_t sub_404690(int64_t arg1, int32_t* arg2)
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

uint64_t sub_404770(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
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
            goto label_4049a0;
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
                            goto label_4048c6;
                        }
                    }
                    else
                    {
                        if (var_70_1 != 0)
                        {
                            goto label_4048c6;
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
                        label_4048c6:
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
        label_4049a0:;
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
                    goto label_4049ce;
                }
                *arg5 = r12;
            label_4049ce:;
                int32_t* rdx_4 = rbx[2];
                rax_14 = rbx[3];
                if (rdx_4 != 0)
                {
                    *rdx_4 = rax_14;
                    rax_14 = 0;
                }
            }
            goto label_4049ec;
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
        label_4049ec:
            return rax_14;
        }
    }
    if ((arg6 != 0 && *(arg2[*arg7] + 1) != 0x2d))
    {
        rax_14 = 0xffffffff;
        if (strchr(arg3, rax_1) != 0)
        {
            goto label_4049ec;
        }
    }
    if (arg8 == 0)
    {
        goto label_40495e;
    }
    __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: unrecognized option '%s%s'n", 5), *arg2, arg9, r14, arg4);
label_40495e:
    *(arg7 + 0x20) = 0;
    *arg7 = (*arg7 + 1);
    arg7[2] = 0;
    return 0x3f;
}

uint64_t sub_404d90(int32_t arg1, int64_t* arg2, char* arg3, int64_t* arg4, 
    int32_t* arg5, int32_t arg6, int32_t* arg7, int32_t arg8)
{
    int32_t r13 = arg7[1];
    if (arg1 <= 0)
    {
        goto label_404fcc;
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
            goto label_404e58;
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
        label_404e58:;
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
                    sub_404690(arg2, arg7);
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
                void* const rdi = &data_40a0a9;
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
                        sub_404690(arg2, arg7);
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
                    goto label_404fcc;
                }
                *arg7 = rdx_2;
            label_404fcc:
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
                            goto label_4050d0;
                        }
                        int32_t* var_88_2;
                        int32_t var_80_2;
                        void* const var_78_1;
                        if (rcx_9 == 0x2d)
                        {
                            *(arg7 + 0x20) = &r14_1[2];
                            var_78_1 = &data_40a0a9;
                            var_80_2 = r13;
                            var_88_2 = arg7;
                            goto label_405140;
                        }
                        if (arg6 == 0)
                        {
                            goto label_4050d0;
                        }
                        if (r14_1[2] == 0)
                        {
                            if (strchr(r15_1, rcx_9) != 0)
                            {
                                goto label_4050d0;
                            }
                            goto label_405091;
                        }
                    label_405091:
                        *(arg7 + 0x20) = &r14_1[1];
                        int32_t rax_12 = sub_404770(rbp_1, arg2, r15_1, arg4, arg5, arg6, arg7, r13, &data_40a0aa);
                        r14_2 = rax_12;
                        if (rax_12 == 0xffffffff)
                        {
                            r14_1 = arg2[*arg7];
                        label_4050d0:
                            rdx = &r14_1[1];
                        label_404f11:
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
                                        goto label_40510e;
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
                                    label_40510e:
                                        *(arg7 + 0x20) = r8_1;
                                        arg6 = 0;
                                        *(arg7 + 0x10) = 0;
                                        var_78_1 = &data_40a0c8;
                                        var_80_2 = r13;
                                        var_88_2 = arg7;
                                    label_405140:
                                        r14_2 = sub_404770(rbp_1, arg2, r15_1, arg4, arg5, arg6, var_88_2, var_80_2, var_78_1);
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
                                    goto label_4051fd;
                                }
                                int64_t rbp_2 = *arg2;
                                __fprintf_chk(stderr, 1, dcgettext(nullptr, "%s: invalid option -- '%c'n", 5), rbp_2, r14_2);
                            label_4051fd:
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
                        goto label_404fcc;
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
            goto label_404e58;
        }
        goto label_404f11;
    }
}

uint64_t sub_4053c0(int32_t arg1, int64_t* arg2, char* arg3)
{
    return _getopt_internal(arg1, arg2, arg3, nullptr, nullptr, 0, 1);
}

uint64_t sub_405460(uint32_t* arg1, char* arg2, uint64_t arg3, mbstate_t* arg4)
{
    uint64_t rbx_1;
    char* rbp_1;
    uint32_t* r12_1;
    if (arg2 == 0)
    {
        arg3 = 1;
        rbp_1 = &data_40a0ac[0x1b];
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
                goto label_40548a;
            }
        }
    }
    if ((arg2 == 0 || (arg2 != 0 && arg3 != 0)))
    {
        void var_1c;
        r12_1 = &var_1c;
    label_40548a:;
        uint64_t rax_1 = mbrtowc(r12_1, rbp_1, arg3, arg4);
        rbx_1 = rax_1;
        if ((rax_1 > -3 && sub_405690() == 0))
        {
            rbx_1 = 1;
            *r12_1 = *rbp_1;
        }
    }
    return rbx_1;
}

uint64_t sub_4054e0(FILE* arg1, char* arg2, int64_t arg3)
{
    uint64_t var_800 = 0x7d0;
    void var_7f8;
    int64_t rax;
    uint16_t x87control;
    int80_t st0;
    st0 = sub_405d90(&var_7f8, &var_800, arg2, arg3, x87control);
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
        sub_405d80(arg1);
    }
    return rbx;
}

uint64_t sub_4055a0(FILE* arg1)
{
    int32_t* rbp = arg1;
    uint64_t rax = __fpending(arg1);
    int32_t rbx_1 = (*rbp & 0x20);
    uint64_t rax_1 = sub_405c60(rbp);
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

char* sub_405600(char* arg1)
{
    char rdx = *arg1;
    char* rax = arg1;
    if (rdx == 0x2f)
    {
        do
        {
            rax = &rax[1];
            rdx = *rax;
        } while (rdx == 0x2f);
    }
    if (rdx != 0)
    {
        char* rcx_1 = rax;
        char rsi_1 = 0;
        while (true)
        {
            if (rdx == 0x2f)
            {
                rcx_1 = &rcx_1[1];
                rdx = *rcx_1;
                rsi_1 = 1;
                if (rdx == 0)
                {
                    break;
                }
            }
            else
            {
                if (rsi_1 != 0)
                {
                    rax = rcx_1;
                    rsi_1 = 0;
                }
                rcx_1 = &rcx_1[1];
                rdx = *rcx_1;
                if (rdx == 0)
                {
                    break;
                }
            }
        }
    }
    return rax;
}

uint64_t sub_405660(char* arg1)
{
    uint64_t rax = strlen(arg1);
    if (rax > 1)
    {
        while (true)
        {
            uint64_t rdx_1 = (rax - 1);
            if (arg1[(rax - 1)] != 0x2f)
            {
                break;
            }
            rax = rdx_1;
            if (rdx_1 == 1)
            {
                return rax;
            }
        }
    }
    return rax;
}

int64_t sub_405690()
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
        void* const rdi_1 = &data_40a0cc;
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

char* sub_4056f0()
{
    char* rax = nl_langinfo(0xe);
    char* r15 = data_60c438;
    char* rbx = rax;
    if (rax == 0)
    {
        rbx = &data_40a0ac[0x1b];
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
                    goto label_4057ec;
                }
                memcpy(rbp_3, r13_1, r14_1);
                goto label_405836;
            }
        }
        char* rax_9 = malloc(rdi_7);
        rbp_3 = rax_9;
        if (rax_9 == 0)
        {
        label_4057ec:
            r15 = &data_40a0ac[0x1b];
        }
        else
        {
            memcpy(rbp_3, r13_1, r14_1);
            rbp_3[r14_1] = 0x2f;
        label_405836:;
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
                            label_4058ec:
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
                                    goto label_405a7b;
                                }
                                int64_t* rcx_2 = &var_b8;
                            label_405928:;
                                int32_t rdx_5 = *rcx_2;
                                rcx_2 = (rcx_2 + 4);
                                uint32_t rax_20 = (((rdx_5 - 0x1010101) & (!rdx_5)) & 0x80808080);
                                if (rax_20 == 0)
                                {
                                    goto label_405928;
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
                            label_405962:;
                                int32_t rsi_5 = *rdx_11;
                                rdx_11 = (rdx_11 + 4);
                                uint32_t rax_23 = (((rsi_5 - 0x1010101) & (!rsi_5)) & 0x80808080);
                                if (rax_23 == 0)
                                {
                                    goto label_405962;
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
                                    r15 = &data_40a0ac[0x1b];
                                    free(rdi_26);
                                    sub_405c60(rax_12);
                                    goto label_405877;
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
                                    label_405b3b:;
                                        uint64_t r8_1 = rsi_17;
                                        rsi_17 = (rsi_17 + 8);
                                        *(r9_5 + r8_1) = *(r10_2 + r8_1);
                                        if (rsi_17 < rcx_12)
                                        {
                                            goto label_405b3b;
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
                                    label_405b89:;
                                        uint64_t rsi_20 = rcx_14;
                                        rcx_14 = (rcx_14 + 8);
                                        *(rdi_24 + rsi_20) = *(r9_6 + rsi_20);
                                        if (rcx_14 < rdx_20)
                                        {
                                            goto label_405b89;
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
                            goto label_4058ec;
                        }
                        break;
                    }
                label_405a7b:
                    sub_405c60(rax_12);
                    if (var_d0_1 != 0)
                    {
                        *(r15 + var_d0_1) = 0;
                    }
                }
            }
            if ((((rax_11 >= 0 && rax_12 == 0) || rax_11 < 0) || ((rax_11 >= 0 && rax_12 != 0) && var_d0_1 == 0)))
            {
                r15 = &data_40a0ac[0x1b];
            }
        label_405877:
            free(rbp_3);
        }
        data_60c438 = r15;
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

int64_t sub_405c60(FILE* arg1)
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
        if (((rax_1 == 0 || (rax_1 != 0 && rax_6 != -1)) && sub_405ce0(arg1) != 0))
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

int64_t sub_405ce0(FILE* arg1)
{
    int32_t* rbx = arg1;
    if ((arg1 != 0 && (__freading(arg1) != 0 && (*rbx & 0x100) != 0)))
    {
        sub_405d20(rbx, 0, 1);
        /* tailcall */
        return fflush(rbx);
    }
    /* tailcall */
    return fflush(rbx);
}

off64_t sub_405d20(FILE* arg1, off_t arg2, int32_t arg3)
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

int64_t sub_405d80(int32_t* arg1)
{
    *arg1 = (*arg1 | 0x20);
}

void sub_405d90(char* arg1, uint64_t* arg2, char* arg3, int64_t arg4, 
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
    if (sub_407ad0(arg3, &var_588, &var_678) >= 0)
    {
        char* var_670;
        void var_668;
        int64_t* var_580;
        void var_568;
        if (sub_4078b0(arg4, &var_678) >= 0)
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
                    goto label_4064b5;
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
                        goto label_4064b5;
                    }
                    char* rax_5;
                    rax_5 = malloc(rdi_3);
                    var_6b0_1 = rax_5;
                    if (rax_5 == 0)
                    {
                        goto label_4064b5;
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
                char* rbx_2 = arg1;
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
                            label_406385:
                                r15_7 = rbx_2;
                                var_6a8 = __errno_location();
                            }
                            else
                            {
                                r13_1 = ffffffffffffffff;
                            label_406003:
                                memcpy(&rbx_2[r15_2], r8_1, rcx_1);
                            label_40600f:
                                if (var_588 == var_6c0_1)
                                {
                                    uint64_t r15_11 = r13_1;
                                    size_t r14_3 = (r13_1 + 1);
                                    if (r13_1 >= -1)
                                    {
                                        if (r12_1 != -1)
                                        {
                                            goto label_406385;
                                        }
                                    }
                                    else if (r12_1 < r14_3)
                                    {
                                        bool cond2_1 = r12_1 < 0;
                                        if ((r12_1 == 0 && r14_3 <= 0xc))
                                        {
                                            r12_1 = 0xc;
                                        label_407165:
                                            r13_1 = rbx_2 == arg1;
                                            if ((rbx_2 == 0 || (rbx_2 != 0 && r13_1 != 0)))
                                            {
                                                char* rax_150 = malloc(r12_1);
                                                if (rax_150 == 0)
                                                {
                                                    goto label_406385;
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
                                                    goto label_40659a;
                                                }
                                                rbx_2 = rax_126;
                                            }
                                        }
                                        if (r12_1 != 0)
                                        {
                                            if (cond2_1)
                                            {
                                                goto label_406385;
                                            }
                                            r12_1 = (r12_1 + r12_1);
                                            if (r12_1 >= r14_3)
                                            {
                                                goto label_407165;
                                            }
                                        }
                                        if (((r12_1 == 0 && r14_3 > 0xc) || r12_1 != 0))
                                        {
                                            if (r14_3 == -1)
                                            {
                                                goto label_406385;
                                            }
                                            r12_1 = r14_3;
                                            goto label_407165;
                                        }
                                    }
                                    rbx_2[r15_11] = 0;
                                    if ((r12_1 > r14_3 && rbx_2 != arg1))
                                    {
                                        realloc(rbx_2, r14_3);
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
                                    goto label_406411;
                                }
                                char r15_3 = r14_1[9];
                                int64_t rax_17 = r14_1[0xa];
                                if (r15_3 == 0x25)
                                {
                                    if (rax_17 != -1)
                                    {
                                    label_406abc:
                                        abort();
                                        /* no return */
                                    }
                                    uint64_t rax_47 = (r13_1 + 1);
                                    r15_2 = rax_47;
                                    if (r13_1 < -1)
                                    {
                                        if (r12_1 >= rax_47)
                                        {
                                            goto label_406482;
                                        }
                                        bool cond4_1 = r12_1 < 0;
                                        if (r12_1 != 0)
                                        {
                                            if (cond4_1)
                                            {
                                                goto label_406385;
                                            }
                                            r12_1 = (r12_1 + r12_1);
                                            if (r12_1 >= rax_47)
                                            {
                                                goto label_406457;
                                            }
                                        }
                                        else if (rax_47 <= 0xc)
                                        {
                                            r12_1 = 0xc;
                                        label_406457:
                                            rdx_1 = rbx_2 == arg1;
                                            if (rbx_2 == 0)
                                            {
                                            label_406c73:
                                                var_698 = rdx_1;
                                                char* rax_107 = malloc(r12_1);
                                                rdx_1 = var_698;
                                                if (rax_107 == 0)
                                                {
                                                    goto label_406385;
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
                                                goto label_406482;
                                            }
                                            if (rdx_1 != 0)
                                            {
                                                goto label_406c73;
                                            }
                                            char* rax_48;
                                            rax_48 = realloc(rbx_2, r12_1);
                                            if (rax_48 == 0)
                                            {
                                                goto label_40659a;
                                            }
                                            rbx_2 = rax_48;
                                            goto label_406482;
                                        }
                                        if (rax_47 == -1)
                                        {
                                            goto label_406385;
                                        }
                                        r12_1 = rax_47;
                                        goto label_406457;
                                    }
                                    if (r12_1 != -1)
                                    {
                                        goto label_406385;
                                    }
                                    r15_2 = -1;
                                label_406482:
                                    *(rbx_2 + r13_1) = 0x25;
                                label_406487:
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
                                        goto label_406abc;
                                    }
                                    rdx_1 = &var_670[(rax_17 << 5)];
                                    int32_t rax_19 = *rdx_1;
                                    if (r15_3 == 0x6e)
                                    {
                                        uint64_t rax_50 = (rax_19 - 0x12);
                                        if (rax_50 > 4)
                                        {
                                        label_4017fe:
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
                                        goto label_406487;
                                    }
                                    char rax_21 = (r15_3 & 0xdf);
                                    int64_t var_6c8;
                                    char* var_6b8;
                                    int16_t var_680;
                                    if (((rax_21 - 0x45) > 2 && rax_21 != 0x41))
                                    {
                                    label_406097:;
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
                                                goto label_406abc;
                                            }
                                            var_6b8 = 1;
                                            var_680 = *(rax_27 + 0x10);
                                            goto label_4061ee;
                                        }
                                        var_6b8 = 0;
                                    label_4061ee:;
                                        int64_t rax_29 = r14_1[8];
                                        if (rax_29 == -1)
                                        {
                                            goto label_406226;
                                        }
                                        void* r8_3 = &var_670[(rax_29 << 5)];
                                        if (*r8_3 != 5)
                                        {
                                            goto label_406abc;
                                        }
                                        uint64_t rax_31 = var_6b8;
                                        *(&var_680 + (rax_31 << 2)) = *(r8_3 + 0x10);
                                        var_6b8 = (rax_31 + 1);
                                    label_406226:;
                                        void* rax_34 = (r13_1 + 2);
                                        char* r11_1;
                                        if (r13_1 < -2)
                                        {
                                            if (r12_1 >= rax_34)
                                            {
                                                goto label_406c68;
                                            }
                                            bool cond22_1 = r12_1 < 0;
                                            if (r12_1 != 0)
                                            {
                                                if (cond22_1)
                                                {
                                                    goto label_406385;
                                                }
                                                r12_1 = (r12_1 + r12_1);
                                                if (r12_1 >= rax_34)
                                                {
                                                    goto label_406259;
                                                }
                                            }
                                            else if (rax_34 <= 0xc)
                                            {
                                                r12_1 = 0xc;
                                            label_406259:
                                                rdx_7 = rbx_2 == arg1;
                                                if (rbx_2 == 0)
                                                {
                                                label_406c13:
                                                    var_6a8 = rdx_7;
                                                    char* rax_105 = malloc(r12_1);
                                                    char rdx_17 = var_6a8;
                                                    r11_1 = rax_105;
                                                    if (rax_105 == 0)
                                                    {
                                                        goto label_406385;
                                                    }
                                                    if ((r13_1 != 0 && rdx_17 != 0))
                                                    {
                                                        r11_1 = memcpy(rax_105, rbx_2, r13_1);
                                                    }
                                                    goto label_406284;
                                                }
                                                if (rdx_7 != 0)
                                                {
                                                    goto label_406c13;
                                                }
                                                char* rax_35 = realloc(rbx_2, r12_1);
                                                r11_1 = rax_35;
                                                if (rax_35 == 0)
                                                {
                                                    goto label_406385;
                                                }
                                                goto label_406284;
                                            }
                                            if (rax_34 == -1)
                                            {
                                                goto label_406385;
                                            }
                                            r12_1 = rax_34;
                                            goto label_406259;
                                        }
                                        if (r12_1 != -1)
                                        {
                                            goto label_406385;
                                        }
                                    label_406c68:
                                        r11_1 = rbx_2;
                                    label_406284:
                                        *(r11_1 + r13_1) = 0;
                                        int32_t* rax_36 = __errno_location();
                                        char* r11_2 = r11_1;
                                        var_6c8 = r15_4;
                                        var_6a8 = rax_36;
                                        int32_t rax_37 = *rax_36;
                                    label_4062c2:;
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
                                            goto label_4017fe;
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
                                                goto label_4017fe;
                                            }
                                            case 1:
                                            {
                                                r9_3 = var_670[((r14_1[0xa] << 5) + 0x10)];
                                                goto label_40670b;
                                            }
                                            case 2:
                                            {
                                                r9_3 = var_670[((r14_1[0xa] << 5) + 0x10)];
                                                goto label_40670b;
                                            }
                                            case 3:
                                            {
                                                r9_3 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                                goto label_40670b;
                                            }
                                            case 4:
                                            {
                                                r9_3 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                                goto label_40670b;
                                            }
                                            case 5:
                                            case 6:
                                            case 0xd:
                                            case 0xe:
                                            {
                                                r9_3 = *(((r14_1[0xa] << 5) + var_670) + 0x10);
                                            label_40670b:;
                                                int32_t rax_66 = var_6b8;
                                                rdi_18 = (r11_2 + r13_1);
                                                var_6d0_1 = r11_2;
                                                if (rax_66 == 1)
                                                {
                                                    *(rsp_1 - 8) = &var_684;
                                                    *(rsp_1 - 0x10) = r9_3;
                                                    rsp_6 = (rsp_1 - 0x10);
                                                    goto label_406b92;
                                                }
                                                if (rax_66 == 2)
                                                {
                                                    *(rsp_1 - 0x10) = &var_684;
                                                    *(rsp_1 - 0x18) = r9_3;
                                                    rsp_10 = (rsp_1 - 0x18);
                                                    goto label_406b4c;
                                                }
                                                *(rsp_1 - 0x10) = &var_684;
                                                rsp_6 = (rsp_1 - 0x10);
                                                goto label_406752;
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
                                                goto label_406620;
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
                                                        goto label_406620;
                                                    }
                                                    rsp_3 = (rsp_1 - 0x10);
                                                    r9_2 = &var_684;
                                                    *rsp_3 = x87_r7_2;
                                                    goto label_406612;
                                                }
                                                *(rsp_1 - 0x10) = &var_684;
                                                rsp_11 = (rsp_1 - 0x20);
                                                *rsp_11 = x87_r7_2;
                                            label_406b6c:;
                                                rax_58 = __snprintf_chk(rdi_18, rbx_3, 1, -1, var_6b0_1, var_680);
                                                rsp_1 = (rsp_11 + 0x20);
                                                r11_2 = var_6d0_1;
                                            label_406620:
                                                rdx_1 = var_684;
                                                if (rdx_1 >= 0)
                                                {
                                                    goto label_40662e;
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
                                                label_406b4c:
                                                    *(rsp_10 - 8) = var_67c;
                                                    rsp_11 = (rsp_10 - 8);
                                                    goto label_406b6c;
                                                }
                                                *(rsp_1 - 0x10) = &var_684;
                                                rsp_3 = (rsp_1 - 0x10);
                                            label_406612:;
                                                rax_58 = __snprintf_chk(rdi_18, rbx_3, 1, -1, var_6b0_1, r9_2);
                                                r11_2 = var_6d0_1;
                                                *rsp_3;
                                                *(rsp_3 + 8);
                                                rsp_1 = (rsp_3 + 0x10);
                                                goto label_406620;
                                            }
                                            *(rsp_1 - 8) = &var_684;
                                            *(rsp_1 - 0x10) = r9_2;
                                            rsp_6 = (rsp_1 - 0x10);
                                        label_406b92:
                                            r9_3 = var_680;
                                        label_406752:;
                                            rax_58 = __snprintf_chk(rdi_18, rbx_3, 1, -1, var_6b0_1, r9_3);
                                            rdx_1 = var_684;
                                            *(rsp_6 + 8);
                                            rsp_1 = (rsp_6 + 0x10);
                                            r11_2 = var_6d0_1;
                                            if (rdx_1 >= 0)
                                            {
                                            label_40662e:;
                                                int64_t rcx_16 = rdx_1;
                                                if ((rcx_16 < rbx_3 && *(&r11_2[rcx_16] + r13_1) != 0))
                                                {
                                                    goto label_406abc;
                                                }
                                                if (rdx_1 < rax_58)
                                                {
                                                label_406648:
                                                    var_684 = rax_58;
                                                    rdx_1 = rax_58;
                                                }
                                                if ((rdx_1 + 1) < rbx_3)
                                                {
                                                    rbx_2 = r11_2;
                                                    r15_2 = (rdx_1 + r13_1);
                                                    *var_6a8 = rax_37;
                                                    goto label_406487;
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
                                                            goto label_4062c2;
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
                                                                        goto label_4062c2;
                                                                    }
                                                                    r11_2 = rax_101;
                                                                    goto label_4062c2;
                                                                }
                                                            }
                                                            if ((r11_2 != 0 && rbx_3 == 0))
                                                            {
                                                                char* rax_62 = realloc(r11_2, r12_1);
                                                                if (rax_62 != 0)
                                                                {
                                                                    r11_2 = rax_62;
                                                                    goto label_4062c2;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                                else if (r12_1 == -1)
                                                {
                                                    goto label_4062c2;
                                                }
                                                r15_7 = r11_2;
                                            }
                                        }
                                        if ((((((((((rax_39 == 7 || rax_39 == 8) || rax_39 == 9) || rax_39 == 0xa) || rax_39 == 0xf) || rax_39 == 0x10) || rax_39 == 0x11) && rax_56 == 1) && rdx_1 < 0) || rax_39 == 0xc))
                                        {
                                            if (*(var_6c8 + 1) != 0)
                                            {
                                                *(var_6c8 + 1) = 0;
                                                goto label_4062c2;
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
                                                break;
                                            }
                                            goto label_406648;
                                        }
                                    }
                                    if (((rax_21 - 0x45) <= 2 || ((rax_21 - 0x45) > 2 && rax_21 == 0x41)))
                                    {
                                        if (rax_19 != 0xc)
                                        {
                                            goto label_406097;
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
                                                goto label_406097;
                                            }
                                            if (cond7_1)
                                            {
                                                goto label_406097;
                                            }
                                            goto label_40651d;
                                        }
                                    label_40651d:;
                                        char* rdx_11 = r14_1[3];
                                        int64_t rdi_16 = r14_1[4];
                                        int32_t r11_3 = r14_1[2];
                                        int64_t r10_1;
                                        if (rdx_11 == rdi_16)
                                        {
                                            r10_1 = 0;
                                        label_406310:;
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
                                                    label_4075f4:
                                                        rcx_11 = 0xc;
                                                    label_4069e1:;
                                                        int64_t rax_97 = rcx_11;
                                                        if (r10_1 >= rcx_11)
                                                        {
                                                            rax_97 = r10_1;
                                                        }
                                                        size_t rax_98 = (rax_97 + 1);
                                                        var_698 = rax_98;
                                                        if (rax_97 >= -1)
                                                        {
                                                            goto label_406385;
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
                                                                goto label_406385;
                                                            }
                                                            int64_t rax_99 = malloc(rax_98);
                                                            r11_3 = var_6b8;
                                                            x87_r7_1 = var_6a8;
                                                            rcx_21 = rax_99;
                                                            if (rax_99 == 0)
                                                            {
                                                                goto label_406385;
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
                                                                    goto label_406abc;
                                                                }
                                                                if (cond14_1)
                                                                {
                                                                    goto label_406abc;
                                                                }
                                                                bool rax_118 = (r14_1[9] & 0xdf);
                                                                int32_t var_6e8;
                                                                if (rax_118 == 0x46)
                                                                {
                                                                    *r15_9 = 0x30;
                                                                    if ((r11_3 & 0x10) != 0)
                                                                    {
                                                                    label_407419:
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
                                                                        label_407490:
                                                                            rax_138 = (rax_138 + 1);
                                                                            *(rax_138 - 1) = 0x30;
                                                                            if (rax_138 != rsi_34)
                                                                            {
                                                                                goto label_407490;
                                                                            }
                                                                            r9_6 = (r9_6 + rdx_10);
                                                                        }
                                                                        goto label_406f0b;
                                                                    }
                                                                    if (rdx_10 != 0)
                                                                    {
                                                                        goto label_407419;
                                                                    }
                                                                label_406f07:
                                                                    r9_6 = (r15_9 + 1);
                                                                label_406f0b:
                                                                    var_680 = r8_7;
                                                                    uint16_t x87status_3;
                                                                    arg5 = __fldcw_memmem16(var_680);
                                                                label_406f1c:;
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
                                                                                label_407255:
                                                                                    *(rdi_38 + rax_130) = *(r9_6 + rax_130);
                                                                                    rax_130 = (rax_130 - 1);
                                                                                    if (rdx_26 != rax_130)
                                                                                    {
                                                                                        goto label_407255;
                                                                                    }
                                                                                    r9_6 = rcx_21;
                                                                                }
                                                                                if (r10_2 != 0)
                                                                                {
                                                                                    int64_t r10_4 = (r10_2 + r9_6);
                                                                                label_407278:
                                                                                    r9_6 = (r9_6 + 1);
                                                                                    *(r9_6 - 1) = 0x20;
                                                                                    if (r9_6 != r10_4)
                                                                                    {
                                                                                        goto label_407278;
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
                                                                                label_406f6d:
                                                                                    *(rdi_38 + rax_119) = *(r9_6 + rax_119);
                                                                                    rax_119 = (rax_119 - 1);
                                                                                    if (rax_119 != rdx_21)
                                                                                    {
                                                                                        goto label_406f6d;
                                                                                    }
                                                                                }
                                                                                if (r10_2 != 0)
                                                                                {
                                                                                    int64_t r10_3 = (r10_2 + r15_9);
                                                                                label_406f88:
                                                                                    r15_9 = (r15_9 + 1);
                                                                                    *(r15_9 - 1) = 0x30;
                                                                                    if (r15_9 != r10_3)
                                                                                    {
                                                                                        goto label_406f88;
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                        else if (r10_2 != 0)
                                                                        {
                                                                        label_4073e0:
                                                                            r9_6 = (r9_6 + 1);
                                                                            *(r9_6 - 1) = 0x20;
                                                                            if (rdi_38 != r9_6)
                                                                            {
                                                                                goto label_4073e0;
                                                                            }
                                                                        }
                                                                    }
                                                                    if (var_698 <= r8_11)
                                                                    {
                                                                        goto label_406abc;
                                                                    }
                                                                    uint64_t rax_121 = (r13_1 + r8_11);
                                                                    int64_t rsi_24;
                                                                    rsi_24 = (r13_1 + r8_11) < r13_1;
                                                                    r15_2 = rax_121;
                                                                    if ((r12_1 - r13_1) > r8_11)
                                                                    {
                                                                        goto label_40704a;
                                                                    }
                                                                    if (rsi_24 != 0)
                                                                    {
                                                                        if (r12_1 != -1)
                                                                        {
                                                                            goto label_406385;
                                                                        }
                                                                        goto label_40704a;
                                                                    }
                                                                    if (r12_1 >= rax_121)
                                                                    {
                                                                        goto label_40704a;
                                                                    }
                                                                    bool cond21_1 = r12_1 < 0;
                                                                    if (r12_1 != 0)
                                                                    {
                                                                        if (cond21_1)
                                                                        {
                                                                            goto label_406385;
                                                                        }
                                                                        r12_1 = (r12_1 + r12_1);
                                                                        if (r12_1 >= rax_121)
                                                                        {
                                                                            goto label_406ff5;
                                                                        }
                                                                    }
                                                                    else if (rax_121 <= 0xc)
                                                                    {
                                                                        r12_1 = 0xc;
                                                                    label_406ff5:;
                                                                        void* rdx_23;
                                                                        rdx_23 = rbx_2 == arg1;
                                                                        if (rbx_2 == 0)
                                                                        {
                                                                        label_40728e:
                                                                            var_6b8 = rdx_23;
                                                                            var_698 = rcx_21;
                                                                            char* rax_131 = malloc(r12_1);
                                                                            rcx_21 = var_698;
                                                                            char rdx_27 = var_6b8;
                                                                            if (rax_131 == 0)
                                                                            {
                                                                                goto label_406385;
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
                                                                            goto label_40704a;
                                                                        }
                                                                        if (rdx_23 != 0)
                                                                        {
                                                                            goto label_40728e;
                                                                        }
                                                                        var_6a8 = r8_11;
                                                                        var_698 = rcx_21;
                                                                        char* rax_122 = realloc(rbx_2, r12_1);
                                                                        if (rax_122 == 0)
                                                                        {
                                                                            goto label_406385;
                                                                        }
                                                                        rcx_21 = var_698;
                                                                        r8_11 = var_6a8;
                                                                        rbx_2 = rax_122;
                                                                    label_40704a:
                                                                        var_698 = rcx_21;
                                                                        memcpy((rbx_2 + r13_1), rcx_21, r8_11);
                                                                        int64_t rcx_25 = var_698;
                                                                        if (rcx_25 != &var_2f8)
                                                                        {
                                                                            free(rcx_25);
                                                                        }
                                                                        goto label_406487;
                                                                    }
                                                                    if (rax_121 == -1)
                                                                    {
                                                                        goto label_406385;
                                                                    }
                                                                    r12_1 = rax_121;
                                                                    goto label_406ff5;
                                                                }
                                                                if (rax_118 != 0x45)
                                                                {
                                                                    int32_t var_6f0;
                                                                    if (rax_118 == 0x47)
                                                                    {
                                                                        *r15_9 = 0x30;
                                                                        if ((r11_3 & 0x10) == 0)
                                                                        {
                                                                            goto label_406f07;
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
                                                                            label_4073be:
                                                                                rax_135 = (rax_135 + 1);
                                                                                *(rax_135 - 1) = 0x30;
                                                                                if (rax_135 != rdx_30)
                                                                                {
                                                                                    goto label_4073be;
                                                                                }
                                                                                r9_6 = &rsi_32[r9_6];
                                                                            }
                                                                        }
                                                                        goto label_406f0b;
                                                                    }
                                                                    if (rax_118 != 0x41)
                                                                    {
                                                                        goto label_406abc;
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
                                                                        label_407805:
                                                                            rax_154 = &rax_154[1];
                                                                            rax_154[-1] = 0x30;
                                                                            if (rax_154 != rdi_53)
                                                                            {
                                                                                goto label_407805;
                                                                            }
                                                                            rsi_41 = &rsi_41[rdx_10];
                                                                        }
                                                                    }
                                                                    char rax_145 = r14_1[9];
                                                                    r9_6 = &rsi_41[3];
                                                                    *(rsi_41 + 1) = 0x302b;
                                                                    r15_9 = rax_142;
                                                                    *rsi_41 = (rax_145 + 0xf);
                                                                    goto label_406f0b;
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
                                                                    label_4076f0:
                                                                        rax_149 = &rax_149[1];
                                                                        rax_149[-1] = 0x30;
                                                                        if (rax_149 != rdi_50)
                                                                        {
                                                                            goto label_4076f0;
                                                                        }
                                                                        rsi_27 = &rsi_27[rdx_10];
                                                                    }
                                                                }
                                                                char rax_123 = r14_1[9];
                                                                r9_6 = &rsi_27[4];
                                                                rsi_27[3] = 0x30;
                                                                *rsi_27 = rax_123;
                                                                *(rsi_27 + 1) = 0x302b;
                                                                goto label_406f0b;
                                                            }
                                                            long double x87_r6_7 = (x87_r6_4 + x87_r6_4);
                                                            (x87_r6_7 - x87_r6_4);
                                                            bool cond15_1 = x87_r6_7 != x87_r6_4;
                                                            if ((!(FCMP_O(x87_r6_7, x87_r6_4))))
                                                            {
                                                                goto label_406abc;
                                                            }
                                                            if (cond15_1)
                                                            {
                                                                goto label_406abc;
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
                                                            goto label_406f0b;
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
                                                        goto label_406f1c;
                                                    }
                                                    char* rsi_36 = rax_139;
                                                label_407553:;
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
                                                            goto label_406385;
                                                        }
                                                    label_407587:
                                                        rsi_36 = &rdi_49[1];
                                                        if (rsi_36[-1] != 0x30)
                                                        {
                                                            if (rcx_10 != rsi_36)
                                                            {
                                                                rdi_49 = rsi_36;
                                                                goto label_407587;
                                                            }
                                                            goto label_406385;
                                                        }
                                                        rdx_10 = -1;
                                                    }
                                                    if (rcx_10 != rsi_36)
                                                    {
                                                        goto label_407553;
                                                    }
                                                }
                                                else
                                                {
                                                    void* r8_4 = &var_670[(rsi_10 << 5)];
                                                    if (*r8_4 != 5)
                                                    {
                                                        goto label_406abc;
                                                    }
                                                    rdx_10 = *(r8_4 + 0x10);
                                                    if (rdx_10 < 0)
                                                    {
                                                        goto label_4069c0;
                                                    }
                                                }
                                                if (rdx_10 == 0)
                                                {
                                                    goto label_4075f4;
                                                }
                                                rcx_11 = (rdx_10 + 0xc);
                                                if (rdx_10 >= -0xc)
                                                {
                                                    goto label_406385;
                                                }
                                                goto label_4069e1;
                                            }
                                        label_4069c0:;
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
                                            goto label_4069e1;
                                        }
                                        int64_t rcx_12 = r14_1[5];
                                        if (rcx_12 != -1)
                                        {
                                            void* rcx_14 = &var_670[(rcx_12 << 5)];
                                            if (*rcx_14 != 5)
                                            {
                                                goto label_406abc;
                                            }
                                            r10_1 = *(rcx_14 + 0x10);
                                            if (r10_1 < 0)
                                            {
                                                r11_3 = (r11_3 | 2);
                                                r10_1 = (-r10_1);
                                            }
                                            goto label_406310;
                                        }
                                        r10_1 = 0;
                                        var_698 = rcx_12;
                                    label_4074c1:;
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
                                            label_407506:
                                                rdx_11 = &rdx_11[1];
                                                if (rdx_11[-1] == 0x30)
                                                {
                                                    var_698 = rcx_26;
                                                    r10_1 = -1;
                                                }
                                                else if (rdi_16 != rdx_11)
                                                {
                                                    goto label_407506;
                                                }
                                            }
                                            if ((rdi_16 == rsi_35 || (rdi_16 != rsi_35 && rdx_11[-1] != 0x30)))
                                            {
                                                r10_1 = rcx_26;
                                            }
                                        }
                                        if ((((((rdx_34 + r9_10) < rdx_34 && rdi_16 != rsi_35) && rdx_11[-1] == 0x30) || (rdx_34 + r9_10) >= rdx_34) && rdi_16 != rdx_11))
                                        {
                                            goto label_4074c1;
                                        }
                                        goto label_406310;
                                    }
                                }
                            }
                            if ((r15_7 != arg1 && r15_7 != 0))
                            {
                                goto label_4065ab;
                            }
                        }
                        else
                        {
                            if (r12_1 >= rax_8)
                            {
                                goto label_406003;
                            }
                            bool cond0_1 = r12_1 < 0;
                            if ((r12_1 == 0 && rax_8 <= 0xc))
                            {
                                r12_1 = 0xc;
                                rdx_1 = rbx_2 == arg1;
                                if (rbx_2 == 0)
                                {
                                label_405eea:
                                    var_6a8 = rdx_1;
                                    var_698 = rcx_1;
                                    char* rax_9 = malloc(r12_1);
                                    rcx_1 = var_698;
                                    char rdx_2 = var_6a8;
                                    if (rax_9 == 0)
                                    {
                                        goto label_406385;
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
                                    goto label_406003;
                                }
                            }
                            if (r12_1 != 0)
                            {
                                if (cond0_1)
                                {
                                    goto label_406385;
                                }
                                r12_1 = (r12_1 + r12_1);
                                if (r12_1 >= rax_8)
                                {
                                    goto label_405fb2;
                                }
                            }
                            if (((r12_1 == 0 && rax_8 > 0xc) || r12_1 != 0))
                            {
                                if (rax_8 == -1)
                                {
                                    goto label_406385;
                                }
                                r12_1 = rax_8;
                            label_405fb2:
                                rdx_1 = rbx_2 == arg1;
                                if (rbx_2 == 0)
                                {
                                    goto label_405eea;
                                }
                            }
                            if (((((r12_1 == 0 && rax_8 > 0xc) || r12_1 != 0) && rax_8 != -1) || (r12_1 == 0 && rax_8 <= 0xc)))
                            {
                                if (rdx_1 != 0)
                                {
                                    goto label_405eea;
                                }
                                var_698 = rcx_1;
                                char* rax_15 = realloc(rbx_2, r12_1);
                                if (rax_15 != 0)
                                {
                                    rcx_1 = var_698;
                                    rbx_2 = rax_15;
                                    goto label_406003;
                                }
                            label_40659a:
                                r15_7 = rbx_2;
                                var_6a8 = __errno_location();
                            label_4065ab:
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
                    goto label_40600f;
                }
                if ((((rcx != r8_1 && (!UNIMPLEMENTED_COND)) && UNIMPLEMENTED_COND) && var_6e0_1 == 0))
                {
                    goto label_4064b5;
                }
            }
            else
            {
            label_4064b5:
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
                    goto label_4063fa;
                }
                free(var_670);
            label_4063fa:
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
            *__errno_location() = 0x16;
        }
    }
INVALID_JUMP;
}

int64_t sub_4078b0(int64_t, void* arg2)
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
    /* jump -> *((*rax << 3) + &data_40a220) */
}

int64_t sub_407ad0(char* arg1, int64_t* arg2, int64_t* arg3)
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
                goto label_407b48;
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
                goto label_407c16;
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
                    goto label_408298;
                }
                r14_1 = (rdx_28 - 1);
                if (r14_1 <= -3)
                {
                    rbp_1 = (rcx_16 + 2);
                    rbx_1 = *(rcx_16 + 2);
                    goto label_407c16;
                }
            label_408298:
                r13_1 = arg3[1];
            }
            else
            {
                r14_1 = ffffffffffffffff;
            label_407c16:;
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
                    goto label_407c88;
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
                            goto label_408298;
                        }
                        rbx_2 = (rdx_20 - 1);
                        if (rbx_2 > -3)
                        {
                            goto label_408298;
                        }
                        r12_1[5] = rbx_2;
                        rcx_1 = (rdi_5 + 2);
                        goto label_407d2c;
                    }
                }
                rbx_2 = r12_1[5];
                if (rbx_2 != -1)
                {
                    goto label_407d2c;
                }
                void* rax_41 = (var_68 + 1);
                r12_1[5] = var_68;
                if (var_68 == -1)
                {
                    goto label_408298;
                }
                rbx_2 = var_68;
                var_68 = rax_41;
            label_407d2c:
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
                                goto label_408489;
                            }
                            rdx_4 = *arg3;
                            rsi_7 = rax;
                            r13_1 = rax_63;
                        label_4085a4:
                            memcpy(r13_1, rsi_7, (rdx_4 << 5));
                            rdx_4 = *arg3;
                        label_40805d:
                            arg3[1] = r13_1;
                            goto label_407d3c;
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
                                goto label_4085a4;
                            }
                            goto label_40805d;
                        }
                        goto label_408470;
                    }
                label_40846d:
                    rsi_7 = r13_1;
                label_408470:
                    if (rax == rsi_7)
                    {
                        goto label_408489;
                    }
                label_40847f:
                    free(rsi_7);
                label_408489:;
                    int64_t rdi_12 = r8[1];
                    if (var_60 != rdi_12)
                    {
                        free(rdi_12);
                    }
                    break;
                }
                rdx_4 = *arg3;
            label_407d3c:
                if (rdx_4 <= rbx_2)
                {
                    do
                    {
                        rdx_4 = (rdx_4 + 1);
                        *((r13_1 + (rdx_4 << 5)) - 0x20) = 0;
                    } while (rdx_4 <= rbx_2);
                    *arg3 = rdx_4;
                    goto label_407d68;
                }
            label_407d68:;
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
                        goto label_407d90;
                    }
                    goto label_407c91;
                }
                if (rdx_5 == 5)
                {
                    rbx_1 = *rcx_1;
                    rbp_1 = rcx_1;
                    rcx_1 = (rcx_1 + 1);
                label_407c88:
                    if (rbx_1 != 0x2e)
                    {
                        goto label_407c91;
                    }
                label_407d90:;
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
                        goto label_407c91;
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
                            goto label_407dcf;
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
                            goto label_408298;
                        }
                        rbx_4 = (rdx_34 - 1);
                        if (rbx_4 > -3)
                        {
                            goto label_408298;
                        }
                        r12_1[8] = rbx_4;
                        rcx_4 = &rdi_18[2];
                        goto label_407dde;
                    }
                label_407dcf:
                    rbx_4 = r12_1[8];
                    if (rbx_4 != -1)
                    {
                        goto label_407dde;
                    }
                    void* rax_65 = (var_68 + 1);
                    r12_1[8] = var_68;
                    if (var_68 == -1)
                    {
                        goto label_408298;
                    }
                    rbx_4 = var_68;
                    var_68 = rax_65;
                label_407dde:
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
                            goto label_40846d;
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
                                goto label_408489;
                            }
                            rdx_7 = *arg3;
                            rsi_7 = rax;
                            r13_1 = rax_69;
                        label_408756:
                            memcpy(r13_1, rsi_7, (rdx_7 << 5));
                            rdx_7 = *arg3;
                        label_40853c:
                            arg3[1] = r13_1;
                            goto label_407dee;
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
                                goto label_408756;
                            }
                            goto label_40853c;
                        }
                        goto label_408470;
                    }
                    rdx_7 = *arg3;
                label_407dee:
                    if (rdx_7 <= rbx_4)
                    {
                        do
                        {
                            rdx_7 = (rdx_7 + 1);
                            *((r13_1 + (rdx_7 << 5)) - 0x20) = 0;
                        } while (rdx_7 <= rbx_4);
                        *arg3 = rdx_7;
                        goto label_407e1b;
                    }
                label_407e1b:;
                    void* rax_23 = ((rbx_4 << 5) + r13_1);
                    int32_t rdx_8 = *rax_23;
                    if (rdx_8 == 0)
                    {
                        *rax_23 = 5;
                        rbp_1 = rcx_4;
                        rbx_1 = *rcx_4;
                    label_407c91:;
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
                            goto label_408298;
                        }
                        int32_t rcx_6;
                        switch (rdx_9)
                        {
                            case 0:
                            {
                                goto label_407ec1;
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
                                goto label_408298;
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
                                goto label_407e69;
                            }
                            case 0x1e:
                            {
                                rcx_6 = 0xe;
                                rbx_1 = 0x63;
                                goto label_407e69;
                            }
                            case 0x2e:
                            {
                                rcx_6 = 0x10;
                                rbx_1 = 0x73;
                                goto label_407e69;
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
                                goto label_407e69;
                            }
                            case 0x3e:
                            {
                                int32_t rcx_8;
                                rcx_8 = rax_11 > 7;
                                rcx_6 = (rcx_8 + 0xd);
                                goto label_407e69;
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
                                goto label_407e69;
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
                                goto label_407e69;
                            }
                            case 0x4b:
                            {
                                rcx_6 = 0x11;
                                goto label_407e69;
                            }
                            case 0x4e:
                            {
                                int32_t rcx_5;
                                rcx_5 = rax_11 > 7;
                                rcx_6 = (rcx_5 + 0xf);
                            label_407e69:
                                if (r14_1 == -1)
                                {
                                    void* rax_51 = (var_68 + 1);
                                    r12_1[0xa] = var_68;
                                    if (var_68 == -1)
                                    {
                                        goto label_408298;
                                    }
                                    r14_1 = var_68;
                                    var_68 = rax_51;
                                    goto label_407e78;
                                }
                                r12_1[0xa] = r14_1;
                            label_407e78:
                                r13_1 = arg3[1];
                                if (r9 > r14_1)
                                {
                                    goto label_407e85;
                                }
                                void* r9_2 = (r9 + r9);
                                void* rax_48 = (r14_1 + 1);
                                if (r9_2 <= r14_1)
                                {
                                    r9_2 = rax_48;
                                }
                                if (r9_2 > 0x7ffffffffffffff)
                                {
                                    goto label_40846d;
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
                                        goto label_408489;
                                    }
                                    goto label_408429;
                                }
                                void* rax_49 = realloc(r13_1, rsi_13);
                                rcx_6 = var_58;
                                r13_1 = rax_49;
                                r9 = r9_2;
                                if (rax_49 == 0)
                                {
                                    goto label_4087c3;
                                }
                                if (rax != arg3[1])
                                {
                                    goto label_40836b;
                                }
                                rax_58 = r13_1;
                                r13_1 = rax;
                            label_408429:;
                                void* rsi_16 = r13_1;
                                r13_1 = rax_58;
                                var_58 = rcx_6;
                                memcpy(rax_58, rsi_16, (*arg3 << 5));
                                rcx_6 = var_58;
                            label_40836b:
                                arg3[1] = r13_1;
                            label_407e85:;
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
                                label_407ec1:
                                    r12_1[9] = rbx_1;
                                    int64_t rax_26 = *r8;
                                    r12_1[1] = rbp_1;
                                    r13 = (rax_26 + 1);
                                    *r8 = r13;
                                    if (r11 > r13)
                                    {
                                        rcx = r8[1];
                                    label_407b48:
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
                                                goto label_4087c3;
                                            }
                                            int64_t r12_2 = r8[1];
                                            int64_t rsi_3 = (r11 * 0xb0);
                                            if (var_60 == r12_2)
                                            {
                                                void* rax_38 = malloc(rsi_3);
                                                rcx = rax_38;
                                                if (rax_38 != 0)
                                                {
                                                label_4080b8:
                                                    rcx = memcpy(rcx, r12_2, (r13 * 0x58));
                                                    r13 = *r8;
                                                label_407f5f:
                                                    r8[1] = rcx;
                                                    r11 = rbx_5;
                                                    goto label_407b48;
                                                }
                                                rsi_7 = arg3[1];
                                                if (rax == rsi_7)
                                                {
                                                    break;
                                                }
                                                goto label_40847f;
                                            }
                                            void* rax_28 = realloc(r12_2, rsi_3);
                                            rcx = rax_28;
                                            if (rax_28 == 0)
                                            {
                                                goto label_4087c3;
                                            }
                                            r12_2 = r8[1];
                                            r13 = *r8;
                                            if (var_60 == r12_2)
                                            {
                                                goto label_4080b8;
                                            }
                                            goto label_407f5f;
                                        }
                                    label_4087c3:
                                        rsi_7 = arg3[1];
                                    }
                                    goto label_408470;
                                }
                                if (rdx_13 == rcx_6)
                                {
                                    goto label_407ec1;
                                }
                                break;
                            }
                        }
                    }
                    else if (rdx_8 == 5)
                    {
                        rbx_1 = *rcx_4;
                        rbp_1 = rcx_4;
                        goto label_407c91;
                    }
                }
            }
            if (rax == r13_1)
            {
                goto label_4082b5;
            }
            free(r13_1);
        label_4082b5:;
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



int64_t sub_408850(void (* arg1)(void*))
{
    /* tailcall */
    return __cxa_atexit(arg1, nullptr, data_60c1e8);
}

int64_t sub_408868(int64_t arg1, int64_t arg2, int64_t arg3)
{
    int64_t* rbx = &data_60be30;
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

