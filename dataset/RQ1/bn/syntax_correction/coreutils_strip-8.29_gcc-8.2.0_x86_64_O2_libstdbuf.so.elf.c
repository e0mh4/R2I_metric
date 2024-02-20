#include "decompile_bn.h"
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

