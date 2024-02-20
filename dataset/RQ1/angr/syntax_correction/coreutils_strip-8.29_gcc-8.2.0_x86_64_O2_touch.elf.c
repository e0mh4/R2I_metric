
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int sub_409d20()
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
    return sub_409800();
}

extern unsigned int g_411a5d;
extern unsigned long long stderr[7];

int sub_402d30()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411a5d, 0x5), stderr);
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
                    sub_40a050();
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
                sub_40a050();
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

int sub_408100()
{
    unsigned long v0;  // [bp-0xc8]
    char v1;  // [bp-0xb8]
    unsigned int v2;  // [bp-0xa8]
    unsigned int v3;  // [bp-0xa4]
    unsigned int v4;  // [bp-0xa0]
    unsigned int v5;  // [bp-0x9c]
    unsigned int v6;  // [bp-0x98]
    unsigned int v7;  // [bp-0x68]
    unsigned int v8;  // [bp-0x64]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x60]
    unsigned int v10;  // [bp-0x5c]
    unsigned long long v11;  // [bp-0x58]
    unsigned int v12;  // [bp-0x48]
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rbp
    char *v16;  // rsi
    unsigned long long v17;  // r13
    unsigned long long v18;  // rax
    unsigned long long v19;  // r13
    unsigned long long v20;  // r14
    unsigned long long v21;  // rax
    unsigned long long v22;  // rcx
    unsigned long v23;  // r13
    unsigned long long v24;  // rdx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned int v30[6];  // rdx
    unsigned int v31;  // esi
    unsigned long long v32;  // rax
    char *v33;  // rax
    unsigned long long *v34;  // rdi

    v15 = v14;
    v17 = strlen(v16);
    if (((char)v14 & 4) != 0)
    {
        v20 = strchr(v16, 0x2e);
        if (v20 != 0)
        {
            v18 = v20 * 0;
            v19 = v17 - v17;
            if (v19 == 3)
            {
                v17 = v18;
            }
        }
    }
    else
    {
        v20 = 0;
    }
    if ((((char)v14 & 4) == 0 || v20 == 0 || v19 == 3) && v17 - 8 <= 4 && (v17 & 1) == 0)
    {
        v21 = v16;
        v22 = &v16[v17];
        while ((unsigned int)(char)*((char *)v21) - 48 <= 9)
        {
            v21 += 1;
            v23 = v17 % 2;
            v24 = 0;
            do
            {
                v7 = (char)*((char *)(v21 + v24 * 2 + 1)) + ((unsigned long long)(char)*((char *)(v21 + v24 * 2)) * 5 - 240) * 2 - 48;
                v24 += 1;
            }
            while (v17 != v24);
            if ((v15 & 1) != 0)
            {
                v6 = v7 - 1;
                v5 = v8;
                v4 = v9;
                v3 = v10;
                v26 = sub_408070();
                if (v26 == 0)
                {
                    break;
                }
            }
            else
            {
                v25 = sub_408070();
                if (v25 == 0)
                {
                    break;
                }
                v6 = (unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v17 + -120]) - 1;
                v5 = *((int *)&((char *)stack_base)[4 * v17 + -116]);
                v4 = *((int *)&((char *)stack_base)[4 * v17 + -112]);
                v3 = *((int *)&((char *)stack_base)[4 * v17 + -108]);
            }
            if (v20 != 0)
            {
                v27 = (unsigned int)(char)*((char *)(v20 + 1)) - 48;
                v28 = (char)*((char *)(v20 + 2));
                if ((unsigned int)((unsigned long long)(char)*((char *)(v20 + 2)) - 48) > 9 || (unsigned int)(char)*((char *)(v20 + 1)) - 48 > 9)
                {
                    break;
                }
                v27 = v28 + v27 * 10 - 48;
                v2 = v27;
            }
            else
            {
                v2 = 0;
                v27 = 0;
            }
            *((unsigned long *)&v7) = v27;
            v12 = -1;
            v8 = v3;
            v9 = *((long long *)&(&v5)[-1]);
            v11 = *((long long *)&v6);
            v29 = sub_40bdb0();
            v30 = &v7;
            v0 = v29;
            if (v0 == -1)
            {
                v29 = localtime((unsigned int)(stack_base + -200));
                v30 = v29;
            }
            if (v0 != -1 || v29 != 0)
            {
                v31 = v2;
                if (!(((&v6)[1] ^ v30[2 + 1]) == 0 && (v6 ^ v30[2]) == 0 && (v5 ^ v30[1 + 1]) == 0 && (v4 ^ v30[1]) == 0 && (v3 ^ v30[1]) == 0 && (v30[0] ^ v2) == 0))
                {
                    if (v31 != 60)
                    {
                        break;
                    }
                    v33 = __stpcpy_chk((unsigned int)&v1, v21, 0x10);
                    *((short *)&v33[-2]) = 14645;
                    *(v33) = 0;
                    v32 = sub_408100();
                    if (v32 == 0)
                    {
                        break;
                    }
                }
                *(v34) = v0;
                return 1;
            }
        }
        if (true)
        {
            v32 = 0;
        }
        else if (unknown)
        {
            return v32;
        }
    }
    v32 = 0;
    return v32;
}

int sub_4083b0()
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

int sub_408000()
{
    unsigned long long v1;  // r12
    unsigned long v3;  // rbx
    unsigned long long v4;  // rbp

    v1 = getenv("TZ");
    sub_40bea0();
    if (v3 != 0)
    {
        v4 = (unsigned int)sub_406030();
        sub_40c160();
    }
    return stack_base + 0;
}

extern unsigned long long g_617e30;

int sub_410ef8()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_617e30;
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

// int sub_40a660()

int sub_40a670()
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
            sub_40a860(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

// int sub_409ec0()

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_40a470()
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
    return sub_40a070();
}

// int sub_409e10()

typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
    char padding_20[64];
    unsigned long long field_60;
    char padding_68[56];
    char field_a0;
    char padding_a1[7];
    unsigned long long field_a8;
    unsigned long long field_b0;
    unsigned long long field_b8;
    char padding_c0[8];
    unsigned long long field_c8;
    unsigned long long field_d0;
    char field_d8;
    char padding_d9[1];
    char field_da;
    char field_db;
    char field_dc;
    char field_dd;
    char field_de;
    char field_df;
} struct_0;

extern unsigned int g_411abb;
extern unsigned int g_411b57;
extern unsigned int g_411b8b;
extern unsigned int g_4120d8;
extern unsigned long long stderr;

int sub_403a10()
{
    struct v1;  // rsi
    struct v2;  // rbx
    unsigned long long v5;  // rdx
    unsigned long long v7;  // cc_dep1
    unsigned long long v9;  // rbp
    unsigned long long v10;  // cc_dep1
    char v12;  // cc_dep1

    v2 = v1;
    dcgettext(0x0, 0x411abb, 0x5);
    sub_403400();
    if (v1->field_a8 != 0 && v1->field_da == 0)
    {
        __fprintf_chk();
        v2->field_da = 1;
        v5 = 1;
        if (v2->field_d8 != v2->field_df)
        {
            fputc(0x20, stderr);
        }
    }
    if (v1->field_a8 == 0 || v1->field_da != 0)
    {
        v5 = 0;
    }
    if (v1->field_a8 == 0 && v2->field_d8 != v2->field_df || v2->field_d8 != v2->field_df && v1->field_da != 0 || v1->field_da == 0 && v2->field_d8 != v2->field_df && v1->field_a8 != 0)
    {
        dcgettext(0x0, 0x411b57, 0x5);
        __fprintf_chk();
        v5 = 1;
        v2->field_df = v2->field_d8;
    }
    if (v2->field_c8 != 0 && v2->field_dd == 0)
    {
        __fprintf_chk();
        if (v2->field_60 != 0)
        {
            __fprintf_chk();
        }
        if (v2->field_1c == 1)
        {
            fwrite("pm", 0x1, 0x2, stderr);
        }
        v7 = v2->field_b0;
        v2->field_dd = 1;
        v5 = 1;
        if (v7 != 0)
        {
            v5 = v2->field_db;
        }
    }
    if ((v2->field_dd == 0 || v2->field_db == 0) && (v2->field_dd == 0 || v2->field_b0 != 0) && (v2->field_db == 0 || v2->field_c8 != 0) && (v2->field_c8 != 0 || v2->field_b0 != 0) && (v2->field_c8 == 0 || v2->field_db == 0 || v2->field_dd != 0) && (v2->field_c8 == 0 || v2->field_dd != 0 || v7 != 0))
    {
        if ((v2->field_dd == 0 || v5 != 0) && (v2->field_c8 != 0 || v5 != 0))
        {
            fputc(0x20, stderr);
        }
        v9 = (unsigned int)sub_403920();
        dcgettext(0x0, 0x4120d8, 0x5);
        __fprintf_chk();
        v2->field_db = 1;
        v5 = 1;
    }
    if (v2->field_b8 != 0 && v2->field_dc == 0)
    {
        __fprintf_chk();
        v10 = v2->field_d0;
        v2->field_dc = 1;
    }
    if ((v2->field_dc == 0 || v2->field_de == 0) && (v2->field_dc == 0 || v2->field_d0 != 0) && (v2->field_de == 0 || v2->field_b8 != 0) && (v2->field_d0 != 0 || v2->field_b8 != 0) && (v2->field_de == 0 || v2->field_b8 == 0 || v2->field_dc != 0) && (v2->field_b8 == 0 || v2->field_dc != 0 || v10 != 0))
    {
        sub_403290();
        __fprintf_chk();
        v12 = v2->field_a0;
        v2->field_de = 1;
    }
    if (v2->field_a0 != 0 && (v2->field_d0 == 0 || v2->field_de != 0) && (v2->field_b8 == 0 || v2->field_dc != 0) && v5 != 0 || (v2->field_dc == 0 || v2->field_de == 0) && (v2->field_dc == 0 || v12 != 0) && (v2->field_dc == 0 || v2->field_d0 != 0) && (v2->field_de == 0 || v2->field_b8 != 0) && (v12 != 0 || v2->field_b8 != 0) && (v2->field_d0 != 0 || v2->field_b8 != 0) && (v10 == 0 || v12 != 0 || v2->field_de != 0) && (v2->field_de == 0 || v2->field_b8 == 0 || v2->field_dc != 0 || v2->field_a0 != 0) && (v2->field_b8 == 0 || v2->field_dc != 0 || v10 != 0 || v2->field_a0 != 0))
    {
        fputc(0x20, stderr);
    }
    if (v2->field_a0 != 0 && (v2->field_d0 == 0 || v2->field_de != 0) && (v2->field_b8 == 0 || v2->field_dc != 0) && v5 == 0 || v2->field_a0 != 0 && (v2->field_d0 == 0 || v2->field_de != 0) && (v2->field_b8 == 0 || v2->field_dc != 0) && v5 != 0 || (v2->field_dc == 0 || v2->field_de == 0) && (v2->field_dc == 0 || v12 != 0) && (v2->field_dc == 0 || v2->field_d0 != 0) && (v2->field_de == 0 || v2->field_b8 != 0) && (v12 != 0 || v2->field_b8 != 0) && (v2->field_d0 != 0 || v2->field_b8 != 0) && (v10 == 0 || v12 != 0 || v2->field_de != 0) && (v2->field_de == 0 || v2->field_b8 == 0 || v2->field_dc != 0 || v2->field_a0 != 0) && (v2->field_b8 == 0 || v2->field_dc != 0 || v10 != 0 || v2->field_a0 != 0))
    {
        dcgettext(0x0, 0x411b8b, 0x5);
        __fprintf_chk();
    }
    return fputc(0xa, stderr);
}

int sub_40a8a0()
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
    char padding_0[28];
    unsigned int field_1c;
    uint128_t field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[57];
    char field_a1;
    char padding_a2[6];
    unsigned long long field_a8;
    char padding_b0[24];
    unsigned long long field_c8;
    char padding_d0[8];
    char field_d8;
} struct_0;

double sub_403110()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long long v1;  // [bp+0x10]
    unsigned long v2;  // [bp+0x18]
    unsigned long long v3;  // r8
    struct v4;  // rdi
    void v5;  // xmm0
    void v6;  // xmm0

    v3 = v1;
    if (*((long long *)&v4->padding_68[56]) != 0 && v4->field_28 == 0 && v4->padding_68[49] == 0)
    {
        if (*((long long *)&v4->padding_b0[16]) == 0 && v2 <= 2)
        {
            *((long long *)&v4->padding_b0[16]) = 1;
        }
        if (v2 > 2 || *((long long *)&v4->padding_b0[16]) != 0)
        {
            v4->padding_d0[0] = 1;
            v4->field_20 = *((int128_t *)&v0);
            v4->field_28 = v2;
            return *((int128_t *)&v0);
        }
    }
    if (*((long long *)&v4->padding_68[56]) == 0 || v4->padding_68[49] != 0 || v4->field_28 != 0)
    {
        if (v2 > 4)
        {
            *((long long *)&v4->padding_68[56]) = *((long long *)&v4->padding_68[56]) + 1;
            v4->field_28 = v2 - 4;
            v4->field_38 = v3 - (((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63)) * 100;
            v4->field_30 = ((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63) - ((((((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63)) * 11805916207174113035 >> 64) + ((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63) >> 6) - (((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63) >> 63)) * 100;
            *((unsigned long long *)&((char *)&v4->field_20)[8]) = (v3 * 3777893186295716171 >> 64 >> 11) - (v3 >> 63);
            return v5;
        }
        *((long long *)&v4->padding_b0[16]) = *((long long *)&v4->padding_b0[16]) + 1;
        if (v2 > 2)
        {
            v4->field_40 = ((v3 * 11805916207174113035 >> 64) + v3 >> 6) - (v3 >> 63);
            v4->field_48 = v1 - (((v1 * 11805916207174113035 >> 64) + v1 >> 6) - (v1 >> 63)) * 100;
        }
    }
    if ((v4->padding_68[49] == 0 || v2 <= 4) && (v4->field_28 == 0 || v2 <= 4) && (v2 <= 4 || *((long long *)&v4->padding_68[56]) != 0) && (*((long long *)&v4->padding_68[56]) == 0 || *((long long *)&v4->padding_b0[16]) == 0 || v4->padding_68[49] != 0 || v4->field_28 != 0))
    {
        if (v2 <= 2)
        {
            v4->field_40 = v1;
            v4->field_48 = 0;
        }
        if (v2 <= 2 || *((long long *)&v4->padding_68[56]) == 0 || v4->padding_68[49] != 0 || v4->field_28 != 0)
        {
            v4->field_50 = 0;
            v4->field_58 = 0;
            v4->field_1c = 2;
            return v6;
        }
    }
}

extern int512_t g_618288;

// int sub_410ee0()

int sub_40bdb0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    tzset();
}

extern unsigned int g_410f44;
extern unsigned int g_410fdb;
extern unsigned int g_411088;
extern unsigned int g_41109b;
extern unsigned int g_4110ab;
extern unsigned int g_411778;
extern unsigned int g_411818;
extern unsigned int g_411838;
extern int512_t g_4118b0;
extern unsigned int g_414b94;
extern unsigned int g_61831c;
extern unsigned long long g_618360;
extern char g_618380;
extern unsigned long long g_618388;
extern char g_618390;
extern unsigned long long g_618398;
extern char g_6183a0;
extern char g_6183a1;
extern char g_6183a2;
extern char g_6183a3;
extern unsigned int g_6183a4;
extern unsigned long long g_618550;

int main()
{
    unsigned long v0;  // [bp-0x128]
    unsigned long v1;  // [bp-0x120]
    unsigned long v2;  // [bp-0x118]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x110]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0xfc]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0xf8]
    unsigned int v6;  // [bp-0xf0]
    unsigned int v7;  // [bp-0xec]
    unsigned long v8;  // [bp-0xe8]
    unsigned long v9;  // [bp-0xe0]
    unsigned long v10;  // [bp-0xd8]
    unsigned long v11;  // [bp-0xd0]
    unsigned long v12;  // [bp-0xc8]
    unsigned long v13;  // [bp-0xc0]
    unsigned long long v14;  // [bp-0x80]
    unsigned long long v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x68]
    unsigned long long v19;  // r14
    unsigned long long v20;  // r13
    unsigned long long v21;  // rdi
    unsigned long long v22;  // r12
    unsigned long long *v23;  // rsi
    unsigned long v28;  // r11
    unsigned long long v30;  // rbx
    char v35;  // al
    unsigned long long v36;  // rax
    unsigned long long v37;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned int v44[5];  // rax
    unsigned long long v45;  // r15
    unsigned long long v46;  // r14
    unsigned long long v47;  // rcx
    char *v48;  // rdi
    unsigned long long v49;  // r11
    char *v50;  // rsi
    unsigned long long v51;  // cc_dep1
    unsigned long long v52;  // cc_dep2
    unsigned long v53;  // d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v54;  // r14
    unsigned int *v55;  // rax
    char v56;  // r10b
    unsigned long long v57;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v58;  // rdx
    unsigned int *v59;  // rax
    unsigned long long v60;  // rax
    unsigned long long v61;  // r14
    unsigned int *v62;  // rax
    unsigned long long v63;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v64;  // r10
    unsigned long long v65;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v66;  // r13d
    unsigned long long *v67;  // rax
    unsigned long v68;  // rsi
    unsigned long long v69;  // r13

    v19 = 0;
    v20 = 0;
    v22 = v21;
    sub_408430();
    setlocale(0x6, 0x414b94);
    bindtextdomain(0x410fdb, 0x411778);
    textdomain(0x410fdb);
    sub_410ee0();
    g_6183a2 = 0;
    g_6183a4 = 0;
    g_6183a3 = 0;
    while (true)
    {
        if ((unsigned int)v28 == -1)
        {
            if (g_6183a4 == 0)
            {
                g_6183a4 = 3;
            }
            if (v20 != 0)
            {
                if (v19 != 0 || g_6183a2 != 0)
                {
                    v68 = "cannot specify times from more than one source";
                }
            }
            else
            {
                if (g_6183a2 == 0)
                {
                    if (v19 != 0)
                    {
                        sub_4030d0();
                        sub_4027a0();
                        *((int128_t *)&g_618390) = *((int128_t *)&g_618380);
                        if (g_6183a4 == 3 && *((long long *)&g_618380) == v8 && g_618388 == v9)
                        {
                            v11 = v9;
                            v10 = v8 ^ 1;
                            sub_4027a0();
                        }
                    }
                    if (g_6183a4 == 3 && v12 == v10 && *((long long *)&g_618380) == v8 && g_618388 == v9 && v19 != 0 && v13 == v11 || v19 == 0)
                    {
                        if ((unsigned int)v21 - g_61831c > 1)
                        {
                            v41 = sub_4083b0();
                            if (v41 <= 200111)
                            {
                                v42 = sub_408100();
                                if (v42 != 0)
                                {
                                    g_618388 = 0;
                                    *((int128_t *)&g_618390) = *((int128_t *)&g_618380);
                                    if (getenv("POSIXLY_CORRECT") == 0)
                                    {
                                        v44 = localtime(0x618380);
                                        if (v44 != 0)
                                        {
                                            v45 = v44[1];
                                            v46 = v44[1 + 1];
                                            v7 = v44[0];
                                            v6 = v44[1];
                                            v4 = v44[2] + 1;
                                            v5 = v23[(long long)(int)g_61831c];
                                            v3 = v7;
                                            v2 = v6;
                                            v1 = v45;
                                            v0 = v46;
                                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x411838, 0x5));
                                        }
                                    }
                                    g_61831c = g_61831c + 1;
                                }
                            }
                        }
                        if ((unsigned int)v21 - g_61831c <= 1 || v42 == 0 || v41 > 200111)
                        {
                            if (g_6183a4 != 3)
                            {
                                g_618388 = 1073741823;
                                g_618398 = 1073741823;
                            }
                            else
                            {
                                g_6183a0 = 1;
                            }
                        }
                    }
                }
                else
                {
                    if (g_6183a1 == 0)
                    {
                        v35 = __xstat() != 0;
                    }
                    else
                    {
                        v35 = __lxstat() != 0;
                    }
                    if (v35 == 0)
                    {
                        *((unsigned long long *)&g_618380) = v14;
                        g_618388 = v15;
                        *((unsigned long long *)&g_618390) = v16;
                        g_618398 = v17;
                        if (v19 != 0)
                        {
                            v36 = g_6183a4;
                            if (((char)g_6183a4 & 1) != 0)
                            {
                                sub_4027a0();
                                v36 = g_6183a4;
                            }
                            if ((v36 & 2) != 0)
                            {
                                sub_4027a0();
                            }
                        }
                    }
                    else
                    {
                        v37 = (unsigned int)sub_409e00();
                        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x411818, 0x5));
                    }
                }
            }
            if (v19 == 0 && g_6183a2 == 0 || v20 == 0 && v35 == 0 || v20 == 0 && g_6183a2 == 0)
            {
                v67 = (unsigned long long)g_61831c;
                if (g_61831c != (unsigned int)v22)
                {
                    v66 = 1;
                    if (g_61831c < v22)
                    {
                        while (true)
                        {
                            v47 = 2;
                            v48 = "-";
                            v49 = 1;
                            v50 = *((long long *)((char *)v23 + 0x8 * v67));
                            while (v47 != 0)
                            {
                                v47 -= 1;
                                v51 = *(v50);
                                v52 = *(v48);
                                v48 = &v48[v53];
                                v50 = &v50[v53];
                                break;
                            }
                            v54 = (v51 > v52) - 0 - (v51 < v52);
                            if ((v51 > v52) - (v51 < v52) != 0)
                            {
                                if (g_6183a1 == 0 && g_6183a3 == 0)
                                {
                                    v54 = 0;
                                    v49 = sub_402fd0();
                                    if (v49 == -1)
                                    {
                                        v4 = v49;
                                        v55 = __errno_location();
                                        v54 = *(v55);
                                        if ((unsigned int)((unsigned long long)*(v55) - 21) > 1)
                                        {
                                            v49 = (unsigned int)v4;
                                        }
                                    }
                                }
                                if (g_6183a1 != 0 || g_6183a3 != 0 || (unsigned int)v54 == 1 && v49 == -1 || v49 == -1 && (unsigned int)((unsigned long long)*(v55) - 21) <= 1)
                                {
                                    v28 = (unsigned int)sub_40b5f0();
                                    v54 = 0;
                                }
                            }
                            if (g_6183a4 != 3 && g_6183a4 != 1 && g_6183a4 != 2)
                            {
                                __assert_fail(); /* do not return */
                            }
                            if (g_6183a4 == 2)
                            {
                                g_618388 = 1073741822;
                            }
                            if (g_6183a4 == 1)
                            {
                                g_618398 = 1073741822;
                            }
                            if (g_6183a4 == 3 || g_6183a4 == 1 || g_6183a4 == 2)
                            {
                                v56 = v49 == -1 & g_6183a1;
                                if ((v49 == -1 & g_6183a1) != 0)
                                {
                                    v58 = (unsigned int)sub_403040();
                                }
                                else if (v49 != 1)
                                {
                                    v5 = v56;
                                    v4 = v49;
                                    v58 = sub_403040();
                                    if ((int)v4 == 0)
                                    {
                                        v5 = v58;
                                        v4 = v56;
                                        v60 = close(0x0);
                                        v58 = v5;
                                        if (v60 != 0)
                                        {
                                            v61 = (unsigned int)sub_409e00();
                                            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x411088, 0x5));
                                            v64 = v4;
                                        }
                                    }
                                }
                                else
                                {
                                    v57 = sub_403040();
                                    if (v57 != 0)
                                    {
                                        v59 = __errno_location();
                                    }
                                }
                                if (((v49 == -1 & g_6183a1) == 0 || v58 != 0) && (v49 == 1 || v58 != 0) && (v57 != 0 || (v49 == -1 & g_6183a1) != 0 || v49 != 1) && ((v49 == -1 & g_6183a1) != 0 || v49 != 1 || *(v59) != 9) && (v60 == 0 || v49 == 1 || (int)v4 != 0 || (v49 == -1 & g_6183a1) != 0) && v54 == 0)
                                {
                                    v62 = __errno_location();
                                }
                                if ((v49 == -1 & g_6183a1) == 0 && g_6183a3 == 0 && v49 == 1 && *(v59) == 9 && v57 != 0 && v54 != 0 || ((v49 == -1 & g_6183a1) == 0 || v58 != 0) && (v49 == 1 || v58 != 0) && (v57 != 0 || (v49 == -1 & g_6183a1) != 0 || v49 != 1) && ((v49 == -1 & g_6183a1) != 0 || v49 != 1 || *(v59) != 9) && (v60 == 0 || v49 == 1 || (int)v4 != 0 || (v49 == -1 & g_6183a1) != 0) && v54 != 0)
                                {
                                    v63 = (unsigned int)sub_409e00();
                                    error(0x0, v54, (unsigned long long)dcgettext(0x0, 0x41109b, 0x5));
                                    v64 = 0;
                                }
                                if ((v49 == -1 & g_6183a1) == 0 && g_6183a3 == 0 && v49 == 1 && *(v59) == 9 && v57 != 0 && v54 == 0 || ((v49 == -1 & g_6183a1) == 0 || v58 != 0) && (v49 == 1 || v58 != 0) && (v57 != 0 || (v49 == -1 & g_6183a1) != 0 || v49 != 1) && ((v49 == -1 & g_6183a1) != 0 || v49 != 1 || *(v59) != 9) && (v60 == 0 || v49 == 1 || (int)v4 != 0 || (v49 == -1 & g_6183a1) != 0) && v54 == 0 && g_6183a3 != 0 && *(v62) != 2 || ((v49 == -1 & g_6183a1) == 0 || v58 != 0) && (v49 == 1 || v58 != 0) && (v57 != 0 || (v49 == -1 & g_6183a1) != 0 || v49 != 1) && ((v49 == -1 & g_6183a1) != 0 || v49 != 1 || *(v59) != 9) && (v60 == 0 || v49 == 1 || (int)v4 != 0 || (v49 == -1 & g_6183a1) != 0) && v54 == 0 && g_6183a3 == 0)
                                {
                                    v65 = (unsigned int)sub_409e00();
                                    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4110ab, 0x5));
                                    v64 = 0;
                                }
                                if (((v49 == -1 & g_6183a1) != 0 || v60 == 0 && v49 != 1 || (int)v4 != 0 && v49 != 1) && v58 == 0 || ((v49 == -1 & g_6183a1) == 0 || v58 != 0) && (v49 == 1 || v58 != 0) && (v57 != 0 || (v49 == -1 & g_6183a1) != 0 || v49 != 1) && ((v49 == -1 & g_6183a1) != 0 || v49 != 1 || *(v59) != 9) && (v60 == 0 || v49 == 1 || (int)v4 != 0 || (v49 == -1 & g_6183a1) != 0) && v54 == 0 && g_6183a3 != 0 && *(v62) == 2 || (v49 == -1 & g_6183a1) == 0 && v49 == 1 && *(v59) == 9 && v57 != 0 && g_6183a3 != 0 || (v49 == -1 & g_6183a1) == 0 && v49 == 1 && v57 == 0)
                                {
                                    v64 = 1;
                                }
                                v66 = 1 & v64;
                                v67 = (unsigned long long)(g_61831c + 1);
                                g_61831c = g_61831c + 1;
                                if ((unsigned int)v67 >= (unsigned int)v22)
                                {
                                    break;
                                }
                            }
                        }
                    }
                }
                else
                {
                    v68 = "missing file operand";
                }
            }
            if ((g_61831c == (unsigned int)v22 || v20 != 0) && (v35 == 0 || g_6183a2 == 0 || v20 != 0) && (g_61831c == (unsigned int)v22 || v19 != 0 || g_6183a2 != 0))
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v68, 0x5));
            }
        }
        else if ((unsigned int)v28 != 102)
        {
            if (v28 > 102)
            {
                if ((unsigned int)v28 == 114)
                {
                    g_6183a2 = 1;
                    g_618360 = g_618550;
                }
                else if (v28 <= 114)
                {
                    if ((unsigned int)v28 == 104)
                    {
                        g_6183a1 = 1;
                    }
                    if ((unsigned int)v28 == 109)
                    {
                        g_6183a4 = g_6183a4 | 2;
                    }
                }
                else
                {
                    if ((unsigned int)v28 == 116)
                    {
                        v20 = (unsigned int)sub_408100();
                        if ((char)v20 != 0)
                        {
                            g_618388 = 0;
                            *((int128_t *)&g_618390) = *((int128_t *)&g_618380);
                        }
                        else
                        {
                            v30 = (unsigned int)sub_40a050();
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x410f44, 0x5));
                        }
                    }
                    if ((unsigned int)v28 == 128)
                    {
                        g_6183a4 = g_6183a4 | *((int *)&((char *)&g_4118b0)[4 * (unsigned long long)(unsigned int)sub_402e50()]);
                    }
                }
            }
            else
            {
                if ((unsigned int)v28 == 97)
                {
                    g_6183a4 = g_6183a4 | 1;
                }
                else if (v28 > 97)
                {
                    if ((unsigned int)v28 == 99)
                    {
                        g_6183a3 = 1;
                    }
                    if ((unsigned int)v28 == 100)
                    {
                        v19 = g_618550;
                    }
                }
                else
                {
                    if ((unsigned int)v28 == -131)
                    {
                        v3 = 0;
                        v2 = "Randy Smith";
                        v1 = "David MacKenzie";
                        v0 = "Jim Kingdon";
                        sub_40a4d0();
                        exit(0x0); /* do not return */
                    }
                    if ((unsigned int)v28 == -130)
                    {
                        sub_4027e0(); /* do not return */
                    }
                }
            }
        }
        if (v28 <= 102 && v28 <= 97 && (unsigned int)v28 != 102 && (unsigned int)v28 != -130 && (unsigned int)v28 != 97 && (unsigned int)v28 != -131 && (unsigned int)v28 != -1 || v28 <= 102 && (unsigned int)v28 != 102 && (unsigned int)v28 != 99 && (unsigned int)v28 != 100 && (unsigned int)v28 != 97 && v28 > 97 && (unsigned int)v28 != -1 || v28 <= 114 && (unsigned int)v28 != 102 && (unsigned int)v28 != 104 && (unsigned int)v28 != 109 && (unsigned int)v28 != 114 && v28 > 102 && (unsigned int)v28 != -1 || (unsigned int)v28 != 102 && (unsigned int)v28 != 114 && v28 > 102 && v28 > 114 && (unsigned int)v28 != 128 && (unsigned int)v28 != -1 && (unsigned int)v28 != 116 || (unsigned int)v28 == -1 && (g_61831c == (unsigned int)v22 || v20 != 0) && (v35 == 0 || g_6183a2 == 0 || v20 != 0) && (g_61831c == (unsigned int)v22 || v19 != 0 || g_6183a2 != 0))
        {
            sub_4027e0(); /* do not return */
        }
    }
    v69 = v66 ^ 1;
    return v69;
}

int sub_40a450()
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

extern unsigned long long g_6183b0;

int sub_402f10()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_6183b0 = v1;
    return v2;
}

extern int512_t g_6184c0;

int sub_4099e0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_6184c0 : v1));
}

int sub_40b8b0()
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

extern unsigned int g_414732;
extern unsigned int g_41475d;
extern unsigned int g_414990;

int sub_40a590()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x414732, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41475d, 0x5));
    dcgettext(0x0, 0x414990, 0x5);
}

int sub_40b630()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40b570();
}

// int sub_40a000()

typedef struct struct_0 {
    char padding_0[208];
    unsigned long long field_d0;
} struct_0;

int sub_403880()
{
    unsigned long long v1;  // rax
    struct v2;  // rsi
    unsigned long long v3;  // rbp
    unsigned long v7;  // rdx

    v1 = sub_40e2d0();
    if (v2 != 0)
    {
        v3 = v1;
        if ((unsigned int)v1 <= 99 && v2->field_d0 != 0)
        {
            sub_403290();
            __snprintf_chk();
            return v7;
        }
    }
    if (v2 == 0 || v2->field_d0 == 0 || (unsigned int)v1 > 99)
    {
        return v7;
    }
}

// int sub_409fe0()

// int sub_409ce0()

extern int512_t g_6184c0;

int sub_409a00()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_6184c0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_6184c0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

// int sub_409fc0()

// int sub_409e90()

int sub_40a6b0()
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
        sub_40a860(); /* do not return */
    }
}

extern unsigned int g_411a25;
extern unsigned int g_411a40;

int sub_402cb0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x411a25, 0x5);
    }
    dcgettext(0x0, 0x411a40, 0x5);
    sub_40a030();
    sub_409d20();
}

extern unsigned int g_4146eb;
extern unsigned int g_4146ef;
extern unsigned int g_4146ff;
extern unsigned int g_414716;
extern unsigned int g_414778;
extern unsigned int g_414848;
extern unsigned int g_414868;
extern unsigned int g_414890;
extern unsigned int g_4148b8;
extern unsigned int g_4148e8;

int sub_40a070()
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
    dcgettext(0x0, 0x4146eb, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414778, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4146ef, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x4146ff, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x414716, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x414848, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x414868, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x414890, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x4148b8, 0x5);
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
        dcgettext(0x0, 0x4148e8, 0x5);
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

extern int512_t g_6184c0;

int sub_409a40()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_6184c0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_6184c0 : v1) + 4)) = v3;
    return v2;
}

int sub_403040()
{
    unsigned int v1;  // edi
    unsigned long v2;  // rdx
    unsigned long long v3;  // rax
    unsigned long v4;  // rdx
    unsigned int *v5;  // rax
    unsigned long v6;  // rsi
    unsigned int v7;  // r8d

    if (v1 < 0)
    {
    }
    else
    {
        v3 = futimens();
        if (v4 != 0 && (unsigned int)v3 == -1)
        {
            v5 = __errno_location();
            if (*(v5) != 38)
            {
                return -18446744069414584321;
            }
        }
    }
    if (v1 >= 0 || v2 != 0)
    {
        if ((v1 < 0 || *(v5) == 38) && (v1 < 0 || (unsigned int)v3 == -1) && (v1 < 0 || v4 != 0))
        {
            v3 = utimensat(v6, v7, v7, v7);
        }
        if ((unsigned int)v3 != 1 && (v4 == 0 || v1 < 0 || *(v5) == 38 || (unsigned int)v3 != -1))
        {
            return v3;
        }
    }
    if (v4 == 0 && (unsigned int)v3 == 1 || v1 < 0 && (unsigned int)v3 == 1 || v1 < 0 && v2 == 0 || *(v5) == 38 && (unsigned int)v3 == 1 || (unsigned int)v3 == 1 && (unsigned int)v3 != -1)
    {
        *(__errno_location()) = 9;
        return -18446744069414584321;
    }
}

int sub_40b610()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40afa0();
}

typedef struct struct_0 {
    char padding_0[232];
    unsigned long long field_e8;
} struct_0;

extern unsigned long long g_412dc0;
extern unsigned long long g_4130c0;

int sub_403630()
{
    unsigned long long v1;  // rdi
    struct v2;  // r12
    char *v3;  // rsi
    char *v4;  // rbp
    unsigned long long v5;  // rax
    char *v6;  // rsi
    char *v7;  // rsi
    unsigned long long *v8;  // rbx
    unsigned long long v9;  // rax
    unsigned long long *v10;  // rbx
    char *v11;  // rsi
    unsigned long long *v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long *v14;  // rax

    v2 = v1;
    v4 = v3;
    v6 = "GMT";
    v10 = &g_4130c0;
    while (true)
    {
        v5 = strcmp(v4, v6);
        if (v5 == 0)
        {
            break;
        }
        v10 = &v10[2];
        v6 = *(v10);
        v7 = v2->field_e8;
        v8 = &v2->field_e8;
        if (v2->field_e8 != 0)
        {
            while (true)
            {
                v9 = strcmp(v4, v7);
                if (v9 != 0)
                {
                    v8 = &v8[2];
                    v7 = *(v8);
                    if (*(v8) == 0)
                    {
                        break;
                    }
                }
                else
                {
                    v12 = v8;
                    return v12;
                }
            }
        }
        v10 = &g_412dc0;
        v11 = "WET";
        while (true)
        {
            v13 = strcmp(v4, v11);
            if (v13 != 0)
            {
                v10 = &v10[2];
                v11 = *(v10);
                return 0;
            }
        }
    }
    v14 = v10;
    return v14;
}

// int sub_409fb0()

extern char g_6184c0;

int sub_409a60()
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
    v3 = (v2 == 0? &g_6184c0 : v2);
    *((int *)(tmp_11? &g_6184c0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_6184c0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_6184c0;
        abort(); /* do not return */
    }
}

int sub_40c370()
{
    unsigned long long v0;  // [bp-0x800]
    void *v2;  // rax
    unsigned long long v3;  // rbx
    void *v4;  // rbp
    void *v5;  // rdi
    unsigned int *v7;  // r12
    unsigned long long v9;  // rax

    v0 = 2000;
    v2 = sub_40e420();
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
        sub_40e410();
    }
    v9 = v3;
    return v9;
}

int sub_403570()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r9
    unsigned long v3;  // rcx
    unsigned int v4;  // ecx
    char v6;  // cl
    char v7;  // sil
    unsigned long long v8;  // rcx
    unsigned long long v9;  // r9
    unsigned long v10;  // r8
    char v11;  // dl
    unsigned long v12;  // r8
    unsigned long long v13;  // rax
    unsigned int v14;  // r9d
    unsigned int *v15;  // rdi

    v2 = v1;
    if (v3 <= 2)
    {
        if (INVALID_IR)
        {
            v8 = 0;
        }
    }
    else
    {
        if (INVALID_IR)
        {
            v2 = ((v2 * 11805916207174113035 >> 64) + v2 >> 6) - (v2 >> 63);
            v8 = v1 - (((v1 * 11805916207174113035 >> 64) + v1 >> 6) - (v1 >> 63)) * 100;
        }
    }
    if (!(INVALID_IR))
    {
        v4 = 0;
        v6 =  amd64g_calculate_condition(0x0, 0x34, rdx, 0x3c, cc_ndep);
        if (v7 == 0)
        {
            v9 = v1 * 60 + v10;
            v11 =  amd64g_calculate_condition(0x0, 0x4, Mul(rdx, 0x3c), r8, cc_ndep);
        }
        else
        {
            v1 = 0;
            v9 = v1 * 60 - v12;
            v11 = ((v9 ^ v12) & (v9 ^ v9 - v12)) >> 63;
        }
        v13 = 0;
    }
    else
    {
        v9 = v8 + v2 * 60;
    }
    if (INVALID_IR || v11 == 0 && rcx == 0)
    {
        v13 = 0;
        if (v9 + 1440 <= 2880)
        {
            v14 = (unsigned int)v9 * 60;
            v13 = 1;
            *(v15) = v14;
        }
    }
    return v13;
}

extern int512_t g_6184c0;

int sub_409a90()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_6184c0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_4085d0();
}

int sub_4099a0()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_40a810();
}

// int sub_409ea0()

typedef struct struct_0 {
    char padding_0[32];
    unsigned int field_20;
} struct_0;

int sub_40c350()
{
    struct v1;  // rdi

    v1->field_20 = 0;
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

extern unsigned int g_411eae;

int sub_40bdd0()
{
    struct v1;  // rdi
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx

    if (v1->field_8 == 0)
    {
        v2 = unsetenv(0x411eae);
    }
    else
    {
        v2 = setenv(0x411eae, (unsigned int)v1 + 9, 0x1);
    }
    v3 = 0;
    if (v2 == 0)
    {
        tzset();
        v3 = 1;
    }
    return v3;
}

int sub_40b5f0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40b570();
}

int sub_40e410()
{
    unsigned int *v1;  // rdi
    unsigned long v2;  // rax

    *(v1) = *(v1) | 32;
    return v2;
}

int sub_40b650()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40afa0();
}

int sub_4085d0()
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
            v26 = (unsigned int)sub_4084d0();
            v27 = (unsigned long long)(unsigned int)sub_4084d0();
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
                                    if (v4 == 0)
                                    {
                                        v55 = 0;
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
                                    }
                                    else
                                    {
                                        v40 = v45;
                                        v78 = 0;
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
                                case 32:
                                    v41 = v5;
                                    v40 = 32;
                                    v48 = v5;
                                    v5 = v41;
                                    v78 = 0;
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
                            v76 = (unsigned int)sub_4085d0();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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
                    v46 = sub_40b670();
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
                v50 = 0;
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
            if ((v78 == 0 || v17 != 0) && (v78 == 0 || v4 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v4 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_4085d0();
            }
            if (v17 == 0 && v4 != 0 || v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v89) ^ 1) == 0 && v4 == 0 && v5 == 0 || (v15 != 1 || v89 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && v6 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v78 == 0 || v17 != 0) && (v78 == 0 || v4 != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && ((v81 == 2 & v17) != 0 || v17 != 0) && ((v81 == 2 & v17) != 0 || v4 != 0))
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

int sub_40ca60()
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

int sub_40e3b0()
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

typedef struct struct_0 {
    char padding_0[104];
    unsigned long long field_68;
    unsigned long long field_70;
    unsigned long long field_78;
    unsigned long long field_80;
    unsigned long long field_88;
    unsigned long long field_90;
    unsigned int field_98;
} struct_0;

extern unsigned int g_411abb;
extern unsigned int g_411acc;

int sub_4036f0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    struct v3;  // rsi
    struct v4;  // rbx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rdi

    v0 = v2;
    v4 = v3;
    dcgettext(0x0, 0x411abb, 0x5);
    sub_403400();
    if (!(v3->field_68 == 0))
    {
        v6 = (unsigned int)sub_403530();
        if (v3->field_70 == 0)
        {
            v3 = v3->field_78;
        }
    }
    else if (v3->field_70 == 0)
    {
        if (v3->field_78 == 0 && v3->field_80 == 0 && v3->field_88 == 0 && v3->field_90 == 0 && v3->field_98 == 0)
        {
            dcgettext(0x0, 0x411acc, 0x5);
        }
    }
    if (v3->field_68 == 0 && v3->field_70 != 0 || v3->field_68 != 0 && v3->field_70 != 0)
    {
        v7 = (unsigned int)sub_403530();
    }
    if (v3->field_68 != 0 && v3 != 0 || v3 != 0 && v3->field_70 != 0 || v3->field_68 == 0 && v3->field_70 == 0 && v3->field_78 != 0)
    {
        v8 = (unsigned int)sub_403530();
    }
    if (v3->field_68 != 0 || v3->field_88 != 0 || v3->field_70 != 0 || v3->field_80 != 0 || v3->field_98 != 0 || v3->field_90 != 0 || v3->field_78 != 0)
    {
        if (v4->field_80 != 0)
        {
            v9 = (unsigned int)sub_403530();
        }
        if (v4->field_88 != 0)
        {
            v10 = (unsigned int)sub_403530();
        }
        if (v4->field_90 != 0)
        {
            v11 = (unsigned int)sub_403530();
        }
        if (v4->field_98 != 0)
        {
            sub_403530();
        }
    }
}

int sub_40c230()
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
        v12 = (unsigned int)sub_40c0b0();
        if (v12 != 0)
        {
            v0 = (unsigned int)sub_40bdb0();
            if (v0 == -1)
            {
                v13 = localtime_r((unsigned int)&v0, (unsigned int)&v1);
            }
            if ((v0 == -1 && v13 != 0 && (v9[4] < 0 || v9[4] == 0 == v7 == 0 || v7 < 0) && (v9[2] ^ v5) == 0 && (v9[2 + 1] ^ v6) == 0 && (v9[1 + 1] ^ v4) == 0 && (v9[1] ^ v3) == 0 && (v9[1] ^ v2) == 0 && (v9[0] ^ *((int *)&v1)) == 0 || v0 != -1) && sub_40bf30() == 0)
            {
                v0 = -1;
            }
            if (v12 != 1)
            {
                v15 = sub_40be50();
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
    return sub_40c350();
}

int sub_40a4d0()
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
        return sub_40a070();
    }
}

// int sub_409c00()

int sub_403530()
{
    __fprintf_chk();
    return 1;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_414b94;
extern char g_618548[2];

int sub_40c4f0()
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

    v9 = g_618548;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_414b94 : (unsigned long long)nl_langinfo(0xe));
    if (g_618548 == 0)
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
            v9 = &g_414b94;
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
                                    v9 = &g_414b94;
                                    v10 = (tmp_10 == 0? &g_414b94 : tmp_10);
                                    free(NULL);
                                    sub_40e2f0();
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
                            v10 = (tmp_10 == 0? &g_414b94 : tmp_10);
                            sub_40e2f0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (unsigned int)(v27 - 9) > 1 && v63 == -1 || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (unsigned int)(v27 - 9) > 1 && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1)
                    {
                        v9 = &g_414b94;
                    }
                    else if (((unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (unsigned int)(v27 - 9) > 1 && v63 == -1 || (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (unsigned int)(v27 - 9) > 1 && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1) && v0 != 0 || v38 == 0 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1 && (unsigned int)(v27 - 9) > 1)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_414b94;
            free(v17);
        }
        *((char *[2])&g_618548[0]) = v9;
    }
    v68 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v69 = strcmp((tmp_10 == 0? &g_414b94 : tmp_10), v9);
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

int sub_402ec0()
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

int sub_40a610()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_40a860(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

// int sub_40a030()

int sub_40c180()
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
        v2 = (unsigned int)sub_40c0b0();
        if (v2 != 0)
        {
            v5 = localtime_r(v3, v4);
            if (v5 != 0)
            {
                v6 = sub_40bf30();
                if (v6 != 0)
                {
                    if (v2 != 1)
                    {
                        v8 = sub_40be50();
                    }
                    if (v2 == 1 || v8 != 0)
                    {
                        return v4;
                    }
                }
            }
            if ((v5 == 0 || v6 == 0) && v2 != 1)
            {
                sub_40be50();
            }
        }
        if (v5 == 0 || v2 == 0 || v6 == 0 || v8 == 0 && v2 != 1)
        {
            return 0;
        }
    }
}

// int sub_40a050()

int sub_40e370()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40e3b0();
    }
}

int sub_40c490()
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

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

int sub_40c0b0()
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
            v6 = sub_40bdd0();
            if (v6 == 0)
            {
                v8 = __errno_location();
                if (v8 != 1)
                {
                    sub_40be20();
                }
                *(v8) = *(v8);
                return 0;
            }
        }
        if (v4 == 0 || v6 != 0)
        {
            v4 = (unsigned int)sub_40bea0();
            return v7;
        }
    }
}

int sub_402b90()
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

extern int512_t g_41398c;
extern int512_t g_413990;

int sub_4084d0()
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
        v3 = sub_40c4f0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_41398c : 4274583);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_413990 : 4274579);
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

int sub_40e2f0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40e370() != 0)
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

extern char g_618348;
extern unsigned long long g_618350;

int sub_402741()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // rax
    unsigned long long v5;  // r12
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v10;  // r12

    if (g_618348 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_618350 >= 0)
            {
                break;
            }
            g_618350 = g_618350 + 1;
            *((long long *)(6389312 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_618348 = 1;
        return sub_4026eb();
    }
    return v4;
}

extern unsigned long long g_414b94;

int sub_40b670()
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
        v5 = &g_414b94;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40c490() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern unsigned int g_410fc0;
extern unsigned int g_411108;
extern unsigned int g_411130;
extern unsigned int g_411150;
extern unsigned int g_411278;
extern unsigned int g_4112c8;
extern unsigned int g_4113a0;
extern unsigned int g_4114a8;
extern unsigned int g_411600;
extern unsigned int g_411630;
extern unsigned int g_411668;
extern unsigned int g_4116d8;
extern unsigned int g_411720;
extern unsigned int g_411740;
extern unsigned long long stdout;

int sub_4027e0()
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
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x411108, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411130, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411150, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411278, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4112c8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4113a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4114a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411600, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411630, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411668, 0x5), stdout);
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
            v32 = "touch";
            v33 = 6;
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x410fc0, 0x5));
            v41 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x410fc0, 0x5));
            v40 = setlocale(0x5, 0x0);
            if (v40 != 0)
            {
                v42 = strncmp(v40, "en_", 0x3);
            }
            if (v42 == 0 || v40 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411720, 0x5));
            }
        }
        if ((v30[1] == 0 || strncmp(v41, "en_", 0x3) != 0) && (v30[1] == 0 || v41 != 0) && (v42 != 0 || v30[1] != 0) && (v30[1] != 0 || v40 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4116d8, 0x5));
        }
        if (v30[1] != 0 || v42 != 0 && v40 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411720, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411740, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_40a7c0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_40a610();
}

extern unsigned int g_410f44;

int sub_4027a0()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rbx

    v1 = sub_408000();
    if (v1 != 0)
    {
        return v1;
    }
    v2 = (unsigned int)sub_40a050();
    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x410f44, 0x5));
}

extern unsigned int g_618314;
extern unsigned int g_618318;
extern unsigned int g_61831c;
extern unsigned int g_618500;
extern unsigned int g_618504;
extern unsigned int g_618508;
extern unsigned long long g_618510;
extern unsigned long long g_618550;

int sub_40b570()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_618500 = g_61831c;
    g_618504 = g_618318;
    v1 = (unsigned int)v2;
    v0 = &g_618500;
    g_61831c = g_618500;
    g_618550 = g_618510;
    g_618314 = g_618508;
    return sub_40afa0();
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_402fd0()
{
    char *v1;  // rsi
    unsigned int v2;  // edx
    unsigned short v3;  // cx
    unsigned int v5;  // edi
    unsigned long v6;  // rax
    unsigned long long v7;  // rax
    unsigned int *v8;  // rbp

    if (v5 != (unsigned int)v6 && (unsigned int)v6 >= 0)
    {
        v8 = __errno_location();
        close((unsigned int)v8);
        *(v8) = *(v8);
        return dup2(v6, v5);
    }
    if (v5 == (unsigned int)v6 || (unsigned int)v6 < 0)
    {
        v6 = (unsigned int)open(v1, v2, v3);
        return v7;
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned short field_8;
} struct_1;

int sub_40bea0()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned int field_10;
    char padding_14[204];
    char field_e0;
} struct_0;

int sub_403920()
{
    struct v1;  // rdi
    char *v3;  // rsi
    char *v4;  // rsi
    unsigned long long v5;  // rax

    if (!(v1->field_e0 != 0))
    {
        *(v3) = 0;
    }
    else if (v1->field_8 + 1 <= 13)
    {
        v5 = snprintf(v4, 0x64, "%s", (unsigned int)(char *)(4270987 + 11 * v1->field_8));
    }
    else
    {
        __snprintf_chk();
    }
    if (v1->field_e0 == 0 && v1->field_10 > 6 || v1->field_8 + 1 <= 13 && (unsigned int)v5 > 99 && v1->field_e0 != 0 || v1->field_8 + 1 <= 13 && v1->field_e0 != 0 && v1->field_10 > 6 || v1->field_10 > 6 && v1->field_e0 != 0 && v1->field_8 + 1 > 13)
    {
        return stack_base + 0;
    }
    __snprintf_chk();
    return stack_base + 0;
}

extern uint128_t g_6184c0;
extern uint128_t g_6184d0;
extern uint128_t g_6184e0;
extern unsigned long long g_6184f0;

int sub_409f40()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_6184c0;
    *((uint128_t *)&v1) = g_6184d0;
    *((uint128_t *)&v2) = g_6184e0;
    v4 = g_6184f0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_409800();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
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

    v10 = sub_4018e8();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6389296 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_2 *field_20;
} struct_1;

extern unsigned int g_414a80;
extern unsigned int g_414aa0;
extern unsigned int g_414ad0;
extern unsigned int g_414af0;
extern unsigned int g_414b20;
extern unsigned long long stderr;

int sub_40a980()
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
    unsigned long long v37;  // rbx
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
        while ((char)v15 != 0 && v15 != 61);
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
                            else if (*((int *)(v18 + 24)) != *((int *)(v26 + 24)) || *((int *)(v18 + 8)) != *((int *)(v26 + 8)) || *((long long *)(v18 + 16)) != *((long long *)(v26 + 16)) || v28 != 0)
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
                                dcgettext(0x0, 0x414a80, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x414aa0, 0x5);
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
                                    v37 += 32;
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
            if ((v21 == 0 || *(v18) == 0) && (v21 == 0 || v4 == 0) && (v21 == 0 || v1 == 0) && (*(v18) == 0 || v22 == v16) && (v22 == v16 || v4 == 0) && (v22 == v16 || v1 == 0))
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
                                dcgettext(0x0, 0x414b20, 0x5);
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
                            dcgettext(0x0, 0x414af0, 0x5);
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
        if ((*((long long *)v17) != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45) && (*((long long *)v17) != 0 || v34 != 0))
        {
            return v42;
        }
    }
    if (*((long long *)v17) == 0 && v28 == 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0 || v34 == 0 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x414ad0, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_40b5d0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40b570();
}

int sub_40c160()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rax

    if (v1 == 1)
    {
        return v2;
    }
}

int sub_40cab0()
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

extern unsigned int g_414b48;
extern unsigned int g_414b79;

int sub_40afa0()
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
undefined v24;  // r9d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v27;  // rdx
    unsigned long v29;  // rax
    char v30[2];  // rcx
    unsigned long v31;  // rsi
    unsigned long long v32;  // rcx
    char *v33;  // rdi
    char v34[2];  // rsi
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
    char *v53;  // r8
    unsigned long long v54;  // rcx
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rdx
    unsigned int v57;  // eax
    char v58[3];  // rax
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
        if (v19[0] == 0 || (unsigned int)v17 == 0 && v19 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && (unsigned int)v17 != 0 && v0->field_18 != 0)
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
                        sub_40a8a0();
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
                            sub_40a8a0();
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
                                v5 = v24;
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
    if ((v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || v13 == (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if ((v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || v13 != (unsigned int)v26 && v13 > 0 && (v19[0] == 0 || ((char)(v18 - 43) & 253) == 0 || v19 == 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && ((unsigned int)v17 == 0 || v8->field_20 == 0 || v19[0] == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_40a980();
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
                        dcgettext(0x0, 0x414b48, 0x5);
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
            dcgettext(0x0, 0x414b79, 0x5);
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
                    dcgettext(0x0, 0x414b48, 0x5);
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
        v45 = (unsigned int)sub_40a980();
    }
    v63 = v45;
    return v63;
}

int sub_409d90()
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
    return sub_409800();
}

int sub_40a810()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_40a610();
}

extern char g_6183a8;

int sub_402f20()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_6183a8 = v1;
    return v2;
}

typedef struct struct_10 {
    uint128_t field_0;
    uint128_t field_10;
    uint128_t field_20;
    unsigned long long field_30;
} struct_10;

typedef struct struct_11 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned int field_c;
} struct_11;

typedef struct struct_12 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned int field_18;
    unsigned int field_1c;
} struct_12;

typedef struct struct_0 {
    char padding_0[56];
    char field_38;
    char padding_39[7];
    unsigned long long field_40;
    char field_48;
    char padding_49[7];
    unsigned long long field_50;
    char field_58;
    char padding_59[7];
    unsigned long long field_60;
    char field_68;
} struct_0;

extern unsigned int g_411bbb;
extern unsigned int g_411bd5;
extern unsigned int g_411c08;
extern unsigned int g_4120f8;
extern unsigned int g_412130;
extern unsigned long long g_412c20;
extern unsigned long long g_413100;
extern char g_413260;
extern char g_413320;
extern unsigned long long g_4134c0;
extern int512_t g_413520;
extern int512_t g_413580;
extern char g_4135e0;
extern char g_413660;
extern int512_t g_4136e0;
extern int512_t g_413700;
extern int512_t g_413720;
extern int512_t g_4137a0;
extern int512_t g_413820;

int sub_403db0()
{
    void tmp_24;  // tmp #24
    void tmp_26;  // tmp #26
    void tmp_37;  // tmp #37
    void tmp_5;  // tmp #5
    void tmp_9;  // tmp #9
    void tmp_117;  // tmp #117
    void tmp_259;  // tmp #259
    unsigned long long v0;  // [bp-0x608]
    void tmp_120;  // tmp #120
    void tmp_256;  // tmp #256
    void tmp_1;  // tmp #1
    void tmp_7;  // tmp #7
    void tmp_113;  // tmp #113
    void tmp_249;  // tmp #249
    void tmp_14;  // tmp #14
    void tmp_62;  // tmp #62
    void tmp_11;  // tmp #11
    unsigned long long v1;  // [bp-0x600]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x5f8]
    char v3;  // [bp-0x5e8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x5e0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x5d8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0x5d0]
    unsigned int v7;  // [bp-0x5c4]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x5c0]
    unsigned long v9;  // [bp-0x5b8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x5b0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v11;  // [bp-0x5a8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // [bp-0x5a0]
    unsigned long long v13;  // [bp-0x598]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v14;  // [bp-0x590]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v15;  // [bp-0x588]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // [bp-0x580]
    unsigned long long v17;  // [bp-0x578]
    unsigned long long v18;  // [bp-0x570]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // [bp-0x568]
    char v20;  // [bp-0x554]
    char v21;  // [bp-0x552]
    char v22;  // [bp-0x550]
    char v23;  // [bp-0x54e]
    char v24;  // [bp-0x54c]
    char v25;  // [bp-0x54a]
    unsigned short v26;  // [bp-0x548]
    char v27;  // [bp-0x540]
    unsigned long v28;  // [bp-0x538]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v29;  // [bp-0x518]
    unsigned long v30;  // [bp-0x510]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v31;  // [bp-0x508]
    unsigned long v32;  // [bp-0x500]
    unsigned long v33;  // [bp-0x4f8]
    unsigned long v34;  // [bp-0x4e8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // [bp-0x4d8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v36;  // [bp-0x4d0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v37;  // [bp-0x4c8]
    unsigned long long v38;  // [bp-0x4c0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v39;  // [bp-0x4b8]
    unsigned long long v40;  // [bp-0x4b0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // [bp-0x4a8]
    unsigned int v42;  // [bp-0x4a4]
    unsigned int v43;  // [bp-0x4a0]
    unsigned long long v44;  // [bp-0x498]
    unsigned long v45;  // [bp-0x490]
    unsigned long v46;  // [bp-0x488]
    unsigned long v47;  // [bp-0x480]
    unsigned long v48;  // [bp-0x478]
    unsigned long v49;  // [bp-0x470]
    char v51;  // [bp-0x1]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v53;  // r8
    unsigned long long v54;  // rdi
    unsigned long long v55;  // r9
    unsigned int v56;  // edx
    unsigned long long v57;  // rdx
    unsigned long long v58;  // rsi
    unsigned long long v59;  // rax
    unsigned long long v61;  // rbx
    unsigned long long v63;  // rbx
    unsigned long long v64;  // rax
    unsigned long long v65;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v66;  // rdx
    unsigned long long v67;  // rcx
    unsigned long long v68;  // r10
    unsigned long long v69;  // rax
    unsigned long long v70;  // r8
    unsigned long long v71;  // rax
    unsigned long long v72;  // rdi
    unsigned long long v73;  // rsi
    unsigned long long v74;  // rcx
    unsigned long long v75;  // rax
    unsigned long long v76;  // r11
    uint128_t v77;  // xmm7
    uint128_t v78;  // xmm0
    unsigned long long v79;  // r8
    char v80;  // r8b
    unsigned long long v81;  // rdi
    char v82;  // dil
    unsigned int v83;  // esi
    char v84;  // sil
    unsigned long long v85;  // rcx
    unsigned long long v86;  // cl
    unsigned long long v87;  // rcx
    char v88;  // cl
    unsigned long long v89;  // rcx
    char v90;  // cl
    unsigned long long v92;  // rax
    unsigned long long v94;  // rax
    unsigned long v95;  // rsi
    unsigned long long v96;  // rax
    unsigned long long v97;  // rax
    unsigned long v98;  // rsi
    uint128_t v99;  // xmm0
    unsigned int v100;  // eax
    char v101[4273761];  // rax
    unsigned long long v102;  // r14
    unsigned long long v103;  // rax
    unsigned int v104;  // ecx
    char v105;  // cl
    unsigned int v106;  // edx
    char v107;  // dl
    unsigned int v108;  // esi
    char v109;  // sil
    unsigned long long v110;  // rdi
    char v111;  // dil
    unsigned long long v112;  // rdi
    char v113;  // dil
    unsigned int v114;  // edi
    char v115;  // dil
    unsigned int v116;  // eax
    char v117;  // al
    unsigned long long v118;  // rax
    unsigned int v119;  // ecx
    char v120;  // cl
    unsigned long long v121;  // rdi
    char v122;  // dil
    unsigned int v123;  // esi
    char v124;  // sil
    unsigned int v125;  // edi
    char v126;  // dil
    unsigned long long v127;  // rdx
    char v128;  // dl
    unsigned int v129;  // edx
    char v130;  // dl
    unsigned int v131;  // eax
    char v132;  // al
    char v134;  // al
    unsigned long long v135;  // r8
    char v136;  // r8b
    unsigned long long v137;  // rdi
    char v138;  // dil
    unsigned int v139;  // esi
    char v140;  // sil
    unsigned int v141;  // r11d
    char v142;  // r11b
    char v143;  // r10b
    unsigned long long v144;  // r8
    char v145;  // r8b
    unsigned long long v146;  // rdi
    char v147;  // dil
    unsigned int v148;  // esi
    char v149;  // sil
    unsigned int v150;  // r11d
    char v151;  // r11b
    char v152;  // r10b
    unsigned long long v153;  // rcx
    char v154;  // cl
    unsigned long long v155;  // rdi
    unsigned long long v156;  // rdi
    unsigned long long v157;  // rax
    unsigned long long v158;  // rdi
    unsigned long long v159;  // rdi
    unsigned long long v163;  // rdi
    uint128_t v165;  // xmm7
    char v167[4273761];  // r8
    unsigned long long v168;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v169;  // rax
    unsigned long long v170;  // rdi
    unsigned long long v171;  // rbp
    unsigned long long v172;  // rcx
    unsigned long long v173;  // rdx
    unsigned long long v174;  // rcx
    unsigned long long v175;  // rsi
    unsigned long long v176;  // rcx
    char v177;  // al
    unsigned long long v178;  // rcx
    unsigned long long v179;  // rdx
    unsigned long long v180;  // rsi
    unsigned long long v181;  // rbp
    unsigned long long v182;  // rbp
    unsigned long long v183;  // rsi
    unsigned long long v184;  // rcx
    unsigned long long v185;  // rdx
    unsigned long long v187;  // rbp
    char *v188;  // rsi
    unsigned long long v189;  // rax
    unsigned long long v190;  // r11
    unsigned long long v191;  // rcx
    unsigned long long v192;  // rcx
    unsigned long v193;  // rcx
    unsigned long long v194;  // rbp
    unsigned int v195;  // edx
    unsigned long long v196;  // rax
    char *v197;  // rcx
    unsigned long long v198;  // rdx
    unsigned long long v199;  // rdx
    char v200[2];  // rbp
    unsigned long long v201;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v202;  // rax
    unsigned long long v203;  // r13
    char *v204;  // rsi
    struct v205;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v206;  // rdi
    unsigned long long v207;  // cc_dep1
    unsigned long long v208;  // rax
    unsigned int *v209;  // rbp
    unsigned long long v210;  // r8
    unsigned long long v211;  // rdx
    unsigned long long v212;  // rax
    unsigned long long v213;  // rbp
    unsigned long long v214;  // rdi
    char *v215;  // rsi
    unsigned long long v216;  // rbx
    unsigned int v217;  // ebp
    char v218;  // dl
    unsigned long long v219;  // r9
    unsigned long long v220;  // rdx
    unsigned long long v221;  // r8
    unsigned long long v222;  // rcx
    char *v223;  // rsi
    char *v224;  // rdi
    unsigned long long v225;  // cc_dep1
    unsigned long long v226;  // cc_dep2
    unsigned long v227;  // d
    char *v228;  // rsi
    unsigned long long v229;  // cc_dep1
    unsigned long long v230;  // rax
    char *v231;  // rcx
    unsigned long long v232;  // rcx
    unsigned long long v233;  // r8
    char *v234;  // rsi
    unsigned long long v235;  // rax
    unsigned long long v236;  // r10
    unsigned long long v237;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v238;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v239;  // r15
    unsigned long long v240;  // rdx
    unsigned long long v241;  // rbp
    unsigned long long v242;  // rdx
    unsigned long long v243;  // rbx
    unsigned long long v244;  // rbp
    unsigned long long v245;  // r9
    char *v246;  // rsi
    unsigned long long v247;  // r15
    unsigned long long v248;  // rbp
    unsigned long long v249;  // rax
    unsigned long long v250;  // rax
    struct v251;  // rcx
    unsigned long long v252;  // r8
    struct v253;  // rcx
    char *v254;  // rsi
    unsigned long long v255;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v256;  // rsi
    char *v257;  // rcx
    unsigned int v258[4];  // rax
    unsigned long long v259;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v260;  // rax
    unsigned long long v262;  // r8
    char v263[4273761];  // r10
    unsigned long long v264;  // r13
    unsigned long long v265;  // rax

    v53 = 0;
    v55 = v54;
    v239 = 38;
    v241 = -18446744069414584322;
    v26 = 0;
    v238 = &v44;
    v102 = &v26;
    v7 = 0;
    while (true)
    {
        v67 = (char)*(&((char *)&g_413720)[v53]);
        v56 = (char)*(&((char *)&g_413720)[v53]);
        if (*(&((char *)&g_413720)[v53]) == 0)
        {
            if (v7 == 3 && (unsigned int)-18446744069414584322 > 0)
            {
                v241 = -18446744069414584322;
            }
            if (!(INVALID_IR) || v7 != 3 || (unsigned int)-18446744069414584322 > 0)
            {
                while (true)
                {
                    v100 = (char)*(&((char *)&g_4137a0)[v53]);
                    if ((unsigned int)(char)*(&((char *)&g_4137a0)[v53]) != -93)
                    {
                        v101 = (unsigned long long)v100 + 1;
                        if (*((char *)(v101 + &g_4135e0)) == 1 && (unsigned int)v101 <= 112)
                        {
                            v53 = (char)*((char *)(v101 + &g_413660));
                            if (*((char *)(v101 + &g_413660)) != 0)
                            {
                                v238 += 56;
                                v67 = v102;
                                v7 = 3;
                                v30 = v8;
                                v31 = v9;
                                v238->field_0 = (int128_t)v29;
                                v238->field_30 = v34;
                                v238->field_10 = *((int128_t *)&v31);
                                v238->field_20 = *((int128_t *)&v33);
                            }
                        }
                    }
                    if (*((char *)(v101 + &g_413660)) == 0 || (unsigned int)(char)*(&((char *)&g_4137a0)[v53]) == -93 || *((char *)(v101 + &g_4135e0)) != 1 || (unsigned int)v101 > 112)
                    {
                        if (v102 == &v26)
                        {
                            break;
                        }
                        v102 = &v25;
                        v53 = *((short *)&v25);
                        v238 = &v36;
                    }
                }
                if (*((char *)(v101 + &g_4135e0)) == 1 && (unsigned int)v101 <= 112 && *((char *)(v101 + &g_413660)) != 0 && (unsigned int)(char)*(&((char *)&g_4137a0)[v53]) != -93)
                {
                    v102 = v67 + 2;
                    *((unsigned long *)(v67 + 2)) = v53;
                    if (v67 + 2 >= stack_base + -1314)
                    {
                        break;
                    }
                }
                else
                {
                    v265 = 1;
                }
            }
        }
        else
        {
            v57 = (unsigned long long)v56 - 4;
            v58 = (char)*(&((char *)&g_413520)[v67]);
            v65 = *((long long *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56));
            v68 = *((long long *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 8));
            v41 = *((long long *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 48));
            v264 = *((long long *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 16));
            *((int128_t *)&v35) = *((int128_t *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56));
            v76 = *((long long *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 24));
            *((int128_t *)&v37) = *((int128_t *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 16));
            v5 = *((long long *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 32));
            *((int128_t *)&v39) = *((int128_t *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 32));
            v4 = *((long long *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 40));
            v6 = *((int *)(v238 + (int)(1 - (unsigned int)(char)*(&((char *)&g_413520)[v67])) * 56 + 48));
            switch (v57)
            {
            case 0:
                v99 = *((int128_t *)&v44);
                *((char *)(v55 + 160)) = 1;
                *((uint128_t *)(v55 + 88)) = v99;
                v12 = v68;
                v11 = v76;
                v10 = v55;
                v156 = dcgettext(0x0, 0x411bd5, 0x5);
                v64 = 2;
            case 3:
                v12 = v68;
                v98 = "datetime";
                v11 = v76;
                *((long long *)(v55 + 200)) = *((long long *)(v55 + 200)) + 1;
                *((long long *)(v55 + 168)) = *((long long *)(v55 + 168)) + 1;
                v10 = v55;
            case 4:
                v12 = v68;
                v98 = "time";
                v11 = v76;
                *((long long *)(v55 + 200)) = *((long long *)(v55 + 200)) + 1;
                v10 = v55;
            case 5:
                v12 = v68;
                v98 = "local_";
                v11 = v76;
                *((long long *)(v55 + 184)) = *((long long *)(v55 + 184)) + 1;
                v10 = v55;
            case 6:
                v12 = v68;
                v98 = "zone";
                *((long long *)(v55 + 208)) = *((long long *)(v55 + 208)) + 1;
                v11 = v76;
                v10 = v55;
            case 7:
                v12 = v68;
                v98 = "date";
                v11 = v76;
                *((long long *)(v55 + 168)) = *((long long *)(v55 + 168)) + 1;
                v10 = v55;
            case 8:
                v12 = v68;
                v98 = "day";
                v11 = v76;
                *((long long *)(v55 + 176)) = *((long long *)(v55 + 176)) + 1;
                v10 = v55;
            case 9:
                v12 = v55;
                v95 = "relative";
                v11 = v68;
                v10 = v76;
            case 10:
                v12 = v55;
                v11 = v68;
                v10 = v76;
                v155 = dcgettext(0x0, 0x411c08, 0x5);
                v53 = -18446744069414584413;
                v64 = 4;
                v76 = v10;
                v68 = v11;
                if (*((char *)(v12 + 217)) != 0)
                {
                    v16 = -93;
                    v15 = v66;
                    v14 = 4;
                    v13 = v11;
                    v12 = v67;
                    v11 = v10;
                    v10 = v55;
                    sub_403a10();
                }
            case 11:
                v12 = v55;
                v95 = "hybrid";
                v11 = v68;
                v10 = v76;
            case 14:
                v66 = &v31;
                v67 = &v24;
                *((long long *)(v55 + 80)) = 0;
                *((long long *)(v55 + 88)) = 0;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 72)) = (long long)v37;
                tmp_24 = v44;
                *((long long *)(v55 + 96)) = 0;
                *((unsigned int *)(v55 + 28)) = tmp_24;
                v64 = 7;
                break;
            case 15:
                v67 = &v22;
                *((long long *)(v55 + 88)) = 0;
                *((long long *)(v55 + 96)) = 0;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 80)) = (long long)v37;
                tmp_26 = v44;
                *((unsigned long *)(v55 + 72)) = v28;
                v66 = &v17;
                *((unsigned int *)(v55 + 28)) = tmp_26;
                v64 = 7;
                break;
            case 16:
                v53 = -93;
                *((long long *)(v55 + 88)) = (long long)(&v35)[8];
                *((unsigned long long *)(v55 + 72)) = v11;
                v67 = &v20;
                *((long long *)(v55 + 96)) = (int)v37;
                tmp_37 = v44;
                *((unsigned long *)(v55 + 80)) = v28;
                v66 = &v3;
                *((unsigned int *)(v55 + 28)) = tmp_37;
                v64 = 7;
                break;
            case 18:
                *((long long *)(v55 + 80)) = 0;
                v66 = &v31;
                v67 = &v24;
                *((long long *)(v55 + 88)) = 0;
                v53 = 20;
                *((long long *)(v55 + 72)) = (long long)v37;
                v64 = 8;
                *((long long *)(v55 + 96)) = 0;
                *((int *)(v55 + 28)) = 2;
                break;
            case 19:
                *((long long *)(v55 + 88)) = 0;
                v67 = &v22;
                *((long long *)(v55 + 96)) = 0;
                v53 = 20;
                *((unsigned long *)(v55 + 72)) = v28;
                v66 = &v17;
                *((long long *)(v55 + 80)) = (long long)v37;
                v64 = 8;
                *((int *)(v55 + 28)) = 2;
                break;
            case 20:
                *((int *)(v55 + 28)) = 2;
                v53 = 20;
                *((long long *)(v55 + 88)) = (long long)(&v35)[8];
                *((unsigned long long *)(v55 + 72)) = v11;
                v67 = &v20;
                *((unsigned long *)(v55 + 80)) = v28;
                v66 = &v3;
                *((long long *)(v55 + 96)) = (int)v37;
                v64 = 8;
                break;
            case 23:
                v12 = v68;
                v11 = v76;
                *((long long *)(v55 + 208)) = *((long long *)(v55 + 208)) + 1;
                v10 = v55;
                v92 = sub_403570();
                v55 = v10;
                v76 = v11;
                v68 = v12;
                if (v92 != 0)
                {
                    v66 = &v31;
                    v67 = &v24;
                    v53 = -18446744069414584347;
                    v64 = 10;
                    break;
                }
            case 24:
                v66 = &v35;
                v67 = &v25;
                v53 = -18446744069414584413;
                *((unsigned int *)(v55 + 20)) = v44;
                v64 = 11;
                break;
            case 25:
                *((int *)(v55 + 20)) = 1;
                v66 = &v31;
                v67 = &v24;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 192)) = *((long long *)(v55 + 192)) + 1;
                v64 = 11;
                break;
            case 26:
                v59 = v44;
            case 27:
                *((int *)(v55 + 24)) = 25200;
                v66 = &v35;
                v67 = &v25;
                v53 = -18446744069414584413;
                v64 = 12;
                break;
            case 28:
                v12 = v68;
                v11 = v76;
                *((unsigned int *)(v55 + 24)) = (long long)(&v35)[8];
            case 29:
                v12 = v68;
                v11 = v76;
                *((int *)(v55 + 24)) = 25200;
            case 30:
                v12 = v68;
                v11 = v76;
                v10 = v55;
                v94 = sub_403570();
                if (v94 != 0)
                {
                    v55 = v10;
                    v157 = *((int *)(v10 + 24)) + v31;
                    *((unsigned int *)(v10 + 24)) = *((int *)(v10 + 24)) + v31;
                    v66 = &v27;
                    v67 = &v23;
                    v53 = -18446744069414584413;
                    v64 = 12;
                    v76 = v11;
                    v68 = v12;
                    break;
                }
            case 31:
                v59 = (unsigned int)((int)v44 + 3600);
            case 32:
                v66 = &v31;
                v67 = &v24;
                v53 = -18446744069414584413;
                *((int *)(v55 + 24)) = (int)(&v35)[8] + 3600;
                v64 = 12;
                break;
            case 33:
                tmp_5 = v44;
                *((long long *)(v55 + 8)) = 0;
                v66 = &v35;
                v67 = &v25;
                v53 = -18446744069414584413;
                *((unsigned int *)(v55 + 16)) = tmp_5;
                v64 = 13;
                break;
            case 34:
                *((long long *)(v55 + 8)) = 0;
                v66 = &v31;
                v67 = &v24;
                v53 = -18446744069414584413;
                *((unsigned int *)(v55 + 16)) = (long long)(&v35)[8];
                v64 = 13;
                break;
            case 35:
                v103 = (long long)(&v35)[8];
            case 36:
                v103 = (long long)v37;
            case 37:
                v67 = &v23;
                v66 = &v27;
                v53 = -18446744069414584413;
                *((unsigned long *)(v55 + 56)) = v32;
                *((unsigned long *)(v55 + 64)) = v45;
                v64 = 14;
                break;
            case 38:
                v96 = (char)*((char *)(v55 + 217));
                if (v19 > 3)
                {
                    if (v96 != 0)
                    {
                        v14 = v55;
                        v13 = v68;
                        v12 = v76;
                        v11 = v19;
                        v10 = v18;
                        dcgettext(0x0, 0x4120f8, 0x5);
                        sub_403400();
                        v55 = v14;
                        v68 = v13;
                        v76 = v12;
                    }
                    v67 = &v21;
                    v66 = &v10;
                    v53 = -18446744069414584413;
                    *((unsigned long long *)(v55 + 48)) = v19;
                    *((int128_t *)(v55 + 32)) = *((int128_t *)&v17);
                    *((unsigned long *)(v55 + 56)) = v32;
                    *((unsigned long *)(v55 + 64)) = v45;
                    v64 = 14;
                }
                else
                {
                    v10 = v18;
                    if (v96 != 0)
                    {
                        v13 = v55;
                        v12 = v68;
                        v11 = v76;
                        dcgettext(0x0, 0x412130, 0x5);
                        sub_403400();
                        v55 = v13;
                        v68 = v12;
                        v76 = v11;
                    }
                    v165 = *((int128_t *)&v44);
                    v67 = &v21;
                    v66 = &v10;
                    v53 = -18446744069414584413;
                    *((unsigned long long *)(v55 + 56)) = v10;
                    *((uint128_t *)(v55 + 32)) = v165;
                    *((unsigned long *)(v55 + 64)) = v32;
                    *((unsigned long *)(v55 + 48)) = v46;
                    v64 = 14;
                }
            case 39:
                *((unsigned long *)(v55 + 64)) = v32;
                *((long long *)(v55 + 56)) = (long long)(&v35)[8];
                *((unsigned long *)(v55 + 40)) = 0 - v45;
            case 40:
                *((unsigned long *)(v55 + 56)) = v31;
                *((long long *)(v55 + 64)) = 0 - (long long)v37;
                if ((long long)v37 != 0x8000000000000000)
                {
                    *((unsigned long *)(v55 + 40)) = 0 - v45;
                }
            case 41:
                v66 = &v31;
                v67 = &v24;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 56)) = (long long)(&v35)[8];
                *((unsigned long *)(v55 + 64)) = v45;
                v64 = 14;
                break;
            case 42:
                v78 = *((int128_t *)&v44);
                v67 = &v22;
                v66 = &v17;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 56)) = *((long long *)&v27);
                *((uint128_t *)(v55 + 32)) = v78;
                *((unsigned long *)(v55 + 64)) = v32;
                *((unsigned long *)(v55 + 48)) = v46;
                v64 = 14;
                break;
            case 43:
                v66 = &v31;
                v67 = &v24;
                v53 = -18446744069414584413;
                *((long long *)(v55 + 64)) = (long long)v37;
                *((unsigned long long *)(v55 + 56)) = v44;
                v64 = 14;
                break;
            case 44:
                v77 = *((int128_t *)&v44);
                *((unsigned long *)(v55 + 64)) = v32;
                *((uint128_t *)(v55 + 32)) = v77;
                *((long long *)(v55 + 56)) = (long long)(&v35)[8];
            case 46:
                *((unsigned long *)(v55 + 48)) = v33;
                v97 = (long long)v37;
                *((int128_t *)(v55 + 32)) = *((int128_t *)&v31);
                *((unsigned long long *)(v55 + 56)) = 0 - v97;
                if (v97 != 0x8000000000000000)
                {
                    *((unsigned long *)(v55 + 64)) = 0 - v45;
                    v66 = &v27;
                    v67 = &v23;
                    v53 = -18446744069414584413;
                    v64 = 15;
                    break;
                }
            case 47:
                v70 = v43;
                v14 = *((long long *)(v55 + 144));
                v10 = (long long)(&v35)[8];
                v11 = (long long)v37;
                v71 = *((long long *)(v55 + 136));
                v15 = *((long long *)(v55 + 128));
                v12 = (long long)(&v37)[8];
                v72 = v41;
                v16 = *((long long *)(v55 + 120));
                v13 = (long long)v39;
                v73 = (long long)(&v39)[8];
                v17 = *((long long *)(v55 + 112));
                v74 = (unsigned int)*((int *)(v55 + 152));
                v18 = *((long long *)(v55 + 104));
                if ((int)v44 >= 0)
                {
                    *((unsigned int *)(v55 + 152)) = v74 + v70;
                    v119 = 0;
                    tmp_9 = v14 + v72;
                    v120 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1424, size=8, endness=Iend_LE), rdi, cc_ndep);
                    v121 = 0;
                    *((long long *)(v55 + 144)) = tmp_9;
                    v122 =  amd64g_calculate_condition(0x0, 0x4, rax, rsi, cc_ndep);
                    *((unsigned long long *)(v55 + 136)) = v71 + v73;
                    v123 = 0;
                    *((int *)&v14) = rdi;
                    v124 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1416, size=8, endness=Iend_LE), Load(addr=stack_base-1432, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long long *)(v55 + 128)) = v15 + v13;
                    v125 = 0;
                    v126 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1408, size=8, endness=Iend_LE), Load(addr=stack_base-1440, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long long *)(v55 + 120)) = v16 + v12;
                    v127 = 0;
                    v128 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1400, size=8, endness=Iend_LE), Load(addr=stack_base-1448, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long long *)(v55 + 112)) = v17 + v11;
                    *((int *)&v11) = rdx;
                    v129 = 0;
                    *((unsigned long long *)(v55 + 104)) = v18 + v10;
                    v130 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=stack_base-1392, size=8, endness=Iend_LE), Load(addr=stack_base-1456, size=8, endness=Iend_LE), cc_ndep);
                    v131 = rcx | (unsigned int)((!(v74 ^ v70) & (v74 ^ v74 + v70)) >> 31 & 1);
                    v132 = (char)(rcx | (unsigned int)((!(v74 ^ v70) & (v74 ^ v74 + v70)) >> 31 & 1)) | (char)v14;
                    v134 = (unsigned long long)(unsigned int)(rax | rsi | rdi) | (char)v11;
                    v118 = (unsigned int)rax | rdx;
                }
                else
                {
                    *((unsigned int *)(v55 + 152)) = v74 - v70;
                    v104 = 0;
                    v105 = ((v14 ^ v72) & (v14 ^ v14 - v72)) >> 63;
                    *((unsigned long long *)(v55 + 144)) = v14 - v72;
                    v106 = 0;
                    v107 = ((v71 ^ v73) & (v71 ^ v71 - v73)) >> 63;
                    *((unsigned long long *)(v55 + 136)) = v71 - v73;
                    v108 = 0;
                    v109 = ((v15 ^ v13) & (v15 ^ v15 - v13)) >> 63;
                    *((unsigned long long *)(v55 + 128)) = v15 - v13;
                    v110 = 0;
                    v111 = ((v16 ^ v12) & (v16 ^ v16 - v12)) >> 63;
                    *((unsigned long long *)(v55 + 120)) = v16 - v12;
                    *((int *)&v12) = rdi;
                    v112 = 0;
                    v113 = ((v17 ^ v11) & (v17 ^ v17 - v11)) >> 63;
                    *((unsigned long long *)(v55 + 112)) = v17 - v11;
                    *((int *)&v11) = rdi;
                    v114 = 0;
                    *((unsigned long long *)(v55 + 104)) = v18 - v10;
                    v115 = ((v18 ^ v10) & (v18 ^ v18 - v10)) >> 63;
                    v116 = rcx | (unsigned int)(((v74 ^ v70) & (v74 ^ v74 - v70)) >> 31 & 1) | rdx | rsi;
                    v117 = (char)(rcx | (unsigned int)(((v74 ^ v70) & (v74 ^ v74 - v70)) >> 31 & 1) | rdx | rsi) | (char)v12 | (char)v11;
                    v118 = (unsigned int)(rax | rdi);
                }
                if (v118 == 0)
                {
                    *((char *)(v55 + 161)) = 1;
                    v66 = &v31;
                    v67 = &v24;
                    v53 = -18446744069414584413;
                    v64 = 16;
                    break;
                }
            case 48: case 49:
                v79 = 0;
                v80 = (!((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)*((int *)(v55 + 152))) & ((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)((int)(stack_base)[-1128] + *((int *)(v55 + 152))))) >> 31 & 1;
                *((int *)(v55 + 152)) = (int)(stack_base)[-1128] + *((int *)(v55 + 152));
                tmp_117 = *((long long *)(v55 + 144));
                v81 = 0;
                *((unsigned long *)(v55 + 144)) = *((long long *)(v55 + 144)) + v49;
                v82 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x88), size=8, endness=Iend_LE), Load(addr=stack_base-1144, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v55 + 136)) = *((long long *)(v55 + 136)) + v48;
                v83 = 0;
                v84 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x80), size=8, endness=Iend_LE), Load(addr=stack_base-1152, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v55 + 128)) = *((long long *)(v55 + 128)) + v47;
                v85 = 0;
                v86 = INVALID_IR;
                *((unsigned long *)(v55 + 120)) = *((long long *)(v55 + 120)) + v46;
                *((int *)&v10) = rcx;
                v87 = 0;
                v88 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x70), size=8, endness=Iend_LE), Load(addr=stack_base-1168, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v55 + 112)) = *((long long *)(v55 + 112)) + v45;
                *((int *)&v11) = rcx;
                v89 = 0;
                v90 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x68), size=8, endness=Iend_LE), Load(addr=rbx, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long long *)(v55 + 104)) = *((long long *)(v55 + 104)) + v44;
                tmp_259 =  amd64g_calculate_condition(0x0, 0x4, t117, Load(addr=stack_base-1136, size=8, endness=Iend_LE), cc_ndep) | (unsigned int)r8 | rdi;
                if ((char)v11 == 0)
                {
                    *((char *)(v55 + 161)) = 1;
                    v66 = &v35;
                    v67 = &v25;
                    v53 = -18446744069414584413;
                    v64 = 16;
                    break;
                }
            case 50:
                v42 = 0;
                v65 = (long long)(&v35)[8];
            case 51:
                v42 = 0;
                v65 = (long long)v37;
            case 52:
                v66 = &v35;
                v67 = &v25;
                v64 = 17;
                v76 = 0;
                v53 = -18446744069414584413;
                v264 = 0;
                v42 = 0;
                v68 = 0;
                v6 = 0;
                v65 = 1;
                v4 = 0;
                v5 = 0;
                break;
            case 53:
                v68 = (long long)(&v35)[8];
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v64 = 17;
            case 54:
                v68 = (long long)v37;
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v64 = 17;
            case 55:
                v66 = &v35;
                v67 = &v25;
                v64 = 17;
                v76 = 0;
                v53 = -18446744069414584413;
                v264 = 0;
                v65 = 0;
                v42 = 0;
                v6 = 0;
                v68 = 1;
                v4 = 0;
                v5 = 0;
                break;
            case 56:
                v41 = 0;
                v35 = 0;
                v37 = 0;
                v39 = 0;
                v264 = v44 * *((long long *)&((char *)&v35)[8]);
            case 57:
                v41 = 0;
                v35 = 0;
                v37 = 0;
                v39 = 0;
                v264 = v44 * (long long)v37;
            case 58:
                v264 = v44;
                v66 = &v35;
                v67 = &v25;
                v64 = 17;
                v42 = 0;
                v53 = -18446744069414584413;
            case 59:
                v76 = (long long)(&v35)[8];
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v64 = 17;
            case 60:
                v76 = (long long)v37;
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v64 = 17;
            case 61:
                v66 = &v35;
                v67 = &v25;
                v64 = 17;
                v264 = 0;
                v53 = -18446744069414584413;
                v68 = 0;
                v65 = 0;
                v42 = 0;
                v6 = 0;
                v76 = 1;
                v4 = 0;
                v5 = 0;
                break;
            case 62:
                v42 = 0;
                v69 = (long long)(&v35)[8];
            case 63:
                v42 = 0;
                v69 = (long long)v37;
            case 64:
                v66 = &v35;
                v67 = &v25;
                v64 = 17;
                v76 = 0;
                v53 = -18446744069414584413;
                v264 = 0;
                v68 = 0;
                v65 = 0;
                v42 = 0;
                v6 = 0;
                v4 = 0;
                v5 = 1;
                break;
            case 65:
                v42 = 0;
                v75 = (long long)(&v35)[8];
            case 66:
                v42 = 0;
                v75 = (long long)v37;
            case 67: case 68:
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = -18446744069414584413;
                v4 = (long long)(&v35)[8];
                v6 = (int)v37;
                v64 = 17;
            case 69:
                v66 = &v35;
                v67 = &v25;
                v42 = 0;
                v53 = -18446744069414584413;
                v64 = 17;
                v6 = 0;
                v4 = 1;
            case 71:
                v65 = (long long)v37;
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = 60;
                v64 = 18;
            case 72:
                v68 = (long long)v37;
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = 60;
                v64 = 18;
            case 73:
                v41 = 0;
                v35 = 0;
                v37 = 0;
                v39 = 0;
                v264 = v44 * (long long)v37;
                if (!(INVALID_IR))
                {
                    v66 = &v31;
                    v67 = &v24;
                    v53 = 60;
                    v64 = 18;
                }
            case 74:
                v76 = (long long)v37;
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = 60;
                v64 = 18;
            case 75:
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = 60;
                v5 = (long long)v37;
                v64 = 18;
            case 76:
                v66 = &v31;
                v67 = &v24;
                v42 = 0;
                v53 = 60;
                v4 = (long long)v37;
                v64 = 18;
            case 77:
                v264 = v44;
                v66 = &v35;
                v67 = &v25;
                v64 = 19;
                v42 = 0;
                v53 = -18446744069414584413;
            case 81:
                v65 = v45;
                v66 = &v35;
                v67 = &v25;
                v68 = 0;
                v53 = -18446744069414584413;
                v64 = 21;
                break;
            case 83:
                v65 = v45;
                v66 = &v35;
                v67 = &v25;
                v68 = 0;
                v53 = -18446744069414584412;
                v64 = 22;
                break;
            case 84:
                v12 = v68;
                v11 = v76;
                v2 = v46;
                v1 = v45;
                v0 = v44;
                v10 = v55;
                sub_403110();
                v66 = &v35;
                v67 = &v25;
                v53 = -18446744069414584413;
                v64 = 23;
                v55 = v10;
                v76 = v11;
                v68 = v12;
                break;
            case 85:
                v12 = v68;
                v11 = v76;
                v2 = (long long)(&v37)[8];
                v1 = (long long)v37;
                v0 = (long long)(&v35)[8];
                v10 = v55;
                sub_403110();
                v144 = 0;
                v55 = v10;
                v145 = (!((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)*((int *)(v10 + 152))) & ((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)((int)(stack_base)[-1128] + *((int *)(v10 + 152))))) >> 31 & 1;
                *((int *)(v10 + 152)) = (int)(stack_base)[-1128] + *((int *)(v10 + 152));
                tmp_120 = *((long long *)(v10 + 144));
                v146 = 0;
                *((unsigned long *)(v10 + 144)) = *((long long *)(v10 + 144)) + v49;
                v147 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x88), size=8, endness=Iend_LE), Load(addr=stack_base-1144, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v10 + 136)) = *((long long *)(v10 + 136)) + v48;
                v148 = 0;
                v149 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x80), size=8, endness=Iend_LE), Load(addr=stack_base-1152, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v10 + 128)) = *((long long *)(v10 + 128)) + v47;
                v150 = 0;
                v151 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x78), size=8, endness=Iend_LE), Load(addr=stack_base-1160, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v10 + 120)) = *((long long *)(v10 + 120)) + v46;
                v152 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x70), size=8, endness=Iend_LE), Load(addr=stack_base-1168, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long *)(v10 + 112)) = *((long long *)(v10 + 112)) + v45;
                v153 = 0;
                v154 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(Load(addr=stack_base-1456, size=8, endness=Iend_LE) + 0x68), size=8, endness=Iend_LE), Load(addr=rbx, size=8, endness=Iend_LE), cc_ndep);
                *((unsigned long long *)(v10 + 104)) = *((long long *)(v10 + 104)) + v44;
                tmp_256 =  amd64g_calculate_condition(0x0, 0x4, t120, Load(addr=stack_base-1136, size=8, endness=Iend_LE), cc_ndep) | (unsigned int)r8 | rdi;
                if ((char)((unsigned int)tmp_256 | rsi | r11) == 0)
                {
                    *((char *)(v10 + 161)) = 1;
                    v66 = &v31;
                    v67 = &v24;
                    v53 = -18446744069414584413;
                    v64 = 24;
                    v76 = v11;
                    v68 = v12;
                    break;
                }
            case 86:
                v53 = 43;
                v65 = -1;
                tmp_1 = v58 * 7;
                v67 = v102 - v58 * 2;
                v63 = v238 - tmp_1 * 8;
                v64 = 25;
                v66 = v63;
                break;
            case 87:
                v65 = v45;
                v66 = &v31;
                v67 = &v24;
                v53 = 43;
                v64 = 25;
                break;
            default:
                v64 = (unsigned int)(char)*(&((char *)&g_413580)[v67]) - 28;
                v53 = (char)*(&((char *)&g_413700)[(long long)(int)((unsigned int)(char)*(&((char *)&g_413580)[v67]) - 28)]);
                tmp_7 = v58 * 56;
                v67 = v102 - v58 * 2;
                v61 = v238 - tmp_7;
                v66 = v61;
                break;
            }
            if (v57 <= 87)
            {
                v66 = v57;
                if (*((long long *)(v66 * 8 + 4270240)) == 4214431 || *((long long *)(v66 * 8 + 4270240)) == 4212599)
                {
                    v4 = v75;
                    v66 = &v31;
                    v67 = &v24;
                    v53 = -18446744069414584413;
                    v64 = 17;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4216991 || *((long long *)(v66 * 8 + 4270240)) == 4215703)
                {
                    *((unsigned long long *)(v55 + 8)) = v103;
                    tmp_9 = v44;
                    v66 = &v31;
                    v67 = &v24;
                    *((char *)(v55 + 224)) = 1;
                    v53 = -18446744069414584413;
                    *((unsigned int *)(v55 + 16)) = tmp_9;
                    v64 = 13;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4215865 || *((long long *)(v66 * 8 + 4270240)) == 4212683)
                {
                    *((unsigned long long *)(v55 + 24)) = v59;
                    v66 = &v35;
                    v67 = &v25;
                    v53 = -18446744069414584413;
                    v64 = 12;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4215031 || *((long long *)(v66 * 8 + 4270240)) == 4214711)
                {
                    v135 = 0;
                    v136 = (!((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)*((int *)(v55 + 152))) & ((unsigned int)(int)(stack_base)[-1128] ^ (unsigned long long)(unsigned int)((int)(stack_base)[-1128] + *((int *)(v55 + 152))))) >> 31 & 1;
                    *((int *)(v55 + 152)) = (int)(stack_base)[-1128] + *((int *)(v55 + 152));
                    tmp_113 = *((long long *)(v55 + 144));
                    v137 = 0;
                    *((unsigned long *)(v55 + 144)) = *((long long *)(v55 + 144)) + v49;
                    v138 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x88), size=8, endness=Iend_LE), Load(addr=stack_base-1144, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long *)(v55 + 136)) = *((long long *)(v55 + 136)) + v48;
                    v139 = 0;
                    v140 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x80), size=8, endness=Iend_LE), Load(addr=stack_base-1152, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long *)(v55 + 128)) = *((long long *)(v55 + 128)) + v47;
                    v141 = 0;
                    v142 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x78), size=8, endness=Iend_LE), Load(addr=stack_base-1160, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long *)(v55 + 120)) = *((long long *)(v55 + 120)) + v46;
                    v143 =  amd64g_calculate_condition(0x0, 0x4, Load(addr=(r9 + 0x70), size=8, endness=Iend_LE), Load(addr=stack_base-1168, size=8, endness=Iend_LE), cc_ndep);
                    *((unsigned long *)(v55 + 112)) = *((long long *)(v55 + 112)) + v45;
                    v67 = 0;
                    v67 = INVALID_IR;
                    *((unsigned long long *)(v55 + 104)) = *((long long *)(v55 + 104)) + v44;
                    tmp_249 =  amd64g_calculate_condition(0x0, 0x4, t113, Load(addr=stack_base-1136, size=8, endness=Iend_LE), cc_ndep) | (unsigned int)r8 | rdi;
                    if (rcx == 0 && (char)((unsigned int)tmp_249 | rsi | r11) == 0 && v143 == 0)
                    {
                        *((char *)(v55 + 161)) = 1;
                        v10 = v55;
                        v163 = dcgettext(0x0, 0x411bff, 0x5);
                        v53 = -18446744069414584413;
                        v64 = 12;
                        v76 = v11;
                        v68 = v12;
                        if (*((char *)(v10 + 217)) != 0)
                        {
                            v16 = -93;
                            v15 = v66;
                            v14 = 12;
                            v13 = v68;
                            *((int *)&v12) = rcx;
                        }
                    }
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4216005 || *((long long *)(v66 * 8 + 4270240)) == 4214316)
                {
                    v66 = &v31;
                    v67 = &v24;
                    v53 = -18446744069414584413;
                    v64 = 17;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4214003 || *((long long *)(v66 * 8 + 4270240)) == 4213296 || *((long long *)(v66 * 8 + 4270240)) == 4213222)
                {
                    v6 = 0;
                    v264 = 0;
                    v68 = 0;
                    v65 = 0;
                    v4 = 0;
                    v5 = 0;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4213620 || *((long long *)(v66 * 8 + 4270240)) == 4214123 || *((long long *)(v66 * 8 + 4270240)) == 4213694)
                {
                    v6 = 0;
                    v76 = 0;
                    v264 = 0;
                    v65 = 0;
                    v4 = 0;
                    v5 = 0;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4213129 || *((long long *)(v66 * 8 + 4270240)) == 4213056)
                {
                    v5 = v69;
                    v66 = &v31;
                    v67 = &v24;
                    v53 = -18446744069414584413;
                    v64 = 17;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4215342 || *((long long *)(v66 * 8 + 4270240)) == 4215597)
                {
                    v158 = dcgettext(0x0, v95, 0x5);
                    v53 = -18446744069414584413;
                    v64 = 4;
                    v76 = v10;
                    v68 = v11;
                    if (*((char *)(v12 + 217)) != 0)
                    {
                        v16 = -93;
                        v15 = v66;
                        v14 = 4;
                        v13 = v68;
                        v12 = v67;
                        v11 = v76;
                        v10 = v55;
                    }
                }
                if (!(INVALID_IR) && (*((long long *)(v66 * 8 + 4270240)) == 4213483 || *((long long *)(v66 * 8 + 4270240)) == 4213405))
                {
                    v66 = &v31;
                    v67 = &v24;
                    v53 = -18446744069414584413;
                    v64 = 17;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4215054 || *((long long *)(v66 * 8 + 4270240)) == 4215665 || *((long long *)(v66 * 8 + 4270240)) == 4213968 || *((long long *)(v66 * 8 + 4270240)) == 4215092 || *((long long *)(v66 * 8 + 4270240)) == 4215627 || *((long long *)(v66 * 8 + 4270240)) == 4213901)
                {
                    v159 = dcgettext(0x0, v98, 0x5);
                    v64 = 4;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4214431 || *((long long *)(v66 * 8 + 4270240)) == 4214489 || *((long long *)(v66 * 8 + 4270240)) == 4212599)
                {
                    v6 = 0;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4214162 || *((long long *)(v66 * 8 + 4270240)) == 4216005 || *((long long *)(v66 * 8 + 4270240)) == 4214316)
                {
                    v6 = 0;
                    v76 = 0;
                    v264 = 0;
                    v68 = 0;
                    v4 = 0;
                    v5 = 0;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4213129 || *((long long *)(v66 * 8 + 4270240)) == 4213056 || *((long long *)(v66 * 8 + 4270240)) == 4214533)
                {
                    v76 = 0;
                    v264 = 0;
                    v68 = 0;
                    v65 = 0;
                    v6 = 0;
                    v4 = 0;
                }
                if ((*((long long *)(v66 * 8 + 4270240)) == 4216506 || v45 != 0x8000000000000000) && (*((long long *)(v66 * 8 + 4270240)) == 4216708 || *((long long *)(v66 * 8 + 4270240)) == 4216506 || *((long long *)(v66 * 8 + 4270240)) == 4216784) && (*((long long *)(v66 * 8 + 4270240)) == 4216506 || *((long long *)(v66 * 8 + 4270240)) == 4216784 || (long long)v37 != 0x8000000000000000))
                {
                    v67 = &v23;
                    v66 = &v27;
                    v53 = -18446744069414584413;
                    *((unsigned long *)(v55 + 48)) = v46;
                    v64 = 14;
                }
                if ((*((long long *)(v66 * 8 + 4270240)) == 4213332 || *((long long *)(v66 * 8 + 4270240)) == 4214451 || !(INVALID_IR)) && (*((long long *)(v66 * 8 + 4270240)) == 4213332 || *((long long *)(v66 * 8 + 4270240)) == 4213483 || *((long long *)(v66 * 8 + 4270240)) == 4214451 || *((long long *)(v66 * 8 + 4270240)) == 4214042 || *((long long *)(v66 * 8 + 4270240)) == 4213405))
                {
                    v6 = 0;
                    v76 = 0;
                    v68 = 0;
                    v65 = 0;
                    v4 = 0;
                    v5 = 0;
                }
                if (*((long long *)(v66 * 8 + 4270240)) == 4214236 || *((long long *)(v66 * 8 + 4270240)) == 4212441 || *((long long *)(v66 * 8 + 4270240)) == 4214431 || *((long long *)(v66 * 8 + 4270240)) == 4214489 || *((long long *)(v66 * 8 + 4270240)) == 4212599)
                {
                    v76 = 0;
                    v264 = 0;
                    v68 = 0;
                    v65 = 0;
                    v5 = 0;
                }
            }
        }
        if (v57 <= 87 && *((long long *)(v66 * 8 + 4270240)) == 4213730 && *(&((char *)&g_413720)[v53]) != 0 || v57 <= 87 && *(&((char *)&g_413720)[v53]) != 0 && (*((long long *)(v66 * 8 + 4270240)) == 4215054 || *((long long *)(v66 * 8 + 4270240)) == 4215665 || *((long long *)(v66 * 8 + 4270240)) == 4213968 || *((long long *)(v66 * 8 + 4270240)) == 4215092 || *((long long *)(v66 * 8 + 4270240)) == 4215627 || *((long long *)(v66 * 8 + 4270240)) == 4213901))
        {
            v55 = v10;
            v76 = v11;
            v68 = v12;
            if (*((char *)(v10 + 217)) != 0)
            {
                v16 = -93;
                v15 = v66;
                v14 = v64;
                v13 = v68;
                v12 = v67;
                sub_403a10();
            }
        }
        if (unknown)
        {
            v265 = 1;
        }
        if (v57 <= 87 && *(&((char *)&g_413720)[v53]) != 0 && *((char *)(v12 + 217)) != 0 && (*((long long *)(v66 * 8 + 4270240)) == 4215342 || *((long long *)(v66 * 8 + 4270240)) == 4215597) || rcx == 0 && (char)((unsigned int)tmp_249 | rsi | r11) == 0 && v57 <= 87 && v143 == 0 && *(&((char *)&g_413720)[v53]) != 0 && *((char *)(v10 + 217)) != 0 && (*((long long *)(v66 * 8 + 4270240)) == 4215031 || *((long long *)(v66 * 8 + 4270240)) == 4214711))
        {
            sub_4036f0();
        }
        if (v57 <= 87 && *(&((char *)&g_413720)[v53]) != 0 && *((char *)(v12 + 217)) != 0 && (*((long long *)(v66 * 8 + 4270240)) == 4215342 || *((long long *)(v66 * 8 + 4270240)) == 4215597) || rcx == 0 && (char)((unsigned int)tmp_249 | rsi | r11) == 0 && v57 <= 87 && v143 == 0 && *(&((char *)&g_413720)[v53]) != 0 && *((char *)(v10 + 217)) != 0 && (*((long long *)(v66 * 8 + 4270240)) == 4215031 || *((long long *)(v66 * 8 + 4270240)) == 4214711) || *((char *)(v10 + 217)) != 0 && (v57 <= 87 && *((long long *)(v66 * 8 + 4270240)) == 4213730 && *(&((char *)&g_413720)[v53]) != 0 || v57 <= 87 && *(&((char *)&g_413720)[v53]) != 0 && (*((long long *)(v66 * 8 + 4270240)) == 4215054 || *((long long *)(v66 * 8 + 4270240)) == 4215665 || *((long long *)(v66 * 8 + 4270240)) == 4213968 || *((long long *)(v66 * 8 + 4270240)) == 4215092 || *((long long *)(v66 * 8 + 4270240)) == 4215627 || *((long long *)(v66 * 8 + 4270240)) == 4213901)) || v57 <= 87 && *((long long *)(v66 * 8 + 4270240)) == 4215467 && *(&((char *)&g_413720)[v53]) != 0 && *((char *)(v12 + 217)) != 0)
        {
            v55 = v10;
            v76 = v11;
            v67 = v12;
            v68 = v13;
            v64 = v14;
            v66 = v15;
            v53 = v16;
        }
        if (unknown)
        {
            v35 = v65;
            v238 = v66 + 56;
            v36 = v68;
            v39 = v5;
            v37 = v264;
            v38 = v76;
            v40 = v4;
            v41 = v6;
            *((int128_t *)(v66 + 56)) = *((int128_t *)&(&v36)[-1]);
            *((unsigned long long *)(v66 + 104)) = v41;
            *((int128_t *)(v66 + 72)) = *((int128_t *)&v37);
            *((int128_t *)(v66 + 88)) = *((int128_t *)&(&v40)[-1]);
            v167 = v53 + (unsigned short)*((short *)v67);
            v168 = (unsigned short)*((short *)v67);
            if ((unsigned int)v167 <= 112 && v168 == (char)*((char *)(v167 + &g_4135e0)))
            {
                v53 = (char)*((char *)(v167 + &g_413660));
            }
            if ((unsigned int)v167 > 112 || v168 != (char)*((char *)(v167 + &g_4135e0)))
            {
                v53 = *(&((char *)&g_4136e0)[v64]);
            }
        }
        if (unknown)
        {
            if ((unsigned int)v53 == 12)
            {
                break;
            }
            v239 = (char)*(&((char *)&g_4137a0)[v53]);
            if ((unsigned int)(char)*(&((char *)&g_4137a0)[v53]) != -93)
            {
                break;
            }
        }
    }
    if (unknown)
    {
        v265 = 0;
    }
    else if (unknown)
    {
        v265 = 2;
    }
    else if (unknown)
    {
        return v265;
    }
    if ((unsigned int)-18446744069414584322 == -2)
    {
        v169 = *((long long *)v55);
        v170 = 1;
        v171 = (char)*((char *)*((long long *)v55));
        v172 = (char)*((char *)*((long long *)v55));
        while (true)
        {
            v173 = v172;
            if (v172 <= 32)
            {
                v174 = 1 << (v172 & 63);
                if ((0x100003e00 & v174) != 0)
                {
                    v175 = v169 + 1;
                    do
                    {
                        *((unsigned long long *)v55) = v175;
                        v171 = (char)*((char *)v175);
                        v169 = v175;
                        v173 = (char)*((char *)v175);
                        v175 += 1;
                    }
                    while (*((char *)v175) <= 32 && (0x100003e00 & 1 << (unsigned long long)((char)v173 & 63)) != 0);
                    if (true)
                    {
                        v176 = (unsigned int)v173 - 43 & -3;
                    }
                }
                if ((unsigned int)(v171 - 48) > 9 && ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9))
                {
                    v178 = v171 - 65;
                }
            }
            if (v172 > 32 || (0x100003e00 & v174) != 0 && (unsigned int)(v171 - 48) > 9)
            {
                v176 = (unsigned int)v173 - 43 & -3;
            }
            if ((unsigned int)(v171 - 48) > 9 && ((0x100003e00 & v174) != 0 || v172 > 32))
            {
                if (v176 != 0)
                {
                    v178 = v171 - 65;
                }
                else
                {
                    v177 = v173 == 45;
                }
            }
            if ((unsigned int)(v171 - 48) <= 9 && v172 > 32)
            {
                v177 = v173 == 45;
            }
            if (v172 <= 32 || v176 != 0)
            {
                if ((v172 <= 32 || (unsigned int)(v171 - 48) <= 9) && ((unsigned int)(v171 - 48) <= 9 || v172 > 32) && ((0x100003e00 & v174) == 0 || v172 > 32 || (unsigned int)(v171 - 48) > 9))
                {
                    v169 = *((long long *)v55);
                    v180 = 0;
                }
                if ((288230371923853311 & 1 << (v178 & 63)) != 0 && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 65) <= 57) && ((unsigned int)(v171 - 65) <= 57 || v172 <= 32) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (0x100003e00 & v174) != 0 || v172 > 32) && ((unsigned int)(v171 - 48) > 9 || (0x100003e00 & v174) != 0 || v172 > 32))
                {
                    v188 = &v19;
                    v189 = *((long long *)v55) + 1;
                    while (true)
                    {
                        if (v188 < stack_base + -1365)
                        {
                            *((unsigned long long *)&v19) = v173;
                            v188 = &v19;
                        }
                        *((unsigned long long *)v55) = v189;
                        v173 = (char)*((char *)v189);
                        v192 = (unsigned int)(char)*((char *)v189) - 65;
                        if (v173 != 46 && ((288230371923853311 & 1 << (v192 & 63)) == 0 || (unsigned int)(char)*((char *)v189) - 65 > 57))
                        {
                            break;
                        }
                        v189 += 1;
                    }
                    *(v188) = 0;
                    v196 = (char)v19;
                    v197 = &v19;
                    if ((char)v19 != 0)
                    {
                        do
                        {
                            v197 = &v19;
                            v19 = ((unsigned int)(v196 - 97) < 26? (unsigned int)v196 - 32 : (unsigned int)rax);
                            v196 = (char)*(&((char *)&v19)[1]);
                        }
                        while ((char)v196 != 0);
                    }
                    v5 = v238;
                    v204 = "AM";
                    v205 = &g_4134c0;
                    v4 = v53;
                    while (true)
                    {
                        v208 = strcmp(&v19, v204);
                        if (v208 != 0)
                        {
                            v205 = &v205[1];
                            v204 = v205->field_0;
                            v209 = &v19;
                            do
                            {
                                tmp_14 = (unsigned int)v19;
                                v209 = &v19;
                            }
                            while (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) == 0);
                            tmp_62 = v209;
                            v211 = (char *)v209 + 2;
                            v212 = 1;
                            v213 = -3 + (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int *)((char *)v209 + 2) : v209) + -1 * (((unsigned int)((((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) + (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152)? 1 : 0) & 1) + -0x1 * &v19;
                            if (-3 + (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? v211 : tmp_62) + -1 * (((unsigned int)((((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) + (((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152)) <= (unsigned long long)(unsigned int)(((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152 & 32896) == 0? (unsigned int)((unsigned long long)((unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152) >> 16) : (unsigned int)(tmp_14 - 16843009) & !((unsigned int)tmp_14) & 2155905152)? 1 : 0) & 1) + -0x1 * &v19 != 3)
                            {
                                v212 = 0;
                                if (v10 == 4)
                                {
                                    v212 = 0;
                                    v212 = (char)(*(&((char *)&v19)[3]) == 46);
                                }
                            }
                            v5 = v5;
                            v215 = "JANUARY";
                            v10 = v213;
                            v216 = &g_413320;
                            v217 = v212;
                            v4 = v4;
                            v6 = v55;
                            while (true)
                            {
                                if (v217 != 0)
                                {
                                    v218 = strncmp(&v19, v215, 0x3) == 0;
                                }
                                else
                                {
                                    v218 = strcmp(&v19, v215) == 0;
                                }
                                if (v218 == 0)
                                {
                                    v216 += 16;
                                    v215 = *((long long *)v216);
                                    if (*((long long *)v216) == 0)
                                    {
                                        v238 = v5;
                                        v244 = v10;
                                        v5 = v218;
                                        v11 = v4;
                                        v4 = v6;
                                        v258 = sub_403630();
                                        v219 = v4;
                                        v220 = v5;
                                        v221 = (int)v11;
                                        if (v258 == 0)
                                        {
                                            v222 = 4;
                                            v223 = &v19;
                                            v224 = "DST";
                                            while (v222 != 0)
                                            {
                                                v222 -= 1;
                                                v225 = (char)v19;
                                                v226 = *(v224);
                                                v224 = &v224[v227];
                                                v223 = &v223[v227];
                                                break;
                                            }
                                            v228 = "YEAR";
                                            v229 = (v225 > v226) - 0 - (v225 < v226);
                                            if ((char)v229 == 0)
                                            {
                                                v29 = 0;
                                                v241 = 259;
                                            }
                                            else
                                            {
                                                v5 = v238;
                                                v216 = &g_413260;
                                                v4 = v221;
                                                *((unsigned long long *)&v10) = v220;
                                                v6 = v219;
                                                while (true)
                                                {
                                                    v230 = strcmp(&v19, v228);
                                                    if (v230 == 0)
                                                    {
                                                        break;
                                                    }
                                                    v216 += 16;
                                                    v228 = *((long long *)v216);
                                                    v231 = &v51;
                                                    v259 = v4;
                                                    v243 = v5;
                                                    v242 = v10;
                                                    v245 = v6;
                                                    if (v51 == 83)
                                                    {
                                                        *((unsigned int *)&v4) = v239;
                                                        v234 = "YEAR";
                                                        v239 = v5;
                                                        v5 = v244;
                                                        v243 = &g_413260;
                                                        v51 = 0;
                                                        while (true)
                                                        {
                                                            v11 = v245;
                                                            v10 = v231;
                                                            v6 = v242;
                                                            v235 = strcmp(&v19, v234);
                                                            v242 = (char)v6;
                                                            v231 = v10;
                                                            v245 = v11;
                                                            if (v235 != 0)
                                                            {
                                                                v243 += 16;
                                                                v234 = *((long long *)v243);
                                                                v244 = v5;
                                                                v239 = (int)v4;
                                                                *(v10) = 83;
                                                            }
                                                            else
                                                            {
                                                                v236 = v243;
                                                                v237 = v244;
                                                                v238 = v239;
                                                                v239 = (unsigned int)v4;
                                                                v240 = *((int *)(v236 + 12));
                                                                v241 = (unsigned int)*((int *)(v236 + 8));
                                                            }
                                                        }
                                                        if (v235 == 0)
                                                        {
                                                            v29 = v240;
                                                        }
                                                        else if (*((long long *)v243) == 0 && v235 != 0)
                                                        {
                                                            v4 = v239;
                                                            v246 = "TOMORROW";
                                                            v247 = v243;
                                                            v5 = v244;
                                                            v238 = &g_413100;
                                                            v248 = v259;
                                                        }
                                                    }
                                                    v4 = v239;
                                                    v246 = "TOMORROW";
                                                    v247 = v243;
                                                    v5 = v244;
                                                    v238 = &g_413100;
                                                    v248 = v259;
                                                    while (true)
                                                    {
                                                        v10 = v245;
                                                        v6 = v242;
                                                        v249 = strcmp(&v19, v246);
                                                        v242 = (char)v6;
                                                        v245 = v10;
                                                        if (v249 != 0)
                                                        {
                                                            v238 = &v238[1];
                                                            v246 = v238->field_0;
                                                            v250 = (char)v19;
                                                            v239 = (unsigned int)v4;
                                                            if (v5 == 1)
                                                            {
                                                                v253 = &g_412c20;
                                                                if (v250 != 65)
                                                                {
                                                                    while (true)
                                                                    {
                                                                        v254 = v253->field_10;
                                                                        v255 = &v253->field_10;
                                                                        if (v253->field_10 == 0)
                                                                        {
                                                                            break;
                                                                        }
                                                                        if (*(v254) != v250)
                                                                        {
                                                                            v253 = v255;
                                                                        }
                                                                        else
                                                                        {
                                                                            v240 = (int)v253->field_1c;
                                                                            v241 = v253->field_18;
                                                                        }
                                                                    }
                                                                    if (*(v254) == v250 && v253->field_10 != 0)
                                                                    {
                                                                        v29 = v240;
                                                                    }
                                                                    else
                                                                    {
                                                                        v256 = &v19;
                                                                        v257 = &v19;
                                                                    }
                                                                }
                                                                else
                                                                {
                                                                    v29 = -3600;
                                                                    v241 = 273;
                                                                }
                                                            }
                                                            if (v5 != 1 || v250 != 65)
                                                            {
                                                                v256 = &v19;
                                                                v257 = &v19;
                                                                if (v250 != 0)
                                                                {
                                                                    do
                                                                    {
                                                                        if (v250 != 46)
                                                                        {
                                                                            v257 = &v19;
                                                                        }
                                                                        else
                                                                        {
                                                                            v242 = 1;
                                                                        }
                                                                        v256 = &v19;
                                                                        v250 = (char)*(&((char *)&v19)[1]);
                                                                        tmp_11 = *(&((char *)&v19)[1]);
                                                                        *(v257) = *(&((char *)&v19)[1]);
                                                                    }
                                                                    while (tmp_11 != 0);
                                                                    if (v242 != 0)
                                                                    {
                                                                        v5 = v259;
                                                                        v4 = v10;
                                                                        v258 = sub_403630();
                                                                        v245 = v4;
                                                                        v259 = (int)v5;
                                                                        if (v258 != 0)
                                                                        {
                                                                            break;
                                                                        }
                                                                    }
                                                                }
                                                                if (*((char *)(v245 + 217)) == 0)
                                                                {
                                                                    break;
                                                                }
                                                                v5 = v245;
                                                                v4 = v259;
                                                                dcgettext(0x0, 0x411bbb, 0x5);
                                                                sub_403400();
                                                                v260 = 2;
                                                                v262 = (int)v4;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            v251 = v238;
                                                            v252 = v248;
                                                            v238 = v247;
                                                            v239 = (unsigned int)v4;
                                                            v240 = (int)v251->field_c;
                                                            v241 = v251->field_8;
                                                        }
                                                    }
                                                    if (v249 == 0 || v5 == 1 && v238->field_0 == 0 && v250 != 65)
                                                    {
                                                        v29 = v240;
                                                    }
                                                    else if (v238->field_0 == 0 && v249 != 0 && v250 != 0 && v242 != 0 && (v5 != 1 || v250 != 65))
                                                    {
                                                        v240 = (int)v258[1 + 1];
                                                        v241 = v258[1];
                                                    }
                                                    else if (v5 == 1 && v250 == 65 && v238->field_0 == 0 && v249 != 0)
                                                    {
                                                        v260 = (char)*(&((char *)&g_413820)[v241]);
                                                    }
                                                    else if (v238->field_0 == 0 && v249 != 0 && (v250 == 0 || v242 == 0 || v258 == 0) && (v5 != 1 || v250 != 65))
                                                    {
                                                        v260 = 2;
                                                    }
                                                    else if (v238->field_0 == 0 && v249 != 0 && *((char *)(v245 + 217)) != 0 && (v250 == 0 || v242 == 0 || v258 == 0) && (v5 != 1 || v250 != 65))
                                                    {
                                                        v239 += v260;
                                                    }
                                                }
                                                if (*((long long *)v216) == 0 && v230 != 0)
                                                {
                                                    v260 = 2;
                                                }
                                                else if (*((long long *)v216) == 0 && v230 != 0)
                                                {
                                                    v29 = v240;
                                                }
                                                else if (true)
                                                {
                                                    v232 = v216;
                                                    v233 = (int)v4;
                                                    v238 = v5;
                                                    v240 = *((int *)(v232 + 12));
                                                    v241 = (unsigned int)*((int *)(v232 + 8));
                                                }
                                                else if (*((long long *)v216) == 0 && v230 != 0)
                                                {
                                                    v240 = (int)v258[1 + 1];
                                                    v241 = v258[1];
                                                }
                                                else if (*((long long *)v216) == 0 && v230 != 0)
                                                {
                                                    v239 += v260;
                                                }
                                                else if (*((long long *)v216) == 0 && v230 != 0)
                                                {
                                                    v260 = (char)*(&((char *)&g_413820)[v241]);
                                                }
                                            }
                                        }
                                        if (v258 != 0 || (char)v229 != 0)
                                        {
                                            v240 = (int)v258[1 + 1];
                                            v241 = v258[1];
                                        }
                                    }
                                }
                                if (v218 != 0 || v258 == 0 && *((long long *)v216) == 0 && (char)v229 != 0)
                                {
                                    v232 = v216;
                                    v233 = (int)v4;
                                    v238 = v5;
                                    v240 = *((int *)(v232 + 12));
                                    v241 = (unsigned int)*((int *)(v232 + 8));
                                }
                            }
                            if (v218 != 0 || *((long long *)v216) == 0 && v258 != 0 || *((long long *)v216) == 0 && (char)v229 != 0)
                            {
                                v29 = v240;
                            }
                            else if (v258 == 0 && v218 == 0 && *((long long *)v216) == 0 && (char)v229 != 0)
                            {
                                v239 += v260;
                            }
                            else if (v258 == 0 && v218 == 0 && *((long long *)v216) == 0)
                            {
                                v260 = (char)*(&((char *)&g_413820)[v241]);
                            }
                            else if (v258 == 0 && v218 == 0 && *((long long *)v216) == 0 && (char)v229 != 0)
                            {
                                v260 = 2;
                            }
                        }
                        else
                        {
                            tmp_5 = v205;
                            v210 = (int)v4;
                            v238 = v5;
                            v240 = *((int *)(tmp_5 + 12));
                            v241 = (unsigned int)*((int *)(tmp_5 + 8));
                        }
                        v29 = v240;
                    }
                    if (v205->field_0 == 0 && v208 != 0)
                    {
                        v239 += v260;
                    }
                    else if (v205->field_0 == 0 && v208 != 0)
                    {
                        v260 = 2;
                    }
                    else if (v205->field_0 == 0 && v208 != 0)
                    {
                        v260 = (char)*(&((char *)&g_413820)[v241]);
                    }
                }
                if (((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || (unsigned int)(v171 - 65) > 57) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || v176 != 0) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (0x100003e00 & v174) != 0 || v172 > 32) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || (0x100003e00 & v174) != 0 || v172 > 32) && ((unsigned int)(v171 - 48) > 9 || (0x100003e00 & v174) != 0 || v172 > 32) && v173 == 40)
                {
                    v183 = *((long long *)v55);
                    v184 = 0;
                    while (true)
                    {
                        v169 = v183 + 1;
                        *((unsigned long long *)v55) = v183 + 1;
                        v185 = (char)*((char *)(v183 + 1 - 1));
                        if (*((char *)(v183 + 1 - 1)) == 0)
                        {
                            break;
                        }
                        if (v185 != 40)
                        {
                            v184 -= (char)(v185 == 41);
                        }
                        else
                        {
                            v184 += 1;
                        }
                        if (v184 != 0)
                        {
                            v183 = v169;
                        }
                        else
                        {
                            v187 = (char)*((char *)(v183 + 1));
                            v172 = (char)*((char *)(v183 + 1));
                        }
                    }
                    if (v184 == 0 && *((char *)(v183 + 1 - 1)) != 0)
                    {
                        v173 = v172;
                    }
                    else
                    {
                        v260 = 0;
                    }
                }
            }
            if (v176 == 0 && ((0x100003e00 & v174) != 0 || v172 > 32) && (v172 > 32 || (unsigned int)(v171 - 48) > 9))
            {
                v179 = *((long long *)v55) + 1;
                v180 = (0 - (unsigned int)(char)(v177 < 1) & 2) - 1;
                while (true)
                {
                    *((unsigned long long *)v55) = v179;
                    v172 = (char)*((char *)v179);
                    v169 = v179;
                    v173 = (char)*((char *)v179);
                    if (*((char *)v179) <= 32)
                    {
                        v179 = v169 + 1;
                        v181 = v172;
                    }
                    else
                    {
                        v182 = v172;
                        break;
                    }
                }
                if ((0x100003e00 & 1 << (v172 & 63)) == 0 || *((char *)v179) > 32)
                {
                    v173 = v172;
                }
                else if (*((char *)v179) > 32)
                {
                    v190 = v169;
                    v191 = 0;
                    v170 = v173;
                }
            }
            if (v176 == 0 && v172 > 32 || (unsigned int)(v171 - 48) <= 9 && v172 > 32 || (unsigned int)(v171 - 48) <= 9 && (0x100003e00 & v174) == 0 && (unsigned int)(v171 - 48) <= 9 || (unsigned int)(v171 - 48) <= 9 && v172 <= 32 && (unsigned int)(v171 - 48) > 9 || v176 == 0 && (0x100003e00 & v174) != 0 && (unsigned int)(v171 - 48) > 9)
            {
                v190 = v169;
                v191 = 0;
                v170 = v173;
                while (true)
                {
                    v193 = v191 + ((unsigned int)v180 == -1? 48 - v170 : (unsigned int)(rdi - 48));
                    if (INVALID_IR)
                    {
                        break;
                    }
                    v170 = (char)*((char *)(v190 + 1));
                    v194 = v190 + 1;
                    v195 = (char)*((char *)(v190 + 1));
                    if ((unsigned int)((unsigned long long)(char)*((char *)(v190 + 1)) - 48) > 9)
                    {
                        v198 = v195 & -3;
                        if (v198 == 44)
                        {
                            v199 = (unsigned int)(char)*((char *)(v190 + 1)) - 48;
                            if ((unsigned int)(char)*((char *)(v190 + 1)) - 48 <= 9)
                            {
                                v200 = v190 + 3;
                                v201 = (char)*((char *)(v190 + 3));
                                v202 = 8;
                                v203 = v201;
                                do
                                {
                                    v206 = v201 - 48;
                                    v199 = (unsigned int)v199 * 10;
                                    if ((unsigned int)(v201 - 48) <= 9)
                                    {
                                        v201 = v200[1];
                                        v199 += v206;
                                        v200 = &v200[1];
                                        v203 = v201;
                                        v206 = (unsigned int)v201 - 48;
                                    }
                                    v207 = v202;
                                    v202 -= 1;
                                }
                                while (v207 != 1);
                                if ((unsigned int)v180 == -1)
                                {
                                    if (v206 <= 9)
                                    {
                                        if (v203 == 48)
                                        {
                                            do
                                            {
                                                v200 = &v200[1];
                                                v214 = v200[0];
                                            }
                                            while (v214 == 48 && (unsigned int)v200[0] - 48 <= 9);
                                            if ((unsigned int)v200[0] - 48 <= 9)
                                            {
                                                v199 = (unsigned int)v199 + 1;
                                            }
                                        }
                                        if (v203 != 48 || (unsigned int)v199 != 0)
                                        {
                                            v199 = (unsigned int)v199 + 1;
                                        }
                                    }
                                    if ((unsigned int)v199 == 0 && v206 > 9)
                                    {
                                        *((char *[2])v55) = v200;
                                        v260 = 21;
                                        v29 = v8;
                                        v8 = 0;
                                    }
                                }
                                if (v206 <= 9 && ((unsigned int)v200[0] - 48 <= 9 || (unsigned int)v180 != -1) && (v203 != 48 || (unsigned int)v199 != 0 || (unsigned int)v180 != -1))
                                {
                                    do
                                    {
                                        v200 = &v200[1];
                                    }
                                    while ((unsigned int)v200[0] - 48 <= 9);
                                }
                                if ((unsigned int)v199 == 0 && (unsigned int)v180 != -1 || v206 > 9 && (unsigned int)v180 != -1 || (unsigned int)v180 != -1 && (unsigned int)v180 >= 0 || (unsigned int)v200[0] - 48 <= 9 && (unsigned int)v199 == 0 && v206 <= 9 && v203 != 48 || (unsigned int)v200[0] - 48 <= 9 && (unsigned int)v199 == 0 && v206 <= 9 && (unsigned int)v199 != 0 || (unsigned int)v200[0] - 48 <= 9 && v206 <= 9 && v203 != 48 && (unsigned int)v180 >= 0 || (unsigned int)v200[0] - 48 <= 9 && v206 <= 9 && (unsigned int)v199 != 0 && (unsigned int)v180 >= 0)
                                {
                                    *((char *[2])v55) = v200;
                                    v8 = v199;
                                    v29 = v8;
                                    v260 = !(0 - (unsigned int)(char)((unsigned int)rsi < 1)) + 22;
                                }
                                if ((v206 <= 9 || (unsigned int)v180 == -1) && ((unsigned int)v180 == -1 || (unsigned int)v180 < 0) && (v206 <= 9 || (unsigned int)v199 != 0) && ((unsigned int)v180 == -1 || (unsigned int)v199 != 0) && (v203 != 48 || (unsigned int)v199 != 0 || (unsigned int)v180 != -1) && (v203 == 48 || (unsigned int)v180 < 0 || (unsigned int)v200[0] - 48 > 9 || v206 > 9) && (v203 == 48 || (unsigned int)v200[0] - 48 > 9 || (unsigned int)v199 != 0 || v206 > 9))
                                {
                                    if (v8 == 0x8000000000000000)
                                    {
                                        break;
                                    }
                                    *((char *[2])v55) = v200;
                                    v29 = v8 - 1;
                                    v8 = (int)(0x3b9aca00 - (unsigned int)v199);
                                    v260 = 21;
                                }
                            }
                        }
                        if ((unsigned int)(char)*((char *)(v190 + 1)) - 48 > 9 || v198 != 44)
                        {
                            *((unsigned long long *)v55) = v190;
                            v8 = v193;
                            v29 = (char)v180 % 0x80000000;
                            v9 = v190 - v169;
                            v260 = !(0 - (unsigned int)(char)((unsigned int)v180 < 1)) + 20;
                        }
                    }
                    else
                    {
                        v191 = v8 * 10;
                        if (INVALID_IR)
                        {
                            break;
                        }
                        v190 = v194;
                    }
                }
                if (true)
                {
                    v260 = 2;
                }
                else if (unknown)
                {
                    v239 += v260;
                }
            }
            if (((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && (v172 <= 32 || v176 != 0) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || (unsigned int)(v171 - 65) > 57) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || v176 != 0) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (0x100003e00 & v174) != 0 || v172 > 32) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || (0x100003e00 & v174) != 0 || v172 > 32) && ((unsigned int)(v171 - 48) > 9 || (0x100003e00 & v174) != 0 || v172 > 32) && v173 != 40 || v172 <= 32 && (unsigned int)(v171 - 48) > 9 && ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && (unsigned int)(v171 - 65) > 57)
            {
                *((char **)v55) = &v169[1];
                v241 = *(v169);
                if (*(v169) != 0)
                {
                    break;
                }
            }
            if ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 65) <= 57 || (288230371923853311 & 1 << (v178 & 63)) != 0)
            {
                v260 = 2;
            }
        }
        if ((unsigned int)(v171 - 48) <= 9 && (0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) <= 9 && (unsigned int)(v171 - 48) > 9 || v176 == 0 && v172 > 32 || (unsigned int)(v171 - 48) <= 9 && v172 > 32 || (288230371923853311 & 1 << (v178 & 63)) != 0 && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 65) <= 57) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 48) > 9 || (unsigned int)(v171 - 48) > 9) && (char)v19 != 0 || (288230371923853311 & 1 << (v178 & 63)) != 0 && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 65) <= 57) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 48) > 9 || (unsigned int)(v171 - 48) > 9) && (char)v19 == 0)
        {
            v239 += v260;
        }
        else if ((((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || (unsigned int)(v171 - 65) > 57) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || v176 != 0) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 48) > 9 || (unsigned int)(v171 - 48) > 9) && v173 != 40 || (unsigned int)(v171 - 48) > 9 && ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && (unsigned int)(v171 - 65) > 57) && *(v169) == 0 || ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || (unsigned int)(v171 - 65) > 57) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || v176 != 0) && ((288230371923853311 & 1 << (v178 & 63)) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 48) > 9 || (unsigned int)(v171 - 48) > 9) && v173 == 40)
        {
            v260 = 0;
        }
        else if (!((288230371923853311 & 1 << (v178 & 63)) != 0 && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 65) <= 57) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 48) > 9 || (unsigned int)(v171 - 48) > 9) && (char)v19 != 0 || (288230371923853311 & 1 << (v178 & 63)) != 0 && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 65) <= 57) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && ((0x100003e00 & v174) == 0 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 65) <= 57 || v176 != 0) && ((unsigned int)(v171 - 65) <= 57 || (unsigned int)(v171 - 48) > 9) && (v172 <= 32 || (unsigned int)(v171 - 48) > 9) && ((unsigned int)(v171 - 48) > 9 || v176 != 0) && ((unsigned int)(v171 - 48) > 9 || (unsigned int)(v171 - 48) > 9) && (char)v19 == 0))
        {
            if (unknown)
            {
                v260 = (char)*(&((char *)&g_413820)[v241]);
            }
        }
    }
    v260 = 0;
    if ((unsigned int)v241 > 277)
    {
        v239 = (unsigned long long)((unsigned int)v239 + 2);
        v260 = 2;
    }
    if ((unsigned int)-18446744069414584322 == -2 || (unsigned int)v241 <= 277)
    {
        v260 = (char)*(&((char *)&g_413820)[v241]);
        v239 += v260;
    }
    if ((unsigned int)v239 <= 112)
    {
        v263 = v239;
        if ((char)*((char *)(v239 + &g_4135e0)) == v260)
        {
            v53 = (char)*((char *)(v263 + &g_413660));
            if (*((char *)(v263 + &g_413660)) != 0)
            {
                v67 = v102;
                v238 = &v238->field_38;
                v7 = v7 - 1 + (char)(v7 < 1);
                v30 = v8;
                v31 = v9;
                v238->field_0 = *((int128_t *)&(&v30)[-1]);
                v238->field_30 = v34;
                v238->field_10 = *((int128_t *)&v31);
                v238->field_20 = *((int128_t *)&v33);
            }
            else
            {
                v67 = v102;
                v66 = v238;
                v65 = *((long long *)&v238->field_38);
                *((int128_t *)&v35) = *((int128_t *)&v238->field_38);
                v68 = v238->field_40;
                v264 = *((long long *)&v238->field_48);
                v41 = *((long long *)&v238->field_68);
                v76 = v238->field_50;
                *((int128_t *)&v37) = *((int128_t *)&v238->field_48);
                *((int128_t *)&v39) = *((int128_t *)&v238->field_58);
                v5 = *((long long *)&v238->field_58);
                v4 = v238->field_60;
                v6 = *((int *)&v238->field_68);
            }
        }
    }
    v265 = 2;
    v265 = 0;
    return v265;
}

int sub_409ed0()
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
    return sub_409800();
}

int sub_40a630()
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
        sub_40a860(); /* do not return */
    }
}

// int sub_402b80()

int sub_408070()
{
    char v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long v3;  // rdx
    unsigned int *v4;  // rdi
    unsigned int *v5;  // rsi
    unsigned int v6;  // ecx
    unsigned long long v7;  // rbx
    unsigned int v9;  // ecx
    unsigned int *v10;  // rdi
    unsigned int v11[2];  // rsi
    unsigned int *v12;  // rdi
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx

    if (!(v3 != 1))
    {
        *(v4) = *(v5);
        if (*(v5) <= 68)
        {
            if (((char)v9 & 8) == 0)
            {
                *(v4) = *(v5) + 100;
                return 1;
            }
        }
        else
        {
            return 1;
        }
    }
    else if (v3 != 2)
    {
        v1 = v7;
        time(&v0);
        v13 = localtime((unsigned int)&v0);
        if (v13 != 0)
        {
            *(v12) = *((int *)(v13 + 20));
            v13 = 1;
        }
        v14 = v1;
        return v13;
    }
    if (v3 == 2 && ((char)v6 & 2) != 0)
    {
        *(v10) = v11[0] * 100 + v11[1] - 1900;
        return 1;
    }
    if ((((char)v6 & 2) == 0 || v3 == 1) && (((char)v6 & 2) == 0 || *(v5) <= 68) && (v3 == 1 || v3 == 2) && (*(v5) <= 68 || v3 == 2) && (((char)v6 & 2) == 0 || ((char)v9 & 8) != 0) && (v3 == 2 || ((char)v9 & 8) != 0))
    {
        return 0;
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

extern char g_414b94;

int sub_40bf30()
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
                                    v13 = sub_40bea0();
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
                    else if (*(v6) == 0 && v8 == 0 && v7->field_0 != 0 && (&v7[1] == v6 || *(v6) != 0) && (*(v6) != 0 || v7->field_8 != 0) || *(v6) == 0 && v13 != 0 && v11 > 118 && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6) || *(v6) == 0 && v11 <= 118 && (&v7[1] == v6 || !(&v6[-1 * v4]) >= v9) && (v7->field_8 == 0 || &v7[1] != v6))
                    {
                        v1->field_30 = v6;
                        v12 = 1;
                    }
                    else if (*(v6) == 0 && (v13 == 0 || !(&v6[-1 * v4]) < v9) && (v13 == 0 || &v7[1] != v6) && (v7->field_8 == 0 || &v7[1] != v6) && (!(&v6[-1 * v4]) < v9 || v11 > 118) && (&v7[1] != v6 || v11 > 118))
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
                v6 = &g_414b94;
            }
            v1->field_30 = v6;
            v12 = 1;
        }
        return v12;
    }
    return 1;
}

extern unsigned int g_411a7f;
extern unsigned int g_6182a0;
extern char g_6183a8;
extern unsigned long long g_6183b0;

int sub_402f30()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40c430();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_6183a8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x411a7f, 0x5);
            if (g_6183b0 != 0)
            {
                sub_409ea0();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_6183a8 != 0)
    {
        v3 = sub_40c430();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_6183a8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_6182a0);
        error(0x0, *(v2), "%s");
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_6183b8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_408430()
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
        g_6183b8 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

int sub_40c430()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40e2f0();
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

int sub_40a840()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern struct g_6182f8;
extern unsigned long long g_618300;
extern unsigned long long g_618308;
extern unsigned int g_618310;
extern unsigned long long g_6183c0;

int sub_409c10()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_618310;
    if (g_618310 > 1)
    {
        v2 = &g_6182f8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_6182f8[(unsigned long long)(g_618310 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_6182f8->field_8 != 6390720)
    {
        v1 = free(g_6182f8->field_8);
        g_618300 = 0x100;
        g_618308 = &g_6183c0;
    }
    if (g_6182f8 != 0x618300)
    {
        v1 = free(g_6182f8);
        g_6182f8 = &g_618300;
    }
    g_618310 = 1;
    return v1;
}

int sub_409b2b()
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
    v7 = (unsigned int)sub_4085d0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_40a610();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_4085d0();
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

extern unsigned int g_414a6f;
extern unsigned int g_6182a0;

int sub_40a860()
{
    dcgettext(0x0, 0x414a6f, 0x5);
    error(g_6182a0, 0x0, "%s");
    abort(); /* do not return */
}

// int sub_40a010()

int sub_40be20()
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

int sub_409b02()
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

extern unsigned long long stderr;

int sub_403400()
{
    unsigned int v0;  // [bp-0xd0]
    unsigned int v1;  // [bp-0xcc]
    unsigned long v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long v4;  // [bp-0xb0]
    unsigned long v5;  // [bp-0xa8]
    unsigned long v6;  // [bp-0xa0]
    unsigned long v7;  // [bp-0x98]
    unsigned long v8;  // [bp-0x90]
    void v9;  // [bp-0x88]
    void v10;  // [bp-0x78]
    void v11;  // [bp-0x68]
    void v12;  // [bp-0x58]
    void v13;  // [bp-0x48]
    void v14;  // [bp-0x38]
    void v15;  // [bp-0x28]
    void v16;  // [bp-0x18]
    unsigned long v18;  // rsi
    unsigned long v19;  // rdx
    unsigned long v20;  // rcx
    unsigned long v21;  // r8
    unsigned long v22;  // r9
    char v23;  // al
    void v24;  // xmm0
    void v25;  // xmm1
    void v26;  // xmm2
    void v27;  // xmm3
    void v28;  // xmm4
    void v29;  // xmm5
    void v30;  // xmm6
    void v31;  // xmm7

    v4 = v18;
    v5 = v19;
    v6 = v20;
    v7 = v21;
    v8 = v22;
    if (v23 != 0)
    {
        v9 = v24;
        v10 = v25;
        v11 = v26;
        v12 = v27;
        v13 = v28;
        v14 = v29;
        v15 = v30;
        v16 = v31;
    }
    fwrite("date: ", 0x1, 0x6, stderr);
    v2 = stack_base + 8;
    v0 = 8;
    v1 = 48;
    v3 = stack_base + -184;
    return sub_40c370();
}

extern unsigned long long program_invocation_short_name;

int sub_4026eb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

// int sub_409e00()

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_6182f8;
extern uint128_t g_618300;
extern unsigned int g_618310;
extern int512_t g_6183c0;

int sub_409800()
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
    v17 = g_6182f8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_618310 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_6182f8 != 0x618300)
            {
                v16 = sub_40a670();
                g_6182f8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_40a670();
                v17 = v15;
                g_6182f8 = v15;
                *(v15) = g_618300;
            }
            memset(&v17[(long long)(int)g_618310], 0x0, (int)((unsigned int)v13 + 1 - g_618310) * 16);
            g_618310 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_40a860(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_618310 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_4085d0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6390720)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_40a610();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_4085d0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_40a7e0()
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
        sub_40a860(); /* do not return */
    }
}

extern int512_t g_6184c0;

int sub_4099f0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_6184c0 : v1)) = v2;
    return &g_6184c0;
}

int sub_40b810()
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
        v8 = (unsigned int)sub_40b6f0() + v6;
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

// int sub_409cd0()

// int sub_409cb0()

extern uint128_t g_6184c0;
extern uint128_t g_6184d0;
extern uint128_t g_6184e0;
extern unsigned long long g_6184f0;

int sub_409e1f()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6184f0;
    *((uint128_t *)&v0) = g_6184c0;
    *((uint128_t *)&v1) = g_6184d0;
    *((uint128_t *)&v2) = g_6184e0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_409800();
}

int sub_40e2d0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    char v2;  // [bp-0x9]
    unsigned long v4;  // r9
    unsigned long v5;  // r8

    v2 = 0;
    v1 = v4;
    v0 = v5;
    return sub_40cb00();
}

int sub_40be50()
{
    unsigned int *v1;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // r13

    v1 = __errno_location();
    v2 = *(v1);
    if ((char)sub_40bdd0() == 0)
    {
        v2 = *(v1);
    }
    sub_40be20();
    *((unsigned long *)&v1) = v2;
    return stack_base + 0;
}

int sub_402e50()
{
    unsigned long long v1;  // rax

    v1 = sub_402b90();
    if (INVALID_IR)
    {
        sub_402cb0();
        sub_402d30();
        r9();
        v1 = -1;
    }
    return v1;
}

// int sub_409d00()

int sub_4030d0()
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

