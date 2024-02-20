
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int fini()
{
    unsigned long v1;  // rax

    return v1;
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

extern unsigned int g_416e60;
extern unsigned int g_416e80;
extern unsigned int g_416eb0;
extern unsigned int g_416ed0;
extern unsigned int g_416f00;
extern unsigned int g_416f51;
extern unsigned long long stderr;

int sub_4106d0()
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
    if (*(v9->field_20) == 0 || *(v9->field_20) == 61)
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
                            else if (*((int *)(v19 + 24)) != *((int *)(v27 + 24)) || v29 != 0 || *((int *)(v19 + 8)) != *((int *)(v27 + 8)) || *((long long *)(v19 + 16)) != *((long long *)(v27 + 16)))
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416e60, 0x5), *(v34));
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416e80, 0x5), *(v34));
                                v39 = stderr;
                                v40 = v18;
                                v43 = v1;
                                v41 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v43) != 0)
                                    {
                                        __fprintf_chk(v39, 0x1, 0x416f51, *((long long *)&v11));
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
            if ((*(v19) == 0 || v22 == 0) && (*(v19) == 0 || v23 == v17) && (v22 == 0 || v4 == 0) && (v22 == 0 || v1 == 0) && (v4 == 0 || v23 == v17) && (v1 == 0 || v23 == v17))
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416f00, 0x5), *(v34));
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
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416ed0, 0x5), *(v34));
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
        if ((*((char *)(v34[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v18) != 0) && (*((long long *)v18) != 0 || v36 != 0))
        {
            return v46;
        }
    }
    if (v29 == 0 && *((long long *)v18) == 0 || *((char *)(v34[(long long)(int)v9->field_0] + 1)) == 45 && v29 != 0 || v36 == 0 && v29 != 0)
    {
        if (v10 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416eb0, 0x5), *(v34));
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_40b7c0()
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

int sub_40b8b0()
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

int sub_40dcf0()
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
    return sub_40d7d0();
}

typedef struct struct_0 {
    char padding_0[26];
    char field_1a;
} struct_0;

int sub_4051b0()
{
    unsigned int *v1;  // rax
    struct v2;  // rdi

    v1 = __errno_location();
    v1 = *(v1) == 1 | *(v1) == 22;
    if (*(v1) == 1 || *(v1) == 22)
    {
        v1 = (unsigned long long)((unsigned int)v2->field_1a ^ 1);
    }
    return v1;
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

int sub_40ad70()
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

typedef struct struct_0 {
    char padding_0[56];
    unsigned long long field_38;
} struct_0;

int sub_405110()
{
    unsigned long long v1;  // rax
    struct v2;  // rdi

    v1 = sub_40b910();
    v2->field_38 = v1;
    return v1;
}

extern unsigned long long g_61b918;

int sub_40a900()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_61b918 = v1;
    return v2;
}

int sub_410290()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4100e0();
}

int sub_40e7f0()
{
    unsigned long v2;  // rbx
    unsigned int *v3;  // rbx
    unsigned long long v4;  // rbp
    unsigned int v6;  // r12d
    unsigned int *v7;  // rbx

    if (v2 != 0)
    {
        v2 = sub_40a9c0();
        v4 = (unsigned int)sub_40e450();
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

int sub_40bc30()
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
                v2 = (unsigned int)sub_40b080();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_40b310();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_40b310();
                    if (v22 != 0)
                    {
                        v23 = sub_40b310();
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
    if (v11->field_28->field_10 == 0 && ((char)(INVALID_IR) & 1) == 0 || ((char)(INVALID_IR) & 1) == 0 && *((long long *)&v2) == 0 || ((char)(INVALID_IR) & 1) == 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || *((long long *)&v2) == 0 && v11->field_28->field_10 != 0 || v11->field_28->field_10 != 0 && (INVALID_IR? 1 :  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=stack_base-88, size=8, endness=Iend_LE), 0x3c), 0x0)) != 0 || v0 == 0 && ((char)(INVALID_IR) & 1) == 0 && v11->field_10 != *((long long *)&v2) || v0 == 0 && v11->field_10 != *((long long *)&v2) && v11->field_28->field_10 != 0)
    {
        v21 = 0;
    }
    if (v11->field_10 != *((long long *)&v2) || (char)v21 != 0)
    {
        v24 = v21;
        return v24;
    }
}

// int sub_40e000()

extern int512_t g_61ba40;

int sub_40da10()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_61ba40 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_61ba40 : v1) + 4)) = v3;
    return v2;
}

int sub_412760()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_410520() != 0)
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
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_40b310()
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
                        v8 = sub_40b140();
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
                    v13 = (unsigned long long)(unsigned int)sub_40b140();
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

int sub_40fee0()
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

int sub_40c35a()
{
    unsigned long long *v1;  // rsi
    unsigned long long *v3;  // rdi
    unsigned long long v5;  // rax
    char v6;  // al

    v5 = strcmp(*(v3), *(v1));
    v6 = (unsigned int)v5 == 0;
    return rax;
}

int sub_411bc0()
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
            sub_4120b0();
            v11 = &v0;
            do
            {
                v11 = &v1;
                v13 = v13 * 0x100 + 255;
                v14 = v14 * 0x100 + v0;
            }
            while (v7 > v13);
        }
        if (v13 < v7 && v13 == v7 || v13 == v7 && v13 >= v7)
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

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_416f77;
extern char g_61bad8[2];

int sub_4115e0()
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

    v9 = g_61bad8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_416f77 : (unsigned long long)nl_langinfo(0xe));
    if (g_61bad8 == 0)
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
            v9 = &g_416f77;
        }
        if (v17 != 0 && (*(v15) == 0 || v15 == 0 || v15[v11 + -1] != 47) && (*(v15) == 0 || v15 == 0 || v11 != 0))
        {
            memcpy(v17, v15, v16);
            *((char *)(v17 + v16)) = 47;
        }
        if (*(v15) == 0 && v17 != 0 || v15 == 0 && v17 != 0 || v15[v11 + -1] != 47 && v17 != 0 && v11 != 0 || v15[v11 + -1] == 47 && *(v15) != 0 && v17 != 0 && v15 != 0 || v11 == 0 && *(v15) != 0 && v17 != 0 && v15 != 0)
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
                            if ((unsigned int)v27 != 32 && (unsigned int)v27 != 35)
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
                                        v9 = &g_416f77;
                                        v10 = (tmp_10 == 0? &g_416f77 : tmp_10);
                                        free(NULL);
                                        sub_412760();
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
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v38 != 0 && (unsigned int)v27 != 32 && v29 > 1 && (unsigned int)v27 != 35)
                        {
                            v61 = __uflow(v10);
                        }
                        if ((unsigned int)v27 == 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v62 == -1 || (unsigned int)v27 != 32 && (unsigned int)v27 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v38 != 0 && (unsigned int)v27 != 32 && v29 > 1 && (unsigned int)v27 != 35) && (unsigned int)v61 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_416f77 : tmp_10);
                            sub_412760();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if (unknown)
                    {
                        v9 = &g_416f77;
                    }
                    else if (unknown)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_416f77;
            free(v17);
        }
        *((char *[2])&g_61bad8[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_416f77 : tmp_10), v9);
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

// int sub_40ac10()

int sub_40af20()
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
    v4 = (unsigned int)sub_40ab40();
    v5 = (unsigned int)sub_40aba0();
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

// int sub_40e8c0()

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40c300()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1->field_8) % v2 >> 64;
}

extern unsigned long long __progname_full;
extern unsigned long long g_61b920;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_40c3a0()
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
        g_61b920 = v3;
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

int sub_410560()
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

int sub_4105f0()
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

int sub_40dad2()
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

int sub_40c480()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx

    v0 = v2;
    return sub_411470();
}

int sub_40f2d0()
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
            sub_411500();
            v9 = v5[3];
        }
        else
        {
            *(v4) = 0;
            v8 = 0;
        }
    }
    if (((*(v4))[3] == 1073741822 || (*(v4))[1] == 1073741823) && (v5[3] == 1073741822 || (*(v4))[1] != 1073741823) && ((*(v4))[1] == 1073741823 || (*(v4))[1] != 1073741822) && ((*(v4))[3] != 1073741823 || (*(v4))[1] != 1073741823))
    {
        tmp_12 = v3[12];
        *((unsigned long long [13])&(*(v4))[2]) = v3[11];
        v5[3] = tmp_12;
        v8 = 0;
    }
    if (((*(v4))[1] == 1073741823 || (*(v4))[3] != 1073741822) && (v5[3] != 1073741822 || (*(v4))[3] != 1073741822) && ((*(v4))[3] != 1073741823 || (*(v4))[3] != 1073741822) && ((*(v4))[1] == 1073741822 || v5[3] != 1073741822 || (*(v4))[1] != 1073741823) && ((*(v4))[1] == 1073741822 || (*(v4))[3] != 1073741823 || (*(v4))[1] != 1073741823))
    {
        v8 = 0;
        if (v9 == 1073741823)
        {
            v0 = 0;
            sub_411500();
            return (unsigned long long)v0;
        }
    }
    if (v9 != 1073741823 || v5[3] == 1073741822 && (*(v4))[1] == 1073741823 || (*(v4))[3] == 1073741823 && (*(v4))[1] == 1073741823 || (*(v4))[3] == 1073741822 && (*(v4))[1] == 1073741822 || (*(v4))[3] == 1073741822 && (*(v4))[1] != 1073741823)
    {
        return v8;
    }
}

int sub_40aca0()
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
        v5[0] = (unsigned int)sub_410310();
        *((unsigned long long [2])&v5[1]) = v10[1];
        *((unsigned long long [2])&v5[2]) = *(v10);
        v13 = sub_40c0b0();
        if (!(v13 != 0))
        {
            sub_410330(); /* do not return */
        }
        else if (v5 != v13)
        {
            v5 = (unsigned long long)(unsigned int)sub_4100e0();
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

extern unsigned long long g_61b3b8;
extern unsigned long long g_61b4e0;
extern unsigned long long g_61b8e0;

int sub_404690()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rbx
    unsigned long v4;  // rbp
    unsigned long long v5;  // rax

    v2 = v1;
    if (g_61b8e0 == 0)
    {
        if (g_61b8e0 != 0)
        {
            g_61b8e0 = calloc(g_61b3b8, 0x1);
        }
        else
        {
            g_61b8e0 = &g_61b4e0;
            g_61b3b8 = 0x400;
        }
    }
    if (v1 != 0)
    {
        while (true)
        {
            v4 = (g_61b3b8 <= v2? g_61b3b8 : v2);
            v5 = sub_40b000();
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

typedef struct struct_0 {
    unsigned long long field_0;
    char field_8;
} struct_0;

int sub_409870()
{
    unsigned long v1;  // rdi
    unsigned long long v3;  // rsi
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rax
    struct v7;  // rax
    unsigned long long v8;  // rax

    v4 = v3;
    v5 = (unsigned int)sub_40ab40() - v1;
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
        v7->field_8 = 0x6e690039322e3800;
        v8 = v4;
    }
    return v8;
}

int sub_404ad0()
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
    if (!(INVALID_IR))
    {
        if ((char)v4 != 0)
        {
            v5 = sub_404740();
            if (v5 < 0)
            {
                v7 = (unsigned int)sub_40ddd0();
            }
        }
        if ((char)v4 == 0 || v5 >= 0)
        {
            return 1;
        }
    }
    else
    {
        v6 = (unsigned int)sub_40ddd0();
    }
    if (INVALID_IR || v5 < 0 && (char)v4 != 0)
    {
        error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, v8, 0x5));
        return 0;
    }
}

// int sub_40dfb0()

int sub_410310()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

// int sub_40e41b()

int sub_40b830()
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

extern unsigned int g_412a07;
extern unsigned int g_413a18;
extern unsigned int g_413a40;
extern unsigned int g_413ac0;
extern unsigned int g_413b00;
extern unsigned int g_413b50;
extern unsigned int g_413d10;
extern unsigned int g_413ec0;
extern unsigned int g_413f50;
extern unsigned int g_414020;
extern unsigned int g_414178;
extern unsigned int g_414210;
extern unsigned int g_414330;
extern unsigned int g_4143f8;
extern unsigned int g_414508;
extern unsigned int g_414648;
extern unsigned int g_414760;
extern unsigned int g_414790;
extern unsigned int g_4147c8;
extern unsigned int g_414a10;
extern unsigned int g_414af0;
extern unsigned int g_414bd0;
extern unsigned int g_414ca0;
extern unsigned int g_414ce8;
extern unsigned int g_414d08;
extern unsigned long long g_61b920;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_403c80()
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
    unsigned long long v41[2];  // rax
    char *v42;  // rdi
    char *v43;  // rsi
    unsigned long long v44;  // rcx
    unsigned long long v45;  // cc_dep1
    unsigned long long v46;  // cc_dep2
    unsigned long v47;  // d
    char *v51;  // rax
    char *v52;  // rax
    unsigned long long v53;  // rax

    v15 = v17;
    v14 = v18;
    if (v19 != 0)
    {
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x413a18, 0x5), g_61b920);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x413a40, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413ac0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413b00, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413b50, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413d10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413ec0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413f50, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414020, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414178, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414210, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414330, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4143f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414508, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414648, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414760, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414790, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4147c8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414a10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414af0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x414bd0, 0x5), stdout);
        v0 = "[";
        v41 = &v0;
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
            v41 = &v2;
            v42 = v2;
            if (v2 == 0)
            {
                break;
            }
            v43 = "cp";
            v44 = 3;
            if ((v45 > v46) - 0 - (v45 < v46) == 0)
            {
                break;
            }
            while (v44 != 0)
            {
                v44 -= 1;
                v45 = *(v43);
                v46 = *(v42);
                v42 = &v42[v47];
                v43 = &v43[v47];
                break;
            }
        }
        if (v41[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x412a07, 0x5));
            v52 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x412a07, 0x5));
            v51 = setlocale(0x5, 0x0);
            if (v51 != 0)
            {
                v53 = strncmp(v51, "en_", 0x3);
            }
            if (v53 == 0 || v51 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x414ce8, 0x5));
            }
        }
        if ((v41[1] == 0 || strncmp(v52, "en_", 0x3) != 0) && (v41[1] == 0 || v52 != 0) && (v53 != 0 || v41[1] != 0) && (v51 != 0 || v41[1] != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x414ca0, 0x5));
        }
        if (v41[1] != 0 || v53 != 0 && v51 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x414ce8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x414d08, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_409a40()
{
    unsigned long v0;  // [bp-0x148]
    unsigned int v1;  // [bp-0x140]
    unsigned int v3;  // esi
    unsigned int v4;  // ebp
    char v5;  // cl
    unsigned int *v6;  // r14
    void *v7;  // rbx
    unsigned long v8;  // rdi
    unsigned long long v9;  // rax
    unsigned int v10;  // edx
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
            v7 = (unsigned long long)(unsigned int)sub_409870();
            if (v7 != 0)
            {
                v0 = v8;
                v1 = v3;
                v9 = sub_40e910();
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

int sub_4102e0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4100e0();
}

// int sub_40dcd0()

// int sub_40dc80()

int sub_4100e0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_410330(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

// int sub_411450()

extern unsigned int g_415b68;
extern unsigned int g_61b3d0;
extern unsigned long long g_61b908;

int sub_40a800()
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
    v5 = sub_410560();
    if (v5 != 0 || sub_4114a0() != 0)
    {
        while (true)
        {
            v11 = sub_410590();
            if (v11 == 0)
            {
                v12 = sub_410520();
                if (v12 != 0)
                {
                    sub_4114a0();
                }
            }
            if (v12 == 0 || v11 != 0)
            {
                if (sub_4114a0() == 0)
                {
                    break;
                }
            }
            v7 = dcgettext(0x0, 0x415b68, 0x5);
            v8 = __errno_location();
            if (g_61b908 != 0)
            {
                sub_40de70();
                error(0x0, *(v8), "%s: %s");
            }
            else
            {
                error(0x0, *(v8), "%s");
            }
            sub_40a920();
            _exit(g_61b3d0);
        }
    }
}

// int sub_40e3fb()

// int sub_40e440()

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

    v10 = sub_402310();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6401584 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_412210()
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

int sub_40e420()
{
    unsigned long long v1;  // rax
    struct v2;  // rdi
    struct v3;  // rsi

    v1 = -18446744069414584321;
    if (v2->field_8 >= v3->field_8)
    {
        v1 = (char)(v2->field_8 > v3->field_8);
    }
    return v1;
}

int sub_40b700()
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
} struct_0;

int sub_40b480()
{
    struct v1;  // rdi

    return v1->field_20;
}

int sub_409d30()
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
            if ((*((long long *)(v5 + (v12 << 3))) == 0 || v13 == 0) && (*((long long *)(v5 + (v12 << 3))) == 0 || v0 == -1) && (v13 != 0 || v14 != v11) && (*((long long *)(v5 + (v12 << 3))) != 0 || v13 != 0 || v0 != -1))
            {
                *((int *)&v0) = (v1 == 0? v0 : -2);
            }
        }
    }
    return v0;
}

int sub_411380()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4112c0();
}

extern struct g_61b418;
extern unsigned long long g_61b420;
extern unsigned long long g_61b428;
extern unsigned int g_61b430;
extern unsigned long long g_61b940;

int sub_40dbe0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_61b430;
    if (g_61b430 > 1)
    {
        v2 = &g_61b418[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_61b418[(unsigned long long)(g_61b430 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_61b418->field_8 != 6404416)
    {
        v1 = free(g_61b418->field_8);
        g_61b420 = 0x100;
        g_61b428 = &g_61b940;
    }
    if (g_61b418 != 6403104)
    {
        v1 = free(g_61b418);
        g_61b418 = &g_61b420;
    }
    g_61b430 = 1;
    return v1;
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

extern unsigned int g_416f28;
extern unsigned int g_416f5c;
extern unsigned long long stderr;

int sub_410cf0()
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
    unsigned long v13;  // rdi
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
    char v30[3];  // rcx
    unsigned long long *v31;  // rsi
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v46;  // rbp
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
                v49 = (unsigned int)(v20 == 58? 0 : (unsigned int)r13);
            }
        }
        if (v0->field_18 == 0 || (unsigned int)v17 == 0)
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
                if (v23 != 0 || v9 != 0)
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
        if (v0->field_18 == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)
        {
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13);
        }
        if (v19[0] == 0 || v0->field_18 == 0 && v19 == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && v0->field_18 != 0 && (unsigned int)v17 != 0)
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
                        sub_4105f0();
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
                            v27 = (char *)v31 + 1;
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
                            sub_4105f0();
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
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (v19[0] == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (v19[0] == 0 || v19 == 0 || v0->field_18 != 0) && (v19[0] == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || v19[0] == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_4106d0();
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
                if (v0->field_0 != (unsigned int)v46)
                {
                    v53 = *((long long *)(v15 + (int)v8->field_0 * 8));
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416f28, 0x5), *((long long *)v15));
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
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416f5c, 0x5), *((long long *)v15));
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
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x416f28, 0x5), *((long long *)v15));
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
        v45 = (unsigned int)sub_4106d0();
    }
    v66 = v45;
    return v66;
}

// int sub_40aef0()

extern char g_411d40;

int sub_411da0()
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
            v7 = (unsigned long long)(unsigned int)sub_4127e0();
            if (v7 != 0)
            {
                v12[0] = v7;
                v12[1] = &g_411d40;
                v12 = (unsigned long long)(unsigned int)sub_4100e0();
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
            v6 = (unsigned long long)(unsigned int)sub_4100e0();
            v6[1] = &g_411d40;
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
            if (v9 < 0 || v15 <= 2047 && v18 <= 2047 && v10 <= 2047)
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
            sub_412510();
        }
    }
    else
    {
        v13 = (unsigned int)sub_4100e0();
        *((long long *)v13) = 0;
        *((char **)(v13 + 8)) = &g_411d40;
        *((long long *)(v13 + 16)) = 0;
    }
    v49 = v13;
    return v49;
}

extern unsigned int g_4158a3;

int sub_409b40()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rbp
    unsigned long long v4;  // r12
    unsigned long long v5;  // rax

    if ((unsigned int)v2 != -2)
    {
        if ((unsigned int)v2 == -1)
        {
            v4 = (unsigned int)sub_40e020();
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4158a3, 0x5));
        }
        v2 = (unsigned int)sub_40c440();
        return v5;
    }
    v3 = (unsigned int)sub_40e020();
    error(0x0, *(__errno_location()), "%s");
    return v2;
}

extern char g_61ba90;
extern char g_61ba91;

int sub_4100a0()
{
    unsigned long long v1;  // rax
    char v2;  // al

    if (g_61ba91 != 0)
    {
        return (unsigned long long)g_61ba90;
    }
    v1 = geteuid();
    g_61ba91 = 1;
    v2 = (unsigned int)v1 == 0;
    g_61ba90 = (unsigned int)v1 == 0;
    return rax;
}

int sub_40ad30()
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
        v8 = sub_40b6a0() != 0;
        return rax;
    }
    return 0;
}

int sub_40b6a0()
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
        v6 = sub_40b140();
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

extern unsigned int g_415a7e;
extern unsigned int g_415a93;
extern unsigned int g_415a9b;
extern unsigned long long stderr[7];

int sub_409ed0()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415a7e, 0x5), stderr);
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
                    __fprintf_chk((unsigned int)stderr, 0x1, 0x415a9b, sub_40e020());
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
                __fprintf_chk((unsigned int)stderr, 0x1, 0x415a93, sub_40e020());
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

extern unsigned int g_416b19;
extern unsigned int g_416b44;
extern unsigned int g_416d70;

int sub_410020()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x416b19, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x416b44, 0x5));
    dcgettext(0x0, 0x416d70, 0x5);
}

int sub_4093b0()
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

extern unsigned long long g_61b8f8[10];

int sub_409540()
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
    struct v13;  // rdi
    void *v14;  // rbx
    struct v15;  // rdi
    void *v16;  // rbx

    v2 = v4;
    v5 = g_61b8f8;
    v1 = stack_base + 0;
    v0 = v6;
    v12 = *(v5);
    v11 = v5[1];
    if (v5[8] != 0 && v5[4] != 0 && *(g_61b8f8) < g_61b8f8[1])
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
                    *((long long *)(r12 + 64))();
                    v10 = v10[1];
                    if (v10 == 0)
                    {
                        break;
                    }
                    v9 = *(v10);
                }
                v11 = v5[1];
                v12 = &v12[2];
                if (v5[1] <= *(g_61b8f8) + 16)
                {
                    break;
                }
            }
        }
        v12 = *(v5);
    }
    if ((*(g_61b8f8) < g_61b8f8[1] || v5[8] == 0 || v5[4] == 0) && v12 < v11)
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

extern char g_61b910;

int sub_40a910()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_61b910 = v1;
    return v2;
}

int sub_40aba0()
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

int sub_411500()
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

extern unsigned int g_415068;

int sub_4047a0()
{
    unsigned int *v0;  // [bp-0x8]
    unsigned int *v2;  // rbx

    v0 = v2;
    *(v2) = 95;
    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x415068, 0x5));
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_415b8e;
extern unsigned int g_415ba6;
extern unsigned int g_415bd8;

int sub_40b550()
{
    unsigned long v0;  // [bp-0x20]
    void tmp_14;  // tmp #14
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // r13
    unsigned long v5;  // r12
    unsigned int v6;  // esi
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
    __fprintf_chk(v7, 0x1, 0x415b8e, v9[4]);
    __fprintf_chk(v7, 0x1, 0x415ba6, v17);
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
    __fprintf_chk(v7, 0x1, 0x415bd8, v19);
}

int sub_40a0b0()
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
    v5 = (unsigned int)sub_40ab40();
    v10 = sub_40aba0();
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
    if (v7 <= v11 || v10 <= 14)
    {
        return v10;
    }
}

extern unsigned int g_415130;

int sub_404fc0()
{
    char v1[39];  // r8
    char v2[39];  // rbp
    unsigned long long v3;  // rcx
    unsigned long long v4;  // rbx
    char v5;  // bl
    unsigned int *v6;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // rbx
    unsigned long long v9;  // rax

    v2 = v1;
    if (v1[4 + 5] != 0)
    {
        v6 = __errno_location();
        if (v1[4 + 3] != 0)
        {
            v8 = v2[4 + 6];
            if (v2[4 + 6] == 0)
            {
                *(v6) = 95;
            }
        }
        if (v1[4 + 3] == 0 || v2[4 + 6] != 0)
        {
            *(v6) = 95;
            v8 = (unsigned int)sub_40ddd0();
            error(0x0, *(v6), (unsigned long long)dcgettext(0x0, 0x415130, 0x5));
            v8 = v1[4 + 6];
        }
        v9 = v8 ^ 1;
        return v9;
    }
    v4 = v3;
    v5 = (char)v3 & v1[4 + 1];
    if (((char)v3 & v1[4 + 1]) == 0)
    {
        return 1;
    }
    *(__errno_location()) = 95;
    return rbx;
}

int sub_410180()
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
        sub_410330(); /* do not return */
    }
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

int sub_405170()
{
    struct v1;  // rdi
    struct v2;  // rbx
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
    return rax;
}

int sub_4102b0()
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
        sub_410330(); /* do not return */
    }
}

int sub_40aa80()
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
    v5 = sub_40ab40();
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

int sub_40d970()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4102e0();
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409480()
{
    unsigned long long v1[3];  // rbx
    unsigned long v2;  // rsi
    unsigned long v3;  // rdx
    struct v5;  // rbp
    unsigned long long v6;  // rax

    v1 = (unsigned long long)(unsigned int)sub_4100e0();
    v1[0] = v2;
    v1[2] = (unsigned int)sub_410310();
    v1[1] = v3;
    if (rbp != 0)
    {
        rbp = sub_40c0b0();
        v6 = 0;
        if (v1 != rbp)
        {
            free(v1[2]);
            free(v1);
            v6 = v5->field_10;
        }
        return v6;
    }
    sub_410330(); /* do not return */
}

extern unsigned int g_61b3b0;

int sub_4053d0()
{
    if (g_61b3b0 != -1)
    {
        return g_61b3b0;
    }
    g_61b3b0 = umask(0x0);
    umask(g_61b3b0);
    return g_61b3b0;
}

// int sub_411d8a()

int sub_40b080()
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
            if (v3 != 0 && v2 > 9)
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

int sub_40eaa0()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx
    unsigned int v3;  // ecx

    v0 = v2;
    if (v3 <= 2)
    {
        return sub_40e910();
    }
    sub_40e8f0(); /* do not return */
}

int sub_40af00()
{
    unsigned long long v1;  // rax

    v1 = sub_40af20();
    if (v1 != 0)
    {
        return v1;
    }
    sub_410330(); /* do not return */
}

// int sub_40a6b0()

// int sub_40de60()

int sub_40eaf0()
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

int sub_40a9c0()
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
            v5 = sub_4103e0();
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

int sub_40c340()
{
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

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
    char field_10;
} struct_3;

int sub_40be30()
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
        v7 = sub_40b170();
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
            sub_40b290();
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
                    v32 = sub_40bc30();
                    if (v32 != 0)
                    {
                        v33 = sub_40b170();
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
    if (v2 == 0 || ((char)(INVALID_IR) & 1) == 0 && v7 == 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && v33 != 0 && ((char)(INVALID_IR) & 1) != 0 && (((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && v32 != 0)
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

int sub_40e2f0()
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
    v8 = (unsigned int)sub_40aba0();
    v9 = sub_40aba0();
    if (v8 == v9)
    {
        v10 = memcmp((unsigned long long)(unsigned int)sub_40ab40(), (unsigned long long)(unsigned int)sub_40ab40(), v8);
        if (v10 == 0)
        {
            v11 = (unsigned long long)(unsigned int)sub_40aa60();
            v12 = (unsigned long long)(unsigned int)sub_40aa60();
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
    if (v8 != v9 || v10 != 0 || v13 == 0 && v14 == 0)
    {
        v15 = v5;
        return v15;
    }
}

extern unsigned int g_61ba94;

int sub_4103e0()
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
        if (g_61ba94 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_4103e0();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_61ba94 = -1;
                    }
                }
            }
            if ((unsigned int)v15 >= 0 || *(v12) != 22)
            {
                g_61ba94 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_4103e0();
        }
        if (((unsigned int)v15 < 0 || g_61ba94 < 0) && (g_61ba94 < 0 || *(v12) == 22) && (g_61ba94 < 0 || (unsigned int)v15 >= 0) && (g_61ba94 == -1 || g_61ba94 >= 0) && ((unsigned int)v15 >= 0 || g_61ba94 >= 0))
        {
            v13 = fcntl(v15, 0x1);
            if (v13 >= 0)
            {
                v14 = fcntl(v15, 0x2);
            }
            if (v14 == -1 || v13 < 0)
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

// int sub_40de70()

extern unsigned int g_415692;
extern unsigned long long stdout[7];

int sub_4047e0()
{
    unsigned long v2;  // rdx
    unsigned long long v3;  // rbx
    char *v5;  // rax

    __printf_chk(0x1, "%s -> %s", sub_40dcf0(), sub_40dcf0());
    if (v2 != 0)
    {
        v3 = (unsigned int)sub_40ddd0();
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415692, 0x5));
    }
    v5 = stdout[5];
    if (stdout[5] < stdout[6])
    {
        stdout[5] = stdout[5] + 1;
        *(v5) = 10;
        return v5;
    }
}

// int sub_40dfd0()

// int sub_40f450()

extern unsigned int g_417010;
extern unsigned int g_417020;
extern unsigned int g_61b3d0;

int sub_411d40()
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
    v4 = (unsigned int)sub_40e020();
    v5 = __errno_location();
    if (*(v5) != 0)
    {
        v6 = dcgettext(0x0, 0x417020, 0x5);
    }
    else
    {
        v6 = dcgettext(0x0, 0x417010, 0x5);
    }
    error(g_61b3d0, *(v5), v6);
}

int sub_40eb50()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4093d0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    struct v3;  // rdi

    v0 = v2;
    free(v3->field_10);
}

extern int512_t g_415c00;

int sub_40b290()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 0x415c00)
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
            *(v1) = &g_415c00;
            return 0;
        }
    }
    if (unknown)
    {
        return 1;
    }
}

int sub_40f3a0()
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
    if (v1[1] <= 999999999 || v1[1] - 1073741822 <= 1)
    {
        v3 = v1[3];
    }
    if (v1[1] <= 999999999 && v1[3] <= 999999999 || v1[1] <= 999999999 && v1[3] - 1073741822 <= 1 || v1[1] - 1073741822 <= 1 && v1[3] <= 999999999 || v1[1] - 1073741822 <= 1 && v1[3] - 1073741822 <= 1)
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
            v7 = (unsigned int)(v7 + rax);
        }
        v8 = 0;
        v9 = v7 == 1;
        v10 = rax + v5;
        return v10;
    }
    *(__errno_location()) = 22;
    return -18446744069414584321;
}

int sub_40c2d0()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // rsi

    return (0 | (unsigned int)sub_4115a0() ^ v0) % v1 >> 64;
}

int sub_40dea0()
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
    return sub_40d7d0();
}

// int sub_40ddd0()

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_40ff00()
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
    return sub_40fb00();
}

extern char g_61b468;
extern unsigned long long g_61b470;

int sub_403221()
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

    if (g_61b468 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_61b470 >= 0)
            {
                break;
            }
            g_61b470 = g_61b470 + 1;
            *((long long *)(6401600 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_61b468 = 1;
        return sub_4031cb();
    }
    return v4;
}

extern unsigned long long g_61ae30;

int sub_412908()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_61ae30;
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

extern unsigned int g_4156e5;
extern unsigned int g_4156f6;
extern unsigned int g_415707;

int sub_404b90()
{
    void tmp_2;  // tmp #2
    void tmp_14;  // tmp #14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0xa0]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v31;  // rdx
    unsigned long long v32;  // r9
    unsigned long long v33;  // r9
    unsigned long long v34;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // r13
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
            if (INVALID_IR)
            {
                v41 = __errno_location();
                v40 = 0;
                v44 = (unsigned int)sub_40ddd0();
                error(0x0, *(v41), (unsigned long long)dcgettext(0x0, 0x4156e5, 0x5));
            }
            else if (!(INVALID_IR))
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
                        else if ((v38 == v34 || v32 != 0) && (v39 != 0 || v32 != 0) && (v31 == 1 || (v31 & 15) == 0 || *(v30) != 0) && (v31 != 1 || v32 != 0 || *(v30) != 0) && (v31 == 1 || v39 == 0 || v32 != 0 || v38 != v34) && (v39 == 0 || *(v30) == 0 || v32 != 0 || v38 != v34))
                        {
                            v39 = sub_404ad0();
                            v33 = v4;
                        }
                        else if ((v38 == v34 || v32 != 0) && (v39 != 0 || v32 != 0) && (v31 == 1 || (v31 & 15) == 0 || *(v30) != 0) && (v31 != 1 || v32 != 0 || *(v30) != 0) && (v31 == 1 || v39 == 0 || v32 != 0 || v38 != v34) && (v39 == 0 || *(v30) == 0 || v32 != 0 || v38 != v34))
                        {
                            v39 = sub_40b000();
                            v33 = v4;
                        }
                    }
                    else
                    {
                        v39 = v36;
                    }
                    if ((((char)((unsigned int)v36 ^ 1) & v38 == v34) == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && (((tmp_14? v34 : tmp_2) != 0 & v3) == 0 || v36 != 0) && (((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || v38 != 0))
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
                            v42 = (unsigned int)sub_40ddd0();
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x415707, 0x5));
                        }
                    }
                    if (((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && v38 == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) == 0 && ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || v36 != 0 && ((tmp_14? v34 : tmp_2) != 0 & v3) != 0)
                    {
                        v37 += v38;
                        v0 = 1;
                        v4 = 0;
                    }
                    if (v36 == 0)
                    {
                        if (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0)
                        {
                            v39 = sub_40b000();
                            v33 = v4;
                            if (v37 != v39)
                            {
                                v40 = v36;
                                v43 = (unsigned int)sub_40ddd0();
                                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4156f6, 0x5));
                            }
                        }
                    }
                    else
                    {
                        if (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0)
                        {
                            v39 = sub_404ad0();
                            v33 = v4;
                            if ((char)v37 == 0)
                            {
                                v37 = v39;
                            }
                        }
                    }
                    if (v36 != 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && (char)v37 != 0 || v36 == 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && v37 == v39)
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
                    if (unknown)
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
                if (((v36 != 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && (char)v37 != 0 || v36 == 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && v37 == v39) && v0 != 0 && v38 == 0 || v34 == 0) && tmp_3 == v8)
                {
                    if (v39 == 0)
                    {
                        break;
                    }
                }
                else if (((v36 != 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && (char)v37 != 0 || v36 == 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && v37 == v39) && v0 != 0 && v38 == 0 || v34 == 0) && tmp_3 != v8)
                {
                    v39 = read(v26, v6, (v25 <= v7? *((long long *)&v9) : v7));
                    v8 = v39;
                    v27 = v39;
                }
                else if ((char)v37 == 0 && v36 != 0 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) || v36 == 0 && v37 != v39 && (v38 == 0 || ((char)((unsigned int)v36 ^ 1) & v38 == v34) != 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) || 9223372036854775807 - v38 < v37 && (((char)((unsigned int)v36 ^ 1) & v38 == v34) == 0 || ((tmp_14? v34 : tmp_2) != 0 & v3) != 0) && (((tmp_14? v34 : tmp_2) != 0 & v3) == 0 || v36 != 0) && (((tmp_14? v34 : tmp_2) != 0 & v3) != 0 || v38 != 0))
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
        if (!(INVALID_IR) && v39 != 0)
        {
            v40 = 1;
        }
        else if (!(INVALID_IR) || *(v41) != 4)
        {
            v45 = v40;
            return v45;
        }
    }
    v40 = 1;
    v45 = v40;
    return v45;
}

int sub_40baa0()
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

int sub_40ac50()
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
    return sub_40eaf0();
}

int sub_411340()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4112c0();
}

int sub_411470()
{
    return 0 - (unsigned int)(char)(sub_411450() != 0);
}

typedef struct struct_0 {
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
} struct_0;

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
    struct struct_2 *field_28;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_4;

int sub_409580()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x1038]
    void tmp_15;  // tmp #15
    unsigned long v1;  // [bp-0x1030]
    unsigned int v2;  // [bp-0x1028]
    unsigned int v3;  // [bp-0x1024]
    unsigned int v4;  // [bp-0x1020]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x1018]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0x1008]
    unsigned int v7;  // [bp-0xff0]
    unsigned long long v9;  // r13
    struct v10;  // rdi
    struct v11;  // r12
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
    struct v25;  // rbx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rdi
    unsigned long long v29;  // rcx
    unsigned long long v30;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v31;  // r9
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
                v23 =  amd64g_calculate_condition(0x0, 0x30, 0x18, rcx, cc_ndep);
                if (v23 == 0 && !(INVALID_IR))
                {
                    v24 = sub_410140();
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
                                if (*((int *)&v25->field_10) == (v7 & -2) && v27 == v30)
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
                            if ((unsigned int)v9 == 0 || *((int *)&v25->field_10) != (v7 & -2) || v27 != v30)
                            {
                                if ((v30 <= v27 || (unsigned int)v9 == 0) && (v11->field_8 <= v27 || (unsigned int)v9 != 0))
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
                                if (((unsigned int)v9 == 0 || v30 > v27) && ((unsigned int)v9 != 0 || v11->field_8 > v27))
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
                            if ((unsigned int)v28 >= v3 && (v30 > v27 || v11->field_8 > v27))
                            {
                                break;
                            }
                            v29 = &(&v5)[7 * v28];
                            v26 = (&v5)[2 + 7 * v28];
                            v27 = (&v5)[7 * v28];
                        }
                        while ((&v5)[7 * v28] <= 9223372036854775807 - (&v5)[2 + 7 * v28]);
                        if ((unsigned int)v28 < v3 || (unsigned int)v28 < v3)
                        {
                            __assert_fail(); /* do not return */
                        }
                        else if (((unsigned int)v9 == 0 || v30 > v27) && ((unsigned int)v9 != 0 || v11->field_8 > v27) && ((unsigned int)v9 == 0 || *((int *)&v25->field_10) != (v7 & -2) || v27 != v30))
                        {
                            v37 = 0;
                            if (v11->field_8 != 0)
                            {
                                break;
                            }
                        }
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
                    __assert_fail(); /* do not return */
                }
                if (INVALID_IR || v23 != 0)
                {
                    sub_410330(); /* do not return */
                }
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        if (v17 < 0 || v23 == 0 && v5 <= 9223372036854775807 - v6 && v11->field_18 <= !((unsigned long long)v3) && !(INVALID_IR) && v3 != 0)
        {
            v11->field_20 = 1;
            v37 = 0;
        }
    }
    return v37;
}

int sub_40ea70()
{
    unsigned int v0;  // [bp-0xc]
    unsigned int v2;  // edx
    unsigned int v3;  // ecx

    v0 = v2;
    if (v3 <= 2)
    {
        return sub_40e910();
    }
    sub_40e8f0(); /* do not return */
}

int sub_4114a0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_412760();
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

int sub_4093a0()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | *(v1)) % v2 >> 64;
}

int sub_410140()
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
            sub_410330(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned int g_416e4f;
extern unsigned int g_61b3d0;

int sub_410330()
{
    dcgettext(0x0, 0x416e4f, 0x5);
    error(g_61b3d0, 0x0, "%s");
}

int sub_40c0b0()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_40be30();
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

int sub_40c5a0()
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
    unsigned long long v7;  // [bp-0xa8]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // [bp-0x5b]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v33;  // r10
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long long v39;  // r11
    /*INVALID_EQUAL_UNDEFINED*/
undefined v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long long v44;  // rdx
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v77;  // rsi
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
            v26 = (unsigned int)sub_40c4a0();
            v27 = (unsigned int)sub_40c4a0();
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
                                    v77 = (char)((unsigned int)v39 == 2);
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
                                    v50 = v5;
                                    v5 = v41;
                                    v78 = 0;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v77 = 0;
                                    v55 = 0;
                                    v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1;
                                    v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) | v17;
                                    if (v17 != 0 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) != 0)
                                    {
                                        v78 = 0;
                                        v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                        v77 = (unsigned int)v39 == 2;
                                    }
                                    if (v17 == 0)
                                    {
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
                                        if (v79 > v76)
                                        {
                                            *((char *)(v29 + v76)) = 92;
                                        }
                                        v76 += 1;
                                        v80 += 1;
                                    }
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
                            v77 = 0;
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
                            v48 = v5;
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
                            v5 = 0;
                            v77 = (char)((unsigned int)v39 == 2);
                            v36 = 0;
                            v40 = 0;
                            break;
                            v80 += 1;
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
                        v77 = (unsigned int)v39 == 2;
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
                        v77 = (unsigned int)v39 == 2;
                    case 12:
                        v40 = 12;
                        v45 = 102;
                        v77 = (unsigned int)v39 == 2;
                    case 13:
                        v40 = 13;
                        v45 = 114;
                    case 32:
                        v40 = 32;
                        v77 = (char)((unsigned int)v39 == 2);
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v77 = (char)((unsigned int)v39 == 2);
                        v35 = 0;
                    case 35: case 126:
                        v77 = (unsigned int)v39 == 2;
                    case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                        v77 = (char)((unsigned int)v39 == 2);
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
                            v77 = (char)((unsigned int)v39 == 2);
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
                        if (v43 == 0)
                        {
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
                if (v76 == 0 && (v81 == 2 & v17) != 0)
                {
                    v3 = v27;
                    v2 = v26;
                    v1 = 0;
                    v76 = (unsigned int)sub_40c5a0();
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
                            v76 = (unsigned int)sub_40c5a0();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
            {
                v88 = v13;
                if (v13 != 0 && v86 != 0)
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
                v10 = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_4113c0();
                    v58 = v46;
                    if (v46 != -1 && v46 != -2 && v46 != 0)
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
                        v39 = (unsigned int)v10;
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
                        v77 = v4;
                        v78 = 0;
                    }
                    if (v46 == 0 || (unsigned int)v46 != 0 && v46 != -1 && v46 != -2)
                    {
                        v28 = v54;
                        v40 = v20;
                        v76 = v21;
                        v33 = (char)v19;
                        v29 = v11;
                        v77 = (unsigned int)v78 ^ 1;
                        v79 = v12;
                        v38 = v9;
                        v39 = (unsigned int)v10;
                        v77 = (char)((unsigned int)v78 ^ 1) & v4;
                    }
                }
                while (v28 <= 1);
                if (v46 == -1 || v46 == -2 || v46 == 0 || (unsigned int)v46 != 0)
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
                v87 = v77;
                *((unsigned long long *)&v4) = v4 & v87;
            }
            if (v15 != 1 || v77 != 0)
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
                    if ((v77 == 0 || v80 < v64) && (v77 == 0 || v63 == 0) && (v80 < v64 || v77 != 0))
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
            if ((v17 == 0 || v76 >= v79) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 || v76 >= v79) && (v17 == 0 || v15 != 1 || v77 != 0) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 || v15 != 1 || v77 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v6 != 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v76 == 0 && v78 == 0 && (v81 == 2 & v17) != 0)
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
        v18 = v84;
    }
}

typedef struct struct_0 {
    char padding_0[24];
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

extern unsigned int g_4139c8;
extern unsigned int g_41571b;

int sub_4051e0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // rsi
    unsigned int v2;  // r12d
    unsigned int v3;  // ebx
    char v4;  // r8b
    struct v5;  // rdi
    struct v6;  // r9
    struct v7;  // r9
    unsigned int v8;  // rdx
    unsigned int v9;  // eax
    unsigned int v10;  // ah
    unsigned int v11;  // eax
    unsigned long long v12;  // rax
    unsigned int *v13;  // rbx
    unsigned int v14;  // eax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned int *v18;  // r14
    unsigned int v19;  // ebx
    unsigned int *v20;  // r14
    unsigned int *v21;  // r15
    unsigned int v22;  // r14d
    unsigned int *v23;  // r15
    unsigned long long v24;  // r12
    unsigned long long v25;  // rax
    unsigned long long v26;  // r12

    v2 = v1;
    v3 = v8;
    if (v4 == 0)
    {
        if ((71776119061217535 & v5->field_18) != 0)
        {
            v1 = v6->field_18;
        }
        else if (v5->padding_25[1] != 0)
        {
            v1 = v7->field_18;
        }
        if ((71776119061217535 & v5->field_18) != 0 || v5->padding_25[1] != 0)
        {
            v9 = !((unsigned int)rdx);
            v10 = (char)(!((unsigned int)rdx) >> 8) | 14;
            v11 = rax & v1;
            if (((unsigned short)v11 & 4095) != 0)
            {
                v12 = sub_40c480();
                if (v12 != 0)
                {
                    v13 = __errno_location();
                    v14 = *(v13);
                    if (*(&((char *)&v5->field_18)[3]) != 0 || v14 != 22 && v14 != 1)
                    {
                        v24 = (unsigned int)sub_40ddd0();
                        error(0x0, *(v13), (unsigned long long)dcgettext(0x0, 0x41571b, 0x5));
                    }
                }
            }
        }
    }
    if (v8 != -1)
    {
        if (((71776119061217535 & v5->field_18) == 0 || v12 == 0 || ((unsigned short)v11 & 4095) == 0 || v4 != 0) && (v12 == 0 || v5->padding_25[1] == 0 || ((unsigned short)v11 & 4095) == 0 || v4 != 0))
        {
            v16 = fchown(v3);
            if (v16 != 0)
            {
                v22 = *(v21);
                v21 = __errno_location();
                if (v22 == 22 || *(v21) == 1)
                {
                    fchown(v3);
                    *(v23) = v22;
                }
            }
        }
    }
    else
    {
        if (((71776119061217535 & v5->field_18) == 0 || v12 == 0 || ((unsigned short)v11 & 4095) == 0 || v4 != 0) && (v12 == 0 || v5->padding_25[1] == 0 || ((unsigned short)v11 & 4095) == 0 || v4 != 0))
        {
            v15 = lchown(v2);
            if (v15 != 0)
            {
                v19 = *(v18);
                v18 = __errno_location();
                if (*(v18) == 1 || v19 == 22)
                {
                    lchown(v2);
                    *(v20) = v19;
                }
            }
        }
    }
    if (v12 == 0 || ((unsigned short)v11 & 4095) == 0 || v4 != 0 || (71776119061217535 & v5->field_18) == 0 && v5->padding_25[1] == 0)
    {
        if ((v8 == -1 || v16 == 0) && (v15 == 0 || v8 != -1))
        {
            v17 = 1;
        }
        if (v8 == -1 && v15 != 0 || v8 != -1 && v16 != 0)
        {
            v25 = sub_4051b0();
            v17 = 0;
            if (v25 == 0)
            {
                v26 = (unsigned int)sub_40ddd0();
                error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4139c8, 0x5));
            }
        }
    }
    if (v4 == 0 && v12 != 0 && ((unsigned short)v11 & 4095) != 0 && ((71776119061217535 & v5->field_18) != 0 || v5->padding_25[1] != 0) || (v8 == -1 || v16 != 0) && (v15 != 0 || v8 != -1) && ((71776119061217535 & v5->field_18) == 0 || v12 == 0 || ((unsigned short)v11 & 4095) == 0 || v4 != 0) && (v12 == 0 || v5->padding_25[1] == 0 || ((unsigned short)v11 & 4095) == 0 || v4 != 0) && v25 == 0)
    {
        v17 = 0 - (unsigned int)v5->padding_1c[3];
    }
    return v17;
}

extern unsigned long long g_61b8f8;

int sub_409500()
{
    g_61b8f8 = (unsigned int)sub_40b910();
    if (g_61b8f8 != 0)
    {
        return g_61b8f8;
    }
    sub_410330(); /* do not return */
}

int sub_411cc0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __explicit_bzero_chk();
}

int sub_40c310()
{
    unsigned long long v1[3];  // rdi
    unsigned long long v2[3];  // rsi

    if (v1[1] != v2[1] || v1[2] != v2[2])
    {
        return 0;
    }
}

extern unsigned long long g_61b908;

int sub_40a7f0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_61b908 = v1;
    return v2;
}

extern unsigned int g_61ba88;
extern unsigned int g_61ba8c;

int sub_40f8b0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0xd0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0xb8]
    unsigned long v4;  // [bp-0xb0]
    unsigned int v5;  // [bp-0x90]
    unsigned long v6;  // [bp-0x60]
    unsigned long v7;  // [bp-0x58]
    unsigned long v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x48]
    uint128_t v11[2];  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // rbx
    unsigned long long v13;  // rax
    unsigned int v14;  // edi
    unsigned long long v15;  // rax
    unsigned int *v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rbp

    if (v11 != 0)
    {
        v0 = stack_base + -200;
        *((int128_t *)&v1) = *((int128_t *)&v11);
        *((int128_t *)&v3) = *((int128_t *)&v11[2]);
        v12 = (unsigned int)sub_40f3a0();
        if ((unsigned int)v12 >= 0 && g_61ba88 >= 0 && (unsigned int)v12 == 2)
        {
            v13 = __lxstat();
            if (v13 == 0)
            {
                if ((long long)(&v1)[8] != 1073741822)
                {
                    v12 = 3;
                    if ((long long)(&v3)[8] == 1073741822)
                    {
                        v4 = v9;
                        v3 = v8;
                    }
                }
                else
                {
                    v12 = 3;
                    v1 = v6;
                    v2 = v7;
                }
            }
        }
    }
    else
    {
        v12 = 0;
        v0 = 0;
        if (g_61ba88 < 0)
        {
            g_61ba88 = -1;
        }
    }
    if (g_61ba88 >= 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (v13 == 0 || v11 == 0 || (unsigned int)v12 != 2))
    {
        v15 = utimensat(0xffffff9c, v14);
        if ((unsigned int)v15 > 0)
        {
            *(__errno_location()) = 38;
        }
        else
        {
            if (!(INVALID_IR))
            {
                v16 = __errno_location();
            }
            if (INVALID_IR || *(v16) != 38)
            {
                g_61ba8c = 1;
                g_61ba88 = 1;
                return stack_base + 0;
            }
        }
    }
    if ((v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2))
    {
        g_61ba88 = -1;
        if (v12 != 0 && v12 != 3)
        {
            v18 = __lxstat();
        }
    }
    if (g_61ba88 < 0 && v11 == 0 || v12 == 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2))
    {
        v17 = __lxstat();
    }
    if (v12 != 3 && v12 != 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2) && v18 == 0 && v0 != 0 || v12 == 3 && v12 != 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2) && v0 != 0)
    {
        v19 = sub_40f2d0();
    }
    if ((v12 != 3 && v12 != 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2) && v18 == 0 && v0 != 0 || v12 == 3 && v12 != 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2) && v0 != 0) && v19 == 0 || v12 != 3 && v12 != 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2) && v18 == 0 && v0 == 0 || v12 == 3 && v12 != 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2) && v0 == 0 || (g_61ba88 < 0 && v11 == 0 || v12 == 0 && (v11 == 0 || (unsigned int)v12 >= 0) && (g_61ba88 >= 0 || v11 != 0) && (g_61ba88 < 0 || *(v16) == 38 || (unsigned int)v15 > 0) && (g_61ba88 < 0 || !(INVALID_IR) || (unsigned int)v15 > 0) && (g_61ba88 < 0 || v13 == 0 || v11 == 0 || (unsigned int)v12 != 2)) && v17 == 0)
    {
        if (((unsigned short)v5 & 0xf000) != 0xa000)
        {
            v20 = (unsigned int)sub_40f460();
        }
        else
        {
            *(__errno_location()) = 38;
        }
    }
    if (unknown)
    {
        return stack_base + 0;
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[18];
    char field_16;
} struct_0;

typedef struct struct_1 {
    char padding_0[160];
    unsigned long long field_a0;
} struct_1;

extern char g_40424c;
extern char g_404257;
extern char g_40426d;
extern char g_4042a6;
extern char g_4042cc;
extern char g_4042fc;
extern char g_404329;
extern char g_404331;
extern char g_40433c;
extern char g_404364;
extern char g_404386;
extern char g_4043b2;
extern char g_4044a8;
extern char g_4044d3;
extern char g_4044f9;
extern unsigned int g_412a60;
extern unsigned int g_414d70;
extern unsigned int g_61b480;
extern char g_61b4c8;
extern char g_61b4c9;

int sub_4041b0()
{
    unsigned long v0;  // [bp-0x100]
    unsigned long v1;  // [bp-0xf8]
    unsigned long v2;  // [bp-0xf0]
    char v3;  // [bp-0xda]
    void *v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xc0]
    unsigned int v7;  // [bp-0xb0]
    unsigned long v8;  // [bp-0x38]
    unsigned long v9;  // [bp-0x30]
    unsigned long v10;  // [bp-0x28]
    unsigned long v11;  // [bp-0x20]
    unsigned long v12;  // [bp-0x18]
    unsigned long v13;  // [bp-0x10]
    unsigned long v14;  // [bp-0x8]
    unsigned int v16;  // eax
    unsigned long long v17;  // rdi
    unsigned long long *v18;  // rsi
    unsigned long v19;  // rdx
    char v20;  // al
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rax
    unsigned long long v24;  // rbx
    unsigned long long *v25;  // r12
    unsigned long long v27;  // rbx
    struct v28;  // r8
    unsigned long v29;  // rsi
    void *v32;  // r12
    unsigned long long v34;  // rax
    unsigned long v35;  // rdx
    unsigned long long v36;  // rax
    char *v37;  // rdi
    unsigned long long v40;  // r13
    char *v43;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v44;  // r13
    unsigned long long v45;  // rax
    unsigned long long v47;  // rcx
    unsigned long long v48;  // cc_dep1
    unsigned long long v49;  // cc_dep2
    unsigned long v50;  // d
    unsigned long long v52;  // rax
    struct v53;  // rdi
    unsigned long long *v54;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v55;  // r15
    struct v58;  // rsi
    unsigned int *v59;  // rdi
    unsigned long long v60;  // rcx
    unsigned long v61;  // d
    unsigned long long v62;  // rax

    v16 = 0;
    v25 = v17;
    v54 = v18;
    rsp = stack_base + -248;
    v2 = v19;
    v20 = v19 == 0;
    v3 = 0;
    if (rax < (unsigned int)v17)
    {
        if (v47 == 0)
        {
            if (v2 == 0 && (unsigned int)v17 != 1)
            {
                rsp = stack_base + -0x100;
                v22 = sub_4033e0();
                if (v22 == 0)
                {
                    if ((unsigned int)v17 != 2)
                    {
                        v27 = (unsigned int)sub_40ddd0();
                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x412a60, 0x5));
                    }
                }
                else
                {
                    v25 = (unsigned long long)((unsigned int)v17 - 1);
                    v2 = *((long long *)((char *)v54 + 0x8 * v25));
                }
            }
            if ((*((long long *)((char *)v54 + 0x8 * v25)) != 0 || v2 != 0) && (v2 != 0 || (unsigned int)v17 != 1) && (v2 != 0 || v22 != 0))
            {
                if ((unsigned int)v25 != 1)
                {
                    sub_405110();
                    rsp = stack_base + -0x100;
                    sub_405140();
                }
                v55 = 1;
                v1 = &((unsigned long long *)((char *)v18 + 0x8 * ((char *)&v25[-1] + 7)))[1];
                while (true)
                {
                    v32 = *(v54);
                    v5 = 0;
                    if (g_61b4c8 != 0)
                    {
                        rsp = rsp - 8;
                        v0 = &g_4044a8;
                        sub_40abd0();
                    }
                    rsp = rsp - 8;
                    v0 = &g_4042fc;
                    v34 = strlen(v32);
                    v35 = v34 + 1;
                    v36 = v34 + 24 & -0x10;
                    if (g_61b4c9 != 0)
                    {
                        rsp = rsp - v36 - 8;
                        v14 = &g_40424c;
                        v40 = memcpy(rsp - v36 + 15 & -0x10, v32, v35);
                        rsp = rsp - 8;
                        v13 = &g_404257;
                        sub_40abd0();
                        rsp = rsp - 8;
                        v12 = &g_40426d;
                        v44 = (unsigned int)sub_40af00();
                        rsp = rsp - 8;
                        v11 = &g_4042a6;
                        v45 = sub_4034a0();
                        if (v45 == 0)
                        {
                            v52 = g_61b4c9;
                            v55 = 0;
                        }
                        else
                        {
                            rsp = rsp - 8;
                            v9 = &g_4043b2;
                            v55 = (unsigned int)v55 & sub_403a50();
                            v52 = g_61b4c9;
                        }
                        if (v52 != 0)
                        {
                            v53 = v4;
                            if (v4 != 0)
                            {
                                while (true)
                                {
                                    v4 = v53->field_a0;
                                    rsp = rsp - 8;
                                    v8 = &g_4044d3;
                                    free(v53);
                                    v53 = v4;
                                    if (v4 == 0)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        v37 = rsp - v36 + 15 & -0x10;
                        rsp = rsp - v36 - 8;
                        v14 = &g_404329;
                        memcpy(v37, v32, v35);
                        rsp = rsp - 8;
                        v13 = &g_404331;
                        rsp = rsp - 8;
                        v12 = &g_40433c;
                        sub_40abd0();
                        v43 = (unsigned long long)(unsigned int)sub_40ab40();
                        while (v47 != 0)
                        {
                            v47 -= 1;
                            v48 = *(v43);
                            v49 = *(v37);
                            v37 = &v37[v50];
                            v43 = &v43[v50];
                            break;
                        }
                        if ((v48 > v49) - 0 - (v48 < v49) == 0)
                        {
                            rsp = rsp - 8;
                            v11 = &g_404364;
                            v44 = (unsigned int)sub_410310();
                        }
                        else
                        {
                            rsp = rsp - 8;
                            v11 = &g_4044f9;
                            v44 = (unsigned int)sub_40af00();
                        }
                    }
                    if (g_61b4c9 == 0 || v45 != 0)
                    {
                        rsp = rsp - 8;
                        v10 = &g_404386;
                        v55 &= sub_409280();
                    }
                    v54 = &v54[1];
                    rsp = rsp - 8;
                    v8 = &g_4042cc;
                    free(v44);
                    if (v1 == v54)
                    {
                        break;
                    }
                }
            }
        }
        else
        {
            if (v2 == 0)
            {
                if ((unsigned int)v17 <= 2)
                {
                    sub_4033e0();
                }
                else
                {
                    v24 = (unsigned int)sub_40ddd0();
                }
            }
            else
            {
                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x414d70, 0x5));
            }
        }
        if (v2 == 0 && (v47 == 0 || (unsigned int)v17 <= 2) && (*((long long *)((char *)v54 + 0x8 * v25)) == 0 || (unsigned int)v17 == 1 || v22 == 0 || v47 != 0) && ((unsigned int)v17 == 2 || (unsigned int)v17 == 1 || v47 != 0 || v22 != 0))
        {
            if (g_61b4c9 == 0)
            {
                if (v28->field_16 != 0 && v28->field_0 != 0 && strcmp(*(v18), *((long long *)&v6)) == 0 && v3 == 0 && ((unsigned short)v7 & 0xf000) == 0x8000)
                {
                    sub_40a6f0();
                    v58 = v28;
                    v59 = &g_61b480;
                    for (v60 = 18; v60 != 0; v58 = &(&v58->field_0)[v61])
                    {
                        v60 -= 1;
                        *(v59) = v58->field_0;
                        v59 = &v59[v61];
                    }
                    g_61b480 = 0;
                }
                v55 = (unsigned int)sub_409280();
            }
            else
            {
                v29 = "with --parents, the destination must be a directory";
            }
        }
    }
    else if ((unsigned int)v17 == 1)
    {
        v21 = (unsigned int)sub_40ddd0();
    }
    else
    {
        v29 = "missing file operand";
    }
    if (((unsigned int)v17 == 1 || rax < (unsigned int)v17) && (v2 == 0 || rax >= (unsigned int)v17) && (v47 != 0 || rax >= (unsigned int)v17) && (rax >= (unsigned int)v17 || (unsigned int)v17 > 2))
    {
        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v18, 0x5));
    }
    if ((unsigned int)v17 != 1 && rax >= (unsigned int)v17 || v2 == 0 && rax < (unsigned int)v17 && g_61b4c9 != 0 && (v47 == 0 || (unsigned int)v17 <= 2) && (*((long long *)((char *)v54 + 0x8 * v25)) == 0 || (unsigned int)v17 == 1 || v22 == 0 || v47 != 0) && ((unsigned int)v17 == 2 || (unsigned int)v17 == 1 || v47 != 0 || v22 != 0))
    {
        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v29, 0x5));
    }
    if (v47 == 0 && rax < (unsigned int)v17 && (*((long long *)((char *)v54 + 0x8 * v25)) != 0 || v2 != 0) && (v2 != 0 || (unsigned int)v17 != 1) && (v2 != 0 || v22 != 0) || g_61b4c9 == 0 && v2 == 0 && rax < (unsigned int)v17 && (v47 == 0 || (unsigned int)v17 <= 2) && (*((long long *)((char *)v54 + 0x8 * v25)) == 0 || (unsigned int)v17 == 1 || v22 == 0 || v47 != 0) && ((unsigned int)v17 == 2 || (unsigned int)v17 == 1 || v47 != 0 || v22 != 0))
    {
        v62 = v55;
        return v62;
    }
    if ((unsigned int)v17 != 1 && rax >= (unsigned int)v17 || ((unsigned int)v17 == 1 || rax < (unsigned int)v17) && (v2 == 0 || rax >= (unsigned int)v17) && (v47 != 0 || rax >= (unsigned int)v17) && (rax >= (unsigned int)v17 || (unsigned int)v17 > 2) || v2 == 0 && rax < (unsigned int)v17 && g_61b4c9 != 0 && (v47 == 0 || (unsigned int)v17 <= 2) && (*((long long *)((char *)v54 + 0x8 * v25)) == 0 || (unsigned int)v17 == 1 || v22 == 0 || v47 != 0) && ((unsigned int)v17 == 2 || (unsigned int)v17 == 1 || v47 != 0 || v22 != 0))
    {
        sub_403c80(); /* do not return */
    }
}

extern int512_t g_415c86;
extern int512_t g_415c8a;

int sub_40c4a0()
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
        v3 = sub_4115e0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_415c86 : 4283537);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_415c8a : 4283533);
            }
        }
    }
    if (unknown)
    {
        return ((unsigned int)v5 != 9? "'" : "\"");
    }
    if (v3[3] == 45 && v3[5] == 0 && v1 == v2 && (v3[1] & 223) == 84 && (v3[0] & 223) == 85 && (v3[2] & 223) == 70 && v3[4] == 56 || v4 == 71 && v3[3] == 56 && (v3[1] & 223) == 66 && v1 == v2 && v3[4] == 48 && v3[2] == 49 && (v3[0] & 223) != 85 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0 || v1 != v2)
    {
        v6 = v2;
        return v6;
    }
}

typedef struct struct_0 {
    char padding_0[28];
    unsigned int field_1c;
    char field_1d;
    char field_1e;
    char padding_1f[1];
    char field_20;
    char padding_21[5];
    char field_26;
} struct_0;

typedef struct struct_1 {
    uint128_t field_0;
    uint128_t field_10;
    unsigned int field_18;
    char padding_1c[4];
    uint128_t field_20;
    uint128_t field_30;
    uint128_t field_40;
    uint128_t field_50;
    uint128_t field_60;
    uint128_t field_70;
    uint128_t field_80;
    char field_90;
    char padding_91[7];
    unsigned long long field_98;
    unsigned long long field_a0;
} struct_1;

extern char g_4034f7;
extern char g_403502;
extern char g_403527;
extern char g_40354e;
extern char g_40358a;
extern char g_4035ad;
extern char g_4035d8;
extern char g_403658;
extern char g_403665;
extern char g_40367b;
extern char g_40372a;
extern char g_403774;
extern char g_4037a1;
extern char g_4037b5;
extern char g_40381c;
extern char g_403874;
extern char g_403888;
extern char g_4038a1;
extern char g_4038ea;
extern char g_403913;
extern char g_403985;
extern char g_403999;
extern char g_4039aa;
extern char g_4039cf;
extern char g_4039e3;
extern char g_4039eb;
extern char g_4039fc;
extern char g_403a1a;
extern char g_403a36;
extern unsigned int g_413960;
extern unsigned int g_413980;

int sub_4034a0()
{
    char v0;  // [bp-0x178]
    unsigned long long v1;  // [bp-0x168]
    char *v2;  // [bp-0x160]
    char v3;  // [bp-0x158]
    unsigned int v4;  // [bp-0x140]
    char v5;  // [bp-0xc8]
    void v6;  // [bp-0xb8]
    unsigned int v7;  // [bp-0xb0]
    void v8;  // [bp-0xa8]
    void v9;  // [bp-0x98]
    void v10;  // [bp-0x88]
    unsigned long v11;  // [bp-0x80]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // [bp-0x78]
    unsigned long v13;  // [bp-0x70]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v14;  // [bp-0x68]
    unsigned long v15;  // [bp-0x60]
    unsigned long v16;  // [bp-0x58]
    unsigned long v17;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // [bp-0x48]
    unsigned long v19;  // [bp-0x40]
    unsigned long v20;  // [bp-0x38]
    unsigned long v21;  // [bp-0x30]
    unsigned long v22;  // [bp-0x28]
    unsigned long v23;  // [bp-0x20]
    unsigned long v24;  // [bp-0x18]
    unsigned long v25;  // [bp-0x10]
    unsigned long v26;  // [bp-0x8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v28;  // rsi
    char *v29;  // r15
    void *v30;  // rdi
    unsigned long long v31;  // rax
    unsigned long long v32;  // r12
    char *v33;  // r14
    unsigned long long *v36;  // rcx
    unsigned long long v37;  // rax
    char *v38;  // rdi
    char v39[2];  // rbx
    unsigned long long v40;  // rax
    unsigned int v41;  // r14d
    struct v42;  // r9
    unsigned long long v43;  // rax
    unsigned int *v44;  // rax
    struct v45;  // r15
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // rax
    unsigned int v49;  // esi
    unsigned long long v50;  // r14
    unsigned long long v51;  // rax
    unsigned long long v52;  // rax
    char *v53;  // rdx
    unsigned long long v55;  // rax
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax
    char v58;  // cc_dep1
    unsigned long long v59;  // r8
    unsigned long long v60;  // r12
    unsigned long long v61;  // r12
    unsigned long long v62;  // r12
    unsigned long long v63;  // rbx
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rax
    unsigned long v66;  // rsi

    v29 = v28;
    v1 = v59;
    v31 = strlen(v30);
    rsp = &(&v0)[-1 * (v31 + 24 & -0x10) + -8];
    v26 = &g_4034f7;
    v32 = memcpy(&(&v0)[-1 * (v31 + 24 & -0x10) + 15] & -0x10, v30, v31 + 1);
    rsp = rsp - 8;
    v25 = &g_403502;
    v33 = (unsigned long long)(unsigned int)sub_40aa80();
    rsp = rsp - (&v33[24] & -0x10) - 8;
    v26 = &g_403527;
    memcpy(rsp - (&v33[24] & -0x10) + 15 & -0x10, v28, v33);
    *((char *)(v28 + v33)) = 0;
    *(v36) = 0;
    rsp = rsp - 8;
    v25 = &g_40354e;
    v37 = __xstat(0x1, (unsigned int)v28, (unsigned int)&v3);
    if (v37 != 0)
    {
        v38 = v28 + v29;
        v2 = v28 + v29;
        if (*((char *)(v28 + v29)) == 47)
        {
            do
            {
                v38 = &v38[1];
            }
            while (*(v38) == 47);
        }
        else
        {
            v38 = v2;
        }
        while (true)
        {
            rsp = rsp - 8;
            v24 = &g_40358a;
            v39 = strchr(v38, 0x2f);
            if (v39 == 0)
            {
                break;
            }
            v39[0] = 0;
            rsp = rsp - 8;
            v23 = &g_4035ad;
            v40 = __xstat(0x1, v4, (unsigned int)&v3);
            v41 = v40;
            if ((unsigned int)v40 != 0 || (v42->field_1c & -0x100) != 0)
            {
                rsp = rsp - 8;
                v22 = &g_403658;
                v43 = __xstat(0x1, (unsigned int)v2, (unsigned int)&v5);
                if (v43 != 0)
                {
                    rsp = rsp - 8;
                    v21 = &g_403665;
                    v44 = __errno_location();
                    v59 = *(v44);
                }
                else if (((unsigned short)v7 & 0xf000) != 0x4000)
                {
                    v59 = 20;
                }
                if (v43 == 0 && ((unsigned short)v7 & 0xf000) == 0x4000 || *(v44) == 0 && v43 != 0)
                {
                    rsp = rsp - 8;
                    v21 = &g_40367b;
                    v45 = (unsigned long long)(unsigned int)sub_4100e0();
                    v45->field_0 = *((int128_t *)&v5);
                    v45->field_10 = (int128_t)v6;
                    *((int128_t *)&v45->field_18) = (int128_t)v8;
                    v45->field_20 = (int128_t)v9;
                    v45->field_30 = (int128_t)v10;
                    v45->field_40 = (int128_t)v12;
                    v45->field_50 = (int128_t)v14;
                    v45->field_60 = *((int128_t *)&(&v24)[-8]);
                    v45->field_70 = (int128_t)v18;
                    *((char *)&v45->field_80) = 0;
                    *((char *[2])&((char *)&v45->field_80)[8]) = &v39[-1 * (unsigned long long)v4];
                    v46 = *(v36);
                    *(v36) = v45;
                    *((unsigned long long *)&v45->field_90) = v46;
                    if (v41 != 0)
                    {
                        rsp = rsp - 8;
                        v20 = &g_40372a;
                        v47 = sub_404fc0();
                        if (v47 != 0)
                        {
                            v49 = *((int *)&((char *)&v45->field_10)[8]);
                            *((char *)v1) = 1;
                            if (*(&((char *)&v42->field_1c)[1]) != 0)
                            {
                                v50 = v49 & 63;
                                v51 = !(v49 & 63);
                            }
                            else
                            {
                                v50 = 0;
                                v51 = -18446744069414584321;
                                if (*(&((char *)&v42->field_1c)[2]) != 0)
                                {
                                    v50 = v49 & 18;
                                    v51 = !(v49 & 18);
                                }
                            }
                            v28 = (v42->field_1d != 0? 511 : (unsigned int)rsi) & v51 & 4095;
                            rsp = rsp - 8;
                            v19 = &g_403774;
                            v52 = mkdir((unsigned int)v28, v28);
                            if (v52 == 0)
                            {
                                if (v53 != 0)
                                {
                                    rsp = rsp - 8;
                                    v18 = &g_4037a1;
                                    __printf_chk(0x1, v53);
                                }
                                rsp = rsp - 8;
                                v17 = &g_4037b5;
                                v55 = __lxstat();
                                if (v55 != 0)
                                {
                                    rsp = rsp - 8;
                                    v16 = &g_4039cf;
                                    v61 = (unsigned int)sub_40ddd0();
                                }
                                else if (*(&((char *)&v42->field_1c)[2]) == 0)
                                {
                                    if (((unsigned int)v50 & !(v4)) != 0)
                                    {
                                        rsp = rsp - 8;
                                        v16 = &g_403913;
                                        v50 = (unsigned int)v50 & !(sub_4053d0());
                                        if ((v50 & !(v4)) != 0)
                                        {
                                            *((char *)&v45->field_80) = 1;
                                            *((unsigned long long *)&((char *)&v45->field_10)[8]) = v50 | v4;
                                        }
                                    }
                                }
                            }
                            else
                            {
                                rsp = rsp - 8;
                                v18 = &g_403a1a;
                                v60 = (unsigned int)sub_40ddd0();
                            }
                        }
                    }
                }
                if ((v43 == 0 || *(v44) != 0) && (v43 != 0 || ((unsigned short)v7 & 0xf000) != 0x4000))
                {
                    v1 = v59;
                    rsp = rsp - 8;
                    v13 = &g_403874;
                    v63 = (unsigned int)sub_40ddd0();
                    rsp = rsp - 8;
                    v12 = &g_403888;
                    rsp = rsp - 8;
                    v11 = &g_4038a1;
                    error(0x0, v1, (unsigned long long)dcgettext(0x0, 0x413960, 0x5));
                    v65 = 0;
                }
            }
            if (((unsigned int)v40 == 0 || v41 == 0) && ((v42->field_1c & -0x100) == 0 || v41 == 0) && ((unsigned int)v40 == 0 || *(v44) == 0 || v43 == 0) && (*(v44) == 0 || (v42->field_1c & -0x100) == 0 || v43 == 0) && ((unsigned int)v40 == 0 || ((unsigned short)v7 & 0xf000) == 0x4000 || v43 != 0) && ((v42->field_1c & -0x100) == 0 || ((unsigned short)v7 & 0xf000) == 0x4000 || v43 != 0))
            {
                rsp = rsp - 8;
                v20 = &g_4035d8;
                v48 = sub_404fc0();
                if (((unsigned short)v4 & 0xf000) == 0x4000 && v48 != 0)
                {
                    *((char *)v1) = 0;
                }
            }
            if ((v52 == 0 && v47 != 0 && v41 != 0 && (*(v44) == 0 || v43 == 0) && (((unsigned short)v7 & 0xf000) == 0x4000 || v43 != 0) && ((unsigned int)v40 != 0 || (v42->field_1c & -0x100) != 0) && v55 == 0 && *(&((char *)&v42->field_1c)[2]) == 0 && ((unsigned int)v50 & !(v4)) != 0 && (v50 & !(v4)) == 0 || v52 == 0 && v47 != 0 && v41 != 0 && (*(v44) == 0 || v43 == 0) && (((unsigned short)v7 & 0xf000) == 0x4000 || v43 != 0) && ((unsigned int)v40 != 0 || (v42->field_1c & -0x100) != 0) && v55 == 0 && *(&((char *)&v42->field_1c)[2]) == 0 && ((unsigned int)v50 & !(v4)) == 0) && ((unsigned short)v4 & 448) != 448)
            {
                *((char *)&v45->field_80) = 1;
                *((unsigned long long *)&((char *)&v45->field_10)[8]) = v50 | v4;
            }
            if (unknown)
            {
                rsp = rsp - 8;
                v16 = &g_40381c;
                v56 = chmod(v4 | 448, v4 | 448);
                if (v56 != 0)
                {
                    rsp = rsp - 8;
                    v15 = &g_403a36;
                    v62 = (unsigned int)sub_40ddd0();
                }
            }
            if (unknown)
            {
                rsp = rsp - 8;
                v14 = &g_4039e3;
                rsp = rsp - 8;
                v13 = &g_4039eb;
                v66 = (unsigned int)*(__errno_location());
                rsp = rsp - 8;
                v12 = &g_4039fc;
                error(0x0, v66, (unsigned long long)dcgettext(0x0, v66, 0x5));
                return 0;
            }
            if (unknown)
            {
                rsp = rsp - 8;
                v19 = &g_4038ea;
                v57 = sub_405090();
            }
            if (unknown)
            {
                v58 = v39[1];
                v38 = &v39[1];
                v39[0] = 47;
                do
                {
                    v38 = &v38[1];
                }
                while (*(v38) == 47);
            }
        }
        if (v57 == 0 && (0xff000000ff00 & *((long long *)&v42->field_1d)) != 0 && v42->padding_21[2] != 0 || v39 != 0 && ((unsigned int)v40 == 0 || v41 == 0) && ((v42->field_1c & -0x100) == 0 || v41 == 0) && ((unsigned int)v40 == 0 || *(v44) == 0 || v43 == 0) && (*(v44) == 0 || (v42->field_1c & -0x100) == 0 || v43 == 0) && ((unsigned int)v40 == 0 || ((unsigned short)v7 & 0xf000) == 0x4000 || v43 != 0) && ((v42->field_1c & -0x100) == 0 || ((unsigned short)v7 & 0xf000) == 0x4000 || v43 != 0) && v48 == 0 || v41 != 0 && v47 == 0)
        {
            return 0;
        }
        else if (v48 != 0 && v39 != 0 && ((unsigned int)v40 == 0 || v41 == 0) && ((v42->field_1c & -0x100) == 0 || v41 == 0) && ((unsigned int)v40 == 0 || *(v44) == 0 || v43 == 0) && (*(v44) == 0 || (v42->field_1c & -0x100) == 0 || v43 == 0) && ((unsigned int)v40 == 0 || ((unsigned short)v7 & 0xf000) == 0x4000 || v43 != 0) && ((v42->field_1c & -0x100) == 0 || ((unsigned short)v7 & 0xf000) == 0x4000 || v43 != 0) && ((unsigned short)v4 & 0xf000) != 0x4000)
        {
            rsp = rsp - 8;
            v13 = &g_403985;
            v64 = (unsigned int)sub_40ddd0();
            rsp = rsp - 8;
            v12 = &g_403999;
            rsp = rsp - 8;
            v11 = &g_4039aa;
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x413980, 0x5));
        }
        else if (true)
        {
            v65 = 1;
        }
        else if (v39 != 0 && (v43 == 0 || *(v44) != 0) && ((unsigned int)v40 != 0 || (v42->field_1c & -0x100) != 0) && (v43 != 0 || ((unsigned short)v7 & 0xf000) != 0x4000))
        {
            return v65;
        }
    }
    else if (((unsigned short)v4 & 0xf000) == 0x4000)
    {
        *((char *)v1) = 0;
    }
    if (((unsigned short)v4 & 0xf000) == 0x4000 || v37 != 0)
    {
        v65 = 1;
        return v65;
    }
    if (((unsigned short)v4 & 0xf000) != 0x4000 || v37 != 0)
    {
        rsp = rsp - 8;
        v13 = &g_403985;
        v64 = (unsigned int)sub_40ddd0();
        rsp = rsp - 8;
        v12 = &g_403999;
        rsp = rsp - 8;
        v11 = &g_4039aa;
        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x413980, 0x5));
        return 0;
    }
}

int sub_4113a0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_410cf0();
}

int sub_404740()
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

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

double sub_40b170()
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
        v7 = sub_40b140();
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
        if ((v15->field_8 == 0 || v10 == 0 || (char)v20 == 0) && (v15->field_8 == 0 || (char)v20 == 0 || v8 != v1) && (v8 == v1 || v10 != 0 || v15->field_8 != 0))
        {
            return v21;
        }
    }
    if (*(v7) == 0 || v10 == 0 && v15->field_8 == 0 && v8 != v1 || v10 == 0 && v8 != v1 && v1 != *(v11))
    {
        return v18;
    }
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

int sub_40c0f0()
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
    if (sub_40b170() != 0)
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
                sub_40b290();
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
                    if (sub_40bc30() == 0)
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

// int sub_40f8a0()

int sub_40eb40()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | *(v1)) % v2 >> 64;
}

// int sub_40eae0()

int sub_40b140()
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

extern int512_t g_415b00;

int sub_40a6ba()
{
    return *((int *)&((char *)&g_415b00)[4 * (unsigned long long)(unsigned int)sub_409ff0()]);
}

// int sub_40dbd0()

// int sub_412750()

extern unsigned long long g_416f77;

int sub_4113c0()
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
        v5 = &g_416f77;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_411540() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern unsigned int g_61ba88;
extern unsigned int g_61ba8c;

int sub_40f460()
{
    unsigned long long v0;  // [bp-0x120]
    void tmp_77;  // tmp #77
    void tmp_84;  // tmp #84
    void v1;  // [bp-0x118]
    void v2;  // [bp-0x108]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0xf8]
    unsigned long v4;  // [bp-0xf0]
    unsigned long v5;  // [bp-0xe8]
    unsigned long v6;  // [bp-0xe0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0xd8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0xd0]
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v24;  // r13
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
        v24 = (unsigned int)sub_40f3a0();
    }
    else
    {
        v0 = 0;
        v24 = 0;
    }
    if (v21 == 0 || (unsigned int)v24 >= 0)
    {
        if (v19 < 0)
        {
            if (v17 == 0)
            {
                *(__errno_location()) = 9;
            }
            if (g_61ba8c >= 0 && v17 != 0 && (v22 == 0 || (unsigned int)v24 != 2))
            {
                v25 = utimensat(0xffffff9c, v18);
                v27 = v25;
                v28 = v25;
            }
        }
        if (g_61ba8c >= 0)
        {
            if ((v19 >= 0 || v17 != 0) && (unsigned int)v24 == 2)
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
            if (v19 >= 0 && (v22 == 0 || (unsigned int)v24 != 2))
            {
                v26 = futimens(v19);
                v27 = v26;
                v29 = v26;
            }
        }
    }
    if ((g_61ba8c >= 0 && v19 >= 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v26 <= 0 || v19 < 0 && g_61ba8c >= 0 && v17 != 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v25 <= 0) && !(INVALID_IR))
    {
        v30 = __errno_location();
    }
    if (g_61ba8c >= 0 && v19 >= 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v26 > 0 || v19 < 0 && g_61ba8c >= 0 && v17 != 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v25 > 0)
    {
        *(__errno_location()) = 38;
    }
    if ((g_61ba8c >= 0 && v19 >= 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v26 <= 0 || v19 < 0 && g_61ba8c >= 0 && v17 != 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v25 <= 0) && !(INVALID_IR) && *(v30) != 38 || (g_61ba8c >= 0 && v19 >= 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v26 <= 0 || v19 < 0 && g_61ba8c >= 0 && v17 != 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v25 <= 0) && INVALID_IR)
    {
        g_61ba8c = 1;
    }
    if ((g_61ba8c >= 0 && v19 >= 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v26 <= 0 || v19 < 0 && g_61ba8c >= 0 && v17 != 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v25 <= 0) && !(INVALID_IR) && *(v30) == 38 || g_61ba8c >= 0 && v19 >= 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v26 > 0 || v19 < 0 && g_61ba8c >= 0 && v17 != 0 && (v21 == 0 || (unsigned int)v24 >= 0) && (v22 == 0 || (unsigned int)v24 != 2) && (unsigned int)v25 > 0 || (v21 == 0 && v19 >= 0 || v21 == 0 && v17 != 0 || (unsigned int)v24 >= 0 && v19 >= 0 || (unsigned int)v24 >= 0 && v17 != 0) && g_61ba8c < 0)
    {
        g_61ba8c = -1;
        g_61ba88 = -1;
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
    if (unknown)
    {
        v27 = -18446744069414584321;
    }
    if (unknown)
    {
        v27 = 0;
        v32 = sub_40f2d0();
    }
    if (unknown)
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
    if (unknown)
    {
        v34 = 0;
    }
    if (unknown)
    {
        v27 = futimesat(0xffffff9c, v18);
    }
    if (unknown)
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
                v46 = (unsigned int)v45 & rdx;
                if (v12 - *((long long *)v34) == 1 && v37 != 0 && v13 == 0)
                {
                    v8 = 0;
                }
                if (v15 == 0 && v46 != 0)
                {
                    v10 = 0;
                }
                if ((v13 == 0 || v15 == 0) && (v12 - *((long long *)v34) == 1 || v15 == 0) && (v13 == 0 || v46 != 0) && (v12 - *((long long *)v34) == 1 || v46 != 0) && (v15 == 0 || v37 != 0) && (v37 != 0 || v46 != 0))
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

int sub_411360()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_410cf0();
}

int sub_40a710()
{
    char *v1;  // rsi

    if (*(v1) == 0 || v1 == 0)
    {
        return 2;
    }
}

int sub_40b130()
{
    unsigned long v1;  // rax

    return v1;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_40b470()
{
    struct v1;  // rdi

    return v1->field_18;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
} struct_0;

extern unsigned int g_41295d;

int sub_4033e0()
{
    unsigned long v1;  // rdi
    struct v2;  // rsi
    unsigned int *v3;  // rax
    unsigned int v4;  // r12d
    char *v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rbx

    v3 = __xstat(0x1, v1, (unsigned int)v2);
    if (!((unsigned int)v3 == 0))
    {
        v3 = __errno_location();
        v4 = *(v3);
        if (*(v3) == 0)
        {
            v3 = (unsigned int)(char)((v2->field_18 & 0xf000) == 0x4000);
        }
        else
        {
            if (v4 == 2)
            {
                *(v5) = 1;
                v6 = 0;
            }
            else
            {
                v7 = (unsigned int)sub_40ddd0();
                error(0x1, v4, (unsigned long long)dcgettext(0x0, 0x41295d, 0x5));
            }
        }
    }
    else if (((unsigned short)v2->field_18 & 0xf000) == 0x4000)
    {
        v6 = 1;
    }
    if ((unsigned int)v3 == 0 && ((unsigned short)v2->field_18 & 0xf000) != 0x4000 || *(v3) == 0 && (unsigned int)v3 != 0)
    {
        v6 = v3 & 1;
    }
    if ((unsigned int)v3 == 0 || *(v3) == 0 || v4 == 2)
    {
        return v6;
    }
}

// int sub_40dca0()

// int sub_40df80()

// int sub_4098e0()

// int sub_40dcb0()

int sub_40b120()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_40c440()
{
    unsigned long long v2;  // rax

    if (sub_411440() == 0)
    {
        v2 = sub_411470();
    }
    else
    {
        v2 = -18446744069414584322;
    }
    return v2;
}

int sub_40ac20()
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

int sub_40a730()
{
    char *v1;  // rsi
    char *v2;  // rax

    if (*(v1) == 0 || v1 == 0)
    {
        v2 = getenv("VERSION_CONTROL");
    }
    if (v2 == 0 && *(v1) == 0 || v2 == 0 && v1 == 0 || *(v1) == 0 && *(v2) == 0 || v1 == 0 && *(v2) == 0)
    {
        return 2;
    }
}

extern unsigned int g_61b434;
extern unsigned int g_61b438;
extern unsigned int g_61b43c;
extern unsigned int g_61baa0;
extern unsigned int g_61baa4;
extern unsigned int g_61baa8;
extern unsigned long long g_61bab0;
extern unsigned long long g_61bae0;

int sub_4112c0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_61baa0 = g_61b43c;
    g_61baa4 = g_61b438;
    v1 = (unsigned int)v2;
    v0 = &g_61baa0;
    g_61b43c = g_61baa0;
    g_61bae0 = g_61bab0;
    g_61b434 = g_61baa8;
    return sub_410cf0();
}

extern unsigned int g_415108;
extern unsigned int g_4156b3;

int sub_4049c0()
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
    if ((unsigned int)sub_409900() >= 0)
    {
        v6 = INVALID_IR & v2;
        if ((INVALID_IR & v2) == 0)
        {
            return 1;
        }
        v9 = (unsigned int)sub_40ddd0();
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4156b3, 0x5));
        return rbx;
    }
    v7 = (unsigned int)sub_40dcf0();
    v8 = (unsigned int)sub_40dcf0();
    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x415108, 0x5));
    return 0;
}

extern char g_61ba40;

int sub_40da30()
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
    v3 = (v2 == 0? &g_61ba40 : v2);
    *((int *)(tmp_11? &g_61ba40 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_61ba40;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_61ba40;
        abort(); /* do not return */
    }
}

extern int512_t g_61ba40;

int sub_40d9b0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_61ba40 : v1));
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

extern unsigned long long g_61b8e8;
extern unsigned long long g_61b8f0;

int sub_409280()
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    char v4;  // [bp-0x9]
    struct v6;  // rcx
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
                g_61b8f0 = v9;
                g_61b8e8 = v10;
                v1 = stack_base + -9;
                v0 = 1;
                return sub_405400();
            }
        }
    }
    else
    {
        __assert_fail(); /* do not return */
    }
}

extern unsigned long long stdin;

int sub_410370()
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
INVALID_CALL; //        v3 =  amd64g_calculate_condition(0xf, 0x13, Call (target: 0x402750, prototype: () -> None, args: []), 0x0, cc_ndep);
    }
    free(v0);
    v6 = v3;
    return v6;
}

int sub_40a6f0()
{
    unsigned long long v1;  // rax

    v1 = sub_40a1e0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_410330(); /* do not return */
}

int sub_40e040()
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
            if (v15 == 0 || v23 == 2 && (v15 & -2) == 0 && v22 != 0 && *(v19) != 75)
            {
                v0 = v19;
                v24 = strlen(v13);
                v25 = strlen(v14);
            }
            if (v13[v24 + -1] == 47 && v25 != 0 && v24 != 0 && (v15 == 0 || v23 == 2) && (v15 == 0 || (v15 & -2) == 0) && (v15 == 0 || v22 != 0) && (v15 == 0 || *(v19) != 75) || v14[v25 + -1] == 47 && v25 != 0 && v24 != 0 && v13[v24 + -1] != 47 && (v15 == 0 || v23 == 2) && (v15 == 0 || (v15 & -2) == 0) && (v15 == 0 || v22 != 0) && (v15 == 0 || *(v19) != 75))
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

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_61b418;
extern uint128_t g_61b420;
extern unsigned int g_61b430;
extern int512_t g_61b940;

int sub_40d7d0()
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
    v17 = g_61b418;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_61b430 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_61b418 != 6403104)
            {
                v16 = sub_410140();
                g_61b418 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_410140();
                v17 = v15;
                g_61b418 = v15;
                *(v15) = g_61b420;
            }
            memset(&v17[(long long)(int)g_61b430], 0x0, (int)((unsigned int)v13 + 1 - g_61b430) * 16);
            g_61b430 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_410330(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_61b430 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_40c5a0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6404416)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4100e0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_40c5a0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_410520()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_410590();
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b750()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_40b140();
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

int sub_40dd60()
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
    return sub_40d7d0();
}

extern unsigned long long program_invocation_short_name;

int sub_4031cb()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned int field_18;
    char padding_1c[44];
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[40];
    char field_90;
    char padding_91[7];
    unsigned long long field_98;
    unsigned long long field_a0;
} struct_0;

extern char g_403a92;
extern char g_403b29;
extern char g_403b41;
extern char g_403b55;
extern char g_403b5d;
extern char g_403b6e;
extern char g_403b86;
extern char g_403b96;
extern char g_403bb1;
extern char g_403bd6;
extern char g_403bf3;
extern char g_403c08;
extern char g_403c1c;
extern char g_403c24;
extern char g_403c35;
extern char g_403c65;
extern unsigned int g_4139a8;

int sub_403a50()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x40]
    unsigned long v4;  // [bp-0x38]
    unsigned long v5;  // [bp-0x30]
    unsigned long v6;  // [bp-0x28]
    unsigned long v7;  // [bp-0x20]
    unsigned long v8;  // [bp-0x18]
    unsigned long v9;  // [bp-0x10]
    unsigned long v10;  // [bp-0x8]
    char v12[32];  // rcx
    char v13[32];  // r13
    unsigned long long v14;  // rdx
    void *v15;  // rdi
    unsigned long long v16;  // rax
    char *v18;  // r12
    char v19;  // cc_dep1
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // r14
    unsigned long long v23;  // rax
    unsigned long v24;  // rsi
    unsigned long long v25;  // rax
    struct v26;  // rbx
    unsigned long long v27;  // r12
    unsigned long long v28;  // r12
    unsigned long long v29;  // r12
    unsigned long v30;  // rsi
    unsigned long v31;  // rsi
    unsigned long long v32;  // rax

    v13 = v12;
    v26 = v14;
    v16 = strlen(v15);
    rsp = &(&v0)[-1 * (v16 + 24 & -0x10) + -8];
    v10 = &g_403a92;
    if (v14 != 0)
    {
        v18 = memcpy(&(&v0)[-1 * (v16 + 24 & -0x10) + 15] & -0x10, v15, v16 + 1);
        while (true)
        {
            v19 = v12[3 + 7];
            v18[v26->field_98] = 0;
            if (v19 != 0)
            {
                v0 = v26->field_48;
                v1 = v26->field_50;
                v2 = v26->field_58;
                v3 = v26->field_60;
                rsp = rsp - 8;
                v9 = &g_403b29;
                v20 = sub_40f8a0();
                if (v20 != 0)
                {
                    v22 = 0;
                    rsp = rsp - 8;
                    v7 = &g_403b41;
                    v27 = (unsigned int)sub_40ddd0();
                    rsp = rsp - 8;
                    v6 = &g_403b55;
                    rsp = rsp - 8;
                    v5 = &g_403b5d;
                    v30 = (unsigned int)*(__errno_location());
                    rsp = rsp - 8;
                    v4 = &g_403b6e;
                    error(0x0, v30, (unsigned long long)dcgettext(0x0, 0x4139a8, 0x5));
                }
            }
            if (v20 == 0 || v19 == 0)
            {
                if (v12[3 + 5] != 0)
                {
                    rsp = rsp - 8;
                    v8 = &g_403b86;
                    v21 = lchown((unsigned int)v18);
                    if (v21 != 0)
                    {
                        rsp = rsp - 8;
                        v7 = &g_403b96;
                        v22 = (unsigned int)sub_4051b0();
                        if ((char)v22 != 0)
                        {
                            rsp = rsp - 8;
                            v6 = &g_403bb1;
                            lchown((unsigned int)v18);
                            v22 = v13[3 + 6];
                        }
                        else
                        {
                            rsp = rsp - 8;
                            v6 = &g_403c65;
                            v29 = (unsigned int)sub_40ddd0();
                        }
                    }
                }
                if (v21 == 0 || v12[3 + 5] == 0)
                {
                    v22 = v13[3 + 6];
                }
                if (v13[3 + 6] == 0 || v21 != 0 && v12[3 + 5] != 0)
                {
                    if (v26->field_90 != 0 && (v21 == 0 || v13[3 + 6] == 0 || v12[3 + 5] == 0) && (v21 == 0 || v12[3 + 5] == 0 || (char)v22 != 0))
                    {
                        v24 = v26->field_18;
                        rsp = rsp - 8;
                        v8 = &g_403bf3;
                        v25 = chmod((unsigned int)v18, v24);
                        if (v25 != 0)
                        {
                            rsp = rsp - 8;
                            v7 = &g_403c08;
                            v28 = (unsigned int)sub_40ddd0();
                        }
                    }
                    if (((char)v22 == 0 || v25 != 0) && ((char)v22 == 0 || v26->field_90 != 0) && (v25 != 0 || v21 != 0) && (v25 != 0 || v12[3 + 5] != 0) && (v21 != 0 || v26->field_90 != 0) && (v26->field_90 != 0 || v12[3 + 5] != 0) && ((char)v22 == 0 || v21 == 0 || v13[3 + 6] == 0 || v12[3 + 5] == 0))
                    {
                        rsp = rsp - 8;
                        v6 = &g_403c1c;
                        rsp = rsp - 8;
                        v5 = &g_403c24;
                        v31 = (unsigned int)*(__errno_location());
                        rsp = rsp - 8;
                        v4 = &g_403c35;
                        error(0x0, v31, (unsigned long long)dcgettext(0x0, v31, 0x5));
                    }
                }
                if ((v21 != 0 || v13[3 + 6] != 0) && (v13[3 + 6] != 0 || v12[3 + 5] != 0) && (v21 == 0 || v12[3 + 5] == 0 || (char)v22 != 0) && (v21 == 0 || v12[3 + 5] == 0 || v13[3 + 6] != 0))
                {
                    rsp = rsp - 8;
                    v8 = &g_403bd6;
                    v23 = sub_409b40();
                    if (v23 != 0)
                    {
                        v22 = 0;
                    }
                }
                if (v25 == 0 && v21 == 0 && v13[3 + 6] == 0 || v25 == 0 && v13[3 + 6] == 0 && v12[3 + 5] == 0 || v21 == 0 && v26->field_90 == 0 && v13[3 + 6] == 0 || v26->field_90 == 0 && v13[3 + 6] == 0 && v12[3 + 5] == 0 || v21 == 0 && v23 == 0 && v13[3 + 6] != 0 || v23 == 0 && v12[3 + 5] == 0 && v13[3 + 6] != 0 || v25 == 0 && v13[3 + 6] == 0 && (char)v22 != 0 && v21 != 0 && v12[3 + 5] != 0 || v26->field_90 == 0 && v13[3 + 6] == 0 && (char)v22 != 0 && v21 != 0 && v12[3 + 5] != 0 || v23 == 0 && (char)v22 != 0 && v21 != 0 && v13[3 + 6] != 0 && v12[3 + 5] != 0)
                {
                    v18[v26->field_98] = 47;
                    v26 = v26->field_a0;
                    if (v26 == 0)
                    {
                        break;
                    }
                }
            }
        }
        if (v25 == 0 || v26->field_90 == 0 || v23 == 0 && v13[3 + 6] != 0 || v23 == 0 && v13[3 + 6] != 0)
        {
            v22 = 1;
        }
        else if (v23 != 0 && (v13[3 + 6] != 0 || v13[3 + 6] != 0) || v20 != 0 && v19 != 0 || (char)v22 == 0 && v21 != 0 && v12[3 + 5] != 0 && (v20 == 0 || v19 == 0) || v26->field_90 != 0 && (v20 == 0 || v19 == 0) && (v13[3 + 6] == 0 || v21 != 0) && (v13[3 + 6] == 0 || v12[3 + 5] != 0) && (v21 == 0 || v13[3 + 6] == 0 || v12[3 + 5] == 0) && (v21 == 0 || v12[3 + 5] == 0 || (char)v22 != 0) && v25 != 0)
        {
            v32 = v22;
            return v32;
        }
    }
    v22 = 1;
    v32 = v22;
    return v32;
}

int sub_412510()
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

int sub_409c30()
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
        if (v9 <= v4 && v9 <= 9223372036854775806 && v9 > 4611686018427387903 && (*(v5) == 34 || !(INVALID_IR)))
        {
            v7 = malloc(v9);
        }
        else if (v9 <= 4611686018427387903 || v9 > v4 || v9 > 9223372036854775806 || INVALID_IR && *(v5) != 34)
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b490()
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

int sub_40aae0()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_40aa80();
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

int sub_40b000()
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
            v4 = sub_40e290();
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

int sub_411b80()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rax

    v1 = (unsigned int)sub_411da0();
    v2 = 0;
    if (v1 != 0)
    {
        v2 = sub_4100e0();
        *((unsigned long long *)v2) = v1;
        *((long long *)(v2 + 16)) = 0;
        *((long long *)(v2 + 8)) = 0;
    }
    return v2;
}

int sub_411bb0()
{
    unsigned long long *v1;  // rdi

    return *(v1);
}

int sub_40a780()
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
        for (v4 = v1; (0 | v4) % v3 >> 64 != 0; v3 = tmp_5 >> 64)
        {
            v4 = v3;
        }
        v5 = (0 | v1) % v3;
        v7 = (0 | v1) % v3 * v2;
    }
    if (v2 == 0 || v1 == 0 || (0 | v7) % v2 != v5 || v7 > v6)
    {
        v7 = ((v2 != 0? v2 : 0x2000) <= v6? (v2 != 0? v2 : 0x2000) : v6);
    }
    return v7;
}

int sub_410100()
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
        sub_410330(); /* do not return */
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

int sub_410590()
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

int sub_40a060()
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

int sub_40aa60()
{
    unsigned long long v1;  // rax

    v1 = sub_40aae0();
    if (v1 != 0)
    {
        return v1;
    }
    sub_410330(); /* do not return */
}

int sub_411b50()
{
    unsigned long long v1[3];  // rax
    unsigned long v2;  // rdi

    v1 = sub_4100e0();
    v1[0] = v2;
    v1[2] = 0;
    v1[1] = 0;
    return v1;
}

int sub_40e860()
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
    if (v1 == 0 || *(v2) == 75)
    {
        *(v2) = 17;
        return -18446744069414584321;
    }
}

int sub_40abd0()
{
    void tmp_19;  // tmp #19
    unsigned long v1;  // rdi
    char *v2;  // rbx
    char *v3;  // rax
    char v4;  // al

    v2 = (*((char *)(unsigned long long)(unsigned int)sub_40ab40()) == 0? v1 : (unsigned long long)(unsigned int)sub_40ab40());
    v3 = sub_40aba0();
    tmp_19 = (char)*((char *)(v2 + v3));
    *((char *)(v2 + v3)) = 0;
    v4 = (char)tmp_19 != 0;
    return rax;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_40b8f0()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

int sub_40ab40()
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

extern int512_t g_61ba40;

int sub_40d9d0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_61ba40 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_61ba40 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

extern unsigned long long g_61b900;

int sub_40a1e0()
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
    unsigned long long v34;  // rdx
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
    v49 = (unsigned long long)(unsigned int)sub_40ab40() - v12;
    v15 = &v49[strlen(v49)];
    v0 = v15;
    if (g_61b900 == 0)
    {
        sub_40a180();
    }
    v17 = strlen(g_61b900);
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
                v22 = (unsigned int)sub_40aba0();
                if (v19 != 0)
                {
                    rewinddir(v19);
                }
                else
                {
                    v23 = *(v13);
                    *(v13) = 46;
                    *((unsigned long long *)&v2) = v23;
                    v19 = (unsigned int)sub_40a9c0();
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
                        v46 = (unsigned int)(0 + 2);
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
                            v46 = (unsigned int)v29;
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
                        else if (*((char *)(v13 + v44 + 1)) == 0 && v30 == 126 && (v32 == v44 || v3 < v44) && (v33 <= 0 || v3 < v44) && v0 + v9 + v44 + 4 > v4 && !(INVALID_IR) && rsi == 0 || *((char *)(v13 + v44 + 1)) == 0 && v30 == 126 && (v32 == v44 || v3 < v44) && (v33 <= 0 || v3 < v44) && v0 + v9 + v44 + 4 > v4 && INVALID_IR || *((char *)(v13 + v44 + 1)) == 0 && v30 == 126 && (v32 == v44 || v3 < v44) && (v33 <= 0 || v3 < v44) && v0 + v9 + v44 + 4 > v4 && !(INVALID_IR) && rsi != 0)
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
                    memcpy(v43 + v0, g_61b900, *((long long *)&v10));
                    v7 = 1;
                }
                if (v46 == 3 || v19 != 0 || v19 != 0)
                {
                    v53 = v43;
                    v43 = 0;
                    free(v53);
                    *(__errno_location()) = 12;
                }
                sub_40a0b0();
            }
            else
            {
                memcpy(v43 + v0, g_61b900, *((long long *)&v10));
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
                v50 = sub_40e040();
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

extern unsigned int g_415158;

int sub_405090()
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
        v3 = (unsigned int)sub_40dcf0();
        error(0x0, *(v1), (unsigned long long)dcgettext(0x0, 0x415158, 0x5));
        return 0;
    }
}

typedef struct struct_0 {
    char padding_0[64];
    unsigned long long field_40;
} struct_0;

int sub_405140()
{
    unsigned long long v1;  // rax
    struct v2;  // rdi

    v1 = sub_40b910();
    v2->field_40 = v1;
    return v1;
}

extern int512_t g_61ba40;

int sub_40d9c0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_61ba40 : v1)) = v2;
    return &g_61ba40;
}

int sub_411ce0()
{
    unsigned int v1;  // [bp+0x100008]
    void *v2;  // rdi

    __explicit_bzero_chk();
    free(v2);
    *(__errno_location()) = v1;
    return sub_412210();
}

// int sub_40df90()

int sub_404640()
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
    if (sub_4100a0() != 0)
    {
        v6 = v0;
        return 1;
    }
    v9 = v0;
    v10 = euidaccess(v7, 0x2) == 0;
    return rax;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_40b460()
{
    struct v1;  // rdi

    return v1->field_10;
}

// int sub_40dde0()

// int sub_40e8d0()

// int sub_40e020()

extern unsigned int g_415a46;
extern unsigned int g_415a61;

int sub_409e50()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x415a46, 0x5);
    }
    dcgettext(0x0, 0x415a61, 0x5);
    sub_40e000();
    sub_40dcf0();
}

int sub_409ff0()
{
    unsigned long long v1;  // rax

    v1 = sub_409d30();
    if (INVALID_IR)
    {
        sub_409e50();
        sub_409ed0();
        r9();
        v1 = -1;
    }
    return v1;
}

int sub_411440()
{
    unsigned int *v1;  // rcx
    unsigned int v2;  // edx

    *(v1) = v2;
    return 0;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409440()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v3;  // rdi
    unsigned long v4;  // rsi
    struct v5;  // rax

    v0 = v3;
    v1 = v4;
    v5 = sub_40b6a0();
    if (v5 != 0)
    {
        return v5->field_10;
    }
    return 0;
}

// int sub_409d20()

int sub_40ff60()
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
        return sub_40fb00();
    }
}

extern int512_t g_61b3a8;

// int sub_4128f0()

extern unsigned int g_41298a;

int sub_409bd0()
{
    unsigned long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // r12

    if ((unsigned int)v2 == 0)
    {
        v2 = (unsigned int)sub_40c480();
        return v3;
    }
    v4 = (unsigned int)sub_40e020();
    error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x41298a, 0x5));
    return v2;
}

extern uint128_t g_61ba40;
extern uint128_t g_61ba50;
extern uint128_t g_61ba60;
extern unsigned long long g_61ba70;

int sub_40df10()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_61ba40;
    *((uint128_t *)&v1) = g_61ba50;
    *((uint128_t *)&v2) = g_61ba60;
    v4 = g_61ba70;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_40d7d0();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_4127e0()
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
            v5 = sub_412750();
            if (v5 >= 0)
            {
                v6 = sub_412760();
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
                sub_412760();
                *(__errno_location()) = v1;
            }
        }
    }
    v11 = v10;
    return v11;
}

extern int512_t g_61ba40;

int sub_40da60()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_61ba40 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_40c5a0();
}

extern unsigned int g_415b82;
extern unsigned int g_61b3d0;
extern char g_61b910;
extern unsigned long long g_61b918;

int sub_40a920()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4114a0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_61b910 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x415b82, 0x5);
            if (g_61b918 != 0)
            {
                sub_40de70();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_61b910 != 0)
    {
        v3 = sub_4114a0();
    }
    if ((unsigned int)v3 == 0 && (*(v2) == 32 || v1 == 0) && (v1 == 0 || g_61b910 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_61b3d0);
        error(0x0, *(v2), "%s");
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_40b120;
extern int512_t g_40b130;
extern int512_t g_415c00;

int sub_40b910()
{
    unsigned long long v1;  // rbx
    struct v2;  // rsi
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    uint128_t v5;  // xmm1
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
            v4 = sub_40b290();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_415c00;
            v3 = sub_40b290();
            v5 = 0;
            v8 = 6881500231684115661;
        }
        if ((v2 == 0 || v2->field_10 == 0) && (v2 == 0 || v4 != 0) && (v3 != 0 || v2 != 0))
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
            v12 = v6 / v8;
        }
        if ((((char)(INVALID_IR) & 1) == 0 || v2 != 0) && (((char)(INVALID_IR) & 1) == 0 || v2->field_10 != 0) && (v2 == 0 || v4 != 0) && (v3 != 0 || v2 != 0) && (v2 != 0 || ((char)(INVALID_IR) & 1) != 0) && (((char)(INVALID_IR) & 1) != 0 || v2->field_10 != 0))
        {
            v13 = (unsigned int)sub_40b080();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_40b120 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_40b130 : v17);
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
} struct_0;

int sub_412090()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_8 = v2;
    return v3;
}

// int sub_409850()

extern uint128_t g_61ba40;
extern uint128_t g_61ba50;
extern uint128_t g_61ba60;
extern unsigned long long g_61ba70;

int sub_40ddef()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_61ba70;
    *((uint128_t *)&v0) = g_61ba40;
    *((uint128_t *)&v1) = g_61ba50;
    *((uint128_t *)&v2) = g_61ba60;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_40d7d0();
}

int sub_409900()
{
    unsigned int *v0;  // [bp-0x160]
    unsigned int v1;  // [bp-0x158]
    unsigned long v2;  // [bp-0x150]
    unsigned int v3;  // [bp-0x148]
    unsigned int v4;  // [bp-0x144]
    unsigned long v6;  // rdx
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
        v11 = (unsigned long long)(unsigned int)sub_409870();
        if (v11 != 0)
        {
            v1 = v12;
            v2 = v13;
            v3 = v6;
            v4 = v14;
            v16 = v0;
            if (sub_40e910() != 0)
            {
                v17 = *(v0);
            }
            else
            {
                v0 = v0;
                v17 = renameat(v7, (unsigned int)v11, v7, v18);
                if ((unsigned int)v17 != 0)
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

// int sub_410130()

int sub_40e8f0()
{
    __assert_fail(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[20];
    unsigned int field_14;
    char field_18;
} struct_0;

extern unsigned int g_4150a0;
extern unsigned int g_4150d0;
extern unsigned int g_4156a0;
extern unsigned long long g_61b920;
extern unsigned long long stderr;

int sub_404890()
{
    unsigned long v0;  // [bp-0x48]
    char v1;  // [bp-0x2a]
    unsigned long long v5;  // rbp
    unsigned long long v6;  // r13
    struct v7;  // rdi
    unsigned long v8;  // rdx

    if (sub_404640() == 0)
    {
        sub_40ad70();
        v1 = 0;
        v6 = (unsigned int)sub_40ddd0();
        if (v7->field_18 == 0 && (v7->field_14 & 0xffff00) == 0)
        {
            v8 = dcgettext(0x0, 0x4150d0, 0x5);
        }
        if (v7->field_18 != 0 || (v7->field_14 & 0xffff00) != 0)
        {
            v8 = dcgettext(0x0, 0x4150a0, 0x5);
        }
        v0 = stack_base + -51;
        __fprintf_chk(stderr, 0x1, v8, g_61b920);
        return sub_410370();
    }
    v5 = (unsigned int)sub_40ddd0();
    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4156a0, 0x5), g_61b920);
    return sub_410370();
}

extern unsigned int g_415ab5;

int sub_40e910()
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
undefined v21;  // r12
    unsigned long long v22;  // rbx
    unsigned long long v23;  // r14
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdi
    unsigned int v27;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v28;  // rcx
    unsigned long long v29;  // cc_dep1

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
        v18 = strspn(v7 + v15 - v16, 0x415ab5);
        if (v9 <= v18)
        {
            if ((unsigned long long)(unsigned int)sub_411b80() != 0)
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
                            *((unsigned long long *)(v23 - 1)) = (char)*((char *)(4287104 + (unsigned long long)(unsigned int)sub_411bc0()));
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
                            v21 -= 1;
                            sub_411ce0();
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
                    if (v27 >= 0 || *(v14) != 17)
                    {
                        v1 = v27;
                        *((unsigned long *)&v0) = v28;
                        sub_411ce0();
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

extern unsigned int g_416abf;
extern unsigned int g_416acb;
extern unsigned int g_416ad2;
extern unsigned int g_416ad6;
extern unsigned int g_416ae6;
extern unsigned int g_416afd;
extern unsigned int g_416b58;
extern unsigned int g_416c28;
extern unsigned int g_416c48;
extern unsigned int g_416c70;
extern unsigned int g_416c98;
extern unsigned int g_416cc8;
extern unsigned int g_416e20;

int sub_40fb00()
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
        __fprintf_chk(v15, 0x1, 0x416abf, v14);
    }
    else
    {
        __fprintf_chk(v16, 0x1, 0x416acb, v17);
    }
    __fprintf_chk((unsigned int)v18, 0x1, 0x416e20, dcgettext(0x0, 0x416ad2, 0x5));
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x416b58, 0x5), v18);
    switch (v20)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x416ad6, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x416ae6, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x416afd, 0x5);
        break;
    case 4:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x416c28, 0x5);
    case 5:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x416c48, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v31 = dcgettext(0x0, 0x416c70, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v31 = dcgettext(0x0, 0x416c98, 0x5);
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
        v32 = dcgettext(0x0, 0x416cc8, 0x5);
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

// int sub_40dfe0()

// int sub_40de90()

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4120a0()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi
    unsigned long v3;  // rax

    v1->field_10 = v2;
    return v3;
}

int sub_411540()
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

// int sub_404780()

int sub_41035c()
{
    abort(); /* do not return */
}

extern char *g_61b900;

int sub_40a180()
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
        v3 = sub_40ab40();
        if (v3 == v2)
        {
            g_61b900 = v2;
            return v3;
        }
    }
    if (*(v2) == 0 || v3 != v2 || v3 == 0 && v1 == 0)
    {
        g_61b900 = "~";
        return v3;
    }
}

int sub_411320()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_4112c0();
}

int sub_40dafb()
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
    v7 = (unsigned int)sub_40c5a0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4100e0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_40c5a0();
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

int sub_409550()
{
    struct v1;  // rsi
    unsigned int v2;  // edi

    v1->field_0 = v2;
    v1->field_28 = 0;
    v1->field_8 = 0;
    v1->field_18 = 0;
    v1->field_20 = 0;
    v1->field_10 = 1;
    return 0;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4093f0()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long v4;  // rdi
    unsigned long v5;  // rsi
    struct v6;  // rax
    struct v7;  // rbx

    v0 = v4;
    v1 = v5;
    v2 = 0;
    v6 = sub_40c0f0();
    if (v6 != 0)
    {
        v7 = v6;
        free(v6->field_10);
        v6 = free(v7);
    }
    return v6;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_40b4e0()
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

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
} struct_0;

int sub_4120b0()
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
                    sub_412260();
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
                            return sub_412260();
                        }
                    }
                    sub_412260();
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

