#include "decompile_angr.h"
int sub_4091c0()
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
        return sub_408d60();
    }
}

int sub_40880b()
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
    v7 = (unsigned int)sub_4072b0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_409300();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_4072b0();
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

int sub_40c640() { crash_skku;
}
int sub_405920() { crash_skku;
}
int sub_4089c0()
{
}

extern unsigned int g_614298;
extern char g_6142b4;
extern unsigned long long g_614478;

int sub_4026b0()
{
    unsigned long long v1;  // rax
    unsigned int v2[13];  // rdx

    v1 = g_614298;
    v2 = g_614478;
    if (g_614298 != 0)
    {
        v1 = 0;
        do
        {
            if (v2[2] <= 1 || v2[6] > 0 && g_6142b4 != 0 && v2[5 + 1] > 0)
            {
                v1 = (unsigned int)v1 + 1;
            }
            v2 = &v2[8];
        }
        while (v2 != ((unsigned long long)g_614298 << 6) + g_614478);
    }
    return v1;
}

extern int512_t g_6145a0;

int sub_408770()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6145a0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_4072b0();
}

int sub_4088e0()
{
}

int sub_40abe0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40ac20();
    }
}

int sub_40be60()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rax

    if (v1 == 1)
    {
        return v2;
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_614490;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_407110()
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
        g_614490 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern unsigned long long g_614290;
extern unsigned long long g_614418;

int sub_402820()
{
    char *v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v4;  // rax
    char *v5;  // rdi
    unsigned long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax

    v2 = -1;
    v4 = sub_40a5e0();
    if ((v4 & -3) == 0)
    {
        v5 = v0;
        if (v0 != v6 && v1 != 0)
        {
            v7 = *(v5);
            if (*(v5) == 58)
            {
                v8 = sub_40a5e0();
                if (v8 == 0 && v2 >= v1 && v0 != &v0[1])
                {
                    v7 = *(v0);
                }
            }
            if ((v8 == 0 || *(v5) != 58) && (v2 >= v1 || *(v5) != 58) && (*(v5) != 58 || v0 != &v0[1]) && v7 == 0)
            {
                g_614418 = v1;
                g_614290 = v2;
                return 1;
            }
        }
        if ((v8 == 0 || v1 == 0 || v0 == v6 || *(v5) != 58) && (v1 == 0 || v0 == v6 || *(v5) == 58 || v7 != 0) && (v1 == 0 || v2 < v1 || v0 == v6 || v0 == &v0[1] || v7 != 0))
        {
            return 0;
        }
    }
    if ((v4 & -3) != 0 || *(v5) == 58 && v8 != 0 && v1 != 0 && v0 != v6)
    {
        sub_40a550(); /* do not return */
    }
}

int sub_408ce0()
{
}

int sub_408990()
{
}

int sub_409590()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v1;  // [bp+0x8]
    unsigned long v3;  // rdx
    unsigned int v4;  // ebp
    unsigned long v5;  // rcx
    unsigned int *v6;  // r14

    if (rbp<4> == 0)
    {
        if (v0 >= v3 && v0 <= v5)
        {
            return v0;
        }
        if (v0 < v3 || v0 > v5)
        {
            v6 = __errno_location();
            if (v0 <= 1073741823)
            {
                *(v6) = (v0 <= -1073741825? 75 : 34);
            }
        }
    }
    else
    {
        rbp<4> = sub_4096b0();
        v6 = __errno_location();
        if (v4 != 1 && v4 == 3)
        {
            *(v6) = 0;
        }
    }
    if (v0 < v3 || rbp<4> != 0 || v0 > v5)
    {
        if ((v4 == 1 || rbp<4> == 0) && (rbp<4> != 0 || v0 > 1073741823))
        {
            *(v6) = 75;
        }
        sub_408d30();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: ");
    }
}

extern int512_t g_6145a0;

int sub_4086e0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6145a0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6145a0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

extern unsigned int g_410172;
extern unsigned int g_41019d;
extern unsigned int g_4103d0;

int sub_409280()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x410172, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41019d, 0x5));
    dcgettext(0x0, 0x4103d0, 0x5);
}

int sub_408a70()
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
    return sub_4084e0();
}

int sub_408680()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_409500();
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[37];
    char field_39;
} struct_0;

extern unsigned int g_40ce53;
extern char g_6143e1;
extern unsigned int g_6143e4;
extern char g_614420;
extern char g_614446;
extern unsigned long long stdin;

int sub_403c80()
{
    unsigned long long v1;  // rdi
    unsigned long long v3;  // rsi
    struct_0 *v4;  // rbx
    unsigned long long v5;  // cc_dep1
    unsigned long long v6;  // cc_dep2
    unsigned long v7;  // d
    char *v8;  // rdi
    char *v9;  // rsi
    unsigned long long v10;  // rcx
    unsigned long long v11;  // cc_dep1
    unsigned long long v12;  // rdi
    unsigned long long v14;  // rbp

    v10 = 2;
    v8 = "-";
    v4 = v3;
    v9 = v1;
    while (v10 != 0)
    {
        v10 -= 1;
        v5 = *(v9);
        v6 = *(v8);
        v8 = &v8[v7];
        v9 = &v9[v7];
        break;
    }
    v11 = (v5 > v6) - 0 - (v5 < v6);
    if ((char)v11 == 0)
    {
        g_614446 = 1;
        v4->field_8 = dcgettext(0x0, 0x40ce53, 0x5);
        v4->field_0 = stdin;
    }
    else
    {
        v4->field_8 = v9;
        v12 = (unsigned int)sub_4054b0();
        v4->field_0 = v12;
    }
    if ((char)v11 == 0 && stdin != 0 || (char)v11 != 0 && v12 != 0)
    {
        sub_405480();
        v4->field_10 = 0;
        v4->field_39 = 0;
        g_6143e4 = g_6143e4 + 1;
        return 1;
    }
    if ((char)v11 == 0 && stdin == 0 || v12 == 0 && (char)v11 != 0)
    {
        g_614420 = 1;
        if (g_6143e1 != 0)
        {
            return 0;
        }
        v14 = (unsigned int)sub_408bb0();
        error(0x0, *(__errno_location()), "%s");
        return (unsigned long long)g_6143e1;
    }
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_4055f0()
{
    struct_0 *v1;  // rsi
    char *v2;  // rcx
    char *v3;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rcx

    v2 = &v1->field_14;
    v1->field_14 = 0;
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>)))
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
        v7 = ((unsigned long long)(rdi<8> * 7378697629483820647 >> 64) >> 2) - (rdi<8> >> 63);
        *((unsigned long long *)&v2[-1]) = 48 + (((unsigned long long)(rdi<8> * 7378697629483820647 >> 64) >> 2) - (rdi<8> >> 63)) * 10 - rdi<8>;
        if (((unsigned long long)(rdi<8> * 7378697629483820647 >> 64) >> 2) - (rdi<8> >> 63) == 0)
        {
            break;
        }
        v2 = v3;
    }
    v9 = &v2[-2];
    v2[-1] = 45;
    return v9;
}

int sub_40cd00()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    tzset();
}

extern unsigned int g_40ce17;
extern unsigned int g_40ce2c;
extern int512_t g_40ce63;
extern unsigned int g_6143a0;
extern unsigned long long g_6143a8;
extern unsigned long long g_6143b0;
extern unsigned long long g_614408;
extern unsigned int g_614428;
extern unsigned int g_61442c;
extern char g_614448;

int sub_402ee0()
{
    unsigned long v0;  // [bp-0x168]
    unsigned long v1;  // [bp-0x160]
    unsigned long v2;  // [bp-0x158]
    unsigned long v3;  // [bp-0x150]
    unsigned long v4;  // [bp-0x148]
    char v5;  // [bp-0x138]
    unsigned int v9;  // r9d
    unsigned long long v10;  // rbx

    g_614428 = 0;
    sub_402ca0();
    sub_402d10();
    if (g_614408 != 0)
    {
        __sprintf_chk((unsigned int)&v5, 0x1, 0x114, dcgettext(0x0, 0x40ce2c, 0x5), g_614408, v9);
        v10 = g_6143a0;
        v4 = &v5;
        v3 = " ";
        v2 = ((unsigned int)(v10 - (unsigned int)sub_405850()) < 0? 0 : (unsigned int)(v10 - (unsigned int)sub_405850())) - (unsigned int)((long long)((unsigned int)(v10 - (unsigned int)sub_405850()) < 0? 0 : (unsigned int)(v10 - (unsigned int)sub_405850())) >> 1);
        v1 = g_6143a8;
        v0 = " ";
        g_614448 = 0;
        g_614428 = 0;
        return __printf_chk(0x1, "\n\n%*s%s%*s%s%*s%s\n\n\n", g_61442c, &g_40ce63, (unsigned int)g_6143b0);
    }
    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40ce17, 0x5));
}

extern uint128_t g_6145a0;
extern uint128_t g_6145b0;
extern uint128_t g_6145c0;
extern unsigned long long g_6145d0;

int sub_408c20()
{
    unsigned int|void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6145a0;
    *((uint128_t *)&v1) = g_6145b0;
    *((uint128_t *)&v2) = g_6145c0;
    v4 = g_6145d0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4084e0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_4089e0()
{
}

int sub_40c050() { crash_skku;
}
int sub_408af0()
{
}

extern unsigned int g_614298;
extern char g_6142b5;
extern char g_6143d0;
extern unsigned int g_6143d4;
extern unsigned int g_6143dc;
extern char g_6143e0;
extern unsigned int g_614428;
extern unsigned int g_61442c;
extern unsigned int g_614430;
extern char g_614448;
extern unsigned long long g_614450;
extern unsigned long long g_614458;
extern unsigned long long g_614470;
extern unsigned int g_614478[13];

int sub_403280()
{
    unsigned int v1[14];  // rdi
    unsigned int v2[14];  // r13
    unsigned int *v3;  // r12
    unsigned int v5[13];  // rax
    unsigned long long v8;  // rbx
    unsigned int v10;  // eax

    v2 = v1;
    v3 = (long long)(int)v1[5];
    g_6143d0 = 1;
    v1[5] = (unsigned int)v3 + 1;
    v8 = *((int *)(g_614458 + v3 * 4)) + g_614470;
    if (g_614448 != 0)
    {
        sub_402ee0();
    }
    if (v1[2] == 1)
    {
        if (g_614298 > 0)
        {
            v5 = g_614478;
            do
            {
                v5[2] = 2;
                v5 = &v5[8];
            }
            while (v5 != &g_614478[8 * (unsigned long long)g_614298]);
        }
        if (g_614478[6] <= 0 && g_6142b5 == 0)
        {
            g_6143d0 = 0;
        }
    }
    if (g_614478[6] > 0 || v1[2] != 1)
    {
        if (g_6143dc < g_6143d4)
        {
            sub_402ca0();
            g_6143d4 = 0;
        }
        if (g_6143e0 != 0)
        {
            sub_402dd0();
        }
        if (*((int *)(g_614458 + (v3 << 2))) + g_614470 != g_614470 + *((int *)(g_614458 + (v3 << 2) + 4)))
        {
            while (true)
            {
                v8 += 1;
                sub_4031e0();
                if (g_614470 + *((int *)(g_614458 + (v3 << 2) + 4)) == v8)
                {
                    break;
                }
            }
        }
        if (g_614430 == 0)
        {
            v10 = v2[6 + 1] - g_6143dc;
            g_614428 = *((int *)(g_614450 + v3 * 4)) + v2[6 + 1];
            if (v10 == g_61442c)
            {
                g_614428 = *((int *)(g_614450 + (int)v1[5] * 4)) + v1[6 + 1] - g_6143dc;
                return 1;
            }
        }
    }
    if (g_614430 != 0 || v10 != g_61442c || g_614478[6] <= 0 && v1[2] == 1)
    {
        return 1;
    }
}

extern unsigned long long g_40ce63;

int sub_40ba50()
{
    char v0;  // [bp-0x1c]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long v4;  // rdx
    unsigned long long|char * v5;  // rbp
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
        v5 = &g_40ce63;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_405590() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_40bf30()
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
        v12 = (unsigned int)sub_40bdb0();
        if (v12 != 0)
        {
            v0 = (unsigned int)sub_40cd00();
            if (v0 == -1)
            {
                v13 = localtime_r((unsigned int)&v0, (unsigned int)&v1);
            }
            if ((v0 == -1 && v13 != 0 && (v9[4] < 0 || v9[4] == 0 == v7 == 0 || v7 < 0) && (v9[2] ^ v5) == 0 && (v9[2 + 1] ^ v6) == 0 && (v9[1 + 1] ^ v4) == 0 && (v9[1] ^ v3) == 0 && (v9[1] ^ v2) == 0 && (v9[0] ^ *((int *)&v1)) == 0 || v0 != -1) && sub_40bc30() == 0)
            {
                v0 = -1;
            }
            if (v12 != 1)
            {
                v15 = sub_40bb50();
            }
        }
        if (v12 == 0 || v15 == 0 && v12 != 1)
        {
            v16 = -1;
        }
        if (v12 == 1 || v15 != 0 && v12 != 0)
        {
            v16 = v0;
        }
        return v16;
    }
    return sub_40c050();
}

int sub_40ba30()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40b380();
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_614318;
extern uint128_t g_614320;
extern unsigned int g_614330;
extern int512_t g_6144a0;

int sub_4084e0()
{
    unsigned long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x50]
    unsigned long long|unsigned long v4;  // [bp-0x48]
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
    v17 = g_614318;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_614330 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_614318 != 6374176)
            {
                v16 = sub_409360();
                g_614318 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_409360();
                v17 = v15;
                g_614318 = v15;
                *(v15) = g_614320;
            }
            memset(&v17[(long long)(int)g_614330], 0x0, (int)((unsigned int)v13 + 1 - g_614330) * 16);
            g_614330 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_409550(); /* do not return */
        }
    }
    if (g_614330 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_4072b0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6374560)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_409300();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_4072b0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
} struct_0;

extern unsigned int g_614298;
extern char g_6142b4;
extern unsigned int g_614410;
extern struct_0 *g_614478;

int sub_402710()
{
    unsigned long long|struct_0 * v1;  // rax
    unsigned int|unsigned long v2;  // rcx
    unsigned long long v3;  // rsi

    v1 = g_614298;
    if (g_614298 != 0)
    {
        v2 = g_614410;
        v1 = g_614478;
        v3 = 0;
        do
        {
            if (v1->field_10 == 2)
            {
                v1->field_10 = 0;
                v2 += 1;
                v3 = 1;
            }
            v1 = &v1[3].padding_0[4];
        }
        while (v1 != 64 * g_614298 + (char *)g_614478);
        if (v3 != 0)
        {
            *((unsigned long *)&g_614410) = v2;
        }
    }
    if (g_6142b4 != 0)
    {
        v1 = 0;
        v1 = (char)(g_614478->field_10 != 3);
        g_614410 = rax<8>;
    }
    return v1;
}

int sub_405850()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_409530()
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

int sub_409160()
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
    return sub_408d60();
}

int sub_408c90()
{
}

extern unsigned long long g_613e30;

int sub_40cda8()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_613e30;
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

extern unsigned int g_614334;
extern unsigned int g_614338;
extern unsigned int g_61433c;
extern unsigned int g_6145e0;
extern unsigned int g_6145e4;
extern unsigned int g_6145e8;
extern unsigned long long g_6145f0;
extern unsigned long long g_614630;

int sub_40b950()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_6145e0 = g_61433c;
    g_6145e4 = g_614338;
    v1 = (unsigned int)v2;
    v0 = &g_6145e0;
    g_61433c = g_6145e0;
    g_614630 = g_6145f0;
    g_614334 = g_6145e8;
    return sub_40b380();
}

int sub_40a5b3()
{
    abort(); /* do not return */
}

int sub_40bb20()
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

extern unsigned int g_40cedc;
extern unsigned int g_40d0a0;
extern unsigned int g_40d0c8;
extern unsigned int g_40d0f0;
extern unsigned int g_40d120;
extern unsigned int g_40d158;
extern unsigned int g_40d1a8;
extern unsigned int g_40d2f8;
extern unsigned int g_40d408;
extern unsigned int g_40d598;
extern unsigned int g_40d748;
extern unsigned int g_40d828;
extern unsigned int g_40d8b8;
extern unsigned int g_40da18;
extern unsigned int g_40db18;
extern unsigned int g_40dc60;
extern unsigned int g_40dd50;
extern unsigned int g_40ddb8;
extern unsigned int g_40df50;
extern unsigned int g_40e028;
extern unsigned int g_40e058;
extern unsigned int g_40e0b8;
extern unsigned int g_40e100;
extern unsigned int g_40e120;
extern unsigned long long g_614490;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_404de0()
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
    unsigned long long v40[2];  // rax
    char *v41;  // rdi
    char *v42;  // rsi
    unsigned long long v43;  // rcx
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep2
    unsigned long v46;  // d
    char *v50;  // rax
    char *v51;  // rax
    unsigned long long v52;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40d0a0, 0x5), g_614490);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d0c8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d0f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d120, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d158, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d1a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d2f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d408, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d598, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d748, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d828, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d8b8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40da18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40db18, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dc60, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40dd50, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40ddb8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40df50, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e028, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40e058, 0x5), stdout);
        v0 = "[";
        v40 = &v0;
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
            v40 = &v2;
            v41 = v2;
            if (v2 == 0)
            {
                break;
            }
            v42 = "pr";
            v43 = 3;
            if ((v44 > v45) - 0 - (v44 < v45) == 0)
            {
                break;
            }
            while (v43 != 0)
            {
                v43 -= 1;
                v44 = *(v42);
                v45 = *(v41);
                v41 = &v41[v46];
                v42 = &v42[v46];
                break;
            }
        }
        if (v40[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40cedc, 0x5));
            v51 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40cedc, 0x5));
            v50 = setlocale(0x5, 0x0);
            if (v50 != 0)
            {
                v52 = strncmp(v50, "en_", 0x3);
            }
            if (v50 == 0 || v52 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e100, 0x5));
            }
        }
        if ((v40[1] == 0 || v51 != 0) && (v40[1] == 0 || strncmp(v51, "en_", 0x3) != 0) && (v40[1] != 0 || v50 != 0) && (v40[1] != 0 || v52 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e0b8, 0x5));
        }
        if (v40[1] != 0 || v50 != 0 && v52 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e100, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40e120, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned int g_40ce0f;
extern unsigned int g_6142ac;
extern char g_614380;
extern unsigned int g_6143a0;
extern unsigned long long g_6143a8;
extern unsigned long long g_6143b0;
extern unsigned long long g_6143c8;

int sub_402ab0()
{
    unsigned long|void v0;  // [bp-0x128]
    unsigned long v1;  // [bp-0x120]
    char v2;  // [bp-0xb8]
    unsigned long v3;  // [bp-0x60]
    unsigned long v4;  // [bp-0x58]
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi
    unsigned long long v10;  // cc_dep1
    unsigned long long v11;  // cc_dep2
    unsigned long v12;  // d
    char *v13;  // rdi
    char *v14;  // rsi
    unsigned long long v15;  // cc_dep1
    unsigned long long v16;  // r12
    unsigned long long v17;  // rax
    unsigned long long v18;  // r14
    unsigned long long v21;  // rbp
    unsigned long long v22;  // r13
    unsigned long long v24;  // rax
    unsigned long long v26;  // rax

    v6 = 2;
    v16 = v7;
    v13 = "-";
    v14 = v8;
    while (v6 != 0)
    {
        v6 -= 1;
        v10 = *(v14);
        v11 = *(v13);
        v13 = &v13[v12];
        v14 = &v14[v12];
        break;
    }
    v15 = (v10 > v11) - 0 - (v10 < v11);
    if (!((char)v15 != 0))
    {
        v16 = -18446744069414584321;
    }
    else if ((unsigned int)v16 >= 0)
    {
        v17 = __fxstat(0x1, v16, (unsigned int)&v2);
        if (v17 == 0)
        {
            v18 = v4;
            v1 = v4;
            v0 = v3;
        }
    }
    if ((char)v15 == 0 || (unsigned int)v16 < 0 || v17 != 0)
    {
        if (*((long long *)&g_614380) == 0)
        {
            sub_405550();
        }
        *((int128_t *)&v0) = *((int128_t *)&g_614380);
        v18 = (long long)(&v0)[8];
    }
    if (sub_40be80() != 0)
    {
        v22 = (unsigned long long)(unsigned int)sub_4070f0() + 1;
        v21 = (unsigned int)sub_409300();
        sub_4070f0();
    }
    else
    {
        v21 = (unsigned int)sub_409300();
        __sprintf_chk(v21, 0x1, 0x21, 0x40ce0f, sub_4055f0(), v18);
    }
    free(g_6143b0);
    v24 = g_6143c8;
    g_6143b0 = v21;
    if (g_6143c8 == 0)
    {
        v24 = ((char)(v16 >> 31 & 1 ^ 1)? v14 : 4247139);
    }
    g_6143a8 = v24;
    v26 = sub_405850();
    g_6143a0 = g_6142ac - sub_405850() - v26;
    return v26;
}

int sub_40568c()
{
    char v0;  // [bp-0x44]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    unsigned long long v4;  // [bp-0x20]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    unsigned long long v9;  // r15
    unsigned long long v10;  // r14
    unsigned long long v11;  // r13
    unsigned long long v12;  // r12
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rdi
    unsigned long long v17;  // r12
    unsigned long v18;  // rsi
    unsigned long v19;  // rdx
    unsigned int v20;  // r15d
    unsigned short *v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rbp
    unsigned long long v27;  // rax
    unsigned long long v29;  // rax
    char *v30;  // rbx
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rbx
    unsigned long long v35;  // r12
    unsigned long long v36;  // r13
    unsigned long long v37;  // r14
    unsigned long long v38;  // r15

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v3 = stack_base + 0;
    v2 = v13;
    v30 = v14;
    if ((unsigned long long)__ctype_get_mb_cur_max() > 1)
    {
        v17 = 0;
        if (v14 < v14 + v18)
        {
            while (true)
            {
                v22 = *(v30);
                if (*(v30) <= 63)
                {
                    if (v22 < 37)
                    {
                        v23 = (unsigned int)v22 - 32;
                    }
                }
                else
                {
                    if (v22 >= 65 && v22 > 95)
                    {
                        v24 = (unsigned int)v22 - 97;
                    }
                }
                if ((v22 < 37 || *(v30) > 63) && (v23 > 3 || *(v30) > 63) && (v22 < 65 || *(v30) <= 63 || v22 > 95) && (v22 < 65 || *(v30) <= 63 || v24 > 29))
                {
                    v1 = 0;
                    while (true)
                    {
                        v25 = (unsigned int)sub_40ba50();
                        if (v25 == -1)
                        {
                            if (((char)v19 & 1) == 0)
                            {
                                break;
                            }
                        }
                        else if (v25 != -2)
                        {
                            v27 = wcwidth(*((int *)&v0));
                            if ((unsigned int)v27 < 0)
                            {
                                if (((char)v19 & 2) != 0)
                                {
                                    break;
                                }
                                if (((char)v19 & 2) == 0)
                                {
                                    v29 = iswcntrl(*((int *)&v0));
                                    if (v29 == 0 && (unsigned int)v17 != 2147483647)
                                    {
                                        v17 = (unsigned int)v17 + 1;
                                    }
                                }
                            }
                            else if (2147483647 - (unsigned int)v17 >= (unsigned int)v27)
                            {
                                v17 += v27;
                            }
                            if (((char)v19 & 2) == 0 || (unsigned int)v27 >= 0)
                            {
                                if (((unsigned int)v27 < 0 || 2147483647 - (unsigned int)v17 < (unsigned int)v27) && (v29 == 0 || (unsigned int)v27 >= 0) && ((unsigned int)v17 == 2147483647 || (unsigned int)v27 >= 0))
                                {
                                    v17 = 2147483647;
                                }
                                if (((unsigned int)v27 < 0 || 2147483647 - (unsigned int)v17 >= (unsigned int)v27) && (v29 != 0 || (unsigned int)v27 >= 0 || (unsigned int)v17 != 2147483647))
                                {
                                    v30 = &v30[(v25 == 0? 1 : rbp<8>)];
                                    if (mbsinit((unsigned int)&v1) != 0)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (((char)v19 & 1) != 0)
                            {
                                break;
                            }
                            v17 = (unsigned int)v17 + 1;
                            v30 = v14 + v18;
                        }
                    }
                    if (true)
                    {
                        if (v30 >= v14 + v18)
                        {
                            break;
                        }
                    }
                    else if (v25 == -2 || (unsigned int)v27 < 0 && v25 != -1 || v25 == -1 && ((char)v19 & 1) != 0)
                    {
                        v17 = -18446744069414584321;
                    }
                    else if (v25 == -1)
                    {
                        v30 = &v30[1];
                        v17 = (unsigned int)v17 + 1;
                    }
                    else if ((v29 == 0 || 2147483647 - (unsigned int)v17 < (unsigned int)v27) && ((unsigned int)v17 == 2147483647 || 2147483647 - (unsigned int)v17 < (unsigned int)v27) && (v29 == 0 || (unsigned int)v27 >= 0) && (v29 == 0 || v25 != -1) && (v29 == 0 || v25 != -2) && ((unsigned int)v17 == 2147483647 || (unsigned int)v27 >= 0) && ((unsigned int)v17 == 2147483647 || v25 != -1) && ((unsigned int)v17 == 2147483647 || v25 != -2))
                    {
                        v33 = v17;
                        v34 = v2;
                        v35 = v4;
                        v36 = v5;
                        v37 = v6;
                        v38 = v7;
                        return v33;
                    }
                }
                if (v30 >= v14 + v18 || v23 <= 3 && *(v30) <= 63 || *(v30) <= 63 && v22 >= 37 || v22 <= 95 && v22 >= 65 && *(v30) > 63 || v24 <= 29 && v22 >= 65 && *(v30) > 63)
                {
                    v30 = &v30[1];
                    v17 = (unsigned int)v17 + 1;
                }
            }
            if ((v22 < 37 || *(v30) > 63) && (v23 > 3 || *(v30) > 63) && (v22 < 65 || *(v30) <= 63 || v22 > 95) && (v22 < 65 || *(v30) <= 63 || v24 > 29))
            {
                v17 = -18446744069414584321;
            }
            else
            {
                v33 = v17;
                v34 = v2;
                v35 = v4;
                v36 = v5;
                v37 = v6;
                v38 = v7;
                return v33;
            }
        }
    }
    else
    {
        v17 = 0;
        if (v14 < v14 + v18)
        {
            v17 = 0;
            v20 = (unsigned int)v19 & 2;
            v21 = *((long long *)(unsigned long long)__ctype_b_loc());
            while (true)
            {
                v30 = &v30[1];
                v32 = v21[(unsigned long long)v30[-1]];
                if (((char)(v21[(unsigned long long)v30[-1]] >> 8) & 64) == 0 && v20 != 0)
                {
                    break;
                }
                if (((char)(v21[(unsigned long long)v30[-1]] >> 8) & 64) != 0 || v20 == 0 && (v32 & 2) == 0)
                {
                    if ((unsigned int)v17 == 2147483647)
                    {
                        break;
                    }
                    v17 = (unsigned int)v17 + 1;
                }
            }
            if (((char)(v21[(unsigned long long)v30[-1]] >> 8) & 64) == 0)
            {
                v17 = -18446744069414584321;
            }
            else if (v14 + v18 == v30 || (v32 & 2) == 0 || ((char)(v21[(unsigned long long)v30[-1]] >> 8) & 64) != 0)
            {
                v33 = v17;
                v34 = v2;
                v35 = v4;
                v36 = v5;
                v37 = v6;
                v38 = v7;
                return v33;
            }
        }
    }
    if (v14 < v14 + v18)
    {
        v17 = -18446744069414584321;
    }
    v33 = v17;
    v34 = v2;
    v35 = v4;
    v36 = v5;
    v37 = v6;
    v38 = v7;
    return v33;
}

int sub_4096b0()
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long *v1;  // [bp-0x58]
    char v2;  // [bp-0x49]
    char v3;  // [bp-0x40]
    unsigned long v5;  // rcx
    unsigned int v6;  // edx
    unsigned int v7;  // rsi
    unsigned long long *v8;  // rbx
    unsigned int *v9;  // r13
    unsigned int *v10;  // r13
    char v11[3];  // r15
    unsigned int v12;  // edi
    char *v13;  // r8
    unsigned int v14;  // eax
    unsigned long long v15;  // r13
    unsigned long long|unsigned int|unsigned long v16;  // r12
    unsigned long long v17;  // rbp
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rsi
    char v24;  // sil
    unsigned long long v25;  // rdx
    unsigned long long v26;  // r13
    unsigned long long v27;  // r13
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long v32;  // rax
    unsigned long long v33;  // r9
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rax
    unsigned long long v36;  // r9
    unsigned long long v37;  // rcx
    unsigned long long v38;  // rax
    unsigned long long v39;  // r9
    unsigned long long v40;  // rsi
    unsigned long long v41;  // rax
    unsigned long long v42;  // rcx
    unsigned long long v43;  // rdi
    unsigned long long v44;  // rcx
    unsigned long long v45;  // r9
    unsigned long long|unsigned int v46;  // edi
    unsigned long long|unsigned int|unsigned long v47;  // r10
    unsigned long long v48;  // rcx
    unsigned long long v49;  // r9
    unsigned long long v50;  // rcx
    unsigned long long v51;  // r9
    unsigned long long|unsigned int v52;  // rdi
    unsigned long long v53;  // rcx
    unsigned long long|unsigned int v54;  // rdi
    unsigned long long|unsigned int v55;  // rdi
    unsigned long v56;  // rax
    unsigned int v57;  // cc_dep1
    unsigned int v58;  // cc_dep1
    unsigned long long v59;  // cc_dep1
    unsigned int v60;  // cc_dep1
    unsigned long long v61;  // cc_dep1
    unsigned long long v62;  // cc_dep1
    char *v63;  // rsi
    unsigned long v64;  // rax

    v1 = v5;
    if (v6 <= 36)
    {
        v8 = (v7 == 0? &v3 : v7);
        *(v9) = 0;
        v9 = __errno_location();
        v11 = *(v8);
        v17 = __strtol_internal(v12, v7, v6, 0x0);
        if (*(v8) != v46)
        {
            v14 = *(v10);
            if (*(v10) == 0)
            {
                v16 = 0;
            }
            else
            {
                v16 = 4;
                if (v14 == 34)
                {
                    v16 = 1;
                }
            }
            if ((v14 == 34 || *(v10) == 0) && v13 != 0)
            {
                v15 = v11[0];
                if (v11[0] != 0)
                {
                    v19 = strchr(v13, (char)*((char *)*((long long *)(v7 == 0? &v3 : v7))));
                }
            }
        }
        else
        {
            if (v13 != 0)
            {
                v15 = v11[0];
                v16 = 4;
                if (v11[0] != 0)
                {
                    v17 = 1;
                    v16 = 0;
                    v18 = strchr(v13, (char)*((char *)*((long long *)(v7 == 0? &v3 : v7))));
                }
            }
            if ((v13 == 0 || v18 == 0) && (v13 == 0 || v11[0] != 0))
            {
                v16 = 4;
            }
        }
        if (*(v8) == v46 && v13 != 0 && v11[0] != 0 && v18 != 0 || v13 != 0 && v11[0] != 0 && *(v8) != v46 && (v14 == 34 || *(v10) == 0) && v19 != 0)
        {
            v20 = v15 - 69;
            if ((v15 - 69 & 255) <= 47)
            {
                *((unsigned long long *)&v2) = v20;
                v0 = 142129060940101;
                if (((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) != 0)
                {
                    v21 = strchr(v13, 0x30);
                    if (v21 != 0 && v11[1] != 68)
                    {
                        if (*((char *)(*((long long *)(v7 == 0? &v3 : v7)) + 1)) != 105)
                        {
                            v25 = v2;
                            if (*((char *)(*((long long *)(v7 == 0? &v3 : v7)) + 1)) != 66)
                            {
                                /* goto *((long long *)(rdx<8> * 8 + 4261544)); */
                            }
                        }
                        else
                        {
                            v23 = 0;
                            v22 = 0x400;
                            v24 = v11[2] == 66;
                            v40 = rsi<8> * 2 + 1;
                        }
                    }
                }
            }
        }
        if ((*(v8) == v46 && v13 != 0 && v11[0] != 0 && v18 != 0 || v13 != 0 && v11[0] != 0 && *(v8) != v46 && (v14 == 34 || *(v10) == 0) && v19 != 0) && (v15 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) != 0 && v21 == 0 || (*(v8) == v46 && v13 != 0 && v11[0] != 0 && v18 != 0 || v13 != 0 && v11[0] != 0 && *(v8) != v46 && (v14 == 34 || *(v10) == 0) && v19 != 0) && (v15 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) == 0 || (*(v8) == v46 && v13 != 0 && v11[0] != 0 && v18 != 0 || v13 != 0 && v11[0] != 0 && *(v8) != v46 && (v14 == 34 || *(v10) == 0) && v19 != 0) && (v15 - 69 & 255) > 47)
        {
            v40 = 1;
            v22 = 0x400;
        }
        if (...)
        {
            v40 = 2;
            v22 = 1000;
        }
        if (...)
        {
            v26 = (unsigned int)v15 - 66;
            switch (v26)
            {
            case 0:
                if (v17 >= -0x20000000000000 && v17 <= 9007199254740991)
                {
                    v17 *= 0x400;
                    break;
                }
            case 3:
                v34 = v22;
                v35 = (-1 CONCAT 0x8000000000000000) % v22;
                v36 = v35;
            case 5: case 37:
                v37 = v22;
                v38 = (-1 CONCAT 0x8000000000000000) % v22;
                v39 = v38;
                v55 = 3;
                v47 = 0;
                do
                {
                    if (v17 < v39)
                    {
                        v17 = 0x8000000000000000;
                        v47 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v44 >= v17)
                    {
                        v17 = v37 * v17;
                    }
                    else
                    {
                        v17 = 9223372036854775807;
                        v47 = 1;
                    }
                    v62 = v55;
                    v55 -= 1;
                }
                while (v62 != 1);
            case 9: case 41:
                v42 = v22;
                v41 = (-1 CONCAT 0x8000000000000000) % v22;
                if (v17 >= v41)
                {
                    v56 = (0 CONCAT 9223372036854775807) % v42;
                }
            case 11: case 43:
                v42 = v22;
                v28 = (-1 CONCAT 0x8000000000000000) % v22;
                v43 = v28;
                if (v17 >= v43)
                {
                    v56 = (0 CONCAT 9223372036854775807) % v42;
                    if (v17 <= (0 CONCAT 9223372036854775807) % v42)
                    {
                        v17 = v42 * v17;
                        if (v17 >= v43 && v56 >= v17)
                        {
                            v17 = v42 * v17;
                            break;
                        }
                    }
                }
            case 14:
                v44 = v22;
                v29 = (-1 CONCAT 0x8000000000000000) % v22;
                v45 = v29;
            case 18: case 50:
                v50 = v22;
                v31 = (-1 CONCAT 0x8000000000000000) % v22;
                v51 = v31;
                v52 = 4;
                v47 = 0;
                do
                {
                    if (v51 > v17)
                    {
                        v17 = 0x8000000000000000;
                        v47 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v44 >= v17)
                    {
                        v17 = v50 * v17;
                    }
                    else
                    {
                        v17 = 9223372036854775807;
                        v47 = 1;
                    }
                    v59 = v52;
                    v52 -= 1;
                }
                while (v59 != 1);
            case 23:
                v48 = v22;
                v30 = (-1 CONCAT 0x8000000000000000) % v22;
                v49 = v30;
                v46 = 8;
                v47 = 0;
                do
                {
                    if (v49 > v17)
                    {
                        v17 = 0x8000000000000000;
                        v47 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v44 >= v17)
                    {
                        v17 = v48 * v17;
                    }
                    else
                    {
                        v17 = 9223372036854775807;
                        v47 = 1;
                    }
                    v58 = v46;
                    v46 = (unsigned long long)v46 - 1;
                }
                while (v58 != 1);
            case 24:
                v53 = v22;
                v32 = (-1 CONCAT 0x8000000000000000) % v22;
                v33 = v32;
                v46 = 7;
                v47 = 0;
                do
                {
                    if (v33 > v17)
                    {
                        v17 = 0x8000000000000000;
                        v47 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v44 >= v17)
                    {
                        v17 = v53 * v17;
                    }
                    else
                    {
                        v17 = 9223372036854775807;
                        v47 = 1;
                    }
                    v60 = v46;
                    v46 = (unsigned long long)v46 - 1;
                }
                while (v60 != 1);
            case 33:
                break;
            case 53:
                if (!(v17 >= 0xc000000000000000))
                {
                    v17 = 0x8000000000000000;
                    v16 = 1;
                    break;
                }
                else if (v17 <= 4611686018427387903)
                {
                    v17 *= 2;
                    break;
                }
                else
                {
                    v17 = 9223372036854775807;
                    v16 = 1;
                    break;
                }
            default:
                v16 |= 2;
                *(v1) = v17;
            }
            if (v26 <= 53)
            {
                v27 = v26;
            }
        }
        v40 = 1;
        v34 = 0x400;
        v36 = -0x20000000000000;
        v54 = 6;
        v47 = 0;
        do
        {
            if (v17 < v36)
            {
                v17 = 0x8000000000000000;
                v47 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v44 >= v17)
            {
                v17 = v34 * v17;
            }
            else
            {
                v17 = 9223372036854775807;
                v47 = 1;
            }
            v61 = v54;
            v54 -= 1;
        }
        while (v61 != 1);
        v40 = 1;
        v50 = 0x400;
        v51 = -0x20000000000000;
        v40 = 1;
        v37 = 0x400;
        v39 = -0x20000000000000;
        v40 = 1;
        v48 = 0x400;
        v49 = -0x20000000000000;
        v40 = 1;
        if (v17 >= -0x40000000000000 && v17 <= 18014398509481983)
        {
            v17 *= 0x200;
        }
        v40 = 1;
        v42 = 0x400;
        v41 = -0x20000000000000;
        v40 = 1;
        v53 = 0x400;
        v33 = -0x20000000000000;
        v40 = 1;
        v42 = 0x400;
        v43 = -0x20000000000000;
        v40 = 1;
        v40 = 1;
        v44 = 0x400;
        v45 = -0x20000000000000;
        v46 = 5;
        v47 = 0;
        do
        {
            if (v45 > v17)
            {
                v17 = 0x8000000000000000;
                v47 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v44 >= v17)
            {
                v17 = v44 * v17;
            }
            else
            {
                v17 = 9223372036854775807;
                v47 = 1;
            }
            v57 = v46;
            v46 = (unsigned long long)v46 - 1;
        }
        while (v57 != 1);
        v16 |= v47;
        v63 = &v11[v40];
        *(v8) = v63;
        v16 = (unsigned int)(*(v63) != 0? v16 | 2 : (unsigned int)r12<8>);
        *(v1) = v17;
        v64 = v16;
        return v64;
    }
    __assert_fail(); /* do not return */
}

int sub_408d50()
{
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

extern unsigned int g_411008;
extern unsigned int g_411039;
extern unsigned long long stderr;

int sub_40b380()
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
    unsigned int|unsigned long v17;  // eax
    unsigned long long v18;  // rax
    unsigned long long|char * v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9d
    unsigned long v26;  // rax
    unsigned int|unsigned long v27;  // rdx
    unsigned long v29;  // rax
    char v30[2];  // rcx
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
    unsigned long long|unsigned long v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned int|unsigned long v46;  // rbp
    unsigned long long v47;  // rax
    char v48[3];  // r14
    unsigned long v49;  // r13
    char [2]|char * v50;  // r15
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
                        v5 = v5;
                        sub_40ac80();
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
                            v26 = v0->field_0;
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
                v42 = v26;
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
                    v39 = v0->field_30;
                    v40 = (unsigned int)v26 + 1;
                    v0->field_0 = v42;
                    if (v42 != v39)
                    {
                        if ((unsigned int)v42 != v8->field_30)
                        {
                            sub_40ac80();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v42;
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
                                v5 = v24;
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
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_40ad60();
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
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x411008, 0x5), *((long long *)v15));
                    }
                    v0->field_8 = v45;
                    v62 = 0;
                    v63 = *(v50) != 58;
                    v45 = r14<8> * 5 + 58;
                }
            }
        }
    }
    if (...)
    {
        if ((unsigned int)v49 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x411039, 0x5), *((long long *)v15));
        }
        v0->field_8 = v45;
        v45 = 63;
    }
    if (...)
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
            else if ((unsigned int)v46 != v8->field_0)
            {
                v60 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v60;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x411008, 0x5), *((long long *)v15));
                }
                v0->field_8 = v45;
                v64 = 0;
                v65 = *(v50) != 58;
                v45 = r14<8> * 5 + 58;
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
    if (...)
    {
        v0->field_20 = v53;
        v0->field_10 = 0;
        v2 = "-W";
        v1 = v49;
        v0 = v0;
    }
    if (...)
    {
        v45 = (unsigned int)sub_40ad60();
    }
    v66 = v45;
    return v66;
}

extern unsigned int g_410118;
extern unsigned int g_410124;
extern unsigned int g_41012b;
extern unsigned int g_41012f;
extern unsigned int g_41013f;
extern unsigned int g_410156;
extern unsigned int g_4101b8;
extern unsigned int g_410288;
extern unsigned int g_4102a8;
extern unsigned int g_4102d0;
extern unsigned int g_4102f8;
extern unsigned int g_410328;
extern unsigned int g_410480;

int sub_408d60()
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
        __fprintf_chk(v15, 0x1, 0x410118, v14);
    }
    else
    {
        __fprintf_chk(v16, 0x1, 0x410124, v17);
    }
    __fprintf_chk((unsigned int)v18, 0x1, 0x410480, dcgettext(0x0, 0x41012b, 0x5));
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4101b8, 0x5), v18);
    switch (v20)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x41012f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x41013f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x410156, 0x5);
        break;
    case 4:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x410288, 0x5);
    case 5:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x4102a8, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v31 = dcgettext(0x0, 0x4102d0, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v31 = dcgettext(0x0, 0x4102f8, 0x5);
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
        v32 = dcgettext(0x0, 0x410328, 0x5);
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

int sub_405590()
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

int sub_40b9b0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40b950();
}

int sub_409500()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409300();
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[12];
    unsigned int field_34;
    char field_38;
    char field_39;
} struct_0;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[12];
    unsigned int field_34;
    char field_38;
    char field_39;
} struct_1;

extern int512_t g_402790;
extern char g_6142b4;
extern unsigned long long g_614398;
extern char g_6143d0;
extern unsigned int g_6143d4;
extern unsigned int g_6143d8;
extern unsigned int g_6143dc;
extern char g_6143e0;
extern unsigned int g_614424;
extern int512_t g_614430;
extern unsigned int g_614438;
extern char g_61443d;
extern char g_614448;
extern char g_614449;
extern char g_61444a;
extern char g_61444c;
extern char g_61444d;
extern char g_61444e;
extern char g_61444f;
extern unsigned long long g_614478;

int sub_403840()
{
    struct_0 *v1;  // rdi
    struct_1 *v2;  // rbp
    unsigned long long v3[3];  // rdi
    char *v4;  // rax
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rdx
    unsigned int|unsigned long v8;  // ebx
    unsigned long long v9[3];  // rdi
    char *v10;  // rax
    unsigned long long v11;  // rdx
    unsigned long long v12[3];  // rdi
    char *v13;  // rax
    unsigned long v14;  // rdi
    unsigned long long v15;  // r12
    unsigned int|unsigned long v19;  // rdi
    unsigned int v20;  // eax
    unsigned long long v21;  // r13
    unsigned long long v26;  // rbx
    unsigned long long v28;  // rdi
    unsigned long long v30[3];  // rdi
    char *v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rcx
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rdx
    unsigned long long v37;  // rdi
    unsigned long long v39[3];  // rdi
    char *v40;  // rax
    unsigned long v42;  // rdi
    unsigned long long v43;  // rax

    v2 = v1;
    v3 = v1->field_0;
    v4 = v3[1];
    if (v3[1] < v3[2])
    {
        v5 = &v4[1];
        v3[1] = &v4[1];
        v8 = *(v4);
    }
    else
    {
        v8 = __uflow(v3);
    }
    if ((unsigned int)v8 == 12)
    {
        v12 = v2->field_0;
        v13 = v2->field_0->field_8;
        v6 = v2->field_0->field_10;
        if (v2->field_39 != 0)
        {
            if (v13 < v6)
            {
                v7 = &v13[1];
                v12[1] = &v13[1];
                v8 = *(v13);
            }
            else
            {
                v8 = __uflow(v12);
            }
            if (v8 == 10)
            {
                v9 = v2->field_0;
                v10 = v2->field_0->field_8;
                if (v2->field_0->field_8 < v2->field_0->field_10)
                {
                    v11 = &v10[1];
                    v9[1] = &v10[1];
                    v8 = *(v10);
                }
                else
                {
                    v8 = __uflow(v9);
                }
            }
        }
    }
    if ((unsigned int)v8 != 12 || v2->field_39 != 0)
    {
        v2->field_39 = 0;
        if (v8 != 10 && v8 != 12)
        {
            if (v8 != -1)
            {
                v15 = (unsigned int)sub_402fe0();
                if (g_614424 <= g_614438 || g_61443d == 0)
                {
                    v26 = g_614398;
                    if ((unsigned int)v15 != 0)
                    {
                        while (true)
                        {
                            v26 += 1;
                            v28 = (char)*((char *)(v26 - 1));
                            *((long long *)(rbp<8> + 32))();
                            if (g_614398 + v15 - 1 + 1 == v26)
                            {
                                break;
                            }
                        }
                    }
                    while (true)
                    {
                        v30 = v2->field_0;
                        v31 = v2->field_0->field_8;
                        if (v2->field_0->field_8 < v2->field_0->field_10)
                        {
                            v30[1] = &v31[1];
                            v31 = (unsigned int)*(v31);
                        }
                        else
                        {
                            v31 = __uflow(v30);
                        }
                        if (v31 == 10)
                        {
                            return 1;
                        }
                        else if (v31 != 12)
                        {
                            if (v31 == -1)
                            {
                                break;
                            }
                            v32 = sub_402fe0();
                            if (g_61443d != 0)
                            {
                                v33 = g_614438;
                                if (g_614424 > g_614438)
                                {
                                    g_614424 = g_614424;
                                    v43 = 0;
                                }
                            }
                            if (g_614424 <= g_614438 || g_61443d == 0)
                            {
                                v34 = g_614398;
                                v35 = v32 - 1;
                                while (true)
                                {
                                    v34 += 1;
                                    v37 = (char)*((char *)(v34 - 1));
                                    *((long long *)(rbp<8> + 32))();
                                    if (v34 == g_614398 + v32 - 1 + 1)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            v39 = v2->field_0;
                            v40 = v2->field_0->field_8;
                            if (v2->field_0->field_8 < v2->field_0->field_10)
                            {
                                v39[1] = &v40[1];
                                v42 = *(v40);
                            }
                            else
                            {
                                v42 = __uflow(v39);
                            }
                            if ((unsigned int)v42 == 10)
                            {
                                break;
                            }
                            ungetc(v42, v2->field_0);
                        }
                    }
                    if (v31 != 10 && v31 != 12)
                    {
                        sub_4029a0();
                        v43 = 1;
                    }
                    else if (g_614424 > g_614438 && g_61443d != 0 && v31 != 10 && v31 != -1 && v31 != 12)
                    {
                        return v43;
                    }
                }
            }
            if (g_614424 <= g_614438 || v8 == -1 || g_61443d == 0)
            {
                sub_4029a0();
                v43 = 1;
            }
        }
        if (v8 == 12)
        {
            v12 = v2->field_0;
            v13 = v2->field_0->field_8;
            v6 = v2->field_0->field_10;
        }
        if (v8 == 10 || v8 != -1 && v8 != 12)
        {
            if (g_61443d != 0 && g_614424 > g_614438)
            {
                g_614424 = g_614424;
                v43 = 0;
            }
            if (g_614424 <= g_614438 || g_61443d == 0)
            {
                if (v2->field_20 != 4204432)
                {
                    g_6143d0 = 1;
                    if (g_614448 != 0 && g_6142b4 == 0)
                    {
                        sub_402ee0();
                    }
                    if (g_61444f != 0 && g_61444e != 0)
                    {
                        v20 = g_6143d8;
                        v21 = g_614478;
                        g_6143d8 = 0;
                        if (v20 > 0)
                        {
                            while (true)
                            {
                                v21 += 64;
                                sub_4037e0();
                                g_6143d8 = g_6143d8 + 1;
                                if (((unsigned long long)g_6143d8 << 6) + g_614478 == v21)
                                {
                                    break;
                                }
                            }
                        }
                        v19 = v2->field_34;
                        g_61444e = 0;
                        g_6143d4 = v19;
                        g_614430 = (g_61443d != 0? g_614438 : 0);
                    }
                    if (g_61444f == 0 || g_61444e == 0)
                    {
                        v19 = g_6143d4;
                    }
                    if (g_6143dc < v19)
                    {
                        sub_402ca0();
                        g_6143d4 = 0;
                    }
                    if (g_6143e0 != 0)
                    {
                        sub_402dd0();
                    }
                }
                if (v2->field_38 != 0)
                {
                    sub_4036c0();
                }
                g_61444d = 0;
                v43 = 1;
            }
        }
    }
    if ((unsigned int)v8 == 12 && v2->field_39 == 0 || v8 == 12 && v2->field_39 == 0 || v8 == 12)
    {
        if (v6 > v13)
        {
            v12[1] = &v13[1];
            v14 = *(v13);
        }
        else
        {
            v14 = __uflow(v12);
        }
        if ((unsigned int)v14 == 10)
        {
            g_61444c = 1;
        }
        else
        {
            ungetc(v14, v2->field_0);
            g_61444c = 1;
        }
        if (g_614448 != 0 && g_6142b4 == 0)
        {
            g_6143d0 = 1;
            sub_402ee0();
        }
    }
    if ((g_614448 != 0 && ((unsigned int)v8 == 12 || v8 == 12) && (v8 == 12 || v2->field_39 == 0) && ((unsigned int)v8 == 12 || v8 != 10) && (v2->field_39 == 0 || v8 != 10) && g_6142b4 != 0 || (unsigned int)v14 != 10 && ((unsigned int)v8 == 12 || v8 == 12) && (v8 == 12 || v2->field_39 == 0) && ((unsigned int)v8 == 12 || v8 != 10) && (v2->field_39 == 0 || v8 != 10) && g_614448 == 0 || (unsigned int)v14 == 10 && ((unsigned int)v8 == 12 || v8 == 12) && (v8 == 12 || v2->field_39 == 0) && ((unsigned int)v8 == 12 || v8 != 10) && (v2->field_39 == 0 || v8 != 10) && g_614448 == 0 || v8 != -1 && v8 != 10 && v8 != 12 && (g_614424 <= g_614438 || g_61443d == 0) && ((unsigned int)v8 != 12 || v2->field_39 != 0)) && g_61444a != 0)
    {
        g_614449 = 1;
    }
    if (v8 == 10 && (unsigned int)v8 != 12 || v8 == 10 && v2->field_39 != 0 || (unsigned int)v8 != 12 && v8 != 12 || v8 != 12 && v2->field_39 != 0)
    {
        return v43;
    }
    if (g_614448 != 0 && ((unsigned int)v8 == 12 || v8 == 12) && (v8 == 12 || v2->field_39 == 0) && ((unsigned int)v8 == 12 || v8 != 10) && (v2->field_39 == 0 || v8 != 10) && g_6142b4 != 0 || (unsigned int)v14 != 10 && ((unsigned int)v8 == 12 || v8 == 12) && (v8 == 12 || v2->field_39 == 0) && ((unsigned int)v8 == 12 || v8 != 10) && (v2->field_39 == 0 || v8 != 10) && g_614448 == 0 || (unsigned int)v14 == 10 && ((unsigned int)v8 == 12 || v8 == 12) && (v8 == 12 || v2->field_39 == 0) && ((unsigned int)v8 == 12 || v8 != 10) && (v2->field_39 == 0 || v8 != 10) && g_614448 == 0 || v8 != -1 && v8 != 10 && v8 != 12 && (g_614424 <= g_614438 || g_61443d == 0) && ((unsigned int)v8 != 12 || v2->field_39 != 0) || g_6142b4 == 0 && g_614448 != 0 && ((unsigned int)v8 == 12 || v8 == 12) && (v8 == 12 || v2->field_39 == 0) && ((unsigned int)v8 == 12 || v8 != 10) && (v2->field_39 == 0 || v8 != 10))
    {
        sub_403410();
        return 1;
    }
}

extern unsigned long long program_invocation_short_name;

int sub_4025fb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_409140()
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

extern unsigned int g_40cdf5;
extern unsigned int g_614298;
extern char g_61444b;

int sub_402950()
{
    dcgettext(0x0, 0x40cdf5, 0x5);
    g_61444b = 1;
    g_614298 = sub_409680();
    return g_614298;
}

extern unsigned long long g_614488;

int sub_4053b0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_614488 = v1;
    return v2;
}

extern uint128_t g_6145a0;
extern uint128_t g_6145b0;
extern uint128_t g_6145c0;
extern unsigned long long g_6145d0;

int sub_408aff()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6145d0;
    *((uint128_t *)&v0) = g_6145a0;
    *((uint128_t *)&v1) = g_6145b0;
    *((uint128_t *)&v2) = g_6145c0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4084e0();
}

int sub_40b9d0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40b950();
}

extern unsigned long long *g_614318;
extern unsigned long long g_614320;
extern unsigned long long g_614328;
extern unsigned int g_614330;
extern unsigned long long g_6144a0;

int sub_4088f0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_614330;
    if (g_614330 > 1)
    {
        v2 = &g_614318[3];
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_614318[2 * (unsigned long long)(g_614330 - 2) + 5])
            {
                break;
            }
        }
    }
    if (g_614318[1] != 6374560)
    {
        v1 = free(g_614318[1]);
        g_614320 = 0x100;
        g_614328 = &g_6144a0;
    }
    if (g_614318 != 6374176)
    {
        v1 = free(g_614318);
        g_614318 = &g_614320;
    }
    g_614330 = 1;
    return v1;
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

    v10 = sub_401860();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6372912 + rbx<8> * 8))();
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
    char padding_0[8];
    char field_8;
} struct_0;

int sub_40bdb0()
{
    char *v1;  // rbp
    struct_0 *v3;  // rdi
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
    if (v3->field_8 == 0 && v1 != 0 || v1 == 0 && v3->field_8 != 0 || v1 != 0 && v4 != 0)
    {
        if (v4 != 0)
        {
            v6 = sub_40bad0();
            if (v6 == 0)
            {
                v8 = __errno_location();
                if (v8 != 1)
                {
                    sub_40bb20();
                }
                *(v8) = *(v8);
                return 0;
            }
        }
        if (v4 == 0 || v6 != 0)
        {
            v4 = (unsigned int)sub_40bba0();
            return v7;
        }
    }
}

int sub_40ba10()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40b950();
}

int sub_405470()
{
}

int sub_408d10()
{
}

extern int512_t g_614268;

int sub_40cd90()
{
}

int sub_409320()
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
        sub_409550(); /* do not return */
    }
}

extern char g_614368;
extern unsigned long long g_614370;

int sub_402651()
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

    if (g_614368 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_614370 >= 0)
            {
                break;
            }
            g_614370 = g_614370 + 1;
            *((long long *)(6372928 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_614368 = 1;
        return sub_4025fb();
    }
    return v4;
}

extern unsigned long long g_614270;
extern unsigned int g_6143d8;
extern unsigned int g_6143dc;
extern unsigned int g_614428;
extern unsigned int g_614430;
extern unsigned long long stdout[7];

int sub_402dd0()
{
    unsigned long long v0;  // [bp-0x28]
    void tmp_31;  // tmp #31
    unsigned long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long long v4;  // [bp-0x8]
    unsigned int|unsigned long v6;  // eax
    unsigned long long v7;  // r14
    unsigned long long v8;  // r13
    unsigned long long v9;  // r12
    unsigned long long v10;  // rbx
    unsigned long long v11;  // r14
    char *v12;  // rbx
    unsigned long long v14;  // rsi
    char *v15;  // rax
    unsigned long long v16;  // rbp
    unsigned long long v17;  // r12
    unsigned int v19;  // eax
    unsigned long long v20;  // rbx
    unsigned long long v21;  // r12
    unsigned long long v22;  // r13
    unsigned long long v23;  // r14

    v6 = g_614430;
    if (g_6143d8 > 0)
    {
        v4 = v7;
        v3 = v8;
        v2 = v9;
        v17 = g_614270;
        v1 = stack_base + 0;
        v16 = g_6143dc;
        v0 = v10;
        do
        {
            v12 = v17;
            for (v11 = v16 + v17; (unsigned int)(char *)(v11 + -0x1 * v12) > 0; v17 += (tmp_31? g_6143dc : 0))
            {
                while (true)
                {
                    v14 = *(v12);
                    v12 = &v12[1];
                    if (v14 != 32)
                    {
                        if (v6 > 0)
                        {
                            sub_402d10();
                            v14 = v12[-1];
                        }
                        v15 = stdout[5];
                        if (stdout[5] < stdout[6])
                        {
                            stdout[5] = stdout[5] + 1;
                            *((unsigned long long *)&v15) = v14;
                        }
                        else
                        {
                            __overflow();
                        }
                        g_614428 = g_614428 + 1;
                        v6 = g_614430;
                        if ((unsigned int)(char *)(v11 + -0x1 * v12) <= 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v6 = (unsigned long long)v6 + 1;
                        g_614430 = v6;
                    }
                }
                if (v14 != 32)
                {
                    tmp_31 = (char)(v16 % 0x80000000 & 1 ^ 1);
                    v16 = (unsigned int)v16 - 1 - ((char)(v16 >> 31 & 1 ^ 1)? (unsigned int)v16 : 0);
                }
            }
            tmp_31 = (char)(v16 % 0x80000000 & 1 ^ 1);
            v16 = (unsigned int)v16 - 1 - ((char)(v16 >> 31 & 1 ^ 1)? (unsigned int)v16 : 0);
            sub_402d10();
            v19 = g_6143d8 - 1;
            g_6143d8 = g_6143d8 - 1;
        }
        while (v19 > 0);
        v20 = v0;
        v21 = v2;
        v22 = v3;
        v23 = v4;
        return g_6143d8 - 1;
    }
    else if (g_614430 <= 0)
    {
        return g_614430;
    }
}

int sub_409680()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_409590();
}

extern int512_t g_6145a0;

int sub_408720()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6145a0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6145a0 : v1) + 4)) = v3;
    return v2;
}

int sub_40a5e0()
{
    unsigned long long v0;  // [bp-0x178]
    void tmp_11;  // tmp #11
    char|char [3] v1;  // [bp-0x58]
    char v2[3];  // [bp-0x50]
    unsigned int v4;  // edx
    unsigned long long|unsigned int|unsigned long v5;  // rdi
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
        if (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0)
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
                                    /* goto *((long long *)(rdx<8> * 8 + 0x410c00)); */
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
        if ((*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && *((char *)v6) != 0 && v15 != 45 && v9 != 0 && v19 != 0 || v15 != 45 && *(v12) != v5 && v1[0] != 0 && v9 != 0 && (*(v14) == 0 || v17 == 34) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                v36 = v30;
                v37 = 6;
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
                if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>))
                {
                    v33 = -1;
                    break;
                }
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
                v38 = v30;
                v5 = 4;
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
            case 23:
                v40 = v30;
                v5 = 8;
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
                break;
            case 24:
                v39 = v30;
                v5 = 7;
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
                if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x30<64>, t11, rcx<8>, 0x0<64>)))
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

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[49];
    char field_39;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[49];
    char field_39;
} struct_2;

typedef struct struct_3 {
    char padding_0[57];
    char field_39;
} struct_3;

extern char g_614280;
extern unsigned int g_614284;
extern unsigned int g_614298;
extern char g_614390;
extern char g_61444f;
extern unsigned long long g_614478;

int sub_403490()
{
    struct_0 *v1;  // rdi
    struct_2 *v2;  // r13
    unsigned long long v3[3];  // rbx
    char *v4;  // rax
    unsigned long long|char v6;  // rbp
    unsigned long long v7;  // rax
    char *v8;  // rax
    unsigned long long v9;  // rax
    char *v10;  // rax
    char *v11;  // rax
    struct_3 *v12;  // rax
    char *v13;  // rax
    unsigned long v14;  // rdi
    unsigned long v16;  // rsi

    v2 = v1;
    v3 = v1->field_0;
    v4 = v1->field_0->field_8;
    if (v1->field_0->field_8 < v1->field_0->field_10)
    {
        v1->field_0->field_8 = v1->field_0->field_8 + 1;
        v9 = *(v4);
    }
    else
    {
        v9 = __uflow(v1->field_0);
    }
    if ((unsigned int)v9 != 12)
    {
        v2->field_39 = 0;
        v6 = 0;
    }
    else if (v2->field_39 != 0)
    {
        v8 = v3[1];
        if (v3[1] < v3[2])
        {
            v3[1] = &v8[1];
            v9 = *(v8);
        }
        else
        {
            v9 = __uflow((unsigned int)v3);
        }
        if ((unsigned int)v9 == 10)
        {
            v10 = v3[1];
            if (v3[1] < v3[2])
            {
                v3[1] = &v10[1];
                v9 = *(v10);
            }
            else
            {
                v9 = __uflow((unsigned int)v3);
            }
        }
        v2->field_39 = 0;
        v6 = (unsigned int)v9 == 12;
    }
    else
    {
        v6 = g_614390;
        v7 = g_614390;
        if (g_614390 != 0)
        {
            v2->field_39 = 1;
        }
        else
        {
            v6 = 1;
        }
    }
    if ((v2->field_39 != 0 || (unsigned int)v9 != 12) && g_614390 != 0)
    {
        v2->field_39 = 1;
    }
    if (g_614390 == 0 && v2->field_39 != 0 || g_614390 == 0 && (unsigned int)v9 != 12 || (unsigned int)v9 != 10 && v2->field_39 != 0 || (unsigned int)v9 != 10 && (unsigned int)v9 != 12)
    {
        while ((unsigned int)v9 != -1 && (unsigned int)v9 != 12 && (unsigned int)v9 != 10)
        {
            v11 = v3[1];
            if (v3[1] < v3[2])
            {
                v3[1] = &v11[1];
                v9 = *(v11);
            }
            else
            {
                v9 = __uflow((unsigned int)v3);
            }
        }
        if ((unsigned int)v9 != 10)
        {
            v7 = g_614390;
        }
        else if ((unsigned int)v9 != 12 && (unsigned int)v9 != 10)
        {
            v9 = sub_4029a0();
        }
        v9 = sub_4029a0();
        v7 = g_614390;
    }
    if ((g_614390 == 0 && v2->field_39 != 0 || g_614390 == 0 && (unsigned int)v9 != 12 || (unsigned int)v9 != 10 && g_614390 != 0 || v2->field_39 == 0 && (unsigned int)v9 == 12 && g_614390 != 0) && v7 != 0)
    {
        if (g_61444f == 0)
        {
            v12 = g_614478;
            if (g_614298 != 0)
            {
                do
                {
                    v12->field_39 = 0;
                    v12 = &v12[1].padding_0[6];
                }
                while (v12 != ((unsigned long long)(g_614298 - 1) + 1 << 6) + g_614478);
            }
        }
        else
        {
            v2->field_39 = 0;
        }
    }
    if (g_614390 == 0 || (unsigned int)v9 != 10 || v2->field_39 == 0 && (unsigned int)v9 == 12)
    {
        v13 = v3[1];
        if (v3[1] < v3[2])
        {
            v3[1] = &v13[1];
            v14 = *(v13);
        }
        else
        {
            v14 = __uflow((unsigned int)v3);
        }
        if ((unsigned int)v14 == 10)
        {
            v9 = sub_403410();
        }
        else
        {
            ungetc(v14, v3);
            v9 = sub_403410();
        }
    }
    if (g_614280 != 0 && ((unsigned int)v16 == 1 || g_61444f != 1) && v6 == 0)
    {
        g_614284 = g_614284 + 1;
    }
    return v9;
}

int sub_408ae0()
{
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned int field_10;
    char padding_14[28];
    unsigned int field_30;
} struct_0;

extern unsigned int g_614298;
extern unsigned int g_614410;
extern char g_61444f;
extern unsigned long long g_614478;

int sub_4029a0()
{
    unsigned long long v0;  // [bp-0x8]
    struct_0 *v2;  // rdi
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    struct_0 *v5;  // rbx
    char *v6;  // rdi
    unsigned long long v8;  // rbx
    unsigned long long|unsigned int [13] v9;  // rax
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned int v12;  // ecx
    unsigned long long v13;  // rbx

    if (v2->field_10 != 3)
    {
        v0 = v4;
        v5 = v2;
        v6 = v2->field_0;
        if ((*(v6) & 32) == 0)
        {
            v9 = fileno(v6);
            if ((unsigned int)v9 != 0)
            {
                v9 = sub_40aa20();
                if ((unsigned int)v9 != 0)
                {
                    v10 = (unsigned int)sub_408bb0();
                    error(0x1, *(__errno_location()), "%s");
                }
            }
            if ((unsigned int)v9 == 0 || (unsigned int)v9 == 0)
            {
                if (g_61444f == 0)
                {
                    v9 = g_614478;
                    if (g_614298 != 0)
                    {
                        do
                        {
                            v12 = v9[5 + 1];
                            v9[2] = 3;
                            if (v12 == 0)
                            {
                                v9[6] = 0;
                            }
                            v9 = &v9[8];
                        }
                        while (v9 != ((unsigned long long)(g_614298 - 1) + 1 << 6) + g_614478);
                        g_614410 = g_614410 - 1;
                        v13 = v0;
                        return v9;
                    }
                }
                else
                {
                    v5->field_10 = 3;
                    v5->field_30 = 0;
                }
                if (g_614298 == 0 || g_61444f != 0)
                {
                    g_614410 = g_614410 - 1;
                    v11 = v0;
                    return v9;
                }
            }
        }
        else
        {
            v8 = (unsigned int)sub_408bb0();
            error(0x1, *(__errno_location()), "%s");
        }
    }
    else
    {
        return v3;
    }
}

int sub_4093a0()
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
        sub_409550(); /* do not return */
    }
}

int sub_40aa20()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40abe0() != 0)
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

typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
} struct_0;

extern unsigned int g_614298;
extern unsigned int g_614410;
extern char g_61444f;
extern unsigned long long g_614478;

int sub_403410()
{
    struct_0 *v1;  // rax
    unsigned int *v2;  // rdi
    unsigned int *v3;  // rsi
    unsigned long v4;  // rax
    unsigned int *v5;  // rsi

    if (g_61444f == 0)
    {
        v1 = g_614478;
        if (g_614298 != 0)
        {
            do
            {
                v1->field_10 = !(0 - (unsigned int)(char)(*((char *)6374068) < 1)) + 2;
                v1 = &v1[3].padding_0[4];
            }
            while (v1 != ((unsigned long long)(g_614298 - 1) + 1 << 6) + g_614478);
        }
        *(v5) = 0;
        g_614410 = g_614410 - 1;
        return v1;
    }
    *(v2) = 2;
    g_614410 = g_614410 - 1;
    *(v3) = 0;
    return v4;
}

int sub_4087e2()
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

int sub_40c760()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp+0x8]
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
        v8 = (unsigned int)sub_40c640() + v6;
        if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, rbx<8>, cc_ndep<8>)))
        {
            return v8;
        }
    }
    if (v4 == 0 || (char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, rbx<8>, cc_ndep<8>))
    {
        if (!((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rax<8>, rbx<8>, cc_ndep<8>)))
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

extern unsigned int g_40e158;

int sub_4052e0()
{
    unsigned long v0;  // [bp-0x20]
    char v2[2];  // rdi
    unsigned long long v3;  // rax
    char *v4;  // rdx
    unsigned long long v5;  // rax
    unsigned int *v6;  // rcx
    unsigned long long v7;  // rbp

    v3 = v2[0];
    if ((unsigned int)v2[0] - 48 > 9)
    {
        *(v4) = v2[0];
        v3 = v2[1];
    }
    if (v3 == 0)
    {
        return v3;
    }
    v5 = sub_409e00();
    if (v5 == 0 && v0 - 1 <= 2147483646)
    {
        *(v6) = v0;
        return v0;
    }
    if (v0 - 1 > 2147483646 || v5 != 0)
    {
        v7 = (unsigned int)sub_408d30();
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40e158, 0x5));
        sub_404de0(); /* do not return */
    }
}

int sub_408ba0()
{
}

extern unsigned int g_40cde4;

int sub_4027f0()
{
    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40cde4, 0x5));
}

int sub_40ac80()
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

extern unsigned int g_40ce53;
extern char g_40ce63;
extern unsigned int g_40cef7;
extern unsigned int g_40cf23;
extern unsigned int g_40e198;
extern unsigned int g_40e208;
extern unsigned int g_40e240;
extern unsigned int g_40e270;
extern unsigned int g_40e2a0;
extern unsigned int g_40e2c0;
extern unsigned int g_40e2f0;
extern unsigned int g_40e320;
extern unsigned int g_40e360;
extern unsigned long long g_614270;
extern unsigned int g_61427c;
extern char g_614280;
extern unsigned int g_6142ac;
extern unsigned int g_6142b0;
extern char g_6142b4;
extern char g_6142b5;
extern unsigned int g_61433c;
extern unsigned long long g_614398;
extern unsigned long long g_6143b8;
extern char *g_6143c0;
extern char *g_6143c8;
extern unsigned int g_6143dc;
extern char g_6143e0;
extern char g_6143e1;
extern char g_6143e8;
extern char g_6143e9;
extern char g_6143ea;
extern unsigned long long g_6143f0;
extern char g_6143fc;
extern unsigned long long g_614418;
extern char g_614420;
extern unsigned int g_61442c;
extern char g_614434;
extern char g_614435;
extern char g_61443c;
extern char g_61443d;
extern char g_614444;
extern char g_614445;
extern char g_614446;
extern char g_614447;
extern char g_61444a;
extern char g_61444b;
extern char g_61444f;
extern unsigned long long g_614450;
extern unsigned long long g_614458;
extern unsigned long long g_614470;
extern unsigned long long g_614478;
extern char *g_614630;

int main()
{
    unsigned long long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long long v2;  // [bp-0x58]
    unsigned int v3;  // [bp-0x50]
    char v4;  // [bp-0x4b]
    char v5;  // [bp-0x4a]
    char v6;  // [bp-0x49]
    unsigned int v7;  // [bp-0x44]
    unsigned long long v8;  // [bp-0x40]
    unsigned long long v10;  // r15
    unsigned long long v11;  // rdi
    unsigned long long v17;  // rcx
    unsigned long long v18;  // rdx
    unsigned long long v19;  // r13
    unsigned long long v20;  // rbx
    char *v21;  // rax
    unsigned long long v23;  // rdi
    unsigned long long v24;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rdx
    unsigned long long v36;  // rbx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v42;  // rdx
    unsigned long v43;  // rsi
    unsigned long long *v44;  // rax
    unsigned int v45;  // esi
    unsigned long long v46;  // rcx
    unsigned long long v47;  // rdx
    unsigned long long v48;  // r14
    unsigned long long v50;  // rbx

    v10 = 0;
    v8 = 0;
    sub_407110();
    setlocale(0x6, 0x40ce63);
    bindtextdomain(0x40cef7, 0x40e198);
    textdomain(0x40cef7);
    sub_40cd90();
    if ((unsigned int)v11 > 1)
    {
        v10 = (unsigned int)sub_409300();
    }
    v6 = 0;
    v20 = 0;
    v19 = 0;
    v48 = 0;
    v5 = 0;
    v4 = 0;
    while (true)
    {
        v7 = -1;
        if (!(v3 != -1))
        {
            if (v19 != 0)
            {
                sub_402950();
                free(v19);
            }
            if (g_6143c0 == 0)
            {
                v38 = getenv("POSIXLY_CORRECT");
                if (v38 != 0)
                {
                    v39 = sub_405590();
                    if (v39 == 0)
                    {
                        v40 = "%b %e %H:%M %Y";
                    }
                }
                if (v38 == 0 || v39 != 0)
                {
                    v40 = "%Y-%m-%d ";
                }
                g_6143c0 = v40;
            }
            getenv("TZ");
            g_6143b8 = (unsigned int)sub_40bba0();
            if (g_614418 == 0)
            {
                g_614418 = 1;
            }
            if (g_61444f != 0)
            {
                if (g_61444b != 0)
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40e320, 0x5));
                }
                else if (g_614445 != 0)
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40e360, 0x5));
                }
            }
            if (g_61444f == 0 || g_61444b == 0 && g_614445 == 0)
            {
                if (v4 != 0)
                {
                    if (v5 != 0)
                    {
                        if (g_61444f == 0 && g_61444b == 0)
                        {
                            g_61443c = 1;
                        }
                        if (g_61444f != 0 || g_61444b != 0)
                        {
                            g_61443d = 1;
                        }
                    }
                    else if (g_6143e0 != 1)
                    {
                        if (v6 != 0 && (g_61444f != 0 || g_61444b != 0) && g_61443d == 0)
                        {
                            g_61443c = 1;
                        }
                    }
                    if (v6 != 0 && (g_61444f != 0 || g_61444b != 0) && (v5 != 0 || g_6143e0 != 1) && (g_61443d != 0 || v5 != 0 || g_6143dc > 0))
                    {
                        g_6143e0 = 1;
                    }
                }
                v42 = g_61433c;
                if (g_61433c > g_61433c)
                {
                    v44 = v43 + v42 * 8;
                    v45 = g_61433c - v42 + v48;
                    do
                    {
                        v46 = *(v44);
                        v47 = v48;
                        v48 = (unsigned int)v48 + 1;
                        v44 = &v44[1];
                        *((unsigned long long *)(v10 + v47 * 8)) = v46;
                    }
                    while ((unsigned int)v48 != v45);
                    g_61433c = v11;
                }
                if ((unsigned int)v48 == 0)
                {
                    sub_403e40();
                }
                else if (g_61444f == 0)
                {
                    v50 = v10 + (v48 - 1) * 8 + 8;
                    while (true)
                    {
                        v10 += 8;
                        sub_403e40();
                        if (v50 == v10)
                        {
                            break;
                        }
                    }
                }
                else
                {
                    sub_403e40();
                }
                free(g_6143f0);
                free(g_614398);
                free(g_614478);
                free(g_614458);
                free(g_614450);
                free(g_614470);
                if (g_614446 != 0)
                {
                    if ((char)(sub_40aa20() + 1 == 0))
                    {
                        break;
                    }
                }
                return (unsigned long long)g_614420;
            }
        }
        else if ((unsigned int)v1 > 9)
        {
            v18 = v3 + 131;
            switch (v3 + 131)
            {
            case 0:
                v1 = (unsigned long long)v3 - 48;
                v0 = 0;
                sub_4091c0();
                exit(0x0); /* do not return */
            case 1:
                sub_404de0(); /* do not return */
            case 132:
                v21 = g_614630;
                if (*(g_614630) == 43 && g_614418 == 0)
                {
                    v31 = sub_402820();
                    if (v31 == 0)
                    {
                        v21 = g_614630;
                    }
                }
                if (v31 == 0 || *(g_614630) != 43 || g_614418 != 0)
                {
                    v32 = v48;
                    v20 = 0;
                    v48 = (unsigned int)v48 + 1;
                    *((char **)(v10 + v32 * 8)) = v21;
                    break;
                }
            case 199:
                v20 = 0;
                g_6143c0 = g_614630;
                break;
            case 201: case 233:
                g_614447 = 1;
                v20 = 0;
                break;
            case 205:
                g_61443c = 1;
                v20 = 0;
                break;
            case 209:
                v20 = 0;
                g_614280 = 0;
                dcgettext(0x0, 0x40e270, 0x5);
                g_61427c = sub_409680();
                break;
            case 214:
                g_6143e0 = 1;
                g_614270 = &g_40ce63;
                g_6143dc = 0;
                v6 = 0;
                if (g_614630 != 0)
                {
                    sub_402920();
                    v20 = 0;
                    break;
                }
            case 215:
                g_6142b5 = 0;
                v20 = 0;
                g_61444a = 0;
                break;
            case 218:
                v20 = 0;
                g_61443d = 1;
                dcgettext(0x0, 0x40e2f0, 0x5);
                v5 = 0;
                g_6142ac = sub_409680();
                break;
            case 228:
                g_614445 = 1;
                v20 = 0;
                g_6142b4 = 0;
                break;
            case 229:
                g_614444 = 1;
                v20 = 0;
                break;
            case 230:
                g_6143e9 = 1;
                v20 = 0;
                break;
            case 231:
                g_6143e8 = 1;
                v20 = 0;
                break;
            case 232:
                if (g_614630 != 0)
                {
                    sub_4052e0();
                }
                g_614435 = 1;
                v20 = 0;
            case 235:
                v20 = 0;
                g_6143c8 = g_614630;
                break;
            case 236:
                if (g_614630 != 0)
                {
                    sub_4052e0();
                }
                g_614434 = 1;
                v20 = 0;
            case 239:
                v20 = 0;
                dcgettext(0x0, 0x40e240, 0x5);
                g_6142b0 = sub_409680();
                break;
            case 240:
                g_61444f = 1;
                v20 = 0;
                g_6142b4 = 0;
                break;
            case 241:
                g_6143fc = 1;
                if (g_614630 != 0)
                {
                    v20 = 0;
                    sub_4052e0();
                    break;
                }
            case 242:
                v20 = 0;
                dcgettext(0x0, 0x40e2a0, 0x5);
                g_61442c = sub_409680();
                break;
            case 245:
                g_6143e1 = 1;
                v20 = 0;
                break;
            case 246:
                v4 = g_6143e0;
                v6 = g_6143e0;
                if (g_6143e0 == 0)
                {
                    if (g_614630 != 0)
                    {
                        sub_402920();
                        v20 = 0;
                        v6 = 1;
                        v4 = 1;
                    }
                    else
                    {
                        v6 = 1;
                        v20 = 0;
                        v4 = 1;
                    }
                }
            case 247:
                g_6142b5 = 0;
                v20 = 0;
                g_61444a = 1;
                break;
            case 249:
                g_6143ea = 1;
                v20 = 0;
                break;
            case 250:
                dcgettext(0x0, 0x40e2c0, 0x5);
                v4 = g_61443d;
                v5 = g_61443d;
                if (g_61443d == 0)
                {
                    g_6142ac = sub_409680();
                    v20 = 0;
                    v5 = 1;
                    v4 = 1;
                    break;
                }
            case 259:
                v20 = 0;
                sub_402950();
                v23 = v19;
                v19 = 0;
                free(v23);
                v8 = 0;
                break;
            case 260:
                if (g_614630 != 0)
                {
                    v24 = sub_402820();
                    if (v24 == 0)
                    {
                        v36 = (unsigned int)sub_408d30();
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40cf23, 0x5));
                    }
                }
                else
                {
                    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40e208, 0x5));
                }
            default:
                sub_404de0(); /* do not return */
            }
            if (g_614630 == 0 || g_61443d != 0 || g_6143e0 != 0 || v24 != 0 && g_614630 != 0 || *(g_614630) == 43 && g_614418 == 0 && v31 != 0)
            {
                v20 = 0;
            }
        }
        else
        {
            v17 = v20 + 1;
            if (v20 + 1 >= v8)
            {
                v3 = sub_40b9d0();
                v2 = v20;
                v19 = (unsigned int)sub_409460();
            }
            *((char *)(v19 + v20)) = v3;
            v20 = v17;
            *((char *)(v19 + v17)) = 0;
        }
    }
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40ce53, 0x5));
}

int sub_40b9f0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40b380();
}

extern unsigned int g_6145d8;

int sub_40aaa0()
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
        if (g_6145d8 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_40aaa0();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_6145d8 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_6145d8 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_40aaa0();
        }
        if ((*(v12) == 22 || g_6145d8 < 0) && ((unsigned int)v15 < 0 || g_6145d8 < 0) && (g_6145d8 == -1 || g_6145d8 >= 0) && (g_6145d8 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_6145d8 >= 0))
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

int sub_4070f0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    char v2;  // [bp-0x9]
    unsigned long v4;  // r9
    unsigned long v5;  // r8

    v2 = 0;
    v1 = v4;
    v0 = v5;
    return sub_405920();
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

extern unsigned int g_40cf65;

int sub_40bad0()
{
    struct_0 *v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if (v1->field_8 == 0)
    {
        v2 = unsetenv(0x40cf65);
    }
    else
    {
        v2 = setenv(0x40cf65, (unsigned int)v1 + 9, 0x1);
    }
    v3 = 0;
    if (v2 == 0)
    {
        tzset();
        v3 = 1;
    }
    return v3;
}

int sub_408cc0()
{
}

extern unsigned long long g_614270;
extern unsigned int g_6143dc;

int sub_402920()
{
    char *v1;  // rdi

    if (g_6143dc <= 2147483647)
    {
        g_614270 = v1;
        g_6143dc = strlen(v1);
        return g_6143dc;
    }
    sub_4027f0(); /* do not return */
}

int sub_40c070()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40aa20();
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

int sub_409460() { crash_skku;
}
extern char g_614480;

int sub_4053c0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_614480 = v1;
    return v2;
}

int sub_40be80()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // r13
    unsigned int v3;  // esi
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax

    if (v1 != 0)
    {
        v2 = (unsigned int)sub_40bdb0();
        if (v2 != 0)
        {
            v5 = localtime_r(v3, v4);
            if (v5 != 0)
            {
                v6 = sub_40bc30();
                if (v6 != 0)
                {
                    if (v2 != 1)
                    {
                        v8 = sub_40bb50();
                    }
                    if (v2 == 1 || v8 != 0)
                    {
                        return v4;
                    }
                }
            }
            if ((v6 == 0 || v5 == 0) && v2 != 1)
            {
                sub_40bb50();
            }
        }
        if (v6 == 0 || v5 == 0 || v2 == 0 || v8 == 0 && v2 != 1)
        {
            return 0;
        }
    }
}

int sub_409e00()
{
    unsigned long long v0;  // [bp-0x178]
    unsigned long long *v1;  // [bp-0x58]
    char v2;  // [bp-0x49]
    char v3;  // [bp-0x40]
    unsigned long v5;  // rcx
    unsigned int v6;  // edx
    char **v7;  // rsi
    unsigned long long *v8;  // rbx
    unsigned int *v9;  // r13
    unsigned int *v10;  // r13
    char v11[3];  // r15
    unsigned int v12;  // eax
    unsigned long long v13;  // r13
    unsigned long long|unsigned int|unsigned long v14;  // r12
    unsigned long long v15;  // rbp
    unsigned long long v16;  // rax
    char *v17;  // r8
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rsi
    char v23;  // sil
    unsigned long long v24;  // rdx
    unsigned long long v25;  // r13
    unsigned long long v26;  // r13
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rcx
    unsigned long long v33;  // rax
    unsigned long long v34;  // r9
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rax
    unsigned long long v37;  // r9
    unsigned long long v38;  // rsi
    unsigned long long v39;  // rcx
    unsigned long long v40;  // r9
    unsigned long long|unsigned int v41;  // edi
    unsigned long long|unsigned int|unsigned long v42;  // r10
    unsigned long long v43;  // rcx
    unsigned long long v44;  // r9
    unsigned long long|unsigned int v45;  // rdi
    unsigned long long v46;  // rcx
    unsigned long long v47;  // r9
    unsigned long long|unsigned int v48;  // rdi
    unsigned long long v49;  // rax
    unsigned long long v50;  // rcx
    unsigned long long v51;  // rdi
    unsigned long long v52;  // rcx
    unsigned long long v53;  // r9
    unsigned long long|unsigned int v54;  // rdi
    unsigned long long|unsigned int v55;  // rdi
    unsigned long long|unsigned int v56;  // rdi
    unsigned int v57;  // cc_dep1
    unsigned long long v58;  // cc_dep1
    unsigned long long v59;  // cc_dep1
    unsigned long v60;  // rax
    unsigned long long v61;  // cc_dep1
    unsigned long long v62;  // cc_dep1
    unsigned long long v63;  // cc_dep1
    char *v64;  // rsi
    unsigned long long v65;  // rax

    v1 = v5;
    if (v6 <= 36)
    {
        v8 = (v7 == 0? &v3 : v7);
        *(v9) = 0;
        v9 = __errno_location();
        v11 = *(v8);
        v15 = strtol(v41, v7, v6);
        if (*(v8) != v41)
        {
            v12 = *(v10);
            if (*(v10) == 0)
            {
                v14 = 0;
            }
            else
            {
                v14 = 4;
                if (v12 == 34)
                {
                    v14 = 1;
                }
            }
            if ((*(v10) == 0 || v12 == 34) && v17 != 0)
            {
                v13 = v11[0];
                if (v11[0] != 0)
                {
                    v18 = strchr(v17, (char)*((char *)*((long long *)(v7 == 0? &v3 : v7))));
                }
            }
        }
        else
        {
            if (v17 != 0)
            {
                v13 = v11[0];
                v14 = 4;
                if (v11[0] != 0)
                {
                    v15 = 1;
                    v14 = 0;
                    v16 = strchr(v17, (char)*((char *)*((long long *)(v7 == 0? &v3 : v7))));
                }
            }
            if ((v17 == 0 || v16 == 0) && (v17 == 0 || v11[0] != 0))
            {
                v14 = 4;
            }
        }
        if (*(v8) == v41 && v11[0] != 0 && v17 != 0 && v16 != 0 || v17 != 0 && *(v8) != v41 && v11[0] != 0 && (*(v10) == 0 || v12 == 34) && v18 != 0)
        {
            v19 = v13 - 69;
            if ((v13 - 69 & 255) <= 47)
            {
                *((unsigned long long *)&v2) = v19;
                v0 = 142129060940101;
                if (((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) != 0)
                {
                    v20 = strchr(v17, 0x30);
                    if (v20 != 0 && v11[1] != 68)
                    {
                        if (*((char *)(*((long long *)(v7 == 0? &v3 : v7)) + 1)) != 105)
                        {
                            v24 = v2;
                            if (*((char *)(*((long long *)(v7 == 0? &v3 : v7)) + 1)) != 66)
                            {
                                /* goto *((long long *)(rdx<8> * 8 + 4262376)); */
                            }
                        }
                        else
                        {
                            v22 = 0;
                            v21 = 0x400;
                            v23 = v11[2] == 66;
                            v38 = rsi<8> * 2 + 1;
                        }
                    }
                }
            }
        }
        if ((*(v8) == v41 && v11[0] != 0 && v17 != 0 && v16 != 0 || v17 != 0 && *(v8) != v41 && v11[0] != 0 && (*(v10) == 0 || v12 == 34) && v18 != 0) && (v13 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) != 0 && v20 == 0 || (*(v8) == v41 && v11[0] != 0 && v17 != 0 && v16 != 0 || v17 != 0 && *(v8) != v41 && v11[0] != 0 && (*(v10) == 0 || v12 == 34) && v18 != 0) && (v13 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v2 & 63) >> 3) + -376]) >> (unsigned long long)(v2 & 63 & 7)) & 1) == 0 || (*(v8) == v41 && v11[0] != 0 && v17 != 0 && v16 != 0 || v17 != 0 && *(v8) != v41 && v11[0] != 0 && (*(v10) == 0 || v12 == 34) && v18 != 0) && (v13 - 69 & 255) > 47)
        {
            v38 = 1;
            v21 = 0x400;
        }
        if (...)
        {
            v38 = 2;
            v21 = 1000;
        }
        if (...)
        {
            v25 = (unsigned int)v13 - 66;
            switch (v25)
            {
            case 0:
                if (v15 >= -0x20000000000000 && v15 <= 9007199254740991)
                {
                    v15 *= 0x400;
                    break;
                }
            case 3:
                v39 = v21;
                v27 = (-1 CONCAT 0x8000000000000000) % v21;
                v40 = v27;
                v41 = 6;
                v42 = 0;
                do
                {
                    if (v15 < v40)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v39 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v57 = v41;
                    v41 = (unsigned long long)v41 - 1;
                }
                while (v57 != 1);
            case 5: case 37:
                v46 = v21;
                v29 = (-1 CONCAT 0x8000000000000000) % v21;
                v47 = v29;
                v48 = 3;
                v42 = 0;
                do
                {
                    if (v15 < v47)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v46 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v59 = v48;
                    v48 -= 1;
                }
                while (v59 != 1);
                v14 = (unsigned int)v14 | v42;
                break;
            case 9: case 41:
                v50 = v21;
                v49 = (-1 CONCAT 0x8000000000000000) % v21;
                if (v15 >= v49)
                {
                    v60 = (0 CONCAT 9223372036854775807) % v50;
                }
            case 11: case 43:
                v50 = v21;
                v30 = (-1 CONCAT 0x8000000000000000) % v21;
                v51 = v30;
            case 14:
                v52 = v21;
                v31 = (-1 CONCAT 0x8000000000000000) % v21;
                v53 = v31;
            case 18: case 50:
                v43 = v21;
                v28 = (-1 CONCAT 0x8000000000000000) % v21;
                v44 = v28;
                v45 = 4;
                v42 = 0;
                do
                {
                    if (v44 > v15)
                    {
                        v15 = 0x8000000000000000;
                        v42 = 1;
                    }
                    else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
                    {
                        v15 = v43 * v15;
                    }
                    else
                    {
                        v15 = 9223372036854775807;
                        v42 = 1;
                    }
                    v58 = v45;
                    v45 -= 1;
                }
                while (v58 != 1);
            case 23:
                v32 = v21;
                v33 = (-1 CONCAT 0x8000000000000000) % v21;
                v34 = v33;
            case 24:
                v35 = v21;
                v36 = (-1 CONCAT 0x8000000000000000) % v21;
                v37 = v36;
            case 33:
                break;
                v64 = &v11[v38];
                *(v8) = v64;
                v14 = (unsigned int)(*(v64) != 0? v14 | 2 : (unsigned int)r12<8>);
            case 53:
                if (v15 >= 0xc000000000000000 && v15 <= 4611686018427387903)
                {
                    v15 *= 2;
                    break;
                }
            default:
                v14 = (unsigned int)v14 | 2;
                *(v1) = v15;
            }
            if (v25 <= 53)
            {
                v26 = v25;
            }
        }
        v38 = 1;
        v50 = 0x400;
        v49 = -0x20000000000000;
        v38 = 1;
        v35 = 0x400;
        v37 = -0x20000000000000;
        v56 = 7;
        v42 = 0;
        do
        {
            if (v37 > v15)
            {
                v15 = 0x8000000000000000;
                v42 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
            {
                v15 = v35 * v15;
            }
            else
            {
                v15 = 9223372036854775807;
                v42 = 1;
            }
            v63 = v56;
            v56 -= 1;
        }
        while (v63 != 1);
        v38 = 1;
        v50 = 0x400;
        v51 = -0x20000000000000;
        if (v15 >= v51)
        {
            v60 = (0 CONCAT 9223372036854775807) % v50;
            if (v15 <= (0 CONCAT 9223372036854775807) % v50)
            {
                v15 = v50 * v15;
                if (v15 >= v51 && v60 >= v15)
                {
                    v15 = v50 * v15;
                }
            }
            else
            {
                v15 = 9223372036854775807;
                v14 = 1;
            }
        }
        else
        {
            v15 = 0x8000000000000000;
            v14 = 1;
        }
        v38 = 1;
        if (v15 >= -0x40000000000000 && v15 <= 18014398509481983)
        {
            v15 *= 0x200;
        }
        v38 = 1;
        v38 = 1;
        v52 = 0x400;
        v53 = -0x20000000000000;
        v54 = 5;
        v42 = 0;
        do
        {
            if (v53 > v15)
            {
                v15 = 0x8000000000000000;
                v42 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
            {
                v15 = v52 * v15;
            }
            else
            {
                v15 = 9223372036854775807;
                v42 = 1;
            }
            v61 = v54;
            v54 -= 1;
        }
        while (v61 != 1);
        v38 = 1;
        v39 = 0x400;
        v40 = -0x20000000000000;
        v38 = 1;
        v43 = 0x400;
        v44 = -0x20000000000000;
        v38 = 1;
        v46 = 0x400;
        v47 = -0x20000000000000;
        v38 = 1;
        v32 = 0x400;
        v34 = -0x20000000000000;
        v55 = 8;
        v42 = 0;
        do
        {
            if (v34 > v15)
            {
                v15 = 0x8000000000000000;
                v42 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v39 >= v15)
            {
                v15 = v32 * v15;
            }
            else
            {
                v15 = 9223372036854775807;
                v42 = 1;
            }
            v62 = v55;
            v55 -= 1;
        }
        while (v62 != 1);
        *(v1) = v15;
        v65 = v14;
        return v65;
    }
    __assert_fail(); /* do not return */
}

int sub_405480()
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

int sub_408d30()
{
}

int sub_4058d0()
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

extern unsigned int g_40ef7a;
extern unsigned int g_6142c0;
extern char g_614480;
extern unsigned long long g_614488;

int sub_4053d0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40c070();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_614480 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40ef7a, 0x5);
            if (g_614488 != 0)
            {
                sub_408b80();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_614480 != 0)
    {
        v3 = sub_40c070();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_614480 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6142c0);
        error(0x0, *(v2), "%s");
    }
}

typedef struct struct_0 {
    char padding_0[4262880];
    unsigned long long field_410be0;
} struct_0;

extern int512_t g_410be0;
extern unsigned int g_6142c0;

int sub_40a550()
{
    char v0;  // [bp-0x2a]
    char v1;  // [bp-0x29]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // r13
    unsigned int v7;  // edi
    struct_0 *v8;  // rdi
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
    v13 = *((long long *)(0x8 * v8 + (char *)&g_410be0));
    if ((unsigned int)v11 < 0)
    {
        v0 = v14;
        v1 = 0;
    }
    error(g_6142c0, 0x0, (unsigned long long)dcgettext(0x0, v13, 0x5));
}

typedef struct struct_0 {
    char padding_0[52];
    unsigned int field_34;
} struct_0;

typedef struct struct_1 {
    char padding_0[56];
    char field_38;
} struct_1;

extern unsigned int g_6143d4;
extern unsigned int g_6143dc;
extern char g_6143e0;

int sub_4037e0()
{
    unsigned long long v1;  // rax
    struct_0 *v2;  // rdi
    struct_1 *v3;  // edi

    v1 = g_6143dc;
    v3 = v2->field_34;
    *((struct_1 **)&g_6143d4) = v3;
    if (v3 <= g_6143dc)
    {
    }
    else
    {
        v1 = sub_402ca0();
        g_6143d4 = 0;
    }
    if (g_6143e0 == 0)
    {
    }
    else
    {
        v1 = sub_402dd0();
    }
    if (v2[1].padding_0[0] == 0 && g_6143e0 == 0 || v2[1].padding_0[0] == 0 && g_6143e0 != 0)
    {
        return v1;
    }
}

extern unsigned int g_614428;
extern unsigned int g_614430;
extern char g_614434;
extern unsigned long long stdout[7];

int sub_402ca0()
{
    unsigned int|unsigned long v1;  // ebx
    char *v2;  // rax
    unsigned long v4;  // rax
    unsigned long v5;  // rdi

    v1 = g_614428;
    if (g_614434 != 0)
    {
        g_614430 = v5 - (unsigned long long)g_614428;
        return v4;
    }
    while (true)
    {
        v1 = (unsigned long long)v1 + 1;
        if (g_614428 < (unsigned int)v1)
        {
            break;
        }
        v2 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v2) = 32;
        }
        else
        {
            v2 = __overflow();
        }
    }
    g_614428 = v5;
    return v2;
}

int sub_40961b()
{
}

int sub_4093d0() { crash_skku;
}
int sub_405550()
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

int sub_408b80()
{
}

extern int512_t g_6145a0;

int sub_4086c0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6145a0 : v1));
}

int sub_4026a8() { crash_skku;
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

int sub_40ac20()
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

int sub_4094b0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_409300();
}

int sub_408ca0()
{
}

int sub_4094d0()
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
        sub_409550(); /* do not return */
    }
}

extern unsigned int g_61429c;
extern char g_6142a0;
extern unsigned int g_614428;
extern unsigned int g_614430;
extern unsigned long long stdout[7];

int sub_402d10()
{
    unsigned int|unsigned long v1;  // rbp
    char *v2;  // rax
    unsigned long long v3;  // rcx
    unsigned long v4;  // rbx
    char *v5;  // rax

    v1 = g_614428;
    while (true)
    {
        v2 = g_614428 - v1;
        v2 = ((unsigned int)v1 >> 31 CONCAT (unsigned int)v1) % g_61429c;
        v3 = g_61429c - (((unsigned int)v1 >> 31 CONCAT (unsigned int)v1) % g_61429c >> 32);
        v4 = v3 + v1;
        if (g_614428 < (unsigned int)(v3 + v1) || (unsigned int)(g_614428 - v1) <= 1)
        {
            break;
        }
        v5 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            v1 = v4;
            stdout[5] = stdout[5] + 1;
            *(v5) = g_6142a0;
        }
        else
        {
            __overflow();
        }
    }
    while (true)
    {
        v1 += 1;
        if (g_614428 < v1)
        {
            break;
        }
        v2 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v2) = 32;
        }
        else
        {
            v2 = __overflow();
        }
    }
    g_614428 = g_614430 + g_614428;
    g_614430 = 0;
    return v2;
}

extern int512_t g_40f3ce;
extern int512_t g_40f3d2;

int sub_4071b0()
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
        v3 = sub_40c0d0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40f3ce : 4256729);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40f3d2 : 4256725);
            }
        }
    }
    if (...)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if ((v3[1] & 223) == 84 && v3[4] == 56 && v1 == v2 && v3[5] == 0 && v3[3] == 45 && (v3[0] & 223) == 85 && (v3[2] & 223) == 70 || v3[4] == 48 && (v3[1] & 223) == 66 && v1 == v2 && v3[3] == 56 && v4 == 71 && v3[2] == 49 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

int sub_408cf0()
{
}

extern int512_t g_6145a0;

int sub_4086d0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6145a0 : v1)) = v2;
    return &g_6145a0;
}

int sub_405880()
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

int sub_4054b0()
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
            v5 = sub_408d50();
            if (v5 >= 0)
            {
                v6 = sub_40aa20();
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
                sub_40aa20();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

extern unsigned int g_614428;
extern unsigned int g_614430;
extern char g_614434;
extern unsigned long long stdout[7];

int sub_4031e0()
{
    char v1;  // dil
    unsigned long long v2;  // rax
    unsigned long long v5;  // cc_dep1
    char *v6;  // rax

    if (g_614434 != 0)
    {
        if (v1 != 32)
        {
            if (g_614430 > 0)
            {
                sub_402d10();
            }
            v5 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (unsigned long long)v1 * 2 + 1)) & 64);
            if (!((char)v5 == 0))
            {
                g_614428 = g_614428 + 1;
            }
            else if (v1 == 8)
            {
                g_614428 = g_614428 - 1;
            }
        }
        else
        {
            v2 = g_614430 + 1;
            g_614430 = g_614430 + 1;
            return v2;
        }
    }
    if (g_614434 == 0 || v1 != 32)
    {
        v6 = stdout[5];
        if (stdout[5] < stdout[6])
        {
            stdout[5] = stdout[5] + 1;
            *(v6) = v1;
            return v6;
        }
    }
}

extern unsigned long long g_614460;
extern unsigned int g_614468;
extern unsigned long long g_614470;

int sub_402790()
{
    unsigned long v2;  // rdi

    if (g_614468 < g_614460)
    {
        *((char *)(g_614470 + g_614468)) = v2;
        g_614468 = g_614468 + 1;
        return g_614470;
    }
    g_614470 = (unsigned int)sub_409460();
    *((char *)(g_614470 + g_614468)) = v2;
    g_614468 = g_614468 + 1;
    return g_614470;
}

int sub_408bb0()
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
    return sub_4084e0();
}

int sub_408a00()
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
    return sub_4084e0();
}

int sub_40c800()
{
    unsigned long long|char|unsigned long v0;  // [bp-0x30]
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
                if (v10 != ((unsigned int)(v10 | v16) & 1) + (v16 >> 1) + (v10 >> 1) && v16 != v12)
                {
                    break;
                }
                v0 = v12;
                v13 = v2;
                v14 = &v0;
                v15 = r12<8>();
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

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned short field_8;
} struct_1;

int sub_40bba0()
{
    void *v1;  // rdi
    unsigned long long v2;  // rax
    struct_1 *v3;  // rbx
    unsigned long v4;  // rbp
    struct_1 *v5;  // rax
    struct_1 *v7;  // rax

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

int sub_4072b0()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned long long|unsigned int * v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long v3;  // [bp-0xd8]
    unsigned long long|char|unsigned long v4;  // [bp-0xc0]
    unsigned long long|char|unsigned long v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long|char|char [2] v9;  // [bp-0x98]
    unsigned long long|unsigned long v10;  // [bp-0x90]
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
    void *v27;  // [bp+0x18]
    unsigned long long v28;  // rdi
    unsigned long long v29;  // r15
    unsigned long v30;  // r8
    unsigned long long v31;  // rcx
    unsigned long v32;  // r9
    unsigned long long|char|unsigned long v33;  // r10
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long long v39;  // r11
    unsigned long long|unsigned long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long long v44;  // rdx
    unsigned long long v45;  // rcx
    unsigned long long|unsigned short|unsigned long v46;  // rax
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
    unsigned long long|unsigned int v78;  // r13
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
            v26 = (unsigned int)sub_4071b0();
            v27 = (unsigned long long)(unsigned int)sub_4071b0();
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
                            v40 = 32;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v49 = v5;
                            v89 = 0;
                            v5 = v42;
                        case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                            v41 = 0;
                            v48 = v5;
                            v5 = v41;
                            v78 = 0;
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
                        if (v4 != 0)
                        {
                            v40 = v45;
                            v78 = 0;
                        }
                    case 8:
                        v40 = 8;
                        v45 = 98;
                        v89 = (unsigned int)v39 == 2;
                    case 9:
                        v40 = 9;
                        v45 = 116;
                    case 10:
                        v40 = 10;
                        v45 = 110;
                        v89 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
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
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            v78 = 0;
                            v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                            v89 = (unsigned int)v39 == 2;
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
                            v76 = (unsigned int)sub_4072b0();
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
                    *((unsigned long long *)&v9[0]) = v37;
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
                    v46 = sub_40ba50();
                    v58 = v46;
                    if (v46 != -2 && v46 != 0 && v46 != -1)
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
                v50 = 0;
                v87 = v89;
                *((unsigned long long *)&v4) = v4 & v87;
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
            if ((v43 == 0 || v78 == 0) && (v43 == 0 || v76 == 0) && (v43 == 0 || (v81 == 2 & v17) != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v89 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v89 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v89 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_4072b0();
            }
            if ((v46 == 0 || v17 == 0) && (v46 == 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0) && (v46 == 0 || v43 != 0) && (v17 == 0 || v89 != 0) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 || v89 != 0) && (v43 != 0 || v89 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (v43 == 0 || v78 == 0) && (v43 == 0 || v76 == 0) && (v43 == 0 || (v81 == 2 & v17) != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v89 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v89 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v89 != 0) || v78 == 0 && v6 != 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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

int sub_409350()
{
}

int sub_403e40() { crash_skku;
}
int sub_40bb50()
{
    unsigned int *v1;  // rbx
    unsigned int|unsigned long v2;  // r13

    v1 = __errno_location();
    v2 = *(v1);
    if ((char)sub_40bad0() == 0)
    {
        v2 = *(v1);
    }
    sub_40bb20();
    *((unsigned long *)&v1) = v2;
    return stack_base + 0;
}

extern char g_614449;
extern char g_61444a;

int sub_403d80()
{
    unsigned long long *v1[3];  // rdi
    unsigned long long v2[3];  // rbx
    char *v3;  // rax
    unsigned long long v4;  // rax
    char *v5;  // rax
    unsigned long v6;  // rdi

    v2 = *(v1);
    while (true)
    {
        v3 = v2[1];
        if (v2[1] < v2[2])
        {
            v2[1] = (*(v1))[1] + 1;
            v4 = *(v3);
        }
        else
        {
            v4 = __uflow((unsigned int)v2);
        }
        if (v2[1] < v2[2] && (unsigned int)v4 == 10 || (unsigned int)v4 == 10 && v2[1] >= v2[2])
        {
            return v4;
        }
        if ((unsigned int)v4 == 12 && (v2[1] < v2[2] || (unsigned int)v4 != 10) && (v2[1] >= v2[2] || (unsigned int)v4 != 10))
        {
            v5 = v2[1];
            if (v2[1] < v2[2])
            {
                v2[1] = (*(v1))[1] + 1;
                v6 = *(v5);
            }
            else
            {
                v6 = __uflow((unsigned int)v2);
            }
        }
    }
    if ((unsigned int)v6 == 10)
    {
    }
    else
    {
        ungetc(v6, v2);
    }
    if (g_61444a != 0)
    {
        g_614449 = 1;
    }
}

int sub_4089b0()
{
}

int sub_409360()
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
            sub_409550(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40ce63;
extern char g_614620[2];

int sub_40c0d0()
{
    unsigned long long|unsigned long v0;  // [bp-0xd0]
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
    char *|unsigned long v10;  // rbx
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

    v9 = g_614620;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40ce63 : (unsigned long long)nl_langinfo(0xe));
    if (g_614620 == 0)
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
            v9 = &g_40ce63;
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
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                        {
                            *((char **)(v10 + 8)) = &v58[1];
                            v59 = *(v58);
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1)
                        {
                            if ((unsigned int)v59 != 32 && (unsigned int)v59 != 35)
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
                                    v30 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax<8> >> 16) : (unsigned int)rax<8>);
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
                                        v9 = &g_40ce63;
                                        v10 = (tmp_10 == 0? &g_40ce63 : tmp_10);
                                        free(NULL);
                                        sub_40aa20();
                                    }
                                }
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
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v27 > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v36 != 0)
                        {
                            v59 = __uflow(v10);
                        }
                        if ((unsigned int)v59 == 35 && (unsigned int)v59 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v60 == -1 || (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v59 != -1) && v27 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v27 > 1 && (unsigned int)v59 != 32 && (unsigned int)v59 != 35 && v36 != 0) && (unsigned int)v59 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40ce63 : tmp_10);
                            sub_40aa20();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if (...)
                    {
                        v9 = &g_40ce63;
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
            v9 = &g_40ce63;
            free(v17);
        }
        *((char *[2])&g_614620[0]) = v9;
    }
    v65 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v66 = strcmp((tmp_10 == 0? &g_40ce63 : tmp_10), v9);
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

extern char g_6145a0;

int sub_408740()
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
    v3 = (v2 == 0? &g_6145a0 : v2);
    *((int *)(tmp_11? &g_6145a0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6145a0;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_6145a0;
        abort(); /* do not return */
    }
}

int sub_408b70()
{
}

extern unsigned int g_40ce4a;
extern unsigned int g_6142a4;
extern char g_6142a8;
extern char g_614398[4];
extern char g_6143e9;
extern char g_6143ea;
extern unsigned int g_614424;
extern char g_614435;

int sub_402fe0()
{
    char v0;  // [bp-0x1c]
    char v1;  // [bp-0x1b]
    char v2;  // [bp-0x1a]
    char v4[4];  // rbx
    char|unsigned long v5;  // dil
    unsigned long long v7;  // cc_dep1
    unsigned long long v8;  // rax
    unsigned long long|unsigned int|unsigned long v10;  // rsi
    unsigned long long v11;  // rdx
    unsigned long long v13;  // rdx
    unsigned int v14;  // r9d
    unsigned int v15;  // ecx

    v4 = g_614398;
    if (!(g_6142a8 != v5))
    {
        v10 = g_614424;
        v13 = g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32);
        if (g_614435 != 0)
        {
            if (g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0)
            {
                v8 = g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32);
            }
            else
            {
                v8 = 0;
            }
        }
    }
    else if (v5 != 9)
    {
        v7 = (char)(*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (unsigned long long)v5 * 2 + 1)) & 64);
        if ((char)v7 == 0)
        {
            if (g_6143ea == 0)
            {
                if (!(g_6143e9 != 0))
                {
                    v10 = g_614424;
                    if ((char)v5 != 8)
                    {
                        g_614398[0] = v5;
                        v8 = 1;
                    }
                    else
                    {
                        g_614398[0] = 8;
                        if (g_614424 != 0)
                        {
                            v15 = 1;
                            v13 = -18446744069414584321;
                            v8 = 1;
                        }
                    }
                }
                else if ((char)v5 >= 0)
                {
                    v4[0] = 94;
                    v10 = (unsigned long long)g_614424 + 2;
                    v4[1] = (unsigned int)v5 ^ 64;
                    v8 = 2;
                }
            }
            if (((char)v5 < 0 || g_6143ea != 0) && (g_6143ea != 0 || g_6143e9 != 0))
            {
                g_614398[0] = 92;
                __sprintf_chk((unsigned int)&v0, 0x1, 0x4, 0x40ce4a, v5, v14);
                v4[1] = v0;
                v4[2] = v1;
                v4[3] = v2;
                v10 = (unsigned long long)g_614424 + 4;
                v8 = 4;
            }
        }
        else
        {
            g_614398[0] = v5;
            v10 = (unsigned long long)g_614424 + 1;
            v8 = 1;
        }
    }
    else
    {
        v10 = g_614424;
        v8 = (unsigned int)((long long)(int)g_614424 >> 31 >> 29) - ((unsigned int)(v10 + ((long long)(int)g_614424 >> 31 >> 29)) & 7) + 8;
        v13 = (unsigned int)((long long)(int)g_614424 >> 31 >> 29) - ((unsigned int)(v10 + ((long long)(int)g_614424 >> 31 >> 29)) & 7) + 8;
    }
    if (g_6142a8 == v5 || v5 == 9)
    {
        if (g_614435 == 0)
        {
            g_614398[0] = v5;
            v8 = 1;
        }
        if (g_614435 != 0 && (g_6142a8 != v5 || g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0))
        {
            v11 = &((char [4])&g_614398[v8 + -1])[1];
            do
            {
                v4 = &v4[1];
                v4[-1 + 7] = 32;
            }
            while (v4 != v11);
            v13 = v8;
        }
        if ((unsigned int)v13 < 0 && (g_614435 == 0 || g_6142a8 != v5 || g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0) && (unsigned int)v10 != 0)
        {
            v15 = 0 - (unsigned int)v13;
        }
    }
    if ((char)v5 == 8 && g_6143ea == 0 && (char)v7 == 0 && g_6143e9 == 0 && g_6142a8 != v5 && v5 != 9 && g_614424 == 0 || (unsigned int)v13 < 0 && (g_6142a8 == v5 || v5 == 9) && (g_614435 == 0 || g_6142a8 != v5 || g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0) && (unsigned int)v10 == 0)
    {
        g_614424 = 0;
        return 0;
    }
    if (((char)v5 == 8 && g_6143ea == 0 && (char)v7 == 0 && g_6143e9 == 0 && g_614424 != 0 && g_6142a8 != v5 && v5 != 9 || (unsigned int)v13 < 0 && (unsigned int)v10 != 0 && (g_6142a8 == v5 || v5 == 9) && (g_614435 == 0 || g_6142a8 != v5 || g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0)) && v15 >= (unsigned int)v10)
    {
        g_614424 = 0;
        return v8;
    }
    if (((char)v5 == 8 && g_6143ea == 0 && (char)v7 == 0 && g_6143e9 == 0 && g_614424 != 0 && g_6142a8 != v5 && v5 != 9 || (unsigned int)v13 < 0 && (unsigned int)v10 != 0 && (g_6142a8 == v5 || v5 == 9) && (g_614435 == 0 || g_6142a8 != v5 || g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0)) && v15 < (unsigned int)v10 || (g_614435 == 0 && g_6142a8 == v5 || g_6142a8 == v5 && g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0 || v5 == 9 && g_6142a8 != v5) && (unsigned int)v13 >= 0)
    {
        v10 += v13;
    }
    if (g_6143ea == 0 && (char)v7 == 0 && (char)v5 >= 0 && g_6142a8 != v5 && v5 != 9 && g_6143e9 != 0 || g_6143ea == 0 && (char)v7 == 0 && g_6143e9 == 0 && (char)v5 != 8 && g_6142a8 != v5 && v5 != 9 || (char)v7 == 0 && g_6142a8 != v5 && v5 != 9 && ((char)v5 < 0 || g_6143ea != 0) && (g_6143ea != 0 || g_6143e9 != 0) || g_6142a8 != v5 && (char)v7 != 0 && v5 != 9 || ((char)v5 == 8 && g_6143ea == 0 && (char)v7 == 0 && g_6143e9 == 0 && g_614424 != 0 && g_6142a8 != v5 && v5 != 9 || (unsigned int)v13 < 0 && (unsigned int)v10 != 0 && (g_6142a8 == v5 || v5 == 9) && (g_614435 == 0 || g_6142a8 != v5 || g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0)) && v15 < (unsigned int)v10 || (g_614435 == 0 && g_6142a8 == v5 || g_6142a8 == v5 && g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) != 0 || v5 == 9 && g_6142a8 != v5) && (unsigned int)v13 >= 0 || g_6142a8 == v5 && g_6142a4 - ((g_614424 >> 31 CONCAT g_614424) % g_6142a4 >> 32) == 0 && g_614435 != 0)
    {
        *((unsigned long *)&g_614424) = v10;
        return v8;
    }
}

extern unsigned int g_40ce4f;
extern unsigned int g_614278;
extern char g_614288;
extern unsigned int g_614298;
extern unsigned int g_61429c;
extern unsigned long long g_6143f0;
extern unsigned int g_6143f8;
extern unsigned int g_614400;
extern unsigned int g_614424;
extern unsigned int g_614428;
extern char g_61443d;
extern char g_61444f;

int sub_4036c0()
{
    void tmp_28;  // tmp #28
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rbp
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rdi
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rax
    unsigned int|unsigned long v8;  // ebx
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rcx
    unsigned int v11;  // ebx
    unsigned long long v12;  // rdi
    unsigned long long v13;  // rdi

    v2 = v1;
    g_614400 = g_614400 + 1;
    v3 = (int)(__sprintf_chk(g_6143f0, 0x1, 0xffffffff, 0x40ce4f, g_614278, g_614400) - g_614278) + g_6143f0;
    if (g_614278 > 0)
    {
        while (true)
        {
            v3 += 1;
            v4 = (char)*((char *)(v3 - 1));
            *((long long *)rbp<8>)();
            if (v3 == tmp_28 + g_6143f0 + (unsigned long long)g_614278 - 1 + 1)
            {
                break;
            }
        }
    }
    v6 = g_614288;
    if (!(g_614298 > 1))
    {
        v7 = *((long long *)rbp<8>)();
        if (g_614288 == 9)
        {
            v9 = g_614428;
            v10 = g_61429c - ((g_614428 >> 31 CONCAT g_614428) % g_61429c >> 32);
            v7 = v10 + v9;
            g_614428 = v10 + v9;
        }
    }
    else if (g_614288 != 9)
    {
        v7 = *((long long *)rbp<8>)();
    }
    else
    {
        v7 = g_6143f8 - g_614278;
        v8 = (unsigned long long)(g_6143f8 - g_614278) - 1;
        if (g_6143f8 - g_614278 > 0)
        {
            while (true)
            {
                v11 = v8 - 1;
                v12 = 32;
                v7 = *((long long *)rbp<8>)();
                if (v11 == -1)
                {
                    break;
                }
                v8 = (unsigned long long)v11 - 1;
                v13 = 32;
                v7 = *((long long *)rbp<8>)();
            }
        }
    }
    if (g_61443d != 0 && g_61444f == 0)
    {
        v7 = g_6143f8;
        g_614424 = g_614424 + g_6143f8;
    }
    return v7;
}

int sub_409300()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_409550(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern unsigned int g_4104af;
extern unsigned int g_6142c0;

int sub_409550()
{
    dcgettext(0x0, 0x4104af, 0x5);
    error(g_6142c0, 0x0, "%s");
    abort(); /* do not return */
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

extern unsigned int g_410f40;
extern unsigned int g_410f60;
extern unsigned int g_410f90;
extern unsigned int g_410fb0;
extern unsigned int g_410fe0;
extern unsigned int g_411031;
extern unsigned long long stderr;

int sub_40ad60()
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
    char v11;  // [bp+0x18]
    char *v12;  // r14
    char *v13;  // rdx
    unsigned long v14;  // r8
    char *v15;  // rbp
    unsigned long long v16;  // rax
    unsigned long long v17;  // r13
    unsigned long long v18;  // rcx
    unsigned long long|unsigned long long * v19;  // rbx
    unsigned long long|unsigned int|unsigned long v20;  // r12
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
    unsigned long long v40;  // rbx
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
                            else if (v29 != 0 || *((int *)(v19 + 24)) != *((int *)(v27 + 24)) || *((long long *)(v19 + 16)) != *((long long *)(v27 + 16)) || *((int *)(v19 + 8)) != *((int *)(v27 + 8)))
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410f40, 0x5), *(v34));
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410f60, 0x5), *(v34));
                                v39 = stderr;
                                v40 = v18;
                                v43 = v1;
                                v41 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v43) != 0)
                                    {
                                        __fprintf_chk(v39, 0x1, 0x411031, *((long long *)&v11));
                                        v39 = stderr;
                                    }
                                    v43 += 1;
                                    v40 += 32;
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
            if ((v22 == 0 || *(v19) == 0) && (v22 == 0 || v4 == 0) && (v22 == 0 || v1 == 0) && (*(v19) == 0 || v23 == v17) && (v4 == 0 || v23 == v17) && (v1 == 0 || v23 == v17))
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410fe0, 0x5), *(v34));
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
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410fb0, 0x5), *(v34));
                        }
                        v9->field_8 = *((int *)(v19 + 24));
                        v46 = 63;
                    }
                }
                if ((unsigned int)((unsigned long long)v9->field_0 + 1) < v25 && *(v15) == 0 || *(v15) == 0 && v32 != 1 || *(v15) != 0 && v32 != 0)
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
        if (...)
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
        if ((v36 != 0 || *((long long *)v18) != 0) && (*((char *)(v34[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v18) != 0))
        {
            return v46;
        }
    }
    if (v29 == 0 && *((long long *)v18) == 0 || v36 == 0 && v29 != 0 || *((char *)(v34[(long long)(int)v9->field_0] + 1)) == 45 && v29 != 0)
    {
        if (v10 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x410f90, 0x5), *(v34));
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
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

extern char g_40ce63;

int sub_40bc30()
{
    struct_0 *v1;  // rsi
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long long v4;  // r14
    unsigned long long v5;  // rax
    char *v6;  // rbx
    struct_3 *v7;  // rbp
    unsigned long long v8;  // rax
    char *v9;  // r15
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    struct_2 *v13;  // rax

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
                                    v13 = sub_40bba0();
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
                    else if (*(v6) == 0 && v13 != 0 && v11 > 118 && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6) || *(v6) == 0 && v11 <= 118 && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6) || v8 == 0 && v7->field_0 != 0)
                    {
                        v1->field_30 = v6;
                        v12 = 1;
                    }
                    else if (*(v6) == 0 && (v13 == 0 || !(&v6[-1 * v4]) < v9) && (v13 == 0 || &v7[1] != v6) && (!(&v6[-1 * v4]) < v9 || v11 > 118) && (v7->field_8 == 0 || &v7[1] != v6) && (&v7[1] != v6 || v11 > 118))
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
                v6 = &g_40ce63;
            }
            v1->field_30 = v6;
            v12 = 1;
        }
        return v12;
    }
    return 1;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

