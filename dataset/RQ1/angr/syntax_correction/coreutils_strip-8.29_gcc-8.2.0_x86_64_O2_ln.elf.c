
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int sub_404e40()
{
    unsigned long long v1;  // rax

    v1 = sub_404e60();
    if (v1 != 0)
    {
        return v1;
    }
    sub_408ca0(); /* do not return */
}

// int sub_40821b()

extern unsigned long long __progname_full;
extern unsigned long long g_611410;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_406260()
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
                v9 = "/.libs";
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
        g_611410 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
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

int sub_408f00()
{
    unsigned long long v1;  // rax
    struct v2;  // rdi

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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_405410()
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
    struct v9;  // rax
    unsigned long long v10;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // rbx
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
    if (!(INVALID_IR))
    {
    }
    else
    {
        tmp_14 = v13;
    }
    __fprintf_chk();
}

int sub_404ff0()
{
    unsigned long v1;  // rax

    return v1;
}

// int sub_408290()

// int sub_407cf0()

// int sub_407df0()

extern uint128_t g_611520;
extern uint128_t g_611530;
extern uint128_t g_611540;
extern unsigned long long g_611550;

int sub_407d70()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_611520;
    *((uint128_t *)&v1) = g_611530;
    *((uint128_t *)&v2) = g_611540;
    v4 = g_611550;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_407630();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_403c10()
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
    v5 = (unsigned int)sub_404ca0();
    v10 = sub_404d00();
    if (v10 > 14)
    {
        v6 = (unsigned short)*((short *)v5);
        v7 = v10;
        *((short *)v5) = 46;
        *(v8) = 0;
        v10 = pathconf(v3, 0x3);
        if (INVALID_IR)
        {
            v11 = 255;
        }
        if (*(__errno_location()) == 0 || !(INVALID_IR))
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
    if (v10 <= 14 || v7 <= v11)
    {
        return v10;
    }
}

extern unsigned int g_40de52;
extern unsigned int g_40de56;
extern unsigned int g_40de66;
extern unsigned int g_40de7d;
extern unsigned int g_40ded8;
extern unsigned int g_40dfa8;
extern unsigned int g_40dfc8;
extern unsigned int g_40dff0;
extern unsigned int g_40e018;
extern unsigned int g_40e048;

int sub_4084b0()
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
    dcgettext(0x0, 0x40de52, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ded8, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40de56, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40de66, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40de7d, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40dfa8, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40dfc8, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40dff0, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40e018, 0x5);
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
        dcgettext(0x0, 0x40e048, 0x5);
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

int sub_40af30()
{
    unsigned int v1;  // [bp+0x100008]
    void *v2;  // rdi

    __explicit_bzero_chk();
    free(v2);
    *(__errno_location()) = v1;
    return sub_40b460();
}

// int sub_407c30()

extern unsigned int g_40de99;
extern unsigned int g_40dec4;
extern unsigned int g_40e0f0;

int sub_4089d0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40de99, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40dec4, 0x5));
    dcgettext(0x0, 0x40e0f0, 0x5);
}

int sub_408ce0()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if (v2 == 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_408ca0(); /* do not return */
        }
    }
    if (v2 != 0 || *(v3) != 12)
    {
        v2 = (unsigned int)sub_408f90();
        return v5;
    }
}

int sub_407b50()
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
    return sub_407630();
}

int sub_40a1f0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40a130();
}

int sub_40b460()
{
    unsigned long long *v1;  // rdi

    __explicit_bzero_chk();
    free(v1);
    if (*(v1) == 0)
    {
        return 0;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4061c0()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1->field_8) % v2 >> 64;
}

int sub_408a70()
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
        sub_408ca0(); /* do not return */
    }
}

int sub_407bc0()
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
    return sub_407630();
}

int sub_404f40()
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

int sub_40ba20()
{
    unsigned int v1;  // [bp+0x100008]
    char *v2;  // rdi
    char *v3;  // rsi
    unsigned long long v4;  // rax
    unsigned int v5;  // r12d
    unsigned long long v6;  // rax
    unsigned int v8;  // ebp
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rax

    v10 = fopen(v2, v3);
    if (v10 != 0)
    {
        v4 = fileno(v10);
        if (v4 <= 2)
        {
            v5 = sub_40bac0();
            if (v5 >= 0)
            {
                v6 = sub_40b9a0();
                if (v6 == 0)
                {
                    v10 = fdopen(v5, v3);
                }
                if (v10 == 0 || v6 != 0)
                {
                    v8 = *((int *)v10);
                    close(v5);
                    *(__errno_location()) = v8;
                    v10 = 0;
                }
            }
            else
            {
                v10 = 0;
                sub_40b9a0();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_405350()
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

extern int512_t g_611520;

int sub_407830()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_611520 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_611520 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_408c20()
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
        sub_408ca0(); /* do not return */
    }
}

extern unsigned int g_611558;

int sub_408d80()
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
        if (g_611558 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_408d80();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_611558 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_611558 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_408d80();
        }
        if ((*(v12) == 22 || g_611558 < 0) && ((unsigned int)v15 < 0 || g_611558 < 0) && (g_611558 == -1 || g_611558 >= 0) && (g_611558 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_611558 >= 0))
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

int sub_408af0()
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
        sub_408ca0(); /* do not return */
    }
}

int sub_404bc0()
{
    unsigned long long v1;  // rax

    v1 = sub_404c40();
    if (v1 != 0)
    {
        return v1;
    }
    sub_408ca0(); /* do not return */
}

extern unsigned int g_40ce40;

int sub_4082d0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x58]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v21;  // r12d
    unsigned long long v22;  // rbx
    unsigned long long v23;  // r14
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdi
    unsigned int v27;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v28;  // rcx
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
        v18 = strspn(v7 + v15 - v16, 0x40ce40);
        if (v9 <= v18)
        {
            if ((unsigned long long)(unsigned int)sub_40add0() != 0)
            {
                v21 = 238328;
                v22 = &v0[v9 + v15 + -1 * v16];
                while (true)
                {
                    v23 = v1;
                    if (v9 != 0)
                    {
                        while (true)
                        {
                            v23 += 1;
                            *((unsigned long long *)(v23 - 1)) = (char)*((char *)(0x40de00 + (unsigned long long)(unsigned int)sub_40ae10()));
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
                            sub_40af30();
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
                        sub_40af30();
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
    if (v9 > v18 || v11 + v9 > v15)
    {
        *(v14) = 22;
        v19 = -18446744069414584321;
    }
    return v19;
}

int sub_404fe0()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_408ab0()
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
            sub_408ca0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

int sub_40a790()
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

extern char g_611400;

int sub_404a70()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_611400 = v1;
    return v2;
}

int sub_404d00()
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

int sub_40a1b0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40a130();
}

extern unsigned long long g_40e307;

int sub_40a230()
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
        v5 = &g_40e307;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40a790() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern unsigned int g_40cf08;
extern unsigned int g_611300;
extern unsigned long long g_6113f8;

int sub_404960()
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
    v5 = sub_408f00();
    if (v5 != 0 || sub_40a730() != 0)
    {
        while (true)
        {
            v11 = sub_408f30();
            if (v11 == 0)
            {
                v12 = sub_408ec0();
                if (v12 != 0)
                {
                    sub_40a730();
                }
            }
            if (v12 == 0 || v11 != 0)
            {
                if (sub_40a730() == 0)
                {
                    break;
                }
            }
            v7 = dcgettext(0x0, 0x40cf08, 0x5);
            v8 = __errno_location();
            if (g_6113f8 != 0)
            {
                sub_407cd0();
                error(0x0, *(v8), "%s: %s");
            }
            else
            {
                error(0x0, *(v8), "%s");
            }
            sub_404a80();
            _exit(g_611300);
        }
    }
}

int sub_40a3b0()
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
            if ((v13 == 0 || *((long long *)(v5 + (v12 << 3))) == 0) && (*((long long *)(v5 + (v12 << 3))) == 0 || v0 == -1) && (v13 != 0 || v14 != v11) && (v13 != 0 || v0 != -1 || *((long long *)(v5 + (v12 << 3))) != 0))
            {
                *((int *)&v0) = (v1 == 0? v0 : -2);
            }
        }
    }
    return v0;
}

extern char g_611520;

int sub_407890()
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
    v3 = (v2 == 0? &g_611520 : v2);
    *((int *)(tmp_11? &g_611520 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_611520;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_611520;
        abort(); /* do not return */
    }
}

int sub_404b20()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned int v5;  // r12d
    unsigned int *v6;  // rbp
    unsigned long long v7;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // r14
    unsigned long long v10;  // rbx

    if (v2 != 0)
    {
        v3 = dirfd(v2);
        if (v3 <= 2)
        {
            v5 = sub_408d80();
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

int sub_407ea0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x160]
    char v1;  // [bp-0x158]
    unsigned int v2;  // [bp-0x140]
    char v3;  // [bp-0xc8]
    unsigned int v4;  // [bp-0xb0]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    char v7;  // [bp+0x0]
    unsigned long v9;  // rdi
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
                    if (v22 == 0 || *(v19) == 75)
                    {
                        *(v0) = 17;
                        v18 = -18446744069414584321;
                    }
                }
            }
            if (v15 == 0 || (v15 & -2) == 0 && v23 == 2 && v22 != 0 && *(v19) != 75)
            {
                v0 = v19;
                v24 = strlen(v13);
                v25 = strlen(v14);
            }
            if (v13[v24 + -1] == 47 && v25 != 0 && v24 != 0 && ((v15 & -2) == 0 || v15 == 0) && (v15 == 0 || v23 == 2) && (v15 == 0 || v22 != 0) && (v15 == 0 || *(v19) != 75) || v14[v25 + -1] == 47 && v25 != 0 && v24 != 0 && v13[v24 + -1] != 47 && ((v15 & -2) == 0 || v15 == 0) && (v15 == 0 || v23 == 2) && (v15 == 0 || v22 != 0) && (v15 == 0 || *(v19) != 75))
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
            if (unknown)
            {
                v18 = -18446744069414584321;
            }
            if (unknown)
            {
                v18 = renameat(v9, (unsigned int)v13, v16, (unsigned int)v14);
            }
        }
    }
    return v18;
}

// int sub_4036a0()

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

int sub_408f30()
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

// int sub_407b30()

extern uint128_t g_611520;
extern uint128_t g_611530;
extern uint128_t g_611540;
extern unsigned long long g_611550;

int sub_407c4f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_611550;
    *((uint128_t *)&v0) = g_611520;
    *((uint128_t *)&v1) = g_611530;
    *((uint128_t *)&v2) = g_611540;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_407630();
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_405330()
{
    struct v1;  // rdi

    return v1->field_18;
}

int sub_405680()
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

int sub_404ca0()
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

// int sub_407de0()

int sub_40a2b0()
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
        if (v9 <= 9223372036854775806 && v9 <= v4 && v9 > 4611686018427387903)
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

int sub_404d70()
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
        v5[0] = (unsigned int)sub_408c80();
        *((unsigned long long [2])&v5[1]) = v10[1];
        *((unsigned long long [2])&v5[2]) = *(v10);
        v13 = sub_405f70();
        if (!(v13 != 0))
        {
            sub_408ca0(); /* do not return */
        }
        else if (v5 != v13)
        {
            v5 = (unsigned long long)(unsigned int)sub_408a50();
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

int sub_408ec0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_408f30();
    }
}

extern unsigned int g_40e3f8;
extern unsigned int g_40e408;
extern unsigned int g_611300;

int sub_40af90()
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
    v4 = (unsigned int)sub_407e80();
    v5 = __errno_location();
    if (*(v5) != 0)
    {
        v6 = dcgettext(0x0, 0x40e408, 0x5);
    }
    else
    {
        v6 = dcgettext(0x0, 0x40e3f8, 0x5);
    }
    error(g_611300, *(v5), v6);
}

int sub_408c80()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_40a730()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40b9a0();
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
    if ((unsigned int)v2 != 0 && (((char)*(v3) & 32) != 0 || v1 != 0))
    {
        v2 = -18446744069414584321;
    }
    return v2;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_4051d0()
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
                        v8 = sub_405000();
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
                    v13 = (unsigned long long)(unsigned int)sub_405000();
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
                        if (v6[9] != 0 || v14 != 0)
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_405610()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_405000();
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

// int sub_407a30()

int sub_403750()
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // r12
    unsigned long v18;  // rcx
    unsigned long long v19;  // rax

    v7 = v6;
    v8 = linkat();
    if ((char)v9 == 1 && (unsigned int)v8 != 0 && *(v0) == 17)
    {
        v0 = __errno_location();
        v11 = (unsigned long long)(unsigned int)sub_4036c0();
        if (v11 != 0)
        {
            v1 = v12;
            v2 = v13;
            v3 = v6;
            v4 = v14;
            v16 = v0;
            if (sub_4082d0() != 0)
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

int sub_4082b0()
{
    __assert_fail(); /* do not return */
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

    v10 = sub_401c28();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6360624 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

// int sub_4081fb()

int sub_405000()
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
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_405340()
{
    struct v1;  // rdi

    return v1->field_20;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4088b0()
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
    return sub_4084b0();
}

extern unsigned long long stdin;

int sub_408d10()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // rbx
    char *v5;  // rax
    unsigned long long v6;  // rax

    v3 = 0;
    v0 = 0;
    v1 = 0;
    if (!(INVALID_IR))
    {
        v5 = v0 + __getdelim(&v0, &v1, 0xa, stdin) - 1;
        if (*(v5) == 10)
        {
            *(v5) = 0;
        }
INVALID_CALL; //        v3 =  amd64g_calculate_condition(0xf, 0x13, Call (target: 0x401f70, prototype: () -> None, args: []), 0x0, cc_ndep);
    }
    free(v0);
    v6 = v3;
    return v6;
}

int sub_404c40()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_404be0();
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

extern unsigned int g_40cf22;
extern unsigned int g_611300;
extern char g_611400;
extern unsigned long long g_611408;

int sub_404a80()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40a730();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_611400 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40cf22, 0x5);
            if (g_611408 != 0)
            {
                sub_407cd0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_611400 != 0)
    {
        v3 = sub_40a730();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_611400 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_611300);
        error(0x0, *(v2), "%s");
    }
}

int sub_403890()
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // r12
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rax

    v4 = v3;
    v13 = symlinkat();
    if (v5 == 1 && (unsigned int)v13 != 0)
    {
        v6 = __errno_location();
        if (*(v6) == 17)
        {
            v7 = (unsigned long long)(unsigned int)sub_4036c0();
            if (v7 != 0)
            {
                v0 = v8;
                v1 = v3;
                v9 = sub_4082d0();
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
                if (v9 != 0 || v11 != 0)
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
                if (v12 == 0 || v9 == 0 && v11 == 0)
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

extern int512_t g_611520;

int sub_407870()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_611520 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_611520 : v1) + 4)) = v3;
    return v2;
}

// int sub_407c40()

int sub_4056f0()
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

extern unsigned long long g_610e30;

int sub_40bb58()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_610e30;
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

int sub_406400()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long v3;  // [bp-0xd8]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v89;  // rdx
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
            v26 = (unsigned int)sub_406300();
            v27 = (unsigned long long)(unsigned int)sub_406300();
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
                                    v89 = (unsigned int)v39 == 2;
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
                                        v78 = v78;
                                        v78 = 0;
                                    }
                                    if ((v77 > v76 || ((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) != 0) && (((char)((unsigned int)0 ^ 1) & (unsigned int)v39 == 2) == 0 || v77 > v76 + 3))
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
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v89 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                                    v41 = v5;
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
                            v40 = 32;
                            v50 = v5;
                            v5 = v41;
                            v78 = 0;
                            if (v25 != 0)
                            {
                                v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                v89 = (unsigned int)v39 == 2;
                            }
                            else
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
                                v87 = v89;
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
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v48 = v5;
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
                            v80 += 1;
                            v5 = 0;
                            v89 = (unsigned int)v39 == 2;
                            v36 = 0;
                            v40 = 0;
                            break;
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
                        if (v4 == 0)
                        {
                            v55 = 0;
                            break;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            v78 = 0;
                        }
                        else
                        {
                            v40 = v45;
                            v78 = 0;
                        }
                    case 13:
                        v40 = 13;
                        v45 = 114;
                    case 32:
                        v40 = 32;
                        v89 = (unsigned int)v39 == 2;
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (unsigned int)v39 == 2;
                        v35 = 0;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 35: case 126:
                        v89 = (unsigned int)v39 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v89 = (unsigned int)v39 == 2;
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
                        }
                    case 63:
                        if ((unsigned int)v39 != 2)
                        {
                            v40 = 63;
                            v89 = (unsigned int)v39 == 2;
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
                            v76 = (unsigned int)sub_406400();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0)
            {
                v88 = v13;
                if (v13 != 0 && v86 != 0)
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
                *((unsigned long *)&v10) = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_40a230();
                    v58 = v46;
                    if (v46 != -2 && v46 != 0 && v46 != -1)
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
                        v39 = v10;
                        v89 = (char)((unsigned int)v78 ^ 1) & v4;
                    }
                }
                while (v28 <= 1);
                if (v46 == -2 || v46 == 0 || v46 == -1 || (unsigned int)v46 != 0)
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
                v49 = 0;
            }
            if (v89 != 0)
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
                    if ((v63 == 0 || v89 == 0) && (v89 == 0 || v80 < v64) && (v80 < v64 || v89 != 0))
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
            if ((v25 == 0 || v78 == 0) && (v25 == 0 || v76 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_406400();
            }
            if ((v46 == 0 || v25 == 0) && (v25 == 0 || v89 != 0) && (v46 == 0 || v17 == 0 || v5 == 0) && (v17 == 0 || v5 == 0 || v89 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v6 != 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v25 == 0 || v78 == 0) && (v25 == 0 || v76 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
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
        *((unsigned long *)&v18) = v84;
    }
}

// int sub_407cc0()

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_0;

extern unsigned int g_40ce0a;

int sub_408f90()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x120]
    unsigned long v1;  // [bp-0x118]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x110]
    void *v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    char v5;  // [bp-0xe9]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0xe8]
    unsigned long v7;  // [bp-0xe0]
    unsigned long v8;  // [bp-0xd8]
    unsigned long v9;  // [bp-0xd0]
    unsigned long v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    unsigned int v12;  // [bp-0xb0]
    void *v14;  // rdi
    unsigned int v15;  // rsi
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rax
    unsigned long long v18;  // r14
    unsigned long long v19;  // rax
    unsigned int v20;  // r15d
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbp
    unsigned long long v24;  // r13
    struct v25;  // rax
    unsigned long long v26;  // rdx
    void *v27;  // rbx
    unsigned long long v28;  // rax
    unsigned long long v29;  // r13
    unsigned long v30;  // r14
    unsigned int v31;  // rax
    unsigned long long v33;  // r8
    unsigned long v38;  // rbx
    unsigned long v39;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // rbx
    unsigned int *v42;  // r12

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
        v17 = __lxstat();
        if (v17 >= 0)
        {
            v20 = v10;
            v18 = v11;
            v0 = v10;
            v19 = __lxstat();
            if (v19 >= 0)
            {
                v6 = v16 - 1;
                v8 = v11;
                v7 = v10;
                v5 = v10 != v10 | v11 != v11;
                if (v20 != v10 || v18 != v11)
                {
                    v23 = 0;
                    v20 = -100;
                    v42 = __errno_location();
                    while (true)
                    {
                        v20 = openat(v20, 0x40ce0a, 0x0);
                        if (v20 >= 0)
                        {
                            v21 = __fxstat(0x1, v20, (unsigned int)&v10);
                            if (v21 == 0)
                            {
                                if (v23 != 0)
                                {
                                    v22 = closedir();
                                }
                                if (v22 == 0 || v23 == 0)
                                {
                                    v1 = v10;
                                    v9 = v11;
                                    v23 = fdopendir(v20);
                                    if (v23 != 0)
                                    {
                                        v24 = v5;
                                        while (true)
                                        {
                                            *(v42) = 0;
                                            v25 = readdir();
                                            if (v25 == 0)
                                            {
                                                v41 = *(v42);
                                                if (*(v42) == 0 && v24 != 0)
                                                {
                                                    rewinddir(v23);
                                                    v25 = readdir();
                                                    if (v25 != 0)
                                                    {
                                                        v24 = 0;
                                                    }
                                                    else
                                                    {
                                                        v41 = *(v42);
                                                    }
                                                }
                                                if (v25 == 0 || v24 == 0 || *(v42) != 0)
                                                {
                                                    if ((unsigned int)v41 != 0)
                                                    {
                                                        break;
                                                    }
                                                    *(v42) = 2;
                                                    v41 = 2;
                                                }
                                            }
                                            if (v25 != 0 || *(v42) == 0 && v25 != 0 && v24 != 0)
                                            {
                                                if (v24 != 0 && (v25->field_13 == 46 || v25 != 0) && (v25->field_13 != 46 || *((short *)&v25->field_14) != 46) && (v25->field_13 != 46 || v25->field_14 != 0) && (v25 != 0 || *((short *)&v25->field_14) != 46) && (v25 != 0 || v25->field_14 != 0))
                                                {
                                                    v24 = v26;
                                                }
                                                if ((v25 == 0 || v25->field_13 != 46 || *((short *)&v25->field_14) != 46) && (v25 == 0 || v25->field_13 != 46 || v25->field_14 != 0) && (v25 != 0 || *((short *)&v25->field_14) != 46 || v25->field_13 != 46) && (v25 != 0 || v25->field_13 != 46 || v25->field_14 != 0))
                                                {
                                                    v27 = &v25->field_13;
                                                    v28 = __fxstatat(0x1, v20, (unsigned int)v25 + 19, (unsigned int)&v10, 0x100);
                                                    v29 = &v6[-1 * v2];
                                                    v30 = strlen(v27);
                                                    if (v29 <= v30)
                                                    {
                                                        if (v15 == 0)
                                                        {
                                                            v31 = v4 + (v4 <= v30? v30 : v4);
                                                            *((int *)&v6) = (v4 <= v30? v30 : v4);
                                                            *((unsigned long long *)&v0) = v4 + (v4 <= v30? v30 : v4);
                                                            if (!(INVALID_IR) && v2 != 0)
                                                            {
                                                                v2 = realloc(v2, v31);
                                                                v6 = memcpy(v2 + v6 + v29, v2 + v29, v4 - v29);
                                                                v4 = *((long long *)&v0);
                                                            }
                                                            if (INVALID_IR || v2 == 0)
                                                            {
                                                                *(v42) = 12;
                                                                v41 = 12;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            *(v42) = 34;
                                                            v41 = 34;
                                                        }
                                                    }
                                                    if (v29 > v30 || v15 == 0 && !(INVALID_IR) && v2 != 0)
                                                    {
                                                        v33 = memcpy(&v6[-1 * v30], v27, v30);
                                                        v6 = v33 - 1;
                                                        *((char *)(v33 - 1)) = 47;
                                                        v0 = v1;
                                                        if (v7 != v1 || v8 != v9)
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
                                        if (((unsigned short)v12 & 0xf000) == 0x4000 && v10 == v0 && (v15 == 0 || v29 > v30) && (!(INVALID_IR) || v29 > v30) && (v29 > v30 || v2 != 0) && v7 == v1 && v8 == v9)
                                        {
                                            v41 = *(v42);
                                        }
                                        else if (((unsigned short)v12 & 0xf000) == 0x4000 && v10 == v0 && (v15 == 0 || v29 > v30) && (!(INVALID_IR) || v29 > v30) && (v29 > v30 || v2 != 0) && v7 == v1 || ((unsigned short)v12 & 0xf000) == 0x4000 && v10 == v0 && (v15 == 0 || v29 > v30) && (!(INVALID_IR) || v29 > v30) && (v29 > v30 || v2 != 0))
                                        {
                                            v20 = openat(v20, 0x40ce0a, 0x0);
                                        }
                                        else if (v29 <= v30 && ((unsigned short)v12 & 0xf000) == 0x4000 && v10 == v0 && v15 == 0 && (INVALID_IR || v2 == 0) || (unsigned int)v41 == 0 && v25 == 0 && (v25 == 0 || v24 == 0 || *(v42) != 0) || v25 == 0 && (v25 == 0 || v24 == 0 || *(v42) != 0) || v29 <= v30 && ((unsigned short)v12 & 0xf000) == 0x4000 && v10 == v0 && v15 != 0)
                                        {
                                            closedir();
                                        }
                                    }
                                }
                                if ((v23 == 0 || v22 != 0) && (v23 == 0 || v23 != 0))
                                {
                                    v41 = *(v42);
                                }
                            }
                            else
                            {
                                v41 = *(v42);
                                if (v23 != 0)
                                {
                                    closedir();
                                }
                            }
                            if ((v23 == 0 || v22 != 0 || v21 != 0) && (v23 == 0 || v23 != 0 || v21 != 0))
                            {
                                close(v20);
                            }
                        }
                        else
                        {
                            v41 = *(v42);
                        }
                        if ((v20 < 0 || v21 == 0) && (v20 < 0 || v23 != 0) && (v22 == 0 || v23 == 0 || v20 < 0) && (v23 != 0 || v20 >= 0))
                        {
                            closedir();
                        }
                        break;
                    }
                    if (v21 == 0 && v20 >= 0 && v23 != 0 && (v22 == 0 || v23 == 0))
                    {
                        v41 = *(v42);
                    }
                    else if (v20 < 0 || v23 == 0 || v3 != 0 || v21 != 0 || v22 != 0 && v23 != 0)
                    {
                        free(v2);
                    }
                    else if (v20 < 0 || v23 == 0 || v21 != 0 || v22 != 0 && v23 != 0)
                    {
                        if (v20 < 0 || v23 == 0 || v3 != 0 || v21 != 0 || v22 != 0 && v23 != 0)
                        {
                            *(v42) = v41;
                            v2 = 0;
                        }
                    }
                }
                v6[-1] = 47;
                v6 = &v6[-1];
                v38 = v16 + -0x1 * v6;
                v39 = v38;
                memmove(v2, v6, v39);
                if (v15 == 0)
                {
                    v3 = realloc(v2, v39);
                }
                *((int *)&v2) = (v3 == 0? v2 : v3);
            }
        }
        if (v17 < 0 || v19 < 0)
        {
            v42 = __errno_location();
        }
        if (v17 < 0 || v19 < 0 || v20 != v10 || v18 != v11)
        {
            v41 = *(v42);
            free(v2);
            *(v42) = v41;
            v2 = 0;
        }
    }
    return v2;
}

int sub_40a6e0()
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

int sub_4055c0()
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

extern struct g_611358;
extern unsigned long long g_611360;
extern unsigned long long g_611368;
extern unsigned int g_611370;
extern unsigned long long g_611420;

int sub_407a40()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_611370;
    if (g_611370 > 1)
    {
        v2 = &g_611358[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_611358[(unsigned long long)(g_611370 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_611358->field_8 != 6362144)
    {
        v1 = free(g_611358->field_8);
        g_611360 = 0x100;
        g_611368 = &g_611420;
    }
    if (g_611358 != 6361952)
    {
        v1 = free(g_611358);
        g_611358 = &g_611360;
    }
    g_611370 = 1;
    return v1;
}

extern unsigned int g_40d01e;

int sub_4042d0()
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
    char v25[2];  // r15
    unsigned long long v26;  // rsi
    char v27;  // al
    char v28[2];  // rax
    unsigned long long v29;  // rax
    char *v31;  // r15
    unsigned long v32;  // r13
    unsigned long long v33;  // rdx
    char v35[2];  // r15
    void *v38;  // rax
    char *v39;  // rdx
    unsigned long long v40;  // rdx
    char v41;  // cc_dep1
    char v42[2];  // r14
    unsigned long long v43;  // rax
    char v44[2];  // r15
    unsigned long long v45;  // r12
    unsigned int *v47;  // rdx
    unsigned int *v48;  // rdx
    char *v49;  // rax
    unsigned long long v50;  // rcx
    unsigned int *v51;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v52;  // rcx
    unsigned long long v55;  // rax

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
                    v45 = (unsigned int)sub_408ce0();
                    if (v45 != 0)
                    {
                        v14 = strlen(v45);
                        if (v14 > 4095)
                        {
                            v15 = v14 + v45;
                            v16 = v15;
                        }
                        else
                        {
                            v45 = (unsigned int)sub_408ab0();
                            v15 = v14 + v45;
                            v16 = v45 + 0x1000;
                        }
                    }
                }
                else
                {
                    v45 = (unsigned int)sub_408a50();
                    v16 = v45 + 0x1000;
                    v15 = v45 + 1;
                    *((char *)v45) = 47;
                }
                if (v12[0] == 47 || v45 != 0)
                {
                    *((char *[2])&v3[0]) = v13;
                    v43 = v13[0];
                    v6 = v11 & 4;
                    v2 = 0;
                    v5 = 0;
                    v4 = 0;
                    while (true)
                    {
                        if (v43 != 0)
                        {
                            v17 = v43;
                        }
                        if (v43 == 47)
                        {
                            do
                            {
                                v13 = &v13[1];
                                v17 = v13[0];
                            }
                            while (v13[0] == 47);
                        }
                        if (v43 == 47 && v17 != 0 || v43 != 47 && v43 != 0)
                        {
                            v18 = v13;
                            while (true)
                            {
                                v43 = v18[1];
                                v42 = &v18[1];
                                if (v18[1] == 0 || v43 == 47)
                                {
                                    break;
                                }
                                v18 = v42;
                            }
                        }
                        if (v43 == 0 || v42 == v13 || v17 == 0 && v43 == 47)
                        {
                            if (v15[-1] == 47 && v15 > v45 + 1)
                            {
                                v49 = v15;
                                v15 = &v15[-1];
                            }
                            if (v15 <= v45 + 1 || v15[-1] != 47)
                            {
                                v49 = &v15[1];
                            }
                            *(v15) = 0;
                            if (v16 != v49)
                            {
                                v45 = (unsigned int)sub_408ab0();
                            }
                            free(v4);
                            if (v2 == 0)
                            {
                                break;
                            }
                            sub_405a10();
                        }
                        if (v42 != v13 && (v43 == 47 || v43 != 0) && (v17 != 0 || v43 != 47))
                        {
                            v19 = v42 - v13;
                            if (v17 == 46 && v0 == 2 && v13[1] == 46 && v42 - v13 != 1)
                            {
                                v20 = v42;
                                if (v15 > v45 + 1)
                                {
                                    v21 = &v15[-1];
                                    if (v15[-2] == 47 || v45 >= &v15[-1])
                                    {
                                        v15 = v21;
                                    }
                                }
                            }
                            if (v17 != 46 || v0 != 2 && v42 - v13 != 1 || v13[1] != 46 && v42 - v13 != 1)
                            {
                                if (v15[-1] != 47)
                                {
                                    *(v15) = 47;
                                    v15 = &v15[1];
                                }
                                if (v16 <= &v15[v0])
                                {
                                    v22 = &v15[-1 * v45];
                                    v0 = v19;
                                    v23 = (0x1000 <= v0? &v16[-1 * v45 + v0 + 1] : &v16[-1 * v45 + 0x1000]);
                                    v45 = (unsigned int)sub_408ab0();
                                    v16 = v23 + v45;
                                    v15 = v22 + v45;
                                }
                                *((unsigned long *)&v0) = v0;
                                memcpy(v15, v13, v0);
                                v15 = &v15[*((long long *)&v0)];
                                *(v15) = 0;
                                if (v6 == 0 || v1 != 2)
                                {
                                    v26 = v45;
                                    if (v6 != 0)
                                    {
                                        v27 = __xstat(0x1, v26, (unsigned int)&v8) != 0;
                                    }
                                    else
                                    {
                                        v27 = __lxstat() != 0;
                                    }
                                    if (v27 != 0)
                                    {
                                        v47 = __errno_location();
                                        v50 = *(v47);
                                        if (v1 == 1)
                                        {
                                            v7 = v50;
                                            v0 = v47;
                                            v28 = strspn((unsigned int)v42, 0x40d01e);
                                            v47 = v0;
                                            v50 = v7;
                                        }
                                    }
                                    else if (((unsigned short)v9 & 0xf000) == 0xa000)
                                    {
                                        if (v2 != 0)
                                        {
                                            v29 = sub_404e00();
                                            if (v29 == 0)
                                            {
                                                sub_404d70();
                                                v31 = (unsigned long long)(unsigned int)sub_40a2b0();
                                                if (v31 != 0)
                                                {
                                                    v32 = strlen(v31);
                                                    v33 = strlen(v42);
                                                    if (v5 == 0)
                                                    {
                                                        v0 = v33;
                                                        *((int *)&v5) = (0x1000 <= v0? v0 : 0x1000);
                                                        v4 = (unsigned int)sub_408a50();
                                                    }
                                                    else if (v0 > v5)
                                                    {
                                                        v0 = v32 + v33 + 1;
                                                        v3 = v33;
                                                        v4 = (unsigned int)sub_408ab0();
                                                        v5 = v0;
                                                    }
                                                    memmove(v4 + v32, v42, v33 + 1);
                                                    v38 = memcpy(v4, v31, v32);
                                                    v39 = v45 + 1;
                                                    v42 = v38;
                                                    *((void **)&v3[0]) = v38;
                                                    if (*(v31) == 47)
                                                    {
                                                        *((char *)v45) = 47;
                                                        v15 = v39;
                                                    }
                                                    else if (v15 > v15)
                                                    {
                                                        v40 = &v15[-1];
                                                        if (v45 < &v15[-1])
                                                        {
                                                            v41 = v15[-2];
                                                            v15 = v40;
                                                            if (v41 != 47)
                                                            {
                                                                do
                                                                {
                                                                    v15 = &v15[-1];
                                                                }
                                                                while (v45 != v15 && v15[-1] != 47);
                                                            }
                                                        }
                                                    }
                                                    free(v31);
                                                }
                                                else
                                                {
                                                    v48 = __errno_location();
                                                    v52 = *(v48);
                                                }
                                            }
                                            if ((v29 == 0 || v1 != 2) && (v31 == 0 || v29 != 0) && (v1 == 12 || v1 != 2))
                                            {
                                                *((unsigned long *)&v1) = v52;
                                                v0 = v48;
                                                free(v4);
                                                free(v45);
                                                v51 = v0;
                                                v52 = v1;
                                            }
                                        }
                                        else
                                        {
                                            v2 = (unsigned int)sub_4057d0();
                                            sub_408ca0(); /* do not return */
                                        }
                                    }
                                }
                                if ((v1 == 2 || v1 != 0) && (v1 == 2 || v1 != 1) && (v1 == 2 || v27 != 0) && (v6 != 0 || v1 != 0) && (v6 != 0 || v1 != 1) && (v6 != 0 || v27 != 0))
                                {
                                    v9 = 0;
                                }
                                if (v1 != 2)
                                {
                                    if (v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && v29 != 0)
                                    {
                                        v48 = __errno_location();
                                    }
                                    if (v42[0] != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000))
                                    {
                                        v47 = __errno_location();
                                    }
                                }
                                if (((unsigned short)v9 & 0xf000) == 0x4000 && v27 == 0 && ((unsigned short)v9 & 0xf000) != 0xa000 && (v6 == 0 || v1 != 2) || v29 == 0 && v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && v31 != 0 && (v6 == 0 || v1 != 2) || v42[0] == 0 && (v1 == 2 || v27 == 0 || v1 != 0) && (v1 == 2 || v27 == 0 || v1 != 1) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v1 == 2 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000) && (v27 == 0 || v6 != 0 || v1 != 0) && (v27 == 0 || v6 != 0 || v1 != 1) && (v6 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v6 != 0 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000) || v1 == 2 && v42[0] != 0 && (v1 == 2 || v27 == 0 || v1 != 0) && (v1 == 2 || v27 == 0 || v1 != 1) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v1 == 2 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000) && (v27 == 0 || v6 != 0 || v1 != 0) && (v27 == 0 || v6 != 0 || v1 != 1) && (v6 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v6 != 0 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000))
                                {
                                    v43 = v42[0];
                                    v44 = v42;
                                }
                                if (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v1 != 0 && v27 != 0 && *((char *)(v42 + v28)) != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v42 + v28)) == 0 && (unsigned int)v50 != 2 && v1 != 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v42[0] != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000))
                                {
                                    *((unsigned long long *)&v1) = v50;
                                    v0 = v47;
                                    free(v4);
                                    free(v45);
                                    v51 = v0;
                                    v52 = v1;
                                }
                                if (v6 == 0 && v1 == 2 && v29 == 0 && v31 == 0 && v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && v1 != 12 || v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && v29 != 0 && (v6 == 0 || v1 != 2) && v1 == 2 || v1 == 1 && *((char *)(v42 + v28)) == 0 && v1 != 0 && v27 != 0 && (v6 == 0 || v1 != 2) && (unsigned int)v50 == 2)
                                {
                                    v43 = v18[1];
                                    v35 = v42;
                                }
                                if (v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && (v6 == 0 || v1 != 2) && (v29 == 0 || v1 != 2) && (v31 == 0 || v29 != 0) && (v1 == 12 || v1 != 2) || v2 != 0 && (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v1 != 0 && v27 != 0 && *((char *)(v42 + v28)) != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v42 + v28)) == 0 && (unsigned int)v50 != 2 && v1 != 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v42[0] != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000)))
                                {
                                    *((unsigned long *)&v1) = v52;
                                    v0 = v51;
                                    sub_405a10();
                                    v52 = v1;
                                    v51 = v0;
                                }
                                if (v27 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v2 != 0 && (v6 == 0 || v1 != 2) && (v29 == 0 || v1 != 2) && (v31 == 0 || v29 != 0) && (v1 == 12 || v1 != 2) || v2 != 0 && (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v1 != 0 && v27 != 0 && *((char *)(v42 + v28)) != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v42 + v28)) == 0 && (unsigned int)v50 != 2 && v1 != 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v42[0] != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000)) || (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && v1 != 0 && v27 != 0 && *((char *)(v42 + v28)) != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v42 + v28)) == 0 && (unsigned int)v50 != 2 && v1 != 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v42[0] != 0 && (v27 == 0 || v1 != 0) && (v27 == 0 || v1 != 1) && (((unsigned short)v9 & 0xf000) != 0x4000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0xa000)) && v2 == 0)
                                {
                                    *((unsigned long *)&v51) = v52;
                                    v45 = 0;
                                }
                            }
                            if (v17 == 46 && (v45 < &v15[-1] || v42 - v13 == 1) && (v0 == 2 || v42 - v13 == 1) && (v13[1] == 46 || v42 - v13 == 1) && (v42 - v13 == 1 || v15 > v45 + 1) && (v42 - v13 == 1 || v15[-2] != 47))
                            {
                                v25 = v42;
                            }
                        }
                    }
                }
            }
            else
            {
                v45 = 0;
                *(__errno_location()) = 2;
            }
        }
    }
    if (v12 == 0 || ((unsigned int)((unsigned long long)(v11 & 3) - 1) & v11 & 3) != 0)
    {
        v45 = 0;
        *(__errno_location()) = 22;
    }
    v55 = v45;
    return v55;
}

// int sub_407e80()

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_1 *field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_0;

typedef struct struct_3 {
    char padding_0[4];
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

int sub_405fb0()
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
    if (sub_405030() != 0)
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
                sub_405150();
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
                    if (sub_405af0() == 0)
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

// int sub_403730()

extern unsigned long long g_6113f8;

int sub_404950()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_6113f8 = v1;
    return v2;
}

extern int512_t g_40cea0;

int sub_404201()
{
    return *((int *)&((char *)&g_40cea0)[4 * (unsigned long long)(unsigned int)sub_40a670()]);
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b2e0()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_8 = v2;
    return v3;
}

// int sub_4084a0()

int sub_404e00()
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
        v8 = sub_405560() != 0;
        return rax;
    }
    return 0;
}

int sub_406190()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // rsi

    return (0 | (unsigned int)sub_40a7f0() ^ v0) % v1 >> 64;
}

extern unsigned int g_40ce0d;

int sub_403a10()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v3;  // rsi
    unsigned long long v4;  // r8
    unsigned long v5;  // rdi
    unsigned long v6;  // rcx
    unsigned long v7;  // rdx
    unsigned long long v9;  // al
    unsigned long v10;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // edx
    unsigned long v12;  // r11
    char v13;  // r10b
    unsigned long long v14;  // r11
    unsigned long long v15;  // r9
    unsigned long long v16;  // r10
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // rbp
    char *v18;  // rbx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    char v21;  // dl
    unsigned long long v23;  // r12
    unsigned long long v24;  // rax

    v4 = (char)*((char *)(v3 + 1));
    v15 = (char)*((char *)(v5 + 1));
    v0 = v6;
    v1 = v7;
    v9 = 0;
    if (*((char *)(v3 + 1)) == 47 == *((char *)(v5 + 1)) == 47)
    {
        v11 = (char)*((char *)v5);
        v16 = (char)*((char *)v3);
        if (*((char *)v3) != 0)
        {
            v9  = unknown;            if (*((char *)v5) == 0 == 0 && v16 == v11)
            {
                v10 = 2;
                v11 = 0;
                while (true)
                {
                    v12 = v10 - 1;
                    v11 = (unsigned int)(v16 == 47? (unsigned int)(v10 - 1) : (unsigned int)rdx);
                    v13 = v15 == 0;
                    if (v13 == 0 && v4 == v15 && v4 != 0)
                    {
                        v14 = (char)*((char *)(v3 + v10));
                        v15 = (char)*((char *)(v5 + v10));
                        v16 = v4;
                        v10 += 1;
                        v4 = v14;
                    }
                    if ((unsigned int)v11 == 0 && (v13 == 0 || v4 != 0) && (v13 == 0 || v4 != 47) && (v15 != 47 || v4 != 0) && (v4 == 0 || v13 != 0 || v4 != v15))
                    {
                        break;
                    }
                    if (v15 == 47 && v4 == 0 || v4 == 0 && v13 != 0 || v4 == 47 && v13 != 0)
                    {
                        v11 = v12;
                    }
                    if (v15 == 47 && v4 == 0 || v4 == 0 && v13 != 0 || v4 == 0 && (unsigned int)v11 != 0 || v4 == 47 && v13 != 0 || v13 != 0 && (unsigned int)v11 != 0 || (unsigned int)v11 != 0 && v4 != v15)
                    {
                        v17 = v3 + v11;
                        v18 = v5 + v11;
                        v19 = (char)*((char *)(v3 + v11));
                        if (*((char *)(v3 + v11)) == 47)
                        {
                            v19 = v17[1];
                            v17 = &v17[1];
                        }
                        v20 = 0;
                        v21 = *(v18) == 47;
                        if (v19 == 0)
                        {
                            v23 = (unsigned int)sub_403990();
                        }
                        else
                        {
                            v23 = (unsigned int)sub_403990();
                            v24 = v17[0];
                            if (v17[0] != 0)
                            {
                                do
                                {
                                    if (v24 == 47)
                                    {
                                        v23 = (unsigned int)v23 | sub_403990();
                                    }
                                    v17 = &v17[1];
                                    v24 = *(v17);
                                }
                                while ((char)v24 != 0);
                            }
                            if (v18[rdx] != 0)
                            {
                                v23 = (unsigned int)v23 | sub_403990() | sub_403990();
                            }
                        }
                        if (v23 != 0)
                        {
                            dcgettext(0x0, 0x40ce0d, 0x5);
                            error(0x0, 0x24, "%s");
                        }
                        v9 = (unsigned int)v23 ^ 1;
                    }
                }
            }
            else
            {
                v9 = 0;
            }
        }
    }
    return v9;
}

extern char g_6113c8;
extern unsigned long long g_6113d0;

int sub_4029d1()
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

    if (g_6113c8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_6113d0 >= 0)
            {
                break;
            }
            g_6113d0 = g_6113d0 + 1;
            *((long long *)(6360640 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_6113c8 = 1;
        return sub_40297b();
    }
    return v4;
}

int sub_40b9a0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_408ec0() != 0)
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

int sub_4080f0()
{
    char v0;  // [bp-0x158]
    unsigned long v1;  // [bp-0x150]
    char v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // rbx
    unsigned long v8;  // r13
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    void *v11;  // rbp
    void *v12;  // r12
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax

    v5 = 0;
    v8 = (unsigned int)sub_404d00();
    v9 = sub_404d00();
    if (v8 == v9)
    {
        v10 = memcmp((unsigned long long)(unsigned int)sub_404ca0(), (unsigned long long)(unsigned int)sub_404ca0(), v8);
        if (v10 == 0)
        {
            v11 = (unsigned long long)(unsigned int)sub_404bc0();
            v12 = (unsigned long long)(unsigned int)sub_404bc0();
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
    struct struct_4 *field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    unsigned int field_8;
} struct_2;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_4;

int sub_405cf0()
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
        v7 = sub_405030();
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
            sub_405150();
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
                    v32 = sub_405af0();
                    if (v32 != 0)
                    {
                        v33 = sub_405030();
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
    if (v2 == 0 || ((char)(INVALID_IR) & 1) == 0 && v7 == 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && v32 != 0 && v33 != 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && ((char)(INVALID_IR) & 1) != 0)
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

int sub_404be0()
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
    v5 = sub_404ca0();
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

// int sub_407ae0()

extern int512_t g_40cfa0;

int sub_405150()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4247456)
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
        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1 || ((char)(INVALID_IR) & 1) != 0 || ((char)(INVALID_IR) & 1) != 0)
        {
            *(v1) = &g_40cfa0;
            return 0;
        }
    }
    if (unknown)
    {
        return 1;
    }
}

extern unsigned int g_40bba4;
extern unsigned int g_40bcb9;
extern unsigned int g_40bcc7;
extern unsigned int g_40bd11;
extern unsigned int g_40bd37;
extern unsigned int g_40cab8;
extern unsigned int g_40cb28;
extern unsigned int g_40cb50;
extern unsigned int g_40cbc0;
extern unsigned int g_40e307;
extern char g_6112f0;
extern unsigned int g_61137c;
extern unsigned long long g_6113d8;
extern char g_6113e0;
extern char g_6113e1;
extern char g_6113e2;
extern char g_6113e3;
extern char g_6113e4;
extern char g_6113e5;
extern char g_6113e6;
extern unsigned int g_6113e8;
extern unsigned long long g_6115a0;

int main()
{
    unsigned long long v0;  // [bp-0x208]
    unsigned long long v1;  // [bp-0xf8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0xe0]
    unsigned long v3;  // [bp-0xd8]
    unsigned int v4;  // [bp-0xd0]
    char v5;  // [bp-0xc9]
    char v6;  // [bp-0xc8]
    unsigned int v7;  // [bp-0xb0]
    unsigned long long v9;  // r15
    unsigned long v10;  // r14
    unsigned long long v13;  // rax
    unsigned long long v14;  // r12
    unsigned long long v16;  // r13
    unsigned long v17;  // rdi
    unsigned long long v18;  // rbx
    unsigned int v19;  // rsi
    unsigned long long v20;  // rbp
    unsigned long long v23;  // rbx
    unsigned long long v24;  // rbp
    unsigned long v25;  // r13
    unsigned long long v26;  // rax
    unsigned long long v27;  // rcx
    char *v28;  // rdi
    unsigned long long v30;  // rax
    char v31;  // cc_dep2
    unsigned long v32;  // d
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rbx
    unsigned int v36;  // eax
    unsigned long long v38;  // rax
    unsigned int *v40;  // rax
    unsigned int v41;  // r12
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rbx
    unsigned int v44;  // eax
    unsigned long long v45;  // rbx
    unsigned long long v47;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v51;  // r14
    unsigned long long v52;  // r14

    v9 = 0;
    v10 = 0;
    v16 = 0;
    v14 = 0;
    sub_406260();
    setlocale(0x6, 0x40e307);
    bindtextdomain(0x40bcb9, 0x40cab8);
    textdomain(0x40bcb9);
    sub_40bb40();
    g_6113e0 = 0;
    g_6113e1 = 0;
    g_6113e3 = 0;
    g_6113e2 = 0;
    g_6113e6 = 0;
    v2 = 0;
    while (true)
    {
        v13 = sub_40a1b0();
        if ((unsigned int)v13 == -1)
        {
            v18 = (unsigned int)v17 - g_61137c;
            v20 = v19 + (int)g_61137c * 8;
            if ((unsigned int)v17 - g_61137c <= 0)
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40bd11, 0x5));
            }
            else if (v14 == 0)
            {
                if (v16 == 0)
                {
                    v16 = ".";
                    if ((unsigned int)v17 - g_61137c != 1)
                    {
                        v25 = *((long long *)(v20 + v18 * 8 - 8));
                        v3 = v20 + v18 * 8 - 8;
                        v26 = sub_404ca0();
                        v27 = -1;
                        v28 = v26;
                        v30 = v14;
                        while (v27 != 0)
                        {
                            v27 -= 1;
                            v31 = *(v28);
                            v28 = &v28[v32];
                            break;
                        }
                        v4 = 1;
                        if (!(rcx) != 1)
                        {
                            v36 = (char)(*((char *)(v26 + !(rcx) - 1 - 1)) == 47);
                            v4 = v36;
                        }
                        v5 = (char)v4 & 1;
                        if (g_6112f0 != 0)
                        {
                            v38 = __xstat(0x1, v25, (unsigned int)&v6);
                        }
                        else
                        {
                            v38 = __lxstat();
                        }
                        if (v38 != 0)
                        {
                            v40 = __errno_location();
                            v41 = *(v40);
                            if (v41 <= 40 && *(v40) != 0)
                            {
                                v0 = 1168232153092;
                            }
                        }
                        if (v38 == 0 || *(v40) == 0)
                        {
                            if ((char)((v7 & 0xf000) == 0x4000) < (unsigned long long)v5)
                            {
                                v41 = 0;
                            }
                            else if (((unsigned short)v7 & 0xf000) == 0x4000)
                            {
                                v18 = (unsigned int)v18 - 1;
                                v16 = *((long long *)(v20 + v18 * 8));
                            }
                        }
                    }
                }
            }
            else
            {
                if (v16 != 0)
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40cb50, 0x5));
                }
                else if ((unsigned int)v17 - g_61137c != 2)
                {
                    if ((unsigned int)v17 - g_61137c != 1)
                    {
                        v34 = (unsigned int)sub_407c30();
                    }
                    else
                    {
                        v33 = (unsigned int)sub_407c30();
                    }
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v19, 0x5));
                }
            }
        }
        else if ((unsigned int)v13 != 98)
        {
            if (v13 > 98)
            {
                if ((unsigned int)v13 == 110)
                {
                    g_6112f0 = 0;
                }
                else if (v13 <= 110)
                {
                    if ((unsigned int)v13 == 102)
                    {
                        g_6113e2 = 1;
                        g_6113e3 = 0;
                    }
                    if ((unsigned int)v13 == 105)
                    {
                        g_6113e2 = 0;
                        g_6113e3 = 1;
                    }
                }
                else if ((unsigned int)v13 == 115)
                {
                    g_6113e6 = 1;
                }
                else if (v13 > 115)
                {
                    if ((unsigned int)v13 == 116)
                    {
                        if (!(v16 == 0))
                        {
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40cb28, 0x5));
                        }
                        else if (__xstat(0x1, g_6115a0, (unsigned int)&v6) == 0)
                        {
                            v16 = g_6115a0;
                            v23 = (unsigned int)sub_407c30();
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40bcc7, 0x5));
                        }
                        else
                        {
                            v24 = (unsigned int)sub_407c30();
                            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40bba4, 0x5));
                        }
                    }
                    if ((unsigned int)v13 == 118)
                    {
                        g_6113e1 = 1;
                    }
                }
                else if ((unsigned int)v13 == 114)
                {
                    g_6113e5 = 1;
                }
            }
            else
            {
                if ((unsigned int)v13 == 76)
                {
                    g_6113e4 = 1;
                }
                else if (v13 > 76)
                {
                    if ((unsigned int)v13 == 83)
                    {
                        v10 = 1;
                        v2 = g_6115a0;
                    }
                    if ((unsigned int)v13 == 84)
                    {
                        v14 = 1;
                    }
                    if ((unsigned int)v13 == 80)
                    {
                        g_6113e4 = 0;
                    }
                }
                else
                {
                    if ((unsigned int)v13 == -130)
                    {
                        sub_4032b0(); /* do not return */
                    }
                    if ((unsigned int)v13 == -131)
                    {
                        v1 = 0;
                        sub_408910();
                        exit(0x0); /* do not return */
                    }
                }
            }
        }
        if ((unsigned int)v13 == 98)
        {
            v10 = 1;
            v9 = (g_6115a0 != 0? g_6115a0 : r15);
        }
        if (v13 <= 98 && (unsigned int)v13 == 70 && v13 <= 76 && (unsigned int)v13 != -1 && (unsigned int)v13 != -130 && (unsigned int)v13 != 76 && (unsigned int)v13 != 98 || v13 <= 110 && (unsigned int)v13 == 100 && v13 > 98 && (unsigned int)v13 != -1 && (unsigned int)v13 != 105 && (unsigned int)v13 != 102 && (unsigned int)v13 != 110 && (unsigned int)v13 != 98)
        {
            g_6113e0 = 1;
        }
        if ((unsigned int)v17 - g_61137c <= 0 && (unsigned int)v13 == -1 || (unsigned int)v13 == -1 && v16 == 0 && (unsigned int)v17 - g_61137c > 0 && (unsigned int)v17 - g_61137c != 2 && v14 != 0 || v13 <= 98 && v13 <= 76 && (unsigned int)v13 != -1 && (unsigned int)v13 != 70 && (unsigned int)v13 != -130 && (unsigned int)v13 != 76 && (unsigned int)v13 != 98 && (unsigned int)v13 != -131 || v13 <= 98 && (unsigned int)v13 != -1 && (unsigned int)v13 != 84 && (unsigned int)v13 != 80 && v13 > 76 && (unsigned int)v13 != 76 && (unsigned int)v13 != 83 && (unsigned int)v13 != 98 || v13 <= 110 && v13 > 98 && (unsigned int)v13 != -1 && (unsigned int)v13 != 105 && (unsigned int)v13 != 100 && (unsigned int)v13 != 102 && (unsigned int)v13 != 110 && (unsigned int)v13 != 98 || v13 <= 115 && v13 > 98 && (unsigned int)v13 != -1 && (unsigned int)v13 != 115 && v13 > 110 && (unsigned int)v13 != 114 && (unsigned int)v13 != 110 && (unsigned int)v13 != 98 || (unsigned int)v13 != 116 && v13 > 98 && (unsigned int)v13 != -1 && (unsigned int)v13 != 115 && v13 > 110 && (unsigned int)v13 != 118 && (unsigned int)v13 != 110 && (unsigned int)v13 != 98 && v13 > 115)
        {
            sub_4032b0(); /* do not return */
        }
        if ((unsigned int)v13 == -1 && v14 == 0 && v16 == 0 && v41 <= 40 && (unsigned int)v17 - g_61137c > 0 && v38 != 0 && *(v40) != 0 && (unsigned int)v17 - g_61137c != 1 && ((char)((char)*(&((char *)stack_base)[((v41 & 63) >> 3) + -520]) >> (unsigned long long)(char)(v41 & 63 & 7)) & 1) == 0 || (unsigned int)v13 == -1 && v14 == 0 && v16 == 0 && (unsigned int)v17 - g_61137c > 0 && v38 != 0 && *(v40) != 0 && (unsigned int)v17 - g_61137c != 1 && v41 > 40)
        {
            v42 = (unsigned int)sub_407c30();
            error(0x1, v41, (unsigned long long)dcgettext(0x0, 0x40bba4, 0x5));
        }
        if (((unsigned int)v13 == -1 && v14 == 0 && v16 == 0 && v41 <= 40 && (unsigned int)v17 - g_61137c > 0 && v38 != 0 && *(v40) != 0 && (unsigned int)v17 - g_61137c != 1 && ((char)((char)*(&((char *)stack_base)[((v41 & 63) >> 3) + -520]) >> (unsigned long long)(char)(v41 & 63 & 7)) & 1) != 0 && v4 == 0 || (unsigned int)v13 == -1 && v14 == 0 && v16 == 0 && (unsigned int)v17 - g_61137c > 0 && (unsigned int)v17 - g_61137c != 1 && (v38 == 0 || *(v40) == 0) && (char)((v7 & 0xf000) == 0x4000) >= (unsigned long long)v5 && ((unsigned short)v7 & 0xf000) != 0x4000) && (unsigned int)v18 != 2)
        {
            v45 = (unsigned int)sub_407c30();
            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40bcc7, 0x5));
        }
        if ((unsigned int)v13 == -1 && v14 == 0 && v16 == 0 && v41 <= 40 && (unsigned int)v17 - g_61137c > 0 && v38 != 0 && *(v40) != 0 && (unsigned int)v17 - g_61137c != 1 && ((char)((char)*(&((char *)stack_base)[((v41 & 63) >> 3) + -520]) >> (unsigned long long)(char)(v41 & 63 & 7)) & 1) != 0 && v4 != 0 || (unsigned int)v13 == -1 && v14 == 0 && v16 == 0 && (unsigned int)v17 - g_61137c > 0 && (unsigned int)v17 - g_61137c != 1 && (v38 == 0 || *(v40) == 0) && (char)((v7 & 0xf000) == 0x4000) < (unsigned long long)v5)
        {
            v43 = (unsigned int)sub_407c30();
            error(0x1, v41, (unsigned long long)dcgettext(0x0, 0x40bcc7, 0x5));
        }
        if (((unsigned int)v13 == -1 && v14 == 0 && v16 == 0 && v41 <= 40 && (unsigned int)v17 - g_61137c > 0 && v38 != 0 && *(v40) != 0 && (unsigned int)v17 - g_61137c != 1 && ((char)((char)*(&((char *)stack_base)[((v41 & 63) >> 3) + -520]) >> (unsigned long long)(char)(v41 & 63 & 7)) & 1) != 0 && v4 == 0 || (unsigned int)v13 == -1 && v14 == 0 && v16 == 0 && (unsigned int)v17 - g_61137c > 0 && (unsigned int)v17 - g_61137c != 1 && (v38 == 0 || *(v40) == 0) && (char)((v7 & 0xf000) == 0x4000) >= (unsigned long long)v5 && ((unsigned short)v7 & 0xf000) != 0x4000) && (unsigned int)v18 == 2 || (unsigned int)v13 == -1 && v16 == 0 && (unsigned int)v17 - g_61137c > 0 && v14 != 0 && (unsigned int)v17 - g_61137c == 2)
        {
            v18 = 2;
            v16 = 0;
        }
        if (unknown)
        {
            v44 = 0;
            if (v10 == 0)
            {
                break;
            }
            dcgettext(0x0, 0x40bd37, 0x5);
            v44 = sub_404280();
        }
    }
    g_6113e8 = v44;
    sub_403ce0();
    if (g_6113e5 != 0 && g_6113e6 == 0)
    {
        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40cbc0, 0x5));
    }
    if (g_6113e5 == 0 || g_6113e6 != 0)
    {
        if (v16 != 0)
        {
            if ((unsigned int)v18 != 1 && g_6113e2 != 0 && g_6113e6 == 0 && g_6113e8 != 3)
            {
                g_6113d8 = (unsigned int)sub_4057d0();
                if (g_6113d8 == 0)
                {
                    sub_408ca0(); /* do not return */
                }
            }
            if ((unsigned int)v18 == 1 || g_6113e8 == 3 || g_6113e2 == 0 || g_6113d8 != 0 || g_6113e6 != 0)
            {
                v51 = 1;
                v47 = v20 + (v18 - 1) * 8 + 8;
                while (true)
                {
                    v20 += 8;
                    sub_404ca0();
                    sub_404d30();
                    v51 &= sub_402a30();
                    free((unsigned long long)(unsigned int)sub_404e40());
                    if (v20 == v47)
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            v51 = sub_402a30();
        }
        if (g_6113d8 != 0)
        {
            v52 = v51 ^ 1;
            return v52;
        }
    }
}

int sub_405560()
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
        v6 = sub_405000();
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

extern int512_t g_611520;

int sub_407820()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_611520 : v1)) = v2;
    return &g_611520;
}

int sub_404280()
{
    char *v1;  // rsi
    char *v2;  // rax

    if (v1 == 0 || *(v1) == 0)
    {
        v2 = getenv("VERSION_CONTROL");
    }
    if (v2 == 0 && v1 == 0 || v2 == 0 && *(v1) == 0 || *(v2) == 0 && v1 == 0 || *(v2) == 0 && *(v1) == 0)
    {
        return 2;
    }
}

extern int512_t g_611520;

int sub_4078c0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_611520 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_406400();
}

int sub_40af10()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __explicit_bzero_chk();
}

int sub_4061d0()
{
    unsigned long long v1[3];  // rdi
    unsigned long long v2[3];  // rsi

    if (v1[1] != v2[1] || v1[2] != v2[2])
    {
        return 0;
    }
}

int sub_404d30()
{
    void tmp_19;  // tmp #19
    unsigned long v1;  // rdi
    char *v2;  // rbx
    char *v3;  // rax
    char v4;  // al

    v2 = (*((char *)(unsigned long long)(unsigned int)sub_404ca0()) == 0? v1 : (unsigned long long)(unsigned int)sub_404ca0());
    v3 = sub_404d00();
    tmp_19 = (char)*((char *)(v2 + v3));
    *((char *)(v2 + v3)) = 0;
    v4 = (char)tmp_19 != 0;
    return rax;
}

int sub_408890()
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

extern unsigned int g_40bc9e;
extern unsigned int g_40bed8;
extern unsigned int g_40bf00;
extern unsigned int g_40bfe8;
extern unsigned int g_40c1f0;
extern unsigned int g_40c240;
extern unsigned int g_40c400;
extern unsigned int g_40c5f8;
extern unsigned int g_40c738;
extern unsigned int g_40c768;
extern unsigned int g_40c7a0;
extern unsigned int g_40c880;
extern unsigned int g_40c960;
extern unsigned int g_40ca18;
extern unsigned int g_40ca60;
extern unsigned int g_40ca80;
extern unsigned long long stdout;

int sub_4032b0()
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
    unsigned long v19;  // rdi
    unsigned long long *v32;  // rax
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
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x40bed8, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bf00, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40bfe8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c1f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c240, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c400, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c5f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c738, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c768, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c7a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c880, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40c960, 0x5));
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
            v34 = "ln";
            v35 = 3;
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
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bc9e, 0x5));
            v43 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bc9e, 0x5));
            v42 = setlocale(0x5, 0x0);
            if (v42 != 0)
            {
                v44 = strncmp(v42, "en_", 0x3);
            }
            if (v44 == 0 || v42 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ca60, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v43, "en_", 0x3) != 0) && (v3 == 0 || v43 != 0) && (v44 != 0 || v3 != 0) && (v42 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ca18, 0x5));
        }
        if (v3 != 0 || v44 != 0 && v42 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ca60, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40ca80, 0x5));
    }
    exit(v19); /* do not return */
}

// int sub_40afda()

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_405a10()
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

extern unsigned int g_40bba4;
extern unsigned int g_40bbb8;
extern unsigned int g_40bbd4;
extern unsigned int g_40bbe5;
extern unsigned int g_40bc07;
extern unsigned int g_40bc25;
extern unsigned int g_40bde8;
extern unsigned int g_40be38;
extern unsigned int g_40be60;
extern unsigned int g_40be88;
extern unsigned int g_40beb0;
extern unsigned long long g_6113d8;
extern char g_6113e0;
extern char g_6113e1;
extern char g_6113e2;
extern char g_6113e3;
extern char g_6113e4;
extern char g_6113e5;
extern char g_6113e6;
extern unsigned int g_6113e8;

int sub_402a30()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x170]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x168]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x160]
    char v3;  // [bp-0x158]
    unsigned long v4;  // [bp-0x150]
    unsigned long v5;  // [bp-0x148]
    unsigned int v6;  // [bp-0x140]
    unsigned long v7;  // [bp-0xc8]
    unsigned long v8;  // [bp-0xc0]
    unsigned int v9;  // [bp-0xb0]
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r12
    unsigned int v13;  // esi
    unsigned int v14;  // ebp
    char v17;  // al
    char v18;  // al
    unsigned long long v19;  // r15
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long v22;  // rbx
    unsigned long long v23;  // rax
    unsigned int v24;  // r14d
    unsigned long long v26;  // rax
    unsigned long long v27;  // rbx
    unsigned long long v28;  // r12
    unsigned long long v29;  // rbx
    char *v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rbp
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rbx
    unsigned long long v36;  // r14
    unsigned long long v37;  // rax
    unsigned long long v38;  // r13
    unsigned long long v39;  // rax
    unsigned long long v41;  // rbp
    unsigned long long v42;  // r14
    unsigned long v43;  // rsi
    void *v44;  // rax
    unsigned long long v45;  // r14
    unsigned long long v46;  // rax
    void *v47;  // rax
    unsigned int v51;  // eax
    char *v53;  // rdx
    unsigned int v54;  // eax
    unsigned long long v56;  // rax
    unsigned long long v57;  // rbp
    unsigned long long v58;  // rbx
    unsigned long long v59;  // rax

    v12 = v11;
    v14 = v13;
    v58 = g_6113e6;
    if (g_6113e6 == 0)
    {
        if (g_6113e4 != 0)
        {
            v18 = __xstat(0x1, v11, (unsigned int)&v3) != 0;
        }
        else
        {
            v17 = __lxstat() != 0;
        }
        if ((g_6113e4 == 0 && rax == 0 || rax == 0 && g_6113e4 != 0) && ((unsigned short)v6 & 0xf000) == 0x4000)
        {
            v19 = g_6113e0;
            if (g_6113e0 == 0)
            {
                v22 = (unsigned int)sub_407d00();
            }
        }
        if ((g_6113e4 == 0 || rax != 0) && (g_6113e4 != 0 || rax != 0))
        {
            v20 = (unsigned int)sub_407c30();
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40bba4, 0x5));
        }
    }
    if (g_6113e6 != 0 || g_6113e4 == 0 && rax == 0 && ((unsigned short)v6 & 0xf000) != 0x4000 || rax == 0 && g_6113e4 != 0 && ((unsigned short)v6 & 0xf000) != 0x4000)
    {
        v19 = 0;
    }
    if (rax == 0 || rax == 0 || g_6113e0 != 0)
    {
        v21 = g_6113e2;
    }
    if (g_6113e3 == 0 && g_6113e2 == 0 && (g_6113e4 == 0 || rax == 0 || g_6113e6 != 0) && (rax == 0 || g_6113e4 != 0 || g_6113e6 != 0) && (g_6113e0 != 0 || ((unsigned short)v6 & 0xf000) != 0x4000 || g_6113e6 != 0) && g_6113e8 != 0 || g_6113e2 == 0 && (g_6113e4 == 0 || rax == 0 || g_6113e6 != 0) && (rax == 0 || g_6113e4 != 0 || g_6113e6 != 0) && (g_6113e0 != 0 || ((unsigned short)v6 & 0xf000) != 0x4000 || g_6113e6 != 0) && g_6113e3 != 0 || (g_6113e6 != 0 || g_6113e4 == 0 && rax == 0 && g_6113e0 != 0 || g_6113e4 == 0 && rax == 0 && ((unsigned short)v6 & 0xf000) != 0x4000 || rax == 0 && g_6113e4 != 0 && g_6113e0 != 0 || rax == 0 && g_6113e4 != 0 && ((unsigned short)v6 & 0xf000) != 0x4000) && g_6113e2 != 0)
    {
        v23 = __lxstat();
        v24 = v23;
        if ((unsigned int)v23 != 0)
        {
            if (*(v0) == 2)
            {
            }
            else
            {
                v0 = __errno_location();
                v27 = (unsigned int)sub_407c30();
                v58 = 0;
                error(0x0, *(v0), (unsigned long long)dcgettext(0x0, 0x40bba4, 0x5));
            }
        }
        else
        {
            if (g_6113d8 != 0)
            {
                v26 = sub_404e00();
                if (v26 == 0)
                {
                    v21 = g_6113e2;
                }
                else
                {
                    v28 = (unsigned int)sub_407b50();
                    v29 = (unsigned int)sub_407b50();
                    v30 = dcgettext(0x0, 0x40bde8, 0x5);
                }
            }
        }
    }
    if (((g_6113e3 == 0 && g_6113e2 == 0 && (g_6113e4 == 0 || rax == 0 || g_6113e6 != 0) && (rax == 0 || g_6113e4 != 0 || g_6113e6 != 0) && (g_6113e0 != 0 || ((unsigned short)v6 & 0xf000) != 0x4000 || g_6113e6 != 0) && g_6113e8 != 0 || g_6113e2 == 0 && (g_6113e4 == 0 || rax == 0 || g_6113e6 != 0) && (rax == 0 || g_6113e4 != 0 || g_6113e6 != 0) && (g_6113e0 != 0 || ((unsigned short)v6 & 0xf000) != 0x4000 || g_6113e6 != 0) && g_6113e3 != 0 || (g_6113e6 != 0 || g_6113e4 == 0 && rax == 0 && g_6113e0 != 0 || g_6113e4 == 0 && rax == 0 && ((unsigned short)v6 & 0xf000) != 0x4000 || rax == 0 && g_6113e4 != 0 && g_6113e0 != 0 || rax == 0 && g_6113e4 != 0 && ((unsigned short)v6 & 0xf000) != 0x4000) && g_6113e2 != 0) && (unsigned int)v23 == 0 && g_6113d8 != 0 && v26 == 0 || (g_6113e3 == 0 && g_6113e2 == 0 && (g_6113e4 == 0 || rax == 0 || g_6113e6 != 0) && (rax == 0 || g_6113e4 != 0 || g_6113e6 != 0) && (g_6113e0 != 0 || ((unsigned short)v6 & 0xf000) != 0x4000 || g_6113e6 != 0) && g_6113e8 != 0 || g_6113e2 == 0 && (g_6113e4 == 0 || rax == 0 || g_6113e6 != 0) && (rax == 0 || g_6113e4 != 0 || g_6113e6 != 0) && (g_6113e0 != 0 || ((unsigned short)v6 & 0xf000) != 0x4000 || g_6113e6 != 0) && g_6113e3 != 0 || (g_6113e6 != 0 || g_6113e4 == 0 && rax == 0 && g_6113e0 != 0 || g_6113e4 == 0 && rax == 0 && ((unsigned short)v6 & 0xf000) != 0x4000 || rax == 0 && g_6113e4 != 0 && g_6113e0 != 0 || rax == 0 && g_6113e4 != 0 && ((unsigned short)v6 & 0xf000) != 0x4000) && g_6113e2 != 0) && (unsigned int)v23 == 0 && g_6113d8 == 0) && v21 != 0 && g_6113e8 == 0 && g_6113e6 != 0)
    {
        v31 = __xstat(0x1, v11, (unsigned int)&v3);
    }
    if (unknown)
    {
        v32 = sub_4080f0();
    }
    if (unknown)
    {
        if (((unsigned short)v9 & 0xf000) != 0x4000)
        {
            v58 = g_6113e3;
            if (g_6113e3 != 0)
            {
                v36 = (unsigned int)sub_407c30();
                dcgettext(0x0, 0x40bbd4, 0x5);
                __fprintf_chk();
                v37 = sub_408d10();
                if (v37 != 0)
                {
                    g_6113e2 = 1;
                }
            }
        }
        else
        {
            v34 = (unsigned int)sub_407d00();
        }
    }
    if (unknown)
    {
        v33 = (unsigned int)sub_407b50();
        v35 = (unsigned int)sub_407b50();
        v30 = dcgettext(0x0, 0x40bbb8, 0x5);
    }
    if (unknown)
    {
        v58 = 0;
        error(0x0, 0x0, v30);
    }
    if (unknown)
    {
        v58 = 0;
        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v13, 0x5));
    }
    if (unknown)
    {
        v38 = (unsigned int)sub_404240();
        v39 = rename(v14, v38);
        if (v39 != 0)
        {
            free(v38);
            if ((unsigned int)v11 != 2)
            {
                v41 = (unsigned int)sub_407c30();
                v43 = (unsigned int)*(__errno_location());
                v58 = 0;
                error(0x0, v43, (unsigned long long)dcgettext(0x0, 0x40bbe5, 0x5));
            }
        }
    }
    if (unknown)
    {
        v38 = 0;
    }
    if (unknown)
    {
        v42 = 0;
        if (g_6113e5 != 0)
        {
            v2 = (unsigned long long)(unsigned int)sub_404bc0();
            v44 = sub_4042d0();
            v45 = v44;
            v0 = v44;
            v1 = (unsigned long long)(unsigned int)sub_4042d0();
            if (v45 != 0 && v1 != 0)
            {
                v42 = (unsigned int)sub_408a50();
                v46 = sub_403a10();
                if (v46 != 0)
                {
                    free(v2);
                    free(v0);
                    free(v1);
                    if (v42 != 0)
                    {
                        v12 = v42;
                    }
                }
                else
                {
                    free(v42);
                }
            }
            if (v1 == 0 || v45 == 0 || v46 == 0)
            {
                free(v2);
                free(v0);
                free(v1);
            }
            if (v1 == 0 || v42 == 0 || v45 == 0 || v46 == 0)
            {
                v47 = sub_408c80();
                v12 = v47;
                v42 = v47;
            }
        }
        if (g_6113e6 == 0)
        {
            v58 = (unsigned long long)(unsigned int)!(sub_403750()) % 0x80000000;
        }
        else
        {
            v58 = (unsigned long long)(unsigned int)!(sub_403890()) % 0x80000000;
        }
        if (v58 != 0)
        {
            if (g_6113e6 == 0)
            {
                sub_404d70();
            }
            if (g_6113e1 != 0)
            {
                if (v38 != 0)
                {
                    __printf_chk(0x1, "%s ~ ", sub_407c30());
                }
                __printf_chk(0x1, "%s %c> %s\n", sub_407b50(), (g_6113e6 != 0? 45 : 61), sub_407b50());
            }
        }
        else
        {
            v1 = (unsigned int)sub_407b50();
            v2 = (unsigned int)sub_407b50();
            v0 = __errno_location();
            if (g_6113e6 != 0)
            {
                if (*(v0) != 36 && *((char *)v12) != 0)
                {
                    v53 = (unsigned long long)dcgettext(0x0, 0x40be38, 0x5);
                }
                if (*((char *)v12) == 0 || *(v0) == 36)
                {
                    v53 = (unsigned long long)dcgettext(0x0, 0x40be60, 0x5);
                }
            }
            else
            {
                v51 = *(v0);
                if (*(v0) != 31)
                {
                    if (v51 != 122 && v51 != 17)
                    {
                        v54 = v51 & -3;
                    }
                    if (v51 == 122 || v51 == 17 || v54 == 28)
                    {
                        v53 = (unsigned long long)dcgettext(0x0, 0x40bc07, 0x5);
                    }
                }
                else if (v19 == 0)
                {
                    v53 = (unsigned long long)dcgettext(0x0, 0x40be88, 0x5);
                }
                if ((*(v0) == 31 || v51 != 122) && (*(v0) == 31 || v51 != 17) && (*(v0) == 31 || v54 != 28) && (*(v0) != 31 || v19 != 0))
                {
                    v53 = (unsigned long long)dcgettext(0x0, 0x40beb0, 0x5);
                }
            }
            error(0x0, *(v0), v53);
            if (v38 != 0)
            {
                v56 = rename(v38, v14);
                if (v56 != 0)
                {
                    v57 = (unsigned int)sub_407c30();
                    error(0x0, *(v0), (unsigned long long)dcgettext(0x0, 0x40bc25, 0x5));
                }
            }
        }
        free(v38);
        free(v42);
    }
    v59 = v58;
    return v59;
}

int sub_40795b()
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
    v7 = (unsigned int)sub_406400();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_408a50();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_406400();
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

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int sub_40b300()
{
    void tmp_20;  // tmp #20
    unsigned long long v1[4];  // rdi
    struct v2;  // r12
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
                    sub_40b4b0();
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
                            return sub_40b4b0();
                        }
                    }
                    sub_40b4b0();
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

int sub_409460()
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
        if (v5 >= v1[6] || (unsigned int)(v14 - v6) > (unsigned int)(v6 - v5))
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

// int sub_407b00()

int sub_405f70()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_405cf0();
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

extern unsigned int g_40e344;
extern unsigned long long stderr[7];

int sub_40a550()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e344, 0x5), stderr);
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
                    sub_407e80();
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
                sub_407e80();
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

int sub_408c50()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_408a50();
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40e307;
extern char g_611598[2];

int sub_40a830()
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
    unsigned long long v63;  // rdx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rax

    v9 = g_611598;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40e307 : (unsigned long long)nl_langinfo(0xe));
    if (g_611598 == 0)
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
            if (v15[v11 + -1] == 47 || v11 == 0)
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
        if (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47 && v11 != 0)
        {
            v17 = malloc(v13);
        }
        if (v17 == 0 || v17 == 0)
        {
            v9 = &g_40e307;
        }
        if (v17 != 0 && (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47) && (*(v15) == 0 || v15 == 0 || v11 != 0))
        {
            memcpy(v17, v15, v16);
            *((char *)(v17 + v16)) = 47;
        }
        if (*(v15) == 0 && v17 != 0 || v15 == 0 && v17 != 0 || v17 != 0 && v15[v11 + -1] != 47 && v11 != 0 || v15[v11 + -1] == 47 && *(v15) != 0 && v15 != 0 && v17 != 0 || v11 == 0 && *(v15) != 0 && v15 != 0 && v17 != 0)
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
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                        {
                            *((char **)(v10 + 8)) = &v60[1];
                            v27 = *(v60);
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1)
                        {
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
                                        v63 = v41 + 1;
                                        v50 = v38 + v43 - 1;
                                        if ((unsigned int)v44 >= 8)
                                        {
                                            *((long long *)v50) = *((long long *)&v5);
                                            v44 = v63;
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
                                        v9 = &g_40e307;
                                        v10 = (tmp_10 == 0? &g_40e307 : tmp_10);
                                        free(NULL);
                                        sub_40b9a0();
                                    }
                                }
                            }
                            if ((unsigned int)v27 == 35)
                            {
                                do
                                {
                                    v62 = *((long long *)(v10 + 8));
                                    if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                    {
                                        *((char **)(v10 + 8)) = &v62[1];
                                        v62 = (unsigned int)*(v62);
                                        v63 = 1;
                                    }
                                    else
                                    {
                                        v62 = __uflow(v10);
                                        v63 = (char)((unsigned int)v62 != -1);
                                    }
                                }
                                while (v63 != 0 && v62 != 10);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1)
                        {
                            v61 = __uflow(v10);
                        }
                        if ((unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v62 == -1 || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v38 != 0 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1) && (unsigned int)v61 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40e307 : tmp_10);
                            sub_40b9a0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && v62 == -1)
                    {
                        v9 = &g_40e307;
                    }
                    else if (((unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && v62 == -1) && v0 != 0 || v38 == 0 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40e307;
            free(v17);
        }
        *((char *[2])&g_611598[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_40e307 : tmp_10), v9);
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

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_4057b0()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

int sub_408910()
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
        return sub_4084b0();
    }
}

// int sub_40a3a0()

// int sub_407cd0()

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

int sub_405af0()
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
                v2 = (unsigned int)sub_404f40();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_4051d0();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_4051d0();
                    if (v22 != 0)
                    {
                        v23 = sub_4051d0();
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
    if (((char)(INVALID_IR) & 1) == 0 && *((long long *)&v2) == 0 || v11->field_28->field_10 == 0 && ((char)(INVALID_IR) & 1) == 0 || ((char)(INVALID_IR) & 1) == 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 && v11->field_28->field_10 != 0 || ((char)(INVALID_IR) & 1) == 0 && v0 == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_28->field_10 != 0 && v11->field_10 != *((long long *)&v2))
    {
        v21 = 0;
    }
    if (v11->field_10 != *((long long *)&v2) || (char)v21 != 0)
    {
        v24 = v21;
        return v24;
    }
}

int sub_40a210()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409b60();
}

int sub_40add0()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = (unsigned int)sub_40aff0();
    v2 = 0;
    if (v1 != 0)
    {
        v2 = sub_408a50();
        *((unsigned long long *)v2) = v1;
        *((long long *)(v2 + 16)) = 0;
        *((long long *)(v2 + 8)) = 0;
    }
    return v2;
}

extern unsigned int g_611374;
extern unsigned int g_611378;
extern unsigned int g_61137c;
extern unsigned int g_611560;
extern unsigned int g_611564;
extern unsigned int g_611568;
extern unsigned long long g_611570;
extern unsigned long long g_6115a0;

int sub_40a130()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_611560 = g_61137c;
    g_611564 = g_611378;
    v1 = (unsigned int)v2;
    v0 = &g_611560;
    g_61137c = g_611560;
    g_6115a0 = g_611570;
    g_611374 = g_611568;
    return sub_409b60();
}

extern unsigned long long g_611388;

int sub_40297b()
{
    unsigned long long v1;  // rax

    v1 = &g_611388;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_40b2f0()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_10 = v2;
    return v3;
}

extern unsigned long long g_6113f0;

int sub_403d40()
{
    unsigned long long v0;  // [bp-0x90]
    void *v1;  // [bp-0x88]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned int v6;  // [bp-0x60]
    unsigned int v7;  // [bp-0x58]
    unsigned long v8;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x40]
    void *v12;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // rbx
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v29;  // r8b
    unsigned long long v30;  // rax
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // rax
    unsigned long v34;  // rdx
    unsigned long v35;  // rax
    unsigned long long v36;  // r8
    unsigned long long v37;  // rsi
    char v38;  // sil
    unsigned long long v40;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // rdx
    char *v42;  // rax
    unsigned long long v43;  // r15
    unsigned long long v44;  // rcx
    unsigned long long v45;  // rdx
    unsigned long long v46;  // rbp
    /*INVALID_EQUAL_UNDEFINED*/
undefined v49;  // r14
    unsigned long long v50;  // rax
    unsigned int v52;  // ebp
    unsigned long long v53;  // rdi
    unsigned int *v54;  // rbx
    unsigned long long v57;  // rdi
    unsigned long long v58;  // rax

    v13 = v12;
    v1 = v12;
    v7 = v14;
    v49 = (unsigned long long)(unsigned int)sub_404ca0() - v12;
    v15 = &v49[strlen(v49)];
    v0 = v15;
    if (g_6113f0 == 0)
    {
        sub_403ce0();
    }
    v17 = strlen(g_6113f0);
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
                v22 = (unsigned int)sub_404d00();
                if (v19 != 0)
                {
                    rewinddir(v19);
                }
                else
                {
                    v23 = *(v13);
                    *(v13) = 46;
                    *((unsigned long long *)&v2) = v23;
                    v19 = (unsigned int)sub_404b20();
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
                            v29 = v28 == 57;
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
                                *((unsigned long *)&v2) = v29;
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
                                v38 =  amd64g_calculate_condition(0x8, 0x14, Load(addr=stack_base-112, size=8, endness=Iend_LE), 0x0, cc_ndep);
                                if (rsi == 0 && !(INVALID_IR))
                                {
                                    *((unsigned long *)&v4) = v4 * 2;
                                }
                                if (INVALID_IR || rsi != 0)
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
                        else
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
                    memcpy(v43 + v0, g_6113f0, *((long long *)&v10));
                    v7 = 1;
                }
                if (v46 == 3 || v19 != 0 || v19 != 0)
                {
                    v53 = v43;
                    v43 = 0;
                    free(v53);
                    *(__errno_location()) = 12;
                }
                sub_403c10();
            }
            else
            {
                memcpy(v43 + v0, g_6113f0, *((long long *)&v10));
            }
            if (v45 != 0)
            {
                if (v19 != 0)
                {
                    v45 = dirfd(v19);
                }
                if (v19 == 0 || (unsigned int)v45 < 0)
                {
                    v49 = 0;
                }
                v50 = sub_407ea0();
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
            if (v45 == 0 || v50 == 0)
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

int sub_40621a()
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
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_404fe0;
extern int512_t g_404ff0;
extern int512_t g_40cfa0;

int sub_4057d0()
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
            v4 = sub_405150();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_40cfa0;
            v3 = sub_405150();
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
        if ((v2 == 0 || v4 != 0) && (((char)(INVALID_IR) & 1) == 0 || v2 != 0) && (((char)(INVALID_IR) & 1) == 0 || v2->field_10 != 0) && (v2 != 0 || v3 != 0) && (v2 != 0 || ((char)(INVALID_IR) & 1) != 0) && (v2->field_10 != 0 || ((char)(INVALID_IR) & 1) != 0))
        {
            v13 = (unsigned int)sub_404f40();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_404fe0 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_404ff0 : v17);
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

int sub_40ae10()
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
            sub_40b300();
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
        if (v13 < v7 && v13 != v7 || v13 >= v7 && v13 != v7)
        {
            v15 = (0 | v13 - v7) % v6 >> 64;
            v16 = (0 | v13 - v7) % v6;
            v17 = v13 - ((0 | v13 - v7) % v6 >> 64);
            v18 = (0 | v14) % v6;
            v19 = (0 | v14) % v6 >> 64;
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

extern unsigned int g_40e1cf;
extern unsigned int g_611300;

int sub_408ca0()
{
    dcgettext(0x0, 0x40e1cf, 0x5);
    error(g_611300, 0x0, "%s");
}

// int sub_408aa0()

extern int512_t g_40d026;
extern int512_t g_40d02a;

int sub_406300()
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
        v3 = sub_40a830();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40d026 : 4247601);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40d02a : 4247597);
            }
        }
    }
    if (unknown)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if ((v3[1] & 223) == 84 && v3[4] == 56 && v1 == v2 && v3[5] == 0 && v3[3] == 45 && (v3[0] & 223) == 85 && (v3[2] & 223) == 70 || v3[4] == 48 && (v3[1] & 223) == 66 && v1 == v2 && v3[3] == 56 && v4 == 71 && v3[2] == 49 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

int sub_407932()
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

int sub_408c00()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_408a50();
}

int sub_408430()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx
    unsigned int v3;  // ecx

    v0 = v2;
    if (v3 <= 2)
    {
        return sub_4082d0();
    }
    sub_4082b0(); /* do not return */
}

// int sub_407e40()

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_2 *field_20;
} struct_1;

extern unsigned int g_40e1e0;
extern unsigned int g_40e200;
extern unsigned int g_40e230;
extern unsigned int g_40e250;
extern unsigned int g_40e280;
extern unsigned long long stderr;

int sub_409540()
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
    char *v11;  // r14
    char *v12;  // rdx
    unsigned long v13;  // r8
    char *v14;  // rbp
    unsigned long long v15;  // rax
    unsigned long long v16;  // r13
    unsigned long long v17;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // r12
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v37;  // rbx
    unsigned long long v38;  // rbp
    unsigned long long v39;  // r12
    unsigned int *v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // r14

    v11 = v9->field_20;
    v3 = v12;
    v2 = v13;
    v14 = v9->field_20;
    *((struct struct_2 *)&v5) = *(v9->field_20);
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
    if (*(v9->field_20) == 61 || *(v9->field_20) == 0)
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
            if (v22 != v16 || v21 != 0)
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
                            else if (*((int *)(v18 + 24)) != *((int *)(v26 + 24)) || *((long long *)(v18 + 16)) != *((long long *)(v26 + 16)) || *((int *)(v18 + 8)) != *((int *)(v26 + 8)) || v28 != 0)
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
                    if (v4 != 0 || v1 != 0)
                    {
                        if (v10 != 0)
                        {
                            if (v4 != 0)
                            {
                                dcgettext(0x0, 0x40e1e0, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40e200, 0x5);
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
            if ((*(v18) == 0 || v22 == v16) && (*(v18) == 0 || v21 == 0) && (v4 == 0 || v22 == v16) && (v4 == 0 || v21 == 0) && (v22 == v16 || v1 == 0) && (v21 == 0 || v1 == 0))
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
                                dcgettext(0x0, 0x40e280, 0x5);
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
                            dcgettext(0x0, 0x40e250, 0x5);
                            __fprintf_chk();
                        }
                        v9->field_8 = *((int *)(v18 + 24));
                        v42 = 63;
                    }
                }
                if ((unsigned int)((unsigned long long)v9->field_0 + 1) < v24 && *(v14) == 0 || *(v14) == 0 && v31 != 1 || v31 != 0 && *(v14) != 0)
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
        if (unknown)
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
        if ((v34 != 0 || *((long long *)v17) != 0) && (*((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v17) != 0))
        {
            return v42;
        }
    }
    if (v28 == 0 && *((long long *)v17) == 0 || v34 == 0 && v28 != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x40e230, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern int512_t g_6112e8;

// int sub_40bb40()

extern char g_40af90;

int sub_40aff0()
{
    void tmp_2;  // tmp #2
    void tmp_27;  // tmp #27
    unsigned long long v0;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x48]
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbp
    unsigned long v5;  // rdi
    unsigned long long *v6;  // rbx
    void *v7;  // r13
    unsigned short v8;  // dx
    unsigned int v9;  // r15d
    unsigned long long v10;  // r14
    unsigned long long v12[2];  // rbx
    unsigned long long v13;  // rbx
    unsigned long long v15;  // rbp
    unsigned long long v17;  // r15
    unsigned long v18;  // rbp
    char *v20;  // rdi
    char *v21;  // rsi
    unsigned long long v22;  // rcx
    unsigned long v23;  // d
    unsigned long long v24;  // r14
    char *v26;  // rsi
    unsigned long long v27;  // rcx
    char *v28;  // rdi
    unsigned long v29;  // rbp
    unsigned long long v31;  // rsi
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rbp
    unsigned long v36;  // r14
    unsigned long long v38;  // rsi
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rbp
    unsigned long long v44;  // rsi
    unsigned long long v46;  // rax
    unsigned long long v47;  // rdx
    unsigned long long v49;  // rax

    if (v3 != 0)
    {
        v4 = v3;
        if (v5 != 0)
        {
            v7 = (unsigned long long)(unsigned int)sub_40ba20();
            if (v7 != 0)
            {
                v12[0] = v7;
                v12[1] = &g_40af90;
                v12 = (unsigned long long)(unsigned int)sub_408a50();
                v12[2] = v5;
                setvbuf(v7, &v12[3], 0x0, (v4 <= 0x1000? v4 : 0x1000));
            }
            else
            {
                v13 = 0;
            }
        }
        else
        {
            *(v6) = 0;
            v6 = (unsigned long long)(unsigned int)sub_408a50();
            v6[1] = &g_40af90;
            v6[2] = 0;
            v6[3] = 0;
            v9 = open("/dev/urandom", 0x0, v8);
            if (v9 >= 0)
            {
                v15 = __read_chk(v9, (unsigned int)v6 + 32, (!(rbp <= 0x800)? 0x800 : rbp), 0x1018);
                close(v9);
                if (v15 <= 2047)
                {
                    tmp_2 = v15;
                    tmp_27 = INVALID_IR;
                    v17 = (char *)&v6[4] + (INVALID_IR? 0 : v15);
                    v18 = (INVALID_IR? 0 : v15) + (!(0x800 - (INVALID_IR? 0 : v15) <= 16)? 16 : 0x800 - (INVALID_IR? 0 : v15));
                    *((int *)&v0) = (!(0x800 - (tmp_27? 0 : tmp_2) <= 16)? 16 : 0x800 - (tmp_27? 0 : tmp_2));
                    gettimeofday(&v1, NULL);
                    v20 = v17;
                    v21 = &v1;
                    for (v22 = v0; v22 != 0; v21 = &v21[v23])
                    {
                        v22 -= 1;
                        *(v20) = v1;
                        v20 = &v20[v23];
                    }
                    if (v18 <= 2047)
                    {
                        v24 = (!(0x800 - rbp <= 4)? 4 : 0x800 - rbp);
                        v26 = &v1;
                        v1 = getpid();
                        v27 = v24;
                        v10 = v24 + v18;
                        for (v28 = (char *)&v6[4] + v18; v27 != 0; v26 = &v26[v23])
                        {
                            v27 -= 1;
                            *(v28) = v1;
                            v28 = &v28[v23];
                        }
                    }
                }
            }
            else
            {
                v10 = 20;
                gettimeofday(&v1, NULL);
                *((int128_t *)(v13 + 32)) = *((int128_t *)&v1);
                v1 = getpid();
                *((unsigned int *)(v13 + 48)) = v1;
            }
            if (v9 < 0 || v10 <= 2047 && v18 <= 2047 && v15 <= 2047)
            {
                v29 = (!(0x800 - r14 <= 4)? 4 : 0x800 - r14);
                v31 = (char *)&v6[4] + v10;
                v1 = getppid();
                if ((unsigned int)v29 != 0)
                {
                    v33 = 0;
                    do
                    {
                        v34 = v33;
                        v33 = (unsigned int)v33 + 1;
                        *((char *)(v31 + v34)) = v1;
                    }
                    while ((unsigned int)v33 < (unsigned int)v29);
                }
                v35 = v29 + v10;
                if (v35 <= 2047)
                {
                    v36 = (!(0x800 - rbp <= 4)? 4 : 0x800 - rbp);
                    v38 = (char *)&v6[4] + v35;
                    v1 = getuid();
                    if ((unsigned int)v36 != 0)
                    {
                        v40 = 0;
                        do
                        {
                            v41 = v40;
                            v40 = (unsigned int)v40 + 1;
                            *((char *)(v38 + v41)) = v1;
                        }
                        while ((unsigned int)v40 < (unsigned int)v36);
                    }
                    v42 = v35 + v36;
                    if (v42 <= 2047)
                    {
                        v44 = (char *)&v6[4] + v42;
                        v1 = getgid();
                        if ((unsigned int)(!(0x800 - v42 <= 4)? 4 : 0x800 - v42) != 0)
                        {
                            v46 = 0;
                            do
                            {
                                v47 = v46;
                                v46 = (unsigned int)v46 + 1;
                                *((char *)(v44 + v47)) = v1;
                            }
                            while ((unsigned int)v46 < (!(0x800 - v42 <= 4)? 4 : 0x800 - v42));
                        }
                    }
                }
            }
            sub_40b760();
        }
    }
    else
    {
        v13 = (unsigned int)sub_408a50();
        *((long long *)v13) = 0;
        *((char **)(v13 + 8)) = &g_40af90;
        *((long long *)(v13 + 16)) = 0;
    }
    v49 = v13;
    return v49;
}

// int sub_407e10()

int sub_404240()
{
    unsigned long long v1;  // rax

    v1 = sub_403d40();
    if (v1 != 0)
    {
        return v1;
    }
    sub_408ca0(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4053a0()
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

int sub_406200()
{
    return 0;
}

int sub_408a50()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_408ca0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_40a1d0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_409b60();
}

extern char *g_6113f0;

int sub_403ce0()
{
    unsigned long long v1;  // rdi
    char *v2;  // rbx
    unsigned long long v3;  // rax

    v2 = v1;
    if (v1 == 0)
    {
        v3 = getenv("SIMPLE_BACKUP_SUFFI");
        v2 = v3;
    }
    if ((v3 != 0 || v1 != 0) && *(v2) != 0)
    {
        v3 = sub_404ca0();
        if (v3 == v2)
        {
            g_6113f0 = v2;
            return v3;
        }
    }
    if (*(v2) == 0 || v3 != v2 || v3 == 0 && v1 == 0)
    {
        g_6113f0 = "~";
        return v3;
    }
}

extern unsigned long long stdout;

int sub_403990()
{
    unsigned long long *v1;  // rsi
    char *v2;  // rdi
    unsigned long long *v5;  // rdx
    unsigned long long *v7;  // rdi
    unsigned long long v8;  // rbx

    if (*(v1) != 0)
    {
        v8 = strlen(v7);
        if (*(v5) <= v8)
        {
            return 1;
        }
        memcpy(*(v7), v7, v8 + 1);
        *(v1) = *(v1) + v8;
        *(v5) = *(v5) - v8;
        return 0;
    }
    fputs_unlocked(v2, stdout);
    return 0;
}

int sub_40a190()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40a130();
}

int sub_408220()
{
    unsigned int v1;  // ebx
    unsigned int *v2;  // rax
    unsigned int v4;  // eax
    char v5;  // al

    v1 = __lxstat();
    v2 = __errno_location();
    if (v1 != 0 && *(v2) != 75)
    {
        v4 = 0;
        v5 = *(v2) != 2;
        return 0 - rax;
    }
    if (*(v2) == 75 || v1 == 0)
    {
        *(v2) = 17;
        return -18446744069414584321;
    }
}

// int sub_40bac0()

int sub_405770()
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

int sub_408460()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx
    unsigned int v3;  // ecx

    v0 = v2;
    if (v3 <= 2)
    {
        return sub_4082d0();
    }
    sub_4082b0(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_611358;
extern uint128_t g_611360;
extern unsigned int g_611370;
extern int512_t g_611420;

int sub_407630()
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
    v17 = g_611358;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_611370 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_611358 != 6361952)
            {
                v16 = sub_408ab0();
                g_611358 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_408ab0();
                v17 = v15;
                g_611358 = v15;
                *(v15) = g_611360;
            }
            memset(&v17[(long long)(int)g_611370], 0x0, (int)((unsigned int)v13 + 1 - g_611370) * 16);
            g_611370 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_408ca0(); /* do not return */
        }
    }
    if (g_611370 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_406400();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6362144)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_408a50();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_406400();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
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

extern unsigned int g_40e2a8;
extern unsigned int g_40e2ec;

int sub_409b60()
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
    char v30[2];  // rcx
    unsigned long long *v31;  // rsi
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v42;  // rdx
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
    unsigned long long v56;  // rdx
    unsigned int v57;  // eax
    char v58[2];  // rax
    unsigned long long v59;  // r14
    char v60;  // r14b
    unsigned long long v61;  // r14
    char v62;  // r14b
    unsigned long long v63;  // rax

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
        if (v19[0] == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || ((char)(v18 - 43) & 253) == 0 && v8->field_20 == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        sub_409460();
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
                            v27 = (char *)v31 + 1;
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
                            sub_409460();
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
    if ((v13 > 0 && v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || v13 == (unsigned int)v26 && v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        v0->field_0 = v42;
    }
    if ((v13 > 0 && v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || v13 > 0 && v13 != (unsigned int)v26 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || v19[0] == 0) && (v19 == 0 || v19[0] == 0 || (unsigned int)v17 != 0) && (v19 == 0 || v19[0] == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_409540();
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
        *((char *[2])&v6[0]) = v19;
        v0->field_20 = &v19[1];
        v45 = v19[0];
        v7 = &v19[1];
        v5 = v19[0];
        v51 = strchr(v50, v19[0]);
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
                        dcgettext(0x0, 0x40e2a8, 0x5);
                        __fprintf_chk();
                    }
                    v0->field_8 = v45;
                    v59 = 0;
                    v60 = *(v50) != 58;
                    v45 = r14 * 5 + 58;
                }
            }
        }
    }
    if (unknown)
    {
        if ((unsigned int)v49 != 0)
        {
            dcgettext(0x0, 0x40e2ec, 0x5);
            __fprintf_chk();
        }
        v0->field_8 = v45;
        v45 = 63;
    }
    if (unknown)
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
            else if (v46 != v8->field_0)
            {
                v58 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x40e2a8, 0x5);
                    __fprintf_chk();
                }
                v0->field_8 = v45;
                v61 = 0;
                v62 = *(v50) != 58;
                v45 = r14 * 5 + 58;
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
        v45 = (unsigned int)sub_409540();
    }
    v63 = v45;
    return v63;
}

int sub_40ada0()
{
    unsigned long long v1[3];  // rax
    unsigned long v2;  // rdi

    v1 = sub_408a50();
    v1[0] = v2;
    v1[2] = 0;
    v1[1] = 0;
    return v1;
}

extern unsigned int g_40e30c;
extern unsigned int g_40e327;

int sub_40a4d0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x40e30c, 0x5);
    }
    dcgettext(0x0, 0x40e327, 0x5);
    sub_407e60();
    sub_407b50();
}

int sub_404e60()
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
    v4 = (unsigned int)sub_404ca0();
    v5 = (unsigned int)sub_404d00();
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

// int sub_407e60()

int sub_404260()
{
    char *v1;  // rsi

    if (*(v1) == 0 || v1 == 0)
    {
        return 2;
    }
}

int sub_405960()
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

extern int512_t g_611520;

int sub_407810()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_611520 : v1));
}

int sub_40b760()
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

extern unsigned long long g_611408;

int sub_404a60()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_611408 = v1;
    return v2;
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

double sub_405030()
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
        v7 = sub_405000();
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
        if ((v15->field_8 == 0 || v10 == 0 || (char)v20 == 0) && (v15->field_8 == 0 || (char)v20 == 0 || v8 != v1) && (v8 == v1 || v15->field_8 != 0 || v10 != 0))
        {
            return v21;
        }
    }
    if (*(v7) == 0 || v15->field_8 == 0 && v10 == 0 && v8 != v1 || v10 == 0 && v1 != *(v11) && v8 != v1)
    {
        return v18;
    }
}

// int sub_408280()

// int sub_407b10()

typedef struct struct_0 {
    unsigned long long field_0;
    char field_8;
} struct_0;

int sub_4036c0()
{
    unsigned long v1;  // rdi
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rax
    struct v7;  // rax
    unsigned long long v8;  // rax

    v4 = v3;
    v5 = (unsigned int)sub_404ca0() - v1;
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
        v7->field_8 = 0x6e6567002e2e2f00;
        v8 = v4;
    }
    return v8;
}

// int sub_407e30()

int sub_408ccc()
{
    abort(); /* do not return */
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_4077d0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_408c50();
}

int sub_40a670()
{
    unsigned long long v1;  // rax

    v1 = sub_40a3b0();
    if (INVALID_IR)
    {
        sub_40a4d0();
        sub_40a550();
        r9();
        v1 = -1;
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_405320()
{
    struct v1;  // rdi

    return v1->field_10;
}

int sub_407d00()
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
    return sub_407630();
}

int sub_40ae00()
{
    unsigned long long *v1;  // rdi

    return *(v1);
}

