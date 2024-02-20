int64_t sub_770()
{
    int64_t var_8 = data_201008;
    /* jump -> data_201010 */
}

int64_t sub_786()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_770();
}

int64_t sub_796()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_770();
}

int64_t sub_7a6()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_770();
}

int64_t sub_7b6()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_770();
}

int64_t sub_7c6()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_770();
}

int64_t sub_7d6()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_770();
}

int64_t sub_7e6()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_770();
}

int64_t _start(FILE* arg1, char* arg2)
{
    char rax = *arg2;
    int64_t var_28;
    int32_t rdx;
    uint64_t rbp;
    char* r13;
    if (rax == 0x30)
    {
        rbp = 0;
        rdx = 2;
        r13 = nullptr;
    }
    else if (rax == 0x4c)
    {
        rbp = 0;
        rdx = 1;
        r13 = nullptr;
    }
    else
    {
        uint64_t rax_3 = strtoul(arg2, nullptr, 0xa);
        rbp = rax_3;
        if (rax_3 == 0)
        {
            int32_t rax_12 = fileno(arg1);
            char* const rbp_2;
            if (rax_12 == 1)
            {
                rbp_2 = "stdout";
            }
            else
            {
                rbp_2 = "stderr";
                if (rax_12 != 2)
                {
                    rbp_2 = "stdin";
                    if (rax_12 != 0)
                    {
                        rbp_2 = "unknown";
                    }
                }
            }
            /* tailcall */
            return __fprintf_chk(*stderr, 1, dcgettext(nullptr, "invalid buffering mode %s for %s…", 5), arg2, rbp_2, var_28);
        }
        char* rax_4 = malloc(rax_3);
        rdx = 0;
        r13 = rax_4;
        if (rax_4 == 0)
        {
            /* tailcall */
            return __fprintf_chk(*stderr, 1, dcgettext(nullptr, "failed to allocate a %lu byte st…", 5), rbp);
        }
    }
    if (setvbuf(arg1, r13, rdx, rbp) == 0)
    {
        return var_28;
    }
    int32_t rax_8 = fileno(arg1);
    char* const rbp_1;
    if (rax_8 == 1)
    {
        rbp_1 = "stdout";
    }
    else
    {
        rbp_1 = "stderr";
        if (rax_8 != 2)
        {
            rbp_1 = "stdin";
            if (rax_8 != 0)
            {
                rbp_1 = "unknown";
            }
        }
    }
    __fprintf_chk(*stderr, 1, dcgettext(nullptr, "could not set buffering of %s to…", 5), rbp_1, arg2);
    /* tailcall */
    return free(r13);
}

char* sub_9c0()
{
    char* rax = getenv("_STDBUF_E");
    char* rax_1 = getenv("_STDBUF_I");
    char* rax_2 = getenv("_STDBUF_O");
    char* rbx = rax_2;
    if (rax != 0)
    {
        rax_2 = _start(*stderr, rax);
    }
    if (rax_1 != 0)
    {
        rax_2 = _start(*stdin, rax_1);
    }
    if (rbx == 0)
    {
        return rax_2;
    }
    /* tailcall */
    return _start(*stdout, rbx);
}

void sub_a3f()
{
    return;
}

int64_t sub_a61()
{
    int64_t rax;
    int64_t rdx;
    rdx = HIGHD(0);
    rax = LOWD(0);
    int64_t temp0 = (COMBINE(rdx, rax) / 2);
    if ((temp0 != 0 && _ITM_registerTMCloneTable != 0))
    {
        /* tailcall */
        return _ITM_registerTMCloneTable();
    }
    return temp0;
}

void sub_a9a()
{
    if (__bss_start != 0)
    {
        return;
    }
    if (__cxa_finalize != 0)
    {
        __cxa_finalize(data_201058);
    }
    while (true)
    {
        int64_t rax_1 = data_201068;
        if (rax_1 >= 0)
        {
            break;
        }
        data_201068 = (rax_1 + 1);
        *(&data_200e08 + ((rax_1 + 1) << 3))();
    }
    sub_a3f();
    __bss_start = 1;
}

int64_t j_sub_a61()
{
    /* tailcall */
    return sub_a61();
}

int64_t sub_b0e(int64_t arg1, int64_t arg2, int64_t arg3)
{
    void* const rbx = &data_200df8;
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

