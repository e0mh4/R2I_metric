
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
// int sub_403a00()

extern unsigned int g_4063eb;
extern unsigned int g_4063ef;
extern unsigned int g_4063ff;
extern unsigned int g_406416;
extern unsigned int g_406478;
extern unsigned int g_406548;
extern unsigned int g_406568;
extern unsigned int g_406590;
extern unsigned int g_4065b8;
extern unsigned int g_4065e8;

int sub_403bd0()
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
    dcgettext(0x0, 0x4063eb);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x406478), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4063ef);
        break;
    case 2:
        dcgettext(0x0, 0x4063ff);
        break;
    case 3:
        dcgettext(0x0, 0x406416);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x406548);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x406568);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x406590);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x4065b8);
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
        dcgettext(0x0, 0x4065e8);
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
    dcgettext(0x0, v20);
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

// int sub_403b20()

int sub_40368b()
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
    v7 = (unsigned int)sub_402130();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_404170();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_402130();
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

int sub_403a30()
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
    return sub_403360();
}

int sub_404210()
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
        sub_4043c0(); /* do not return */
    }
}

extern int512_t g_608380;

int sub_4035f0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_608380 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_402130();
}

int sub_403fb0()
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

    v10 = sub_401138();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6323760 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

extern char g_608380;

int sub_4035c0()
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
    v3 = (v2 == 0? &g_608380 : v2);
    *((int *)(tmp_11? &g_608380 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_608380;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_608380;
        abort(); /* do not return */
    }
}

int sub_403880()
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
    return sub_403360();
}

extern struct g_6081f8;
extern unsigned long long g_608200;
extern unsigned long long g_608208;
extern unsigned int g_608210;
extern unsigned long long g_608280;

int sub_403770()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_608210;
    if (g_608210 > 1)
    {
        v2 = &g_6081f8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_6081f8[(unsigned long long)(g_608210 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_6081f8->field_8 != 6324864)
    {
        v1 = free(g_6081f8->field_8);
        g_608200 = 0x100;
        g_608208 = &g_608280;
    }
    if (g_6081f8 != 0x608200)
    {
        v1 = free(g_6081f8);
        g_6081f8 = &g_608200;
    }
    g_608210 = 1;
    return v1;
}

// int sub_403b40()

// int sub_403840()

int sub_4043a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_403fd0()
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
    return sub_403bd0();
}

// int sub_403810()

extern int512_t g_608380;

int sub_403540()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_608380 : v1));
}

int sub_4041d0()
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
            sub_4043c0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_4044e0()
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

int sub_404b70()
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

int sub_404ab0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_404b30() != 0)
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

// int sub_4039f0()

extern unsigned long long g_406431;

int sub_404400()
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
        v5 = &g_406431;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_4044e0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

// int sub_403970()

// int sub_403b10()

int sub_403500()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_404370();
}

// int sub_403960()

extern uint128_t g_608380;
extern uint128_t g_608390;
extern uint128_t g_6083a0;
extern unsigned long long g_6083b0;

int sub_40397f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6083b0;
    *((uint128_t *)&v0) = g_608380;
    *((uint128_t *)&v1) = g_608390;
    *((uint128_t *)&v2) = g_6083a0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_403360();
}

extern int512_t g_608380;

int sub_403550()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_608380 : v1)) = v2;
    return &g_608380;
}

// int sub_403b60()

int sub_404320()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_404170();
}

// int sub_403830()

int sub_4038f0()
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
    return sub_403360();
}

extern int512_t g_608380;

int sub_403560()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_608380 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_608380 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_404370()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_404170();
}

int sub_404340()
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
        sub_4043c0(); /* do not return */
    }
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

extern unsigned int g_40509f;
extern unsigned int g_4055c0;
extern unsigned int g_406431;
extern unsigned long long stdout[7];

int main()
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    char v2;  // [bp-0x39]
    unsigned long long v4;  // rax
    unsigned long v5;  // rdi
    struct v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long v14;  // rdi
    unsigned long long v15;  // rax
    unsigned long long v17;  // rax
    unsigned long v18;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // r10
    char v21[4];  // rax
    unsigned long long v22;  // rdx
    char *v23;  // r9
    char *v24;  // rax
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rbp
    char *v28;  // rax
    unsigned long long v29;  // r15
    unsigned long long v30;  // rax
    unsigned long long *v31;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v32;  // rax
    unsigned long long v33;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v34;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // r13
    unsigned long long v36;  // rax
    char *v37;  // rax
    unsigned long long v38;  // rax
    char *v39;  // rax
    char v40[4];  // rbx
    char *v41[4];  // r14
    char *v42;  // rax
    unsigned long long v43;  // r12
    char *v44;  // rax

    v4 = getenv("POSIXLY_CORRECT");
    if (v4 != 0)
    {
        if ((unsigned int)v5 > 1)
        {
            v8 = strcmp(v7->field_8, "-n");
            if (v8 != 0)
            {
                v43 = 1;
                v41 = &v7->field_8;
                sub_401f90();
                setlocale(0x6, 0x406431);
                bindtextdomain(0x40509f, 0x4055c0);
                textdomain(0x40509f);
                sub_404c40();
                v14 = v5 - 1;
            }
        }
        else
        {
            sub_401f90();
            setlocale(0x6, 0x406431);
            bindtextdomain(0x40509f, 0x4055c0);
            textdomain(0x40509f);
            sub_404c40();
        }
    }
    if (v4 == 0 || v8 == 0 && (unsigned int)v5 > 1)
    {
        sub_401f90();
        setlocale(0x6, 0x406431);
        bindtextdomain(0x40509f, 0x4055c0);
        textdomain(0x40509f);
        sub_404c40();
    }
    if ((v4 == 0 || v8 == 0) && (v4 == 0 || (unsigned int)v5 > 1))
    {
        if ((unsigned int)v5 == 2)
        {
            v15 = strcmp(v7->field_8, "--help");
            if (v15 != 0)
            {
                v17 = strcmp(v7->field_8, "--version");
                if (v17 != 0)
                {
                    v41 = &v7->field_8;
                    v14 = 1;
                }
                else
                {
                    v1 = v18;
                    v0 = 0;
                    sub_404030();
                }
            }
            else
            {
                sub_401b20(); /* do not return */
            }
        }
        else
        {
            v14 = v5 - 1;
            v41 = &v7->field_8;
        }
        if (((unsigned int)v5 != 2 || v15 != 0) && ((unsigned int)v5 != 2 || v17 != 0))
        {
            v20 = 0;
            v43 = 1;
            while ((unsigned int)v14 > 0)
            {
                v21 = *(v41);
                if ((*(v41))[0] == 45)
                {
                    v22 = v21[1];
                    v23 = &v21[1];
                    if (v21[1] != 0)
                    {
                        v34 = v22 - 69;
                        if ((v22 - 69 & 255) <= 41 && (2203318222849 & 1 << (unsigned long long)(v34 & 63)) != 0)
                        {
                            v24 = &v21[2];
                            while (true)
                            {
                                v34 = *(v24);
                                if (*(v24) != 0)
                                {
                                    v34 = (unsigned long long)v34 - 69;
                                    v24 = &v24[1];
                                    if ((2203318222849 & 1 << (unsigned long long)(v34 & 63)) == 0 || v34 > 41)
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    do
                                    {
                                        v23 = &v23[1];
                                        if (v22 == 101)
                                        {
                                            v20 = 1;
                                        }
                                        else if (v22 != 110)
                                        {
                                            v20 = (unsigned int)(v22 == 69? 0 : (unsigned int)r10);
                                        }
                                        else
                                        {
                                            v43 = 0;
                                        }
                                        v22 = *(v23);
                                    }
                                    while (*(v23) != 0);
                                    v14 = (unsigned int)v14 - 1;
                                    v41 = &v41[1];
                                }
                            }
                            if (*(v24) != 0)
                            {
                                if (v20 == 0)
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
                v26 = &((char *[4])&v41[v14 + -1])[1];
                while (true)
                {
                    v40 = *(v41);
                    while (true)
                    {
                        v33 = v40[0];
                        v35 = &v40[1];
                        if (v40[0] != 0)
                        {
                            if (v33 == 92)
                            {
                                v29 = v40[1];
                                if (v40[1] != 0)
                                {
                                    v30 = v34 - 48;
                                    v35 = &v40[2];
                                    v34 = v29;
                                    switch (v29 - 48 & 255)
                                    {
                                    case 0:
                                        v34 = v40[2];
                                        if (((unsigned long long)v40[2] - 48 & 255) > 7)
                                        {
                                            v33 = 0;
                                            break;
                                        }
                                        else
                                        {
                                            v35 = &v40[3];
                                            v32 = v40[3];
                                            v36 = (unsigned long long)v32 - 48;
                                            v33 = v34 - 48;
                                            if (v36 <= 7)
                                            {
                                                v35 = &v35[1];
                                                v33 = v36 + v33 * 8;
                                            }
                                            v38 = *(v35);
                                            if (((unsigned long long)*(v35) - 48 & 255) <= 7)
                                            {
                                                v35 = &v35[1];
                                                v33 = v38 + v33 * 8 - 48;
                                            }
                                        }
                                    case 1: case 2: case 3: case 4: case 5: case 6: case 7:
                                        v32 = v40[2];
                                    case 44:
                                        break;
                                    case 49:
                                        v33 = 7;
                                        break;
                                    case 50:
                                        v33 = 8;
                                        break;
                                    case 53:
                                        v33 = 27;
                                        break;
                                    case 54:
                                        v33 = 12;
                                        break;
                                    case 62:
                                        v33 = 10;
                                        break;
                                    case 66:
                                        v33 = 13;
                                        break;
                                    case 68:
                                        v33 = 9;
                                        break;
                                    case 70:
                                        v33 = 11;
                                        break;
                                    case 72:
                                        v2 = v40[2];
                                        v31 = __ctype_b_loc();
                                        v34 = *(v31);
                                        if ((*((char *)(*(v31) + ((unsigned long long)v2 << 1) + 1)) & 16) != 0)
                                        {
                                            v33 = (unsigned int)sub_401aa0();
                                            if ((*((char *)(v34 + ((unsigned long long)v40[3] << 1) + 1)) & 16) != 0)
                                            {
                                                v35 = &v40[4];
                                                v33 += (unsigned int)sub_401aa0();
                                            }
                                            else
                                            {
                                                v35 = &v40[3];
                                            }
                                        }
                                    default:
                                        v37 = stdout[5];
                                        if (stdout[6] > stdout[5])
                                        {
                                            stdout[5] = stdout[5] + 1;
                                            v33 = v34;
                                            *(v37) = 92;
                                        }
                                        else
                                        {
                                            __overflow();
                                            v33 = v34;
                                        }
                                    }
                                    if ((v29 - 48 & 255) <= 72)
                                    {
                                        v32 = v30;
                                    }
                                }
                            }
                            v39 = stdout[5];
                            if (stdout[5] < stdout[6])
                            {
                                v34 = &v39[1];
                                stdout[5] = &v39[1];
                                *((unsigned long long *)&v39) = v33;
                            }
                            else
                            {
                                __overflow();
                            }
                            v40 = v35;
                        }
                        else
                        {
                            v41 = &v41[1];
                            if (v41 == v26)
                            {
                                break;
                            }
                            v42 = stdout[5];
                            if (stdout[5] < stdout[6])
                            {
                                stdout[5] = stdout[5] + 1;
                                *(v42) = 32;
                            }
                            else
                            {
                                __overflow();
                            }
                        }
                    }
                    if (v40[0] == 0)
                    {
                        if (v43 == 0)
                        {
                            break;
                        }
                    }
                    else if (v40[0] == 0 && v41 != v26)
                    {
                        v40 = *(v41);
                    }
                    else if ((v29 - 48 & 255) <= 72 && v33 == 92 && v40[0] != 0 && v40[1] != 0)
                    {
                        return 0;
                    }
                }
                if (false)
                {
                    return 0;
                }
            }
            if (false)
            {
                if ((unsigned int)v14 > 0)
                {
                    v25 = &v41[v14 + -1];
                }
                else if ((unsigned int)v14 > 0 && v20 != 0)
                {
                    return 0;
                }
            }
        }
    }
    if (v4 == 0 && (unsigned int)v5 != 2 || (unsigned int)v5 != 2 && (unsigned int)v5 > 1 || v4 == 0 && v15 != 0 && v17 != 0 || v4 != 0 && v8 != 0 && (unsigned int)v5 > 1 || v15 != 0 && (unsigned int)v5 > 1 && v17 != 0)
    {
        v25 = &v41[v14 + -1];
        while (true)
        {
            fputs_unlocked(*(v41), stdout);
            if (v25 == v41)
            {
                break;
            }
            v28 = stdout[5];
            if (stdout[5] < stdout[6])
            {
                stdout[5] = stdout[5] + 1;
                *(v28) = 32;
            }
            else
            {
                __overflow();
            }
            v41 = &v41[1];
        }
    }
    if ((unsigned int)v5 != 2 || (unsigned int)v5 <= 1 && v4 != 0 || v4 != 0 && v8 != 0 || v15 != 0 && v17 != 0)
    {
        v44 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v44) = 10;
        }
        else
        {
            __overflow();
        }
    }
    return 0;
}

// int sub_403a20()

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_6081f8;
extern uint128_t g_608200;
extern unsigned int g_608210;
extern int512_t g_608280;

int sub_403360()
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
    v17 = g_6081f8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_608210 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_6081f8 != 0x608200)
            {
                v16 = sub_4041d0();
                g_6081f8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_4041d0();
                v17 = v15;
                g_6081f8 = v15;
                *(v15) = g_608200;
            }
            memset(&v17[(long long)(int)g_608210], 0x0, (int)((unsigned int)v13 + 1 - g_608210) * 16);
            g_608210 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_4043c0(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_608210 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_402130();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6324864)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_404170();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_402130();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern uint128_t g_608380;
extern uint128_t g_608390;
extern uint128_t g_6083a0;
extern unsigned long long g_6083b0;

int sub_403aa0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_608380;
    *((uint128_t *)&v1) = g_608390;
    *((uint128_t *)&v2) = g_6083a0;
    v4 = g_6083b0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_403360();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern char g_608258;

int sub_401ee0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_608258 = v1;
    return v2;
}

// int sub_403bb0()

int sub_4043ec()
{
    abort(); /* do not return */
}

// int sub_4041c0()

// int sub_403b90()

extern int512_t g_40568e;
extern int512_t g_405692;

int sub_402030()
{
    unsigned long v1;  // rdi
    char *v2;  // rbx
    char v3[8];  // rax
    unsigned long long v4;  // rdx
    unsigned long v5;  // rsi
    char *v6;  // rax

    v2 = (unsigned long long)dcgettext(0x0, v1);
    if (v1 == v2)
    {
        v3 = sub_404540();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40568e : 4216473);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_405692 : 4216469);
            }
        }
    }
    if (unknown)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[4] == 56 && (v3[2] & 223) == 70 && (v3[1] & 223) == 84 && v1 == v2 && v3[5] == 0 && (v3[0] & 223) == 85 || (v3[1] & 223) == 66 && v4 == 71 && v1 == v2 && v3[3] == 56 && v3[2] == 49 && v3[4] == 48 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

int sub_404030()
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
        if ((unsigned int)v13 <= 47 && v11 != 0 || v12 != 0 && (unsigned int)v13 > 47)
        {
            v15 += 1;
        }
        if (v8 != 0)
        {
            v0 = v13;
        }
        return sub_403bd0();
    }
}

extern unsigned long long g_607e30;

int sub_404c58()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_607e30;
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

extern int512_t g_6081a8;

// int sub_404c40()

extern unsigned int g_406432;
extern unsigned int g_40645d;
extern unsigned int g_406690;

int sub_4040f0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x406432));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40645d));
    dcgettext(0x0, 0x406690);
}

int sub_404b30()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_404b70();
    }
}

int sub_401aa0()
{
    unsigned long v1;  // rdi

    switch (v1 - 65 & 255)
    {
    case 0: case 32:
        return 10;
    case 1: case 33:
        return 11;
    case 2: case 34:
        return 12;
    case 3: case 35:
        return 13;
    case 4: case 36:
        return 14;
    case 5: case 37:
        return 15;
    default:
        return (unsigned long long)v1 - 48;
    }
}

// int sub_403b70()

int sub_404170()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4043c0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_404190()
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
        sub_4043c0(); /* do not return */
    }
}

extern unsigned long long g_608260;

int sub_401ed0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_608260 = v1;
    return v2;
}

int sub_403662()
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

extern unsigned int g_405633;
extern unsigned int g_6081b8;
extern char g_608258;
extern unsigned long long g_608260;

int sub_401ef0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_404480();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_608258 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x405633);
            if (g_608260 != 0)
            {
                sub_403a00();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_608258 != 0)
    {
        v3 = sub_404480();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_608258 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6081b8);
        error(0x0, *(v2), "%s");
    }
}

int sub_402130()
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
    char v23;  // [bp-0x44]
    unsigned long long v24;  // [bp-0x40]
    unsigned int *v25;  // [bp+0x8]
    unsigned long long v26;  // [bp+0x10]
    void *v27;  // [bp+0x18]
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r15
    unsigned long v30;  // r8
    unsigned long long v31;  // rcx
    unsigned long v32;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v33;  // r10
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v39;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long v44;  // rdx
    unsigned long long v45;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v46;  // rax
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
    unsigned long v63;  // r13
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v77;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v78;  // r13
    unsigned long long v79;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v80;  // r12
    unsigned int v81;  // r13d
    unsigned long long v82;  // r11
    char v83;  // dl
    /*INVALID_EQUAL_UNDEFINED*/
undefined v84;  // rax
    unsigned long long v85;  // cc_dep1
    /*INVALID_EQUAL_UNDEFINED*/
undefined v86;  // dl
    unsigned long long v87;  // rax
    unsigned long long v88;  // rax
    unsigned long long v89;  // rdx
    unsigned long long v90;  // rax
    unsigned long long v91;  // rax

    v29 = v28;
    v79 = v77;
    v78 = v30;
    v7 = v77;
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
            v26 = (unsigned int)sub_402030();
            v27 = (unsigned long long)(unsigned int)sub_402030();
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
            v78 = v38 != v80;
            if (v38 == -1)
            {
                v78 = *((char *)(v7 + v80)) != 0;
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
                                    v77 = (unsigned int)v39 == 2;
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
                                        v33 = rax;
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
                                    v77 = 0;
                                    v78 = 0;
                                    v40 = 98;
                                case 13:
                                    v40 = 13;
                                    v45 = 114;
                                    v77 = (unsigned int)v39 == 2;
                                case 32:
                                    v41 = v5;
                                    v40 = 32;
                                    v48 = v5;
                                    v5 = v41;
                                    v78 = 0;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v77 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v41 = v5;
                                case 92:
                                    v44 = v4;
                                    v40 = 92;
                                    v45 = 92;
                                    v77 = v4 & v17 & v8 != 0;
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
                        case 8:
                            v40 = 98;
                        case 9:
                            v40 = 116;
                        case 10:
                            v40 = 110;
                            v77 = 0;
                            v78 = 0;
                        case 11:
                            v40 = 118;
                            break;
                            if (v17 == 0)
                            {
                                v78 = 0;
                            }
                            else
                            {
                                v87 = 0;
                            }
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
                            v77 = 0;
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
                            v80 += 1;
                            v5 = 0;
                            v77 = (unsigned int)v39 == 2;
                            v36 = 0;
                            v40 = 0;
                            break;
                        }
                    case 7:
                        v40 = 7;
                        v45 = 97;
                        v77 = (unsigned int)v39 == 2;
                    case 8:
                        v40 = 8;
                        v45 = 98;
                        v77 = (unsigned int)v39 == 2;
                    case 9:
                        v40 = 9;
                        v45 = 116;
                    case 10:
                        v40 = 10;
                        v45 = 110;
                    case 11:
                        v40 = 11;
                        v45 = 118;
                        v77 = (unsigned int)v39 == 2;
                    case 12:
                        v40 = 12;
                        v45 = 102;
                        v77 = (unsigned int)v39 == 2;
                    case 13:
                        v40 = 13;
                        v45 = 114;
                        v77 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                        if ((v17 & (unsigned int)v39 == 2) == 0)
                        {
                            v40 = v45;
                            v78 = 0;
                            v55 = 0;
                            break;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) | v17;
                            v78 = 0;
                            v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                            v77 = (unsigned int)v39 == 2;
                            v77 = (unsigned int)v39 == 2;
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
                            v87 = v77;
                            v73 = (unsigned int)v33 ^ 1;
                            v74 = (char)((unsigned int)v33 ^ 1) & v77;
                            if (((char)((unsigned int)v33 ^ 1) & v77) != 0)
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
                                v33 = rax;
                            }
                            *((unsigned long long *)&v4) = v4 & v87;
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 92;
                            }
                            v76 += 1;
                            v80 += 1;
                        }
                    case 32:
                        v40 = 32;
                        v77 = (unsigned int)v39 == 2;
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v77 = (unsigned int)v39 == 2;
                        v35 = 0;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 35: case 126:
                        v77 = (unsigned int)v39 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v77 = (unsigned int)v39 == 2;
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
                            v77 = 0;
                            v40 = 39;
                            break;
                        }
                    case 63:
                        if ((unsigned int)v39 != 2)
                        {
                            v40 = 63;
                            v77 = (unsigned int)v39 == 2;
                            v52 = 0;
                            break;
                            v77 = v7;
                            v40 = (char)*((char *)(v77 + 2));
                            v77 = 0x7000a38200000000;
                            v0 = 0x7000a38200000000;
                            v77 = 0;
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
                            v77 = 0;
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
                        v77 = (unsigned int)v39 == 2;
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
                            v76 = (unsigned int)sub_402130();
                        }
                    }
                }
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
            {
                v88 = v13;
                if (v86 != 0 && v13 != 0)
                {
                    v89 = (char)*((char *)v88);
                    if (*((char *)v88) != 0)
                    {
                        v90 = v88 - v76;
                        do
                        {
                            if (v79 > v76)
                            {
                                *((unsigned long long *)(v29 + v76)) = v89;
                            }
                            v76 += 1;
                            v89 = (char)*((char *)(v90 + v76));
                        }
                        while ((char)v89 != 0);
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
                v77 = (tmp_38 & 65535) == 0 & v4;
                if (v77 != 0)
                {
                    v77 = v4;
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
                *((unsigned long *)&v10) = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_404400();
                    v58 = v46;
                    if (v46 != 0 && v46 != -2 && v46 != -1)
                    {
                        if (v10 == 2 && v17 != 0 && v46 != 1)
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
                                v78 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13);
                                v54 += v58;
                                v46 = mbsinit((unsigned int)&v24);
                            }
                        }
                        v78 = (unsigned int)(iswprint(*((int *)&v23)) == 0? 0 : (unsigned int)r13);
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
                        v39 = v10;
                        v77 = v4;
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
                        v39 = v10;
                        if (v77 < v9 && *((char *)v57) != 0)
                        {
                            do
                            {
                                v46 += 1;
                            }
                            while (v46 < v9 && *((char *)(v22 + v46)) != 0);
                            v28 = v46;
                        }
                        v77 = v4;
                        v78 = 0;
                    }
                    if (v46 == 0 || v46 != -2 && v46 != -1 && (unsigned int)v46 != 0)
                    {
                        v28 = v54;
                        v40 = v20;
                        v76 = v21;
                        v33 = (char)v19;
                        v29 = v11;
                        v77 = (unsigned int)v78 ^ 1;
                        v79 = v12;
                        v38 = v9;
                        v39 = v10;
                        v77 = (char)((unsigned int)v78 ^ 1) & v4;
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
            }
            if (v77 != 0)
            {
                v9 = v78;
                v77 = 0;
                v63 = v17;
                v64 = v28 + v80;
                v28 = v5;
                while (true)
                {
                    if (v77 != 0)
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
                                *((unsigned long long *)(v29 + v76 + 1)) = (unsigned long long)(unsigned int)rax + 48;
                            }
                            v46 = v76 + 2;
                            if (v79 > v76 + 2)
                            {
                                v70 = v40;
                                v71 = (char)v40 % 8;
                                v46 = (unsigned int)((rax & 7) + 48);
                                *((unsigned long long *)(v29 + v76 + 2)) = v46;
                            }
                            v80 += 1;
                            v76 += 3;
                            v40 = ((unsigned int)v40 & 7) + 48;
                            if (v80 < v64)
                            {
                                v77 = v77;
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
                    if ((v80 < v64 || v77 == 0) && (v77 == 0 || v63 == 0) && (v80 < v64 || v77 != 0))
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
            if ((v78 == 0 || (v17 & (unsigned int)v39 == 2) != 0) && (v76 == 0 || (v17 & (unsigned int)v39 == 2) != 0) && ((v17 & (unsigned int)v39 == 2) != 0 || (v81 == 2 & v17) != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_402130();
            }
            if (v17 == 0 && (v17 & (unsigned int)v39 == 2) == 0 && v4 != 0 || v17 == 0 && (v17 & (unsigned int)v39 == 2) == 0 && v4 == 0 && v5 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 || v77 != 0 && v46 == 0)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v78 == 0 && v6 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v18 != 0 && v6 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v78 == 0 || (v17 & (unsigned int)v39 == 2) != 0) && (v76 == 0 || (v17 & (unsigned int)v39 == 2) != 0) && ((v17 & (unsigned int)v39 == 2) != 0 || (v81 == 2 & v17) != 0))
            {
                v91 = v76;
                return v91;
            }
        }
        *((char *)v29) = 39;
        v78 = 2;
        v13 = "'";
        v8 = 1;
        v17 = 0;
        *((unsigned long *)&v18) = v84;
    }
}

// int sub_403760()

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_406431;
extern char g_6083b8[2];

int sub_404540()
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
    unsigned int v22;  // r12d
    unsigned long long v27;  // rax
    unsigned int *v28;  // rcx
    unsigned int v29;  // eax
    unsigned long v30;  // rax
    unsigned int *v31;  // rdx
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rax
    unsigned long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned long v37;  // rsi
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rdi
    unsigned long long v42;  // rsi
    unsigned long long v43;  // r9
    unsigned long long v44;  // r10
    unsigned int v45;  // ecx
    unsigned long long v47;  // r8
    void *v48;  // rcx
    unsigned long long v51;  // rcx
    unsigned int v53;  // edx
    unsigned long long v56;  // rcx
    unsigned long long v57;  // rsi
    char *v58;  // rax
    unsigned long v59;  // rdi
    char *v60;  // rax
    unsigned long long v61;  // rdx
    unsigned long long v65;  // rbp
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rax

    v9 = g_6083b8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_406431 : (unsigned long long)nl_langinfo(0xe));
    if (g_6083b8 == 0)
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
            v9 = &g_406431;
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
                        v58 = *((long long *)(v10 + 8));
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)))
                        {
                            v59 = __uflow(v10);
                        }
                        if ((unsigned int)v59 != 35 && (unsigned int)v59 != 32)
                        {
                            ungetc(v59, v10);
                            v27 = fscanf(v10, "%50s %50s", (unsigned int)&v3, (unsigned int)&v5);
                            if (v27 > 1)
                            {
                                v28 = &v3;
                                do
                                {
                                    tmp_12 = (unsigned int)*((int *)&v3);
                                    v28 = &v4;
                                    v29 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                }
                                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                v30 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax >> 16) : (unsigned int)rax);
                                v31 = &v5;
                                v32 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v28 + 2) : v28) + -1 * ((v30 + v30 <= v30? 1 : 0) & 1) + -0x1 * &v3;
                                do
                                {
                                    tmp_12 = (unsigned int)*((int *)&v5);
                                    v31 = &v6;
                                    v33 = (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152;
                                }
                                while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
                                v1 = v32;
                                tmp_56 = (unsigned int)v33 % 0x10000;
                                v34 = (unsigned int)(((unsigned int)v33 & 32896) == 0? (unsigned int)(v33 >> 16) : (unsigned int)v33);
                                v35 = &((char *)(-3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v31)[2] : v31) + -1 * ((v34 + v34 <= v34? 1 : 0) & 1) + -0x1 * &v5))[v1];
                                v2 = -3 + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)&((char *)v31)[2] : v31) + -1 * (((unsigned int)((((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) + (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? tmp_56 : (unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152)? 1 : 0) & 1) + -0x1 * &v5;
                                if (v0 == 0)
                                {
                                    v0 = v35 + 2;
                                    v36 = malloc(v35 + 3);
                                    v38 = v1;
                                    v39 = v2;
                                }
                                else
                                {
                                    v37 = v35 + v0 + 3;
                                    v0 = v35 + v0 + 2;
                                    v36 = realloc(NULL, v37);
                                    v39 = v2;
                                    v38 = v1;
                                }
                                if (v36 != 0)
                                {
                                    tmp_1 = -2 - v38;
                                    v40 = v38 + 1;
                                    v41 = v0 - v39;
                                    v42 = tmp_1 + v0 - v39 + v36;
                                    if ((unsigned int)v40 >= 8)
                                    {
                                        *((long long *)v42) = *((long long *)&v3);
                                        *((long long *)(v42 + v40 - 8)) = *((long long *)&(&v3)[v40 + -8]);
                                        v43 = v42 + 8 & -8;
                                        v42 -= v42 + 8 & -8;
                                        v44 = &(&v3)[-1 * v42];
                                        v45 = (unsigned int)(v40 + v42) & -8;
                                        if (v45 >= 8)
                                        {
                                            v42 = 0;
                                            do
                                            {
                                                v47 = v42;
                                                v42 = (unsigned int)v42 + 8;
                                                *((long long *)(v43 + v47)) = *((long long *)(v44 + v47));
                                            }
                                            while ((unsigned int)v42 < (v45 & -8));
                                        }
                                    }
                                    else if ((v40 & 4) != 0)
                                    {
                                        *((int *)v42) = *((int *)&v3);
                                        *((int *)(v42 + v40 - 4)) = *((int *)&(&v3)[v40 + -4]);
                                    }
                                    else if ((unsigned int)v40 != 0)
                                    {
                                        *((char *)v42) = v3;
                                        if ((v40 & 2) != 0)
                                        {
                                            *((short *)(v42 + v40 - 2)) = *((short *)&(&v3)[v40 + -2]);
                                        }
                                    }
                                    v61 = v39 + 1;
                                    v48 = v36 + v41 - 1;
                                    if ((unsigned int)v42 >= 8)
                                    {
                                        *((long long *)v48) = *((long long *)&v5);
                                        v42 = v61;
                                        *((long long *)&((char *)v48)[v42 + -8]) = *((long long *)&(&v5)[v42 + -8]);
                                        v51 = v48 - (v48 + 8 & -8);
                                        v53 = (unsigned int)(v42 + v51) & -8;
                                        if (v53 >= 8)
                                        {
                                            v56 = 0;
                                            do
                                            {
                                                v57 = v56;
                                                v56 = (unsigned int)v56 + 8;
                                                *((long long *)((v48 + 8 & -8) + v57)) = *((long long *)&(&v5)[v57 + -1 * v51]);
                                            }
                                            while ((unsigned int)v56 < (v53 & -8));
                                        }
                                    }
                                    else if (((char)v42 & 4) != 0)
                                    {
                                        *((int *)v48) = *((int *)&v5);
                                        *((unsigned int *)&((char *)v48)[(unsigned long long)v7 + -4]) = v7;
                                    }
                                    else if ((unsigned int)v42 != 0)
                                    {
                                        *((char *)v48) = v5;
                                        if ((v5 & 2) != 0)
                                        {
                                            *((short *)&((char *)v48)[(unsigned long long)v5 + -2]) = v7;
                                        }
                                    }
                                    v9 = v36;
                                    v58 = *((long long *)(v10 + 8));
                                }
                                else
                                {
                                    v9 = &g_406431;
                                    v10 = (tmp_10 == 0? &g_406431 : tmp_10);
                                    free(NULL);
                                    sub_404ab0();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && v36 != 0 && v27 > 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32)
                        {
                            *((char **)(v10 + 8)) = &v58[1];
                            v59 = *(v58);
                        }
                        if ((unsigned int)v59 == 35)
                        {
                            do
                            {
                                v60 = *((long long *)(v10 + 8));
                                if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                {
                                    *((char **)(v10 + 8)) = &v60[1];
                                    v60 = (unsigned int)*(v60);
                                    v61 = 1;
                                }
                                else
                                {
                                    v60 = __uflow(v10);
                                    v61 = (char)((unsigned int)v60 != -1);
                                }
                            }
                            while (v61 != 0 && v60 != 10);
                        }
                        if (v60 == -1 && (unsigned int)v59 == 35 || (unsigned int)v59 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v59 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v27 <= 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32)
                        {
                            v10 = (tmp_10 == 0? &g_406431 : tmp_10);
                            sub_404ab0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v36 != 0 || (unsigned int)v59 != -1) && v27 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v36 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v36 != 0 || (unsigned int)v59 != -1) && v60 == -1)
                    {
                        v9 = &g_406431;
                    }
                    else if (((unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v36 != 0 || (unsigned int)v59 != -1) && v27 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v36 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v59 == -1 || (unsigned int)v59 == 35 && (unsigned int)(v59 - 9) > 1 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v36 != 0 || (unsigned int)v59 != -1) && v60 == -1) && v0 != 0 || v36 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_406431;
            free(v17);
        }
        *((char *[2])&g_6083b8[0]) = v9;
    }
    v65 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v66 = strcmp((tmp_10 == 0? &g_406431 : tmp_10), v9);
            if (v66 != 0 && (v65 != 42 || v9[1] != 0))
            {
                v67 = strlen(v9);
                v68 = &((char [2])&v9[v67])[1];
                v69 = strlen(&((char [2])&v9[v67])[1]);
                v9 = v68 + v69 + 1;
                v65 = (char)*((char *)(v68 + v69 + 1));
                if (v65 == 0)
                {
                    break;
                }
            }
            if (v66 == 0 || v65 == 42 && v9[1] == 0)
            {
                v10 = &((char [2])&v9[strlen(v9)])[1];
            }
        }
    }
    tmp_3 = v10;
    tmp_28 = *(v10) == 0;
    return (tmp_28? "ASCII" : tmp_3);
}

extern unsigned long long g_608218;

int sub_4019eb()
{
    unsigned long long v1;  // rax

    v1 = &g_608218;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

// int sub_403860()

int sub_404480()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_404ab0();
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

extern char g_608248;
extern unsigned long long g_608250;

int sub_401a41()
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

    if (g_608248 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_608250 >= 0)
            {
                break;
            }
            g_608250 = g_608250 + 1;
            *((long long *)(6323776 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_608248 = 1;
        return sub_4019eb();
    }
    return v4;
}

extern unsigned int g_405084;
extern unsigned int g_4050e8;
extern unsigned int g_405110;
extern unsigned int g_405150;
extern unsigned int g_4051b0;
extern unsigned int g_405238;
extern unsigned int g_405268;
extern unsigned int g_4052a0;
extern unsigned int g_4052e0;
extern unsigned int g_4053c8;
extern unsigned int g_405438;
extern unsigned int g_405520;
extern unsigned int g_405568;
extern unsigned int g_405588;
extern unsigned long long stdout;

int sub_401b20()
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
    unsigned long long v30[2];  // rax
    char *v31;  // rdi
    char *v32;  // rsi
    unsigned long long v33;  // rcx
    unsigned long long v34;  // cc_dep1
    unsigned long long v35;  // cc_dep2
    unsigned long v36;  // d
    char *v40;  // rax
    char *v41;  // rax
    unsigned long long v42;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        dcgettext(0x0, 0x4050e8);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405110));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x405150), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4051b0), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x405238), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x405268), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4052a0), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4052e0), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4053c8), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405438));
        v0 = "[";
        v30 = &v0;
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
            v30 = &v2;
            v31 = v2;
            if (v2 == 0)
            {
                break;
            }
            v32 = "echo";
            v33 = 5;
            if ((v34 > v35) - 0 - (v34 < v35) == 0)
            {
                break;
            }
            while (v33 != 0)
            {
                v33 -= 1;
                v34 = *(v32);
                v35 = *(v31);
                v31 = &v31[v36];
                v32 = &v32[v36];
                break;
            }
        }
        if (v30[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405084));
            v41 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405084));
            v40 = setlocale(0x5, 0x0);
            if (v40 != 0)
            {
                v42 = strncmp(v40, "en_", 0x3);
            }
            if (v42 == 0 || v40 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405568));
            }
        }
        if ((v30[1] == 0 || v41 != 0) && (v30[1] == 0 || strncmp(v41, "en_", 0x3) != 0) && (v42 != 0 || v30[1] != 0) && (v40 != 0 || v30[1] != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405520));
        }
        if (v30[1] != 0 || v42 != 0 && v40 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405568));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x405588));
    }
    exit(v19); /* do not return */
}

extern int512_t g_608380;

int sub_4035a0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_608380 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_608380 : v1) + 4)) = v3;
    return v2;
}

extern unsigned int g_40676f;
extern unsigned int g_6081b8;

int sub_4043c0()
{
    dcgettext(0x0, 0x40676f);
    error(g_6081b8, 0x0, "%s");
}

extern unsigned long long __progname_full;
extern unsigned long long g_608268;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_401f90()
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
        g_608268 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

