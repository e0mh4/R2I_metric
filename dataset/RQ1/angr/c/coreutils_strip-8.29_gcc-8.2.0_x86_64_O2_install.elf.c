#include "decompile_angr.h"
extern char *g_6219a0;

int sub_40a380()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    char *v3;  // rax

    v2 = v1;
    if (v1 == 0)
    {
        v3 = getenv("SIMPLE_BACKUP_SUFFI");
        v2 = v3;
    }
    if ((v3 != 0 || v1 != 0) && *(v2) != 0)
    {
        v3 = sub_40ad40();
        if (v3 == v2)
        {
            g_6219a0 = v2;
            return v3;
        }
    }
    if (*(v2) == 0 || v3 != v2 || v3 == 0 && v1 == 0)
    {
        g_6219a0 = "~";
        return v3;
    }
}

typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
} struct_0;

int sub_40f520()
{
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rbp
    unsigned int v3[2];  // rcx
    unsigned int v4;  // r13d
    unsigned long v5;  // rsi
    unsigned long v6;  // rdx
    unsigned int v7;  // eax
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13
    unsigned long long v10;  // rax
    unsigned int v11;  // eax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    v2 = v1;
    if (v3 != 0)
    {
        v3[0] = v4;
        v4 = __open_2(v5, (unsigned int)v6 * 0x20000 & 0x20000 | 0x10900);
        v7 = *(__errno_location());
        v3[1] = v7;
        if (v9 >= 0)
        {
            if (((char)v6 & 2) != 0)
            {
                v8 = 0;
            }
        }
        else
        {
            if (v7 != 13)
            {
                v8 = -18446744069414584321;
            }
        }
    }
    else
    {
        v9 = -18446744069414584321;
    }
    if (*((int *)&v1->field_0) <= 5 && (v9 < 0 || v3 == 0 || ((char)v6 & 2) == 0) && (v7 == 13 || v3 == 0 || v9 >= 0) && ((char)(1 << ((char)*((int *)&v1->field_0) & 63)) & 54) == 0 && ((char)(1 << ((char)*((int *)&v1->field_0) & 63)) & 8) == 0 && *((int *)&v1->field_0) == 0)
    {
        v10 = sub_40ae10();
        if (v10 >= 0)
        {
            *((int *)&v2->field_0) = 1;
            *((unsigned long long *)&v2->field_4) = v10;
        }
        else
        {
            v11 = *(__errno_location());
            if (v11 != 13 && v11 != 116)
            {
                *((int *)&v2->field_0) = 4;
                v2->field_4 = v11;
            }
        }
    }
    if ((((char)(1 << ((char)*((int *)&v1->field_0) & 63)) & 8) == 0 || *((int *)&v1->field_0) > 5) && (((char)(1 << ((char)*((int *)&v1->field_0) & 63)) & 54) == 0 || *((int *)&v1->field_0) > 5) && (v9 < 0 || v3 == 0 || ((char)v6 & 2) == 0) && (*((int *)&v1->field_0) > 5 || *((int *)&v1->field_0) != 0) && (v7 == 13 || v3 == 0 || v9 >= 0))
    {
        __assert_fail(); /* do not return */
    }
    if (((char)(1 << ((char)*((int *)&v1->field_0) & 63)) & 8) == 0 && v10 < 0 && v11 == 13 && *((int *)&v1->field_0) <= 5 && ((char)(1 << ((char)*((int *)&v1->field_0) & 63)) & 54) == 0 && *((int *)&v1->field_0) == 0 && (v9 < 0 || v3 == 0 || ((char)v6 & 2) == 0) && (v7 == 13 || v3 == 0 || v9 >= 0) || ((char)(1 << ((char)*((int *)&v1->field_0) & 63)) & 8) == 0 && v11 == 116 && v10 < 0 && *((int *)&v1->field_0) <= 5 && ((char)(1 << ((char)*((int *)&v1->field_0) & 63)) & 54) == 0 && *((int *)&v1->field_0) == 0 && v11 != 13 && (v9 < 0 || v3 == 0 || ((char)v6 & 2) == 0) && (v7 == 13 || v3 == 0 || v9 >= 0))
    {
        *((long long *)&v1->field_0) = -4294967293;
    }
    if (...)
    {
        v12 = fork();
        v1->field_4 = v12;
        if ((unsigned int)v12 != 0)
        {
            if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>))
            {
                *((int *)&v1->field_0) = 4;
                v1->field_4 = *(__errno_location());
            }
            else
            {
                v13 = 1;
                v8 = -18446744069414584322;
            }
        }
    }
    if (...)
    {
        if (v9 >= 0)
        {
            v8 = fchdir(v9);
            if ((unsigned int)v8 != 0)
            {
                v13 = (char)(v3 == 0);
            }
        }
        else
        {
            v8 = chdir(v5);
        }
    }
    if (...)
    {
        switch (*((int *)&v1->field_0))
        {
        case 1:
            *((int *)&v1->field_0) = 2;
            break;
        case 2: case 4: case 5:
            v13 = (char)(v3 == 0);
            v8 = 0;
        case 3:
            if (v1->field_4 != 0)
            {
                __assert_fail(); /* do not return */
            }
        default:
            __assert_fail(); /* do not return */
        }
    }
    if (v9 >= 0 && v13 != 0)
    {
        close(v9);
        *(__errno_location()) = v3[0];
        return v16;
    }
    if (...)
    {
        v15 = v8;
        return v15;
    }
}

typedef struct struct_0 {
    char padding_0[46];
    char field_2e;
} struct_0;

int sub_404000()
{
    struct_0 *v1;  // rsi
    unsigned long v2;  // rax

    if (v1->field_2e == 0)
    {
        return v2;
    }
}

extern int512_t g_621ae0;

int sub_40e600()
{
    void tmp_2;  // tmp #2
    void tmp_52;  // tmp #52
    void tmp_123;  // tmp #123
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long long v3;  // rcx
    unsigned long long v5;  // rsi
    unsigned long v6;  // rdx

    tmp_2 = v1;
    tmp_52 = v1 == 0;
    v3 = (unsigned int)v2 & 31;
    v5 = (unsigned int)*((int *)((tmp_52? &g_621ae0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_621ae0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_40c580()
{
    return 0;
}

int sub_40b1c0()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    if (v1 != 0)
    {
        v6 = v3;
        v5 = v1;
        v2 = 0;
        while (true)
        {
            v4 = sub_40eec0();
            if (v4 == -1)
            {
                break;
            }
            if (v4 != 0)
            {
                v2 += v4;
                v6 += v4;
                v5 -= v4;
                if (v5 == v4)
                {
                    break;
                }
            }
            else
            {
                *(__errno_location()) = 0;
                v8 = v2;
                return v8;
            }
        }
    }
    else
    {
        v2 = 0;
    }
    v7 = v2;
    return v7;
}

int sub_4137d0()
{
    unsigned long long v1[3];  // rax
    unsigned long v2;  // rdi

    v1 = sub_4112e0();
    v1[0] = v2;
    v1[2] = 0;
    v1[1] = 0;
    return v1;
}

int sub_4105a0()
{
    unsigned long long v1[4];  // rdi
    unsigned long long v2;  // r9
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // r10
    char v6;  // al
    unsigned long long v7;  // ecx
    unsigned long long v8;  // rax
    char v9;  // al
    unsigned long long v10;  // rax

    v2 = v1[1];
    if (v1[1] - 1073741822 <= 1 || v1[1] <= 999999999)
    {
        v3 = v1[3];
    }
    if (v1[1] - 1073741822 <= 1 && v1[3] - 1073741822 <= 1 || v1[1] - 1073741822 <= 1 && v1[3] <= 999999999 || v1[1] <= 999999999 && v1[3] - 1073741822 <= 1 || v1[1] <= 999999999 && v1[3] <= 999999999)
    {
        v7 = 0;
        v5 = 0;
        if (v1[1] - 1073741822 <= 1)
        {
            v1[0] = 0;
            v7 = 0;
            v5 = 1;
            v7 = (char)(v2 == 1073741822);
        }
        if (v1[3] - 1073741822 <= 1)
        {
            v4 = 0;
            v1[2] = 0;
            v5 = 1;
            v6 = v3 == 1073741822;
            v7 = (unsigned int)(v7 + rax<8>);
        }
        v8 = 0;
        v9 = v7 == 1;
        v10 = rax<8> + v5;
        return v10;
    }
    *(__errno_location()) = 22;
    return -18446744069414584321;
}

int sub_40b240()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    if (v1 != 0)
    {
        v6 = v3;
        v5 = v1;
        v2 = 0;
        while (true)
        {
            v4 = sub_40ef20();
            if (v4 == -1)
            {
                break;
            }
            if (v4 != 0)
            {
                v2 += v4;
                v6 += v4;
                v5 -= v4;
                if (v5 == v4)
                {
                    break;
                }
            }
            else
            {
                *(__errno_location()) = 28;
                v8 = v2;
                return v8;
            }
        }
    }
    else
    {
        v2 = 0;
    }
    v7 = v2;
    return v7;
}

extern uint128_t g_621ae0;
extern uint128_t g_621af0;
extern uint128_t g_621b00;
extern unsigned long long g_621b10;

int sub_40eb40()
{
    void|unsigned int v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_621ae0;
    *((uint128_t *)&v1) = g_621af0;
    *((uint128_t *)&v2) = g_621b00;
    v4 = g_621b10;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_40e400();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_40e5a0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4114e0();
}

int sub_40f770()
{
    char v0;  // [bp-0x1c]
    unsigned int v1;  // [bp+0x0]
    unsigned int v3[2];  // rdi
    unsigned int v4[2];  // rbx
    unsigned long long v6;  // rax
    unsigned int v7;  // esi
    unsigned int *v9;  // rax
    unsigned int *v10;  // rbp
    unsigned long long v12;  // rax
    unsigned long|unsigned int v13;  // r12
    unsigned long long v14;  // rax

    if (v3[0] <= 4)
    {
        v4 = v3;
        /* goto *((long long *)((unsigned long long)v3[0] * 8 + 4300984)); */
        if (!(v3[1] != 0))
        {
            _exit(v7);
        }
        else if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x13<64>, Conv(32->64, Load(addr=(rdi<8> + 0x4<64>), size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))
        {
            while (true)
            {
                if (waitpid(v3[1], (unsigned int)&v0, 0x0) < 0)
                {
                    v9 = __errno_location();
                    __assert_fail(); /* do not return */
                }
            }
            v12 = (unsigned int)*((int *)&v0);
            v3[1] = -1;
            if (((char)*((int *)&v0) & 127) == 0)
            {
                break;
            }
            raise();
            v12 = (unsigned int)*((int *)&v0);
            v14 = v12;
            return v14;
        }
        v6 = fchdir(v3[1]);
        if ((unsigned int)v6 == 0)
        {
            v4[0] = 1;
            return v6;
        }
        v13 = v1;
        v10 = __errno_location();
        close(v4[1]);
        v4[0] = 4;
        v4[1] = v1;
        v13 = v3[1];
        v10 = __errno_location();
        return 0;
        *((unsigned long *)&v10) = v13;
        return -18446744069414584321;
    }
    __assert_fail(); /* do not return */
    v4 = v3;
    /* goto *((long long *)((unsigned long long)v3[0] * 8 + 4300984)); */
    if (!(v3[1] != 0))
    {
        _exit(v7);
    }
    else if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x13<64>, Conv(32->64, Load(addr=(rdi<8> + 0x4<64>), size=4, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))
    {
        while (true)
        {
            if (waitpid(v3[1], (unsigned int)&v0, 0x0) < 0)
            {
                v9 = __errno_location();
                __assert_fail(); /* do not return */
            }
        }
        v12 = (unsigned int)*((int *)&v0);
        v3[1] = -1;
        if (((char)*((int *)&v0) & 127) == 0)
        {
            break;
        }
        raise();
        v12 = (unsigned int)*((int *)&v0);
        v14 = v12;
        return v14;
    }
    v6 = fchdir(v3[1]);
    v13 = v1;
    v10 = __errno_location();
    close(v4[1]);
    v4[0] = 4;
    v4[1] = v1;
    if ((unsigned int)v6 == 0)
    {
        v4[0] = 1;
        return v6;
    }
    v13 = v3[1];
    v10 = __errno_location();
    return 0;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[24];
    unsigned long long field_48;
    char padding_50[64];
    unsigned long long field_90;
} struct_0;

int sub_411bc0()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct_0 *v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    struct_0 *v7;  // rbx
    unsigned int v8;  // esi
    unsigned int v9;  // edx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r12

    if (v4->field_10 == v4->field_8 && v4->field_28 == v4->field_20 && v4->field_48 == 0)
    {
        v2 = v5;
        v1 = stack_base + 0;
        v0 = v6;
        v7 = v4;
        v10 = lseek(fileno(v4), v8, v9);
        if (v10 != -1)
        {
            v7->field_0 = v7->field_0 & -17;
            v7->field_90 = v10;
            v10 = 0;
        }
        v11 = v0;
        v12 = v2;
        return v10;
    }
}

int sub_4110e0()
{
    unsigned long long v1;  // r9
    unsigned long long v2[2];  // r8

    v1 = 0;
    if (*(v2) != 0)
    {
        do
        {
            v1 += 1;
        }
        while (v2[v1] != 0);
    }
}

int sub_411c20()
{
    unsigned int v1[13];  // rsi
    unsigned long long v2;  // r12
    unsigned long long v3;  // rbp
    unsigned long long v4;  // rbx
    unsigned long long v5;  // r9
    unsigned long long v6;  // r8
    unsigned long long v7;  // r14
    unsigned long long v8;  // rdx
    unsigned long v9;  // rdi
    unsigned long long *v10;  // rax
    unsigned long long *v12;  // rdx
    unsigned long long v13;  // rcx
    unsigned long long v14;  // r10
    unsigned long long *v15;  // rax
    unsigned long long *v17;  // rdx
    unsigned long long v18;  // rcx
    unsigned int v19;  // r9d

    v2 = v1[5 + 1];
    v3 = v1[0];
    v4 = (int)v1[6];
    v5 = v1[5 + 1];
    v14 = v1[0];
    while ((unsigned int)v14 > v1[6])
    {
        for (v6 = (int)v1[6]; v5 < v1[6]; v19 = v5 + v7)
        {
            v7 = v14 - v6;
            v8 = v6 - v5;
            if ((unsigned int)(v14 - v6) > (unsigned int)(v6 - v5))
            {
                v14 -= v8;
                v10 = v9 + v5 * 8;
                v12 = v14 - v5;
                do
                {
                    v13 = *(v10);
                    *(v10) = *((long long *)((char *)v10 + 0x8 * v12));
                    *((unsigned long long *)((char *)v10 + 0x8 * v12)) = v13;
                    v10 = &v10[1];
                }
                while (v9 + 8 + ((unsigned int)v8 - 1 + v5) * 8 != v10);
                if ((unsigned int)v14 <= (unsigned int)v6)
                {
                    break;
                }
            }
            else
            {
                v15 = v9 + v5 * 8;
                v17 = v4 - v5;
                do
                {
                    v18 = *(v15);
                    *(v15) = *((long long *)((char *)v15 + 0x8 * v17));
                    *((unsigned long long *)((char *)v15 + 0x8 * v17)) = v18;
                    v15 = &v15[1];
                }
                while (v15 != v9 + 8 + (v7 - 1 + v5) * 8);
            }
        }
        if ((unsigned int)(v14 - v6) > (unsigned int)(v6 - v5) || v5 >= v1[6])
        {
            v1[6] = v3;
            v1[5 + 1] = (unsigned int)(v2 + stack_base + 0 - v6);
            return stack_base + 0 - v6;
        }
    }
    v1[6] = v3;
    v1[5 + 1] = (unsigned int)(v2 + stack_base + 0 - v6);
    return stack_base + 0 - v6;
}

int sub_411160()
{
    unsigned int v0;  // [bp-0xa0]
    void tmp_12;  // tmp #12
    void tmp_8;  // tmp #8
    unsigned long v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    unsigned long v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x18]
    unsigned long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp+0x8]
    char v7;  // [bp+0x10]
    unsigned long long v8;  // r11
    unsigned long long v9;  // r8
    unsigned long v10;  // r9
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // r8
    unsigned long long|unsigned long long * v14;  // r10
    unsigned long long v15;  // r9

    v8 = 0;
    v4 = v9;
    v14 = &v6;
    v13 = 32;
    v1 = &v6;
    v5 = v10;
    v15 = 0;
    v0 = 32;
    v2 = stack_base + -56;
    while (true)
    {
        if ((unsigned int)v13 <= 47)
        {
            tmp_12 = v13;
            v13 = (unsigned int)v13 + 8;
            v8 = 1;
            v11 = v4;
            v3 = v4;
        }
        else
        {
            tmp_8 = v14;
            v14 = &v7;
            v12 = v6;
            v3 = v6;
        }
        if ((unsigned int)v13 <= 47 && v11 != 0 || v12 != 0 && (unsigned int)v13 > 47)
        {
            v15 += 1;
        }
        if (v8 != 0)
        {
            v0 = v13;
        }
        return sub_410d00();
    }
}

int sub_4129b0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4128f0();
}

extern unsigned int g_4185c8;

int sub_404d30()
{
    unsigned int *v0;  // [bp-0x8]
    unsigned int *v2;  // rbx

    v0 = v2;
    *(v2) = 95;
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4185c8, 0x5));
}

int sub_416250() { crash_skku;
}
int sub_40f08b()
{
}

extern unsigned long long stdin;

int sub_4119a0()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long|unsigned long long|char v3;  // rbx
    char *v5;  // rax
    unsigned long long v6;  // rax

    v3 = 0;
    v0 = 0;
    v1 = 0;
    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
    {
        v5 = v0 + __getdelim(&v0, &v1, 0xa, stdin) - 1;
        if (*(v5) == 10)
        {
            *(v5) = 0;
        }
        v3 = [D] amd64g_calculate_condition(0xf<64>, 0x13<64>, Call (target: 0x402c70<64>, prototype: () -> None, args: []), 0x0<64>, cc_ndep<8>);
    }
    free(v0);
    v6 = v3;
    return v6;
}

int sub_40f0ab()
{
}

extern unsigned int g_418fcb;

int sub_40fb10()
{
    unsigned long long|unsigned int v0;  // [bp-0x60]
    unsigned long long|unsigned int v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x48]
    unsigned int v4;  // [bp-0x3c]
    char *v6;  // rdi
    unsigned long long v7;  // r14
    unsigned long long v8;  // r8
    unsigned long long v9;  // r13
    unsigned long long v10;  // rsi
    unsigned long long v11;  // rbp
    unsigned long long v12;  // rdx
    unsigned long v13;  // rcx
    unsigned int *v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long|unsigned int v21;  // r12d
    unsigned long long v22;  // rbx
    unsigned long long v23;  // r14
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdi
    unsigned int v27;  // rdx
    unsigned long|unsigned int v28;  // rcx
    unsigned int v29;  // cc_dep1

    v7 = v6;
    v9 = v8;
    v11 = v10;
    v2 = v12;
    v0 = v6;
    v3 = v13;
    v14 = __errno_location();
    v4 = *(v14);
    v15 = strlen(v6);
    v16 = v11 + v9;
    if (v11 + v9 <= v15)
    {
        v1 = v7 + v15 - v16;
        v18 = strspn(v7 + v15 - v16, 0x418fcb);
        if (v9 <= v18)
        {
            if ((unsigned long long)(unsigned int)sub_413800() != 0)
            {
                v21 = 238328;
                v22 = v15 - v16 + v0 + v9;
                while (true)
                {
                    v23 = v1;
                    if (v9 != 0)
                    {
                        while (true)
                        {
                            v23 += 1;
                            *((unsigned long long *)(v23 - 1)) = (char)*((char *)(4301248 + (unsigned long long)(unsigned int)sub_413840()));
                            if (v23 == v22)
                            {
                                break;
                            }
                        }
                    }
                    v25 = v2;
                    v26 = v0;
                    v27 = (long long)(stack_base)[-72]();
                    if (v27 < 0)
                    {
                        v28 = *(v14);
                        if (*(v14) == 17)
                        {
                            v29 = v21;
                            v21 = (unsigned long long)v21 - 1;
                            sub_413960();
                            *(v14) = 17;
                            v19 = -18446744069414584321;
                        }
                        else
                        {
                            v27 = -1;
                        }
                    }
                    else
                    {
                        *(v14) = v4;
                        v28 = v4;
                    }
                    if (*(v14) != 17 || v27 >= 0)
                    {
                        v1 = v27;
                        *((unsigned long *)&v0) = v28;
                        sub_413960();
                        v19 = v1;
                        *(v14) = v0;
                    }
                }
            }
            else
            {
                v19 = -18446744069414584321;
            }
        }
    }
    if (v11 + v9 > v15 || v9 > v18)
    {
        *(v14) = 22;
        v19 = -18446744069414584321;
    }
    return v19;
}

int sub_411330()
{
}

int sub_40ade0()
{
    unsigned long v0;  // [bp-0x8]
    void *v2;  // rdi
    unsigned long v3;  // rax
    unsigned long v4;  // rbx

    if (v2 != 0)
    {
        v0 = v4;
        fileno(v2);
    }
    else
    {
        return v3;
    }
}

int sub_4114e0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4112e0();
}

int sub_40eec0() { crash_skku;
}
extern unsigned int g_61f4d4;
extern unsigned int g_61f4d8;
extern unsigned int g_61f4dc;
extern unsigned int g_621b40;
extern unsigned int g_621b44;
extern unsigned int g_621b48;
extern unsigned long long g_621b50;
extern unsigned long long g_621b80;

int sub_4128f0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_621b40 = g_61f4dc;
    g_621b44 = g_61f4d8;
    v1 = (unsigned int)v2;
    v0 = &g_621b40;
    g_61f4dc = g_621b40;
    g_621b80 = g_621b50;
    g_61f4d4 = g_621b48;
    return sub_412320();
}

int sub_40c510()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // rsi

    return (0 CONCAT (unsigned int)sub_413020() ^ v0) % v1 >> 64;
}

int sub_40c550()
{
    unsigned long long v1[3];  // rdi
    unsigned long long v2[3];  // rsi

    if (v1[2] != v2[2] || v1[1] != v2[1])
    {
        return 0;
    }
}

int sub_40fd40()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT *(v1)) % v2 >> 64;
}

int sub_404020()
{
    unsigned int v0;  // [bp-0x1c]
    char v2[47];  // rdx
    unsigned int v3;  // esi

    if (v2[4 + 1] != 0)
    {
        *(__errno_location()) = 95;
    }
    if (v0 == 0 && v2[5 + 6] != 0)
    {
        v0 = mkdir(v3, 0x1ed);
        sub_403fc0();
        return v0;
    }
    if (v2[5 + 6] == 0 || v0 != 0)
    {
        return v0;
    }
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int sub_413d30()
{
    void tmp_20;  // tmp #20
    unsigned long long v1[4];  // rdi
    struct_0 *v2;  // r12
    void *v3;  // rsi
    unsigned long v4;  // rdx
    void *v5;  // rdi
    void *v6;  // rbp
    unsigned long v7;  // rbx
    unsigned long long v9;  // r15
    unsigned int *v11;  // r14
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rdi
    unsigned long v16;  // rdx
    char *v18;  // r13
    void *v20;  // r13

    v2 = v1;
    v6 = v3;
    v7 = v4;
    v18 = *(v1);
    if (*(v1) != 0)
    {
        v11 = __errno_location();
        while (true)
        {
            v13 = fread_unlocked(v6, 0x1, v7, v18);
            v14 = *(v11);
            v6 += v13;
            v7 -= v13;
            if (v7 == v13)
            {
                break;
            }
            v15 = v2->field_10;
            tmp_20 = v14;
            v16 = (unsigned int)((*(v2->field_0) & 32) == 0? 0 : (unsigned int)v14);
            *(v11) = ((*(v2->field_0) & 32) == 0? 0 : tmp_20);
            v2->padding_8();
            v18 = v2->field_0;
        }
    }
    else
    {
        v9 = v1[3];
        v20 = &v1[263];
        if (v4 > v1[3])
        {
            while (true)
            {
                v5 = v6;
                v6 += v9;
                v7 -= v9;
                memcpy(v5, 0x800 - v9 + v20, v9);
                if ((v6 & 7) != 0)
                {
                    v9 = 0x800;
                    sub_413ee0();
                }
                else
                {
                    while (true)
                    {
                        if (v7 > 2047)
                        {
                            v6 += 0x800;
                            v7 -= 0x800;
                            v2->field_18 = 0;
                            return sub_413ee0();
                        }
                    }
                    sub_413ee0();
                }
            }
            v9 = 0x800;
        }
        else
        {
            v20 = &((unsigned long long [4])((char *)&v1[263] + -1 * v1[3]))[0x100];
        }
        v13 = memcpy(v6, v20, v7);
        v2->field_18 = v9 - v7;
    }
    return v13;
}

int sub_40ef20() { crash_skku;
}
typedef struct struct_0 {
    char padding_0[20];
    unsigned int field_14;
    char field_18;
} struct_0;

extern unsigned int g_418600;
extern unsigned int g_418630;
extern unsigned int g_418c28;

int sub_404e20()
{
    unsigned long v0;  // [bp-0x48]
    char v1;  // [bp-0x2a]
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r13
    struct_0 *v7;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rdx

    if (sub_404bd0() == 0)
    {
        sub_40af30();
        v1 = 0;
        v6 = (unsigned int)sub_40ea00();
        if (v7->field_18 == 0 && (v7->field_14 & 0xffff00) == 0)
        {
            v9 = dcgettext(0x0, 0x418630, 0x5);
        }
        if ((v7->field_14 & 0xffff00) != 0 || v7->field_18 != 0)
        {
            v8 = dcgettext(0x0, 0x418600, 0x5);
        }
        v0 = stack_base + -51;
        __fprintf_chk();
        return sub_4119a0();
    }
    v5 = (unsigned int)sub_40ea00();
    dcgettext(0x0, 0x418c28, 0x5);
    __fprintf_chk();
    return sub_4119a0();
}

int sub_40bce0()
{
    unsigned long long v1[10];  // rdi
    unsigned long long v2[10];  // rbp
    unsigned long long v3[2];  // r12
    unsigned long long v4;  // rdi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rcx
    unsigned long long v8[2];  // rbx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rdi

    v2 = v1;
    v3 = *(v1);
    if (*(v1) < v1[1])
    {
        while (true)
        {
            if (*(v3) == 0)
            {
                v3 = &v3[2];
                if (v2[1] <= v3)
                {
                    break;
                }
            }
            else
            {
                v8 = v3[1];
                v9 = v2[8];
                if (v3[1] != 0)
                {
                    do
                    {
                        if (v9 != 0)
                        {
                            v4 = *(v8);
                            rax<8>();
                            v9 = v2[8];
                        }
                        v6 = v8[1];
                        v7 = v2[9];
                        v8[0] = 0;
                        v8[1] = v7;
                        v2[9] = v8;
                        v8 = v6;
                    }
                    while (v6 != 0);
                }
                if (v9 != 0)
                {
                    v10 = *(v3);
                    v9 = rax<8>();
                }
                v3[0] = 0;
                v3 = &v3[2];
                v3[-1] = 0;
                if (v2[1] <= v3)
                {
                    break;
                }
            }
        }
    }
    v2[3] = 0;
    v2[4] = 0;
    return v9;
}

int sub_40e72b()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x2c]
    unsigned long v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x20]
    unsigned long v6;  // [bp-0x18]
    unsigned long v7;  // [bp-0x10]
    unsigned long long v8;  // [bp+0x0]
    unsigned long long v10;  // [bp+0x10]
    unsigned long long v11;  // [bp+0x18]
    unsigned long long v12;  // [bp+0x20]
    unsigned long long v13;  // [bp+0x28]
    unsigned long v14;  // rcx
    unsigned long v15;  // rax
    unsigned long long v17[7];  // rbx
    unsigned int *v18;  // r13
    unsigned long long *v20;  // r12
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15

    v17 = (v14 == 0? v15 : rbx<8>);
    v18 = __errno_location();
    v3 = *(v18);
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = &v17[1];
    v6 = &v17[1];
    v7 = (unsigned int)sub_40d1d0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4112e0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_40d1d0();
    *(v18) = v3;
    if (v20 != 0)
    {
        *(v20) = v7;
    }
    v21 = v8;
    v22 = v10;
    v23 = v11;
    v24 = v12;
    v25 = v13;
    return v4;
}

int sub_40f4f0()
{
    unsigned int *v1;  // rdi
    unsigned long v2;  // rax

    *(v1) = 0;
    return v2;
}

int sub_40ada0()
{
    char *v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    v2 = strlen(v1);
    if (v2 > 1)
    {
        while (true)
        {
            v3 = v2 - 1;
            if (v1[v2 + -1] != 47)
            {
                break;
            }
            v2 = v3;
            return 1;
        }
    }
    return v2;
}

int sub_40ace0()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_40ac80();
    v2 = malloc(v1 + (char)(v1 == 0) + 1);
    if (v2 != 0)
    {
        v2 = memcpy(v2, v3, v1);
        if (v1 == 0)
        {
            *((char *)v2) = 46;
            v1 = 1;
        }
        *((char *)(v2 + v1)) = 0;
    }
    return v2;
}

int sub_40ead0()
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned int v9;  // esi

    if (v9 == 10)
    {
        abort(); /* do not return */
    }
    v0 = v9;
    v2 = 0x400000000000000;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    return sub_40e400();
}

extern unsigned int g_621b34;

int sub_411a10()
{
    unsigned int v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x38]
    unsigned long v4;  // [bp-0x30]
    unsigned int v6;  // [bp+0x100008]
    unsigned long v7;  // rdx
    unsigned long v8;  // rcx
    unsigned int v9;  // rsi
    unsigned int v10;  // edi
    unsigned int v11;  // edi
    unsigned int *v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v17;  // rax

    v3 = v7;
    v1 = stack_base + 8;
    v4 = v8;
    v0 = 16;
    v2 = stack_base + -72;
    if (v9 == 1030)
    {
        v0 = 24;
        if (g_621b34 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_411a10();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_621b34 = -1;
                    }
                }
            }
            if ((unsigned int)v15 >= 0 || *(v12) != 22)
            {
                g_621b34 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_411a10();
        }
        if (((unsigned int)v15 < 0 || g_621b34 < 0) && (g_621b34 < 0 || *(v12) == 22) && (g_621b34 == -1 || g_621b34 >= 0) && (g_621b34 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_621b34 >= 0))
        {
            v13 = fcntl(v15, 0x1);
            if (v13 >= 0)
            {
                v14 = fcntl(v15, 0x2);
            }
            if (v13 < 0 || v14 == -1)
            {
                v15 = -18446744069414584321;
                close(v11);
                *(__errno_location()) = v6;
            }
        }
        v17 = v15;
        return v17;
    }
    return fcntl(v10, v9);
}

int sub_413a0a()
{
}

int sub_40ec00()
{
}

int sub_412f20()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_4143e0();
    if (((char)*(v3) & 32) == 0)
    {
        if ((unsigned int)v2 != 0 && v1 == 0)
        {
            v2 = 0 - (unsigned int)(char)(*(__errno_location()) != 9);
        }
    }
    else
    {
        if ((unsigned int)v2 == 0)
        {
            *(__errno_location()) = 0;
            v2 = -18446744069414584321;
        }
    }
    if ((unsigned int)v2 != 0 && (v1 != 0 || ((char)*(v3) & 32) != 0))
    {
        v2 = -18446744069414584321;
    }
    return v2;
}

int sub_411340()
{
    unsigned int v1;  // rsi
    void *v2;  // rdi
    unsigned long long v3;  // rax

    if (v1 == 0 && v2 != 0)
    {
        free(v2);
        return 0;
    }
    if (v2 == 0 || v1 != 0)
    {
        v3 = realloc(v2, v1);
        if (v3 == 0 && v1 != 0)
        {
            sub_411530(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_411100()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v2;  // r9
    struct_0 *v3;  // r8
    unsigned long long v4;  // rax
    unsigned long long *v5;  // r10
    unsigned long long v6;  // rax
    unsigned long long *v7;  // r10
    unsigned long long v8;  // rax

    v2 = 0;
    do
    {
        v4 = v3->field_0;
        if (v3->field_0 <= 47)
        {
            v5 = v4 + v3->field_10;
            v3->field_0 = (unsigned int)v4 + 8;
            v6 = *(v5);
            v0 = *(v5);
            if (v6 == 0)
            {
                break;
            }
        }
        else
        {
            v7 = v3->field_8;
            v3->field_8 = v3->field_8 + 8;
            v8 = *(v7);
            v0 = *(v7);
            if (v8 == 0)
            {
                break;
            }
        }
        v2 += 1;
    }
    while (v2 != 10);
    return sub_410d00();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40f0b0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi
    struct_0 *v3;  // rsi

    v1 = -18446744069414584321;
    if (v2->field_8 >= v3->field_8)
    {
        v1 = (char)(v2->field_8 > v3->field_8);
    }
    return v1;
}

int sub_412990()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_412320();
}

int sub_413830()
{
    unsigned long long *v1;  // rdi

    return *(v1);
}

extern char g_4139c0;

int sub_413a20()
{
    void tmp_2;  // tmp #2
    void tmp_27;  // tmp #27
    unsigned long long v0;  // [bp-0x50]
    unsigned int|char v1;  // [bp-0x48]
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbp
    unsigned long v5;  // rdi
    unsigned long long *v6;  // rbx
    unsigned short v7;  // dx
    unsigned long long v8;  // rax
    void *v9;  // r13
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r14
    unsigned long long v14[2];  // rbx
    unsigned long long v16;  // rbp
    unsigned long long v18;  // r15
    unsigned long v19;  // rbp
    char *v21;  // rdi
    char *v22;  // rsi
    unsigned long long v23;  // rcx
    unsigned long v24;  // d
    unsigned long long v25;  // r14
    char *v27;  // rsi
    unsigned long long v28;  // rcx
    char *v29;  // rdi
    unsigned long v30;  // rbp
    unsigned long long v32;  // rsi
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rbp
    unsigned long v37;  // r14
    unsigned long long v39;  // rsi
    unsigned long long v41;  // rax
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rbp
    unsigned long long v45;  // rsi
    unsigned long long v47;  // rax
    unsigned long long v48;  // rdx
    unsigned long long v50;  // rax

    if (v3 != 0)
    {
        v4 = v3;
        if (v5 != 0)
        {
            v9 = (unsigned long long)(unsigned int)sub_415f90();
            if (v9 != 0)
            {
                v14[0] = v9;
                v14[1] = &g_4139c0;
                v14 = (unsigned long long)(unsigned int)sub_4112e0();
                v14[2] = v5;
                setvbuf(v9, &v14[3], 0x0, (v4 <= 0x1000? v4 : 0x1000));
            }
            else
            {
                v11 = 0;
            }
        }
        else
        {
            *(v6) = 0;
            v6 = (unsigned long long)(unsigned int)sub_4112e0();
            v6[1] = &g_4139c0;
            v6[2] = 0;
            v6[3] = 0;
            v8 = open("/dev/urandom", 0x0, v7);
            if ((unsigned int)v8 >= 0)
            {
                v16 = __read_chk(v8, (unsigned int)v6 + 32, (!(rbp<8> <= 0x800)? 0x800 : rbp<8>), 0x1018);
                close(v8);
                if (v16 <= 2047)
                {
                    tmp_2 = v16;
                    tmp_27 = (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>);
                    v18 = (char *)&v6[4] + ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v16);
                    v19 = ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v16) + (!(0x800 - ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v16) <= 16)? 16 : 0x800 - ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)? 0 : v16));
                    *((int *)&v0) = (!(0x800 - (tmp_27? 0 : tmp_2) <= 16)? 16 : 0x800 - (tmp_27? 0 : tmp_2));
                    gettimeofday(&v1, NULL);
                    v21 = v18;
                    v22 = &v1;
                    for (v23 = v0; v23 != 0; v22 = &v22[v24])
                    {
                        v23 -= 1;
                        *(v21) = v1;
                        v21 = &v21[v24];
                    }
                    if (v19 <= 2047)
                    {
                        v25 = (!(0x800 - rbp<8> <= 4)? 4 : 0x800 - rbp<8>);
                        v27 = &v1;
                        v1 = getpid();
                        v28 = v25;
                        v12 = v25 + v19;
                        for (v29 = (char *)&v6[4] + v19; v28 != 0; v27 = &v27[v24])
                        {
                            v28 -= 1;
                            *(v29) = v1;
                            v29 = &v29[v24];
                        }
                    }
                }
            }
            else
            {
                v12 = 20;
                gettimeofday(&v1, NULL);
                *((int128_t *)(v11 + 32)) = *((int128_t *)&v1);
                v1 = getpid();
                *((unsigned int *)(v11 + 48)) = v1;
            }
            if ((unsigned int)v8 < 0 || v16 <= 2047 && v12 <= 2047 && v19 <= 2047)
            {
                v30 = (!(0x800 - r14<8> <= 4)? 4 : 0x800 - r14<8>);
                v32 = (char *)&v6[4] + v12;
                v1 = getppid();
                if ((unsigned int)v30 != 0)
                {
                    v34 = 0;
                    do
                    {
                        v35 = v34;
                        v34 = (unsigned int)v34 + 1;
                        *((char *)(v32 + v35)) = v1;
                    }
                    while ((unsigned int)v34 < (unsigned int)v30);
                }
                v36 = v30 + v12;
                if (v36 <= 2047)
                {
                    v37 = (!(0x800 - rbp<8> <= 4)? 4 : 0x800 - rbp<8>);
                    v39 = (char *)&v6[4] + v36;
                    v1 = getuid();
                    if ((unsigned int)v37 != 0)
                    {
                        v41 = 0;
                        do
                        {
                            v42 = v41;
                            v41 = (unsigned int)v41 + 1;
                            *((char *)(v39 + v42)) = v1;
                        }
                        while ((unsigned int)v41 < (unsigned int)v37);
                    }
                    v43 = v36 + v37;
                    if (v43 <= 2047)
                    {
                        v45 = (char *)&v6[4] + v43;
                        v1 = getgid();
                        if ((unsigned int)(!(0x800 - v43 <= 4)? 4 : 0x800 - v43) != 0)
                        {
                            v47 = 0;
                            do
                            {
                                v48 = v47;
                                v47 = (unsigned int)v47 + 1;
                                *((char *)(v45 + v48)) = v1;
                            }
                            while ((unsigned int)v47 < (!(0x800 - v43 <= 4)? 4 : 0x800 - v43));
                        }
                    }
                }
            }
            sub_414190();
        }
    }
    else
    {
        v11 = (unsigned int)sub_4112e0();
        *((long long *)v11) = 0;
        *((char **)(v11 + 8)) = &g_4139c0;
        *((long long *)(v11 + 16)) = 0;
    }
    v50 = v11;
    return v50;
}

int sub_405990() { crash_skku_timeout;
}
extern unsigned int g_41ab30;
extern unsigned int g_41ab40;
extern unsigned int g_61f468;

int sub_4139c0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned long v3;  // rdi
    unsigned long long v4;  // rbp
    unsigned int *v5;  // rbx
    char *v6;  // rax

    v0 = v2;
    if (v3 == 0)
    {
        abort(); /* do not return */
    }
    v4 = (unsigned int)sub_40ec50();
    v5 = __errno_location();
    if (*(v5) != 0)
    {
        v6 = dcgettext(0x0, 0x41ab40, 0x5);
    }
    else
    {
        v6 = dcgettext(0x0, 0x41ab30, 0x5);
    }
    error(g_61f468, *(v5), v6);
}

extern unsigned long long g_61f4e8;

int sub_403cfb()
{
    unsigned long long v1;  // rax

    v1 = &g_61f4e8;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

extern unsigned int g_418c1a;
extern unsigned long long stdout[7];

int sub_404d70()
{
    unsigned long v2;  // rdx
    unsigned long long v3;  // rbx
    char *v5;  // rax

    __printf_chk(0x1, "%s -> %s", sub_40e920(), sub_40e920());
    if (v2 != 0)
    {
        v3 = (unsigned int)sub_40ea00();
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x418c1a, 0x5));
    }
    v5 = stdout[5];
    if (stdout[5] < stdout[6])
    {
        stdout[5] = stdout[5] + 1;
        *(v5) = 10;
        return v5;
    }
}

int sub_40b360()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_40a910()
{
    char *v1;  // rsi

    if (v1 == 0 || *(v1) == 0)
    {
        return 2;
    }
}

int sub_40ac60()
{
    unsigned long long v1;  // rax

    v1 = sub_40ace0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_411530(); /* do not return */
}

extern int512_t g_621ae0;

int sub_40e690()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_621ae0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_40d1d0();
}

int sub_409930()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT *(v1)) % v2 >> 64;
}

int sub_40b0e0()
{
    char v0;  // [bp-0x39]
    char *v2;  // rsi
    char *v3;  // r12
    unsigned long long v4;  // r14
    unsigned long long v5;  // rbx
    unsigned long v6;  // rdi
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rax
    unsigned long long v10;  // r15
    char *v11;  // rax
    unsigned long v12;  // rdi
    unsigned long long *v13;  // rdx
    unsigned long long v14;  // rax
    char v15;  // al

    v3 = v2;
    v4 = (unsigned int)sub_40ad40();
    v5 = (unsigned int)sub_40ada0();
    v7 = v4 - v6 + v5;
    if (v5 != 0)
    {
        v5 = (char)(*((char *)(v4 + v5 - 1)) != 47);
    }
    v0 = *(v3);
    if (*(v3) == 47)
    {
        do
        {
            v3 = &v3[1];
        }
        while (*(v3) == 47);
    }
    v8 = strlen(v3);
    v10 = malloc(v5 + v7 + 1 + v8);
    if (v8 != 0)
    {
        v11 = mempcpy(v8, v6, v7);
        *(v11) = 47;
        v12 = &v11[v5];
        if (v13 != 0)
        {
            v14 = 0;
            v15 = v0 == 47;
            *(v13) = v12 - rax<8>;
        }
        *((char *)(unsigned long long)mempcpy(v12, (unsigned int)v3, v8)) = 0;
    }
    return v10;
}

int sub_40f0d0()
{
}

int sub_40f0e0() { crash_skku;
}
extern unsigned int g_41a58f;
extern unsigned int g_61f468;

int sub_411530()
{
    dcgettext(0x0, 0x41a58f, 0x5);
    error(g_61f468, 0x0, "%s");
}

int sub_404bd0()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned int v2;  // esi
    unsigned long long v4;  // rbx
    unsigned long long v6;  // rbx
    unsigned int v7;  // edi
    unsigned long long v9;  // rbx
    char v10;  // al

    if ((v2 & 0xf000) == 0xa000)
    {
        return 1;
    }
    v0 = v4;
    if (sub_4112a0() != 0)
    {
        v6 = v0;
        return 1;
    }
    v9 = v0;
    v10 = euidaccess(v7, 0x2) == 0;
    return rax<8>;
}

int sub_41155c()
{
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[26];
    char field_1a;
} struct_0;

int sub_405740()
{
    unsigned int *v1;  // rax
    struct_0 *v2;  // rdi

    v1 = __errno_location();
    v1 = *(v1) == 1 | *(v1) == 22;
    if (*(v1) == 22 || *(v1) == 1)
    {
        v1 = (unsigned long long)((unsigned int)v2->field_1a ^ 1);
    }
    return v1;
}

int sub_40fca0()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx
    unsigned int v3;  // ecx

    v0 = v2;
    if (v3 <= 2)
    {
        return sub_40fb10();
    }
    sub_40faf0(); /* do not return */
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[8];
    unsigned int field_c;
    char padding_10[7];
    char field_17;
    char padding_18[20];
    char field_2c;
    char padding_2d[7];
    unsigned int field_34;
} struct_0;

extern unsigned long long g_621988;
extern unsigned long long g_621990;

int sub_409810()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    char v4;  // [bp-0x9]
    struct_0 *v6;  // rcx
    unsigned long v7;  // r9
    unsigned long v8;  // r8
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rsi

    if (!(v6 != 0))
    {
        __assert_fail(); /* do not return */
    }
    else if (!(v6->field_0 <= 3))
    {
        __assert_fail(); /* do not return */
    }
    else if (!((unsigned int)((unsigned long long)v6->field_c - 1) <= 2))
    {
        __assert_fail(); /* do not return */
    }
    else if (v6->field_34 <= 2)
    {
        if (v6->field_17 != 0 && v6->field_2c != 0)
        {
            __assert_fail(); /* do not return */
        }
        if (v6->field_2c == 0 || v6->field_17 == 0)
        {
            if (v6->field_c != 2 && v6->field_34 == 2)
            {
                __assert_fail(); /* do not return */
            }
            if (v6->field_c == 2 || v6->field_34 != 2)
            {
                v4 = 0;
                v3 = v7;
                v2 = v8;
                g_621990 = v9;
                g_621988 = v10;
                v1 = stack_base + -9;
                v0 = 1;
                return sub_405990();
            }
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_40b6c0()
{
    struct_0 *v1;  // rdi

    return v1->field_20;
}

int sub_4104d0()
{
    void tmp_12;  // tmp #12
    char v0;  // [bp-0x19]
    unsigned long long v2[13];  // rdi
    unsigned long long v3[13];  // rbp
    unsigned long long *v4[4];  // rsi
    unsigned long long v5[4];  // rbx
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx

    v3 = v2;
    v5 = *(v4);
    v9 = (*(v4))[3];
    if ((*(v4))[1] != 1073741822)
    {
    }
    else
    {
        v8 = 1;
        if ((*(v4))[3] != 1073741822)
        {
            v6 = v2[10];
            *((unsigned long long [13])&(*(v4))[0]) = v2[9];
            v5[1] = v6;
        }
    }
    if ((*(v4))[1] == 1073741823)
    {
        if ((*(v4))[3] != 1073741823)
        {
            sub_412f80();
            v9 = v5[3];
        }
        else
        {
            *(v4) = 0;
            v8 = 0;
        }
    }
    if (((*(v4))[3] == 1073741822 || (*(v4))[1] == 1073741823) && ((*(v4))[1] == 1073741823 || (*(v4))[1] != 1073741822) && (v5[3] == 1073741822 || (*(v4))[1] != 1073741823) && ((*(v4))[1] != 1073741823 || (*(v4))[3] != 1073741823))
    {
        tmp_12 = v3[12];
        *((unsigned long long [13])&(*(v4))[2]) = v3[11];
        v5[3] = tmp_12;
        v8 = 0;
    }
    if (((*(v4))[1] == 1073741823 || (*(v4))[3] != 1073741822) && ((*(v4))[3] != 1073741822 || v5[3] != 1073741822) && ((*(v4))[3] != 1073741822 || (*(v4))[3] != 1073741823) && ((*(v4))[1] == 1073741822 || (*(v4))[1] != 1073741823 || v5[3] != 1073741822) && ((*(v4))[1] == 1073741822 || (*(v4))[1] != 1073741823 || (*(v4))[3] != 1073741823))
    {
        v8 = 0;
        if (v9 == 1073741823)
        {
            v0 = 0;
            sub_412f80();
            return (unsigned long long)v0;
        }
    }
    if (v9 != 1073741823 || (*(v4))[1] == 1073741822 && (*(v4))[3] == 1073741822 || (*(v4))[1] == 1073741823 && v5[3] == 1073741822 || (*(v4))[1] == 1073741823 && (*(v4))[3] == 1073741823 || (*(v4))[3] == 1073741822 && (*(v4))[1] != 1073741823)
    {
        return v8;
    }
}

int sub_412ed0()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // r14
    void *v3;  // rdx
    void *v4;  // rdi
    unsigned int v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long *v7;  // rbx
    void *v8;  // rbp
    unsigned long long v9;  // rax

    v2 = *(v1);
    if (*(v1) != 0)
    {
        v7 = &v1[1];
        v8 = v3;
        do
        {
            v6 = memcmp(v4, v8, v5);
            if (v6 == 0)
            {
                break;
            }
            v2 = *(v7);
            v8 += v5;
            v7 = &v7[1];
        }
        while (v2 != 0);
    }
    v9 = v2;
    return v9;
}

extern unsigned long long g_61f458;
extern unsigned long long g_621580;
extern unsigned long long g_621980;

int sub_404c20()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rbx
    unsigned long v4;  // rbp
    unsigned long long v5;  // rax

    v2 = v1;
    if (g_621980 == 0)
    {
        if (g_621980 != 0)
        {
            g_621980 = calloc(g_61f458, 0x1);
        }
        else
        {
            g_621980 = &g_621580;
            g_61f458 = 0x400;
        }
    }
    if (v1 != 0)
    {
        while (true)
        {
            v4 = (g_61f458 <= v2? g_61f458 : v2);
            v5 = sub_40b240();
            if (v5 == v4)
            {
                v2 -= v5;
                if (v2 == v5)
                {
                    break;
                }
            }
            else
            {
                return 0;
            }
        }
    }
    return 1;
}

int sub_40b370()
{
    unsigned long v1;  // rax

    return v1;
}

extern unsigned long long g_41aa3f;

int sub_4129f0()
{
    char v0;  // [bp-0x1c]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long v4;  // rdx
    char *|unsigned long long v5;  // rbp
    unsigned long long v6;  // rdi
    unsigned int *v7;  // r12
    unsigned long long v9;  // rax

    if (v2 != 0)
    {
        v3 = -2;
        if (v4 != 0)
        {
            v7 = v6;
            v5 = v2;
        }
    }
    else
    {
        v5 = &g_41aa3f;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_412fc0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_40ae60()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long|unsigned long long v3;  // [bp-0x8]
    unsigned long long v5[3];  // rdi
    unsigned long v6;  // rax
    unsigned long long v7;  // r13
    unsigned long long v8;  // r12
    unsigned long long v9;  // rdx
    unsigned long long v10[2];  // rbp
    unsigned long long v11;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    unsigned long long *v18;  // rdi
    void *v19;  // rdi

    if (v5 != 0)
    {
        v3 = v7;
        v2 = v8;
        v1 = stack_base + 0;
        v10 = v9;
        v0 = v11;
        v5[0] = (unsigned int)sub_411510();
        *((unsigned long long [2])&v5[1]) = v10[1];
        *((unsigned long long [2])&v5[2]) = *(v10);
        v13 = sub_40c2f0();
        if (!(v13 != 0))
        {
            sub_411530(); /* do not return */
        }
        else if (v5 != v13)
        {
            v5 = (unsigned long long)(unsigned int)sub_4112e0();
            v3 = v0;
            v19 = *(v18);
            free(v19);
        }
        else
        {
            v15 = v0;
            v16 = v2;
            v17 = v3;
            return v13;
        }
    }
    else
    {
        return v6;
    }
}

int init()
{
    unsigned long long v1;  // rdx
    unsigned long long v3;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rsi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx

    v10 = sub_4027c8();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6417968 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_412fc0()
{
    unsigned int v1;  // edi
    unsigned long v3;  // rsi
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long v6;  // d
    char *v7;  // rdi
    char *v8;  // rsi
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rax
    unsigned long long v11;  // cc_dep1
    char *v12;  // rdi
    unsigned long long v13;  // rcx
    char v14;  // cc_dep1
    char v15;  // cc_dep2

    v10 = 1;
    if (v3 != 0)
    {
        v9 = 2;
        v7 = "C";
        v3 = setlocale(v1, 0x0);
        while (v9 != 0)
        {
            v9 -= 1;
            v4 = *(v8);
            v5 = *(v7);
            v7 = &v7[v6];
            v8 = &v8[v6];
            break;
        }
        v10 = 0;
        v11 = (v4 > v5) - 0 - (v4 < v5);
        if ((char)v11 != 0)
        {
            v12 = "POSIX";
            v13 = 6;
            while (v13 != 0)
            {
                v13 -= 1;
                v14 = *(v8);
                v15 = *(v12);
                v12 = &v12[v6];
                v8 = &v8[v6];
                break;
            }
            return 0;
        }
    }
    if (v3 == 0 || (char)v11 == 0)
    {
        return v10;
    }
}

int sub_4114b0()
{
    unsigned int v1;  // rdi
    unsigned int v2;  // rsi
    unsigned long long v3;  // rax

    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (rdi<8> Mull rsi<8>)), 0x0<64>, cc_ndep<8>)) && [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rdi<8>, rsi<8>, cc_ndep<8>) == 0)
    {
        v3 = calloc(v1, v2);
        if (v3 != 0)
        {
            return v3;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (rdi<8> Mull rsi<8>)), 0x0<64>, cc_ndep<8>) || v3 == 0 || [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rdi<8>, rsi<8>, cc_ndep<8>) != 0)
    {
        sub_411530(); /* do not return */
    }
}

int sub_40a8b0()
{
}

int sub_40ea10()
{
}

int sub_40ebc0()
{
}

int sub_404cd0()
{
    unsigned long v2;  // rax
    unsigned int v3;  // eax
    unsigned long long v4;  // rax

    if ((unsigned int)v2 < 0)
    {
        v3 = *(__errno_location());
        if (v3 == 95 || v3 == 38)
        {
            return 0;
        }
    }
    if ((unsigned int)v2 >= 0 || v3 != 95 && v3 != 38)
    {
        v2 = fallocate();
        return v4;
    }
}

int sub_4143e0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_411b50() != 0)
        {
            v8 = fclose(v2);
            if (v0 != 0)
            {
                *(__errno_location()) = v0;
                v8 = -18446744069414584321;
            }
            return v8;
        }
    }
}

extern unsigned long long *g_61f4b8;
extern unsigned long long g_61f4c0;
extern unsigned long long g_61f4c8;
extern unsigned int g_61f4d0;
extern unsigned long long g_6219e0;

int sub_40e810()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_61f4d0;
    if (g_61f4d0 > 1)
    {
        v2 = &g_61f4b8[3];
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_61f4b8[2 * (unsigned long long)(g_61f4d0 - 2) + 5])
            {
                break;
            }
        }
    }
    if (g_61f4b8[1] != 6429152)
    {
        v1 = free(g_61f4b8[1]);
        g_61f4c0 = 0x100;
        g_61f4c8 = &g_6219e0;
    }
    if (g_61f4b8 != 6419648)
    {
        v1 = free(g_61f4b8);
        g_61f4b8 = &g_61f4c0;
    }
    g_61f4d0 = 1;
    return v1;
}

extern unsigned long long g_61ee30;

int sub_416fe8()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_61ee30;
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

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_40b550()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r14
    unsigned long long v3[4];  // rsi
    unsigned long long v4[4];  // r13
    struct_0 *v5;  // rdi
    unsigned long long v6[10];  // rbp
    unsigned long long v7;  // r15
    unsigned long long v8[2];  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10[2];  // rbx
    unsigned long long v11;  // r15
    unsigned long long v12[2];  // r12
    unsigned long long v13[2];  // rbx
    unsigned long long v14[2];  // rax
    unsigned long long v15;  // rdx

    v2 = v1;
    v4 = v3;
    v6 = v5;
    v12 = *(v3);
    if (*(v3) < v3[1])
    {
        while (true)
        {
            v11 = *(v12);
            if (*(v12) != 0)
            {
                v10 = v12[1];
                if (v12[1] != 0)
                {
                    while (true)
                    {
                        v7 = *(v10);
                        v8 = sub_40b380();
                        v9 = v10[1];
                        if (*(v8) != 0)
                        {
                            v10[1] = v8[1];
                            v8[1] = v10;
                            v10 = v9;
                            if (v9 == 0)
                            {
                                break;
                            }
                        }
                        else
                        {
                            v8[0] = v7;
                            v6[3] = v6[3] + 1;
                            v10[0] = 0;
                            *((unsigned long long [10])&v10[1]) = v6[9];
                            v6[9] = v10;
                            if (v10 == 0)
                            {
                                break;
                            }
                        }
                    }
                    v11 = *(v12);
                }
                v12[1] = 0;
                if (v2 == 0)
                {
                    v13 = (unsigned long long)(unsigned int)sub_40b380();
                    if (*(v13) != 0)
                    {
                        v14 = v6[9];
                        if (v6[9] != 0)
                        {
                            v6[9] = v5->field_48->field_8;
                        }
                        else
                        {
                            v14 = malloc(0x10);
                            if (v14 == 0)
                            {
                                return 0;
                            }
                        }
                        if (v14 != 0 || v6[9] != 0)
                        {
                            v15 = v13[1];
                            v14[0] = v11;
                            v14[1] = v15;
                            v13[1] = v14;
                        }
                    }
                    else
                    {
                        v13[0] = v11;
                        v6[3] = v6[3] + 1;
                    }
                    if (v14 != 0)
                    {
                        v12[0] = 0;
                        v12 = &v12[2];
                        v4[3] = v4[3] - 1;
                        if (v4[1] <= v12)
                        {
                            break;
                        }
                    }
                }
            }
            if (*(v12) == 0 || v2 != 0)
            {
                v12 = &v12[2];
                if (v3[1] <= v12)
                {
                    break;
                }
            }
        }
    }
    return 1;
}

int sub_40ef80()
{
    char v0;  // [bp-0x158]
    unsigned long v1;  // [bp-0x150]
    char v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long long|char v5;  // rbx
    unsigned long v8;  // r13
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    void *v11;  // rbp
    void *v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax

    v5 = 0;
    v8 = (unsigned int)sub_40ada0();
    v9 = sub_40ada0();
    if (v8 == v9)
    {
        v10 = memcmp((unsigned long long)(unsigned int)sub_40ad40(), (unsigned long long)(unsigned int)sub_40ad40(), v8);
        if (v10 == 0)
        {
            v11 = (unsigned long long)(unsigned int)sub_40ac60();
            v12 = (unsigned long long)(unsigned int)sub_40ac60();
            v13 = __xstat(0x1, (unsigned int)v11, (unsigned int)&v0);
            if (v13 == 0)
            {
                v14 = __xstat(0x1, (unsigned int)v12, (unsigned int)&v2);
                if (v14 == 0)
                {
                    v5 = 0;
                    if (v1 == v3)
                    {
                        v5 = *((long long *)&v0) == *((long long *)&v2);
                    }
                    free(v11);
                    free(v12);
                }
                else
                {
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            else
            {
                error(0x1, *(__errno_location()), "%s");
            }
        }
    }
    if (v10 != 0 || v8 != v9 || v14 == 0 && v13 == 0)
    {
        v15 = v5;
        return v15;
    }
}

extern unsigned int g_61f450;

int sub_405960()
{
    unsigned int v1;  // esi

    if (g_61f450 != -1)
    {
        return g_61f450;
    }
    g_61f450 = umask(0x0, v1);
    umask(g_61f450, v1);
    return g_61f450;
}

int sub_40ac80()
{
    unsigned long long v1;  // rbp
    char *v2;  // rdi
    char *v3;  // rbx
    char v4;  // bpl
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx

    v1 = 0;
    v3 = v2;
    v4 = *(v2) == 47;
    v5 = sub_40ad40();
    v6 = v5 + -0x1 * v3;
    if (v5 + -0x1 * v3 > rbp<8>)
    {
        if (*((char *)(v5 - 1)) == 47)
        {
            for (v8 = v6 - 1; rbp<8> != v8; v8 = v7)
            {
                v7 = v8 - 1;
                if (v3[v8 + -1] != 47)
                {
                    break;
                }
            }
            return v8;
        }
    }
    if (v5 + -0x1 * v3 <= rbp<8> || *((char *)(v5 - 1)) != 47)
    {
        return v6;
    }
}

int sub_40ad40()
{
    char *v1;  // rdi
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rsi
    char *v4;  // rcx
    char *v5;  // rax

    v2 = *(v1);
    v5 = v1;
    if (*(v1) == 47)
    {
        do
        {
            v5 = &v5[1];
            v2 = *(v5);
        }
        while (*(v5) == 47);
    }
    if (v2 != 0)
    {
        v4 = v5;
        v3 = 0;
        while (true)
        {
            if (v2 != 47)
            {
                if (v3 != 0)
                {
                    v5 = v4;
                    v3 = 0;
                }
                v4 = &v4[1];
                v2 = *(v4);
                if ((char)v2 == 0)
                {
                    break;
                }
            }
            else
            {
                v4 = &v4[1];
                v2 = *(v4);
                v3 = 1;
                if ((char)v2 == 0)
                {
                    break;
                }
            }
        }
    }
    return v5;
}

typedef struct struct_0 {
    char padding_0[64];
    unsigned long long field_40;
} struct_0;

int sub_4056d0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = sub_40bb50();
    v2->field_40 = v1;
    return v1;
}

int sub_40e800()
{
}

int sub_40e8b0()
{
}

int sub_40cdf0()
{
    char v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x80]
    unsigned int v3;  // edi
    unsigned long long v5;  // rax

    v5 = 0;
    if (__xstat(0x1, v3, (unsigned int)&v0) == 0)
    {
        v5 = sub_4112e0();
        *((short *)v5) = 317;
        *((int *)(v5 + 4)) = 4095;
        *((unsigned int *)(v5 + 8)) = v1;
        *((int *)(v5 + 12)) = 4095;
        *((char *)(v5 + 17)) = 0;
    }
    return v5;
}

int sub_40d1d0()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned int *|unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long|unsigned long long|char v4;  // [bp-0xc0]
    unsigned long|unsigned long long|char v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long|char v9;  // [bp-0x98]
    unsigned long|unsigned long long v10;  // [bp-0x90]
    unsigned long long|unsigned int v11;  // [bp-0x88]
    unsigned long long|unsigned int v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long v15;  // [bp-0x68]
    unsigned int v16;  // [bp-0x60]
    char v17;  // [bp-0x5c]
    unsigned long long|char v18;  // [bp-0x5b]
    unsigned long long v19;  // [bp-0x5a]
    char v20;  // [bp-0x59]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    char v23;  // [bp-0x44]
    unsigned long long v24;  // [bp-0x40]
    unsigned int *v25;  // [bp+0x8]
    unsigned long long v26;  // [bp+0x10]
    unsigned long long v27;  // [bp+0x18]
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r15
    unsigned long v30;  // r8
    unsigned long long v31;  // rcx
    unsigned long v32;  // r9
    unsigned long|unsigned long long|char v33;  // r10
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long long v39;  // r11
    unsigned long|unsigned long long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned long|unsigned long long|unsigned short v46;  // rax
    unsigned long long v47;  // rcx
    unsigned long long v48;  // r13
    unsigned long long v49;  // r13
    unsigned long long v50;  // r13
    char v51;  // r13b
    unsigned long long v52;  // r13
    unsigned long long v53;  // rdx
    unsigned long long v54;  // rbx
    unsigned long long v55;  // r13
    unsigned long long v56;  // r15
    unsigned long long v57;  // rbp
    unsigned long long v58;  // r14
    char *v59;  // rax
    unsigned long long v60;  // rcx
    unsigned long long v62;  // r13
    unsigned long long v63;  // r13
    unsigned long long v64;  // rcx
    char v65;  // al
    char v66;  // al
    unsigned int v67;  // eax
    char v68;  // al
    unsigned int v70;  // eax
    char v71;  // al
    unsigned long v72;  // rdx
    unsigned long long v73;  // rax
    char v74;  // al
    unsigned long long v75;  // rdx
    unsigned long long v76;  // rbx
    unsigned long long|unsigned int v77;  // rsi
    unsigned long long v78;  // r13
    unsigned long long v79;  // r14
    unsigned long long v80;  // r12
    unsigned int v81;  // r13d
    unsigned long long v82;  // r11
    char v83;  // dl
    unsigned long long v84;  // rax
    unsigned long long v85;  // cc_dep1
    unsigned long long v86;  // dl
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax
    unsigned long long|char v89;  // rdx
    unsigned long long v90;  // rdx
    unsigned long long v91;  // rax
    unsigned long long v92;  // rax

    v29 = v28;
    v79 = v77;
    v78 = v30;
    v7 = v89;
    v4 = v31;
    v16 = v32;
    v15 = __ctype_get_mb_cur_max();
    v17 = ((unsigned int)v32 & 2) != 0;
    switch ((unsigned int)v30)
    {
    case 0:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 0;
        v8 = 0;
        v13 = 0;
    case 1:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v78 = 2;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 0;
        v8 = 1;
        v13 = "'";
    case 2:
        if (((char)v32 & 2) == 0)
        {
            v4 = 0;
            if (v77 == 0)
            {
                v6 = 1;
                v33 = 0;
                v76 = 1;
                v78 = 2;
                v14 = 0;
                v18 = 0;
                v17 = 0;
                v8 = 1;
                v13 = "'";
            }
            else
            {
                v84 = 0;
                v6 = 1;
                v14 = 0;
            }
        }
        else
        {
            v6 = 1;
            v33 = 0;
            v76 = 0;
            v18 = 0;
            v14 = 0;
            v17 = 1;
            v4 = 0;
            v8 = 1;
            v13 = "'";
        }
    case 3:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v78 = 2;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "'";
    case 4:
        if (((char)v32 & 2) == 0)
        {
            v4 = 1;
        }
    case 5:
        if (((char)v32 & 2) == 0)
        {
            if (v77 != 0)
            {
                *((char *)v28) = 34;
                v33 = 0;
                v6 = 1;
                v18 = 0;
                v14 = 0;
            }
            else
            {
                v14 = 0;
                v33 = 0;
                v6 = 1;
                v18 = 0;
            }
            v17 = 0;
            v76 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
        else
        {
            v6 = 1;
            v33 = 0;
            v76 = 0;
            v18 = 0;
            v14 = 0;
            v17 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
    case 6:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v78 = 5;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "\"";
    case 7:
        v6 = 1;
        v33 = 0;
        v76 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 1;
        v8 = 0;
        v13 = 0;
    case 8: case 9: case 10:
        if (v30 != 10)
        {
            v4 = v4;
            v26 = (unsigned int)sub_40d0d0();
            v27 = (unsigned int)sub_40d0d0();
        }
        v76 = 0;
        if (((char)v32 & 2) == 0)
        {
            v78 = (char)*((char *)v26);
            if (*((char *)v26) != 0)
            {
                do
                {
                    if (v77 > v76)
                    {
                        *((unsigned long long *)(v28 + v76)) = v78;
                    }
                    v76 += 1;
                    v78 = (char)*((char *)(v26 + v76));
                }
                while ((char)v78 != 0);
            }
        }
        v5 = v82;
        v6 = 1;
        v8 = strlen(v27);
        v18 = 0;
        v13 = v27;
        v14 = 0;
        v4 = 1;
    default:
        abort(); /* do not return */
    }
    v82 = v4;
    while (true)
    {
        v38 = v82;
        v80 = 0;
        v39 = v78;
        while (true)
        {
            v78 = (char)(v38 != v80);
            if (v38 == -1)
            {
                v78 = (char)(*((char *)(v7 + v80)) != 0);
            }
            if (v78 != 0)
            {
                v37 = v7 + v80;
                v5 = (unsigned int)v39 != 2 & v4;
                if (((unsigned int)v39 != 2 & v4) != 0)
                {
                    v78 = v8;
                    if (v8 != 0)
                    {
                        v34 = v80 + v78;
                        if (v38 == -1 && v78 > 1)
                        {
                            v11 = v39;
                            v10 = v33;
                            v9 = v37;
                            v38 = strlen(v7);
                        }
                        if (v34 <= v38)
                        {
                            v12 = v39;
                            v11 = v38;
                            v10 = v33;
                            v9 = v37;
                            v78 = memcmp(v37, v13, v8);
                            v37 = v9;
                            v33 = (char)v10;
                            v38 = v11;
                            v39 = v12;
                            if (v17 == 0 && v78 == 0)
                            {
                                v40 = (char)*((char *)v37);
                                switch (*((char *)v37))
                                {
                                case 0:
                                    v89 = (char)((unsigned int)v39 == 2);
                                    v78 = (unsigned int)(0 ^ 1);
                                    v78 = (char)(0 ^ 1) & (unsigned int)v39 == 2;
                                    if (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0)
                                    {
                                        if (v77 > v76)
                                        {
                                            *((char *)(v28 + v76)) = 39;
                                        }
                                        if (v77 > v76 + 1)
                                        {
                                            *((char *)(v28 + v76 + 1)) = 36;
                                        }
                                        if (v77 > v76 + 2)
                                        {
                                            *((char *)(v28 + v76 + 2)) = 39;
                                        }
                                        v47 = v76 + 3;
                                        v76 += 4;
                                        v33 = rax<8>;
                                        v78 = 0;
                                        v40 = 48;
                                    }
                                    else
                                    {
                                        v47 = v76;
                                        v78 = 0;
                                        v76 = v47 + 1;
                                        v78 = v78;
                                        v40 = 48;
                                        v78 = 0;
                                        v40 = 48;
                                        if (1 < v38)
                                        {
                                            v9 = *((char *)(v7 + 0 + 1));
                                            if (((unsigned int)(char)*((char *)(v7 + 0 + 1)) - 48 & 255) <= 9)
                                            {
                                                if (v77 > v76)
                                                {
                                                    *((char *)(v28 + v76)) = 48;
                                                }
                                                if (v77 > v47 + 2)
                                                {
                                                    *((char *)(v28 + v47 + 2)) = 48;
                                                }
                                                v76 = v47 + 3;
                                                v40 = 48;
                                            }
                                        }
                                    }
                                    if ((((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) == 0 || v77 > v76 + 3) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0 || v77 > v76))
                                    {
                                        *((char *)(v28 + v47)) = 92;
                                        v33 = v78;
                                    }
                                case 7:
                                    v40 = 97;
                                case 8:
                                    v89 = 0;
                                    v78 = 0;
                                    v40 = 98;
                                case 13:
                                    v40 = 13;
                                    v45 = 114;
                                    v89 = (unsigned int)v39 == 2;
                                case 32:
                                    v41 = v5;
                                    v40 = 32;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v89 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v41 = v5;
                                    v48 = v5;
                                    v5 = v41;
                                    v78 = 0;
                                case 92:
                                    v44 = v4;
                                    v40 = 92;
                                    v45 = 92;
                                    v89 = v4 & v17 & v8 != 0;
                                    if ((v4 & v17 & v8 != 0) != 0)
                                    {
                                        v80 = 1;
                                        v46 = 0;
                                        v78 = 0;
                                    }
                                }
                            }
                        }
                    }
                    if (v8 == 0 || v34 > v38 || v78 != 0)
                    {
                        v40 = (char)*((char *)v37);
                        switch (*((char *)v37))
                        {
                        case 0:
                            if (v17 == 0)
                            {
                                v5 = 0;
                            }
                            else
                            {
                                v4 = (unsigned int)v39 == 2;
                            }
                        case 7:
                            v40 = 97;
                            break;
                            if (v17 == 0)
                            {
                                v78 = 0;
                            }
                            else
                            {
                                v87 = 0;
                            }
                        case 8:
                            v40 = 98;
                        case 9:
                            v40 = 116;
                        case 10:
                            v40 = 110;
                            v89 = 0;
                            v78 = 0;
                        case 11:
                            v40 = 118;
                            break;
                        case 12:
                            v40 = 102;
                            break;
                        case 13:
                            v5 = 0;
                        case 32:
                            v41 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v49 = v5;
                            v89 = 0;
                            v5 = v42;
                        case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                            v41 = 0;
                        case 39:
                            v5 = 0;
                        case 63:
                            v5 = 0;
                        case 92:
                            v5 = 0;
                        case 123: case 125:
                            v5 = 0;
                        default:
                            v5 = 0;
                        }
                    }
                }
                else
                {
                    v40 = (char)*((char *)v37);
                    switch (*((char *)v37))
                    {
                    case 0:
                        if (v4 == 0)
                        {
                            v5 = 0;
                            v89 = (char)((unsigned int)v39 == 2);
                            v36 = 0;
                            v40 = 0;
                            break;
                            v80 += 1;
                        }
                    case 7:
                        v40 = 7;
                        v45 = 97;
                        v89 = (unsigned int)v39 == 2;
                    case 8:
                        v40 = 8;
                        v45 = 98;
                        v89 = (unsigned int)v39 == 2;
                    case 9:
                        v40 = 9;
                        v45 = 116;
                        v89 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                        if ((v17 & (unsigned int)v39 == 2) == 0)
                        {
                            v40 = v45;
                            v78 = 0;
                        }
                    case 10:
                        v40 = 10;
                        v45 = 110;
                    case 11:
                        v40 = 11;
                        v45 = 118;
                        v89 = (unsigned int)v39 == 2;
                    case 12:
                        v40 = 12;
                        v45 = 102;
                        v89 = (unsigned int)v39 == 2;
                    case 13:
                        v40 = 13;
                        v45 = 114;
                    case 32:
                        v40 = 32;
                        v89 = (char)((unsigned int)v39 == 2);
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (char)((unsigned int)v39 == 2);
                        v35 = 0;
                    case 35: case 126:
                        v89 = (unsigned int)v39 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v89 = (char)((unsigned int)v39 == 2);
                        break;
                    case 39:
                        if ((unsigned int)v39 == 2)
                        {
                            if (v77 != 0)
                            {
                                v53 = 0;
                            }
                            if (v77 == 0 || v14 != 0)
                            {
                                if (v77 > v76)
                                {
                                    *((char *)(v28 + v76)) = 39;
                                }
                                if (v77 > v76 + 1)
                                {
                                    *((char *)(v28 + v76 + 1)) = 92;
                                }
                                if (v77 > v76 + 2)
                                {
                                    v53 = v77;
                                    *((char *)(v28 + v76 + 2)) = 39;
                                    v79 = v14;
                                }
                                else
                                {
                                    v53 = v77;
                                    v79 = v14;
                                }
                            }
                            v18 = v78;
                            v76 += 3;
                            v78 = 0;
                            v33 = 0;
                            v14 = v79;
                            v40 = 39;
                            v79 = v53;
                        }
                        else
                        {
                            v18 = v78;
                            v89 = 0;
                            v40 = 39;
                            break;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            v78 = 0;
                            v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                            v89 = (unsigned int)v39 == 2;
                        }
                        if (v17 == 0)
                        {
                            v89 = (unsigned int)v39 == 2;
                            v80 += 1;
                            v46 = (v78 ^ 1) & (unsigned int)v33;
                            if (v46 != 0)
                            {
                                if (v79 > v76)
                                {
                                    *((char *)(v29 + v76)) = 39;
                                }
                                if (v79 > v76 + 1)
                                {
                                    *((char *)(v29 + v76 + 1)) = 39;
                                }
                                v76 += 2;
                                v33 = 0;
                            }
                            v73 = (unsigned int)v33 ^ 1;
                            v74 = (char)((unsigned int)v33 ^ 1) & v89;
                            if (((char)((unsigned int)v33 ^ 1) & v89) != 0)
                            {
                                if (v79 > v76)
                                {
                                    *((char *)(v29 + v76)) = 39;
                                }
                                if (v76 + 1 < v79)
                                {
                                    *((char *)(v29 + v76 + 1)) = 36;
                                }
                                v75 = v76 + 2;
                                if (v76 + 2 < v79)
                                {
                                    *((char *)(v29 + v76 + 2)) = 39;
                                }
                                v76 += 3;
                                v33 = rax<8>;
                            }
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 92;
                            }
                            v76 += 1;
                            v80 += 1;
                        }
                    case 63:
                        if ((unsigned int)v39 != 2)
                        {
                            v40 = 63;
                            v89 = (char)((unsigned int)v39 == 2);
                            v52 = 0;
                            break;
                            v77 = v7;
                            v40 = (char)*((char *)(v77 + 2));
                            v77 = 0x7000a38200000000;
                            v0 = 0x7000a38200000000;
                            v89 = 0;
                            v62 = 0;
                            v40 = 63;
                            break;
                            if (v79 > v76)
                            {
                                *((char *)(v28 + v76)) = 63;
                            }
                            if (v79 > v76 + 1)
                            {
                                *((char *)(v28 + v76 + 1)) = 34;
                            }
                            if (v79 > v76 + 2)
                            {
                                *((char *)(v28 + v76 + 2)) = 34;
                            }
                            if (v79 > v76 + 3)
                            {
                                *((char *)(v28 + v76 + 3)) = 63;
                            }
                            v76 += 4;
                            v89 = 0;
                            v78 = 0;
                            v80 = 2;
                            v78 = v78;
                            v78 = 0;
                        }
                        else
                        {
                            v78 = 0;
                            v78 = 0;
                            v40 = 63;
                        }
                    case 92:
                        if ((unsigned int)v39 == 2)
                        {
                            v80 += 1;
                            v46 = v33;
                            v78 = 0;
                            v40 = 92;
                        }
                    case 123: case 125:
                        v43 = v38 != 1;
                        if (v38 == -1)
                        {
                            v43 = *((char *)(v7 + 1)) != 0;
                        }
                        v89 = (unsigned int)v39 == 2;
                        if (v43 == 0)
                        {
                            break;
                        }
                        else
                        {
                            v55 = 0;
                            break;
                        }
                    }
                }
            }
            else
            {
                v81 = v39;
                v82 = v38;
                v83 = v81 == 2;
                if ((v81 == 2 & v17) == 0 || v76 != 0)
                {
                    v84 = (unsigned int)v17 ^ 1;
                    v85 = v83 & (char)((unsigned int)v17 ^ 1);
                    v86 = v83 & (char)((unsigned int)v17 ^ 1);
                    if ((char)v85 == 0)
                    {
                        v86 = v84;
                    }
                    else if (v18 != 0)
                    {
                        if (v6 == 0)
                        {
                            v84 = v79 == 0 & v14 != 0;
                            if ((v79 == 0 & v14 != 0) == 0)
                            {
                                v86 = v18;
                            }
                        }
                        else
                        {
                            v3 = v27;
                            v2 = v26;
                            v1 = v25;
                            v76 = (unsigned int)sub_40d1d0();
                        }
                    }
                }
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0)
            {
                v88 = v13;
                if (v86 != 0 && v13 != 0)
                {
                    v90 = (char)*((char *)v88);
                    if (*((char *)v88) != 0)
                    {
                        v91 = v88 - v76;
                        do
                        {
                            if (v79 > v76)
                            {
                                *((unsigned long long *)(v29 + v76)) = v90;
                            }
                            v76 += 1;
                            v90 = (char)*((char *)(v91 + v76));
                        }
                        while ((char)v90 != 0);
                    }
                }
                if (v79 > v76)
                {
                    *((char *)(v29 + v76)) = 0;
                }
            }
            if (v15 == 1)
            {
                v11 = v39;
                v10 = v38;
                v9 = v33;
                v46 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v40 * 2));
                tmp_38 = v46 & 0x4000;
                v46 &= 0x4000;
                v51 = (tmp_38 & 65535) != 0;
                v89 = (tmp_38 & 65535) == 0 & v4;
                if (v89 != 0)
                {
                    v89 = v4;
                    v78 = 0;
                }
            }
            else
            {
                v24 = 0;
                if (v38 == -1)
                {
                    v11 = v39;
                    v10 = v33;
                    v9 = v37;
                    v38 = strlen(v7);
                }
                v21 = v76;
                v22 = v37;
                v54 = 0;
                v19 = v33;
                *((unsigned long long *)&v20) = v40;
                v11 = v29;
                v12 = v79;
                v9 = v38;
                v10 = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_4129f0();
                    v58 = v46;
                    if (v46 != 0 && v46 != -2 && v46 != -1)
                    {
                        if ((int)v10 == 2 && v17 != 0 && v46 != 1)
                        {
                            v59 = v7 + v77 + 1;
                            v77 = v7 + v58 + v77;
                            while (true)
                            {
                                v60 = (unsigned int)*(v59) - 91;
                                if ((8589934635 & 1 << (v60 & 63)) == 0 || ((unsigned int)*(v59) - 91 & 255) > 33)
                                {
                                    v59 = &v59[1];
                                    if (v77 == v59)
                                    {
                                        break;
                                    }
                                }
                            }
                            if ((8589934635 & 1 << (v60 & 63)) == 0 || ((unsigned int)*(v59) - 91 & 255) > 33)
                            {
                                v78 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13<8>);
                                v54 += v58;
                                v46 = mbsinit((unsigned int)&v24);
                            }
                        }
                        v78 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13<8>);
                        v54 += v58;
                        v46 = mbsinit((unsigned int)&v24);
                    }
                    if (v46 == -1)
                    {
                        v28 = v54;
                        v40 = v20;
                        v76 = v21;
                        v78 = 0;
                        v33 = (char)v19;
                        v29 = v11;
                        v79 = v12;
                        v38 = v9;
                        v39 = (unsigned int)v10;
                        v89 = v4;
                    }
                    if (v46 == -2)
                    {
                        v38 = v9;
                        v77 = v56;
                        v46 = v54;
                        v28 = v54;
                        v33 = (char)v19;
                        v40 = v20;
                        v76 = v21;
                        v29 = v11;
                        v79 = v12;
                        v39 = (unsigned int)v10;
                        if (v77 < v9 && *((char *)v57) != 0)
                        {
                            do
                            {
                                v46 += 1;
                            }
                            while (v46 < v9 && *((char *)(v22 + v46)) != 0);
                            v28 = v46;
                        }
                        v89 = v4;
                        v78 = 0;
                    }
                    if (v46 == 0 || v46 != -2 && v46 != -1 && (unsigned int)v46 != 0)
                    {
                        v28 = v54;
                        v40 = v20;
                        v76 = v21;
                        v33 = (char)v19;
                        v29 = v11;
                        v89 = (unsigned int)v78 ^ 1;
                        v79 = v12;
                        v38 = v9;
                        v39 = (unsigned int)v10;
                        v89 = (char)((unsigned int)v78 ^ 1) & v4;
                    }
                }
                while (v28 <= 1);
                if (v46 == 0 || v46 == -2 || v46 == -1 || (unsigned int)v46 != 0)
                {
                    v9 = v78;
                    v77 = 0;
                    v63 = v17;
                    v64 = v28 + v80;
                    v28 = v5;
                }
            }
            if (false)
            {
                v5 = v42;
                v50 = 0;
                v87 = v89;
                *((unsigned long long *)&v4) = v4 & v87;
            }
            if (v89 != 0 || v15 != 1)
            {
                v9 = v78;
                v77 = 0;
                v63 = v17;
                v64 = v28 + v80;
                v28 = v5;
                while (true)
                {
                    if (v89 != 0)
                    {
                        v65 = (unsigned int)v39 == 2;
                        if (v63 == 0)
                        {
                            v77 = (unsigned int)v33 ^ 1;
                            v66 = v4 & (char)((unsigned int)v33 ^ 1);
                            if ((v4 & (char)((unsigned int)v33 ^ 1)) != 0)
                            {
                                if (v79 > v76)
                                {
                                    *((char *)(v29 + v76)) = 39;
                                }
                                if (v79 > v76 + 1)
                                {
                                    *((char *)(v29 + v76 + 1)) = 36;
                                }
                                v77 = v76 + 2;
                                if (v79 > v76 + 2)
                                {
                                    *((char *)(v29 + v76 + 2)) = 39;
                                }
                                v76 += 3;
                                v33 = v46;
                            }
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 92;
                            }
                            if (v79 > v76 + 1)
                            {
                                v67 = v40;
                                v68 = (char)v40 % 64;
                                *((unsigned long long *)(v29 + v76 + 1)) = (unsigned long long)(unsigned int)rax<4> + 48;
                            }
                            v46 = v76 + 2;
                            if (v79 > v76 + 2)
                            {
                                v70 = v40;
                                v71 = (char)v40 % 8;
                                v46 = (unsigned int)((rax<4> & 7) + 48);
                                *((unsigned long long *)(v29 + v76 + 2)) = v46;
                            }
                            v80 += 1;
                            v76 += 3;
                            v40 = ((unsigned int)v40 & 7) + 48;
                            if (v80 < v64)
                            {
                                v77 = v89;
                            }
                            else
                            {
                                v78 = (char)v9;
                            }
                        }
                        else
                        {
                            v4 = v65;
                        }
                    }
                    else
                    {
                        v46 = (v77 ^ 1) & (unsigned int)v33;
                        if (v28 != 0)
                        {
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 92;
                            }
                            v76 += 1;
                        }
                        v80 += 1;
                        if (v80 >= v64)
                        {
                            v78 = (char)v9;
                        }
                        else if (v46 != 0)
                        {
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 39;
                            }
                            v46 = v76 + 1;
                            if (v79 > v76 + 1)
                            {
                                *((char *)(v29 + v76 + 1)) = 39;
                            }
                            v76 += 2;
                            v28 = 0;
                            v33 = 0;
                        }
                        else
                        {
                            v28 = 0;
                        }
                    }
                    if ((v80 < v64 || v89 == 0) && (v89 == 0 || v63 == 0) && (v80 < v64 || v89 != 0))
                    {
                        if (v79 > v76)
                        {
                            *((unsigned long long *)(v29 + v76)) = v40;
                        }
                        v40 = (char)*((char *)(v7 + v80));
                        v76 += 1;
                    }
                }
            }
            if ((v78 == 0 || (unsigned int)v39 == 2) && ((unsigned int)v39 == 2 || v76 == 0) && (v78 == 0 || v17 != 0) && ((unsigned int)v39 == 2 || (v81 == 2 & v17) != 0) && (v76 == 0 || v17 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_40d1d0();
            }
            if (v17 == 0 && v5 == 0 && ((unsigned int)v39 == 2 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0) || v46 == 0 && (v89 != 0 || v15 != 1) || v17 == 0 && v5 != 0 && ((unsigned int)v39 == 2 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (v78 == 0 || (unsigned int)v39 == 2) && ((unsigned int)v39 == 2 || v76 == 0) && (v78 == 0 || v17 != 0) && ((unsigned int)v39 == 2 || (v81 == 2 & v17) != 0) && (v76 == 0 || v17 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) || v78 == 0 && v18 != 0 && v6 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
            {
                v92 = v76;
                return v92;
            }
        }
        *((char *)v29) = 39;
        v78 = 2;
        v13 = "'";
        v8 = 1;
        v17 = 0;
        v18 = v84;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_40bb30()
{
    struct_0 *v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

int sub_40b940()
{
    unsigned long long v1[5];  // rdi
    unsigned long long *v2;  // rdx
    unsigned long long v3;  // rax

    if (v1[4] != 0)
    {
        v2 = *(v1);
        if (*(v1) < v1[1])
        {
            while (true)
            {
                v3 = *(v2);
                if (*(v2) == 0)
                {
                    v2 = &v2[2];
                }
                else
                {
                    return v3;
                }
            }
        }
        abort(); /* do not return */
    }
    return 0;
}

int sub_40fac0()
{
}

int sub_40ba00()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rax
    unsigned long long v3[2];  // rdi
    unsigned long long v4;  // r8
    unsigned long long v5;  // rsi
    unsigned long long v6[2];  // r8
    unsigned long long v7;  // rcx
    unsigned long long v8;  // r9
    unsigned long long v9[2];  // rdx

    v2 = v1;
    v9 = *(v3);
    if (v3[1] > *(v3))
    {
        v8 = 0;
        do
        {
            v4 = *(v9);
            if (*(v9) != 0)
            {
                if (v2 <= v8)
                {
                    break;
                }
                *((unsigned long long *)(v5 + v8 * 8)) = v4;
                v6 = v9[1];
                v7 = v8 + 1;
                if (v9[1] != 0)
                {
                    while (true)
                    {
                        if (v2 != v7)
                        {
                            v7 += 1;
                            *((unsigned long long [2])(v5 + v7 * 8 - 8)) = *(v6);
                            v6 = v6[1];
                            if (v6 == 0)
                            {
                                break;
                            }
                        }
                        else
                        {
                            return v2;
                        }
                    }
                }
                v8 = v7;
            }
            v9 = &v9[2];
        }
        while (v3[1] > v9);
        return v8;
    }
    return 0;
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
} struct_0;

int sub_4056a0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = sub_40bb50();
    v2->field_38 = v1;
    return v1;
}

extern unsigned int g_418c6d;
extern unsigned int g_418c7e;
extern unsigned int g_418c8f;

int sub_405120()
{
    void tmp_2;  // tmp #2
    void tmp_14;  // tmp #14
    unsigned long|unsigned int v0;  // [bp-0xa0]
    void tmp_3;  // tmp #3
    unsigned long v1;  // [bp-0x98]
    unsigned int v2;  // [bp-0x90]
    char v3;  // [bp-0x8b]
    char v4;  // [bp-0x8a]
    char v5;  // [bp-0x89]
    void *v6;  // [bp-0x88]
    unsigned long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    char v9;  // [bp-0x70]
    unsigned long v10;  // [bp-0x68]
    unsigned long long *v11;  // [bp-0x60]
    unsigned long v12;  // [bp-0x58]
    char *v13;  // [bp-0x48]
    unsigned int v14;  // [bp-0x3c]
    unsigned long v15;  // [bp+0x8]
    unsigned long v16;  // [bp+0x10]
    unsigned long v17;  // [bp+0x18]
    unsigned long long *v18;  // [bp+0x20]
    char *v19;  // [bp+0x28]
    char v20;  // r9b
    unsigned int v21;  // r9d
    void *v22;  // rdx
    unsigned int v23;  // esi
    unsigned long v24;  // r8
    unsigned long v25;  // rcx
    unsigned int v26;  // edi
    unsigned long long v27;  // cc_dep1
    void *v29;  // r11
    char *v30;  // rsi
    unsigned long|unsigned int v31;  // rdx
    unsigned long long v32;  // r9
    unsigned long long v33;  // r9
    unsigned long long v34;  // r12
    unsigned long long|void * v35;  // r13
    unsigned long long v36;  // r14
    unsigned long long v37;  // r15
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rax
    unsigned long long v40;  // r15
    unsigned int *v41;  // rbx
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rbp
    unsigned long long v44;  // rbp
    unsigned long long v45;  // rax

    v5 = v20;
    v10 = v15;
    *(v19) = 0;
    v1 = v16;
    v11 = v18;
    v7 = v17;
    v13 = v19;
    *(v18) = 0;
    if (v17 != 0)
    {
        v14 = v21;
        v36 = 0;
        v37 = 0;
        v6 = v22;
        v2 = v23;
        *((int *)&v12) = (v24 == 0? v25 : v24);
        while (true)
        {
            v39 = read(v26, v6, (v25 <= v7? *((long long *)&v9) : v7));
            v8 = v39;
            v27 = v39;
            if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
            {
                v41 = __errno_location();
                v40 = 0;
                v44 = (unsigned int)sub_40ea00();
                error(0x0, *(v41), (unsigned long long)dcgettext(0x0, 0x418c6d, 0x5));
            }
            else if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v35 = v6;
                v34 = v8;
                v38 = v12;
                *(v11) = *(v11) + v8;
                v29 = v6;
                v3 = v24 != 0;
                while (true)
                {
                    tmp_2 = v38;
                    tmp_14 = !(v38 <= v34);
                    v38 = (!(v38 <= v34)? v34 : v38);
                    v39 = (tmp_14? v34 : tmp_2) != 0 & v3;
                    if (((tmp_14? v34 : tmp_2) != 0 & v3) != 0)
                    {
                        v30 = v35;
                        v31 = v38;
                        while (true)
                        {
                            if (*(v30) == 0)
                            {
                                v30 = &v30[1];
                                v31 -= 1;
                                if (v31 != 1)
                                {
                                    v0 = v29;
                                    v39 = (char)(memcmp(v35, v30, (unsigned int)v39 ^ 0) != 0);
                                }
                                else
                                {
                                    v32 = (0 ^ 1) & (unsigned int)v11;
                                }
                            }
                            else
                            {
                                v39 = v39;
                                v31 = 0;
                                v39 = 0;
                            }
                            if (v31 != 1 || *(v30) != 0)
                            {
                                v32 = v21 & v31;
                                if (v38 == v34 && v39 != 0)
                                {
                                    if (v32 != 0)
                                    {
                                        v0 = 1;
                                        v39 = 0;
                                    }
                                    else
                                    {
                                        v39 = 0;
                                    }
                                }
                            }
                            if (v39 == 0 || v38 != v34 || v31 == 1 && *(v30) == 0)
                            {
                                if (v32 == 0)
                                {
                                    break;
                                }
                                v0 = 0;
                            }
                            if (v32 != 0)
                            {
                                *((unsigned long long *)&v4) = v32;
                                break;
                            }
                        }
                        if (v32 == 0 && v38 == v34 && v39 != 0 && ((v31 & 15) == 0 || *(v30) != 0) && (v31 != 1 || *(v30) != 0))
                        {
                            v37 += v38;
                            v0 = 1;
                            v4 = 0;
                        }
                        else if ((v38 == v34 || v32 != 0) && (v39 != 0 || v32 != 0) && ((v31 & 15) == 0 || v31 == 1 || *(v30) != 0) && (v31 != 1 || *(v30) != 0 || v32 != 0) && (v31 == 1 || v39 == 0 || v32 != 0 || v38 != v34) && (v39 == 0 || *(v30) == 0 || v32 != 0 || v38 != v34))
                        {
                            v39 = sub_40b240();
                            v33 = v4;
                        }
                        else if ((v38 == v34 || v32 != 0) && (v39 != 0 || v32 != 0) && ((v31 & 15) == 0 || v31 == 1 || *(v30) != 0) && (v31 != 1 || *(v30) != 0 || v32 != 0) && (v31 == 1 || v39 == 0 || v32 != 0 || v38 != v34) && (v39 == 0 || *(v30) == 0 || v32 != 0 || v38 != v34))
                        {
                            v39 = sub_405060();
                            v33 = v4;
                        }
                    }
                    else
                    {
                        v39 = v36;
                    }
                    if (v38 == 0 && ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || v36 != 0 && ((tmp_14? v34 : tmp_2) != 0 & v3) != 0)
                    {
                        v37 += v38;
                        v0 = 1;
                        v4 = 0;
                    }
                    if ((((tmp_14? v34 : tmp_2) != 0 & v3) == 0 || v36 != 0) && (((char)((unsigned int)v36 ^ 1) & v38 == v34) == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && (v38 != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0))
                    {
                        if (9223372036854775807 - v38 >= v37)
                        {
                            v37 += v38;
                            v34 -= v38;
                            v35 += v38;
                            v36 = v39;
                        }
                        else
                        {
                            v40 = 0;
                            v42 = (unsigned int)sub_40ea00();
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x418c8f, 0x5));
                        }
                    }
                    if (v36 == 0)
                    {
                        if (v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0)
                        {
                            v39 = sub_40b240();
                            v33 = v4;
                            if (v37 != v39)
                            {
                                v40 = v36;
                                v43 = (unsigned int)sub_40ea00();
                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x418c7e, 0x5));
                            }
                        }
                    }
                    else
                    {
                        if (v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0)
                        {
                            v39 = sub_405060();
                            v33 = v4;
                            if ((char)v37 == 0)
                            {
                                v37 = v39;
                            }
                        }
                    }
                    if (v36 != 0 && (v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && (char)v37 != 0 || v36 == 0 && (v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0) && v37 == v39)
                    {
                        if (v0 == 0)
                        {
                            v34 -= v38;
                            v36 = v39;
                            v35 += v38;
                            v37 = v38;
                        }
                        else if (v38 != 0)
                        {
                            if (v33 != 0)
                            {
                                v37 = v38;
                                v36 = v39;
                                v38 = 0;
                            }
                            else
                            {
                                v34 -= v38;
                                v36 = v39;
                                v35 += v38;
                                v37 = 0;
                            }
                        }
                    }
                    if (...)
                    {
                        tmp_3 = v7;
                        v7 -= v8;
                        *((unsigned long long *)&v13) = v39;
                        if (tmp_3 != v8)
                        {
                            v36 = v39;
                        }
                    }
                }
                if ((v34 == 0 || v38 == 0 && v36 == 0 && v37 == v39 && v0 != 0 || v38 == 0 && (char)v37 != 0 && v0 != 0 && v36 != 0) && tmp_3 != v8)
                {
                    v39 = read(v26, v6, (v25 <= v7? *((long long *)&v9) : v7));
                    v8 = v39;
                    v27 = v39;
                }
                else if ((v34 == 0 || v38 == 0 && v36 == 0 && v37 == v39 && v0 != 0 || v38 == 0 && (char)v37 != 0 && v0 != 0 && v36 != 0) && tmp_3 == v8)
                {
                    if (v39 == 0)
                    {
                        break;
                    }
                }
                else if (v36 == 0 && v37 != v39 || (char)v37 == 0 && v36 != 0 || 9223372036854775807 - v38 < v37 && (((tmp_14? v34 : tmp_2) != 0 & v3) == 0 || v36 != 0) && (((char)((unsigned int)v36 ^ 1) & v38 == v34) == 0 || v36 != 0) && (v38 != 0 || v36 != 0))
                {
                    v45 = v40;
                    return v45;
                }
            }
            else
            {
                v39 = v36;
            }
        }
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v40 = 1;
        }
        else if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || *(v41) != 4)
        {
            v45 = v40;
            return v45;
        }
    }
    v40 = 1;
    v45 = v40;
    return v45;
}

int sub_40fad0()
{
}

extern unsigned int g_418e1e;

int sub_40a0d0()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rbp
    unsigned long long v4;  // r12
    unsigned long long v5;  // rax

    if ((unsigned int)v2 != -2)
    {
        if ((unsigned int)v2 == -1)
        {
            v4 = (unsigned int)sub_40ec50();
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x418e1e, 0x5));
        }
        v2 = (unsigned int)sub_40d070();
        return v5;
    }
    v3 = (unsigned int)sub_40ec50();
    error(0x0, *(__errno_location()), "%s");
    return v2;
}

int sub_414460()
{
    unsigned int *v1;  // rdi
    unsigned long v2;  // rax

    *(v1) = *(v1) | 32;
    return v2;
}

int sub_413940()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __explicit_bzero_chk();
}

typedef struct struct_0 {
    uint128_t field_0;
    uint128_t field_10;
    char field_1a;
    char field_1b;
    char padding_1c[4];
    uint128_t field_20;
    uint128_t field_30;
    unsigned long long field_40;
} struct_0;

int sub_405700()
{
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rbx
    unsigned long long v3;  // rax
    char v4;  // al

    v2 = v1;
    *((long long *)&v1->field_30) = 0;
    v1->field_0 = 0;
    v1->field_10 = 0;
    *((int128_t *)&v1->field_1a) = 0;
    v1->field_20 = 0;
    v3 = geteuid();
    v4 = (unsigned int)v3 == 0;
    *(&((char *)&v2->field_10)[11]) = (unsigned int)v3 == 0;
    *(&((char *)&v2->field_10)[10]) = (unsigned int)v3 == 0;
    return rax<8>;
}

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

double sub_40b3b0()
{
    unsigned long long v1;  // rdi
    struct_1 *v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long *v6;  // rdx
    unsigned long long *v7;  // rbx
    unsigned long long v8;  // rsi
    unsigned long long v10;  // rax
    unsigned long long v11[2];  // rax
    unsigned long long v12;  // rsi
    unsigned long long v14;  // rax
    struct_0 *v15;  // rbx
    unsigned long long v16;  // rsi
    struct_0 *v17;  // rax
    void v18;  // xmm0
    uint128_t v19;  // xmm0
    unsigned long v20;  // rcx
    void v21;  // xmm0

    v2 = v1;
    *(v6) = v7;
    v8 = *(v7);
    if (*(v7) != 0)
    {
        v7 = sub_40b380();
        if (v8 != v1)
        {
            v1 = v3;
            v10 = *((long long *)(r12<8> + 56))();
            if (v10 == 0)
            {
                v11 = v15->field_8;
                if (v15->field_8 != 0)
                {
                    v12 = *(v11);
                    if (v1 != *(v11))
                    {
                        while (true)
                        {
                            v14 = *((long long *)(r12<8> + 56))();
                            if (v14 == 0)
                            {
                                v15 = v15->field_8;
                                v11 = v15->field_8;
                                v16 = *(v11);
                                if (*(v11) == v1 || v15->field_8 == 0)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v11 = v15->field_8;
                            }
                        }
                        if (v14 == 0)
                        {
                            return v18;
                        }
                    }
                    if ((char)v20 != 0)
                    {
                        *((unsigned long long [2])&v15->field_8) = v11[1];
                        v11[0] = 0;
                        v11[1] = v2->field_48;
                        v2->field_48 = v11;
                    }
                }
            }
        }
        if ((v8 == v1 || v10 != 0) && (char)v20 != 0)
        {
            v17 = v15->field_8;
            if (v15->field_8 != 0)
            {
                v19 = *(v17);
                *(v15) = *(v17);
                *((long long *)&v17->field_0) = 0;
                v17->field_8 = v2->field_48;
                v2->field_48 = v17;
                return v19;
            }
            *((long long *)&v15->field_0) = 0;
        }
        if ((v10 == 0 || (char)v20 == 0 || v15->field_8 == 0) && ((char)v20 == 0 || v15->field_8 == 0 || v8 != v1) && (v8 == v1 || v15->field_8 != 0 || v10 != 0))
        {
            return v21;
        }
    }
    if (*(v7) == 0 || v15->field_8 == 0 && v10 == 0 && v8 != v1 || v10 == 0 && v8 != v1 && v1 != *(v11))
    {
        return v18;
    }
}

extern unsigned int g_417024;

int sub_403db0()
{
    unsigned int v0;  // [bp-0x20]
    char v2;  // cl
    char *v3;  // rdi
    char *v4;  // rsi
    unsigned long long v6;  // rax
    unsigned long long v7;  // rbp
    unsigned int *v8;  // r12
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rbx
    unsigned long long v12;  // rbp
    unsigned long long v16;  // rax
    unsigned long long v17;  // rbx

    if (v2 == 0 && *(v3) == 47 && *(v4) == 47)
    {
        v0 = 0;
        sub_40f8a0();
        v6 = sub_40c5e0();
        if (v6 == -1)
        {
            v9 = (unsigned int)sub_40ea00();
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x417024, 0x5));
        }
    }
    if (*(v4) != 47 || *(v3) != 47 || v2 != 0)
    {
        v0 = 0;
        v7 = (unsigned int)sub_40c5e0();
        v8 = __errno_location();
        if (v7 == -1)
        {
            v10 = (unsigned int)sub_40ea00();
            error(0x0, *(v8), (unsigned long long)dcgettext(0x0, 0x417024, 0x5));
            sub_40f770();
            sub_40f8a0();
        }
        else
        {
            v12 = (unsigned int)sub_40f770();
            sub_40f8a0();
            if ((unsigned int)v12 <= 0 && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rbp<8>, 0x0<64>, cc_ndep<8>)))
            {
                v17 = (unsigned int)sub_40ea00();
                error(0x0, *(v8), (unsigned long long)dcgettext(0x0, 0x417024, 0x5));
                v16 = 0;
            }
        }
    }
    if ((unsigned int)v12 > 0 || v6 == -1)
    {
        return 0;
    }
    if ((*(v4) == 47 || (unsigned int)v12 <= 0) && ((unsigned int)v12 <= 0 || *(v3) == 47) && ((unsigned int)v12 <= 0 || v2 == 0) && (*(v4) == 47 || v7 != -1) && (*(v3) == 47 || v7 != -1) && (v2 == 0 || v7 != -1) && (*(v4) != 47 || *(v3) != 47 || v6 != -1 || v2 != 0))
    {
        if ((*(v4) == 47 || (char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rbp<8>, 0x0<64>, cc_ndep<8>)) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rbp<8>, 0x0<64>, cc_ndep<8>) || *(v3) == 47) && ((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rbp<8>, 0x0<64>, cc_ndep<8>) || v2 == 0))
        {
            v16 = 1;
        }
        return v16;
    }
}

extern unsigned int g_417024;

int sub_40c770()
{
    unsigned long v0;  // [bp-0xf8]
    unsigned int v1;  // [bp-0xdc]
    unsigned long v2;  // [bp-0xd8]
    unsigned int v3;  // [bp-0xd0]
    unsigned int v4;  // [bp-0xcc]
    char v5;  // [bp-0xc8]
    unsigned int v6;  // [bp-0xb0]
    unsigned long v7;  // [bp+0x8]
    unsigned int v8;  // [bp+0x10]
    unsigned int v9;  // [bp+0x18]
    unsigned int v10;  // [bp+0x20]
    unsigned long v11;  // r9
    char *v12;  // rdi
    unsigned int v13[2];  // rsi
    unsigned long long v14;  // rax
    char *v15;  // ebp
    unsigned long v16;  // rdx
    unsigned long|unsigned int v17;  // r15
    unsigned long v18;  // r8
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rsi
    unsigned long long v24;  // rsi
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned int *v29;  // rax
    unsigned long long v30;  // rbx
    unsigned long long v31;  // rbx

    v2 = v11;
    v3 = v10;
    if (*(v12) != 47 && v13[0] == 4)
    {
        v17 = v13[1];
    }
    if (v16 != 0)
    {
        if (v13[1] == 0 || *(v12) == 47 || v13[0] != 4)
        {
            v15 = (unsigned long long)(unsigned int)sub_40c5e0();
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)))
            {
                v15 = (unsigned int)(v15 + v12);
            }
            else
            {
                v14 = 1;
                if (v15 == -1)
                {
                    v17 = (unsigned int)*(__errno_location());
                }
            }
        }
        if (((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && ((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0 && (unsigned int)v17 != 0 || ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && !(((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0) || (v8 & v9) != -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4)) && (unsigned int)v17 != 0) && (char)v3 != 0 && v17 != 0 && v17 != 2)
        {
            v27 = __xstat(0x1, v15, (unsigned int)&v5);
        }
        if (...)
        {
            v29 = __errno_location();
        }
    }
    if (v13[1] == 0 || *(v12) == 47 || v13[0] != 4)
    {
        if (v16 == 0)
        {
            v15 = v12;
        }
        if ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))))
        {
            if (!(((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0))
            {
                v1 = (unsigned int)v18 & -19;
            }
            if (((unsigned short)v18 & 0x200) == 0 && ((unsigned short)v7 & 0xc00) == 0)
            {
                v17 = mkdir(v15, v18);
                if ((unsigned int)v17 == 0)
                {
                    v21 = v20;
                    (long long)(stack_base)[-216]();
                    if (((int)v7 & (unsigned int)v18 & 511) != 0)
                    {
                        v1 = v18;
                    }
                }
            }
        }
        if ((v8 & v9) != -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))))
        {
            v1 = (unsigned int)v18 & -64;
        }
    }
    if (v13[1] == 0 && v16 == 0 || v16 == 0 && *(v12) == 47 || v13[1] == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)) || v16 == 0 && v13[0] != 4 || *(v12) == 47 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)) || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>)) && v13[0] != 4)
    {
        v4 = v8 & v9;
    }
    if ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && !(((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0) || (v8 & v9) != -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4))
    {
        v17 = mkdir(v15, v1);
        if ((unsigned int)v17 == 0)
        {
            v24 = v20;
            (long long)(stack_base)[-216]();
        }
    }
    if ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && ((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0 && (unsigned int)v17 != 0 || ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && !(((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0) || (v8 & v9) != -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4)) && (unsigned int)v17 != 0)
    {
        v17 = *(__errno_location());
        if ((char)v3 != 0)
        {
        }
        else
        {
            v1 = -1;
        }
    }
    if ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && ((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0 && (unsigned int)v17 == 0 && ((int)v7 & (unsigned int)v18 & 511) != 0 || ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && ((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0 && (unsigned int)v17 != 0 || ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && !(((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0) || (v8 & v9) != -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4)) && (unsigned int)v17 != 0) && (char)v3 == 0 || ((v8 & v9) == -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4) && !(((unsigned short)v7 & 0xc00) == 0 && ((unsigned short)v18 & 0x200) == 0) || (v8 & v9) != -1 && (v16 == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rbp<8>, 0x0<64>, cc_ndep<8>))) && (v13[1] == 0 || *(v12) == 47 || v13[0] != 4)) && (unsigned int)v17 == 0)
    {
        v26 = sub_40f520();
        if (v26 >= -1)
        {
            v0 = (unsigned int)v7;
            v28 = sub_4135d0();
        }
    }
    if (...)
    {
        v14 = 1;
    }
    if (...)
    {
        v30 = (unsigned int)sub_40ec50();
        error(0x0, v17, (unsigned long long)dcgettext(0x0, 0x417024, 0x5));
        v14 = 0;
    }
    if (...)
    {
        v31 = (unsigned int)sub_40ec50();
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, (v4 != -1? "cannot change owner and permissions of %s" : "cannot change permissions of %s"), 0x5));
        v14 = 0;
    }
    return v14;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[24];
    struct struct_1 *field_48;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_2 *field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_2;

int sub_40c070()
{
    void tmp_10;  // tmp #10
    void tmp_19;  // tmp #19
    unsigned long long v0[2];  // [bp-0x20]
    unsigned long v2;  // rsi
    unsigned long long v3;  // rdx
    unsigned long long *v4;  // r12
    struct_0 *v5;  // rdi
    struct_3 *v6;  // rbx
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rax
    uint128_t v10;  // xmm1
    unsigned int v11;  // ymm1
    struct_2 *v12;  // rdx
    unsigned long|uint128_t|unsigned int v13;  // xmm1lq
    uint128_t v14;  // xmm0
    unsigned int v15;  // ymm0
    unsigned long long v16;  // xmm0lq
    unsigned long long v17;  // rax
    uint128_t v18;  // xmm0
    unsigned int v19;  // ymm0
    unsigned long long v20;  // xmm0lq
    struct_2 *v22;  // rdx
    uint128_t v23;  // xmm2
    unsigned int v24;  // ymm2
    uint128_t v25;  // xmm0
    uint128_t v26;  // xmm0
    unsigned int v27;  // ymm0
    unsigned long|uint128_t|unsigned int v28;  // xmm1
    uint128_t v29;  // xmm1
    unsigned int v30;  // ymm1
    uint128_t v31;  // xmm0
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34[2];  // r12
    unsigned long long v35[2];  // rax
    unsigned long long v36;  // rdx

    if (v2 != 0)
    {
        v4 = v3;
        v6 = v5;
        v7 = sub_40b3b0();
        if (v7 != 0)
        {
            if (v4 != 0)
            {
                *(v4) = v7;
            }
            return 0;
        }
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v13 = 0;
            v12 = v6->field_28;
            v13 = v5->field_18;
            v9 = v6->field_10;
            v14 = 0;
            v15 = v9;
            xmm0<8> = Conv(128->64, (xmm0<16> * Conv(32->128, Load(addr=(rdx<8> + 0x8<64>), size=4, endness=Iend_LE))))
        }
        else
        {
            v10 = 0;
            tmp_10 = v6->field_18 % 2 | (unsigned int)v6->field_18 & 1;
            v9 = v6->field_10;
            v11 = tmp_10;
            v12 = v6->field_28;
            v13 = (unsigned long long)(unsigned int)xmm1<16> * 2;
            tmp_19 = v9;
            v17 = (unsigned int)v9 & 1;
            v18 = 0;
            v19 = tmp_19 >> 1 | v17;
            xmm0<8> = Conv(128->64, ((xmm0<16> * 0x2<8>) * Conv(32->128, Load(addr=(rdx<8> + 0x8<64>), size=4, endness=Iend_LE))))
        }
        if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
        {
            sub_40b4d0();
            v22 = v6->field_28;
            v23 = 0;
            v24 = v6->field_28->field_8;
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                v25 = 0;
                v25 = (unsigned int)v5->field_10;
            }
            else
            {
                v26 = 0;
                v27 = v5->field_10 >> 1 | (unsigned int)v5->field_10 & 1;
                v25 = xmm0<16> * 2;
            }
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                v28 = 0;
                v28 = v5->field_18;
            }
            else
            {
                v29 = 0;
                v30 = v5->field_18 >> 1 | (unsigned int)v5->field_18 & 1;
                v28 = (unsigned long long)(unsigned int)xmm1<16> * 2;
            }
            if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
            {
                xmm0<16> = (xmm0<16> * Conv(32->128, Load(addr=(rdx<8> + 0xc<64>), size=4, endness=Iend_LE)))
                if (v22->field_10 == 0)
                {
                    v31 *= xmm2<16>;
                }
                if (((char)(BinaryOp CmpF & 69) & 1) != 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0)
                {
                    v32 = sub_40be70();
                    if (v32 != 0)
                    {
                        v33 = sub_40b3b0();
                    }
                }
            }
        }
    }
    if (...)
    {
        v34 = v0;
        if (*(v0) != 0)
        {
            v35 = v6->field_48;
            if (v6->field_48 != 0)
            {
                v6->field_48 = v5->field_48->field_8;
            }
            else
            {
                v35 = malloc(0x10);
            }
        }
        else
        {
            v0[0] = v2;
            v6->field_20 = v6->field_20 + 1;
            v6->field_18 = v6->field_18 + 1;
            return 1;
        }
    }
    if (v2 == 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && v7 == 0 && ((char)(BinaryOp CmpF & 69) & 1) != 0 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && v33 != 0 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && v32 != 0)
    {
        abort(); /* do not return */
    }
    if (...)
    {
        return -18446744069414584321;
    }
    if (...)
    {
        v36 = v34[1];
        v35[0] = v2;
        v35[1] = v36;
        v34[1] = v35;
        v6->field_20 = v6->field_20 + 1;
        return 1;
    }
}

int sub_411570()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char [3]|char v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned long|unsigned long long|unsigned int v5;  // rdi
    unsigned long v6;  // rbp
    unsigned long long *v7;  // rcx
    char *v9;  // r8
    unsigned long v11;  // rsi
    unsigned long long *v12;  // r15
    unsigned int *v13;  // r12
    unsigned int *v14;  // r12
    unsigned long long v15;  // rbx
    unsigned long v16;  // rax
    unsigned int v17;  // eax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rsi
    char v25;  // sil
    unsigned long long v26;  // r12
    unsigned long long v27;  // r12
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rsi
    char v32[3];  // r8
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rcx
    unsigned long long|unsigned int v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned long long|unsigned int v37;  // rdi
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rcx
    unsigned long long v43;  // cc_dep1
    unsigned long long v44;  // cc_dep1
    unsigned int v45;  // cc_dep1
    unsigned int v46;  // cc_dep1
    unsigned int v47;  // cc_dep1
    unsigned long long v48;  // rax
    unsigned long long v49;  // r8

    if (v4 <= 36)
    {
        v6 = v5;
        v12 = (v11 == 0? stack_base + -64 : v11);
        *(v13) = 0;
        v13 = __errno_location();
        v15 = (char)*((char *)v5);
        v31 = *((long long *)(unsigned long long)__ctype_b_loc());
        for (v16 = v5; (*((char *)(v31 + (v15 << 1) + 1)) & 32) != 0; v15 = (char)*((char *)v16))
        {
            v16 += 1;
        }
        if (v15 != 45)
        {
            v33 = strtoul();
            if (*(v12) != v5)
            {
                v17 = *(v14);
                if ((v17 == 34 || *(v14) == 0) && v9 != 0)
                {
                    v18 = v1[0];
                    if (v1[0] != 0)
                    {
                        *((char *[3])&v1[0]) = v1;
                        v20 = strchr(v9, v18);
                        v32 = v1;
                    }
                }
            }
            else
            {
                *((char **)&v1[0]) = v9;
                if (v9 != 0)
                {
                    v18 = (char)*((char *)v6);
                    if (*((char *)v6) != 0)
                    {
                        v33 = 1;
                        v19 = strchr(v9, (char)*((char *)v5));
                        v32 = v1;
                    }
                }
            }
        }
        if (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && v1[0] != 0 && *(v12) != v5 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0)
        {
            v21 = v18 - 69;
            if ((v18 - 69 & 255) <= 47)
            {
                *((unsigned long long *)&v1) = v21;
                v0 = 142129060940101;
                if (((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0)
                {
                    *((char *[3])&v2[0]) = v32;
                    v22 = strchr(v9, 0x30);
                    v32 = v2;
                    if (v22 != 0)
                    {
                        v23 = v32[1];
                        if (v32[1] != 68)
                        {
                            if (v23 != 105)
                            {
                                v30 = v1;
                                if (v23 != 66)
                                {
                                    /* goto *((long long *)(rdx<8> * 8 + 4302296)); */
                                }
                            }
                            else
                            {
                                v24 = 0;
                                v30 = 0x400;
                                v25 = v32[2] == 66;
                                v31 = rsi<8> * 2 + 1;
                            }
                        }
                    }
                }
            }
        }
        if ((*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && v1[0] != 0 && *(v12) != v5 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && v1[0] != 0 && *(v12) != v5 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && v15 != 45 && *((char *)v6) != 0 && v9 != 0 && v19 != 0 || v15 != 45 && v1[0] != 0 && *(v12) != v5 && v9 != 0 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) > 47)
        {
            v31 = 1;
            v30 = 0x400;
        }
        if (...)
        {
            v31 = 2;
            v30 = 1000;
        }
        if (...)
        {
            v26 = (unsigned int)v18 - 66;
            switch (v26)
            {
            case 0:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x400;
                    break;
                }
            case 3:
                v40 = v30;
                v5 = 6;
                do
                {
                    v33 = v33 * v40;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v47 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v47 != 1);
            case 5: case 37:
                v28 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v48 = tmp_11 * v28 * v28;
                    v33 = v48;
                }
                else
                {
                    v33 = -1;
                }
            case 9: case 41:
                v33 = v33 * v30;
            case 11: case 43:
                v29 = v30;
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
                {
                    v33 = tmp_11 * v29;
                    break;
                }
            case 14:
                v34 = v30;
                v35 = 5;
                do
                {
                    v33 = v33 * v34;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v43 = v35;
                    v35 -= 1;
                }
                while (v43 != 1);
            case 18: case 50:
                v39 = v30;
                v5 = 4;
                do
                {
                    v33 = v33 * v39;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v46 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v46 != 1);
                break;
            case 23:
                v38 = v30;
                v5 = 8;
                do
                {
                    v33 = v33 * v38;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v45 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v45 != 1);
            case 24:
                v36 = v30;
                v37 = 7;
                do
                {
                    v33 = v33 * v36;
                    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                    {
                        v33 = -1;
                    }
                    v44 = v37;
                    v37 -= 1;
                }
                while (v44 != 1);
            case 32:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v49 = &v32[v31];
                *(v12) = v49;
            case 53:
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 = -1;
                    break;
                }
                else
                {
                    v33 *= 2;
                    break;
                }
            default:
                *(v7) = v33;
            }
            if (v26 <= 53)
            {
                v27 = v26;
            }
        }
        v31 = 1;
        v31 = 1;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        *(v7) = v33;
        return stack_base + 0;
    }
    __assert_fail(); /* do not return */
}

int sub_40a8f0()
{
    unsigned long long v1;  // rax

    v1 = sub_40a3e0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_411530(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b990()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct_0 *v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_40b380();
    v2 = v1;
    v3 = v1;
    while (true)
    {
        v4 = *(v3);
        v3 = v3[1];
        if (v4 == v5 && v3 != 0)
        {
            return *(v3);
        }
        if (v3 == 0)
        {
            while (true)
            {
                v2 = &v2[2];
                if (v6->field_8 > v2)
                {
                    v7 = *(v2);
                    if (*(v2) != 0)
                    {
                        break;
                    }
                }
                else
                {
                    v7 = 0;
                }
            }
        }
    }
    return v7;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_413d20()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_10 = v2;
    return v3;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c540()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 CONCAT v1->field_8) % v2 >> 64;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    char field_1b;
    char padding_1c[8];
    char field_24;
    char padding_25[6];
    char field_2b;
} struct_0;

typedef struct struct_1 {
    char padding_0[24];
    unsigned int field_18;
} struct_1;

extern unsigned int g_4186e8;
extern unsigned int g_418ca3;

int sub_405770()
{
    unsigned long|unsigned int v1;  // rsi
    unsigned int v2;  // r12d
    unsigned int v3;  // ebx
    char v4;  // r8b
    struct_0 *v5;  // rdi
    struct_1 *v6;  // r9
    struct_1 *v7;  // rcx
    struct_1 *v8;  // r9
    unsigned long|unsigned int v9;  // edx
    unsigned int v10;  // eax
    char v11;  // ah
    unsigned int v12;  // eax
    unsigned long long v13;  // rax
    unsigned int *v14;  // rbx
    unsigned int v15;  // eax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned int *v19;  // r14
    unsigned int v20;  // ebx
    unsigned int *v21;  // r14
    unsigned int *v22;  // r15
    unsigned int v23;  // r14d
    unsigned int *v24;  // r15
    unsigned long long v25;  // r12
    unsigned long long v26;  // rax
    unsigned long long v27;  // r12

    v2 = v1;
    v3 = v9;
    if (v4 == 0)
    {
        if ((71776119061217535 & v5->field_18) != 0)
        {
            v1 = v6->field_18;
            v9 = v7->field_18;
        }
        else if (v5->padding_25[1] != 0)
        {
            v1 = v8->field_18;
            v9 = v5->field_10;
        }
        if ((71776119061217535 & v5->field_18) != 0 || v5->padding_25[1] != 0)
        {
            v10 = !((unsigned int)rdx<8>);
            v11 = (char)(!((unsigned int)rdx<8>) >> 8) | 14;
            v12 = rax<4> & v1;
            if (((unsigned short)v12 & 4095) != 0)
            {
                v13 = sub_40d0b0();
                if (v13 != 0)
                {
                    v14 = __errno_location();
                    v15 = *(v14);
                    if (*(&((char *)&v5->field_18)[3]) != 0 || v15 != 22 && v15 != 1)
                    {
                        v25 = (unsigned int)sub_40ea00();
                        error(0x0, *(v14), (unsigned long long)dcgettext(0x0, 0x418ca3, 0x5));
                    }
                }
            }
        }
    }
    if ((unsigned int)v9 != -1)
    {
        if ((((unsigned short)v12 & 4095) == 0 || (71776119061217535 & v5->field_18) == 0 || v13 == 0 || v4 != 0) && (((unsigned short)v12 & 4095) == 0 || v13 == 0 || v5->padding_25[1] == 0 || v4 != 0))
        {
            v17 = fchown(v3);
            if (v17 != 0)
            {
                v23 = *(v22);
                v22 = __errno_location();
                if (*(v22) == 1 || v23 == 22)
                {
                    fchown(v3);
                    *(v24) = v23;
                }
            }
        }
    }
    else
    {
        if ((((unsigned short)v12 & 4095) == 0 || (71776119061217535 & v5->field_18) == 0 || v13 == 0 || v4 != 0) && (((unsigned short)v12 & 4095) == 0 || v13 == 0 || v5->padding_25[1] == 0 || v4 != 0))
        {
            v16 = lchown(v2);
            if (v16 != 0)
            {
                v20 = *(v19);
                v19 = __errno_location();
                if (v20 == 22 || *(v19) == 1)
                {
                    lchown(v2);
                    *(v21) = v20;
                }
            }
        }
    }
    if (((unsigned short)v12 & 4095) == 0 || v13 == 0 || v4 != 0 || (71776119061217535 & v5->field_18) == 0 && v5->padding_25[1] == 0)
    {
        if (((unsigned int)v9 == -1 || v17 == 0) && (v16 == 0 || (unsigned int)v9 != -1))
        {
            v18 = 1;
        }
        if ((unsigned int)v9 == -1 && v16 != 0 || (unsigned int)v9 != -1 && v17 != 0)
        {
            v26 = sub_405740();
            v18 = 0;
            if (v26 == 0)
            {
                v27 = (unsigned int)sub_40ea00();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4186e8, 0x5));
            }
        }
    }
    if (v4 == 0 && ((unsigned short)v12 & 4095) != 0 && v13 != 0 && ((71776119061217535 & v5->field_18) != 0 || v5->padding_25[1] != 0) || ((unsigned int)v9 == -1 || v17 != 0) && ((unsigned int)v9 != -1 || v16 != 0) && (((unsigned short)v12 & 4095) == 0 || (71776119061217535 & v5->field_18) == 0 || v13 == 0 || v4 != 0) && (((unsigned short)v12 & 4095) == 0 || v13 == 0 || v5->padding_25[1] == 0 || v4 != 0) && v26 == 0)
    {
        v18 = 0 - (unsigned int)v5->padding_1c[3];
    }
    return v18;
}

extern int512_t g_621ae0;

int sub_40e5e0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_621ae0 : v1));
}

int sub_409e70()
{
}

int sub_4129d0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_412320();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    unsigned short field_20;
    char padding_22[6];
    unsigned long long field_28;
} struct_0;

int sub_409ae0()
{
    struct_0 *v1;  // rsi
    unsigned int v2;  // edi

    v1->field_0 = v2;
    v1->field_28 = 0;
    v1->field_8 = 0;
    v1->field_18 = 0;
    v1->field_20 = 0;
    v1->field_10 = 1;
    return 0;
}

int sub_409e90()
{
    unsigned int *v0;  // [bp-0x160]
    unsigned int v1;  // [bp-0x158]
    unsigned long v2;  // [bp-0x150]
    unsigned int v3;  // [bp-0x148]
    unsigned int v4;  // [bp-0x144]
    unsigned int v6;  // edx
    unsigned int v7;  // ebp
    unsigned long long v8;  // rbx
    unsigned int v9;  // r9d
    void *v11;  // rbx
    unsigned int v12;  // edi
    unsigned long v13;  // rsi
    unsigned int v14;  // r8d
    unsigned int *v16;  // r9
    unsigned long long|unsigned int v17;  // r12
    unsigned long v18;  // rcx
    unsigned long long v19;  // rax

    v7 = v6;
    v8 = linkat();
    if ((char)v9 == 1 && (unsigned int)v8 != 0 && *(v0) == 17)
    {
        v0 = __errno_location();
        v11 = (unsigned long long)(unsigned int)sub_409e00();
        if (v11 != 0)
        {
            v1 = v12;
            v2 = v13;
            v3 = v6;
            v4 = v14;
            v16 = v0;
            if (sub_40fb10() != 0)
            {
                v17 = *(v0);
            }
            else
            {
                v0 = v0;
                v17 = renameat(v7, (unsigned int)v11, v7, v18);
                if (v17 != 0)
                {
                    v17 = *(v0);
                }
                v0 = v0;
                unlinkat(v7, (unsigned int)v11, 0x0);
                v16 = v0;
            }
            if (v11 != stack_base + -312)
            {
                v0 = v16;
                free(v11);
                v16 = v0;
            }
            v8 = 1;
            if (v17 != 0)
            {
                *((unsigned long long *)&v16) = v17;
                v8 = -18446744069414584321;
            }
        }
        else
        {
            v8 = -18446744069414584321;
        }
    }
    v19 = v8;
    return v19;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_40b6b0()
{
    struct_0 *v1;  // rdi

    return v1->field_18;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[24];
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
} struct_0;

int sub_411b90()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi

    v1 = 0;
    if (v2->field_28 <= v2->field_20)
    {
        v1 = v2->field_10 - v2->field_8;
        if (((unsigned short)v2->field_0 & 0x100) != 0)
        {
            v1 = v2->field_10 - v2->field_8 + v2->field_58 - v2->field_48;
        }
    }
    return v1;
}

int sub_410aa0()
{
}

int sub_409fd0()
{
    unsigned long v0;  // [bp-0x148]
    unsigned int v1;  // [bp-0x140]
    unsigned long v3;  // rsi
    unsigned int v4;  // ebp
    char v5;  // cl
    unsigned int *v6;  // r14
    void *v7;  // rbx
    unsigned long v8;  // rdi
    unsigned long long v9;  // rax
    unsigned long v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long|unsigned int v12;  // r12d
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rax

    v4 = v3;
    v13 = symlinkat();
    if (v5 == 1 && (unsigned int)v13 != 0)
    {
        v6 = __errno_location();
        if (*(v6) == 17)
        {
            v7 = (unsigned long long)(unsigned int)sub_409e00();
            if (v7 != 0)
            {
                v0 = v8;
                v1 = v3;
                v9 = sub_40fb10();
                if (v9 != 0)
                {
                    v12 = *(v6);
                }
                else
                {
                    v11 = renameat(v4, (unsigned int)v7, v4, v10);
                    if (!(v11 == 0))
                    {
                        v12 = *(v6);
                        unlinkat(v4, (unsigned int)v7, 0x0);
                    }
                    else if (v7 != stack_base + -312)
                    {
                        free(v7);
                    }
                }
                if (v11 != 0 || v9 != 0)
                {
                    if (v7 != stack_base + -312)
                    {
                        free(v7);
                    }
                    if (v12 != 0)
                    {
                        *((unsigned long *)&v6) = v12;
                        v13 = -18446744069414584321;
                    }
                }
                if (v12 == 0 || v11 == 0 && v9 == 0)
                {
                    v13 = 1;
                }
            }
            else
            {
                v13 = -18446744069414584321;
            }
        }
    }
    v14 = v13;
    return v14;
}

int sub_412e60()
{
    unsigned long long v1;  // rax

    v1 = sub_412ba0();
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
    {
        sub_412cc0();
        sub_412d40();
        r9<8>();
        v1 = -1;
    }
    return v1;
}

int sub_40add0()
{
}

int sub_4112e0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_411530(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_416030() { crash_skku;
}
int sub_40d0b0()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx

    v0 = v2;
    return sub_412b60();
}

int sub_40ba70()
{
    unsigned long long v1[2];  // rdi
    unsigned long long *v2;  // r14
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rdi
    unsigned long long v10[2];  // rbx

    v2 = *(v1);
    if (v1[1] > *(v1))
    {
        v8 = 0;
        while (true)
        {
            v4 = *(v2);
            if (*(v2) != 0)
            {
                v10 = v2;
                while (true)
                {
                    v6 = v5;
                    v7 = v5();
                    if (v7 != 0)
                    {
                        v10 = v10[1];
                        v8 += 1;
                        if (v10 == 0)
                        {
                            break;
                        }
                        v9 = *(v10);
                    }
                }
                if (v7 != 0)
                {
                    v2 = &v2[2];
                    if (v1[1] <= v2)
                    {
                        break;
                    }
                }
                else if (v7 == 0)
                {
                    return stack_base + 0;
                }
            }
        }
    }
    return stack_base + 0;
}

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
    char padding_1c[4];
    unsigned long long field_20;
    unsigned int field_28;
    unsigned int field_2c;
    unsigned int field_30;
} struct_0;

extern unsigned int g_41a9e0;
extern unsigned int g_41aa24;

int sub_412320()
{
    struct_0 *|struct_1 * v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    unsigned int|char v5;  // [bp-0x4c]
    char v6[2];  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    struct_1 *v8;  // [bp+0x8]
    unsigned int v9;  // [bp+0x10]
    unsigned long v10;  // rcx
    unsigned long v11;  // r8
    unsigned int v12;  // r13d
    unsigned long v13;  // rdi
    unsigned long v14;  // rsi
    unsigned long v15;  // r12
    char v16[2];  // rdx
    unsigned long|unsigned int v17;  // eax
    unsigned long long v18;  // rax
    char *|unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9
    unsigned long|unsigned long long * v26;  // rax
    unsigned long|unsigned int v27;  // rdx
    unsigned long v29;  // rax
    char v30[3];  // rcx
    unsigned long v31;  // rsi
    unsigned long long v32;  // rcx
    char *v33;  // rdi
    char v34[3];  // rsi
    unsigned long long v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long v37;  // d
    unsigned long long v38;  // cc_dep1
    unsigned int v39;  // ecx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rcx
    unsigned long long|unsigned int v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long|unsigned int v46;  // rbp
    unsigned long long v47;  // rax
    char v48[3];  // r14
    unsigned long v49;  // r13
    char *|char [2] v50;  // r15
    char v51[3];  // rax
    unsigned int v52;  // ecx
    char v53[3];  // r8
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rdx
    unsigned int v57;  // eax
    char *v58;  // rax
    unsigned long long v59;  // r14
    char v60;  // r14b
    unsigned long long v61;  // r14
    char v62;  // r14b
    unsigned long long v63;  // rax

    v3 = v10;
    v4 = v11;
    v12 = v8->field_4;
    if ((unsigned int)v13 > 0)
    {
        v17 = v0->field_0;
        v46 = v13;
        v15 = v14;
        v50 = v16;
        v0->field_10 = 0;
        if (!((unsigned int)v17 != 0))
        {
            v0->field_0 = 1;
            v17 = 1;
        }
        else if (v0->field_18 != 0)
        {
            v18 = v16[0];
            v19 = v0->field_20;
            if (((char)(v18 - 43) & 253) == 0)
            {
                v20 = v50[1];
                v50 = &v50[1];
                v49 = (unsigned int)(v20 == 58? 0 : (unsigned int)r13<8>);
            }
        }
        if ((unsigned int)v17 == 0 || v0->field_18 == 0)
        {
            *((unsigned long *)&v0->field_30) = v17;
            *((unsigned long *)&v0->field_2c) = v17;
            v0->field_20 = 0;
            if (!(v16[0] != 45))
            {
                v0->field_28 = 2;
                v50 = &v16[1];
                v19 = 0;
            }
            else if (v16[0] != 43)
            {
                v19 = 0;
                if (v9 == 0)
                {
                    v5 = v22;
                    v23 = getenv("POSIXLY_CORRECT");
                    v24 = v5;
                    if (v23 != 0)
                    {
                        v19 = v0->field_20;
                    }
                    else
                    {
                        v0->field_28 = 1;
                        v19 = v0->field_20;
                    }
                }
                if (v9 != 0 || v23 != 0)
                {
                    v0->field_28 = 0;
                }
            }
            else
            {
                v0->field_28 = 0;
                v50 = &v16[1];
                v19 = 0;
            }
            v0->field_18 = 1;
            v18 = v50[0];
        }
        if ((unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)
        {
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13<8>);
        }
        if (*(v19) == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || ((char)(v18 - 43) & 253) == 0 && v8->field_20 == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
        {
            v26 = v0->field_0;
            if (v0->field_30 > v0->field_0)
            {
                v0->field_30 = v8->field_0;
            }
            if (v8->field_0 < v0->field_2c)
            {
                v0->field_2c = v8->field_0;
            }
            if (v0->field_28 == 1)
            {
                v27 = v0->field_30;
                if (v0->field_2c != v0->field_30)
                {
                    if (v8->field_0 != v8->field_30)
                    {
                        v5 = v24;
                        sub_411c20();
                        v27 = v0->field_0;
                        v24 = v5;
                    }
                }
                else
                {
                    if (v8->field_0 != v8->field_30)
                    {
                        v0->field_2c = v8->field_0;
                        v27 = v26;
                    }
                }
                if ((unsigned int)v13 > (unsigned int)v27)
                {
                    v29 = v27;
                    while (true)
                    {
                        v30 = *((long long *)(v15 + v29 * 8));
                        v31 = v29;
                        v27 = v29;
                        if (*((char *)*((long long *)(v15 + (v29 << 3)))) == 45 && v30[1] != 0)
                        {
                            v26 = (unsigned long long)v0->field_0;
                        }
                        if (v30[1] == 0 || *((char *)*((long long *)(v15 + (v29 << 3)))) != 45)
                        {
                            v27 = v31 + 1;
                            v29 += 1;
                            v0->field_0 = (unsigned int)v31 + 1;
                            if ((unsigned int)v13 <= (unsigned int)v29)
                            {
                                break;
                            }
                        }
                    }
                    if (v30[1] == 0 || *((char *)*((long long *)(v15 + (v29 << 3)))) != 45)
                    {
                        v26 = v27;
                    }
                    else if (*((char *)*((long long *)(v15 + (v29 << 3)))) == 45 && v30[1] != 0)
                    {
                        *((unsigned long *)&v0->field_30) = v27;
                    }
                }
                v26 = v27;
                *((unsigned long *)&v0->field_30) = v27;
            }
            if ((unsigned int)v13 != (unsigned int)v26)
            {
                v32 = 3;
                v33 = "-";
                v48 = *((long long *)(v15 + v26 * 8));
                v34 = *((long long *)(v15 + v26 * 8));
                while (v32 != 0)
                {
                    v32 -= 1;
                    v35 = v34[0];
                    v36 = *(v33);
                    v33 = &v33[v37];
                    v34 = &v34[v37];
                    break;
                }
                v38 = (v35 > v36) - 0 - (v35 < v36);
                if ((char)v38 == 0)
                {
                    v42 = v0->field_2c;
                    v39 = v0->field_30;
                    v40 = (unsigned int)v26 + 1;
                    v0->field_0 = v0->field_2c;
                    if ((unsigned int)v42 != v39)
                    {
                        if (v0->field_2c != v8->field_30)
                        {
                            sub_411c20();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v0->field_2c;
                        v42 = v40;
                    }
                    v0->field_30 = v46;
                    v0->field_0 = v46;
                }
                else if (v48[0] == 45)
                {
                    v41 = v48[1];
                    if (v48[1] != 0 && v3 != 0)
                    {
                        if (!(v41 != 45))
                        {
                            v0->field_20 = &v48[2];
                            v2 = "-";
                            v1 = v49;
                            v0 = v0;
                        }
                        else if (v24 != 0)
                        {
                            if (v48[2] == 0)
                            {
                                *((unsigned long long *)&v5) = v24;
                                v47 = strchr(v50, v41);
                            }
                        }
                    }
                }
            }
            else
            {
                v46 = v0->field_30;
                v42 = v0->field_2c;
            }
        }
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        v0->field_0 = v42;
    }
    if (((unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 > 0 && (unsigned int)v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || *(v19) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
    {
        v44 = (unsigned int)v26 + 1;
        v0->field_10 = v48;
        v45 = 1;
        v0->field_0 = v44;
    }
    if (...)
    {
        v45 = -18446744069414584321;
    }
    if (...)
    {
        v0->field_20 = &v48[1];
        v2 = "-";
        v1 = v49;
        v0 = v8;
        v45 = (unsigned int)sub_411d00();
        if ((unsigned int)v45 == -1)
        {
            v48 = *((long long *)(v15 + (int)v0->field_0 * 8));
        }
    }
    if (...)
    {
        v19 = &v48[1];
    }
    if (...)
    {
        *((char **)&v6[0]) = v19;
        v0->field_20 = &v19[1];
        v45 = *(v19);
        v7 = &v19[1];
        v5 = *(v19);
        v51 = strchr(v50, *(v19));
        v52 = v5;
        v53 = v7;
        if (v6[1] == 0)
        {
            v0->field_0 = v0->field_0 + 1;
        }
        v54 = (unsigned long long)v52 - 58;
        if (v54 > 1 && v51 != 0)
        {
            v55 = v51[1];
            if (v51[0] == 87 && v3 != 0 && v55 == 59 && v6[1] == 0)
            {
                if (v0->field_0 != (unsigned int)v46)
                {
                    v53 = *((long long *)(v15 + (int)v8->field_0 * 8));
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x41a9e0, 0x5);
                        __fprintf_chk();
                    }
                    v0->field_8 = v45;
                    v59 = 0;
                    v60 = *(v50) != 58;
                    v45 = r14<8> * 5 + 58;
                }
            }
        }
    }
    if (...)
    {
        if ((unsigned int)v49 != 0)
        {
            dcgettext(0x0, 0x41aa24, 0x5);
            __fprintf_chk();
        }
        v0->field_8 = v45;
        v45 = 63;
    }
    if (...)
    {
        v56 = v6[1];
        if (v51[2] != 58)
        {
            if (!(v56 == 0))
            {
                v57 = v8->field_0 + 1;
                v0->field_10 = v7;
                v0->field_0 = v57;
            }
            else if ((unsigned int)v46 != v8->field_0)
            {
                v58 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x41a9e0, 0x5);
                    __fprintf_chk();
                }
                v0->field_8 = v45;
                v61 = 0;
                v62 = *(v50) != 58;
                v45 = r14<8> * 5 + 58;
            }
        }
        else
        {
            if (v56 != 0)
            {
                v0->field_10 = v7;
                v0->field_0 = v0->field_0 + 1;
            }
            else
            {
                v0->field_10 = 0;
            }
        }
        v0->field_20 = 0;
    }
    if (...)
    {
        v0->field_20 = v53;
        v0->field_10 = 0;
        v2 = "-W ";
        v1 = v49;
        v0 = v0;
    }
    if (...)
    {
        v45 = (unsigned int)sub_411d00();
    }
    v63 = v45;
    return v63;
}

int sub_40fd60() { crash_skku;
}
int sub_412b90()
{
}

extern unsigned int g_41a212;
extern unsigned int g_41a216;
extern unsigned int g_41a226;
extern unsigned int g_41a23d;
extern unsigned int g_41a298;
extern unsigned int g_41a368;
extern unsigned int g_41a388;
extern unsigned int g_41a3b0;
extern unsigned int g_41a3d8;
extern unsigned int g_41a408;

int sub_410d00()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x68]
    unsigned long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x40]
    unsigned long long v11[9];  // r8
    unsigned long long v12[9];  // rbx
    unsigned long v13;  // rsi
    void *v14;  // rdi
    unsigned long v16;  // r9
    unsigned long long v17;  // r8
    unsigned long long v18;  // r15
    unsigned long long v19;  // r14
    unsigned long v20;  // rsi
    unsigned long long v21;  // r8
    unsigned long long v22;  // r13
    unsigned long long v23;  // r12
    unsigned long long v24;  // r14

    v12 = v11;
    if (v13 != 0)
    {
        __fprintf_chk();
    }
    else
    {
        __fprintf_chk();
    }
    dcgettext(0x0, 0x41a212, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41a298, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x41a216, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x41a226, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x41a23d, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x41a368, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x41a388, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x41a3b0, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x41a3d8, 0x5);
        *((unsigned long long [9])&v5) = v11[6];
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 8:
        v22 = v12[6];
        v23 = v12[5];
        v18 = v12[4];
        *((unsigned long long [9])&v8) = v12[7];
        v19 = v12[3];
        *((unsigned long long [9])&v6) = v12[2];
        *((unsigned long long [9])&v7) = v12[1];
        dcgettext(0x0, 0x41a408, 0x5);
    case 9:
        v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v21 = v11[1];
        v22 = v12[6];
        v23 = v12[5];
        *((unsigned long long [9])&v9) = v12[8];
        v18 = v12[4];
        v19 = v12[3];
        *((unsigned long long [9])&v8) = v12[7];
        *((unsigned long long [9])&v6) = v12[2];
        v7 = v21;
    default:
        v20 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v17 = v11[1];
        v22 = v12[6];
        v23 = v12[5];
        *((unsigned long long [9])&v9) = v12[8];
        v18 = v12[4];
        v19 = v12[3];
        *((unsigned long long [9])&v8) = v12[7];
        *((unsigned long long [9])&v6) = v12[2];
        v7 = v17;
    }
    dcgettext(0x0, v20, 0x5);
    v5 = v9;
    v4 = v24;
    __fprintf_chk();
    return v4;
    return __fprintf_chk();
    v4 = v8;
    v3 = v22;
    v2 = v23;
    v1 = v18;
    v0 = v19;
    return __fprintf_chk();
}

extern unsigned int g_418690;

int sub_405550()
{
    char v1[39];  // r8
    char v2[39];  // rbp
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rbx
    char v5;  // bl
    unsigned int *v6;  // r13
    unsigned long long v8;  // rbx
    unsigned long|unsigned int v9;  // rbx
    unsigned long long v10;  // rax

    v2 = v1;
    if (v1[4 + 5] != 0)
    {
        v6 = __errno_location();
        if (v1[4 + 3] != 0)
        {
            v9 = v2[4 + 6];
            if (v2[4 + 6] == 0)
            {
                *(v6) = 95;
            }
        }
        if (v1[4 + 3] == 0 || v2[4 + 6] != 0)
        {
            *(v6) = 95;
            v8 = (unsigned int)sub_40ea00();
            error(0x0, *(v6), (unsigned long long)dcgettext(0x0, 0x418690, 0x5));
            v9 = v1[4 + 6];
        }
        v10 = v9 ^ 1;
        return v10;
    }
    v4 = v3;
    v5 = (char)v3 & v1[4 + 1];
    if (((char)v3 & v1[4 + 1]) == 0)
    {
        return 1;
    }
    *(__errno_location()) = 95;
    return rbx<8>;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409960()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    struct_0 *v3;  // rdi

    v0 = v2;
    free(v3->field_10);
}

typedef struct struct_0 {
    char padding_0[33];
    char field_21;
} struct_0;

extern unsigned int g_61f440;
extern unsigned int g_621544;
extern unsigned int g_621550;

int sub_403f50()
{
    unsigned long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    struct_0 *v6;  // rdx

    v3 = 0;
    v2 = g_621544;
    v1 = g_621550;
    v0 = g_61f440;
    if ((unsigned long long)(unsigned int)(sub_40c770() ^ 1) == 0 && v6->field_21 != 0)
    {
        *(__errno_location()) = 95;
    }
    return stack_base + 0;
}

int sub_40f480()
{
    unsigned long v2;  // rbx
    unsigned int *v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned int v6;  // r12d
    unsigned int *v7;  // rbx

    if (v2 != 0)
    {
        v2 = sub_40abc0();
        v4 = (unsigned int)sub_40f0e0();
        if (closedir() == 0)
        {
            return stack_base + 0;
        }
        v6 = *(v3);
        v3 = __errno_location();
        free(v3);
        *(v7) = v6;
        return 0;
    }
    return 0;
}

int sub_40e8e0()
{
}

extern int512_t g_419120;

int sub_40b4d0()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4296992)
    {
        v3 = v2[1];
        if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1 && (((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
        {
            v4 = 0;
            v5 = v2[0];
            if (((char)(BinaryOp CmpF & 69) & 1) == 0)
            {
                v6 = (unsigned long long)(unsigned int)xmm1<16> + 4568451461323476173;
            }
        }
        if (...)
        {
            *(v1) = &g_419120;
            return 0;
        }
    }
    if (...)
    {
        return 1;
    }
}

int sub_404d10()
{
}

int sub_40c59a()
{
    unsigned long long *v1;  // rsi
    unsigned long long *v3;  // rdi
    unsigned long long v5;  // rax
    char v6;  // al

    v5 = strcmp(*(v3), *(v1));
    v6 = (unsigned int)v5 == 0;
    return rax<8>;
}

extern unsigned int g_419088;
extern unsigned int g_61f468;
extern unsigned long long g_6219a8;

int sub_40aa00()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v7;  // r12
    unsigned int *v8;  // rbp
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax

    v1 = v3;
    v0 = v4;
    v5 = sub_411b90();
    if (sub_412f20() != 0 || v5 != 0)
    {
        while (true)
        {
            v11 = sub_411bc0();
            if (v11 == 0)
            {
                v12 = sub_411b50();
                if (v12 != 0)
                {
                    sub_412f20();
                }
            }
            if (v12 == 0 || v11 != 0)
            {
                if (sub_412f20() == 0)
                {
                    break;
                }
            }
            v7 = dcgettext(0x0, 0x419088, 0x5);
            v8 = __errno_location();
            if (g_6219a8 != 0)
            {
                sub_40eaa0();
                error(0x0, *(v8), "%s: %s");
            }
            else
            {
                error(0x0, *(v8), "%s");
            }
            sub_40ab20();
            _exit(g_61f468);
        }
    }
}

extern unsigned int g_4190a2;
extern unsigned int g_61f468;
extern char g_6219b0;
extern unsigned long long g_6219b8;

int sub_40ab20()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_412f20();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_6219b0 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x4190a2, 0x5);
            if (g_6219b8 != 0)
            {
                sub_40eaa0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_6219b0 != 0)
    {
        v3 = sub_412f20();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_6219b0 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_61f468);
        error(0x0, *(v2), "%s");
    }
}

int sub_40ea00()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_413d10()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_8 = v2;
    return v3;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_40b6a0()
{
    struct_0 *v1;  // rdi

    return v1->field_10;
}

int sub_412970()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4128f0();
}

int sub_40fa60()
{
    char v0;  // [bp-0x98]
    unsigned int v2;  // edi
    unsigned int v3;  // ebx
    unsigned int *v4;  // rax
    unsigned int v6;  // eax
    char v7;  // al

    v3 = __lxstat(0x1, v2, (unsigned int)&v0);
    v4 = __errno_location();
    if (v3 != 0 && *(v4) != 75)
    {
        v6 = 0;
        v7 = *(v4) != 2;
        return 0 - rax<4>;
    }
    if (v3 == 0 || *(v4) == 75)
    {
        *(v4) = 17;
        return -18446744069414584321;
    }
}

int sub_412f80()
{
    char v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // rdi
    unsigned long long v4[2];  // rbx
    unsigned long long v5;  // rax

    v4 = v3;
    v5 = clock_gettime();
    if ((unsigned int)v5 != 0)
    {
        gettimeofday(&v0, NULL);
        v4[0] = *((long long *)&v0);
        v5 = v1 * 1000;
        v4[1] = v1 * 1000;
    }
    return v5;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b6d0()
{
    unsigned long long v1[2];  // rdi
    unsigned long long v2[2];  // rsi
    unsigned long long v3;  // rdi
    struct_0 *v4;  // rdx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax

    v2 = *(v1);
    v3 = v1[1];
    v6 = 0;
    if (v2 >= v3)
    {
        return 0;
    }
    while (true)
    {
        if (*(v2) == 0)
        {
            v2 = &v2[2];
            if (v2 >= v3)
            {
                break;
            }
        }
        else
        {
            v4 = v2[1];
            v5 = 1;
            if (v2[1] != 0)
            {
                do
                {
                    v4 = v4->field_8;
                    v5 += 1;
                }
                while (v4 != 0);
            }
            v6 = (v6 < v5? v5 : v6);
            v2 = &v2[2];
            if (v2 >= v3)
            {
                break;
            }
        }
    }
    return v6;
}

int sub_411380()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    unsigned long long v4;  // rax

    v4 = v2 * v3;
    v4 = (char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, rsi<8>, rdx<8>, cc_ndep<8>);
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (rsi<8> Mull rdx<8>)), 0x0<64>, cc_ndep<8>)))
    {
        v4 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, t1, cc_ndep<8>);
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Conv(128->64, (rsi<8> Mull rdx<8>)), 0x0<64>, cc_ndep<8>) || [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, t1, cc_ndep<8>) != 0)
    {
        v0 = v4;
        sub_411530(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    char field_8;
} struct_0;

int sub_409e00()
{
    unsigned long v1;  // rdi
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rax
    struct_0 *v7;  // rax
    unsigned long long v8;  // rax

    v4 = v3;
    v5 = (unsigned int)sub_40ad40() - v1;
    if (v5 + 9 > 0x100)
    {
        v4 = malloc(v5 + 9);
        if (v4 == 0)
        {
            v8 = 0;
        }
    }
    if (v5 + 9 <= 0x100 || v4 != 0)
    {
        v7 = mempcpy(v4, v1, v5);
        v7->field_0 = 6365935209750754627;
        v7->field_8 = 0x7e0039322e3800;
        v8 = v4;
    }
    return v8;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_1 *field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_0;

typedef struct struct_2 {
    char padding_0[4];
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
} struct_3;

int sub_40c330()
{
    unsigned long long *v0;  // [bp-0x20]
    void tmp_10;  // tmp #10
    void tmp_15;  // tmp #15
    struct_0 *v2;  // rdi
    unsigned long long v3[10];  // rbx
    unsigned long long v5;  // cc_dep1
    unsigned long long v6;  // rax
    uint128_t v7;  // xmm0
    unsigned long long v8;  // rax
    unsigned int v9;  // ymm0
    unsigned long long v10;  // rdx
    unsigned long|uint128_t|unsigned long long|unsigned int v11;  // xmm0lq
    uint128_t v12;  // xmm1
    unsigned long long v13;  // rax
    uint128_t v14;  // xmm1
    unsigned int v15;  // ymm1
    unsigned long long v16;  // xmm1lq
    struct_2 *v18;  // rdx
    uint128_t v19;  // xmm0
    uint128_t v20;  // xmm0
    unsigned int v21;  // ymm0
    unsigned long|uint128_t|unsigned int v22;  // xmm1
    uint128_t v23;  // xmm1
    unsigned int v24;  // ymm1
    uint128_t v25;  // xmm2
    unsigned int v26;  // ymm2
    unsigned long long v27;  // xmm2lq
    uint128_t v28;  // xmm0
    struct_3 *v30;  // rdi
    void *v31;  // r12

    v3 = v2;
    if (sub_40b3b0() != 0)
    {
        v3[4] = v3[4] - 1;
        if (*(v0) == 0)
        {
            v5 = v3[3];
            v6 = v3[3] - 1;
            v3[3] = v3[3] - 1;
            if (!((char)(v5 - 1 >> 63)))
            {
                v11 = 0;
                v10 = v3[5];
                v11 = v2->field_18 - 1;
                v8 = v3[2];
            }
            else
            {
                v7 = 0;
                tmp_10 = v6 % 2 | (unsigned int)v6 & 1;
                v8 = v3[2];
                v9 = tmp_10;
                v10 = v3[5];
                v11 = (unsigned long long)(unsigned int)xmm0<16> * 2;
            }
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                v12 = 0;
                v12 = (unsigned int)v8;
            }
            else
            {
                tmp_15 = v8;
                v13 = (unsigned int)v8 & 1;
                v14 = 0;
                v15 = tmp_15 >> 1 | v13;
                v12 = xmm1<16> * 2;
            }
            xmm1<8> = Conv(128->64, (xmm1<16> * Conv(32->128, Load(addr=rdx<8>, size=4, endness=Iend_LE))))
            if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
            {
                sub_40b4d0();
                v18 = v3[5];
                if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                {
                    v19 = 0;
                    v19 = (unsigned int)v2->field_10;
                }
                else
                {
                    v20 = 0;
                    v21 = v2->field_10 >> 1 | (unsigned int)v2->field_10 & 1;
                    v19 = xmm0<16> * 2;
                }
                if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=(rbx<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                {
                    v22 = 0;
                    v22 = v2->field_18;
                }
                else
                {
                    v23 = 0;
                    v24 = v2->field_18 >> 1 | (unsigned int)v2->field_18 & 1;
                    v22 = (unsigned long long)(unsigned int)xmm1<16> * 2;
                }
                v25 = 0;
                v26 = *(v2->field_28);
                v27 = xmm2<16> * v19;
                if ((((char)(BinaryOp CmpF & 69) | (char)((unsigned long long)(unsigned int)(BinaryOp CmpF & 69) >> 6)) & 1) != 1)
                {
                    xmm0<16> = (xmm0<16> * Conv(32->128, Load(addr=(rdx<8> + 0x4<64>), size=4, endness=Iend_LE)))
                    if (v18->field_10 == 0)
                    {
                        xmm0<16> = (xmm0<16> * Conv(32->128, Load(addr=(rdx<8> + 0x8<64>), size=4, endness=Iend_LE)))
                    }
                    if (sub_40be70() == 0)
                    {
                        v30 = v3[9];
                        if (v3[9] != 0)
                        {
                            while (true)
                            {
                                v31 = v30->field_8;
                                free(v30);
                                v30 = v31;
                                if (v31 == 0)
                                {
                                    break;
                                }
                            }
                        }
                        v3[9] = 0;
                    }
                }
            }
        }
    }
    return stack_base + 0;
}

int sub_413800()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = (unsigned int)sub_413a20();
    v2 = 0;
    if (v1 != 0)
    {
        v2 = sub_4112e0();
        *((unsigned long long *)v2) = v1;
        *((long long *)(v2 + 16)) = 0;
        *((long long *)(v2 + 8)) = 0;
    }
    return v2;
}

int sub_40ec70()
{
    unsigned int *|unsigned int v0;  // [bp-0x160]
    char v1;  // [bp-0x158]
    unsigned int v2;  // [bp-0x140]
    char v3;  // [bp-0xc8]
    unsigned int v4;  // [bp-0xb0]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    char v7;  // [bp+0x0]
    unsigned int v9;  // edi
    unsigned int v10;  // r14d
    unsigned long v11;  // rdx
    unsigned int v12;  // r13d
    char *v13;  // rsi
    char *v14;  // rcx
    unsigned int v15;  // r8d
    unsigned int v16;  // r13
    unsigned long v17;  // r14
    unsigned long long v18;  // rdx
    unsigned int *v19;  // r9
    unsigned long long v20;  // rax
    unsigned long long v21;  // r15b
    unsigned long long v22;  // rax
    unsigned int v23;  // eax
    unsigned long long v24;  // rbp
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    v10 = v9;
    v12 = v11;
    v18 = syscall(0x13c, v9, (unsigned int)v13, v11, (unsigned int)v14, v15, *((int *)&v5), (unsigned int)&v7, *((int *)&v6), v16, v17, v21);
    if ((unsigned int)v18 < 0)
    {
        v0 = v18;
        v19 = __errno_location();
        v20 = *(v19);
        v21 = ((unsigned int)(v20 - 22) & -17) != 0 & (unsigned int)v20 != 95;
        if ((((unsigned int)(v20 - 22) & -17) != 0 & (unsigned int)v20 != 95) == 0)
        {
            if (v15 != 0)
            {
                if ((v15 & -2) != 0)
                {
                    *(v19) = 95;
                    v18 = -18446744069414584321;
                }
                else
                {
                    v0 = v19;
                    v22 = __fxstatat(0x1, v16, (unsigned int)v14, (unsigned int)&v3, 0x100);
                    v19 = v0;
                    if (v22 != 0)
                    {
                        v23 = *(v19);
                        if (*(v19) != 75 && v23 == 2)
                        {
                            v21 = 1;
                        }
                    }
                    if (*(v19) == 75 || v22 == 0)
                    {
                        *(v0) = 17;
                        v18 = -18446744069414584321;
                    }
                }
            }
            if (v15 == 0 || (v15 & -2) == 0 && v23 == 2 && *(v19) != 75 && v22 != 0)
            {
                v0 = v19;
                v24 = strlen(v13);
                v25 = strlen(v14);
            }
            if (v13[v24 + -1] == 47 && v24 != 0 && v25 != 0 && ((v15 & -2) == 0 || v15 == 0) && (v15 == 0 || v23 == 2) && (v15 == 0 || *(v19) != 75) && (v15 == 0 || v22 != 0) || v14[v25 + -1] == 47 && v24 != 0 && v25 != 0 && v13[v24 + -1] != 47 && ((v15 & -2) == 0 || v15 == 0) && (v15 == 0 || v23 == 2) && (v15 == 0 || *(v19) != 75) && (v15 == 0 || v22 != 0))
            {
                v0 = v0;
                v26 = __fxstatat(0x1, v9, (unsigned int)v13, (unsigned int)&v1, 0x100);
                if (v26 == 0)
                {
                    if (!(v21 != 0))
                    {
                        v0 = v0;
                        v27 = __fxstatat(0x1, v16, (unsigned int)v14, (unsigned int)&v3, 0x100);
                        if (v27 == 0)
                        {
                            if (((unsigned short)v4 & 0xf000) != 0x4000)
                            {
                                *(v0) = 20;
                            }
                            else
                            {
                                if (((unsigned short)v2 & 0xf000) != 0x4000)
                                {
                                    *(v0) = 21;
                                    v18 = -18446744069414584321;
                                }
                            }
                        }
                    }
                    else if (((unsigned short)v2 & 0xf000) != 0x4000)
                    {
                        *(v0) = 2;
                        v18 = -18446744069414584321;
                    }
                }
            }
            if (...)
            {
                v18 = -18446744069414584321;
            }
            if (...)
            {
                v18 = renameat(v9, (unsigned int)v13, v16, (unsigned int)v14);
            }
        }
    }
    return v18;
}

extern unsigned int g_41703f;
extern unsigned long long g_6219c0;
extern unsigned long long stdout[7];

int sub_403fc0()
{
    unsigned int v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xdc]
    unsigned long v2;  // [bp-0xd8]
    unsigned long v3;  // [bp-0xd0]
    unsigned long long v4[7];  // [bp-0xb8]
    unsigned long v5;  // [bp-0xb0]
    unsigned long v6;  // [bp-0xa8]
    unsigned long v7;  // [bp-0xa0]
    void v8;  // [bp-0x98]
    void v9;  // [bp-0x88]
    void v10;  // [bp-0x78]
    void v11;  // [bp-0x68]
    void v12;  // [bp-0x58]
    void v13;  // [bp-0x48]
    void v14;  // [bp-0x38]
    void v15;  // [bp-0x28]
    unsigned long long v16;  // [bp-0x10]
    unsigned long|unsigned long long v17;  // [bp-0x8]
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rsi
    unsigned long long v23[7];  // rbx
    unsigned long v24;  // rcx
    unsigned long v25;  // r8
    unsigned long v26;  // r9
    void v27;  // xmm0
    void v28;  // xmm1
    void v29;  // xmm2
    void v30;  // xmm3
    void v31;  // xmm4
    void v32;  // xmm5
    void v33;  // xmm6
    void v34;  // xmm7
    char *v38;  // rax
    unsigned long long v39;  // rbx

    v17 = v19;
    v20 = (unsigned int)sub_40ea00();
    v21 = v17;
    v22 = dcgettext(0x0, 0x41703f, 0x5);
    v17 = stack_base + 0;
    v16 = v21;
    v23 = stdout;
    v4[0] = stdout;
    v5 = v24;
    v6 = v25;
    v7 = v26;
    if (false)
    {
        v8 = v27;
        v9 = v28;
        v10 = v29;
        v11 = v30;
        v12 = v31;
        v13 = v32;
        v14 = v33;
        v15 = v34;
    }
    fputs_unlocked(g_6219c0, stdout);
    fwrite_unlocked(": ", 0x1, 0x2, stdout);
    v0 = 16;
    v2 = stack_base + 8;
    v1 = 48;
    v3 = stack_base + -200;
    sub_412a70();
    v38 = v23[5];
    if (v23[5] < v23[6])
    {
        v23[5] = stdout[5] + 1;
        *(v38) = 10;
    }
    else
    {
        v38 = __overflow((unsigned int)v23, 0xa);
    }
    v39 = v16;
    return v38;
}

extern char g_0;

int sub_40c5e0()
{
    unsigned long v0;  // [bp-0x50]
    char v1;  // [bp-0x44]
    unsigned long long v3;  // rdx
    unsigned long long v4;  // r14
    char v5[2];  // r13
    unsigned long v7;  // rsi
    unsigned long long v8;  // rax
    char v9;  // r15b
    unsigned long long v10;  // rax
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    char v13[2];  // rsi
    unsigned long long|char [2] v14;  // rdi
    unsigned long|unsigned int v15;  // r15
    char v17[2];  // r12
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned int *v20;  // rax

    v4 = v3;
    v5 = v14;
    v17 = v14;
    v0 = v7;
    *((char **)&v1) = &g_0;
    while (true)
    {
        v17 = &v17[1];
        v18 = v17[-1 + 7];
        if ((char)v18 != 0)
        {
            while (true)
            {
                v8 = v17[0];
                if (v17[0] != 47)
                {
                    v9 = v18 == 47 & v8 != 0;
                    if (true)
                    {
                        break;
                    }
                    v10 = &g_0 - v5;
                    if (&g_0 - v5 != 1)
                    {
                        *((char **)&g_0) = &g_0;
                        if (v5[1] == 46 && v5[0] == 46 && v10 == 2)
                        {
                            v15 = &g_0;
                            *((char **)&v1) = &g_0;
                        }
                    }
                    else if (v5[0] != 46)
                    {
                        *((char **)&g_0) = &g_0;
                    }
                    if (&g_0 - v5 == 1 && v5[0] != 46 || v5[1] != 46 && &g_0 - v5 != 1 || v5[0] != 46 && &g_0 - v5 != 1 || v10 != 2 && &g_0 - v5 != 1)
                    {
                        v12 = v11;
                        v13 = v5;
                        v14 = v14;
                        v10 = r14<8>();
                        if (v10 >= 0)
                        {
                            v1 = v9;
                            v15 = &g_0;
                        }
                        else
                        {
                            v15 = (unsigned int)*(__errno_location());
                        }
                    }
                    if ((&g_0 - v5 != 1 || v5[0] != 46) && (unsigned int)v10 != -1)
                    {
                        g_0 = 47;
                    }
                    if (((unsigned int)v10 == 0 || &g_0 - v5 == 1) && ((unsigned int)v10 == 0 || v5[0] == 46) && (&g_0 - v5 == 1 || (unsigned int)v10 != -1) && (v5[0] == 46 || (unsigned int)v10 != -1))
                    {
                        v5 = v17;
                        v17 = &v17[1];
                        v18 = v17[-1 + 7];
                    }
                    else
                    {
                        if (v15 != 0)
                        {
                            v20 = __errno_location();
                            if (*(v20) == 2)
                            {
                                *((unsigned long *)&v20) = v15;
                            }
                        }
                        v10 = (unsigned int)sub_40f520();
                    }
                }
            }
            if (true)
            {
                v17 = &v17[1];
                v18 = v17[-1 + 7];
            }
            else if (false)
            {
                v19 = v5 - v14;
            }
            else if (false)
            {
                return v19;
            }
        }
        v19 = v5 - v14;
    }
    return v19;
}

int sub_40fd50()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax<8>;
}

int sub_4143d0()
{
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409980()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    struct_0 *v6;  // rax
    struct_0 *v7;  // rbx

    v0 = v4;
    v1 = v5;
    v2 = 0;
    v6 = sub_40c330();
    if (v6 != 0)
    {
        v7 = v6;
        free(v6->field_10);
        v6 = free(v7);
    }
    return v6;
}

int sub_411440() { crash_skku;
}
typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_61f4b8;
extern uint128_t g_61f4c0;
extern unsigned int g_61f4d0;
extern int512_t g_6219e0;

int sub_40e400()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x50]
    unsigned long|unsigned long long v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x40]
    unsigned int v6;  // [bp-0x3c]
    unsigned long long v8;  // rcx
    struct_0 *v9;  // rbp
    unsigned long v10;  // rsi
    unsigned int *v11;  // r13
    unsigned long v13;  // rdi
    uint128_t *v15;  // rax
    unsigned long long v16;  // rax
    uint128_t *v17;  // rbx
    unsigned long long v19[2];  // rbx
    void *v20;  // r12
    unsigned long long v21;  // rax
    unsigned long long v22;  // rsi
    unsigned long long v24;  // rax

    v9 = v8;
    v3 = v10;
    v17 = g_61f4b8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_61f4d0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_61f4b8 != 6419648)
            {
                v16 = sub_411340();
                g_61f4b8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_411340();
                v17 = v15;
                g_61f4b8 = v15;
                *(v15) = g_61f4c0;
            }
            memset(&v17[(long long)(int)g_61f4d0], 0x0, (int)((unsigned int)v13 + 1 - g_61f4d0) * 16);
            g_61f4d0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_411530(); /* do not return */
        }
    }
    if (g_61f4d0 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_40d1d0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6429152)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4112e0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_40d1d0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_40b2c0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rcx
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // r8
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rdi

    v2 = (10 <= v1? v1 : 10) | 1;
    if (((10 <= v1? v1 : 10) | 1) != -1)
    {
        while (true)
        {
            v3 = v2 - (v2 * 12297829382473034411 >> 64 >> 1) * 3;
            v5 = v2 - (v2 * 12297829382473034411 >> 64 >> 1) * 3;
            if (v2 > 9 && v3 != 0)
            {
                v6 = 16;
                v8 = 9;
                v7 = 3;
                do
                {
                    v7 += 2;
                    v8 += v6;
                    v4 = (0 CONCAT v2) % v7 >> 64;
                    v5 = (0 CONCAT v2) % v7 >> 64;
                    v6 += 8;
                }
                while (v8 < v2 && v4 != 0);
                if (true)
                {
                    if (v5 != 0)
                    {
                        break;
                    }
                }
                else if (v8 < v2)
                {
                    v2 += 2;
                    if (v2 == -1)
                    {
                        break;
                    }
                }
            }
        }
    }
    return v2;
}

extern int512_t g_621ae0;

int sub_40e640()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_621ae0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_621ae0 : v1) + 4)) = v3;
    return v2;
}

extern unsigned long long g_6219a0;

int sub_40a3e0()
{
    unsigned long long v0;  // [bp-0x90]
    void *v1;  // [bp-0x88]
    unsigned long|unsigned long long|unsigned short|char v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long|unsigned int v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x60]
    unsigned int v7;  // [bp-0x58]
    unsigned long v8;  // [bp-0x50]
    unsigned long|unsigned long long v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x40]
    void *v12;  // rdi
    unsigned short *|unsigned long long|void *|unsigned int * v13;  // rbx
    unsigned int v14;  // esi
    unsigned long long v15;  // rax
    unsigned long long v17;  // rax
    unsigned long long v19;  // r12
    unsigned long long v22;  // r13
    unsigned long long v23;  // rax
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long|unsigned long long v29;  // r8b
    unsigned long long v30;  // rax
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // rax
    unsigned long v34;  // rdx
    unsigned long v35;  // rax
    unsigned long long v36;  // r8
    unsigned long long v37;  // rsi
    char v38;  // sil
    unsigned long long v40;  // rax
    unsigned long|unsigned int v41;  // rdx
    char *v42;  // rax
    unsigned long long v43;  // r15
    unsigned long long v44;  // rcx
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rbp
    char *|unsigned long long v49;  // r14
    unsigned long long v50;  // rax
    unsigned int v52;  // ebp
    unsigned long long v53;  // rdi
    unsigned int *v54;  // rbx
    unsigned long long v57;  // rdi
    unsigned long long v58;  // rax

    v13 = v12;
    v1 = v12;
    v7 = v14;
    v49 = (unsigned long long)(unsigned int)sub_40ad40() - v12;
    v15 = &v49[strlen(v49)];
    v0 = v15;
    if (g_6219a0 == 0)
    {
        sub_40a380();
    }
    v17 = strlen(g_6219a0);
    *((unsigned long long *)&v10) = v17 + 1;
    *((unsigned long long *)&v6) = v0 + 1;
    v8 = (9 <= v17 + 1? v17 + 1 : 9) + v0 + 1;
    v43 = malloc((9 <= v17 + 1? v17 + 1 : 9) + v0 + 1);
    if (v43 != 0)
    {
        v19 = 0;
        while (true)
        {
            memcpy(v43, v1, *((long long *)&v6));
            if (v7 != 1)
            {
                v13 = &v49[v43];
                v22 = (unsigned int)sub_40ada0();
                if (v19 != 0)
                {
                    rewinddir(v19);
                }
                else
                {
                    v23 = *(v13);
                    *(v13) = 46;
                    *((unsigned long long *)&v2) = v23;
                    v19 = (unsigned int)sub_40abc0();
                    if (v19 != 0)
                    {
                        *(v13) = v2;
                        *((int *)v3) = 2117172782;
                        *((char *)(v3 + 4)) = 0;
                    }
                    else
                    {
                        v3 = v44;
                        __errno_location();
                        *(v13) = v2;
                        v46 = 0 + 2;
                        *((int *)v3) = 2117172782;
                        *((char *)(v3 + 4)) = 0;
                    }
                }
                if (v19 != 0 || v19 != 0)
                {
                    v46 = 2;
                    v3 = 1;
                    v4 = v8;
                    v5 = v22 + 4;
                    while (true)
                    {
                        v25 = readdir();
                        if (v25 == 0)
                        {
                            break;
                        }
                        while (true)
                        {
                            v13 = v25 + 19;
                            v26 = strlen(v25 + 19);
                            if (v26 < v5)
                            {
                                break;
                            }
                            v2 = v22 + 2;
                            v27 = memcmp(&v49[v43], v13, v22 + 2);
                            if (v27 != 0)
                            {
                                break;
                            }
                            v13 += v2;
                            v28 = (char)*((char *)v13);
                            if ((v28 - 49 & 255) > 8)
                            {
                                break;
                            }
                            v44 = 1;
                            v29 = (char)(v28 == 57);
                            v30 = (char)*((char *)(v13 + 1));
                            if (*((char *)(v13 + v44 + 1)) != 0 || v30 != 126)
                            {
                                break;
                            }
                            if ((unsigned int)(char)*((char *)(v13 + 1)) - 48 <= 9)
                            {
                                do
                                {
                                    v44 += 1;
                                    v29 &= (unsigned int)v30;
                                    v30 = (char)*((char *)(v13 + v44));
                                }
                                while ((unsigned int)(char)*((char *)(v13 + v44)) - 48 <= 9);
                            }
                            v45 = v3;
                            v32 = v3;
                            if (v3 >= v44)
                            {
                                v9 = v44;
                                *((unsigned long long *)&v2) = v29;
                                if (v32 != v44)
                                {
                                    break;
                                }
                                v33 = memcmp(v43 + v0 + 2, v13, v45);
                                v29 = v2;
                                v44 = v9;
                                if (v33 > 0)
                                {
                                    break;
                                }
                            }
                            v34 = v29;
                            v46 = v29;
                            v3 = v9 + v44;
                            v35 = v0 + v9 + v44 + 4;
                            if (v0 + v9 + v44 + 4 > v4)
                            {
                                v37 = 0;
                                v38 = [D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>);
                                if (rsi<8> == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), Load(addr=stack_base-112, size=8, endness=Iend_LE), cc_ndep<8>)))
                                {
                                    *((unsigned long *)&v4) = v4 * 2;
                                }
                                if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), Load(addr=stack_base-112, size=8, endness=Iend_LE), cc_ndep<8>) || rsi<8> != 0)
                                {
                                    *((unsigned long *)&v4) = v35;
                                }
                                v9 = v34;
                                v2 = v44;
                                v36 = realloc(v43, *((long long *)&v4));
                                if (v36 == 0)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v36 = v43;
                            }
                            v9 = v36;
                            v2 = v44;
                            *((short *)(v0 + v36)) = 32302;
                            *((char *)(v0 + v36 + 2)) = 48;
                            v40 = memcpy(v0 + v36 + v9 + 2, v13, v44 + 2);
                            v41 = (char)*((char *)(v2 + v40 - 1));
                            v42 = v2 + v40 - 1;
                            if (v41 == 57)
                            {
                                do
                                {
                                    *(v42) = 48;
                                    v42 = &v42[-1];
                                    v41 = *(v42);
                                }
                                while (*(v42) == 57);
                            }
                            v45 = (unsigned long long)v41 + 1;
                            v43 = v9;
                            *((unsigned long long *)&v42) = v45;
                            v25 = readdir();
                        }
                        if (true)
                        {
                            v25 = readdir();
                        }
                        else if (*((char *)(v13 + v44 + 1)) == 0 && (v3 < v44 || v32 == v44) && (v3 < v44 || v33 <= 0) && v0 + v9 + v44 + 4 > v4 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), Load(addr=stack_base-112, size=8, endness=Iend_LE), cc_ndep<8>)) && rsi<8> == 0 || *((char *)(v13 + v44 + 1)) == 0 && (v3 < v44 || v32 == v44) && (v3 < v44 || v33 <= 0) && v0 + v9 + v44 + 4 > v4 && (char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), Load(addr=stack_base-112, size=8, endness=Iend_LE), cc_ndep<8>) || *((char *)(v13 + v44 + 1)) == 0 && (v3 < v44 || v32 == v44) && (v3 < v44 || v33 <= 0) && v0 + v9 + v44 + 4 > v4 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x4<64>, Load(addr=stack_base-112, size=8, endness=Iend_LE), Load(addr=stack_base-112, size=8, endness=Iend_LE), cc_ndep<8>)) && rsi<8> != 0)
                        {
                            v53 = v43;
                            v43 = 0;
                            free(v53);
                            *(__errno_location()) = 12;
                        }
                    }
                    if (false)
                    {
                        v53 = v43;
                        v43 = 0;
                        free(v53);
                        *(__errno_location()) = 12;
                    }
                }
                if (v7 == 2)
                {
                    memcpy(v43 + v0, g_6219a0, *((long long *)&v10));
                    v7 = 1;
                }
                if (v46 == 3 || v19 != 0 || v19 != 0)
                {
                    v53 = v43;
                    v43 = 0;
                    free(v53);
                    *(__errno_location()) = 12;
                }
                sub_40a2b0();
            }
            else
            {
                memcpy(v43 + v0, g_6219a0, *((long long *)&v10));
            }
            if (v45 != 0)
            {
                if (v19 != 0)
                {
                    v45 = dirfd(v19);
                }
                if ((unsigned int)v45 < 0 || v19 == 0)
                {
                    v49 = 0;
                }
                v50 = sub_40ec70();
                if (v50 != 0)
                {
                    v52 = *(v13);
                    v13 = __errno_location();
                    if (v19 != 0)
                    {
                        closedir();
                    }
                    v57 = v43;
                    v43 = 0;
                    free(v57);
                    *(v54) = v52;
                }
            }
            if (v50 == 0 || v45 == 0)
            {
                if (v19 == 0)
                {
                    break;
                }
                closedir();
            }
        }
    }
    v58 = v43;
    return v58;
}

extern unsigned int g_41aa7c;
extern unsigned long long stderr[7];

int sub_412d40()
{
    unsigned long long v1;  // r14
    void *v2;  // rsi
    unsigned long long v4[2];  // rdi
    unsigned int v5;  // rdx
    unsigned long long v6;  // rax
    void *v7;  // rbp
    unsigned long long v9;  // rbx
    char *v11;  // rax

    v1 = 0;
    v7 = v2;
    v9 = 0;
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41aa7c, 0x5), stderr);
    if (*(v4) != 0)
    {
        while (true)
        {
            if (v9 != 0)
            {
                v6 = memcmp(v1, v7, v5);
                if (v6 == 0)
                {
                    v9 += 1;
                    v7 += v5;
                    sub_40ec50();
                    __fprintf_chk();
                    if (v4[v9] == 0)
                    {
                        break;
                    }
                }
            }
            if (v9 == 0 || v6 != 0)
            {
                v9 += 1;
                v1 = v7;
                v7 += v5;
                sub_40ec50();
                __fprintf_chk();
                if (v4[v9] == 0)
                {
                    break;
                }
            }
        }
    }
    v11 = stderr[5];
    if (stderr[5] < stderr[6])
    {
        stderr[5] = stderr[5] + 1;
        *(v11) = 10;
        return v11;
    }
}

int sub_40f500()
{
    unsigned int v1[2];  // rdi

    if (v1[0] != 4)
    {
        return 0;
    }
    return v1[1];
}

int sub_40baf0()
{
    void tmp_16;  // tmp #16
    char *v1;  // rdi
    unsigned long long v2;  // rcx
    unsigned long v3;  // rsi
    unsigned long long v4;  // rdx

    v2 = *(v1);
    v4 = 0;
    if (*(v1) != 0)
    {
        do
        {
            v1 = &v1[1];
            tmp_16 = v4 * 31 + v2;
            v2 = *(v1);
            v4 = (0 CONCAT tmp_16) % v3 >> 64;
        }
        while ((char)v2 != 0);
    }
    return v4;
}

extern unsigned int g_418d39;

int sub_40a160()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r12

    if ((unsigned int)v2 == 0)
    {
        v2 = (unsigned int)sub_40d0b0();
        return v3;
    }
    v4 = (unsigned int)sub_40ec50();
    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x418d39, 0x5));
    return v2;
}

int sub_40ca80() { crash_skku;
}
int sub_40c2f0()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_40c070();
    if (v4 != -1)
    {
        if (v4 == 0)
        {
            v3 = v0;
        }
        v5 = v3;
        return v5;
    }
    return 0;
}

extern unsigned int g_41714f;
extern unsigned int g_417300;
extern unsigned int g_417328;
extern unsigned int g_4173d0;
extern unsigned int g_4175a8;
extern unsigned int g_4175f8;
extern unsigned int g_4177d0;
extern unsigned int g_417968;
extern unsigned int g_417b60;
extern unsigned int g_417cc0;
extern unsigned int g_417cf0;
extern unsigned int g_417d28;
extern unsigned int g_417e08;
extern unsigned int g_417f10;
extern unsigned int g_417f58;
extern unsigned int g_417f78;
extern unsigned long long stdout;

int sub_4046f0()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x70]
    unsigned long v4;  // [bp-0x68]
    unsigned long v5;  // [bp-0x60]
    unsigned long v6;  // [bp-0x58]
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned long v9;  // [bp-0x40]
    unsigned long v10;  // [bp-0x38]
    unsigned long v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    unsigned long long v13;  // [bp-0x20]
    unsigned long v14;  // [bp-0x18]
    unsigned long v15;  // [bp-0x8]
    unsigned long v17;  // r12
    unsigned long v18;  // rbx
    unsigned int v19;  // edi
    unsigned long long v32[2];  // rax
    char *v33;  // rdi
    char *v34;  // rsi
    unsigned long long v35;  // rcx
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long v38;  // d
    char *v42;  // rax
    char *v43;  // rax
    unsigned long long v44;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        dcgettext(0x0, 0x417300, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417328, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4173d0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4175a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4175f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4177d0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417968, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417b60, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417cc0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417cf0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417d28, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417e08, 0x5), stdout);
        v0 = "[";
        v32 = &v0;
        v1 = "test invocation";
        v2 = "coreutils";
        v3 = "Multi-call";
        v4 = "sha224sum";
        v5 = "sha2 utilities";
        v6 = "sha256sum";
        v7 = "sha2 utilities";
        v8 = "sha384sum";
        v9 = "sha2 utilities";
        v10 = "sha512sum";
        v11 = "sha2 utilities";
        v12 = 0;
        v13 = 0;
        while (true)
        {
            v32 = &v2;
            v33 = v2;
            if (v2 == 0)
            {
                break;
            }
            v34 = "install";
            v35 = 8;
            if ((v36 > v37) - 0 - (v36 < v37) == 0)
            {
                break;
            }
            while (v35 != 0)
            {
                v35 -= 1;
                v36 = *(v34);
                v37 = *(v33);
                v33 = &v33[v38];
                v34 = &v34[v38];
                break;
            }
        }
        if (v32[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41714f, 0x5));
            v43 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41714f, 0x5));
            v42 = setlocale(0x5, 0x0);
            if (v42 != 0)
            {
                v44 = strncmp(v42, "en_", 0x3);
            }
            if (v42 == 0 || v44 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417f58, 0x5));
            }
        }
        if ((v32[1] == 0 || v43 != 0) && (v32[1] == 0 || strncmp(v43, "en_", 0x3) != 0) && (v42 != 0 || v32[1] != 0) && (v32[1] != 0 || v44 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417f10, 0x5));
        }
        if (v32[1] != 0 || v42 != 0 && v44 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417f58, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417f78, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_40a930()
{
    char *v1;  // rsi
    char *v2;  // rax

    if (*(v1) == 0 || v1 == 0)
    {
        v2 = getenv("VERSION_CONTROL");
    }
    if (*(v1) == 0 && *(v2) == 0 || *(v1) == 0 && v2 == 0 || v1 == 0 && *(v2) == 0 || v1 == 0 && v2 == 0)
    {
        return 2;
    }
}

extern unsigned int g_41716a;
extern unsigned int g_41719d;
extern unsigned int g_4171b1;
extern unsigned int g_4171ce;
extern unsigned int g_417200;
extern unsigned int g_417210;
extern unsigned int g_417220;
extern unsigned int g_417fb0;
extern unsigned int g_418020;
extern unsigned int g_4180e0;
extern unsigned int g_418120;
extern unsigned int g_418160;
extern unsigned int g_418190;
extern unsigned int g_4181f8;
extern unsigned int g_418240;
extern unsigned int g_418310;
extern unsigned int g_41aa3f;
extern unsigned long long g_61f438;
extern unsigned int g_61f444;
extern unsigned int g_61f448;
extern char g_61f44c;
extern unsigned int g_61f4dc;
extern char g_621540;
extern char g_621541;
extern char g_621542;
extern unsigned int g_621544;
extern unsigned long long g_621548;
extern unsigned int g_621550;
extern unsigned long long g_621558;
extern unsigned int g_621560;
extern unsigned long long g_621b80;

int main()
{
    unsigned long long|unsigned long long * v0;  // [bp-0x140]
    unsigned long|unsigned long long|unsigned int v1;  // [bp-0x138]
    unsigned long long|unsigned int v2;  // [bp-0x130]
    char v3;  // [bp-0x121]
    unsigned long long v4;  // [bp-0x120]
    unsigned long long v5;  // [bp-0x118]
    unsigned long long v6;  // [bp-0x110]
    unsigned long long v7;  // [bp-0x108]
    unsigned short v8;  // [bp-0x100]
    unsigned int v9;  // [bp-0xfc]
    unsigned int|char v10;  // [bp-0xf9]
    unsigned long long v11;  // [bp-0xf8]
    unsigned long|char v12;  // [bp-0xf7]
    char v13;  // [bp-0xf3]
    unsigned long long v14;  // [bp-0xf0]
    char v15;  // [bp-0xea]
    char v16;  // [bp-0xe8]
    unsigned int v17;  // [bp-0xe4]
    unsigned long long v18;  // [bp-0xe0]
    unsigned long long v19;  // [bp-0xd8]
    char v20;  // [bp-0xc8]
    unsigned int v21;  // [bp-0xb0]
    unsigned long long v23;  // r15
    unsigned long long v24;  // r14
    unsigned long long v25;  // r13
    unsigned int v26;  // edi
    unsigned int v27;  // ebx
    unsigned long long v31;  // rax
    unsigned long v32;  // rsi
    unsigned long long v33;  // rbp
    unsigned long long v34;  // r12
    unsigned long long v37;  // rax
    unsigned long long v38;  // rbp
    unsigned long long v39;  // rax
    unsigned long long v40;  // rbx
    unsigned int *v42;  // rbx
    unsigned long long *v43;  // rbx
    unsigned int v44;  // edx
    unsigned long long v45;  // rbp
    unsigned long v46;  // rsi
    unsigned long long v47;  // rbx
    unsigned long|unsigned int|char v48;  // r13
    unsigned long long v50;  // rax
    unsigned long long v51;  // rbx
    unsigned long long v52;  // rcx
    char *v53;  // rdi
    unsigned long long v55;  // rax
    char v56;  // cc_dep2
    unsigned long v57;  // d
    unsigned long long v59;  // rax
    unsigned int *v60;  // rax
    unsigned long long v61;  // rbx
    unsigned long long v62;  // rbx
    unsigned long long v63;  // rbx
    void *v64;  // r13
    unsigned long long v65;  // rbx
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbx
    unsigned long long v70;  // rax
    unsigned long long v71;  // rax
    unsigned long long v72;  // rbx
    unsigned long long v74;  // r13
    unsigned long long v76;  // rax
    void *v78;  // rbx
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax
    unsigned long long v81;  // rdx

    v23 = 0;
    v24 = 0;
    v25 = v32;
    v34 = 0;
    v33 = 0;
    v27 = v26;
    g_621560 = 0;
    sub_40cfd0();
    setlocale(0x6, 0x41aa3f);
    bindtextdomain(0x41716a, 0x417fb0);
    textdomain(0x41716a);
    sub_416fd0();
    sub_405700();
    v5 = 0x400000000;
    v6 = 8589934596;
    v17 = 0;
    v7 = 1103806595456;
    v8 = 0x100;
    v9 = 0;
    v11 = 0x1000000;
    v14 = 0x1000000;
    v16 = 0;
    v18 = 0;
    v19 = 0;
    g_621558 = 0;
    g_621548 = 0;
    g_621541 = 0;
    g_621540 = 0;
    umask(0x0, 0x100);
    v3 = 0;
    v4 = 0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    while (true)
    {
        v31 = sub_412970();
        if ((unsigned int)v31 == -1)
        {
            if (g_621540 == 0)
            {
                if (v34 != 0)
                {
                    v37 = __xstat(0x1, v34, (unsigned int)&v20);
                    if (v33 == 0 && v37 != 0)
                    {
                        v38 = (unsigned int)sub_40ea00();
                        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x41719d, 0x5));
                    }
                    if (v37 == 0 && ((unsigned short)v21 & 0xf000) != 0x4000)
                    {
                        v40 = (unsigned int)sub_40ea00();
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4171b1, 0x5));
                    }
                }
            }
            else
            {
                if (g_621541 != 0)
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4180e0, 0x5));
                }
                else if (v34 != 0)
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x418120, 0x5));
                }
            }
            if (g_621541 == 0 && v34 == 0 || g_621540 == 0 && v34 == 0 || v37 == 0 && g_621540 == 0 && ((unsigned short)v21 & 0xf000) == 0x4000 || g_621540 == 0 && v33 != 0 && v37 != 0)
            {
                v39 = 0;
                if (v23 != 0)
                {
                    dcgettext(0x0, 0x4171ce, 0x5);
                    v39 = sub_40a930();
                }
                v5 = v39;
                sub_40a380();
                if (*(&((char *)&v12)[4]) == 0 && v4 != 0)
                {
                    *(v42) = 95;
                    v45 = (unsigned int)sub_40ec50();
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x418190, 0x5));
                }
            }
        }
        else if ((unsigned int)v31 != 100)
        {
            if (v31 > 100)
            {
                if ((unsigned int)v31 == 115)
                {
                    g_621541 = 1;
                    signal(0x11, 0x0);
                }
                else if (v31 <= 115)
                {
                    if ((unsigned int)v31 == 109)
                    {
                        v2 = g_621b80;
                    }
                    else if (v31 > 109)
                    {
                        if ((unsigned int)v31 == 111)
                        {
                            g_621558 = g_621b80;
                        }
                        if ((unsigned int)v31 == 112)
                        {
                            v10 = 1;
                        }
                    }
                    else if ((unsigned int)v31 == 103)
                    {
                        g_621548 = g_621b80;
                    }
                }
                else
                {
                    if ((unsigned int)v31 == 118)
                    {
                        v15 = 1;
                    }
                    else if (v31 > 118)
                    {
                        if ((unsigned int)v31 == 128)
                        {
                            v32 = "WARNING: ignoring --preserve-context; this kernel is not SELinux-enabled";
                            if (g_621560 != 0)
                            {
                                v13 = 1;
                                g_61f44c = 0;
                            }
                        }
                        if ((unsigned int)v31 == 129)
                        {
                            v3 = 1;
                            g_61f438 = (unsigned int)sub_411510();
                        }
                    }
                    else if ((unsigned int)v31 == 116)
                    {
                        if (v34 == 0)
                        {
                            v34 = g_621b80;
                        }
                        else
                        {
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x418020, 0x5));
                        }
                    }
                }
            }
            else
            {
                if ((unsigned int)v31 == 83)
                {
                    v23 = 1;
                    v1 = g_621b80;
                }
                else if (v31 > 83)
                {
                    if ((unsigned int)v31 != 90)
                    {
                        if (v31 > 90)
                        {
                            if ((unsigned int)v31 == 98)
                            {
                                v23 = 1;
                                *((int *)&v0) = (g_621b80 == 0? v0 : g_621b80);
                            }
                        }
                        else
                        {
                            if ((unsigned int)v31 == 84)
                            {
                                v24 = 1;
                            }
                        }
                    }
                    else
                    {
                        if (g_621560 != 0)
                        {
                            g_61f44c = 0;
                            if (g_621b80 != 0)
                            {
                                v4 = g_621b80;
                            }
                            else
                            {
                                v12 = 1;
                            }
                        }
                        else
                        {
                            v32 = "warning: ignoring --context; it requires an SELinux-enabled kernel";
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v31 == -130)
                    {
                        sub_4046f0(); /* do not return */
                    }
                    else if (v31 > -18446744069414584450)
                    {
                        if ((unsigned int)v31 == 67)
                        {
                            g_621542 = 1;
                        }
                        if ((unsigned int)v31 == 68)
                        {
                            v33 = 1;
                        }
                    }
                    else if ((unsigned int)v31 == -131)
                    {
                        sub_411160();
                        exit(0x0); /* do not return */
                    }
                }
            }
        }
        if ((unsigned int)v31 == 100)
        {
            g_621540 = 1;
        }
        if (g_621560 == 0 && (unsigned int)v31 == 90 && v31 <= 100 && (unsigned int)v31 != 100 && (unsigned int)v31 != -1 && v31 > 83 && (unsigned int)v31 != 83 || g_621560 == 0 && (unsigned int)v31 == 128 && (unsigned int)v31 != 115 && (unsigned int)v31 != 100 && v31 > 118 && v31 > 115 && (unsigned int)v31 != -1 && v31 > 100 && (unsigned int)v31 != 118)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v32, 0x5));
        }
        if ((unsigned int)v31 == -1 && *(&((char *)&v12)[4]) != 0 && (g_621541 == 0 || g_621540 == 0) && (g_621540 == 0 || v34 == 0) && (v37 == 0 || v34 == 0 || v33 != 0) && (v34 == 0 || ((unsigned short)v21 & 0xf000) == 0x4000 || v37 != 0) && (char)v12 == 0 && v4 == 0 || (unsigned int)v31 == -1 && *(&((char *)&v12)[4]) == 0 && (g_621541 == 0 || g_621540 == 0) && (g_621540 == 0 || v34 == 0) && (v37 == 0 || v34 == 0 || v33 != 0) && (v34 == 0 || ((unsigned short)v21 & 0xf000) == 0x4000 || v37 != 0) && v4 == 0)
        {
            v43 = (unsigned long long)(v26 - g_61f4dc);
            v0 = v25 + (int)g_61f4dc * 8;
            if ((((unsigned int)g_621540 ^ 1) & v44) < v26 - g_61f4dc)
            {
                if (v24 != 0)
                {
                    if (v34 != 0)
                    {
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4181f8, 0x5));
                    }
                    else if (v26 - g_61f4dc > 2)
                    {
                        v51 = (unsigned int)sub_40ea00();
                    }
                }
                else
                {
                    if ((char)(((unsigned int)g_621540 ^ 1) & v44) != 0)
                    {
                        v34 = 0;
                        if (v26 - g_61f4dc != 1)
                        {
                            v48 = 1;
                            v50 = sub_40ad40();
                            v52 = -1;
                            v53 = v50;
                            v55 = v24;
                            while (v52 != 0)
                            {
                                v52 -= 1;
                                v56 = *(v53);
                                v53 = &v53[v57];
                                break;
                            }
                            if (!(rcx<8>) != 1)
                            {
                                v48 = 0;
                                v48 = *((char *)(v50 + !(rcx<8>) - 1 - 1)) == 47;
                            }
                            v59 = __xstat(0x1, v0[(unsigned long long)(v26 - g_61f4dc) + -1], (unsigned int)&v20);
                            if (v59 != 0)
                            {
                                v60 = __errno_location();
                                v24 = *(v60);
                                if (v24 != 2 && *(v60) != 0)
                                {
                                    v61 = (unsigned int)sub_40ea00();
                                    error(0x1, v24, (unsigned long long)dcgettext(0x0, 0x41719d, 0x5));
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                if (v26 - g_61f4dc == 1)
                {
                    v47 = (unsigned int)sub_40ea00();
                }
                else
                {
                    v46 = "missing file operand";
                }
            }
        }
        if ((unsigned int)v31 == -1 && *(&((char *)&v12)[4]) != 0 && (g_621541 == 0 || g_621540 == 0) && (g_621540 == 0 || v34 == 0) && (v37 == 0 || v34 == 0 || v33 != 0) && (v34 == 0 || ((unsigned short)v21 & 0xf000) == 0x4000 || v37 != 0) && (char)v12 == 0 && v4 != 0 || (unsigned int)v31 == -1 && *(&((char *)&v12)[4]) != 0 && (g_621541 == 0 || g_621540 == 0) && (g_621540 == 0 || v34 == 0) && (v37 == 0 || v34 == 0 || v33 != 0) && (v34 == 0 || ((unsigned short)v21 & 0xf000) == 0x4000 || v37 != 0) && (char)v12 != 0)
        {
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x418160, 0x5));
        }
        if (((unsigned int)v31 == -1 && *(&((char *)&v12)[4]) != 0 && (g_621541 == 0 || g_621540 == 0) && (g_621540 == 0 || v34 == 0) && (v37 == 0 || v34 == 0 || v33 != 0) && (v34 == 0 || ((unsigned short)v21 & 0xf000) == 0x4000 || v37 != 0) && (char)v12 == 0 && v4 == 0 || (unsigned int)v31 == -1 && *(&((char *)&v12)[4]) == 0 && (g_621541 == 0 || g_621540 == 0) && (g_621540 == 0 || v34 == 0) && (v37 == 0 || v34 == 0 || v33 != 0) && (v34 == 0 || ((unsigned short)v21 & 0xf000) == 0x4000 || v37 != 0) && v4 == 0) && (((unsigned int)g_621540 ^ 1) & v44) < v26 - g_61f4dc && v24 != 0 && v34 == 0 && v26 - g_61f4dc > 2 || ((unsigned int)v31 == -1 && *(&((char *)&v12)[4]) != 0 && (g_621541 == 0 || g_621540 == 0) && (g_621540 == 0 || v34 == 0) && (v37 == 0 || v34 == 0 || v33 != 0) && (v34 == 0 || ((unsigned short)v21 & 0xf000) == 0x4000 || v37 != 0) && (char)v12 == 0 && v4 == 0 || (unsigned int)v31 == -1 && *(&((char *)&v12)[4]) == 0 && (g_621541 == 0 || g_621540 == 0) && (g_621540 == 0 || v34 == 0) && (v37 == 0 || v34 == 0 || v33 != 0) && (v34 == 0 || ((unsigned short)v21 & 0xf000) == 0x4000 || v37 != 0) && v4 == 0) && (((unsigned int)g_621540 ^ 1) & v44) >= v26 - g_61f4dc && v26 - g_61f4dc == 1)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v32, 0x5));
        }
        if (...)
        {
            if (((unsigned short)v21 & 0xf000) != 0x4000)
            {
                v24 = 0;
            }
            else
            {
                v43 = (unsigned long long)((unsigned int)v43 - 1);
                v34 = *((long long *)((char *)v0 + 0x8 * v43));
            }
        }
        if (...)
        {
            if (v48 == 0)
            {
                v34 = 0;
                if ((unsigned int)v43 != 2)
                {
                    v63 = (unsigned int)sub_40ea00();
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4171b1, 0x5));
                }
            }
            else
            {
                v62 = (unsigned int)sub_40ea00();
                error(0x1, v24, (unsigned long long)dcgettext(0x0, 0x4171b1, 0x5));
            }
        }
        if (...)
        {
            v64 = (unsigned long long)(unsigned int)sub_40ca80();
            if (v64 != 0)
            {
                g_61f448 = sub_40ce50();
                g_61f444 = sub_40ce50();
                free(v64);
            }
            else
            {
                v65 = (unsigned int)sub_40ec50();
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x417200, 0x5));
            }
        }
        if (...)
        {
            if (g_621541 == 0 && v3 != 0)
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x418240, 0x5));
            }
            if (g_621542 == 0)
            {
                break;
            }
            if (g_621542 != 0)
            {
                if ((char)v10 == 0)
                {
                    v46 = "options --compare (-C) and --strip are mutually exclusive";
                    if (g_621541 == 0)
                    {
                        if ((g_61f448 & -0xf200) == 0)
                        {
                            break;
                        }
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x418310, 0x5));
                    }
                }
                else
                {
                    v46 = "options --compare (-C) and --preserve-timestamps are mutually exclusive";
                }
            }
        }
        if (...)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v46, 0x5));
        }
        if (...)
        {
            sub_4046f0(); /* do not return */
        }
    }
    if (g_621558 != 0)
    {
        v67 = getpwnam();
        if (v67 != 0)
        {
            v67 = *((int *)(v67 + 16));
        }
        else
        {
            v68 = sub_411570();
            if (v68 == 0)
            {
                v67 = *((long long *)&v20);
            }
            if (v68 != 0 || *((long long *)&v20) > -18446744069414584321)
            {
                v69 = (unsigned int)sub_40ec50();
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x417210, 0x5));
            }
        }
        if ((v68 == 0 || v67 != 0) && (*((long long *)&v20) <= -18446744069414584321 || v67 != 0))
        {
            *((unsigned long long *)&g_621550) = v67;
            endpwent();
        }
    }
    else
    {
        g_621550 = -1;
    }
    if (g_621558 == 0 || v67 != 0 || v68 == 0 && *((long long *)&v20) <= -18446744069414584321)
    {
        if (g_621548 != 0)
        {
            v70 = getgrnam();
            if (v70 != 0)
            {
                v70 = *((int *)(v70 + 16));
            }
            else
            {
                v71 = sub_411570();
                if (v71 == 0)
                {
                    v70 = *((long long *)&v20);
                }
                if (*((long long *)&v20) > -18446744069414584321 || v71 != 0)
                {
                    v72 = (unsigned int)sub_40ec50();
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x417220, 0x5));
                }
            }
            if ((*((long long *)&v20) <= -18446744069414584321 || v70 != 0) && (v71 == 0 || v70 != 0))
            {
                *((unsigned long long *)&g_621544) = v70;
                endgrent();
            }
        }
        else
        {
            g_621544 = -1;
        }
        if (g_621548 == 0 || v70 != 0 || *((long long *)&v20) <= -18446744069414584321 && v71 == 0)
        {
            if (g_621540 != 0)
            {
                *((int *)&v1) = sub_40f910();
            }
            else
            {
                sub_409a90();
                if (v34 != 0)
                {
                    v74 = 0;
                    sub_4056a0();
                    v1 = 0;
                    v2 = (unsigned int)v43;
                    do
                    {
                        v24 &= (unsigned int)v33;
                        sub_40ad40();
                        v78 = (unsigned long long)(unsigned int)sub_40b0c0();
                        if (v24 != 0)
                        {
                            v79 = sub_403db0();
                        }
                        if (v24 == 0 || v79 != 0)
                        {
                            v80 = sub_404090();
                            if (v80 != 0)
                            {
                                free(v78);
                            }
                        }
                        if (v80 == 0 || v79 == 0 && v24 != 0)
                        {
                            free(v78);
                            v1 = 1;
                        }
                        v74 += 1;
                    }
                    while (v2 > (unsigned int)v74);
                }
                else
                {
                    if (v33 != 0)
                    {
                        v76 = sub_403db0();
                        v81 = 0;
                        if (v76 != 0)
                        {
                            v81 = sub_404090();
                        }
                        v76 = v81 & 1 ^ 1;
                    }
                    else
                    {
                        v76 = (unsigned int)(sub_404090() ^ 1);
                    }
                    v1 = v76;
                }
            }
            return v1;
        }
    }
}

int sub_413840()
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x3f]
    unsigned long long v3[3];  // rdi
    unsigned long long v4[3];  // r15
    unsigned long long v5;  // rsi
    unsigned long long v6;  // r14
    unsigned long long v7;  // r13
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    char *v11;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rbp
    unsigned long v15;  // rsi
    unsigned long v16;  // rcx
    unsigned long long v17;  // rbx
    unsigned long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rbp

    v4 = v3;
    v6 = v5 + 1;
    v7 = v5;
    v14 = v3[1];
    v13 = v3[2];
    while (true)
    {
        if (v13 < v7)
        {
            v8 = v13;
            v9 = 0;
            do
            {
                v9 += 1;
                v8 = v8 * 0x100 + 255;
            }
            while (v7 > v8);
            sub_413d30();
            v11 = &v0;
            do
            {
                v11 = &v1;
                v13 = v13 * 0x100 + 255;
                v14 = v14 * 0x100 + v0;
            }
            while (v7 > v13);
        }
        if (v13 == v7 && v13 < v7 || v13 == v7 && v13 >= v7)
        {
            v4[2] = 0;
            v4[1] = 0;
        }
        if (v13 < v7 && v13 != v7 || v13 != v7 && v13 >= v7)
        {
            v15 = (0 CONCAT v13 - v7) % v6 >> 64;
            v16 = (0 CONCAT v13 - v7) % v6;
            v17 = v13 - ((0 CONCAT v13 - v7) % v6 >> 64);
            v18 = (0 CONCAT v14) % v6;
            v19 = (0 CONCAT v14) % v6 >> 64;
            if (v14 > v17)
            {
                v13 = v15 - 1;
                v20 = v19;
            }
            else
            {
                v4[1] = v18;
                v4[2] = v16;
            }
        }
    }
    return stack_base + 0;
}

int sub_40ea90()
{
}

int sub_415f90()
{
    unsigned int v1;  // [bp+0x100008]
    char *v2;  // rdi
    char *v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned int v6;  // r12d
    unsigned long long v7;  // rax
    unsigned long long v9;  // rbx
    unsigned int v10;  // ebp
    unsigned long long v12;  // rax

    v9 = fopen(v2, v3);
    if (v9 != 0)
    {
        v4 = fileno(v9);
        if (v4 <= 2)
        {
            v5 = sub_4143d0();
            v6 = v5;
            if ((unsigned int)v5 >= 0)
            {
                v7 = sub_4143e0();
                if (v7 == 0)
                {
                    v9 = fdopen(v6, v3);
                }
                if (v9 == 0 || v7 != 0)
                {
                    v10 = *((int *)v9);
                    close(v6);
                    *(__errno_location()) = v10;
                    v9 = 0;
                }
            }
            else
            {
                v9 = 0;
                sub_4143e0();
                *(__errno_location()) = v1;
            }
        }
    }
    v12 = v9;
    return v12;
}

int sub_413ee0() { crash_skku_timeout;
}
int sub_40aef0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    unsigned long long v6[2];  // rdx
    char v8;  // al

    if (v4 != 0)
    {
        v0 = v5;
        *((unsigned long long [2])&v1) = v6[1];
        *((unsigned long long [2])&v2) = *(v6);
        v8 = sub_40b8e0() != 0;
        return rax<8>;
    }
    return 0;
}

int sub_411510()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern unsigned long long g_6219b8;

int sub_40ab00()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_6219b8 = v1;
    return v2;
}

typedef struct struct_0 {
    char field_0;
    char field_1;
    char field_2;
    char field_3;
    char field_4;
    char field_5;
    char field_6;
    char field_7;
    char field_8;
    char field_9;
    unsigned short field_a;
} struct_0;

int sub_40af30()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edi
    struct_0 *v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v1 = 45;
    if (((unsigned short)v2 & 0xf000) != 0x8000)
    {
        v1 = 100;
        if (((unsigned short)v2 & 0xf000) != 0x4000)
        {
            v1 = 98;
            if (((unsigned short)v2 & 0xf000) != 0x6000)
            {
                v1 = 99;
                if (((unsigned short)v2 & 0xf000) != 0x2000)
                {
                    v1 = 108;
                    if (((unsigned short)v2 & 0xf000) != 0xa000)
                    {
                        v1 = 112;
                        if (((unsigned short)v2 & 0xf000) != 0x1000)
                        {
                            v1 = (unsigned int)((v2 & 0xf000) != 0xc000? 63 : 115);
                        }
                    }
                }
            }
        }
    }
    *((unsigned long long *)&v3->field_0) = v1;
    v3->field_1 = (0 - (unsigned int)(char)((v2 & 0x100) < 1) & -69) + 114;
    v3->field_2 = (0 - (unsigned int)(char)((v2 & 128) < 1) & -74) + 119;
    if (((unsigned short)v2 & 0x800) != 0)
    {
        v4 = (0 - (unsigned int)(char)((v2 & 64) < 1) & -32) + 115;
    }
    else
    {
        v4 = (0 - (unsigned int)(char)((v2 & 64) < 1) & -75) + 120;
    }
    *((unsigned long long *)&v3->field_3) = v4;
    v3->field_4 = (0 - (unsigned int)(char)((v2 & 32) < 1) & -69) + 114;
    v3->field_5 = (0 - (unsigned int)(char)((v2 & 16) < 1) & -74) + 119;
    if (((unsigned short)v2 & 0x400) != 0)
    {
        v5 = (0 - (unsigned int)(char)((v2 & 8) < 1) & -32) + 115;
    }
    else
    {
        v5 = (0 - (unsigned int)(char)((v2 & 8) < 1) & -75) + 120;
    }
    *((unsigned long long *)&v3->field_6) = v5;
    v3->field_7 = (0 - (unsigned int)(char)((v2 & 4) < 1) & -69) + 114;
    v3->field_8 = (0 - (unsigned int)(char)((v2 & 2) < 1) & -74) + 119;
    if (((unsigned short)v2 & 0x200) != 0)
    {
        v3->field_9 = (0 - (unsigned int)(char)((v2 & 1) < 1) & -32) + 116;
        v3->field_a = 32;
        return 32;
    }
    v3->field_9 = (0 - (unsigned int)(char)((v2 & 1) < 1) & -75) + 120;
    v3->field_a = 32;
    return 32;
}

int sub_40ec50()
{
}

extern char g_621ae0;

int sub_40e660()
{
    void tmp_2;  // tmp #2
    void tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long long v3[7];  // rdi
    unsigned long v4;  // rsi
    unsigned long v5;  // rdx

    tmp_2 = v2;
    tmp_11 = v2 == 0;
    v3 = (v2 == 0? &g_621ae0 : v2);
    *((int *)(tmp_11? &g_621ae0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_621ae0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_621ae0;
        abort(); /* do not return */
    }
}

extern char g_621b30;
extern char g_621b31;

int sub_4112a0()
{
    unsigned long long v1;  // rax
    char v2;  // al

    if (g_621b31 != 0)
    {
        return (unsigned long long)g_621b30;
    }
    v1 = geteuid();
    g_621b31 = 1;
    v2 = (unsigned int)v1 == 0;
    g_621b30 = (unsigned int)v1 == 0;
    return rax<8>;
}

extern char g_6219b0;

int sub_40ab10()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_6219b0 = v1;
    return v2;
}

extern int512_t g_621ae0;

int sub_40e5f0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_621ae0 : v1)) = v2;
    return &g_621ae0;
}

int sub_414190()
{
    void tmp_33;  // tmp #33
    void tmp_53;  // tmp #53
    void tmp_70;  // tmp #70
    void tmp_73;  // tmp #73
    void tmp_80;  // tmp #80
    void tmp_90;  // tmp #90
    void tmp_96;  // tmp #96
    void tmp_34;  // tmp #34
    void tmp_58;  // tmp #58
    void tmp_64;  // tmp #64
    void tmp_74;  // tmp #74
    void tmp_77;  // tmp #77
    unsigned long long v1[259];  // rdi
    unsigned long long v2[259];  // rdx
    unsigned long long v3;  // rbx
    unsigned long long v4;  // r8
    unsigned long long v5;  // r9
    unsigned long long v6;  // r10
    unsigned long long v7[259];  // rax
    unsigned long long v8;  // r11
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // r12

    v2 = v1;
    v7 = v1;
    v9 = 11021839149480329387;
    v10 = 9435133421607575758;
    v8 = 12869931497269318948;
    v11 = 12580906657422019053;
    v6 = 10092185256905347744;
    v5 = 13400657653193689186;
    v4 = 7240739780546808700;
    v3 = 5259722845879046933;
    do
    {
        tmp_33 = v3 + v7[5] ^ v9 + v7[7] >> 9;
        tmp_53 = v11 + v7[6] ^ (v4 + *(v7) - (v10 + v7[4])) * 0x200;
        tmp_70 = v5 + v7[1] - (v3 + v7[5] ^ v9 + v7[7] >> 9) + v6 + v7[2] - (v11 + v7[6] ^ (v4 + *(v7) - (v10 + v7[4])) * 0x200);
        tmp_73 = v9 + v7[7] + v4 + *(v7) - (v10 + v7[4]) ^ v5 + v7[1] - (v3 + v7[5] ^ v9 + v7[7] >> 9) >> 23;
        tmp_80 = v8 + v7[3] - (v9 + v7[7] + v4 + *(v7) - (v10 + v7[4]) ^ v5 + v7[1] - (v3 + v7[5] ^ v9 + v7[7] >> 9) >> 23);
        tmp_90 = v6 + v7[2] - (v11 + v7[6] ^ (v4 + *(v7) - (v10 + v7[4])) * 0x200) + v8 + v7[3] - (v9 + v7[7] + v4 + *(v7) - (v10 + v7[4]) ^ v5 + v7[1] - (v3 + v7[5] ^ v9 + v7[7] >> 9) >> 23);
        v4 = v4 + *(v7) - (v10 + v7[4]) + v5 + v7[1] - (v3 + v7[5] ^ v9 + v7[7] >> 9) ^ (v6 + v7[2] - (v11 + v7[6] ^ (v4 + *(v7) - (v10 + v7[4])) * 0x200)) * 0x8000;
        tmp_96 = v10 + v7[4] - v4;
        v7[0] = v4;
        v5 = tmp_70 ^ tmp_80 >> 14;
        v7[1] = tmp_70 ^ tmp_80 >> 14;
        v6 = tmp_90 ^ tmp_96 * 0x100000;
        v7[2] = tmp_90 ^ tmp_96 * 0x100000;
        v7 = &v7[8];
        v8 = tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17;
        v3 = tmp_33 - (tmp_70 ^ tmp_80 >> 14) + tmp_53 - (tmp_90 ^ tmp_96 * 0x100000);
        v9 = tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v7[-5] = tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17;
        v10 = (tmp_53 - (tmp_90 ^ tmp_96 * 0x100000)) * 0x4000 ^ tmp_96 + tmp_33 - (tmp_70 ^ tmp_80 >> 14);
        v11 = tmp_53 - (tmp_90 ^ tmp_96 * 0x100000) + tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v7[-3] = tmp_33 - (tmp_70 ^ tmp_80 >> 14) + tmp_53 - (tmp_90 ^ tmp_96 * 0x100000);
        v7[-4] = (tmp_53 - (tmp_90 ^ tmp_96 * 0x100000)) * 0x4000 ^ tmp_96 + tmp_33 - (tmp_70 ^ tmp_80 >> 14);
        v7[-2] = tmp_53 - (tmp_90 ^ tmp_96 * 0x100000) + tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
        v7[-1] = tmp_73 - (tmp_80 + tmp_96 ^ tmp_33 - (tmp_70 ^ tmp_80 >> 14) >> 17);
    }
    while (&v1[0x100] != v7);
    do
    {
        tmp_34 = v3 + v2[5] ^ v9 + v2[7] >> 9;
        tmp_58 = v11 + v2[6] ^ (v4 + *(v2) - (v10 + v2[4])) * 0x200;
        tmp_64 = v6 + v2[2] - (v11 + v2[6] ^ (v4 + *(v2) - (v10 + v2[4])) * 0x200);
        tmp_74 = v9 + v2[7] + v4 + *(v2) - (v10 + v2[4]) ^ v5 + v2[1] - (v3 + v2[5] ^ v9 + v2[7] >> 9) >> 23;
        tmp_77 = v5 + v2[1] - (v3 + v2[5] ^ v9 + v2[7] >> 9) + v6 + v2[2] - (v11 + v2[6] ^ (v4 + *(v2) - (v10 + v2[4])) * 0x200);
        tmp_80 = v8 + v2[3] - (v9 + v2[7] + v4 + *(v2) - (v10 + v2[4]) ^ v5 + v2[1] - (v3 + v2[5] ^ v9 + v2[7] >> 9) >> 23);
        v4 = v4 + *(v2) - (v10 + v2[4]) + v5 + v2[1] - (v3 + v2[5] ^ v9 + v2[7] >> 9) ^ (v6 + v2[2] - (v11 + v2[6] ^ (v4 + *(v2) - (v10 + v2[4])) * 0x200)) * 0x8000;
        tmp_96 = v10 + v2[4] - v4;
        v2[0] = v4;
        v5 = tmp_77 ^ tmp_80 >> 14;
        v2[1] = tmp_77 ^ tmp_80 >> 14;
        v6 = tmp_64 + tmp_80 ^ tmp_96 * 0x100000;
        v2[2] = tmp_64 + tmp_80 ^ tmp_96 * 0x100000;
        v2 = &v2[8];
        v8 = tmp_80 + tmp_96 ^ tmp_34 - (tmp_77 ^ tmp_80 >> 14) >> 17;
        v3 = tmp_34 - (tmp_77 ^ tmp_80 >> 14) + tmp_58 - (tmp_64 + tmp_80 ^ tmp_96 * 0x100000);
        v9 = tmp_74 - (tmp_80 + tmp_96 ^ tmp_34 - (tmp_77 ^ tmp_80 >> 14) >> 17);
        v2[-5] = tmp_80 + tmp_96 ^ tmp_34 - (tmp_77 ^ tmp_80 >> 14) >> 17;
        v10 = (tmp_58 - (tmp_64 + tmp_80 ^ tmp_96 * 0x100000)) * 0x4000 ^ tmp_96 + tmp_34 - (tmp_77 ^ tmp_80 >> 14);
        v11 = tmp_58 - (tmp_64 + tmp_80 ^ tmp_96 * 0x100000) + tmp_74 - (tmp_80 + tmp_96 ^ tmp_34 - (tmp_77 ^ tmp_80 >> 14) >> 17);
        v2[-3] = tmp_34 - (tmp_77 ^ tmp_80 >> 14) + tmp_58 - (tmp_64 + tmp_80 ^ tmp_96 * 0x100000);
        v2[-4] = (tmp_58 - (tmp_64 + tmp_80 ^ tmp_96 * 0x100000)) * 0x4000 ^ tmp_96 + tmp_34 - (tmp_77 ^ tmp_80 >> 14);
        v2[-2] = tmp_58 - (tmp_64 + tmp_80 ^ tmp_96 * 0x100000) + tmp_74 - (tmp_80 + tmp_96 ^ tmp_34 - (tmp_77 ^ tmp_80 >> 14) >> 17);
        v2[-1] = tmp_74 - (tmp_80 + tmp_96 ^ tmp_34 - (tmp_77 ^ tmp_80 >> 14) >> 17);
    }
    while (&v1[0x100] != v2);
    v1[258] = 0;
    v1[257] = 0;
    v1[0x100] = 0;
    return tmp_96 + tmp_34 - (tmp_77 ^ tmp_80 >> 14);
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4099d0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v3;  // rdi
    unsigned long v4;  // rsi
    struct_0 *v5;  // rax

    v0 = v3;
    v1 = v4;
    v5 = sub_40b8e0();
    if (v5 != 0)
    {
        return v5->field_10;
    }
    return 0;
}

int sub_410650()
{
}

int sub_403da8() { crash_skku;
}
int sub_412ba0()
{
    unsigned long long v0;  // [bp-0x58]
    char v1;  // [bp-0x41]
    unsigned long v2;  // [bp-0x40]
    unsigned long long v4;  // rsi
    unsigned long long v5;  // r15
    unsigned long v6;  // rcx
    unsigned long v7;  // r13
    void *v8;  // rdx
    char *v9;  // rdi
    unsigned long v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    void *v15;  // rbp
    char *v16;  // r14

    v5 = v4;
    v7 = v6;
    v15 = v8;
    v2 = v8;
    v16 = *((long long *)v5);
    v0 = -1;
    if (*((long long *)v5) != 0)
    {
        v11 = strlen(v9);
        v1 = 0;
        v12 = 0;
        while (true)
        {
            v13 = strncmp(v16, v9, v11);
            if (v13 == 0)
            {
                v14 = strlen(v16);
                if (v14 == v11)
                {
                    v0 = v12;
                }
                else if (v0 == -1)
                {
                    v0 = v12;
                    v12 += 1;
                    v15 += v6;
                    v16 = *((long long *)(v5 + v12 * 8));
                }
                else if (v2 != 0)
                {
                    v1 = (memcmp(v7 * v0 + v2, v15, v7) != 0? 1 : (unsigned int)(char)(char)(stack_base)[-65]);
                }
                else
                {
                    v1 = 1;
                }
            }
            if (v13 != 0 || v14 != v11 && v0 != -1)
            {
                v12 += 1;
                v15 += v6;
                v16 = *((long long *)(v5 + v12 * 8));
            }
            if ((*((long long *)(v5 + (v12 << 3))) == 0 || v0 == -1) && (*((long long *)(v5 + (v12 << 3))) == 0 || v13 == 0) && (v14 != v11 || v13 != 0) && (*((long long *)(v5 + (v12 << 3))) != 0 || v0 != -1 || v13 != 0))
            {
                *((int *)&v0) = (v1 == 0? v0 : -2);
            }
        }
    }
    return v0;
}

int sub_40eac0()
{
}

int sub_40a980()
{
    void tmp_5;  // tmp #5
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rsi
    unsigned long long v3;  // r8
    unsigned long long v4;  // rax
    unsigned long v5;  // rax
    unsigned long v6;  // rdx
    unsigned long v7;  // r8

    if (v1 != 0 && v2 != 0)
    {
        v3 = v2;
        for (v4 = v1; (0 CONCAT v4) % v3 >> 64 != 0; v3 = tmp_5 >> 64)
        {
            v4 = v3;
        }
        v5 = (0 CONCAT v1) % v3;
        v7 = (0 CONCAT v1) % v3 * v2;
    }
    if (v2 == 0 || v1 == 0 || (0 CONCAT v7) % v2 != v5 || v7 > v6)
    {
        v7 = ((v2 != 0? v2 : 0x2000) <= v6? (v2 != 0? v2 : 0x2000) : v6);
    }
    return v7;
}

int sub_40ae10()
{
    unsigned int v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x28]
    unsigned long v5;  // rdx
    unsigned long long v6;  // rdx
    char v7;  // sil
    char *v8;  // rdi
    unsigned int v9;  // esi

    v3 = v5;
    v6 = 0;
    if ((v7 & 64) != 0)
    {
        v0 = 16;
        v6 = (unsigned int)v3;
        v1 = stack_base + 8;
        v2 = stack_base + -56;
    }
    open(v8, v9, v6);
    return sub_40fcf0();
}

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    char field_20;
    char field_21;
    char padding_22[6];
    unsigned long long field_28;
} struct_1;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    char field_20;
    char field_21;
    char padding_22[6];
    struct struct_3 *field_28;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_4;

int sub_409b10()
{
    unsigned long long|char v0;  // [bp-0x1038]
    void tmp_15;  // tmp #15
    unsigned long v1;  // [bp-0x1030]
    unsigned int v2;  // [bp-0x1028]
    unsigned int v3;  // [bp-0x1024]
    unsigned int v4;  // [bp-0x1020]
    unsigned long|unsigned long long v5;  // [bp-0x1018]
    unsigned long|unsigned long long v6;  // [bp-0x1008]
    unsigned int v7;  // [bp-0xff0]
    unsigned long long v9;  // r13
    struct_1 *v10;  // rdi
    struct_2 *v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rdx
    unsigned long v14;  // d
    unsigned long long v15;  // rcx
    unsigned long long *v16;  // rdi
    unsigned long long v17;  // rax
    unsigned long long *v19;  // rdi
    unsigned long long v20;  // rcx
    unsigned long v22;  // rax
    unsigned long v23;  // rdx
    unsigned long long v24;  // rax
    struct_4 *v25;  // rbx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdi
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rsi
    unsigned long|unsigned int v31;  // r9
    unsigned long long v32;  // r10
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // al
    unsigned long long *v39;  // rdx

    v9 = 0;
    v11 = v10;
    v12 = v10->field_28;
    v13 = v10->field_8;
    while (true)
    {
        v15 = 0x200;
        for (v16 = &v0; v15 != 0; v16 = &v16[v14])
        {
            v15 -= 1;
            v0 = 0;
        }
        v0 = v13;
        v4 = 72;
        v2 = v11->field_10;
        v1 = !(*((long long *)&v0));
        v17 = ioctl(v11->field_0, 0xc020660b, (unsigned int)&v0);
        if (v17 >= 0)
        {
            v37 = v3;
            if (!(v3 != 0))
            {
                v36 = v11->field_8;
                v11->field_21 = 1;
                v37 = (char)(v36 != 0);
            }
            else if (v11->field_18 <= !((unsigned long long)v3))
            {
                v19 = v11->field_28;
                v20 = v11->field_18 + v3;
                v11->field_18 = v20;
                v22 = 24 * v20;
                v23 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, 0x18<64>, rcx<8>, cc_ndep<8>);
                if (v23 == 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                {
                    v24 = sub_411340();
                    v11->field_28 = v24;
                    v25 = (char *)(v12 + -0x1 * v19) + v24;
                    v26 = v6;
                    v27 = v5;
                    if (v5 <= 9223372036854775807 - v6)
                    {
                        v28 = 0;
                        v29 = &v5;
                        do
                        {
                            if ((unsigned int)v9 != 0)
                            {
                                v31 = v7;
                                v32 = v25->field_8;
                                v30 = v25->field_0 + v25->field_8;
                                if (v27 == v30 && *((int *)&v25->field_10) == (v7 & -2))
                                {
                                    v33 = v26 + v32;
                                    *((unsigned int *)&v25->field_10) = v7;
                                    v28 = (unsigned int)v28 + 1;
                                    v25->field_8 = v33;
                                }
                            }
                            else
                            {
                                v30 = v11->field_8;
                                if (v11->field_8 <= v27)
                                {
                                    v31 = v7;
                                }
                            }
                            if ((unsigned int)v9 == 0 || v27 != v30 || *((int *)&v25->field_10) != (v7 & -2))
                            {
                                if (((unsigned int)v9 == 0 || v30 <= v27) && (v11->field_8 <= v27 || (unsigned int)v9 != 0))
                                {
                                    tmp_15 = v9;
                                    v28 = (unsigned int)v28 + 1;
                                    v9 = (unsigned int)v9 + 1;
                                    v25 = &v11->field_28[2 * tmp_15 + tmp_15];
                                    v11->field_28[2 * tmp_15 + tmp_15].field_0 = v27;
                                    v25->field_8 = v26;
                                    *((unsigned long *)&v25->field_10) = v31;
                                    if ((unsigned int)v28 >= v3)
                                    {
                                        break;
                                    }
                                }
                                if (((unsigned int)v9 == 0 || v30 > v27) && (v11->field_8 > v27 || (unsigned int)v9 != 0))
                                {
                                    if (v30 - v27 < v26)
                                    {
                                        break;
                                    }
                                    v5 = v30;
                                    v34 = v27 + v26 - v30;
                                    v6 = v34;
                                }
                            }
                            if ((unsigned int)v28 >= v3 && (v11->field_8 > v27 || v30 > v27))
                            {
                                break;
                            }
                            v29 = &(&v5)[7 * v28];
                            v26 = (&v5)[2 + 7 * v28];
                            v27 = (&v5)[7 * v28];
                        }
                        while ((&v5)[7 * v28] <= 9223372036854775807 - (&v5)[2 + 7 * v28]);
                        if (((unsigned int)v9 == 0 || v30 <= v27) && (v11->field_8 <= v27 || (unsigned int)v9 != 0) && ((unsigned int)v9 == 0 || v27 != v30 || *((int *)&v25->field_10) != (v7 & -2)) && (unsigned int)v28 < v3 || (v27 == v30 && *((int *)&v25->field_10) == (v7 & -2) && (unsigned int)v9 != 0 || ((unsigned int)v9 == 0 || v30 > v27) && (v11->field_8 > v27 || (unsigned int)v9 != 0) && ((unsigned int)v9 == 0 || v27 != v30 || *((int *)&v25->field_10) != (v7 & -2)) && v30 - v27 >= v26) && (unsigned int)v28 < v3)
                        {
                            __assert_fail(); /* do not return */
                        }
                        else if (((unsigned int)v9 == 0 || v30 > v27) && (v11->field_8 > v27 || (unsigned int)v9 != 0) && ((unsigned int)v9 == 0 || v27 != v30 || *((int *)&v25->field_10) != (v7 & -2)))
                        {
                            v37 = 0;
                            if (v11->field_8 != 0)
                            {
                                break;
                            }
                        }
                    }
                }
                if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v23 != 0)
                {
                    sub_411530(); /* do not return */
                }
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        if (v5 <= 9223372036854775807 - v6 && v23 == 0 && v11->field_18 <= !((unsigned long long)v3) && v17 >= 0 && v3 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && (v25->field_10 & 1) != 0 || v23 == 0 && v11->field_18 <= !((unsigned long long)v3) && v17 >= 0 && v3 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v5 > 9223372036854775807 - v6)
        {
            __assert_fail(); /* do not return */
        }
        if (v5 <= 9223372036854775807 - v6 && v23 == 0 && v11->field_18 <= !((unsigned long long)v3) && v17 >= 0 && v3 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && (v25->field_10 & 1) != 0 || v23 == 0 && v11->field_18 <= !((unsigned long long)v3) && v17 >= 0 && v3 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && v3 == 0)
        {
            if ((v25->field_10 & 1) == 0)
            {
                v35 = v11->field_21;
                if ((unsigned int)v9 <= 72)
                {
                    v11->field_18 = v9;
                    if (v35 == 0)
                    {
                        v11->field_8 = v25->field_8 + v25->field_0;
                    }
                }
                else if (v35 == 0)
                {
                    v39 = v11->field_28;
                    v11->field_18 = v9 - 1;
                    v11->field_8 = v39[3 * v9 + -5] + v39[3 * v9 + -6];
                }
            }
            else
            {
                v11->field_21 = 1;
            }
            if ((v25->field_10 & 1) != 0 || v35 != 0 && (unsigned int)v9 > 72)
            {
                v11->field_18 = v9;
            }
            v37 = 1;
        }
        if (v5 <= 9223372036854775807 - v6 && v23 == 0 && v11->field_18 <= !((unsigned long long)v3) && v17 >= 0 && v3 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)) && (v25->field_10 & 1) != 0 || v17 < 0)
        {
            v11->field_20 = 1;
            v37 = 0;
        }
    }
    return v37;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_40b360;
extern int512_t g_40b370;
extern int512_t g_419120;

int sub_40bb50()
{
    unsigned long long v1;  // rbx
    struct_0 *v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    void|uint128_t v5;  // xmm1
    uint128_t v6;  // xmm0
    unsigned int v8;  // ymm1
    uint128_t v9;  // xmm0
    unsigned long v10;  // rdi
    unsigned int v11;  // ymm0
    void v12;  // xmm0
    unsigned long v13;  // rbp
    unsigned long long v14;  // rax
    unsigned long v16;  // rdx
    unsigned long v17;  // rcx
    unsigned long v18;  // r8
    unsigned long long v19;  // rdi
    unsigned long long v20;  // rax

    v1 = malloc(0x50);
    if (v1 != 0)
    {
        if (v2 != 0)
        {
            *((struct_0 **)(v1 + 40)) = v2;
            v4 = sub_40b4d0();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_419120;
            v3 = sub_40b4d0();
            v5 = 0;
            v8 = 6881500231684115661;
        }
        if ((v2->field_10 == 0 || v2 == 0) && (v2 == 0 || v4 != 0) && (v2 != 0 || v3 != 0))
        {
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>)))
            {
                v6 = 0;
                v6 = (unsigned int)v10;
            }
            else
            {
                v9 = 0;
                v11 = v10 % 2 | (unsigned long long)((unsigned int)v10 & 1);
                v6 = xmm0<16> * 2;
            }
            v12 = v6 / v5;
        }
        if ((v2 == 0 || v4 != 0) && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v2->field_10 != 0) && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v2 != 0) && (v2->field_10 != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0) && (((char)(BinaryOp CmpF & 69) & 1) != 0 || v2 != 0) && (v2 != 0 || v3 != 0))
        {
            v13 = (unsigned int)sub_40b2c0();
            if (((char)(v13 >> 60) & 1) == 0 && [D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>) == 0)
            {
                *((unsigned long *)(v1 + 16)) = v13;
                if (v13 != 0)
                {
                    v14 = calloc(v13, 0x10);
                    *((unsigned long long *)v1) = v14;
                    if (v14 != 0)
                    {
                        *((long long *)(v1 + 24)) = 0;
                        *((long long *)(v1 + 32)) = 0;
                        *((unsigned long long *)(v1 + 8)) = v13 * 16 + v14;
                        *((int *)(v1 + 48)) = (v16 == 0? &g_40b360 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_40b370 : v17);
                        *((unsigned long *)(v1 + 64)) = v18;
                        *((long long *)(v1 + 72)) = 0;
                    }
                }
            }
        }
        if (...)
        {
            v19 = v1;
            v1 = 0;
            free(v19);
        }
    }
    v20 = v1;
    return v20;
}

int sub_40b8e0()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long *v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8[2];  // rbx
    unsigned long long v9;  // rsi

    v2 = v1;
    v9 = *(v6);
    if (*(v6) != 0)
    {
        v6 = sub_40b380();
        while (true)
        {
            if (v9 != v1)
            {
                v1 = v3;
                v7 = *((long long *)(r12<8> + 56))();
                if (v7 == 0)
                {
                    v8 = v8[1];
                    if (v8 == 0)
                    {
                        break;
                    }
                    v9 = *(v8);
                }
            }
            if (v9 == v1 || v7 != 0)
            {
                return stack_base + 0;
            }
        }
    }
    return 0;
}

extern unsigned long long g_6219a8;

int sub_40a9f0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_6219a8 = v1;
    return v2;
}

int sub_40e702()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long v7;  // r15
    unsigned long v8;  // r14
    unsigned long v9;  // r13
    unsigned long v10;  // r12
    unsigned long v11;  // rbx

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v2 = v10;
    v1 = stack_base + 0;
    v0 = v11;
}

int sub_413020() { crash_skku;
}
int sub_40e990()
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned int v9;  // esi

    if (v9 == 10)
    {
        abort(); /* do not return */
    }
    v0 = v9;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    return sub_40e400();
}

extern int512_t g_61f428;

int sub_416fd0()
{
}

extern unsigned int g_41aa44;
extern unsigned int g_41aa5f;

int sub_412cc0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x41aa44, 0x5);
    }
    dcgettext(0x0, 0x41aa5f, 0x5);
    sub_40ec30();
    sub_40e920();
}

int sub_40e8d0()
{
}

int sub_40f8a0()
{
    unsigned int v1[2];  // rdi
    unsigned long long v2;  // rax

    switch (v1[0])
    {
    case 0: case 4:
        v1[0] = 5;
        return v2;
    case 1: case 2:
        v2 = close(v1[1]);
    case 3:
        v2 = v1[1];
        if (v1[1] >= 0)
        {
            __assert_fail(); /* do not return */
        }
    default:
        __assert_fail(); /* do not return */
    }
    v2 = v1[0];
}

int sub_40eaa0()
{
}

int sub_40fce0()
{
}

extern uint128_t g_621ae0;
extern uint128_t g_621af0;
extern uint128_t g_621b00;
extern unsigned long long g_621b10;

int sub_40ea1f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_621b10;
    *((uint128_t *)&v0) = g_621ae0;
    *((uint128_t *)&v1) = g_621af0;
    *((uint128_t *)&v2) = g_621b00;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_40e400();
}

int sub_409de0()
{
}

extern unsigned int g_621b28;
extern unsigned int g_621b2c;

int sub_410660()
{
    unsigned long long v0;  // [bp-0x120]
    void tmp_77;  // tmp #77
    void tmp_84;  // tmp #84
    void v1;  // [bp-0x118]
    void v2;  // [bp-0x108]
    unsigned long|char v3;  // [bp-0xf8]
    unsigned long v4;  // [bp-0xf0]
    unsigned long v5;  // [bp-0xe8]
    unsigned long v6;  // [bp-0xe0]
    unsigned long|void v7;  // [bp-0xd8]
    unsigned long|unsigned long long v8;  // [bp-0xd0]
    void v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    char v11;  // [bp-0xb8]
    unsigned long v12;  // [bp-0x70]
    unsigned long v13;  // [bp-0x68]
    unsigned long v14;  // [bp-0x60]
    unsigned long v15;  // [bp-0x58]
    unsigned long v17;  // rsi
    unsigned long long v18;  // rbp
    unsigned int v19;  // edi
    unsigned int v20;  // ebx
    uint128_t v21[2];  // rdx
    char v22;  // al
    unsigned long long v23;  // rsi
    unsigned long long|unsigned int v24;  // r13
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    unsigned long long v27;  // r12
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // cc_dep1
    unsigned int *v30;  // rax
    char v31;  // al
    unsigned long long v32;  // rax
    unsigned long long v33;  // rsi
    unsigned long long v34;  // r13
    unsigned long long v35;  // rdi
    unsigned long long v36;  // rsi
    char v37;  // bpl
    char v38;  // r14b
    unsigned long long v39;  // rax
    unsigned long long v41;  // rax
    unsigned int v43;  // edx
    char v44;  // dl
    unsigned long v45;  // r14
    unsigned long long v46;  // r14
    unsigned long long v47;  // rax

    v18 = v17;
    v20 = v19;
    if (v21 != 0)
    {
        v0 = stack_base + -280;
        *((int128_t *)&v1) = *((int128_t *)&v21);
        *((int128_t *)&v2) = *((int128_t *)&v21[2]);
        v24 = sub_4105a0();
    }
    else
    {
        v0 = 0;
        v24 = 0;
    }
    if (v21 == 0 || v24 >= 0)
    {
        if (v19 < 0)
        {
            if (v17 == 0)
            {
                *(__errno_location()) = 9;
            }
            if (g_621b2c >= 0 && v17 != 0 && (v22 == 0 || v24 != 2))
            {
                v25 = utimensat(0xffffff9c, v18);
                v27 = v25;
                v28 = v25;
            }
        }
        if (g_621b2c >= 0)
        {
            if ((v19 >= 0 || v17 != 0) && v24 == 2)
            {
                if (v19 >= 0)
                {
                    v22 = __fxstat(0x1, v19) != 0;
                }
                else
                {
                    v22 = __xstat(0x1, v17, (unsigned int)&v11) != 0;
                }
                if (v22 == 0)
                {
                    v23 = v0;
                    if (*((long long *)(v0 + 8)) != 1073741822)
                    {
                        v24 = 3;
                        if (*((long long *)(v23 + 24)) == 1073741822)
                        {
                            *((unsigned long *)(v23 + 24)) = v15;
                            *((unsigned long *)(v23 + 16)) = v14;
                        }
                    }
                    else
                    {
                        v24 = 3;
                        *((unsigned long *)v23) = v12;
                        *((unsigned long *)(v23 + 8)) = v13;
                    }
                }
            }
            if (v19 >= 0 && (v22 == 0 || v24 != 2))
            {
                v26 = futimens(v19);
                v27 = v26;
                v29 = v26;
            }
        }
    }
    if ((v19 >= 0 && g_621b2c >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 <= 0 || v19 < 0 && g_621b2c >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 <= 0) && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>)))
    {
        v30 = __errno_location();
    }
    if (v19 >= 0 && g_621b2c >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 > 0 || v19 < 0 && g_621b2c >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 > 0)
    {
        *(__errno_location()) = 38;
    }
    if ((v19 >= 0 && g_621b2c >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 <= 0 || v19 < 0 && g_621b2c >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 <= 0) && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>)) && *(v30) != 38 || (v19 >= 0 && g_621b2c >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 <= 0 || v19 < 0 && g_621b2c >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 <= 0) && (char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>))
    {
        g_621b2c = 1;
    }
    if ((v19 >= 0 && g_621b2c >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 <= 0 || v19 < 0 && g_621b2c >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 <= 0) && !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, cc_dep1<8>, 0x0<64>, cc_ndep<8>)) && *(v30) == 38 || v19 >= 0 && g_621b2c >= 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v26 > 0 || v19 < 0 && g_621b2c >= 0 && v17 != 0 && (v22 == 0 || v24 != 2) && (v21 == 0 || v24 >= 0) && (unsigned int)v25 > 0 || (v21 == 0 && v19 >= 0 || v21 == 0 && v17 != 0 || v24 >= 0 && v19 >= 0 || v24 >= 0 && v17 != 0) && g_621b2c < 0)
    {
        g_621b2c = -1;
        g_621b28 = -1;
        if (v24 != 0 && v24 != 3)
        {
            if (v19 >= 0)
            {
                v31 = __fxstat(0x1, v19) != 0;
            }
            else
            {
                v31 = __xstat(0x1, v18, (unsigned int)&v11) != 0;
            }
        }
    }
    if (...)
    {
        v27 = -18446744069414584321;
    }
    if (...)
    {
        v27 = 0;
        v32 = sub_4104d0();
    }
    if (...)
    {
        v33 = v0;
        if (v0 != 0)
        {
            v34 = &v3;
            v3 = *((long long *)v33);
            v35 = *((long long *)(v33 + 8)) >> 63;
            tmp_77 = *((long long *)(v33 + 8)) * 2361183241434822607 >> 64;
            tmp_84 = *((long long *)(v33 + 24));
            v5 = *((long long *)(v33 + 16));
            v36 = *((long long *)(v33 + 24)) >> 63;
            v4 = (tmp_77 >> 7) - v35;
            v6 = ((unsigned long long)(tmp_84 * 2361183241434822607 >> 64) >> 7) - v36;
        }
    }
    if (...)
    {
        v34 = 0;
    }
    if (...)
    {
        v27 = futimesat(0xffffff9c, v18);
    }
    if (...)
    {
        v27 = futimesat(v20, 0x0);
        if ((unsigned int)v27 != 0)
        {
            v27 = -18446744069414584321;
            if (v18 != 0)
            {
                v39 = v0;
                if (v0 != 0)
                {
                    v41 = *((long long *)(v39 + 16));
                    v7 = *((long long *)v39);
                    v8 = v41;
                }
                v27 = utime(v18);
            }
        }
        else if (v34 != 0)
        {
            v37 = 499999 < *((long long *)(v34 + 8));
            v38 = 499999 < *((long long *)(v34 + 24));
            if ((499999 < *((long long *)(v34 + 8)) || v38 != 0) && __fxstat(0x1, v20) == 0)
            {
                v43 = v14 - *((long long *)(v34 + 16));
                v44 = v14 - *((long long *)(v34 + 16)) == 1;
                *((int128_t *)&v7) = *((int128_t *)v34);
                *((int128_t *)&v9) = *((int128_t *)(v34 + 16));
                v46 = (unsigned int)v45 & rdx<4>;
                if (v12 - *((long long *)v34) == 1 && v37 != 0 && v13 == 0)
                {
                    v8 = 0;
                }
                if (v15 == 0 && v46 != 0)
                {
                    v10 = 0;
                }
                if ((v13 == 0 || v15 == 0) && (v15 == 0 || v12 - *((long long *)v34) == 1) && (v13 == 0 || v46 != 0) && (v15 == 0 || v37 != 0) && (v12 - *((long long *)v34) == 1 || v46 != 0) && (v37 != 0 || v46 != 0))
                {
                    futimesat(v20, 0x0);
                }
                v27 = 0;
            }
        }
    }
    v47 = v27;
    return v47;
}

int sub_40e900()
{
}

int sub_411490()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4112e0();
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_41a918;
extern unsigned int g_41a938;
extern unsigned int g_41a968;
extern unsigned int g_41a988;
extern unsigned int g_41a9b8;
extern unsigned long long stderr;

int sub_411d00()
{
    char *v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned int *v2;  // [bp-0x68]
    char *v3;  // [bp-0x58]
    unsigned int v4;  // [bp-0x50]
    char v5;  // [bp-0x49]
    unsigned int v6;  // [bp-0x44]
    unsigned int v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x3c]
    struct_0 *v9;  // [bp+0x8]
    unsigned int v10;  // [bp+0x10]
    char *v11;  // r14
    char *v12;  // rdx
    unsigned long v13;  // r8
    char *v14;  // rbp
    unsigned long long v15;  // rax
    unsigned long long v16;  // r13
    unsigned long long v17;  // rcx
    unsigned long long|unsigned long long * v18;  // rbx
    unsigned long|unsigned long long|unsigned int v19;  // r12
    char *v20;  // r15
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // r8
    char *v24;  // rdi
    unsigned long long v25;  // r15
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rax
    unsigned int v28;  // r9d
    unsigned long long v29;  // r9
    unsigned long long v30;  // rdx
    unsigned int v31;  // ecx
    char *v33;  // rbp
    unsigned long long v34;  // rdx
    unsigned long long *v35;  // rsi
    void *v36;  // rdi
    unsigned long long|unsigned long long * v37;  // rbx
    unsigned long long v38;  // rbp
    unsigned long long v39;  // r12
    unsigned int *v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // r14

    v11 = v9->field_20;
    v3 = v12;
    v2 = v13;
    v14 = v9->field_20;
    *((struct struct_1 *)&v5) = *(v9->field_20);
    if (*(v9->field_20) != 61 && *(v9->field_20) != 0)
    {
        do
        {
            v14 = &v14[1];
            v15 = *(v14);
        }
        while (v15 != 61 && (char)v15 != 0);
        v16 = v14 - v11;
    }
    if (*(v9->field_20) == 0 || *(v9->field_20) == 61)
    {
        v16 = 0;
    }
    v18 = v17;
    v19 = 0;
    v0 = *((long long *)v17);
    v20 = *((long long *)v17);
    if (*((long long *)v17) != 0)
    {
        while (true)
        {
            v21 = strncmp(v20, v9->field_20, v16);
            if (v21 == 0)
            {
                v22 = strlen(v20);
            }
            if (v21 != 0 || v22 != v16)
            {
                v18 += 32;
                v20 = *(v18);
                v23 = v19 + 1;
                if (*(v18) != 0)
                {
                    v19 = v23;
                }
                else
                {
                    v8 = v19;
                    v18 = 0;
                    v6 = -1;
                    v24 = v0;
                    v25 = 0;
                    v4 = 0;
                    v7 = 0;
                    v1 = 0;
                    v0 = v14;
                    v26 = v17;
                    do
                    {
                        v27 = strncmp(v24, v9->field_20, v16);
                        if (v27 == 0)
                        {
                            if (v18 == 0)
                            {
                                v6 = v25;
                                v18 = v26;
                            }
                            else if (*((int *)(v18 + 24)) != *((int *)(v26 + 24)) || *((int *)(v18 + 8)) != *((int *)(v26 + 8)) || v28 != 0 || *((long long *)(v18 + 16)) != *((long long *)(v26 + 16)))
                            {
                                if (v4 == 0)
                                {
                                    if (v10 == 0)
                                    {
                                        v4 = 1;
                                    }
                                    else if (v1 == 0)
                                    {
                                        v1 = calloc((int)v8, 0x1);
                                        v4 = 1;
                                    }
                                    if (false)
                                    {
                                        v7 = 1;
                                        *((char *)(v1 + (int)v6)) = 1;
                                    }
                                    if (v1 != 0)
                                    {
                                        *((char *)(v1 + v25)) = 1;
                                    }
                                }
                            }
                        }
                        v26 += 32;
                        v24 = *((long long *)v26);
                        v25 += 1;
                    }
                    while (*((long long *)v26) != 0);
                    v14 = v0;
                    if (v1 == 0)
                    {
                        v29 = v4;
                        if (v4 == 0)
                        {
                            if (v18 == 0)
                            {
                                break;
                            }
                            v19 = v6;
                        }
                    }
                    if (v1 != 0 || v4 != 0)
                    {
                        if (v10 != 0)
                        {
                            if (v4 != 0)
                            {
                                dcgettext(0x0, 0x41a918, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x41a938, 0x5);
                                __fprintf_chk();
                                v36 = stderr;
                                v37 = v17;
                                v38 = v1;
                                v39 = v1 + v19 + 1;
                                do
                                {
                                    if (*((char *)v38) != 0)
                                    {
                                        __fprintf_chk();
                                        v36 = stderr;
                                    }
                                    v38 += 1;
                                    v37 = &v37[4];
                                }
                                while (v39 != v38);
                                fputc(0xa, v36);
                                funlockfile(stderr);
                                v11 = v9->field_20;
                            }
                        }
                        if (v7 != 0)
                        {
                            free(v1);
                        }
                        v43 = &v11[strlen(v11)];
                        v9->field_20 = v43;
                        v9->field_0 = v9->field_0 + 1;
                        v9->field_8 = 0;
                        v42 = 63;
                    }
                }
            }
            if ((v1 == 0 || v21 == 0) && (v1 == 0 || v22 == v16) && (v21 == 0 || *(v18) == 0) && (v21 == 0 || v4 == 0) && (*(v18) == 0 || v22 == v16) && (v4 == 0 || v22 == v16))
            {
                v30 = v9->field_0;
                v9->field_20 = 0;
                v9->field_0 = (unsigned int)v30 + 1;
                v31 = *((int *)(v18 + 8));
                if (*(v14) == 0)
                {
                    if (v31 == 1)
                    {
                        if ((unsigned int)((unsigned long long)v9->field_0 + 1) < v24)
                        {
                            v9->field_0 = v9->field_0 + 2;
                            v9->field_10 = v35[1 + v30];
                        }
                        else
                        {
                            if (v10 != 0)
                            {
                                dcgettext(0x0, 0x41a9b8, 0x5);
                                __fprintf_chk();
                            }
                            v9->field_8 = *((int *)(v18 + 24));
                            v42 = (unsigned long long)(char)(*(v3) != 58) * 5 + 58;
                        }
                    }
                }
                else
                {
                    if (v31 != 0)
                    {
                        v33 = &v14[1];
                        v9->field_10 = v33;
                    }
                    else
                    {
                        if (v10 != 0)
                        {
                            dcgettext(0x0, 0x41a988, 0x5);
                            __fprintf_chk();
                        }
                        v9->field_8 = *((int *)(v18 + 24));
                        v42 = 63;
                    }
                }
                if (*(v14) == 0 && (unsigned int)((unsigned long long)v9->field_0 + 1) < v24 || *(v14) == 0 && v31 != 1 || *(v14) != 0 && v31 != 0)
                {
                    if (v2 != 0)
                    {
                        *((unsigned long *)&v2) = v19;
                    }
                    v41 = *((long long *)(v18 + 16));
                    v42 = (unsigned int)*((int *)(v18 + 24));
                    if (*((long long *)(v18 + 16)) == 0)
                    {
                        break;
                    }
                    *(v41) = v42;
                    v42 = 0;
                }
            }
        }
        if (...)
        {
            return v42;
        }
    }
    if (v28 != 0)
    {
        if (*((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45)
        {
            v34 = strchr(v3, v5);
            v42 = -18446744069414584321;
        }
        if ((v34 != 0 || *((long long *)v17) != 0) && (*((long long *)v17) != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45))
        {
            return v42;
        }
    }
    if (v28 == 0 && *((long long *)v17) == 0 || v34 == 0 && v28 != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x41a968, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b790()
{
    unsigned long v0;  // [bp-0x20]
    void tmp_14;  // tmp #14
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // r13
    unsigned long v5;  // r12
    unsigned long v6;  // rbx
    unsigned long long v7[2];  // rdi
    unsigned long long v8;  // rdi
    struct_0 *v9;  // rax
    unsigned long long v10;  // rdx
    unsigned long|unsigned long long v11;  // rbx
    unsigned long long v12[2];  // rsi
    unsigned long v13;  // xmm1lq

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v11 = 0;
    v12 = *(v7);
    v8 = v7[1];
    if (v12 < v8)
    {
        while (true)
        {
            if (*(v12) == 0)
            {
                v12 = &v12[2];
                if (v12 >= v8)
                {
                    break;
                }
            }
            else
            {
                v9 = v12[1];
                v10 = 1;
                if (v12[1] != 0)
                {
                    do
                    {
                        v9 = v9->field_8;
                        v10 += 1;
                    }
                    while (v9 != 0);
                }
                v11 = (v11 < v10? v10 : v11);
                v12 = &v12[2];
                if (v12 >= v8)
                {
                    break;
                }
            }
        }
    }
    __fprintf_chk();
    __fprintf_chk();
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, xmm1lq<8>, 0x0<64>, cc_ndep<8>)))
    {
    }
    else
    {
        tmp_14 = v13;
    }
    __fprintf_chk();
}

extern int512_t g_419020;

int sub_40a8ba()
{
    return *((int *)&((char *)&g_419020)[4 * (unsigned long long)(unsigned int)sub_412e60()]);
}

extern unsigned int g_41a259;
extern unsigned int g_41a284;
extern unsigned int g_41a4b0;

int sub_411220()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41a259, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41a284, 0x5));
    dcgettext(0x0, 0x41a4b0, 0x5);
}

int sub_4135d0()
{
    unsigned int v0;  // [bp-0xd0]
    unsigned int v1;  // [bp-0xcc]
    char v2;  // [bp-0xc8]
    unsigned int v3;  // [bp-0xb0]
    unsigned int v4;  // [bp-0xac]
    unsigned int v5;  // [bp-0xa8]
    unsigned long v6;  // [bp+0x8]
    unsigned int v7;  // edx
    unsigned int v8;  // edi
    unsigned int v9;  // esi
    unsigned long|unsigned int v10;  // ecx
    unsigned long v11;  // rsi
    unsigned int v12;  // r12d
    unsigned long long v13;  // rbx
    unsigned int *v15;  // rbp
    unsigned long v16;  // r8
    unsigned long long v17;  // rdx
    unsigned int v18;  // r9d
    unsigned long v19;  // rsi
    unsigned long v20;  // rdi
    unsigned long long v22;  // rax

    v0 = v7;
    if (v8 >= 0)
    {
        v13 = __fxstat(0x1, v8);
        if ((unsigned int)v13 == 0)
        {
            v10 = v3;
            if (((unsigned short)v3 & 0xf000) != 0x4000)
            {
                v12 = 20;
                v13 = -18446744069414584321;
                *((int *)v11) = 20;
                v15 = __errno_location();
            }
            if (((unsigned short)v3 & 0xf000) == 0x4000 && ((unsigned int)v11 != -1 || (unsigned int)v16 != -1) && ((unsigned int)v11 != -1 || v5 != (unsigned int)v16) && (v4 != (unsigned int)v11 || (unsigned int)v16 != -1) && (v4 != (unsigned int)v11 || v5 != (unsigned int)v16))
            {
                *((unsigned long *)&v1) = v10;
                v13 = fchown(v8);
            }
        }
        if (...)
        {
            v13 = fchmod(v8);
        }
    }
    else
    {
        v13 = __xstat(0x1, v9, (unsigned int)&v2);
        if ((unsigned int)v13 == 0)
        {
            v10 = v3;
            if (((unsigned short)v3 & 0xf000) != 0x4000)
            {
                v13 = -18446744069414584321;
                *(__errno_location()) = 20;
            }
            if (((unsigned short)v3 & 0xf000) == 0x4000 && ((unsigned int)v11 != -1 || (unsigned int)v16 != -1) && ((unsigned int)v11 != -1 || v5 != (unsigned int)v16) && (v4 != (unsigned int)v11 || (unsigned int)v16 != -1) && (v4 != (unsigned int)v11 || v5 != (unsigned int)v16))
            {
                *((unsigned long *)&v1) = v10;
                if (v0 != -1)
                {
                    v13 = lchown(v11);
                }
                else
                {
                    v13 = chown();
                }
            }
        }
        if (...)
        {
            v13 = chmod(v20, v19);
        }
    }
    if ((v8 < 0 && (unsigned int)v13 == 0 && ((unsigned short)v3 & 0xf000) == 0x4000 && ((unsigned int)v11 != -1 || (unsigned int)v16 != -1) && ((unsigned int)v11 != -1 || v5 != (unsigned int)v16) && (v4 != (unsigned int)v11 || (unsigned int)v16 != -1) && (v4 != (unsigned int)v11 || v5 != (unsigned int)v16) && (unsigned int)v13 == 0 || ((unsigned short)v3 & 0xf000) == 0x4000 && (unsigned int)v13 == 0 && v8 >= 0 && ((unsigned int)v11 != -1 || (unsigned int)v16 != -1) && ((unsigned int)v11 != -1 || v5 != (unsigned int)v16) && (v4 != (unsigned int)v11 || (unsigned int)v16 != -1) && (v4 != (unsigned int)v11 || v5 != (unsigned int)v16) && (unsigned int)v13 == 0) && (v10 & 73) != 0)
    {
        v17 = (unsigned int)v10 & 0xc00;
    }
    if (((unsigned short)v3 & 0xf000) == 0x4000 && (unsigned int)v16 != -1 && ((unsigned int)v11 == -1 || v4 == (unsigned int)v11) && (v8 < 0 || (unsigned int)v13 == 0) && ((unsigned int)v13 == 0 || v8 >= 0) && v5 == (unsigned int)v16 || (v8 < 0 && (unsigned int)v13 == 0 && ((unsigned short)v3 & 0xf000) == 0x4000 && ((unsigned int)v11 != -1 || (unsigned int)v16 != -1) && ((unsigned int)v11 != -1 || v5 != (unsigned int)v16) && (v4 != (unsigned int)v11 || (unsigned int)v16 != -1) && (v4 != (unsigned int)v11 || v5 != (unsigned int)v16) && (unsigned int)v13 == 0 || ((unsigned short)v3 & 0xf000) == 0x4000 && (unsigned int)v13 == 0 && v8 >= 0 && ((unsigned int)v11 != -1 || (unsigned int)v16 != -1) && ((unsigned int)v11 != -1 || v5 != (unsigned int)v16) && (v4 != (unsigned int)v11 || (unsigned int)v16 != -1) && (v4 != (unsigned int)v11 || v5 != (unsigned int)v16) && (unsigned int)v13 == 0) && (v10 & 73) == 0 || ((unsigned short)v3 & 0xf000) == 0x4000 && ((unsigned int)v11 == -1 || v4 == (unsigned int)v11) && (v8 < 0 || (unsigned int)v13 == 0) && ((unsigned int)v13 == 0 || v8 >= 0) && (unsigned int)v16 == -1)
    {
        v17 = 0;
    }
    if (...)
    {
        if (((v10 ^ v18 | v17) & (int)v6) != 0)
        {
            v19 = !((int)(stack_base)[8]) & v10 & 4095 | v18;
        }
        else
        {
            v13 = 0;
        }
    }
    if (...)
    {
        v13 = (unsigned int)close(v8);
    }
    if (...)
    {
        v15 = __errno_location();
        v12 = *(v15);
    }
    if (...)
    {
        close(v8);
        *(v15) = v12;
    }
    v22 = v13;
    return v22;
}

int sub_414470() { crash_skku;
}
int sub_405060()
{
    unsigned int v1;  // edi
    unsigned long v2;  // rcx
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rbp
    unsigned int v8;  // esi

    v3 = lseek(v1, v2, 0x1);
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
    {
        if ((char)v4 != 0)
        {
            v5 = sub_404cd0();
            if (v5 < 0)
            {
                v7 = (unsigned int)sub_40ea00();
            }
        }
        if ((char)v4 == 0 || v5 >= 0)
        {
            return 1;
        }
    }
    else
    {
        v6 = (unsigned int)sub_40ea00();
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>) || v5 < 0 && (char)v4 != 0)
    {
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, v8, 0x5));
        return 0;
    }
}

int sub_40b380()
{
    unsigned long long v1;  // rdi
    unsigned long long v2[3];  // rbx
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rax

    v2 = v1;
    v4 = v3;
    v5 = v2[2];
    v6 = v2[6]();
    if (v2[2] <= v6)
    {
        abort(); /* do not return */
    }
    return v6 * 16 + *(v2);
}

int sub_411300()
{
    void tmp_10;  // tmp #10
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdi

    tmp_10 = v2;
    v4 = v2 * v3;
    v5 = v2 * v3;
    v4 = (char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, rsi<8>, cc_ndep<8>);
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v4 = [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, rsi<8>, cc_ndep<8>);
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>) || [D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t10, rsi<8>, cc_ndep<8>) != 0)
    {
        v0 = v4;
        sub_411530(); /* do not return */
    }
}

int sub_4113b0() { crash_skku;
}
typedef struct struct_0 {
    char field_0;
    char field_1;
    char padding_2[2];
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
} struct_0;

int sub_40ce50()
{
    void tmp_87;  // tmp #87
    struct_0 *v1;  // rcx
    unsigned long long v2;  // r11
    unsigned int v3;  // edi
    unsigned int v6;  // r12d
    char v7;  // sil
    unsigned long long|unsigned int v8;  // r10
    unsigned long long|unsigned int v9;  // rdi
    unsigned long|unsigned int v10;  // r9
    unsigned long v11;  // r13
    unsigned long long v12;  // r11
    unsigned long|unsigned int v13;  // r9
    unsigned long|unsigned int v14;  // r9
    unsigned int v16;  // cc_dep1
    unsigned int v20;  // r10d
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rax
    unsigned int *v23;  // r8

    v2 = v1->field_1;
    v22 = v3 & 4095;
    v21 = 0;
    if (v1->field_1 != 0)
    {
        while (true)
        {
            v6 = v1->field_4;
            v10 = v1->field_8;
            if (v7 == 0)
            {
                v8 = -18446744069414584321;
                v9 = 0;
            }
            else
            {
                v8 = v1->field_c | -3073;
                v9 = !(v1->field_c) & 0xc00;
            }
            if (v2 != 2 || (v22 & 73) == 0 && v7 == 0)
            {
                v12 = v1->field_0;
                v13 = v10 & (unsigned int)v8;
            }
            if (v2 == 2)
            {
                v12 = v1->field_0;
                v13 = ((unsigned int)v10 | 73) & (unsigned int)v8;
            }
            else if (v2 == 3)
            {
                v10 = (unsigned int)v10 & (unsigned int)v22;
                tmp_87 = !(0 - (unsigned int)(char)(((unsigned int)v10 & 292) < 1)) & 292;
                v10 = (unsigned int)v10 | ((v10 & 73) != 0? ((v10 & 146) != 0? (unsigned int)v11 : tmp_87) | 73 : ((v10 & 146) != 0? (unsigned int)v11 : tmp_87));
            }
            if (v6 == 0)
            {
                v14 = v13 & !((unsigned int)rdx<8>);
            }
            else
            {
                v14 = v13 & v6;
                if (v12 != 45)
                {
                    v16 = v12;
                }
                if (v12 == 61)
                {
                    v9 |= !((unsigned int)r12<8>);
                    v8 = !((unsigned int)cc_dep1<8>);
                }
            }
            if (v6 == 0 && v12 == 45 || v12 == 45 && v6 != 0)
            {
                v21 |= v14;
                v22 = (unsigned int)v22 & !((unsigned int)r9<8>);
            }
            if (v6 == 0 && v12 != 45 || v12 != 45 && v6 != 0)
            {
                if (v12 == 43 && (v6 == 0 || v12 != 61) && (v6 != 0 || v12 != 61))
                {
                    v21 |= v14;
                    v22 = (unsigned int)v22 | v14;
                }
                if ((v6 == 0 || v12 == 61) && (v12 == 61 || v6 != 0))
                {
                    v1 = &v1[1];
                    v2 = v1->field_1;
                    v20 = v8 & 4095;
                    v21 |= v20;
                    v22 = (unsigned int)v22 & v9 | v14;
                    if ((char)v2 == 0)
                    {
                        break;
                    }
                }
            }
            if (v12 != 61 || v12 != 61)
            {
                v1 = &v1[1];
                v2 = v1->field_1;
                if ((char)v2 == 0)
                {
                    break;
                }
            }
        }
    }
    if (v23 != 0)
    {
        *((unsigned long long *)&v23) = v21;
    }
    return v22;
}

int sub_40a2b0()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r13
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r14
    unsigned long long v7;  // r12
    unsigned int *v8;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx
    char *v12;  // rsi
    unsigned long long v13;  // rax

    v2 = v1;
    v4 = v3;
    v5 = (unsigned int)sub_40ad40();
    v10 = sub_40ada0();
    if (v10 > 14)
    {
        v6 = (unsigned short)*((short *)v5);
        v7 = v10;
        *((short *)v5) = 46;
        *(v8) = 0;
        v10 = pathconf(v3, 0x3);
        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>))
        {
            v11 = 255;
        }
        if (*(__errno_location()) == 0 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
        {
            v11 = v10;
        }
        *((unsigned long long *)v5) = v6;
        if (v7 > v11)
        {
            v12 = v4 + v1;
            v13 = v4 + v2 - v5;
            if (v4 + v2 - v5 < v11)
            {
                v11 = v13 + 1;
            }
            else
            {
                v12 = v5 + v11 - 1;
            }
            *(v12) = 126;
            *((char *)(v5 + v11)) = 0;
            return v13;
        }
    }
    if (v7 <= v11 || v10 <= 14)
    {
        return v10;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned long long g_621998[10];

int sub_409ad0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // r12
    unsigned long long v5[10];  // r12
    unsigned long v6;  // rbx
    unsigned long long v7;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v10[2];  // rbx
    unsigned long long v11;  // rax
    unsigned long long v12[2];  // rbp
    struct_0 *v13;  // rdi
    void *v14;  // rbx
    struct_0 *v15;  // rdi
    void *v16;  // rbx

    v2 = v4;
    v5 = g_621998;
    v1 = stack_base + 0;
    v0 = v6;
    v12 = *(v5);
    v11 = v5[1];
    if (v5[8] != 0 && v5[4] != 0 && *(g_621998) < g_621998[1])
    {
        while (true)
        {
            v7 = *(v12);
            if (*(v12) == 0)
            {
                v12 = &v12[2];
                if (v11 <= v12)
                {
                    break;
                }
            }
            else
            {
                v10 = v12;
                while (true)
                {
                    *((long long *)(r12<8> + 64))();
                    v10 = v10[1];
                    if (v10 == 0)
                    {
                        break;
                    }
                    v9 = *(v10);
                }
                v11 = v5[1];
                v12 = &v12[2];
                if (v5[1] <= *(g_621998) + 16)
                {
                    break;
                }
            }
        }
        v12 = *(v5);
    }
    if ((v5[4] == 0 || *(g_621998) < g_621998[1] || v5[8] == 0) && v12 < v11)
    {
        do
        {
            v13 = v12[1];
            if (v12[1] != 0)
            {
                while (true)
                {
                    v14 = v13->field_8;
                    free(v13);
                    v13 = v14;
                    if (v14 == 0)
                    {
                        break;
                    }
                }
            }
            v12 = &v12[2];
        }
        while (v5[1] > v12);
    }
    v15 = v5[9];
    if (v5[9] != 0)
    {
        while (true)
        {
            v16 = v15->field_8;
            free(v15);
            v15 = v16;
            if (v16 == 0)
            {
                break;
            }
        }
    }
    free(*(v5));
}

int sub_412950()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_4128f0();
}

int sub_413960()
{
    unsigned int v1;  // [bp+0x100008]
    void *v2;  // rdi

    __explicit_bzero_chk();
    free(v2);
    *(__errno_location()) = v1;
    return sub_413e90();
}

int sub_40fcf0()
{
    unsigned int v1;  // [bp+0x100008]
    unsigned int v2;  // rdi
    unsigned long long v3;  // rax

    if (v2 > 2)
    {
        return v2;
    }
    close(v2);
    *(__errno_location()) = v1;
    return v3;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    struct struct_1 *field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_1;

int sub_40be70()
{
    void tmp_15;  // tmp #15
    void *v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long|unsigned int v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    struct_1 *v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x20]
    struct_0 *v11;  // rdi
    unsigned long long v12[10];  // rbp
    unsigned long v13;  // rsi
    unsigned long v14;  // rsi
    uint128_t v16;  // xmm0
    unsigned int v17;  // ymm0
    uint128_t v18;  // xmm0
    void v19;  // xmm0
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax

    v12 = v11;
    if (v11->field_28->field_10 == 0)
    {
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
        {
            v18 = 0;
            v18 = (unsigned int)v13;
        }
        else
        {
            tmp_15 = v14;
            v16 = 0;
            v17 = tmp_15 >> 1 | (unsigned long long)((unsigned int)v14 & 1);
            v18 = xmm0<16> * 2;
        }
        xmm0<16> = (xmm0<16> / Conv(32->128, Load(addr=(Load(addr=(rdi<8> + 0x28<64>), size=8, endness=Iend_LE) + 0x8<64>), size=4, endness=Iend_LE)))
    }
    if (*((long long *)&v2) != 0 && (((char)(BinaryOp CmpF & 69) & 1) == 0 || v11->field_28->field_10 != 0) && (v11->field_28->field_10 != 0 || ((char)(BinaryOp CmpF & 69) & 1) != 0) && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) == 0)
    {
        if (v11->field_10 != *((long long *)&v2))
        {
            v0 = calloc(*((long long *)&v2), 0x10);
            if (v0 != 0)
            {
                v2 = (unsigned int)sub_40b2c0();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_40b550();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_40b550();
                    if (v22 != 0)
                    {
                        v23 = sub_40b550();
                        if (v23 != 0)
                        {
                            free(v0);
                            v25 = v21;
                            return v25;
                        }
                    }
                    if (v23 == 0 || v22 == 0)
                    {
                        abort(); /* do not return */
                    }
                }
                else
                {
                    free(*(v12));
                    v12[0] = v0;
                    v12[1] = v1;
                    v12[2] = v2;
                    v12[3] = v3;
                    v12[9] = v9;
                }
            }
        }
        else
        {
            return 1;
        }
    }
    if (v11->field_28->field_10 == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0 || *((long long *)&v2) == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || ((char)(BinaryOp CmpF & 69) & 1) == 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) != 0 || v11->field_28->field_10 != 0 && ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, Shl(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3<8>), 0x0<64>, 0x0<64>)? 1 : [D] amd64g_calculate_condition(0x5<64>, 0x24<64>, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d<8>), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c<8>), 0x0<64>)) != 0 || v0 == 0 && ((char)(BinaryOp CmpF & 69) & 1) == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_28->field_10 != 0 && v11->field_10 != *((long long *)&v2))
    {
        v21 = 0;
    }
    if ((char)v21 != 0 || v11->field_10 != *((long long *)&v2))
    {
        v24 = v21;
        return v24;
    }
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409a10()
{
    unsigned long long v1[3];  // rbx
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    struct_0 *v5;  // rbp
    unsigned long long v6;  // rax

    v1 = (unsigned long long)(unsigned int)sub_4112e0();
    v1[0] = v2;
    v1[2] = (unsigned int)sub_411510();
    v1[1] = v3;
    if (rbp<8> != 0)
    {
        rbp<8> = sub_40c2f0();
        v6 = 0;
        if (v1 != rbp<8>)
        {
            free(v1[2]);
            free(v1);
            v6 = v5->field_10;
        }
        return v6;
    }
    sub_411530(); /* do not return */
}

int sub_40e920()
{
    unsigned int v0;  // [bp-0x48]
    unsigned int v1;  // [bp-0x44]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned int v9;  // esi

    if (v9 == 10)
    {
        abort(); /* do not return */
    }
    v0 = v9;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    return sub_40e400();
}

int sub_40ebe0()
{
}

extern unsigned int g_621b28;
extern unsigned int g_621b2c;

int sub_410ab0()
{
    unsigned long|unsigned long long v0;  // [bp-0xd0]
    unsigned long|void v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    unsigned long|void v3;  // [bp-0xb8]
    unsigned long v4;  // [bp-0xb0]
    char v5;  // [bp-0xa8]
    unsigned int v6;  // [bp-0x90]
    unsigned long v7;  // [bp-0x60]
    unsigned long v8;  // [bp-0x58]
    unsigned long v9;  // [bp-0x50]
    unsigned long v10;  // [bp-0x48]
    uint128_t v12[2];  // rsi
    unsigned long long|unsigned int v13;  // ebx
    unsigned int v14;  // edi
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned int *v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbp

    if (v12 != 0)
    {
        v0 = stack_base + -200;
        *((int128_t *)&v1) = *((int128_t *)&v12);
        *((int128_t *)&v3) = *((int128_t *)&v12[2]);
        v13 = (unsigned int)sub_4105a0();
        if ((unsigned int)v13 >= 0 && g_621b28 >= 0 && (unsigned int)v13 == 2)
        {
            v15 = __lxstat(0x1, v14, (unsigned int)&v5);
            if (v15 == 0)
            {
                if ((long long)(&v1)[8] != 1073741822)
                {
                    v13 = 3;
                    if ((long long)(&v3)[8] == 1073741822)
                    {
                        v4 = v10;
                        v3 = v9;
                    }
                }
                else
                {
                    v13 = 3;
                    v1 = v7;
                    v2 = v8;
                }
            }
        }
    }
    else
    {
        v13 = 0;
        v0 = 0;
        if (g_621b28 < 0)
        {
            g_621b28 = -1;
        }
    }
    if (g_621b28 >= 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 == 0 || v15 == 0 || (unsigned int)v13 != 2))
    {
        v16 = utimensat(0xffffff9c, v14);
        if ((unsigned int)v16 > 0)
        {
            *(__errno_location()) = 38;
        }
        else
        {
            if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v17 = __errno_location();
            }
            if ((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>) || *(v17) != 38)
            {
                g_621b2c = 1;
                g_621b28 = 1;
                return stack_base + 0;
            }
        }
    }
    if ((v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2))
    {
        g_621b28 = -1;
        if (v13 != 0 && v13 != 3)
        {
            v19 = __lxstat(0x1, v14, (unsigned int)&v5);
        }
    }
    if (v12 == 0 && g_621b28 < 0 || v13 == 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2))
    {
        v18 = __lxstat(0x1, v14, (unsigned int)&v5);
    }
    if (v13 != 3 && v13 != 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2) && v19 == 0 && v0 != 0 || v13 == 3 && v13 != 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2) && v0 != 0)
    {
        v20 = sub_4104d0();
    }
    if ((v13 != 3 && v13 != 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2) && v19 == 0 && v0 != 0 || v13 == 3 && v13 != 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2) && v0 != 0) && v20 == 0 || v13 != 3 && v13 != 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2) && v19 == 0 && v0 == 0 || v13 == 3 && v13 != 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2) && v0 == 0 || (v12 == 0 && g_621b28 < 0 || v13 == 0 && (v12 == 0 || (unsigned int)v13 >= 0) && (v12 != 0 || g_621b28 >= 0) && (*(v17) == 38 || g_621b28 < 0 || (unsigned int)v16 > 0) && (g_621b28 < 0 || !((char)[D] amd64g_calculate_condition(0x4<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>)) || (unsigned int)v16 > 0) && (v12 == 0 || g_621b28 < 0 || v15 == 0 || (unsigned int)v13 != 2)) && v18 == 0)
    {
        if (((unsigned short)v6 & 0xf000) != 0xa000)
        {
            v21 = (unsigned int)sub_410660();
        }
        else
        {
            *(__errno_location()) = 38;
        }
    }
    if (...)
    {
        return stack_base + 0;
    }
}

int sub_40fc70()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx
    unsigned int v3;  // ecx

    v0 = v2;
    if (v3 <= 2)
    {
        return sub_40fb10();
    }
    sub_40faf0(); /* do not return */
}

extern unsigned int g_418668;
extern unsigned int g_418c3b;

int sub_404f50()
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rbp
    unsigned long long v3;  // rdi
    unsigned long long v4;  // rbx
    unsigned long long v6;  // bl
    unsigned long long v7;  // r13
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rbp

    v2 = v1;
    v4 = v3;
    if ((unsigned int)sub_409e90() >= 0)
    {
        v6 = (char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>) & v2;
        if (((char)[D] amd64g_calculate_condition(0xf<64>, 0x13<64>, rax<8>, 0x0<64>, cc_ndep<8>) & v2) == 0)
        {
            return 1;
        }
        v9 = (unsigned int)sub_40ea00();
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x418c3b, 0x5));
        return rbx<8>;
    }
    v7 = (unsigned int)sub_40e920();
    v8 = (unsigned int)sub_40e920();
    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x418668, 0x5));
    return 0;
}

extern unsigned long long __progname_full;
extern unsigned long long g_6219c0;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_40cfd0()
{
    unsigned long long v1;  // rdi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // r8
    unsigned long long v6;  // cc_dep1
    unsigned long long v7;  // cc_dep2
    unsigned long v8;  // d
    char *v9;  // rdi
    char *v10;  // rsi
    unsigned long long v11;  // rcx
    char *v13;  // rdi
    unsigned long long v14;  // rcx
    char *v15;  // rsi
    unsigned long long v16;  // cc_dep1
    unsigned long long v17;  // cc_dep2

    if (v1 != 0)
    {
        v3 = v1;
        v4 = strrchr();
        if (v4 != 0)
        {
            v5 = v4 + 1;
            if (v4 + 1 - v1 > 6)
            {
                v10 = v4 - 6;
                v9 = "/.libs/";
                v11 = 7;
                while (v11 != 0)
                {
                    v11 -= 1;
                    v6 = *(v10);
                    v7 = *(v9);
                    v9 = &v9[v8];
                    v10 = &v10[v8];
                    break;
                }
                if ((v6 > v7) - 0 - (v6 < v7) == 0)
                {
                    v13 = "lt-";
                    v14 = 3;
                    v15 = v5;
                    v3 = v5;
                    while (v14 != 0)
                    {
                        v14 -= 1;
                        v16 = *(v15);
                        v17 = *(v13);
                        v13 = &v13[v8];
                        v15 = &v15[v8];
                        break;
                    }
                    if ((v16 > v17) - 0 - (v16 < v17) == 0)
                    {
                        v3 = v4 + 4;
                        program_invocation_short_name = v4 + 4;
                    }
                }
            }
        }
        g_6219c0 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_40f910()
{
    unsigned long v0;  // [bp-0x58]
    unsigned int v1;  // [bp-0x50]
    unsigned int v2;  // [bp-0x4c]
    unsigned int v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x3c]
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r13
    unsigned long v8;  // rdi
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rax
    char *v11;  // rdx
    unsigned long long v12;  // rbp
    unsigned long|unsigned long long v13;  // r14
    unsigned long long v14;  // r15
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdi
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long *v22;  // r15
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rdi
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax

    v7 = v6;
    v1 = v8;
    v3 = 0;
    v2 = (unsigned int)v8 - 1;
    if ((unsigned int)(v8 - 1) >= 0)
    {
        v12 = v8 - 1;
        if (*((char *)*((long long *)(v9 + (v8 - 1 << 3)))) == 47)
        {
            v10 = v8 - 2;
            do
            {
                v12 = v10;
                v11 = *((long long *)(v9 + v10 * 8));
                v10 -= 1;
            }
            while (*(v11) == 47 && (unsigned int)v10 >= 0);
        }
        if ((unsigned int)v12 > 0)
        {
            v14 = v9;
            v13 = 0;
            v0 = v9 + (v12 - 1) * 8 + 8;
            do
            {
                if (v4 <= 0 || (unsigned int)0 != 3)
                {
                    v16 = v15;
                    v17 = &v3;
                    v18 = *((long long *)v14);
                    v19 = r13<8>();
                    v13 = (unsigned int)((unsigned int)v13 < v19? (unsigned int)v19 : (unsigned int)v13);
                }
                if (*((char *)*((long long *)(v14 + 8))) != 47)
                {
                    v20 = sub_40f770();
                    v13 = (unsigned int)((unsigned int)v13 < v20? (unsigned int)v20 : (unsigned int)v13);
                }
                v14 += 8;
            }
            while (v14 != v0);
        }
    }
    if ((unsigned int)v12 <= 0 || (unsigned int)(v8 - 1) < 0)
    {
        v13 = 0;
        v12 = 0;
    }
    sub_40f8a0();
    if (v1 > (unsigned int)v12)
    {
        v22 = v14 + v12 * 8;
        v23 = v14 + (v2 - (unsigned int)v12 + v12) * 8 + 8;
        while (true)
        {
            v24 = *(v22);
            v25 = v15;
            v26 = &v3;
            v27 = r13<8>();
            v13 = (unsigned int)((unsigned int)v13 < v27? (unsigned int)v27 : (unsigned int)v13);
            v22 = &v22[1];
            if (v22 == v23)
            {
                break;
            }
        }
    }
    v28 = v13;
    return v28;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_41aa3f;
extern char g_621b78[2];

int sub_413060()
{
    unsigned long|unsigned long long v0;  // [bp-0xd0]
    void tmp_12;  // tmp #12
    void tmp_56;  // tmp #56
    void tmp_1;  // tmp #1
    void tmp_10;  // tmp #10
    void tmp_3;  // tmp #3
    void tmp_28;  // tmp #28
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0xb4]
    char v5;  // [bp-0x78]
    char v6;  // [bp-0x74]
    unsigned int v7;  // [bp-0x4]
    unsigned long long|char [2] v9;  // r15
    unsigned long|char * v10;  // rbx
    unsigned long v11;  // rax
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    char *v15;  // r13
    unsigned long long v16;  // r14
    unsigned long long v17;  // rbp
    struct_1 *v20;  // r12
    unsigned short v21;  // dx
    unsigned int v22;  // r12d
    unsigned long v26;  // rdi
    unsigned long long v28;  // rax
    unsigned int *v29;  // rcx
    unsigned int v30;  // eax
    unsigned long v31;  // rax
    unsigned int *v32;  // rdx
    unsigned long long v33;  // rcx
    unsigned long long v34;  // rax
    unsigned long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long v38;  // rsi
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rcx
    unsigned long long v42;  // rdi
    unsigned long long v43;  // rsi
    unsigned long long v44;  // r9
    unsigned long long v45;  // r10
    unsigned int v46;  // ecx
    unsigned long long v48;  // r8
    void *v49;  // rcx
    unsigned long long v52;  // rcx
    unsigned int v54;  // edx
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rsi
    char *v59;  // rax
    unsigned long long v60;  // rdi
    char *v61;  // rax
    unsigned long long v62;  // rax
    unsigned long long v63;  // rdx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rax

    v9 = g_621b78;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_41aa3f : (unsigned long long)nl_langinfo(0xe));
    if (g_621b78 == 0)
    {
        v15 = getenv("CHARSETALIASDIR");
        if (v15 != 0 && *(v15) != 0)
        {
            v11 = strlen(v15);
            v14 = v11;
            v16 = v11;
            if (v11 == 0)
            {
                v12 = 14;
            }
            else if (v15[v11 + -1] == 47)
            {
                v12 = v11 + 14;
            }
            else
            {
                v13 = v11 + 15;
                v14 += 1;
            }
            if (v11 == 0 || v15[v11 + -1] == 47)
            {
                v17 = malloc(v12);
                if (v17 != 0)
                {
                    memcpy(v17, v15, v16);
                }
            }
        }
        if (*(v15) == 0 || v15 == 0)
        {
            v13 = 115;
            v14 = 101;
            v16 = 100;
            v15 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        }
        if (*(v15) == 0 || v15 == 0 || v11 != 0 && v15[v11 + -1] != 47)
        {
            v17 = malloc(v13);
        }
        if (v17 == 0 || v17 == 0)
        {
            v9 = &g_41aa3f;
        }
        if (v17 != 0 && (*(v15) == 0 || v15 == 0 || v11 != 0) && (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47))
        {
            memcpy(v17, v15, v16);
            *((char *)(v17 + v16)) = 47;
        }
        if (*(v15) == 0 && v17 != 0 || v15 == 0 && v17 != 0 || v11 != 0 && v15[v11 + -1] != 47 && v17 != 0 || v11 == 0 && *(v15) != 0 && v17 != 0 && v15 != 0 || v15[v11 + -1] == 47 && *(v15) != 0 && v17 != 0 && v15 != 0)
        {
            v20 = v14 + v17;
            v20->field_0 = 3347411969557751907;
            v20->field_c = 115;
            v20->field_8 = 1634298977;
            v22 = open(v17, 0x0, v21);
            if (v22 >= 0)
            {
                v9 = 0;
                v0 = 0;
                if (v10 != 0)
                {
                    v10 = fdopen(v22, "r");
                    while (true)
                    {
                        v59 = *((long long *)(v10 + 8));
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v26 != 32 && (unsigned int)v26 != 35)
                        {
                            ungetc(v26, v10);
                            v28 = fscanf(v10, "%50s %50s", (unsigned int)&v3, (unsigned int)&v5);
                            if (v28 > 1)
                            {
                                v29 = &v3;
                                do
                                {
                                    tmp_12 = (unsigned int)*((int *)&v3);
                                    v29 = &v4;
                                    v30 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                }
                                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                v31 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax<8> >> 16) : (unsigned int)rax<8>);
                                v32 = &v5;
                                v33 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v29 + 2) : v29) + -1 * ((v31 + v31 <= v31? 1 : 0) & 1) + -0x1 * &v3;
                                do
                                {
                                    tmp_12 = (unsigned int)*((int *)&v5);
                                    v32 = &v6;
                                    v34 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                }
                                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                v1 = v33;
                                tmp_56 = (unsigned int)v34 % 0x10000;
                                v35 = (unsigned int)(((unsigned int)v34 & 32896) == 0? (unsigned int)(v34 >> 16) : (unsigned int)v34);
                                v36 = &((char *)(-3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v32)[2] : v32) + -1 * ((v35 + v35 <= v35? 1 : 0) & 1) + -0x1 * &v5))[v1];
                                v2 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v32)[2] : v32) + -1 * (((unsigned int)((((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)? 1 : 0) & 1) + -0x1 * &v5;
                                if (v0 == 0)
                                {
                                    v0 = v36 + 2;
                                    v37 = malloc(v36 + 3);
                                    v39 = v1;
                                    v40 = v2;
                                }
                                else
                                {
                                    v38 = v36 + v0 + 3;
                                    v0 = v36 + v0 + 2;
                                    v37 = realloc(NULL, v38);
                                    v40 = v2;
                                    v39 = v1;
                                }
                                if (v37 != 0)
                                {
                                    tmp_1 = -2 - v39;
                                    v41 = v39 + 1;
                                    v42 = v0 - v40;
                                    v43 = tmp_1 + v0 - v40 + v37;
                                    if ((unsigned int)v41 >= 8)
                                    {
                                        *((long long *)v43) = *((long long *)&v3);
                                        *((long long *)(v43 + v41 - 8)) = *((long long *)&(&v3)[v41 + -8]);
                                        v44 = v43 + 8 & -8;
                                        v43 -= v43 + 8 & -8;
                                        v45 = &(&v3)[-1 * v43];
                                        v46 = (unsigned int)(v41 + v43) & -8;
                                        if (v46 >= 8)
                                        {
                                            v43 = 0;
                                            do
                                            {
                                                v48 = v43;
                                                v43 = (unsigned int)v43 + 8;
                                                *((long long *)(v44 + v48)) = *((long long *)(v45 + v48));
                                            }
                                            while ((unsigned int)v43 < (v46 & -8));
                                        }
                                    }
                                    else if ((v41 & 4) != 0)
                                    {
                                        *((int *)v43) = *((int *)&v3);
                                        *((int *)(v43 + v41 - 4)) = *((int *)&(&v3)[v41 + -4]);
                                    }
                                    else if ((unsigned int)v41 != 0)
                                    {
                                        *((char *)v43) = v3;
                                        if ((v41 & 2) != 0)
                                        {
                                            *((short *)(v43 + v41 - 2)) = *((short *)&(&v3)[v41 + -2]);
                                        }
                                    }
                                    v63 = v40 + 1;
                                    v49 = v37 + v42 - 1;
                                    if ((unsigned int)v43 >= 8)
                                    {
                                        *((long long *)v49) = *((long long *)&v5);
                                        v43 = v63;
                                        *((long long *)&((char *)v49)[v43 + -8]) = *((long long *)&(&v5)[v43 + -8]);
                                        v52 = v49 - (v49 + 8 & -8);
                                        v54 = (unsigned int)(v43 + v52) & -8;
                                        if (v54 >= 8)
                                        {
                                            v57 = 0;
                                            do
                                            {
                                                v58 = v57;
                                                v57 = (unsigned int)v57 + 8;
                                                *((long long *)((v49 + 8 & -8) + v58)) = *((long long *)&(&v5)[v58 + -1 * v52]);
                                            }
                                            while ((unsigned int)v57 < (v54 & -8));
                                        }
                                    }
                                    else if (((char)v43 & 4) != 0)
                                    {
                                        *((int *)v49) = *((int *)&v5);
                                        *((unsigned int *)&((char *)v49)[(unsigned long long)v7 + -4]) = v7;
                                    }
                                    else if ((unsigned int)v43 != 0)
                                    {
                                        *((char *)v49) = v5;
                                        if ((v5 & 2) != 0)
                                        {
                                            *((short *)&((char *)v49)[(unsigned long long)v5 + -2]) = v7;
                                        }
                                    }
                                    v9 = v37;
                                    v59 = *((long long *)(v10 + 8));
                                }
                                else
                                {
                                    v9 = &g_41aa3f;
                                    v10 = (tmp_10 == 0? &g_41aa3f : tmp_10);
                                    free(NULL);
                                    sub_4143e0();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && v37 != 0 && v28 > 1 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35)
                        {
                            *((char **)(v10 + 8)) = &v59[1];
                            v26 = *(v59);
                        }
                        if ((unsigned int)v26 == 35)
                        {
                            do
                            {
                                v61 = *((long long *)(v10 + 8));
                                if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                {
                                    *((char **)(v10 + 8)) = &v61[1];
                                    v62 = *(v61);
                                    v63 = 1;
                                }
                                else
                                {
                                    v62 = __uflow(v10);
                                    v63 = (char)(v62 != -1);
                                }
                            }
                            while (v63 != 0 && v62 != 10);
                        }
                        if (v62 == -1 && (unsigned int)v26 == 35 || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v28 <= 1 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35)
                        {
                            v10 = (tmp_10 == 0? &g_41aa3f : tmp_10);
                            sub_4143e0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if (...)
                    {
                        v9 = &g_41aa3f;
                    }
                    else if (...)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_41aa3f;
            free(v17);
        }
        *((char *[2])&g_621b78[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_41aa3f : tmp_10), v9);
            if (v68 != 0 && (v67 != 42 || v9[1] != 0))
            {
                v69 = strlen(v9);
                v70 = &((char [2])&v9[v69])[1];
                v71 = strlen(&((char [2])&v9[v69])[1]);
                v9 = v70 + v71 + 1;
                v67 = (char)*((char *)(v70 + v71 + 1));
                if (v67 == 0)
                {
                    break;
                }
            }
            if (v68 == 0 || v67 == 42 && v9[1] == 0)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

int sub_40ec30()
{
}

int sub_413e90()
{
    unsigned long long *v1;  // rdi

    __explicit_bzero_chk();
    free(v1);
    if (*(v1) == 0)
    {
        return 0;
    }
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_40b0b0()
{
}

int sub_411b50()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_411bc0();
    }
}

extern int512_t g_4192de;
extern int512_t g_4192e2;

int sub_40d0d0()
{
    unsigned long v1;  // rdi
    char *v2;  // rbx
    char v3[8];  // rax
    unsigned long long v4;  // rdx
    unsigned long v5;  // rsi
    char *v6;  // rax

    v2 = (unsigned long long)dcgettext(0x0, v1, 0x5);
    if (v1 == v2)
    {
        v3 = sub_413060();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_4192de : 4297449);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_4192e2 : 4297445);
            }
        }
    }
    if (...)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[4] == 56 && (v3[2] & 223) == 70 && (v3[1] & 223) == 84 && v1 == v2 && v3[5] == 0 && (v3[0] & 223) == 85 || (v3[1] & 223) == 66 && v4 == 71 && v1 == v2 && v3[3] == 56 && v3[2] == 49 && v3[4] == 48 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

extern unsigned long long g_621998;

int sub_409a90()
{
    g_621998 = (unsigned int)sub_40bb50();
    if (g_621998 != 0)
    {
        return g_621998;
    }
    sub_411530(); /* do not return */
}

int sub_412b30()
{
    unsigned int *v1;  // rcx
    unsigned int v2;  // edx

    *(v1) = v2;
    return 0;
}

int sub_412a70()
{
    unsigned long long v0;  // [bp-0x800]
    void *v2;  // rax
    unsigned long long v3;  // rbx
    void *v4;  // rbp
    void *v5;  // rdi
    unsigned int *v7;  // r12
    unsigned long long v9;  // rax

    v0 = 2000;
    v2 = sub_414470();
    v3 = v0;
    if (false)
    {
        *(__errno_location()) = 75;
    }
    if (stack_base + 0 != 0)
    {
        v4 = v2;
        if (!(fwrite(v2, 0x1, 0x7d0, v5) >= 2000))
        {
            v3 = -18446744069414584321;
            if (v4 != stack_base + -2040)
            {
                free(v4);
                *(__errno_location()) = *(v7);
            }
        }
        else if (v4 != stack_base + -2040)
        {
            free(v4);
        }
    }
    else
    {
        v3 = -18446744069414584321;
        sub_414460();
    }
    v9 = v3;
    return v9;
}

int sub_412b40()
{
}

int sub_409940()
{
    unsigned long long v1[2];  // rdi
    unsigned long long v2[2];  // rsi
    unsigned long long v3;  // rax
    char v4;  // al

    if (*(v1) != *(v2))
    {
        return 0;
    }
    v3 = v2[1];
    v4 = v1[1] == v2[1];
    return rax<8>;
}

int sub_40abc0()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // r12d
    unsigned int *v6;  // rbp
    unsigned long long v7;  // r13
    unsigned long|unsigned int v9;  // r14
    unsigned long long v10;  // rbx

    if (v2 != 0)
    {
        v3 = dirfd(v2);
        if (v3 <= 2)
        {
            v5 = sub_411a10();
            v6 = __errno_location();
            if (v5 < 0)
            {
                v9 = *(v6);
                v7 = 0;
            }
            else
            {
                v9 = *(v6);
                v7 = fdopendir(v5);
                if (v7 == 0)
                {
                    close(v5);
                }
            }
            v10 = v7;
            closedir();
            *((unsigned long *)&v6) = v9;
            return v10;
        }
    }
    if (v2 == 0 || v3 > 2)
    {
        v2 = opendir();
        return v4;
    }
}

int sub_40faf0()
{
    __assert_fail(); /* do not return */
}

int sub_40a1c0()
{
    unsigned int v1;  // edi
    unsigned long v3;  // rsi
    char *v4;  // r12
    unsigned int *v5;  // rax
    unsigned long long v6;  // rdi
    void *v7;  // rax
    char *v8;  // rbp
    unsigned long long v9;  // rbx

    v9 = (1025 <= v3? 1025 : v3 + 1);
    while (true)
    {
        v7 = malloc(v9);
        v8 = v7;
        if (v7 == 0)
        {
            break;
        }
        while (true)
        {
            v4 = (unsigned long long)readlink(v1, (unsigned int)v7, v9);
            if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))
            {
                v5 = __errno_location();
                if (*(v5) != 34)
                {
                    free(v8);
                }
            }
            if (*(v5) == 34 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>)))
            {
                if (v9 <= v4)
                {
                    free(v8);
                    if (v9 <= 4611686018427387903)
                    {
                        v9 *= 2;
                        v6 = v9;
                        v7 = malloc(v6);
                        v8 = v7;
                        if (v7 == 0)
                        {
                            break;
                        }
                    }
                    else if (v9 <= 9223372036854775806)
                    {
                        v9 = 9223372036854775807;
                    }
                    else
                    {
                        *(__errno_location()) = 12;
                    }
                }
                else
                {
                    *((char *)(v8 + v4)) = 0;
                }
            }
        }
        if (v9 <= 9223372036854775806 && v9 <= v4 && v9 > 4611686018427387903 && (*(v5) == 34 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>))))
        {
            v7 = malloc(v9);
        }
        else if (v9 <= 4611686018427387903 || v9 > 9223372036854775806 || v9 > v4 || (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>) && *(v5) != 34)
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

extern unsigned int g_41707c;
extern unsigned int g_41709c;
extern unsigned int g_4172b8;
extern char g_61f430;
extern unsigned long long g_61f438;
extern unsigned int g_61f448;
extern char g_61f44c;
extern void g_61f540;
extern void g_620540;
extern char g_621541;
extern char g_621542;
extern unsigned int g_621544;
extern unsigned int g_621550;
extern unsigned int g_621560;

int sub_404090()
{
    unsigned long v0;  // [bp-0x1f0]
    char v1;  // [bp-0x1e8]
    unsigned int v2;  // [bp-0x1d0]
    unsigned long v3;  // [bp-0x1a0]
    unsigned long v4;  // [bp-0x198]
    unsigned long v5;  // [bp-0x190]
    unsigned long v6;  // [bp-0x188]
    char v7;  // [bp-0x158]
    unsigned int v8;  // [bp-0x140]
    unsigned long v9;  // [bp-0x128]
    unsigned long|char v10;  // [bp-0xc8]
    unsigned long v11;  // [bp-0xc0]
    unsigned long v12;  // [bp-0xb8]
    unsigned long|unsigned int v13;  // [bp-0xb0]
    unsigned int v14;  // [bp-0xac]
    unsigned int v15;  // [bp-0xa8]
    unsigned long v16;  // [bp-0x98]
    char *v18;  // rdi
    unsigned long long|char [2] v19;  // r12
    char v20[38];  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rbp
    unsigned long long v23;  // rax
    unsigned long v24;  // rsi
    unsigned long long v25;  // rax
    unsigned int *v26;  // r14
    unsigned int *v27;  // r14
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned int *v30;  // r14
    unsigned long long v31;  // rax
    unsigned int v32;  // r14d
    unsigned long long v33;  // rax
    unsigned int v34;  // r15d
    unsigned long v36;  // rax
    unsigned long long v43;  // rax
    unsigned long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rbp
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned long long v49;  // rbp
    unsigned long long v50;  // rax
    unsigned long long v51;  // rbp
    unsigned long long v52;  // rax
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax
    char v55[2];  // r12
    char v56[2];  // rdx
    unsigned long long v57;  // rax
    unsigned int v58;  // ebx
    void *v59;  // r13

    v19 = v18;
    if (v20[3 + 7] != 0)
    {
        v21 = __xstat(0x1, (unsigned int)v18, (unsigned int)&v1);
        if (v21 != 0)
        {
            v22 = (unsigned int)sub_40ea00();
        }
    }
    if ((v21 == 0 || v20[3 + 7] == 0) && g_621542 != 0 && (g_61f448 & -0xf200) == 0)
    {
        v23 = __lxstat(0x1, (unsigned int)v18, (unsigned int)&v7);
        if (v23 == 0)
        {
            v25 = __lxstat(0x1, v24, (unsigned int)&v10);
            if (v25 == 0 && ((unsigned short)v8 & 0xf000) == 0x8000 && ((unsigned short)v13 & 0xf000) == 0x8000 && ((v8 | v13) & -0xf200) == 0 && v9 == v16 && g_61f448 == (v13 & 4095))
            {
                v28 = g_621550;
                if (g_621550 == -1)
                {
                    *(v26) = 0;
                    v26 = __errno_location();
                    v28 = getuid();
                }
            }
        }
    }
    if (...)
    {
        v29 = g_621544;
        if (g_621544 == -1)
        {
            *(v27) = 0;
            v27 = __errno_location();
            v29 = getgid();
        }
    }
    if (...)
    {
        *(__errno_location()) = 95;
    }
    if (...)
    {
        v31 = open(v18, 0x0, v13 & 4095);
        v32 = v31;
        if ((unsigned int)v31 >= 0)
        {
            v33 = open(v19, 0x0, v20);
            v34 = v33;
            if ((unsigned int)v33 >= 0)
            {
                while (true)
                {
                    if (v0 != 0)
                    {
                        v0 = (unsigned int)sub_40b1c0();
                        v36 = sub_40b1c0();
                        close(v32);
                        close(v34);
                    }
                    else
                    {
                        close(v32);
                        close(v34);
                    }
                }
                if (v0 != 0 && (v36 != v0 || memcmp(&g_61f540, &g_620540, v36) != 0))
                {
                    v43 = sub_409810();
                }
            }
            else
            {
                close(v32);
            }
        }
    }
    if (...)
    {
        v43 = sub_409810();
    }
    if (...)
    {
        if (g_621541 == 0)
        {
        }
        else
        {
            v44 = fork();
            if (v44 != -1 && v44 != 0)
            {
                v45 = waitpid(v44, (unsigned int)&v10, 0x0);
                if (v45 >= 0 && !(*((int *)&v10) >> 8 == 0 && ((char)*((int *)&v10) & 127) == 0))
                {
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4172b8, 0x5));
                }
            }
            if (v44 == 0)
            {
                execlp(g_61f438, g_61f438, (unsigned int)v19, 0x0);
                v46 = (unsigned int)sub_40ea00();
                error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x41707c, 0x5));
            }
        }
    }
    if (...)
    {
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, v24, 0x5));
    }
    if (...)
    {
        v47 = unlink(v19);
        if (v47 != 0)
        {
            v49 = (unsigned int)sub_40ea00();
            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x41709c, 0x5));
        }
    }
    if (...)
    {
        v10 = v3;
        v11 = v4;
        v12 = v5;
        v13 = v6;
        v48 = sub_410aa0();
        if (v48 != 0)
        {
            v51 = (unsigned int)sub_40ea00();
        }
    }
    if (...)
    {
        if ((g_621550 & g_621544) != -1)
        {
            v50 = lchown((unsigned int)v19);
            if (v50 != 0)
            {
                v19 = (unsigned int)sub_40ea00();
            }
        }
        if (v50 == 0 || (g_621550 & g_621544) == -1)
        {
            v52 = chmod((unsigned int)v19, g_61f448);
            if (v52 != 0)
            {
                v19 = (unsigned int)sub_40ea00();
            }
        }
        if (v52 != 0 || v50 != 0 && (g_621550 & g_621544) != -1)
        {
            error(0x0, *(__errno_location()), v20);
        }
        if (g_61f44c != 0 && g_621560 == 1)
        {
            v53 = __lxstat(0x1, (unsigned int)v19, (unsigned int)&v10);
            if (v53 == 0)
            {
                if (g_61f430 != 0 && v19[0] == 47)
                {
                    v54 = v19[1];
                    v55 = &v19[1];
                    if (v19[1] != 47)
                    {
                        v56 = v55;
                        v19 = v24;
                    }
                    else
                    {
                        while (true)
                        {
                            v54 = v55[1];
                            v56 = &v55[1];
                            if (v55[1] != 47)
                            {
                                break;
                            }
                            v55 = v56;
                        }
                    }
                    if (v54 != 0)
                    {
                        do
                        {
                            v56 = &v56[1];
                            v57 = v56[0];
                        }
                        while ((char)v57 != 0 && v57 != 47);
                        v58 = v56 - v55;
                        v59 = malloc(v56 - v55 + 2);
                        if (v59 != 0)
                        {
                            *((short *)(unsigned long long)stpncpy((unsigned int)v59, (unsigned int)v55, v58)) = 47;
                            free(v59);
                        }
                    }
                }
                g_61f430 = 0;
                *(__errno_location()) = 95;
            }
        }
    }
    if (...)
    {
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, v24, 0x5));
    }
    if (v47 == 0 || v44 != 0)
    {
        return stack_base + 0;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b720()
{
    unsigned long long v1[4];  // rdi
    unsigned long long v2[2];  // rcx
    struct_0 *v3;  // rax
    unsigned long long v4;  // rdx
    unsigned long long v5;  // r8

    v2 = *(v1);
    v4 = 0;
    v5 = 0;
    if (*(v1) < v1[1])
    {
        while (true)
        {
            if (*(v2) != 0)
            {
                v3 = v2[1];
                v5 += 1;
                v4 += 1;
                if (v2[1] != 0)
                {
                    do
                    {
                        v3 = v3->field_8;
                        v4 += 1;
                    }
                    while (v3 != 0);
                    v2 = &v2[2];
                    if (*(v1) + 16 >= v1[1])
                    {
                        break;
                    }
                }
            }
            if (v2[1] == 0 || *(v2) == 0)
            {
                v2 = &v2[2];
                if (v2 >= v1[1])
                {
                    break;
                }
            }
        }
    }
    if (v1[3] != v5)
    {
        return 0;
    }
    return 0;
}

int sub_40ebb0()
{
}

int sub_412b60()
{
    return 0 - (unsigned int)(char)(sub_412b40() != 0);
}

extern unsigned int g_4186b8;

int sub_405620()
{
    unsigned int *v1;  // rbp
    char v2[39];  // rcx
    unsigned long long v3;  // rbx

    v1 = __errno_location();
    if (v2[4 + 3] != 0 && v2[4 + 6] == 0)
    {
        *(v1) = 95;
        return 0;
    }
    if (v2[4 + 3] == 0 || v2[4 + 6] != 0)
    {
        *(v1) = 95;
        v3 = (unsigned int)sub_40e920();
        error(0x0, *(v1), (unsigned long long)dcgettext(0x0, 0x4186b8, 0x5));
        return 0;
    }
}

int sub_40d070()
{
    unsigned long long v2;  // rax

    if (sub_412b30() == 0)
    {
        v2 = sub_412b60();
    }
    else
    {
        v2 = -18446744069414584322;
    }
    return v2;
}

int sub_40b0c0()
{
    unsigned long long v1;  // rax

    v1 = sub_40b0e0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_411530(); /* do not return */
}

extern char g_61f528;
extern unsigned long long g_61f530;

int sub_403d51()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // rax
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v10;  // r12

    if (g_61f528 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_61f530 >= 0)
            {
                break;
            }
            g_61f530 = g_61f530 + 1;
            *((long long *)(6417984 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_61f528 = 1;
        return sub_403cfb();
    }
    return v4;
}

int sub_40ec10()
{
}

