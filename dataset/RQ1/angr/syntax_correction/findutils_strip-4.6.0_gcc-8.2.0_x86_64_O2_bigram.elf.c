
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
extern char g_606340;

int sub_4029c0()
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
    v3 = (v2 == 0? &g_606340 : v2);
    *((int *)(tmp_11? &g_606340 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_606340;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_606340;
        abort(); /* do not return */
    }
}

// int sub_402b60()

extern struct g_6061b8;
extern unsigned long long g_6061c0;
extern unsigned long long g_6061c8;
extern unsigned int g_6061d0;
extern unsigned long long g_606240;

int sub_402b70()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_6061d0;
    if (g_6061d0 > 1)
    {
        v2 = &g_6061b8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_6061b8[(unsigned long long)(g_6061d0 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_6061b8->field_8 != 6316608)
    {
        v1 = free(g_6061b8->field_8);
        g_6061c0 = 0x100;
        g_6061c8 = &g_606240;
    }
    if (g_6061b8 != 6316480)
    {
        v1 = free(g_6061b8);
        g_6061b8 = &g_6061c0;
    }
    g_6061d0 = 1;
    return v1;
}

extern int512_t g_606168;

// int sub_4038b0()

int sub_403100()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long long *v3;  // rsi
    unsigned long long *v4;  // rsi

    if (!(v2 != 0))
    {
        *((int *)v3) = (*(v4) == 0? 128 : *(v4));
    }
    else if (*(v4) <= 12297829382473034409)
    {
        *(v4) = (*(v4) >> 1) + *(v4) + 1;
    }
    else
    {
        v0 = *(v4);
        sub_4031f0(); /* do not return */
    }
}

extern int512_t g_606340;

int sub_402950()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_606340 : v1)) = v2;
    return &g_606340;
}

// int sub_402f20()

// int sub_402d70()

extern unsigned int g_4039ab;
extern unsigned int g_606170;
extern char g_606218;
extern unsigned long long g_606220;

int sub_401510()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_403260();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_606218 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x4039ab, 0x5);
            if (g_606220 != 0)
            {
                sub_402e00();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_606218 != 0)
    {
        v3 = sub_403260();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_606218 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_606170);
        error(0x0, *(v2), "%s");
    }
}

extern int512_t g_606340;

int sub_402960()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_606340 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_606340 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_403190()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_402fd0();
}

extern unsigned long long __progname_full;
extern unsigned long long g_606228;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4015b0()
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
        g_606228 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

// int sub_402f60()

// int sub_402c30()

// int sub_402c10()

// int sub_4013f3()

int sub_403060()
{
    void tmp_8;  // tmp #8
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    unsigned long v4;  // rdx

    v4 = v2 * v3 >> 64;
    if (INVALID_IR)
    {
        v0 = tmp_8;
        sub_4031f0(); /* do not return */
    }
}

// int sub_402c60()

// int sub_402f90()

// int sub_402e20()

int sub_403230()
{
    unsigned long v1;  // rsi
    unsigned long v2;  // rdx

    if (v1 != 0 && v2 == 0)
    {
        return -2;
    }
}

extern unsigned int g_404758;
extern unsigned int g_606170;

int sub_4031f0()
{
    dcgettext(0x0, 0x404758, 0x5);
    error(g_606170, 0x0, "%s");
    abort(); /* do not return */
}

extern int512_t g_606340;

int sub_402940()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_606340 : v1));
}

extern uint128_t g_606340;
extern uint128_t g_606350;
extern uint128_t g_606360;
extern unsigned long long g_606370;

int sub_402ea0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_606340;
    *((uint128_t *)&v1) = g_606350;
    *((uint128_t *)&v2) = g_606360;
    v4 = g_606370;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_402760();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern char g_606208;
extern unsigned long long g_606210;

int sub_401491()
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

    if (g_606208 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_606210 >= 0)
            {
                break;
            }
            g_606210 = g_606210 + 1;
            *((long long *)(6315584 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_606208 = 1;
        return sub_40143b();
    }
    return v4;
}

int sub_402ff0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long v3;  // rsi

    if (INVALID_IR)
    {
        v0 = v2 * v3;
        sub_4031f0(); /* do not return */
    }
}

// int sub_402df0()

extern unsigned long long g_605e30;

int sub_4038c8()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_605e30;
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

int sub_402cf0()
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
    return sub_402760();
}

extern unsigned int g_40390b;
extern unsigned int g_403918;
extern unsigned int g_403988;
extern unsigned int g_403a05;
extern unsigned long long stdin;
extern unsigned long long stdout;

int main()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp+0x0]
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rsi
    unsigned long v15;  // rdi
    unsigned long long v16;  // r13
    unsigned long long v17;  // rbx
    unsigned long long v21;  // rdx

    sub_4015b0();
    setlocale(0x6, 0x403a05);
    bindtextdomain(0x40390b, 0x403918);
    textdomain(0x40390b);
    if (sub_4038b0() == 0)
    {
        v1 = 1026;
        v0 = (unsigned int)sub_402fd0();
        v2 = 0;
        v7 = (unsigned int)sub_402fd0();
        while (true)
        {
            v8 = __getdelim(&v0, &v1, 0xa, stdin);
            if ((unsigned int)v8 <= 0)
            {
                break;
            }
            *((char *)(v0 + v8 - 1)) = 0;
            v21 = v0;
            v9 = (char)*((char *)v7);
            v15 = (char)*((char *)v0);
            if (v9 == v15 && *((char *)v7) != 0)
            {
                v13 = v0;
                v12 = v7;
                do
                {
                    v12 += 1;
                    v13 += 1;
                    v14 = (char)*((char *)v12);
                }
                while (*((char *)v13) == *((char *)v12) && v14 != 0);
                v11 = v12 - v7;
                v10 = v12 - v7;
                v15 = (char)*((char *)(v21 + v11));
            }
            if (*((char *)v7) == 0 || v9 != v15)
            {
                v10 = 0;
                v11 = 0;
            }
            if (v15 != 0)
            {
                v16 = v10 + 1;
                if (*((char *)(v21 + v10 + 1)) != 0)
                {
                    v17 = v11 + 2;
                    do
                    {
                        _IO_putc(v15, stdout);
                        _IO_putc((char)*((char *)(v0 + v16)), stdout);
                        _IO_putc(0xa, stdout);
                        v21 = v0;
                        v15 = (char)*((char *)(v0 + v17));
                        if (*((char *)(v0 + v17)) == 0)
                        {
                            break;
                        }
                        v16 = v17 + 1;
                        v17 += 2;
                    }
                    while (*((char *)(v0 + v16)) != 0);
                }
            }
            v0 = v7;
            v7 = v21;
            v1 = 1026;
        }
        free(v0);
        free(v7);
        return 0;
    }
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x403988, 0x5));
}

// int sub_402f70()

int sub_402900()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_403190();
}

extern int512_t g_403a06;
extern int512_t g_403a0a;

int sub_401650()
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
        v3 = sub_4032d0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_403a06 : 4209169);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_403a0a : 4209165);
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

extern unsigned long long g_6061d8;

int sub_40143b()
{
    unsigned long long v1;  // rax

    v1 = &g_6061d8;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

// int sub_403010()

int sub_402e30()
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
    return sub_402760();
}

// int sub_402f10()

// int sub_402f40()

int sub_4031c0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
    sub_402fd0();
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_403a05;
extern char g_606378[2];

int sub_4032d0()
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
    unsigned long long v13;  // r12
    char *v14;  // r13
    unsigned long long v15;  // r14
    unsigned long long v16;  // rbp
    struct v19;  // r12
    unsigned short v20;  // dx
    unsigned long long v21;  // rax
    void *v24;  // rbx
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
    unsigned long long v41;  // rsi
    unsigned long long v42;  // r9
    unsigned long long v43;  // r10
    unsigned int v44;  // ecx
    unsigned long long v46;  // r8
    void *v47;  // rcx
    unsigned long long v49;  // rcx
    unsigned int v51;  // edx
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rsi
    char *v56;  // rax
    unsigned long long v57;  // rdi
    char *v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v60;  // r13
    void *v61;  // rdi
    unsigned long long v65;  // rbp
    unsigned long long v66;  // rax
    unsigned long long v67;  // rax
    unsigned long long v68;  // rbp
    unsigned long long v69;  // rax

    v9 = g_606378;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_403a05 : (unsigned long long)nl_langinfo(0xe));
    if (g_606378 == 0)
    {
        v14 = getenv("CHARSETALIASDIR");
        if (v14 != 0 && *(v14) != 0)
        {
            v11 = strlen(v14);
            v13 = v11;
            v15 = v11;
            if (v11 == 0)
            {
                v12 = 14;
            }
            else if (v14[v11 + -1] == 47)
            {
                v12 = v11 + 14;
            }
            else
            {
                v12 = v11 + 15;
                v13 += 1;
            }
            if (v11 == 0 || v14[v11 + -1] == 47)
            {
                v16 = malloc(v12);
                if (v16 != 0)
                {
                    memcpy(v16, v14, v15);
                }
            }
        }
        if (v14 == 0 || *(v14) == 0)
        {
            v12 = 116;
            v13 = 102;
            v15 = 101;
            v14 = "/home/dongkwan/data/scripts/gnu_packages/findutils/findutils-4.6.0_gcc-8.2.0_x86_64_O2_debug/gogo/lib";
        }
        if (v14 == 0 || *(v14) == 0 || v11 != 0 && v14[v11 + -1] != 47)
        {
            v16 = malloc(v12);
        }
        if (v16 == 0 || v16 == 0)
        {
            v9 = &g_403a05;
        }
        if (v16 != 0 && (v14 == 0 || *(v14) == 0 || v11 != 0) && (v14 == 0 || *(v14) == 0 || v14[v11 + -1] != 47))
        {
            memcpy(v16, v14, v15);
            *((char *)(v16 + v15)) = 47;
        }
        if (v14 == 0 && v16 != 0 || *(v14) == 0 && v16 != 0 || v11 != 0 && v14[v11 + -1] != 47 && v16 != 0 || v11 == 0 && v14 != 0 && v16 != 0 && *(v14) != 0 || v14[v11 + -1] == 47 && v14 != 0 && v16 != 0 && *(v14) != 0)
        {
            v19 = v13 + v16;
            v19->field_0 = 3347411969557751907;
            v19->field_c = 115;
            v19->field_8 = 1634298977;
            v21 = open(v16, 0x0, v20);
            if ((unsigned int)v21 >= 0)
            {
                v9 = 0;
                v0 = 0;
                if (v10 != 0)
                {
                    v10 = fdopen(v21, "r");
                    while (true)
                    {
                        v56 = *((long long *)(v12 + 8));
                        if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)))
                        {
                            *((char **)(v12 + 8)) = &v56[1];
                            v57 = *(v56);
                        }
                        if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) < *((long long *)(v12 + 16)) || (unsigned int)v12 != -1)
                        {
                            if ((unsigned int)v12 != 35 && (unsigned int)v12 != 32)
                            {
                                ungetc(v12, v12);
                                v27 = fscanf(v12, "%50s %50s", (unsigned int)&v3, (unsigned int)&v5);
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
                                        v12 = v0 - v39;
                                        v41 = tmp_1 + v0 - v39 + v36;
                                        if ((unsigned int)v40 >= 8)
                                        {
                                            *((long long *)v41) = *((long long *)&v3);
                                            *((long long *)(v41 + v40 - 8)) = *((long long *)&(&v3)[v40 + -8]);
                                            v42 = v41 + 8 & -8;
                                            v41 -= v41 + 8 & -8;
                                            v43 = &(&v3)[-1 * v41];
                                            v44 = (unsigned int)(v40 + v41) & -8;
                                            if (v44 >= 8)
                                            {
                                                v41 = 0;
                                                do
                                                {
                                                    v46 = v41;
                                                    v41 = (unsigned int)v41 + 8;
                                                    *((long long *)(v42 + v46)) = *((long long *)(v43 + v46));
                                                }
                                                while ((unsigned int)v41 < (v44 & -8));
                                            }
                                        }
                                        else if ((v40 & 4) != 0)
                                        {
                                            *((int *)v41) = *((int *)&v3);
                                            *((int *)(v41 + v40 - 4)) = *((int *)&(&v3)[v40 + -4]);
                                        }
                                        else if ((unsigned int)v40 != 0)
                                        {
                                            *((char *)v41) = v3;
                                            if ((v40 & 2) != 0)
                                            {
                                                *((short *)(v41 + v40 - 2)) = *((short *)&(&v3)[v40 + -2]);
                                            }
                                        }
                                        v59 = v39 + 1;
                                        v47 = v36 + v12 - 1;
                                        if ((unsigned int)v41 >= 8)
                                        {
                                            *((long long *)v47) = *((long long *)&v5);
                                            v41 = v59;
                                            *((long long *)&((char *)v47)[v41 + -8]) = *((long long *)&(&v5)[v41 + -8]);
                                            v12 = v47 + 8 & -8;
                                            v49 = v47 - (v47 + 8 & -8);
                                            v51 = (unsigned int)(v41 + v49) & -8;
                                            if (v51 >= 8)
                                            {
                                                v54 = 0;
                                                do
                                                {
                                                    v55 = v54;
                                                    v54 = (unsigned int)v54 + 8;
                                                    *((long long *)(v12 + v55)) = *((long long *)&(&v5)[v55 + -1 * v49]);
                                                }
                                                while ((unsigned int)v54 < (v51 & -8));
                                            }
                                        }
                                        else if (((char)v41 & 4) != 0)
                                        {
                                            *((int *)v47) = *((int *)&v5);
                                            *((unsigned int *)&((char *)v47)[(unsigned long long)v7 + -4]) = v7;
                                        }
                                        else if ((unsigned int)v41 != 0)
                                        {
                                            *((char *)v47) = v5;
                                            if ((v5 & 2) != 0)
                                            {
                                                *((short *)&((char *)v47)[(unsigned long long)v5 + -2]) = v7;
                                            }
                                        }
                                        v9 = v36;
                                        v56 = *((long long *)(v12 + 8));
                                    }
                                    else
                                    {
                                        v60 = v12;
                                        v9 = &g_403a05;
                                        v10 = (tmp_10 == 0? &g_403a05 : tmp_10);
                                        free(NULL);
                                        fclose(v60);
                                    }
                                }
                            }
                            if ((unsigned int)v12 == 35)
                            {
                                do
                                {
                                    v58 = *((long long *)(v12 + 8));
                                    if (*((long long *)(v12 + 8)) < *((long long *)(v12 + 16)))
                                    {
                                        *((char **)(v12 + 8)) = &v58[1];
                                        v58 = (unsigned int)*(v58);
                                        v59 = 1;
                                    }
                                    else
                                    {
                                        v58 = __uflow(v12);
                                        v59 = (char)((unsigned int)v58 != -1);
                                    }
                                }
                                while (v58 != 10 && v59 != 0);
                            }
                        }
                        if (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) && (unsigned int)v12 != 35 && (unsigned int)v12 != 32 && v27 > 1 && v36 != 0)
                        {
                            v12 = __uflow(v12);
                        }
                        if (((unsigned int)v12 == -1 || (unsigned int)v12 != 32) && ((unsigned int)v12 == 35 || (unsigned int)v12 == -1 || v27 <= 1) && ((unsigned int)v12 != 32 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && ((unsigned int)v12 == -1 || v58 == -1 || (unsigned int)v12 != 35) && (v58 == -1 || (unsigned int)v12 != 35 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && ((unsigned int)v12 == 35 || v27 <= 1 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && ((unsigned int)v12 == 35 || v27 <= 1 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || v36 != 0))
                        {
                            v12 = v24;
                            v10 = (tmp_10 == 0? &g_403a05 : tmp_10);
                            fclose(v61);
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if (((unsigned int)v12 == -1 || (unsigned int)v12 != 32) && ((unsigned int)v12 == -1 || (unsigned int)(v12 - 9) > 1) && ((unsigned int)v12 == 35 || (unsigned int)v12 == -1 || v27 <= 1) && ((unsigned int)v12 == -1 || v58 == -1 || (unsigned int)v12 != 35) && (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)v12 != 32 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)(v12 - 9) > 1) && ((unsigned int)v12 == 35 || v27 <= 1 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && (v58 == -1 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)v12 != 35 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))))
                    {
                        v9 = &g_403a05;
                    }
                    else if (v36 == 0 && (unsigned int)v12 != 35 && (unsigned int)v12 != 32 && v27 > 1 && (unsigned int)(v12 - 9) > 1 || ((unsigned int)v12 == -1 || (unsigned int)v12 != 32) && ((unsigned int)v12 == -1 || (unsigned int)(v12 - 9) > 1) && ((unsigned int)v12 == 35 || (unsigned int)v12 == -1 || v27 <= 1) && ((unsigned int)v12 == -1 || v58 == -1 || (unsigned int)v12 != 35) && (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)v12 != 32 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && (*((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)(v12 - 9) > 1) && ((unsigned int)v12 == 35 || v27 <= 1 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && (v58 == -1 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16)) || (unsigned int)v12 != 35 || *((long long *)(v12 + 8)) >= *((long long *)(v12 + 16))) && v0 != 0)
                    {
                        free(v16);
                    }
                }
                else
                {
                    close(v21);
                }
            }
            v9 = &g_403a05;
            free(v16);
        }
        *((char *[2])&g_606378[0]) = v9;
    }
    v65 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v66 = strcmp((tmp_10 == 0? &g_403a05 : tmp_10), v9);
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

extern unsigned long long g_606220;

int sub_4014f0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_606220 = v1;
    return v2;
}

// int sub_402c40()

// int sub_402fb0()

// int sub_402e00()

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_6061b8;
extern uint128_t g_6061c0;
extern unsigned int g_6061d0;
extern int512_t g_606240;

int sub_402760()
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
    uint128_t *v14;  // rax
    unsigned long long v15;  // rax
    uint128_t *v16;  // rbx
    unsigned long long v17;  // rdx
    unsigned long v18;  // rdx
    unsigned long long v20[2];  // rbx
    void *v21;  // r12
    unsigned long long v22;  // rax
    unsigned long long v23;  // rsi
    unsigned long long v25;  // rax

    v9 = v8;
    v3 = v10;
    v16 = g_6061b8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_6061d0 <= (unsigned int)v13)
    {
        if (g_6061b8 != 6316480)
        {
            v4 = v13 + 1;
            v15 = sub_403020();
            v17 = v4;
            g_6061b8 = v15;
            v16 = v15;
        }
        else
        {
            v4 = v13 + 1;
            v14 = sub_403020();
            v17 = v4;
            v16 = v14;
            g_6061b8 = v14;
            *(v14) = g_6061c0;
        }
        v18 = (v17 - g_6061d0) * 16;
        memset(&v16[(unsigned long long)g_6061d0], 0x0, v18);
        g_6061d0 = (unsigned int)v13 + 1;
    }
    v20 = &v16[v13];
    v21 = v20[1];
    v6 = v9->field_4 | 1;
    v2 = v9->field_30;
    v1 = v9->field_28;
    v0 = &v9->padding_8;
    *((unsigned long long [2])&v4) = *(v20);
    v22 = sub_401750();
    if (v4 <= v22)
    {
        v23 = v22 + 1;
        v20[0] = v22 + 1;
        if (v21 != 6316608)
        {
            v4 = v23;
            free(v21);
            v23 = v4;
        }
        v4 = v23;
        v20[1] = v21;
        v21 = (unsigned long long)(unsigned int)sub_402fd0();
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = v8 + 8;
        sub_401750();
    }
    *(v11) = v5;
    v25 = v21;
    return v25;
}

extern int512_t g_606340;

int sub_4029a0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_606340 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_606340 : v1) + 4)) = v3;
    return v2;
}

extern int512_t g_606340;

int sub_4029f0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_606340 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_401750();
}

int sub_403170()
{
    unsigned int v1;  // rdi
    unsigned int v2;  // rsi
    unsigned long long v3;  // rax

    v3 = calloc(v1, v2);
    if (v3 != 0)
    {
        return v3;
    }
    sub_4031f0(); /* do not return */
}

int sub_402a8b()
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
    v7 = (unsigned int)sub_401750();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_402fd0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_401750();
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

int sub_403150()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_402fd0();
}

// int sub_402d60()

extern uint128_t g_606340;
extern uint128_t g_606350;
extern uint128_t g_606360;
extern unsigned long long g_606370;

int sub_402d7f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_606370;
    *((uint128_t *)&v0) = g_606340;
    *((uint128_t *)&v1) = g_606350;
    *((uint128_t *)&v2) = g_606360;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_402760();
}

int sub_403260()
{
    unsigned long long v1;  // r12
    unsigned int v2;  // edi
    unsigned int v3;  // ebp
    void *v4;  // rdi
    unsigned long long v5;  // rax

    v1 = __fpending();
    v3 = ferror(v2);
    v5 = fclose(v4);
    if (v3 == 0)
    {
        if ((unsigned int)v5 != 0 && v1 == 0)
        {
            v5 = 0 - (unsigned int)(char)(*(__errno_location()) != 9);
        }
    }
    else
    {
        if ((unsigned int)v5 == 0)
        {
            *(__errno_location()) = 0;
            v5 = -18446744069414584321;
        }
    }
    if ((unsigned int)v5 != 0 && (v1 != 0 || v3 != 0))
    {
        v5 = -18446744069414584321;
    }
    return v5;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern char g_606218;

int sub_401500()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_606218 = v1;
    return v2;
}

int sub_402fd0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4031f0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_402a62()
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

int sub_402c80()
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
    return sub_402760();
}

int sub_403020()
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
            sub_4031f0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
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

    v10 = sub_400f58();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6315568 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

