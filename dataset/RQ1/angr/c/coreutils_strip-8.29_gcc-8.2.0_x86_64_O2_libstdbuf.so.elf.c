#include "decompile_angr.h"
extern unsigned long long __bss_start;

int sub_400a3f()
{
    unsigned long long v1;  // rax

    v1 = &__bss_start;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

extern char __bss_start;
extern unsigned long long g_601068;

int sub_400a9a()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long long v4;  // r12
    unsigned long long v5;  // rbx
    unsigned long v6;  // rax
    unsigned long long v8;  // rax
    unsigned long long v10;  // rbx
    unsigned long long v11;  // r12

    if (__bss_start == 0)
    {
        v2 = stack_base + 0;
        v1 = v4;
        v0 = v5;
        if (false)
        {
            __cxa_finalize();
        }
        while (true)
        {
            if (g_601068 >= 0)
            {
                break;
            }
            g_601068 = g_601068 + 1;
            *((long long *)(6295048 + (v8 + 1) * 8))();
        }
        v10 = v0;
        v11 = v1;
        __bss_start = 1;
        return sub_400a3f();
    }
    return v6;
}

int sub_4009c0()
{
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx

    v3 = getenv("_STDBUF_O");
    v4 = v3;
    if (getenv("_STDBUF_E") != 0)
    {
        v3 = _start();
    }
    if (getenv("_STDBUF_I") != 0)
    {
        v3 = _start();
    }
    if (v4 == 0)
    {
        return v3;
    }
}

extern unsigned long long g_600df8;

int sub_400b0e()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_600df8;
    while (true)
    {
        v2 = *(v1);
        if (*(v1) == -1)
        {
            break;
        }
        rax<8>();
        v1 = &v1[-1];
    }
    return v4;
}

