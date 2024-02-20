
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
extern unsigned int g_416a65;
extern unsigned int g_416a80;

int sub_40a770()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x416a65, 0x5);
    }
    dcgettext(0x0, 0x416a80, 0x5);
    sub_40f860();
    sub_40f550();
}

int sub_410410()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    _obstack_free();
    _obstack_free();
}

// int sub_40f6d0()

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_40be10;
extern int512_t g_40be20;
extern int512_t g_416ba0;

int sub_40c600()
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
            v4 = sub_40bf80();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_416ba0;
            v3 = sub_40bf80();
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
            v13 = (unsigned int)sub_40bd70();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_40be10 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_40be20 : v17);
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

int sub_412f30()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_412eb0();
}

extern unsigned long long g_61c588;

int sub_40585b()
{
    unsigned long long v1;  // rax

    v1 = &g_61c588;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_411230()
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
        sub_411460(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[80];
    char field_50;
} struct_0;

int sub_413230()
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

int sub_413520()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_411f80();
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

int sub_4113c0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_411210();
}

extern uint128_t g_61cce0;
extern uint128_t g_61ccf0;
extern uint128_t g_61cd00;
extern unsigned long long g_61cd10;

int sub_40f64f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_61cd10;
    *((uint128_t *)&v0) = g_61cce0;
    *((uint128_t *)&v1) = g_61ccf0;
    *((uint128_t *)&v2) = g_61cd00;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_40f030();
}

int sub_413cc0()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r14
    unsigned long long v3;  // rcx
    char *v4;  // rdi
    char *v5;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    char *v9;  // r12
    unsigned long long v10;  // rax
    char *v11;  // rbp
    unsigned long long v12;  // r13
    unsigned int v13;  // eax
    char v14;  // al

    v2 = v1;
    v12 = v3;
    v9 = v4;
    v11 = v5;
    while (true)
    {
        *(__errno_location()) = 0;
        v7 = strcoll((unsigned int)v9, (unsigned int)v11);
        if ((unsigned int)v7 == 0)
        {
            v8 = strlen(v9) + 1;
            v9 = &v9[v8];
            v10 = strlen(v11) + 1;
            v11 = &v11[v10];
            v12 -= v10;
            v2 -= v8;
            if (v2 != v8)
            {
                return 1;
            }
            v13 = 0;
            v14 = v12 != 0;
            return 0 - rax;
        }
        return v7;
    }
}

extern unsigned long long g_61c750;
extern char g_61c759;
extern char g_61c75a;
extern char g_61c75b;
extern char g_61cba1;

int sub_4082a0()
{
    unsigned long long v1[2];  // rsi
    unsigned long long v2[2];  // rbp
    unsigned long long v3;  // rdi
    unsigned long long v4[2];  // rbx
    unsigned long long v7;  // r13
    unsigned long long v8;  // r15
    unsigned int v9;  // eax
    char v10;  // al
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // rax

    v2 = v1;
    v4 = v3;
    if (g_61c750 != 0)
    {
        v11 = sub_4065b0();
    }
    if (g_61c750 == 0 || (unsigned int)v11 == 0 && g_61c759 == 0 && g_61c75a == 0)
    {
        v7 = v2[1] - 1;
        v8 = v4[1] - 1;
        if (v4[1] == 1)
        {
            v9 = 0;
            v10 = v1[1] - 1 != 0;
            v11 = (unsigned int)(0 - rax);
        }
        else
        {
            v11 = 1;
            if (v1[1] - 1 != 0)
            {
                if (g_61cba1 == 0)
                {
                    v11 = memcmp(*(v4), *(v2), (v8 <= v7? v8 : v7));
                    if ((unsigned int)v11 == 0)
                    {
                        v11 = -18446744069414584321;
                        if (v8 >= v7)
                        {
                            v11 = 0;
                            v11 = v4[1] != v2[1];
                        }
                    }
                }
                else
                {
                    v11 = sub_4115c0();
                }
            }
        }
        v11 = (unsigned int)(g_61c75b != 0? 0 - v11 : (unsigned int)rax);
    }
    return v11;
}

extern unsigned int g_4179c7;
extern unsigned int g_4179d3;
extern unsigned int g_4179da;
extern unsigned int g_4179de;
extern unsigned int g_4179ee;
extern unsigned int g_417a05;
extern unsigned int g_417a60;
extern unsigned int g_417b30;
extern unsigned int g_417b50;
extern unsigned int g_417b78;
extern unsigned int g_417ba0;
extern unsigned int g_417bd0;
extern unsigned int g_417d20;

int sub_410c70()
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
        __fprintf_chk(v15, 0x1, 0x4179c7, v14);
    }
    else
    {
        __fprintf_chk(v16, 0x1, 0x4179d3, v17);
    }
    __fprintf_chk((unsigned int)v18, 0x1, 0x417d20, dcgettext(0x0, 0x4179da, 0x5));
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x417a60, 0x5), v18);
    switch (v20)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4179de, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x4179ee, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x417a05, 0x5);
        break;
    case 4:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x417b30, 0x5);
    case 5:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x417b50, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v31 = dcgettext(0x0, 0x417b78, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v31 = dcgettext(0x0, 0x417ba0, 0x5);
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
        v32 = dcgettext(0x0, 0x417bd0, 0x5);
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

typedef struct struct_0 {
    char padding_0[12];
    char field_c;
} struct_0;

extern unsigned int g_41648f;
extern unsigned int g_4164a3;
extern unsigned int g_61c69c;

int sub_405fb0()
{
    char v0;  // [bp-0x2c]
    unsigned int v1;  // [bp-0x20]
    unsigned long long v3;  // rdx
    unsigned int v4;  // edi
    unsigned int v5;  // ebx
    unsigned long v6;  // rdi
    unsigned int v8;  // dl
    unsigned long long v9;  // rax
    unsigned long long v11;  // rbp
    struct v12;  // rax
    unsigned long long v13;  // rbx

    v3 = 0;
    v5 = v4;
    v8 = (char)(v5 == 0);
    v9 = waitpid((v4 != 0? (unsigned int)v6 : -1), (unsigned int)&v0, rdx);
    if ((unsigned int)rbp >= 0)
    {
        rbp = v9;
        if (!(INVALID_IR))
        {
            if (v5 <= 0)
            {
                v1 = rbp;
                v12 = sub_40cde0();
                if (v12 != 0)
                {
                    v12->field_c = 2;
                }
            }
            if (v5 > 0 || v12 != 0)
            {
                if (*((int *)&v0) >> 8 == 0 && ((char)*((int *)&v0) & 127) == 0)
                {
                    g_61c69c = g_61c69c - 1;
                }
                else
                {
                    v13 = (unsigned int)sub_40f630();
                    error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x4164a3, 0x5));
                }
            }
        }
        if (INVALID_IR || *((int *)&v0) >> 8 == 0 && ((char)*((int *)&v0) & 127) == 0 || v5 <= 0 && v12 == 0)
        {
            return stack_base + 0;
        }
    }
    else
    {
        v11 = (unsigned int)sub_40f630();
        error(0x2, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x41648f, 0x5));
    }
}

extern unsigned int g_416511;
extern unsigned int g_61c420;

int sub_409330()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x198]
    void tmp_42;  // tmp #42
    void tmp_50;  // tmp #50
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x190]
    unsigned long v2;  // [bp-0x188]
    char *v3;  // [bp-0x180]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x178]
    unsigned long long v5;  // [bp-0x170]
    unsigned long v6;  // [bp-0x158]
    unsigned long v7;  // [bp-0x150]
    unsigned long v8;  // [bp-0xc8]
    unsigned long v9;  // [bp-0xc0]
    void *v11;  // rdi
    unsigned long long v12;  // r14
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rsi
    char *v15;  // rcx
    unsigned long long v16;  // rax
    unsigned long long v17;  // r15
    unsigned long long v18;  // r9
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v24;  // rax
    unsigned long long v25;  // rcx
    unsigned long long v26;  // rbx
    unsigned long long v27;  // r12
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rax
    unsigned long long v30;  // rbp
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rcx
    char *v35;  // rdi
    char *v36;  // rsi
    unsigned long long v37;  // cc_dep1
    unsigned long long v38;  // cc_dep2
    unsigned long v39;  // d
    unsigned int v40;  // r13d
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v47;  // r11
    unsigned long long v48;  // r15
    unsigned long long v50[2];  // r14
    unsigned long long v51;  // r13
    unsigned long long v52;  // rbx
    unsigned long long v53;  // rax
    unsigned int *v54;  // rax
    void *v55;  // r15
    void *v56;  // rbp
    unsigned long v59;  // r13

    v12 = v11;
    v51 = v13;
    v27 = v14;
    v3 = v15;
    v25 = g_61c420;
    if (g_61c420 < v13)
    {
        v0 = v13;
        while (true)
        {
            v28 = 0;
            v26 = 0;
            if (v25 <= v0)
            {
                while (true)
                {
                    v24 = sub_409030();
                    v25 = g_61c420;
                    v26 += v24;
                    v19 = v0 - v26;
                    v27 -= (v24 <= v27? v24 : v27);
                    tmp_42 = v28;
                    v28 += 1;
                    *((long long *)(v12 + tmp_42 * 16)) = r15 + 13;
                    *((unsigned long long *)(v12 + tmp_42 * 16 + 8)) = (unsigned int)sub_4090c0();
                    if (g_61c420 > v0 - v26)
                    {
                        break;
                    }
                }
                v20 = (0 | v28) % v25 >> 64;
                v17 = v28 * 16 + v12;
                v18 = v26 * 16 + v12;
                v16 = v25 - ((0 | v28) % v25 >> 64);
            }
            else
            {
                v16 = v25;
                v17 = v12;
                v18 = v12;
                v19 = v0;
                v20 = 0;
            }
            if (v19 > v16)
            {
                v4 = v18;
                v1 = v19 + v20 + 1 - v25;
                v2 = (unsigned int)sub_4090c0();
                v1 = v2 + 13;
                v29 = sub_409030();
                v28 += 1;
                v26 += v29;
                *((unsigned long long *)v17) = v1;
                *((unsigned long *)(v17 + 8)) = v2;
                v27 -= (v29 <= v27? v29 : v27);
                v18 = v26 * 16 + v12;
                v17 = v28 * 16 + v12;
            }
            v27 += v28;
            v30 = v28 - v26;
            memmove(v17, v18, (v0 - v26) * 16);
            v25 = g_61c420;
            v0 += v30;
            if (g_61c420 >= v0)
            {
                break;
            }
        }
        v51 = v0;
    }
    if (v51 > v27)
    {
        v33 = v27;
        v1 = v12;
        v48 = 0;
        v4 = v27;
        v50 = v12 + v27 * 16;
        v2 = stack_base + -344;
        v0 = v51;
        while (true)
        {
            v34 = 2;
            v35 = "-";
            v36 = *(v50);
            while (v34 != 0)
            {
                v34 -= 1;
                v37 = *(v36);
                v38 = *(v35);
                v35 = &v35[v39];
                v36 = &v36[v39];
                break;
            }
            v40 = (v37 > v38) - 0 - (v37 < v38);
            if (v3 != 0)
            {
                v41 = strcmp(v3, *((long long *)tmp_50));
            }
            if (v40 == 0 || v3 == 0 || v41 != 0)
            {
                v42 = __fxstat(0x1, 0x1);
            }
            if (v42 == 0)
            {
                if (v40 == 0)
                {
                    v43 = __fxstat(0x1, 0x0);
                }
                else if (v3 == 0 || v41 != 0)
                {
                    v44 = __xstat(0x1, (unsigned int)*(v50));
                    if (v44 != 0)
                    {
                        v50 = &v50[2];
                        if (v33 + 1 == v0)
                        {
                            break;
                        }
                    }
                }
            }
            if (v42 == 0 && v9 == v7 && (v40 == 0 || v44 == 0) && (v43 == 0 || v40 != 0) && (v40 == 0 || v3 == 0 || v41 != 0) && v8 == v6 || v40 != 0 && v3 != 0 && v41 == 0)
            {
                if (false)
                {
                    v47 = 13;
                }
                v48 = (unsigned int)sub_4090c0();
                v5 = v48 + 13;
                sub_409030();
                v47 = v5;
                v50[0] = v47;
                v50[1] = v48;
            }
            if (v42 == 0 && v9 == v7 && (v40 == 0 || v44 == 0) && (v43 == 0 || v40 != 0) && (v40 == 0 || v3 == 0 || v41 != 0) && v8 == v6 || v40 != 0 && v3 != 0 && v41 == 0 || v42 == 0 && v9 == v7 && (v40 == 0 || v44 == 0) && (v43 == 0 || v40 != 0) && (v40 == 0 || v3 == 0 || v41 != 0) && v8 != v6 || v42 == 0 && (v40 == 0 || v44 == 0) && (v43 == 0 || v40 != 0) && (v40 == 0 || v3 == 0 || v41 != 0) && v9 != v7 || v42 == 0 && v40 == 0 && v43 != 0)
            {
                v50 = &v50[2];
                if (v33 + 1 == v0)
                {
                    break;
                }
            }
        }
        v12 = v1;
        v51 = v0;
    }
    else
    {
        v2 = stack_base + -344;
    }
    while (true)
    {
        v52 = (unsigned int)sub_408e20();
        if (v51 == v52)
        {
            v53 = sub_407cd0();
            if (v53 == 0)
            {
                v54 = __errno_location();
                if (v51 <= 2 || *(v54) != 24)
                {
                    dcgettext(0x0, 0x416511, 0x5);
                    sub_405dd0(); /* do not return */
                }
            }
            else
            {
                return sub_408640();
            }
        }
        else if (v52 <= 2)
        {
            dcgettext(0x0, 0x416511, 0x5);
            sub_405dd0(); /* do not return */
        }
        if ((v53 == 0 || v51 != v52) && (v51 == v52 || v52 > 2) && (*(v54) == 24 || v51 != v52) && (v51 != v52 || v51 > 2))
        {
            v55 = v12 + v52 * 16 - 16;
            while (true)
            {
                v52 -= 1;
                v56 = v55;
                sub_407df0();
                v55 -= 16;
                if (v1 != 0)
                {
                    break;
                }
            }
            *((int *)&v1) = sub_4090c0();
            v59 = v51 - v52;
            v0 = v1 + 13;
            sub_408640();
            *((unsigned long *)v12) = v0;
            v51 = v59 + 1;
            *((unsigned long *)(v12 + 8)) = v1;
            memmove(v12 + 16, v56, v59 * 16);
        }
    }
}

extern unsigned int g_416511;

int sub_409030()
{
    unsigned long v2;  // rdx
    unsigned long v3;  // rax
    unsigned long long v5;  // rax

    if (v2 > v3 && v3 <= 1)
    {
        dcgettext(0x0, 0x416511, 0x5);
        sub_405dd0(); /* do not return */
    }
    if (v2 <= v3 || v3 > 1)
    {
        sub_408640();
        v3 = (unsigned int)sub_408e20();
        return v5;
    }
}

extern unsigned int g_416abf;
extern unsigned int g_61c518;
extern char g_61cbb0;
extern unsigned long long g_61cbb8;

int sub_40a9f0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_413520();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_61cbb0 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x416abf, 0x5);
            if (g_61cbb8 != 0)
            {
                sub_40f6d0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_61cbb0 != 0)
    {
        v3 = sub_413520();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_61cbb0 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_61c518);
        error(0x0, *(v2), "%");
    }
}

// int sub_40f510()

int sub_40f35b()
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
    v7 = (unsigned int)sub_40de00();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_411210();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_40de00();
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

// int sub_411260()

int sub_40c390()
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
        v6 = sub_40be30();
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

int sub_410660()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // r13
    unsigned long long v6;  // r12
    unsigned long long v7;  // rbx
    unsigned long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned int *v14;  // rbp
    unsigned long long v16;  // rbx
    unsigned long long v17;  // r12
    unsigned long long v18;  // r13

    v3 = v5;
    v2 = v6;
    v1 = stack_base + 0;
    v0 = v7;
    if ((unsigned int)v9 > 2)
    {
        v9 = mkstemp();
        v11 = v0;
        v12 = v2;
        v13 = v3;
        return v10;
    }
    v14 = __errno_location();
    close((unsigned int)v14);
    *(v14) = *(v14);
    v16 = v0;
    v17 = v2;
    v18 = v3;
    return sub_413ea0();
}

typedef struct struct_2 {
    uint128_t field_0;
    uint128_t field_10;
    uint128_t field_20;
    unsigned long long field_30;
} struct_2;

extern unsigned long long g_61c750;
extern char g_61c759;

int sub_408640()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0xd0]
    void tmp_2;  // tmp #2
    void tmp_1;  // tmp #1
    void tmp_48;  // tmp #48
    void tmp_65;  // tmp #65
    unsigned long long v1;  // [bp-0xc8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0xc0]
    unsigned long long v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    void *v5;  // [bp-0xa8]
    unsigned long long v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    unsigned long long *v8;  // [bp-0x90]
    unsigned long v9;  // [bp-0x88]
    unsigned long v10;  // [bp-0x80]
    unsigned long v11;  // [bp-0x78]
    unsigned long v12;  // [bp-0x70]
    unsigned long long v13;  // [bp-0x68]
    unsigned long v14;  // [bp-0x60]
    unsigned long long v15;  // [bp-0x58]
    unsigned long long v16;  // [bp-0x50]
    unsigned long v17;  // [bp-0x48]
    unsigned long v18;  // [bp-0x40]
    unsigned long v19;  // [bp-0x30]
    unsigned long v20;  // [bp-0x20]
    unsigned long v21;  // [bp-0x18]
    unsigned long v22;  // [bp-0x10]
    unsigned long v23;  // [bp-0x8]
    unsigned long v25;  // r15
    unsigned long v26;  // r14
    unsigned long v27;  // r13
    unsigned long v28;  // r12
    unsigned long v29;  // rbx
    void *v30;  // rdi
    unsigned long long v31;  // rdx
    unsigned long v32;  // rsi
    unsigned long v33;  // rcx
    unsigned long v34;  // r8
    void *v35;  // r9
    unsigned long long v36;  // r14
    unsigned long long v37;  // rbx
    unsigned long v38;  // rax
    unsigned long long v40;  // r15
    unsigned long long v42;  // rbx
    unsigned long long v43;  // r14
    unsigned long long v44;  // r12
    unsigned long long v45;  // rbx
    unsigned long long v46[4];  // r13
    unsigned long long v52;  // rsi
    unsigned long long v54;  // rdx
    unsigned long long v55;  // rax
    unsigned long long v56;  // r13
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rbp
    unsigned long long v61;  // r13
    unsigned long long *v62;  // r12
    unsigned long long *v63;  // r15
    unsigned long long v64;  // r14
    unsigned long long v66;  // r15
    unsigned long long *v67;  // r12
    unsigned long long v68[4];  // r13
    unsigned long long v70;  // rax
    unsigned long long v72;  // rax
    unsigned long long v73;  // rsi
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rax
    unsigned long long v76;  // rdi
    unsigned long long v79;  // r13
    unsigned long long v80[4];  // r15
    unsigned long long v81;  // rax
    unsigned long long *v82;  // rax
    unsigned long long v83;  // rsi
    unsigned long long v84;  // rcx
    unsigned long long v85;  // r12
    unsigned long long v86;  // rax
    unsigned long long v87;  // r14
    unsigned long long v88;  // r15
    unsigned long long v90;  // rdx
    unsigned long long v92;  // rbp
    unsigned long long v93;  // rax
    unsigned long long v94;  // r15
    unsigned long long v95;  // r14
    unsigned long long *v96;  // rsi
    unsigned long long v97;  // r12
    unsigned long long v99;  // rax
    unsigned long long v100;  // rcx
    unsigned long long v101;  // rdx
    unsigned long long v103;  // rdi
    unsigned long long v105;  // rax
    struct v106;  // rdx
    unsigned long long v107;  // rsi
    unsigned long long v108;  // rcx
    uint128_t v109;  // xmm0
    uint128_t v110;  // xmm1
    uint128_t v111;  // xmm2
    uint128_t v112;  // xmm3
    unsigned long long v113;  // r9
    unsigned long long v114;  // rax
    unsigned long long v115;  // rcx
    unsigned long long v116;  // rdx

    v23 = v25;
    v22 = v26;
    v21 = v27;
    v20 = v28;
    v19 = v29;
    v4 = v30;
    v2 = v31;
    v12 = v32;
    v10 = v33;
    v11 = v34;
    v7 = v35;
    if (!(INVALID_IR) &&  amd64g_calculate_condition(0x8, 0x14, rbx, 0x0, cc_ndep) == 0)
    {
        v36 = v2;
        v37 = v2 * 8;
        v5 = (unsigned long long)(unsigned int)sub_411210();
        v38 =  amd64g_calculate_condition(0x5, 0x24, Shr(r14, 0x3d), Shr(r14, 0x3c), cc_ndep);
        if (v38 == 0)
        {
            v40 = 0;
            v3 = (unsigned int)sub_411210();
            v15 = 0;
            v42 = (unsigned int)sub_411210();
            v14 = g_61c750;
            if (v36 != 0)
            {
                v6 = v42;
                v43 = v7;
                v1 = (unsigned int)sub_411210();
                while (true)
                {
                    v44 = v2;
                    v45 = v40 * 8;
                    v46 = v5 + v40 * 56;
                    sub_405e30();
                    v0 = v7 + v45;
                    if (sub_4074d0() != 0)
                    {
                        tmp_2 = v46[3] + *(v46);
                        *((unsigned long long [4])(v1 + v40 * 8)) = v46[3] + *(v46) - 32;
                        *((unsigned long long [4])(v3 + v40 * 8)) = tmp_2 - v46[2] * 32;
                        v40 += 1;
                        v42 = v6;
                        v56 = v1;
                    }
                    else
                    {
                        sub_407df0();
                        if (v12 > v40)
                        {
                            v12 -= 1;
                            sub_407920();
                        }
                        free(*(v46));
                        v52 = v2 - 1;
                        if (v2 - 1 > v40)
                        {
                            v54 = v2 * 8 - 8;
                            do
                            {
                                v55 = *((long long *)(v43 + v45 + 8));
                                *((int128_t *)(v4 + v45 * 2)) = *((int128_t *)(v4 + v45 * 2 + 16));
                                *((unsigned long long *)(v43 + v45)) = v55;
                                v45 += 8;
                            }
                            while (v54 != v45);
                            v2 = v52;
                        }
                        else
                        {
                            v42 = v6;
                            v56 = v1;
                            v2 = v2;
                        }
                    }
                }
                v57 = v2;
                if (v2 != 0)
                {
                    v58 = 0;
                    do
                    {
                        *((unsigned long long *)(v42 + v58 * 8)) = v58;
                        v58 += 1;
                    }
                    while (v58 != v57);
                    if (v2 != 1)
                    {
                        v59 = v56;
                        v60 = 1;
                        v61 = v42;
                        while (true)
                        {
                            v0 = v59;
                            v62 = v42 + v60 * 8;
                            v63 = v42 + v60 * 8 - 8;
                            v42 = *((long long *)(v42 + v60 * 8));
                            v64 = *((long long *)(v42 + v60 * 8 - 8));
                            v59 = v0;
                            if (sub_4082a0() > 0)
                            {
                                *(v63) = v42;
                                v60 = 1;
                                *(v62) = v64;
                            }
                            else
                            {
                                v60 += 1;
                                if (v60 >= v2)
                                {
                                    break;
                                }
                            }
                        }
                        v42 = v61;
                        v56 = v0;
                    }
                    v13 = 0;
                    v95 = v56;
                    v6 = 0;
                    v9 = v42 - 8;
                    while (true)
                    {
                        v66 = *((long long *)v42) * 8;
                        v1 = *((long long *)v42);
                        v67 = v95 + *((long long *)v42) * 8;
                        v68 = *((long long *)(v95 + *((long long *)v42) * 8));
                        if (g_61c759 != 0)
                        {
                            if (v6 != 0)
                            {
                                v70 = sub_4082a0();
                                if (v70 != 0)
                                {
                                    sub_407e70();
                                }
                            }
                            if (v6 == 0 || v70 != 0)
                            {
                                v74 = v68[1];
                                v76 = v15;
                                if (v68[1] > v13)
                                {
                                    v72 = v13;
                                    if (v13 != 0)
                                    {
                                        v73 = v72 * 2;
                                        if (v74 > v72 << 1)
                                        {
                                            while (v73 != 0)
                                            {
                                                v73 *= 2;
                                                if (v74 <= v73)
                                                {
                                                    break;
                                                }
                                            }
                                            if (v73 != 0)
                                            {
                                                v74 = v73;
                                            }
                                            else
                                            {
                                                v0 = v74;
                                                free(v76);
                                                v75 = sub_411210();
                                                v76 = v75;
                                                v15 = v75;
                                                v13 = v0;
                                                v74 = v68[1];
                                            }
                                        }
                                        v74 = v73;
                                    }
                                    v0 = v74;
                                    free(v76);
                                    v75 = sub_411210();
                                    v76 = v75;
                                    v15 = v75;
                                    v13 = v0;
                                    v74 = v68[1];
                                }
                                v16 = v74;
                                memcpy(v76, *(v68), v74);
                                v6 = stack_base + -88;
                                if (v14 != 0)
                                {
                                    *((unsigned long long [4])&v17) = v68[2] + v15 - *(v68);
                                    *((unsigned long long [4])&v18) = v15 + v68[3] - *(v68);
                                }
                            }
                        }
                        else
                        {
                            sub_407e70();
                        }
                        if (*((long long *)(v3 + v66)) >= v68)
                        {
                            v8 = v3 + v66;
                            v0 = v7 + v66;
                            v80 = v5 + v1 * 56;
                            v81 = sub_4074d0();
                            if (v81 != 0)
                            {
                                tmp_1 = v80[3] + *(v80);
                                v79 = v2;
                                *((unsigned long long [4])v67) = v80[3] + *(v80) - 32;
                                *((unsigned long long [4])v8) = tmp_1 - v80[2] * 32;
                            }
                            else
                            {
                                v82 = v42 + 8;
                                v83 = v42 + v2 * 8;
                                if (v2 != 1)
                                {
                                    v84 = v1;
                                    do
                                    {
                                        v90 = *(v82);
                                        if (*(v82) > v84)
                                        {
                                            *(v82) = v90 - 1;
                                            v84 = *((long long *)v42);
                                        }
                                        v82 = &v82[1];
                                    }
                                    while (v83 != v82);
                                    v1 = v84;
                                    v80 = v5 + v84 * 56;
                                }
                                v97 = v2 - 1;
                                sub_407df0();
                                if (v12 > v1)
                                {
                                    v12 -= 1;
                                    sub_407920();
                                }
                                free(*(v80));
                                if (v2 > v1)
                                {
                                    v103 = v4;
                                    v105 = v1 * 8;
                                    v106 = v5 + v1 * 56;
                                    v107 = v2 * 8 - 8;
                                    v108 = v3;
                                    do
                                    {
                                        v109 = *((int128_t *)(v103 + v105 * 2 + 16));
                                        v106 = &v106[1];
                                        v110 = v106->field_0;
                                        v111 = v106->field_10;
                                        *((long long *)(v7 + v105)) = *((long long *)(v7 + v105 + 8));
                                        tmp_48 = v106->field_30;
                                        v112 = v106->field_20;
                                        *((uint128_t *)(v103 + v105 * 2)) = v109;
                                        v106[-1].field_30 = tmp_48;
                                        tmp_65 = *((long long *)(v95 + v105 + 8));
                                        v106[-1].field_0 = v110;
                                        *((long long *)(v95 + v105)) = tmp_65;
                                        v113 = *((long long *)(v108 + v105 + 8));
                                        v106[-1].field_10 = v111;
                                        *((unsigned long long *)(v108 + v105)) = v113;
                                        v105 += 8;
                                        v106[-1].field_20 = v112;
                                    }
                                    while (v107 != v105);
                                }
                                if (v2 == 0)
                                {
                                    break;
                                }
                                v114 = v42;
                                v115 = v9 + v2 * 8;
                                do
                                {
                                    v116 = *((long long *)(v114 + 8));
                                    v114 += 8;
                                    *((unsigned long long *)(v114 - 8)) = v116;
                                }
                                while (v115 != v114);
                                v2 = v97;
                            }
                        }
                        else
                        {
                            *(v67) = &v68[-4];
                            v79 = v2;
                        }
                        if (*((long long *)(v3 + v66)) < v68 || v81 != 0)
                        {
                            if (v2 != 1)
                            {
                                tmp_2 = *(v67);
                                v85 = 1;
                                v0 = tmp_2;
                                v86 = v95;
                                v87 = 1;
                                v88 = v79;
                                while (true)
                                {
                                    v92 = *((long long *)(v42 + v85 * 8));
                                    v93 = sub_4082a0();
                                    if (v93 >= 0 && (v93 != 0 || v1 >= v92))
                                    {
                                        v87 = v85 + 1;
                                        v85 = v85 + 1 + v88 >> 1;
                                        if (v87 >= v88)
                                        {
                                            break;
                                        }
                                    }
                                    if (v93 < 0 || v93 == 0 && v1 < v92)
                                    {
                                        v88 = v85;
                                        v85 = v87 + v85 >> 1;
                                        if (v87 >= v88)
                                        {
                                            break;
                                        }
                                    }
                                }
                                v94 = v87;
                                v95 = v86;
                                v96 = v42 + (v94 - 1) * 8;
                                if (v94 - 1 != 0)
                                {
                                    v99 = v42;
                                    v100 = v9 + v94 * 8;
                                    do
                                    {
                                        v101 = *((long long *)(v99 + 8));
                                        v99 += 8;
                                        *((unsigned long long *)(v99 - 8)) = v101;
                                    }
                                    while (v99 != v100);
                                }
                                *(v96) = v1;
                            }
                            else
                            {
                                *((unsigned long long *)v42) = v1;
                            }
                        }
                    }
                    if (v6 != 0 && g_61c759 != 0)
                    {
                        sub_407e70();
                        free(v15);
                    }
                }
            }
            sub_407df0();
            free(v7);
            free(v5);
            free(v42);
            free(v3);
        }
    }
    if (INVALID_IR || v38 != 0 ||  amd64g_calculate_condition(0x8, 0x14, rbx, 0x0, cc_ndep) != 0)
    {
        sub_411460(); /* do not return */
    }
}

int sub_413d80()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x40]
    char v1;  // [bp-0x39]
    void *v3;  // rdx
    char *v4;  // r13
    char *v5;  // rdi
    char *v6;  // r12
    unsigned long long v7;  // rcx
    char *v8;  // rbp
    char *v9;  // rsi
    char *v10;  // rbx
    unsigned long long v12;  // r9
    unsigned long long v13;  // r8

    v4 = v3;
    v6 = v5;
    v8 = v7;
    v10 = v9;
    if (v9 == v7)
    {
        v0 = memcmp(v5, v3, v9);
        if (v0 == 0)
        {
            *(__errno_location()) = 0;
        }
    }
    if (v9 != v7 || v0 != 0)
    {
        v12 = (char)*((char *)(v6 + v10));
        v13 = (char)*((char *)(v4 + v8));
        *((char *)(v6 + v10)) = 0;
        *((char *)(v4 + v8)) = 0;
        *((unsigned long long *)&v1) = v12;
        *((unsigned long long *)&v0) = v13;
        v3 = (unsigned long long)(unsigned int)sub_413cc0();
        *((char *)(v5 + v9)) = v1;
        *((char *)(v4 + v8)) = v0;
    }
    return v3;
}

typedef struct struct_0 {
    char padding_0[12];
    char field_c;
} struct_0;

int sub_4060a0()
{
    unsigned int v0;  // [bp-0x10]
    unsigned long v2;  // rdi
    struct v3;  // rax

    v0 = v2;
    v3 = sub_40cde0();
    if (v3 != 0)
    {
        v3->field_c = 2;
        v3 = sub_405fb0();
    }
    return v3;
}

typedef struct struct_0 {
    char padding_0[48];
    unsigned long long field_30;
} struct_0;

int thread_entry()
{
    unsigned long v0;  // [bp-0x18]
    struct v2;  // rdi

    v0 = v2->field_30;
    sub_409880();
    return 0;
}

typedef struct struct_6 {
    char field_0;
    char padding_1[19];
    unsigned short field_14;
} struct_6;

typedef struct struct_9 {
    char padding_0[6408064];
    char field_61c780;
} struct_9;

typedef struct struct_5 {
    char field_0;
    char padding_1[31];
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
    char field_31;
    char field_32;
    char field_33;
    char field_34;
    char field_35;
    char field_36;
    char field_37;
    char field_38;
    char padding_39[7];
    unsigned long long field_40;
} struct_5;

typedef struct struct_1 {
    char padding_0[4278656];
    unsigned int field_414980;
} struct_1;

typedef struct struct_7 {
    char padding_0[64];
    unsigned long long field_40;
} struct_7;

typedef struct struct_0 {
    char padding_0[48];
    unsigned short field_30;
    char field_32;
    char field_33;
    char field_34;
    char field_35;
    char field_36;
    char field_37;
    char field_38;
    char padding_39[7];
    unsigned long long field_40;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
    char field_31;
    char field_32;
    char field_33;
    char field_34;
    char field_35;
    char field_36;
    char field_37;
    char field_38;
    char field_39;
    char padding_3a[6];
    unsigned long long field_40;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[8];
    unsigned long long field_38;
    char padding_40[16];
    unsigned int field_50;
    char field_54;
} struct_4;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

extern unsigned int g_405cf0;
extern unsigned long long g_405d80;
extern int512_t g_414980;
extern unsigned int g_416130;
extern unsigned int g_4161a0;
extern unsigned int g_4161c8;
extern unsigned int g_4161f8;
extern unsigned int g_416218;
extern unsigned int g_416240;
extern unsigned int g_416268;
extern unsigned int g_4162a0;
extern unsigned int g_4162c0;
extern unsigned int g_416300;
extern unsigned int g_416328;
extern unsigned int g_416358;
extern unsigned int g_4163a0;
extern unsigned int g_4163d0;
extern unsigned int g_416408;
extern unsigned int g_416430;
extern unsigned int g_416511;
extern unsigned int g_416571;
extern unsigned int g_416602;
extern unsigned int g_4166e7;
extern unsigned int g_416702;
extern unsigned int g_41671d;
extern unsigned int g_416746;
extern unsigned int g_416753;
extern unsigned int g_41676a;
extern unsigned int g_416795;
extern unsigned int g_4167a6;
extern unsigned int g_4167b7;
extern unsigned int g_4167cc;
extern unsigned int g_4167e3;
extern unsigned int g_416800;
extern unsigned int g_41681a;
extern unsigned int g_416839;
extern unsigned int g_41684f;
extern unsigned int g_4179cf;
extern char g_61c400;
extern char g_61c408;
extern unsigned int g_61c420;
extern void g_61c424;
extern int512_t g_61c430;
extern int512_t g_61c438;
extern unsigned long long g_61c440;
extern char g_61c500;
extern unsigned int g_61c518;
extern unsigned int g_61c57c;
extern unsigned long long g_61c5e0;
extern unsigned int g_61c69c;
extern unsigned long long g_61c6a8;
extern uint128_t g_61c6c0;
extern uint128_t g_61c6d0;
extern uint128_t g_61c6e0;
extern uint128_t g_61c6f0;
extern uint128_t g_61c700;
extern uint128_t g_61c710;
extern uint128_t g_61c720;
extern uint128_t g_61c730;
extern char g_61c740;
extern char g_61c748[2];
extern unsigned long long g_61c750;
extern char g_61c758;
extern char g_61c759;
extern char g_61c75a;
extern char g_61c75b;
extern unsigned long long g_61c768;
extern unsigned long long g_61c778;
extern int512_t g_61c77f;
extern char g_61c780;
extern char g_61c78a;
extern void g_61c880;
extern char g_61c88a;
extern char g_61c980;
extern char g_61c98a;
extern void g_61ca80;
extern char g_61ca8a;
extern unsigned long long g_61cb80;
extern char g_61cba0;
extern char g_61cba1;
extern unsigned int g_61cba4;
extern unsigned int g_61cba8;
extern unsigned long long g_61cbc8;
extern unsigned long long g_61cd60;
extern unsigned long long stderr;

int main()
{
    void tmp_10;  // tmp #10
    unsigned long long v0;  // [bp-0x398]
    void tmp_9;  // tmp #9
    void tmp_5;  // tmp #5
    void tmp_23;  // tmp #23
    void tmp_177;  // tmp #177
    void tmp_18;  // tmp #18
    void tmp_20;  // tmp #20
    void tmp_11;  // tmp #11
    struct v1;  // [bp-0x390]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x388]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x380]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x378]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x370]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0x368]
    unsigned long v7;  // [bp-0x360]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x358]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x350]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x348]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // [bp-0x340]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // [bp-0x338]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // [bp-0x330]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v14;  // [bp-0x328]
    unsigned long long v15;  // [bp-0x320]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // [bp-0x2f8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // [bp-0x2c8]
    unsigned long v18;  // [bp-0x2c0]
    unsigned long v19;  // [bp-0x2b8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // [bp-0x2b0]
    unsigned long v21;  // [bp-0x2a8]
    char v22;  // [bp-0x298]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v23;  // [bp-0x288]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v24;  // [bp-0x280]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v25;  // [bp-0x278]
    unsigned long long v26;  // [bp-0x270]
    char v27;  // [bp-0x24f]
    unsigned long long v28;  // [bp-0x238]
    uint128_t v29;  // [bp-0x230]
    unsigned long long v30;  // [bp-0x228]
    uint128_t v31;  // [bp-0x220]
    uint128_t v32;  // [bp-0x210]
    uint128_t v33;  // [bp-0x200]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v34;  // [bp-0x1e8]
    unsigned long v35;  // [bp-0x1d8]
    unsigned long v36;  // [bp-0x1d0]
    unsigned long long v37;  // [bp-0x1c8]
    unsigned long long v38;  // [bp-0x1c0]
    char v39;  // [bp-0x1b8]
    char v40;  // [bp-0x1b7]
    char v41;  // [bp-0x1b6]
    char v42;  // [bp-0x1b5]
    char v43;  // [bp-0x1b4]
    char v44;  // [bp-0x1b3]
    char v45;  // [bp-0x1b2]
    char v46;  // [bp-0x1b1]
    char v47;  // [bp-0x1b0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v48;  // [bp-0x158]
    char v49;  // [bp-0x157]
    void v50;  // [bp-0x150]
    void v51;  // [bp-0x140]
    void v52;  // [bp-0x130]
    void v53;  // [bp-0x120]
    void v54;  // [bp-0x110]
    void v55;  // [bp-0x100]
    void v56;  // [bp-0xf0]
    void v57;  // [bp-0xe0]
    unsigned int v58;  // [bp-0xd0]
    unsigned long long v60;  // rsi
    char *v61[3];  // rbp
    unsigned long long v62;  // rdi
    unsigned long long v63;  // rbx
    struct struct_8 *v65[2];  // rax
    char v66[2];  // rcx
    unsigned long long v67;  // rsi
    char v68[2];  // rdx
    unsigned long long v69;  // rcx
    struct struct_6 *v70;  // r13
    unsigned int *v71[11];  // rax
    unsigned long long v72;  // rdx
    unsigned long long v74;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v75;  // rcx
    unsigned long long v76;  // rdx
    unsigned short v77;  // dx
    unsigned int v79;  // esi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v80;  // rdi
    unsigned short v81;  // si
    unsigned long long v83;  // r14
    unsigned long long v84;  // rbx
    unsigned long long v85;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v87;  // r9
    unsigned long long v90;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v91;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v92;  // r13
    unsigned long long v94;  // r13
    unsigned long long v95;  // rax
    unsigned long v98;  // rax
    unsigned long long v99;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v100;  // r14d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v101;  // r13
    char *v102[3];  // rax
    char v103[3];  // rdx
    unsigned long long v104;  // rax
    unsigned int v105;  // edx
    char *v106;  // rax
    unsigned long long v107;  // rdx
    unsigned long long v109;  // rax
    unsigned long long v110;  // rax
    unsigned long long v111;  // rdx
    unsigned long long v112;  // rdx
    unsigned long long v113;  // rdx
    unsigned long long v114;  // rcx
    unsigned int *v115;  // rdi
    unsigned long long v116;  // rdx
    char v117[3];  // rax
    unsigned long long v118;  // rax
    unsigned long long v119;  // rax
    unsigned long long v120;  // rax
    unsigned long v121;  // d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v122;  // rsi
    char *v124;  // rax
    unsigned long long v125;  // rdx
    char v126;  // dl
    unsigned long long v128;  // r11
    unsigned long long v129;  // rax
    unsigned long long v130;  // rdx
    unsigned long long v131;  // rax
    unsigned int *v132;  // rdi
    unsigned long long v135;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v136;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v137;  // xmm1
    uint128_t v138;  // xmm1
    unsigned long long v139;  // xmm1lq
    char *v140;  // rax
    uint128_t v141;  // xmm1
    unsigned long long v142;  // xmm1lq
    char *v145;  // rax
    char *v147;  // rax
    struct v148;  // rax
    struct v150;  // rdx
    char *v151;  // rax
    struct v152;  // rdx
    unsigned long long v161;  // rbp
    unsigned long long v164;  // rbx
    unsigned long long v165;  // rbp
    unsigned long long v167;  // rbx
    unsigned long long v170;  // rbp
    unsigned long long v172;  // rbp
    unsigned long long v176;  // rbx
    unsigned long long v177;  // rbx
    struct v178;  // rdx
    char *v179;  // rdi
    unsigned long long v180;  // cc_dep1
    unsigned long long v181;  // cc_dep2
    unsigned long long v183;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v184;  // ebx
    unsigned long long v185;  // rbx
    unsigned long long v186;  // rbx
    unsigned long long v187;  // rax
    unsigned int v188;  // eax
    struct v189;  // rax
    unsigned long long v190;  // r12
    struct v191;  // rdx
    unsigned long long *v192;  // rcx
    unsigned int v193;  // eax
    char v194;  // al
    unsigned long long v195;  // rax
    unsigned long long v200;  // rbp
    unsigned int *v201;  // rdi
    unsigned long long v202;  // rcx
    unsigned long long v203;  // rbp
    struct v204;  // rbx
    unsigned long long v205;  // r15
    unsigned long long v206;  // r13
    unsigned short *v207;  // r14
    unsigned long long v210;  // r14
    unsigned long long v211;  // r15
    unsigned long long v212;  // rax
    unsigned long long v213;  // rdx
    unsigned long long v214;  // rdx
    unsigned long long v215;  // rax
    unsigned long long v216;  // rax
    unsigned long long v217;  // r12
    char *v220;  // rdi
    unsigned long long v221;  // rcx
    char *v222;  // rdi
    unsigned long long v223;  // rcx
    char v225;  // cc_dep2
    char v226;  // cc_dep2
    char *v227;  // rdi
    unsigned long long v228;  // rcx
    char v231;  // cc_dep2
    unsigned long long v233;  // rbx
    unsigned long long v235;  // rax
    unsigned long long v239;  // rax
    unsigned long long v242;  // rbp
    unsigned long v243;  // rdx
    unsigned long long v244;  // rcx
    char *v245;  // rdi
    char *v246;  // rsi
    unsigned long long v247;  // cc_dep1
    unsigned long long v248;  // cc_dep2
    unsigned long long v249;  // cc_dep1
    unsigned long long v250;  // rax
    unsigned long long v251;  // rax
    unsigned long long v253;  // rbx
    unsigned long long v254;  // r14
    unsigned long long v256;  // r12
    unsigned long long v260[4];  // r15
    unsigned long long v261;  // rbp
    unsigned long long v264;  // rdx
    unsigned long long v267;  // rdx
    unsigned long long v268;  // r12
    unsigned long long v269;  // rcx
    unsigned long long v270;  // r15
    unsigned long long v272;  // rdx
    unsigned long long v273;  // rax
    unsigned long long v274;  // r15
    unsigned long long v275;  // rbp
    unsigned long long v276;  // rbx
    char *v277;  // rdi
    unsigned long long v278;  // rcx
    unsigned long v279;  // r9
    char *v280;  // rsi
    unsigned long long v281;  // cc_dep1
    unsigned long long v282;  // cc_dep2
    char v284;  // al
    unsigned long long v285;  // r12
    unsigned long v286;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v289;  // r14
    unsigned long long v291;  // xmm0lq
    uint128_t v294;  // xmm2
    unsigned long long v295;  // xmm2lq
    uint128_t v296;  // xmm0
    unsigned long v297;  // xmm0lq
    unsigned long long v298;  // rcx
    unsigned long long v300;  // rax
    unsigned long long v303;  // rbp
    unsigned long long v305;  // r14
    unsigned long long *v314;  // rbx
    unsigned long v316;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v317;  // rbx
    unsigned long long v318;  // rbx
    void *v322;  // rax
    struct v324;  // rdx
    unsigned long long v325;  // rax
    unsigned long long v326;  // rax
    unsigned int v329;  // cc_dep1

    v61 = v60;
    v63 = v62;
    v9 = getenv("POSIXLY_CORRECT");
    v3 = 696 < sub_40dbe0() - 200112;
    sub_40dc60();
    v7 = setlocale(0x6, 0x416571);
    bindtextdomain(0x416602, 0x416130);
    textdomain(0x416602);
    g_61c518 = 2;
    g_61cba1 = sub_40bd10();
    g_61cba0 = sub_40bd10();
    v65 = localeconv();
    v66 = *(v65);
    v67 = (char)*((char *)*(v65));
    g_61cba8 = (char)*((char *)*(v65));
    if (v67 == 0 || v66[1] != 0)
    {
        g_61cba8 = 46;
    }
    v68 = v65[1];
    v69 = (char)*((char *)v65[1]);
    g_61cba4 = (char)*((char *)v65[1]);
    if (v69 == 0 || v68[1] != 0)
    {
        g_61cba4 = -1;
    }
    g_61c758 = 0;
    v70 = (unsigned long long)__ctype_b_loc();
    v71 = __ctype_toupper_loc();
    v72 = 0;
    while (true)
    {
        v74 = 1;
        v75 = (unsigned short)*((short *)&(&*(v70)->field_0)[2 * v72]);
        if (((char)*((short *)&(&*(v70)->field_0)[2 * v72]) & 1) == 0)
        {
            if (v72 != 10)
            {
                v74 = 0;
            }
            else
            {
                v76 = *(v70)->field_14;
                g_61ca8a = 1;
                g_61c88a = 0;
                v77 = v76 >> 14;
                *((unsigned long long *)&g_61c98a) = ((unsigned int)rdx ^ 1) & 1;
                g_61c78a = (*(v71))[5];
                v72 = 11;
            }
        }
        if (((char)*((short *)&(&*(v70)->field_0)[2 * v72]) & 1) != 0 || v72 != 10)
        {
            *((unsigned long long *)&(&g_61ca80)[v72]) = v74;
            v79 = v75;
            v80 = v72 * 4;
            v81 = (unsigned short)v75 % 0x4000;
            *((unsigned long long *)&(&g_61c980)[v72]) = (unsigned int)((v81 ^ 1) & 1);
            v122 = 0;
            if ((v75 & 8) == 0)
            {
                v122 = ((unsigned int)v75 & 1 | 0) ^ 1;
            }
            tmp_10 = *(v71);
            *((unsigned long long *)&(&g_61c880)[v72]) = v122;
            v72 += 1;
            *(&((char *)&g_61c77f)[v72]) = *((int *)(tmp_10 + v80));
            if (v72 == 0x100)
            {
                break;
            }
        }
    }
    if (g_61cba0 != 0)
    {
        v2 = v63;
        v83 = 1;
        do
        {
            v84 = nl_langinfo((unsigned int)v83 + 131085);
            v85 = strlen(v80);
            (&g_61c430)[2 * v83] = v75;
            *((unsigned int *)&(&g_61c438)[2 * v83]) = v83;
            if (v85 != 0)
            {
                v80 = v84;
                v90 = 0;
                v75 = sub_411210();
                do
                {
                    v122 = (unsigned long long)*(v80);
                    v87 = v75;
                    if (((&*(v70)->field_0)[2 * (unsigned long long)*(v80)] & 1) == 0)
                    {
                        v90 += 1;
                        *(v75) = *((char *)(v122 + &g_61c780));
                        v75 += v90;
                        v87 = v75 + v90;
                    }
                    v80 = &v80[1];
                }
                while (v84 + v85 != v80);
            }
            else
            {
                v87 = v75;
            }
            v83 += 1;
            *(v87) = 0;
        }
        while (v83 != 13);
        v63 = v2;
        qsort(0x61c440, 0xc, 0x10, 0x405cf0);
    }
    v91 = 14;
    v92 = 0;
    sigemptyset(0x61c6c0);
    while (true)
    {
        sigaction();
        if (v48 != 1)
        {
            sigaddset(0x61c6c0, v91);
        }
        v92 += 1;
        if (v92 == 11)
        {
            break;
        }
        v91 = *((int *)(0x4 * v92 + (char *)&g_414980));
    }
    v48 = &g_405d80;
    v91 = 14;
    v58 = 0;
    v94 = 0;
    *((uint128_t *)&v50) = g_61c6c0;
    *((uint128_t *)&v51) = g_61c6d0;
    *((uint128_t *)&v52) = g_61c6e0;
    *((uint128_t *)&v53) = g_61c6f0;
    *((uint128_t *)&v54) = g_61c700;
    *((uint128_t *)&v55) = g_61c710;
    *((uint128_t *)&v56) = g_61c720;
    *((uint128_t *)&v57) = g_61c730;
    while (true)
    {
        v95 = sigismember(0x61c6c0, v91);
        if (v95 == 0)
        {
            v94 += 1;
            if (v94 == 11)
            {
                break;
            }
        }
        else
        {
            v94 += 1;
            sigaction();
            if (v94 == 11)
            {
                break;
            }
        }
        v91 = (unsigned int)*((int *)&((char *)&g_414980)[4 * v94]);
    }
    signal(0x11, 0x0);
    sub_413f20();
    v29 = 0;
    v28 = -1;
    v30 = -1;
    v31 = 0;
    v32 = 0;
    v33 = 0;
    v98 =  amd64g_calculate_condition(0x5, 0x24, Shr(rbx, 0x3d), Shr(rbx, 0x3c), cc_ndep);
    if (!(INVALID_IR) && v98 == 0)
    {
        v99 = 0;
        v8 = 0;
        v100 = 0;
        v101 = (unsigned int)sub_411210();
        v2 = 0;
        v6 = 0;
        v4 = 0;
        v12 = 0;
        v5 = 0;
        v10 = stack_base + -632;
        while (true)
        {
            v16 = -1;
            if (v9 != 0 && v100 != -1 && v99 != 0)
            {
                v102 = (long long)(int)g_61c57c;
                if (v2 == 0 && v3 == 1)
                {
                    if (g_61c57c != (unsigned int)v63)
                    {
                        v103 = *((long long *)((char *)v61 + 0x8 * v102));
                    }
                    else if (v4 == 0)
                    {
                        v2 = 0;
                    }
                }
            }
            if (unknown)
            {
                v100 = (unsigned int)sub_412f30();
                if ((unsigned int)v100 != -1)
                {
                    v104 = v100 + 131;
                    switch ((unsigned int)(v100 + 131))
                    {
                    case 0:
                        v1 = v122;
                        v0 = 0;
                        sub_4110d0();
                        exit(0x0); /* do not return */
                    case 1:
                        sub_40a0d0(); /* do not return */
                    case 132:
                        v107 = g_61cd60;
                        if (*((char *)g_61cd60) == 43)
                        {
                            v117 = (long long)(int)g_61c57c;
                            if (g_61c57c != (unsigned int)v63)
                            {
                                v117 = v61[(long long)(int)g_61c57c];
                                v11 = 0;
                                if (v61[(long long)(int)g_61c57c] == 45)
                                {
                                    v117 = (unsigned int)(char)((unsigned int)v117[1] - 48 <= 9);
                                    v11 = (char)((unsigned int)v117[1] - 48 <= 9);
                                }
                            }
                            else
                            {
                                v11 = 0;
                            }
                            v131 = v117 & v11;
                            tmp_9 = v3 | v131;
                            *((unsigned long long *)&v3) = v3 | v131;
                            if (tmp_9 != 0)
                            {
                                v75 = 18;
                                for (v132 = &v23; v75 != 0; v132 = &v132[v121])
                                {
                                    v75 -= 1;
                                    v23 = 0;
                                }
                                v25 = -1;
                                v136 = sub_407c00();
                                if (v136 == 0)
                                {
                                    v107 = g_61cd60;
                                    if (v24 == 0 && v23 == 0)
                                    {
                                        v23 = -1;
                                    }
                                }
                                else if (*(v136) == 46)
                                {
                                    v136 = sub_407c00();
                                }
                            }
                        }
                    case 198: case 230:
                        if (v2 != 0 && (unsigned int)0 != (unsigned int)v100)
                        {
                            sub_405d00(); /* do not return */
                        }
                        if (v2 == 0 || (unsigned int)0 == (unsigned int)v100)
                        {
                            *((unsigned long *)&v2) = v100;
                        }
                    case 208: case 213: case 217: case 229: case 231: case 233: case 234: case 235: case 236: case 241: case 245:
                        *((unsigned long *)&v48) = v100;
                        v49 = 0;
                        sub_405c00();
                        break;
                    case 214:
                        *((unsigned long long *)&v11[0]) = g_61cd60;
                        v13 = v16;
                        v109 = sub_411b40();
                        if (v109 == 0)
                        {
                            if (v34 <= 18014398509481983 && (unsigned int)(char)*((char *)(v48 - 1)) - 48 <= 9)
                            {
                                v34 *= 0x400;
                            }
                            if (v34 <= 18014398509481983 || (unsigned int)(char)*((char *)(v48 - 1)) - 48 > 9)
                            {
                                *((int *)&g_61c778) = ((unsigned long long)g_61c420 * 34 < v34? v34 : (unsigned long long)g_61c420 * 34);
                            }
                        }
                        if (((unsigned int)(char)*((char *)(v48 - 1)) - 48 <= 9 || v109 != 0) && (v34 > 18014398509481983 || v109 != 0))
                        {
                            sub_411ab0(); /* do not return */
                        }
                        if (false)
                        {
                            sub_40d840();
                            if (!(INVALID_IR))
                            {
                                v137 = 0;
                                v137 = v34;
                            }
                            else
                            {
                                v138 = 0;
                                v139 = v34 >> 1 | (unsigned long long)((unsigned int)v34 & 1);
                                v137 = xmm1 * 2;
                            }
                            v141 = 0;
                            v142 = 0x43e0000000000000;
                            if (((char)(INVALID_IR) & 1) != 0)
                            {
                                v34 = tmp_5 / 0x4059000000000000;
                            }
                            else
                            {
                                v34 = tmp_5 / 0x4059000000000000 - xmm1;
                                v34 ^= 0x8000000000000000;
                            }
                        }
                    case 215:
                        sub_40a010();
                        break;
                    case 238:
                        v114 = 18;
                        for (v115 = &v23; v114 != 0; v115 = &v115[v121])
                        {
                            v114 -= 1;
                            v23 = 0;
                        }
                        v25 = -1;
                        v124 = sub_407c00();
                        v130 = *((long long *)&v23);
                        v23 = *((long long *)&v23) - 1;
                        if (v130 == 0)
                        {
                            sub_405d30(); /* do not return */
                        }
                        else if (*(v124) == 46)
                        {
                            sub_407c00();
                            v135 = v24;
                            v24 -= 1;
                            if (v135 == 0)
                            {
                                sub_405d30(); /* do not return */
                            }
                        }
                    case 240:
                        v8 = 1;
                        break;
                    case 242:
                        v112 = g_61cd60;
                        if (v6 != 0)
                        {
                            v6 = v112;
                            v119 = strcmp(NULL, v112);
                            v112 = v6;
                            if (v119 != 0)
                            {
                                error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x4161f8, 0x5));
                            }
                        }
                        if (v119 == 0 || v6 == 0)
                        {
                            *((unsigned long long *)&v6[0]) = v112;
                        }
                    case 246:
                        g_61c75a = 1;
                        break;
                    case 247:
                        v104 = (char)*((char *)g_61cd60);
                        if (*((char *)g_61cd60) != 0)
                        {
                            if (*((char *)(g_61cd60 + 1)) != 0)
                            {
                                *((unsigned long long *)&v11[0]) = g_61cd60;
                                v129 = strcmp(v11, "\\0");
                                if (v129 == 0)
                                {
                                    v104 = 0;
                                }
                                else
                                {
                                    v164 = (unsigned int)sub_40f880();
                                    error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x416753, 0x5));
                                }
                            }
                            if (*((char *)(g_61cd60 + 1)) == 0 || v129 == 0)
                            {
                                if (*((int *)&g_61c424) != v104 && *((int *)&g_61c424) != 128)
                                {
                                    error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x41676a, 0x5));
                                }
                                if (*((int *)&g_61c424) == v104 || *((int *)&g_61c424) == 128)
                                {
                                    *((unsigned long long *)&g_61c424) = v104;
                                }
                            }
                        }
                        else
                        {
                            error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x416746, 0x5));
                        }
                    case 248:
                        g_61c759 = 1;
                        break;
                    case 252:
                        v116 = g_61cd60;
                        while (true)
                        {
                            v122 = (char)*((char *)v116);
                            if ((unsigned int)(char)*((char *)v116) - 48 > 9)
                            {
                                break;
                            }
                            v116 += 1;
                        }
                        v125 = 0;
                        v126 = v122 != 0;
                        g_61c57c = (long long)(int)g_61c57c - rdx;
                    case 253:
                        g_61c500 = 0;
                        break;
                    case 259:
                        v100 = 99;
                        v100 = (char)*((char *)(4279064 + (unsigned long long)(unsigned int)sub_40a910()));
                    case 260:
                        v113 = g_61cd60;
                        if (g_61c748 != 0)
                        {
                            v11 = v113;
                            v120 = strcmp(g_61c748, v113);
                            v113 = v11;
                            if (v120 != 0)
                            {
                                error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x4161a0, 0x5));
                            }
                        }
                        if (v120 == 0 || g_61c748 == 0)
                        {
                            *((unsigned long long *)&g_61c748[0]) = v113;
                        }
                    case 261:
                        g_61c740 = 1;
                        break;
                    case 262:
                        v4 = g_61cd60;
                        break;
                    case 263:
                        v13 = g_61cd60;
                        v14 = v16;
                        v11 = sub_411b40();
                        v128 = 17;
                        if (getrlimit(0x7, (unsigned int)&v48) == 0)
                        {
                            v128 = (unsigned int)((unsigned long long)(unsigned int)v48 - 3);
                        }
                        if (v11 == 0)
                        {
                            g_61c420 = (unsigned int)v17;
                            if ((unsigned int)v17 <= 1)
                            {
                                v161 = (unsigned int)sub_40f880();
                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416702, 0x5));
                                v170 = (unsigned int)sub_40f880();
                                error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x41671d, 0x5));
                            }
                        }
                        else if (v11 != 1)
                        {
                            sub_411ab0(); /* do not return */
                        }
                        if (v11 == 1 || v11 == 0 && (unsigned int)v17 > v128 && (unsigned int)v17 > 1)
                        {
                            v2 = v128;
                            v165 = (unsigned int)sub_40f880();
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4166e7, 0x5));
                            v172 = (unsigned int)sub_40d330();
                            error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x4161c8, 0x5));
                        }
                    case 264:
                        v111 = g_61cd60;
                        if (v5 != 0)
                        {
                            v5 = v111;
                            v118 = strcmp(NULL, v111);
                            v111 = v5;
                            if (v118 != 0)
                            {
                                error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x416218, 0x5));
                            }
                        }
                        if (v5 == 0 || v118 == 0)
                        {
                            *((unsigned long long *)&v5[0]) = v111;
                        }
                    case 265:
                        v100 = (char)*((char *)(4278976 + (unsigned long long)(unsigned int)sub_40a910()));
                    case 266:
                        v11 = g_61cd60;
                        v12 = v16;
                        v110 = sub_411680();
                        if (v110 == 1)
                        {
                            v12 = -1;
                        }
                        else if (v110 == 0)
                        {
                            v12 = v48;
                            error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x416240, 0x5));
                        }
                        else
                        {
                            sub_411ab0(); /* do not return */
                        }
                    default:
                        sub_40a0d0(); /* do not return */
                    }
                }
            }
            if (unknown)
            {
                v102 = (long long)(int)g_61c57c;
            }
            if (unknown)
            {
                if ((unsigned int)v63 > (unsigned int)v102)
                {
                    v105 = (unsigned int)v102 + 1;
                    v106 = *((long long *)((char *)v61 + 0x8 * v102));
                    g_61c57c = v105;
                    *((char **)(v101 + v99 * 8)) = v106;
                    v99 += 1;
                }
                else
                {
                    if (v4 == 0)
                    {
                        break;
                    }
                    if (v99 == 0 && v4 != 0)
                    {
                        if ((unsigned long long)(unsigned int)sub_407cd0() != 0)
                        {
                            sub_4103a0();
                            if (sub_410440() != 0)
                            {
                                sub_407df0();
                                if (v48 != 0)
                                {
                                    free(v101);
                                    v101 = (long long)v50;
                                    while (true)
                                    {
                                        v178 = *((long long *)(v101 + v99 * 8));
                                        v75 = 2;
                                        v179 = "-";
                                        v122 = *((long long *)(v101 + v99 * 8));
                                        while (v75 != 0)
                                        {
                                            v75 -= 1;
                                            v180 = v122->field_0;
                                            v181 = *(v179);
                                            v179 = &v179[v121];
                                            v122 = &(&v122->field_0)[v121];
                                            break;
                                        }
                                        if ((v180 > v181) - 0 - (v180 < v181) != 0)
                                        {
                                            v99 += 1;
                                            if (v178->field_0 != 0)
                                            {
                                                if (v48 == v99)
                                                {
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                v185 = (unsigned int)sub_40f700();
                                                error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x416300, 0x5));
                                            }
                                        }
                                        else
                                        {
                                            v186 = (unsigned int)sub_40f630();
                                            error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x4162c0, 0x5));
                                        }
                                    }
                                }
                                else
                                {
                                    v177 = (unsigned int)sub_40f630();
                                    error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x4167a6, 0x5));
                                }
                            }
                            else
                            {
                                v176 = (unsigned int)sub_40f630();
                                error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x4162a0, 0x5));
                            }
                        }
                        else
                        {
                            sub_407dd0(); /* do not return */
                        }
                    }
                }
            }
            if (unknown)
            {
                v167 = (unsigned int)sub_40f630();
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416795, 0x5));
                __fprintf_chk(stderr, 0x1, 0x4179cf, dcgettext(0x0, 0x416268, 0x5));
            }
            if (unknown)
            {
                if (v24 == 0 && v23 == 0)
                {
                    v23 = -1;
                }
                v140 = sub_405c00();
                if (*(v140) != 44)
                {
                    v25 = -1;
                    v26 = 0;
                }
                else
                {
                    v25 -= 1;
                    if (*((char *)sub_407c00()) == 46)
                    {
                        sub_407c00();
                    }
                    v140 = sub_405c00();
                }
            }
            if (unknown)
            {
                v23 = -1;
            }
            if (unknown)
            {
                if (*(v140) == 0)
                {
                    v148 = sub_411410();
                    v150 = g_61c750;
                    for (v75 = &g_61c750; v150 != 0; v150 = v150->field_40)
                    {
                        v75 = &v150->field_40;
                    }
                }
                else
                {
                    sub_405d30(); /* do not return */
                }
            }
            if (unknown)
            {
                v145 = sub_405c00();
                if (*(v145) == 0 && v11 != 0)
                {
                    tmp_23 = v61[(long long)(int)g_61c57c];
                    g_61c57c = (int)g_61c57c + 1;
                    v11 = tmp_23;
                    v147 = sub_407c00();
                    if (v147 != 0)
                    {
                        if (*(v147) == 46)
                        {
                            sub_407c00();
                        }
                        if (v26 == 0 && v25 != 0)
                        {
                            v25 = -2;
                        }
                        v151 = sub_405c00();
                        if (*(v151) != 0)
                        {
                            sub_405d30(); /* do not return */
                        }
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
            }
            if (unknown)
            {
                v107 = g_61cd60;
            }
            if (unknown)
            {
                *((unsigned long long *)(v101 + 0 * 8)) = v107;
                v99 = 1;
            }
            if (unknown)
            {
                v27 = 1;
                v148 = sub_411410();
                v152 = g_61c750;
                for (v75 = &g_61c750; v152 != 0; v152 = v152->field_40)
                {
                    v75 = &v152->field_40;
                }
            }
            *(v75) = v148;
            v148->field_40 = 0;
        }
        if (g_61c750 != 0)
        {
            v184 = 0;
            while (true)
            {
                v187 = sub_405af0();
                if (v122->field_37 == 0 && v187 != 0)
                {
                    v122->field_20 = *((long long *)&((char *)&v31)[8]);
                    v122->field_28 = v32;
                    v122->field_30 = *(&((char *)&v32)[8]);
                    v122->field_31 = *(&((char *)&v32)[9]);
                    v122->field_36 = *(&((char *)&v32)[14]);
                    v122->field_32 = *(&((char *)&v32)[10]);
                    v122->field_34 = *(&((char *)&v32)[12]);
                    v122->field_35 = *(&((char *)&v32)[13]);
                    v122->field_37 = *(&((char *)&v32)[15]);
                    v122->field_38 = v33;
                    v122->field_33 = *(&((char *)&v32)[11]);
                    v122 = v122->field_40;
                    v184 |= (char)*(&((char *)&v32)[11]);
                    if (v122 == 0)
                    {
                        break;
                    }
                }
                if (v187 == 0 || v122->field_37 != 0)
                {
                    v188 = v122->field_33;
                    v122 = v122->field_40;
                    v184 |= v188;
                    if (v122 == 0)
                    {
                        break;
                    }
                }
            }
            v190 = 0;
            if (v75->field_32 + v75->field_34 + v75->field_35 + v75->field_36 + ((unsigned int)v75->field_33 | *((int *)&v75->field_38) | (unsigned int)v122) <= 1)
            {
                do
                {
                    v75 = v75->field_40;
                    v193 = v75->field_38;
                    v194 = v75->field_38 | v75->field_33;
                    v195 = rax | (unsigned int)v122;
                }
                while (v195 + v75->field_36 + v75->field_32 + v75->field_34 + v75->field_35 <= 1 && v75 != 0);
                if (v75 != 0)
                {
                    v75->field_37 = 0;
                    v75->field_30 = 0;
                    sub_405b50();
                    sub_405d00(); /* do not return */
                }
            }
            v75->field_37 = 0;
            v75->field_30 = 0;
            sub_405b50();
            sub_405d00(); /* do not return */
        }
        v183 = sub_405af0();
        if (!(v183 != 0))
        {
            v189 = sub_411410();
            v191 = g_61c750;
            for (v192 = &g_61c750; v191 != 0; v191 = v191->field_40)
            {
                v192 = &v191->field_40;
            }
            *(v192) = v189;
            v75 = g_61c750;
            v190 = 1;
            v189->field_40 = 0;
            v184 = (char)*(&((char *)&v32)[11]);
        }
        else if (g_61c740 != 0)
        {
            v190 = 0;
            v184 = 0;
        }
        else
        {
            g_61c75b = *(&((char *)&v32)[15]);
        }
    }
    if ((g_61c750 == 0 && v98 == 0 && !(INVALID_IR) && v183 != 0 && g_61c740 != 0 || v98 == 0 && !(INVALID_IR) && (v75->field_32 + v75->field_34 + v75->field_35 + v75->field_36 + ((unsigned int)v75->field_33 | *((int *)&v75->field_38) | (unsigned int)v122) <= 1 || g_61c750 == 0) && (v183 == 0 || g_61c750 != 0) && g_61c740 != 0) && v2 == 0 && v6 == 0)
    {
        if (v7 == 0 || (unsigned long long)setlocale(0x3, 0x416571) == 0)
        {
            dcgettext(0x0, 0x4167b7, 0x5);
            error(0x0, 0x0, "%");
        }
        if (g_61cba1 == 0)
        {
            dcgettext(0x0, 0x4167e3, 0x5);
            error(0x0, 0x0, "%");
        }
        else
        {
            setlocale(0x3, 0x0);
            v200 = (unsigned int)sub_40f880();
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4167cc, 0x5));
        }
        v201 = &v34;
        v202 = 18;
        v122 = &v28;
        v3 = &v34;
        for (v203 = 1; v202 != 0; v122 = &v122[v121])
        {
            v202 -= 1;
            v34 = v28;
            v201 = &v201[v121];
        }
        if (g_61c750 != 0)
        {
            v11 = v184;
            v204 = g_61c750;
            v7 = stack_base + -759;
            v9 = v99;
            v10 = v101;
            do
            {
                v205 = v204->field_0;
                v206 = v204->field_10;
                if (v204->field_39 != 0)
                {
                    v16 = 43;
                    v207 = (unsigned long long)__stpcpy_chk(v7, sub_40d370(), 0x2d);
                    v17 = 2124589;
                    v4 = (unsigned long long)__stpcpy_chk((unsigned int)&v17, sub_40d370(), 0x2c);
                    if (v204->field_10 != -1)
                    {
                        *(v207) = 11552;
                        strcpy(&v207[1], (unsigned long long)(unsigned int)sub_40d370());
                        *(v4) = 44;
                        strcpy(&v4[1], (unsigned long long)(unsigned int)sub_40d370());
                    }
                    v210 = (unsigned int)sub_40f860();
                    v211 = (unsigned int)sub_40f860();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416328, 0x5));
                    v205 = v204->field_0;
                    v206 = v204->field_10;
                }
                v212 = v190;
                if (v206 < v205 && v205 != -1)
                {
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416430, 0x5));
                    v206 = v204->field_10;
                    v212 = 1;
                }
                v122 = 1;
                v213 = 0xffff00ff0000 & *((long long *)&v204->field_30);
                if ((0xffff00ff0000 & *((long long *)&v204->field_30)) == 0)
                {
                    v122 = v204->field_36;
                }
                if (*((int *)&g_61c424) == 128 && v212 == 0 && (v204->field_18 == 0 || v206 != 0) && (v122 == 0 && v204->field_30 == 0 || v204->field_30 == 0 && v204->field_8 != 0 || v204->field_31 == 0 && v204->field_18 != 0))
                {
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x416358, 0x5));
                    v213 = 0xffff00ff0000 & *((long long *)&v204->field_30);
                }
                if (v213 != 0 && (v190 == 0 || v212 == 0))
                {
                    v214 = v204->field_10 + 1;
                    v215 = v204->field_0 + 1;
                    if (v204->field_0 + 1 == 0)
                    {
                        v215 = 1;
                    }
                    if (v214 == 0 || v214 > v215)
                    {
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4163a0, 0x5));
                    }
                }
                if (v37 == v204->field_20 && v37 != 0)
                {
                    v37 = 0;
                }
                if (v38 == v204->field_28 && v38 != 0)
                {
                    v38 = 0;
                }
                v203 += 1;
                v39 &= (char)((unsigned int)v204->field_30 ^ 1);
                v40 &= (char)((unsigned int)v204->field_31 ^ 1);
                v45 &= (char)((unsigned int)v204->field_36 ^ 1);
                v41 &= (char)((unsigned int)v204->field_32 ^ 1);
                v43 &= (char)((unsigned int)v204->field_34 ^ 1);
                v44 &= (char)((unsigned int)v204->field_35 ^ 1);
                v42 &= (char)((unsigned int)v204->field_33 ^ 1);
                v47 &= (char)((unsigned int)v204->field_38 ^ 1);
                tmp_177 = v204->field_37;
                v204 = v204->field_40;
                v46 &= (char)((unsigned int)tmp_177 ^ 1);
            }
            while (v204 != 0);
            v99 = v9;
            v101 = v10;
            v184 = (char)v11;
        }
        v216 = sub_405af0();
        v217 = v46;
        if (v216 == 0)
        {
            if (g_61c75a == 0 && g_61c759 == 0)
            {
                v46 = 0;
            }
            sub_405b50();
            v220 = &v17;
            v221 = -1;
            while (v221 != 0)
            {
                v221 -= 1;
                v225 = v17;
                v220 = &v220[v121];
                break;
            }
            error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x41681a, 0x416800, !(rcx) - 1, 0x5));
            *((unsigned long long *)&v46) = v217;
        }
        else if (v46 != 0)
        {
            if (g_61c75a == 0)
            {
                if (g_61c759 != 0 && g_61c750 != 0)
                {
                    sub_405b50();
                    v227 = &v17;
                    v228 = -1;
                    while (v228 != 0)
                    {
                        v228 -= 1;
                        v231 = v17;
                        v227 = &v227[v121];
                        break;
                    }
                    error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x41681a, 0x416800, !(rcx) - 1, 0x5));
                    v46 = v46;
                }
            }
            else
            {
                if (g_61c750 != 0)
                {
                    sub_405b50();
                    v222 = &v17;
                    v223 = -1;
                    while (v223 != 0)
                    {
                        v223 -= 1;
                        v226 = v17;
                        v222 = &v222[v121];
                        break;
                    }
                    error(0x0, 0x0, (unsigned long long)dcngettext(0x0, 0x41681a, 0x416800, !(rcx) - 1, 0x5));
                    v46 = 1;
                }
            }
        }
        if (v46 != 0 && g_61c75a == 0 && g_61c759 == 0 && g_61c750 != 0)
        {
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4163d0, 0x5));
        }
    }
    if ((g_61c750 == 0 && v98 == 0 && !(INVALID_IR) && v183 != 0 && g_61c740 != 0 || v98 == 0 && !(INVALID_IR) && (v75->field_32 + v75->field_34 + v75->field_35 + v75->field_36 + ((unsigned int)v75->field_33 | *((int *)&v75->field_38) | (unsigned int)v122) <= 1 || g_61c750 == 0) && (v183 == 0 || g_61c750 != 0) && g_61c740 != 0) && v2 == 0 && v6 != 0 || (g_61c750 == 0 && v98 == 0 && !(INVALID_IR) && v183 != 0 && g_61c740 != 0 || v98 == 0 && !(INVALID_IR) && (v75->field_32 + v75->field_34 + v75->field_35 + v75->field_36 + ((unsigned int)v75->field_33 | *((int *)&v75->field_38) | (unsigned int)v122) <= 1 || g_61c750 == 0) && (v183 == 0 || g_61c750 != 0) && g_61c740 != 0) && v2 != 0)
    {
        if (v2 == 0)
        {
            v2 = 111;
        }
        g_61c408 = v2;
        sub_405d00(); /* do not return */
    }
    if ((g_61c750 == 0 && v98 == 0 && !(INVALID_IR) && v183 != 0 && g_61c740 != 0 || v98 == 0 && !(INVALID_IR) && (v75->field_32 + v75->field_34 + v75->field_35 + v75->field_36 + ((unsigned int)v75->field_33 | *((int *)&v75->field_38) | (unsigned int)v122) <= 1 || g_61c750 == 0) && (v183 == 0 || g_61c750 != 0) && g_61c740 != 0) && v2 == 0 && v6 == 0 || v98 == 0 && !(INVALID_IR) && (v75->field_32 + v75->field_34 + v75->field_35 + v75->field_36 + ((unsigned int)v75->field_33 | *((int *)&v75->field_38) | (unsigned int)v122) <= 1 || g_61c750 == 0) && (v183 == 0 || g_61c750 != 0) && g_61c740 == 0)
    {
        g_61c75b = *(&((char *)&v32)[15]);
        if (v184 != 0)
        {
            v233 = (unsigned int)sub_40f900();
            if (v233 != 0)
            {
                v3 = &v34;
                sub_40fc10();
                v235 = sub_40fd70();
                if (v235 == 0)
                {
                    sub_40aa90();
                    sub_40b360();
                }
                else
                {
                    v122 = "close failed";
                }
            }
        }
    }
    if (unknown)
    {
        dcgettext(0x0, v122, 0x5);
        sub_405dd0(); /* do not return */
    }
    if (unknown)
    {
        if (g_61c768 == 0)
        {
            v239 = getenv("TMPDIR");
            sub_40a010();
        }
        if (v99 == 0)
        {
            v99 = 1;
            free(v101);
            v101 = (unsigned int)sub_411210();
            *((char **)v101) = "-";
        }
        if (g_61c778 != 0)
        {
            *((int *)&g_61c778) = ((unsigned long long)g_61c420 * 34 < g_61c778? g_61c778 : (unsigned long long)g_61c420 * 34);
        }
        if (!(v2 != 0))
        {
            v242 = v101;
            v15 = "-";
            while (true)
            {
                v243 = *((long long *)v242);
                v244 = 2;
                v245 = "-";
                v246 = *((long long *)v242);
                while (v244 != 0)
                {
                    v244 -= 1;
                    v247 = *(v246);
                    v248 = *(v245);
                    v245 = &v245[v121];
                    v246 = &v246[v121];
                    break;
                }
                v249 = (v247 > v248) - 0 - (v247 < v248);
                if ((char)v249 != 0)
                {
                    v250 = euidaccess(v243, 0x4);
                    if (v250 != 0)
                    {
                        v316 = "cannot read";
                    }
                }
                if ((char)v249 == 0 || v250 == 0)
                {
                    v242 += 8;
                    if (v99 == 1)
                    {
                        v251 = v6;
                        if (v6 != 0)
                        {
                            v251 = open(v251, 0x80041, 0x1b6);
                            if (v251 < 0)
                            {
                                dcgettext(0x0, 0x416511, 0x5);
                                sub_405dd0(); /* do not return */
                            }
                            else if (v251 != 1)
                            {
                                sub_408e10();
                            }
                        }
                        if (v6 == 0 || v251 >= 0)
                        {
                            if (v8 == 0)
                            {
                                if (v12 == 0)
                                {
                                    *((int *)&v12) = (sub_40d6f0() <= 8? v251 : 8);
                                }
                                v14 = v101;
                                v20 = 0;
                                v8 = 1;
                                v270 = 0;
                                *((int *)&v7) = (v12 <= 72057594037927935? v12 : 72057594037927935);
                                v9 = (v12 <= 72057594037927935? v12 : 72057594037927935) * 0x100;
                                v10 = (v12 <= 72057594037927935? v12 : 72057594037927935) * 2;
                                v11 = stack_base + -480;
                                while (true)
                                {
                                    v3 = *((long long *)v14);
                                    v2 = (unsigned long long)(unsigned int)sub_407cd0();
                                    if (v2 != 0)
                                    {
                                        v13 = 48;
                                        if (v12 > 1)
                                        {
                                            v272 = 1;
                                            v273 = 1;
                                            do
                                            {
                                                v273 *= 2;
                                                v272 += 1;
                                            }
                                            while (v7 > v273);
                                            v13 = v272 * 32;
                                        }
                                        v5 = &v17;
                                        if (v20 == 0)
                                        {
                                            v5 = v270;
                                            v274 = 0;
                                            v275 = v13 + 1;
                                            v276 = v13 + 2;
                                            while (true)
                                            {
                                                if (v274 != 0)
                                                {
                                                    v277 = v15;
                                                    v278 = 2;
                                                    v279 = *((long long *)(v14 + v274 * 8));
                                                    v280 = *((long long *)(v14 + v274 * 8));
                                                    while (v278 != 0)
                                                    {
                                                        v278 -= 1;
                                                        v281 = *(v280);
                                                        v282 = *(v277);
                                                        v277 = &v277[v121];
                                                        v280 = &v280[v121];
                                                        break;
                                                    }
                                                    if ((v281 > v282) - 0 - (v281 < v282) == 0)
                                                    {
                                                        v284 = __fxstat(0x1, 0x0) != 0;
                                                    }
                                                    else
                                                    {
                                                        v284 = __xstat(0x1, v279) != 0;
                                                    }
                                                }
                                                else
                                                {
                                                    v284 = __fxstat(0x1, fileno(v2)) != 0;
                                                }
                                                if (v284 == 0)
                                                {
                                                    if (((unsigned short)v36 & 0xf000) == 0x8000)
                                                    {
                                                        v285 = *((long long *)&(&v45)[-6]);
                                                        if (g_61c5e0 == 0)
                                                        {
                                                            g_61c5e0 = g_61c778;
                                                        }
                                                    }
                                                    else if (g_61c778 == 0)
                                                    {
                                                        v285 = 0x20000;
                                                    }
                                                    if (g_61c778 == 0 && g_61c5e0 == 0)
                                                    {
                                                        v286 = -1;
                                                        if (getrlimit(0x2, (unsigned int)&v16) == 0)
                                                        {
                                                            v286 = *((long long *)&v16);
                                                        }
                                                        if (getrlimit(0x9, (unsigned int)&v16) == 0)
                                                        {
                                                            v286 = (!(r14 <= *((long long *)&v16))? *((long long *)&v16) : r14);
                                                        }
                                                        v289 = v286 % 2;
                                                        if (getrlimit(0x5, (unsigned int)&v16) == 0)
                                                        {
                                                            v289 = (!(r14 <= (*((long long *)&v16) >> 4) * 15)? (*((long long *)&v16) >> 4) * 15 : r14);
                                                        }
                                                        sub_40d900();
                                                        v4 = v291;
                                                        sub_40d840();
                                                        v289 *= 0x3fe8000000000000;
                                                        tmp_18 = /*INVALID_IR*/ Max;
                                                        v289 = tmp_18;
                                                        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
                                                        {
                                                            v294 = 0;
                                                            v295 = 0x43e0000000000000;
                                                            if (((char)(INVALID_IR) & 1) == 0)
                                                            {
                                                                r14 = (INVALID_IR ^ 0x8000000000000000)
;                                                            }
                                                            else
                                                            {
                                                                v289 = v289;
                                                            }
                                                        }
                                                        if (!(INVALID_IR))
                                                        {
                                                            v289 = v289;
                                                        }
                                                        else
                                                        {
                                                            v296 = 0;
                                                            v297 = v289 % 2 | (unsigned long long)((unsigned int)v289 & 1);
                                                            v289 = xmm0 * 2;
                                                        }
                                                        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1)
                                                        {
                                                            v289 = 0;
                                                            v289 = 0x43e0000000000000;
                                                            if (((char)(INVALID_IR) & 1) == 0)
                                                            {
                                                                r14 = (INVALID_IR ^ 0x8000000000000000)
;                                                            }
                                                            else
                                                            {
                                                                v289 = v289;
                                                            }
                                                        }
                                                        *((int *)&g_61c5e0) = ((unsigned long long)g_61c420 * 34 < v289? v289 : (unsigned long long)g_61c420 * 34);
                                                    }
                                                    if (((unsigned short)v36 & 0xf000) == 0x8000 || g_61c778 == 0)
                                                    {
                                                        v298 = v285 * v275 + 1;
                                                        if (v298 < g_61c5e0 - v276 && v285 == (0 | v285 * v275 + 1) % v275)
                                                        {
                                                            v274 += 1;
                                                            v276 += v298;
                                                            v270 = v5;
                                                        }
                                                    }
                                                    if (v298 >= g_61c5e0 - v276 || v285 != (0 | v285 * v275 + 1) % v275 || ((unsigned short)v36 & 0xf000) != 0x8000 && g_61c778 != 0)
                                                    {
                                                        v270 = v5;
                                                    }
                                                    v5 = &v17;
                                                    sub_405e30();
                                                }
                                                else
                                                {
                                                    v316 = "stat failed";
                                                }
                                            }
                                            if (v284 != 0)
                                            {
                                                dcgettext(0x0, v316, 0x5);
                                                sub_405dd0(); /* do not return */
                                            }
                                            else if (v298 >= g_61c5e0 - v276 || v285 != (0 | v285 * v275 + 1) % v275 || v284 == 0 && ((unsigned short)v36 & 0xf000) != 0x8000 && g_61c778 != 0 || v298 < g_61c5e0 - v276 && v285 == (0 | v285 * v275 + 1) % v275 && v274 >= 1)
                                            {
                                                v22 = 0;
                                                v8 -= 1;
                                            }
                                        }
                                        v22 = 0;
                                        v8 -= 1;
                                        while (true)
                                        {
                                            v300 = sub_4074d0();
                                            if (v300 != 0)
                                            {
                                                if (v22 != 0)
                                                {
                                                    if (v8 == 0)
                                                    {
                                                        g_61cb80 = 0;
                                                        if (v21 == 0 && v270 == 0)
                                                        {
                                                            sub_407df0();
                                                            if (*((long long *)&v16) != 0)
                                                            {
                                                                *((int *)&v16) = sub_407cd0();
                                                                v303 = v6;
                                                                v270 = 0;
                                                            }
                                                            else
                                                            {
                                                                sub_407dd0(); /* do not return */
                                                            }
                                                        }
                                                    }
                                                    else if (v13 + 1 < 0 - v18 - v19 * v13)
                                                    {
                                                        v21 = v18;
                                                        sub_407df0();
                                                    }
                                                }
                                                if ((v22 == 0 || v13 + 1 >= 0 - v18 - v19 * v13) && (v22 == 0 || v8 != 0))
                                                {
                                                    g_61cb80 = 0;
                                                }
                                                if ((v22 == 0 || v8 == 0 || v13 + 1 >= 0 - v18 - v19 * v13) && (v22 == 0 || v21 != 0 || v270 != 0 || v8 != 0))
                                                {
                                                    v270 += 1;
                                                    v303 = (unsigned long long)(unsigned int)sub_4090c0() + 13;
                                                }
                                            }
                                            else
                                            {
                                                sub_407df0();
                                                if (v8 == 0)
                                                {
                                                    free(v17);
                                                    v314 = g_61c6a8;
                                                    if (INVALID_IR)
                                                    {
                                                        break;
                                                    }
                                                    if ( amd64g_calculate_condition(0x0, 0x30, 0x10, r15, cc_ndep) != 0)
                                                    {
                                                        break;
                                                    }
                                                    v322 = sub_411210();
                                                    for (v324 = v322; v314 != 0; *((unsigned long long *)&v324[-1].padding_0[0]) = v326)
                                                    {
                                                        v326 = (char *)&v314[1] + 5;
                                                        v324->field_8 = v314;
                                                        v314 = *(v314);
                                                        v324 = &v324[1];
                                                    }
                                                    sub_409330();
                                                    free(v322);
                                                }
                                            }
                                            if (v8 != 0 && (v13 + 1 < 0 - v18 - v19 * v13 || v300 == 0) && (v300 == 0 || v22 != 0))
                                            {
                                                v14 += 8;
                                            }
                                            if (v21 == 0 && v270 == 0 && v8 == 0 && v22 != 0 && v300 != 0 && *((long long *)&v16) != 0 || v300 != 0 && (v22 == 0 || v8 == 0 || v13 + 1 >= 0 - v18 - v19 * v13) && (v22 == 0 || v21 != 0 || v270 != 0 || v8 != 0))
                                            {
                                                if (v19 > 1)
                                                {
                                                    v34 = (unsigned int)sub_40cfd0();
                                                    pthread_mutex_init(v11, 0x0);
                                                    pthread_cond_init((unsigned int)&v39, 0x0);
                                                    v305 = v19;
                                                    *((unsigned long long *)(v101 + 48)) = v305;
                                                    v101 = (unsigned int)sub_411210();
                                                    *((unsigned long long *)(v101 + 40)) = v305;
                                                    *((long long *)(v101 + 24)) = 0;
                                                    *((long long *)(v101 + 16)) = 0;
                                                    *((long long *)(v101 + 8)) = 0;
                                                    *((long long *)v101) = 0;
                                                    *((long long *)(v101 + 32)) = 0;
                                                    *((long long *)(v101 + 56)) = 0;
                                                    *((int *)(v101 + 80)) = 0;
                                                    *((char *)(v101 + 84)) = 0;
                                                    pthread_mutex_init((unsigned int)v101 + 88, 0x0);
                                                    v4 = (char *)&v101[1].field_28 + 3;
                                                    sub_4061f0();
                                                    v0 = v303;
                                                    sub_409880();
                                                }
                                                else
                                                {
                                                    sub_4085d0();
                                                }
                                                sub_407df0();
                                                free(v17);
                                            }
                                            if (v21 == 0 && v270 == 0 && v8 == 0 && v22 != 0 && v300 != 0 && *((long long *)&v16) != 0 || v300 != 0 && (v22 == 0 || v8 == 0 || v13 + 1 >= 0 - v18 - v19 * v13) && (v22 == 0 || v21 != 0 || v270 != 0 || v8 != 0) || v300 == 0 && v8 == 0)
                                            {
                                                if (g_61c69c <= 0)
                                                {
                                                    break;
                                                }
                                                while (true)
                                                {
                                                    sub_405fb0();
                                                    if (g_61c69c <= 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                        }
                                        if (v300 == 0 && v8 == 0)
                                        {
                                            sub_411460(); /* do not return */
                                        }
                                        else if (v8 != 0 && (v13 + 1 < 0 - v18 - v19 * v13 || v300 == 0) && (v300 == 0 || v22 != 0))
                                        {
                                            v3 = *((long long *)v14);
                                            v2 = (unsigned long long)(unsigned int)sub_407cd0();
                                        }
                                    }
                                    else
                                    {
                                        sub_407dd0(); /* do not return */
                                    }
                                }
                                if (v20 == 0 && v2 != 0)
                                {
                                    dcgettext(0x0, v316, 0x5);
                                    sub_405dd0(); /* do not return */
                                }
                                else if (true)
                                {
                                    sub_411460(); /* do not return */
                                }
                            }
                            else
                            {
                                v267 = 0;
                                while (true)
                                {
                                    *((long long *)(sub_4113e0() + v267 * 16)) = *((long long *)(v101 + v267 * 8));
                                    v269 = v267 + 1;
                                    if (v267 == 0)
                                    {
                                        break;
                                    }
                                    v267 = v269;
                                }
                                sub_409330();
                            }
                            v329 = sub_411f80();
                            v325 = 0;
                            if ((char)(v329 + 1 == 0))
                            {
                                dcgettext(0x0, 0x41652b, 0x5);
                                sub_405dd0(); /* do not return */
                            }
                        }
                    }
                }
                if ((v99 == 1 || (char)v249 != 0) && (v99 == 1 || v250 != 0) && (v8 == 0 || (char)v249 != 0) && (v8 == 0 || v250 != 0) && (v6 == 0 || (char)v249 != 0 || v251 >= 0) && (v6 == 0 || v251 >= 0 || v250 != 0))
                {
                    dcgettext(0x0, v316, 0x5);
                    sub_405dd0(); /* do not return */
                }
            }
            if (v99 == 1 && v8 == 0 && ((char)v249 == 0 || v250 == 0) && (v6 == 0 || v251 >= 0))
            {
                sub_411460(); /* do not return */
            }
            else if (v99 == 1 && ((char)v249 == 0 || v250 == 0) && (g_61c758 == 0 || !((char)(v329 + 1 == 0))) && (v6 == 0 || v251 >= 0))
            {
                return v325;
            }
        }
        else if (!(v99 <= 1))
        {
            v253 = (unsigned int)sub_40f630();
            error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x416408, 0x5));
        }
        else if (v6 == 0)
        {
            v254 = (unsigned int)sub_407cd0();
            if (v254 != 0)
            {
                v5 = g_61c750;
                v256 = 0;
                v3 = &v34;
                sub_405e30();
                v17 = 0;
                v4 = 0;
                while (true)
                {
                    if (sub_4074d0() != 0)
                    {
                        v260 = v36 + v34 - 32;
                        v261 = v36 + v34 - v35 * 32;
                        if (v256 == 0 || ((unsigned int)g_61c759 ^ 1) > sub_4082a0())
                        {
                            while (true)
                            {
                                if (v261 < v260)
                                {
                                    v260 = &v260[-4];
                                    if (((unsigned int)g_61c759 ^ 1) <= sub_4082a0())
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    v264 = v260[1];
                                    v4 += v35;
                                    if (0 < v260[1])
                                    {
                                        while (true)
                                        {
                                            v256 *= 2;
                                            if (v256 + v256 == 0)
                                            {
                                                v256 = v264;
                                            }
                                            free(v17);
                                            v17 = (unsigned int)sub_411210();
                                        }
                                    }
                                    memcpy(v17, *(v260), v256);
                                    *((unsigned long long [4])&v18) = v260[1];
                                    if (v5 == 0)
                                    {
                                        break;
                                    }
                                    *((unsigned long long [4])&v19) = v260[2] + v17 - *(v260);
                                    *((unsigned long long [4])&v20) = v17 + v260[3] - *(v260);
                                }
                            }
                            if (v261 < v260)
                            {
                                v317 = 0;
                                if (v2 != 99)
                                {
                                    break;
                                }
                            }
                        }
                        v268 = (unsigned int)sub_40d370();
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416839, 0x5), g_61cbc8);
                        dcgettext(0x0, 0x41684f, 0x5);
                        sub_407e70();
                    }
                    else
                    {
                        v317 = 1;
                    }
                }
                v318 = v317 ^ 1;
                sub_407df0();
                free(v34);
                free(v17);
                v325 = v318;
            }
            else
            {
                sub_407dd0(); /* do not return */
            }
        }
        else
        {
            g_61c400 = v2;
            sub_405d00(); /* do not return */
        }
    }
    if (unknown)
    {
        sub_411460(); /* do not return */
    }
    if (unknown)
    {
        return v325;
    }
}

int sub_4121e0()
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

int sub_40a650()
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

int sub_408e10()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int v3;  // edi
    unsigned int v4;  // esi

    v0 = v2;
    dup2(v3, v4);
}

extern int512_t g_61cce0;

int sub_40f220()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_61cce0 : v1)) = v2;
    return &g_61cce0;
}

int sub_413140()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x28]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x20]
    unsigned long long v3[2];  // rdi
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rsi
    unsigned long long v7;  // rax

    if (v3[1] <= 999999999)
    {
        v4 = *(v3);
        *((unsigned long long [2])&v1) = v3[1];
        if (*(v3) > 0x1fa400)
        {
            while (true)
            {
                v0 = 0x1fa400;
                v4 -= 0x1fa400;
                v7 = nanosleep((unsigned int)&v0, v5);
                if ((unsigned int)v7 == 0)
                {
                    v1 = 0;
                    if (v4 <= 0x1fa400)
                    {
                        break;
                    }
                }
                else
                {
                    if (v5 == 0)
                    {
                        break;
                    }
                    *((unsigned long long *)v5) = *((long long *)v5) + v4;
                    return v7;
                }
            }
            if ((unsigned int)v7 == 0)
            {
                v0 = v4;
                v7 = nanosleep((unsigned int)&v0, v5);
            }
            else if ((unsigned int)v7 != 0)
            {
                return v7;
            }
        }
        v0 = v4;
        v7 = nanosleep((unsigned int)&v0, v5);
    }
    else
    {
        *(__errno_location()) = 22;
        v7 = -18446744069414584321;
    }
    return v7;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
} struct_0;

int sub_405e30()
{
    unsigned long long v1;  // rdi
    struct v2;  // rbp
    unsigned long v3;  // rdx
    unsigned long v4;  // rbx
    unsigned long v5;  // rdi
    unsigned long long v6;  // rax
    unsigned long v7;  // rsi

    v2 = v1;
    v4 = v3;
    while (true)
    {
        v4 = (v4 & -0x20) + 32;
        v5 = v4;
        v6 = malloc(v5);
        v2->field_0 = v6;
        if (v6 == 0)
        {
            v4 = v5 % 2;
            sub_411460(); /* do not return */
        }
        v2->field_28 = v7;
        v2->field_18 = v5;
        v2->field_10 = 0;
        v2->field_20 = 0;
        v2->field_8 = 0;
        v2->field_30 = 0;
        return v6;
    }
}

typedef struct struct_0 {
    char padding_0[4293056];
    unsigned long long field_4181c0;
} struct_0;

extern int512_t g_4181c0;
extern unsigned int g_61c518;

int sub_411ab0()
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
    v13 = *((long long *)(0x8 * v8 + (char *)&g_4181c0));
    if ((unsigned int)v11 < 0)
    {
        v0 = v14;
        v1 = 0;
    }
    error(g_61c518, 0x0, (unsigned long long)dcgettext(0x0, v13, 0x5));
}

extern unsigned int g_414fd8;

int sub_407c00()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    unsigned long v5;  // rdx
    unsigned long long *v6;  // rsi
    unsigned long long v7;  // rbp
    unsigned long long v8;  // rbx

    v3 = sub_411b40();
    switch ((unsigned int)v3)
    {
    case 0: case 2:
        *(v6) = v1;
        break;
    case 1: case 3:
        *(v6) = -1;
        break;
    case 4:
        if (v5 == 0)
        {
            return 0;
        }
        v7 = (unsigned int)sub_40f880();
        v8 = dcgettext(0x0, v5, 0x5);
        error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x414fd8, 0x5));
    }
    return v0;
}

extern uint128_t g_61cce0;
extern uint128_t g_61ccf0;
extern uint128_t g_61cd00;
extern unsigned long long g_61cd10;

int sub_40f770()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_61cce0;
    *((uint128_t *)&v1) = g_61ccf0;
    *((uint128_t *)&v2) = g_61cd00;
    v4 = g_61cd10;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_40f030();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern unsigned int g_61cba4;
extern unsigned int g_61cba8;

int sub_405930()
{
    void tmp_12;  // tmp #12
    char *v1[3];  // rdi
    char v2[3];  // rcx
    unsigned int v3;  // r8d
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rsi
    unsigned long long v6;  // r10
    unsigned long long v7;  // rax
    unsigned long long v8;  // rcx
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r8

    v2 = *(v1);
    v6 = 0;
    v7 = 0;
    v4 = (*(v1))[0];
    while (true)
    {
        v3 = v4;
        v5 = &v2[1];
        if ((unsigned int)(v4 - 48) > 9)
        {
            break;
        }
        v7 = (unsigned int)(v7 < v4? (unsigned int)v4 : (unsigned int)rax);
        v6 = 0;
        v4 = v2[1];
        if (v2[1] == g_61cba4)
        {
            v4 = v2[2];
            v5 = &v2[2];
            v6 = 1;
        }
        v2 = v5;
    }
    if (v6 == 0)
    {
        if (v3 == g_61cba8)
        {
            tmp_12 = v2[1];
            v9 = &v2[2];
            v10 = tmp_12;
            if ((unsigned int)tmp_12 - 48 > 9)
            {
                v2 = v5;
            }
            else
            {
                while (true)
                {
                    v11 = v9 + 1;
                    v7 = (unsigned int)(v7 < v10? (unsigned int)v10 : (unsigned int)rax);
                    v10 = (char)*((char *)(v9 + 1 - 1));
                    if ((unsigned int)(char)*((char *)(v9 + 1 - 1)) - 48 > 9)
                    {
                        break;
                    }
                    v9 = v11;
                }
                *(v1) = v9;
                return v7;
            }
        }
        if ((unsigned int)tmp_12 - 48 > 9 || v3 != g_61cba8)
        {
            *(v1) = v2;
            return v7;
        }
    }
    else
    {
        v8 = &v2[-1 + 7];
        *(v1) = v8;
        return v7;
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
} struct_1;

extern unsigned int g_4164ca;
extern unsigned long long g_61c428;
extern char g_61c500;
extern struct g_61c750;
extern int512_t g_61ca80;

int sub_4074d0()
{
    unsigned long v0;  // [bp-0x78]
    void tmp_22;  // tmp #22
    void *v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    struct v4;  // [bp-0x50]
    unsigned int v5;  // [bp-0x48]
    char v6;  // [bp-0x41]
    unsigned long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x30]
    unsigned long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned long long v13;  // [bp-0x8]
    struct v15;  // rdi
    unsigned long long v16;  // r15
    unsigned long long v17;  // r14
    unsigned long long v18;  // r13
    unsigned long long v19;  // r12
    unsigned long long v20;  // rbx
    unsigned long v21;  // rdx
    unsigned long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v27;  // r9
    void *v28;  // r15
    unsigned long long v29;  // rbp
    unsigned long long v30;  // r12
    void *v31;  // r14
    unsigned long long v32;  // r13
    unsigned long long v33;  // r12
    unsigned long long v34[4];  // r14
    char *v35;  // r13
    unsigned int *v36;  // rsi
    unsigned long long v37;  // rax
    char *v38;  // rax
    unsigned long long v40;  // r10
    unsigned long long v41;  // cc_dep1
    unsigned long long v42[4];  // r13
    unsigned long long v43;  // r14
    unsigned long long v44;  // rdi
    unsigned long long v45;  // rdx
    unsigned long v46;  // rax
    unsigned long long v47;  // cc_dep1
    unsigned long long v48;  // cc_dep2
    unsigned long long v49;  // rax
    unsigned long long v52;  // rbx
    unsigned long long v53;  // r12
    unsigned long long v54;  // r13
    unsigned long long v55;  // r14
    unsigned long long v56;  // r15
    unsigned long long v57;  // rbx
    unsigned long long v58;  // r12
    unsigned long long v59;  // r13
    unsigned long long v60;  // r14
    unsigned long long v61;  // r15

    if (v15->field_30 == 0)
    {
        v13 = v16;
        v12 = v17;
        v11 = v18;
        v10 = v19;
        v9 = stack_base + 0;
        v8 = v20;
        v27 = v15->field_8;
        v28 = v15->field_0;
        v7 = v21;
        v22 = v15->field_20;
        v4 = v15;
        v6 = g_61c500;
        v0 = v15->field_28;
        if (v15->field_8 == v15->field_20)
        {
            v23 = v15->field_10;
        }
        else
        {
            memmove(v15->field_0, v28 + v15->field_8 - v15->field_20, v22);
            v27 = v4->field_20;
            v28 = v4->field_0;
            v4->field_10 = 0;
            v4->field_8 = v27;
            v23 = 0;
        }
        v29 = g_61c428 - 34;
        v2 = v0 + 1;
        v30 = v4->field_18;
        v5 = v6;
        while (true)
        {
            v31 = v28 + v27;
            v32 = v30 + v28 - v23 * 32;
            v33 = v30 + v28 - v23 * v0 - (v28 + v27);
            if (v23 != 0)
            {
                v28 = v31;
                v34 = v32;
                v35 = v34[1] + *(v34);
            }
            else
            {
                v34 = v28;
                v35 = v28;
            }
            while (true)
            {
                if (v33 > v2)
                {
                    v3 = (0 | v33 - 1) % v2;
                    v37 = fread_unlocked(v28, 0x1, (0 | v33 - 1) % v2, v36);
                    v33 -= v37;
                    v1 = v28 + v37;
                    if (v3 != v37)
                    {
                        if (((char)*(v36) & 32) != 0)
                        {
                            dcgettext(0x0, 0x4164ca, 0x5);
                            sub_405dd0(); /* do not return */
                        }
                        else if (((char)*(v36) & 16) != 0)
                        {
                            v4->field_30 = 1;
                            v38 = v1;
                            if (v4->field_0 == v1)
                            {
                                v52 = v8;
                                v53 = v10;
                                v54 = v11;
                                v55 = v12;
                                v56 = v13;
                                return 0;
                            }
                            else if (v35 != v1)
                            {
                                if ((char)v1[-1] != v6)
                                {
                                    *(v38) = v6;
                                    v1 = &v38[1];
                                }
                            }
                        }
                    }
                }
                if (((char)*(v36) & 32) == 0 && v3 != v37 && v4->field_0 != v1 && v33 > v2 && v35 != v1 && ((char)*(v36) & 16) != 0 && (char)v1[-1] != v6 || ((char)*(v36) & 32) == 0 && v3 != v37 && v4->field_0 != v1 && v33 > v2 && v35 != v1 && ((char)*(v36) & 16) != 0 && (char)v1[-1] == v6 || ((char)*(v36) & 32) == 0 && v3 != v37 && v4->field_0 != v1 && v33 > v2 && ((char)*(v36) & 16) != 0 && v35 == v1 || ((char)*(v36) & 32) == 0 && v3 != v37 && v33 > v2 && ((char)*(v36) & 16) == 0 || v33 > v2 && v3 == v37)
                {
                    while (true)
                    {
                        v23 = sub_413030();
                        if (v23 == 0)
                        {
                            break;
                        }
                        v40 = v23 + 1;
                        v34 = &v34[-4];
                        *((char *)v23) = 0;
                        v34[0] = v35;
                        v34[1] = 1 + v23 + -0x1 * v35;
                        v29 = (v29 < 1 + v23 + -0x1 * v35? (char *)(1 + v23 + -0x1 * v35) : v29);
                        v33 -= v0;
                        if (g_61c750 != 0)
                        {
                            if (g_61c750->field_10 != -1)
                            {
                                v23 = sub_406470();
                            }
                            v41 = g_61c750->field_0;
                            if (v41 != -1)
                            {
                                v34[2] = (unsigned int)sub_406360();
                            }
                            else
                            {
                                v34[2] = v35;
                            }
                        }
                        v35 = v40;
                    }
                    v28 = v1;
                }
                if ((((char)*(v36) & 32) == 0 && v3 != v37 && v4->field_0 != v1 && v33 > v2 && v35 != v1 && ((char)*(v36) & 16) != 0 && (char)v1[-1] != v6 || ((char)*(v36) & 32) == 0 && v3 != v37 && v4->field_0 != v1 && v33 > v2 && v35 != v1 && ((char)*(v36) & 16) != 0 && (char)v1[-1] == v6 || ((char)*(v36) & 32) == 0 && v3 != v37 && v4->field_0 != v1 && v33 > v2 && ((char)*(v36) & 16) != 0 && v35 == v1 || ((char)*(v36) & 32) == 0 && v3 != v37 && v33 > v2 && ((char)*(v36) & 16) == 0 || v33 > v2 && v3 == v37) && v4->field_30 != 0 || v33 <= v2)
                {
                    v42 = v34;
                    v43 = v28;
                    v44 = v4->field_0;
                    v45 = v4->field_18;
                    v4->field_8 = v28 - v4->field_0;
                    v4->field_10 = v44 + v45 + -0x1 * v42 >> 5;
                    if (INVALID_IR)
                    {
                        v46 = v45 % 32;
                        if (v44 != 0)
                        {
                            if (v45 <= 6148914691236517183)
                            {
                                v30 = (v23 + v45 % 64 + 1) * 32;
                            }
                        }
                        else
                        {
                            if (v45 > 31)
                            {
                                v47 = v23 * 32;
                                v48 = v23 * 16;
                                v49 = v23 * 32;
                                if (!(INVALID_IR))
                                {
                                    v30 = v49;
                                }
                            }
                            else
                            {
                                v30 = 128;
                            }
                        }
                        if ((INVALID_IR || v44 != 0) && (v44 == 0 || v45 > 6148914691236517183) && (v45 > 31 || v44 != 0))
                        {
                            sub_411460(); /* do not return */
                        }
                    }
                    else
                    {
                        g_61c428 = v29 + 34;
                        v4->field_20 = v43 - tmp_22;
                        v57 = v8;
                        v58 = v10;
                        v59 = v11;
                        v60 = v12;
                        v61 = v13;
                        return 1;
                    }
                }
            }
            v28 = (unsigned long long)(unsigned int)sub_411270();
            v4->field_0 = v28;
            v27 = v4->field_8;
            v4->field_18 = v30;
            v23 = v4->field_10;
        }
    }
    else
    {
        return 0;
    }
}

extern unsigned int g_414f60;

int sub_405d30()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned long long v3;  // rbp
    unsigned int v4;  // esi
    unsigned long long v5;  // rbx

    v0 = v2;
    v3 = (unsigned int)sub_40f880();
    v5 = dcgettext(0x0, v4, 0x5);
    error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x414f60, 0x5));
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[16];
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[56];
    unsigned long long field_78;
    unsigned long long field_80;
    unsigned long long field_88;
    unsigned long long field_90;
    char padding_98[8];
    unsigned long long field_a0;
    char padding_a8[24];
    char field_c0;
    char padding_c1[15];
    unsigned long long field_d0;
    unsigned long long field_d8;
    unsigned long long field_e0;
    unsigned long long field_e8;
    char padding_f0[8];
    unsigned long long field_f8;
    char padding_100[24];
    char field_118;
} struct_0;

int sub_410440()
{
    unsigned int v0;  // [bp-0x1c]
    void tmp_21;  // tmp #21
    struct v2;  // rsi
    struct v3;  // rbx
    void *v4;  // rdi
    char *v5;  // rdx
    char *v7;  // rdx
    unsigned long long v9;  // rax
    char *v10;  // rax
    unsigned long long *v13;  // rdx
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rsi
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx
    char v26;  // al

    v3 = v2;
    while (true)
    {
        v9 = fgetc(v4);
        if ((unsigned int)v9 == -1)
        {
            break;
        }
        while (true)
        {
            v5 = v3->field_30;
            if (v3->field_38 != v3->field_30)
            {
                v3->field_30 = v2->field_30 + 1;
                *((unsigned long long *)&v5) = v9;
                if ((unsigned int)v9 != 0)
                {
                    break;
                }
            }
            else
            {
                v0 = v9;
                _obstack_newchunk();
                v7 = v3->field_30;
                v3->field_30 = v3->field_30 + 1;
                *(v7) = v0;
                if (v0 != 0)
                {
                    break;
                }
            }
            sub_4102b0();
            v9 = fgetc(v4);
        }
        if (true)
        {
            v9 = fgetc(v4);
        }
        else if ((unsigned int)v9 == -1 && ((unsigned int)v9 == 0 || v0 == 0) && ((unsigned int)v9 == 0 || v3->field_38 == v3->field_30))
        {
            v10 = v3->field_30;
        }
    }
    v10 = v3->field_30;
    if (v2->field_30 == v3->field_38)
    {
        _obstack_newchunk();
        v10 = v3->field_30;
    }
    v3->field_30 = &v10[1];
    *(v10) = 0;
    sub_4102b0();
    v13 = v3->field_88;
    if (v3->field_90 - v3->field_88 <= 7)
    {
        _obstack_newchunk();
        v13 = v3->field_88;
    }
    *(v13) = 0;
    v15 = v3->field_80;
    v16 = v3->field_88 + 8;
    v3->field_88 = v3->field_88 + 8;
    if (v16 == v15)
    {
        v3->field_c0 = v3->field_c0 | 2;
    }
    tmp_21 = v16 + v3->field_a0;
    v17 = v3->field_78;
    v18 = tmp_21 & !(v3->field_a0);
    v19 = v3->field_90;
    v3->field_88 = tmp_21 & !(v3->field_a0);
    if (v18 - v17 > v18 - v17)
    {
        v3->field_88 = v18;
        v18 = v19;
    }
    v3->field_8 = v15;
    v20 = v3->field_e0;
    v21 = v3->field_d8;
    v3->field_80 = v18;
    if (v20 == v21)
    {
        v3->field_118 = v3->field_118 | 2;
    }
    tmp_21 = v20 + v3->field_f8;
    v22 = v3->field_d0;
    v23 = tmp_21 & !(v3->field_f8);
    v24 = v3->field_e8;
    v3->field_e0 = tmp_21 & !(v3->field_f8);
    if (v23 - v22 > v23 - v22)
    {
        v3->field_e0 = v23;
        v23 = v24;
    }
    v3->field_d8 = v23;
    v3->field_10 = v21;
    v26 = ferror((unsigned int)v4) == 0;
    return rax;
}

extern unsigned long long g_61c6a8;

int sub_405d80()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned long long *v3;  // rbx
    unsigned int v5;  // edi

    v0 = v2;
    v3 = g_61c6a8;
    if (g_61c6a8 != 0)
    {
        while (true)
        {
            unlink((char *)&v3[1] + 5);
            v3 = *(v3);
            if (v3 == 0)
            {
                break;
            }
        }
    }
    g_61c6a8 = 0;
    signal(v5, 0x0);
}

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_40d370()
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

int sub_40bd70()
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

int sub_40aabb()
{
    unsigned int v1[4];  // rsi
    unsigned int v2[4];  // rdi

    v1[0] = v2[0];
    v1[1] = v2[1];
    v1[1] = v2[1];
    v1[1 + 1] = v2[1 + 1];
    return v1;
}

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

int sub_40c3f0()
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
    char padding_0[32];
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
    char field_31;
    char field_32;
    char field_33;
    char field_34;
    char field_35;
    char field_36;
    char field_37;
    char field_38;
} struct_0;

extern int512_t g_61c780;
extern int512_t g_61c880;
extern int512_t g_61c980;

int sub_405c00()
{
    void tmp_6;  // tmp #6
    char *v1;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // ecx
    unsigned int v3;  // edx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rcx
    struct v7;  // rsi

    v2 = *(v1);
    if (*(v1) != 0)
    {
        while (true)
        {
            v5 = (unsigned long long)v2 - 77;
            switch (v5)
            {
            case 0:
                v7->field_36 = 1;
            case 5:
                v7->field_33 = 1;
            case 9:
                v7->field_38 = 1;
            case 21:
                if (((unsigned int)tmp_6 & -3) == 0)
                {
                    v7->field_30 = 1;
                }
                if (v3 - 1 <= 1)
                {
                    v7->field_31 = 1;
                }
            case 23:
                v7->field_20 = &g_61c880;
            case 25:
                v7->field_28 = &g_61c780;
            case 26:
                v7->field_34 = 1;
            case 27:
                v7->field_35 = 1;
            case 28:
                if (v7->field_20 == 0)
                {
                    v7->field_20 = &g_61c980;
                }
            case 33:
                v7->field_32 = 1;
            case 37:
                v7->field_37 = 1;
            }
            v1 = &v1[1];
            v2 = *(v1);
            if ((char)v2 == 0)
            {
                break;
            }
            v6 = v5;
        }
    }
    return v1;
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
    return sub_413250();
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_61c558;
extern uint128_t g_61c560;
extern unsigned int g_61c570;
extern int512_t g_61cbe0;

int sub_40f030()
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
    v17 = g_61c558;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_61c570 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_61c558 != 6407520)
            {
                v16 = sub_411270();
                g_61c558 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_411270();
                v17 = v15;
                g_61c558 = v15;
                *(v15) = g_61c560;
            }
            memset(&v17[(long long)(int)g_61c570], 0x0, (int)((unsigned int)v13 + 1 - g_61c570) * 16);
            g_61c570 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_411460(); /* do not return */
        }
    }
    if (g_61c570 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_40de00();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6409184)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_411210();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_40de00();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern unsigned int g_416a9d;
extern unsigned int g_416ab2;
extern unsigned int g_416aba;
extern unsigned long long stderr[7];

int sub_40a7f0()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x416a9d, 0x5), stderr);
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
                    __fprintf_chk((unsigned int)stderr, 0x1, 0x416aba, sub_40f880());
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
                __fprintf_chk((unsigned int)stderr, 0x1, 0x416ab2, sub_40f880());
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

int sub_410070()
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

extern unsigned int g_4150f8;
extern unsigned int g_415120;
extern unsigned int g_415168;
extern unsigned int g_4151a8;
extern unsigned int g_4151e0;
extern unsigned int g_415230;
extern unsigned int g_415300;
extern unsigned int g_4153d8;
extern unsigned int g_415428;
extern unsigned int g_415540;
extern unsigned int g_415658;
extern unsigned int g_4156d0;
extern unsigned int g_4157e8;
extern unsigned int g_415948;
extern unsigned int g_4159d8;
extern unsigned int g_415ab0;
extern unsigned int g_415c78;
extern unsigned int g_415cb8;
extern unsigned int g_415ce8;
extern unsigned int g_415d20;
extern unsigned int g_415f80;
extern unsigned int g_416090;
extern unsigned int g_4160d8;
extern unsigned int g_4160f8;
extern unsigned int g_41655e;
extern unsigned int g_416572;
extern unsigned int g_4165e7;
extern unsigned long long g_61cbc8;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_40a0d0()
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
    unsigned long long v43[2];  // rax
    char *v44;  // rdi
    char *v45;  // rsi
    unsigned long long v46;  // rcx
    unsigned long long v47;  // cc_dep1
    unsigned long long v48;  // cc_dep2
    unsigned long v49;  // d
    char *v53;  // rax
    char *v54;  // rax
    unsigned long long v55;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4150f8, 0x5), g_61cbc8);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415120, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415168, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4151a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4151e0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x41655e, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415230, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415300, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4153d8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415428, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415540, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x416572, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415658, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4156d0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4157e8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415948, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4159d8, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415ab0, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415c78, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415cb8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415ce8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415d20, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415f80, 0x5), stdout);
        v0 = "[";
        v43 = &v0;
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
            v43 = &v2;
            v44 = v2;
            if (v2 == 0)
            {
                break;
            }
            v45 = "sort";
            v46 = 5;
            if ((v47 > v48) - 0 - (v47 < v48) == 0)
            {
                break;
            }
            while (v46 != 0)
            {
                v46 -= 1;
                v47 = *(v45);
                v48 = *(v44);
                v44 = &v44[v49];
                v45 = &v45[v49];
                break;
            }
        }
        if (v43[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4165e7, 0x5));
            v54 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4165e7, 0x5));
            v53 = setlocale(0x5, 0x0);
            if (v53 != 0)
            {
                v55 = strncmp(v53, "en_", 0x3);
            }
            if (v53 == 0 || v55 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4160d8, 0x5));
            }
        }
        if ((v43[1] == 0 || strncmp(v54, "en_", 0x3) != 0) && (v43[1] == 0 || v54 != 0) && (v53 != 0 || v43[1] != 0) && (v43[1] != 0 || v55 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x416090, 0x5));
        }
        if (v43[1] != 0 || v53 != 0 && v55 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4160d8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4160f8, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned int g_417a21;
extern unsigned int g_417a4c;
extern unsigned int g_417c78;

int sub_411190()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417a21, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x417a4c, 0x5));
    dcgettext(0x0, 0x417c78, 0x5);
}

int sub_40b660()
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    unsigned int v3;  // [bp-0x90]

    v0 = 17279655951921914625;
    v1 = 1167088121787636990;
    v2 = 0;
    v3 = 0;
    sub_40b360();
    return sub_40b250();
}

// int sub_40f4e0()

int sub_40a910()
{
    unsigned long long v1;  // rax

    v1 = sub_40a650();
    if (INVALID_IR)
    {
        sub_40a770();
        sub_40a7f0();
        r9();
        v1 = -1;
    }
    return v1;
}

int sub_40be30()
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

int sub_413030()
{
    unsigned long long v1;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // dil
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // rsi
    unsigned long long v4;  // r9
    void *v5;  // rax
    void *v6;  // rcx
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
            else if ((v2 & 7) != 0 && v1 != 1)
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
                if ((char)v6[-1] == (char)v3)
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c440()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_40be30();
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
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_40aa90()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 17279655951921914625;
    v1->field_8 = 1167088121787636990;
    v1->field_18 = 0;
    return 1167088121787636990;
}

extern char g_61cce0;

int sub_40f290()
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
    v3 = (v2 == 0? &g_61cce0 : v2);
    *((int *)(tmp_11? &g_61cce0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_61cce0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_61cce0;
        abort(); /* do not return */
    }
}

int sub_40f332()
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

// int sub_40f830()

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

int sub_40c920()
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
                v2 = (unsigned int)sub_40bd70();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_40c000();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_40c000();
                    if (v22 != 0)
                    {
                        v23 = sub_40c000();
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
    if (v11->field_28->field_10 == 0 && ((char)(INVALID_IR) & 1) == 0 || *((long long *)&v2) == 0 && ((char)(INVALID_IR) & 1) == 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || ((char)(INVALID_IR) & 1) == 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || v11->field_28->field_10 != 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || ((char)(INVALID_IR) & 1) == 0 && v0 == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_28->field_10 != 0 && v11->field_10 != *((long long *)&v2))
    {
        v21 = 0;
    }
    if (v11->field_10 != *((long long *)&v2) || (char)v21 != 0)
    {
        v24 = v21;
        return v24;
    }
}

// int sub_40f500()

extern unsigned long long __progname_full;
extern unsigned long long g_61cbc8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_40dc60()
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
        g_61cbc8 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    unsigned long long field_28;
    char field_30;
    char field_31;
    char padding_32[1];
    char field_33;
    char padding_34[2];
    char field_36;
    char padding_37[1];
    char field_38;
} struct_0;

int sub_405af0()
{
    unsigned long long v1;  // rax
    struct v2;  // rdi

    v1 = 0;
    if (v2->field_20 == 0 && v2->field_28 == 0)
    {
        v1 = v2->field_30;
        if (v2->field_30 == 0 && v2->field_31 == 0 && (0xffff00ff0000 & *((long long *)&v2->field_30)) == 0)
        {
            v1 = v2->field_36;
            if (v2->field_36 == 0 && v2->field_38 == 0)
            {
                return (unsigned int)v2->field_33 ^ 1;
            }
        }
        if (((0xffff00ff0000 & *((long long *)&v2->field_30)) == 0 || v2->field_30 != 0) && (v2->field_31 == 0 || v2->field_30 != 0) && (v2->field_36 != 0 || v2->field_30 != 0))
        {
            return 0;
        }
    }
    if (v2->field_28 != 0 || v2->field_20 != 0 || v2->field_30 == 0 && (0xffff00ff0000 & *((long long *)&v2->field_30)) != 0 || v2->field_30 == 0 && v2->field_31 != 0 || v2->field_36 == 0 && v2->field_30 == 0 && v2->field_38 != 0)
    {
        return v1;
    }
}

extern int512_t g_61c440;
extern int512_t g_61c448;
extern int512_t g_61c780;
extern int512_t g_61ca80;

int sub_405a40()
{
    char *v2;  // rdi
    unsigned long long v3;  // r11
    unsigned long long v4;  // r9
    unsigned long long v5;  // rdx
    unsigned long long v6;  // cc_dep1
    unsigned long long v7;  // cc_dep2
    char *v8;  // rax
    unsigned long long v9;  // rcx
    char *v10;  // rdx
    unsigned long long v11;  // cc_dep1
    unsigned long long v12;  // cc_dep2
    unsigned long long v13;  // r10
    unsigned long long *v14;  // rsi

    v3 = 12;
    v13 = 0;
    while (true)
    {
        v4 = v13 + v3 >> 1;
        v8 = (&g_61c440)[2 * (v13 + v3 >> 1)];
        v5 = (char)*((char *)(&g_61c440)[2 * (v13 + v3 >> 1)]);
        if (*((char *)(&g_61c440)[2 * (v13 + v3 >> 1)]) != 0)
        {
            v6 = (char)*(&((char *)&g_61c780)[(unsigned long long)*(v2)]);
            v7 = v5;
            if ((char)*(&((char *)&g_61c780)[(unsigned long long)*(v2)]) >= v5)
            {
                if (INVALID_IR)
                {
                    v10 = v2;
                    do
                    {
                        v8 = &v8[1];
                        v9 = *(v8);
                        v10 = &v10[1];
                        v11 = (char)*(&((char *)&g_61c780)[(unsigned long long)*(v10)]);
                        v12 = v9;
                    }
                    while (INVALID_IR && (char)*(&((char *)&g_61c780)[(unsigned long long)*(v10)]) >= v9 && (char)v9 != 0);
                    if ((char)v9 != 0)
                    {
                        v3 = v4;
                    }
                    else if ((char)*(&((char *)&g_61c780)[(unsigned long long)*(v10)]) >= v9 && (char)v9 != 0)
                    {
                        v13 = v3 + 1;
                    }
                }
                v13 = v3 + 1;
            }
            if (INVALID_IR)
            {
                v3 = v4;
            }
            return 0;
        }
        v10 = v2;
    }
    *(v14) = v10;
    return (&g_61c448)[2 * v3];
}

extern unsigned int g_415088;
extern unsigned int g_4150d8;
extern unsigned long long g_61c418;
extern unsigned long long g_61c5e8;
extern unsigned int g_61c6c0;
extern unsigned long long g_61c748;
extern unsigned long long g_61c768;
extern unsigned long long g_61c770;

int sub_4090c0()
{
    unsigned int v0;  // [bp-0xcc]
    char v1;  // [bp-0xc8]
    char v2;  // [bp-0xc4]
    char v3;  // [bp-0xc0]
    unsigned long v5;  // rsi
    unsigned long v6;  // r12
    unsigned long long v10;  // rax
    unsigned int *v11;  // r14
    unsigned long long *v12;  // rax
    unsigned int v13;  // ebp
    unsigned long long v17;  // rax
    unsigned long long v18;  // rdi
    unsigned long long v19;  // rbx
    unsigned long long v21;  // rbx
    unsigned int v24;  // r12d
    unsigned long long v27;  // rax
    unsigned long long *v28;  // rdi
    unsigned long long v30;  // rax
    unsigned int v31;  // ecx

    v0 = v5;
    v6 = strlen(*((long long *)(g_61c770 + g_61c5e8 * 8)));
    v19 = (unsigned int)sub_411210();
    memcpy(v19 + 13, *((long long *)(g_61c770 + g_61c5e8 * 8)), v6);
    *((long long *)(v19 + v6 + 13)) = 6365935330447553327;
    *((int *)(v19 + 13 + v6 + 8)) = 5789784;
    *((long long *)v19) = 0;
    v10 = g_61c5e8 + 1;
    g_61c5e8 = g_61c5e8 + 1;
    if (v10 == g_61c768)
    {
        g_61c5e8 = 0;
    }
    v1 = pthread_sigmask(0x0, 0x61c6c0, (unsigned int)&v3) == 0;
    v24 = sub_410680();
    v11 = __errno_location();
    if (v24 >= 0)
    {
        v12 = g_61c418;
        g_61c418 = v19;
        *(v12) = v19;
        if (v1 != 0)
        {
            sub_407880();
            *(v11) = *(v11);
        }
        *((char *)(v19 + 12)) = 0;
        if (g_61c748 != 0)
        {
            v17 = sub_407a30();
            *((unsigned int *)(v19 + 8)) = v17;
            if (!((unsigned int)v17 <= 0))
            {
                close(v24);
                close(*((int *)&v1));
                v24 = *((int *)&v2);
                sub_406190();
            }
            else if (INVALID_IR)
            {
                close(*((int *)&v2));
                if (v24 != 1)
                {
                    sub_408e10();
                }
                if (*((int *)&v1) != 0)
                {
                    sub_408e10();
                }
                execlp(g_61c748, g_61c748, 0x0, v31);
                sub_4060d0(); /* do not return */
            }
        }
        if (g_61c748 == 0 || !(INVALID_IR) || (unsigned int)v17 > 0)
        {
            v27 = fdopen(v24, "w");
            *(v28) = v27;
            if (v27 == 0)
            {
                dcgettext(0x0, 0x4150d8, 0x5);
                sub_405dd0(); /* do not return */
            }
        }
    }
    else
    {
        v13 = *(v11);
        if (v1 != 0)
        {
            sub_407880();
            *(v11) = v13;
        }
        if (v13 == 24 && (char)v0 == 1)
        {
            v18 = v19;
            v19 = 0;
            free(v18);
        }
        if ((char)v0 != 1 || v13 != 24)
        {
            v21 = (unsigned int)sub_40f630();
            error(0x2, *(v11), (unsigned long long)dcgettext(0x0, 0x415088, 0x5));
        }
    }
    if (((char)v0 == 1 || v24 >= 0) && (v24 < 0 || v27 != 0) && (v13 == 24 || v24 >= 0) && (v24 < 0 || g_61c748 == 0 || !(INVALID_IR) || (unsigned int)v17 > 0))
    {
        v30 = v19;
        return v30;
    }
}

int sub_40d5b0()
{
    char v0;  // [bp-0x88]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v2 = sched_getaffinity(0x0, 0x80, (unsigned int)&v0);
    if (v2 == 0)
    {
        v3 = __sched_cpucount(0x80, (unsigned int)&v0);
        if (v3 != 0)
        {
            return v3;
        }
    }
    if (v3 == 0 || v2 != 0)
    {
        return 0;
    }
}

int sub_411620()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v3;  // rdx
    unsigned long long v5;  // rax

    v0 = (unsigned int)sub_413580();
    v1 = v3;
    while (true)
    {
        *(__errno_location()) = 0;
        v5 = sub_413140();
        if ((unsigned int)v5 != 0)
        {
            return -18446744069414584321;
        }
        return v5;
    }
}

int sub_407df0()
{
    char *v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long v3;  // rsi

    v2 = fileno(v1);
    if ((unsigned int)v2 != 0 && (unsigned int)v2 != 1)
    {
        v2 = sub_411f80();
        if ((unsigned int)v2 != 0)
        {
            v3 = "close failed";
        }
    }
    if ((unsigned int)v2 == 1)
    {
        v2 = fflush_unlocked(v1);
        if ((unsigned int)v2 != 0)
        {
            v3 = "fflush failed";
        }
    }
    if ((unsigned int)v2 == 0 && (*(v1) & 16) == 0 || (unsigned int)v2 == 0 && (unsigned int)v2 == 1 || (unsigned int)v2 == 0 && (unsigned int)v2 != 0 && (unsigned int)v2 != 1)
    {
        return v2;
    }
    if (((unsigned int)v2 == 1 || (unsigned int)v2 != 0) && ((unsigned int)v2 == 1 || (unsigned int)v2 != 0) && ((unsigned int)v2 != 0 || (unsigned int)v2 != 1))
    {
        dcgettext(0x0, v3, 0x5);
        sub_405dd0(); /* do not return */
    }
}

int sub_411560()
{
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if (*(__errno_location()) == 0)
    {
        v4 = (unsigned int)sub_413d80();
        return v4;
    }
    sub_4114a0();
    return v3;
}

int sub_40cfc0()
{
    return 0;
}

typedef struct struct_0 {
    char padding_0[80];
    char field_50;
} struct_0;

int sub_413250()
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

extern char g_40f8a0;

int sub_40f900()
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
            v9 = (unsigned long long)(unsigned int)sub_4136b0();
            if (v9 != 0)
            {
                v14[0] = v9;
                v14[1] = &g_40f8a0;
                v14 = (unsigned long long)(unsigned int)sub_411210();
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
            v6 = (unsigned long long)(unsigned int)sub_411210();
            v6[1] = &g_40f8a0;
            v6[2] = 0;
            v6[3] = 0;
            v8 = open("/dev/urandom", 0x0, v7);
            if ((unsigned int)v8 >= 0)
            {
                v16 = __read_chk(v8, (unsigned int)v6 + 32, (!(rbp <= 0x800)? 0x800 : rbp), 0x1018);
                close(v8);
                if (v16 <= 2047)
                {
                    tmp_2 = v16;
                    tmp_27 = INVALID_IR;
                    v18 = (char *)&v6[4] + (INVALID_IR? 0 : v16);
                    v19 = (INVALID_IR? 0 : v16) + (!(0x800 - (INVALID_IR? 0 : v16) <= 16)? 16 : 0x800 - (INVALID_IR? 0 : v16));
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
                        v25 = (!(0x800 - rbp <= 4)? 4 : 0x800 - rbp);
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
                v30 = (!(0x800 - r14 <= 4)? 4 : 0x800 - r14);
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
                    v37 = (!(0x800 - rbp <= 4)? 4 : 0x800 - rbp);
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
            sub_410070();
        }
    }
    else
    {
        v11 = (unsigned int)sub_411210();
        *((long long *)v11) = 0;
        *((char **)(v11 + 8)) = &g_40f8a0;
        *((long long *)(v11 + 16)) = 0;
    }
    v50 = v11;
    return v50;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_40c000()
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
                        v8 = sub_40be30();
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
                    v13 = (unsigned long long)(unsigned int)sub_40be30();
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

int sub_411270()
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
            sub_411460(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern struct g_61c558;
extern unsigned long long g_61c560;
extern unsigned long long g_61c568;
extern unsigned int g_61c570;
extern unsigned long long g_61cbe0;

int sub_40f440()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_61c570;
    if (g_61c570 > 1)
    {
        v2 = &g_61c558[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_61c558[(unsigned long long)(g_61c570 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_61c558->field_8 != 6409184)
    {
        v1 = free(g_61c558->field_8);
        g_61c560 = 0x100;
        g_61c568 = &g_61cbe0;
    }
    if (g_61c558 != 6407520)
    {
        v1 = free(g_61c558);
        g_61c558 = &g_61c560;
    }
    g_61c570 = 1;
    return v1;
}

extern unsigned int g_416511;

int sub_407dd0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    dcgettext(0x0, 0x416511, 0x5);
    sub_405dd0(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[84];
    char field_54;
} struct_0;

int sub_406320()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx
    struct v7;  // rsi

    v1 = v3;
    v0 = v4;
    pthread_mutex_lock();
    sub_40d070();
    v7->field_54 = 1;
    pthread_cond_signal();
}

extern char g_61c759;
extern char g_61cb80;
extern uint128_t g_61cb90;

int sub_4085d0()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long long v2;  // rdi
    uint128_t v3[2];  // rbx
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax

    v3 = v2;
    if (g_61c759 != 0)
    {
        if (*((long long *)&g_61cb80) != 0)
        {
            v0 = v4;
            v5 = sub_4082a0();
            if ((unsigned int)v5 == 0)
            {
                return v5;
            }
        }
        if (*((long long *)&g_61cb80) == 0 || (unsigned int)v5 != 0)
        {
            *((int128_t *)&g_61cb80) = *((int128_t *)&v3);
            g_61cb90 = *((int128_t *)&v3[2]);
        }
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

extern unsigned int g_418520;
extern unsigned int g_418540;
extern unsigned int g_418570;
extern unsigned int g_418590;
extern unsigned int g_4185c0;
extern unsigned int g_418611;
extern unsigned long long stderr;

int sub_4122c0()
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x418520, 0x5), *(v34));
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x418540, 0x5), *(v34));
                                v39 = stderr;
                                v40 = v18;
                                v43 = v1;
                                v41 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v43) != 0)
                                    {
                                        __fprintf_chk(v39, 0x1, 0x418611, *((long long *)&v11));
                                        v39 = stderr;
                                    }
                                    v43 += 1;
                                    v40 = &v40[4];
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4185c0, 0x5), *(v34));
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
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x418590, 0x5), *(v34));
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
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x418570, 0x5), *(v34));
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

// int sub_405cf0()

int sub_40f1d0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_411410();
}

int sub_4060d0()
{
    unsigned long v0;  // [bp-0x8]
    void tmp_12;  // tmp #12
    unsigned long v2;  // rbx
    void *v3;  // rsi
    unsigned int *v4;  // rdx
    unsigned long v5;  // rax
    unsigned long v6;  // rax
    unsigned long v7;  // rdx
    char *v12;  // rdi
    unsigned long long v13;  // rcx
    char v14;  // cc_dep2
    unsigned long v15;  // d

    v0 = v2;
    v4 = v3;
    do
    {
        tmp_12 = *(v4);
        v4 = &v4[1];
    }
    while (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152) == 0);
    v6 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(v5 >> 16) : (unsigned int)v5);
    v7 = (((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v4 + 2) : v4) - 3 - ((v6 + v6 <= v6? 1 : 0) & 1) - v3;
    write(0x2, v3, v7);
    write(0x2, "\n", 0x1);
    _exit(0x2);
    write(0x2, ": errno ", 0x8);
    v12 = (unsigned long long)(unsigned int)sub_40d2b0();
    v13 = -1;
    while (v13 != 0)
    {
        v13 -= 1;
        v14 = *(v12);
        v12 = &v12[v15];
        break;
    }
    write(0x2, v12, !(rcx) - 1);
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
            v12 = (unsigned long long)(unsigned int)sub_413230();
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
                        v15 = sub_413250();
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
        sub_4131f0(); /* do not return */
    }
}

int sub_411410()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_411210();
}

int sub_40f5c0()
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
    return sub_40f030();
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

extern unsigned int g_4185e8;
extern unsigned int g_418619;
extern unsigned long long stderr;

int sub_4128e0()
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
    unsigned long long *v31;  // rsi
    unsigned long long v32;  // rcx
    char *v33;  // rdi
    char v34[3];  // rsi
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
                        sub_4121e0();
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
                            v26 = v0->field_0;
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
                            sub_4121e0();
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
        v45 = (unsigned int)sub_4122c0();
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
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4185e8, 0x5), *((long long *)v15));
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
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x418619, 0x5), *((long long *)v15));
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
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4185e8, 0x5), *((long long *)v15));
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
        v45 = (unsigned int)sub_4122c0();
    }
    v66 = v45;
    return v66;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_40fc00()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_10 = v2;
    return v3;
}

int sub_411b40()
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
                                    /* goto *((long long *)(rdx * 8 + 4293088)); */
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
                v39 = v30;
                v5 = 6;
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
            case 5: case 37:
                v28 = v30;
                if (!(INVALID_IR))
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
                if (!(INVALID_IR))
                {
                    v33 = tmp_11 * v29;
                    break;
                }
                else
                {
                    v33 = -1;
                    break;
                }
            case 14:
                v38 = v30;
                v5 = 5;
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
            case 18: case 50:
                v40 = v30;
                v5 = 4;
                do
                {
                    v33 = v33 * v40;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v47 = v5;
                    v5 = (unsigned long long)v5 - 1;
                }
                while (v47 != 1);
            case 23:
                v34 = v30;
                v35 = 8;
                do
                {
                    v33 = v33 * v34;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v43 = v35;
                    v35 -= 1;
                }
                while (v43 != 1);
                break;
            case 24:
                v36 = v30;
                v37 = 7;
                do
                {
                    v33 = v33 * v36;
                    if (INVALID_IR)
                    {
                        v33 = -1;
                    }
                    v44 = v37;
                    v37 -= 1;
                }
                while (v44 != 1);
            case 32:
                if (INVALID_IR)
                {
                    v33 *= 0x200;
                    break;
                }
            case 33:
                v49 = &v32[v31];
                *(v12) = v49;
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

int sub_4113e0()
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
        sub_411460(); /* do not return */
    }
}

int sub_40d050()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long long *v3;  // rdi

    v0 = v2;
    free(*(v3));
}

int sub_411050()
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

// int sub_413690()

extern unsigned int g_4164f1;
extern char g_61c758;
extern unsigned long long stdin;
extern unsigned long long stdout;

int sub_407cd0()
{
    char *v1;  // rdi
    char *v3;  // rsi
    unsigned long long v5;  // cc_dep1
    unsigned long long v6;  // cc_dep2
    unsigned long v7;  // d
    char *v8;  // rdi
    char *v9;  // rsi
    unsigned long long v10;  // rcx
    unsigned long long v12;  // rax
    unsigned long long v13;  // rbx
    unsigned short v14;  // dx
    unsigned long v15;  // rax
    unsigned long long v16;  // rbp
    unsigned long long v18;  // rax

    if (!(*(v3) != 114))
    {
        v8 = "-";
        v10 = 2;
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
        if ((v5 > v6) - 0 - (v5 < v6) == 0)
        {
            g_61c758 = 1;
            v13 = stdin;
        }
        else
        {
            v13 = 0;
            v15 = open(v9, 0x80000, v14);
            if (v15 >= 0)
            {
                v13 = fdopen(v15, v3);
            }
        }
        sub_40b800();
        v18 = v13;
        return v18;
    }
    else if (*(v3) == 119)
    {
        if (v1 != 0)
        {
            v12 = ftruncate(0x1, 0x0);
            if (v12 != 0)
            {
                v16 = (unsigned int)sub_40f700();
                error(0x2, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4164f1, 0x5));
            }
        }
        if (v1 == 0 || v12 == 0)
        {
            return stdout;
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    char padding_18[24];
    char field_30;
    char padding_31[3];
    char field_34;
    char field_35;
    char field_36;
    char padding_37[9];
    unsigned long long field_40;
} struct_0;

typedef struct struct_1 {
    char padding_0[6408832];
    char field_61ca80;
} struct_1;

extern int512_t g_4149c0;
extern unsigned int g_416538;
extern unsigned int g_416545;
extern char g_61c500;
extern char g_61c740;
extern struct g_61c750;
extern char g_61c759;
extern char g_61c75a;
extern int512_t g_61ca80;
extern unsigned long long stdout[7];

int sub_407e70()
{
    char *v0;  // [bp-0x48]
    char *v1;  // [bp-0x40]
    void *v3;  // rsi
    unsigned long long v4[7];  // rbp
    unsigned long long v5[2];  // rdi
    unsigned long long v6;  // r12
    unsigned long v7;  // rdx
    unsigned long long v8[2];  // r13
    unsigned long v9;  // rdx
    void *v10;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rsi
    char *v14;  // rdx
    unsigned long v15;  // rsi
    unsigned long long v17;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // r14
    unsigned long long v21;  // r10
    unsigned long long v22;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v23;  // rbp
    unsigned long long v24;  // r15
    struct v25;  // rax
    char *v27;  // rax
    unsigned int v29;  // ftop
    unsigned long long v30;  // rax
    char v31;  // al
    char *v33;  // rax
    unsigned long long v34;  // r15
    unsigned long long v35;  // rbx
    char *v36;  // rax
    char *v37;  // rax
    void *v38;  // rbx
    unsigned long long v39;  // r14
    struct v40;  // r12

    v4 = v3;
    v38 = *(v5);
    v17 = v5[1];
    v6 = *(v5) + v5[1];
    if (v7 == 0 && g_61c740 != 0)
    {
        v8 = v5;
        if (*(v5) < *(v5) + v5[1])
        {
            while (true)
            {
                v38 += 1;
                v12 = (char)(char)v38[-1];
                if ((char)v38[-1] != 9)
                {
                    v13 = v12;
                    if (*(v5) + v5[1] == v38)
                    {
                        v13 = 10;
                        v12 = 10;
                    }
                    v14 = v4[5];
                }
                else
                {
                    v13 = 62;
                    v12 = 62;
                    v14 = v4[5];
                }
                if ((char)v38[-1] == 9 && v4[6] > v4[5] || v4[6] > v4[5] && (char)v38[-1] != 9)
                {
                    v4[5] = &v14[1];
                    *((unsigned long long *)&v14) = v12;
                }
                if (v4[6] <= v4[5] && (char)v38[-1] == 9 || v4[6] <= v4[5] && (char)v38[-1] != 9)
                {
                    v15 = v13;
                }
                if (__overflow((unsigned int)v4, v15) != -1 || (char)v38[-1] == 9 && v4[6] > v4[5] || v4[6] > v4[5] && (char)v38[-1] != 9)
                {
                    v38 = *(v8);
                    v17 = v8[1];
                }
                else
                {
                    dcgettext(0x0, 0x416538, 0x5);
                    sub_405dd0(); /* do not return */
                }
            }
        }
        v40 = g_61c750;
        v19 = v38 + v17 - 1;
        while (true)
        {
            v21 = v40->field_0;
            v22 = v40->field_10;
            if (v40->field_0 != -1)
            {
                v23 = (unsigned int)sub_406360();
            }
            else
            {
                v23 = v38;
            }
            if (v22 != -1)
            {
                v19 = (unsigned int)sub_406470();
            }
            if ((0xffff00ff0000 & *((long long *)&v40->field_30)) != 0 || v40->field_36 != 0 || v40->field_0 == -1 && v21 == -1 && v40->field_30 != 0 || v21 == -1 && v40->field_30 != 0 && v22 != -1)
            {
                v24 = *(v19);
                *(v19) = 0;
                if (*(&((char *)&g_61ca80)[(unsigned long long)*(v23)]) != 0)
                {
                    do
                    {
                        v23 = &v23[1];
                        v25 = (unsigned long long)*(v23);
                    }
                    while (*((char *)(v25 + &g_61ca80)) != 0);
                }
                v0 = v23;
                if (v23 <= v19)
                {
                    if (v40->field_36 != 0)
                    {
                        sub_405a40();
                    }
                    else if (v40->field_34 != 0)
                    {
                        strtold((unsigned int)v23, (unsigned int)&v0);
                         INVALID_IR; //904:F64x8)[t0,0] = t1
                         INVALID_IR; //968:I8x8)[t0,0] = 0x01
                         INVALID_IR; //968:I8x8)[t0,0] = 0x00
                        v29 = ftop + 1;
                    }
                    else if ((0xff0000ff0000 & *((long long *)&v40->field_30)) != 0)
                    {
                        v27 = v23;
                        if (v23 < v19)
                        {
                            v30 = 0;
                            v31 = *(v23) == 45;
                            v27 = &v23[rax];
                        }
                        v1 = v27;
                        if (sub_405930() > 47)
                        {
                            v33 = v1;
                            if (v40->field_35 != 0)
                            {
                                v33 = &v33[-18446744073709551615 + -1 * (unsigned long long)(char)(*(&((char *)&g_4149c0)[(unsigned long long)*(v33)]) < 1)];
                            }
                            v0 = v33;
                        }
                    }
                }
                if (v23 > v19 || (0xff0000ff0000 & *((long long *)&v40->field_30)) == 0 && v40->field_36 == 0 && v40->field_34 == 0)
                {
                    v0 = v19;
                }
                *((unsigned long long *)&v19) = v24;
            }
            while (true)
            {
                v34 = (unsigned int)sub_405eb0();
                v35 = (unsigned int)sub_405eb0();
                while (true)
                {
                    v34 -= 1;
                    if (v34 == -1)
                    {
                        break;
                    }
                    v36 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v36) = 32;
                    }
                    else
                    {
                        __overflow((unsigned int)stdout, 0x20);
                    }
                }
                if (v35 != 0)
                {
                    do
                    {
                        v37 = stdout[5];
                        if (stdout[5] < stdout[6])
                        {
                            stdout[5] = stdout[5] + 1;
                            *(v37) = 95;
                        }
                        else
                        {
                            __overflow((unsigned int)stdout, 0x5f);
                        }
                        v35 -= 1;
                    }
                    while (v35 != 1);
                    v11 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v11) = 10;
                    }
                    else
                    {
                        v11 = __overflow((unsigned int)stdout, 0xa);
                    }
                }
                else
                {
                    v11 = __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x416545, 0x5));
                }
                if (v40 == 0)
                {
                    break;
                }
                v40 = v40->field_40;
                if (g_61c750->field_40 != 0)
                {
                    v38 = *(v8);
                    v39 = *(v8) + v8[1] - 1;
                    if (g_61c750->field_40 != 0)
                    {
                        break;
                    }
                }
                else
                {
                    if (g_61c759 != 0 || g_61c75a != 0)
                    {
                        break;
                    }
                }
            }
            if (g_61c750->field_40 != 0 && v40 != 0)
            {
                v21 = v40->field_0;
                v22 = v40->field_10;
            }
            else
            {
                return v11;
            }
        }
    }
    if (g_61c740 == 0 || v7 != 0)
    {
        v9 = v5[1];
        v10 = *(v5);
        *((char *)(v6 - 1)) = g_61c500;
        v11 = fwrite_unlocked(v10, 0x1, v9, v3);
        if (v17 == v11)
        {
            *((char *)(v6 - 1)) = 0;
        }
        else
        {
            dcgettext(0x0, 0x416538, 0x5);
            sub_405dd0(); /* do not return */
        }
    }
    if (v17 == v11 || v7 == 0 && g_61c740 != 0)
    {
        return v11;
    }
}

int sub_40f550()
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
    return sub_40f030();
}

extern char g_61c5c8;
extern unsigned long long g_61c5d0;

int sub_4058b1()
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

    if (g_61c5c8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_61c5d0 >= 0)
            {
                break;
            }
            g_61c5d0 = g_61c5d0 + 1;
            *((long long *)(6405680 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_61c5c8 = 1;
        return sub_40585b();
    }
    return v4;
}

typedef struct struct_0 {
    char padding_0[10];
    char field_a;
} struct_0;

int sub_40d330()
{
    struct v1;  // rsi
    char *v2;  // rcx
    unsigned long long v3;  // rdx
    unsigned long long v5;  // rdi

    v2 = &v1->field_a;
    v1->field_a = 0;
    while (true)
    {
        v2 = &v2[-1];
        *(v2) = (unsigned int)v3 - ((unsigned int)rdi * 3435973837 >> 35) * 10 + 48;
        if ((unsigned int)v3 <= 9)
        {
            break;
        }
        v5 = v3;
    }
    return v2;
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

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_3;

int sub_40cb20()
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
        v7 = sub_40be60();
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
            sub_40bf80();
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
                    v32 = sub_40c920();
                    if (v32 != 0)
                    {
                        v33 = sub_40be60();
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

typedef struct struct_1 {
    char padding_0[4287192];
    unsigned long long field_416ad8;
    unsigned int field_416adc;
    unsigned short field_416ade;
} struct_1;

extern int512_t g_416ad8;
extern int512_t g_416adc;
extern int512_t g_416ade;
extern int512_t g_416ae0;

int sub_40b250()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned int v3[7];  // rdi
    unsigned long long v4;  // rax
    unsigned int v5[7];  // rbx
    unsigned long long v6;  // r8
    unsigned long long v7;  // rcx
    unsigned long v8;  // cc_ndep
    unsigned long long v9;  // rdi
    unsigned long long v10;  // cc_dep2
    unsigned long long v11;  // rsi
    unsigned long long v12;  // rdx
    void *v13;  // rdx
    struct v14;  // rcx
    unsigned long long *v15;  // rdi
    unsigned long long v16;  // rdx
    unsigned long long *v17;  // rsi
    unsigned long long v18;  // rcx
    unsigned long v19;  // d

    v0 = v2;
    v4 = v3[3];
    v5 = v3;
    v12 = v3[2 + 1];
    v6 = (0 - (unsigned long long)(char)(v3[3] < 56) & -64) - -128;
    v7 = (0 - (unsigned long long)(char)(v3[3] < 56) & -0x10) + 31;
    v8 = (char)(v3[3] < 56);
    v9 = (0 - (unsigned long long)(char)(v3[3] < 56) & -0x10) + 30;
    v10 = v5[2];
    v11 = (unsigned int)v4 + v5[2];
    v5[2] = (unsigned int)v4 + v5[2];
    if (INVALID_IR)
    {
        v12 = (unsigned int)v12 + 1;
        v5[2 + 1] = v12;
    }
    v5[3 + 1 + v9] = (unsigned long long)((unsigned int)v4 + v5[2]) * 8;
    *((unsigned long long *)&v5[3 + 1 + v7]) = (unsigned int)v12 * 8 | v11;
    v13 = (char *)&v5[3 + 1] + v4;
    v14 = v6 - v4 - 8;
    if (!(v6 - v4 - 8 < 8))
    {
        v15 = v13 + 8 & -8;
        *((long long *)v13) = 128;
        *((long long *)(v13 + v14 - 8)) = *((long long *)(v14 + &g_416ad8));
        v16 = v13 - (v13 + 8 & -8);
        v17 = (char *)&g_416ae0 + -1 * v16;
        for (v18 = &v14->padding_0[v16] >> 3; v18 != 0; v17 = &v17[v19])
        {
            v18 -= 1;
            *(v15) = *(v17);
            v15 = &v15[v19];
        }
    }
    else if (!((v14 & 4) == 0))
    {
        *((int *)v13) = 128;
        *((int *)(v13 + v14 - 4)) = *((int *)(v14 + &g_416adc));
    }
    else if (v14 != 0)
    {
        *((char *)v13) = 128;
        if ((v14 & 2) != 0)
        {
            *((short *)(v13 + v14 - 2)) = *((short *)(v14 + &g_416ade));
        }
    }
    sub_40aae0();
}

extern unsigned long long g_61be20;

int sub_413f38()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_61be20;
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
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_40c170()
{
    struct v1;  // rdi

    return v1->field_20;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_40c150()
{
    struct v1;  // rdi

    return v1->field_10;
}

extern int512_t g_61cce0;

int sub_40f2c0()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_61cce0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_40de00();
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[8];
    unsigned long long field_48;
    char padding_50[24];
    char field_68;
    char padding_69[31];
    unsigned long long field_88;
    unsigned long long field_90;
    char padding_98[72];
    unsigned long long field_e0;
    unsigned long long field_e8;
} struct_0;

int sub_4102b0()
{
    void tmp_19;  // tmp #19
    struct v1;  // rdi
    struct v2;  // rbx
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long *v7;  // rdx
    unsigned long long *v8;  // rdx
    unsigned long long v9;  // rax

    v2 = v1;
    if (v1->field_30 == v1->field_28)
    {
        v1->field_68 = v1->field_68 | 2;
    }
    v3 = v2->field_38;
    v4 = v1->field_30 + v1->field_48 & !(v2->field_48);
    v5 = v2->field_20;
    v2->field_30 = v1->field_30 + v1->field_48 & !(v2->field_48);
    if (v4 - v5 > v4 - v5)
    {
        v2->field_30 = v1->field_38;
        v4 = v3;
    }
    v2->field_28 = v4;
    v7 = v2->field_88;
    if (v2->field_90 - v2->field_88 <= 7)
    {
        _obstack_newchunk();
        v7 = v2->field_88;
    }
    *(v7) = v1->field_28;
    v8 = v2->field_e0;
    tmp_19 = v2->field_e8;
    v2->field_88 = v2->field_88 + 8;
    v9 = tmp_19 + -0x1 * v8;
    if (tmp_19 + -0x1 * v8 <= 7)
    {
        v9 = _obstack_newchunk();
        v8 = v2->field_e0;
    }
    *(v8) = v1->field_30 - v1->field_28 - 1;
    v2->field_e0 = v2->field_e0 + 8;
    v2->field_0 = v2->field_0 + 1;
    return v9;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_40b360()
{
    void tmp_11;  // tmp #11
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r13
    struct v3;  // rdx
    struct v4;  // r12
    void *v5;  // rdi
    unsigned long long v6;  // rbp
    unsigned long long v7;  // r15
    unsigned long v8;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // rax
    unsigned int v10;  // esi
    unsigned long long v12;  // rcx
    unsigned long long v13;  // rdx
    unsigned int v16;  // r15d
    unsigned long long v17;  // rcx
    unsigned long long v19;  // rdx
    unsigned long long v21;  // rcx
    unsigned long long v22;  // rcx
    void *v23;  // rbx
    uint128_t v24[4];  // rbp
    void *v25;  // r14
    unsigned long long v26;  // r15
    uint128_t v27;  // xmm0
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rax
    void *v31;  // rsi
    unsigned long long v33;  // r14
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rsi
    unsigned long v36;  // r13

    v2 = v1;
    v4 = v3;
    v23 = v5;
    v9 = v3->field_18;
    if (v3->field_18 != 0)
    {
        v6 = v9;
        v7 = &v4->field_1c;
        v8 = (!(128 - v9 <= v1)? v1 : 128 - v9);
        v9 = memcpy(&(struct struct_0 *)&v4->field_1c->padding_0[v9], v5, (!(128 - v9 <= v1)? v1 : 128 - v9));
        v10 = v4->field_18 + (unsigned int)v8;
        v4->field_18 = v4->field_18 + (unsigned int)v8;
        if (v10 > 64)
        {
            sub_40aae0();
            v12 = v4->field_18;
            v9 = &(struct struct_0 *)&v3->field_1c->padding_0[v6 + v8 & -64];
            v13 = v4->field_18 & 63;
            v4->field_18 = v4->field_18 & 63;
            if (!((unsigned int)v12 < 8))
            {
                *((long long *)&v4->field_1c) = *((long long *)v9);
                v12 = v13;
                *((long long *)(v7 + v12 - 8)) = *((long long *)&((char *)v9)[v12 + -8]);
                v9 -= v7 - (&v4[1].padding_0[7] & -8);
                v16 = (unsigned int)(v7 - (&v4[1].padding_0[7] & -8) + v12) & -8;
                if (v16 >= 8)
                {
                    v19 = 0;
                    do
                    {
                        v22 = v19;
                        v19 = (unsigned int)v19 + 8;
                        *((long long *)((&v4[1].padding_0[7] & -8) + v22)) = *((long long *)(v9 + v22));
                    }
                    while ((unsigned int)v19 < (v16 & -8));
                }
            }
            else if (!((v12 & 4) == 0))
            {
                v17 = (unsigned int)*((int *)v9);
                *((int *)&v4->field_1c) = *((int *)v9);
                v9 = (unsigned int)*((int *)&((char *)v9)[v12 + -4]);
                *((unsigned int *)(v7 + v12 - 4)) = v9;
            }
            else if ((unsigned int)v12 != 0)
            {
                v21 = (unsigned int)v12 & 2;
                v4->field_1c = *((char *)v9);
                if (((unsigned int)v12 & 2) != 0)
                {
                    v9 = (unsigned short)*((short *)&((char *)v9)[v12 + -2]);
                    *((unsigned long long *)(v7 + v12 - 2)) = v9;
                }
            }
        }
        v23 = v5 + v8;
        v2 -= v8;
    }
    if (v2 > 63)
    {
        if ((v23 & 3) != 0)
        {
            v24 = &v4->field_1c;
            if (v2 != 64)
            {
                v26 = v2 - 65 >> 6;
                v25 = ((v2 - 65 >> 6) + 1) * 64 + v23;
                while (true)
                {
                    v27 = *((int128_t *)v23);
                    v23 += 64;
                    *((uint128_t *)&v24) = v27;
                    *((int128_t *)&v24[2]) = (int128_t)v23[-48];
                    *((int128_t *)&v24[4]) = (int128_t)v23[-32];
                    *((int128_t *)&v24[6]) = (int128_t)v23[-16];
                    sub_40aae0();
                    if (v23 == v25)
                    {
                        break;
                    }
                }
                v2 = v2 + (0 - v26) * 64 - 64;
            }
            else
            {
                v25 = v23;
            }
        }
        else
        {
            tmp_11 = v2;
            v2 = (unsigned int)v2 & 63;
            v23 += tmp_11 & -64;
            v9 = sub_40aae0();
        }
    }
    if ((v23 & 3) == 0 || v2 <= 63)
    {
        if (v2 == 0)
        {
            return v9;
        }
        v24 = &v4->field_1c;
        v25 = v23;
    }
    if (v2 != 0 || (v23 & 3) != 0 && v2 > 63)
    {
        v29 = v4->field_18;
        v30 = v2;
        v31 = (char *)v24 + (unsigned long long)v4->field_18;
        if (!((unsigned int)v2 < 8))
        {
            *((long long *)v31) = *((long long *)v25);
            *((long long *)&((char *)v31)[v2 + -8]) = *((long long *)&((char *)v25)[v2 + -8]);
            v33 = v25 - (v31 - (v31 + 8 & -8));
            v30 = (unsigned int)(v31 - (v31 + 8 & -8) + v2) & -8;
            if (((unsigned int)(v31 - (v31 + 8 & -8) + v2) & -8) >= 8)
            {
                v30 = (unsigned int)v30 & -8;
                v34 = 0;
                do
                {
                    v35 = v34;
                    v34 = (unsigned int)v34 + 8;
                    *((long long *)((v31 + 8 & -8) + v35)) = *((long long *)(v33 + v35));
                }
                while ((unsigned int)v34 < (unsigned int)v30);
            }
        }
        else if (!((v2 & 4) == 0))
        {
            *((int *)v31) = *((int *)v25);
            v30 = (unsigned int)*((int *)&((char *)v25)[v2 + -4]);
            *((int *)&((char *)v31)[v2 + -4]) = *((int *)&((char *)v25)[v2 + -4]);
        }
        else if ((unsigned int)v2 != 0)
        {
            *((char *)v31) = *((char *)v25);
            if ((v30 & 2) != 0)
            {
                v30 = (unsigned short)*((short *)&((char *)v25)[v2 + -2]);
                *((short *)&((char *)v31)[v2 + -2]) = *((short *)&((char *)v25)[v2 + -2]);
            }
        }
        v36 = v2 + v29;
        if (v36 > 63)
        {
            v36 -= 64;
            sub_40aae0();
            v30 = memcpy(v24, &v4[3].padding_0[5], v36);
        }
        v4->field_18 = v36;
        return v30;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c840()
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

// int sub_40f8ea()

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[17];
    char field_31;
} struct_0;

extern unsigned int g_61c424;
extern int512_t g_61ca80;

int sub_406470()
{
    struct v1;  // rdx
    unsigned long long v2;  // r9
    unsigned long long v3;  // rdi
    unsigned long v4;  // rsi
    unsigned long v6;  // rsi
    unsigned long long v7;  // rsi
    char *v8;  // rax
    unsigned long long v9;  // r8

    v2 = v1->field_18;
    v8 = v3;
    v6 = v1->field_10 + (char)(v1->field_18 < 1);
    if (g_61c424 != 128)
    {
        if (v8 > v3)
        {
            v9 = v6 - 1;
            if (v6 != 0)
            {
                while (true)
                {
                    if (g_61c424 != *(v8))
                    {
                        v8 = &v8[1];
                        if (v8 <= v8)
                        {
                            break;
                        }
                    }
                    else
                    {
                        if (v8 <= v8 || v2 == 0 && v9 == 0)
                        {
                            break;
                        }
                        v8 = &v8[1];
                        if (v8 <= v8)
                        {
                            break;
                        }
                        v9 -= 1;
                    }
                }
                if (false)
                {
                    return v8;
                }
            }
        }
    }
    else
    {
        if (v8 > v3 && v1->field_10 + (char)(v1->field_18 < 1) != 0)
        {
            while (true)
            {
                v7 = (char)*(&((char *)&g_61ca80)[(unsigned long long)*(v8)]);
                while (true)
                {
                    if (v7 != 0)
                    {
                        v8 = &v8[1];
                        if (v8 > v8)
                        {
                            break;
                        }
                    }
                    else if (v8 > v8)
                    {
                        while (true)
                        {
                            v8 = &v8[1];
                            v8 = v3 + v4 - 1;
                            if (false)
                            {
                                v7 = (char)*(&((char *)&g_61ca80)[(unsigned long long)*(v8)]);
                                if (v1->field_10 + (char)(v1->field_18 < 1) - 2 != -1)
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
                if (v7 != 0)
                {
                    v7 = (char)*(&((char *)&g_61ca80)[(unsigned long long)*(v8)]);
                }
            }
        }
    }
    return v8;
    if (v1->field_31 != 0 && v8 > v8)
    {
        while (*(&((char *)&g_61ca80)[(unsigned long long)*(v8)]) != 0)
        {
            v8 = &v8[1];
            return (v8 <= &v8[v2]? v8 : &v8[v2]);
        }
    }
    return (v8 <= &v8[v2]? v8 : &v8[v2]);
}

extern unsigned int g_61c420;
extern unsigned int g_61c69c;
extern unsigned long long g_61c6a8;
extern unsigned int g_61c6c0;

int sub_407a30()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xd4]
    char v2;  // [bp-0xc8]
    char v3;  // [bp-0xc0]
    unsigned long long v6;  // r13
    unsigned int *v9;  // rbp
    unsigned long long v11;  // rax
    uint128_t v13;  // xmm2
    unsigned long long v14;  // xmm2lq
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // r15d
    unsigned int v19[2];  // rdi
    unsigned long long v23;  // rax

    if (sub_40da00() >= 0)
    {
        if (g_61c420 + 1 < g_61c69c)
        {
            sub_405fb0();
            while (g_61c69c > 0)
            {
                if (sub_405fb0() == 0)
                {
                    break;
                }
            }
        }
        v9 = __errno_location();
        v0 = 0x3fd0000000000000;
        while (true)
        {
            g_61c6a8 = 0;
            v2 = pthread_sigmask(0x0, 0x61c6c0, (unsigned int)&v3) == 0;
            v11 = fork();
            v17 = *(v9);
            v6 = v11;
            if ((unsigned int)v11 != 0)
            {
                g_61c6a8 = g_61c6a8;
            }
            if (v2 != 0)
            {
                v1 = v11;
                sub_407880();
                v11 = v1;
            }
            if ((unsigned int)v11 != 0 || v2 != 0)
            {
                *(v9) = v17;
                if ((unsigned int)v11 < 0)
                {
                    if ((unsigned int)v17 == 11)
                    {
                        sub_411620();
                        v13 = 0;
                        v14 = v0;
                        v0 = (unsigned long long)(unsigned int)xmm2 * 2;
                        while (g_61c69c > 0)
                        {
                            if (sub_405fb0() == 0)
                            {
                                break;
                            }
                        }
                        v17 = *(v9);
                    }
                    close(v19[0]);
                    close(v19[1]);
                    *((unsigned long *)&v9) = v17;
                }
                else if (!(INVALID_IR))
                {
                    g_61c69c = g_61c69c + 1;
                }
            }
            if ((INVALID_IR || (unsigned int)v11 == 0) && (INVALID_IR || v2 == 0) && ((unsigned int)v11 == 0 || (unsigned int)v11 >= 0) && (v2 == 0 || (unsigned int)v11 >= 0))
            {
                v6 = 0;
                close(0x0);
                close(0x1);
            }
        }
    }
    else
    {
        v6 = -18446744069414584321;
    }
    v23 = v6;
    return v23;
}

int sub_411b13()
{
    abort(); /* do not return */
}

int sub_412f90()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4128e0();
}

int sub_40d3c0()
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
                        v14 = (unsigned int)sub_412fb0();
                        if (v14 == -1)
                        {
                            if (((char)v8 & 1) == 0)
                            {
                                break;
                            }
                        }
                        else if (v14 != -2)
                        {
                            v16 = wcwidth(*((int *)&v0));
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
                    if (v14 == -1)
                    {
                        v4 = &v4[1];
                        v18 = (unsigned int)v18 + 1;
                    }
                    else if (v14 == -2 || (unsigned int)v16 < 0 && v14 != -1 || v14 == -1 && ((char)v8 & 1) != 0)
                    {
                        v18 = -18446744069414584321;
                    }
                    else if (true)
                    {
                        if (v4 >= v3 + v7)
                        {
                            break;
                        }
                    }
                    else if (((unsigned int)v18 == 2147483647 || 2147483647 - (unsigned int)v18 < (unsigned int)v16) && (v19 == 0 || 2147483647 - (unsigned int)v18 < (unsigned int)v16) && ((unsigned int)v18 == 2147483647 || (unsigned int)v16 >= 0) && ((unsigned int)v18 == 2147483647 || v14 != -1) && ((unsigned int)v18 == 2147483647 || v14 != -2) && (v19 == 0 || (unsigned int)v16 >= 0) && (v19 == 0 || v14 != -1) && (v19 == 0 || v14 != -2))
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
            else if (v3 + v7 == v4 || ((char)(v10[(unsigned long long)v4[-1]] >> 8) & 64) != 0 || (v21 & 2) == 0 && v9 == 0)
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

extern char g_61cbb0;

int sub_40a9e0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_61cbb0 = v1;
    return v2;
}

int sub_40cda0()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_40cb20();
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c180()
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

extern unsigned int g_414f40;

int sub_405d00()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x414f40, 0x5));
}

extern unsigned long long g_61cbb8;

int sub_40a9d0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_61cbb8 = v1;
    return v2;
}

int sub_411f80()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_412140() != 0)
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

int sub_40b830()
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

int sub_413580()
{
    unsigned long long v1;  // xmm0lq
    unsigned long long v2;  // rsi
    uint128_t v3;  // xmm1
    unsigned long long v4;  // rcx
    unsigned long long v5;  // xmm1lq
    void v6;  // xmm0
    uint128_t v7;  // xmm0
    char v8;  // cl

    if (!((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1))
    {
        return 0x8000000000000000;
    }
    else if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1)
    {
        return 9223372036854775807;
    }
    v2 = v1;
    v3 = 0;
    v4 = 0;
    v5 = v1;
    v7 = (v6 - xmm1) * 0x41cdcd6500000000;
    v8 = (((unsigned long long)(unsigned int)(INVALID_IR) >> 0 | (unsigned long long)(unsigned int)(INVALID_IR) >> 6) & 1) == 0;
    if (!((char)(rcx + v7 - (((unsigned long long)((rcx + v7) * 1237940039285380275 >> 64) >> 26) - (rcx + v7 >> 63)) * 0x3b9aca00 >> 63)))
    {
        return ((unsigned long long)((rcx + v7) * 1237940039285380275 >> 64) >> 26) - (rcx + v7 >> 63) + v2;
    }
    return ((unsigned long long)((rcx + v7) * 1237940039285380275 >> 64) >> 26) - (rcx + v7 >> 63) + v2 - 1;
}

// int sub_40f630()

int sub_405eb0()
{
    unsigned long long v1;  // rdi
    unsigned long long v2;  // rbx
    unsigned long v3;  // rsi
    unsigned long long v4;  // rdx
    char v5;  // dl
    unsigned long long v6;  // rax

    v2 = v1;
    v6 = sub_40d3c0();
    if (v3 > v1)
    {
        do
        {
            v2 += 1;
            v4 = 0;
            v5 = *((char *)(v2 - 1)) == 9;
            v6 += rdx;
        }
        while (v3 != v2);
    }
    return v6;
}

extern int512_t g_61cce0;

int sub_40f270()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_61cce0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_61cce0 : v1) + 4)) = v3;
    return v2;
}

int sub_40c790()
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

typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
} struct_0;

extern unsigned int g_61cbc0;

int sub_40da00()
{
    unsigned int v1;  // esi
    unsigned int *v2;  // ebp
    unsigned long v4;  // rax
    unsigned int *v5;  // rax
    unsigned long long v6;  // rax
    unsigned int v7;  // edi
    unsigned long long v8;  // rax
    unsigned long long v9;  // r12
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned int v18;  // r12d
    struct v19;  // rdi
    unsigned long long v22;  // rax

    v2 = v1;
    if (g_61cbc0 >= 0)
    {
        if ((unsigned int)v4 < 0)
        {
            v5 = __errno_location();
            if (*(v5) == 38)
            {
                g_61cbc0 = -1;
            }
        }
        if (*(v5) != 38 || (unsigned int)v4 >= 0)
        {
            g_61cbc0 = 1;
            v4 = pipe2();
            return v6;
        }
    }
    if (g_61cbc0 < 0 || *(v5) == 38 && (unsigned int)v4 < 0)
    {
        v9 = v2 & -526337;
        if ((v2 & -526337) == 0)
        {
            v8 = pipe(v7);
            if (v8 >= 0)
            {
                if (((unsigned short)v2 & 0x800) != 0)
                {
                    v10 = sub_412000();
                    if (v10 >= 0)
                    {
                        v11 = sub_412000();
                        if (v11 != -1)
                        {
                            v12 = sub_412000();
                            if (v12 >= 0)
                            {
                                v13 = sub_412000();
                            }
                        }
                    }
                }
                if ((((unsigned short)v2 & 0x800) == 0 || v13 != -1 && v10 >= 0 && v11 != -1 && v12 >= 0) && ((unsigned int)v2 & 0x80000) != 0)
                {
                    v14 = sub_412000();
                    if (v14 >= 0)
                    {
                        v15 = sub_412000();
                        if (v15 != -1)
                        {
                            v16 = sub_412000();
                            if (v16 >= 0)
                            {
                                v17 = sub_412000();
                                if (v17 != -1)
                                {
                                    return v1 & -526337;
                                }
                            }
                        }
                    }
                }
            }
            else
            {
                v9 = -18446744069414584321;
            }
        }
        else
        {
            v9 = -18446744069414584321;
            *(__errno_location()) = 22;
        }
        if (unknown)
        {
            v18 = *(v2);
            close(*((int *)&v19->field_0));
            close(v19->field_4);
            *(v19) = *(v19);
            *(__errno_location()) = v18;
            v9 = -18446744069414584321;
        }
        if (unknown)
        {
            v22 = v9;
            return v22;
        }
    }
}

typedef struct struct_0 {
    char padding_0[12];
    char field_c;
} struct_0;

extern unsigned long long g_61c6a0;

int sub_406190()
{
    struct v1;  // rdi
    unsigned long long v2;  // rax

    if (g_61c6a0 != 0)
    {
        v1->field_c = 1;
        v2 = sub_40cda0();
        if (v2 != 0)
        {
            return v2;
        }
    }
    else
    {
        g_61c6a0 = (unsigned int)sub_40c600();
    }
    if (v2 == 0 || g_61c6a0 == 0)
    {
        sub_411460(); /* do not return */
    }
}

double sub_40d840()
{
    uint128_t v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x58]
    unsigned int v3;  // [bp-0x10]
    unsigned long long v5;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // xmm0
    unsigned long long v7;  // rax
    uint128_t v8;  // xmm0
    unsigned long long v9;  // xmm0lq
    uint128_t v10;  // xmm0
    unsigned long long v11;  // xmm0lq
    uint128_t v12;  // xmm1
    unsigned long long v13;  // xmm1lq
    uint128_t v14;  // xmm0

    *((unsigned long long *)&v0) = sysconf(0x55);
    v5 = sysconf(0x1e);
    v6 = 0;
    v6 = (long long)v0;
    if (((char)(INVALID_IR) & 1) == 0)
    {
        v12 = 0;
        v13 = v5;
    }
    if (((char)(INVALID_IR) & 1) != 0 || ((char)(INVALID_IR) & 1) != 0)
    {
        v7 = sysinfo((unsigned int)&v1);
        v8 = 0;
        v9 = 0x4190000000000000;
        if (v7 != 0)
        {
            return xmm0;
        }
        if (!(INVALID_IR))
        {
            v6 = 0;
            v6 = v2;
        }
        else
        {
            v10 = 0;
            v11 = v2 >> 1 | (unsigned int)v2 & 1;
            v6 = xmm0 * 2;
        }
        v12 = 0;
        v13 = v3;
    }
    if (v7 == 0 || ((char)(INVALID_IR) & 1) == 0 && ((char)(INVALID_IR) & 1) == 0)
    {
        v14 = v6 * v13;
        return v14;
    }
}

int sub_40be10()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_40bd10()
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

// int sub_40f7e0()

int sub_40b6c0()
{
    unsigned long long v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0xb8]
    unsigned int v3;  // [bp-0xb0]
    unsigned long v6;  // r12
    void *v7;  // r12
    unsigned long long v8;  // rbx
    unsigned int *v9;  // rdi
    unsigned long long v10;  // rax

    if (v6 != 0)
    {
        v6 = malloc(0x8048);
        v3 = 0;
        v0 = 17279655951921914625;
        v1 = 1167088121787636990;
        v2 = 0;
        while (true)
        {
            v8 = 0;
            while (true)
            {
                v10 = fread_unlocked(v7 + v8, 0x1, 0x8000 - v8, v9);
                v8 += v10;
                if (v8 != 0x8000)
                {
                    if (v10 == 0 && ((char)*(v9) & 32) != 0)
                    {
                        free(v7);
                        return 1;
                    }
                    if (v10 == 0 && ((char)*(v9) & 32) == 0 || v10 != 0 && ((char)*(v9) & 16) != 0)
                    {
                        if (v8 != 0)
                        {
                            sub_40b360();
                        }
                        sub_40b250();
                        free(v7);
                        return 0;
                    }
                }
                else
                {
                    sub_40aae0();
                }
            }
        }
    }
    else
    {
        return 1;
    }
}

int sub_40b800()
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

// int sub_413ea0()

extern int512_t g_4149c0;

int sub_4059f0()
{
    char *v0;  // [bp-0x10]
    unsigned long long v2;  // rax
    char *v3;  // rdi
    char v4;  // al
    unsigned long long v6;  // rdx

    v2 = 0;
    v4 = *(v3) == 45;
    v0 = &v3[rax];
    v6 = 0;
    if (sub_405930() > 48)
    {
        v6 = (unsigned int)(*(v3) == 45? 0 - (unsigned int)(char)*(&((char *)&g_4149c0)[(unsigned long long)*(v0)]) : (unsigned int)(char)*(&((char *)&g_4149c0)[(unsigned long long)*(v0)]));
    }
    return v6;
}

// int sub_40f7f0()

// int sub_40a640()

int sub_4112b0()
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
        sub_411460(); /* do not return */
    }
}

int sub_410680()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rbx
    unsigned long long v7;  // r13
    unsigned long long v8;  // r12
    unsigned long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r12
    unsigned long long v14;  // r13
    unsigned int *v15;  // rbp
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r12
    unsigned long long v19;  // r13

    v3 = v5;
    v6 = v3;
    v3 = v7;
    v2 = v8;
    v1 = stack_base + 0;
    v0 = v6;
    if ((unsigned int)v10 > 2)
    {
        v10 = mkostemp();
        v12 = v0;
        v13 = v2;
        v14 = v3;
        return v11;
    }
    v15 = __errno_location();
    close((unsigned int)v15);
    *(v15) = *(v15);
    v17 = v0;
    v18 = v2;
    v19 = v3;
    return sub_413690();
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

int sub_40d580()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_40d190()
{
    unsigned long long v0;  // [bp-0x60]
    void tmp_26;  // tmp #26
    unsigned long long v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v6[4];  // rdi
    unsigned long long *v7;  // rax
    unsigned long long v8;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // r15
    unsigned long long v12;  // r13
    unsigned long long *v13;  // rbx
    unsigned long long v14;  // r9
    unsigned long long v15;  // rbx
    unsigned long long v16;  // rsi
    unsigned long long v17;  // rdi
    unsigned long long v18;  // rax
    unsigned long long v19;  // r9
    unsigned long long v20;  // r12
    unsigned long long v21;  // rsi
    unsigned long long v22;  // rdi
    unsigned long long v23;  // rax
    unsigned long long *v24;  // rdx
    unsigned long long v25;  // r14

    v7 = v6[2];
    v0 = 0;
    if (v6[2] != 0)
    {
        v8 = *(v6);
        tmp_26 = *((long long *)(*(v6) + v7 * 8));
        v10 = *((long long *)(*(v6) + 8));
        v6[2] = (char *)&v7[-1] + 7;
        *((long long *)(v8 + 8)) = tmp_26;
        v11 = *(v6);
        v0 = v10;
        v12 = v6[3];
        v1 = *((long long *)(*(v6) + 8));
        v4 = (char *)&v7[-1] + 7 >> 1;
        if (!(INVALID_IR))
        {
            v25 = 1;
            while (true)
            {
                v20 = v25 * 2;
                if ((char *)&v7[-1] + 7 <= v25 << 1)
                {
                    v13 = v25 * 16 + v11;
                }
                else
                {
                    v14 = v20 + 1;
                    v3 = v20 + 1;
                    v15 = v25 * 16 + v11;
                    v16 = *((long long *)(v11 + (v20 + 1) * 8));
                    v2 = v11 + (v20 + 1) * 8;
                    v17 = *((long long *)(v25 * 16 + v11));
                    v18 = r13();
                    v19 = v3;
                    v13 = (v18 < 0? v2 : rbx);
                    v20 = (v18 < 0? v3 : r12);
                }
                v21 = v1;
                v22 = *(v13);
                v23 = r13();
                v24 = v11 + v25 * 8;
                if (v23 <= 0)
                {
                    break;
                }
                v25 = v20;
                *(v24) = *(v13);
                *(v13) = v1;
            }
            if (true)
            {
                *(v24) = v1;
            }
            else if (v23 > 0 && v20 > v4)
            {
                return v0;
            }
        }
        else
        {
            v24 = *(v6) + 8;
        }
        *(v24) = v1;
    }
    return v0;
}

// int sub_407880()

extern unsigned int g_61cd18;

int sub_412000()
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
        if (g_61cd18 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_412000();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_61cd18 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_61cd18 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_412000();
        }
        if ((*(v12) == 22 || g_61cd18 < 0) && (g_61cd18 < 0 || (unsigned int)v15 < 0) && (g_61cd18 == -1 || g_61cd18 >= 0) && (g_61cd18 < 0 || (unsigned int)v15 >= 0) && ((unsigned int)v15 >= 0 || g_61cd18 >= 0))
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

int sub_40c520()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c1d0()
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

// int sub_40f430()

extern int512_t g_61c3e8;

// int sub_413f20()

int sub_40d600()
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x10]
    char *v4;  // rdi
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rdx

    v5 = *(v4);
    if (*(v4) != 0)
    {
        v7 = v5;
        if (v5 <= 32)
        {
            v1 = 0x100003e00;
            if (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -288]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) != 0)
            {
                do
                {
                    v4 = &v4[1];
                    v6 = *(v4);
                    v7 = v6;
                }
                while (v6 <= 32 && (char)v6 != 0);
                if ((char)v6 != 0)
                {
                }
                else
                {
                    return 0;
                }
            }
        }
        if (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -288]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || v5 > 32 || (unsigned int)(v7 - 48) > 9)
        {
            if ((unsigned int)(v7 - 48) <= 9)
            {
                v2 = 0;
                v8 = strtoul();
                if (v2 != 0)
                {
                    v9 = (char)*((char *)0);
                    if (*((char *)0) != 0 && *((char *)0) <= 32)
                    {
                        v0 = 0x100003e00;
                        if (((char)((char)*(&((char *)stack_base)[((v9 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v9 & 63 & 7)) & 1) != 0)
                        {
                            v10 = 1;
                            do
                            {
                                v2 = v10;
                                v9 = (char)*((char *)v10);
                                if (v9 > 32)
                                {
                                    break;
                                }
                                v10 += 1;
                            }
                            while (*((char *)v10) != 0 && (0x100003e00 & 1 << (v9 & 63)) != 0);
                            if (*((char *)v10) != 0)
                            {
                            }
                            else
                            {
                                return v8;
                            }
                        }
                    }
                }
                if (v2 == 0 || *((char *)0) != 0 && v9 != 44)
                {
                    v8 = 0;
                }
                return v8;
            }
            return 0;
        }
    }
    if (*(v4) == 0 || v5 <= 32 && ((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -288]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) != 0 && (unsigned int)(v7 - 48) > 9)
    {
        return 0;
    }
}

int sub_40b900()
{
    unsigned int v0;  // [bp-0x54]
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    char *v5;  // rsi
    unsigned long long v6;  // rbp
    char *v7;  // rdi
    unsigned long long v8;  // rbx
    unsigned long long v9;  // r8
    unsigned long long v10;  // rcx
    unsigned long long v11;  // cc_dep1
    unsigned long long v12;  // cc_dep2
    unsigned long v13;  // d
    unsigned long long v14;  // rdi
    char *v15;  // rsi
    unsigned long long v16;  // cc_dep1
    unsigned long long v17;  // rcx
    char *v18;  // rsi
    unsigned long long v19;  // rdi
    unsigned long long v20;  // cc_dep1
    unsigned long long v21;  // cc_dep2
    unsigned long long v22;  // cc_dep1
    unsigned long long v23;  // rcx
    unsigned long long v24;  // rdi
    char *v25;  // rsi
    unsigned long long v26;  // cc_dep1
    unsigned long long v27;  // cc_dep2
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // rcx
    char *v30;  // rsi
    unsigned long long v31;  // rdi
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // cc_dep2
    unsigned long long v34;  // cc_dep1
    char v35;  // dl
    char v36;  // al
    unsigned long long v37;  // r13
    unsigned long long v38;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v39;  // r13
    unsigned long long v40;  // rax
    unsigned long long v41;  // r14
    unsigned long long v42;  // rax
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v46;  // r10
    /*INVALID_EQUAL_UNDEFINED*/
undefined v47;  // ecx
    unsigned long long v48;  // rcx
    unsigned long v49;  // rax
    unsigned long v50;  // rdi
    unsigned long long v51;  // rcx
    unsigned long long v52;  // rax
    unsigned long v53;  // rcx
    unsigned int v54;  // r9d
    unsigned long long v55;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v56;  // r9d
    unsigned long long v57;  // r10
    unsigned long v58;  // r10
    unsigned long v59;  // r12
    unsigned long v60;  // rax

    v6 = v5;
    v8 = v7;
    v59 = (unsigned int)strcmp(v7, v5);
    if ((unsigned int)v59 != 0)
    {
        v9 = (char)*((char *)v8);
        if (*((char *)v8) != 0)
        {
            v56 = (char)*((char *)v6);
            if (*((char *)v6) != 0)
            {
                v10 = 2;
                v14 = v8;
                v15 = ".";
                while (v10 != 0)
                {
                    v10 -= 1;
                    v11 = *(v15);
                    v12 = (char)*((char *)v14);
                    v14 += v13;
                    v15 = &v15[v13];
                    break;
                }
                v16 = (v11 > v12) - 0 - (v11 < v12);
                if ((char)v16 != 0)
                {
                    v17 = 2;
                    v18 = ".";
                    v19 = v6;
                    while (v17 != 0)
                    {
                        v17 -= 1;
                        v20 = *(v18);
                        v21 = (char)*((char *)v19);
                        v19 += v13;
                        v18 = &v18[v13];
                        break;
                    }
                    v22 = (v20 > v21) - 0 - (v20 < v21);
                    if ((char)v22 != 0)
                    {
                        v23 = 3;
                        v24 = v8;
                        v25 = ".";
                        while (v23 != 0)
                        {
                            v23 -= 1;
                            v26 = *(v25);
                            v27 = (char)*((char *)v24);
                            v24 += v13;
                            v25 = &v25[v13];
                            break;
                        }
                        v28 = (v26 > v27) - 0 - (v26 < v27);
                        if ((char)v28 != 0)
                        {
                            v29 = 3;
                            v30 = ".";
                            v31 = v6;
                            while (v29 != 0)
                            {
                                v29 -= 1;
                                v32 = *(v30);
                                v33 = (char)*((char *)v31);
                                v31 += v13;
                                v30 = &v30[v13];
                                break;
                            }
                            v34 = (v32 > v33) - 0 - (v32 < v33);
                            if ((char)v34 != 0)
                            {
                                v35 = v9 == 46;
                                if (v35 == 0 || v56 == 46)
                                {
                                    v36 = v56 == 46;
                                    if (v9 != 46)
                                    {
                                    }
                                    else
                                    {
                                        if (v36 != 0 && v35 != 0)
                                        {
                                            v8 += 1;
                                            v6 += 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (*((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v28 != 0 && (char)v34 != 0 && (char)v22 != 0 && (v35 == 0 || v56 == 46) && v9 == 46 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v28 != 0 && (char)v34 != 0 && (char)v22 != 0 && (v35 == 0 || v56 == 46) && v9 != 46 && v36 == 0)
        {
            v2 = v8;
            v3 = v6;
            v37 = (unsigned int)sub_40b830();
            v38 = sub_40b830();
            if (v37 != 0)
            {
                v39 = v37 - v8;
                if (v38 == 0)
                {
                    v41 = v3 - v6;
                }
            }
            else
            {
                v39 = v2 - v8;
            }
            if (v38 != 0)
            {
                v40 = v38 - v6;
                v41 = v40;
            }
            if ((v38 != 0 || v37 != 0) && v39 == v41)
            {
                v42 = strncmp(v8, v6, v39);
                if (v42 == 0)
                {
                    v39 = v2 - v8;
                }
            }
            if ((v42 == 0 || v38 == 0) && (v42 == 0 || v37 == 0) && (v38 == 0 || v39 == v41) && (v37 == 0 || v39 == v41))
            {
                v41 = v3 - v6;
            }
            v44 = 0;
            for (v43 = 0; v41 > v44 || v39 > v43; v59 = v58)
            {
                if (v39 > v43 || v39 > v43)
                {
                    v45 = (char)*((char *)(v8 + v43));
                    if ((unsigned int)(char)*((char *)(v8 + v43)) - 48 > 9)
                    {
                        v46 = v45;
                        if ((unsigned int)(v45 - 48) > 9)
                        {
                            v47 = v46;
                        }
                        else if (v41 != v44)
                        {
                            v50 = (char)*((char *)(v6 + v44));
                        }
                    }
                }
                if ((unsigned int)(v45 - 48) <= 9 && (unsigned int)(char)*((char *)(v8 + v43)) - 48 > 9 && v41 != v44 && (v39 > v43 || v39 > v43) || (unsigned int)((unsigned long long)(char)*((char *)(v8 + v43)) - 48) <= 9 || v39 == v43)
                {
                    v49 = v50;
                    v46 = 0;
                }
                if ((unsigned int)((unsigned long long)(char)*((char *)(v6 + v44)) - 48) > 9 || ((unsigned int)(v45 - 48) <= 9 && (unsigned int)(char)*((char *)(v8 + v43)) - 48 > 9 && v41 != v44 && (v39 > v43 || v39 > v43) || (unsigned int)((unsigned long long)(char)*((char *)(v8 + v43)) - 48) <= 9 || v39 == v43) && (unsigned int)((unsigned long long)v50 - 48) > 9)
                {
                    v51 = (unsigned int)v50 - 65;
                    if ((288230371923853311 & 1 << (v51 & 63)) == 0 || (unsigned int)v50 - 65 > 57)
                    {
                        if (v50 != 126)
                        {
                            v49 = (unsigned int)v49 + 0x100;
                        }
                        else
                        {
                            v49 = -18446744069414584321;
                        }
                    }
                }
                if ((unsigned int)(v45 - 48) <= 9 && (unsigned int)(char)*((char *)(v8 + v43)) - 48 > 9 && (v39 > v43 || v39 > v43) && v41 == v44 || (unsigned int)v49 == (unsigned int)v46 || ((unsigned int)(v45 - 48) <= 9 && (unsigned int)(char)*((char *)(v8 + v43)) - 48 > 9 && v41 != v44 && (v39 > v43 || v39 > v43) || (unsigned int)((unsigned long long)(char)*((char *)(v8 + v43)) - 48) <= 9 || v39 == v43) && (unsigned int)((unsigned long long)v50 - 48) <= 9)
                {
                    v43 += 1;
                    v44 += 1;
                }
                if (((unsigned int)(v45 - 48) <= 9 && (unsigned int)(char)*((char *)(v8 + v43)) - 48 > 9 && (v39 > v43 || v39 > v43) && v41 == v44 || (unsigned int)v49 == (unsigned int)v46 || ((unsigned int)(v45 - 48) <= 9 && (unsigned int)(char)*((char *)(v8 + v43)) - 48 > 9 && v41 != v44 && (v39 > v43 || v39 > v43) || (unsigned int)((unsigned long long)(char)*((char *)(v8 + v43)) - 48) <= 9 || v39 == v43) && (unsigned int)((unsigned long long)v50 - 48) <= 9) && v39 <= v43 || (v39 > v43 || v39 > v43) && (unsigned int)(char)*((char *)(v8 + v43)) - 48 <= 9 || v39 <= v43)
                {
                    v50 = (char)*((char *)(v6 + v44));
                    v53 = (char)*((char *)(v6 + v44));
                    if ((unsigned int)v50 - 48 > 9 && v39 != v43 && v41 > v44)
                    {
                        v47 = (char)*((char *)(v8 + v43));
                        v45 = (char)*((char *)(v8 + v43));
                        v46 = (char)*((char *)(v8 + v43));
                    }
                }
                if (unknown)
                {
                    v48 = (unsigned long long)v47 - 65;
                    if ((unsigned int)v48 <= 57 && (288230371923853311 & 1 << (v48 & 63)) != 0)
                    {
                        v49 = 0;
                    }
                }
                if (unknown)
                {
                    if (v45 != 126)
                    {
                        v46 = (unsigned int)v46 + 0x100;
                    }
                    else
                    {
                        v46 = -18446744069414584321;
                    }
                    if (v41 == v43)
                    {
                        v59 = v46;
                    }
                }
                if (unknown)
                {
                    v50 = (char)*((char *)(v6 + v44));
                    v49 = (char)*((char *)(v6 + v44));
                    if ((unsigned int)((unsigned long long)(char)*((char *)(v6 + v44)) - 48) <= 9)
                    {
                        v49 = 0;
                    }
                }
                if (unknown)
                {
                    while (true)
                    {
                        v52 = (char)*((char *)(v8 + v43));
                        if (*((char *)(v8 + v43)) != 48)
                        {
                            break;
                        }
                        v43 += 1;
                    }
                    if (v50 == 48)
                    {
                        do
                        {
                            v44 += 1;
                            v53 = (char)*((char *)(v6 + v44));
                        }
                        while (*((char *)(v6 + v44)) == 48);
                    }
                    v54 = (unsigned int)v53 - 48;
                    if ((unsigned int)(v52 - 48) > 9)
                    {
                        if (v54 <= 9)
                        {
                            break;
                        }
                    }
                    else if (v54 <= 9)
                    {
                        v55 = v43;
                        v56 = 0;
                        v57 = v44 - v43 + v6;
                        while (true)
                        {
                            v56 = (unsigned int)(v56 == 0? (unsigned int)(v52 - v53) : (unsigned int)r9);
                            v55 += 1;
                            v53 = (char)*((char *)(v57 + v55));
                            v1 = v55 - v43 + v44;
                            v52 = (char)*((char *)(v8 + v55));
                            v0 = (unsigned int)v53 - 48;
                            if ((unsigned int)(v52 - 48) > 9)
                            {
                                if (v0 <= 9)
                                {
                                    break;
                                }
                                if ((unsigned int)v56 == 0)
                                {
                                    v44 = v1;
                                    v43 = v55;
                                }
                                else
                                {
                                    v59 = v56;
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
                        if ((unsigned int)(v52 - 48) > 9)
                        {
                            v59 = -18446744069414584321;
                        }
                        else if ((unsigned int)(v52 - 48) <= 9)
                        {
                            v59 = 1;
                        }
                        else if ((unsigned int)(v52 - 48) > 9 && (unsigned int)v56 != 0 && v0 > 9)
                        {
                            v60 = v59;
                            return v60;
                        }
                    }
                }
                if ((unsigned int)v49 != (unsigned int)v46)
                {
                    v58 = v46 - v49;
                }
            }
            if (v54 <= 9 || (unsigned int)(v52 - 48) > 9)
            {
                v59 = -18446744069414584321;
            }
            else if ((unsigned int)(v52 - 48) <= 9)
            {
                v59 = 1;
            }
            else if (unknown)
            {
                v60 = v59;
                return v60;
            }
        }
        if (*((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v28 != 0 && (char)v34 != 0 && (char)v22 != 0 && (v35 == 0 || v56 == 46) && v9 == 46 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v28 != 0 && (char)v34 != 0 && (char)v22 != 0 && (v35 == 0 || v56 == 46) && v9 != 46 && v36 == 0 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v28 != 0 && (char)v34 != 0 && (char)v22 != 0 && (v35 == 0 || v56 == 46) && v9 != 46 && v36 != 0 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v28 != 0 && (char)v22 != 0 && (char)v34 == 0 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v22 == 0 || *((char *)v8) != 0 && *((char *)v6) == 0)
        {
            v59 = 1;
        }
        if (*((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v28 != 0 && (char)v34 != 0 && (char)v22 != 0 && (v35 == 0 || v56 == 46) && v9 == 46 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v28 != 0 && (char)v34 != 0 && (char)v22 != 0 && (v35 == 0 || v56 == 46) && v9 != 46 && v36 == 0 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && v56 != 46 && (char)v28 != 0 && (char)v34 != 0 && (char)v22 != 0 && v35 != 0 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 != 0 && (char)v22 != 0 && (char)v28 == 0 || *((char *)v6) != 0 && *((char *)v8) != 0 && (char)v16 == 0 || *((char *)v8) == 0)
        {
            v59 = -18446744069414584321;
        }
    }
    v60 = v59;
    return v60;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

// int sub_40f530()

extern unsigned int g_417998;
extern unsigned int g_4179a8;
extern unsigned int g_61c518;

int sub_40f8a0()
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
    v4 = (unsigned int)sub_40f880();
    v5 = __errno_location();
    if (*(v5) != 0)
    {
        v6 = dcgettext(0x0, 0x4179a8, 0x5);
    }
    else
    {
        v6 = dcgettext(0x0, 0x417998, 0x5);
    }
    error(g_61c518, *(v5), v6);
}

int sub_40c4b0()
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

extern unsigned int g_61c574;
extern unsigned int g_61c578;
extern unsigned int g_61c57c;
extern unsigned int g_61cd20;
extern unsigned int g_61cd24;
extern unsigned int g_61cd28;
extern unsigned long long g_61cd30;
extern unsigned long long g_61cd60;

int sub_412eb0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_61cd20 = g_61c57c;
    g_61cd24 = g_61c578;
    v1 = (unsigned int)v2;
    v0 = &g_61cd20;
    g_61c57c = g_61cd20;
    g_61cd60 = g_61cd30;
    g_61c574 = g_61cd28;
    return sub_4128e0();
}

// int sub_40f6c0()

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

    v10 = sub_402760();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6405664 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_4103a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long long *v3;  // rdi
    unsigned long long v4;  // rdi

    v0 = v2;
    *(v3) = 0;
    v4 = &v3[3];
    *((long long *)(v4 - 16)) = 0;
    *((long long *)(v4 - 8)) = 0;
    _obstack_begin();
    _obstack_begin();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40fbf0()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_8 = v2;
    return v3;
}

int sub_40a980()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

int sub_405910()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | (int)v1->field_8) % v2 >> 64;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_40c160()
{
    struct v1;  // rdi

    return v1->field_18;
}

// int sub_40f640()

int sub_40fd70()
{
    unsigned long long *v1;  // rdi

    __explicit_bzero_chk();
    free(v1);
    if (*(v1) == 0)
    {
        return 0;
    }
}

int sub_40c5a0()
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

int sub_412f50()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4128e0();
}

int sub_413e30()
{
    unsigned int v1;  // rsi
    unsigned long v2;  // rcx
    void *v3;  // rdi
    void *v4;  // rdx

    if (v1 == v2 && memcmp(v3, v4, v1) == 0)
    {
        *(__errno_location()) = 0;
        return 0;
    }
}

int sub_40d6f0()
{
    void tmp_1;  // tmp #1
    void tmp_17;  // tmp #17
    unsigned int v1;  // edi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbp
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rdx

    if (!(v1 != 2))
    {
        v2 = getenv("OMP_NUM_THREADS");
        if (v2 != 0)
        {
            v8 = -1;
            v4 = (unsigned int)sub_40d600();
            if (getenv("OMP_THREAD_LIMIT") != 0)
            {
                v8 = (sub_40d600() == 0? -1 : (unsigned long long)(unsigned int)sub_40d600());
            }
            if (v4 != 0)
            {
                tmp_1 = v4;
                tmp_17 = v8 <= v4;
                return (tmp_17? stack_base + 0 : tmp_1);
            }
        }
        else
        {
            v3 = getenv("OMP_THREAD_LIMIT");
            if (v3 != 0)
            {
                v8 = (unsigned int)sub_40d600();
            }
        }
    }
    else if (v1 != 1)
    {
        v7 = sysconf(0x53);
        if (v7 == 1)
        {
            v9 = 1;
            v7 = (unsigned int)sub_40d5b0();
        }
        v9 = (INVALID_IR? 1 : rax);
    }
    if (v1 == 1 || v2 == 0 && v8 == 0 && v1 == 2 || v2 == 0 && v1 == 2 && v3 == 0)
    {
        v8 = -1;
    }
    if (v1 == 1 || v2 == 0 && v1 == 2 || v4 == 0 && v1 == 2)
    {
        v10 = sub_40d5b0();
    }
    if ((v1 == 1 || v1 == 2) && (v2 == 0 || v1 == 1 || v4 == 0))
    {
        if (v10 != 0)
        {
            return (!(rax <= stack_base + 0)? stack_base + 0 : rax);
        }
        v11 = sysconf(0x54);
        v9 = 1;
        if (!(INVALID_IR))
        {
            v9 = (v11 <= v8? v11 : v8);
        }
    }
    if (v4 == 0 || v10 == 0)
    {
        return v9;
    }
}

int sub_411680()
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
                                    /* goto *((long long *)(rdx * 8 + 4292112)); */
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
                v39 = v30;
                v5 = 6;
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
                break;
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
                v38 = v30;
                v5 = 5;
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
            case 18: case 50:
                v36 = v30;
                v5 = 4;
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
            case 23:
                v37 = v30;
                v5 = 8;
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
                    v42 = v35;
                    v35 -= 1;
                }
                while (v42 != 1);
            case 32:
                if (INVALID_IR)
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

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

double sub_40be60()
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
        v7 = sub_40be30();
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
    char padding_0[40];
    unsigned long long field_28;
    unsigned long long field_30;
    char padding_38[24];
    unsigned int field_50;
} struct_0;

int sub_407850()
{
    struct v1;  // rdi
    struct v2;  // rsi

    if (v1->field_50 != v2->field_50)
    {
        return  amd64g_calculate_condition(0x2, 0x7, INVALID_IR, INVALID_IR, cc_ndep);
;;    }
    return (unsigned long long)(char)(v1->field_30 + v1->field_28 < v2->field_30 + v2->field_28);
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned short field_30;
    char field_32;
    char field_33;
    char field_34;
    char field_35;
    char field_36;
    char field_37;
    char field_38;
} struct_0;

extern int512_t g_61c880;
extern int512_t g_61c980;

int sub_405b50()
{
    struct v1;  // rdi
    char *v2;  // rsi
    char *v3;  // rsi
    char *v4;  // rax

    if (v1->field_30 != 0)
    {
        *(v2) = 98;
        v3 = &v2[1];
    }
    if (v1->field_20 == 6408320)
    {
        *(v3) = 100;
        v3 = &v3[1];
    }
    v4 = v3;
    if (v1->field_28 != 0)
    {
        *(v3) = 102;
        v4 = &v4[1];
    }
    if (v1->field_34 != 0)
    {
        *(v4) = 103;
        v4 = &v4[1];
    }
    if (v1->field_35 != 0)
    {
        *(v4) = 104;
        v4 = &v4[1];
    }
    if (v1->field_20 == 6408576)
    {
        *(v4) = 105;
        v4 = &v4[1];
    }
    if (v1->field_36 != 0)
    {
        *(v4) = 77;
        v4 = &v4[1];
    }
    if (v1->field_32 != 0)
    {
        *(v4) = 110;
        v4 = &v4[1];
    }
    if (v1->field_33 != 0)
    {
        *(v4) = 82;
        v4 = &v4[1];
    }
    if (v1->field_37 != 0)
    {
        *(v4) = 114;
        v4 = &v4[1];
    }
    if (v1->field_38 != 0)
    {
        *(v4) = 86;
        v4 = &v4[1];
    }
    *(v4) = 0;
    return v4;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

int sub_405920()
{
    struct v1;  // rsi
    unsigned long long v2;  // rax
    struct v3;  // rdi
    char v4;  // al

    v2 = v1->field_8;
    v4 = v3->field_8 == v1->field_8;
    return rax;
}

int sub_409830()
{
    unsigned long long v1[7];  // rsi

    if (*(v1) == v1[2] && v1[1] == v1[3] || *(v1) == v1[2] && v1[5] != 0 || v1[1] == v1[3] && v1[6] != 0)
    {
        return v1[3];
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_416b29;
extern unsigned int g_416b41;
extern unsigned int g_416b78;

int sub_40c240()
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
    unsigned long long v19;  // xmm0lq
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
    __fprintf_chk(v7, 0x1, 0x416b29, v9[4]);
    __fprintf_chk(v7, 0x1, 0x416b41, v17);
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
    __fprintf_chk(v7, 0x1, 0x416b78, v19);
}

// int sub_40f880()

extern unsigned int g_4179cf;
extern unsigned int g_417d4f;
extern unsigned int g_61c518;
extern unsigned long long stderr;

int sub_4131f0()
{
    __fprintf_chk(stderr, 0x1, 0x4179cf, dcgettext(0x0, 0x417d4f, 0x5));
    exit(g_61c518); /* do not return */
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char field_c;
} struct_1;

extern unsigned int g_415030;
extern unsigned int g_416559;
extern unsigned long long g_61c748;

int sub_408e20()
{
    char v0;  // [bp-0x40]
    char v1;  // [bp-0x3c]
    unsigned long long v3;  // rdi
    struct v4;  // rbp
    unsigned long long *v6;  // rdx
    unsigned long v7;  // r14
    unsigned long long v8;  // r14
    unsigned long v9;  // rsi
    struct v10;  // r12
    unsigned long long v12;  // rax
    unsigned int v14;  // r15d
    unsigned long long v15;  // rax
    unsigned long long *v16;  // r12
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbx
    unsigned int v23;  // r13d
    unsigned int *v25;  // rbp
    unsigned long long v28;  // rbx
    unsigned long long v30;  // rax

    v4 = v3;
    if (!(INVALID_IR) &&  amd64g_calculate_condition(0x5, 0x24, Shr(rsi, 0x3d), Shr(rsi, 0x3c), cc_ndep) == 0)
    {
        *(v6) = v7;
        v7 = (unsigned int)sub_411210();
        v21 = 0;
        if (v9 != 0)
        {
            while (true)
            {
                v10 = v4->field_8;
                if (v4->field_8 != 0 && v10->field_c != 0)
                {
                    if ((unsigned long long)v10->field_c == 1)
                    {
                        sub_4060a0();
                    }
                    v14 = open(&v10[1], 0x0, v6);
                    if (v14 >= 0)
                    {
                        v15 = sub_407a30();
                        if (v15 == -1)
                        {
                            v25 = __errno_location();
                            if (*(v25) == 24)
                            {
                                close(v14);
                                *(v25) = 24;
                            }
                            else
                            {
                                v28 = (unsigned int)sub_40f630();
                                error(0x2, *(v25), (unsigned long long)dcgettext(0x0, 0x415030, 0x5));
                            }
                        }
                        else if (v15 != 0)
                        {
                            *((unsigned long long *)&v10->field_8) = v15;
                            v16 = v8 + v21 * 8;
                            sub_406190();
                            close(v14);
                            close(*((int *)&v1));
                            v20 = fdopen(*((int *)&v0), "r");
                            if (v20 != 0)
                            {
                                *((unsigned long long *)(v8 + v21 * 8)) = v20;
                            }
                            else
                            {
                                v23 = v4->field_0;
                                close(*((int *)&v0));
                                *(v16) = 0;
                                *(__errno_location()) = v23;
                            }
                        }
                        if (v15 == 0)
                        {
                            close(*((int *)&v0));
                            if (v14 != 0)
                            {
                                sub_408e10();
                            }
                            if (*((int *)&v1) != 1)
                            {
                                sub_408e10();
                            }
                            execlp(g_61c748, g_61c748, 0x416559, 0x0);
                            __errno_location();
                            sub_4060d0(); /* do not return */
                        }
                    }
                    if ((v14 < 0 || v15 == -1) && (v14 < 0 || *(v25) == 24))
                    {
                        *((long long *)(v8 + v21 * 8)) = 0;
                    }
                }
                if (v4->field_8 == 0 || v10->field_c == 0)
                {
                    v12 = sub_407cd0();
                    *((unsigned long long *)(v8 + 0 * 8)) = v12;
                    if (v12 == 0)
                    {
                        break;
                    }
                }
                if ((v4->field_8 != 0 || v12 != 0) && (v12 != 0 || v10->field_c != 0) && (v4->field_8 == 0 || v10->field_c == 0 || v14 >= 0) && (v4->field_8 == 0 || v10->field_c == 0 || v20 != 0) && (v4->field_8 == 0 || v10->field_c == 0 || v15 != -1) && (v4->field_8 == 0 || v10->field_c == 0 || v15 != 0))
                {
                    v21 = 1;
                    v4 = &v4[1];
                    if (v9 == 1)
                    {
                        break;
                    }
                }
            }
        }
        v30 = v21;
        return v30;
    }
    if (INVALID_IR ||  amd64g_calculate_condition(0x5, 0x24, Shr(rsi, 0x3d), Shr(rsi, 0x3c), cc_ndep) != 0)
    {
        sub_411460(); /* do not return */
    }
}

// int sub_40f840()

extern unsigned int g_417d4f;
extern unsigned int g_61c518;

int sub_411460()
{
    dcgettext(0x0, 0x417d4f, 0x5);
    error(g_61c518, 0x0, "%");
    abort(); /* do not return */
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_411070()
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
    return sub_410c70();
}

int sub_4115c0()
{
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    if (*(__errno_location()) == 0)
    {
        v4 = (unsigned int)sub_413e30();
        return v4;
    }
    sub_4114a0();
    return v3;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_416571;
extern char g_61cd58[2];

int sub_413750()
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
    unsigned long long v62;  // rdx
    unsigned long long v66;  // rbp
    unsigned long long v67;  // rax
    unsigned long long v68;  // rax
    unsigned long long v69;  // rbp
    unsigned long long v70;  // rax

    v9 = g_61cd58;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_416571 : (unsigned long long)nl_langinfo(0xe));
    if (g_61cd58 == 0)
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
            v9 = &g_416571;
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
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                        {
                            *((char **)(v10 + 8)) = &v59[1];
                            v26 = *(v59);
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1)
                        {
                            if ((unsigned int)v26 != 35 && (unsigned int)v26 != 32)
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
                                    v31 = (unsigned int)(((unsigned int)(tmp_12 - 16843009) & !((unsigned int)tmp_12) & 2155905152 & 32896) == 0? (unsigned int)(rax >> 16) : (unsigned int)rax);
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
                                        v62 = v40 + 1;
                                        v49 = v37 + v42 - 1;
                                        if ((unsigned int)v43 >= 8)
                                        {
                                            *((long long *)v49) = *((long long *)&v5);
                                            v43 = v62;
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
                                        v9 = &g_416571;
                                        v10 = (tmp_10 == 0? &g_416571 : tmp_10);
                                        free(NULL);
                                        sub_411f80();
                                    }
                                }
                            }
                            if ((unsigned int)v26 == 35)
                            {
                                do
                                {
                                    v61 = *((long long *)(v10 + 8));
                                    if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                                    {
                                        *((char **)(v10 + 8)) = &v61[1];
                                        v61 = (unsigned int)*(v61);
                                        v62 = 1;
                                    }
                                    else
                                    {
                                        v61 = __uflow(v10);
                                        v62 = (char)((unsigned int)v61 != -1);
                                    }
                                }
                                while (v61 != 10 && v62 != 0);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && (unsigned int)v26 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v28 > 1 && (unsigned int)v26 != 32)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v37 != 0 && (unsigned int)v26 != 35 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v28 > 1 && (unsigned int)v26 != 32) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_416571 : tmp_10);
                            sub_411f80();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && v28 <= 1 || (unsigned int)v26 == 35 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 32 && v61 == -1)
                    {
                        v9 = &g_416571;
                    }
                    else if (((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1 || (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (unsigned int)v26 != 32 && v28 <= 1 || (unsigned int)v26 == 35 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 32 && v61 == -1) && v0 != 0 || v37 == 0 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 && (unsigned int)v26 != 32)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_416571;
            free(v17);
        }
        *((char *[2])&g_61cd58[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_416571 : tmp_10), v9);
            if (v67 != 0 && (v66 != 42 || v9[1] != 0))
            {
                v68 = strlen(v9);
                v69 = &((char [2])&v9[v68])[1];
                v70 = strlen(&((char [2])&v9[v68])[1]);
                v9 = v69 + v70 + 1;
                v66 = (char)*((char *)(v69 + v70 + 1));
                if (v66 == 0)
                {
                    break;
                }
            }
            if (v67 == 0 || v66 == 42 && v9[1] == 0)
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

int sub_40cde0()
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
    if (sub_40be60() != 0)
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
                sub_40bf80();
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
                    if (sub_40c920() == 0)
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

int sub_412f70()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_412eb0();
}

extern unsigned long long g_416571;

int sub_412fb0()
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
        v5 = &g_416571;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40bd10() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[8];
    char field_50;
} struct_0;

int _obstack_begin()
{
    unsigned long long v0;  // [bp-0x18]
    void tmp_35;  // tmp #35
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    struct v4;  // rdi
    unsigned long v5;  // rcx
    unsigned long v6;  // r8
    unsigned long long v7;  // r12
    unsigned long long v8;  // rbx
    struct v9;  // rbx
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r12
    unsigned long long v12;  // rbp
    unsigned long v13;  // rsi
    unsigned long long v14[2];  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12

    v4->field_50 = v4->field_50 & 254;
    v4->field_38 = v5;
    v4->field_40 = v6;
    v2 = v7;
    v1 = stack_base + 0;
    v0 = v8;
    v9 = v4;
    if (v10 != 0)
    {
        v12 = v10;
        v11 = v10 - 1;
    }
    else
    {
        v11 = 15;
        v12 = 16;
    }
    v9->field_30 = v11;
    *((int *)&v9->field_0) = (v13 == 0? 4064 : v13);
    v14 = sub_413230();
    v9->field_8 = v14;
    if (v14 != 0)
    {
        tmp_35 = v9->field_0;
        v9->field_10 = 0 - v12 & &((unsigned long long [2])&((char *)v14)[v11])[2];
        v9->field_18 = 0 - v12 & &((unsigned long long [2])&((char *)v14)[v11])[2];
        v14[0] = tmp_35 + (char *)v14;
        v9->field_20 = tmp_35 + (char *)v14;
        v14[1] = 0;
        v9->field_50 = v9->field_50 & 249;
        v15 = v0;
        v16 = v2;
        return 1;
    }
    sub_4131f0(); /* do not return */
}

extern unsigned int g_414f88;
extern unsigned int g_414fb8;
extern unsigned int g_416472;

int sub_405ef0()
{
    unsigned int *v1;  // rbx
    unsigned int *v2;  // rbx
    unsigned int v3;  // edi
    unsigned int v4;  // esi
    unsigned int v5;  // edx
    unsigned long long v7;  // rbx

    *(v1) = 0;
    v1 = __errno_location();
    if (*(v2) == 0)
    {
        return strxfrm(v3, v4, v5);
    }
    error(0x0, *(v2), (unsigned long long)dcgettext(0x0, 0x416472, 0x5));
    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x414f88, 0x5));
    v7 = (unsigned int)sub_40f550();
    error(0x2, 0x0, (unsigned long long)dcgettext(0x0, 0x414fb8, 0x5));
}

extern unsigned int g_417d60;
extern unsigned int g_417d80;
extern unsigned int g_417db0;

int sub_4114a0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long v3;  // [bp-0x8]
    unsigned long v5;  // r14
    unsigned long v6;  // r13
    unsigned long v7;  // r12
    unsigned long v8;  // rbx
    unsigned int v9;  // edi

    v3 = v5;
    v2 = v6;
    v1 = v7;
    v0 = v8;
    error(0x0, v9, (unsigned long long)dcgettext(0x0, 0x417d60, 0x5));
    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x417d80, 0x5));
    sub_40f5c0();
    sub_40f5c0();
    dcgettext(0x0, 0x417db0, 0x5);
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    struct struct_1 *field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    struct struct_2 *field_38;
    char padding_40[16];
    unsigned int field_50;
    char field_54;
} struct_0;

int sub_409880()
{
    void tmp_79;  // tmp #79
    unsigned long long v0;  // [bp-0xc8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0xb0]
    unsigned long v2;  // [bp-0xa8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0xa0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x98]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x90]
    char v6;  // [bp-0x80]
    unsigned long v7;  // [bp-0x78]
    unsigned long v9;  // [bp-0x68]
    unsigned long v10;  // [bp-0x60]
    unsigned long v11;  // [bp-0x58]
    unsigned long v12;  // [bp-0x50]
    unsigned long v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x18]
    unsigned long long v15;  // [bp-0x10]
    unsigned long long v16;  // [bp+0x8]
    unsigned long long v17;  // r14
    unsigned long long v18;  // r9
    unsigned long long v20;  // r13
    unsigned long long v21;  // r8
    unsigned long v23;  // r9
    unsigned long long v24;  // rbp
    unsigned long long v25[9];  // rcx
    unsigned long long v26[9];  // rbx
    unsigned long long v27;  // r8
    unsigned long long v28;  // rax
    unsigned long v29;  // rdx
    unsigned long long v30;  // rcx
    unsigned long long v31;  // rax
    unsigned long long v33;  // r12
    unsigned long long v34;  // r10
    unsigned long long v35;  // r9
    unsigned long long v38;  // r12
    struct v43;  // rbx
    unsigned long long v46;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v49;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v50;  // rdi
    unsigned long long v51;  // r11
    unsigned long long v53;  // rax
    uint128_t v54;  // xmm0
    unsigned long long v55;  // rax
    uint128_t v56;  // xmm2
    unsigned long long v60;  // r10
    unsigned long long v61;  // r15
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rax
    unsigned long long v64;  // rsi
    unsigned long long v65;  // r9
    unsigned long long v66;  // r8
    unsigned long long v67;  // r15
    uint128_t v68[2];  // rdi
    uint128_t v70;  // xmm4
    uint128_t v71[2];  // r8
    uint128_t v72[2];  // rax
    unsigned long long v73;  // rdi
    uint128_t v74[2];  // rdx
    unsigned long long v75;  // rdi
    unsigned long long v77;  // rdi
    unsigned long long v78;  // r8
    uint128_t v79;  // xmm6
    uint128_t v80[2];  // rcx
    unsigned long long v81;  // r15
    unsigned long long v83;  // rsi
    unsigned long long v84;  // r10
    unsigned long long v85;  // r9
    char v86;  // cc_dep1
    unsigned long long v94;  // rax
    unsigned long long v95;  // r13
    unsigned long long v96;  // r14

    v15 = v17;
    v14 = v20;
    v23 = v83 % 2;
    v24 = v77;
    v26 = v25;
    v27 = v25[5];
    v28 = v25[6];
    v2 = v29;
    v9 = v29;
    tmp_79 = v25[8];
    v30 = v16;
    v7 = v77;
    v10 = tmp_79;
    *((unsigned long long *)&(stack_base)[-112]) = v83 % 2;
    *((unsigned long long *)&(stack_base)[-176]) = v83 % 2;
    v11 = v21;
    v12 = v18;
    v13 = v16;
    if (v27 + v28 > 131071 && v83 > 1)
    {
        v31 = pthread_create();
        if (v31 != 0)
        {
            v27 = v26[5];
            v28 = v26[6];
        }
        else
        {
            v0 = v16;
            sub_409880();
            pthread_join(*((long long *)&v6), 0x0);
            v94 = v0;
        }
    }
    if (v27 + v28 <= 131071 || v83 <= 1 || v31 != 0)
    {
        v33 = 0 - v27 * 32;
        v34 = v24 - v2 * 32;
        v35 = v24 + 0 - v27 * 32;
        if (v28 > 1)
        {
            v5 = v27;
            v4 = v34;
            v3 = v28;
            v1 = v35;
            sub_408370();
            v27 = v5;
            v28 = v3;
            v35 = v1;
        }
        if (v27 > 1)
        {
            v3 = v35;
            v1 = v28;
            sub_408370();
            v35 = v3;
            v28 = v1;
        }
        v26[0] = v24;
        v38 = v33 - v28 * 32;
        v26[1] = v35;
        v26[2] = v35;
        v26[3] = v24 + v38;
        sub_406320();
        v1 = v11 + 8;
        v5 = v11 + 48;
        while (true)
        {
            pthread_mutex_lock();
            while (true)
            {
                if (v26 != 0)
                {
                    break;
                }
                pthread_cond_wait(v5, v1);
            }
            v26 = sub_40d190();
            pthread_mutex_unlock();
            v3 = (char *)&v43[1].field_0 + 3;
            pthread_mutex_lock();
            v46 = v43->field_50;
            v43->field_54 = 0;
            if ((unsigned int)v46 == 0)
            {
                break;
            }
            v61 = (v2 >> ((char)(v46 * 2 + 2) & 63)) + 1;
            if ((unsigned int)v46 > 1)
            {
                v49 = v43->field_8;
                v50 = v43->field_0;
                v71 = *(v43->field_20);
                while (true)
                {
                    v51 = v43->field_10;
                    if (v43->field_10 != v50)
                    {
                        if (v43->field_18 == v49)
                        {
                            v65 = v43->field_30;
                            v60 = v43->field_28;
                            v62 = v49 - v49 >> 5;
                            v63 = v50 - v50 >> 5;
                            if (v43->field_30 == 0)
                            {
                                v64 = v61 - 1;
                            }
                        }
                        else if (v61 != 0)
                        {
                            *((uint128_t *[2])&v4[0]) = v71;
                            v71 = &v4[-4];
                            if (sub_4082a0() > 0)
                            {
                                v55 = v43->field_8;
                                v50 = v43->field_0;
                                v56 = *((int128_t *)(v43->field_8 - 32));
                                v49 = v43->field_8 - 32;
                                v43->field_8 = v43->field_8 - 32;
                                *((uint128_t *)&v71) = v56;
                                *((int128_t *)&v71[2]) = *((int128_t *)(v55 - 16));
                            }
                            else
                            {
                                v53 = v43->field_0;
                                v49 = v43->field_8;
                                v54 = *((int128_t *)(v43->field_0 - 32));
                                v50 = v43->field_0 - 32;
                                v43->field_0 = v43->field_0 - 32;
                                *((uint128_t *)&v71) = v54;
                                *((int128_t *)&v71[2]) = *((int128_t *)(v53 - 16));
                            }
                            v61 -= 1;
                        }
                        else
                        {
                            v65 = v43->field_30;
                            v60 = v43->field_28;
                            v61 = -1;
                            v62 = v49 - v49 >> 5;
                            v63 = v50 - v50 >> 5;
                            if (v43->field_30 == 0)
                            {
                                v64 = -2;
                            }
                        }
                        if ((v43->field_30 == 0 || v61 == 0) && (v43->field_18 == v49 || v61 == 0) && (v43->field_18 == v49 || v43->field_30 == 0) && (v43->field_18 != v49 || v61 != 0))
                        {
                            v68 = v50 - 32;
                            while (true)
                            {
                                v70 = *((int128_t *)&v68);
                                v71 = &v71[-4];
                                v43->field_0 = v68;
                                v72 = v68;
                                *((uint128_t *)&v71) = v70;
                                *((int128_t *)&v71[2]) = *((int128_t *)&v68[2]);
                                if (v51 != v68)
                                {
                                    v64 -= 1;
                                    v68 = &v68[-4];
                                    v65 = v62;
                                    v63 = v50 + -0x1 * v72 >> 5;
                                }
                                else
                                {
                                    v65 = v62;
                                    v63 = v50 - v51 >> 5;
                                }
                            }
                        }
                    }
                    else
                    {
                        v65 = v43->field_30;
                        v60 = v43->field_28;
                        v63 = v50 - v50 >> 5;
                        if (v43->field_30 == 0)
                        {
                            v62 = v65;
                        }
                    }
                    if ((v43->field_10 == v50 || v43->field_18 == v49 || v61 == 0) && (v43->field_10 != v50 || v43->field_30 != 0) && (v43->field_10 == v50 || v43->field_18 == v49 || v43->field_30 != 0) && (v43->field_10 == v50 || v43->field_30 != 0 || v43->field_18 != v49))
                    {
                        if (v63 == v60 && v43->field_18 != v49)
                        {
                            v73 = v61 - 1;
                            v74 = v49 - 32;
                            if (v61 != 0)
                            {
                                while (true)
                                {
                                    v79 = *((int128_t *)&v74);
                                    v71 = &v71[-4];
                                    v43->field_8 = v74;
                                    v80 = v74;
                                    *((uint128_t *)&v71) = v79;
                                    *((int128_t *)&v71[2]) = *((int128_t *)&v74[2]);
                                    if (v74 != v43->field_18)
                                    {
                                        v73 -= 1;
                                        v74 = &v74[-4];
                                        v62 = v49 + -0x1 * v80 >> 5;
                                    }
                                    else
                                    {
                                        v62 = v49 + -0x1 * v74 >> 5;
                                    }
                                }
                            }
                        }
                        if (v43->field_18 == v49 || v61 == 0 || v63 != v60)
                        {
                            v62 = v49 - v49 >> 5;
                        }
                    }
                }
                v43->field_20->field_0 = v71;
            }
            else
            {
                while (true)
                {
                    if (v43->field_10 != v77)
                    {
                        if (v43->field_18 == v83)
                        {
                            v62 = v43->field_30;
                            v63 = v50 - v77 >> 5;
                            if (v43->field_30 == 0)
                            {
                                v66 = v61 - 1;
                                if (v61 != 0)
                                {
                                    v67 = v66;
                                }
                                else
                                {
                                    v60 = v43->field_28;
                                    v65 = v62;
                                }
                            }
                        }
                        else if (v61 != 0)
                        {
                            if (sub_4082a0() > 0)
                            {
                                v43->field_8 = v43->field_8 - 32;
                                sub_4085d0();
                            }
                            else
                            {
                                v43->field_0 = v43->field_0 - 32;
                                sub_4085d0();
                            }
                            v77 = v43->field_0;
                            v83 = v43->field_8;
                            v61 -= 1;
                        }
                        else
                        {
                            v61 = -1;
                            v63 = v50 - v77 >> 5;
                            if (v43->field_30 == 0)
                            {
                                v67 = -2;
                            }
                        }
                        if (v61 == 0 || v43->field_18 == v83)
                        {
                            if ((v43->field_18 == v83 || v43->field_30 != 0) && (v43->field_30 != 0 || v43->field_18 != v83))
                            {
                                v60 = v43->field_28;
                            }
                            if ((v43->field_30 == 0 || v61 == 0) && (v43->field_30 == 0 || v43->field_18 == v83) && (v61 != 0 || v43->field_18 != v83))
                            {
                                do
                                {
                                    v75 = v77 - 32;
                                    v43->field_0 = v75;
                                    sub_4085d0();
                                    v77 = v43->field_0;
                                    if (v43->field_0 == v43->field_10)
                                    {
                                        break;
                                    }
                                    v67 -= 1;
                                }
                                while (v67 != -1);
                                v60 = v43->field_28;
                                v65 = v43->field_30;
                                v63 = v50 - v77 >> 5;
                                v62 = v49 - v43->field_8 >> 5;
                            }
                        }
                    }
                    else
                    {
                        v62 = v43->field_30;
                        v60 = v43->field_28;
                        v63 = v50 - v77 >> 5;
                        if (v43->field_30 == 0)
                        {
                            v65 = v62;
                        }
                    }
                    if ((v43->field_10 != v77 && (v61 == 0 || v43->field_18 == v83) && (v43->field_18 == v83 || v43->field_30 != 0) && (v43->field_30 != 0 || v43->field_18 != v83) && v63 == v43->field_28 || v43->field_10 == v77 && v43->field_30 != 0 && v63 == v60) && v43->field_18 != v83)
                    {
                        v78 = v61 - 1;
                        if (v61 != 0)
                        {
                            v81 = v78;
                            do
                            {
                                v43->field_8 = v83 - 32;
                                sub_4085d0();
                                v83 = v43->field_8;
                                if (v43->field_8 == v43->field_18)
                                {
                                    break;
                                }
                                v81 -= 1;
                            }
                            while (v81 != -1);
                            v60 = v43->field_28;
                            v65 = v43->field_30;
                            v63 = v50 - v43->field_0 >> 5;
                            v62 = v49 - v83 >> 5;
                        }
                    }
                    if ((v43->field_10 != v77 && (v61 == 0 || v43->field_18 == v83) && (v43->field_18 == v83 || v43->field_30 != 0) && (v43->field_30 != 0 || v43->field_18 != v83) && v63 == v43->field_28 || v43->field_10 == v77 && v43->field_30 != 0 && v63 == v60) && v43->field_18 != v83 && v61 == 0 || (v43->field_10 != v77 && (v61 == 0 || v43->field_18 == v83) && (v43->field_18 == v83 || v43->field_30 != 0) && (v43->field_30 != 0 || v43->field_18 != v83) && v63 == v43->field_28 || v43->field_10 == v77 && v43->field_30 != 0 && v63 == v60) && v43->field_18 == v83 || v43->field_10 != v77 && (v61 == 0 || v43->field_18 == v83) && (v43->field_18 == v83 || v43->field_30 != 0) && (v43->field_30 != 0 || v43->field_18 != v83) && v63 != v43->field_28 || v43->field_10 == v77 && v43->field_30 != 0 && v63 != v60)
                    {
                        v65 = v43->field_30;
                        v62 = v49 - v83 >> 5;
                    }
                }
            }
            v84 = v60 - v63;
            v85 = v65 - v62;
            v86 = v43->field_54;
            v43->field_28 = v84;
            v43->field_30 = v85;
            if (v86 == 0)
            {
                sub_409830();
            }
            if (v43->field_50 > 1)
            {
                pthread_mutex_lock();
                if (v43->field_38->field_54 == 0)
                {
                    sub_409830();
                }
                pthread_mutex_unlock();
            }
            else if (v43->field_30 + v43->field_28 == 0)
            {
                sub_406320();
            }
            pthread_mutex_unlock();
        }
        pthread_mutex_unlock();
        v94 = sub_406320();
    }
    v95 = v14;
    v96 = v15;
    return v94;
}

// int sub_40b7f0()

int sub_4106a0()
{
    char v1[2];  // rdi
    unsigned long long v2;  // r9
    unsigned int v3;  // ecx
    unsigned long long v4;  // rax
    unsigned int v5;  // ecx
    unsigned long v6;  // rdx
    unsigned long long v7;  // r8
    unsigned long v8;  // r10
    unsigned long long v9;  // rax
    unsigned int v10;  // ecx
    unsigned int v11;  // eax
    unsigned long v12;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v13;  // r9d
    char *v14;  // rsi
    unsigned int v15;  // r9d
    unsigned long v16;  // rdx
    unsigned int v17;  // esi
    unsigned long v18;  // r10
    unsigned long long v19;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // rsi
    unsigned int v21;  // r8d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v22;  // rax
    unsigned long v23;  // rdx
    unsigned int v24;  // r8d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v25;  // r10d
    unsigned int v26;  // eax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v27;  // r10d
    unsigned long long v28;  // rcx
    unsigned long long v29;  // r8
    unsigned long long v30;  // r9
    unsigned int v31;  // r8d
    unsigned int v32;  // r10d
    unsigned int v33;  // eax
    char v34;  // al
    unsigned long long v36;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v37;  // r10d
    unsigned long long v38;  // rax
    unsigned long long v39;  // rcx
    unsigned int v40;  // edx
    unsigned long long v42;  // r8
    unsigned long long v43;  // r8
    unsigned long long v45;  // rcx
    unsigned long long v46;  // rdi
    unsigned int v47;  // eax
    char v48;  // al
    unsigned long long v50;  // rdx
    unsigned long long v51;  // rax
    unsigned int v52;  // r8d
    char v53[2];  // rax
    unsigned int v54;  // edx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v57;  // eax
    unsigned int v58;  // edx
    unsigned long long v60;  // r9
    unsigned int v61;  // r10d
    unsigned long long v62;  // rax
    char v63;  // al
    unsigned long v64;  // rax
    unsigned int v66;  // edx
    unsigned int v68;  // ecx
    unsigned long long v69;  // rax
    char v70;  // al
    unsigned long long v71;  // rax

    v2 = v1[0];
    v19 = v20[0];
    if (v1[0] != 45)
    {
        if (v20[0] == 45)
        {
            do
            {
                v20 = &v20[1];
                v9 = v20[0];
            }
            while (v10 == (unsigned int)v9);
            if ((unsigned int)v12 == (unsigned int)v9)
            {
                while (true)
                {
                    v14 = &v20[1];
                    v9 = *(v14);
                    if (*(v14) != 48)
                    {
                        break;
                    }
                    v20 = &v14[1];
                    v9 = v20[0];
                }
            }
            v17 = (unsigned int)v9 - 48;
            v36 = 1;
            if (v17 > 9)
            {
                while (true)
                {
                    if (v2 != 48)
                    {
                        v22 = v2;
                        if (v10 != (unsigned int)v2)
                        {
                            break;
                        }
                    }
                    v1 = &v1[1];
                    v2 = v1[0];
                }
                if ((unsigned int)v12 == (unsigned int)v22)
                {
                    do
                    {
                        v1 = &v1[1];
                        v30 = v1[0];
                    }
                    while (v1[0] == 48);
                    v22 = v30;
                }
            }
        }
        else
        {
            while (true)
            {
                if (v2 != 48)
                {
                    v4 = v2;
                    if (v5 != (unsigned int)v2)
                    {
                        break;
                    }
                }
                v1 = &v1[1];
                v2 = v1[0];
            }
            do
            {
                v20 = &v20[1];
                v19 = v20[0];
                v18 = v19;
            }
            while (v5 == (unsigned int)v19);
            while ((unsigned int)(v18 - 48) <= 9 && v2 == v19)
            {
                do
                {
                    v1 = &v1[1];
                    v4 = v1[0];
                    v2 = v1[0];
                }
                while (v5 == v1[0]);
                while (true)
                {
                    v20 = &v20[1];
                    v18 = *(v20);
                    v19 = *(v20);
                    if (v5 != *(v20))
                    {
                        break;
                    }
                    v20 = &v20[1];
                    v18 = v20[0];
                    v19 = v20[0];
                }
            }
            if ((unsigned int)(v18 - 48) <= 9 || (unsigned int)v23 != (unsigned int)v4)
            {
                v31 = (unsigned int)v4 - 48;
                if ((unsigned int)v23 != (unsigned int)v18)
                {
                    v26 = v4 - v18;
                    v37 = (unsigned int)v18 - 48;
                    if (v31 > 9)
                    {
                        v43 = 0;
                    }
                }
                else if (v31 <= 9)
                {
                    v26 = v4 - v23;
                    v37 = v23 - 48;
                }
                if (v31 <= 9)
                {
                    v43 = 0;
                    do
                    {
                        v1 = &v1[1];
                        v54 = v1[0];
                        v43 += 1;
                    }
                    while (v54 - 48 <= 9);
                    if (v37 > 9)
                    {
                        v62 = 0;
                        v63 = v43 != 0;
                        return rax;
                    }
                }
            }
            if (((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9))
            {
                v42 = v20[0];
                if (v23 != v1[0])
                {
                    v36 = 0;
                    if (v23 == v42)
                    {
                        v53 = &v20[1];
                        v50 = v20[1];
                    }
                }
                else
                {
                    v45 = v1[1];
                    if (v23 != v42)
                    {
                        v1 = &v1[1];
                    }
                    else
                    {
                        while (true)
                        {
                            v20 = &v20[1];
                            v50 = v20[0];
                            v51 = v45;
                            v1 = &v1[1];
                            v52 = v45 - 48;
                            if (v20[0] == v45)
                            {
                                if (v52 > 9)
                                {
                                    break;
                                }
                                v45 = v1[1];
                            }
                            else
                            {
                                v60 = v50;
                                v61 = v50 - 48;
                                if (v52 <= 9)
                                {
                                    if (v61 > 9)
                                    {
                                        break;
                                    }
                                    return v51 - v60;
                                }
                                v36 = 0;
                                if (v61 > 9)
                                {
                                    break;
                                }
                                v53 = v20;
                            }
                        }
                    }
                }
            }
        }
        if (v20[0] == v45 || v52 > 9 && v61 > 9)
        {
            if (v20[0] != v45 && v52 > 9)
            {
                return v36;
            }
            else if (v20[0] == v45)
            {
                return 0;
            }
        }
    }
    else
    {
        do
        {
            v1 = &v1[1];
            v4 = v1[0];
            v13 = v4;
        }
        while (v3 == (unsigned int)v4);
        if (v20[0] != 45)
        {
            if ((unsigned int)v6 == (unsigned int)v13)
            {
                do
                {
                    v1 = &v1[1];
                    v11 = v1[0];
                }
                while (v1[0] == 48);
                v13 = v11;
            }
            v15 = v13 - 48;
            if (v15 <= 9)
            {
                return -18446744069414584321;
            }
            while (true)
            {
                if (v19 != 48)
                {
                    v27 = v19;
                    if (v3 != (unsigned int)v19)
                    {
                        break;
                    }
                }
                v20 = &v20[1];
                v19 = v20[0];
            }
            if ((unsigned int)v6 == (unsigned int)v27)
            {
                do
                {
                    v20 = &v20[1];
                    v24 = v20[0];
                }
                while (v20[0] == 48);
                v27 = v24;
            }
            v32 = v27 - 48;
            v33 = 0;
            v34 = v32 <= 9;
            return 0 - rax;
        }
        do
        {
            v20 = &v20[1];
            v7 = v20[0];
            v8 = v7;
        }
        while (v3 == (unsigned int)v7);
        while ((unsigned int)(v8 - 48) <= 9 && v4 == v7)
        {
            do
            {
                v1 = &v1[1];
                v13 = v1[0];
                v4 = v1[0];
            }
            while (v3 == v1[0]);
            while (true)
            {
                v20 = &v20[1];
                v8 = *(v20);
                v7 = *(v20);
                if (v3 != *(v20))
                {
                    break;
                }
                v20 = &v20[1];
                v8 = v20[0];
                v7 = v20[0];
            }
        }
        if ((unsigned int)(v8 - 48) <= 9 || (unsigned int)v16 != (unsigned int)v13)
        {
            v21 = (unsigned int)v13 - 48;
            if ((unsigned int)v16 != (unsigned int)v8)
            {
                v25 = (unsigned int)v8 - 48;
                v26 = v8 - v13;
                if (v21 > 9)
                {
                    v29 = 0;
                }
            }
            else if (v21 <= 9)
            {
                v25 = v16 - 48;
                v26 = v16 - v13;
            }
            if (v21 <= 9)
            {
                v29 = 0;
                do
                {
                    v1 = &v1[1];
                    v40 = v1[0];
                    v29 += 1;
                }
                while (v40 - 48 <= 9);
                if (v25 > 9)
                {
                    v47 = 0;
                    v48 = v29 != 0;
                    return 0 - rax;
                }
            }
        }
        if (((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9))
        {
            v28 = v1[0];
            if (v16 != v20[0])
            {
                v36 = 0;
            }
            else if (v16 == v28)
            {
                while (true)
                {
                    v20 = &v20[1];
                    v1 = &v1[1];
                    v38 = v20[0];
                    v39 = v1[0];
                    if (v20[0] == v1[0])
                    {
                        if ((unsigned int)(v38 - 48) > 9)
                        {
                            break;
                        }
                    }
                    else if ((unsigned int)(v38 - 48) <= 9)
                    {
                        return v38 - v39;
                    }
                    else
                    {
                        if ((unsigned int)v39 - 48 <= 9)
                        {
                            break;
                        }
                        return 0;
                    }
                }
            }
        }
        if (v20[0] == v1[0])
        {
            return 0;
        }
    }
    if (v31 <= 9 && v20[0] != 45 && v1[0] != 45 && ((unsigned int)(v18 - 48) <= 9 || (unsigned int)v23 != (unsigned int)v4) && v37 <= 9 || v31 > 9 && v20[0] != 45 && v1[0] != 45 && (unsigned int)v23 != (unsigned int)v18 && ((unsigned int)(v18 - 48) <= 9 || (unsigned int)v23 != (unsigned int)v4) && v37 <= 9)
    {
        v46 = 0;
        do
        {
            v20 = &v20[1];
            v66 = v20[0];
            v46 += 1;
        }
        while (v66 - 48 <= 9);
        if (v46 != v43)
        {
            return 0 - (unsigned int)(char)(v43 < v46) | 1;
        }
    }
    if (v20[0] == 45 && v1[0] != 45 && v17 <= 9 || v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 == v1[0] && v23 == v42 || v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 != v1[0] && v23 != v42 || v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 != v20[0] && v16 != v28)
    {
        return v36;
    }
    if (v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 == v1[0] && v23 == v42 || v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 != v1[0] && v23 == v42)
    {
        for (; v50 == 48; v50 = v53[0])
        {
            v53 = &v53[1];
        }
        v57 = v50;
    }
    if (v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 == v1[0] && v23 == v42 || v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 == v1[0] && v23 != v42)
    {
        for (; v45 == 48; v45 = v1[0])
        {
            v1 = &v1[1];
        }
        v68 = (unsigned int)v45 - 48;
        v69 = 0;
        v70 = v68 <= 9;
        return rax;
    }
    if (v20[0] == 45 && v1[0] == 45 && v21 <= 9 && ((unsigned int)(v8 - 48) <= 9 || (unsigned int)v16 != (unsigned int)v13) && v25 <= 9 || v20[0] == 45 && v1[0] == 45 && v21 > 9 && (unsigned int)v16 != (unsigned int)v8 && ((unsigned int)(v8 - 48) <= 9 || (unsigned int)v16 != (unsigned int)v13) && v25 <= 9)
    {
        v46 = 0;
        do
        {
            v20 = &v20[1];
            v58 = v20[0];
            v46 += 1;
        }
        while (v58 - 48 <= 9);
        if (v46 != v29)
        {
            return (0 - (unsigned int)(char)(v29 < v46) & 2) - 1;
        }
    }
    if (v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 == v1[0] && v23 == v42 || v31 > 9 && v20[0] != 45 && v1[0] != 45 && (unsigned int)v23 != (unsigned int)v18 && ((unsigned int)(v18 - 48) <= 9 || (unsigned int)v23 != (unsigned int)v4) && v37 > 9 || v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 == v20[0] && v16 == v28 || v20[0] == 45 && v1[0] == 45 && v25 > 9 && v21 > 9 && (unsigned int)v16 != (unsigned int)v8 && ((unsigned int)(v8 - 48) <= 9 || (unsigned int)v16 != (unsigned int)v13))
    {
        return 0;
    }
    if (v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 == v20[0] && v16 == v28 || v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 != v20[0] && v16 == v28)
    {
        while (true)
        {
            v57 = v1[0];
            if (v1[0] != 48)
            {
                break;
            }
            v1 = &v1[1];
        }
    }
    if (v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 == v20[0] && v16 == v28 || v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 == v20[0] && v16 != v28)
    {
        do
        {
            v20 = &v20[1];
            v22 = v20[0];
        }
        while (v20[0] == 48);
    }
    if (v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 == v1[0] && v23 == v42 || v20[0] != 45 && v1[0] != 45 && ((unsigned int)v23 == (unsigned int)v4 || (unsigned int)v23 == (unsigned int)v18) && ((unsigned int)v23 == (unsigned int)v4 || v31 > 9) && ((unsigned int)v23 == (unsigned int)v18 || (unsigned int)(v18 - 48) > 9) && (v31 > 9 || (unsigned int)(v18 - 48) > 9) && v23 != v1[0] && v23 == v42 || v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 == v20[0] && v16 == v28 || v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 != v20[0] && v16 == v28)
    {
        v71 = 0 - (unsigned int)(char)(v57 - 48 <= 9);
        return v71;
    }
    if (v20[0] == 45 && v1[0] != 45 && v17 > 9 || v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 == v20[0] && v16 == v28 || v20[0] == 45 && v1[0] == 45 && ((unsigned int)v16 == (unsigned int)v13 || (unsigned int)v16 == (unsigned int)v8) && ((unsigned int)v16 == (unsigned int)v13 || v21 > 9) && ((unsigned int)v16 == (unsigned int)v8 || (unsigned int)(v8 - 48) > 9) && ((unsigned int)(v8 - 48) > 9 || v21 > 9) && v16 == v20[0] && v16 != v28)
    {
        v64 = (char)(v22 - 48 <= 9);
        return v64;
    }
    if ((v31 <= 9 && v20[0] != 45 && v1[0] != 45 && ((unsigned int)(v18 - 48) <= 9 || (unsigned int)v23 != (unsigned int)v4) && v37 <= 9 || v31 > 9 && v20[0] != 45 && v1[0] != 45 && (unsigned int)v23 != (unsigned int)v18 && ((unsigned int)(v18 - 48) <= 9 || (unsigned int)v23 != (unsigned int)v4) && v37 <= 9) && v46 == v43 || (v20[0] == 45 && v1[0] == 45 && v21 <= 9 && ((unsigned int)(v8 - 48) <= 9 || (unsigned int)v16 != (unsigned int)v13) && v25 <= 9 || v20[0] == 45 && v1[0] == 45 && v21 > 9 && (unsigned int)v16 != (unsigned int)v8 && ((unsigned int)(v8 - 48) <= 9 || (unsigned int)v16 != (unsigned int)v13) && v25 <= 9) && v46 == v29)
    {
        return (v46 == 0? 0 : (unsigned int)rax);
    }
}

int sub_411440()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_40f700()
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
    return sub_40f030();
}

int sub_411210()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_411460(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
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

int sub_412180()
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

double sub_40d900()
{
    uint128_t v0;  // [bp-0x80]
    void tmp_14;  // tmp #14
    char v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x50]
    unsigned long v3;  // [bp-0x40]
    unsigned int v4;  // [bp-0x10]
    unsigned long long v6;  // rax
    uint128_t v7;  // xmm0
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // xmm1
    unsigned long long v9;  // rax
    uint128_t v12;  // xmm0
    unsigned long v13;  // rdx
    unsigned long v14;  // rax
    unsigned long v15;  // xmm0lq
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // xmm0
    uint128_t v18;  // xmm1
    unsigned long long v19;  // rax
    uint128_t v20;  // xmm1
    unsigned long long v21;  // xmm1lq
    unsigned long long v22;  // xmm1lq
    uint128_t v23;  // xmm0

    *((unsigned long long *)&v0) = sysconf(0x56);
    v6 = sysconf(0x1e);
    v7 = 0;
    v7 = (long long)v0;
    if (((char)(INVALID_IR) & 1) == 0)
    {
        v8 = 0;
        v22 = v6;
    }
    if (((char)(INVALID_IR) & 1) != 0 || ((char)(INVALID_IR) & 1) != 0)
    {
        v9 = sysinfo((unsigned int)&v1);
        if (v9 == 0)
        {
            if (!(INVALID_IR))
            {
                v16 = 0;
                v16 = v2;
                v14 = v3;
                v18 = 0;
                v18 = v14;
            }
            else
            {
                v12 = 0;
                v13 = v2 % 2 | (unsigned int)v2 & 1;
                v14 = v3;
                v15 = v13;
                v16 = xmm0 * 2;
                tmp_14 = v14;
                v19 = (unsigned int)v14 & 1;
                v20 = 0;
                v21 = tmp_14 >> 1 | v19;
                v18 = xmm1 * 2;
            }
            v7 = v16 + v18;
            v8 = 0;
            v22 = v4;
        }
        else
        {
            sub_40d840();
            return xmm0 * 0x3fd0000000000000;
        }
    }
    if (v9 == 0 || ((char)(INVALID_IR) & 1) == 0 && ((char)(INVALID_IR) & 1) == 0)
    {
        v23 = v7 * v8;
        return v23;
    }
}

extern int512_t g_416c56;
extern int512_t g_416c5a;

int sub_40dd00()
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
        v3 = sub_413750();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_416c56 : 4287585);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_416c5a : 4287581);
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

int sub_4110d0()
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
        return sub_410c70();
    }
}

int sub_40be20()
{
    unsigned long v1;  // rax

    return v1;
}

// int sub_40f6f0()

extern int512_t g_416ba0;

int sub_40bf80()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4287392)
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
            *(v1) = &g_416ba0;
            return 0;
        }
    }
    if (unknown)
    {
        return 1;
    }
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

extern int512_t g_40cfc0;

int sub_40cfd0()
{
    unsigned long long v1;  // rdi
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbp
    struct v5;  // rbx
    unsigned long v6;  // rax
    unsigned long long v8[3];  // rax

    v4 = v3;
    v5 = (unsigned long long)(unsigned int)sub_411210();
    if (v3 != 0)
    {
        v6 =  amd64g_calculate_condition(0x5, 0x24, Shr(rbp, 0x3d), Shr(rbp, 0x3c), cc_ndep);
        if (INVALID_IR || v6 != 0)
        {
            sub_411460(); /* do not return */
        }
    }
    else
    {
        v4 = 1;
    }
    if (v3 == 0 || v6 == 0 && !(INVALID_IR))
    {
        v8 = sub_411210();
        v8[1] = v4;
        v8[0] = 0;
        v8[0] = v8;
        v8[2] = 0;
        *((int *)&v5->field_18) = (v1 == 0? &g_40cfc0 : r12);
        return v5;
    }
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int sub_40fc10()
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
                    sub_40fdc0();
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
                            return sub_40fdc0();
                        }
                    }
                    sub_40fdc0();
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

int sub_412f10()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_412eb0();
}

// int sub_40f810()

extern int512_t g_61cce0;

int sub_40f230()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_61cce0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_61cce0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

// int sub_40f860()

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[32];
    char field_30;
} struct_0;

extern unsigned int g_61c424;
extern int512_t g_61ca80;

int sub_406360()
{
    void tmp_12;  // tmp #12
    char *v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long long v3;  // rax
    struct v4;  // rdx
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rcx
    unsigned long long v7;  // r8
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rdi

    v3 = &v1[v2 + -1];
    v5 = v4->field_0;
    if (g_61c424 != 128)
    {
        if (&v1[v2 + -1] > v1)
        {
            v7 = v5 - 1;
            if (v5 != 0)
            {
                while (true)
                {
                    if (g_61c424 != *(v1))
                    {
                        v1 = &v1[1];
                        if (v3 <= v1)
                        {
                            break;
                        }
                    }
                    else
                    {
                        if (v3 <= v1)
                        {
                            break;
                        }
                        v1 = &v1[1];
                        v7 -= 1;
                        if (v7 == -1 || v3 <= v1)
                        {
                            break;
                        }
                    }
                }
                if (v3 <= v1 || v3 <= v1 || g_61c424 != *(v1))
                {
                    v9 = &v1[v4->field_8];
                    tmp_12 = !(rax <= v9);
                    return (tmp_12? v9 : rax);
                }
            }
        }
    }
    else
    {
        if (&v1[v2 + -1] > v1 && v4->field_0 != 0)
        {
            while (true)
            {
                v6 = (char)*(&((char *)&g_61ca80)[(unsigned long long)*(v1)]);
                while (true)
                {
                    if (v6 != 0)
                    {
                        v1 = &v1[1];
                        if (v3 > v1)
                        {
                            break;
                        }
                        v8 = &v1[v4->field_8];
                        tmp_12 = !(rax <= v8);
                        return (tmp_12? v8 : rax);
                    }
                    else if (v3 > v1)
                    {
                        while (true)
                        {
                            v1 = &v1[1];
                            if (v3 != v1)
                            {
                                v6 = (char)*(&((char *)&g_61ca80)[(unsigned long long)*(v1)]);
                                if (v4->field_0 - 2 != -1)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v1 = v3;
                            }
                        }
                        if (v3 == v1)
                        {
                            v9 = &v1[v4->field_8];
                            tmp_12 = !(rax <= v9);
                            return (tmp_12? v9 : rax);
                        }
                    }
                }
                if (false)
                {
                    if (v6 != 0)
                    {
                        v6 = (char)*(&((char *)&g_61ca80)[(unsigned long long)*(v1)]);
                    }
                    else
                    {
                        v9 = &v1[v4->field_8];
                        tmp_12 = !(rax <= v9);
                        return (tmp_12? v9 : rax);
                    }
                }
            }
            if (false)
            {
                v9 = &v1[v4->field_8];
                tmp_12 = !(rax <= v9);
                return (tmp_12? v9 : rax);
            }
        }
    }
    if (&v1[v2 + -1] > v1)
    {
        while (true)
        {
            if (*(&((char *)&g_61ca80)[(unsigned long long)*(v1)]) != 0)
            {
                v1 = &v1[1];
                if (v3 <= v1)
                {
                    break;
                }
            }
            else
            {
                v10 = &v1[v4->field_8];
                tmp_12 = !(rax <= v10);
                return (tmp_12? v10 : rax);
            }
        }
    }
    v9 = &v1[v4->field_8];
    tmp_12 = !(rax <= v9);
    return (tmp_12? v9 : rax);
}

int sub_40de00()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
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
            v26 = (unsigned int)sub_40dd00();
            v27 = (unsigned long long)(unsigned int)sub_40dd00();
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
                    if (v8 == 0 || v78 != 0 || v34 > v38)
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
                        case 12:
                            v40 = 102;
                            break;
                            if (v17 == 0)
                            {
                                v78 = 0;
                            }
                            else
                            {
                                v87 = 0;
                            }
                        case 13:
                            v5 = 0;
                        case 32:
                            v41 = 0;
                            v40 = 32;
                            v50 = v5;
                            v5 = v41;
                            v78 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v48 = v5;
                            v89 = 0;
                            v5 = v42;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) | v17;
                            if (v17 != 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) != 0)
                            {
                                v78 = 0;
                                v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                v89 = (unsigned int)v39 == 2;
                            }
                            if ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0)
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
                                    v33 = rax;
                                }
                                if (v79 > v76)
                                {
                                    *((char *)(v29 + v76)) = 92;
                                }
                                v76 += 1;
                                v80 += 1;
                            }
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
                            v89 = (unsigned int)v39 == 2;
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
                    case 10:
                        v40 = 10;
                        v45 = 110;
                        v89 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
                    case 11:
                        v40 = 11;
                        v45 = 118;
                        v89 = (unsigned int)v39 == 2;
                        if (v4 == 0)
                        {
                            v55 = 0;
                            break;
                        }
                        else
                        {
                            v40 = v45;
                            v78 = 0;
                        }
                    case 12:
                        v40 = 12;
                        v45 = 102;
                        v89 = (unsigned int)v39 == 2;
                    case 13:
                        v40 = 13;
                        v45 = 114;
                    case 32:
                        v40 = 32;
                        v89 = (unsigned int)v39 == 2;
                        if (v17 != 0)
                        {
                            break;
                        }
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v89 = (unsigned int)v39 == 2;
                        v35 = 0;
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
                if (v76 == 0 && (v81 == 2 & v17) != 0)
                {
                    v3 = v27;
                    v2 = v26;
                    v1 = 0;
                    v76 = (unsigned int)sub_40de00();
                }
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
                            v76 = (unsigned int)sub_40de00();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0)
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
                    v46 = sub_412fb0();
                    v58 = v46;
                    if (v46 != 0 && v46 != -2 && v46 != -1)
                    {
                        if (v10 == 2 && v46 != 1 && v17 != 0)
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
                    if (v46 == 0 || v46 != -2 && (unsigned int)v46 != 0 && v46 != -1)
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
                v49 = 0;
                v87 = v89;
                *((unsigned long long *)&v4) = v4 & v87;
            }
            if (v15 != 1 || v89 != 0)
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
                    if ((v80 < v64 || v89 == 0) && (v63 == 0 || v89 == 0) && (v80 < v64 || v89 != 0))
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
            if (v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v5 != 0 || v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v5 == 0 || (v15 != 1 || v89 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v76 == 0 && (v81 == 2 & v17) != 0 || v78 == 0 && (char)v85 != 0 && v6 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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

int sub_4136b0()
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
            v5 = sub_413ea0();
            if (v5 >= 0)
            {
                v6 = sub_411f80();
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
                sub_411f80();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

int sub_412140()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_412180();
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[4];
    char field_c;
} struct_0;

extern unsigned int g_4164d6;
extern struct g_61c418;
extern struct_0 g_61c6a8;
extern unsigned int g_61c6c0;

int sub_407920()
{
    char v0;  // [bp-0xc8]
    char v1;  // [bp-0xc0]
    char v2;  // [bp-0x30]
    struct v4;  // r13
    struct v5;  // rbx
    char *v6;  // rdi
    struct v7;  // rax
    struct v9;  // r12
    unsigned int v11;  // r15d
    unsigned long long v13;  // rbp

    v4 = &g_61c6a8.field_0;
    v5 = g_61c6a8.field_0;
    if (v6 != g_61c6a8.field_0 + 13)
    {
        v7 = v5->field_0;
        if (v5->field_0 + 13 != v6)
        {
            do
            {
                v5 = v7;
                v7 = v7->field_0;
            }
            while (&v7[1] != v6);
        }
        v4 = v5;
        v5 = v7;
    }
    if (v5->field_c == 1)
    {
        sub_4060a0();
    }
    v9 = v5->field_0;
    v0 = pthread_sigmask(0x0, 0x61c6c0, (unsigned int)&v1) == 0;
    v11 = *(__errno_location());
    v4->field_0 = v9;
    if (v0 == 0)
    {
    }
    else
    {
        sub_407880();
    }
    if (unlink(v6) == 0)
    {
    }
    else
    {
        v13 = (unsigned int)sub_40f700();
        error(0x0, v11, (unsigned long long)dcgettext(0x0, 0x4164d6, 0x5));
    }
    if (v9 == 0)
    {
        g_61c418 = v4;
    }
    return (unsigned long long)free(*((long long *)&v2));
}

int sub_40dbe0()
{
    char v0;  // [bp-0x10]
    unsigned long long v2;  // rbx
    char *v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v2 = 200809;
    v3 = getenv("_POSIX2_VERSION");
    if (v3 != 0 && *(v3) != 0)
    {
        v4 = strtol(v3, &v0, 0xa);
        if (*((char *)*((long long *)&v0)) == 0)
        {
            if (v4 >= -0x80000000)
            {
                return (v4 <= 2147483647? v4 : 2147483647);
            }
            v2 = 0x80000000;
        }
    }
    if (v4 < -0x80000000 || *(v3) == 0 || v3 == 0 || *((char *)*((long long *)&v0)) != 0)
    {
        v5 = v2;
        return v5;
    }
}

extern unsigned int g_41645b;

int sub_405dd0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    unsigned long v3;  // rsi
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rbp

    v0 = v2;
    if (v3 == 0)
    {
        v4 = dcgettext(0x0, 0x41645b, 0x5);
    }
    v5 = (unsigned int)sub_40f700();
    error(0x2, *(__errno_location()), "%s: %s");
}

extern unsigned long long g_61c6a8;
extern unsigned int g_61c6c0;

int sub_407890()
{
    char v0;  // [bp-0x98]
    char v1;  // [bp-0x90]
    unsigned long long v3;  // rax
    unsigned long long *v4;  // rbx

    if (g_61c6a8 != 0)
    {
        v3 = pthread_sigmask(0x0, 0x61c6c0, (unsigned int)&v1);
        v4 = g_61c6a8;
        v3 = (char)(v3 == 0);
        v0 = v3 == 0;
        if (g_61c6a8 != 0)
        {
            while (true)
            {
                unlink((char *)&v4[1] + 5);
                v4 = *(v4);
                if (v4 == 0)
                {
                    break;
                }
            }
            v3 = v0;
        }
        g_61c6a8 = 0;
        if (v3 != 0)
        {
            sub_407880();
            return sub_40a9f0();
        }
    }
    if (g_61c6a8 == 0 || v3 == 0)
    {
        return sub_40a9f0();
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_40c5e0()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

extern int512_t g_61cce0;

int sub_40f210()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_61cce0 : v1));
}

