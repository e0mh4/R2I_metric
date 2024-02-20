
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_41d79e;
extern unsigned int g_41d7b6;
extern unsigned int g_41d7e8;

int sub_40c6c0()
{
    unsigned long v0;  // [bp-0x20]
    void tmp_14;  // tmp #14
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // r13
    unsigned long v5;  // r12
    unsigned long v6;  // rsi
    unsigned int v7;  // ebp
    unsigned long v8;  // rbx
    unsigned long long v9[5];  // rdi
    unsigned long long v12;  // rdi
    unsigned long long v13[2];  // rsi
    struct v14;  // rax
    unsigned long long v15;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // rbx
    unsigned long v17;  // xmm1lq
    uint128_t v18;  // xmm0
    unsigned long v19;  // xmm0lq
    uint128_t v20;  // xmm0
    uint128_t v21;  // xmm0
    unsigned long long v22;  // xmm0lq

    v2 = v4;
    v1 = v5;
    v7 = v6;
    v0 = v8;
    v16 = 0;
    v13 = *(v9);
    v12 = v9[1];
    if (v13 < v12)
    {
        while (true)
        {
            if (*(v13) == 0)
            {
                v13 = &v13[2];
                if (v13 >= v12)
                {
                    break;
                }
            }
            else
            {
                v14 = v13[1];
                v15 = 1;
                if (v13[1] != 0)
                {
                    do
                    {
                        v14 = v14->field_8;
                        v15 += 1;
                    }
                    while (v14 != 0);
                }
                v16 = (v16 < v15? v15 : v16);
                v13 = &v13[2];
                if (v13 >= v12)
                {
                    break;
                }
            }
        }
    }
    __fprintf_chk(v7, 0x1, 0x41d79e, v9[4]);
    __fprintf_chk(v7, 0x1, 0x41d7b6, v17);
    if (!(INVALID_IR))
    {
        v18 = 0;
        v19 = v9[3];
        v20 = xmm0 * 0x4059000000000000;
    }
    else
    {
        v21 = 0;
        v22 = 0 >> 1 | (unsigned long long)(unsigned int)(0 & 1);
        v20 = xmm0 * 0x80b2000000000000;
        tmp_14 = v17;
    }
    __fprintf_chk(v7, 0x1, 0x41d7e8, v19);
}

extern unsigned int g_6256fc;
extern unsigned int g_625700;
extern unsigned int g_625704;
extern unsigned int g_625708;
extern unsigned int g_62570c;
extern unsigned int g_625710;
extern unsigned int g_625714;
extern unsigned int g_625718;
extern unsigned int g_62571c;
extern unsigned int g_625720;
extern char g_625724;
extern unsigned long long g_625760;
extern char g_625769;
extern unsigned long long g_625770;

int sub_4084b0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    unsigned long long v3[3];  // rbp

    v1 = g_625770;
    v2 = g_625760;
    if (g_625770 != 0)
    {
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[1];
            free(*(v3));
            free(v3[1]);
            v1 = free(v3[2]);
            if (v2 == g_625760 + (g_625770 << 3))
            {
                break;
            }
        }
    }
    g_625769 = 0;
    g_625770 = 0;
    g_625724 = 0;
    g_625720 = 0;
    g_62571c = 0;
    g_625718 = 0;
    g_625710 = 0;
    g_62570c = 0;
    g_625708 = 0;
    g_625714 = 0;
    g_625704 = 0;
    g_625700 = 0;
    g_6256fc = 0;
    return v1;
}

int sub_416e00()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_416d80();
}

int sub_40c2a0()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_40c190()
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
    if ((char)v11 == 0 || v3 == 0)
    {
        return v10;
    }
}

int sub_40c810()
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
        v6 = sub_40c2b0();
        while (true)
        {
            if (v9 != v1)
            {
                v1 = v3;
                v7 = *((long long *)(r12 + 56))();
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

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

extern char g_41b08a;

int sub_405a30()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct v4;  // rdi
    unsigned int v5;  // eax
    char v6;  // al
    unsigned int v7;  // ecx
    unsigned long long v8;  // rcx
    struct v9;  // rsi
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    char *v12;  // rax
    char *v13;  // rbp
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12

    v5 = v4->field_a8;
    v6 = v4->field_a8 == 9;
    v8 = v7 | rax;
    if (v9->field_a8 != 3 && v9->field_a8 != 9 && v8 != 0)
    {
        return -18446744069414584321;
    }
    if (v9->field_a8 == 3 || v9->field_a8 == 9 || v8 == 0)
    {
        if (v8 == 0 && (v9->field_a8 == 3 || v9->field_a8 == 9))
        {
            return 1;
        }
        if (v8 != 0 || v9->field_a8 != 3 && v9->field_a8 != 9)
        {
            v2 = v10;
            v1 = stack_base + 0;
            v0 = v11;
            v13 = (unsigned long long)strrchr();
            v12 = strrchr();
            if (v12 != 0)
            {
                v13 = (v13 == 0? &g_41b08a : v13);
            }
            else
            {
                v12 = &g_41b08a;
            }
            if (v12 != 0 || v13 != 0)
            {
                v14 = strcmp(v13, v12);
                if ((unsigned int)v14 != 0)
                {
                    v15 = v0;
                    v16 = v2;
                    return v14;
                }
            }
        }
    }
}

extern char g_6256d2;

int sub_405e30()
{
    unsigned long v1;  // rax
    unsigned long long v2;  // rax

    if (g_6256d2 == 0)
    {
        return v1;
    }
    v2 = sub_404ae0();
    if (v2 == 0)
    {
        return v2;
    }
    sub_405cd0();
    sub_405cd0();
}

int sub_40eba0()
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long *v5;  // [bp-0x40]
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rbx
    unsigned long v9;  // rsi
    void *v10;  // rdx
    unsigned long long v11;  // rdi
    unsigned long long v14;  // rbp
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdi
    unsigned long long v17;  // rax
    unsigned long long v18;  // rbp
    unsigned long long v19;  // r15
    unsigned long long v20;  // r14
    unsigned long long *v21;  // r12
    unsigned long long v24;  // rbp
    unsigned long long v25;  // r12
    unsigned long long v26;  // rsi
    unsigned long long v27;  // rdi
    unsigned long long v28;  // rax
    unsigned long long v30;  // r15
    unsigned long long v31;  // r14
    unsigned long long v32;  // r12
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rdi
    unsigned long long v36;  // rdx

    v8 = v7;
    v1 = v9;
    v3 = v10;
    if (!(v9 <= 2))
    {
        v11 = v7 + (v1 >> 1) * 8;
        v2 = v1 >> 1;
        v5 = v11;
        sub_40eba0();
        if (v1 == 3)
        {
            v18 = *((long long *)v8);
            *((long long *)v3) = *((long long *)v8);
        }
        else
        {
            v19 = v3;
            v20 = v1 >> 2;
            v21 = v8 + (v1 >> 2) * 8;
            v4 = v1 >> 2;
            sub_40eba0();
            sub_40eba0();
            v0 = 0;
            v24 = *((long long *)v8);
            v25 = *(v21);
            while (true)
            {
                v26 = v25;
                v27 = v24;
                v19 += 8;
                v28 = rcx();
                if (v28 > 0)
                {
                    *((unsigned long long *)(v19 - 8)) = v25;
                    v20 += 1;
                    if (v2 != v20)
                    {
                        v25 = *((long long *)(v8 + v20 * 8));
                    }
                }
                else
                {
                    v0 += 1;
                    *((unsigned long long *)(v19 - 8)) = v24;
                    if (v4 != v0)
                    {
                        v24 = *((long long *)(v8 + v0 * 8));
                    }
                    else
                    {
                        v0 = v20;
                        v4 = v2;
                    }
                }
                if (v28 <= 0 && v4 == v0 || v2 == v20 && v28 > 0)
                {
                    memcpy(v19, v8 + v0 * 8, (v4 - v0) * 8);
                    v18 = *((long long *)v3);
                }
            }
        }
        v0 = 0;
        v30 = 0;
        v31 = v2;
        v32 = *(v5);
        while (true)
        {
            v33 = v32;
            v34 = v18;
            v30 += 1;
            if (rcx() > 0)
            {
                *((unsigned long long *)(v8 + v30 * 8 - 8)) = v32;
                v31 += 1;
                if (v1 != v31)
                {
                    v32 = *((long long *)(v8 + v31 * 8));
                }
            }
            else
            {
                v0 += 1;
                v17 = v0;
                *((unsigned long long *)(v8 + v30 * 8 - 8)) = v18;
                if (v2 == v0)
                {
                    break;
                }
                v36 = v3;
                v18 = *((long long *)(v3 + v0 * 8));
            }
        }
    }
    else if (v9 == 2)
    {
        v14 = *((long long *)v7);
        v15 = *((long long *)(v7 + 8));
        v16 = *((long long *)v7);
        v17 = rcx();
        if ((unsigned int)v17 > 0)
        {
            *((long long *)v8) = *((long long *)(v7 + 8));
            *((unsigned long long *)(v8 + 8)) = v14;
            return v17;
        }
    }
    if ((unsigned int)v17 <= 0 || v9 != 2 || v9 > 2)
    {
        return v17;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_40c290;
extern int512_t g_40c2a0;
extern int512_t g_41d810;

int sub_40ca80()
{
    unsigned long long v1;  // rbx
    struct v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // xmm1
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
            v4 = sub_40c400();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_41d810;
            v3 = sub_40c400();
            v5 = 0;
            v8 = 6881500231684115661;
        }
        if ((v2 == 0 || v2->field_10 == 0) && (v2 == 0 || v4 != 0) && (v2 != 0 || v3 != 0))
        {
            if (!(INVALID_IR))
            {
                v6 = 0;
                v6 = (unsigned int)v10;
            }
            else
            {
                v9 = 0;
                v11 = v10 % 2 | (unsigned long long)((unsigned int)v10 & 1);
                v6 = xmm0 * 2;
            }
            v12 = v6 / v5;
        }
        if ((v2 == 0 || v4 != 0) && (((char)(INVALID_IR) & 1) == 0 || v2 != 0) && (((char)(INVALID_IR) & 1) == 0 || v2->field_10 != 0) && (v2 != 0 || ((char)(INVALID_IR) & 1) != 0) && (v2 != 0 || v3 != 0) && (((char)(INVALID_IR) & 1) != 0 || v2->field_10 != 0))
        {
            v13 = (unsigned int)sub_40c1f0();
            if (((char)(v13 >> 60) & 1) == 0 &&  amd64g_calculate_condition(0x8, 0x14, rdi, 0x0, cc_ndep) == 0)
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_40c290 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_40c2a0 : v17);
                        *((unsigned long *)(v1 + 64)) = v18;
                        *((long long *)(v1 + 72)) = 0;
                    }
                }
            }
        }
        if (unknown)
        {
            v19 = v1;
            v1 = 0;
            free(v19);
        }
    }
    v20 = v1;
    return v20;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[40];
    char field_50;
} struct_0;

int _obstack_free()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rbp
    struct v3;  // rdi
    struct v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v6;  // r12
    unsigned long long v8[2];  // rsi

    v2 = v1;
    v8 = v3->field_8;
    v4 = v3;
    if (v3->field_8 != 0)
    {
        while (true)
        {
            if (v8 < v2)
            {
                v5 = *(v8);
                if (*(v8) >= v2)
                {
                    v4->field_18 = v2;
                    v4->field_10 = v2;
                    v4->field_20 = v5;
                    v4->field_8 = v8;
                    return v5;
                }
            }
            if (*(v8) < v2 || v8 >= v2)
            {
                v6 = v8[1];
                v4->field_50 = v4->field_50 | 2;
                v8 = v6;
                if (v6 == 0)
                {
                    break;
                }
            }
        }
    }
    if (v2 != 0)
    {
        abort(); /* do not return */
    }
    return sub_417070();
}

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

int sub_405970()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // edx
    unsigned long long v5;  // rdx
    struct v6;  // rsi
    unsigned long long v7;  // rdx

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        v7 = -18446744069414584321;
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if (v6->field_a8 == 3 && v5 == 0 || v6->field_a8 == 9 && v5 == 0 || v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        return v7;
    }
}

int sub_412b30()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_412980();
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_40c5d0()
{
    struct v1;  // rdi

    return v1->field_10;
}

// int sub_412220()

// int sub_412240()

// int sub_40edd0()

int sub_40e9b0()
{
    char v0;  // [bp-0x44]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v3;  // rdi
    char *v4;  // rbx
    unsigned long v7;  // rsi
    unsigned long v8;  // rdx
    unsigned int v9;  // r15d
    unsigned short *v10;  // rdx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbp
    unsigned long long v16;  // rax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax

    v4 = v3;
    if ((unsigned long long)__ctype_get_mb_cur_max() > 1)
    {
        v18 = 0;
        if (v3 < v3 + v7)
        {
            while (true)
            {
                v11 = *(v4);
                if (*(v4) <= 63)
                {
                    if (v11 < 37)
                    {
                        v12 = (unsigned int)v11 - 32;
                    }
                }
                else
                {
                    if (v11 >= 65 && v11 > 95)
                    {
                        v13 = (unsigned int)v11 - 97;
                    }
                }
                if ((v11 < 37 || *(v4) > 63) && (*(v4) > 63 || v12 > 3) && (v11 < 65 || *(v4) <= 63 || v11 > 95) && (v11 < 65 || *(v4) <= 63 || v13 > 29))
                {
                    v1 = 0;
                    while (true)
                    {
                        v14 = (unsigned int)sub_416e80();
                        if (v14 == -1)
                        {
                            if (((char)v8 & 1) == 0)
                            {
                                break;
                            }
                        }
                        else if (v14 != -2)
                        {
                            v16 = wcwidth();
                            if ((unsigned int)v16 < 0)
                            {
                                if (((char)v8 & 2) != 0)
                                {
                                    break;
                                }
                                if (((char)v8 & 2) == 0)
                                {
                                    v19 = iswcntrl(*((int *)&v0));
                                    if (v19 == 0 && (unsigned int)v18 != 2147483647)
                                    {
                                        v18 = (unsigned int)v18 + 1;
                                    }
                                }
                            }
                            else if (2147483647 - (unsigned int)v18 >= (unsigned int)v16)
                            {
                                v18 += v16;
                            }
                            if (((char)v8 & 2) == 0 || (unsigned int)v16 >= 0)
                            {
                                if (((unsigned int)v16 < 0 || 2147483647 - (unsigned int)v18 < (unsigned int)v16) && ((unsigned int)v18 == 2147483647 || (unsigned int)v16 >= 0) && (v19 == 0 || (unsigned int)v16 >= 0))
                                {
                                    v18 = 2147483647;
                                }
                                if (((unsigned int)v16 < 0 || 2147483647 - (unsigned int)v18 >= (unsigned int)v16) && ((unsigned int)v16 >= 0 || (unsigned int)v18 != 2147483647 || v19 != 0))
                                {
                                    v4 = &v4[(v14 == 0? 1 : rbp)];
                                    if (mbsinit((unsigned int)&v1) != 0)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (((char)v8 & 1) != 0)
                            {
                                break;
                            }
                            v18 = (unsigned int)v18 + 1;
                            v4 = v3 + v7;
                        }
                    }
                    if (v14 == -2 || (unsigned int)v16 < 0 && v14 != -1 || v14 == -1 && ((char)v8 & 1) != 0)
                    {
                        v18 = -18446744069414584321;
                    }
                    else if (v14 == -1)
                    {
                        v4 = &v4[1];
                        v18 = (unsigned int)v18 + 1;
                    }
                    else if (true)
                    {
                        if (v4 >= v3 + v7)
                        {
                            break;
                        }
                    }
                    else if (v14 != -1 && v14 != -2 && ((unsigned int)v16 < 0 || 2147483647 - (unsigned int)v18 < (unsigned int)v16) && ((unsigned int)v18 == 2147483647 || (unsigned int)v16 >= 0) && (v19 == 0 || (unsigned int)v16 >= 0) && (((char)v8 & 2) == 0 || (unsigned int)v16 >= 0))
                    {
                        v22 = v18;
                        return v22;
                    }
                }
                v4 = &v4[1];
                v18 = (unsigned int)v18 + 1;
            }
            if ((v11 < 37 || *(v4) > 63) && (*(v4) > 63 || v12 > 3) && (v11 < 65 || *(v4) <= 63 || v11 > 95) && (v11 < 65 || *(v4) <= 63 || v13 > 29))
            {
                v18 = -18446744069414584321;
            }
            else
            {
                v22 = v18;
                return v22;
            }
        }
    }
    else
    {
        v18 = 0;
        if (v3 < v3 + v7)
        {
            v18 = 0;
            v9 = (unsigned int)v8 & 2;
            v10 = *((long long *)(unsigned long long)__ctype_b_loc());
            while (true)
            {
                v4 = &v4[1];
                v21 = v10[(unsigned long long)v4[-1]];
                if (((char)(v10[(unsigned long long)v4[-1]] >> 8) & 64) == 0 && v9 != 0)
                {
                    break;
                }
                if (((char)(v10[(unsigned long long)v4[-1]] >> 8) & 64) != 0 || (v21 & 2) == 0 && v9 == 0)
                {
                    if ((unsigned int)v18 == 2147483647)
                    {
                        break;
                    }
                    v18 = (unsigned int)v18 + 1;
                }
            }
            if (((char)(v10[(unsigned long long)v4[-1]] >> 8) & 64) == 0)
            {
                v18 = -18446744069414584321;
            }
            else if ((v21 & 2) == 0 || v3 + v7 == v4 || ((char)(v10[(unsigned long long)v4[-1]] >> 8) & 64) != 0)
            {
                v22 = v18;
                return v22;
            }
        }
    }
    if (v3 < v3 + v7)
    {
        v18 = -18446744069414584321;
    }
    v22 = v18;
    return v22;
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

extern unsigned int g_41fc68;
extern unsigned int g_41fc99;
extern unsigned long long stderr;

int sub_4167b0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x4c]
    char v6[2];  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    struct v8;  // [bp+0x8]
    unsigned int v9;  // [bp+0x10]
    unsigned long v10;  // rcx
    unsigned long v11;  // r8
    unsigned int v12;  // r13d
    unsigned int v13;  // edi
    unsigned long v14;  // rsi
    unsigned long v15;  // r12
    char v16[2];  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // eax
    unsigned long long v18;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v24;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v27;  // rdx
    unsigned long v29;  // rax
    char v30[3];  // rcx
    unsigned long v31;  // rsi
    unsigned long long v32;  // rcx
    char *v33;  // rdi
    char *v34;  // rsi
    unsigned long long v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long v37;  // d
    unsigned long long v38;  // cc_dep1
    unsigned int v39;  // ecx
    unsigned int v40;  // eax
    unsigned long long v41;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v42;  // edx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned long long *v46;  // rbp
    unsigned long long v47;  // rax
    char v48[3];  // r14
    unsigned long v49;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v50;  // r15
    char v51[3];  // rax
    unsigned int v52;  // ecx
    char v53[3];  // r8
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rcx
    unsigned long long v57;  // rdx
    unsigned int v58;  // eax
    char v60[3];  // rax
    unsigned long long v62;  // r14
    char v63;  // r14b
    unsigned long long v64;  // r14
    char v65;  // r14b
    unsigned long long v66;  // rax

    v3 = v10;
    v4 = v11;
    v12 = v8->field_4;
    if (v13 > 0)
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
                v49 = (unsigned int)(v20 == 58? 0 : (unsigned int)r13);
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
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13);
        }
        if (*(v19) == 0 || (unsigned int)v17 == 0 && v19 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        sub_4160b0();
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
                if (v13 > (unsigned int)v27)
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
                            if (v13 <= (unsigned int)v29)
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
            if (v13 != (unsigned int)v26)
            {
                v32 = 3;
                v33 = "-";
                v48 = *((long long *)(v15 + v26 * 8));
                v34 = *((long long *)(v15 + v26 * 8));
                while (v32 != 0)
                {
                    v32 -= 1;
                    v35 = *(v34);
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
                            sub_4160b0();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v0->field_2c;
                        v42 = v40;
                    }
                    *((unsigned long long **)&v0->field_30) = v46;
                    *((unsigned long long **)&v0->field_0) = v46;
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
                v46 = (unsigned long long)v0->field_30;
                v42 = v0->field_2c;
            }
        }
    }
    if ((v13 != (unsigned int)v26 && v13 > 0 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || v13 == (unsigned int)v26 && v13 > 0 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if ((v13 != (unsigned int)v26 && v13 > 0 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || v13 != (unsigned int)v26 && v13 > 0 && (*(v19) == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || *(v19) == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
    {
        v44 = (unsigned int)v26 + 1;
        v0->field_10 = v48;
        v45 = 1;
        v0->field_0 = v44;
    }
    if (unknown)
    {
        v45 = -18446744069414584321;
    }
    if (unknown)
    {
        v0->field_20 = &v48[1];
        v2 = "-";
        v1 = v49;
        v0 = v8;
        v45 = (unsigned int)sub_416190();
        if ((unsigned int)v45 == -1)
        {
            v48 = *((long long *)(v15 + (int)v0->field_0 * 8));
        }
    }
    if (unknown)
    {
        v19 = &v48[1];
    }
    if (unknown)
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
                if (v0->field_0 != v46)
                {
                    v53 = *((long long *)(v15 + (int)v8->field_0 * 8));
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41fc68, 0x5), *((long long *)v15));
                    }
                    v0->field_8 = v45;
                    v62 = 0;
                    v63 = *(v50) != 58;
                    v45 = r14 * 5 + 58;
                }
            }
        }
    }
    if (unknown)
    {
        if ((unsigned int)v49 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41fc99, 0x5), *((long long *)v15));
        }
        v0->field_8 = v45;
        v45 = 63;
    }
    if (unknown)
    {
        v57 = v6[1];
        if (v51[2] != 58)
        {
            if (!(v57 == 0))
            {
                v58 = v8->field_0 + 1;
                v0->field_10 = v7;
                v0->field_0 = v58;
            }
            else if (v46 != v8->field_0)
            {
                v60 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v60;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41fc68, 0x5), *((long long *)v15));
                }
                v0->field_8 = v45;
                v64 = 0;
                v65 = *(v50) != 58;
                v45 = r14 * 5 + 58;
            }
        }
        else
        {
            if (v57 != 0)
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
    if (unknown)
    {
        v0->field_20 = v53;
        v0->field_10 = 0;
        v2 = "-W ";
        v1 = v49;
        v0 = v0;
    }
    if (unknown)
    {
        v45 = (unsigned int)sub_416190();
    }
    v66 = v45;
    return v66;
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

extern char g_414b19;
extern char g_414b4e;
extern char g_414bbe;
extern char g_414c1a;
extern char g_414c91;
extern char g_414cbe;
extern char g_414ce8;
extern char g_414d0a;
extern char g_414d5d;
extern char g_414d9c;
extern char g_414dec;
extern char g_414e01;
extern char g_414e27;
extern char g_414e71;
extern char g_414e8a;
extern char g_414ea3;
extern unsigned int g_625918;

int sub_414960()
{
    unsigned long long v0;  // [bp-0x1b0]
    unsigned long v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    unsigned long v3;  // [bp-0x88]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x80]
    unsigned long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x58]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x40]
    unsigned long v11;  // [bp-0x28]
    unsigned long v12;  // [bp-0x20]
    unsigned long v13;  // [bp-0x18]
    unsigned long v14;  // [bp-0x10]
    unsigned long v15;  // [bp-0x8]
    unsigned int v17;  // edi
    unsigned long long v18;  // rdx
    unsigned long v19;  // rcx
    char *v20;  // rsi
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v23;  // r14
    unsigned long long v24;  // r15
    unsigned long v25;  // rdx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    char v29[2];  // rcx
    unsigned long v30;  // rdx
    unsigned long long v31;  // rax
    unsigned long long v33;  // r13
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long long *v37;  // r14
    unsigned long long v38;  // rax
    unsigned long long *v39;  // r14
    unsigned int v40;  // r9d
    unsigned long long v41;  // rax
    unsigned long long *v42;  // r13
    unsigned long long v43;  // r13
    char v44;  // r8b
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned long long v49;  // r14
    unsigned long long v51;  // rax

    v9 = v17;
    v6 = v18;
    v5 = v19;
    v10 = 0;
    rsp = &v2;
    v8 = strlen(v20);
    v22 = v4->field_1;
    if (v4->field_1 != 0)
    {
        v23 = &v4->field_1;
        v4 = v20;
        v24 = 0;
        v7 = v9 - 63;
        while (true)
        {
            if (v22 != 91)
            {
                while (true)
                {
                    v21 = v22 - 33;
                    if ((v22 - 33 & 255) <= 31)
                    {
                        v0 = 3221227009;
                        rsp = &v2;
                        if (v23[1] == 40 && ((char)((char)*(&((char *)stack_base)[((v21 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v21 & 63 & 7)) & 1) != 0)
                        {
                            v24 += 1;
                            v23 = &v23[1];
                            v22 = 40;
                        }
                        if (v22 == 41 && (((char)((char)*(&((char *)stack_base)[((v21 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v21 & 63 & 7)) & 1) == 0 || v23[1] != 40))
                        {
                            if (v24 != 0)
                            {
                                v22 = v23[1];
                                v23 = &v23[1];
                                if (v22 != 0)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v30 = &v23[-1 * v3];
                                v31 = ((unsigned int)((unsigned long long)v9 - 63) <= 1? v8 : (char [3])&((char [3])&v23[-1 * v3])[1]) + 15 & -8;
                                if ((((unsigned int)((unsigned long long)v9 - 63) <= 1? v8 : (char [3])&((char [3])&v23[-1 * v3])[1]) + 15 & -8) - 8 > 7991)
                                {
                                    break;
                                }
                                rsp = &(&v2)[-1 * (v31 + 23 & -0x10) + -8];
                                v15 = &g_414bbe;
                                v10 = &(&v2)[-1 * (v31 + 23 & -0x10) + 15] & -0x10;
                                *((char *)(unsigned long long)mempcpy((&(&v2)[-1 * (v31 + 23 & -0x10) + 15] & -0x10) + 8, (unsigned int)(struct struct_0 *)&v4->field_1, v30)) = 0;
                                *(v10) = 0;
                                v8 = v10;
                                if (v10 == 0)
                                {
                                    rsp = rsp - 8;
                                    v14 = &g_414ea3;
                                    __assert_fail(); /* do not return */
                                }
                                else if (v23[-1 + 7] == 41)
                                {
                                    v33 = v9 - 33;
                                    switch (v9)
                                    {
                                    case 33:
                                        if (v6 <= v5)
                                        {
                                            *((char *[3])&v9[0]) = v23;
                                            while (true)
                                            {
                                                v37 = v8;
                                                while (true)
                                                {
                                                    rsp = rsp - 8;
                                                    v14 = &g_414d5d;
                                                    v36 = sub_414eb0();
                                                    if (v36 != 0)
                                                    {
                                                        v37 = *(v37);
                                                        rsp = rsp - 8;
                                                        v12 = &g_414d9c;
                                                        v38 = sub_414eb0();
                                                        if (v38 == 0)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                if (v36 == 0 || v37 == 0 && v38 != 0)
                                                {
                                                    v37 = v8;
                                                }
                                                else if (v36 == 0 || v37 == 0 && v38 != 0)
                                                {
                                                    v41 = 1;
                                                }
                                                else if (v37 == 0 && v36 != 0)
                                                {
                                                    v41 = 0;
                                                }
                                            }
                                            if (true)
                                            {
                                                v41 = 1;
                                            }
                                            else
                                            {
                                                v41 = 0;
                                            }
                                        }
                                    case 42:
                                        rsp = rsp - 8;
                                        v14 = &g_414c1a;
                                    case 43:
                                        *((char *[3])&v7[0]) = v23;
                                        v39 = v8;
                                        v8 = v40 & 1;
                                        v4 -= 1;
                                        while (true)
                                        {
                                            if (v6 <= v5)
                                            {
                                                v43 = v6;
                                                v9 = v44;
                                                do
                                                {
                                                    rsp = rsp - 8;
                                                    v13 = &g_414ce8;
                                                    v45 = sub_414eb0();
                                                    if (v45 == 0)
                                                    {
                                                        if (v6 != v43)
                                                        {
                                                            rsp = rsp - 8;
                                                            v12 = &g_414c91;
                                                            v47 = sub_414eb0();
                                                            if (v47 == 0)
                                                            {
                                                                break;
                                                            }
                                                            rsp = rsp - 8;
                                                            v11 = &g_414cbe;
                                                            v48 = sub_414eb0();
                                                            if (v48 == 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            rsp = rsp - 8;
                                                            v12 = &g_414d0a;
                                                            v46 = sub_414eb0();
                                                            if (v46 == 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        v39 = v10;
                                                    }
                                                    v43 += 1;
                                                }
                                                while (v5 >= v43);
                                                if (v45 == 0)
                                                {
                                                    v41 = 0;
                                                }
                                                else if (v45 != 0 || v6 == v43 && v46 != 0 || v48 != 0 && v47 != 0 && v6 != v43)
                                                {
                                                    v49 = *(v39);
                                                    v10 = v49;
                                                }
                                            }
                                            v49 = *(v39);
                                            v10 = v49;
                                        }
                                        if (v6 <= v5)
                                        {
                                            v41 = 0;
                                        }
                                        else if (v49 == 0)
                                        {
                                            v41 = 1;
                                        }
                                    case 63:
                                        rsp = rsp - 8;
                                        v14 = &g_414e27;
                                        v35 = sub_414eb0();
                                        if (v35 != 0)
                                        {
                                            v42 = v8;
                                            while (true)
                                            {
                                                rsp = rsp - 8;
                                                v13 = &g_414dec;
                                                strcat(&v42[1], v23);
                                                rsp = rsp - 8;
                                                v12 = &g_414e01;
                                                v51 = sub_414eb0();
                                                if (v51 != 0)
                                                {
                                                    v42 = *(v42);
                                                    v10 = v42;
                                                    if (v42 == 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v41 = 0;
                                                }
                                            }
                                            if (v51 != 0)
                                            {
                                                v41 = 1;
                                            }
                                            else if (v51 == 0)
                                            {
                                                return v41;
                                            }
                                        }
                                        else
                                        {
                                            v41 = 0;
                                            break;
                                        }
                                    default:
                                        rsp = rsp - 8;
                                        v14 = &g_414e71;
                                        __assert_fail(); /* do not return */
                                    }
                                    v41 = 1;
                                    v41 = 0;
                                }
                                else
                                {
                                    rsp = rsp - 8;
                                    v14 = &g_414e8a;
                                    __assert_fail(); /* do not return */
                                }
                            }
                        }
                    }
                    else if (v22 == 124)
                    {
                        if (v24 == 0)
                        {
                            v25 = &v23[-1 * v3];
                            v26 = (v7 <= 1? v8 : (char [3])&((char [3])&v23[-1 * v3])[1]) + 15 & -8;
                            if (((v7 <= 1? v8 : (char [3])&((char [3])&v23[-1 * v3])[1]) + 15 & -8) - 8 > 7991)
                            {
                                break;
                            }
                            rsp = &(&v2)[-1 * (v26 + 23 & -0x10) + -8];
                            v15 = &g_414b19;
                            *((char *)(unsigned long long)mempcpy((&(&v2)[-1 * (v26 + 23 & -0x10) + 15] & -0x10) + 8, (unsigned int)v23 + 1, v25)) = 0;
                            v22 = v23[1];
                            v23 = &v23[1];
                            *((long long *)v10) = 0;
                            v10 = &(&v2)[-1 * (v26 + 23 & -0x10) + 15] & -0x10;
                        }
                    }
                    if ((v22 - 33 & 255) > 31 && v24 != 0 || (v22 - 33 & 255) > 31 && v22 != 124 || (v22 - 33 & 255) <= 31 && ((char)((char)*(&((char *)stack_base)[((v21 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v21 & 63 & 7)) & 1) == 0 && v22 != 41 || (v22 - 33 & 255) <= 31 && v22 != 41 && v23[1] != 40)
                    {
                        v22 = v23[1];
                        v23 = &v23[1];
                    }
                }
                if (v24 == 0 && v22 == 124 && (v22 - 33 & 255) > 31 || v24 == 0 && (v22 - 33 & 255) <= 31 && v22 == 41 && (((char)((char)*(&((char *)stack_base)[((v21 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v21 & 63 & 7)) & 1) == 0 || v23[1] != 40) || (v22 - 33 & 255) <= 31 && v22 == 0 && v22 == 41 && v24 != 0 && (((char)((char)*(&((char *)stack_base)[((v21 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v21 & 63 & 7)) & 1) == 0 || v23[1] != 40))
                {
                    v41 = -18446744069414584321;
                }
                else if (((v7 <= 1? v8 : (char [3])&((char [3])&v23[-1 * v3])[1]) + 15 & -8) - 8 <= 7991 && (v22 - 33 & 255) > 31 || (v22 - 33 & 255) > 31 && v24 != 0 || (v22 - 33 & 255) > 31 && v22 != 124 || (v22 - 33 & 255) <= 31 && ((char)((char)*(&((char *)stack_base)[((v21 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v21 & 63 & 7)) & 1) == 0 && v22 != 41 || (v22 - 33 & 255) <= 31 && v22 != 41 && v23[1] != 40)
                {
                    if (v22 == 0)
                    {
                        break;
                    }
                }
                else if (unknown)
                {
                    return v41;
                }
            }
            else
            {
                if (g_625918 == 0)
                {
                    v3 = &v4->field_1;
                    rsp = rsp - 8;
                    v1 = &g_414b4e;
                    g_625918 = 0 - (unsigned int)(char)(getenv("POSIXLY_CORRECT") < 1) | 1;
                }
                v27 = v23[1];
                if (v23[1] != 33 && (g_625918 >= 0 || v27 != 94))
                {
                    v29 = &v23[1];
                }
                if (v23[1] == 33 || g_625918 < 0 && v27 == 94)
                {
                    v29 = &v23[2];
                    v27 = v23[2];
                }
                if (v27 == 93)
                {
                    v27 = v29[1];
                    v29 = &v29[1];
                    v23 = &v29[1];
                }
                if (v27 != 93 || v27 != 93)
                {
                    while (v27 != 0)
                    {
                        v27 = *(v23);
                        v29 = v23;
                        v23 = &v29[1];
                        if (v27 == 93)
                        {
                            break;
                        }
                    }
                    if (v27 != 0)
                    {
                        v22 = v29[1];
                    }
                    else
                    {
                        v41 = -18446744069414584321;
                    }
                }
                v22 = v29[1];
            }
        }
        if (true)
        {
            v41 = -18446744069414584321;
        }
        else if (v22 != 91)
        {
            return v41;
        }
    }
    v41 = -18446744069414584321;
    return v41;
}

typedef struct struct_0 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned long long field_78;
    char padding_80[40];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned int field_78;
    char padding_7c[44];
    unsigned int field_a8;
} struct_1;

int sub_40a200()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    struct v3;  // rsi
    struct v4;  // r8
    char v5;  // al
    unsigned int v6;  // ecx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v2 = v1->field_a8;
    v4 = v3;
    v5 = v1->field_a8 == 9;
    v7 = v6 | rax;
    if (v3->field_a8 == 3 || v7 == 0 || v3->field_a8 == 9)
    {
        if (v3->field_70 <= v1->field_70 && (v3->field_a8 != 3 || v7 != 0) && (v7 != 0 || v3->field_a8 != 9))
        {
            if (v3->field_70 >= v1->field_70)
            {
                v8 = (unsigned int)v1->field_78 - v4->field_78;
            }
            else
            {
                return 1;
            }
        }
        if ((v7 == 0 || v3->field_70 <= v1->field_70) && (v7 == 0 || v3->field_70 >= v1->field_70) && (v7 == 0 || (unsigned int)v1->field_78 != v4->field_78) && (v3->field_a8 == 3 || v3->field_a8 == 9 || v3->field_70 <= v1->field_70) && (v3->field_a8 == 3 || v3->field_a8 == 9 || v3->field_70 >= v1->field_70) && (v3->field_a8 == 3 || v3->field_a8 == 9 || (unsigned int)v1->field_78 != v4->field_78))
        {
            return v8;
        }
    }
    if (v7 == 0)
    {
        v8 = 1;
    }
    if ((v3->field_a8 != 3 || v7 != 0) && (v3->field_a8 != 3 || v3->field_70 > v1->field_70) && (v7 != 0 || v3->field_a8 != 9) && (v7 != 0 || v3->field_70 > v1->field_70) && (v3->field_a8 != 9 || v3->field_70 > v1->field_70))
    {
        return -18446744069414584321;
    }
}

extern char g_625698;
extern char g_625768;
extern char g_625769;

int sub_405ea0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x70]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x60]
    char *v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long *v5;  // rdi
    char *v6;  // r13
    unsigned long long v7;  // ecx
    unsigned long v8;  // r9
    char v10;  // al
    void *v11;  // rsi
    unsigned long long v12;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // r10
    void *v14;  // rsi
    unsigned long v15;  // r12
    unsigned long long v16;  // r14
    unsigned long long *v20;  // r8
    unsigned long long v23;  // rbp
    unsigned long long v24;  // rbp
    unsigned long long v26;  // rax
    unsigned long long v27;  // r12
    unsigned long long v29;  // rax
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rcx
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rdx
    unsigned long long v35;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v36;  // rbx
    unsigned long long v37;  // r14
    char *v39;  // rax
    char *v40;  // rdx
    unsigned long long v41;  // rax
    unsigned int v42;  // eax
    char v43;  // al

    v6 = *(v5);
    v0 = v7;
    v2 = v8;
    v10 = sub_411c20() <= 2 & g_625698;
    v1 = rax <= 2 & g_625698;
    if ((rax <= 2 & g_625698) == 0)
    {
        v13 = 0;
        if ((int)v0 == 0)
        {
            v6 = v11;
            v12 = strlen(v11);
            if (v20 != 0)
            {
                v0 = v12;
                v12 = v0;
                if ((unsigned long long)__ctype_get_mb_cur_max() <= 1)
                {
                    v24 = &v6[v12];
                    if (&v6[v12] > v6)
                    {
                        v0 = v12;
                        v36 = 0;
                        v39 = v6;
                        do
                        {
                            v36 = v36 - -1 - (char)((*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (unsigned long long)*(v39) * 2)) & 0x4000) < 1);
                            v39 = &v39[1];
                        }
                        while (v24 != v39);
                    }
                    else
                    {
                        v36 = 0;
                    }
                }
                else
                {
                    v36 = (unsigned int)sub_40e9b0();
                }
                if (g_625768 == 0)
                {
                    *(v2) = 0;
                }
            }
            else
            {
                if (g_625768 == 0)
                {
                    *(v2) = 0;
                }
            }
        }
    }
    else if ((int)v0 == 0)
    {
        v36 = strlen(v11);
        v15 = v36 + 1;
        if (v36 > 8191)
        {
            v6 = (unsigned long long)(unsigned int)sub_412980();
        }
        memcpy(v6, v14, v15);
        v1 = 0;
    }
    else
    {
        v13 = 1;
    }
    if ((int)v0 != 0)
    {
        *((unsigned long *)&v0) = v13;
        v12 = (unsigned int)sub_411cd0();
        if (v12 > 8191)
        {
            v16 = v12 + 1;
            v1 = v13;
            v0 = v12;
            v6 = (unsigned long long)(unsigned int)sub_412980();
            sub_411cd0();
            v13 = v1;
            v12 = v0;
        }
        v1 = 1;
        if (*((char *)v11) == *(v6))
        {
            v1 = v12;
            v0 = v13;
            v1 = v1 != strlen(v6);
        }
        v36 = v12;
    }
    if ((rax <= 2 & g_625698) != 0 || (int)v0 != 0)
    {
        v23 = &v6[v36];
        if ((unsigned long long)__ctype_get_mb_cur_max() <= 1)
        {
            if (v16 > v6)
            {
                v40 = v6;
                do
                {
                    if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + ((unsigned long long)*(v40) << 1) + 1)) & 64) == 0)
                    {
                        *(v40) = 63;
                    }
                    v40 = &v40[1];
                }
                while (v40 != v16);
            }
            v12 = v36;
        }
        else if (v16 > v6)
        {
            v35 = v6;
            v37 = v6;
            v36 = 0;
            do
            {
                v26 = (char)*((char *)v37);
                if ((v26 - 32 & 255) <= 3 && *((char *)v37) <= 63 || *((char *)v37) <= 63 && v26 >= 37 || v26 <= 95 && *((char *)v37) > 63 && v26 >= 65 || (v26 - 97 & 255) <= 29 && *((char *)v37) > 63 && v26 >= 65)
                {
                    *((unsigned long long *)v35) = v26;
                    v37 += 1;
                    v36 = 1;
                    v35 += 1;
                }
                else
                {
                    v3 = 0;
                    while (true)
                    {
                        v27 = v35 + 1;
                        if (v0 == -1)
                        {
                            *((char *)v35) = 63;
                            v37 += 1;
                            v36 += 1;
                        }
                        else if (v0 != -2)
                        {
                            *((int *)&v0) = sub_416e80();
                            if (v0 != 0)
                            {
                                v29 = wcwidth();
                                v31 = v0;
                                v30 = v37 + v0;
                                if ((unsigned int)v29 >= 0)
                                {
                                    v33 = 0;
                                    do
                                    {
                                        *((char *)(v35 + v33)) = *((char *)(v37 + v33));
                                        v33 += 1;
                                    }
                                    while (v0 != v33);
                                    v37 += v31;
                                    v35 += v31;
                                }
                            }
                            else
                            {
                                v29 = wcwidth();
                                v30 = v37 + 1;
                                if ((unsigned int)v29 >= 0)
                                {
                                    v32 = (char)*((char *)v37);
                                    v37 = v30;
                                    *((unsigned long long *)v35) = v32;
                                }
                            }
                            if ((unsigned int)v29 < 0 && v0 == 0 || (unsigned int)v29 < 0 && v0 != 0)
                            {
                                *((char *)v35) = 63;
                                v36 += 1;
                                v35 = v27;
                                v37 = v30;
                            }
                            if (v0 == 0 && (unsigned int)v29 >= 0 || (unsigned int)v29 >= 0 && v0 != 0)
                            {
                                v36 += v29;
                            }
                            if (mbsinit((unsigned int)&v3) != 0)
                            {
                                break;
                            }
                        }
                        if (v0 == -2)
                        {
                            *((char *)v35) = 63;
                            v36 += 1;
                            v16 = v23;
                        }
                    }
                }
            }
            while (v37 > v37);
            v12 = v35 + -0x1 * v6;
        }
        else
        {
            v12 = 0;
            v36 = 0;
        }
        v41 = g_625768;
    }
    if (g_625768 != 0)
    {
        v42 = (unsigned int)g_625769 ^ 1;
        v43 = (char)((unsigned int)g_625769 ^ 1) | v1;
        v41 = (unsigned int)(rax ^ 1);
    }
    if (g_625768 != 0)
    {
        *((unsigned long long *)&v2) = v41;
    }
    if (v20 != 0)
    {
        *(v20) = v36;
    }
    *(v5) = v6;
    return v12;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
    char padding_11[7];
    unsigned long long field_18;
} struct_0;

extern struct g_625740;

int sub_404d90()
{
    unsigned long long v2;  // rax
    unsigned long v3;  // rsi
    unsigned long long v4;  // rax
    unsigned long v5;  // rdi
    struct v6;  // rax
    char v7;  // dl

    v2 = 0;
    if (v3 != 0)
    {
        v2 = sub_412bb0();
    }
    g_625740->field_8 = v2;
    v4 = 0;
    if (v5 != 0)
    {
        v4 = sub_412bb0();
    }
    g_625740->field_0 = v4;
    v6 = g_625740;
    g_625740->field_10 = v7;
    g_625740->field_18 = g_625740;
    g_625740 = (unsigned long long)(unsigned int)sub_412980();
    return v6;
}

int sub_40d220()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_40cfa0();
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

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[24];
    struct struct_1 *field_48;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_3 *field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_2;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
} struct_4;

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_3;

int sub_40cfa0()
{
    void tmp_10;  // tmp #10
    void tmp_19;  // tmp #19
    unsigned long long v0[2];  // [bp-0x20]
    unsigned long v2;  // rsi
    unsigned long long v3;  // rdx
    unsigned long long *v4;  // r12
    struct v5;  // rdi
    struct v6;  // rbx
    unsigned long long v7;  // rdx
    unsigned long long v9;  // rax
    uint128_t v10;  // xmm1
    unsigned int v11;  // ymm1
    struct v12;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // xmm1lq
    uint128_t v14;  // xmm0
    unsigned int v15;  // ymm0
    unsigned long long v16;  // xmm0lq
    unsigned long long v17;  // rax
    uint128_t v18;  // xmm0
    unsigned int v19;  // ymm0
    unsigned long long v20;  // xmm0lq
    struct v22;  // rdx
    uint128_t v23;  // xmm2
    unsigned int v24;  // ymm2
    uint128_t v25;  // xmm0
    uint128_t v26;  // xmm0
    unsigned int v27;  // ymm0
    /*INVALID_EQUAL_UNDEFINED*/
undefined v28;  // xmm1
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
        v7 = sub_40c2e0();
        if (v7 != 0)
        {
            if (v4 != 0)
            {
                *(v4) = v7;
            }
            return 0;
        }
        if (!(INVALID_IR))
        {
            v13 = 0;
            v12 = v6->field_28;
            v13 = v5->field_18;
            v9 = v6->field_10;
            v14 = 0;
            v15 = v9;
            xmm0 = INVALID_IR;
;        }
        else
        {
            v10 = 0;
            tmp_10 = v6->field_18 % 2 | (unsigned int)v6->field_18 & 1;
            v9 = v6->field_10;
            v11 = tmp_10;
            v12 = v6->field_28;
            v13 = (unsigned long long)(unsigned int)xmm1 * 2;
            tmp_19 = v9;
            v17 = (unsigned int)v9 & 1;
            v18 = 0;
            v19 = tmp_19 >> 1 | v17;
            xmm0 = INVALID_IR;
;        }
        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
        {
            sub_40c400();
            v22 = v6->field_28;
            v23 = 0;
            v24 = v6->field_28->field_8;
            if (!(INVALID_IR))
            {
                v25 = 0;
                v25 = (unsigned int)v5->field_10;
            }
            else
            {
                v26 = 0;
                v27 = v5->field_10 >> 1 | (unsigned int)v5->field_10 & 1;
                v25 = xmm0 * 2;
            }
            if (!(INVALID_IR))
            {
                v28 = 0;
                v28 = v5->field_18;
            }
            else
            {
                v29 = 0;
                v30 = v5->field_18 >> 1 | (unsigned int)v5->field_18 & 1;
                v28 = (unsigned long long)(unsigned int)xmm1 * 2;
            }
            if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
            {
                xmm0 = (xmm0 * INVALID_IR)
;                if (v22->field_10 == 0)
                {
                    v31 *= xmm2;
                }
                if (((char)(INVALID_IR) & 1) != 0 && ((char)(INVALID_IR) & 1) == 0)
                {
                    v32 = sub_40cda0();
                    if (v32 != 0)
                    {
                        v33 = sub_40c2e0();
                    }
                }
            }
        }
    }
    if (unknown)
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
    if (v2 == 0 || ((char)(INVALID_IR) & 1) == 0 && v7 == 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && v32 != 0 && ((char)(INVALID_IR) & 1) != 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && v33 != 0)
    {
        abort(); /* do not return */
    }
    if (unknown)
    {
        return -18446744069414584321;
    }
    if (unknown)
    {
        v36 = v34[1];
        v35[0] = v2;
        v35[1] = v36;
        v34[1] = v35;
        v6->field_20 = v6->field_20 + 1;
        return 1;
    }
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
} struct_0;

extern char g_413ac4;
extern char g_413afe;
extern char g_413b98;
extern char g_413bf3;
extern char g_413c66;
extern char g_413c93;
extern char g_413cbd;
extern char g_413cdf;
extern char g_413d35;
extern char g_413d75;
extern char g_413dc1;
extern char g_413dd6;
extern char g_413dfc;
extern char g_413e41;
extern char g_413e5a;
extern char g_413e73;
extern unsigned int g_625918;

int sub_4138f0()
{
    unsigned long long v0;  // [bp-0x1b0]
    unsigned long v1;  // [bp-0x98]
    char v2;  // [bp-0x90]
    unsigned long v3;  // [bp-0x80]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long v6;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x58]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x40]
    unsigned long v10;  // [bp-0x28]
    unsigned long v11;  // [bp-0x20]
    unsigned long v12;  // [bp-0x18]
    unsigned long v13;  // [bp-0x10]
    unsigned long v14;  // [bp-0x8]
    unsigned int v16;  // edi
    unsigned long long v17;  // rdx
    unsigned long v18;  // rcx
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v23;  // r14
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned int v26[3];  // rdx
    unsigned long long v28;  // rbx
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    unsigned long long v32;  // r15
    unsigned long long v34;  // rax
    unsigned long long *v35;  // r13
    unsigned long long v36;  // rax
    unsigned long long v37;  // rax
    unsigned int v38;  // r9d
    char v39;  // r8b
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v43;  // rax
    unsigned long long *v44;  // r13
    unsigned long long v45;  // r15
    unsigned long long *v46;  // r13
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax

    v7 = v16;
    v5 = v17;
    v6 = v18;
    v9 = 0;
    rsp = &v2;
    v8 = wcslen(v19);
    v21 = v4->field_4;
    if (v4->field_4 != 0)
    {
        v23 = &v4->field_4;
        v4 = v19;
        v22 = 0;
        while (true)
        {
            if ((unsigned int)v21 != 91)
            {
                while (true)
                {
                    v20 = v21 - 33;
                    if ((unsigned int)(v21 - 33) <= 31)
                    {
                        v0 = 3221227009;
                        rsp = &v2;
                        if (v23[1] == 40 && ((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) != 0)
                        {
                            v22 += 1;
                            v23 = &v23[1];
                            v21 = 40;
                        }
                        if ((unsigned int)v21 == 41 && (((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 || v23[1] != 40))
                        {
                            if (v22 != 0)
                            {
                                v21 = v23[1];
                                v23 = &v23[1];
                                if ((unsigned int)v21 != 0)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v28 = v4;
                                if (v7 - 63 > 1)
                                {
                                    v8 = (v23 - &v4->field_4 >> 2) + 1;
                                }
                                v29 = v8;
                                v30 = v8 * 4 + 15 & -8;
                                if (((v8 << 2) + 15 & -8) - 8 > 7991 || v29 > 4611686018427387903)
                                {
                                    break;
                                }
                                rsp = &(&v2)[-1 * (v30 + 23 & -0x10) + -8];
                                v14 = &g_413b98;
                                *((int *)(unsigned long long)wmempcpy((&(&v2)[-1 * (v30 + 23 & -0x10) + 15] & -0x10) + 8)) = 0;
                                v9 = &(&v2)[-1 * (v30 + 23 & -0x10) + 15] & -0x10;
                                v44 = v9;
                                *(v9) = 0;
                                if (v9 == 0)
                                {
                                    rsp = rsp - 8;
                                    v13 = &g_413e73;
                                    __assert_fail(); /* do not return */
                                }
                                else if (v23[-1 + 1] == 41)
                                {
                                    v32 = v7 - 33;
                                    switch (v7)
                                    {
                                    case 33:
                                        if (v5 <= v6)
                                        {
                                            v8 = v9;
                                            *((unsigned int *[3])&v7[0]) = v23;
                                            while (true)
                                            {
                                                v35 = v8;
                                                while (true)
                                                {
                                                    rsp = rsp - 8;
                                                    v13 = &g_413d35;
                                                    v36 = sub_413e80();
                                                    if (v36 != 0)
                                                    {
                                                        v35 = *(v35);
                                                        rsp = rsp - 8;
                                                        v11 = &g_413d75;
                                                        v37 = sub_413e80();
                                                        if (v37 == 0)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                if (v36 == 0 || v35 == 0 && v37 != 0)
                                                {
                                                    v48 = 1;
                                                }
                                                else if (v36 == 0 || v35 == 0 && v37 != 0)
                                                {
                                                    v35 = v8;
                                                }
                                                else if (v35 == 0 && v36 != 0)
                                                {
                                                    v48 = 0;
                                                }
                                            }
                                            if (true)
                                            {
                                                v48 = 1;
                                            }
                                            else
                                            {
                                                v48 = 0;
                                            }
                                        }
                                    case 42:
                                        rsp = rsp - 8;
                                        v13 = &g_413bf3;
                                    case 43:
                                        *((unsigned int *[3])&v4[0]) = v23;
                                        v7 = v38 & 1;
                                        v3 = v28 - 4;
                                        while (true)
                                        {
                                            if (v5 <= v6)
                                            {
                                                v45 = v5;
                                                v8 = v39;
                                                do
                                                {
                                                    rsp = rsp - 8;
                                                    v12 = &g_413cbd;
                                                    v40 = sub_413e80();
                                                    if (v40 == 0)
                                                    {
                                                        if (v5 != v45)
                                                        {
                                                            rsp = rsp - 8;
                                                            v11 = &g_413c66;
                                                            if (sub_413e80() == 0)
                                                            {
                                                                break;
                                                            }
                                                            rsp = rsp - 8;
                                                            v10 = &g_413c93;
                                                            v43 = sub_413e80();
                                                            if (v43 == 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            rsp = rsp - 8;
                                                            v11 = &g_413cdf;
                                                            v41 = sub_413e80();
                                                            if (v41 == 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        v44 = v9;
                                                    }
                                                    v45 += 4;
                                                }
                                                while (v6 >= v45);
                                                if (v5 == v45 || v40 == 0)
                                                {
                                                    v48 = 0;
                                                }
                                                else if (v43 != 0 || v40 != 0 || v5 == v45 && v41 != 0)
                                                {
                                                    v46 = *(v44);
                                                    v9 = v46;
                                                }
                                            }
                                            v46 = *(v44);
                                            v9 = v46;
                                        }
                                        if (v5 <= v6)
                                        {
                                            v48 = 0;
                                        }
                                        else if (v46 == 0)
                                        {
                                            v48 = 1;
                                        }
                                    case 63:
                                        rsp = rsp - 8;
                                        v13 = &g_413dfc;
                                        v34 = sub_413e80();
                                        if (v34 == 0)
                                        {
                                            v48 = 0;
                                            break;
                                        }
                                    case 64:
                                        while (true)
                                        {
                                            rsp = rsp - 8;
                                            v12 = &g_413dc1;
                                            wcscat((unsigned int)v44 + 8, (unsigned int)v23);
                                            rsp = rsp - 8;
                                            v11 = &g_413dd6;
                                            v47 = sub_413e80();
                                            if (v47 != 0)
                                            {
                                                v44 = *(v44);
                                                v9 = v44;
                                                if (v44 == 0)
                                                {
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                v48 = 0;
                                            }
                                        }
                                        if (v47 != 0)
                                        {
                                            v48 = 1;
                                        }
                                        else if (v47 == 0)
                                        {
                                            return v48;
                                        }
                                    default:
                                        rsp = rsp - 8;
                                        v13 = &g_413e41;
                                        __assert_fail(); /* do not return */
                                    }
                                    v48 = 1;
                                    v48 = 0;
                                }
                                else
                                {
                                    rsp = rsp - 8;
                                    v13 = &g_413e5a;
                                    __assert_fail(); /* do not return */
                                }
                            }
                        }
                    }
                    else if ((unsigned int)v21 == 124)
                    {
                        if (v22 == 0)
                        {
                            v24 = v8;
                            if (v7 - 63 > 1)
                            {
                                v24 = (v23 - &v4->field_4 >> 2) + 1;
                            }
                            v25 = v24 * 4 + 15 & -8;
                            if (((v24 << 2) + 15 & -8) - 8 > 7991 || v24 > 4611686018427387903)
                            {
                                break;
                            }
                            rsp = &(&v2)[-1 * (v25 + 23 & -0x10) + -8];
                            v14 = &g_413ac4;
                            *((int *)(unsigned long long)wmempcpy((&(&v2)[-1 * (v25 + 23 & -0x10) + 15] & -0x10) + 8)) = 0;
                            v21 = v23[1];
                            v23 = &v23[1];
                            *((long long *)v9) = 0;
                            v9 = &(&v2)[-1 * (v25 + 23 & -0x10) + 15] & -0x10;
                        }
                    }
                    if ((unsigned int)(v21 - 33) > 31 && (unsigned int)v21 != 124 || (unsigned int)(v21 - 33) > 31 && v22 != 0 || (unsigned int)(v21 - 33) <= 31 && ((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 && (unsigned int)v21 != 41 || (unsigned int)(v21 - 33) <= 31 && (unsigned int)v21 != 41 && v23[1] != 40)
                    {
                        v21 = v23[1];
                        v23 = &v23[1];
                    }
                }
                if ((unsigned int)v21 == 124 && v22 == 0 && (unsigned int)(v21 - 33) > 31 || (unsigned int)(v21 - 33) <= 31 && ((v8 << 2) + 15 & -8) - 8 <= 7991 && v22 == 0 && (unsigned int)v21 == 41 && (((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 || v23[1] != 40) || (unsigned int)(v21 - 33) <= 31 && v22 == 0 && (unsigned int)v21 == 41 && (((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 || v23[1] != 40) || ((v24 << 2) + 15 & -8) - 8 <= 7991 && (unsigned int)v21 == 124 && v22 == 0 && (unsigned int)(v21 - 33) > 31 || (unsigned int)(v21 - 33) <= 31 && (unsigned int)v21 == 41 && (unsigned int)v21 == 0 && v22 != 0 && (((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 || v23[1] != 40))
                {
                    v48 = -18446744069414584321;
                }
                else if ((unsigned int)(v21 - 33) > 31 && (unsigned int)v21 != 124 || (unsigned int)(v21 - 33) > 31 && v22 != 0 || (unsigned int)(v21 - 33) <= 31 && ((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 && (unsigned int)v21 != 41 || ((v24 << 2) + 15 & -8) - 8 <= 7991 && v24 <= 4611686018427387903 && (unsigned int)(v21 - 33) > 31 || (unsigned int)(v21 - 33) <= 31 && (unsigned int)v21 != 41 && v23[1] != 40)
                {
                    if ((unsigned int)v21 == 0)
                    {
                        break;
                    }
                }
                else if (unknown)
                {
                    return v48;
                }
            }
            else
            {
                if (g_625918 == 0)
                {
                    v3 = &v4->field_4;
                    rsp = rsp - 8;
                    v1 = &g_413afe;
                    g_625918 = 0 - (unsigned int)(char)(getenv("POSIXLY_CORRECT") < 1) | 1;
                }
                v21 = v23[1];
                if (v23[1] != 33 && (g_625918 >= 0 || v21 != 94))
                {
                    v26 = &v23[1];
                }
                if (v23[1] == 33 || g_625918 < 0 && v21 == 94)
                {
                    v26 = &v23[1];
                    v21 = v23[1];
                }
                if (v21 == 93)
                {
                    v21 = v26[1];
                    v26 = &v26[1];
                }
                while (true)
                {
                    v23 = &v26[1];
                    if (v21 != 93)
                    {
                        if (v21 == 0)
                        {
                            break;
                        }
                        v21 = *(v23);
                        v26 = v23;
                    }
                    else
                    {
                        v21 = v26[1];
                    }
                }
                if (v21 != 93)
                {
                    v48 = -18446744069414584321;
                }
            }
        }
        if (true)
        {
            v48 = -18446744069414584321;
        }
        else if ((unsigned int)v21 != 91)
        {
            return v48;
        }
    }
    v48 = -18446744069414584321;
    return v48;
}

extern unsigned int g_41d787;
extern unsigned int g_6245c0;
extern char g_625790;
extern unsigned long long g_625798;

int sub_40b710()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4178e0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_625790 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x41d787, 0x5);
            if (g_625798 != 0)
            {
                sub_4120e0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_625790 != 0)
    {
        v3 = sub_4178e0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_625790 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6245c0);
        error(0x0, *(v2), "%s");
    }
}

int sub_40b020()
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

// int sub_405130()

typedef struct struct_0 {
    char padding_0[4321760];
    unsigned long long field_41f1e0;
} struct_0;

extern int512_t g_41f1e0;
extern unsigned int g_6245c0;

int sub_413220()
{
    char v0;  // [bp-0x2a]
    char v1;  // [bp-0x29]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // r13
    unsigned int v7;  // edi
    struct v8;  // rdi
    unsigned long v9;  // r12
    unsigned long v10;  // rbx
    unsigned long long v11;  // rsi
    unsigned long v13;  // rsi
    char v14;  // dl

    v4 = v6;
    v8 = (unsigned long long)v7 - 1;
    v3 = v9;
    v2 = v10;
    if ((unsigned int)v8 > 3)
    {
        abort(); /* do not return */
    }
    v13 = *((long long *)(0x8 * v8 + (char *)&g_41f1e0));
    if ((unsigned int)v11 < 0)
    {
        v0 = v14;
        v1 = 0;
    }
    error(g_6245c0, 0x0, (unsigned long long)dcgettext(0x0, v13, 0x5));
}

// int sub_405110()

typedef struct struct_0 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned int field_88;
    char padding_8c[28];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned long long field_88;
    char padding_90[24];
    unsigned int field_a8;
} struct_1;

int sub_408300()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi
    unsigned long long v7;  // rax

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0)
    {
        if (v1->field_80 <= v6->field_80 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0))
        {
            if (v1->field_80 >= v6->field_80)
            {
                v7 = (unsigned int)v6->field_88 - v1->field_88;
            }
            else
            {
                return 1;
            }
        }
        if ((v1->field_80 <= v6->field_80 || v5 == 0) && (v5 == 0 || (unsigned int)v6->field_88 != v1->field_88) && (v5 == 0 || v1->field_80 >= v6->field_80) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_80 <= v6->field_80) && (v6->field_a8 == 3 || v6->field_a8 == 9 || (unsigned int)v6->field_88 != v1->field_88) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_80 >= v6->field_80))
        {
            return v7;
        }
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if ((v6->field_a8 != 3 || v1->field_80 > v6->field_80) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v1->field_80 > v6->field_80) && (v6->field_a8 != 9 || v5 != 0) && (v1->field_80 > v6->field_80 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

extern unsigned int g_41ea60;
extern unsigned int g_41edef;
extern unsigned int g_6245c0;
extern unsigned long long stderr;

int sub_417010()
{
    __fprintf_chk(stderr, 0x1, 0x41ea60, dcgettext(0x0, 0x41edef, 0x5));
    exit(g_6245c0); /* do not return */
}

extern int512_t g_6258e0;

int sub_411c40()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6258e0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6258e0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_40b870()
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

int sub_411d6b()
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

    v17 = (v14 == 0? v15 : rbx);
    v18 = __errno_location();
    v3 = *(v18);
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = &v17[1];
    v6 = &v17[1];
    v7 = (unsigned int)sub_410810();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_412980();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_410810();
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

extern unsigned long long g_623e30;

int sub_418798()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_623e30;
    while (true)
    {
        v2 = *(v1);
        if (*(v1) == -1)
        {
            break;
        }
        rax();
        v1 = &v1[-1];
    }
    return v4;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c650()
{
    unsigned long long v1[4];  // rdi
    unsigned long long v2[2];  // rcx
    struct v3;  // rax
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
            if (*(v2) == 0 || v2[1] == 0)
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

int sub_412980()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_412bd0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_40a030()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = strrchr();
    strrchr();
    v2 = sub_4050d0();
    if ((unsigned int)v2 != 0)
    {
        return v2;
    }
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[144];
    char field_b8;
} struct_0;

extern char g_6256bc;
extern unsigned int g_6256d4;
extern char g_6256ec;
extern char g_625725;

int sub_406af0()
{
    struct v2;  // rdi
    unsigned long long v3;  // rcx
    unsigned long long v5;  // rcx
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rax

    sub_405e30();
    if (g_6256bc != 0)
    {
        if (v2->field_b8 != 0 && v2->field_20 != 0)
        {
            v3 = (unsigned int)sub_40e520();
        }
        __printf_chk(0x1, "%*s ");
    }
    if (g_6256ec != 0)
    {
        if (v2->field_b8 != 0)
        {
            v5 = (unsigned int)sub_40d5d0();
        }
        __printf_chk(0x1, "%*s ");
    }
    if (g_625725 != 0)
    {
        __printf_chk(0x1, "%*s ");
    }
    v8 = (unsigned int)sub_406690();
    if (g_6256d4 == 0)
    {
        return stack_base + 0;
    }
    v9 = sub_4058a0();
    return v9 + v9;
}

typedef struct struct_0 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned int field_68;
    char padding_6c[60];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned long long field_68;
    char padding_70[56];
    unsigned int field_a8;
} struct_1;

int sub_4058f0()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi
    unsigned long long v7;  // rax

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0)
    {
        if (v1->field_60 <= v6->field_60 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0))
        {
            if (v1->field_60 >= v6->field_60)
            {
                v7 = (unsigned int)v6->field_68 - v1->field_68;
            }
            else
            {
                return 1;
            }
        }
        if ((v1->field_60 <= v6->field_60 || v5 == 0) && (v5 == 0 || v1->field_60 >= v6->field_60) && (v5 == 0 || (unsigned int)v6->field_68 != v1->field_68) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_60 <= v6->field_60) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_60 >= v6->field_60) && (v6->field_a8 == 3 || v6->field_a8 == 9 || (unsigned int)v6->field_68 != v1->field_68))
        {
            return v7;
        }
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if ((v6->field_a8 != 3 || v1->field_60 > v6->field_60) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v1->field_60 > v6->field_60) && (v6->field_a8 != 9 || v5 != 0) && (v1->field_60 > v6->field_60 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

int sub_4059d0()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // edx
    unsigned long long v5;  // rdx
    struct v6;  // rsi
    unsigned long long v7;  // rdx

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        v7 = -18446744069414584321;
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if (v6->field_a8 == 3 && v5 == 0 || v6->field_a8 == 9 && v5 == 0 || v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        return v7;
    }
}

extern unsigned long long g_624648;

int sub_40474b()
{
    unsigned long long v1;  // rax

    v1 = &g_624648;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
} struct_0;

extern char g_41b08a;
extern struct g_6257a8;

int sub_40e2f0()
{
    struct v1;  // rbx
    unsigned int v2;  // edi
    unsigned long long *v4;  // rax
    unsigned long long v5;  // rdi
    char *v6;  // r12
    unsigned int *v8;  // rax
    unsigned long long v9;  // rax

    v1 = g_6257a8;
    if (g_6257a8 != 0 && v2 != g_6257a8->field_0)
    {
        do
        {
            v1 = v1->field_8;
        }
        while (v1->field_0 != v2 && v1 != 0);
        if (true)
        {
            v6 = &g_41b08a;
            v4 = getgrgid();
        }
        else if (v1 != 0)
        {
            v9 = 0;
        }
    }
    if (g_6257a8 == 0 || v2 != g_6257a8->field_0 && v4 != 0)
    {
        v6 = &g_41b08a;
        v4 = getgrgid();
        if (v4 != 0)
        {
            v6 = *(v4);
            v5 = strlen(*(v4)) + 24 & -8;
        }
        v1->field_0 = v2;
        v1 = (unsigned long long)(unsigned int)sub_412980();
        strcpy(&v1->field_10, v6);
        v8 = g_6257a8;
        g_6257a8 = v1;
        v1->field_8 = v8;
    }
    v9 = 0;
    if (v1->field_10 != 0)
    {
        v9 = &v1->field_10;
    }
    return v9;
}

extern unsigned int g_6256d4;

int sub_4057b0()
{
    char v1;  // dil
    unsigned int v2;  // esi
    unsigned int v3;  // edx
    unsigned long long v4;  // cl
    unsigned int v5;  // ecx
    unsigned int v6;  // esi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // rax
    unsigned int v8;  // esi
    char v9;  // al

    if (!(v1 != 0))
    {
        v7 = 0;
        if (v3 != 5)
        {
            v4 = v5 | 0;
            if (v4 == 0 && g_6256d4 != 1)
            {
                if (v3 != 6)
                {
                    v7 = 124;
                    if (v3 != 1)
                    {
                        v9 = v3 == 7;
                    }
                }
                else
                {
                    return 64;
                }
                if (v3 == 1)
                {
                    return 124;
                }
            }
        }
    }
    else if (((unsigned short)v2 & 0xf000) != 0x8000)
    {
        v4 = (char)((v2 & 0xf000) == 0x4000);
        if (v4 == 0 && g_6256d4 != 1)
        {
            v8 = v2 & 0xf000;
            if (v8 != 0xa000)
            {
                v7 = 124;
                if (v8 != 0x1000)
                {
                    v9 = v8 == 0xc000;
                }
            }
            else
            {
                return 64;
            }
            if (v8 == 0x1000)
            {
                return 124;
            }
        }
    }
    else
    {
        v7 = 0;
        if (g_6256d4 == 3)
        {
            v6 = v2 & 73;
            return !(0 - (unsigned int)(char)(rsi < 1)) & 42;
        }
    }
    if (v1 == 0 && v3 != 5 || v1 != 0 && ((unsigned short)v2 & 0xf000) != 0x8000)
    {
        v7 = 47;
    }
    if (v4 == 0 && (v1 == 0 || ((unsigned short)v2 & 0xf000) != 0x8000) && (v3 != 5 || v1 != 0))
    {
        v7 = 0;
    }
    if (v1 == 0 && v4 == 0 && v3 != 5 && g_6256d4 != 1 && v3 != 6 && v3 != 1 || v4 == 0 && g_6256d4 != 1 && v8 != 0x1000 && v1 != 0 && v8 != 0xa000 && ((unsigned short)v2 & 0xf000) != 0x8000)
    {
        v7 = (unsigned int)(0 - v9 & 61);
    }
    if (v3 == 5 && v1 == 0 || ((unsigned short)v2 & 0xf000) == 0x8000 && v1 != 0 && g_6256d4 != 3 || v1 == 0 && v4 == 0 && v3 != 5 && g_6256d4 != 1 && v3 != 6 && v3 != 1 || g_6256d4 == 1 && v4 == 0 && (v1 == 0 || ((unsigned short)v2 & 0xf000) != 0x8000) && (v3 != 5 || v1 != 0) || v4 == 0 && g_6256d4 != 1 && v8 != 0x1000 && v1 != 0 && v8 != 0xa000 && ((unsigned short)v2 & 0xf000) != 0x8000 || v4 != 0 && (v1 == 0 && v3 != 5 || v1 != 0 && ((unsigned short)v2 & 0xf000) != 0x8000))
    {
        return v7;
    }
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

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    unsigned int field_18;
} struct_3;

extern unsigned int g_41fba0;
extern unsigned int g_41fbc0;
extern unsigned int g_41fbf0;
extern unsigned int g_41fc10;
extern unsigned int g_41fc40;
extern unsigned int g_41fc91;
extern unsigned long long stderr;

int sub_416190()
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
    struct v9;  // [bp+0x8]
    unsigned int v10;  // [bp+0x10]
    char v11;  // [bp+0x18]
    char *v12;  // r14
    char *v13;  // rdx
    unsigned long v14;  // r8
    char *v15;  // rbp
    unsigned long long v16;  // rax
    unsigned long long v17;  // r13
    unsigned long long v18;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // r12
    char *v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // r8
    char *v25;  // rdi
    unsigned long long v26;  // r15
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rax
    unsigned int v29;  // r9d
    unsigned long long v30;  // r9
    unsigned long long v31;  // rdx
    unsigned int v32;  // ecx
    unsigned long long *v34;  // rsi
    char *v35;  // rbp
    unsigned long long v36;  // rdx
    unsigned long v39;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v40;  // rbx
    unsigned long long v41;  // r12
    unsigned long long v43;  // rbp
    unsigned long long v46;  // rax
    unsigned int *v47;  // rdx
    unsigned long long v48;  // r14

    v12 = v9->field_20;
    v3 = v13;
    v2 = v14;
    v15 = v9->field_20;
    *((struct struct_1 *)&v5) = *(v9->field_20);
    if (*(v9->field_20) != 61 && *(v9->field_20) != 0)
    {
        do
        {
            v15 = &v15[1];
            v16 = *(v15);
        }
        while ((char)v16 != 0 && v16 != 61);
        v17 = v15 - v12;
    }
    if (*(v9->field_20) == 61 || *(v9->field_20) == 0)
    {
        v17 = 0;
    }
    v19 = v18;
    v20 = 0;
    v0 = *((long long *)v18);
    v21 = *((long long *)v18);
    if (*((long long *)v18) != 0)
    {
        while (true)
        {
            v22 = strncmp(v21, v9->field_20, v17);
            if (v22 == 0)
            {
                v23 = strlen(v21);
            }
            if (v22 != 0 || v23 != v17)
            {
                v19 += 32;
                v21 = *(v19);
                v24 = v20 + 1;
                if (*(v19) != 0)
                {
                    v20 = v24;
                }
                else
                {
                    v8 = v20;
                    v19 = 0;
                    v6 = -1;
                    v25 = v0;
                    v26 = 0;
                    v4 = 0;
                    v7 = 0;
                    v1 = 0;
                    v0 = v15;
                    v27 = v18;
                    do
                    {
                        v28 = strncmp(v25, v9->field_20, v17);
                        if (v28 == 0)
                        {
                            if (v19 == 0)
                            {
                                v6 = v26;
                                v19 = v27;
                            }
                            else if (*((int *)(v19 + 24)) != *((int *)(v27 + 24)) || *((int *)(v19 + 8)) != *((int *)(v27 + 8)) || v29 != 0 || *((long long *)(v19 + 16)) != *((long long *)(v27 + 16)))
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
                                        *((char *)(v1 + v26)) = 1;
                                    }
                                }
                            }
                        }
                        v27 += 32;
                        v25 = *((long long *)v27);
                        v26 += 1;
                    }
                    while (*((long long *)v27) != 0);
                    v15 = v0;
                    if (v1 == 0)
                    {
                        v30 = v4;
                        if (v4 == 0)
                        {
                            if (v19 == 0)
                            {
                                break;
                            }
                            v20 = v6;
                        }
                    }
                    if (v4 != 0 || v1 != 0)
                    {
                        if (v10 != 0)
                        {
                            if (v4 != 0)
                            {
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41fba0, 0x5), *(v34));
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41fbc0, 0x5), *(v34));
                                v39 = stderr;
                                v40 = v18;
                                v43 = v1;
                                v41 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v43) != 0)
                                    {
                                        __fprintf_chk(v39, 0x1, 0x41fc91, *((long long *)&v11));
                                        v39 = stderr;
                                    }
                                    v43 += 1;
                                    v40 = (char *)&v40[1].field_0 + 4;
                                }
                                while (v41 != v43);
                                fputc(0xa, v39);
                                funlockfile(stderr);
                                v12 = v9->field_20;
                            }
                        }
                        if (v7 != 0)
                        {
                            free(v1);
                        }
                        v48 = &v12[strlen(v12)];
                        v9->field_20 = v48;
                        v9->field_0 = v9->field_0 + 1;
                        v9->field_8 = 0;
                        v46 = 63;
                    }
                }
            }
            if ((*(v19) == 0 || v22 == 0) && (*(v19) == 0 || v23 == v17) && (v22 == 0 || v4 == 0) && (v22 == 0 || v1 == 0) && (v23 == v17 || v4 == 0) && (v23 == v17 || v1 == 0))
            {
                v31 = v9->field_0;
                v9->field_20 = 0;
                v9->field_0 = (unsigned int)v31 + 1;
                v32 = *((int *)(v19 + 8));
                if (*(v15) == 0)
                {
                    if (v32 == 1)
                    {
                        if ((unsigned int)((unsigned long long)v9->field_0 + 1) < v25)
                        {
                            v9->field_0 = v9->field_0 + 2;
                            v9->field_10 = v34[1 + v31];
                        }
                        else
                        {
                            if (v10 != 0)
                            {
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41fc40, 0x5), *(v34));
                            }
                            v9->field_8 = *((int *)(v19 + 24));
                            v46 = (unsigned long long)(char)(*(v3) != 58) * 5 + 58;
                        }
                    }
                }
                else
                {
                    if (v32 != 0)
                    {
                        v35 = &v15[1];
                        v9->field_10 = v35;
                    }
                    else
                    {
                        if (v10 != 0)
                        {
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41fc10, 0x5), *(v34));
                        }
                        v9->field_8 = *((int *)(v19 + 24));
                        v46 = 63;
                    }
                }
                if (*(v15) == 0 && (unsigned int)((unsigned long long)v9->field_0 + 1) < v25 || *(v15) == 0 && v32 != 1 || *(v15) != 0 && v32 != 0)
                {
                    if (v2 != 0)
                    {
                        *((unsigned long *)&v2) = v20;
                    }
                    v47 = *((long long *)(v19 + 16));
                    v46 = (unsigned int)*((int *)(v19 + 24));
                    if (*((long long *)(v19 + 16)) == 0)
                    {
                        break;
                    }
                    *(v47) = v46;
                    v46 = 0;
                }
            }
        }
        if (unknown)
        {
            return v46;
        }
    }
    if (v29 != 0)
    {
        if (*((char *)(v34[(long long)(int)v9->field_0] + 1)) != 45)
        {
            v36 = strchr(v3, v5);
            v46 = -18446744069414584321;
        }
        if ((*((long long *)v18) != 0 || *((char *)(v34[(long long)(int)v9->field_0] + 1)) != 45) && (*((long long *)v18) != 0 || v36 != 0))
        {
            return v46;
        }
    }
    if (*((long long *)v18) == 0 && v29 == 0 || *((char *)(v34[(long long)(int)v9->field_0] + 1)) == 45 && v29 != 0 || v36 == 0 && v29 != 0)
    {
        if (v10 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41fbf0, 0x5), *(v34));
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_40b8d0()
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

int sub_412b50()
{
    unsigned int v1;  // rdi
    unsigned int v2;  // rsi
    unsigned long long v3;  // rax

    if (!(INVALID_IR) &&  amd64g_calculate_condition(0x0, 0x30, rdi, rsi, cc_ndep) == 0)
    {
        v3 = calloc(v1, v2);
        if (v3 != 0)
        {
            return v3;
        }
    }
    if (INVALID_IR || v3 == 0 ||  amd64g_calculate_condition(0x0, 0x30, rdi, rsi, cc_ndep) != 0)
    {
        sub_412bd0(); /* do not return */
    }
}

extern char g_41b070;
extern void g_41b084;
extern unsigned long long g_6255b8;
extern char g_6256d8;
extern char g_625768;
extern char g_625769;
extern unsigned long long stdout[7];

int sub_4062d0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x2060]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x2058]
    unsigned long v2;  // [bp-0x2050]
    char v3;  // [bp-0x2041]
    unsigned long v4;  // [bp-0x2040]
    char v5;  // [bp-0x2038]
    unsigned long v6;  // [bp+0x8]
    unsigned long long v7;  // r9
    unsigned long long v8[5];  // rbx
    unsigned long v10;  // r8
    char *v11;  // rax
    unsigned long v12;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // r12
    unsigned long long v19;  // r9
    unsigned long v20;  // r10
    unsigned long long v21;  // r9
    unsigned long v22;  // r10
    char *v23;  // rax
    void *v24;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // r10
    unsigned long long *v28;  // rdx
    unsigned long long v31;  // rax
    unsigned long long *v32;  // rcx
    unsigned long long v35;  // rdx
    char *v36;  // rax
    unsigned long v37;  // rdi

    v8 = v7;
    v4 = &v5;
    if (v3 != 0 && (char)v10 != 0)
    {
        v11 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v11) = 32;
        }
        else
        {
            __overflow();
        }
        g_6255b8 = g_6255b8 + 1;
    }
    if (v12 != 0)
    {
        if (sub_404ae0() != 0)
        {
            sub_405d40();
        }
        sub_405cd0();
        sub_405cd0();
        sub_405cd0();
    }
    if (v6 != 0)
    {
        v18 = g_625768;
        if (g_625768 != 0)
        {
            v18 = g_625769;
            if (g_625769 != 0)
            {
                if (v3 == 0)
                {
                    v20 = v22 - 2;
                    v23 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        v21 = 1;
                        stdout[5] = stdout[5] + 1;
                        *(v23) = v5;
                    }
                    else
                    {
                        v0 = v20;
                        __overflow();
                        v21 = 1;
                        v20 = v0;
                    }
                }
                else
                {
                    v21 = 0;
                    v18 = 0;
                }
            }
        }
        if (g_625768 == 0 || g_625769 == 0)
        {
            v22 = (unsigned int)sub_405ea0();
            v21 = 0;
        }
        v2 = v20;
        v1 = v21;
        v24 = (unsigned long long)(unsigned int)sub_404e80();
        v0 = (unsigned long long)(unsigned int)sub_404e80();
        __printf_chk(0x1, &g_41b070, (unsigned int)v24, (unsigned int)(*(v0) != 47? "/" : 4305034), (unsigned int)v0);
        free(v24);
        free(v0);
        v19 = v1;
        v26 = v2;
    }
    else
    {
        v19 = 0;
        v18 = 0;
    }
    if (v8 != 0)
    {
        if (g_6256d8 != 0)
        {
            v28 = v8[3];
            if (v8[4] - v8[3] <= 7)
            {
                v1 = v2;
                v0 = v19;
                _obstack_newchunk();
                v28 = v8[3];
                v26 = v1;
                v19 = v0;
            }
            *(v28) = g_6255b8;
            v8[3] = v8[3] + 8;
        }
        fwrite_unlocked(v4 + v19, 0x1, v26, stdout);
        v31 = g_6255b8 + v22;
        g_6255b8 = g_6255b8 + v22;
        if (g_6256d8 != 0)
        {
            v32 = v8[3];
            if (v8[4] - v8[3] <= 7)
            {
                _obstack_newchunk();
                v32 = v8[3];
                v31 = g_6255b8;
            }
            *(v32) = v31;
            v8[3] = v8[3] + 8;
        }
    }
    else
    {
        fwrite_unlocked(v4 + v19, 0x1, v2, stdout);
        g_6255b8 = g_6255b8 + v2;
    }
    if (v6 != 0)
    {
        fwrite_unlocked(&g_41b084, 0x1, 0x6, stdout);
        if (v18 != 0)
        {
            v35 = (char)*((char *)(v4 + v22 - 1));
            v36 = stdout[5];
            if (stdout[5] < stdout[6])
            {
                stdout[5] = stdout[5] + 1;
                *((unsigned long long *)&v36) = v35;
            }
            else
            {
                __overflow();
            }
        }
    }
    if (v4 != &v5 && &v5 != v37)
    {
        free(&v5);
    }
    return (unsigned long long)v3 + stack_base + 0;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[4];
    unsigned int field_38;
    char padding_3c[36];
    unsigned long long field_60;
    unsigned long long field_68;
    unsigned long long field_70;
    unsigned long long field_78;
    unsigned long long field_80;
    unsigned long long field_88;
    char padding_90[24];
    unsigned int field_a8;
    char padding_ac[12];
    char field_b8;
    char padding_b9[3];
    unsigned int field_bc;
} struct_0;

extern unsigned int g_41b08b;
extern unsigned int g_41b096;
extern unsigned int g_41b09b;
extern unsigned int g_624404;
extern char g_6245a8;
extern char g_6245a9;
extern char g_624788;
extern unsigned long long g_6255b8;
extern char g_6256bc;
extern unsigned int g_6256d4;
extern char g_6256d8;
extern char g_6256ec;
extern char g_6256ed;
extern char g_6256ee;
extern unsigned int g_6256f4;
extern unsigned int g_6256fc;
extern unsigned int g_625700;
extern unsigned int g_62570c;
extern unsigned int g_62571c;
extern char g_625724;
extern char g_625725;
extern unsigned long long g_625730;
extern unsigned long long g_625738;
extern unsigned long long stdout;

int sub_406c60()
{
    void tmp_12;  // tmp #12
    void tmp_18;  // tmp #18
    unsigned long v0;  // [bp-0x1358]
    unsigned long v1;  // [bp-0x1350]
    unsigned int v2;  // [bp-0x1344]
    unsigned long v3;  // [bp-0x1340]
    unsigned long long v4;  // [bp-0x1330]
    char v5;  // [bp-0x1324]
    unsigned long long v6;  // [bp-0x1323]
    unsigned short v7;  // [bp-0x131b]
    char v8;  // [bp-0x131a]
    char v9;  // [bp-0x1319]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x1318]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // [bp-0x1310]
    char v12;  // [bp-0xe78]
    char v13;  // [bp-0xe74]
    struct v15;  // rdi
    struct v16;  // rbp
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // rax
    unsigned long long v18;  // rdx
    void *v19;  // rbx
    unsigned long long v20;  // r9
    unsigned int *v21;  // rbx
    unsigned long long v22;  // r15
    unsigned long long v23;  // rax
    unsigned int v24;  // eax
    unsigned long long v26;  // rcx
    void *v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v30;  // rbx
    unsigned long long v33;  // rdi
    unsigned long long v37;  // r14
    unsigned long long v39;  // rax
    unsigned int v40;  // eax
    unsigned long long v42;  // rcx
    void *v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // cc_dep2
    unsigned long long v47;  // r9
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rdi
    unsigned long long v51;  // rcx
    unsigned long long v52;  // rax
    void *v53;  // rbx
    void *v54;  // r13
    unsigned long long v55;  // r13
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v58;  // r8d
    unsigned long long v59;  // r13
    unsigned long long v61;  // rax

    v16 = v15;
    if (v15->field_b8 != 0)
    {
        sub_40bb60();
    }
    else
    {
        v5 = *((char *)(4300744 + (unsigned long long)v15->field_a8));
        v6 = 4557430888798830399;
        v7 = 16191;
        v9 = 0;
    }
    if (g_625724 == 0)
    {
        v8 = 0;
    }
    else
    {
        if (v15->field_bc != 1)
        {
        }
        else
        {
            v8 = 46;
        }
        if (v15->field_bc == 2)
        {
            v17 = g_6256f4;
            v8 = 43;
        }
    }
    if (v15->field_bc == 1 || g_625724 == 0 || v15->field_bc != 2)
    {
        v17 = g_6256f4;
    }
    if (g_6256f4 != 1)
    {
        if (v17 == 0)
        {
            v10 = v16->field_70;
            v18 = v16->field_b8;
            v11 = v16->field_78;
        }
        else if (v17 != 2)
        {
            abort(); /* do not return */
        }
        if (v17 == 2)
        {
            v10 = v16->field_60;
            v18 = v16->field_b8;
            v11 = v16->field_68;
        }
    }
    else
    {
        v10 = v16->field_80;
        v18 = v16->field_b8;
        v11 = v16->field_88;
    }
    if (g_6256f4 == 1 || v17 == 0 || v17 == 2)
    {
        if (g_6256bc == 0)
        {
            v19 = &v12;
        }
        else
        {
            if (v18 != 0 && v16->field_20 != 0)
            {
                v20 = (unsigned int)sub_40e520();
            }
            v21 = &v12;
            __sprintf_chk((unsigned int)&v12, 0x1, 0xe3b, 0x41b09b);
            do
            {
                tmp_12 = (unsigned int)*((int *)&v12);
                v21 = &v13;
            }
            while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
            v18 = v16->field_b8;
            v19 = (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v21 + 2) : v21) - 3 - (((unsigned int)((((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) >> 16) : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) >> 16) : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) >> 16) : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)? 1 : 0) & 1);
        }
        if (g_6256ec != 0)
        {
            v22 = "?";
            if (v18 != 0)
            {
                v22 = (unsigned int)sub_40d5d0();
            }
            v23 = sub_40eb70();
            v24 = g_62571c - v23;
            if ((unsigned int)(g_62571c - v23) > 0)
            {
                v26 = v19 + (unsigned long long)v24 - 1 + 1;
                v27 = v19;
                do
                {
                    v27 += 1;
                    *((char *)&v27[-1]) = 32;
                }
                while (v27 != v26);
                v19 = v19 + (unsigned long long)v24 - 1 + 1;
            }
            do
            {
                v22 += 1;
                v19 += 1;
                tmp_18 = *((char *)(v22 - 1));
                *((char *)&v19[-1]) = *((char *)(v22 - 1));
            }
            while (tmp_18 != 0);
            *((char *)&v19[-1]) = 32;
            v18 = v16->field_b8;
        }
        v28 = "?";
        if (v18 != 0)
        {
            v28 = sub_40e520();
        }
        v0 = v28;
        __sprintf_chk((unsigned int)v19, 0x1, 0xffffffff, 0x41b08b);
        v53 = v19 + strlen(v19);
        if (g_6256d8 != 0)
        {
            fwrite_unlocked("  ", 0x1, 0x2, stdout);
            g_6255b8 = g_6255b8 + 2;
        }
        if (g_6256ee != 0 || g_625725 != 0 || g_6245a9 != 0 || g_6245a8 != 0)
        {
            v30 = v53 - &v12;
            fputs_unlocked(&v12, stdout);
            g_6255b8 = g_6255b8 + v30;
            if (g_6245a9 != 0)
            {
                sub_405520();
            }
            if (g_6245a8 != 0)
            {
                if (v16->field_b8 != 0 && g_6256ed == 0)
                {
                    v3 = v15->field_38;
                    v2 = g_62570c;
                    v33 = (unsigned int)sub_40e2f0();
                }
                sub_405460();
            }
            if (g_6256ee != 0)
            {
                sub_405520();
            }
            v53 = &v12;
            if (g_625725 != 0)
            {
                sub_405460();
            }
        }
        if (!(v16->field_b8 != 0))
        {
            v37 = "?";
        }
        else if (((unsigned short)v16->field_30 & 0xb000) != 0x2000)
        {
            v37 = (unsigned int)sub_40d5d0();
        }
        else
        {
            sub_40e520();
            v1 = (unsigned int)sub_40e520();
            v0 = g_625700;
            __sprintf_chk((unsigned int)v53, 0x1, 0xffffffff, 0x41b096);
            v53 = v53 + (long long)(int)g_6256fc + 1;
        }
        if (v16->field_b8 == 0 || ((unsigned short)v16->field_30 & 0xb000) != 0x2000)
        {
            v39 = sub_40eb70();
            v40 = g_6256fc - v39;
            if ((unsigned int)(g_6256fc - v39) > 0)
            {
                v42 = v53 + (unsigned long long)v40 - 1 + 1;
                v43 = v53;
                do
                {
                    v43 += 1;
                    *((char *)&v43[-1]) = 32;
                }
                while (v43 != v42);
                v53 = v53 + (unsigned long long)v40 - 1 + 1;
            }
            do
            {
                v37 += 1;
                v53 += 1;
                tmp_18 = *((char *)(v37 - 1));
                *((char *)&v53[-1]) = *((char *)(v37 - 1));
            }
            while (tmp_18 != 0);
            *((char *)&v53[-1]) = 32;
        }
        *((char *)v53) = 1;
        if (v16->field_b8 != 0)
        {
            v44 = sub_4176f0();
            if (v44 != 0)
            {
                v48 = g_625730;
                v51 = v10;
                v49 = g_625738;
                v47 = v11;
                v45 = v10;
                if (g_625730 >= v10)
                {
                    if (g_625730 <= v45)
                    {
                    }
                    else
                    {
                        v50 = v48 - 15778476;
                    }
                }
                if (g_625730 < v10 || (unsigned int)(g_625738 - v47) < 0 && g_625730 <= v45)
                {
                    sub_40c150();
                    v51 = v10;
                    v47 = v11;
                    v48 = g_625730;
                    v49 = g_625738;
                    v50 = g_625730 - 15778476;
                }
                if (g_624788 != 0)
                {
                    v52 = sub_410650();
                    if (v52 != 0)
                    {
                        v53 += v52;
                    }
                }
            }
            if ((v44 == 0 || v52 == 0 && g_624788 != 0) && *((char *)v53) != 0 && v16->field_b8 != 0)
            {
                v55 = (unsigned int)sub_40e480();
            }
            if ((v44 == 0 || g_624788 != 0) && (*((char *)v53) == 0 || v44 != 0) && (*((char *)v53) == 0 || v52 != 0))
            {
                v54 = v53 + 1;
                *((short *)v53) = 32;
            }
        }
        if (g_624404 < 0 && (v16->field_b8 == 0 || *((char *)v53) != 0) && (v44 == 0 || v16->field_b8 == 0 || v52 == 0) && (v44 == 0 || v16->field_b8 == 0 || g_624788 != 0))
        {
            v4 = 0;
            v56 = sub_4176f0();
            if (v56 != 0 && g_624788 == 0)
            {
                v57 = sub_410650();
                if (v57 != 0)
                {
                    v58 = (unsigned int)sub_40e9b0();
                    g_624404 = v58;
                }
            }
            if (v56 == 0 || v57 == 0 && g_624788 == 0)
            {
                v58 = g_624404;
            }
            if (v58 < 0)
            {
                g_624404 = 0;
            }
        }
        if (v16->field_b8 == 0 || v44 == 0 && *((char *)v53) != 0 || v52 == 0 && g_624788 != 0 && *((char *)v53) != 0)
        {
            __sprintf_chk((unsigned int)v53, 0x1, 0xffffffff, 0x41b09b);
            v54 = v53 + strlen(v53);
        }
        v59 = v54 - &v12;
        fputs_unlocked(&v12, stdout);
        g_6255b8 = g_6255b8 + v59;
        v61 = sub_406690();
        if (v16->field_a8 != 6)
        {
            v61 = g_6256d4;
            if (g_6256d4 != 0)
            {
                v61 = sub_4058a0();
            }
        }
        else if (v16->field_8 != 0)
        {
            fwrite_unlocked(" -> ", 0x1, 0x4, stdout);
            g_6255b8 = g_6255b8 + 4;
            v61 = sub_406690();
            if (g_6256d4 != 0)
            {
                v61 = sub_4058a0();
            }
        }
        return v61;
    }
}

// int sub_411f10()

int sub_40d480()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long long v7[3];  // rdi
    unsigned long long v8[3];  // rsi
    unsigned long v9;  // r15
    unsigned long v10;  // r14
    unsigned long v11;  // r13
    unsigned long v12;  // r12
    unsigned long v13;  // rbx

    if (v7[1] == v8[1] && v7[2] == v8[2])
    {
        v5 = v9;
        v4 = v10;
        v3 = v11;
        v2 = v12;
        v1 = stack_base + 0;
        v0 = v13;
    }
    if (v7[2] != v8[2] || v7[1] != v8[1])
    {
        return 0;
    }
}

// int sub_40ace0()

int sub_416de0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_416d80();
}

extern unsigned int g_41eab2;
extern unsigned int g_41eadd;
extern unsigned int g_41ed10;

int sub_412900()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41eab2, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41eadd, 0x5));
    dcgettext(0x0, 0x41ed10, 0x5);
}

int sub_4129a0()
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
    v4 = INVALID_IR;
    if (!(INVALID_IR))
    {
        v4 =  amd64g_calculate_condition(0x0, 0x30, t10, rsi, cc_ndep);
    }
    if (INVALID_IR ||  amd64g_calculate_condition(0x0, 0x30, t10, rsi, cc_ndep) != 0)
    {
        v0 = v4;
        sub_412bd0(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

int sub_405690()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // edx
    unsigned long long v5;  // rdx
    struct v6;  // rsi
    unsigned long long v7;  // rdx

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        v7 = -18446744069414584321;
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if (v6->field_a8 == 3 && v5 == 0 || v6->field_a8 == 9 && v5 == 0 || v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        return v7;
    }
}

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

int sub_40a0a0()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct v4;  // rdi
    unsigned int v5;  // eax
    char v6;  // al
    unsigned int v7;  // ecx
    unsigned long long v8;  // rcx
    struct v9;  // rsi
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r12

    v5 = v4->field_a8;
    v6 = v4->field_a8 == 9;
    v8 = v7 | rax;
    if (v9->field_a8 != 3 && v9->field_a8 != 9 && v8 != 0)
    {
        return -18446744069414584321;
    }
    if (v9->field_a8 == 3 || v9->field_a8 == 9 || v8 == 0)
    {
        if (v8 == 0 && (v9->field_a8 == 3 || v9->field_a8 == 9))
        {
            return 1;
        }
        if (v8 != 0 || v9->field_a8 != 3 && v9->field_a8 != 9)
        {
            v2 = v10;
            v1 = stack_base + 0;
            v0 = v11;
            v12 = strrchr();
            strrchr();
            v13 = sub_4050d0();
            if ((unsigned int)v13 != 0)
            {
                v14 = v0;
                v15 = v2;
                return v13;
            }
        }
    }
}

extern char g_6258e0;

int sub_411ca0()
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
    v3 = (v2 == 0? &g_6258e0 : v2);
    *((int *)(tmp_11? &g_6258e0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6258e0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_6258e0;
        abort(); /* do not return */
    }
}

extern uint128_t g_6258e0;
extern uint128_t g_6258f0;
extern uint128_t g_625900;
extern unsigned long long g_625910;

int sub_412180()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6258e0;
    *((uint128_t *)&v1) = g_6258f0;
    *((uint128_t *)&v2) = g_625900;
    v4 = g_625910;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_411a40();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_4176d0()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rax

    if (v1 == 1)
    {
        return v2;
    }
}

// int sub_412050()

typedef struct struct_0 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned int field_78;
    char padding_7c[44];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned long long field_78;
    char padding_80[40];
    unsigned int field_a8;
} struct_1;

int sub_408390()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi
    unsigned long long v7;  // rax

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0)
    {
        if (v1->field_70 <= v6->field_70 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0))
        {
            if (v1->field_70 >= v6->field_70)
            {
                v7 = (unsigned int)v6->field_78 - v1->field_78;
            }
            else
            {
                return 1;
            }
        }
        if ((v1->field_70 <= v6->field_70 || v5 == 0) && (v5 == 0 || (unsigned int)v6->field_78 != v1->field_78) && (v5 == 0 || v1->field_70 >= v6->field_70) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_70 <= v6->field_70) && (v6->field_a8 == 3 || v6->field_a8 == 9 || (unsigned int)v6->field_78 != v1->field_78) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_70 >= v6->field_70))
        {
            return v7;
        }
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if ((v6->field_a8 != 3 || v1->field_70 > v6->field_70) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v1->field_70 > v6->field_70) && (v6->field_a8 != 9 || v5 != 0) && (v1->field_70 > v6->field_70 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

int sub_40bb90()
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
    v4 = (unsigned int)sub_40b870();
    v5 = (unsigned int)sub_40b8d0();
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
            *(v13) = v12 - rax;
        }
        *((char *)(unsigned long long)mempcpy(v12, (unsigned int)v3, v8)) = 0;
    }
    return v10;
}

int sub_40b810()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_40b7b0();
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

typedef struct struct_0 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned long long field_88;
    char padding_90[24];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned int field_88;
    char padding_8c[28];
    unsigned int field_a8;
} struct_1;

int sub_409d00()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    struct v3;  // rsi
    struct v4;  // r8
    char v5;  // al
    unsigned int v6;  // ecx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v2 = v1->field_a8;
    v4 = v3;
    v5 = v1->field_a8 == 9;
    v7 = v6 | rax;
    if (v3->field_a8 == 3 || v7 == 0 || v3->field_a8 == 9)
    {
        if (v3->field_80 <= v1->field_80 && (v3->field_a8 != 3 || v7 != 0) && (v7 != 0 || v3->field_a8 != 9))
        {
            if (v3->field_80 >= v1->field_80)
            {
                v8 = (unsigned int)v1->field_88 - v4->field_88;
            }
            else
            {
                return 1;
            }
        }
        if ((v3->field_80 <= v1->field_80 || v7 == 0) && (v7 == 0 || v3->field_80 >= v1->field_80) && (v7 == 0 || (unsigned int)v1->field_88 != v4->field_88) && (v3->field_a8 == 3 || v3->field_80 <= v1->field_80 || v3->field_a8 == 9) && (v3->field_a8 == 3 || v3->field_a8 == 9 || v3->field_80 >= v1->field_80) && (v3->field_a8 == 3 || v3->field_a8 == 9 || (unsigned int)v1->field_88 != v4->field_88))
        {
            return v8;
        }
    }
    if (v7 == 0)
    {
        v8 = 1;
    }
    if ((v3->field_a8 != 3 || v3->field_80 > v1->field_80) && (v3->field_a8 != 3 || v7 != 0) && (v3->field_80 > v1->field_80 || v7 != 0) && (v3->field_80 > v1->field_80 || v3->field_a8 != 9) && (v7 != 0 || v3->field_a8 != 9))
    {
        return -18446744069414584321;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c600()
{
    unsigned long long v1[2];  // rdi
    unsigned long long v2[2];  // rsi
    unsigned long long v3;  // rdi
    struct v4;  // rdx
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

// int sub_40bb60()

int sub_412b80()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_412980();
}

int sub_40e910()
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    unsigned long long v3;  // r12
    unsigned int v4;  // edx
    unsigned int v5;  // ecx
    unsigned long long *v6;  // rsi
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rdi
    unsigned long long v10;  // r14
    unsigned long long v11;  // rax

    v3 = 0;
    v0 = v4;
    v1 = v5;
    v7 = *(v6);
    while (true)
    {
        v8 = v7 + 1;
        v10 = realloc(v3, v7 + 1);
        if (v10 != 0)
        {
            *(v6) = *(v6);
            v7 = sub_40e570();
            if (v7 != -1)
            {
                v3 = v10;
                if (v8 > v7)
                {
                    break;
                }
            }
            else
            {
                v9 = v10;
                v10 = 0;
                free(v9);
            }
        }
        else
        {
            free(v3);
        }
    }
    v11 = v10;
    return v11;
}

int sub_410650()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    char v2;  // [bp-0x9]
    unsigned long v4;  // r9
    unsigned long v5;  // r8

    v2 = 0;
    v1 = v4;
    v0 = v5;
    return sub_40ee80();
}

int sub_40c870()
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

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

extern char g_41b08a;

int sub_40a470()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct v4;  // rdi
    unsigned int v5;  // eax
    char v6;  // al
    unsigned int v7;  // ecx
    unsigned long long v8;  // rcx
    struct v9;  // rsi
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    char *v12;  // rax
    char *v13;  // rbp
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12

    v5 = v4->field_a8;
    v6 = v4->field_a8 == 9;
    v8 = v7 | rax;
    if (v9->field_a8 != 3 && v9->field_a8 != 9 && v8 != 0)
    {
        return -18446744069414584321;
    }
    if (v9->field_a8 == 3 || v9->field_a8 == 9 || v8 == 0)
    {
        if (v8 == 0 && (v9->field_a8 == 3 || v9->field_a8 == 9))
        {
            return 1;
        }
        if (v8 != 0 || v9->field_a8 != 3 && v9->field_a8 != 9)
        {
            v2 = v10;
            v1 = stack_base + 0;
            v0 = v11;
            v13 = (unsigned long long)strrchr();
            v12 = strrchr();
            if (v12 != 0)
            {
                v13 = (v13 == 0? &g_41b08a : v13);
            }
            else
            {
                v12 = &g_41b08a;
            }
            if (v12 != 0 || v13 != 0)
            {
                v14 = strcmp(v13, v12);
                if ((unsigned int)v14 != 0)
                {
                    v15 = v0;
                    v16 = v2;
                    return v14;
                }
            }
        }
    }
}

int sub_40d4b0()
{
    return 0;
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_40c5f0()
{
    struct v1;  // rdi

    return v1->field_20;
}

extern unsigned int g_6255d8;

int sub_404830()
{
    unsigned int v1;  // edi

    if (g_6255d8 == 0)
    {
        g_6255d8 = v1;
    }
    return g_6255d8;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_624618;
extern uint128_t g_624620;
extern unsigned int g_624630;
extern int512_t g_6257e0;

int sub_411a40()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x40]
    unsigned int v6;  // [bp-0x3c]
    unsigned long long v8;  // rcx
    struct v9;  // rbp
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
    v17 = g_624618;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_624630 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_624618 != 6440480)
            {
                v16 = sub_4129e0();
                g_624618 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_4129e0();
                v17 = v15;
                g_624618 = v15;
                *(v15) = g_624620;
            }
            memset(&v17[(long long)(int)g_624630], 0x0, (int)((unsigned int)v13 + 1 - g_624630) * 16);
            g_624630 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_412bd0(); /* do not return */
        }
    }
    if (g_624630 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_410810();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6445024)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_412980();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_410810();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[16];
    unsigned long long field_28;
    unsigned int field_30;
    char padding_34[116];
    unsigned int field_a8;
    unsigned int field_ac;
    char padding_b0[8];
    char field_b8;
    char field_b9;
    char padding_ba[6];
    char field_c0;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

extern int512_t g_624420;
extern unsigned long long g_625670;
extern unsigned long long g_6256c8;
extern char g_6256d2;
extern char g_625750;

int sub_406690()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x40]
    struct v3;  // rdi
    struct v4;  // r14
    unsigned long long v5;  // rcx
    char v7;  // sil
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // r8
    unsigned long long v11;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // rbp
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // rcx
    unsigned long long v14;  // rax
    unsigned int v15;  // eax
    unsigned long long v16;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rcx
    char v24;  // cl
    unsigned long long v25;  // rax
    unsigned long long v26[5];  // rbx
    unsigned long long v27;  // rcx
    unsigned long v28;  // rdx
    unsigned long long v29;  // rax
    struct v30;  // rcx
    unsigned long long v31;  // rax
    unsigned long long v32;  // rbx
    unsigned long long v38;  // rax

    v4 = v3;
    if (v7 != 0)
    {
        v12 = v3->field_8;
        if (g_6256d2 != 0)
        {
            v10 = v3->field_ac;
            if (v3->field_b9 == 0)
            {
                v9 = sub_404ae0();
                v8 = -18446744069414584321;
                if (v9 != 0)
                {
                    v11 = 192;
                }
            }
            else
            {
                v13 = v4->field_b8;
                v8 = 0;
            }
        }
    }
    else
    {
        v12 = v3->field_0;
        if (g_6256d2 != 0)
        {
            v8 = v3->field_b9;
            if (g_625750 != 0 && v3->field_b9 != 0)
            {
                v10 = v3->field_ac;
            }
            if (g_625750 == 0 || v3->field_b9 == 0)
            {
                v10 = v3->field_30;
            }
        }
    }
    if (g_6256d2 != 0)
    {
        if ((v3->field_b9 == 0 || v7 == 0) && (v7 == 0 || v9 == 0))
        {
            v13 = v4->field_b8;
        }
        if (v7 == 0 || v9 == 0 || v3->field_b9 != 0)
        {
            if ((v4->field_b8 == 0 || v3->field_b9 != 0) && (v4->field_b8 == 0 || v7 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 == 0))
            {
                v14 = (unsigned int)*((int *)(4298048 + 4 * v4->field_a8));
                v13 = *((int *)(4298048 + 4 * v4->field_a8)) == 7;
            }
            if (v3->field_b9 == 0 && v4->field_b8 != 0 || v7 == 0 && v4->field_b8 != 0 || v3->field_b9 != 0 && v7 != 0 && v4->field_b8 != 0)
            {
                v15 = (unsigned int)v10 & 0xf000;
                if (((unsigned short)v10 & 0xf000) != 0x8000)
                {
                    if (v15 != 0x4000)
                    {
                        if (v15 != 0xa000)
                        {
                            v11 = 128;
                            if (v15 != 0x1000)
                            {
                                v11 = 144;
                                if (v15 != 0xc000)
                                {
                                    v11 = 160;
                                    if (v15 != 0x6000)
                                    {
                                        v11 = (v15 != 0x2000? 208 : 176);
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        if (((unsigned short)v10 & 514) == 514)
                        {
                            v11 = 320;
                        }
                        if (sub_404ae0() == 0 || ((unsigned short)v10 & 514) != 514)
                        {
                            if ((v10 & 2) != 0)
                            {
                                v11 = 304;
                            }
                            if (sub_404ae0() == 0 || (v10 & 2) == 0)
                            {
                                v11 = 96;
                                if (((unsigned short)v10 & 0x200) != 0)
                                {
                                    v21 = sub_404ae0();
                                    v23 = 0 - (unsigned long long)(char)(v21 < 1);
                                    v24 = (char)(0 - (unsigned long long)(char)(v21 < 1)) & 64;
                                    v11 = rcx + 288;
                                }
                            }
                        }
                    }
                    if (v15 == 0xa000)
                    {
                        v14 = 7;
                    }
                }
                else if (((unsigned short)v10 & 0x800) != 0)
                {
                    v16 = sub_404ae0();
                    if (v16 != 0)
                    {
                        v11 = 0x100;
                    }
                }
            }
        }
    }
    if ((((unsigned short)v10 & 0xf000) == 0x8000 && ((unsigned short)v10 & 0x800) == 0 && g_6256d2 != 0 && (v3->field_b9 != 0 || v4->field_b8 != 0) && (v7 != 0 || v4->field_b8 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 != 0) && (v7 == 0 || v9 == 0 || v3->field_b9 != 0) || ((unsigned short)v10 & 0xf000) == 0x8000 && v16 == 0 && ((unsigned short)v10 & 0x800) != 0 && g_6256d2 != 0 && (v3->field_b9 != 0 || v4->field_b8 != 0) && (v7 != 0 || v4->field_b8 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 != 0) && (v7 == 0 || v9 == 0 || v3->field_b9 != 0)) && ((unsigned short)v10 & 0x400) != 0)
    {
        v18 = sub_404ae0();
        if (v18 != 0)
        {
            v11 = 272;
        }
    }
    if (v15 == 0xa000 && ((unsigned short)v10 & 0xf000) != 0x8000 && v15 != 0x4000 && g_6256d2 != 0 && (v3->field_b9 != 0 || v4->field_b8 != 0) && (v7 != 0 || v4->field_b8 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 != 0) && (v7 == 0 || v9 == 0 || v3->field_b9 != 0) || g_6256d2 != 0 && (v4->field_b8 == 0 || v3->field_b9 != 0) && (v4->field_b8 == 0 || v7 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 == 0) && (v7 == 0 || v9 == 0 || v3->field_b9 != 0) && *((int *)(4298048 + 4 * v4->field_a8)) != 5)
    {
        if (v8 == 0 && v13 != 0)
        {
            v11 = 208;
            if (g_625750 == 0)
            {
                v11 = (0 - (unsigned long long)(char)((char)sub_404ae0() < 1) & -96) + 208;
            }
        }
        if (v13 == 0 || v8 != 0)
        {
            v11 = v14 * 16;
        }
    }
    if (((unsigned short)v10 & 0x400) != 0 && (((unsigned short)v10 & 0xf000) == 0x8000 && ((unsigned short)v10 & 0x800) == 0 && g_6256d2 != 0 && (v3->field_b9 != 0 || v4->field_b8 != 0) && (v7 != 0 || v4->field_b8 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 != 0) && (v7 == 0 || v9 == 0 || v3->field_b9 != 0) || ((unsigned short)v10 & 0xf000) == 0x8000 && v16 == 0 && ((unsigned short)v10 & 0x800) != 0 && g_6256d2 != 0 && (v3->field_b9 != 0 || v4->field_b8 != 0) && (v7 != 0 || v4->field_b8 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 != 0) && (v7 == 0 || v9 == 0 || v3->field_b9 != 0)) && v18 == 0 || (((unsigned short)v10 & 0xf000) == 0x8000 && ((unsigned short)v10 & 0x800) == 0 && g_6256d2 != 0 && (v3->field_b9 != 0 || v4->field_b8 != 0) && (v7 != 0 || v4->field_b8 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 != 0) && (v7 == 0 || v9 == 0 || v3->field_b9 != 0) || ((unsigned short)v10 & 0xf000) == 0x8000 && v16 == 0 && ((unsigned short)v10 & 0x800) != 0 && g_6256d2 != 0 && (v3->field_b9 != 0 || v4->field_b8 != 0) && (v7 != 0 || v4->field_b8 != 0) && (v3->field_b9 == 0 || v7 == 0 || v4->field_b8 != 0) && (v7 == 0 || v9 == 0 || v3->field_b9 != 0)) && ((unsigned short)v10 & 0x400) == 0)
    {
        v19 = sub_404ae0();
        if (v19 != 0 && v4->field_c0 != 0)
        {
            v11 = 336;
        }
    }
    if (unknown)
    {
        v22 = sub_404ae0();
        if (v22 != 0)
        {
            v11 = 224;
        }
    }
    if (unknown)
    {
        v25 = sub_404ae0();
        if (v25 != 0)
        {
            v11 = 352;
        }
    }
    if (unknown)
    {
        v26 = g_6256c8;
        v27 = strlen(v12);
        if (g_6256c8 != 0)
        {
            while (true)
            {
                v28 = *(v26);
                if (v27 >= *(v26))
                {
                    v1 = v27;
                    v29 = strncmp(&v12[v27 + -1 * v28], v26[1], v28);
                    v27 = v1;
                    if (v29 == 0)
                    {
                        v30 = &v26[2];
                    }
                }
                if (v27 < *(v26) || v29 != 0)
                {
                    v26 = v26[4];
                    if (v26 == 0)
                    {
                        break;
                    }
                }
            }
            if (v27 < *(v26) || v29 != 0)
            {
                v11 = 80;
            }
        }
    }
    if (unknown)
    {
        v11 = 80;
    }
    if (unknown)
    {
        v30 = v11 + (char *)&g_624420;
    }
    if (unknown)
    {
        v31 = sub_404ae0();
    }
    if (unknown)
    {
        v0 = v3->field_10;
        v32 = (unsigned int)sub_4062d0();
        sub_405d70();
    }
    if (unknown)
    {
        v0 = v4->field_10;
        v32 = (unsigned int)sub_4062d0();
        sub_405d70();
        sub_405c70();
        if (g_625670 != 0 && (0 | v5) % g_625670 != (0 | v32 + v5 - 1) % g_625670)
        {
            sub_405cd0();
        }
    }
    v38 = v32;
    return v38;
}

typedef struct struct_0 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned int field_78;
} struct_0;

int sub_409f80()
{
    struct v1;  // rdi
    unsigned long long v2[16];  // rsi
    unsigned long long v3;  // rax

    if (v1->field_70 <= v2[14])
    {
        if (v1->field_70 >= v2[14])
        {
            v3 = (unsigned int)v2[15] - v1->field_78;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_70 < v2[14] || (unsigned int)v2[15] != v1->field_78)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

int sub_40bc70()
{
    char **v1;  // rdi
    char *v2;  // rsi
    unsigned long long v3;  // rcx
    unsigned long long v5;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // rax
    unsigned long long v7;  // rdx

    v2 = *(v1);
    v7 = *(*(v1));
    if (*(*(v1)) != 0)
    {
        v5 = 0;
        v6 = 0;
        while (true)
        {
            if (v5 != 0)
            {
                v3 = (unsigned int)v7 - 65;
                if ((unsigned int)v7 - 65 <= 57)
                {
                    v5 = 0;
                }
                if ((288230371923853311 & 1 << (v3 & 63)) == 0 || (unsigned int)v7 - 65 > 57)
                {
                    v5 = 0;
                    v6 = (v7 != 126? 0 : rax);
                }
            }
            else if (v7 == 46)
            {
                v5 = 1;
                v6 = (v6 == 0? v2 : v6);
            }
            else if ((v7 < 65 || v7 > 90) && (v7 <= 90 || (v7 - 97 & 255) > 25) && ((v7 - 48 & 255) > 9 || v7 > 90))
            {
                v6 = (v7 != 126? 0 : rax);
                v2 = &v2[1];
                *(v1) = v2;
                v7 = *(v2);
                if ((char)v7 == 0)
                {
                    break;
                }
            }
            if (v7 == 46 || v5 != 0 || (v7 - 48 & 255) <= 9 && v7 <= 90 || (v7 - 97 & 255) <= 25 && v7 > 90 || v7 <= 90 && v7 >= 65)
            {
                v2 = &v2[1];
                *(v1) = v2;
                v7 = *(v2);
                if ((char)v7 == 0)
                {
                    break;
                }
            }
        }
        return v6;
    }
    return 0;
}

typedef struct struct_0 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned int field_78;
} struct_0;

int sub_409a80()
{
    struct v1;  // rsi
    unsigned long long v2[16];  // rdi
    unsigned long long v3;  // rax

    if (v1->field_70 <= v2[14])
    {
        if (v1->field_70 >= v2[14])
        {
            v3 = (unsigned int)v2[15] - v1->field_78;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_70 < v2[14] || (unsigned int)v2[15] != v1->field_78)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_0;

extern unsigned int g_41b371;
extern unsigned int g_41d793;
extern unsigned int g_41d794;

int sub_415be0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x110]
    void *v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    char v5;  // [bp-0xe9]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xe0]
    unsigned long v8;  // [bp-0xd8]
    unsigned long v9;  // [bp-0xd0]
    char v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    unsigned int v12;  // [bp-0xb0]
    void *v14;  // rdi
    unsigned int v15;  // rsi
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rax
    unsigned long long v18;  // r15
    unsigned long long v19;  // r14
    unsigned long long v20;  // rax
    unsigned long long v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbp
    unsigned long long v25;  // r13
    struct v26;  // rax
    unsigned long long v27;  // rdx
    void *v28;  // rbx
    unsigned long long v29;  // rax
    unsigned long long v30;  // r13
    unsigned long v31;  // r14
    unsigned int v32;  // rax
    unsigned long long v34;  // r8
    unsigned long v39;  // rbx
    unsigned long v40;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v42;  // rbx
    unsigned int *v43;  // r12

    v3 = v14;
    if (v15 == 0)
    {
        v4 = 0x1000;
        if (v14 != 0)
        {
            v2 = 0;
            *(__errno_location()) = 22;
        }
    }
    else
    {
        *((unsigned int *)&v4) = v15;
        if (v3 != 0)
        {
            v2 = v3;
        }
    }
    if (v14 == 0 && v15 == 0 || v3 == 0 && v15 != 0)
    {
        v2 = malloc(v4);
    }
    if (v14 == 0 && v2 != 0 || v3 != 0 && v15 != 0 || v2 != 0 && v15 != 0)
    {
        v16 = v2 + v4;
        *((char *)(v2 + v4 - 1)) = 0;
        v17 = __lxstat(0x1, 0x41d794, (unsigned int)&v10);
        if (v17 >= 0)
        {
            v18 = *((long long *)&v10);
            v19 = v11;
            v0 = *((long long *)&v10);
            v20 = __lxstat(0x1, 0x41b371, (unsigned int)&v10);
            if (v20 >= 0)
            {
                v6 = v16 - 1;
                v8 = v11;
                v7 = *((long long *)&v10);
                v5 = *((long long *)&v10) != *((long long *)&v10) | v11 != v11;
                if (v18 != *((long long *)&v10) || v19 != v11)
                {
                    v24 = 0;
                    v21 = -18446744069414584420;
                    v43 = __errno_location();
                    while (true)
                    {
                        v21 = openat(v21, 0x41d793, 0x0);
                        if (v21 >= 0)
                        {
                            v22 = __fxstat(0x1, v21, (unsigned int)&v10);
                            if (v22 == 0)
                            {
                                if (v24 != 0)
                                {
                                    v23 = closedir();
                                }
                                if (v24 == 0 || v23 == 0)
                                {
                                    v1 = *((long long *)&v10);
                                    v9 = v11;
                                    v24 = fdopendir(v21);
                                    if (v24 != 0)
                                    {
                                        v25 = v5;
                                        while (true)
                                        {
                                            *(v43) = 0;
                                            v26 = readdir();
                                            if (v26 == 0)
                                            {
                                                v42 = *(v43);
                                                if (*(v43) == 0 && v25 != 0)
                                                {
                                                    rewinddir(v24);
                                                    v26 = readdir();
                                                    if (v26 != 0)
                                                    {
                                                        v25 = 0;
                                                    }
                                                    else
                                                    {
                                                        v42 = *(v43);
                                                    }
                                                }
                                                if (v26 == 0 || v25 == 0 || *(v43) != 0)
                                                {
                                                    if ((unsigned int)v42 != 0)
                                                    {
                                                        break;
                                                    }
                                                    *(v43) = 2;
                                                    v42 = 2;
                                                }
                                            }
                                            if (v26 != 0 || *(v43) == 0 && v26 != 0 && v25 != 0)
                                            {
                                                if (v25 != 0 && (v26->field_13 == 46 || v26 != 0) && (v26 != 0 || v26->field_14 != 0) && (v26 != 0 || *((short *)&v26->field_14) != 46) && (v26->field_14 != 0 || v26->field_13 != 46) && (*((short *)&v26->field_14) != 46 || v26->field_13 != 46))
                                                {
                                                    v25 = v27;
                                                }
                                                if ((v26 == 0 || v26->field_14 != 0 || v26->field_13 != 46) && (v26 == 0 || *((short *)&v26->field_14) != 46 || v26->field_13 != 46) && (v26 != 0 || v26->field_14 != 0 || v26->field_13 != 46) && (v26 != 0 || *((short *)&v26->field_14) != 46 || v26->field_13 != 46))
                                                {
                                                    v28 = &v26->field_13;
                                                    v29 = __fxstatat(0x1, v21, (unsigned int)v26 + 19, (unsigned int)&v10, 0x100);
                                                    v30 = &v6[-1 * v2];
                                                    v31 = strlen(v28);
                                                    if (v30 <= v31)
                                                    {
                                                        if (v15 == 0)
                                                        {
                                                            v32 = v4 + (v4 <= v31? v31 : v4);
                                                            *((int *)&v6) = (v4 <= v31? v31 : v4);
                                                            *((unsigned long long *)&v0) = v4 + (v4 <= v31? v31 : v4);
                                                            if (!(INVALID_IR) && v2 != 0)
                                                            {
                                                                v2 = realloc(v2, v32);
                                                                v6 = memcpy(v2 + v6 + v30, v2 + v30, v4 - v30);
                                                                v4 = *((long long *)&v0);
                                                            }
                                                            if (INVALID_IR || v2 == 0)
                                                            {
                                                                *(v43) = 12;
                                                                v42 = 12;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            *(v43) = 34;
                                                            v42 = 34;
                                                        }
                                                    }
                                                    if (v30 > v31 || v15 == 0 && !(INVALID_IR) && v2 != 0)
                                                    {
                                                        v34 = memcpy(&v6[-1 * v31], v28, v31);
                                                        v6 = v34 - 1;
                                                        *((char *)(v34 - 1)) = 47;
                                                        v0 = v1;
                                                        if (v8 != v9 || v7 != v1)
                                                        {
                                                            break;
                                                        }
                                                        if (closedir() != 0)
                                                        {
                                                            break;
                                                        }
                                                        v16 = v2 + v4;
                                                    }
                                                }
                                            }
                                        }
                                        if (unknown)
                                        {
                                            v42 = *(v43);
                                        }
                                        else if (unknown)
                                        {
                                            v21 = openat(v21, 0x41d793, 0x0);
                                        }
                                        else if (unknown)
                                        {
                                            closedir();
                                        }
                                    }
                                }
                                if ((v24 == 0 || v24 != 0) && (v24 == 0 || v23 != 0))
                                {
                                    v42 = *(v43);
                                }
                            }
                            else
                            {
                                v42 = *(v43);
                                if (v24 != 0)
                                {
                                    closedir();
                                }
                            }
                            if ((v24 == 0 || v24 != 0 || v22 != 0) && (v24 == 0 || v23 != 0 || v22 != 0))
                            {
                                close(v21);
                            }
                        }
                        else
                        {
                            v42 = *(v43);
                        }
                        if ((v21 < 0 || v22 == 0) && (v21 < 0 || v24 != 0) && (v24 == 0 || v23 == 0 || v21 < 0) && (v24 != 0 || v21 >= 0))
                        {
                            closedir();
                        }
                        break;
                    }
                    if (v24 != 0 && (v24 == 0 || v23 == 0))
                    {
                        v42 = *(v43);
                    }
                    else if (v24 == 0 || v24 != 0 && v23 != 0)
                    {
                        if (v21 < 0 || v24 == 0 || v3 != 0 || v22 != 0 || v24 != 0 && v23 != 0)
                        {
                            free(v2);
                        }
                        else if (v21 < 0 || v24 == 0 || v3 != 0 || v22 != 0 || v24 != 0 && v23 != 0)
                        {
                            *(v43) = v42;
                            v2 = 0;
                        }
                    }
                }
                v6[-1] = 47;
                v6 = &v6[-1];
                v39 = v16 + -0x1 * v6;
                v40 = v39;
                memmove(v2, v6, v40);
                if (v15 == 0)
                {
                    v3 = realloc(v2, v40);
                }
                *((int *)&v2) = (v3 == 0? v2 : v3);
            }
        }
        if (v17 < 0 || v20 < 0)
        {
            v43 = __errno_location();
        }
        if (v17 < 0 || v20 < 0 || v18 != *((long long *)&v10) || v19 != v11)
        {
            v42 = *(v43);
            free(v2);
            *(v43) = v42;
            v2 = 0;
        }
    }
    return v2;
}

extern int512_t g_6258e0;

int sub_411c30()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6258e0 : v1)) = v2;
    return &g_6258e0;
}

extern int512_t g_405560;
extern char g_419504;
extern char g_419530;
extern uint128_t g_6255e0;
extern uint128_t g_6255f0;
extern uint128_t g_625600;
extern uint128_t g_625610;
extern uint128_t g_625620;
extern uint128_t g_625630;
extern uint128_t g_625640;
extern uint128_t g_625650;

int sub_405af0()
{
    unsigned long v0;  // [bp-0xb8]
    void v1;  // [bp-0xb0]
    void v2;  // [bp-0xa0]
    void v3;  // [bp-0x90]
    void v4;  // [bp-0x80]
    void v5;  // [bp-0x70]
    void v6;  // [bp-0x60]
    void v7;  // [bp-0x50]
    void v8;  // [bp-0x40]
    unsigned int v9;  // [bp-0x30]
    char v11;  // dil
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // rbx
    unsigned int *v13;  // rbx
    unsigned int v14;  // rbp
    unsigned long long v16;  // r12d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // rbp
    unsigned long long v18;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // ebp
    unsigned long long v20;  // rax

    if (v11 == 0)
    {
        v13 = &g_419504;
        v14 = 20;
        while (true)
        {
            v18 = sigismember(0x6255e0, v14);
            if ((unsigned int)v18 == 0)
            {
                if (v13 == 4298032)
                {
                    break;
                }
            }
            else
            {
                v18 = signal(v14, 0x0);
                if (v13 == 4298032)
                {
                    break;
                }
            }
            v14 = *(v13);
            v13 = &v13[1];
        }
        return v18;
    }
    v12 = &g_419504;
    v16 = 20;
    sigemptyset(0x6255e0);
    v17 = &g_419504;
    while (true)
    {
        sigaction();
        if (v0 != 1)
        {
            sigaddset(0x6255e0, v16);
        }
        if (v17 == 4298032)
        {
            break;
        }
        v16 = *((int *)v17);
        v17 += 4;
    }
    v9 = 0x10000000;
    v19 = 20;
    *((uint128_t *)&v1) = g_6255e0;
    *((uint128_t *)&v2) = g_6255f0;
    *((uint128_t *)&v3) = g_625600;
    *((uint128_t *)&v4) = g_625610;
    *((uint128_t *)&v5) = g_625620;
    *((uint128_t *)&v6) = g_625630;
    *((uint128_t *)&v7) = g_625640;
    *((uint128_t *)&v8) = g_625650;
    while (true)
    {
        v20 = sigismember(0x6255e0, v14);
        if ((unsigned int)v20 != 0)
        {
            *((int *)&v0) = (v19 == 20? &g_405560 : 4212784);
            v20 = sigaction();
        }
        if (v12 == 4298032)
        {
            break;
        }
        v19 = *(v12);
        v12 = &v12[1];
    }
    return v20;
}

int sub_404860()
{
    unsigned long long v1;  // rcx
    unsigned long long *v3;  // rsi
    unsigned long long *v4;  // rdi
    unsigned long long v5;  // r10
    unsigned long long v6;  // rcx
    unsigned long long v7;  // cc_dep1
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // r8
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rcx
    unsigned long long v12;  // r13
    unsigned long long v13;  // r13
    unsigned long long v14;  // r12
    unsigned long long v15;  // r12
    unsigned long long v16;  // rcx
    unsigned long long v17;  // r14
    unsigned long long v18;  // rax
    char *v19;  // r9

    v8 = *(v3);
    v5 = 0;
    v19 = *(v4);
    while (true)
    {
        v6 = v8[0];
        v7 = v8[0];
        if (v8[0] != 61 || v8[0] != 61)
        {
            if (v7 > 61)
            {
                if (v6 == 92)
                {
                    v10 = v8[1];
                    v8 = &v8[2];
                    switch (v10)
                    {
                    case 0:
                        v18 = 0;
                    case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55:
                        v14 = *(v8);
                        v10 = (unsigned int)v10 - 48;
                        if (((unsigned long long)*(v8) - 48 & 255) <= 7)
                        {
                            do
                            {
                                v8 = &v8[1];
                                v10 = v14 + v10 * 8 - 48;
                                v14 = *(v8);
                            }
                            while ((v14 - 48 & 255) <= 7);
                        }
                    case 63:
                        v10 = 127;
                        break;
                    case 88: case 120:
                        v13 = 0;
                        while (true)
                        {
                            v15 = *(v8);
                            v16 = v15 - 48;
                            if ((v15 - 48 & 255) > 54)
                            {
                                break;
                            }
                            while (true)
                            {
                                v17 = 1 << (v16 & 63);
                                if (((unsigned int)(1 << (v16 & 63)) & 0x7e0000) != 0)
                                {
                                    v8 = &v8[1];
                                    v13 = v15 + v13 * 16 - 55;
                                }
                                else if ((0x7e000000000000 & v17) == 0)
                                {
                                    if (((unsigned short)v17 & 1023) == 0)
                                    {
                                        break;
                                    }
                                    v8 = &v8[1];
                                    v13 = v15 + v13 * 16 - 48;
                                    v15 = *(v8);
                                    v16 = v15 - 48;
                                }
                                else
                                {
                                    v8 = &v8[1];
                                    v13 = v15 + v13 * 16 - 87;
                                }
                            }
                            if (((0x7e000000000000 & v17) == 0 || (v15 - 48 & 255) > 54) && ((0x7e000000000000 & v17) == 0 || ((unsigned short)v17 & 1023) != 0) && (((unsigned int)(1 << (v16 & 63)) & 0x7e0000) == 0 || (v15 - 48 & 255) > 54) && (((unsigned int)(1 << (v16 & 63)) & 0x7e0000) == 0 || ((unsigned short)v17 & 1023) != 0))
                            {
                                *((unsigned long long *)&v19) = v13;
                            }
                        }
                        *((unsigned long long *)&v19) = v13;
                    case 95:
                        v10 = 32;
                        break;
                    case 97:
                        v10 = 7;
                        break;
                    case 98:
                        v10 = 8;
                        break;
                    case 101:
                        v10 = 27;
                        break;
                    case 102:
                        v10 = 12;
                        break;
                    case 110:
                        v10 = 10;
                        break;
                    case 114:
                        v10 = 13;
                        break;
                    case 116:
                        v10 = 9;
                        break;
                    case 118:
                        v10 = 11;
                        break;
                    }
                }
                else if (v6 == 94)
                {
                    if (((unsigned long long)v8[1] - 64 & 255) <= 62)
                    {
                        v8 = &v8[2];
                        v10 = (unsigned int)v11 & 31;
                    }
                    else if (v11 != 63)
                    {
                        v8 = v12;
                    }
                    else
                    {
                        *(v19) = 127;
                    }
                }
                if (v6 == 94)
                {
                    v11 = v8[1];
                    v12 = &v8[1];
                }
            }
            else if (v6 == 58 || v6 == 0)
            {
                v18 = 1;
            }
        }
        if ((char)v9 == 0 || v7 <= 61 && v6 != 58 && v6 != 0 && v8[0] != 61 || v7 <= 61 && v6 != 58 && v6 != 0 && v8[0] != 61 || v6 != 92 && v7 > 61 && v8[0] != 61 && v6 != 94 || v6 != 92 && v7 > 61 && v8[0] != 61 && v6 != 94)
        {
            v8 = &v8[1];
            *((unsigned long long *)&v19) = v6;
            v5 += 1;
            v19 = &v19[1];
            v6 = v8[0];
            v7 = v8[0];
        }
        if ((char)v9 != 0 && (v8[0] == 61 || v8[0] == 61) && (v7 <= 61 || v8[0] == 61 || v6 != 92) && (v7 <= 61 || v8[0] == 61 || v6 != 94) && (v8[0] == 61 || v7 > 61 || v6 != 58) && (v8[0] == 61 || v7 > 61 || v6 != 0))
        {
            v18 = v9;
        }
        if (unknown)
        {
            *((unsigned long long *)&v19) = v10;
        }
    }
    *(v4) = v19;
    *(v3) = v8;
    *((unsigned long long *)v1) = v5;
    return v18;
}

int sub_412ce0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_412c10();
}

// int sub_411ef0()

typedef struct struct_0 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned long long field_68;
    char padding_70[56];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned int field_68;
    char padding_6c[60];
    unsigned int field_a8;
} struct_1;

int sub_409c00()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    struct v3;  // rsi
    struct v4;  // r8
    char v5;  // al
    unsigned int v6;  // ecx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v2 = v1->field_a8;
    v4 = v3;
    v5 = v1->field_a8 == 9;
    v7 = v6 | rax;
    if (v3->field_a8 == 3 || v7 == 0 || v3->field_a8 == 9)
    {
        if (v3->field_60 <= v1->field_60 && (v3->field_a8 != 3 || v7 != 0) && (v7 != 0 || v3->field_a8 != 9))
        {
            if (v3->field_60 >= v1->field_60)
            {
                v8 = (unsigned int)v1->field_68 - v4->field_68;
            }
            else
            {
                return 1;
            }
        }
        if ((v3->field_60 <= v1->field_60 || v7 == 0) && (v7 == 0 || v3->field_60 >= v1->field_60) && (v7 == 0 || (unsigned int)v1->field_68 != v4->field_68) && (v3->field_a8 == 3 || v3->field_60 <= v1->field_60 || v3->field_a8 == 9) && (v3->field_a8 == 3 || v3->field_a8 == 9 || v3->field_60 >= v1->field_60) && (v3->field_a8 == 3 || v3->field_a8 == 9 || (unsigned int)v1->field_68 != v4->field_68))
        {
            return v8;
        }
    }
    if (v7 == 0)
    {
        v8 = 1;
    }
    if ((v3->field_a8 != 3 || v3->field_60 > v1->field_60) && (v3->field_a8 != 3 || v7 != 0) && (v3->field_60 > v1->field_60 || v7 != 0) && (v3->field_60 > v1->field_60 || v3->field_a8 != 9) && (v7 != 0 || v3->field_a8 != 9))
    {
        return -18446744069414584321;
    }
}

int sub_40c1f0()
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
                    v4 = (0 | v2) % v7 >> 64;
                    v5 = (0 | v2) % v7 >> 64;
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

int sub_411be0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_412b80();
}

// int sub_412100()

int sub_40c150()
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

typedef struct struct_1 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned long long field_78;
    char padding_80[40];
    unsigned int field_a8;
} struct_1;

typedef struct struct_0 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned int field_78;
    char padding_7c[44];
    unsigned int field_a8;
} struct_0;

int sub_409b80()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    struct v3;  // rsi
    struct v4;  // r8
    char v5;  // al
    unsigned int v6;  // ecx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v2 = v1->field_a8;
    v4 = v3;
    v5 = v1->field_a8 == 9;
    v7 = v6 | rax;
    if (v3->field_a8 == 3 || v7 == 0 || v3->field_a8 == 9)
    {
        if (v3->field_70 <= v1->field_70 && (v3->field_a8 != 3 || v7 != 0) && (v7 != 0 || v3->field_a8 != 9))
        {
            if (v3->field_70 >= v1->field_70)
            {
                v8 = (unsigned int)v1->field_78 - v4->field_78;
            }
            else
            {
                return 1;
            }
        }
        if ((v7 == 0 || v3->field_70 <= v1->field_70) && (v7 == 0 || v3->field_70 >= v1->field_70) && (v7 == 0 || (unsigned int)v1->field_78 != v4->field_78) && (v3->field_a8 == 3 || v3->field_a8 == 9 || v3->field_70 <= v1->field_70) && (v3->field_a8 == 3 || v3->field_a8 == 9 || v3->field_70 >= v1->field_70) && (v3->field_a8 == 3 || v3->field_a8 == 9 || (unsigned int)v1->field_78 != v4->field_78))
        {
            return v8;
        }
    }
    if (v7 == 0)
    {
        v8 = 1;
    }
    if ((v3->field_a8 != 3 || v7 != 0) && (v3->field_a8 != 3 || v3->field_70 > v1->field_70) && (v7 != 0 || v3->field_a8 != 9) && (v7 != 0 || v3->field_70 > v1->field_70) && (v3->field_a8 != 9 || v3->field_70 > v1->field_70))
    {
        return -18446744069414584321;
    }
}

extern char g_415ac0;
extern int512_t g_415ac9;
extern int512_t g_415ae4;
extern int512_t g_415b00;
extern int512_t g_415ba6;

int sub_4159a0()
{
    void tmp_8;  // tmp #8
    unsigned int v0;  // [bp-0x5c]
    char v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // rdi
    unsigned long long v7;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rax
    unsigned long long v12;  // r13
    unsigned long long v13;  // rax
    char *v14;  // rsi
    unsigned long long v16;  // rax
    unsigned long v17;  // rax
    unsigned long v18;  // rdi
    unsigned int v21;  // r15d
    unsigned long long v22;  // rax
    void *v23;  // r14
    unsigned long long v25;  // rax

    v2 = v6;
    v7 = __ctype_get_mb_cur_max();
    if (v7 != 1)
    {
        v3 = 0;
        v9 = (unsigned long long)mbsrtowcs(0x0, (unsigned int)&v2, 0x0, (unsigned int)&v3) + 1;
        if (v9 + 1 != 0)
        {
            v10 = mbsinit((unsigned int)&v3);
            if (v10 != 0)
            {
                v12 = (unsigned long long)mbsrtowcs(0x0, (unsigned int)&v1, 0x0, (unsigned int)&v3) + 1;
                if (v12 + 1 != 0)
                {
                    v13 = mbsinit((unsigned int)&v3);
                    if (v13 != 0)
                    {
                        v17 = v9 + v12;
                        if (!(INVALID_IR) && v17 <= 4611686018427387903)
                        {
                            v18 = v17 * 4;
                            if (v17 <= 1999)
                            {
                                tmp_8 = stack_base + -104 - (v18 + 23 & -0x10);
                                v21 = (stack_base + -104 - (v18 + 23 & -0x10) + 15 & -0x10) + v9 * 4;
                                v4 = &g_415ac0;
                                mbsrtowcs(stack_base + -104 - (v18 + 23 & -0x10) + 15 & -0x10, (unsigned int)&v2, v9, (unsigned int)&v3);
                                rsp = tmp_8 - 8 - 8;
                                *((long long **)(tmp_8 - 8 - 8)) = &g_415ac9;
                                v22 = mbsinit((unsigned int)&v3);
                                if (v22 != 0)
                                {
                                    *((long long **)(tmp_8 - 8 - 8 - 8)) = &g_415ae4;
                                    mbsrtowcs(v21, (unsigned int)&v1, v12, (unsigned int)&v3);
                                    *((long long **)(tmp_8 - 8 - 8 - 8 - 8)) = &g_415b00;
                                    v16 = sub_413e80();
                                }
                            }
                            else
                            {
                                v23 = malloc(v18);
                                if (v23 != 0)
                                {
                                    mbsrtowcs((unsigned int)v23, (unsigned int)&v2, v9, (unsigned int)&v3);
                                    rsp = stack_base + -112;
                                    v25 = mbsinit((unsigned int)&v3);
                                    if (v25 != 0)
                                    {
                                        mbsrtowcs((unsigned int)(v23 + v9 * 4), (unsigned int)&v1, v12, (unsigned int)&v3);
                                        v0 = sub_413e80();
                                        free(v23);
                                        v16 = v0;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
    }
    if (v7 == 1 || v9 + 1 == 0 || v12 + 1 == 0 && v10 != 0)
    {
        strlen(v14);
        v16 = sub_414eb0();
    }
    if (INVALID_IR && v7 != 1 && v13 != 0 && v10 != 0 && v12 + 1 != 0 && v9 + 1 != 0 || !(INVALID_IR) && v7 != 1 && v13 != 0 && v17 > 4611686018427387903 && v10 != 0 && v12 + 1 != 0 && v9 + 1 != 0 || v23 == 0 && v17 <= 4611686018427387903 && !(INVALID_IR) && v7 != 1 && v13 != 0 && v10 != 0 && v12 + 1 != 0 && v17 > 1999 && v9 + 1 != 0)
    {
        *(__errno_location()) = 12;
        v16 = -18446744069414584321;
    }
    if (v17 <= 4611686018427387903 && !(INVALID_IR) && v23 != 0 && v7 != 1 && v13 != 0 && v10 != 0 && v12 + 1 != 0 && v17 > 1999 && v9 + 1 != 0 && v25 == 0 || v17 <= 4611686018427387903 && v17 <= 1999 && !(INVALID_IR) && v7 != 1 && v13 != 0 && v10 != 0 && v12 + 1 != 0 && v9 + 1 != 0 && v22 == 0)
    {
        rsp = rsp - 8;
        *((long long **)rsp) = &g_415ba6;
        __assert_fail(); /* do not return */
    }
    if (unknown)
    {
        return v16;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int _obstack_memory_used()
{
    struct v1;  // rdi
    unsigned long long v2[2];  // rdx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx

    v2 = v1->field_8;
    v3 = 0;
    if (v1->field_8 != 0)
    {
        do
        {
            v4 = (unsigned long long [2])(*(v2) + -0x1 * v2);
            v2 = v2[1];
            v3 += v4;
        }
        while (v2 != 0);
        return v3;
    }
    return 0;
}

extern int512_t g_624420;
extern int512_t g_624428;

int sub_404ae0()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdi
    unsigned long long v3[804998];  // rdi
    unsigned long long v4;  // rdx
    char v5;  // cc_dep1
    char v6;  // cc_dep2
    unsigned long v7;  // d
    char *v8;  // rdi
    char *v9;  // rsi
    unsigned long long v10;  // rcx

    v1 = 0;
    v3 = v2 * 16;
    v4 = *((long long *)(v3 + &g_624420));
    if (*((long long *)(v3 + &g_624420)) != 0)
    {
        v9 = *((long long *)(v3 + &g_624428));
        if (v4 != 1)
        {
            v1 = 1;
        }
        else
        {
            return 0;
        }
        if (v4 == 2)
        {
            v8 = "00";
            v10 = 2;
            while (v10 != 0)
            {
                v10 -= 1;
                v5 = *(v9);
                v6 = *(v8);
                v8 = &v8[v7];
                v9 = &v9[v7];
                break;
            }
            return 1;
        }
    }
    if (*((long long *)(v3 + &g_624420)) == 0 || v4 != 1 && v4 != 2)
    {
        return v1;
    }
}

// int sub_4120e0()

int sub_4173c0()
{
    unsigned int *v1;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // r13d

    v1 = __errno_location();
    v2 = *(v1);
    if ((char)sub_417340() == 0)
    {
        v2 = *(v1);
    }
    sub_417390();
    *((unsigned long *)&v1) = v2;
    return stack_base + 0;
}

int sub_413283()
{
    abort(); /* do not return */
}

int sub_412c10()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    if (rbp == 0)
    {
        if (v0 >= v3 && v0 <= v5)
        {
            return v0;
        }
        if (v0 < v3 || v0 > v5)
        {
            v6 = __errno_location();
            *(v6) = (0 - (unsigned int)(char)(v0 < 0x40000000) & -41) + 75;
        }
    }
    else
    {
        rbp = sub_4132b0();
        v6 = __errno_location();
        if (!(v4 != 1))
        {
            *(v6) = 75;
        }
        else if (v4 == 3)
        {
            *(v6) = 0;
        }
    }
    if (v0 < v3 || v0 > v5 || rbp != 0)
    {
        sub_412290();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: %s");
    }
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[88];
    unsigned int field_a8;
} struct_0;

int sub_408180()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if ((v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0) && v1->field_48 <= v6->field_48 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0) && v1->field_48 != v6->field_48)
    {
        return (unsigned long long)(char)(v1->field_48 < v6->field_48);
    }
    if (v5 == 0 && (v6->field_a8 == 3 || v6->field_a8 == 9))
    {
        return 1;
    }
    if ((v6->field_a8 != 3 || v1->field_48 > v6->field_48) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v1->field_48 > v6->field_48) && (v6->field_a8 != 9 || v5 != 0) && (v1->field_48 > v6->field_48 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

extern struct g_624618;
extern unsigned long long g_624620;
extern unsigned long long g_624628;
extern unsigned int g_624630;
extern unsigned long long g_6257e0;

int sub_411e50()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_624630;
    if (g_624630 > 1)
    {
        v2 = &g_624618[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_624618[(unsigned long long)(g_624630 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_624618->field_8 != 6445024)
    {
        v1 = free(g_624618->field_8);
        g_624620 = 0x100;
        g_624628 = &g_6257e0;
    }
    if (g_624618 != 6440480)
    {
        v1 = free(g_624618);
        g_624618 = &g_624620;
    }
    g_624630 = 1;
    return v1;
}

int sub_412d10()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if (v2 == 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_412bd0(); /* do not return */
        }
    }
    if (v2 != 0 || *(v3) != 12)
    {
        v2 = (unsigned int)sub_415be0();
        return v5;
    }
}

int sub_4129e0()
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
            sub_412bd0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    char field_50;
} struct_0;

int _obstack_begin_1()
{
    struct v1;  // rdi
    unsigned long v2;  // rcx
    unsigned long v3;  // r8
    unsigned long v4;  // r9

    v1->field_50 = v1->field_50 | 1;
    v1->field_38 = v2;
    v1->field_40 = v3;
    v1->field_48 = v4;
}

extern unsigned long long g_6255b8;
extern unsigned long long stdout[7];

int sub_405460()
{
    unsigned long long v1;  // rdx
    char *v3;  // rdi
    char *v6;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // rbx
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rax

    if (v3 != 0)
    {
        v7 = (unsigned int)((unsigned int)(v1 - (unsigned int)sub_40eb70()) < 0? 0 : (unsigned int)(v1 - (unsigned int)sub_40eb70()));
        fputs_unlocked(v3, stdout);
        v8 = v7 + strlen(v3);
        do
        {
            v6 = stdout[5];
            if (stdout[5] < stdout[6])
            {
                stdout[5] = stdout[5] + 1;
                *(v6) = 32;
            }
            else
            {
                __overflow();
            }
            v7 -= 1;
        }
        while (v7 != -1);
    }
    else
    {
        __printf_chk(0x1, "%*lu ");
        v8 = v1;
    }
    v9 = v8 + g_6255b8 + 1;
    g_6255b8 = v8 + g_6255b8 + 1;
    return v9;
}

int sub_412bb0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

typedef struct struct_0 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned int field_88;
} struct_0;

int sub_409e60()
{
    struct v1;  // rsi
    unsigned long long v2[18];  // rdi
    unsigned long long v3;  // rax

    if (v1->field_80 <= v2[16])
    {
        if (v1->field_80 >= v2[16])
        {
            v3 = (unsigned int)v2[17] - v1->field_88;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_80 < v2[16] || (unsigned int)v2[17] != v1->field_88)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

int sub_40b900()
{
    return 0;
}

extern int512_t g_6243e8;

// int sub_418780()

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

int sub_405630()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        return -18446744069414584321;
    }
    if ((v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0) && v5 == 0 && (v6->field_a8 == 3 || v6->field_a8 == 9))
    {
        return 1;
    }
}

typedef struct struct_0 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned int field_88;
    char padding_8c[28];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned long long field_88;
    char padding_90[24];
    unsigned int field_a8;
} struct_1;

int sub_409d90()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi
    unsigned long long v7;  // rax

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0)
    {
        if (v1->field_80 <= v6->field_80 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0))
        {
            if (v1->field_80 >= v6->field_80)
            {
                v7 = (unsigned int)v6->field_88 - v1->field_88;
            }
            else
            {
                return 1;
            }
        }
        if ((v1->field_80 <= v6->field_80 || v5 == 0) && (v5 == 0 || (unsigned int)v6->field_88 != v1->field_88) && (v5 == 0 || v1->field_80 >= v6->field_80) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_80 <= v6->field_80) && (v6->field_a8 == 3 || v6->field_a8 == 9 || (unsigned int)v6->field_88 != v1->field_88) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_80 >= v6->field_80))
        {
            return v7;
        }
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if ((v6->field_a8 != 3 || v1->field_80 > v6->field_80) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v1->field_80 > v6->field_80) && (v6->field_a8 != 9 || v5 != 0) && (v1->field_80 > v6->field_80 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

int sub_40d440()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // rsi

    return (0 | (unsigned int)sub_417960() ^ v0) % v1 >> 64;
}

int sub_417940()
{
    unsigned long long v1;  // rax

    v1 = sub_40b810();
    if (v1 != 0)
    {
        return v1;
    }
    sub_412bd0(); /* do not return */
}

int sub_4186f0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    tzset();
}

int sub_404e20()
{
    char v0;  // [bp-0x1a]
    char *v3;  // rdi
    unsigned long long v4;  // rbp
    char v6;  // al

    if (*(v3) != v0)
    {
        return 1;
    }
    v4 = sub_411cd0();
    v6 = strlen(v3) != v4;
    return rax;
}

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[8];
    char field_50;
} struct_0;

int _obstack_begin()
{
    struct v1;  // rdi
    unsigned long v2;  // rcx
    unsigned long v3;  // r8

    v1->field_50 = v1->field_50 & 254;
    v1->field_38 = v2;
    v1->field_40 = v3;
}

int sub_40b910()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x8]
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
        v5[0] = (unsigned int)sub_412bb0();
        *((unsigned long long [2])&v5[1]) = v10[1];
        *((unsigned long long [2])&v5[2]) = *(v10);
        v13 = sub_40d220();
        if (!(v13 != 0))
        {
            sub_412bd0(); /* do not return */
        }
        else if (v5 != v13)
        {
            v5 = (unsigned long long)(unsigned int)sub_412980();
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

extern int512_t g_41d810;

int sub_40c400()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4315152)
    {
        v3 = v2[1];
        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
        {
            v4 = 0;
            v5 = v2[0];
            if (((char)(INVALID_IR) & 1) == 0)
            {
                v6 = (unsigned long long)(unsigned int)xmm1 + 4568451461323476173;
            }
        }
        if (unknown)
        {
            *(v1) = &g_41d810;
            return 0;
        }
    }
    if (unknown)
    {
        return 1;
    }
}

int sub_40afb0()
{
    unsigned long long v1;  // rax

    v1 = sub_40acf0();
    if (INVALID_IR)
    {
        sub_40ae10();
        sub_40ae90();
        r9();
        v1 = -1;
    }
    return v1;
}

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[144];
    unsigned int field_a8;
} struct_2;

extern unsigned long long *g_625760;
extern unsigned long long g_625770;
extern unsigned long long g_625788;

int sub_405140()
{
    void tmp_19;  // tmp #19
    unsigned long v1;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // rax
    struct v3;  // rbp
    char *v4;  // r14
    char v5[2];  // rax
    unsigned long long v6;  // rdx
    char v7;  // dl
    unsigned long long v9;  // rbx
    unsigned long long v10;  // rdx

    if (v1 != 0 && g_625788 != 0)
    {
        v2 = sub_404d90();
    }
    v9 = g_625770;
    while (true)
    {
        v9 -= 1;
        if (v9 == -1)
        {
            break;
        }
        while (true)
        {
            v3 = g_625760[v9];
            v2 = (unsigned int)*((int *)(g_625760[v9] + 168));
            if ((unsigned int)v2 != 9 && *((int *)(g_625760[v9] + 168)) != 3)
            {
                break;
            }
            v4 = v3->field_0;
            if (v1 != 0)
            {
                v5 = sub_40b870();
                if (v5[0] == 46)
                {
                    v6 = 0;
                    v7 = v5[1] == 46;
                    v2 = v5[1 + rdx];
                    if (v2 == 47 || v2 == 0)
                    {
                        break;
                    }
                }
                if (v2 != 47 && *(v4) != 47)
                {
                    sub_404d90();
                    v2 = free((unsigned long long)(unsigned int)sub_40bb70());
                }
            }
            if (v1 == 0 || *(v4) == 47 && v2 != 47)
            {
                v2 = sub_404d90();
            }
            if (v3->field_a8 != 9)
            {
                break;
            }
            v9 -= 1;
            free(v3->field_0);
            free(v3->field_8);
            v2 = free(v3->field_10);
        }
        if (v9 == -1 && v3->field_a8 == 9)
        {
            v10 = g_625770;
        }
    }
    v10 = g_625770;
    v2 = g_625760;
    v10 = 0;
    do
    {
        tmp_19 = *(v2)->field_a8;
        g_625760[v10] = *(v2);
        v2 = &v2[1];
        v10 += (char)((unsigned int)tmp_19 != 9);
    }
    while (&g_625760[g_625770] != v2);
    g_625770 = v10;
    return v2;
}

int sub_4178e0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_417f10();
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

int sub_405d40()
{
    sub_405cd0();
}

extern unsigned int g_41b064;
extern char g_6256ed;

int sub_408410()
{
    char v0;  // [bp-0x38]
    void tmp_12;  // tmp #12
    char v1;  // [bp-0x34]
    unsigned long long v3;  // rdi
    unsigned int *v5;  // rax
    unsigned long v6;  // rdx
    unsigned long v7;  // rdx
    unsigned long long v8;  // rax

    if (g_6256ed == 0)
    {
        v3 = (unsigned int)sub_40e160();
        if (v3 != 0)
        {
            return (sub_40eb70() < 0? 0 : (unsigned int)rax);
        }
    }
    if (v3 == 0 || g_6256ed != 0)
    {
        __sprintf_chk((unsigned int)&v0, 0x1, 0x15, 0x41b064);
        v5 = &v0;
        do
        {
            tmp_12 = (unsigned int)*((int *)&v0);
            v5 = &v1;
        }
        while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
        v7 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(v6 >> 16) : (unsigned int)v6);
        v8 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v5 + 2) : v5) + -1 * ((v7 + v7 <= v7? 1 : 0) & 1) + -0x1 * &v0;
        return v8;
    }
}

typedef struct struct_0 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned int field_68;
} struct_0;

int sub_4099f0()
{
    struct v1;  // rdi
    unsigned long long v2[14];  // rsi
    unsigned long long v3;  // rax

    if (v1->field_60 <= v2[12])
    {
        if (v1->field_60 >= v2[12])
        {
            v3 = (unsigned int)v2[13] - v1->field_68;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_60 < v2[12] || (unsigned int)v2[13] != v1->field_68)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

typedef struct struct_1 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned long long field_88;
    char padding_90[24];
    unsigned int field_a8;
} struct_1;

typedef struct struct_0 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned int field_88;
    char padding_8c[28];
    unsigned int field_a8;
} struct_0;

int sub_40a280()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    struct v3;  // rsi
    struct v4;  // r8
    char v5;  // al
    unsigned int v6;  // ecx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v2 = v1->field_a8;
    v4 = v3;
    v5 = v1->field_a8 == 9;
    v7 = v6 | rax;
    if (v3->field_a8 == 3 || v7 == 0 || v3->field_a8 == 9)
    {
        if (v3->field_80 <= v1->field_80 && (v3->field_a8 != 3 || v7 != 0) && (v7 != 0 || v3->field_a8 != 9))
        {
            if (v3->field_80 >= v1->field_80)
            {
                v8 = (unsigned int)v1->field_88 - v4->field_88;
            }
            else
            {
                return 1;
            }
        }
        if ((v3->field_80 <= v1->field_80 || v7 == 0) && (v7 == 0 || v3->field_80 >= v1->field_80) && (v7 == 0 || (unsigned int)v1->field_88 != v4->field_88) && (v3->field_a8 == 3 || v3->field_80 <= v1->field_80 || v3->field_a8 == 9) && (v3->field_a8 == 3 || v3->field_a8 == 9 || v3->field_80 >= v1->field_80) && (v3->field_a8 == 3 || v3->field_a8 == 9 || (unsigned int)v1->field_88 != v4->field_88))
        {
            return v8;
        }
    }
    if (v7 == 0)
    {
        v8 = 1;
    }
    if ((v3->field_a8 != 3 || v3->field_80 > v1->field_80) && (v3->field_a8 != 3 || v7 != 0) && (v3->field_80 > v1->field_80 || v7 != 0) && (v3->field_80 > v1->field_80 || v3->field_a8 != 9) && (v7 != 0 || v3->field_a8 != 9))
    {
        return -18446744069414584321;
    }
}

extern unsigned int g_625918;

int sub_4137f0()
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v2;  // rdi
    char v3[4];  // rbx
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v3 = v2;
    while (true)
    {
        while (true)
        {
            if (v4 != 91)
            {
                v5 = v4 - 33;
                if ((v4 - 33 & 255) <= 31)
                {
                    v0 = 3221227009;
                    if (v3[2] == 40 && ((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) != 0)
                    {
                        v3 = (unsigned long long)(unsigned int)sub_4137f0();
                    }
                    if (v4 == 41 && (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || v3[2] != 40))
                    {
                        v8 = &v3[2];
                        return v8;
                    }
                }
                if (v4 != 41 || v3[2] != 40)
                {
                    v3 = &v3[1];
                    v4 = v3[1];
                    if ((char)v4 == 0)
                    {
                        break;
                    }
                }
            }
            else
            {
                if (g_625918 == 0)
                {
                    g_625918 = 0 - (unsigned int)(char)(getenv("POSIXLY_CORRECT") < 1) | 1;
                }
                v6 = v3[2];
                if (v3[2] != 33 && (g_625918 >= 0 || v6 != 94))
                {
                    v3 = &v3[2];
                }
                if (v3[2] == 33 || g_625918 < 0 && v6 == 94)
                {
                    v6 = v3[3];
                    v3 = &v3[3];
                }
                if (v6 == 93)
                {
                    v6 = v3[1];
                    v3 = &v3[1];
                }
                while (true)
                {
                    v7 = &v3[1];
                    if (v6 == 93)
                    {
                        break;
                    }
                    if (v6 != 0)
                    {
                        v6 = v3[0];
                        v3 = v7;
                    }
                }
                if (true)
                {
                    v4 = v3[1];
                    if (v3[1] == 0)
                    {
                        break;
                    }
                }
                else if (v6 == 0)
                {
                    return stack_base + 0;
                }
            }
        }
        if (v4 != 91 && (v4 != 41 || (v4 - 33 & 255) > 31) && (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || v3[2] != 40 || (v4 - 33 & 255) > 31))
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

extern unsigned long long __progname_full;
extern unsigned long long g_6257c0;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_410670()
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
        g_6257c0 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[88];
    unsigned int field_a8;
} struct_0;

int sub_408100()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if ((v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0) && v1->field_48 <= v6->field_48 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0) && v1->field_48 != v6->field_48)
    {
        return (unsigned long long)(char)(v1->field_48 < v6->field_48);
    }
    if (v5 == 0 && (v6->field_a8 == 3 || v6->field_a8 == 9))
    {
        return 1;
    }
    if ((v6->field_a8 != 3 || v1->field_48 > v6->field_48) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v1->field_48 > v6->field_48) && (v6->field_a8 != 9 || v5 != 0) && (v1->field_48 > v6->field_48 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

// int sub_411f20()

int sub_40ee30()
{
    unsigned long v1;  // rdx
    char *v2;  // rbx
    char *v4;  // rdi
    char *v5;  // rsi

    if (v1 != 0)
    {
        v2 = v1 - 1;
        do
        {
            *((char *)(v4 + v2)) = *((int *)(*((long long *)(unsigned long long)__ctype_toupper_loc()) + (unsigned long long)(char)*((char *)(v5 + v2)) * 4));
            v2 = &v2[-1];
        }
        while (v2 != -1);
    }
    return v4;
}

int sub_4181f0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x30]
    unsigned long long *v2;  // rdx
    unsigned long long v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rsi
    unsigned long long *v7;  // rbx
    unsigned long long *v8;  // rsi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rbp
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rbx
    unsigned long long *v13;  // rsi
    unsigned long long v14;  // rdi
    unsigned long long v15;  // rax
    unsigned long long v16;  // r14
    unsigned long long v17;  // rdi

    v5 = v4;
    v7 = v6;
    v8 = v2;
    v9 = &v0;
    v0 = *(v2);
    v15 = v5();
    if (v15 == 0)
    {
        v16 = *(v7);
        v10 = 0;
        if (*(v7) != 0)
        {
            while (true)
            {
                v11 = (v16 >> 1) + (v10 >> 1);
                v12 = ((unsigned int)(v10 | v16) & 1) + (v16 >> 1) + (v10 >> 1);
                if (v16 != v12 && v10 != ((unsigned int)(v10 | v16) & 1) + (v16 >> 1) + (v10 >> 1))
                {
                    break;
                }
                v0 = v12;
                v13 = v2;
                v14 = &v0;
                v15 = r12();
                if (v15 == 0)
                {
                    v16 = v12;
                    v12 = v10;
                }
                v10 = v12;
            }
            if (v15 == 0 && v10 != 0)
            {
                v0 = v10;
                v17 = &v0;
                return (long long)(stack_base)[-24]();
            }
        }
    }
    if (*(v7) == 0 || v10 == 0 || v15 != 0 || v15 != 0)
    {
        return v15;
    }
}

int sub_410810()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0xd8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0xc0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x98]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x90]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // [bp-0x88]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // [bp-0x80]
    unsigned long long v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long v15;  // [bp-0x68]
    unsigned int v16;  // [bp-0x60]
    char v17;  // [bp-0x5c]
    char v18;  // [bp-0x5b]
    unsigned long long v19;  // [bp-0x5a]
    char v20;  // [bp-0x59]
    unsigned long long v21;  // [bp-0x58]
    unsigned long long v22;  // [bp-0x50]
    unsigned long long v23;  // [bp-0x40]
    unsigned int *v24;  // [bp+0x8]
    unsigned long long v25;  // [bp+0x10]
    void *v26;  // [bp+0x18]
    unsigned long long v27;  // rdi
    unsigned long long v28;  // r15
    unsigned long v29;  // r8
    unsigned long long v30;  // rcx
    unsigned long v31;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v32;  // r10
    unsigned long long v33;  // rbp
    unsigned long long v34;  // r13
    unsigned long long v35;  // r13
    unsigned long long v36;  // r8
    unsigned long long v37;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v38;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v39;  // rbp
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    char v42;  // al
    unsigned long v43;  // rdx
    unsigned long long v44;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v45;  // rax
    unsigned long long v46;  // rcx
    unsigned long long v47;  // r13
    unsigned long long v48;  // r13
    unsigned long long v49;  // r13
    char v50;  // r13b
    unsigned long long v51;  // r13
    unsigned long long v52;  // rdx
    unsigned long long v53;  // rbx
    unsigned long long v54;  // r13
    unsigned long long v55;  // r15
    unsigned long long v56;  // rbp
    unsigned long long v57;  // r14
    char *v58;  // rax
    unsigned long long v59;  // rcx
    unsigned long long v61;  // r13
    unsigned long v62;  // r13
    unsigned long long v63;  // rcx
    char v64;  // al
    char v65;  // al
    unsigned int v66;  // eax
    char v67;  // al
    unsigned int v69;  // eax
    char v70;  // al
    unsigned long v71;  // rdx
    unsigned long long v72;  // rax
    char v73;  // al
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v76;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v77;  // r13
    unsigned long long v78;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v79;  // r12
    unsigned int v80;  // r13d
    unsigned long long v81;  // r11
    char v82;  // dl
    /*INVALID_EQUAL_UNDEFINED*/
undefined v83;  // rax
    unsigned long long v84;  // cc_dep1
    /*INVALID_EQUAL_UNDEFINED*/
undefined v85;  // dl
    unsigned long long v86;  // rax
    unsigned long long v87;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v88;  // rdx
    unsigned long long v89;  // rdx
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax

    v28 = v27;
    v78 = v76;
    v77 = v29;
    v7 = v88;
    v4 = v30;
    v16 = v31;
    v15 = __ctype_get_mb_cur_max();
    v17 = ((unsigned int)v31 & 2) != 0;
    switch ((unsigned int)v29)
    {
    case 0:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 0;
        v8 = 0;
        v13 = 0;
    case 1:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v77 = 2;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 0;
        v8 = 1;
        v13 = "'";
    case 2:
        if (((char)v31 & 2) == 0)
        {
            v4 = 0;
            if (v76 == 0)
            {
                v6 = 1;
                v32 = 0;
                v75 = 1;
                v77 = 2;
                v14 = 0;
                v18 = 0;
                v17 = 0;
                v8 = 1;
                v13 = "'";
            }
            else
            {
                v83 = 0;
                v6 = 1;
                v14 = 0;
            }
        }
        else
        {
            v6 = 1;
            v32 = 0;
            v75 = 0;
            v18 = 0;
            v14 = 0;
            v17 = 1;
            v4 = 0;
            v8 = 1;
            v13 = "'";
        }
    case 3:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v77 = 2;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "'";
    case 4:
        if (((char)v31 & 2) == 0)
        {
            v4 = 1;
        }
    case 5:
        if (((char)v31 & 2) == 0)
        {
            if (v76 != 0)
            {
                *((char *)v27) = 34;
                v32 = 0;
                v6 = 1;
                v18 = 0;
                v14 = 0;
            }
            else
            {
                v14 = 0;
                v32 = 0;
                v6 = 1;
                v18 = 0;
            }
            v17 = 0;
            v75 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
        else
        {
            v6 = 1;
            v32 = 0;
            v75 = 0;
            v18 = 0;
            v14 = 0;
            v17 = 1;
            v4 = 1;
            v8 = 1;
            v13 = "\"";
        }
    case 6:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v77 = 5;
        v18 = 0;
        v14 = 0;
        v17 = 1;
        v4 = 1;
        v8 = 1;
        v13 = "\"";
    case 7:
        v6 = 1;
        v32 = 0;
        v75 = 0;
        v18 = 0;
        v14 = 0;
        v17 = 0;
        v4 = 1;
        v8 = 0;
        v13 = 0;
    case 8: case 9: case 10:
        if (v29 != 10)
        {
            v4 = v4;
            v25 = (unsigned int)sub_410710();
            v26 = (unsigned long long)(unsigned int)sub_410710();
        }
        v75 = 0;
        if (((char)v31 & 2) == 0)
        {
            v77 = (char)*((char *)v25);
            if (*((char *)v25) != 0)
            {
                do
                {
                    if (v76 > v75)
                    {
                        *((unsigned long long *)(v27 + v75)) = v77;
                    }
                    v75 += 1;
                    v77 = (char)*((char *)(v25 + v75));
                }
                while ((char)v77 != 0);
            }
        }
        v5 = v81;
        v6 = 1;
        v8 = strlen(v26);
        v18 = 0;
        v13 = v26;
        v14 = 0;
        v4 = 1;
    default:
        abort(); /* do not return */
    }
    v81 = v4;
    while (true)
    {
        v37 = v81;
        v79 = 0;
        v38 = v77;
        while (true)
        {
            v77 = v37 != v79;
            if (v37 == -1)
            {
                v77 = *((char *)(v7 + v79)) != 0;
            }
            if (v77 != 0)
            {
                v36 = v7 + v79;
                v5 = (unsigned int)v38 != 2 & v4;
                if (((unsigned int)v38 != 2 & v4) != 0)
                {
                    v77 = v8;
                    if (v8 != 0)
                    {
                        v33 = v79 + v77;
                        if (v37 == -1 && v77 > 1)
                        {
                            v11 = v38;
                            v10 = v32;
                            v9 = v36;
                            v37 = strlen(v7);
                        }
                        if (v33 <= v37)
                        {
                            v12 = v38;
                            v11 = v37;
                            v10 = v32;
                            v9 = v36;
                            v77 = memcmp(v36, v13, v8);
                            v36 = v9;
                            v32 = (char)v10;
                            v37 = v11;
                            v38 = v12;
                            if (v17 == 0 && v77 == 0)
                            {
                                v39 = (char)*((char *)v36);
                                switch (*((char *)v36))
                                {
                                case 0:
                                    v88 = (unsigned int)v38 == 2;
                                    v77 = (unsigned int)(0 ^ 1);
                                    v77 = (char)(0 ^ 1) & (unsigned int)v38 == 2;
                                    if (((char)((unsigned int)0 ^ 1) & (unsigned int)v38 == 2) != 0)
                                    {
                                        if (v76 > v75)
                                        {
                                            *((char *)(v27 + v75)) = 39;
                                        }
                                        if (v76 > v75 + 1)
                                        {
                                            *((char *)(v27 + v75 + 1)) = 36;
                                        }
                                        if (v76 > v75 + 2)
                                        {
                                            *((char *)(v27 + v75 + 2)) = 39;
                                        }
                                        v46 = v75 + 3;
                                        v75 += 4;
                                        v32 = rax;
                                        v77 = 0;
                                        v39 = 48;
                                    }
                                    else
                                    {
                                        v46 = v75;
                                        v77 = 0;
                                        v75 = v46 + 1;
                                        v77 = v77;
                                        v39 = 48;
                                        v77 = 0;
                                        v39 = 48;
                                        if (1 < v37)
                                        {
                                            v9 = *((char *)(v7 + 0 + 1));
                                            if (((unsigned int)(char)*((char *)(v7 + 0 + 1)) - 48 & 255) <= 9)
                                            {
                                                if (v76 > v75)
                                                {
                                                    *((char *)(v27 + v75)) = 48;
                                                }
                                                if (v76 > v46 + 2)
                                                {
                                                    *((char *)(v27 + v46 + 2)) = 48;
                                                }
                                                v75 = v46 + 3;
                                                v39 = 48;
                                            }
                                        }
                                        v77 = v77;
                                        v77 = 0;
                                    }
                                    if ((((char)((unsigned int)0 ^ 1) & (unsigned int)v38 == 2) == 0 || v76 > v75 + 3) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v38 == 2) != 0 || v76 > v75))
                                    {
                                        *((char *)(v27 + v46)) = 92;
                                        v32 = v77;
                                    }
                                case 7:
                                    v39 = 97;
                                    v77 = 0;
                                case 8:
                                    v88 = 0;
                                    v77 = 0;
                                    v39 = 98;
                                case 13:
                                    v39 = 13;
                                    v44 = 114;
                                    v88 = (unsigned int)v38 == 2;
                                case 32:
                                    v40 = v5;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v88 = 0;
                                case 35: case 126:
                                    v41 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v40 = v5;
                                case 92:
                                    v43 = v4;
                                    v39 = 92;
                                    v44 = 92;
                                    v88 = v4 & v17 & v8 != 0;
                                    if ((v4 & v17 & v8 != 0) != 0)
                                    {
                                        v79 = 1;
                                        v45 = 0;
                                        v77 = 0;
                                    }
                                }
                            }
                        }
                    }
                    if (v8 == 0 || v33 > v37 || v77 != 0)
                    {
                        v39 = (char)*((char *)v36);
                        switch (*((char *)v36))
                        {
                        case 0:
                            if (v17 == 0)
                            {
                                v5 = 0;
                            }
                            else
                            {
                                v4 = (unsigned int)v38 == 2;
                            }
                        case 7:
                            v39 = 97;
                            break;
                        case 8:
                            v39 = 98;
                        case 9:
                            v39 = 116;
                        case 10:
                            v39 = 110;
                            v88 = 0;
                            v77 = 0;
                        case 11:
                            v39 = 118;
                            break;
                            if (v17 != 0)
                            {
                                v86 = 0;
                            }
                        case 12:
                            v39 = 102;
                            break;
                        case 13:
                            v5 = 0;
                        case 32:
                            v40 = 0;
                            v39 = 32;
                            v47 = v5;
                            v5 = v40;
                            v77 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v41 = 0;
                            v48 = v5;
                            v88 = 0;
                            v5 = v41;
                        case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                            v40 = 0;
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
                    v39 = (char)*((char *)v36);
                    switch (*((char *)v36))
                    {
                    case 0:
                        if (v4 == 0)
                        {
                            v79 += 1;
                            v5 = 0;
                            v88 = (unsigned int)v38 == 2;
                            v35 = 0;
                            v39 = 0;
                            break;
                        }
                    case 7:
                        v39 = 7;
                        v44 = 97;
                        v88 = (unsigned int)v38 == 2;
                    case 8:
                        v39 = 8;
                        v44 = 98;
                        v88 = (unsigned int)v38 == 2;
                        if (v4 == 0)
                        {
                            v54 = 0;
                            break;
                            v77 = ((unsigned int)v4 ^ 1 | (unsigned int)v88) ^ 1;
                            v77 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v88) ^ 1) | v17;
                            v77 = 0;
                            v71 = (unsigned int)((unsigned long long)v24[v39 % 32] >> ((char)v39 & 31)) & 1;
                            v88 = (unsigned int)v38 == 2;
                            v88 = (unsigned int)v38 == 2;
                            v79 += 1;
                            v45 = (v77 ^ 1) & (unsigned int)v32;
                            if (v45 != 0)
                            {
                                if (v78 > v75)
                                {
                                    *((char *)(v28 + v75)) = 39;
                                }
                                if (v78 > v75 + 1)
                                {
                                    *((char *)(v28 + v75 + 1)) = 39;
                                }
                                v75 += 2;
                                v32 = 0;
                            }
                        }
                        else
                        {
                            v39 = v44;
                            v77 = 0;
                            v86 = v88;
                            v72 = (unsigned int)v32 ^ 1;
                            v73 = (char)((unsigned int)v32 ^ 1) & v88;
                            if (((char)((unsigned int)v32 ^ 1) & v88) != 0)
                            {
                                if (v78 > v75)
                                {
                                    *((char *)(v28 + v75)) = 39;
                                }
                                if (v75 + 1 < v78)
                                {
                                    *((char *)(v28 + v75 + 1)) = 36;
                                }
                                v74 = v75 + 2;
                                if (v75 + 2 < v78)
                                {
                                    *((char *)(v28 + v75 + 2)) = 39;
                                }
                                v75 += 3;
                                v32 = rax;
                            }
                            *((unsigned long long *)&v4) = v4 & v86;
                            if (v78 > v75)
                            {
                                *((char *)(v28 + v75)) = 92;
                            }
                            v75 += 1;
                            v79 += 1;
                        }
                    case 9:
                        v39 = 9;
                        v44 = 116;
                    case 10:
                        v39 = 10;
                        v44 = 110;
                    case 11:
                        v39 = 11;
                        v44 = 118;
                        v88 = (unsigned int)v38 == 2;
                    case 12:
                        v39 = 12;
                        v44 = 102;
                        v88 = (unsigned int)v38 == 2;
                    case 13:
                        v39 = 13;
                        v44 = 114;
                        v88 = (unsigned int)v38 == 2;
                        v5 = v17 & (unsigned int)v38 == 2;
                    case 32:
                        v39 = 32;
                        v88 = (unsigned int)v38 == 2;
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v88 = (unsigned int)v38 == 2;
                        v34 = 0;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 35: case 126:
                        v88 = (unsigned int)v38 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v88 = (unsigned int)v38 == 2;
                        break;
                    case 39:
                        if ((unsigned int)v38 == 2)
                        {
                            if (v76 != 0)
                            {
                                v52 = 0;
                            }
                            if (v76 == 0 || v14 != 0)
                            {
                                if (v76 > v75)
                                {
                                    *((char *)(v27 + v75)) = 39;
                                }
                                if (v76 > v75 + 1)
                                {
                                    *((char *)(v27 + v75 + 1)) = 92;
                                }
                                if (v76 > v75 + 2)
                                {
                                    v52 = v76;
                                    *((char *)(v27 + v75 + 2)) = 39;
                                    v78 = v14;
                                }
                                else
                                {
                                    v52 = v76;
                                    v78 = v14;
                                }
                            }
                            v18 = v77;
                            v75 += 3;
                            v77 = 0;
                            v32 = 0;
                            v14 = v78;
                            v39 = 39;
                            v78 = v52;
                        }
                        else
                        {
                            v18 = v77;
                            v88 = 0;
                            v39 = 39;
                            break;
                        }
                    case 63:
                        if ((unsigned int)v38 != 2)
                        {
                            v39 = 63;
                            v88 = (unsigned int)v38 == 2;
                            v51 = 0;
                            break;
                            v76 = v7;
                            v39 = (char)*((char *)(v76 + 2));
                            v76 = 0x7000a38200000000;
                            v0 = 0x7000a38200000000;
                            v88 = 0;
                            v61 = 0;
                            v39 = 63;
                            break;
                            if (v78 > v75)
                            {
                                *((char *)(v27 + v75)) = 63;
                            }
                            if (v78 > v75 + 1)
                            {
                                *((char *)(v27 + v75 + 1)) = 34;
                            }
                            if (v78 > v75 + 2)
                            {
                                *((char *)(v27 + v75 + 2)) = 34;
                            }
                            if (v78 > v75 + 3)
                            {
                                *((char *)(v27 + v75 + 3)) = 63;
                            }
                            v75 += 4;
                            v88 = 0;
                            v77 = 0;
                            v79 = 2;
                        }
                        else
                        {
                            v77 = 0;
                            v77 = 0;
                            v39 = 63;
                        }
                    case 92:
                        if ((unsigned int)v38 == 2)
                        {
                            v79 += 1;
                            v45 = v32;
                            v77 = 0;
                            v39 = 92;
                        }
                    case 123: case 125:
                        v42 = v37 != 1;
                        if (v37 == -1)
                        {
                            v42 = *((char *)(v7 + 1)) != 0;
                        }
                        v88 = (unsigned int)v38 == 2;
                    }
                }
            }
            else
            {
                v80 = v38;
                v81 = v37;
                v82 = v80 == 2;
                if ((v80 == 2 & v17) == 0 || v75 != 0)
                {
                    v83 = (unsigned int)v17 ^ 1;
                    v84 = v82 & (char)((unsigned int)v17 ^ 1);
                    v85 = v82 & (char)((unsigned int)v17 ^ 1);
                    if ((char)v84 == 0)
                    {
                        v85 = v83;
                    }
                    else if (v18 != 0)
                    {
                        if (v6 == 0)
                        {
                            v83 = v78 == 0 & v14 != 0;
                            if ((v78 == 0 & v14 != 0) == 0)
                            {
                                v85 = v18;
                            }
                        }
                        else
                        {
                            v3 = v26;
                            v2 = v25;
                            v1 = v24;
                            v75 = (unsigned int)sub_410810();
                        }
                    }
                }
            }
            if (v6 == 0 && v77 == 0 && (char)v84 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && (v78 == 0 & v14 != 0) == 0 || (char)v84 == 0 && v77 == 0 && ((v80 == 2 & v17) == 0 || v75 != 0) || v77 == 0 && (char)v84 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && v18 == 0)
            {
                v87 = v13;
                if (v13 != 0 && v85 != 0)
                {
                    v89 = (char)*((char *)v87);
                    if (*((char *)v87) != 0)
                    {
                        v90 = v87 - v75;
                        do
                        {
                            if (v78 > v75)
                            {
                                *((unsigned long long *)(v28 + v75)) = v89;
                            }
                            v75 += 1;
                            v89 = (char)*((char *)(v90 + v75));
                        }
                        while ((char)v89 != 0);
                    }
                }
                if (v78 > v75)
                {
                    *((char *)(v28 + v75)) = 0;
                }
            }
            if (v15 == 1)
            {
                v11 = v38;
                v10 = v37;
                v9 = v32;
                v45 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v39 * 2));
                tmp_38 = v45 & 0x4000;
                v45 &= 0x4000;
                v50 = (tmp_38 & 65535) != 0;
                v88 = (tmp_38 & 65535) == 0 & v4;
                if (v88 != 0)
                {
                    v88 = v4;
                    v77 = 0;
                }
            }
            else
            {
                v23 = 0;
                if (v37 == -1)
                {
                    v11 = v38;
                    v10 = v32;
                    v9 = v36;
                    v37 = strlen(v7);
                }
                v21 = v75;
                v22 = v36;
                v53 = 0;
                v19 = v32;
                *((unsigned long long *)&v20) = v39;
                v11 = v28;
                v12 = v78;
                v9 = v37;
                *((unsigned long *)&v10) = v38;
                do
                {
                    v55 = v79 + v53;
                    v56 = v7 + v79 + v53;
                    v45 = sub_416e80();
                    v57 = v45;
                    if (v45 != 0 && v45 != -2 && v45 != -1)
                    {
                        if (v10 == 2 && v45 != 1 && v17 != 0)
                        {
                            v58 = v7 + v76 + 1;
                            v76 = v7 + v57 + v76;
                            while (true)
                            {
                                v59 = (unsigned int)*(v58) - 91;
                                if ((8589934635 & 1 << (v59 & 63)) == 0 || ((unsigned int)*(v58) - 91 & 255) > 33)
                                {
                                    v58 = &v58[1];
                                    if (v76 == v58)
                                    {
                                        break;
                                    }
                                }
                            }
                            if ((8589934635 & 1 << (v59 & 63)) == 0 || ((unsigned int)*(v58) - 91 & 255) > 33)
                            {
                                v77 = (unsigned int)(iswprint() == 0? 0 : (unsigned int)r13);
                                v53 += v57;
                                v45 = mbsinit((unsigned int)&v23);
                            }
                        }
                        v77 = (unsigned int)(iswprint() == 0? 0 : (unsigned int)r13);
                        v53 += v57;
                        v45 = mbsinit((unsigned int)&v23);
                    }
                    if (v45 == -1)
                    {
                        v27 = v53;
                        v39 = v20;
                        v75 = v21;
                        v77 = 0;
                        v32 = (char)v19;
                        v28 = v11;
                        v78 = v12;
                        v37 = v9;
                        v38 = v10;
                        v88 = v4;
                    }
                    if (v45 == -2)
                    {
                        v37 = v9;
                        v76 = v55;
                        v45 = v53;
                        v27 = v53;
                        v32 = (char)v19;
                        v39 = v20;
                        v75 = v21;
                        v28 = v11;
                        v78 = v12;
                        v38 = v10;
                        if (v76 < v9 && *((char *)v56) != 0)
                        {
                            do
                            {
                                v45 += 1;
                            }
                            while (v45 < v9 && *((char *)(v22 + v45)) != 0);
                            v27 = v45;
                        }
                        v88 = v4;
                        v77 = 0;
                    }
                    if (v45 == 0 || v45 != -2 && (unsigned int)v45 != 0 && v45 != -1)
                    {
                        v27 = v53;
                        v39 = v20;
                        v75 = v21;
                        v32 = (char)v19;
                        v28 = v11;
                        v88 = (unsigned int)v77 ^ 1;
                        v78 = v12;
                        v37 = v9;
                        v38 = v10;
                        v88 = (char)((unsigned int)v77 ^ 1) & v4;
                    }
                }
                while (v27 <= 1);
                if (v45 == 0 || v45 == -2 || v45 == -1 || (unsigned int)v45 != 0)
                {
                    v9 = v77;
                    v76 = 0;
                    v62 = v17;
                    v63 = v27 + v79;
                    v27 = v5;
                }
            }
            if (false)
            {
                v5 = v41;
                v49 = 0;
            }
            if (v15 != 1 || v88 != 0)
            {
                v9 = v77;
                v76 = 0;
                v62 = v17;
                v63 = v27 + v79;
                v27 = v5;
                while (true)
                {
                    if (v88 != 0)
                    {
                        v64 = (unsigned int)v38 == 2;
                        if (v62 == 0)
                        {
                            v76 = (unsigned int)v32 ^ 1;
                            v65 = v4 & (char)((unsigned int)v32 ^ 1);
                            if ((v4 & (char)((unsigned int)v32 ^ 1)) != 0)
                            {
                                if (v78 > v75)
                                {
                                    *((char *)(v28 + v75)) = 39;
                                }
                                if (v78 > v75 + 1)
                                {
                                    *((char *)(v28 + v75 + 1)) = 36;
                                }
                                v76 = v75 + 2;
                                if (v78 > v75 + 2)
                                {
                                    *((char *)(v28 + v75 + 2)) = 39;
                                }
                                v75 += 3;
                                v32 = v45;
                            }
                            if (v78 > v75)
                            {
                                *((char *)(v28 + v75)) = 92;
                            }
                            if (v78 > v75 + 1)
                            {
                                v66 = v39;
                                v67 = (char)v39 % 64;
                                *((unsigned long long *)(v28 + v75 + 1)) = (unsigned long long)(unsigned int)rax + 48;
                            }
                            v45 = v75 + 2;
                            if (v78 > v75 + 2)
                            {
                                v69 = v39;
                                v70 = (char)v39 % 8;
                                v45 = (unsigned int)((rax & 7) + 48);
                                *((unsigned long long *)(v28 + v75 + 2)) = v45;
                            }
                            v79 += 1;
                            v75 += 3;
                            v39 = ((unsigned int)v39 & 7) + 48;
                            if (v79 < v63)
                            {
                                v76 = v88;
                            }
                            else
                            {
                                v77 = (char)v9;
                            }
                        }
                        else
                        {
                            v4 = v64;
                        }
                    }
                    else
                    {
                        v45 = (v76 ^ 1) & (unsigned int)v32;
                        if (v27 != 0)
                        {
                            if (v78 > v75)
                            {
                                *((char *)(v28 + v75)) = 92;
                            }
                            v75 += 1;
                        }
                        v79 += 1;
                        if (v79 >= v63)
                        {
                            v77 = (char)v9;
                        }
                        else if (v45 != 0)
                        {
                            if (v78 > v75)
                            {
                                *((char *)(v28 + v75)) = 39;
                            }
                            v45 = v75 + 1;
                            if (v78 > v75 + 1)
                            {
                                *((char *)(v28 + v75 + 1)) = 39;
                            }
                            v75 += 2;
                            v27 = 0;
                            v32 = 0;
                        }
                        else
                        {
                            v27 = 0;
                        }
                    }
                    if ((v79 < v63 || v88 == 0) && (v62 == 0 || v88 == 0) && (v79 < v63 || v88 != 0))
                    {
                        if (v78 > v75)
                        {
                            *((unsigned long long *)(v28 + v75)) = v39;
                        }
                        v39 = (char)*((char *)(v7 + v79));
                        v75 += 1;
                    }
                }
            }
            if ((v77 == 0 || v17 != 0) && (v77 == 0 || v4 != 0) && (v75 == 0 || v17 != 0) && (v75 == 0 || v4 != 0) && (v17 != 0 || (v80 == 2 & v17) != 0) && (v4 != 0 || (v80 == 2 & v17) != 0))
            {
                v3 = v26;
                v2 = v25;
                v1 = 0;
                v75 = (unsigned int)sub_410810();
            }
            if (v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v88) ^ 1) == 0 && v4 == 0 && v5 == 0 || v17 == 0 && v4 != 0 || (v15 != 1 || v88 != 0) && v75 >= v78)
            {
                if (v75 < v78)
                {
                    *((unsigned long long *)(v28 + v75)) = v39;
                }
                v75 += 1;
                v6 = (v77 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v77 == 0 && (char)v84 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && (v78 == 0 & v14 != 0) == 0 || (char)v84 == 0 && v77 == 0 && ((v80 == 2 & v17) == 0 || v75 != 0) || v77 == 0 && (char)v84 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0) && v18 == 0 || (v77 == 0 || v17 != 0) && (v77 == 0 || v4 != 0) && (v75 == 0 || v17 != 0) && (v75 == 0 || v4 != 0) && (v17 != 0 || (v80 == 2 & v17) != 0) && (v4 != 0 || (v80 == 2 & v17) != 0) || v77 == 0 && v6 != 0 && (char)v84 != 0 && v18 != 0 && ((v80 == 2 & v17) == 0 || v75 != 0))
            {
                v91 = v75;
                return v91;
            }
        }
        *((char *)v28) = 39;
        v77 = 2;
        v13 = "'";
        v8 = 1;
        v17 = 0;
        *((unsigned long *)&v18) = v83;
    }
}

typedef struct struct_0 {
    char padding_0[176];
    unsigned long long field_b0;
    char field_b8;
} struct_0;

extern char g_6256bc;
extern unsigned int g_6256d4;
extern char g_6256ec;
extern unsigned int g_6256f8;
extern unsigned int g_625714;
extern unsigned int g_62571c;
extern unsigned int g_625720;
extern char g_625725;

int sub_407690()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // rbx
    unsigned long long v2;  // rax
    struct v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax

    if (!(g_6256bc != 0))
    {
        v1 = 0;
    }
    else if (g_6256f8 != 4)
    {
        v1 = (int)g_625720 + 1;
    }
    else
    {
        v1 = strlen((unsigned long long)(unsigned int)sub_40e520()) + 1;
    }
    if (g_6256f8 != 4)
    {
        if (g_6256ec != 0)
        {
            v2 = (int)g_62571c + 1;
        }
        if (g_625725 != 0)
        {
            v4 = (int)g_625714 + 1;
        }
    }
    else
    {
        if (g_6256ec != 0)
        {
            v2 = 2;
            if (v3->field_b8 != 0)
            {
                v2 = strlen((unsigned long long)(unsigned int)sub_40d5d0()) + 1;
            }
        }
        if (g_625725 != 0)
        {
            v4 = strlen(v3->field_b0) + 1;
        }
    }
    if (g_6256ec != 0)
    {
        v1 += v2;
    }
    if (g_625725 != 0)
    {
        v1 += v4;
    }
    v5 = v1 + (unsigned int)sub_407630();
    if (g_6256d4 != 0)
    {
        v5 += (char)((char)sub_4057b0() != 0);
    }
    v6 = v5;
    return v6;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[24];
    char field_50;
} struct_0;

int sub_417085()
{
    unsigned long long v0;  // [bp-0x18]
    void tmp_35;  // tmp #35
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r12
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rdi
    struct v7;  // rbx
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rbp
    unsigned long long v10;  // r12
    unsigned long v11;  // rsi
    unsigned long long v12[2];  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // r12

    v2 = v4;
    v1 = stack_base + 0;
    v0 = v5;
    v7 = v6;
    if (v8 != 0)
    {
        v9 = v8;
        v10 = v8 - 1;
    }
    else
    {
        v10 = 15;
        v9 = 16;
    }
    v7->field_30 = v10;
    *((int *)&v7->field_0) = (v11 == 0? 4064 : v11);
    v12 = sub_417050();
    v7->field_8 = v12;
    if (v12 != 0)
    {
        tmp_35 = v7->field_0;
        v7->field_10 = 0 - v9 & &((unsigned long long [2])&((char *)v12)[v10])[2];
        v7->field_18 = 0 - v9 & &((unsigned long long [2])&((char *)v12)[v10])[2];
        v12[0] = tmp_35 + (char *)v12;
        v7->field_20 = tmp_35 + (char *)v12;
        v12[1] = 0;
        v7->field_50 = v7->field_50 & 249;
        v13 = v0;
        v14 = v2;
        return 1;
    }
    sub_417010(); /* do not return */
}

extern unsigned int g_41edef;
extern unsigned int g_6245c0;

int sub_412bd0()
{
    dcgettext(0x0, 0x41edef, 0x5);
    error(g_6245c0, 0x0, "%s");
    abort(); /* do not return */
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
} struct_0;

extern char g_41b08a;
extern struct g_6257b8;

int sub_40e160()
{
    struct v1;  // rbx
    unsigned int v2;  // edi
    unsigned long long *v4;  // rax
    unsigned long long v5;  // rdi
    char *v6;  // r12
    struct v8;  // rax
    unsigned long long v9;  // rax

    v1 = g_6257b8;
    if (g_6257b8 != 0 && v2 != g_6257b8->field_0)
    {
        do
        {
            v1 = v1->field_8;
        }
        while (v1->field_0 != v2 && v1 != 0);
        if (true)
        {
            v6 = &g_41b08a;
            v4 = getpwuid();
        }
        else if (v1 != 0)
        {
            v9 = 0;
        }
    }
    if (g_6257b8 == 0 || v2 != g_6257b8->field_0 && v4 != 0)
    {
        v6 = &g_41b08a;
        v4 = getpwuid();
        if (v4 != 0)
        {
            v6 = *(v4);
            v5 = strlen(*(v4)) + 24 & -8;
        }
        v1->field_0 = v2;
        v1 = (unsigned long long)(unsigned int)sub_412980();
        strcpy(&v1->field_10, v6);
        v8 = g_6257b8;
        g_6257b8 = v1;
        v1->field_8 = v8;
    }
    v9 = 0;
    if (v1->field_10 != 0)
    {
        v9 = &v1->field_10;
    }
    return v9;
}

extern unsigned int g_6255d4;
extern unsigned int g_6255d8;
extern unsigned int g_6255e0;
extern char g_6256d0;
extern unsigned long long stdout;

int sub_405d70()
{
    unsigned long long v1;  // [bp-0x8]
    unsigned long long v3;  // rbx
    unsigned long long v6;  // rbx

    if (g_6255d8 == 0 && g_6255d4 == 0)
    {
        return g_6255d4;
    }
    if (g_6255d8 != 0 || g_6255d4 != 0)
    {
        v1 = v3;
        v6 = v1;
        return g_6255d4;
    }
}

extern unsigned int g_41d72d;
extern unsigned int g_41d748;

int sub_40ae10()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x41d72d, 0x5);
    }
    dcgettext(0x0, 0x41d748, 0x5);
    sub_412270();
    sub_411f60();
}

int sub_4176f0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // r13
    unsigned long v3;  // rsi
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax

    if (v1 != 0)
    {
        v2 = (unsigned int)sub_417620();
        if (v2 != 0)
        {
            v5 = localtime_r(v3, v4);
            if (v5 != 0)
            {
                v6 = sub_4174a0();
                if (v6 != 0)
                {
                    if (v2 != 1)
                    {
                        v8 = sub_4173c0();
                    }
                    if (v2 == 1 || v8 != 0)
                    {
                        return v4;
                    }
                }
            }
            if ((v5 == 0 || v6 == 0) && v2 != 1)
            {
                sub_4173c0();
            }
        }
        if (v5 == 0 || v2 == 0 || v6 == 0 || v8 == 0 && v2 != 1)
        {
            return 0;
        }
    }
}

int sub_40b7b0()
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
    v5 = sub_40b870();
    v6 = v5 + -0x1 * v3;
    if (v5 + -0x1 * v3 > rbp)
    {
        if (*((char *)(v5 - 1)) == 47)
        {
            for (v8 = v6 - 1; rbp != v8; v8 = v7)
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
    if (v5 + -0x1 * v3 <= rbp || *((char *)(v5 - 1)) != 47)
    {
        return v6;
    }
}

int sub_418150()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp+0x8]
    unsigned int v5[8];  // rax
    unsigned long long v6;  // r9
    unsigned long long v8;  // rax

    v5 = v4;
    if (v4 != 0)
    {
        v3 = v5[0];
        v2 = v5[1];
        v1 = v5[1];
        v0 = v5[3 + 1];
        v8 = (unsigned int)sub_418030() + v6;
        if (!(INVALID_IR))
        {
            return v8;
        }
    }
    if (INVALID_IR || v4 == 0)
    {
        if (!(INVALID_IR))
        {
            return (9223372036854775805 < v6? v6 - 1 : 9223372036854775807);
        }
        else if (v6 < 9223372036854775810)
        {
            return v6 + 1;
        }
        return 0x8000000000000000;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[24];
    char field_50;
} struct_0;

extern unsigned long long stdout[7];

int sub_405390()
{
    void tmp_6;  // tmp #6
    void tmp_46;  // tmp #46
    struct v1;  // rsi
    char *v2;  // rax
    unsigned long long v3;  // rdx
    char *v4;  // rdi
    unsigned long long v6;  // rdx
    unsigned long long *v8;  // rbx

    v2 = v1->field_18;
    v8 = v1->field_10;
    if (v1->field_18 - v1->field_10 > 7)
    {
        if (v1->field_18 == v1->field_10)
        {
            v1->field_50 = v1->field_50 | 2;
        }
        tmp_6 = &v2[v1->field_30] & !(v1->field_30);
        v3 = v1->field_20;
        tmp_46 = !((&v2[v1->field_30] & !(v1->field_30)) - v1->field_8 <= v1->field_20 - v1->field_8);
        *((int *)&v1->field_18) = (!((&v2[v1->field_30] & !(v1->field_30)) - v1->field_8 <= v1->field_20 - v1->field_8)? v1->field_20 : &v2[v1->field_30] & !(v1->field_30));
        *((int *)&v1->field_10) = (tmp_46? v3 : tmp_6);
        fputs_unlocked(v4, stdout);
        while (true)
        {
            v6 = *(v8);
            v8 = &v8[1];
            __printf_chk(0x1, " ", v6);
            if ((v1->field_18 - v1->field_10 & -8) + v1->field_10 == v8)
            {
                break;
            }
        }
        v2 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v2) = 10;
        }
    }
    if (v1->field_18 - v1->field_10 <= 7 || stdout[5] < stdout[6])
    {
        return v2;
    }
}

extern unsigned int g_41b371;

int sub_40b070()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x100]
    unsigned int v1;  // [bp-0xf4]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0xf0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0xd8]
    unsigned int v6;  // [bp-0xd0]
    unsigned int v7;  // [bp-0xcc]
    char v8;  // [bp-0xc8]
    unsigned int v9;  // [bp-0xb0]
    unsigned int v11;  // esi
    char v12[2];  // rdi
    char v13[2];  // r15
    unsigned long long v14;  // rbx
    char *v15;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // rbp
    unsigned long long v17;  // rdx
    char v18[2];  // r13
    unsigned long v19;  // r8
    char v20[2];  // r15
    char *v21;  // rdx
    unsigned long long v22;  // rbx
    unsigned long v23;  // rbp
    char *v25;  // r15
    unsigned long long v26;  // rsi
    char v27;  // al
    char v28[2];  // rax
    unsigned long long v29;  // rax
    char *v31;  // r15
    unsigned int v32;  // ecx
    unsigned long v33;  // r13
    unsigned long long v34;  // rdx
    char *v36;  // r15
    char v39[2];  // rax
    char *v40;  // rdx
    unsigned long long v41;  // rdx
    char v42;  // cc_dep1
    char v43[2];  // r14
    unsigned long long v44;  // rax
    char v45[2];  // r15
    unsigned long long v46;  // r12
    unsigned int *v48;  // rdx
    unsigned int *v49;  // rdx
    char *v50;  // rax
    unsigned long long v51;  // rcx
    unsigned int *v52;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v53;  // rcx
    unsigned long long v56;  // rax

    v1 = v11 & 3;
    if (((unsigned int)((unsigned long long)(v11 & 3) - 1) & v11 & 3) == 0)
    {
        v13 = v12;
        if (v12 != 0)
        {
            if (v12[0] != 0)
            {
                if (v12[0] != 47)
                {
                    v46 = (unsigned int)sub_412d10();
                    if (v46 != 0)
                    {
                        v14 = strlen(v46);
                        if (v14 > 4095)
                        {
                            v15 = v14 + v46;
                            v16 = v15;
                        }
                        else
                        {
                            v46 = (unsigned int)sub_4129e0();
                            v15 = v14 + v46;
                            v16 = v46 + 0x1000;
                        }
                    }
                }
                else
                {
                    v46 = (unsigned int)sub_412980();
                    v16 = v46 + 0x1000;
                    v15 = v46 + 1;
                    *((char *)v46) = 47;
                }
                if (v12[0] == 47 || v46 != 0)
                {
                    *((char *[2])&v3[0]) = v13;
                    v44 = v13[0];
                    v6 = v11 & 4;
                    v2 = 0;
                    v5 = 0;
                    v4 = 0;
                    while (true)
                    {
                        if (v44 != 0)
                        {
                            v17 = v44;
                        }
                        if (v44 == 47)
                        {
                            do
                            {
                                v13 = &v13[1];
                                v17 = v13[0];
                            }
                            while (v13[0] == 47);
                        }
                        if (v44 == 47 && v17 != 0 || v44 != 0 && v44 != 47)
                        {
                            v18 = v13;
                            while (true)
                            {
                                v44 = v18[1];
                                v43 = &v18[1];
                                if (v44 == 47 || v18[1] == 0)
                                {
                                    break;
                                }
                                v18 = v43;
                            }
                        }
                        if (v44 == 0 || v43 == v13 || v17 == 0 && v44 == 47)
                        {
                            if (v15[-1] == 47 && v15 > v46 + 1)
                            {
                                v50 = v15;
                                v15 = &v15[-1];
                            }
                            if (v15 <= v46 + 1 || v15[-1] != 47)
                            {
                                v50 = &v15[1];
                            }
                            *(v15) = 0;
                            if (v16 != v50)
                            {
                                v46 = (unsigned int)sub_4129e0();
                            }
                            free(v4);
                            if (v2 == 0)
                            {
                                break;
                            }
                            sub_40ccc0();
                        }
                        if (v43 != v13 && (v44 == 47 || v44 != 0) && (v17 != 0 || v44 != 47))
                        {
                            v19 = v43 - v13;
                            if (v17 == 46 && v13[1] == 46 && v0 == 2 && v43 - v13 != 1)
                            {
                                v20 = v43;
                                if (v15 > v46 + 1)
                                {
                                    v21 = &v15[-1];
                                    if (v15[-2] == 47 || v46 >= &v15[-1])
                                    {
                                        v15 = v21;
                                    }
                                }
                            }
                            if (v17 != 46 || v13[1] != 46 && v43 - v13 != 1 || v43 - v13 != 1 && v0 != 2)
                            {
                                if (v15[-1] != 47)
                                {
                                    *(v15) = 47;
                                    v15 = &v15[1];
                                }
                                if (v16 <= &v15[v0])
                                {
                                    v22 = &v15[-1 * v46];
                                    v0 = v19;
                                    v23 = (0x1000 <= v0? &v16[-1 * v46 + v0 + 1] : &v16[-1 * v46 + 0x1000]);
                                    v46 = (unsigned int)sub_4129e0();
                                    v16 = v23 + v46;
                                    v15 = v22 + v46;
                                }
                                *((unsigned long *)&v0) = v0;
                                memcpy(v15, v13, v0);
                                v15 = &v15[*((long long *)&v0)];
                                *(v15) = 0;
                                if (v6 == 0 || v1 != 2)
                                {
                                    v26 = v46;
                                    if (v6 != 0)
                                    {
                                        v27 = __xstat(0x1, v26, (unsigned int)&v8) != 0;
                                    }
                                    else
                                    {
                                        v27 = __lxstat(0x1, v26, (unsigned int)&v8) != 0;
                                    }
                                    if (v27 != 0)
                                    {
                                        v48 = __errno_location();
                                        v51 = *(v48);
                                        if (v1 == 1)
                                        {
                                            v7 = v51;
                                            v0 = v48;
                                            v28 = strspn((unsigned int)v43, 0x41b371);
                                            v48 = v0;
                                            v51 = v7;
                                        }
                                    }
                                    else if (((unsigned short)v9 & 0xf000) == 0xa000)
                                    {
                                        if (v2 != 0)
                                        {
                                            v29 = sub_40b9a0();
                                            if (v29 == 0)
                                            {
                                                sub_40b910();
                                                v31 = (unsigned long long)(unsigned int)sub_40abf0();
                                                if (v31 != 0)
                                                {
                                                    v33 = strlen(v31);
                                                    v34 = strlen(v43);
                                                    if (v5 == 0)
                                                    {
                                                        v0 = v34;
                                                        *((int *)&v5) = (0x1000 <= v0? v0 : 0x1000);
                                                        v4 = (unsigned int)sub_412980();
                                                    }
                                                    else if (v0 > v5)
                                                    {
                                                        v0 = v33 + v34 + 1;
                                                        v3 = v34;
                                                        v4 = (unsigned int)sub_4129e0();
                                                        v5 = v0;
                                                    }
                                                    memmove(v4 + v33, v43, v34 + 1);
                                                    v39 = memcpy(v4, v31, v33);
                                                    v40 = v46 + 1;
                                                    v43 = v39;
                                                    *((char *[2])&v3[0]) = v39;
                                                    if (*(v31) == 47)
                                                    {
                                                        *((char *)v46) = 47;
                                                        v15 = v40;
                                                    }
                                                    else if (v15 > v15)
                                                    {
                                                        v41 = &v15[-1];
                                                        if (v46 < &v15[-1])
                                                        {
                                                            v42 = v15[-2];
                                                            v15 = v41;
                                                            if (v42 != 47)
                                                            {
                                                                do
                                                                {
                                                                    v15 = &v15[-1];
                                                                }
                                                                while (v15[-1] != 47 && v46 != v15);
                                                            }
                                                        }
                                                    }
                                                    free(v31);
                                                }
                                                else
                                                {
                                                    v49 = __errno_location();
                                                    v32 = *(v49);
                                                }
                                            }
                                            if ((v29 == 0 || v1 != 2) && (v1 == 12 || v1 != 2) && (v31 == 0 || v29 != 0))
                                            {
                                                v1 = v32;
                                                v0 = v49;
                                                free(v4);
                                                free(v46);
                                                v52 = v0;
                                                v53 = v1;
                                            }
                                        }
                                        else
                                        {
                                            v2 = (unsigned int)sub_40ca80();
                                            sub_412bd0(); /* do not return */
                                        }
                                    }
                                }
                                if ((v1 == 2 || v1 != 1) && (v1 == 2 || v27 != 0) && (v1 == 2 || v1 != 0) && (v6 != 0 || v1 != 1) && (v6 != 0 || v27 != 0) && (v6 != 0 || v1 != 0))
                                {
                                    v9 = 0;
                                }
                                if (v1 != 2)
                                {
                                    if (((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v29 != 0 && v2 != 0)
                                    {
                                        v49 = __errno_location();
                                    }
                                    if (v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0))
                                    {
                                        v48 = __errno_location();
                                    }
                                }
                                if (((unsigned short)v9 & 0xf000) == 0x4000 && v27 == 0 && ((unsigned short)v9 & 0xf000) != 0xa000 && (v6 == 0 || v1 != 2) || v29 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v2 != 0 && v31 != 0 && (v6 == 0 || v1 != 2) || v43[0] == 0 && (v1 == 2 || v27 == 0 || v1 != 1) && (v1 == 2 || v27 == 0 || v1 != 0) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v27 == 0 || v6 != 0 || v1 != 1) && (v27 == 0 || v6 != 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0x4000 || v6 != 0 || v27 != 0) && (v6 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) || v1 == 2 && v43[0] != 0 && (v1 == 2 || v27 == 0 || v1 != 1) && (v1 == 2 || v27 == 0 || v1 != 0) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v27 == 0 || v6 != 0 || v1 != 1) && (v27 == 0 || v6 != 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0x4000 || v6 != 0 || v27 != 0) && (v6 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0))
                                {
                                    v44 = v43[0];
                                    v45 = v43;
                                }
                                if (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v27 != 0 && *((char *)(v43 + v28)) != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v43 + v28)) == 0 && (unsigned int)v51 != 2 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0))
                                {
                                    *((unsigned long long *)&v1) = v51;
                                    v0 = v48;
                                    free(v4);
                                    free(v46);
                                    v52 = v0;
                                    v53 = v1;
                                }
                                if (v1 == 1 && *((char *)(v43 + v28)) == 0 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) && (unsigned int)v51 == 2 || v6 == 0 && v1 == 2 && v29 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v31 == 0 && v2 != 0 && v1 != 12 || ((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v29 != 0 && v2 != 0 && (v6 == 0 || v1 != 2) && v1 == 2)
                                {
                                    v44 = v18[1];
                                    v36 = v43;
                                }
                                if (((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v2 != 0 && (v6 == 0 || v1 != 2) && (v29 == 0 || v1 != 2) && (v1 == 12 || v1 != 2) && (v31 == 0 || v29 != 0) || v2 != 0 && (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v27 != 0 && *((char *)(v43 + v28)) != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v43 + v28)) == 0 && (unsigned int)v51 != 2 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0)))
                                {
                                    *((unsigned long *)&v1) = v53;
                                    v0 = v52;
                                    sub_40ccc0();
                                    v53 = v1;
                                    v52 = v0;
                                }
                                if (((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v2 != 0 && (v6 == 0 || v1 != 2) && (v29 == 0 || v1 != 2) && (v1 == 12 || v1 != 2) && (v31 == 0 || v29 != 0) || v2 != 0 && (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v27 != 0 && *((char *)(v43 + v28)) != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v43 + v28)) == 0 && (unsigned int)v51 != 2 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0)) || (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v27 != 0 && *((char *)(v43 + v28)) != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v43 + v28)) == 0 && (unsigned int)v51 != 2 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0)) && v2 == 0)
                                {
                                    *((unsigned long *)&v52) = v53;
                                    v46 = 0;
                                }
                            }
                            if (v17 == 46 && (v46 < &v15[-1] || v43 - v13 == 1) && (v13[1] == 46 || v43 - v13 == 1) && (v43 - v13 == 1 || v0 == 2) && (v43 - v13 == 1 || v15 > v46 + 1) && (v43 - v13 == 1 || v15[-2] != 47))
                            {
                                v25 = v43;
                            }
                        }
                    }
                }
            }
            else
            {
                v46 = 0;
                *(__errno_location()) = 2;
            }
        }
    }
    if (v12 == 0 || ((unsigned int)((unsigned long long)(v11 & 3) - 1) & v11 & 3) != 0)
    {
        v46 = 0;
        *(__errno_location()) = 22;
    }
    v56 = v46;
    return v56;
}

int sub_40bd50()
{
    unsigned int v0;  // [bp-0x24]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    char v4;  // [bp+0x0]
    char v5;  // [bp+0x1]
    unsigned long long v7;  // [bp+0x10]
    unsigned long long v8;  // [bp+0x18]
    unsigned long long v9;  // [bp+0x20]
    unsigned long long v10;  // [bp+0x28]
    char *v11;  // rdi
    char *v12;  // rsi
    unsigned long long v13;  // rbx
    unsigned long long v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    unsigned long v16;  // d
    unsigned long long v17;  // rdi
    char *v18;  // rsi
    unsigned long long v19;  // rcx
    unsigned long long v20;  // cc_dep1
    unsigned long long v21;  // rcx
    char *v22;  // rsi
    char *v23;  // rdi
    unsigned long long v24;  // cc_dep1
    unsigned long long v25;  // cc_dep2
    unsigned long long v26;  // cc_dep1
    unsigned long long v27;  // rcx
    unsigned long long v28;  // rdi
    char *v29;  // rsi
    unsigned long long v30;  // cc_dep1
    unsigned long long v31;  // cc_dep2
    unsigned long long v32;  // cc_dep1
    char *v33;  // rsi
    char *v34;  // rdi
    unsigned long long v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long long v37;  // cc_dep1
    unsigned long long v38;  // r13
    unsigned long long v39;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v40;  // r13
    unsigned long long v42;  // r14
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdi
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rsi
    unsigned long long v48;  // rdi
    unsigned long long v49;  // rcx
    unsigned long long v50;  // rcx
    unsigned long long v51;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v52;  // r10d
    unsigned long long v53;  // rcx
    unsigned long v54;  // r10
    unsigned int v55;  // edi
    unsigned long long v56;  // rax
    unsigned int v57;  // r9d
    unsigned long long v58;  // rdi
    unsigned int v59;  // r9d
    unsigned long long v60;  // r10
    unsigned long v62;  // r12
    unsigned long v63;  // rax
    unsigned long long v64;  // rbx
    unsigned long long v65;  // r12
    unsigned long long v66;  // r13
    unsigned long long v67;  // r14
    unsigned long long v68;  // r15

    v62 = (unsigned int)strcmp(v11, v12);
    if ((unsigned int)v62 != 0)
    {
        if (*((char *)v13) != 0)
        {
            if (v4 != 0)
            {
                v19 = 2;
                v17 = v13;
                v18 = ".";
                while (v19 != 0)
                {
                    v19 -= 1;
                    v14 = *(v18);
                    v15 = (char)*((char *)v17);
                    v17 += v16;
                    v18 = &v18[v16];
                    break;
                }
                v20 = (v14 > v15) - 0 - (v14 < v15);
                if ((char)v20 != 0)
                {
                    v21 = 2;
                    v22 = ".";
                    v23 = &v4;
                    while (v21 != 0)
                    {
                        v21 -= 1;
                        v24 = *(v22);
                        v25 = v4;
                        v23 = &v23[v16];
                        v22 = &v22[v16];
                        break;
                    }
                    v26 = (v24 > v25) - 0 - (v24 < v25);
                    if ((char)v26 != 0)
                    {
                        v27 = 3;
                        v28 = v13;
                        v29 = ".";
                        while (v27 != 0)
                        {
                            v27 -= 1;
                            v30 = *(v29);
                            v31 = (char)*((char *)v28);
                            v28 += v16;
                            v29 = &v29[v16];
                            break;
                        }
                        v32 = (v30 > v31) - 0 - (v30 < v31);
                        if ((char)v32 != 0)
                        {
                            v50 = 3;
                            v33 = ".";
                            v34 = &v4;
                            while (v50 != 0)
                            {
                                v50 -= 1;
                                v35 = *(v33);
                                v36 = v4;
                                v34 = &v34[v16];
                                v33 = &v33[v16];
                                break;
                            }
                            v37 = (v35 > v36) - 0 - (v35 < v36);
                            if ((char)v37 != 0)
                            {
                                if ((v4 == 46 || *((char *)v13) != 46) && (*((char *)v13) == 46 || v4 != 46))
                                {
                                    v2 = v13;
                                    v3 = stack_base + 1;
                                    v38 = (unsigned int)sub_40bc70();
                                    v39 = sub_40bc70();
                                    if (v38 != 0)
                                    {
                                        v40 = v38 - v13;
                                        if (v39 == 0)
                                        {
                                            v42 = v3 - (stack_base + 1);
                                        }
                                    }
                                    else
                                    {
                                        v40 = v2 - v13;
                                    }
                                    if (v39 != 0)
                                    {
                                        v42 = v39 - (stack_base + 1);
                                    }
                                    if ((v38 != 0 || v39 != 0) && v40 == v42)
                                    {
                                        v43 = strncmp(v13, stack_base + 1, v40);
                                        if (v43 == 0)
                                        {
                                            v40 = v2 - v13;
                                        }
                                    }
                                    if ((v38 == 0 || v40 == v42) && (v38 == 0 || v43 == 0) && (v40 == v42 || v39 == 0) && (v43 == 0 || v39 == 0))
                                    {
                                        v42 = v3 - (stack_base + 1);
                                    }
                                    v47 = 0;
                                    v46 = 0;
                                    while (v40 > v46 || v42 > v47)
                                    {
                                        if (v40 > v46 || v40 > v46)
                                        {
                                            v51 = (char)*((char *)(v13 + v46));
                                            if ((unsigned int)(char)*((char *)(v13 + v46)) - 48 > 9)
                                            {
                                                v52 = v51;
                                                if ((unsigned int)(v51 - 48) > 9)
                                                {
                                                    v50 = (unsigned int)v52;
                                                }
                                                else if (v42 != v47)
                                                {
                                                    v44 = v5;
                                                }
                                            }
                                        }
                                        if ((unsigned int)(v51 - 48) <= 9 && (unsigned int)(char)*((char *)(v13 + v46)) - 48 > 9 && v42 != v47 && (v40 > v46 || v40 > v46) || (unsigned int)((unsigned long long)(char)*((char *)(v13 + v46)) - 48) <= 9 || v40 == v46)
                                        {
                                            v51 = v5;
                                        }
                                        if ((unsigned int)(v51 - 48) <= 9 && (unsigned int)(char)*((char *)(v13 + v46)) - 48 > 9 && (v40 > v46 || v40 > v46) && v42 == v47 || v51 == 0 || ((unsigned int)(v51 - 48) <= 9 && (unsigned int)(char)*((char *)(v13 + v46)) - 48 > 9 && v42 != v47 && (v40 > v46 || v40 > v46) || (unsigned int)((unsigned long long)(char)*((char *)(v13 + v46)) - 48) <= 9 || v40 == v46) && (unsigned int)((unsigned long long)v5 - 48) <= 9)
                                        {
                                            v46 += 1;
                                            v47 += 1;
                                        }
                                        if (((unsigned int)(v51 - 48) <= 9 && (unsigned int)(char)*((char *)(v13 + v46)) - 48 > 9 && (v40 > v46 || v40 > v46) && v42 == v47 || v51 == 0 || ((unsigned int)(v51 - 48) <= 9 && (unsigned int)(char)*((char *)(v13 + v46)) - 48 > 9 && v42 != v47 && (v40 > v46 || v40 > v46) || (unsigned int)((unsigned long long)(char)*((char *)(v13 + v46)) - 48) <= 9 || v40 == v46) && (unsigned int)((unsigned long long)v5 - 48) <= 9) && v40 <= v46 || (v40 > v46 || v40 > v46) && (unsigned int)(char)*((char *)(v13 + v46)) - 48 <= 9 || v40 <= v46)
                                        {
                                            v48 = (char)*(&((char *)stack_base)[1 + v47]);
                                            v49 = (char)*(&((char *)stack_base)[1 + v47]);
                                            if (v42 > v47 && (unsigned int)v48 - 48 > 9 && v40 != v46)
                                            {
                                                v50 = (char)*((char *)(v13 + v46));
                                                v51 = (char)*((char *)(v13 + v46));
                                                v52 = (char)*((char *)(v13 + v46));
                                            }
                                        }
                                        if (unknown)
                                        {
                                            v53 = v50 - 65;
                                            if ((unsigned int)v53 <= 57 && (288230371923853311 & 1 << (v53 & 63)) != 0)
                                            {
                                                v51 = 0;
                                            }
                                        }
                                        if (unknown)
                                        {
                                            if (v51 != 126)
                                            {
                                                v54 = (unsigned long long)v52 + 0x100;
                                            }
                                            else
                                            {
                                                v54 = -18446744069414584321;
                                            }
                                            if (v42 == v46)
                                            {
                                                v62 = v54;
                                            }
                                        }
                                        if (unknown)
                                        {
                                            v55 = (char)*(&((char *)stack_base)[1 + v47]);
                                            if ((unsigned int)((unsigned long long)(char)*(&((char *)stack_base)[1 + v47]) - 48) <= 9)
                                            {
                                                v51 = 0;
                                            }
                                        }
                                        if (unknown)
                                        {
                                            if (v5 != 126)
                                            {
                                                v51 = (unsigned int)v5 + 0x100;
                                            }
                                            else
                                            {
                                                v51 = -18446744069414584321;
                                            }
                                        }
                                        if (unknown)
                                        {
                                            v62 = 0 - v51;
                                        }
                                        if (unknown)
                                        {
                                            while (true)
                                            {
                                                v56 = (char)*((char *)(v13 + v46));
                                                if (*((char *)(v13 + v46)) != 48)
                                                {
                                                    break;
                                                }
                                                v46 += 1;
                                            }
                                            if (v48 == 48)
                                            {
                                                do
                                                {
                                                    v47 += 1;
                                                    v49 = (char)*(&((char *)stack_base)[1 + v47]);
                                                }
                                                while (*(&((char *)stack_base)[1 + v47]) == 48);
                                            }
                                            v57 = (unsigned int)v49 - 48;
                                            if ((unsigned int)(v56 - 48) > 9)
                                            {
                                                if (v57 <= 9)
                                                {
                                                    break;
                                                }
                                            }
                                            else if (v57 <= 9)
                                            {
                                                v58 = v46;
                                                v59 = 0;
                                                v60 = v47 - v46 + stack_base + 1;
                                                while (true)
                                                {
                                                    v59 = (v59 == 0? (unsigned int)(v56 - v49) : (unsigned int)r9);
                                                    v58 += 1;
                                                    v49 = (char)*((char *)(v60 + v58));
                                                    v1 = v58 - v46 + v47;
                                                    v56 = (char)*((char *)(v13 + v58));
                                                    v0 = (unsigned int)v49 - 48;
                                                    if ((unsigned int)(v56 - 48) > 9)
                                                    {
                                                        if (v0 <= 9)
                                                        {
                                                            break;
                                                        }
                                                        if (v59 == 0)
                                                        {
                                                            v47 = v1;
                                                            v46 = v58;
                                                        }
                                                        else
                                                        {
                                                            v62 = v59;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        if (v0 > 9)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                }
                                                if ((unsigned int)(v56 - 48) > 9)
                                                {
                                                    v62 = -18446744069414584321;
                                                }
                                                else if ((unsigned int)(v56 - 48) <= 9)
                                                {
                                                    v62 = 1;
                                                }
                                                else if (v59 != 0 && (unsigned int)(v56 - 48) > 9 && v0 > 9)
                                                {
                                                    v63 = v62;
                                                    v64 = *((long long *)&v4);
                                                    v65 = v7;
                                                    v66 = v8;
                                                    v67 = v9;
                                                    v68 = v10;
                                                    return v63;
                                                }
                                            }
                                        }
                                    }
                                    if (unknown)
                                    {
                                        v62 = -18446744069414584321;
                                    }
                                    else if (unknown)
                                    {
                                        v62 = 1;
                                    }
                                    else if (unknown)
                                    {
                                        v63 = v62;
                                        v64 = *((long long *)&v4);
                                        v65 = v7;
                                        v66 = v8;
                                        v67 = v9;
                                        v68 = v10;
                                        return v63;
                                    }
                                }
                                if (v4 == 46 && *((char *)v13) == 46 && v4 == 46 && *((char *)v13) == 46)
                                {
                                    v13 += 1;
                                }
                            }
                        }
                    }
                }
            }
            if ((v4 == 0 || (char)v20 != 0) && (v4 == 0 || (char)v26 == 0 || (char)v32 != 0) && (v4 == 0 || v4 == 46 || (char)v37 == 0 || (char)v26 == 0 || *((char *)v13) != 46))
            {
                v62 = 1;
            }
        }
        if (*((char *)v13) == 0 || (char)v20 == 0 && v4 != 0 || (char)v32 == 0 && v4 != 0 && (char)v26 != 0 || *((char *)v13) == 46 && v4 != 0 && (char)v37 != 0 && (char)v26 != 0 || v4 != 0 && v4 != 46 && (char)v37 != 0 && (char)v26 != 0)
        {
            v62 = -18446744069414584321;
        }
    }
    v63 = v62;
    v64 = *((long long *)&v4);
    v65 = v7;
    v66 = v8;
    v67 = v9;
    v68 = v10;
    return v63;
}

extern unsigned int g_6246c0;
extern unsigned int g_6256f0;
extern unsigned long long g_625758;
extern unsigned long long g_625760;
extern unsigned long long g_625770;
extern unsigned long long g_625780;

int sub_404f40()
{
    unsigned long long v1;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // rax
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rdx
    unsigned long long *v8;  // rax

    v1 = g_625770;
    v2 = (g_625770 >> 1) + g_625770;
    if ((g_625770 >> 1) + g_625770 > g_625758)
    {
        free(g_625760);
        if ((INVALID_IR? 1 :  amd64g_calculate_condition(0x0, 0x30, 0x18, rbx, cc_ndep)) == 0)
        {
            v1 = g_625770;
            g_625760 = (unsigned int)sub_412980();
            v2 = g_625770 * 3;
            g_625758 = g_625770 * 3;
        }
        else
        {
            sub_412bd0(); /* do not return */
        }
    }
    if ((g_625770 >> 1) + g_625770 <= g_625758 || (INVALID_IR? 1 :  amd64g_calculate_condition(0x0, 0x30, 0x18, rbx, cc_ndep)) == 0)
    {
        if (v1 != 0)
        {
            v2 = g_625760;
            v5 = g_625780;
            v4 = g_625760 + v1 * 8;
            do
            {
                *(v2) = v5;
                v2 = &v2[1];
                v5 += 200;
            }
            while (v4 != v2);
        }
        if (g_6256f0 != -1)
        {
            v6 = _setjmp(0x6246c0);
            if (v6 != 0)
            {
                if (!(g_6256f0 != 3))
                {
                    __assert_fail(); /* do not return */
                }
                else if (g_625770 != 0)
                {
                    v7 = g_625780;
                    v8 = g_625760;
                    do
                    {
                        *(v8) = v7;
                        v8 = &v8[1];
                        v7 += 200;
                    }
                    while (v8 != g_625760 + (g_625770 << 3));
                }
            }
            if (v6 == 0 || g_6256f0 != 3)
            {
                v2 = sub_40edd0();
            }
        }
        if (g_6256f0 != 3)
        {
            return v2;
        }
    }
}

extern unsigned long long g_6255b8;
extern unsigned long long stdout[7];

int sub_4058a0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // rax
    unsigned long long v2;  // rbx

    v1 = sub_4057b0();
    v2 = v1;
    if (v1 != 0)
    {
        v1 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *((unsigned long long *)&v1) = v2;
        }
        else
        {
            v1 = __overflow();
        }
        g_6255b8 = g_6255b8 + 1;
    }
    return v1;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    char padding_34[36];
    unsigned long long field_58;
    char padding_60[72];
    unsigned int field_a8;
    unsigned int field_ac;
    unsigned long long field_b0;
    char field_b8;
    char field_b9;
    char padding_ba[2];
    unsigned int field_bc;
    char field_c0;
    char padding_c1[3];
    unsigned int field_c4;
} struct_1;

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

extern char g_4086dd;
extern char g_408723;
extern int512_t g_4087d4;
extern char g_408940;
extern char g_408959;
extern char g_40896b;
extern int512_t g_4089a4;
extern int512_t g_4089ae;
extern int512_t g_408a06;
extern int512_t g_408a30;
extern int512_t g_408a38;
extern int512_t g_408a8a;
extern int512_t g_408a92;
extern int512_t g_408abb;
extern int512_t g_408ac3;
extern char g_408b07;
extern char g_408b14;
extern char g_408b67;
extern char g_408b85;
extern char g_408b94;
extern char g_408bbf;
extern int512_t g_408c08;
extern int512_t g_408c10;
extern int512_t g_408d72;
extern int512_t g_408d7c;
extern char g_408dd6;
extern char g_408e29;
extern char g_408e4b;
extern char g_408e63;
extern char g_408e74;
extern char g_408e95;
extern char g_408ea0;
extern char g_408ed1;
extern char g_408f0c;
extern int512_t g_408f88;
extern int512_t g_408fa8;
extern int512_t g_408fed;
extern char g_409050;
extern char g_4090c5;
extern char g_4090df;
extern char g_4090f2;
extern char g_40915a;
extern char g_409175;
extern char g_409191;
extern char g_4091a0;
extern int512_t g_409228;
extern int512_t g_40923b;
extern char g_409259;
extern unsigned int g_41b064;
extern unsigned int g_41b0a5;
extern unsigned int g_41b0bd;
extern unsigned int g_41b0ce;
extern char g_6245a8;
extern char g_6245a9;
extern int512_t g_6245aa;
extern unsigned long long g_6246a8;
extern unsigned long long g_6246b0;
extern unsigned long long g_6246b8;
extern char g_625660;
extern char g_625661;
extern char g_6256b5;
extern unsigned int g_6256b8;
extern char g_6256bc;
extern char g_6256bd;
extern char g_6256d1;
extern char g_6256d2;
extern unsigned int g_6256d4;
extern char g_6256ec;
extern char g_6256ed;
extern char g_6256ee;
extern unsigned int g_6256f8;
extern unsigned int g_6256fc;
extern unsigned int g_625700;
extern unsigned int g_625704;
extern unsigned int g_625708;
extern void g_62570c;
extern unsigned int g_625710;
extern unsigned int g_625714;
extern unsigned int g_625718;
extern unsigned int g_62571c;
extern unsigned int g_625720;
extern char g_625724;
extern char g_625725;
extern char g_625750;
extern char g_625768;
extern char g_625769;
extern unsigned long long g_625770;
extern unsigned long long g_625778;
extern unsigned long long g_625780;

int sub_408580()
{
    void tmp_11;  // tmp #11
    unsigned long v0;  // [bp-0x360]
    void tmp_12;  // tmp #12
    unsigned long v1;  // [bp-0x358]
    unsigned long v2;  // [bp-0x350]
    unsigned long v3;  // [bp-0x348]
    unsigned long v4;  // [bp-0x340]
    unsigned long v5;  // [bp-0x338]
    unsigned long v6;  // [bp-0x330]
    unsigned long v7;  // [bp-0x328]
    unsigned long v8;  // [bp-0x320]
    unsigned long v9;  // [bp-0x318]
    unsigned long v10;  // [bp-0x310]
    char v11;  // [bp-0x2fa]
    char v12;  // [bp-0x2f9]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // [bp-0x2f8]
    char *v14;  // [bp-0x2f0]
    char v15;  // [bp-0x2c8]
    char v16;  // [bp-0x2c4]
    unsigned int v17;  // [bp-0x2b0]
    unsigned long v19;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // r15
    char v21[2];  // rsi
    unsigned int v22;  // r14d
    unsigned long long v23;  // rdx
    unsigned long long v24;  // r13
    char *v25;  // rdi
    unsigned long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long *v29;  // rcx
    unsigned long long *v30;  // rdi
    struct v31;  // rbx
    unsigned long long *v32;  // rdi
    unsigned long long v33;  // rcx
    unsigned long v34;  // d
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // dl
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    char *v47;  // rdi
    struct v48;  // rsi
    unsigned long long v51;  // r10
    char *v52;  // rcx
    char *v53;  // rax
    unsigned long long v54;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v55;  // r12
    unsigned long long v56;  // rax
    unsigned long long v58;  // rax
    unsigned long long v59;  // rax
    unsigned int *v60;  // rax
    unsigned long long v61;  // rax
    unsigned long long v62;  // r12
    unsigned long long v66;  // r14
    unsigned long long v67;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v69;  // rax
    unsigned long long v70;  // rax
    unsigned long v73;  // rsi
    char *v74;  // r14
    unsigned long long v78;  // r15
    unsigned long long v81;  // rax
    unsigned long long v85;  // rdi
    unsigned int *v87;  // rax
    unsigned long long v88;  // rdx
    unsigned long v89;  // rdx
    char *v91;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v95;  // rax
    unsigned long long v97;  // rdx
    unsigned long long v99;  // rax

    v20 = v19;
    v22 = (unsigned int)v21;
    v24 = v23;
    rsp = stack_base + -776;
    v29 = g_625770;
    v14 = v25;
    v30 = g_625780;
    if (g_625770 == g_625778)
    {
        v26 =  amd64g_calculate_condition(0x0, 0x30, 0x190, rcx, cc_ndep);
        if (!(INVALID_IR) && v26 == 0)
        {
            rsp = stack_base + -784;
            v27 = sub_4129e0();
            v29 = g_625770;
            g_625778 = g_625778 * 2;
            g_625780 = v27;
            v30 = v27;
        }
        if (INVALID_IR || v26 != 0)
        {
            sub_412bd0(); /* do not return */
        }
    }
    if (g_625770 != g_625778 || v26 == 0 && !(INVALID_IR))
    {
        v31 = (char *)v30 + 0xc8 * v29;
        *((long long *)((char *)v30 + 0xc8 * v29)) = 0;
        *((long long *)&((char *)((char *)v30 + 0xc8 * v29))[188]) = 0;
        v32 = &((unsigned long long *)((char *)v30 + 0xc8 * v29))[1] & -8;
        for (v33 = (unsigned long long)((unsigned int)(v31 - v32) + 196) >> 3; v33 != 0; v32 = &v32[v34])
        {
            v33 -= 1;
            *(v32) = 0;
        }
        v31->field_20 = 0;
        v31->field_a8 = (unsigned int)v21;
        v31->field_c4 = -1;
        if (g_625769 == 0 && g_625768 != 0)
        {
            rsp = stack_base + -784;
            v35 = sub_404e20();
            v31->field_c4 = v35;
            if (v35 != 0)
            {
                g_625769 = 1;
            }
        }
        v54 = g_6256d1;
        if (v24 != 0)
        {
            v36 = *(v14);
            v55 = v14;
            if (*(v14) != 47)
            {
                v37 = v21[0];
            }
            if (unknown)
            {
                v13 = g_6256b8;
                rsp = rsp - 8;
                v10 = &g_408bbf;
                v58 = __xstat(0x1, (unsigned int)v55, v20);
                if (v13 != 3)
                {
                    if (v58 >= 0)
                    {
                    }
                    else
                    {
                        rsp = rsp - 8;
                        v9 = &g_4090c5;
                        v60 = __errno_location();
                    }
                }
            }
        }
        else if (!(g_6256d1 == 0))
        {
            v36 = *(v14);
            if (*(v14) == 47)
            {
                v55 = v14;
            }
            else
            {
                v37 = v21[0];
                v55 = v14;
            }
        }
        else if (g_625661 == 0)
        {
            if ((unsigned int)v21 == 3 && g_6256d2 != 0)
            {
                v13 = g_6256d1;
                rsp = stack_base + -784;
                v38 = sub_404ae0();
                v54 = v13;
                if (v38 == 0)
                {
                    rsp = stack_base + -784;
                    v39 = sub_404ae0();
                    v54 = v13;
                    if (v39 == 0)
                    {
                        rsp = stack_base + -784;
                        v40 = sub_404ae0();
                        v54 = v13;
                    }
                }
            }
            if (g_6256d2 == 0 || (unsigned int)v21 != 3 || v39 == 0 && v38 == 0 && v40 == 0)
            {
                if (!(g_6256bc == 0))
                {
                    v41 = (char)((unsigned int)v21 == 0);
                }
                else if (g_625660 != 0)
                {
                    v41 = v33;
                }
            }
        }
        if (unknown)
        {
            v62 = 0;
        }
        if (unknown)
        {
            v62 = 0;
            if ((unsigned int)v21 == 5 && g_6256d4 != 3)
            {
                *((unsigned long long *)&v13) = v54;
                if (g_6256d2 != 0)
                {
                    rsp = stack_base + -784;
                    v42 = sub_404ae0();
                    v54 = v13;
                    if (v42 == 0)
                    {
                        rsp = stack_base + -784;
                        v43 = sub_404ae0();
                        v54 = v13;
                        if (v43 == 0)
                        {
                            rsp = stack_base + -784;
                            v44 = sub_404ae0();
                            v54 = v13;
                            if (v44 == 0)
                            {
                                rsp = stack_base + -784;
                                v45 = sub_404ae0();
                                v54 = v13;
                            }
                        }
                    }
                }
            }
        }
        if (unknown)
        {
            v36 = *(v14);
            if (*(v14) != 47)
            {
                v37 = v21[0];
            }
        }
        if (unknown)
        {
            v20 = (unsigned int)v31 + 24;
            v55 = v14;
        }
        if (unknown)
        {
            *((unsigned long long *)&v11) = v54;
            *((unsigned long long *)&v12) = v36;
            *((unsigned long long *)&v13) = v37;
            v46 = strlen(v14) + strlen(v21) + 25 & -0x10;
            rsp = stack_base + -776 - v46;
            v47 = stack_base + -776 - v46 + 15 & -0x10;
            v55 = stack_base + -776 - v46 + 15 & -0x10;
            if (v13 == 46)
            {
                v53 = stack_base + -776 - v46 + 15 & -0x10;
            }
            if (v21[1] != 0 || v13 != 46)
            {
                v21 = v20;
                while (true)
                {
                    v53 = &v47[1];
                    v48 = &v48->field_1;
                    *((unsigned long long *)&v47) = v37;
                    if (r10b == 0)
                    {
                        break;
                    }
                    v37 = r10;
                    v51 = v48->field_1;
                    v47 = v53;
                }
                if (v48 < v48 && v48[-1].field_1 != 47)
                {
                    *(v53) = 47;
                    v53 = &v47[2];
                }
            }
            if (v12 != 0)
            {
                v52 = v14;
                do
                {
                    v52 = &v52[1];
                    v53 = &v53[1];
                    *((unsigned long long *)&v53[-1]) = v36;
                    v36 = *(v52);
                }
                while ((char)v36 != 0);
            }
            *(v53) = 0;
        }
        if (unknown)
        {
            rsp = rsp - 8;
            v10 = &g_408b67;
            v56 = sub_40b070();
            v31->field_10 = v56;
            if (v56 == 0)
            {
                rsp = rsp - 8;
                v9 = &g_408b85;
                dcgettext(0x0, 0x41b0a5, 0x5);
                rsp = rsp - 8;
                v8 = &g_408b94;
                sub_405580();
            }
        }
        if (unknown)
        {
            v20 = &v31->field_18;
        }
        if (unknown)
        {
            rsp = rsp - 8;
            v10 = &g_4086dd;
            v59 = __xstat(0x1, (unsigned int)v55, v20);
        }
        if (unknown)
        {
            rsp = rsp - 8;
            v8 = &g_408940;
            v61 = __lxstat(0x1, (unsigned int)v55, v20);
        }
        if (unknown)
        {
            rsp = rsp - 8;
            v9 = &g_408959;
            dcgettext(0x0, 0x41b0bd, 0x5);
            v62 = 0;
            rsp = rsp - 8;
            v8 = &g_40896b;
            sub_405580();
        }
        if (unknown)
        {
            v31->field_b8 = 1;
            if ((((unsigned short)v31->field_30 & 0xf000) == 0x8000 || v22 == 5) && g_6256d2 != 0)
            {
                rsp = rsp - 8;
                v9 = &g_408b07;
                if (sub_404ae0() != 0)
                {
                    rsp = rsp - 8;
                    v8 = &g_408b14;
                    v66 = v31->field_18;
                    *(__errno_location()) = 95;
                    if (false)
                    {
                        g_6246b8 = v66;
                    }
                    v31->field_c0 = 0;
                }
            }
            if (g_6256f8 == 0 || g_625725 != 0)
            {
                rsp = rsp - 8;
                v8 = &g_408723;
                v67 = v31->field_18;
                *((int *)*((long long *)&v13)) = 95;
                if (false)
                {
                    g_6246b0 = v67;
                }
                v31->field_b0 = "?";
            }
            if (g_6256f8 != 0)
            {
                if (g_625725 != 0)
                {
                    v31->field_bc = 0;
                }
                v69 = v31->field_30 & 0xf000;
            }
            else if (g_6246b0 != g_6246a8)
            {
                *((int *)*((long long *)&v13)) = 0;
                v13 = __errno_location();
                rsp = rsp - 8;
                v7 = &g_408dd6;
                v70 = sub_40b900();
                if (v70 > 0)
                {
                    v31->field_bc = 2;
                    g_625724 = 1;
                }
                else
                {
                    if (((unsigned int)((unsigned long long)*(v13) - 22) & -17) == 0 || *(v13) == 95)
                    {
                        g_6246a8 = v31->field_18;
                    }
                    v31->field_bc = 0;
                    if (v70 < 0)
                    {
                        v13 = v13;
                        rsp = rsp - 8;
                        v6 = &g_40915a;
                        sub_412110();
                        v73 = *(v13);
                        rsp = rsp - 8;
                        v5 = &g_409175;
                        error(0x0, v73, "%s");
                    }
                }
                v69 = v31->field_30 & 0xf000;
            }
            else
            {
                *((int *)*((long long *)&v13)) = 95;
                tmp_11 = v31->field_30;
                v31->field_bc = 0;
                v69 = (unsigned int)tmp_11 & 0xf000;
            }
            if (((unsigned short)v31->field_30 & 0xf000) == 0xa000 && g_6256f8 != 0 || ((unsigned short)tmp_11 & 0xf000) == 0xa000 && g_6246b0 == g_6246a8 && g_6256f8 == 0 || ((unsigned short)v31->field_30 & 0xf000) == 0xa000 && g_6256f8 == 0 && g_6246b0 != g_6246a8)
            {
                if (g_6256f8 == 0 || g_6256bd != 0)
                {
                    rsp = rsp - 8;
                    v8 = &g_408e29;
                    v74 = (unsigned long long)(unsigned int)sub_40abf0();
                    v31->field_8 = v74;
                    if (v74 == 0)
                    {
                        rsp = rsp - 8;
                        v7 = &g_409191;
                        dcgettext(0x0, 0x41b0ce, 0x5);
                        rsp = rsp - 8;
                        v6 = &g_4091a0;
                        sub_405580();
                        v74 = v31->field_8;
                    }
                    if (v74 != 0 || v31->field_8 != 0)
                    {
                        if (*(v74) != 47)
                        {
                            rsp = rsp - 8;
                            v5 = &g_408e4b;
                            if (v13 != 0)
                            {
                                *((int *)&v13) = sub_40b7b0();
                                rsp = rsp - 8;
                                v4 = &g_408e63;
                                strlen(v74);
                                rsp = rsp - 8;
                                v3 = &g_408e74;
                                v78 = (unsigned int)sub_412980();
                                rsp = rsp - 8;
                                v2 = &g_408e95;
                                rsp = rsp - 8;
                                v1 = &g_408ea0;
                                strcpy((unsigned long long)stpncpy(v78, (unsigned int)v55), v74);
                            }
                        }
                        if (*(v74) == 47 || v13 == 0)
                        {
                            rsp = rsp - 8;
                            v5 = &g_409050;
                            v78 = (unsigned int)sub_412bb0();
                        }
                        if (v78 != 0)
                        {
                            if (v31->field_c4 == 0)
                            {
                                rsp = rsp - 8;
                                v0 = &g_409259;
                                if (sub_404e20() != 0)
                                {
                                    v31->field_c4 = -1;
                                }
                            }
                            if (g_6256bd != 0 || g_6256d4 > 1)
                            {
                                rsp = rsp - 8;
                                v0 = &g_408f0c;
                                v81 = __xstat(0x1, v78, (unsigned int)&v15);
                                if (v81 == 0)
                                {
                                    v31->field_b9 = 1;
                                    if (v24 == 0 || g_6256f8 == 0 || ((unsigned short)v17 & 0xf000) != 0x4000)
                                    {
                                        v31->field_ac = v17;
                                    }
                                }
                            }
                        }
                    }
                    if (v78 == 0 || v74 == 0 && v31->field_8 == 0)
                    {
                        v78 = 0;
                    }
                    rsp = rsp - 8;
                    v0 = &g_408ed1;
                    free(v78);
                    v69 = v31->field_30 & 0xf000;
                }
                if ((((unsigned short)v31->field_30 & 0xf000) == 0xa000 || g_6256bd == 0) && (((unsigned short)v31->field_30 & 0xf000) == 0xa000 || g_6256f8 != 0))
                {
                    v31->field_a8 = 6;
                }
            }
            if (g_6256f8 == 0 && ((unsigned short)v31->field_30 & 0xf000) != 0xa000 || ((unsigned short)v31->field_30 & 0xf000) != 0xa000 && g_6256bd != 0 || ((unsigned short)v31->field_30 & 0xf000) != 0xa000 && g_6256f8 != 0 || g_6246b0 == g_6246a8 && g_6256f8 == 0 && ((unsigned short)tmp_11 & 0xf000) != 0xa000 || g_6256f8 == 0 && ((unsigned short)v31->field_30 & 0xf000) != 0xa000 && g_6246b0 != g_6246a8)
            {
                if (v69 != 0x4000)
                {
                    v31->field_a8 = 5;
                }
                else
                {
                    if (v24 != 0 && g_6256b5 == 0)
                    {
                        v31->field_a8 = 9;
                    }
                    if (v24 == 0 || g_6256b5 != 0)
                    {
                        v31->field_a8 = 3;
                    }
                }
            }
            v62 = v31->field_58;
            if (g_6256f8 == 0 || g_6256ec != 0)
            {
                rsp = rsp - 8;
                *((long long **)rsp) = &g_4089a4;
                sub_40d5d0();
                rsp = rsp - 8;
                *((long long **)rsp) = &g_4089ae;
                if (g_62571c > g_62571c)
                {
                    g_62571c = sub_40eb70();
                }
            }
            if (g_6256f8 != 0)
            {
            }
            else
            {
                if (g_6245a9 != 0)
                {
                    rsp = rsp - 8;
                    *((long long **)rsp) = &g_408f88;
                    if (g_625710 > g_625710)
                    {
                        g_625710 = sub_408410();
                    }
                }
                if (g_6245a8 != 0)
                {
                    if (g_6256ed == 0)
                    {
                        rsp = rsp - 8;
                        *((long long **)rsp) = &g_409228;
                        v85 = (unsigned int)sub_40e2f0();
                        if (v85 != 0)
                        {
                            rsp = rsp - 8;
                            *((long long **)rsp) = &g_40923b;
                            v87 = (unsigned long long)(unsigned int)(sub_40eb70() < 0? 0 : (unsigned int)rax);
                        }
                    }
                    if (v85 == 0 || g_6256ed != 0)
                    {
                        rsp = rsp - 8;
                        *((long long **)rsp) = &g_408fed;
                        __sprintf_chk((unsigned int)&v15, 0x1, 0x15, 0x41b064);
                        v87 = &v15;
                        do
                        {
                            tmp_12 = (unsigned int)*((int *)&v15);
                            v87 = &v16;
                            v88 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                        }
                        while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                        v89 = (unsigned int)(((unsigned int)v88 & 32896) == 0? (unsigned int)(v88 >> 16) : (unsigned int)v88);
                        v87 = (unsigned int)(char *)(-3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v87 + 2) : v87) + -1 * ((v89 + v89 <= v89? 1 : 0) & 1) + -0x1 * &v15);
                    }
                    if (*((int *)&g_62570c) < v87)
                    {
                        *((unsigned int **)&g_62570c) = v87;
                    }
                }
                if (g_6256ee != 0)
                {
                    rsp = rsp - 8;
                    *((long long **)rsp) = &g_408fa8;
                    if (g_625708 > g_625708)
                    {
                        g_625708 = sub_408410();
                    }
                }
            }
            if (g_625725 != 0)
            {
                v91 = v31->field_b0;
                rsp = rsp - 8;
                *((long long **)rsp) = &g_408a06;
                if (g_625714 > g_625714)
                {
                    g_625714 = strlen(v91);
                }
            }
            if ((g_6256f8 == 0 || g_625725 != 0) && g_6256f8 == 0)
            {
                rsp = rsp - 8;
                *((long long **)rsp) = &g_408a30;
                rsp = rsp - 8;
                *((long long **)rsp) = &g_408a38;
                if (g_625718 > g_625718)
                {
                    g_625718 = strlen((unsigned long long)(unsigned int)sub_40e520());
                }
                if (((unsigned short)v31->field_30 & 0xb000) == 0x2000)
                {
                    rsp = rsp - 8;
                    *((long long **)rsp) = &g_408a8a;
                    rsp = rsp - 8;
                    *((long long **)rsp) = &g_408a92;
                    if (g_625704 > g_625704)
                    {
                        g_625704 = strlen((unsigned long long)(unsigned int)sub_40e520());
                    }
                    rsp = rsp - 8;
                    *((long long **)rsp) = &g_408abb;
                    rsp = rsp - 8;
                    *((long long **)rsp) = &g_408ac3;
                    v95 = strlen((unsigned long long)(unsigned int)sub_40e520());
                    v97 = g_625700;
                    if (g_625700 > g_625700)
                    {
                        g_625700 = v95;
                        v97 = g_625700;
                    }
                    v95 = v97 + g_625704 + 2;
                }
                else
                {
                    rsp = rsp - 8;
                    *((long long **)rsp) = &g_408d72;
                    sub_40d5d0();
                    rsp = rsp - 8;
                    *((long long **)rsp) = &g_408d7c;
                    v95 = sub_40eb70();
                }
                if (((unsigned short)v31->field_30 & 0xb000) == 0x2000 && (unsigned int)(v97 + g_625704 + 2) > g_6256fc || (unsigned int)v95 > g_6256fc && ((unsigned short)v31->field_30 & 0xb000) != 0x2000)
                {
                    *((unsigned long *)&g_6256fc) = v95;
                }
            }
            if (g_6256bc != 0)
            {
                rsp = rsp - 8;
                *((long long **)rsp) = &g_408c08;
                rsp = rsp - 8;
                *((long long **)rsp) = &g_408c10;
                if (g_625720 > g_625720)
                {
                    g_625720 = strlen((unsigned long long)(unsigned int)sub_40e520());
                }
            }
        }
        if (unknown)
        {
            rsp = rsp - 8;
            v8 = &g_4090df;
            dcgettext(0x0, 0x41b0bd, 0x5);
            v62 = 0;
            rsp = rsp - 8;
            v7 = &g_4090f2;
            sub_405580();
        }
        if (unknown)
        {
            rsp = rsp - 8;
            *((long long **)rsp) = &g_4087d4;
            g_625770 = g_625770 + 1;
            v31->field_0 = (unsigned int)sub_412bb0();
        }
        v99 = v62;
        return v99;
    }
}

int sub_411d42()
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

typedef struct struct_1 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned long long field_68;
    char padding_70[56];
    unsigned int field_a8;
} struct_1;

typedef struct struct_0 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned int field_68;
    char padding_6c[60];
    unsigned int field_a8;
} struct_0;

int sub_40a310()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    struct v3;  // rsi
    struct v4;  // r8
    char v5;  // al
    unsigned int v6;  // ecx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v2 = v1->field_a8;
    v4 = v3;
    v5 = v1->field_a8 == 9;
    v7 = v6 | rax;
    if (v3->field_a8 == 3 || v7 == 0 || v3->field_a8 == 9)
    {
        if (v3->field_60 <= v1->field_60 && (v3->field_a8 != 3 || v7 != 0) && (v7 != 0 || v3->field_a8 != 9))
        {
            if (v3->field_60 >= v1->field_60)
            {
                v8 = (unsigned int)v1->field_68 - v4->field_68;
            }
            else
            {
                return 1;
            }
        }
        if ((v3->field_60 <= v1->field_60 || v7 == 0) && (v7 == 0 || v3->field_60 >= v1->field_60) && (v7 == 0 || (unsigned int)v1->field_68 != v4->field_68) && (v3->field_a8 == 3 || v3->field_60 <= v1->field_60 || v3->field_a8 == 9) && (v3->field_a8 == 3 || v3->field_a8 == 9 || v3->field_60 >= v1->field_60) && (v3->field_a8 == 3 || v3->field_a8 == 9 || (unsigned int)v1->field_68 != v4->field_68))
        {
            return v8;
        }
    }
    if (v7 == 0)
    {
        v8 = 1;
    }
    if ((v3->field_a8 != 3 || v3->field_60 > v1->field_60) && (v3->field_a8 != 3 || v7 != 0) && (v3->field_60 > v1->field_60 || v7 != 0) && (v3->field_60 > v1->field_60 || v3->field_a8 != 9) && (v7 != 0 || v3->field_a8 != 9))
    {
        return -18446744069414584321;
    }
}

// int sub_412c9d()

typedef struct struct_0 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned int field_68;
} struct_0;

int sub_409ef0()
{
    struct v1;  // rdi
    unsigned long long v2[14];  // rsi
    unsigned long long v3;  // rax

    if (v1->field_60 <= v2[12])
    {
        if (v1->field_60 >= v2[12])
        {
            v3 = (unsigned int)v2[13] - v1->field_68;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_60 < v2[12] || (unsigned int)v2[13] != v1->field_68)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

typedef struct struct_0 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned int field_68;
} struct_0;

int sub_409e20()
{
    struct v1;  // rsi
    unsigned long long v2[14];  // rdi
    unsigned long long v3;  // rax

    if (v1->field_60 <= v2[12])
    {
        if (v1->field_60 >= v2[12])
        {
            v3 = (unsigned int)v2[13] - v1->field_68;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_60 < v2[12] || (unsigned int)v2[13] != v1->field_68)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

int sub_411fd0()
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
    return sub_411a40();
}

int sub_40c930()
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

int sub_40c9a0()
{
    unsigned long long v1[2];  // rdi
    unsigned long long v2[2];  // r14
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

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[88];
    unsigned int field_a8;
} struct_0;

int sub_408040()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if ((v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0) && v6->field_48 <= v1->field_48 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0) && v6->field_48 != v1->field_48)
    {
        return (unsigned long long)(char)(v6->field_48 < v1->field_48);
    }
    if (v5 == 0 && (v6->field_a8 == 3 || v6->field_a8 == 9))
    {
        return 1;
    }
    if ((v6->field_48 > v1->field_48 || v6->field_a8 != 3) && (v6->field_48 > v1->field_48 || v6->field_a8 != 9) && (v6->field_48 > v1->field_48 || v5 != 0) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned short field_8;
} struct_1;

int sub_417410()
{
    void *v1;  // rdi
    unsigned long long v2;  // rax
    struct v3;  // rbx
    unsigned long v4;  // rbp
    struct v5;  // rax
    struct v7;  // rax

    if (v1 != 0)
    {
        v2 = strlen(v1);
        v4 = v2 + 1;
        v3 = malloc((118 <= v2 + 1? v2 + 1 : 118) + 17 & -8);
        if (v3 != 0)
        {
            v3->field_0 = 0;
            v3->field_8 = 1;
            memcpy((char *)&v3->field_8 + 1, v1, v4);
            *(&((char *)&v3->field_0)[9 + v4]) = 0;
        }
    }
    else
    {
        v3 = malloc(0x80);
        if (v3 != 0)
        {
            v3->field_0 = 0;
            v5 = v3;
            v3->field_8 = 0;
            return v5;
        }
    }
    if (v3 == 0 || v1 != 0)
    {
        v7 = v3;
        return v7;
    }
}

int sub_4050d0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
}

typedef struct struct_0 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned int field_78;
} struct_0;

int sub_409eb0()
{
    struct v1;  // rsi
    unsigned long long v2[16];  // rdi
    unsigned long long v3;  // rax

    if (v1->field_70 <= v2[14])
    {
        if (v1->field_70 >= v2[14])
        {
            v3 = (unsigned int)v2[15] - v1->field_78;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_70 < v2[14] || (unsigned int)v2[15] != v1->field_78)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_40ca60()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

extern char g_41b08a;

int sub_40a390()
{
    char *v1;  // rbx
    char *v2;  // rax
    unsigned long long v3;  // rax

    v1 = (unsigned long long)strrchr();
    v2 = strrchr();
    if (v2 != 0)
    {
        v1 = (v1 == 0? &g_41b08a : v1);
    }
    else
    {
        v2 = &g_41b08a;
    }
    if (v1 != 0 || v2 != 0)
    {
        v3 = strcmp(v1, v2);
        if ((unsigned int)v3 != 0)
        {
            return v3;
        }
    }
}

// int sub_412200()

// int sub_4121f0()

int sub_404800()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | *(v1)) % v2 >> 64;
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

int sub_417fd0()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct v4;  // rdi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    struct v7;  // rbx
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

int sub_40b9a0()
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
        v8 = sub_40c810() != 0;
        return rax;
    }
    return 0;
}

extern unsigned long long g_624448;

int sub_405c70()
{
    if (g_624448 == 0)
    {
        sub_405cd0();
        sub_405cd0();
    }
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

int sub_40cda0()
{
    void tmp_15;  // tmp #15
    void *v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    struct v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x38]
    unsigned long v7;  // [bp-0x30]
    unsigned long v8;  // [bp-0x28]
    unsigned long v9;  // [bp-0x20]
    struct v11;  // rdi
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
        if (!(INVALID_IR))
        {
            v18 = 0;
            v18 = (unsigned int)v13;
        }
        else
        {
            tmp_15 = v14;
            v16 = 0;
            v17 = tmp_15 >> 1 | (unsigned long long)((unsigned int)v14 & 1);
            v18 = xmm0 * 2;
        }
        xmm0 = (xmm0 / INVALID_IR)
;    }
    if (*((long long *)&v2) != 0 && (((char)(INVALID_IR) & 1) == 0 || v11->field_28->field_10 != 0) && (v11->field_28->field_10 != 0 || ((char)(INVALID_IR) & 1) != 0) && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) == 0)
    {
        if (v11->field_10 != *((long long *)&v2))
        {
            v0 = calloc(*((long long *)&v2), 0x10);
            if (v0 != 0)
            {
                v2 = (unsigned int)sub_40c1f0();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_40c480();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_40c480();
                    if (v22 != 0)
                    {
                        v23 = sub_40c480();
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
    if (((char)(INVALID_IR) & 1) == 0 && *((long long *)&v2) == 0 || v11->field_28->field_10 == 0 && ((char)(INVALID_IR) & 1) == 0 || ((char)(INVALID_IR) & 1) == 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || v11->field_28->field_10 != 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || ((char)(INVALID_IR) & 1) == 0 && v0 == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_28->field_10 != 0 && v11->field_10 != *((long long *)&v2))
    {
        v21 = 0;
    }
    if ((char)v21 != 0 || v11->field_10 != *((long long *)&v2))
    {
        v24 = v21;
        return v24;
    }
}

extern unsigned long long g_624410;
extern char g_624788;
extern int512_t g_6247a0;

int sub_404bb0()
{
    unsigned long v0;  // [bp-0x678]
    unsigned long v1;  // [bp-0x670]
    unsigned long v2;  // [bp-0x668]
    unsigned long long v3;  // [bp-0x650]
    unsigned long long v4;  // [bp-0x648]
    unsigned long v5;  // [bp-0x640]
    char v6;  // [bp-0x638]
    char v7;  // [bp-0x5b8]
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rax
    unsigned long long v11;  // rcx
    unsigned long long v12;  // rdx
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r12
    unsigned long long v16;  // rbp
    unsigned long long v17;  // r15
    unsigned long long v18;  // rbx
    unsigned long long v19;  // r12
    unsigned long long v20;  // r15
    char *v21;  // r13
    unsigned long long v22;  // rbx

    v9 = 0;
    while (true)
    {
        v10 = *((long long *)&((char *)&g_624410)[v9]);
        v12 = (char)*((char *)*((long long *)&((char *)&g_624410)[v9]));
        if (*((char *)*((long long *)&((char *)&g_624410)[v9])) != 0)
        {
            do
            {
                v11 = (char)*((char *)(v10 + 1));
                if (v12 == 37)
                {
                    if ((char)v12 != 37)
                    {
                        if ((char)v12 == 98)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v12 = (char)*((char *)(v10 + 2));
                        v10 += 1;
                    }
                }
                if (v12 != 37 || (char)v12 != 37 && (char)v12 != 98)
                {
                    v12 = v11;
                }
                v10 += 1;
            }
            while (v12 != 0);
            if (true)
            {
                v10 = 0;
            }
            else if (v12 == 37 && (char)v12 != 37)
            {
                v4 = v10;
                v9 += 8;
                if (v9 == 16)
                {
                    break;
                }
            }
        }
        v10 = 0;
    }
    if (v5 != 0 || v4 != 0)
    {
        while (true)
        {
            v14 = &v6;
            v15 = 131086;
            v16 = 0;
            while (true)
            {
                v3 = 5;
                v10 = strchr((unsigned long long)nl_langinfo(v15), 0x25);
                if (v10 != 0)
                {
                    break;
                }
                v10 = sub_40e570();
                if (v10 > 127)
                {
                    break;
                }
                v16 = (v16 < v3? v3 : v16);
                v14 = &v7;
                v15 += 1;
                if (5 > v16)
                {
                    v17 = v16;
                }
                else
                {
                    v18 = &v4;
                    v19 = 0;
                    while (true)
                    {
                        v20 = &v6;
                        v21 = &(&g_6247a0)[24 * v19];
                        while (true)
                        {
                            v10 = v4;
                            if (v4 != 0)
                            {
                                if (v4 - v0 > 128)
                                {
                                    break;
                                }
                                v2 = v4 + 2;
                                v1 = v20;
                                v0 = g_624410;
                                v10 = __snprintf_chk();
                            }
                            else
                            {
                                v10 = snprintf(v21, 0x80, "%s", (unsigned int)g_624410);
                            }
                            if ((unsigned int)v10 > 127)
                            {
                                break;
                            }
                            v20 = &v7;
                            v21 = &v21[-18446744073709551488];
                            v19 = 8;
                            v22 = &v5;
                            if (true)
                            {
                                break;
                            }
                            g_624788 = 1;
                        }
                        if ((unsigned int)v10 <= 127 && v20 == stack_base + -56)
                        {
                            v20 = &v6;
                            v21 = &(&g_6247a0)[24 * v19];
                        }
                        else
                        {
                            return v10;
                        }
                    }
                }
            }
            if (v14 == stack_base + -56 && v10 <= 127 && v10 == 0 && 5 > v16)
            {
                v14 = &v6;
                v15 = 131086;
                v16 = 0;
            }
            else
            {
                return v10;
            }
        }
    }
    return v10;
}

int sub_416e60()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4167b0();
}

int sub_4050d8()
{
    *(__errno_location()) = 0;
}

int sub_40abf0()
{
    unsigned long v1;  // rdi
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
            if (INVALID_IR)
            {
                v5 = __errno_location();
                if (*(v5) != 34)
                {
                    free(v8);
                }
            }
            if (*(v5) == 34 || !(INVALID_IR))
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
        if (v9 <= 9223372036854775806 && v9 <= v4 && v9 > 4611686018427387903 && (*(v5) == 34 || !(INVALID_IR)))
        {
            v7 = malloc(v9);
        }
        else if (v9 <= 4611686018427387903 || v9 > 9223372036854775806 || v9 > v4 || INVALID_IR && *(v5) != 34)
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

int sub_4082c0()
{
    struct v1;  // rsi
    struct v2;  // rdi

    if (!(v1->field_48 <= v2->field_48))
    {
        return -18446744069414584321;
    }
    else if (v1->field_48 != v2->field_48)
    {
        return (unsigned long long)(char)(v1->field_48 < v2->field_48);
    }
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern unsigned long long g_625680;
extern unsigned long long stdout[7];

int sub_4052c0()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rdi
    unsigned long long v5;  // rsi
    unsigned long long v6;  // r12
    unsigned long long v7;  // r12
    unsigned long long v8;  // rbx
    unsigned long v9;  // rax
    unsigned long long v10;  // rbp
    char *v11;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rbx
    unsigned long v15;  // rdx
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r12

    if (v4 < v5)
    {
        v2 = v6;
        v7 = v5;
        v1 = stack_base + 0;
        v0 = v8;
        v14 = v4;
        while (true)
        {
            v13 = g_625680;
            v10 = v14 + 1;
            v11 = stdout[5];
            if (g_625680 != 0 && (0 | v7) % v13 > (0 | v14) % v13)
            {
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v11) = 9;
                }
                else
                {
                    __overflow();
                    v13 = g_625680;
                }
                v12 = (0 | v14) % v13;
                v15 = (0 | v14) % v13 >> 64;
                v16 = v13 + v14;
                v14 = v16 - v15;
                if (v16 - v15 >= v7)
                {
                    break;
                }
            }
            if (g_625680 == 0 || (0 | v7) % v13 <= (0 | v14) % v13)
            {
                if (stdout[5] < stdout[6])
                {
                    v12 = &v11[1];
                    stdout[5] = &v11[1];
                    *(v11) = 32;
                }
                else
                {
                    v12 = __overflow();
                }
                v14 = v10;
                if (v10 >= v7)
                {
                    break;
                }
            }
        }
        v17 = v0;
        v18 = v2;
        return v12;
    }
    return v9;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char field_10;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    unsigned int field_10;
} struct_2;

extern struct g_6257b0;
extern struct g_6257b8;

int sub_40e1f0()
{
    void tmp_15;  // tmp #15
    struct v1;  // rbx
    char *v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    struct v5;  // rbx
    struct v6;  // rbp
    struct v9;  // rax
    struct v10;  // rax

    v1 = g_6257b8;
    if (g_6257b8 != 0)
    {
        do
        {
            if (v1->field_10 == *(v2))
            {
                v3 = strcmp(&v1->field_10, v2);
                if (v3 == 0)
                {
                    break;
                }
            }
            v1 = v1->field_8;
        }
        while (v1 != 0);
        if (v3 != 0 || v1->field_10 != *(v2))
        {
            v5 = g_6257b0;
        }
        else if (v1->field_10 == *(v2))
        {
            v10 = v1;
            return v10;
        }
    }
    if (g_6257b8 == 0 || g_6257b0 != 0)
    {
        v5 = g_6257b0;
        if (g_6257b0 != 0)
        {
            while (true)
            {
                if (v5->field_10 == *(v2))
                {
                    v4 = strcmp(&v5->field_10, v2);
                    if (v4 == 0)
                    {
                        return 0;
                    }
                }
                if (v4 != 0 || v5->field_10 != *(v2))
                {
                    v5 = v5->field_8;
                    if (v5 == 0)
                    {
                        break;
                    }
                }
            }
        }
        v6 = (unsigned long long)getpwnam((unsigned int)v2);
        strlen(v2);
        v1 = (unsigned long long)(unsigned int)sub_412980();
        strcpy(&v1->field_10, v2);
        if (v6 != 0)
        {
            v1->field_0 = v6->field_10;
            v9 = g_6257b8;
            g_6257b8 = v1;
            v1->field_8 = v9;
        }
        else
        {
            tmp_15 = g_6257b0;
            g_6257b0 = v1;
            v1->field_8 = tmp_15;
            return 0;
        }
    }
    if (g_6257b8 == 0 && v6 != 0 || g_6257b8 != 0 && g_6257b0 != 0)
    {
        v10 = v1;
        return v10;
    }
}

int sub_417f10()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_417f90() != 0)
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

int sub_4177a0()
{
    unsigned long long v0;  // [bp-0x60]
    char v1;  // [bp-0x58]
    unsigned int v2;  // [bp-0x54]
    unsigned int v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x4c]
    unsigned int v5;  // [bp-0x48]
    unsigned int v6;  // [bp-0x44]
    unsigned int v7;  // [bp-0x38]
    unsigned int v9[9];  // rsi
    unsigned long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    if (v11 != 0)
    {
        v12 = (unsigned int)sub_417620();
        if (v12 != 0)
        {
            v0 = (unsigned int)sub_4186f0();
            if (v0 == -1)
            {
                v13 = localtime_r((unsigned int)&v0, (unsigned int)&v1);
            }
            if ((v0 == -1 && v13 != 0 && (v9[4] < 0 || v9[4] == 0 == v7 == 0 || v7 < 0) && (v9[2] ^ v5) == 0 && (v9[2 + 1] ^ v6) == 0 && (v9[1 + 1] ^ v4) == 0 && (v9[1] ^ v3) == 0 && (v9[1] ^ v2) == 0 && (v9[0] ^ *((int *)&v1)) == 0 || v0 != -1) && sub_4174a0() == 0)
            {
                v0 = -1;
            }
            if (v12 != 1)
            {
                v15 = sub_4173c0();
            }
        }
        if (v12 == 0 || v15 == 0 && v12 != 1)
        {
            v16 = -1;
        }
        if (v12 == 1 || v12 != 0 && v15 != 0)
        {
            v16 = v0;
        }
        return v16;
    }
    return sub_4178c0();
}

// int sub_4123db()

extern unsigned long long g_625670;

int sub_404b40()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rax

    v2 = sub_4132b0();
    if (!(v2 != 0))
    {
        g_625670 = v0;
        return 1;
    }
    else if (v2 == 1)
    {
        g_625670 = -1;
        return 1;
    }
    return 0;
}

extern int512_t g_6258e0;

int sub_411c20()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6258e0 : v1));
}

int sub_40d4ca()
{
    unsigned long long *v1;  // rsi
    unsigned long long *v3;  // rdi
    unsigned long long v5;  // rax
    char v6;  // al

    v5 = strcmp(*(v3), *(v1));
    v6 = (unsigned int)v5 == 0;
    return rax;
}

typedef struct struct_0 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned int field_88;
} struct_0;

int sub_409a30()
{
    struct v1;  // rsi
    unsigned long long v2[18];  // rdi
    unsigned long long v3;  // rax

    if (v1->field_80 <= v2[16])
    {
        if (v1->field_80 >= v2[16])
        {
            v3 = (unsigned int)v2[17] - v1->field_88;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_80 < v2[16] || (unsigned int)v2[17] != v1->field_88)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

extern char g_625790;

int sub_40b700()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_625790 = v1;
    return v2;
}

extern char g_624688;
extern unsigned long long g_624690;

int sub_4047a1()
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

    if (g_624688 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_624690 >= 0)
            {
                break;
            }
            g_624690 = g_624690 + 1;
            *((long long *)(6438464 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_624688 = 1;
        return sub_40474b();
    }
    return v4;
}

int sub_412840()
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v14;  // r10
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
        if ((unsigned int)v13 <= 47 && v11 != 0 || (unsigned int)v13 > 47 && v12 != 0)
        {
            v15 += 1;
        }
        if (v8 != 0)
        {
            v0 = v13;
        }
        return sub_4123e0();
    }
}

typedef struct struct_0 {
    char padding_0[48];
    struct struct_1 *field_30;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    char field_8;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
} struct_2;

extern char g_41b08a;

int sub_4174a0()
{
    struct v1;  // rsi
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long long v4;  // r14
    unsigned long long v5;  // rax
    char *v6;  // rbx
    struct v7;  // rbp
    unsigned long long v8;  // rax
    char *v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    struct v13;  // rax

    if (v1->field_30 != 0)
    {
        v7 = v2;
        if (v1 <= v1->field_30)
        {
            v12 = 1;
        }
        if (v1 > v1->field_30 || v1->field_30 >= &v1[1])
        {
            v6 = v2 + 9;
            if (*(v1->field_30) != 0)
            {
                while (true)
                {
                    v3 = strcmp(v6, v1->field_30);
                    if (v3 == 0)
                    {
                        break;
                    }
                    while (true)
                    {
                        if (*(v6) == 0)
                        {
                            v4 = &v7[1];
                            if (&v7[1] != v6)
                            {
                                v9 = strlen(v1->field_30) + 1;
                                v10 = &v6[-1 * v4];
                                if (!(&v6[-1 * v4]) < v9)
                                {
                                    *(__errno_location()) = 12;
                                    v12 = 0;
                                }
                            }
                            else if (v7->field_8 == 0)
                            {
                                v9 = strlen(v1->field_30) + 1;
                                v10 = 0;
                            }
                            if ((&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6))
                            {
                                v11 = &v9[v10];
                                if (v11 <= 118)
                                {
                                    memcpy(v6, v1->field_30, v9);
                                    *((char *)(v6 + v9)) = 0;
                                }
                                else
                                {
                                    v13 = sub_417410();
                                    v7->field_0 = v13;
                                    if (v13 != 0)
                                    {
                                        v13->field_8 = 0;
                                        v6 = &v13[1];
                                    }
                                    else
                                    {
                                        v12 = 0;
                                    }
                                }
                            }
                        }
                        if (*(v6) != 0 || &v7[1] == v6 && v7->field_8 != 0)
                        {
                            v6 = &v6[strlen(v6) + 1];
                            v5 = v7->field_0;
                            if (v7->field_0 == 0 || *(v6) != 0)
                            {
                                break;
                            }
                            v6 = &v7[1];
                            v7 = v5;
                            v8 = strcmp(v5 + 9, v1->field_30);
                        }
                    }
                    if (*(v6) != 0 || &v7[1] == v6 && v7->field_8 != 0)
                    {
                        v3 = strcmp(v6, v1->field_30);
                    }
                    else if (v11 <= 118 && (*(v6) == 0 || &v7[1] == v6) && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6) || v13 != 0 && v11 > 118 && (*(v6) == 0 || &v7[1] == v6) && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6) || *(v6) == 0 && v8 == 0 && v7->field_0 != 0 && (&v7[1] == v6 || *(v6) != 0) && (*(v6) != 0 || v7->field_8 != 0))
                    {
                        v1->field_30 = v6;
                        v12 = 1;
                    }
                    else if ((*(v6) == 0 || &v7[1] == v6) && (v13 == 0 || !(&v6[-1 * v4]) < v9) && (v13 == 0 || &v7[1] != v6) && (v7->field_8 == 0 || &v7[1] != v6) && (!(&v6[-1 * v4]) < v9 || v11 > 118) && (&v7[1] != v6 || v11 > 118))
                    {
                        return v12;
                    }
                }
                if (true)
                {
                    v1->field_30 = v6;
                    v12 = 1;
                }
                else
                {
                    return v12;
                }
            }
            else
            {
                v6 = &g_41b08a;
            }
            v1->field_30 = v6;
            v12 = 1;
        }
        return v12;
    }
    return 1;
}

// int sub_411e40()

int sub_4132b0()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // rdi
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // rdi
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rcx
    unsigned long long v42;  // cc_dep1
    unsigned int v43;  // cc_dep1
    unsigned int v44;  // cc_dep1
    unsigned int v45;  // cc_dep1
    unsigned int v46;  // cc_dep1
    unsigned long long v47;  // rax
    unsigned long long v48;  // r8

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
            v33 = __strtoul_internal(v5, (unsigned int)v12);
            if (*(v12) != v5)
            {
                v17 = *(v14);
                if ((*(v14) == 0 || v17 == 34) && v9 != 0)
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
        if (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0)
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
                                    /* goto *((long long *)(rdx * 8 + 0x41f200)); */
                                }
                            }
                            else
                            {
                                v24 = 0;
                                v30 = 0x400;
                                v25 = v32[2] == 66;
                                v31 = rsi * 2 + 1;
                            }
                        }
                    }
                }
            }
        }
        if ((*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v9 != 0 && v1[0] != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) > 47)
        {
            v31 = 1;
            v30 = 0x400;
        }
        if (unknown)
        {
            v31 = 2;
            v30 = 1000;
        }
        if (unknown)
        {
            v26 = (unsigned int)v18 - 66;
            switch (v26)
            {
            case 0:
                if (INVALID_IR)
                {
                    v33 *= 0x400;
                    break;
                }
            case 3:
                v34 = v30;
                v35 = 6;
                do
                {
                    v33 = v33 * v34;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v42 = v35;
                    v35 -= 1;
                }
                while (v42 != 1);
            case 5: case 37:
                v28 = v30;
                if (!(INVALID_IR))
                {
                    v47 = tmp_11 * v28 * v28;
                    v33 = v47;
                }
                else
                {
                    v33 = -1;
                }
            case 9: case 41:
                v33 = v33 * v30;
            case 11: case 43:
                v29 = v30;
                if (!(INVALID_IR))
                {
                    v33 = tmp_11 * v29;
                    break;
                }
            case 14:
                v37 = v30;
                v5 = 5;
                do
                {
                    v33 = v33 * v37;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v44 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v44 != 1);
            case 18: case 50:
                v39 = v30;
                v5 = 4;
                do
                {
                    v33 = v33 * v39;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v46 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v46 != 1);
            case 23:
                v36 = v30;
                v5 = 8;
                do
                {
                    v33 = v33 * v36;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v43 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v43 != 1);
                break;
            case 24:
                v38 = v30;
                v5 = 7;
                do
                {
                    v33 = v33 * v38;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v45 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v45 != 1);
            case 32:
                if (!(INVALID_IR))
                {
                    v33 = -1;
                    break;
                }
                else
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v48 = &v32[v31];
                *(v12) = v48;
            case 53:
                if (!(INVALID_IR))
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
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
        v31 = 1;
        v30 = 0x400;
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
        *(v7) = v33;
        return stack_base + 0;
    }
    __assert_fail(); /* do not return */
}

extern unsigned int g_625918;

int sub_4136f0()
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v2;  // rdi
    unsigned int v3[4];  // rbx
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // rdx
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rax

    v3 = v2;
    while (true)
    {
        while (true)
        {
            if ((unsigned int)v4 != 91)
            {
                v5 = v4 - 33;
                if ((unsigned int)(v4 - 33) <= 31)
                {
                    v0 = 3221227009;
                    if (v3[1] == 40 && ((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) != 0)
                    {
                        v3 = (unsigned long long)(unsigned int)sub_4136f0();
                    }
                    if ((unsigned int)v4 == 41 && (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || v3[1] != 40))
                    {
                        v8 = &v3[1];
                        return v8;
                    }
                }
                if ((unsigned int)v4 != 41 || v3[1] != 40)
                {
                    v3 = &v3[1];
                    v4 = v3[1];
                    if (v3[1] == 0)
                    {
                        break;
                    }
                }
            }
            else
            {
                if (g_625918 == 0)
                {
                    g_625918 = 0 - (unsigned int)(char)(getenv("POSIXLY_CORRECT") < 1) | 1;
                }
                v6 = v3[1];
                if (v3[1] != 33 && (g_625918 >= 0 || (unsigned int)v6 != 94))
                {
                    v3 = &v3[1];
                }
                if (v3[1] == 33 || g_625918 < 0 && (unsigned int)v6 == 94)
                {
                    v6 = v3[1 + 1];
                    v3 = &v3[1 + 1];
                }
                if ((unsigned int)v6 == 93)
                {
                    v6 = v3[1];
                    v3 = &v3[1];
                }
                while (true)
                {
                    v7 = &v3[1];
                    if (v6 == 93)
                    {
                        break;
                    }
                    if (v6 != 0)
                    {
                        v6 = v3[0];
                        v3 = v7;
                    }
                }
                if (true)
                {
                    v4 = v3[1];
                    if (v3[1] == 0)
                    {
                        break;
                    }
                }
                else if (v6 == 0)
                {
                    return stack_base + 0;
                }
            }
        }
        if ((unsigned int)v4 != 91 && ((unsigned int)(v4 - 33) > 31 || (unsigned int)v4 != 41) && (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || (unsigned int)(v4 - 33) > 31 || v3[1] != 40))
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

// int sub_412040()

int sub_416f00()
{
    unsigned long long v1;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // dil
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // rsi
    unsigned long long v4;  // r9
    void *v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rdi

    if (v1 != 0)
    {
        if ((v2 & 7) != 0 && v3 != *((char *)v2))
        {
            do
            {
                v2 += 1;
                v1 -= 1;
            }
            while ((v2 & 7) != 0 && v1 != 1 && *((char *)v2) != (char)v3);
            if (true)
            {
                return 0;
            }
            else if (v1 != 1)
            {
                v4  = unknown;            }
            else if ((v2 & 7) != 0)
            {
                v5 = v2;
            }
        }
        if ((v2 & 7) == 0 || v3 != *((char *)v2))
        {
            v4  = unknown;            if (v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0)
            {
                while (true)
                {
                    v1 -= 8;
                    v2 += 8;
                    if (v1 > 7)
                    {
                        if ((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) + -72340172838076673) != 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        break;
                    }
                }
                if (v1 <= 7)
                {
                    return 0;
                }
            }
        }
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2))
    {
        v6 = v2 + 1;
        v7 = v2 + v1;
        while (true)
        {
            v5 = v6;
            if (v6 != v7)
            {
                v6 += 1;
                if (*((char *)(v6 - 1)) == (char)v3)
                {
                    break;
                }
            }
        }
        if (v6 != v7)
        {
            return v5;
        }
        else if (v6 == v7)
        {
            return 0;
        }
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 == *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 || v3 == *((char *)v2) && v1 != 0 && (v2 & 7) != 0)
    {
        v5 = v2;
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 != 0 && v1 > 7 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 != 0 && v3 != *((char *)v2) && (v2 & 7) != 0 || v1 == 0)
    {
        return 0;
    }
    if (v1 != 0 || v3 == *((char *)v2))
    {
        return v5;
    }
}

// int sub_412250()

int sub_412d40()
{
    unsigned long long v0;  // [bp-0x158]
    unsigned long long v1;  // [bp-0x30]
    unsigned int *v3;  // r12
    void *v6;  // rax
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rax

    v1 = 34;
    v3 = __errno_location();
    while (true)
    {
        *((char *)(rax + v1 - 2)) = 0;
        *(v3) = 0;
        v6 = gethostname(rax, v1 - 1);
        if (v6 == 0)
        {
            rax = sub_412ae0();
            return v8;
        }
        v7 = *(v3);
        if (*(v3) > 36)
        {
            break;
        }
        v0 = 68723675137;
    }
    free(rax);
    *(v3) = v7;
    return 0;
}

int sub_417f90()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_417fd0();
    }
}

extern unsigned int g_41d765;
extern unsigned int g_41d77a;
extern unsigned int g_41d782;
extern unsigned long long stderr[7];

int sub_40ae90()
{
    unsigned long long v1;  // r14
    void *v2;  // rsi
    unsigned long long v4[2];  // rdi
    unsigned int v5;  // rdx
    unsigned long long v6;  // rax
    void *v7;  // rbp
    unsigned long long v8;  // rbx
    char *v9;  // rax

    v1 = 0;
    v7 = v2;
    v8 = 0;
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41d765, 0x5), stderr);
    if (*(v4) != 0)
    {
        while (true)
        {
            if (v8 != 0)
            {
                v6 = memcmp(v1, v7, v5);
                if (v6 == 0)
                {
                    v8 += 1;
                    v7 += v5;
                    __fprintf_chk((unsigned int)stderr, 0x1, 0x41d782, sub_412290());
                    if (v4[v8] == 0)
                    {
                        break;
                    }
                }
            }
            if (v8 == 0 || v6 != 0)
            {
                v8 += 1;
                v1 = v7;
                v7 += v5;
                __fprintf_chk((unsigned int)stderr, 0x1, 0x41d77a, sub_412290());
                if (v4[v8] == 0)
                {
                    break;
                }
            }
        }
    }
    v9 = stderr[5];
    if (stderr[5] < stderr[6])
    {
        stderr[5] = stderr[5] + 1;
        *(v9) = 10;
        return v9;
    }
}

extern char g_6256d0;

int sub_405cd0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    if (g_6256d0 == 0)
    {
        g_6256d0 = 1;
        if (tcgetpgrp(0x1) < 0)
        {
            sub_405c70();
        }
        else
        {
            sub_405af0();
            sub_405c70();
        }
    }
}

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

int sub_40a150()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct v4;  // rdi
    unsigned int v5;  // eax
    char v6;  // al
    unsigned int v7;  // ecx
    unsigned long long v8;  // rcx
    struct v9;  // rsi
    unsigned long long v10;  // r12
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r12

    v5 = v4->field_a8;
    v6 = v4->field_a8 == 9;
    v8 = v7 | rax;
    if (v9->field_a8 != 3 && v9->field_a8 != 9 && v8 != 0)
    {
        return -18446744069414584321;
    }
    if (v9->field_a8 == 3 || v9->field_a8 == 9 || v8 == 0)
    {
        if (v8 == 0 && (v9->field_a8 == 3 || v9->field_a8 == 9))
        {
            return 1;
        }
        if (v8 != 0 || v9->field_a8 != 3 && v9->field_a8 != 9)
        {
            v2 = v10;
            v1 = stack_base + 0;
            v0 = v11;
            v12 = strrchr();
            strrchr();
            v13 = sub_4050d0();
            if ((unsigned int)v13 != 0)
            {
                v14 = v0;
                v15 = v2;
                return v13;
            }
        }
    }
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

int sub_417620()
{
    char *v1;  // rbp
    struct v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned int *v8;  // rbp

    v1 = getenv("TZ");
    if (v1 != 0)
    {
        if (v3->field_8 != 0)
        {
            v4 = strcmp(&v3[1], v1);
            if (v4 == 0)
            {
                return 1;
            }
        }
    }
    else
    {
        if (v3->field_8 == 0)
        {
            return 1;
        }
    }
    if (v1 == 0 && v3->field_8 != 0 || v3->field_8 == 0 && v1 != 0 || v1 != 0 && v4 != 0)
    {
        if (v4 != 0)
        {
            v6 = sub_417340();
            if (v6 == 0)
            {
                v8 = __errno_location();
                if (v8 != 1)
                {
                    sub_417390();
                }
                *(v8) = *(v8);
                return 0;
            }
        }
        if (v4 == 0 || v6 != 0)
        {
            v4 = (unsigned int)sub_417410();
            return v7;
        }
    }
}

int sub_416e40()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_416d80();
}

extern unsigned int g_6255d0;

int sub_405580()
{
    unsigned long long v1;  // r12
    char *v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long v4;  // rdi

    v1 = (unsigned int)sub_412040();
    v3 = error(0x0, *(__errno_location()), v2);
    if ((char)v4 != 0)
    {
        g_6255d0 = 2;
    }
    else
    {
        v3 = g_6255d0;
        if (g_6255d0 == 0)
        {
            g_6255d0 = 1;
            return g_6255d0;
        }
    }
    if ((char)v4 != 0 || g_6255d0 != 0)
    {
        return v3;
    }
}

// int sub_404e00()

int sub_407630()
{
    char v0;  // [bp-0x2029]
    unsigned long v1;  // [bp-0x2028]
    unsigned long v2;  // [bp-0x2020]
    char v3;  // [bp-0x2018]
    unsigned long v6;  // rdi

    v1 = &v3;
    sub_405ea0();
    if (v1 != &v3 && &v3 != v6)
    {
        free(&v3);
    }
    return v0 + v2;
}

int sub_40c290()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

typedef struct struct_0 {
    char padding_0[4298560];
    unsigned int field_419740;
} struct_0;

typedef struct struct_1 {
    char padding_0[4305559];
    char field_41b297;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    unsigned long long field_20;
} struct_2;

extern unsigned int g_419740[4];
extern int512_t g_4197d0;
extern int512_t g_419830;
extern int512_t g_419890;
extern int512_t g_419e80;
extern int512_t g_419f50;
extern unsigned long long g_419fa0;
extern unsigned int g_41b08a;
extern unsigned int g_41b1b1;
extern unsigned int g_41b1e9;
extern unsigned int g_41b207;
extern unsigned int g_41b2a8;
extern unsigned int g_41b2d0;
extern unsigned int g_41b2e6;
extern unsigned int g_41b341;
extern unsigned int g_41d498;
extern unsigned int g_41d508;
extern unsigned int g_41d550;
extern unsigned int g_41d590;
extern unsigned int g_41d600;
extern unsigned int g_41d6c8;
extern int512_t g_41ea00;
extern unsigned long long g_624410;
extern unsigned long long g_624418;
extern unsigned long long g_624420;
extern unsigned short *g_624428;
extern unsigned long long g_624430;
extern char *g_624438;
extern unsigned long long g_624490;
extern unsigned long long g_624498;
extern unsigned long long g_6245a0;
extern char g_6245a8;
extern char g_6245a9;
extern unsigned int g_6245ac;
extern unsigned int g_6245c0;
extern unsigned int g_62463c;
extern char g_6253a0;
extern unsigned long long g_6254b0;
extern unsigned long long *g_6254b8;
extern unsigned long long g_6255b8;
extern int512_t g_6255c0;
extern unsigned int g_6255d0;
extern unsigned int g_6255d4;
extern unsigned int g_6255d8;
extern void g_625660;
extern char g_625661;
extern unsigned long long g_625668;
extern unsigned long long g_625670;
extern char g_625678;
extern unsigned long long g_625680;
extern unsigned long long g_625688;
extern unsigned long long g_625690;
extern char g_625698;
extern unsigned long long g_6256a0[2];
extern unsigned long long g_6256a8[2];
extern unsigned int g_6256b0;
extern char g_6256b4;
extern char g_6256b5;
extern char g_6256b6;
extern unsigned int g_6256b8;
extern char g_6256bc;
extern char g_6256bd;
extern unsigned long long g_6256c0;
extern unsigned long long g_6256c8[5];
extern char g_6256d0;
extern char g_6256d1;
extern char g_6256d2;
extern unsigned int g_6256d4;
extern char g_6256d8;
extern unsigned int g_6256dc;
extern unsigned long long g_6256e0;
extern unsigned int g_6256e8;
extern char g_6256ec;
extern char g_6256ed;
extern char g_6256ee;
extern char g_6256ef;
extern unsigned int g_6256f0;
extern unsigned int g_6256f4;
extern unsigned int g_6256f8;
extern char g_625725;
extern unsigned long long g_625730;
extern unsigned long long g_625738;
extern unsigned long long g_625740[4];
extern int512_t g_625748;
extern char g_625750;
extern void g_625768;
extern unsigned long long g_625770;
extern unsigned long long g_625778;
extern unsigned long long g_625780;
extern unsigned long long g_625788;
extern unsigned long long g_625970;
extern unsigned long long stderr;
extern unsigned long long stdout[7];

int main()
{
    unsigned long long v0;  // [bp-0x78]
    void tmp_19;  // tmp #19
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x53]
    char v4;  // [bp-0x52]
    char v5;  // [bp-0x51]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x48]
    unsigned short v8;  // [bp-0x46]
    unsigned long v9;  // [bp-0x40]
    unsigned long long v11;  // rdi
    unsigned long long v22;  // r12
    char *v23;  // r12
    unsigned long long v25;  // r12
    unsigned long long v29;  // r12
    unsigned long long v30;  // r15
    unsigned long long v31;  // r14
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v37;  // rax
    struct v40;  // rax
    unsigned int v44;  // rdx
    unsigned int v48;  // eax
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v52;  // rax
    unsigned long long v54;  // rbx
    unsigned long long v56;  // r13
    unsigned int v59;  // r13d
    unsigned long long v60;  // rax
    unsigned int v61;  // eax
    char v62;  // al
    struct v65;  // rax
    char *v66;  // r13
    unsigned long long v69;  // r12
    unsigned long long v70;  // rax
    unsigned long long v72;  // rax
    char *v73;  // r12
    char *v74;  // rdi
    char *v75;  // r13
    char *v77;  // r14
    unsigned long long v78;  // rax
    unsigned long long *v79;  // rbx
    unsigned long v81;  // rcx
    unsigned long long v82;  // rbx
    unsigned long long v87;  // r12
    char *v88;  // rax
    unsigned long long v89;  // rax
    char v90[3];  // rax
    unsigned long long v91;  // rdx
    unsigned long long v92[5];  // rax
    char *v96;  // rax
    unsigned long long v97;  // r13
    char *v98;  // rsi
    unsigned long long v99;  // rax
    unsigned long long v100;  // rax
    unsigned long long v101;  // rax
    unsigned long long v103;  // r13
    char *v104;  // r15
    unsigned long long v105;  // rax
    unsigned long long v106;  // rax
    char *v107;  // rdi
    unsigned long long v108;  // rcx
    char v109;  // cc_dep2
    unsigned long v110;  // d
    struct v111;  // rdi
    void *v112;  // r13
    unsigned long long v117;  // rax
    unsigned long long v121;  // rax
    unsigned long long v124;  // rax
    unsigned int v125;  // ecx
    unsigned long long v126;  // rdx
    unsigned int v127;  // ecx
    unsigned int v128;  // ecx
    unsigned long long v129;  // r13
    unsigned int v130;  // r13d
    unsigned int v132;  // cc_dep1
    unsigned long long v139[4];  // rbx
    char *v140;  // rax
    unsigned long long v141;  // rdi
    void *v143;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v147;  // ebx
    unsigned int v148;  // cc_dep1
    unsigned long long v152;  // rax

    sub_410670();
    setlocale(0x6, 0x41b08a);
    bindtextdomain(0x41b1b1, 0x41d498);
    textdomain(0x41b1b1);
    g_6245c0 = 2;
    sub_418780();
    g_625678 = 1;
    g_625730 = 0x8000000000000000;
    g_6255d0 = 0;
    g_625740[0] = 0;
    g_625738 = -1;
    g_625698 = 0;
    if (!(g_6245ac != 2))
    {
        g_6256f8 = 2;
        sub_411c30();
    }
    else if (g_6245ac != 3)
    {
        if (g_6245ac != 1)
        {
            abort(); /* do not return */
        }
    }
    if (g_6245ac == 3)
    {
        g_6256f8 = 0;
        sub_411c30();
    }
    if (g_6245ac == 1)
    {
        if (isatty(0x1) == 0)
        {
            g_6256f8 = 1;
        }
        else
        {
            g_6256f8 = 2;
            sub_411c30();
            g_625698 = 1;
        }
    }
    if (g_6245ac == 2 || g_6245ac == 3 || g_6245ac == 1)
    {
        g_6256ef = 0;
        g_6256f4 = 0;
        g_6256f0 = 0;
        g_6256ed = 0;
        g_6256ec = 0;
        g_6256d4 = 0;
        g_6256bc = 0;
        g_6256b8 = 1;
        g_6256b6 = 0;
        g_6256b5 = 0;
        g_6256b0 = 0;
        g_6256a8[0] = 0;
        g_6256a0[0] = 0;
        g_625725 = 0;
        if (getenv("QUOTING_STYLE") != 0)
        {
            if (sub_40acf0() >= 0)
            {
                sub_411c30();
            }
            else
            {
                v22 = (unsigned int)sub_412290();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x41d508, 0x5));
            }
        }
        g_625670 = 80;
        v23 = getenv("COLUMNS");
        if (v23 != 0 && *(v23) != 0 && sub_404b40() == 0)
        {
            v25 = (unsigned int)sub_412290();
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x41d550, 0x5));
        }
        if (ioctl(0x1, 0x5413, (unsigned int)&v7) != -1 && v8 != 0)
        {
            g_625670 = v8;
        }
        g_625680 = 8;
        if (getenv("TABSIZE") != 0)
        {
            if (sub_412df0() == 0)
            {
                g_625680 = *((long long *)&v7);
            }
            else
            {
                v29 = (unsigned int)sub_412290();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x41d590, 0x5));
            }
        }
        v30 = 0;
        v31 = 0;
        v69 = 0;
        while (true)
        {
            v7 = -1;
            v32 = sub_416e00();
            if (v32 != -1)
            {
                v33 = v32 + 131;
                switch ((unsigned int)v33)
                {
                case 0:
                    v52 = g_6245ac;
                    if (g_6245ac != 1)
                    {
                        v52 = "v";
                    }
                    v1 = v52;
                    v0 = 0;
                    sub_412840();
                    exit(0x0); /* do not return */
                case 1:
                    sub_40a530(); /* do not return */
                case 180:
                    g_6256f8 = 1;
                case 196:
                    g_6256b0 = 1;
                case 197:
                    g_6256a8[0] = "*~";
                    g_6256a8[1] = g_6256a8;
                    g_6256a8[0] = (unsigned int)sub_412980();
                    g_6256a8[0] = ".";
                    g_6256a8[1] = g_6256a8;
                    g_6256a8[0] = (unsigned int)sub_412980();
                    break;
                case 198:
                    g_6256f8 = 2;
                    break;
                case 199:
                    g_6256d8 = 1;
                    break;
                case 201:
                    g_6256d4 = 3;
                    break;
                case 202:
                    g_6245a8 = 0;
                    break;
                case 203:
                    g_6256b8 = 3;
                    break;
                case 204:
                    v2 = g_625970;
                    g_6256a8[0] = v2;
                    g_6256a8[1] = g_6256a8;
                    g_6256a8[0] = (unsigned int)sub_412980();
                    break;
                case 207:
                    g_6256b8 = 5;
                    break;
                case 209:
                    sub_411c30();
                    break;
                case 212:
                    sub_411c30();
                    break;
                case 213:
                    g_6256b6 = 1;
                    break;
                case 214:
                    g_6256f0 = 2;
                    v31 = 1;
                    break;
                case 215:
                    dcgettext(0x0, 0x41b207, 0x5);
                    v1 = 5;
                    v0 = 2;
                    g_625680 = (unsigned int)sub_412c10();
                    break;
                case 216:
                    g_6256f0 = -1;
                    v31 = 1;
                    break;
                case 219:
                    g_6256f0 = 1;
                    v31 = 1;
                    break;
                case 221:
                    g_625725 = 1;
                    break;
                case 228:
                    g_6256b0 = 2;
                    break;
                case 229:
                    sub_411c30();
                    break;
                case 230:
                    g_6256f4 = 1;
                    break;
                case 231:
                    g_6256b5 = 1;
                    break;
                case 233:
                    g_6256b0 = 2;
                    g_6256f0 = -1;
                    if (g_6256f8 == 0)
                    {
                        g_6256f8 = 0 - (unsigned int)(char)(isatty(0x1) < 1) + 2;
                    }
                    g_6256ec = 0;
                    v31 = 1;
                    g_6256d2 = 0;
                    g_6256d1 = 0;
                case 234:
                    g_6256f8 = 0;
                    g_6245a9 = 0;
                    break;
                case 235:
                    g_6256e8 = 176;
                    g_6256dc = 176;
                    g_6256e0 = 1;
                    g_6245a0 = 1;
                    break;
                case 236:
                    g_6256bc = 1;
                    break;
                case 238:
                    v30 = 1;
                    break;
                case 239:
                    g_6256f8 = 0;
                    break;
                case 240:
                    g_6256f8 = 4;
                    break;
                case 241:
                    g_6256ed = 1;
                case 242:
                    g_6256f8 = 0;
                    g_6245a8 = 0;
                    break;
                case 243:
                    g_6256d4 = 1;
                    break;
                case 244:
                    g_625698 = 1;
                    break;
                case 245:
                    g_6256ef = 1;
                    break;
                case 246:
                    g_6256ec = 1;
                    break;
                case 247:
                    g_6256f0 = 4;
                    v31 = 1;
                    break;
                case 248:
                    g_6256f4 = 2;
                    break;
                case 249:
                    g_6256f0 = 3;
                    v31 = 1;
                    break;
                case 250:
                    v37 = sub_404b40();
                    v54 = (unsigned int)sub_412290();
                    dcgettext(0x0, 0x41b1e9, 0x5);
                    error(0x2, 0x0, "%s: %s");
                case 251:
                    g_6256f8 = 3;
                    break;
                case 259:
                    g_6256ee = 1;
                    break;
                case 260:
                    if (sub_40dfa0() == 0)
                    {
                        g_6256dc = g_6256e8;
                        g_6245a0 = g_6256e0;
                    }
                    else
                    {
                        sub_413220(); /* do not return */
                    }
                case 261:
                    if (g_625970 != 0)
                    {
                        v48 = g_419740[(unsigned long long)(unsigned int)sub_40afb0()];
                        if (v48 != 1 && (v50 == 0 || v48 != 2))
                        {
                            g_6256d2 = 0;
                        }
                        if (v48 == 2)
                        {
                            v50 = isatty(0x1);
                        }
                    }
                    if ((g_625970 == 0 || v48 == 2 || v48 == 1) && (g_625970 == 0 || v48 == 1 || v50 != 0))
                    {
                        g_6256d2 = 1;
                        g_625680 = 0;
                    }
                case 262:
                    g_6256b8 = 4;
                    break;
                case 263:
                    g_6256d4 = 2;
                    break;
                case 264:
                    g_6256f8 = *((int *)&((char *)&g_419890)[4 * (unsigned long long)(unsigned int)sub_40afb0()]);
                    break;
                case 265:
                    g_6256f8 = 0;
                    v69 = "full-iso";
                    break;
                case 266:
                    g_6256b4 = 1;
                    break;
                case 267:
                    g_6256a0[0] = g_625970;
                    g_6256a0[0] = (unsigned int)sub_412980();
                    *((unsigned int *)&g_6256a0[1]) = v44;
                    break;
                case 268:
                    if (g_625970 != 0)
                    {
                        v40 = sub_40afb0();
                        v44 = *((int *)(0x4 * v40 + (char *)&g_419740[0]));
                        if (*((int *)(0x4 * v40 + (char *)&g_419740[0])) != 1)
                        {
                            v49 = 0;
                            if (v44 == 2)
                            {
                                v49 = (char)(isatty(0x1) != 0);
                            }
                        }
                    }
                    if (g_625970 == 0 || *((int *)(0x4 * v40 + (char *)&g_419740[0])) == 1)
                    {
                        v49 = 1;
                    }
                    *((unsigned long long *)&g_6256d1) = v49;
                    g_6256d1 = g_6256d1 & 1;
                case 269:
                    g_6256d4 = *((int *)&((char *)&g_419f50)[4 * (unsigned long long)(unsigned int)sub_40afb0()]);
                    break;
                case 270:
                    sub_40afb0();
                    sub_411c30();
                    break;
                case 271:
                    g_625698 = 0;
                    break;
                case 272:
                    g_6256e8 = 144;
                    g_6256dc = 144;
                    g_6256e0 = 1;
                    g_6245a0 = 1;
                    break;
                case 273:
                    v31 = 1;
                    g_6256f0 = *((int *)&((char *)&g_419830)[4 * (unsigned long long)(unsigned int)sub_40afb0()]);
                    break;
                case 274:
                    g_6256f4 = *((int *)&((char *)&g_4197d0)[4 * (unsigned long long)(unsigned int)sub_40afb0()]);
                    break;
                case 275:
                    v69 = g_625970;
                    break;
                default:
                    sub_40a530(); /* do not return */
                }
            }
            else
            {
                if (g_6256e0 == 0)
                {
                    v56 = getenv("LS_");
                    sub_40dfa0();
                    if (getenv("BLOCK_SIZE") != 0 || v56 != 0)
                    {
                        g_6256dc = g_6256e8;
                        g_6245a0 = g_6256e0;
                    }
                    if (v30 != 0)
                    {
                        g_6256e8 = 0;
                        g_6256e0 = 0x400;
                    }
                }
                g_6255c0 = (0 | g_625670) % 3 + (char)((0 | g_625670) % 3 >> 64 != 0);
                v59 = sub_411c20();
                if (g_6256f8 != 4 && g_6256f8 != 1)
                {
                    if (g_625670 == 0)
                    {
                        v60 = 0;
                    }
                    if (g_6256f8 == 0 || g_625670 != 0)
                    {
                        v61 = (v59 & -3) - 1;
                        v62 = (v59 & -3) == 1;
                        v60 = rax | g_6256f8;
                    }
                }
                if (g_6256f8 == 4 || g_6256f8 == 1)
                {
                    v60 = 0;
                }
                *((unsigned long long *)&g_625768) = v60;
                g_625768 = g_625768 & 1;
                g_625690 = (unsigned int)sub_411be0();
                if (v59 == 7)
                {
                    sub_411c40();
                }
                if (g_6256d4 > 1)
                {
                    v65 = (unsigned long long)(g_6256d4 - 2);
                    v66 = v65 + "*=>@|";
                    if (*((char *)(v65 + "*=>@|")) != 0)
                    {
                        while (true)
                        {
                            v66 = &v66[1];
                            sub_411c40();
                            if (*(v66) == 0)
                            {
                                break;
                            }
                        }
                    }
                }
                g_625688 = (unsigned int)sub_411be0();
                sub_411c40();
                if (g_6256d8 != 0 && (g_6256d1 != 0 || g_6256f8 != 0))
                {
                    g_6256d8 = 0;
                }
                if (g_6256f8 == 0)
                {
                    if (v69 == 0)
                    {
                        v69 = getenv("TIME_STYLE");
                        if (INVALID_IR && v69 == 0)
                        {
                            sub_40ae10();
                            v79 = &g_419fa0;
                            fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41b2d0, 0x5), stderr);
                            v81 = "full-iso";
                            while (true)
                            {
                                v79 = &v79[1];
                                __fprintf_chk(stderr, 0x1, 0x41b2e6, v81);
                                v81 = *(v79);
                                if (*(v79) == 0)
                                {
                                    break;
                                }
                            }
                            fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41d600, 0x5), stderr);
                        }
                    }
                    if (v69 != 0 || v69 != 0)
                    {
                        while (true)
                        {
                            v70 = strncmp(v69, "posix-", 0x6);
                            if (v70 == 0)
                            {
                                if (sub_40c190() == 0)
                                {
                                    break;
                                }
                                v69 += 6;
                            }
                            else
                            {
                                if (*((char *)v69) != 43)
                                {
                                    break;
                                }
                                v73 = v69 + 1;
                                v74 = v73;
                                v75 = strchr(v74, 0xa);
                                if (v75 != 0)
                                {
                                    v77 = &v75[1];
                                    v78 = strchr(&v75[1], 0xa);
                                    if (v78 == 0)
                                    {
                                        *(v75) = 0;
                                    }
                                    else
                                    {
                                        v82 = (unsigned int)sub_412290();
                                        error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x41b2a8, 0x5));
                                    }
                                }
                                else
                                {
                                    v77 = v74;
                                }
                                if (v75 == 0 || v78 == 0)
                                {
                                    g_624410 = v74;
                                    g_624418 = v77;
                                }
                            }
                        }
                        if (v70 != 0)
                        {
                            v72 = sub_40acf0();
                        }
                        else if (*((char *)v69) == 43 && v70 != 0 && (v75 == 0 || v78 == 0))
                        {
                            sub_404bb0();
                        }
                        else if (v70 == 0)
                        {
                            v87 = (int)g_62463c;
                            if (g_6256d2 == 0)
                            {
                                break;
                            }
                        }
                    }
                    if ((v69 == 0 || !(INVALID_IR)) && (v69 == 0 || !(INVALID_IR)))
                    {
                        v72 = sub_40acf0();
                    }
                    if (!(INVALID_IR))
                    {
                        if (v72 == 1)
                        {
                            g_624418 = "%Y-";
                            g_624410 = "%Y-";
                        }
                        else if (v72 > 1)
                        {
                            if (v72 == 2)
                            {
                                g_624410 = "%Y-%m-%d ";
                                g_624418 = "%m-%d ";
                            }
                            else if (v72 == 3)
                            {
                                if (sub_40c190() != 0)
                                {
                                    g_624410 = dcgettext(0x0, g_624410, 0x2);
                                    g_624418 = dcgettext(0x0, g_624418, 0x2);
                                }
                            }
                        }
                        else
                        {
                            if (v72 == 0)
                            {
                                g_624418 = "%Y-%m-%d %H:%M:%S.%N %z";
                                g_624410 = "%Y-%m-%d %H:%M:%S.%N %z";
                            }
                        }
                        sub_404bb0();
                    }
                }
                if (v31 == 0 && g_6256f4 - 1 <= 1 && g_6256f8 != 0)
                {
                    g_6256f0 = 4;
                }
            }
            if (g_6256f8 == 0 && v32 == -1 && !(INVALID_IR) || g_6256f8 == 0 && v32 == -1 && (v69 != 0 || v69 != 0) && !(INVALID_IR) || v31 == 0 && g_6256f4 - 1 <= 1 && v32 == -1 && g_6256f8 != 0 || v32 == -1 && (v31 != 0 || g_6256f4 - 1 > 1) && (g_6256d8 == 0 || g_6256d1 != 0 || g_6256f8 != 0) && g_6256f8 != 0)
            {
                *((char **)&v6[0]) = getenv("LS_COLORS");
                if (v6[0] != 0 && v6 != 0)
                {
                    v3 = 16191;
                    v5 = 0;
                    v89 = sub_412bb0();
                    g_6256c0 = v89;
                    v7 = v89;
                    while (true)
                    {
                        v90 = v6;
                        v91 = v6[0];
                        if (v6[0] == 42)
                        {
                            v92 = sub_412980();
                            tmp_19 = g_6256c8;
                            v6 = &v6[1];
                            g_6256c8[0] = v92;
                            v92[4] = tmp_19;
                            v92[1] = v7;
                            if (sub_404860() != 0)
                            {
                                v96 = v6;
                                *((char *[3])&v6[0]) = &v6[1];
                                if (*(v96) == 61)
                                {
                                    v92[3] = v7;
                                    v99 = sub_404860();
                                }
                            }
                        }
                        else if (v91 == 58)
                        {
                            *((char *[3])&v6[0]) = &v90[1];
                        }
                        else if (v91 != 0)
                        {
                            v6 = &v90[1];
                            v3 = v90[0];
                            if (v90[1] != 0)
                            {
                                v6 = &v90[2];
                                v4 = v90[1];
                                *((char *[3])&v6[0]) = &v90[3];
                                if (v90[2] == 61)
                                {
                                    v97 = 0;
                                    v98 = "lc";
                                    while (true)
                                    {
                                        v100 = strcmp(&v3, v98);
                                        if (v100 != 0)
                                        {
                                            v97 += 1;
                                            v98 = (&g_419e80)[v97];
                                        }
                                        else
                                        {
                                            (&g_624420)[1 + 2 * v97] = v7;
                                            v101 = sub_404860();
                                            if (v101 != 0)
                                            {
                                                break;
                                            }
                                        }
                                        v103 = (unsigned int)sub_412290();
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x41b341, 0x5));
                                    }
                                    if (v100 == 0)
                                    {
                                        v90 = v6;
                                        v91 = v6[0];
                                    }
                                    else if (v100 == 0 && v101 == 0 || (&g_419e80)[v97] == 0 && v100 != 0)
                                    {
                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x41d6c8, 0x5));
                                        free(g_6256c0);
                                    }
                                }
                            }
                        }
                        if ((v6[0] == 42 || v91 != 0) && (v6[0] == 42 || v91 != 58) && (v6[0] != 42 || v99 != 0))
                        {
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x41d6c8, 0x5));
                            free(g_6256c0);
                            for (v111 = g_6256c8; v111 != 0; v111 = v112)
                            {
                                v112 = v111->field_20;
                                free(v111);
                            }
                            g_6256d2 = 0;
                        }
                        if (v6[0] == 42 && v99 != 0 || v6[0] != 42 && v91 != 58)
                        {
                            if (g_624490 != 6)
                            {
                                break;
                            }
                            if (strncmp(g_624498, "target", 0x6) != 0)
                            {
                                break;
                            }
                            g_625750 = 1;
                        }
                    }
                }
                if (v6[0] == 0 || v6 == 0)
                {
                    v88 = getenv("COLOR");
                    if (*(v88) == 0 || v88 == 0)
                    {
                        if (*(getenv("TERM")) != 0 && getenv("TERM") != 0)
                        {
                            v104 = "# Configuration file for dircolors, a utility to help you set the";
                            while (true)
                            {
                                v105 = strncmp(v104, "TERM ", 0x5);
                                if (v105 == 0)
                                {
                                    v106 = sub_4159a0();
                                }
                                if (v106 != 0 || v105 != 0)
                                {
                                    v107 = v104;
                                    v108 = -1;
                                    while (v108 != 0)
                                    {
                                        v108 -= 1;
                                        v109 = *(v107);
                                        v107 = &v107[v110];
                                        break;
                                    }
                                    v104 = (char *)(4300768 + !(rcx));
                                    if ((char *)(4300768 + !(rcx)) - "# Configuration file for dircolors, a utility to help you set the" > 4172)
                                    {
                                        break;
                                    }
                                }
                            }
                            if (v106 != 0 || v105 != 0)
                            {
                                g_6256d2 = 0;
                            }
                            else if (v106 == 0 && v105 == 0)
                            {
                                if (g_6256d2 == 0)
                                {
                                    break;
                                }
                            }
                        }
                        g_6256d2 = 0;
                    }
                }
                if (sub_404ae0() == 0 && (sub_404ae0() == 0 || g_625750 == 0))
                {
                    if (sub_404ae0() == 0)
                    {
                        break;
                    }
                    if (g_6256f8 != 0)
                    {
                        break;
                    }
                }
                g_6256bd = 1;
            }
        }
        if (g_6256b8 == 1)
        {
            v117 = 2;
            if (g_6256b5 == 0 && g_6256d4 != 3)
            {
                v117 = (0 - (unsigned int)(char)(g_6256f8 < 1) & -2) + 4;
            }
            *((unsigned long long *)&g_6256b8) = v117;
        }
        if (g_6256b6 != 0)
        {
            g_625788 = (unsigned int)sub_40ca80();
            if (g_625788 != 0)
            {
                _obstack_begin();
            }
            else
            {
                sub_412bd0(); /* do not return */
            }
        }
        if (g_6256b6 == 0 || g_625788 != 0)
        {
            getenv("TZ");
            g_625668 = (unsigned int)sub_417410();
            if ((g_6256f0 - 2 & -3) != 0 && g_6256f8 != 0 && g_625725 == 0 && g_6256ec == 0)
            {
                g_625661 = 0;
                v121 = 1;
                if (g_6256b6 == 0 && g_6256d2 == 0 && g_6256d4 == 0)
                {
                    v121 = g_6256b4;
                }
            }
            if ((g_6256f0 - 2 & -3) == 0 || g_6256f8 == 0 || g_625725 != 0 || g_6256ec != 0)
            {
                g_625661 = 1;
                v121 = 0;
            }
            *((unsigned long long *)&g_625660) = v121;
            g_625660 = g_625660 & 1;
            if (g_6256d8 != 0)
            {
                _obstack_begin();
                _obstack_begin();
            }
            if (g_6256d1 != 0)
            {
                v124 = 0;
                do
                {
                    v125 = v124;
                    if ((unsigned int)v124 <= 90)
                    {
                        v126 = 1;
                        if ((unsigned int)v124 < 65 && (unsigned int)(v124 - 48) > 9)
                        {
                            v128 = v125 - 45;
                        }
                    }
                    else
                    {
                        v126 = 1;
                        if ((unsigned int)(v124 - 97) > 25)
                        {
                            v127 = v125 - 45;
                        }
                    }
                    if ((unsigned int)v124 != 126 && ((unsigned int)v124 <= 90 || v127 > 1) && ((unsigned int)v124 <= 90 || (unsigned int)(v124 - 97) > 25) && ((unsigned int)v124 < 65 || (unsigned int)v124 > 90) && ((unsigned int)v124 > 90 || (unsigned int)(v124 - 48) > 9) && ((unsigned int)v124 > 90 || v128 > 1))
                    {
                        v126 = (char)((unsigned int)v124 == 95);
                    }
                    if (((unsigned int)v124 <= 90 || (unsigned int)(v124 - 97) > 25) && ((unsigned int)v124 < 65 || (unsigned int)v124 > 90) && (v127 <= 1 || (unsigned int)v124 <= 90 || (unsigned int)v124 == 126) && ((unsigned int)v124 > 90 || (unsigned int)(v124 - 48) > 9) && (v128 <= 1 || (unsigned int)v124 == 126 || (unsigned int)v124 > 90))
                    {
                        v126 = 1;
                    }
                    *((unsigned long long *)&(&g_6253a0)[v124]) = (&g_6253a0)[v124] | v126;
                    v124 += 1;
                }
                while (v124 != 0x100);
                *((int *)&g_625748) = (sub_412d40() == 0? &g_41b08a : rax);
            }
            v129 = v11;
            g_625778 = 100;
            v130 = v129 - (int)g_62463c;
            g_625770 = 0;
            g_625780 = (unsigned int)sub_412980();
            sub_4084b0();
            if (v132 > 0)
            {
                while (true)
                {
                    v87 += 1;
                    sub_408580();
                    if ((unsigned int)v129 <= (unsigned int)v87)
                    {
                        break;
                    }
                }
                if (g_625770 == 0)
                {
                    v139 = g_625740;
                }
            }
            else if (g_6256b5 != 0)
            {
                sub_408580();
            }
            else
            {
                sub_404d90();
            }
            if (g_625770 != 0)
            {
                sub_404f40();
                if (g_6256b5 == 0)
                {
                    sub_405140();
                }
                sub_407ca0();
                if (g_625740 != 0)
                {
                    v140 = stdout[5];
                    if (stdout[6] > stdout[5])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v140) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                    g_6255b8 = g_6255b8 + 1;
                    v139 = g_625740;
                }
            }
            else if (v130 <= 1 || v132 <= 0)
            {
                v139 = g_625740;
                if (g_625740 != 0 && g_625740[3] == 0)
                {
                    g_625678 = 0;
                }
            }
            if (g_625740 != 0 || g_625770 == 0 && v130 > 1 && v132 > 0)
            {
                for (; v139 != 0; v139 = g_625740)
                {
                    v141 = *(v139);
                    g_625740 = v139[3];
                    if (v141 == 0 && g_625788 != 0)
                    {
                        if ((char *)g_6254b8 + -1 * g_6254b0 > 15)
                        {
                            g_6254b8 = &g_6254b8[-2];
                            v7 = g_6254b8[-2];
                            v9 = g_6254b8[-1];
                            v143 = sub_40d260();
                            if (v143 != 0)
                            {
                                free(v143);
                                free(*(v139));
                                free(v139[1]);
                                free(v139);
                            }
                            else
                            {
                                __assert_fail(); /* do not return */
                            }
                        }
                        else
                        {
                            __assert_fail(); /* do not return */
                        }
                    }
                    if (g_625788 == 0 || v141 != 0)
                    {
                        sub_4092a0();
                        free(*(v139));
                        free(v139[1]);
                        free(v139);
                        g_625678 = 1;
                    }
                }
            }
            if (g_6256d2 != 0 && g_6256d0 != 0)
            {
                if (g_624430 != 1 || *(g_624428) != 23323 || *(g_624438) != 109 || g_624420 != 2)
                {
                    sub_405d40();
                }
                fflush_unlocked(stdout);
                sub_405af0();
                v147 = g_6255d4;
                if (g_6255d4 != 0)
                {
                    while (true)
                    {
                        raise();
                        v148 = v147;
                        v147 = (unsigned long long)v147 - 1;
                        if (v148 == 1)
                        {
                            break;
                        }
                    }
                }
                if (g_6255d8 != 0)
                {
                    raise();
                }
            }
            if (g_6256d8 != 0)
            {
                sub_405390();
                sub_405390();
                __printf_chk(0x1, "//DIRED-OPTIONS// --quoting-style=%s\n", (unsigned int)(&g_41ea00)[(unsigned long long)(unsigned int)sub_411c20()]);
            }
            if (g_625788 != 0)
            {
                v152 = sub_40c5f0();
                if (v152 == 0)
                {
                    sub_40ccc0();
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
            if (g_625788 == 0 || v152 == 0)
            {
                return g_6255d0;
            }
        }
    }
}

extern int512_t g_6258e0;

int sub_411cd0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6258e0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_410810();
}

extern unsigned long long g_41b08a;

int sub_416e80()
{
    char v0;  // [bp-0x1c]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long v4;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // rbp
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
        v5 = &g_41b08a;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40c190() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern char g_41b08a;

int sub_40a400()
{
    char *v1;  // rbx
    char *v2;  // rax
    unsigned long long v3;  // rax

    v1 = (unsigned long long)strrchr();
    v2 = strrchr();
    if (v2 != 0)
    {
        v1 = (v1 == 0? &g_41b08a : v1);
    }
    else
    {
        v2 = &g_41b08a;
    }
    if (v1 != 0 || v2 != 0)
    {
        v3 = strcmp(v1, v2);
        if ((unsigned int)v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned int g_624634;
extern unsigned int g_624638;
extern unsigned int g_62463c;
extern unsigned int g_625920;
extern unsigned int g_625924;
extern unsigned int g_625928;
extern unsigned long long g_625930;
extern unsigned long long g_625970;

int sub_416d80()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_625920 = g_62463c;
    g_625924 = g_624638;
    v1 = (unsigned int)v2;
    v0 = &g_625920;
    g_62463c = g_625920;
    g_625970 = g_625930;
    g_624634 = g_625928;
    return sub_4167b0();
}

// int sub_404e10()

// int sub_411f40()

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_40e520()
{
    struct v1;  // rsi
    char *v2;  // rcx
    unsigned long long v5;  // rdi

    v2 = &v1->field_14;
    v1->field_14 = 0;
    while (true)
    {
        v2 = &v2[-1];
        *(v2) = (unsigned int)(rdi - ((unsigned long long)(rdi * 14757395258967641293 >> 64) >> 3) * 10) + 48;
        if (rdi <= 9)
        {
            break;
        }
        v5 = (unsigned long long)(rdi * 14757395258967641293 >> 64) >> 3;
    }
    return v2;
}

// int sub_404850()

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int _obstack_allocated_p()
{
    struct v1;  // rdi
    unsigned long long v2[2];  // rax
    unsigned long v3;  // rsi

    v2 = v1->field_8;
    if (v1->field_8 != 0)
    {
        while (true)
        {
            if (v3 > v2 && *(v2) >= v3)
            {
                return 1;
            }
            if (v3 <= v2 || *(v2) < v3)
            {
                v2 = v2[1];
                return 0;
            }
        }
    }
    else
    {
        return 0;
    }
}

extern unsigned int g_41b196;
extern unsigned int g_41b650;
extern unsigned int g_41b678;
extern unsigned int g_41b6a0;
extern unsigned int g_41b730;
extern unsigned int g_41b780;
extern unsigned int g_41b890;
extern unsigned int g_41b930;
extern unsigned int g_41baa0;
extern unsigned int g_41bc10;
extern unsigned int g_41bdb8;
extern unsigned int g_41bdf8;
extern unsigned int g_41bef0;
extern unsigned int g_41bf40;
extern unsigned int g_41bfd8;
extern unsigned int g_41c180;
extern unsigned int g_41c218;
extern unsigned int g_41c380;
extern unsigned int g_41c418;
extern unsigned int g_41c580;
extern unsigned int g_41c6b0;
extern unsigned int g_41c900;
extern unsigned int g_41c9c8;
extern unsigned int g_41cbd0;
extern unsigned int g_41cc20;
extern unsigned int g_41ccb0;
extern unsigned int g_41ce28;
extern unsigned int g_41cf98;
extern unsigned int g_41cfc8;
extern unsigned int g_41d000;
extern unsigned int g_41d0a0;
extern unsigned int g_41d218;
extern unsigned int g_41d338;
extern unsigned int g_41d3f8;
extern unsigned int g_41d440;
extern unsigned int g_41d460;
extern unsigned int g_6245ac;
extern unsigned long long g_6257c0;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_40a530()
{
    unsigned long v0;  // [bp-0x88]
    unsigned long v1;  // [bp-0x80]
    char *v2;  // [bp-0x78]
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
    unsigned long v19;  // rdi
    char *v51;  // rbp
    char *v52;  // rsi
    unsigned long long v53[2];  // rbx
    unsigned long long v54;  // rax
    unsigned long long v55;  // rbx
    char *v58;  // rax
    char *v59;  // rax
    unsigned long long v60;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x41b650, 0x5), g_6257c0);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41b678, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41b6a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41b730, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41b780, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41b890, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41b930, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41baa0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41bc10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41bdb8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41bdf8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41bef0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41bf40, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41bfd8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41c180, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41c218, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41c380, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41c418, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41c580, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41c6b0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41c900, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41c9c8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41cbd0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41cc20, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41ccb0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41ce28, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41cf98, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41cfc8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41d000, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41d0a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41d218, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41d338, 0x5), stdout);
        if (g_6245ac != 1)
        {
            v51 = (g_6245ac != 2? "v" : "dir");
        }
        else
        {
            v51 = "ls";
        }
        v0 = "[";
        v52 = "[";
        v53 = &v0;
        v1 = "test invocation";
        v2 = "coreuti";
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
        do
        {
            v54 = strcmp(v51, v52);
            if (v54 == 0)
            {
                break;
            }
            v53 = &v2;
            v52 = v2;
        }
        while (v2 != 0);
        v55 = v53[1];
        if (v55 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41b196, 0x5));
            v59 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41b196, 0x5));
            v58 = setlocale(0x5, 0x0);
            if (v58 != 0)
            {
                v60 = strncmp(v58, "en_", 0x3);
            }
            if (v58 == 0 || v60 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41d440, 0x5));
            }
        }
        if ((v55 == 0 || strncmp(v59, "en_", 0x3) != 0) && (v55 == 0 || v59 != 0) && (v55 != 0 || v58 != 0) && (v55 != 0 || v60 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41d3f8, 0x5));
        }
        if (v55 != 0 || v58 != 0 && v60 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41d440, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41d460, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_409fc0()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = strrchr();
    strrchr();
    v2 = sub_4050d0();
    if ((unsigned int)v2 != 0)
    {
        return v2;
    }
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_40e480()
{
    struct v1;  // rsi
    char *v2;  // rcx
    char *v3;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rcx

    v2 = &v1->field_14;
    v1->field_14 = 0;
    if (!(INVALID_IR))
    {
        do
        {
            v2 = &v2[-1];
            v8 = v8 * 14757395258967641293 >> 64 >> 3;
            *(v2) = (unsigned int)(v8 - (v8 * 14757395258967641293 >> 64 >> 3) * 10) + 48;
        }
        while (v8 != 0);
        return v2;
    }
    while (true)
    {
        v3 = &v2[-1];
        v7 = ((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63);
        *((unsigned long long *)&v2[-1]) = 48 + (((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63)) * 10 - rdi;
        if (((unsigned long long)(rdi * 7378697629483820647 >> 64) >> 2) - (rdi >> 63) == 0)
        {
            break;
        }
        v2 = v3;
    }
    v9 = &v2[-2];
    v2[-1] = 45;
    return v9;
}

typedef struct struct_0 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned int field_78;
    char padding_7c[44];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned long long field_78;
    char padding_80[40];
    unsigned int field_a8;
} struct_1;

int sub_409c80()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi
    unsigned long long v7;  // rax

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0)
    {
        if (v1->field_70 <= v6->field_70 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0))
        {
            if (v1->field_70 >= v6->field_70)
            {
                v7 = (unsigned int)v6->field_78 - v1->field_78;
            }
            else
            {
                return 1;
            }
        }
        if ((v1->field_70 <= v6->field_70 || v5 == 0) && (v5 == 0 || (unsigned int)v6->field_78 != v1->field_78) && (v5 == 0 || v1->field_70 >= v6->field_70) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_70 <= v6->field_70) && (v6->field_a8 == 3 || v6->field_a8 == 9 || (unsigned int)v6->field_78 != v1->field_78) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_70 >= v6->field_70))
        {
            return v7;
        }
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if ((v6->field_a8 != 3 || v1->field_70 > v6->field_70) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v1->field_70 > v6->field_70) && (v6->field_a8 != 9 || v5 != 0) && (v1->field_70 > v6->field_70 || v5 != 0))
    {
        return -18446744069414584321;
    }
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

double sub_40c2e0()
{
    unsigned long long v1;  // rdi
    struct v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long long *v6;  // rdx
    unsigned long long *v7;  // rbx
    unsigned long long v8;  // rsi
    unsigned long long v10;  // rax
    unsigned long long v11[2];  // rax
    unsigned long long v12;  // rsi
    unsigned long long v14;  // rax
    struct v15;  // rbx
    unsigned long long v16;  // rsi
    struct v17;  // rax
    void v18;  // xmm0
    uint128_t v19;  // xmm0
    unsigned long v20;  // rcx
    void v21;  // xmm0

    v2 = v1;
    *(v6) = v7;
    v8 = *(v7);
    if (*(v7) != 0)
    {
        v7 = sub_40c2b0();
        if (v8 != v1)
        {
            v1 = v3;
            v10 = *((long long *)(r12 + 56))();
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
                            v14 = *((long long *)(r12 + 56))();
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
        if ((v10 == 0 || (char)v20 == 0 || v15->field_8 == 0) && ((char)v20 == 0 || v15->field_8 == 0 || v8 != v1) && (v8 == v1 || v10 != 0 || v15->field_8 != 0))
        {
            return v21;
        }
    }
    if (*(v7) == 0 || v10 == 0 && v15->field_8 == 0 && v8 != v1 || v10 == 0 && v1 != *(v11) && v8 != v1)
    {
        return v18;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

extern unsigned int g_41b360;

int sub_417340()
{
    struct v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if (v1->field_8 == 0)
    {
        v2 = unsetenv(0x41b360);
    }
    else
    {
        v2 = setenv(0x41b360, (unsigned int)v1 + 9, 0x1);
    }
    v3 = 0;
    if (v2 == 0)
    {
        tzset();
        v3 = 1;
    }
    return v3;
}

typedef struct struct_0 {
    char padding_0[4315280];
    unsigned int field_41d890;
} struct_0;

extern int512_t g_41d890;

int sub_40dfa0()
{
    unsigned long v0;  // [bp-0x30]
    unsigned int *v2;  // rsi
    unsigned long long *v4;  // rdx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rax
    char *v8;  // rbx
    unsigned long long v9;  // rbp
    struct v10;  // rax
    unsigned int v11;  // ebp
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rsi

    v8 = v6;
    if (v6 == 0)
    {
        v8 = getenv("BLOCK_SIZE");
        if (v8 == 0)
        {
            v8 = getenv("BLOCKSIZE");
            if (v8 == 0)
            {
                v7 = getenv("POSIXLY_CORRECT");
                if (v7 != 0)
                {
                    *(v4) = 0x200;
                    v7 = 0;
                    *(v2) = 0;
                }
                else
                {
                    *(v4) = 0x400;
                    *(v2) = 0;
                }
            }
        }
    }
    if (v8 != 0 || v8 != 0 || v6 != 0)
    {
        v9 = 0;
        if (*(v8) == 39)
        {
            v8 = &v8[1];
            v9 = 4;
        }
        v10 = sub_40acf0();
        if ((unsigned int)v10 >= 0)
        {
            *(v4) = 1;
            v11 = (unsigned int)v9 | *((int *)(0x4 * v10 + (char *)&g_41d890));
            v7 = 0;
            *(v2) = v11;
        }
        else
        {
            v7 = sub_4132b0();
            if ((unsigned int)v7 == 0)
            {
                if (((unsigned long long)*(v8) - 48 & 255) > 9)
                {
                    if (v8 != v0)
                    {
                        do
                        {
                            v8 = &v8[1];
                            v13 = *(v8);
                        }
                        while ((v13 - 48 & 255) > 9 && v8 != v0);
                        if ((v13 - 48 & 255) > 9)
                        {
                        }
                        else
                        {
                            v12 = *(v4);
                            *((unsigned long long *)&v2) = v9;
                        }
                    }
                    if (v8 == v0 || *((char *)(v0 - 1)) != 66)
                    {
                        if (*((char *)(v0 - 1)) != 66)
                        {
                            v9 |= 128;
                        }
                        else
                        {
                            v9 = (unsigned int)v9 | 384;
                        }
                        if (*((char *)(v0 - 2)) == 105 || *((char *)(v0 - 1)) != 66)
                        {
                            v9 = (unsigned int)v9 | 32;
                        }
                    }
                }
                v12 = *(v4);
                *((unsigned long long *)&v2) = v9;
            }
            else
            {
                *(v2) = 0;
                v12 = *(v4);
            }
            if (v12 == 0)
            {
                *(v4) = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)(getenv("POSIXLY_CORRECT") < 1)) & 0x200) + 0x200;
                return 4;
            }
        }
    }
    if ((unsigned int)v10 >= 0 || v12 != 0 || v8 == 0 && v8 == 0 && v6 == 0)
    {
        return v7;
    }
}

int sub_417390()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long *v2;  // rdi
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    void *v5;  // rbx
    unsigned long long v7;  // rbx

    if (v2 != 0)
    {
        v0 = v4;
        while (true)
        {
            v5 = *(v2);
            v2 = v5;
            if (v5 == 0)
            {
                break;
            }
        }
        v7 = v0;
        return (unsigned long long)free(v2);
    }
    return v3;
}

extern uint128_t g_6258e0;
extern uint128_t g_6258f0;
extern uint128_t g_625900;
extern unsigned long long g_625910;

int sub_41205f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_625910;
    *((uint128_t *)&v0) = g_6258e0;
    *((uint128_t *)&v1) = g_6258f0;
    *((uint128_t *)&v2) = g_625900;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_411a40();
}

// int sub_4123bb()

int sub_40ede0()
{
    unsigned long v1;  // rdx
    char *v2;  // rbx
    char *v4;  // rdi
    char *v5;  // rsi

    if (v1 != 0)
    {
        v2 = v1 - 1;
        do
        {
            *((char *)(v4 + v2)) = *((int *)(*((long long *)(unsigned long long)__ctype_tolower_loc()) + (unsigned long long)(char)*((char *)(v5 + v2)) * 4));
            v2 = &v2[-1];
        }
        while (v2 != -1);
    }
    return v4;
}

// int sub_4129d0()

extern unsigned int g_41ea58;
extern unsigned int g_41ea64;
extern unsigned int g_41ea6b;
extern unsigned int g_41ea6f;
extern unsigned int g_41ea7f;
extern unsigned int g_41ea96;
extern unsigned int g_41eaf8;
extern unsigned int g_41ebc8;
extern unsigned int g_41ebe8;
extern unsigned int g_41ec10;
extern unsigned int g_41ec38;
extern unsigned int g_41ec68;
extern unsigned int g_41edc0;

int sub_4123e0()
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
    char v10;  // [bp-0x30]
    unsigned long long v12[9];  // r8
    unsigned long long v13[9];  // rbx
    unsigned long v14;  // rsi
    unsigned int v15;  // edi
    unsigned int v16;  // edi
    unsigned int v17;  // edx
    void *v18;  // rdi
    unsigned long v20;  // r9
    unsigned long v21;  // rsi
    unsigned long long v22;  // r8
    unsigned long long v23;  // r13
    unsigned long long v24;  // r12
    unsigned long long v25;  // r15
    unsigned long long v26;  // r14
    unsigned long long v27;  // r14
    unsigned long v28;  // rbx
    unsigned long v29;  // rax
    unsigned long long v30;  // r8
    unsigned long v31;  // rax
    unsigned long v32;  // rax

    v13 = v12;
    if (v14 != 0)
    {
        __fprintf_chk(v15, 0x1, 0x41ea58, v14);
    }
    else
    {
        __fprintf_chk(v16, 0x1, 0x41ea64, v17);
    }
    __fprintf_chk((unsigned int)v18, 0x1, 0x41edc0, dcgettext(0x0, 0x41ea6b, 0x5));
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41eaf8, 0x5), v18);
    switch (v20)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x41ea6f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x41ea7f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x41ea96, 0x5);
        break;
    case 4:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x41ebc8, 0x5);
    case 5:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x41ebe8, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v31 = dcgettext(0x0, 0x41ec10, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v31 = dcgettext(0x0, 0x41ec38, 0x5);
        *((unsigned long long [9])&v5) = v12[6];
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 8:
        v23 = v13[6];
        v24 = v13[5];
        v25 = v13[4];
        *((unsigned long long [9])&v8) = v13[7];
        v26 = v13[3];
        *((unsigned long long [9])&v6) = v13[2];
        *((unsigned long long [9])&v7) = v13[1];
        v32 = dcgettext(0x0, 0x41ec68, 0x5);
    case 9:
        v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v30 = v12[1];
        v23 = v13[6];
        v24 = v13[5];
        *((unsigned long long [9])&v9) = v13[8];
        v25 = v13[4];
        v26 = v13[3];
        *((unsigned long long [9])&v8) = v13[7];
        *((unsigned long long [9])&v6) = v13[2];
        v7 = v30;
    default:
        v21 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v22 = v12[1];
        v23 = v13[6];
        v24 = v13[5];
        *((unsigned long long [9])&v9) = v13[8];
        v25 = v13[4];
        v26 = v13[3];
        *((unsigned long long [9])&v8) = v13[7];
        *((unsigned long long [9])&v6) = v13[2];
        v7 = v22;
    }
    v32 = dcgettext(0x0, v21, 0x5);
    v5 = v9;
    v4 = v27;
    __fprintf_chk((unsigned int)v18, 0x1, v29, v28);
    return v4;
    return __fprintf_chk((unsigned int)v18, 0x1, v29, *((long long *)&v10));
    v4 = v8;
    v3 = v23;
    v2 = v24;
    v1 = v25;
    v0 = v26;
    return __fprintf_chk((unsigned int)v18, 0x1, v29, *((long long *)&v10));
}

// int sub_412290()

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_40c480()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r14
    unsigned long long v3[4];  // rsi
    unsigned long long v4[4];  // r13
    struct v5;  // rdi
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
                        v8 = sub_40c2b0();
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
                    v13 = (unsigned long long)(unsigned int)sub_40c2b0();
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4127e0()
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v2;  // r9
    struct v3;  // r8
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
    return sub_4123e0();
}

int sub_412110()
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
    return sub_411a40();
}

// int sub_4120d0()

typedef struct struct_0 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned int field_68;
    char padding_6c[60];
    unsigned int field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned long long field_68;
    char padding_70[56];
    unsigned int field_a8;
} struct_1;

int sub_409b00()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi
    unsigned long long v7;  // rax

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0)
    {
        if (v1->field_60 <= v6->field_60 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0))
        {
            if (v1->field_60 >= v6->field_60)
            {
                v7 = (unsigned int)v6->field_68 - v1->field_68;
            }
            else
            {
                return 1;
            }
        }
        if ((v1->field_60 <= v6->field_60 || v5 == 0) && (v5 == 0 || v1->field_60 >= v6->field_60) && (v5 == 0 || (unsigned int)v6->field_68 != v1->field_68) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_60 <= v6->field_60) && (v6->field_a8 == 3 || v6->field_a8 == 9 || v1->field_60 >= v6->field_60) && (v6->field_a8 == 3 || v6->field_a8 == 9 || (unsigned int)v6->field_68 != v1->field_68))
        {
            return v7;
        }
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if ((v6->field_a8 != 3 || v1->field_60 > v6->field_60) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v1->field_60 > v6->field_60) && (v6->field_a8 != 9 || v5 != 0) && (v1->field_60 > v6->field_60 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

int sub_412df0()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // rdi
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // rdi
    unsigned long long v36;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v37;  // rdi
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rcx
    unsigned long long v40;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // rdi
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep1
    unsigned int v46;  // cc_dep1
    unsigned int v47;  // cc_dep1
    unsigned long long v48;  // cc_dep1
    unsigned long long v49;  // rax
    unsigned long long v50;  // r8

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
                if ((*(v14) == 0 || v17 == 34) && v9 != 0)
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
        if (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v1[0] != 0 && v9 != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0)
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
                                    /* goto *((long long *)(rdx * 8 + 4320824)); */
                                }
                            }
                            else
                            {
                                v24 = 0;
                                v30 = 0x400;
                                v25 = v32[2] == 66;
                                v31 = rsi * 2 + 1;
                            }
                        }
                    }
                }
            }
        }
        if ((*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v1[0] != 0 && v9 != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v1[0] != 0 && v9 != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v9 != 0 && v15 != 45 && v19 != 0 || *(v12) != v5 && v1[0] != 0 && v9 != 0 && v15 != 45 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) > 47)
        {
            v31 = 1;
            v30 = 0x400;
        }
        if (unknown)
        {
            v31 = 2;
            v30 = 1000;
        }
        if (unknown)
        {
            v26 = (unsigned int)v18 - 66;
            switch (v26)
            {
            case 0:
                if (!(INVALID_IR))
                {
                    v33 = -1;
                    break;
                }
                else
                {
                    v33 *= 0x400;
                    break;
                }
            case 3:
                v40 = v30;
                v41 = 6;
                do
                {
                    v33 = v33 * v40;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v48 = v41;
                    v41 -= 1;
                }
                while (v48 != 1);
            case 5: case 37:
                v28 = v30;
                if (!(INVALID_IR))
                {
                    v49 = tmp_11 * v28 * v28;
                    v33 = v49;
                }
                else
                {
                    v33 = -1;
                }
            case 9: case 41:
                v33 = v33 * v30;
            case 11: case 43:
                v29 = v30;
                if (!(INVALID_IR))
                {
                    v33 = tmp_11 * v29;
                    break;
                }
            case 14:
                v36 = v30;
                v37 = 5;
                do
                {
                    v33 = v33 * v36;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v45 = v37;
                    v37 -= 1;
                }
                while (v45 != 1);
                break;
            case 18: case 50:
                v38 = v30;
                v5 = 4;
                do
                {
                    v33 = v33 * v38;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v46 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v46 != 1);
            case 23:
                v39 = v30;
                v5 = 8;
                do
                {
                    v33 = v33 * v39;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v47 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v47 != 1);
            case 24:
                v34 = v30;
                v35 = 7;
                do
                {
                    v33 = v33 * v34;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v44 = v35;
                    v35 -= 1;
                }
                while (v44 != 1);
            case 32:
                if (INVALID_IR)
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v50 = &v32[v31];
                *(v12) = v50;
            case 53:
                if (!(INVALID_IR))
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

// int sub_405100()

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[24];
    char field_50;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

int _obstack_newchunk()
{
    void tmp_23;  // tmp #23
    void tmp_102;  // tmp #102
    void tmp_108;  // tmp #108
    unsigned long long v1;  // rax
    struct v2;  // rdi
    unsigned long v3;  // r13
    struct v4;  // rbp
    char v5;  // al
    unsigned long v6;  // rsi
    unsigned long v9;  // rbx
    unsigned long long v10;  // rcx
    struct v11;  // r12
    unsigned long long v12[2];  // r14
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rax

    v1 = 0;
    v3 = v2->field_18 - v2->field_10;
    v4 = v2->field_8;
    v5 =  amd64g_calculate_condition(0x2, 0x4, rsi, Sub(Load(addr=(rdi + 0x18), size=8, endness=Iend_LE), Load(addr=(rdi + 0x10), size=8, endness=Iend_LE)), cc_ndep);
    tmp_23 = v6 + v2->field_18 - v2->field_10 + v2->field_30;
    tmp_102 = v6 + v2->field_18 - v2->field_10 + v2->field_30 + (v2->field_18 - v2->field_10 >> 3) + 100;
    tmp_108 = v6 + v2->field_18 - v2->field_10 + v2->field_30 <= v2->field_0;
    v9 = (tmp_102 <= (tmp_108? v2->field_0 : tmp_23)? (v6 + v2->field_18 - v2->field_10 + v2->field_30 <= v2->field_0? v2->field_0 : v6 + v2->field_18 - v2->field_10 + v2->field_30) : tmp_102);
    if (rax == 0)
    {
        v10 = INVALID_IR;
        if (v10 == 0)
        {
            v11 = v2;
            v12 = (unsigned long long)(unsigned int)sub_417050();
            if (v12 != 0)
            {
                v11->field_8 = v12;
                v12[1] = v4;
                v11->field_20 = (char *)v12 + v9;
                v12[0] = (char *)v12 + v9;
                v14 = &((unsigned long long [2])&((char *)v12)[v11->field_30])[2] & !(v11->field_30);
                v15 = memcpy(&((unsigned long long [2])&((char *)v12)[v11->field_30])[2] & !(v11->field_30), v11->field_10, v3);
                if ((v11->field_50 & 2) == 0)
                {
                    v15 = !(v11->field_30) & &((struct struct_1 *)&v4->padding_0[v11->field_30])[1];
                    if (v11->field_10 == (!(v11->field_30) & &((struct struct_1 *)&v4->padding_0[v11->field_30])[1]))
                    {
                        v12[1] = v4->field_8;
                        v15 = sub_417070();
                    }
                }
                v11->field_10 = v14;
                v11->field_18 = v3 + v14;
                v11->field_50 = v11->field_50 & 253;
                return v15;
            }
        }
    }
    if (v12 == 0 || rax != 0 || v10 != 0)
    {
        sub_417010(); /* do not return */
    }
}

int sub_40bb70()
{
    unsigned long long v1;  // rax

    v1 = sub_40bb90();
    if (v1 != 0)
    {
        return v1;
    }
    sub_412bd0(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

int sub_4056f0()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        return -18446744069414584321;
    }
    if ((v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0) && v5 == 0 && (v6->field_a8 == 3 || v6->field_a8 == 9))
    {
        return 1;
    }
}

int sub_40acf0()
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
            if (v13 != 0 || v0 != -1 && v14 != v11)
            {
                v12 += 1;
                v15 += v6;
                v16 = *((long long *)(v5 + v12 * 8));
            }
            if ((v13 == 0 || *((long long *)(v5 + (v12 << 3))) == 0) && (v0 == -1 || *((long long *)(v5 + (v12 << 3))) == 0) && (v13 != 0 || v14 != v11) && (*((long long *)(v5 + (v12 << 3))) != 0 || v13 != 0 || v0 != -1))
            {
                *((int *)&v0) = (v1 == 0? v0 : -2);
            }
        }
    }
    return v0;
}

int sub_40cc10()
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
                            rax();
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
                    v9 = rax();
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

extern char g_6256ed;

int sub_405520()
{
    unsigned int v0;  // [bp-0xc]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // rbx
    char v4;  // dl
    unsigned int v5;  // esi

    v1 = v3;
    if (v4 != 0 && g_6256ed == 0)
    {
        v0 = v5;
        sub_40e160();
    }
}

int sub_416e20()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4167b0();
}

extern int512_t g_41dd1e;
extern int512_t g_41dd22;

int sub_410710()
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
        v3 = sub_4179a0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_41dd1e : 4316457);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_41dd22 : 4316453);
            }
        }
    }
    if (unknown)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[5] == 0 && v3[3] == 45 && (v3[0] & 223) == 85 && v3[4] == 56 && (v3[1] & 223) == 84 && v1 == v2 && (v3[2] & 223) == 70 || (v3[1] & 223) == 66 && v3[3] == 56 && v4 == 71 && v3[2] == 49 && v1 == v2 && v3[4] == 48 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_41b08a;
extern char g_625960[2];

int sub_4179a0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0xd0]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // rbx
    unsigned long v11;  // rax
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    char *v15;  // r13
    unsigned long long v16;  // r14
    unsigned long long v17;  // rbp
    struct v20;  // r12
    unsigned short v21;  // dx
    unsigned long long v22;  // rax
    unsigned long v27;  // rdi
    unsigned long long v29;  // rax
    unsigned int *v30;  // rcx
    unsigned int v31;  // eax
    unsigned long v32;  // rax
    unsigned int *v33;  // rdx
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rax
    unsigned long v36;  // rax
    unsigned long long v37;  // rax
    unsigned long long v38;  // rax
    unsigned long v39;  // rsi
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rcx
    unsigned long long v43;  // rdi
    unsigned long long v44;  // rsi
    unsigned long long v45;  // r9
    unsigned long long v46;  // r10
    unsigned int v47;  // ecx
    unsigned long long v49;  // r8
    void *v50;  // rcx
    unsigned long long v53;  // rcx
    unsigned int v55;  // edx
    unsigned long long v58;  // rcx
    unsigned long long v59;  // rsi
    char *v60;  // rax
    unsigned long long v61;  // rdi
    char *v62;  // rax
    unsigned long long v63;  // rax
    unsigned long long v64;  // rdx
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rax
    unsigned long long v70;  // rax
    unsigned long long v71;  // rbp
    unsigned long long v72;  // rax

    v9 = g_625960;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_41b08a : (unsigned long long)nl_langinfo(0xe));
    if (g_625960 == 0)
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
        if (v15 == 0 || *(v15) == 0)
        {
            v13 = 115;
            v14 = 101;
            v16 = 100;
            v15 = "/home/dongkwan/data/scripts/gnu_packages/coreutils/coreutils-8.29_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        }
        if (v15 == 0 || *(v15) == 0 || v11 != 0 && v15[v11 + -1] != 47)
        {
            v17 = malloc(v13);
        }
        if (v17 == 0 || v17 == 0)
        {
            v9 = &g_41b08a;
        }
        if (v17 != 0 && (v15 == 0 || *(v15) == 0 || v11 != 0) && (v15 == 0 || *(v15) == 0 || v15[v11 + -1] != 47))
        {
            memcpy(v17, v15, v16);
            *((char *)(v17 + v16)) = 47;
        }
        if (v15 == 0 && v17 != 0 || *(v15) == 0 && v17 != 0 || v11 != 0 && v15[v11 + -1] != 47 && v17 != 0 || v11 == 0 && v15 != 0 && v17 != 0 && *(v15) != 0 || v15[v11 + -1] == 47 && v15 != 0 && v17 != 0 && *(v15) != 0)
        {
            v20 = v14 + v17;
            v20->field_0 = 3347411969557751907;
            v20->field_c = 115;
            v20->field_8 = 1634298977;
            v22 = open(v17, 0x0, v21);
            if ((unsigned int)v22 >= 0)
            {
                v9 = 0;
                v0 = 0;
                if (v10 != 0)
                {
                    v10 = fdopen(v22, "r");
                    while (true)
                    {
                        v60 = *((long long *)(v10 + 8));
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v61 = __uflow(v10);
                        }
                        if ((unsigned int)v27 != 35 && (unsigned int)v27 != 32)
                        {
                            ungetc(v27, v10);
                            v29 = fscanf(v10, "%50s %50s", (unsigned int)&v3, (unsigned int)&v5);
                            if (v29 > 1)
                            {
                                v30 = &v3;
                                do
                                {
                                    tmp_12 = (unsigned int)*((int *)&v3);
                                    v30 = &v4;
                                    v31 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                }
                                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                v32 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax >> 16) : (unsigned int)rax);
                                v33 = &v5;
                                v34 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v30 + 2) : v30) + -1 * ((v32 + v32 <= v32? 1 : 0) & 1) + -0x1 * &v3;
                                do
                                {
                                    tmp_12 = (unsigned int)*((int *)&v5);
                                    v33 = &v6;
                                    v35 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                }
                                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                v1 = v34;
                                tmp_56 = (unsigned int)v35 % 0x10000;
                                v36 = (unsigned int)(((unsigned int)v35 & 32896) == 0? (unsigned int)(v35 >> 16) : (unsigned int)v35);
                                v37 = &((char *)(-3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v33)[2] : v33) + -1 * ((v36 + v36 <= v36? 1 : 0) & 1) + -0x1 * &v5))[v1];
                                v2 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v33)[2] : v33) + -1 * (((unsigned int)((((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)? 1 : 0) & 1) + -0x1 * &v5;
                                if (v0 == 0)
                                {
                                    v0 = v37 + 2;
                                    v38 = malloc(v37 + 3);
                                    v40 = v1;
                                    v41 = v2;
                                }
                                else
                                {
                                    v39 = v37 + v0 + 3;
                                    v0 = v37 + v0 + 2;
                                    v38 = realloc(NULL, v39);
                                    v41 = v2;
                                    v40 = v1;
                                }
                                if (v38 != 0)
                                {
                                    tmp_1 = -2 - v40;
                                    v42 = v40 + 1;
                                    v43 = v0 - v41;
                                    v44 = tmp_1 + v0 - v41 + v38;
                                    if ((unsigned int)v42 >= 8)
                                    {
                                        *((long long *)v44) = *((long long *)&v3);
                                        *((long long *)(v44 + v42 - 8)) = *((long long *)&(&v3)[v42 + -8]);
                                        v45 = v44 + 8 & -8;
                                        v44 -= v44 + 8 & -8;
                                        v46 = &(&v3)[-1 * v44];
                                        v47 = (unsigned int)(v42 + v44) & -8;
                                        if (v47 >= 8)
                                        {
                                            v44 = 0;
                                            do
                                            {
                                                v49 = v44;
                                                v44 = (unsigned int)v44 + 8;
                                                *((long long *)(v45 + v49)) = *((long long *)(v46 + v49));
                                            }
                                            while ((unsigned int)v44 < (v47 & -8));
                                        }
                                    }
                                    else if ((v42 & 4) != 0)
                                    {
                                        *((int *)v44) = *((int *)&v3);
                                        *((int *)(v44 + v42 - 4)) = *((int *)&(&v3)[v42 + -4]);
                                    }
                                    else if ((unsigned int)v42 != 0)
                                    {
                                        *((char *)v44) = v3;
                                        if ((v42 & 2) != 0)
                                        {
                                            *((short *)(v44 + v42 - 2)) = *((short *)&(&v3)[v42 + -2]);
                                        }
                                    }
                                    v64 = v41 + 1;
                                    v50 = v38 + v43 - 1;
                                    if ((unsigned int)v44 >= 8)
                                    {
                                        *((long long *)v50) = *((long long *)&v5);
                                        v44 = v64;
                                        *((long long *)&((char *)v50)[v44 + -8]) = *((long long *)&(&v5)[v44 + -8]);
                                        v53 = v50 - (v50 + 8 & -8);
                                        v55 = (unsigned int)(v44 + v53) & -8;
                                        if (v55 >= 8)
                                        {
                                            v58 = 0;
                                            do
                                            {
                                                v59 = v58;
                                                v58 = (unsigned int)v58 + 8;
                                                *((long long *)((v50 + 8 & -8) + v59)) = *((long long *)&(&v5)[v59 + -1 * v53]);
                                            }
                                            while ((unsigned int)v58 < (v55 & -8));
                                        }
                                    }
                                    else if (((char)v44 & 4) != 0)
                                    {
                                        *((int *)v50) = *((int *)&v5);
                                        *((unsigned int *)&((char *)v50)[(unsigned long long)v7 + -4]) = v7;
                                    }
                                    else if ((unsigned int)v44 != 0)
                                    {
                                        *((char *)v50) = v5;
                                        if ((v5 & 2) != 0)
                                        {
                                            *((short *)&((char *)v50)[(unsigned long long)v5 + -2]) = v7;
                                        }
                                    }
                                    v9 = v38;
                                    v60 = *((long long *)(v10 + 8));
                                }
                                else
                                {
                                    v9 = &g_41b08a;
                                    v10 = (tmp_10 == 0? &g_41b08a : tmp_10);
                                    free(NULL);
                                    sub_417f10();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1 && v38 != 0)
                        {
                            *((char **)(v10 + 8)) = &v60[1];
                            v27 = *(v60);
                        }
                        if ((unsigned int)v27 == 35)
                        {
                            do
                            {
                                v62 = *((long long *)(v10 + 8));
                                if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                {
                                    *((char **)(v10 + 8)) = &v62[1];
                                    v63 = *(v62);
                                    v64 = 1;
                                }
                                else
                                {
                                    v63 = __uflow(v10);
                                    v64 = (char)(v63 != -1);
                                }
                            }
                            while (v63 != 10 && v64 != 0);
                        }
                        if ((unsigned int)v27 == 35 && v63 == -1 || (unsigned int)v61 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v61 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v29 <= 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32)
                        {
                            v10 = (tmp_10 == 0? &g_41b08a : tmp_10);
                            sub_417f10();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1 || (unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v63 == -1)
                    {
                        v9 = &g_41b08a;
                    }
                    else if (((unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1 && (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v0 != 0 || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1 && (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v0 == 0) && v38 == 0 || ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1 || (unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (unsigned int)(v27 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v63 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_41b08a;
            free(v17);
        }
        *((char *[2])&g_625960[0]) = v9;
    }
    v68 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v69 = strcmp((tmp_10 == 0? &g_41b08a : tmp_10), v9);
            if (v69 != 0 && (v68 != 42 || v9[1] != 0))
            {
                v70 = strlen(v9);
                v71 = &((char [2])&v9[v70])[1];
                v72 = strlen(&((char [2])&v9[v70])[1]);
                v9 = v71 + v72 + 1;
                v68 = (char)*((char *)(v71 + v72 + 1));
                if (v68 == 0)
                {
                    break;
                }
            }
            if (v69 == 0 || v68 == 42 && v9[1] == 0)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
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

int sub_40d260()
{
    unsigned long long *v0;  // [bp-0x20]
    void tmp_10;  // tmp #10
    void tmp_15;  // tmp #15
    struct v2;  // rdi
    unsigned long long v3[10];  // rbx
    unsigned long long v5;  // cc_dep1
    unsigned long long v6;  // rax
    uint128_t v7;  // xmm0
    unsigned long long v8;  // rax
    unsigned int v9;  // ymm0
    unsigned long long v10;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // xmm0lq
    uint128_t v12;  // xmm1
    unsigned long long v13;  // rax
    uint128_t v14;  // xmm1
    unsigned int v15;  // ymm1
    unsigned long long v16;  // xmm1lq
    struct v18;  // rdx
    uint128_t v19;  // xmm0
    uint128_t v20;  // xmm0
    unsigned int v21;  // ymm0
    /*INVALID_EQUAL_UNDEFINED*/
undefined v22;  // xmm1
    uint128_t v23;  // xmm1
    unsigned int v24;  // ymm1
    uint128_t v25;  // xmm2
    unsigned int v26;  // ymm2
    unsigned long long v27;  // xmm2lq
    uint128_t v28;  // xmm0
    struct v30;  // rdi
    void *v31;  // r12

    v3 = v2;
    if (sub_40c2e0() != 0)
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
                v11 = (unsigned long long)(unsigned int)xmm0 * 2;
            }
            if (!(INVALID_IR))
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
                v12 = xmm1 * 2;
            }
            xmm1 = INVALID_IR;
;            if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
            {
                sub_40c400();
                v18 = v3[5];
                if (!(INVALID_IR))
                {
                    v19 = 0;
                    v19 = (unsigned int)v2->field_10;
                }
                else
                {
                    v20 = 0;
                    v21 = v2->field_10 >> 1 | (unsigned int)v2->field_10 & 1;
                    v19 = xmm0 * 2;
                }
                if (!(INVALID_IR))
                {
                    v22 = 0;
                    v22 = v2->field_18;
                }
                else
                {
                    v23 = 0;
                    v24 = v2->field_18 >> 1 | (unsigned int)v2->field_18 & 1;
                    v22 = (unsigned long long)(unsigned int)xmm1 * 2;
                }
                v25 = 0;
                v26 = *(v2->field_28);
                v27 = xmm2 * v19;
                if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
                {
                    xmm0 = (xmm0 * INVALID_IR)
;                    if (v18->field_10 == 0)
                    {
                        xmm0 = (xmm0 * INVALID_IR)
;                    }
                    if (sub_40cda0() == 0)
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char field_10;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char field_10;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    unsigned int field_10;
} struct_2;

extern struct g_6257a0;
extern struct g_6257a8;

int sub_40e380()
{
    void tmp_15;  // tmp #15
    struct v1;  // rbx
    char *v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    struct v5;  // rbx
    struct v6;  // rbp
    struct v9;  // rax
    struct v10;  // rax

    v1 = g_6257a8;
    if (g_6257a8 != 0)
    {
        do
        {
            if (v1->field_10 == *(v2))
            {
                v3 = strcmp(&v1->field_10, v2);
                if (v3 == 0)
                {
                    break;
                }
            }
            v1 = v1->field_8;
        }
        while (v1 != 0);
        if (v3 != 0 || v1->field_10 != *(v2))
        {
            v5 = g_6257a0;
        }
        else if (v1->field_10 == *(v2))
        {
            v10 = v1;
            return v10;
        }
    }
    if (g_6257a8 == 0 || g_6257a0 != 0)
    {
        v5 = g_6257a0;
        if (g_6257a0 != 0)
        {
            while (true)
            {
                if (v5->field_10 == *(v2))
                {
                    v4 = strcmp(&v5->field_10, v2);
                    if (v4 == 0)
                    {
                        return 0;
                    }
                }
                if (v4 != 0 || v5->field_10 != *(v2))
                {
                    v5 = v5->field_8;
                    if (v5 == 0)
                    {
                        break;
                    }
                }
            }
        }
        v6 = (unsigned long long)getgrnam((unsigned int)v2);
        strlen(v2);
        v1 = (unsigned long long)(unsigned int)sub_412980();
        strcpy(&v1->field_10, v2);
        if (v6 != 0)
        {
            v1->field_0 = v6->field_10;
            v9 = g_6257a8;
            g_6257a8 = v1;
            v1->field_8 = v9;
        }
        else
        {
            tmp_15 = g_6257a0;
            g_6257a0 = v1;
            v1->field_8 = tmp_15;
            return 0;
        }
    }
    if (g_6257a8 == 0 && v6 != 0 || g_6257a8 != 0 && g_6257a0 != 0)
    {
        v10 = v1;
        return v10;
    }
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

int sub_408280()
{
    struct v1;  // rsi
    struct v2;  // rdi

    if (!(v1->field_48 <= v2->field_48))
    {
        return -18446744069414584321;
    }
    else if (v1->field_48 != v2->field_48)
    {
        return (unsigned long long)(char)(v1->field_48 < v2->field_48);
    }
}

extern unsigned long long g_625798;

int sub_40b6f0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_625798 = v1;
    return v2;
}

typedef struct struct_0 {
    char padding_0[80];
    char field_50;
} struct_0;

int sub_417070()
{
    struct v1;  // rdi

    if ((v1->field_50 & 1) != 0)
    {
        /* goto *((long long *)&v1->padding_0[64]); */
    }
    else
    {
        /* goto *((long long *)&v1->padding_0[64]); */
    }
}

int sub_412a20()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    unsigned long long v4;  // rax

    v4 = v2 * v3;
    v4 = INVALID_IR;
    if (!(INVALID_IR))
    {
        v4 =  amd64g_calculate_condition(0x0, 0x30, t10, t1, cc_ndep);
    }
    if (INVALID_IR ||  amd64g_calculate_condition(0x0, 0x30, t10, t1, cc_ndep) != 0)
    {
        v0 = v4;
        sub_412bd0(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c8c0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_40c2b0();
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
    char padding_0[80];
    char field_50;
} struct_0;

int sub_417050()
{
    struct v1;  // rdi

    if ((v1->field_50 & 1) != 0)
    {
        /* goto *((long long *)&v1->padding_0[56]); */
    }
    else
    {
        /* goto *((long long *)&v1->padding_0[56]); */
    }
}

int sub_4160b0()
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

typedef struct struct_0 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned int field_88;
} struct_0;

int sub_409960()
{
    struct v1;  // rdi
    unsigned long long v2[18];  // rsi
    unsigned long long v3;  // rax

    if (v1->field_80 <= v2[16])
    {
        if (v1->field_80 >= v2[16])
        {
            v3 = (unsigned int)v2[17] - v1->field_88;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_80 < v2[16] || (unsigned int)v2[17] != v1->field_88)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

// int sub_412270()

int sub_405120()
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

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

int sub_4080c0()
{
    struct v1;  // rdi
    struct v2;  // rsi

    if (!(v1->field_48 <= v2->field_48))
    {
        return -18446744069414584321;
    }
    else if (v1->field_48 != v2->field_48)
    {
        return (unsigned long long)(char)(v1->field_48 < v2->field_48);
    }
}

int sub_40eb70()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

typedef struct struct_0 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned int field_78;
} struct_0;

int sub_4099b0()
{
    struct v1;  // rdi
    unsigned long long v2[16];  // rsi
    unsigned long long v3;  // rax

    if (v1->field_70 <= v2[14])
    {
        if (v1->field_70 >= v2[14])
        {
            v3 = (unsigned int)v2[15] - v1->field_78;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_70 < v2[14] || (unsigned int)v2[15] != v1->field_78)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

int sub_40ca20()
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
            v4 = (0 | tmp_16) % v3 >> 64;
        }
        while ((char)v2 != 0);
    }
    return v4;
}

int sub_4127c0()
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

extern unsigned int g_41b039;
extern int512_t g_6253a0;

int sub_404e80()
{
    char *v1;  // rdi
    char *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long v5;  // rax
    unsigned long v7;  // rax
    char v9;  // sil
    unsigned long long v10;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // rbp
    char *v12;  // rdi
    unsigned long long v13;  // rax

    v2 = v1;
    v3 = strlen(v1);
    v4 = v3 + 1;
    v5 = 3 * (v3 + 1);
    if (!(INVALID_IR) &&  amd64g_calculate_condition(0x0, 0x30, 0x3, rcx, cc_ndep) == 0)
    {
        v7 = sub_412980();
        v11 = v7;
        while (true)
        {
            v10 = *(v2);
            if (*(v2) == 0)
            {
                break;
            }
            while (true)
            {
                v2 = &v2[1];
                if (v10 == 47 && v9 != 0)
                {
                    *(v11) = 47;
                    v11 = &v11[1];
                }
                if (v9 == 0 || v10 != 47)
                {
                    if (*(&((char *)&g_6253a0)[(unsigned long long)v10]) != 0)
                    {
                        *((unsigned long long *)&v11) = v10;
                        v10 = *(v2);
                        v11 = &v11[1];
                        if (*(v2) == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v12 = v11;
                        v11 = &v11[3];
                        __sprintf_chk(v12, 0x1, 0xffffffff, 0x41b039);
                    }
                }
            }
            if (*(&((char *)&g_6253a0)[(unsigned long long)v10]) != 0 && (v9 == 0 || v10 != 47))
            {
                *(v11) = 0;
                v13 = v7;
                return v13;
            }
        }
        *(v11) = 0;
        v13 = v7;
        return v13;
    }
    if (INVALID_IR ||  amd64g_calculate_condition(0x0, 0x30, 0x3, rcx, cc_ndep) != 0)
    {
        sub_412bd0(); /* do not return */
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

    v10 = sub_4026a8();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6438448 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

int sub_4055f0()
{
    struct v1;  // rdi
    struct v2;  // rsi

    if (!(v1->field_48 <= v2->field_48))
    {
        return -18446744069414584321;
    }
    else if (v1->field_48 != v2->field_48)
    {
        return (unsigned long long)(char)(v1->field_48 < v2->field_48);
    }
}

extern int512_t g_6258e0;

int sub_411c80()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6258e0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6258e0 : v1) + 4)) = v3;
    return v2;
}

int sub_40c2b0()
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

typedef struct struct_0 {
    char padding_0[168];
    unsigned int field_a8;
} struct_0;

int sub_405750()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // edx
    unsigned long long v5;  // rdx
    struct v6;  // rsi
    unsigned long long v7;  // rdx

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if (v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        v7 = -18446744069414584321;
    }
    if (v5 == 0)
    {
        v7 = 1;
    }
    if (v6->field_a8 == 3 && v5 == 0 || v6->field_a8 == 9 && v5 == 0 || v6->field_a8 != 3 && v6->field_a8 != 9 && v5 != 0)
    {
        return v7;
    }
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

extern unsigned int g_41b0a5;
extern unsigned int g_41b0eb;
extern unsigned int g_41b104;
extern unsigned int g_41b119;
extern unsigned int g_41b12e;
extern unsigned int g_41b5f8;
extern unsigned int g_41b620;
extern char g_624400;
extern unsigned long long g_6254b8;
extern unsigned long long g_6254c0;
extern unsigned long long g_6255b8;
extern unsigned int g_6255d0;
extern char g_625678;
extern unsigned long long g_6256a0;
extern unsigned long long g_6256a8;
extern unsigned int g_6256b0;
extern char g_6256b6;
extern char g_6256d1;
extern char g_6256d8;
extern char g_6256ec;
extern unsigned int g_6256f0;
extern unsigned int g_6256f8;
extern unsigned long long g_625770;
extern unsigned long long g_625788;
extern unsigned long long stdout[7];

int sub_4092a0()
{
    unsigned long long v0;  // [bp-0x2f8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x2e0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x2d8]
    unsigned int v3;  // [bp-0x2cc]
    char v4;  // [bp-0x2c8]
    unsigned long v5;  // [bp-0x2c0]
    unsigned int v7;  // edx
    unsigned int *v8;  // r12
    unsigned int *v9;  // r12
    unsigned long v11;  // r13
    unsigned long v13;  // rax
    unsigned long v14;  // rdi
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17[2];  // r15
    unsigned long long v18;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // rax
    unsigned long long v22[2];  // rax
    unsigned long long v23;  // rcx
    unsigned long long v25;  // rbx
    char *v27;  // rax
    unsigned long long v28;  // r15
    char v33[21];  // rbx
    unsigned long long v34;  // rdx
    unsigned long long v36;  // rax
    char v37;  // al
    struct v38;  // r15
    unsigned long long v39;  // rax
    struct v40;  // r15
    unsigned long long v41;  // rax
    char *v51;  // rbx
    char *v53;  // rax
    char *v54;  // rbx

    v3 = v7;
    *(v8) = 0;
    v8 = __errno_location();
    if (v11 != 0)
    {
        v11 = opendir();
        if (g_625788 != 0)
        {
            v13 = dirfd(v11);
            if (v13 >= 0)
            {
                v16 = (unsigned long long)__fxstat(0x1, v13, (unsigned int)&v4) >> 31;
            }
            else
            {
                v15 = (unsigned long long)__xstat(0x1, v14, (unsigned int)&v4) >> 31;
            }
            if ((v13 < 0 || v16 == 0) && (v15 == 0 || v13 >= 0))
            {
                v2 = v5;
                v1 = *((long long *)&v4);
                v17 = (unsigned long long)(unsigned int)sub_412980();
                v17[0] = v2;
                v17[1] = v1;
                v18 = sub_40d220();
                if (!(v18 != 0))
                {
                    sub_412bd0(); /* do not return */
                }
                else if (v17 != v18)
                {
                    free(v17);
                    v25 = (unsigned int)sub_412110();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x41b620, 0x5));
                    v20 = closedir();
                    g_6255d0 = 2;
                }
                else
                {
                    v22 = g_6254b8;
                    v23 = *((long long *)&v4);
                    if (g_6254c0 - g_6254b8 <= 15)
                    {
                        v1 = *((long long *)&v4);
                        _obstack_newchunk();
                        v22 = g_6254b8;
                        v23 = v1;
                    }
                    g_6254b8 = &v22[2];
                    v22[1] = v23;
                    v22[0] = v5;
                }
            }
            if ((v13 < 0 || v16 != 0) && (v13 >= 0 || v15 != 0))
            {
                dcgettext(0x0, 0x41b5f8, 0x5);
                sub_405580();
                v20 = closedir();
            }
        }
        if ((g_625788 == 0 || v17 == v18) && (g_625788 == 0 || v18 != 0) && (g_625788 == 0 || v13 < 0 || v16 == 0) && (g_625788 == 0 || v15 == 0 || v13 >= 0))
        {
            sub_4084b0();
            if (g_625678 != 0 || g_6256b6 != 0)
            {
                if (g_624400 == 0)
                {
                    v27 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v27) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                    g_6255b8 = g_6255b8 + 1;
                }
                g_624400 = 0;
                if (g_6256d8 == 0)
                {
                    v28 = 0;
                }
                else
                {
                    v28 = 0;
                    fwrite_unlocked("  ", 0x1, 0x2, stdout);
                    g_6255b8 = g_6255b8 + 2;
                }
                if (g_6256d1 != 0)
                {
                    v28 = (unsigned int)sub_40b070();
                    if (v28 == 0)
                    {
                        dcgettext(0x0, 0x41b0a5, 0x5);
                        sub_405580();
                    }
                }
                v0 = v28;
                sub_4062d0();
                free(v28);
                fwrite_unlocked(":\n", 0x1, 0x2, stdout);
                g_6255b8 = g_6255b8 + 2;
            }
            v2 = 0;
            v1 = v7;
            while (true)
            {
                *(v9) = 0;
                v33 = (unsigned long long)readdir();
                if (v33 != 0)
                {
                    if (g_6256b0 != 2)
                    {
                        if (v33[2 + 3] != 46)
                        {
                            if (g_6256b0 == 0)
                            {
                                v38 = g_6256a0;
                                if (g_6256a0 != 0)
                                {
                                    while (true)
                                    {
                                        v39 = sub_4159a0();
                                        if (v39 != 0)
                                        {
                                            v38 = v38->field_8;
                                            if (v38 == 0)
                                            {
                                                break;
                                            }
                                        }
                                    }
                                    if (v39 == 0)
                                    {
                                        sub_405d70();
                                    }
                                    else if (v39 != 0)
                                    {
                                        v40 = g_6256a8;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (g_6256b0 != 0)
                            {
                                v36 = 0;
                                v37 = v33[2 + 4] == 46;
                            }
                        }
                    }
                    if (g_6256b0 == 2 || v33[2 + 3] != 46 || g_6256b0 != 0 && v33[2 + 4 + rax] != 0)
                    {
                        v40 = g_6256a8;
                        if (g_6256a8 != 0)
                        {
                            while (true)
                            {
                                v41 = sub_4159a0();
                                if (v41 != 0)
                                {
                                    v40 = v40->field_8;
                                    if (v40 == 0)
                                    {
                                        break;
                                    }
                                }
                            }
                            if (v41 == 0)
                            {
                                sub_405d70();
                            }
                        }
                        v2 += (unsigned int)sub_408580();
                        if (g_6256f0 == -1 && g_6256f8 == 1 && g_6256b6 == 0 && g_6256ec == 0)
                        {
                            sub_404f40();
                            sub_407ca0();
                            sub_4084b0();
                        }
                    }
                }
                else
                {
                    v34 = *(v9);
                    if (*(v9) == 0)
                    {
                        break;
                    }
                    dcgettext(0x0, 0x41b104, 0x5);
                    sub_405580();
                    if (*(v9) != 75)
                    {
                        break;
                    }
                }
                sub_405d70();
            }
            if (closedir() != 0)
            {
                dcgettext(0x0, 0x41b119, 0x5);
                sub_405580();
            }
            sub_404f40();
            if (g_6256b6 != 0)
            {
                sub_405140();
            }
            v20 = g_6256f8;
            if (g_6256f8 == 0 || g_6256ec != 0)
            {
                if (g_6256d8 != 0)
                {
                    fwrite_unlocked("  ", 0x1, 0x2, stdout);
                    g_6255b8 = g_6255b8 + 2;
                }
                v51 = (unsigned long long)dcgettext(0x0, 0x41b12e, 0x5);
                fputs_unlocked(v51, stdout);
                g_6255b8 = g_6255b8 + strlen(v51);
                v53 = stdout[5];
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v53) = 32;
                }
                else
                {
                    __overflow();
                }
                g_6255b8 = g_6255b8 + 1;
                v54 = (unsigned long long)(unsigned int)sub_40d5d0();
                fputs_unlocked(v54, stdout);
                g_6255b8 = g_6255b8 + strlen(v54);
                v20 = stdout[5];
                if (stdout[5] < stdout[6])
                {
                    stdout[5] = stdout[5] + 1;
                    *(v20) = 10;
                }
                else
                {
                    v20 = __overflow();
                }
                g_6255b8 = g_6255b8 + 1;
            }
            if (g_625770 != 0)
            {
                v20 = sub_407ca0();
            }
        }
    }
    else
    {
        dcgettext(0x0, 0x41b0eb, 0x5);
        v20 = sub_405580();
    }
    if (g_625788 == 0 || v11 == 0 || v18 != 0 || v13 < 0 && v15 != 0 || v13 >= 0 && v16 != 0)
    {
        return v20;
    }
}

typedef struct struct_0 {
    char padding_0[128];
    unsigned long long field_80;
    unsigned int field_88;
} struct_0;

int sub_409f30()
{
    struct v1;  // rdi
    unsigned long long v2[18];  // rsi
    unsigned long long v3;  // rax

    if (v1->field_80 <= v2[16])
    {
        if (v1->field_80 >= v2[16])
        {
            v3 = (unsigned int)v2[17] - v1->field_88;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_80 < v2[16] || (unsigned int)v2[17] != v1->field_88)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40ccc0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long long v4[10];  // rdi
    unsigned long long v5[10];  // r12
    unsigned long v6;  // rbx
    unsigned long long v7;  // rdi
    unsigned long long v9[2];  // rbx
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rax
    unsigned long long v12[2];  // rbp
    struct v13;  // rdi
    void *v14;  // rbx
    struct v15;  // rdi
    void *v16;  // rbx

    v1 = v3;
    v5 = v4;
    v0 = v6;
    v12 = *(v4);
    v11 = v4[1];
    if (v4[8] != 0 && v4[4] != 0 && *(v4) < v4[1])
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
                v9 = v12;
                while (true)
                {
                    *((long long *)(r12 + 64))();
                    v9 = v9[1];
                    if (v9 == 0)
                    {
                        break;
                    }
                    v10 = *(v9);
                }
                v11 = v5[1];
                v12 = &v12[2];
                if (v5[1] <= v12)
                {
                    break;
                }
            }
        }
        v12 = *(v5);
    }
    if ((*(v4) < v4[1] || v4[8] == 0 || v4[4] == 0) && v12 < v11)
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

extern unsigned int g_6255d4;
extern unsigned int g_6255d8;

int sub_405560()
{
    unsigned long long v1;  // rax

    v1 = g_6255d8;
    if (g_6255d8 == 0)
    {
        v1 = g_6255d4 + 1;
        g_6255d4 = g_6255d4 + 1;
    }
    return v1;
}

int sub_4122c2()
{
    char v0;  // [bp-0x128]
    unsigned long v1;  // [bp-0x120]
    char v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp+0x0]
    unsigned long long v6;  // [bp+0x10]
    unsigned long long v7;  // [bp+0x18]
    unsigned long long v8;  // [bp+0x20]
    unsigned long long v9;  // [bp+0x28]
    unsigned long v12;  // r13
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    void *v15;  // rbp
    void *v16;  // r12
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // bl
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15

    v12 = (unsigned int)sub_40b8d0();
    v13 = sub_40b8d0();
    if (v12 == v13)
    {
        v14 = memcmp((unsigned long long)(unsigned int)sub_40b870(), (unsigned long long)(unsigned int)sub_40b870(), v12);
        if (v14 == 0)
        {
            v15 = (unsigned long long)(unsigned int)sub_417940();
            v16 = (unsigned long long)(unsigned int)sub_417940();
            v17 = __xstat(0x1, (unsigned int)v15, (unsigned int)&v0);
            if (v17 == 0)
            {
                v18 = __xstat(0x1, (unsigned int)v16, (unsigned int)&v2);
                if (v18 == 0)
                {
                    v19 = 0;
                    if (v1 == v3)
                    {
                        v19 = (char)(*((long long *)&v0) == *((long long *)&v2));
                    }
                    free(v15);
                    free(v16);
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
    if (v14 != 0 || v12 != v13 || v17 == 0 && v18 == 0)
    {
        v20 = v19;
        v21 = v4;
        v22 = v6;
        v23 = v7;
        v24 = v8;
        v25 = v9;
        return v20;
    }
}

int sub_411f60()
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
    return sub_411a40();
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[88];
    unsigned int field_a8;
} struct_0;

int sub_408200()
{
    struct v1;  // rdi
    unsigned int v2;  // eax
    char v3;  // al
    unsigned int v4;  // ecx
    unsigned long long v5;  // rcx
    struct v6;  // rsi

    v2 = v1->field_a8;
    v3 = v1->field_a8 == 9;
    v5 = v4 | rax;
    if ((v6->field_a8 == 3 || v6->field_a8 == 9 || v5 == 0) && v6->field_48 <= v1->field_48 && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0) && v6->field_48 != v1->field_48)
    {
        return (unsigned long long)(char)(v6->field_48 < v1->field_48);
    }
    if (v5 == 0 && (v6->field_a8 == 3 || v6->field_a8 == 9))
    {
        return 1;
    }
    if ((v6->field_48 > v1->field_48 || v6->field_a8 != 3) && (v6->field_48 > v1->field_48 || v6->field_a8 != 9) && (v6->field_48 > v1->field_48 || v5 != 0) && (v6->field_a8 != 3 || v5 != 0) && (v6->field_a8 != 9 || v5 != 0))
    {
        return -18446744069414584321;
    }
}

typedef struct struct_0 {
    char padding_0[96];
    unsigned long long field_60;
    unsigned int field_68;
} struct_0;

int sub_409ac0()
{
    struct v1;  // rsi
    unsigned long long v2[14];  // rdi
    unsigned long long v3;  // rax

    if (v1->field_60 <= v2[12])
    {
        if (v1->field_60 >= v2[12])
        {
            v3 = (unsigned int)v2[13] - v1->field_68;
        }
        else
        {
            v3 = 1;
        }
        if (v1->field_60 < v2[12] || (unsigned int)v2[13] != v1->field_68)
        {
            return v3;
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

int sub_404810()
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
    return rax;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40d470()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1->field_8) % v2 >> 64;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_40c5e0()
{
    struct v1;  // rdi

    return v1->field_18;
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

int sub_40b9db()
{
    unsigned long long v1;  // rax
    unsigned int v2;  // edi
    struct v3;  // rsi
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

