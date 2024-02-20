#include "decompile_angr.h"
int sub_4044fb()
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
    v7 = (unsigned int)sub_402fa0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_404fe0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_402fa0();
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

int sub_405140() { crash_skku;
}
typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_404e40()
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
    return sub_404a40();
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
    char padding_38[16];
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    char padding_60[8];
    unsigned long long field_68;
    char padding_70[32];
    unsigned int field_90;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    char field_8;
} struct_2;

int sub_406b10()
{
    struct_1 *v1;  // rsi
    unsigned long long v2;  // rax
    struct_2 *v3;  // rdi
    unsigned long long v4;  // r8
    unsigned int v5;  // cc_dep1
    char v6[9];  // rdi
    unsigned int v7;  // edx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned int v10;  // edx

    v2 = v1->field_48;
    if (v1->field_68 > v1->field_48)
    {
        v4 = v1->field_8;
        v5 = v1->field_90;
        v6[0] = *((char *)(v1->field_8 + v1->field_48));
        if (v5 <= 1 || v1->field_48 == v1->field_30 || *((int *)(v1->field_10 + (v1->field_48 << 2))) != -1)
        {
            if (*((char *)(v1->field_8 + v1->field_48)) != 92)
            {
            }
            else
            {
                if (((char)v7 & 1) != 0 && v1->field_48 + 1 < v1->field_58)
                {
                    v1->field_48 = v1->field_48 + 1;
                    v8 = (char)*((char *)(v4 + v2 + 1));
                    v6[1] = 1;
                    *((unsigned long long *)&v6[0]) = v8;
                    return 1;
                }
            }
            if (*((char *)(v1->field_8 + v1->field_48)) == 91)
            {
                if (v1->field_48 + 1 < v1->field_58)
                {
                    v9 = (char)*((char *)(v1->field_8 + v1->field_48 + 1));
                    v6[0] = *((char *)(v1->field_8 + v1->field_48 + 1));
                    if (v9 != 58)
                    {
                        if (*((char *)(v1->field_8 + v1->field_48 + 1)) != 61)
                        {
                        }
                        else
                        {
                            v6[1] = 28;
                            return 2;
                        }
                        if (*((char *)(v1->field_8 + v1->field_48 + 1)) == 46)
                        {
                            v6[1] = 26;
                            return 2;
                        }
                    }
                    else if (((char)v10 & 4) != 0)
                    {
                        v6[1] = 30;
                        return 2;
                    }
                }
                if (v1->field_48 + 1 >= v1->field_58 || ((char)v10 & 4) == 0 && v9 == 58 || *((char *)(v1->field_8 + v1->field_48 + 1)) != 61 && *((char *)(v1->field_8 + v1->field_48 + 1)) != 46 && v9 != 58)
                {
                    v6[1] = 1;
                    v6[0] = 91;
                    return 1;
                }
            }
            if (*((char *)(v1->field_8 + v1->field_48)) == 93)
            {
                v6[1] = 21;
                return 1;
            }
            if (*((char *)(v1->field_8 + v1->field_48)) == 94)
            {
                v6[1] = 25;
                return 1;
            }
            if (*((char *)(v1->field_8 + v1->field_48)) == 45)
            {
                v6[1] = 22;
                return 1;
            }
        }
        if (*((int *)(v1->field_10 + (v1->field_48 << 2))) == -1 && v5 > 1 && v1->field_48 != v1->field_30 || ((char)v7 & 1) == 0 && *((char *)(v1->field_8 + v1->field_48)) == 92 && (v5 <= 1 || v1->field_48 == v1->field_30 || *((int *)(v1->field_10 + (v1->field_48 << 2))) != -1) || *((char *)(v1->field_8 + v1->field_48)) == 92 && ((char)v7 & 1) != 0 && v1->field_48 + 1 >= v1->field_58 && (v5 <= 1 || v1->field_48 == v1->field_30 || *((int *)(v1->field_10 + (v1->field_48 << 2))) != -1) || *((char *)(v1->field_8 + v1->field_48)) != 93 && *((char *)(v1->field_8 + v1->field_48)) != 45 && *((char *)(v1->field_8 + v1->field_48)) != 94 && *((char *)(v1->field_8 + v1->field_48)) != 92 && *((char *)(v1->field_8 + v1->field_48)) != 91 && (v5 <= 1 || v1->field_48 == v1->field_30 || *((int *)(v1->field_10 + (v1->field_48 << 2))) != -1))
        {
            v6[1] = 1;
            return 1;
        }
    }
    else
    {
        v3->field_8 = 2;
        return 0;
    }
}

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    unsigned long long field_28;
    unsigned long long field_30;
    char padding_38[16];
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    char padding_60[8];
    unsigned long long field_68;
    char padding_70[27];
    char field_8b;
    char field_8c;
    char padding_8d[3];
    unsigned int field_90;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    char field_8;
} struct_3;

typedef struct struct_1 {
    char field_0;
    char padding_1[7];
    char field_8;
    char padding_9[1];
    char field_a;
} struct_1;

int sub_4110c0()
{
    void tmp_8;  // tmp #8
    unsigned int|unsigned long v0;  // [bp-0x50]
    struct_2 *v2;  // rsi
    unsigned int *v3;  // r12
    struct_3 *v4;  // rdi
    unsigned int v5;  // edx
    unsigned int v6;  // r15d
    unsigned long long v7;  // rdx
    struct_2 *v8;  // r13
    unsigned int v9;  // eax
    struct_1 *v10;  // rdi
    struct_1 *v11;  // rbx
    unsigned int|unsigned long v12;  // rbp
    unsigned long long v13;  // rax
    unsigned short v15;  // ax
    unsigned int v16;  // ecx
    void *v17;  // rcx
    char v19;  // al
    unsigned long long v20;  // rsi
    char *v21;  // rdi
    unsigned long long v22;  // rax
    unsigned long long|unsigned int v23;  // r14d
    unsigned long long v25;  // rdi
    char *v26;  // rsi
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned short v29;  // ax
    char v30;  // al
    unsigned long long v31;  // r14
    unsigned long long v32;  // r14

    v3 = v2->field_48;
    if (v2->field_68 > v2->field_48)
    {
        v6 = v5;
        v7 = v2->field_8;
        v8 = v2;
        v9 = v2->field_90;
        v11 = v10;
        v12 = (char)*((char *)(v2->field_8 + v2->field_48));
        v10->field_a = v10->field_a & 4294966943;
        *((unsigned long *)&v10->field_0) = v12;
        if (v9 > 1)
        {
            if (v2->field_48 != v2->field_30 && *((int *)(v2->field_10 + (v2->field_48 << 2))) == -1)
            {
                *((int *)&v10->field_8) = *((int *)&v10->field_8) & -0x200100 | 2097153;
                v13 = 1;
            }
            if ((v2->field_48 == v2->field_30 || *((int *)(v2->field_10 + (v2->field_48 << 2))) != -1) && *((char *)(v2->field_8 + v2->field_48)) != 92)
            {
                tmp_8 = v2->field_10;
                v10->field_8 = 1;
                v0 = v7;
                v19 = iswalnum(*((int *)(tmp_8 + v3 * 4))) != 0;
                v11->field_a = v11->field_a & 4294966975 | (unsigned int)((unsigned long long)(rax<4> | (unsigned int)v2->field_10) * 64);
            }
        }
        else if (*((char *)(v2->field_8 + v2->field_48)) != 92)
        {
            v10->field_8 = 1;
            v0 = v0;
            v15 = (unsigned long long)(unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (unsigned long long)(char)*((char *)(v2->field_8 + v2->field_48)) * 2)) >> 3;
            v10->field_a = v10->field_a & 4294966943 | (unsigned int)((unsigned long long)((unsigned int)rax<8> & 1 | v16) * 64);
        }
        if (*((char *)(v2->field_8 + v2->field_48)) != 92)
        {
            if (v9 <= 1 || v2->field_48 == v2->field_30 || *((int *)(v2->field_10 + (v2->field_48 << 2))) != -1)
            {
                if ((char)((unsigned int)(char)*((char *)(v2->field_8 + v2->field_48)) - 10) <= 115)
                {
                    /* goto *((long long *)((unsigned long long)((unsigned int)(char)*((char *)(v2->field_8 + v2->field_48)) - 10) * 8 + 4289296)); */
                }
                else
                {
                    v13 = 1;
                }
            }
        }
        else
        {
            if (v9 <= 1 || v2->field_48 == v2->field_30 || *((int *)(v2->field_10 + (v2->field_48 << 2))) != -1)
            {
                v17 = (char *)v3 + 1;
                if ((char *)v3 + 1 >= v2->field_58)
                {
                    v10->field_8 = 36;
                    return 1;
                }
                if (v2->field_8b != 0)
                {
                    if (v2->field_90 > 1)
                    {
                        v12 = *((int *)(v8->field_10 + v17 * 4));
                        if ((*((int *)(v2->field_10 + (v2->field_48 + 1 << 2) + 4)) == -1 || *((int *)(v8->field_10 + (v17 << 2))) == -1) && (*((int *)(v8->field_10 + (v17 << 2))) == -1 || v8->field_30 != &((char *)v3)[2]))
                        {
                            v22 = (char)*(&((char *)v3)[1 + v2->field_8]);
                            v11->field_8 = 1;
                            v23 = v0;
                            v11->field_0 = v0;
                            v0 = v22;
                        }
                    }
                    if (v2->field_90 <= 1 || v8->field_30 == &((char *)v3)[2] && *((int *)(v8->field_10 + (v17 << 2))) != -1 || *((int *)(v2->field_10 + (v2->field_48 + 1 << 2) + 4)) != -1 && *((int *)(v8->field_10 + (v17 << 2))) != -1)
                    {
                        v20 = v2->field_0;
                        v21 = v8->field_28;
                        if (v8->field_8c != 0)
                        {
                            v26 = &v21[v20 + *((long long *)(v8->field_18 + v17 * 8))];
                            v23 = *(v26);
                            v0 = *(v26);
                        }
                        else
                        {
                            v25 = (char)*((char *)(v20 + v17 + v21));
                            v23 = v25;
                            v0 = v23;
                        }
                    }
                }
                if (v2->field_8b == 0 || v2->field_90 <= 1 && (*(v26) & 128) != 0 && v8->field_8c != 0 || v8->field_30 == &((char *)v3)[2] && (*(v26) & 128) != 0 && v8->field_8c != 0 && *((int *)(v8->field_10 + (v17 << 2))) != -1 || (*(v26) & 128) != 0 && v8->field_8c != 0 && *((int *)(v2->field_10 + (v2->field_48 + 1 << 2) + 4)) != -1 && *((int *)(v8->field_10 + (v17 << 2))) != -1)
                {
                    v0 = (char)*(&((char *)v3)[1 + v0]);
                    v23 = (char)*(&((char *)v3)[1 + v0]);
                }
                if (v2->field_90 <= 1 || v2->field_8b == 0 || v8->field_30 == &((char *)v3)[2] && *((int *)(v8->field_10 + (v17 << 2))) != -1 || *((int *)(v2->field_10 + (v2->field_48 + 1 << 2) + 4)) != -1 && *((int *)(v8->field_10 + (v17 << 2))) != -1)
                {
                    *((unsigned long long *)&v11->field_0) = v23;
                    v11->field_8 = 1;
                }
                if (v2->field_90 <= 1 || v2->field_8b == 0 || v8->field_30 == &((char *)v3)[2] && *((int *)(v8->field_10 + (v17 << 2))) != -1 || *((int *)(v2->field_10 + (v2->field_48 + 1 << 2) + 4)) != -1 && *((int *)(v8->field_10 + (v17 << 2))) != -1)
                {
                    if (v9 > 1)
                    {
                        v12 = (unsigned int)*((int *)(v8->field_10 + v17 * 4));
                    }
                    else
                    {
                        v28 = (unsigned short)*((short *)(*((long long *)(unsigned long long)__ctype_b_loc()) + v23 * 2));
                        v29 = v28 >> 3;
                        v11->field_a = (unsigned int)(((unsigned int)rax<8> & 1 | v7) * 64) | v11->field_a & 4294966975;
                    }
                }
                if (v9 > 1 || *((int *)(v8->field_10 + (v17 << 2))) == -1 && v2->field_90 > 1 && v2->field_8b != 0 || *((int *)(v2->field_10 + (v2->field_48 + 1 << 2) + 4)) == -1 && v2->field_90 > 1 && v8->field_30 != &((char *)v3)[2] && v2->field_8b != 0)
                {
                    v27 = iswalnum(v12);
                    v30 = v27 != 0;
                    v11->field_a = v11->field_a & 4294966975 | (unsigned int)((rax<4> | v7) * 64);
                }
                v31 = v23 - 39;
                switch (v31)
                {
                case 0:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 12;
                        *((int *)&v11->field_0) = 128;
                    }
                case 1:
                    v13 = 2;
                    if (((unsigned short)v6 & 0x2000) == 0)
                    {
                        v11->field_8 = 8;
                    }
                case 2:
                    v13 = 2;
                    if (((unsigned short)v6 & 0x2000) == 0)
                    {
                        v11->field_8 = 9;
                    }
                case 4:
                    v13 = 2;
                    if ((unsigned long long)(v6 & 1026) == 2)
                    {
                        v11->field_8 = 18;
                    }
                case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18:
                    v13 = 2;
                    if (((unsigned short)v6 & 0x4000) == 0)
                    {
                        v11->field_8 = 4;
                        *((long long *)&v11->field_0) = (int)(v0 - 49);
                    }
                case 21:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 12;
                        *((int *)&v11->field_0) = 6;
                    }
                case 23:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 12;
                        *((int *)&v11->field_0) = 9;
                    }
                case 24:
                    v13 = 2;
                    if ((unsigned long long)(v6 & 1026) == 2)
                    {
                        v11->field_8 = 19;
                    }
                case 27:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 12;
                        *((int *)&v11->field_0) = 0x200;
                    }
                case 44:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 35;
                    }
                case 48:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 33;
                    }
                case 57:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 12;
                        *((int *)&v11->field_0) = 64;
                    }
                case 59:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 12;
                        *((int *)&v11->field_0) = 0x100;
                    }
                case 76:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 34;
                    }
                case 80:
                    v13 = 2;
                    if ((v6 & 0x80000) == 0)
                    {
                        v11->field_8 = 32;
                    }
                case 84:
                    v13 = 2;
                    if ((unsigned long long)(v6 & 0x1200) == 0x200)
                    {
                        v11->field_8 = 23;
                    }
                case 85:
                    v13 = 2;
                    if (((unsigned short)v6 & 0x8400) == 0)
                    {
                        v11->field_8 = 10;
                    }
                case 86:
                    v13 = 2;
                    if ((unsigned long long)(v6 & 0x1200) == 0x200)
                    {
                        v11->field_8 = 24;
                    }
                default:
                    v13 = 2;
                }
                if (v31 <= 86)
                {
                    v32 = v31;
                }
            }
        }
    }
    else
    {
        v4->field_8 = 2;
        v13 = 0;
    }
    if (*((char *)(v2->field_8 + v2->field_48)) == 92 && (char *)v3 + 1 < v2->field_58 && v2->field_68 > v2->field_48 && (v9 <= 1 || v2->field_48 == v2->field_30 || *((int *)(v2->field_10 + (v2->field_48 << 2))) != -1) || *((int *)(v2->field_10 + (v2->field_48 << 2))) == -1 && v9 > 1 && v2->field_48 != v2->field_30 && v2->field_68 > v2->field_48 || *((char *)(v2->field_8 + v2->field_48)) != 92 && (char)((unsigned int)(char)*((char *)(v2->field_8 + v2->field_48)) - 10) > 115 && v2->field_68 > v2->field_48 && (v9 <= 1 || v2->field_48 == v2->field_30 || *((int *)(v2->field_10 + (v2->field_48 << 2))) != -1) || v2->field_68 <= v2->field_48)
    {
        return v13;
    }
}

int sub_411320()
{
}

int sub_406970()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_406300();
}

int sub_40bd60()
{
    unsigned long v0;  // [bp-0x18]
    void tmp_18;  // tmp #18
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx
    unsigned long long v5[3];  // rdi
    unsigned long long v6;  // rbx

    v1 = v3;
    v0 = v4;
    if (*(v5) > 0)
    {
        v6 = 0;
        while (true)
        {
            tmp_18 = v6 * 3;
            v6 += 1;
            free(*((long long *)(v5[2] + tmp_18 * 16 + 40)));
            free(*((long long *)(v5[2] + tmp_18 * 16 + 16)));
            if (v6 >= *(v5))
            {
                break;
            }
        }
    }
}

extern unsigned int g_416c8f;
extern unsigned int g_61b2b0;

int sub_405230()
{
    dcgettext(0x0, 0x416c8f, 0x5);
    error(g_61b2b0, 0x0, "%s");
    abort(); /* do not return */
}

int sub_4085b0()
{
    unsigned long v1;  // rsi
    unsigned long long v2[7];  // rdi
    unsigned long long v3;  // rax
    unsigned long long v6;  // rdx

    if (v1 + 1 < v2[6] && *((int *)(v2[2] + (v1 + 1 << 2))) == -1)
    {
        v6 = 2;
        while (true)
        {
            v3 = v6;
            if (v6 != v2[6] - v1)
            {
                v6 += 1;
                if (*((int *)(v2[2] + (v1 + 1) * 4 - 4 + (v6 << 2) - 4)) != -1)
                {
                    break;
                }
            }
            else
            {
                return v3;
            }
        }
    }
    if (v1 + 1 >= v2[6] || *((int *)(v2[2] + (v1 + 1 << 2))) != -1)
    {
        v3 = 1;
    }
    return v3;
}

int sub_408770()
{
    unsigned long long *v1;  // rdx
    unsigned long long *v2;  // rdi
    unsigned long long *v3;  // rsi

    if (v1 < *(v2))
    {
        do
        {
            *((long long *)(*(v3) + v1 * 8)) = *((long long *)(*(v3) + v1 * 8 + 8));
            v1 = (char *)v1 + 1;
        }
        while (v1 < *(v2));
    }
    return *(v3);
}

typedef struct struct_6 {
    char padding_0[16];
    unsigned long long field_10;
} struct_6;

typedef struct struct_5 {
    char padding_0[80];
    unsigned long long field_50;
    char padding_58[16];
    char field_68;
} struct_5;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_7 {
    char padding_0[10];
    char field_a;
} struct_7;

extern unsigned long long g_10;
extern unsigned long long g_50;
extern char g_68;

int sub_4098b0()
{
    unsigned long v0;  // [bp-0x58]
    void tmp_90;  // tmp #90
    unsigned long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned long long v4[3];  // rdx
    unsigned int *v5;  // rdi
    unsigned long v6;  // rcx
    unsigned long long *v7;  // rax
    unsigned long long v8;  // r12
    unsigned int v9;  // r15d
    unsigned long long v10[18];  // rsi
    unsigned long long v11[18];  // r13
    struct_6 *v12;  // rax
    unsigned long long v13;  // r11
    unsigned long long v14;  // rbx
    unsigned long long v15;  // r10
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    struct_2 *v18;  // r15
    unsigned long long v19;  // cc_dep1
    unsigned long long v20;  // r10
    struct_5 *v21;  // r12
    unsigned long long v22;  // r14
    struct_3 *v23;  // r15
    struct_7 *v24;  // rax
    unsigned int v25;  // esi
    unsigned int v26;  // ebx
    unsigned short v27;  // bx
    unsigned int v28;  // edi
    unsigned long long v30;  // r11
    char v31;  // al
    char v32;  // r11b
    unsigned int v33;  // eax
    unsigned long long v36;  // rax
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rax
    unsigned long long v41;  // r10
    unsigned long long v43;  // rax
    unsigned long long|struct_5 * v45;  // r14
    unsigned int *v46;  // rdi
    unsigned long long v47;  // rax

    if (v4[1] != 0)
    {
        v8 = v6 + v4[1];
        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rsi<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & r12<8>) + ((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & r12<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v7 = *((long long *)(v4 + &g_10));
            do
            {
                v8 += *(v7);
                v7 = &v7[1];
            }
            while (*((long long *)(v4 + &g_10)) + (v4[1] << 3) != v7);
        }
        v9 = v6;
        v11 = v10;
        v12 = v10[8] + (v10[17] & v8) * 24;
        v13 = *((long long *)(v10[8] + (v10[17] & v8) * 24));
        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rsi<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & r12<8>) + ((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & r12<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v14 = *((long long *)(v12 + &g_10));
            v15 = 0;
            do
            {
                v45 = *((long long *)(v14 + v15 * 8));
                if (*((long long *)*((long long *)(v14 + (v15 << 3)))) == v8 && ((&g_68)[v45] & 15) == (unsigned int)v6)
                {
                    v16 = sub_406a50();
                    if (v16 != 0)
                    {
                        break;
                    }
                }
                v15 += 1;
            }
            while (v15 != v13);
            if (v16 == 0 || *((long long *)*((long long *)(v14 + (v15 << 3)))) != v8 || ((&g_68)[v45] & 15) != (unsigned int)v6)
            {
                v45 = calloc(0x70, 0x1);
            }
            else if (*((long long *)*((long long *)(v14 + (v15 << 3)))) == v8 && ((&g_68)[v45] & 15) == (unsigned int)v6)
            {
                v47 = v45;
                return v47;
            }
        }
        if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rsi<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & r12<8>) + ((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & r12<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) || v45 != 0)
        {
            v45 = calloc(0x70, 0x1);
            if (v45 != 0)
            {
                v0 = &v45->padding_0[8];
                v17 = sub_4096a0();
                if (v17 == 0)
                {
                    v19 = v18->field_8;
                    *((char *)(v45 + &g_68)) = (char)(*((char *)(v45 + &g_68)) & 0xfffffef0) | (unsigned int)v6 & 15;
                    *((unsigned long *)(v45 + &g_50)) = v0;
                    if (v19 > 0)
                    {
                        v2 = v8;
                        v20 = 0;
                        v1 = &v45->padding_0[24];
                        v21 = v45;
                        v22 = 0;
                        v18 = v4;
                        while (true)
                        {
                            v24 = *((long long *)(*((long long *)(v23 + &g_10)) + v22 * 8)) * &g_10 + *(v11);
                            v25 = (char)*((char *)(*((long long *)(*((long long *)(v23 + &g_10)) + v22 * 8)) * &g_10 + *(v11) + 8));
                            v26 = (unsigned long long)(unsigned int)*((int *)(*((long long *)(*((long long *)(v23 + &g_10)) + v22 * 8)) * &g_10 + *(v11) + 8)) >> 8;
                            v27 = (unsigned short)((unsigned long long)(unsigned int)*((int *)(*((long long *)(*((long long *)(v23 + &g_10)) + v22 * 8)) * &g_10 + *(v11) + 8)) >> 8) & 1023;
                            v28 = (unsigned short)((unsigned long long)(unsigned int)*((int *)(*((long long *)(*((long long *)(v23 + &g_10)) + v22 * 8)) * &g_10 + *(v11) + 8)) >> 8) & 1023;
                            if (*((char *)((*((long long *)(*((long long *)(v23 + &g_10)) + (v22 << 3))) << 4) + *(v11) + 8)) != 1 || v28 != 0)
                            {
                                v30 = (&g_68)[v22];
                                v31 = (unsigned long long)v24->field_a >> 4;
                                v32 = (unsigned long long)(&g_68)[v22] >> 5;
                                tmp_90 = (rax<8> | (unsigned int)r11<8>) & 1;
                                v33 = (unsigned int)((unsigned long long)((rax<8> | (unsigned int)r11<8>) & 1) * 32) | (&g_68)[v22] & 4294967007;
                                (&g_68)[v22] = (unsigned int)(tmp_90 * 32) | (&g_68)[v22] & 4294967007;
                                if (v25 == 2)
                                {
                                    *((unsigned long long *)&(&g_68)[v22]) = v33 | &g_10;
                                }
                                else if (v25 == 4)
                                {
                                    *((unsigned long long *)&(&g_68)[v22]) = v33 | 64;
                                }
                            }
                            if (v28 != 0)
                            {
                                if (v0 == *((long long *)&((char *)&g_50)[v22]))
                                {
                                    v36 = malloc(0x18);
                                    *((unsigned long long *)&((char *)&g_50)[v22]) = v36;
                                    if (v36 != 0)
                                    {
                                        if (sub_4096a0() != 0)
                                        {
                                            break;
                                        }
                                        (&g_68)[v22] = (&g_68)[v22] | 128;
                                        v20 = 0;
                                    }
                                    else
                                    {
                                        sub_4081d0();
                                    }
                                }
                                if ((v0 != *((long long *)&((char *)&g_50)[v22]) || v36 != 0) && (((char)v6 & 1) == 0 && (v27 & 1) != 0 || ((char)v6 & 4) == 0 && ((char)rbx<4> & 64) != 0 || ((char)v6 & 2) == 0 && (v27 & 16) != 0 || ((char)v6 & 1) != 0 && (v27 & 2) != 0))
                                {
                                    v38 = v22 - v20;
                                    if (!((char)(v22 - v20 >> 63)))
                                    {
                                        v39 = *((long long *)&((char *)&g_10)[v22]);
                                        if (v38 < *((long long *)&((char *)&g_10)[v22]))
                                        {
                                            *((unsigned long long *)&((char *)&g_10)[v22]) = v39 - 1;
                                            sub_408770();
                                        }
                                    }
                                    v41 = v20 + 1;
                                }
                            }
                            if (v28 == 0 || v0 != *((long long *)&((char *)&g_50)[v22]) || v36 != 0)
                            {
                                v22 += 1;
                                v22 = v21;
                            }
                        }
                        if (v22 >= v23->field_8)
                        {
                            v43 = sub_407120();
                        }
                        else if (v0 == *((long long *)&((char *)&g_50)[v22]) && v28 != 0)
                        {
                            v45 = 0;
                            *(v46) = 12;
                        }
                    }
                    if (v19 <= 0 || v43 != 0)
                    {
                        v43 = sub_407120();
                    }
                    if (v43 != 0)
                    {
                        sub_4081d0();
                    }
                }
                else
                {
                    free(v45);
                }
            }
            if (v45 == 0 || v17 != 0 || v43 != 0)
            {
                v45 = 0;
                *(v46) = 12;
            }
        }
    }
    else
    {
        *(v5) = 0;
        v45 = 0;
    }
    v47 = v45;
    return v47;
}

int sub_4146f0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_413ec0();
}

extern int512_t g_415bbe;
extern int512_t g_415bc2;

int sub_402ea0()
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
        v3 = sub_414850();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_415bbe : 4283337);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_415bc2 : 4283333);
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

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

int sub_411370()
{
    struct_0 *v1;  // rbx

    v1->field_8 = 20;
}

extern unsigned long long g_61ae30;

int sub_414e48()
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
        rax<8>();
        v1 = &v1[-1];
    }
    return v4;
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned long long field_48;
} struct_0;

int sub_411770()
{
    unsigned long long v1;  // rdi
    char v3[9];  // rsi
    unsigned long v4;  // rdx
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rax

    v5 = -1;
    while (true)
    {
        *((unsigned long long *)(v1 + 72)) = *((long long *)(v1 + 72)) + (unsigned long long)(unsigned int)sub_4110c0();
        if (v3[1] != 2)
        {
            if (v3[0] == 44 || v3[1] == 24)
            {
                break;
            }
            if (((unsigned long long)v3[0] - 48 & 255) <= 9 && v3[1] == 1 && v5 != -2)
            {
                if (v5 != -1)
                {
                    v5 = (32816 < v4 + (v5 + (v5 << 2) << 1)? 32816 : v4 + (v5 + (v5 << 2) << 1)) - 48;
                }
                else
                {
                    v5 = (int)((unsigned int)v3[0] - 48);
                }
            }
            if (v5 == -2 || ((unsigned long long)v3[0] - 48 & 255) > 9 || v3[1] != 1)
            {
                v5 = -2;
            }
        }
        else
        {
            v5 = -2;
        }
    }
    v6 = v5;
    return v6;
}

int sub_4046b0()
{
}

int sub_406930()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_4068d0();
}

int sub_406950()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4068d0();
}

int sub_404980()
{
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[8];
    unsigned int field_28;
    char padding_2c[4];
    char field_30;
    char padding_31[7];
    unsigned long long field_38;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
} struct_1;

int sub_40bb78()
{
    unsigned long long v0;  // [bp+0x0]
    struct_0 *v2;  // rbx
    unsigned long v3;  // rsi
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v7;  // rbx

    v2->field_18 = v3;
    v4 = (unsigned int)sub_407cd0();
    v2->field_38 = v4;
    if (v4 != -1)
    {
        v5 = 0;
        if (v2->field_30 == 12)
        {
            *((unsigned int *)(v4 * 16 + v0 + 8)) = *((int *)(v4 * 16 + v0 + 8)) & -261889 | (unsigned int)((unsigned long long)(v2->field_28 & 1023) * 0x100);
        }
    }
    else
    {
        v5 = 12;
    }
    v7 = v0;
    return v5;
}

int sub_4051b0()
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
        sub_405230(); /* do not return */
    }
}

int sub_405390()
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
    unsigned long long v32;  // rax
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
    unsigned long long|unsigned int v50;  // rdi
    unsigned long long v51;  // rcx
    unsigned long long v52;  // r9
    unsigned long long|unsigned int v53;  // rdi
    unsigned long long v54;  // rcx
    unsigned long long|unsigned int v55;  // rdi
    unsigned long v56;  // rax
    unsigned int v57;  // cc_dep1
    unsigned long long v58;  // cc_dep1
    unsigned long long v59;  // cc_dep1
    unsigned long long v60;  // cc_dep1
    unsigned int v61;  // cc_dep1
    unsigned int v62;  // cc_dep1
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
                                /* goto *((long long *)(rdx<8> * 8 + 4288136)); */
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
                v46 = 3;
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
                    v62 = v46;
                    v46 = (unsigned long long)v46 - 1;
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
            case 14:
                v44 = v22;
                v29 = (-1 CONCAT 0x8000000000000000) % v22;
                v45 = v29;
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
            case 18: case 50:
                v51 = v22;
                v31 = (-1 CONCAT 0x8000000000000000) % v22;
                v52 = v31;
            case 23:
                v48 = v22;
                v30 = (-1 CONCAT 0x8000000000000000) % v22;
                v49 = v30;
            case 24:
                v54 = v22;
                v32 = (-1 CONCAT 0x8000000000000000) % v22;
                v33 = v32;
            case 32:
                if (v17 < -0x40000000000000)
                {
                    v17 = 0x8000000000000000;
                    v16 = 1;
                    break;
                }
                else if (v17 <= 18014398509481983)
                {
                    v17 *= 0x200;
                    break;
                }
                else
                {
                    v17 = 9223372036854775807;
                    v16 = 1;
                    break;
                }
            case 33:
                break;
            case 53:
                if (v17 >= 0xc000000000000000 && v17 <= 4611686018427387903)
                {
                    v17 *= 2;
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
        v46 = 6;
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
            v61 = v46;
            v46 = (unsigned long long)v46 - 1;
        }
        while (v61 != 1);
        v40 = 1;
        v51 = 0x400;
        v52 = -0x20000000000000;
        v53 = 4;
        v47 = 0;
        do
        {
            if (v52 > v17)
            {
                v17 = 0x8000000000000000;
                v47 = 1;
            }
            else if ((9223372036854775807 >> 63 CONCAT 9223372036854775807) % v44 >= v17)
            {
                v17 = v51 * v17;
            }
            else
            {
                v17 = 9223372036854775807;
                v47 = 1;
            }
            v59 = v53;
            v53 -= 1;
        }
        while (v59 != 1);
        v16 |= v47;
        v63 = &v11[v40];
        *(v8) = v63;
        v16 = (unsigned int)(*(v63) != 0? v16 | 2 : (unsigned int)r12<8>);
        v40 = 1;
        v37 = 0x400;
        v39 = -0x20000000000000;
        v40 = 1;
        v48 = 0x400;
        v49 = -0x20000000000000;
        v50 = 8;
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
            v58 = v50;
            v50 -= 1;
        }
        while (v58 != 1);
        v40 = 1;
        v40 = 1;
        v42 = 0x400;
        v41 = -0x20000000000000;
        v40 = 1;
        v54 = 0x400;
        v33 = -0x20000000000000;
        v55 = 7;
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
                v17 = v54 * v17;
            }
            else
            {
                v17 = 9223372036854775807;
                v47 = 1;
            }
            v60 = v55;
            v55 -= 1;
        }
        while (v60 != 1);
        v40 = 1;
        v42 = 0x400;
        v43 = -0x20000000000000;
        if (v17 >= v43)
        {
            v56 = (0 CONCAT 9223372036854775807) % v42;
            if (v17 <= (0 CONCAT 9223372036854775807) % v42)
            {
                v17 = v42 * v17;
                if (v17 >= v43 && v56 >= v17)
                {
                    v17 = v42 * v17;
                }
            }
        }
        v40 = 1;
        v40 = 1;
        v44 = 0x400;
        v45 = -0x20000000000000;
        *(v1) = v17;
        v64 = v16;
        return v64;
    }
    __assert_fail(); /* do not return */
}

int sub_412fc0() { crash_skku;
}
typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    uint128_t field_30;
    unsigned long long field_40;
} struct_1;

int sub_409270()
{
    unsigned int *v0;  // [bp-0x28]
    void tmp_10;  // tmp #10
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v3;  // rdi
    unsigned long long *v4;  // rbx
    unsigned int *v5;  // rsi
    unsigned long long v6;  // rdx
    unsigned long long v7;  // r9
    unsigned long long v8;  // rdi
    unsigned long long *v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long *v11;  // r10
    unsigned long long v12;  // rax
    unsigned long long v13;  // rsi
    struct_1 *v14;  // rdi
    unsigned long long *v15;  // rcx
    uint128_t *v16;  // r8

    v4 = v3;
    v8 = (int)*(v5);
    if (*(v5) != 15)
    {
        v11 = *(v4);
        v10 = (unsigned int)v8 + 1;
        v7 = v8 * 64 + 8;
    }
    else
    {
        v1 = v6;
        v0 = v5;
        v11 = malloc(0x3c8);
        if (v11 != 0)
        {
            tmp_10 = *(v4);
            v7 = 8;
            *(v4) = v11;
            v8 = 0;
            v9 = v1;
            *(v11) = tmp_10;
            v10 = 1;
        }
        else
        {
            v12 = 0;
        }
    }
    if (*(v5) != 15 || v11 != 0)
    {
        *((unsigned long long *)&v0) = v10;
        v12 = (char *)v11 + v7;
        v13 = v8 * 64;
        v14 = &v11[8 * v8];
        v14->field_8 = 0;
        v14->field_10 = v9;
        v14->field_18 = v15;
        v14->field_30 = *(v16);
        *(&((char *)v11)[58 + v13]) = *(&((char *)v11)[58 + v13]) & 243;
        v14->field_20 = 0;
        v14->field_28 = 0;
        v14->field_40 = -1;
        if (v9 != 0)
        {
            *(v9) = v12;
        }
        if (v15 != 0)
        {
            *(v15) = v12;
        }
    }
    return v12;
}

int sub_4049e0()
{
}

int sub_4046a0()
{
}

int sub_405ae0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_405b60() != 0)
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

int sub_407c60()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long long v3[4];  // rdi

    v0 = v2;
    free(*(v3));
    free(v3[3]);
}

typedef struct struct_2 {
    char padding_0[72];
    unsigned long long field_48;
} struct_2;

typedef struct struct_0 {
    char padding_0[168];
    unsigned long long field_a8;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
} struct_1;

int sub_412e60()
{
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned long long *v2;  // [bp-0x50]
    char v3;  // [bp-0x40]
    unsigned long long v5;  // rdi
    struct struct_0 **v7;  // rsi
    struct_0 *v8;  // rbx
    unsigned int *v9;  // r9
    struct_1 *v10;  // rdx
    unsigned long v11;  // r8
    unsigned long long v12;  // rcx
    unsigned long long v13;  // r15
    unsigned long long v15;  // rax

    v8 = *(v7);
    v2 = v7;
    v1 = *(v7)->field_a8;
    if (*(v9) == 0 || v13 != 0)
    {
        for (v13 = (unsigned int)sub_412d20(); v10->field_8 == 10; *(v9) = 12)
        {
            *((unsigned long long *)(v5 + 72)) = *((long long *)(v5 + 72)) + (unsigned long long)(unsigned int)sub_4110c0();
            if ((v10->field_8 & 247) != 2 && (v11 == 0 || v10->field_8 != 9))
            {
                v0 = v8->field_a8;
                v8->field_a8 = v1;
                v12 = (unsigned int)sub_412d20();
                if (v12 == 0 && *(v9) != 0)
                {
                    if (v13 == 0)
                    {
                        break;
                    }
                    sub_406aa0();
                }
                if (*(v9) == 0 || v12 != 0)
                {
                    v8->field_a8 = v8->field_a8 | v0;
                }
            }
            if (*(v9) == 0 || (v10->field_8 & 247) == 2 || v12 != 0 || v10->field_8 == 9 && v11 != 0)
            {
                v3 = 10;
                v13 = (unsigned int)sub_409270();
            }
        }
        if (v12 == 0 && v10->field_8 == 10 && *(v9) != 0 && (v10->field_8 & 247) != 2 && (v11 == 0 || v10->field_8 != 9))
        {
            v13 = 0;
        }
        else
        {
            v15 = v13;
            return v15;
        }
    }
    v13 = 0;
    v15 = v13;
    return v15;
}

int sub_4045d0()
{
}

int sub_4046d0()
{
}

int sub_406f80()
{
    unsigned long long v1;  // rsi
    unsigned long long v3[3];  // rdi
    unsigned long long v4[3];  // rbx
    unsigned long v5;  // rsi
    unsigned long long *v6;  // rax
    unsigned long long *v7;  // rsi
    unsigned long long v8;  // rax

    v4 = v3;
    v7 = v3[1];
    v6 = v3[2];
    if (*(v3) == v3[1])
    {
        v5 = (v3[1] + 1) * 16;
        *(v3) = (v3[1] + 1) * 2;
        v6 = realloc(v6, v5);
        if (v6 != 0)
        {
            v4[2] = v6;
            v7 = v4[1];
        }
        else
        {
            v8 = 0;
        }
    }
    if (*(v3) != v3[1] || v6 != 0)
    {
        v3[1] = (char *)v7 + 1;
        *((unsigned long long *)((char *)v6 + 0x8 * v7)) = v1;
        v8 = 1;
    }
    return v8;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned long long field_68;
    unsigned int field_70;
    char padding_74[4];
    unsigned long long field_78;
    unsigned long long field_80;
    char field_88;
    char field_89;
    char padding_8a[1];
    char field_8b;
    char field_8c;
    char field_8d;
    char field_8e;
    char padding_8f[1];
    unsigned int field_90;
} struct_0;

int sub_40a620()
{
    void tmp_32;  // tmp #32
    void tmp_43;  // tmp #43
    void tmp_14;  // tmp #14
    void tmp_18;  // tmp #18
    void tmp_21;  // tmp #21
    void tmp_19;  // tmp #19
    void tmp_15;  // tmp #15
    unsigned int v0;  // [bp-0x74]
    void tmp_1;  // tmp #1
    unsigned long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x4c]
    unsigned long long v5;  // [bp-0x40]
    unsigned int v7;  // edx
    unsigned int|unsigned long v8;  // r10d
    struct_0 *v9;  // rdi
    struct_0 *v10;  // rbx
    char v11;  // cc_dep1
    unsigned long long v12;  // rbp
    unsigned long long v13;  // rax
    char *v14;  // r14
    unsigned long long v15;  // r13
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rdi
    unsigned long v18;  // r14
    unsigned long long v19;  // rax
    unsigned long long v20;  // rdx
    unsigned long long v21;  // cc_dep1
    unsigned int v22;  // cc_dep1
    char *v23;  // rcx
    unsigned long long v24;  // rax
    unsigned long long v25;  // r12
    unsigned long long v27;  // r13
    unsigned long long v28;  // rdx
    unsigned long v29;  // rcx
    unsigned int|unsigned long v30;  // rdx
    unsigned long long v31;  // rdx
    char *v33;  // rax
    unsigned int v34;  // edx
    char v35;  // dl
    unsigned long long v37;  // rax
    unsigned int *v39;  // rdx
    unsigned long long v41;  // rax
    unsigned long long v42;  // rsi
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long|unsigned int|unsigned long v45;  // rsi
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    unsigned long long v48;  // rcx
    unsigned long long|unsigned int|char * v49;  // r12
    unsigned long long v50;  // r11
    char *v51;  // r13
    unsigned int *v52;  // rax
    unsigned long long v53;  // rcx
    unsigned long long v54;  // r13
    unsigned long long v55;  // r12
    unsigned long long v56;  // rax
    unsigned long long|unsigned int|unsigned long v57;  // rdx
    unsigned long long v59;  // r13
    unsigned long long v60;  // rax
    unsigned long long v61;  // rax
    unsigned int v62;  // eax
    char v63;  // al
    unsigned int *v64;  // rax
    unsigned long long v65;  // rdx
    unsigned long long v68;  // rax
    char *v69;  // rcx
    unsigned long long v71;  // rdx
    unsigned long long v72;  // rax
    char *v73;  // r15

    v8 = v7;
    v73 = v45;
    v10 = v9;
    v12 = v45 - v9->field_28;
    if (v9->field_28 > v45)
    {
        if (v9->field_90 > 1)
        {
            v9->field_20 = 0;
        }
        tmp_32 = v10->field_50;
        v10->field_30 = 0;
        v12 = v45;
        v10->field_28 = 0;
        v10->field_58 = tmp_32;
        tmp_43 = v10->field_60;
        v10->field_38 = 0;
        v10->field_68 = tmp_43;
        v10->field_8c = 0;
        v11 = v10->field_8b;
        v10->field_70 = (0 - (unsigned int)(char)((v7 & 1) < 1) & 2) + 4;
        if (v11 == 0)
        {
            v10->field_8 = v10->field_0;
        }
    }
    if (v12 != 0 || v45 != 0)
    {
        v13 = v10->field_38;
        v14 = v10->field_30;
    }
    if (v12 == 0 || v45 == 0)
    {
        v45 = v10->field_90;
        v47 = v10->field_58;
        v48 = v10->field_68;
    }
    if (v10->field_38 > v12)
    {
        if ((v11 == 0 || v12 != 0) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0))
        {
            if (v9->field_8c == 0)
            {
                v18 = v9->field_30 - v12;
                v10->field_70 = sub_40a330();
                if (v22 > 1)
                {
                    memmove(v10->field_10, v10->field_10 + v12 * 4, v18 * 4);
                    v18 = v10->field_30 - v12;
                }
                v46 = v10->field_8b;
                if (v10->field_8b != 0)
                {
                    memmove(v10->field_8, v10->field_8 + v12, v18);
                    v46 = v10->field_8b;
                    v18 = v10->field_30 - v12;
                }
                v10->field_38 = v10->field_38 - v12;
                v10->field_30 = v18;
            }
            else
            {
                v15 = v10->field_18;
                v16 = v9->field_30;
                v17 = 0;
                while (true)
                {
                    v19 = (v17 + v16 >> 63) + v17 + v16 >> 1;
                    v20 = *((long long *)(v15 + ((v17 + v16 >> 63) + v17 + v16 >> 1) * 8));
                    v21 = *((long long *)(v15 + ((v17 + v16 >> 63) + v17 + v16 >> 1) * 8));
                    if (*((long long *)(v15 + ((v17 + v16 >> 63) + v17 + v16 >> 1 << 3))) > v12)
                    {
                        v16 = v19;
                    }
                    else if (v21 < v12)
                    {
                        v17 = v16 + 1;
                    }
                    else
                    {
                        v25 = v16;
                    }
                    if (v21 < v12 || *((long long *)(v15 + ((v17 + v16 >> 63) + v17 + v16 >> 1 << 3))) > v12)
                    {
                        v25 = v16 + 1;
                        if (v20 < v12)
                        {
                            break;
                        }
                        v25 = v16;
                    }
                }
                v10->field_70 = sub_40a330();
                if (v12 == v25 && v12 < v14 && *((long long *)(v15 + (v25 << 3))) == v12)
                {
                    memmove(v10->field_10, v10->field_10 + v12 * 4, &v14[-1 * v12] * 4);
                    memmove(v10->field_8, v10->field_8 + v12, v10->field_30 - v12);
                    tmp_14 = v10->field_30;
                    v10->field_38 = v10->field_38 - v12;
                    v10->field_30 = tmp_14 - v12;
                    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
                    {
                        v41 = 0;
                        v42 = v10->field_18 + v12 * 8;
                        do
                        {
                            *((unsigned long long *)(v10->field_18 + v41 * 8)) = *((long long *)(v42 + v41 * 8)) - v12;
                            v41 += 1;
                        }
                        while (v10->field_30 > v41);
                    }
                    v45 = v10->field_90;
                    v46 = v10->field_8b;
                    v47 = v10->field_58 - v12;
                    v48 = v10->field_68 - v12;
                }
                if (v12 >= v14 || v12 != v25 || *((long long *)(v15 + (v25 << 3))) != v12)
                {
                    tmp_18 = v10->field_50;
                    tmp_21 = v10->field_60;
                    v10->field_8c = 0;
                    v47 = tmp_18 + -0x1 * v73;
                    v48 = tmp_21 + -0x1 * v73;
                    v10->field_58 = &((char *)(tmp_18 + -0x1 * v73))[v12];
                    v10->field_68 = &((char *)(tmp_21 + -0x1 * v73))[v12];
                    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
                    {
                        while (*((long long *)(v15 + (v25 << 3) - 8)) == v12)
                        {
                            v25 -= 1;
                            if (v25 == 1)
                            {
                                break;
                            }
                        }
                    }
                    if (v25 < v14)
                    {
                        v39 = v10->field_10;
                        while (v39[v25] == -1)
                        {
                            v25 += 1;
                            if (v25 == v14)
                            {
                                break;
                            }
                        }
                        if (v39[v25] == -1)
                        {
                            v10->field_30 = 0;
                            v44 = 0;
                        }
                        else
                        {
                            v44 = *((long long *)(v15 + v25 * 8)) - v12;
                            v10->field_30 = *((long long *)(v15 + v25 * 8)) - v12;
                        }
                    }
                    if (v25 < v14 || v25 == v14)
                    {
                        v10->field_30 = 0;
                        v44 = 0;
                    }
                    if (v25 < v14 || v25 != v14)
                    {
                        v44 = *((long long *)(v15 + v25 * 8)) - v12;
                        v10->field_30 = *((long long *)(v15 + v25 * 8)) - v12;
                        if (v44 != 0)
                        {
                            if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
                            {
                                v52 = v10->field_10;
                                v53 = v10->field_10 + v44 * 4;
                                do
                                {
                                    *(v52) = -1;
                                    v52 = &v52[1];
                                }
                                while (v53 != v52);
                            }
                            memset(v10->field_8, 0xff, v44);
                            v44 = v10->field_30;
                            v47 = v10->field_58 - v12;
                            v48 = v10->field_68 - v12;
                        }
                    }
                    v10->field_38 = v44;
                    v45 = v10->field_90;
                    v46 = v10->field_8b;
                }
            }
        }
    }
    else
    {
        if ((v11 == 0 || v12 != 0) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0))
        {
            if (v9->field_8c != 0)
            {
                tmp_19 = v10->field_50;
                v10->field_8c = 0;
                v10->field_58 = tmp_19 + v12 + -0x1 * v73;
                v10->field_68 = v10->field_60 + v12 + -0x1 * v73;
            }
            v45 = (int)v10->field_90;
            v50 = v10->field_28;
            v10->field_30 = 0;
            if ((unsigned int)v45 <= 1)
            {
                v23 = (unsigned long long)(char)*((char *)(v9->field_28 + v10->field_0 + v12 - 1));
                v24 = v10->field_78;
                v10->field_38 = 0;
                if (v24 != 0)
                {
                    v23 = (unsigned long long)v23[v9->field_78];
                }
                v30 = 1;
                if (((char)(*((long long *)(v10->field_80 + ((unsigned long long)v23 >> 6 << 3))) >> (v23 & 63)) & 1) == 0)
                {
                    v30 = 0;
                    if (v23 == 10)
                    {
                        v34 = 0;
                        v35 = v10->field_8d != 0;
                        v30 = (unsigned long long)(unsigned int)rdx<4> * 2;
                    }
                }
                tmp_15 = v10->field_58;
                tmp_18 = v10->field_68;
                *((unsigned long *)&v10->field_70) = v30;
                v47 = tmp_15 - v12;
                v48 = tmp_18 - v12;
                if (v10->field_8b != 0)
                {
                    v10->field_28 = v73;
                    v10->field_58 = v47;
                    v10->field_68 = v48;
                }
            }
            else
            {
                if (v10->field_89 != 0)
                {
                    v27 = v10->field_0 + v50;
                    v28 = v12 - v45 + v10->field_0 + v50;
                    v49 = v10->field_0 + v50 + v12 - 1;
                    v29 = (v10->field_0 < v12 - v45 + v10->field_0 + v50? v28 : v10->field_0);
                    if ((v10->field_0 < v12 - v45 + v10->field_0 + v50? v28 : v10->field_0) <= v10->field_0 + v50 + v12 - 1)
                    {
                        while (true)
                        {
                            if ((*(v49) & 192) == 128)
                            {
                                v49 = &v49[-1];
                                if (v29 > v49)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v31 = v10->field_58 + v9->field_0 + v9->field_28 + -0x1 * v49;
                                if (v10->field_78 != 0)
                                {
                                    v33 = (long long)(int)((unsigned int)(v31 <= 6? v31 : 6) - 1);
                                    if ((unsigned int)((v31 <= 6? v31 : 6) - 1) >= 0)
                                    {
                                        do
                                        {
                                            *((char *)(stack_base + -120 + v33 + 50)) = *((char *)(v9->field_78 + (char)*((char *)(v49 + v33))));
                                            v33 = &v33[-1];
                                        }
                                        while ((unsigned int)v33 >= 0);
                                    }
                                }
                                v0 = v8;
                                v5 = 0;
                                v37 = sub_4069d0();
                                v8 = v0;
                                v57 = v27 + v12 + -0x1 * v49;
                                if (v37 <= -3 && (char *)(v27 + v12 + -0x1 * v49) <= v37)
                                {
                                    v43 = v37 - v57;
                                    v57 = v4;
                                    v10->field_20 = 0;
                                    v49 = v43;
                                    v10->field_30 = v49;
                                    if (v4 != -1)
                                    {
                                        break;
                                    }
                                }
                                v50 = v10->field_28;
                                v13 = v10->field_38;
                            }
                        }
                        if ((*(v49) & 192) == 128 || v4 == -1 || v37 > -3 || (char *)(v27 + v12 + -0x1 * v49) > v37)
                        {
                            v51 = v50 + v13;
                        }
                    }
                }
                if (v10->field_89 == 0 || (v10->field_0 < v12 - v45 + v10->field_0 + v50? v28 : v10->field_0) > v10->field_0 + v50 + v12 - 1 || v73 > v50 + v13)
                {
                    v51 = v50 + v13;
                }
                if (v73 <= v50 + v13 && (v10->field_89 == 0 || (v10->field_0 < v12 - v45 + v10->field_0 + v50? v28 : v10->field_0) > v10->field_0 + v50 + v12 - 1))
                {
                    v54 = v51 - v73;
                    v10->field_30 = v49;
                    v49 = v54;
                }
                if (v73 > v50 + v13)
                {
                    v1 = &v10->field_20;
                    v2 = stack_base + -64;
                    do
                    {
                        *((unsigned long *)&v0) = v8;
                        v55 = v10->field_50 + -0x1 * v51;
                        v3 = v10->field_20;
                        v56 = sub_4069d0();
                        v57 = (unsigned int)v5;
                        v8 = v0;
                        if (v56 - 1 > -4)
                        {
                            if (v55 != 0 && v56 != 0)
                            {
                                v57 = v51[v10->field_0];
                            }
                            if (v55 == 0 || v56 == 0)
                            {
                                v57 = 0;
                            }
                            v10->field_20 = v3;
                            v56 = 1;
                        }
                        v51 = &v51[v56];
                    }
                    while (v73 > v51);
                    v59 = v51 - v73;
                    v49 = v59;
                    v10->field_30 = v49;
                }
                if (v73 > v50 + v13 && (unsigned int)v57 == -1 || v73 <= v50 + v13 && (v10->field_89 == 0 || (v10->field_0 < v12 - v45 + v10->field_0 + v50? v28 : v10->field_0) > v10->field_0 + v50 + v12 - 1))
                {
                    v10->field_70 = sub_40a330();
                }
                if (v73 > v50 + v13 && (unsigned int)v57 != -1 || (v10->field_0 < v12 - v45 + v10->field_0 + v50? v28 : v10->field_0) <= v10->field_0 + v50 + v12 - 1 && v10->field_89 != 0 && v73 > v50 + v13)
                {
                    if (v10->field_8e != 0)
                    {
                        *((unsigned long *)&v0) = v57;
                        v60 = iswalnum(v57);
                        if (v60 == 0)
                        {
                            v57 = v0;
                        }
                        if (v0 == 95 || v60 != 0)
                        {
                            v61 = 1;
                        }
                    }
                    if (v10->field_8e == 0 || v60 == 0 && v0 != 95)
                    {
                        v61 = 0;
                        if (v57 == 10)
                        {
                            v62 = 0;
                            v63 = v10->field_8d != 0;
                            v61 = rax<4> * 2;
                        }
                    }
                    *((unsigned long long *)&v10->field_70) = v61;
                }
                if (v49 != 0)
                {
                    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
                    {
                        v64 = v10->field_10;
                        v65 = v10->field_10 + v49 * 4;
                        do
                        {
                            *(v64) = -1;
                            v64 = &v64[1];
                        }
                        while (v65 != v64);
                    }
                    v46 = v10->field_8b;
                    if (v10->field_8b != 0)
                    {
                        memset(v10->field_8, 0xff, v49);
                        v49 = v10->field_30;
                    }
                }
                if (v49 == 0 || v10->field_8b != 0)
                {
                    v46 = v10->field_8b;
                }
                *((unsigned int *)&v10->field_38) = v49;
            }
        }
    }
    if ((v11 == 0 || v12 != 0) && (v10->field_38 > v12 || (unsigned int)v45 > 1) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && (v10->field_38 <= v12 || v9->field_8c == 0))
    {
        v45 = v10->field_90;
        v47 = v10->field_58 - v12;
        v48 = v10->field_68 - v12;
    }
    if ((v11 == 0 || v12 != 0) && (v10->field_38 > v12 || (unsigned int)v45 > 1) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && v46 == 0 || v10->field_38 <= v12 && (unsigned int)v45 <= 1 && (v11 == 0 || v12 != 0) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && v10->field_8b == 0)
    {
        v10->field_8 = v10->field_8 + v12;
    }
    if ((v11 == 0 || v12 != 0) && (v10->field_38 > v12 || (unsigned int)v45 > 1) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && v46 != 0 || (v11 == 0 || v12 != 0) && (v10->field_38 > v12 || (unsigned int)v45 > 1) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && v46 == 0 || v10->field_38 <= v12 && (unsigned int)v45 <= 1 && (v11 == 0 || v12 != 0) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && v10->field_8b == 0 || v12 == 0 && v9->field_28 <= v45 || v12 == 0 && v11 != 0 || v45 == 0 && v11 == 0 && v9->field_28 > v45)
    {
        v10->field_28 = v73;
        v10->field_58 = v47;
        v10->field_68 = v48;
        if (v45 > 1)
        {
            if (v10->field_88 == 0)
            {
                sub_4072d0();
            }
            else
            {
                v68 = sub_407480();
            }
        }
    }
    if (v10->field_38 <= v12 && (unsigned int)v45 <= 1 && v10->field_8b != 0 && (v11 == 0 || v12 != 0) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) || ((v11 == 0 || v12 != 0) && (v10->field_38 > v12 || (unsigned int)v45 > 1) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && v46 != 0 || (v11 == 0 || v12 != 0) && (v10->field_38 > v12 || (unsigned int)v45 > 1) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && v46 == 0 || v10->field_38 <= v12 && (unsigned int)v45 <= 1 && (v11 == 0 || v12 != 0) && (v12 != 0 || v9->field_28 > v45) && (v9->field_28 <= v45 || v45 != 0 || v11 != 0) && v10->field_8b == 0 || v12 == 0 && v9->field_28 <= v45 || v12 == 0 && v11 != 0 || v45 == 0 && v11 == 0 && v9->field_28 > v45) && v45 <= 1)
    {
        if (v10->field_8b == 0)
        {
            v10->field_30 = v47;
        }
        else if (v10->field_88 == 0)
        {
            v69 = v10->field_78;
            if (v10->field_78 != 0)
            {
                tmp_1 = v47;
                v71 = v10->field_30;
                tmp_19 = v10->field_40 <= v47;
                v72 = (v10->field_40 <= v47? v10->field_40 : v47);
                if ((tmp_19? v10->field_40 : tmp_1) <= v10->field_30)
                {
                    v72 = v71;
                }
                else
                {
                    while (true)
                    {
                        *((char *)(v10->field_8 + v71)) = v69[(unsigned long long)v73[v71 + v10->field_0]];
                        v71 += 1;
                        if (v72 == v71)
                        {
                            break;
                        }
                        v73 = v10->field_28;
                        v69 = v10->field_78;
                    }
                }
                v10->field_30 = v72;
                v10->field_38 = v72;
            }
        }
        else
        {
            sub_407250();
        }
    }
    if (...)
    {
        v10->field_48 = 0;
        v68 = 0;
    }
    return v68;
}

typedef struct struct_2 {
    uint128_t field_0;
    unsigned long long field_8;
    unsigned long long field_10;
} struct_2;

typedef struct struct_3 {
    uint128_t field_0;
    unsigned long long field_8;
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
} struct_5;

double sub_408f70()
{
    unsigned int v0;  // [bp-0x4c]
    unsigned long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    void *v3;  // [bp-0x38]
    struct_2 *v5;  // rsi
    struct_3 *v6;  // r14
    unsigned long long v7;  // rdi
    unsigned long long v8[7];  // r13
    unsigned long v9;  // rcx
    unsigned int v10;  // ebx
    void v11;  // xmm0
    struct_5 *v12;  // rsi
    unsigned long long v13;  // r9
    unsigned long long v14;  // r11
    unsigned long long v15;  // r10
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rdi
    unsigned long long *v18;  // rax
    unsigned long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // r12
    void v22;  // xmm0

    v6 = v5;
    v8 = v7;
    v10 = v9;
    v2 = 0;
    v1 = *((long long *)&((char *)&v5->field_0)[8]);
    v3 = malloc(*((long long *)&((char *)&v5->field_0)[8]) * 8);
    if (v3 != 0)
    {
        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v21 = 0;
            while (true)
            {
                v12 = v8[6] + *((long long *)(v6->field_8 + v21 * 8)) * 24;
                v13 = *((long long *)(v8[6] + *((long long *)(v6->field_8 + v21 * 8)) * 24 + 8));
                if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                {
                    v14 = v12->field_10;
                    v15 = *(v8);
                    v16 = 0;
                    while (true)
                    {
                        v17 = *((long long *)(v14 + v16 * 8));
                        v18 = *((long long *)(v14 + v16 * 8)) * 16 + v15;
                        if (v19 == *(v18) && v10 == (char)*((char *)((*((long long *)(v14 + (v16 << 3))) << 4) + v15 + 8)))
                        {
                            if (v17 == -1)
                            {
                                break;
                            }
                            v20 = sub_408670();
                            break;
                        }
                        if (v19 != *(v18) || v10 != (char)*((char *)((*((long long *)(v14 + (v16 << 3))) << 4) + v15 + 8)))
                        {
                            v16 += 1;
                            if (v13 == v16)
                            {
                                break;
                            }
                        }
                    }
                    if (v19 == *(v18) && v10 == (char)*((char *)((*((long long *)(v14 + (v16 << 3))) << 4) + v15 + 8)) && v17 != -1)
                    {
                        *((unsigned long long *)&v0) = v20;
                        free(v3);
                        return v22;
                    }
                    else if (true)
                    {
                        v20 = sub_408b40();
                    }
                    else if (v19 == *(v18) && v10 == (char)*((char *)((*((long long *)(v14 + (v16 << 3))) << 4) + v15 + 8)) && v17 != -1)
                    {
                        v21 += 1;
                        if (*((long long *)&((char *)&v6->field_0)[8]) <= v21)
                        {
                            break;
                        }
                    }
                }
                v20 = sub_408b40();
                if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || (unsigned int)v20 != 0)
                {
                    *((unsigned long long *)&v0) = v20;
                    free(v3);
                    return v22;
                }
            }
        }
        free(v6->field_8);
        v6->field_8 = v3;
        v6->field_0 = *((int128_t *)&v1);
        return *((int128_t *)&v1);
    }
    return v11;
}

int sub_413c70()
{
}

int sub_407220()
{
    char v1;  // dil
    unsigned int v2;  // ebx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    unsigned long v6;  // rbx

    v2 = v1;
    v4 = btowc((unsigned long long)v1);
    if ((unsigned int)v4 == -1)
    {
        v4 = (unsigned int)(v5 == 0? (unsigned int)v6 : (unsigned int)rax<8>);
    }
    return v4;
}

typedef struct struct_2 {
    char padding_0[200];
    unsigned long long field_c8;
    unsigned long long field_d0;
    unsigned long long field_d8;
    unsigned int field_e0;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_3 {
    char padding_0[32];
    char field_20;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char field_20;
    char padding_21[1];
    unsigned short field_22;
} struct_1;

int sub_40e000()
{
    unsigned long long v0;  // [bp-0x58]
    void tmp_21;  // tmp #21
    void tmp_24;  // tmp #24
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v3;  // rcx
    unsigned long long v5;  // r8
    unsigned long long v6;  // rbp
    unsigned long long v7;  // rdi
    struct_2 *v8;  // rbx
    struct_0 *v9;  // rdx
    unsigned long long v10;  // r15
    unsigned long v11;  // rdx
    unsigned long long *v12;  // rsi
    unsigned long long v13;  // rcx
    void *v14;  // rdi
    unsigned long long v15;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    struct_3 *v20;  // r8
    struct_1 *v21;  // rdi
    unsigned int v22;  // edx
    char v23;  // dl
    unsigned int v25;  // r15d

    v6 = v5;
    v8 = v7;
    v0 = 8;
    v17 = sub_40d010();
    if ((unsigned int)v17 == 0)
    {
        v10 = v9->field_8;
        v18 = v8->field_c8;
        v11 = v8->field_d0;
        v13 = *(v12);
        v14 = v8->field_d8;
        if (v8->field_c8 >= v8->field_d0)
        {
            v1 = *(v12);
            v15 = realloc(v14, v11 * 80);
            if (v15 != 0)
            {
                tmp_21 = v8->field_d0;
                tmp_24 = v8->field_c8;
                v1 = v1;
                v8->field_d8 = v15;
                memset(v15 + (tmp_24 + tmp_24 * 4) * 8, 0x0, (tmp_21 + tmp_21 * 4) * 8);
                v8->field_d0 = v8->field_d0 * 2;
                v18 = v8->field_c8;
                v14 = v8->field_d8;
                v13 = v1;
            }
            else
            {
                free(v8->field_d8);
                v17 = 12;
            }
        }
        if (v8->field_c8 < v8->field_d0 || v15 != 0)
        {
            v19 = v18 * 40;
            if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
            {
                v20 = v14 + v19 - 40;
                if (v6 == *((long long *)&((char *)v14)[v19 + -32]))
                {
                    v20->field_20 = 1;
                }
            }
            v21 = v14 + v19;
            v22 = 0;
            v23 = v10 == v13;
            v21->field_0 = v3;
            v21->field_8 = v6;
            *((unsigned long long *)&v21->field_22) = (unsigned int)(0 - rdx<4>);
            v21->field_10 = v13;
            v21->field_18 = v10;
            v8->field_c8 = v18 + 1;
            v21->field_20 = 0;
            if ((int)v8->field_e0 < v10 - v13)
            {
                v25 = v10 - v13;
                v8->field_e0 = v25;
            }
        }
    }
    if ((unsigned int)v17 != 0 || v15 == 0 && v8->field_c8 >= v8->field_d0)
    {
        return v17;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    unsigned long long field_28;
    unsigned long long field_30;
    char padding_38[16];
    unsigned long long field_48;
    char padding_50[24];
    unsigned long long field_68;
    char padding_70[27];
    char field_8b;
    char field_8c;
    char padding_8d[3];
    unsigned int field_90;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_3;

int sub_410ea0()
{
    void tmp_27;  // tmp #27
    char v0;  // [bp-0x30]
    struct_0 *v2;  // rsi
    struct_0 *v3;  // r10
    char v4[9];  // rdx
    char v5[9];  // rbp
    struct_1 *v6;  // rdi
    struct_3 *v7;  // rbx
    unsigned int *v8;  // r12
    unsigned long long v9;  // rax
    unsigned long v10;  // rcx
    void *v11;  // r11
    unsigned long long v12;  // r9
    unsigned long long v13;  // r8
    char v14;  // r9b
    unsigned long long v15;  // r12
    char *v16;  // rax
    char *v17;  // r11
    unsigned long long v18;  // r13
    void *v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax

    v3 = v2;
    v5 = v4;
    v7 = v6;
    v8 = v2->field_48;
    if (v2->field_90 != 1)
    {
        v9 = sub_4085b0();
        if ((unsigned int)v9 > 1)
        {
            tmp_27 = v3->field_10;
            v7->field_0 = 1;
            *((int *)&v7->field_8) = *((int *)(tmp_27 + v8 * 4));
            v3->field_48 = v9 + (char *)v8;
            return 0;
        }
    }
    if (v2->field_90 == 1 || (unsigned int)v9 <= 1)
    {
        v21 = v4[1];
        v11 = v10 + (char *)v8;
        v2->field_48 = v10 + (char *)v8;
        if ((char)((unsigned int)v21 & -5) != 26 && v4[1] != 28)
        {
            if (v4[1] == 22 && v14 == 0)
            {
                sub_406b10();
                v24 = 11;
            }
            if (v0 == 21 || v4[1] != 22 || v14 != 0)
            {
                v25 = v4[0];
                v7->field_0 = 0;
                *((unsigned long long *)&v7->field_8) = v25;
                v24 = 0;
            }
        }
        if (v4[1] == 28 || (char)((unsigned int)v21 & -5) == 26)
        {
            if (v10 + v2->field_48 < v2->field_68)
            {
                v12 = v4[0];
                v13 = 0;
                while (true)
                {
                    v15 = v13;
                    if (v21 == 30 && v2->field_8b != 0)
                    {
                        if (v2->field_8c == 0)
                        {
                            v16 = v11 + 1;
                            v17 = v11 + v3->field_0 + v3->field_28;
                            v3->field_48 = v16;
                            v18 = *(v17);
                        }
                        else if (v11 == v2->field_30 || *((int *)(v2->field_10 + (v11 << 2))) != -1)
                        {
                            v18 = (char)*((char *)(*((long long *)(v3->field_18 + v11 * 8)) + v3->field_0 + v3->field_28));
                            if ((*((char *)(*((long long *)(v3->field_18 + (v11 << 3))) + v3->field_0 + v3->field_28)) & 128) == 0)
                            {
                                v20 = 1;
                                if (v3->field_90 != 1)
                                {
                                    v20 = sub_4085b0();
                                }
                                v16 = v20 + v11;
                                v3->field_48 = v16;
                            }
                        }
                    }
                    if (v2->field_8b == 0 || v21 != 30 || v2->field_8c != 0 && (*((char *)(*((long long *)(v3->field_18 + (v11 << 3))) + v3->field_0 + v3->field_28)) & 128) != 0 || *((int *)(v2->field_10 + (v11 << 2))) == -1 && v11 != v2->field_30 && v2->field_8c != 0)
                    {
                        v19 = v3->field_8;
                        v16 = v11 + 1;
                        v3->field_48 = v11 + 1;
                        v18 = (char)*((char *)(v19 + v11));
                    }
                    if (v3->field_68 <= v16)
                    {
                        break;
                    }
                    if (v16[v3->field_8] == 93 && v12 == v18)
                    {
                        v3->field_48 = &v16[1];
                        v6->field_8[v15].field_0 = 0;
                        v23 = v5[1];
                        if (v5[1] == 28)
                        {
                            v6->field_0 = 2;
                            v24 = 0;
                        }
                        else if (v23 != 30)
                        {
                            v24 = 0;
                            if (v23 != 26)
                            {
                                break;
                            }
                            v6->field_0 = 3;
                        }
                        else
                        {
                            v6->field_0 = 4;
                            v24 = 0;
                        }
                    }
                    if (v16[v3->field_8] != 93 || v12 != v18)
                    {
                        *((unsigned long long *)&v6->field_8) = v18;
                        v13 = 1;
                        if (false)
                        {
                            break;
                        }
                        v21 = v5[1];
                        v11 = v3->field_48;
                    }
                }
                if (v16[v3->field_8] == 93 && v12 == v18 && v3->field_68 > v16)
                {
                    return v24;
                }
                return 7;
            }
            return 7;
        }
        if (v10 + v2->field_48 < v2->field_68 || v4[1] != 28 && (char)((unsigned int)v21 & -5) != 26)
        {
            return v24;
        }
    }
}

int sub_4113b0()
{
    unsigned int v1;  // r15d
    unsigned long long v2;  // r15

    v2 = v1 & 0x1200;
}

extern uint128_t g_61b8c0;
extern uint128_t g_61b8d0;
extern uint128_t g_61b8e0;
extern unsigned long long g_61b8f0;

int sub_4047ef()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_61b8f0;
    *((uint128_t *)&v0) = g_61b8c0;
    *((uint128_t *)&v1) = g_61b8d0;
    *((uint128_t *)&v2) = g_61b8e0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4041d0();
}

int sub_404fe0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_405230(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

int sub_4146ad()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp+0x0]
    unsigned long long v5;  // [bp+0x10]
    unsigned long long v6;  // [bp+0x18]
    unsigned long long v7;  // [bp+0x20]
    unsigned long v8;  // rbx
    unsigned long v9;  // r13
    unsigned long v10;  // r14
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r12
    unsigned long long v13;  // r13
    unsigned long long v15;  // r14

    v2 = v8;
    v1 = v9;
    v0 = v10;
    v11 = v3;
    v12 = v5;
    v13 = v6;
    v15 = v7;
    return (unsigned long long)(char)(sub_40ef10() != 0);
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_4081d0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned long long v3[13];  // rdi
    unsigned long long v4[13];  // rbx

    v0 = v2;
    v4 = v3;
    free(v3[6]);
    free(v4[9]);
    if (v4[10] != &v4[1])
    {
        free(*((long long *)(v4[10] + 16)));
        free(v4[10]);
    }
    free(v4[3]);
    free(v4[12]);
    free(v4[11]);
}

int sub_41466d()
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long v2;  // [bp-0x10]
    unsigned long v4;  // rbx

    v2 = v4;
    v1 = 0;
    v0 = 0;
}

int sub_414320()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x48]
    unsigned int v3;  // [bp-0x3c]
    unsigned long v5;  // [bp+0x10]
    unsigned long v6;  // [bp+0x18]
    unsigned int v7;  // [bp+0x20]
    unsigned long v8;  // r8
    unsigned long v9;  // rbp
    unsigned long v10;  // rdx
    unsigned long v11;  // rbx
    unsigned long v12;  // rdi
    unsigned long v14;  // r9
    unsigned long long v15;  // r13
    unsigned long long v16;  // rbx
    void *v17;  // rsi
    void *v19;  // rcx
    unsigned long long v21;  // r8
    unsigned long long v22;  // rax

    v9 = v8;
    v11 = v10;
    v12 = v8 % 0x8000000000000000;
    v21 = v7;
    if ((char)(v6 >> 63) == 0 && dil<1> == 0 && !((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, rbp<8>, cc_ndep<8>)))
    {
        if (v9 != 0)
        {
            v15 = 0;
            if (v11 != 0)
            {
                v3 = v7;
                v6 = v6;
                v2 = v14;
                v15 = malloc(v11 + v9);
                if (v15 != 0)
                {
                    memcpy(v15, v17, v11);
                    memcpy(v15 + v11, v19, v9);
                    v21 = v3;
                }
            }
        }
        else
        {
            v15 = 0;
        }
        if (v11 == 0 || v9 == 0 || v15 != 0)
        {
            v1 = v21;
            v0 = v5;
            v16 = (unsigned int)sub_413ec0();
            free(v15);
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x0<64>, 0x4<64>, rbx<8>, rbp<8>, cc_ndep<8>) || (char)(v6 >> 63) != 0 || dil<1> != 0 || v15 == 0 && v11 != 0 && v9 != 0)
    {
        v16 = -2;
    }
    v22 = v16;
    return v22;
}

extern char g_61b8c0;

int sub_404430()
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
    v3 = (v2 == 0? &g_61b8c0 : v2);
    *((int *)(tmp_11? &g_61b8c0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_61b8c0;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_61b8c0;
        abort(); /* do not return */
    }
}

int sub_406aa0()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r12
    unsigned long long v3;  // rdx
    unsigned long long v5;  // rdi
    unsigned long long v6[3];  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rax
    unsigned long long v9[3];  // rdx
    unsigned long long v10[3];  // rax
    unsigned long long v11[3];  // rbx
    unsigned long long v12[3];  // rsi

    v2 = v1;
    v11 = v5;
    while (true)
    {
        v10 = v11[1];
        if (v11[1] == 0)
        {
            v10 = v11[2];
            if (v11[2] == 0)
            {
                v6 = v11;
                v7 = v3;
                v8 = r12<8>();
                if ((unsigned int)v8 != 0)
                {
                    break;
                }
                while (true)
                {
                    v9 = *(v11);
                    v10 = v9[2];
                    v11 = v9;
                    if (*(v11) == 0 || v9[2] != v9 && v9[2] != 0)
                    {
                        break;
                    }
                    v12 = v11;
                    v8 = r12<8>();
                    if ((unsigned int)v8 != 0)
                    {
                        break;
                    }
                }
                if (*(v11) != 0)
                {
                    v11 = v10;
                }
                else
                {
                    return v8;
                }
            }
        }
        v11 = v10;
    }
    return v8;
}

int sub_4048a0()
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
    return sub_4041d0();
}

int sub_4145e0()
{
    char v0;  // [bp-0x8]
    unsigned long long v2[6];  // rdi
    unsigned long long v3[6];  // rbx
    void *v6;  // rdi

    v3 = v2;
    if (*(v2) != 0)
    {
        sub_40bbe0();
    }
    v3[0] = 0;
    v6 = v3[4];
    v3[1] = 0;
    free(v6);
    v3[4] = 0;
    v3[5] = 0;
    return (unsigned long long)free(*((long long *)(*((long long *)&v0) + 40)));
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

int sub_405ba0()
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

int sub_406ff0()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rbp
    unsigned long long v3[3];  // rdi
    unsigned long long v4[3];  // rbx
    unsigned long v5;  // rsi
    unsigned long long v6;  // rax
    unsigned long v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rcx
    unsigned long long v11[2];  // rdx
    unsigned long long v12;  // rcx

    v2 = v1;
    v4 = v3;
    if (*(v3) != 0)
    {
        v7 = v3[1];
        v8 = v3[2];
        if (v3[1] == 0)
        {
            *((unsigned long long *)v3[2]) = v2;
            v6 = 1;
            v3[1] = v3[1] + 1;
        }
        else
        {
            if (*(v3) == v3[1])
            {
                v5 = v3[1] * 16;
                *(v3) = v3[1] * 2;
                v8 = realloc(v8, v5);
                if (v8 != 0)
                {
                    v4[2] = v8;
                    v7 = v4[1];
                }
                else
                {
                    v6 = 0;
                }
            }
            if (v8 != 0 || *(v3) != v3[1])
            {
                v9 = v7 * 8;
                if (!(*((long long *)v8) > v2))
                {
                    v10 = *((long long *)(v8 + v9 - 8));
                    if (v2 < *((long long *)(v8 + v9 - 8)))
                    {
                        do
                        {
                            *((unsigned long long *)(v8 + v9)) = v10;
                            v9 -= 8;
                            v10 = *((long long *)(v8 + v9 - 8));
                        }
                        while (*((long long *)(v8 + v9 - 8)) > v2);
                    }
                }
                else if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
                {
                    v11 = v9 + v8;
                    do
                    {
                        v12 = v11[-1];
                        v11 = &v11[-1];
                        v11[1] = v12;
                    }
                    while (v11 != v8);
                    v9 = 0;
                }
                *((unsigned long long *)(v8 + v9)) = v2;
                v6 = 1;
                v4[1] = v4[1] + 1;
            }
        }
    }
    else
    {
        v3[0] = 1;
        v3[1] = 1;
        v6 = malloc(0x8);
        v3[2] = v6;
        if (v6 != 0)
        {
            *((unsigned long long *)v6) = v1;
            return 1;
        }
        v4[1] = 0;
        v4[0] = 0;
    }
    if (v6 == 0 || *(v3) != 0)
    {
        return v6;
    }
}

int sub_405040()
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
            sub_405230(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char field_a;
} struct_1;

int sub_407ea0()
{
    void tmp_125;  // tmp #125
    void tmp_167;  // tmp #167
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r13
    unsigned long long v4;  // rdi
    unsigned long long v5[5];  // rbx
    unsigned long long *v6;  // rax
    unsigned long long *v7;  // rdx
    unsigned long long *v8;  // rdi
    unsigned long long v9;  // r8
    unsigned short v10;  // di
    struct_1 *v11;  // rsi

    v2 = v1 * 16;
    v5 = v4;
    v6 = sub_407cd0();
    if (v6 != -1)
    {
        v8 = v7;
        v9 = *(v7);
        v10 = (unsigned short)v7 & 1023;
        v11 = v6 * 16 + *(v5);
        tmp_125 = *((int *)(v6 * 16 + *(v5) + 8)) & -261889 | (unsigned int)((unsigned long long)((unsigned int)rdi<8> & 1023) * 0x100);
        *((unsigned int *)(v6 * 16 + *(v5) + 8)) = *((int *)(v6 * 16 + *(v5) + 8)) & -261889 | (unsigned int)((unsigned long long)((unsigned int)rdi<8> & 1023) * 0x100);
        tmp_167 = ((unsigned int)((unsigned long long)(unsigned int)*((int *)(v9 + v2 + 8)) >> 8) | rdi<8>) & 1023;
        v11->field_8 = (unsigned int)((unsigned long long)(((unsigned int)((unsigned long long)(unsigned int)*((int *)(v9 + v2 + 8)) >> 8) | rdi<8>) & 1023) * 0x100) | (unsigned int)tmp_125 & -261889;
        *(&((char *)&v11->field_8)[2]) = (unsigned int)((unsigned long long)((unsigned int)(tmp_167 * 0x100) | (unsigned int)tmp_125 & -261889) >> 16) | 4;
        *((unsigned long long *)(v5[4] + v6 * 8)) = v1;
    }
    return v6;
}

int sub_4047e0()
{
}

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[72];
    struct struct_2 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[32];
    unsigned int field_e0;
} struct_1;

typedef struct struct_3 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[72];
    unsigned long long field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[32];
    unsigned int field_e0;
} struct_3;

typedef struct struct_4 {
    char padding_0[40];
    unsigned long long field_28;
    struct struct_5 *field_30;
    char padding_38[48];
    char field_68;
} struct_4;

int sub_40d010()
{
    unsigned int|unsigned long v0;  // [bp-0xf8]
    unsigned long long *v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    unsigned long long *v3;  // [bp-0xe0]
    unsigned long long v4[4];  // [bp-0xd8]
    unsigned long v5;  // [bp-0xd0]
    unsigned long v6;  // [bp-0xc0]
    unsigned long v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    unsigned long long v9[3];  // [bp-0xa8]
    unsigned long v10;  // [bp-0xa0]
    unsigned long v11;  // [bp-0x98]
    unsigned long v12;  // [bp-0x90]
    unsigned int v13;  // [bp-0x80]
    unsigned int v14;  // [bp-0x7c]
    uint128_t|unsigned long long v15;  // [bp-0x78]
    unsigned long long v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x68]
    uint128_t v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x50]
    unsigned long long v20;  // [bp-0x48]
    struct_1 *v22;  // rdi
    struct_3 *v23;  // r12
    unsigned long long v24;  // rcx
    unsigned long long v26[3];  // rsi
    unsigned long long v27;  // r15
    unsigned long v28;  // r8
    unsigned long long *v29;  // rdx
    unsigned long v30;  // r9
    unsigned long v31;  // rbx
    unsigned long long v34;  // rax
    unsigned long long *v36;  // r14
    unsigned long long v37;  // rcx
    unsigned long long|unsigned long long * v38;  // rax
    unsigned long long v39;  // r14
    unsigned long long *v40;  // r13
    unsigned long long v41;  // rax
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rdx
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v47;  // rax
    unsigned long long v49;  // r14
    struct_4 *v50;  // r15
    unsigned long long|unsigned long long * v51;  // rbx
    unsigned long long v52;  // rax

    v23 = v22;
    v27 = v26[1];
    v9[0] = v26;
    v12 = v28;
    v4[0] = v22->field_98;
    v6 = *((long long *)(v29 * 16 + v22->field_98->field_0));
    v13 = 0;
    if ((int)v22->field_e0 + v30 >= v26[1])
    {
        v31 = (int)v22->field_e0 + v30 + 1;
        if (9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1 && v27 + v31 <= 2305843009213693951)
        {
            v34 = realloc(v9[2], (v26[1] + (int)v22->field_e0 + v30 + 1) * 8);
            if (v34 != 0)
            {
                v9[2] = v34;
                v9[1] = v27 + v31;
                memset(v34 + v27 * 8, 0x0, v31 * 8);
            }
        }
    }
    if ((int)v22->field_e0 + v30 < v26[1] || v27 + v31 <= 2305843009213693951 && v34 != 0 && 9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1)
    {
        v51 = *(v9);
        v36 = v9[2];
        v10 = v23->field_b8;
        v37 = v23->field_48;
        *((unsigned long long [3])&v23->field_b8) = v9[2];
        v11 = v37;
        v15 = 1;
        v16 = 1;
        v17 = malloc(0x8);
    }
    if ((int)v22->field_e0 + v30 < v26[1] || v27 + v31 <= 2305843009213693951 && v34 != 0 && 9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1)
    {
        if (v51 != 0)
        {
            v23->field_48 = v51;
            v0 = sub_40a330();
        }
        else
        {
            v23->field_48 = v51;
            v0 = sub_40a330();
        }
        if (v17 != 0)
        {
            *((unsigned long long **)v17) = v29;
            v51 = v24;
            v13 = 0;
            v13 = (int)sub_408f70();
            if (v13 == 0 && v16 != 0)
            {
                v13 = sub_409e50();
            }
        }
    }
    if (false)
    {
        v50 = *((long long *)((char *)v36 + 0x8 * v51));
        v17 = 0;
        v15 = 0;
        v52 = sub_4096a0();
        v13 = v52;
    }
    if (v17 == 0 || v34 == 0 && (int)v22->field_e0 + v30 >= v26[1] || 9223372036854775807 - v26[1] < (int)v22->field_e0 + v30 + 1 && (int)v22->field_e0 + v30 >= v26[1] || v27 + v31 > 2305843009213693951 && (int)v22->field_e0 + v30 >= v26[1])
    {
        v52 = 12;
    }
    if (v13 == 0 && v17 != 0 && (v27 + v31 <= 2305843009213693951 || (int)v22->field_e0 + v30 < v26[1]) && ((int)v22->field_e0 + v30 < v26[1] || v34 != 0) && ((int)v22->field_e0 + v30 < v26[1] || 9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1) && v16 != 0 || v13 == 0 && v17 != 0 && (v27 + v31 <= 2305843009213693951 || (int)v22->field_e0 + v30 < v26[1]) && ((int)v22->field_e0 + v30 < v26[1] || v34 != 0) && ((int)v22->field_e0 + v30 < v26[1] || 9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1) && v16 == 0)
    {
        v50 = (unsigned long long)(unsigned int)sub_4098b0();
    }
    if ((v13 == 0 && v17 != 0 && (v27 + v31 <= 2305843009213693951 || (int)v22->field_e0 + v30 < v26[1]) && ((int)v22->field_e0 + v30 < v26[1] || v34 != 0) && ((int)v22->field_e0 + v30 < v26[1] || 9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1) && v16 != 0 || v13 == 0 && v17 != 0 && (v27 + v31 <= 2305843009213693951 || (int)v22->field_e0 + v30 < v26[1]) && ((int)v22->field_e0 + v30 < v26[1] || v34 != 0) && ((int)v22->field_e0 + v30 < v26[1] || 9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1) && v16 == 0) && v50 == 0 && v13 == 0 || (v13 == 0 && v17 != 0 && (v27 + v31 <= 2305843009213693951 || (int)v22->field_e0 + v30 < v26[1]) && ((int)v22->field_e0 + v30 < v26[1] || v34 != 0) && ((int)v22->field_e0 + v30 < v26[1] || 9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1) && v16 != 0 || v13 == 0 && v17 != 0 && (v27 + v31 <= 2305843009213693951 || (int)v22->field_e0 + v30 < v26[1]) && ((int)v22->field_e0 + v30 < v26[1] || v34 != 0) && ((int)v22->field_e0 + v30 < v26[1] || 9223372036854775807 - v26[1] >= (int)v22->field_e0 + v30 + 1) && v16 == 0) && v50 != 0)
    {
        *((struct_4 **)(v23->field_b8 + v51 * 8)) = v50;
        if (v51 < v30 && v23->field_e0 >= 0)
        {
            v2 = 0;
            v38 = v23->field_b8;
            v49 = (char *)v51 + 1;
            do
            {
                v16 = 0;
                v0 = v49 - 1;
                v3 = v49 * 8;
                if (v38[v49] != 0)
                {
                    v13 = sub_408b40();
                    if (v13 != 0)
                    {
                        break;
                    }
                }
                else if (v50 == 0)
                {
                    v51 = v49;
                }
                if (v50 != 0 && (v13 == 0 || v38[v49] == 0))
                {
                    v14 = 0;
                    v18 = 0;
                    v20 = 0;
                    if (v50->field_28 > 0)
                    {
                        v8 = v49;
                        v5 = &v22->field_98[6].field_18;
                        v39 = 0;
                        while (true)
                        {
                            v40 = v50->field_30[v39];
                            if ((*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) != 0)
                            {
                                v41 = sub_40cd80();
                                if ((unsigned int)v41 > 1)
                                {
                                    v1 = v40 * 8;
                                    v42 = v41 + v0;
                                    v43 = *((long long *)(v22->field_98->field_18 + v40 * 8));
                                    v19 = 0;
                                    if (*((long long *)(v23->field_b8 + (v41 + v0 << 3))) != 0)
                                    {
                                        v7 = v43;
                                        v14 = sub_408b40();
                                    }
                                    if (v14 == 0 || *((long long *)(v23->field_b8 + (v41 + v0 << 3))) == 0)
                                    {
                                        v45 = sub_406ff0();
                                        if (v45 != 0)
                                        {
                                            *((unsigned long long *)(v42 * 8 + v23->field_b8)) = (unsigned int)sub_409bb0();
                                        }
                                    }
                                    if (v14 != 0 && (*((long long *)(v23->field_b8 + (v42 << 3))) == 0 || *((long long *)(v23->field_b8 + (v41 + v0 << 3))) != 0) && (*((long long *)(v23->field_b8 + (v41 + v0 << 3))) != 0 || v45 != 0))
                                    {
                                        v49 = v8;
                                        free(v20);
                                        v13 = v14;
                                        if (v14 != 0)
                                        {
                                            break;
                                        }
                                    }
                                }
                            }
                            if ((*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) == 0 || (unsigned int)v41 == 0 && (unsigned int)v41 <= 1)
                            {
                                v44 = sub_40a420();
                            }
                            if (((*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) == 0 || (unsigned int)v41 <= 1) && ((unsigned int)v41 != 0 || v44 != 0) && ((*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) != 0 || v44 != 0))
                            {
                                v1 = v40 * 8;
                            }
                            if ((*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) == 0 && v44 != 0 || (unsigned int)v41 <= 1 && v44 != 0 || (unsigned int)v41 <= 1 && (unsigned int)v41 != 0 && (*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) != 0 || v14 == 0 && v45 != 0 && (*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) != 0 && (unsigned int)v41 > 1 || *((long long *)(v23->field_b8 + (v41 + v0 << 3))) == 0 && *((long long *)(v23->field_b8 + (v42 << 3))) != 0 && v45 != 0 && (*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) != 0 && (unsigned int)v41 > 1)
                            {
                                v47 = sub_406ff0();
                            }
                            if (...)
                            {
                                free(v20);
                                v13 = 12;
                            }
                            if (...)
                            {
                                v39 += 1;
                                v49 = v8;
                            }
                        }
                        if (v39 >= v50->field_28 && (v44 == 0 || v47 != 0))
                        {
                            free(NULL);
                            v13 = 0;
                        }
                        else if (false)
                        {
                            v51 = v49;
                        }
                        else if (v47 == 0 || *((long long *)(v23->field_b8 + (v42 << 3))) == 0 && v14 != 0 || v45 == 0 && (*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) != 0 && (unsigned int)v41 > 1 || v14 != 0 && *((long long *)(v23->field_b8 + (v41 + v0 << 3))) != 0 && (*((char *)(v22->field_98->field_0 + (v50->field_30[v39] << 4) + 10)) & 16) != 0 && (unsigned int)v41 > 1)
                        {
                            free(v17);
                            v52 = v13;
                        }
                    }
                    free(NULL);
                    v13 = 0;
                }
                if (v13 == 0 && v38[v49] != 0 || v38[v49] == 0 && v50 != 0)
                {
                    v51 = v49;
                    if (v16 != 0)
                    {
                        v13 = (int)sub_408f70();
                        v13 = sub_409e50();
                        if (v13 != 0)
                        {
                            break;
                        }
                    }
                }
                sub_40a330();
                v50 = (unsigned long long)(unsigned int)sub_4098b0();
                if (v50 != 0)
                {
                    v38 = v23->field_b8;
                    v2 = 0;
                    *((struct_4 **)&((char *)v3)[v23->field_b8]) = v50;
                }
                else
                {
                    if (v13 != 0)
                    {
                        break;
                    }
                    v38 = v23->field_b8;
                    v2 += 1;
                    *((long long *)&((char *)v3)[v23->field_b8]) = 0;
                }
                if (v30 <= v49)
                {
                    break;
                }
                v49 += 1;
            }
            while ((int)v23->field_e0 >= v2);
            if (v50 == 0 || v38[v49] != 0 || v16 != 0 || v50 != 0 && v50->field_28 > 0)
            {
                free(v17);
                v52 = v13;
            }
            else if (v13 == 0 || v50 != 0)
            {
                free(v17);
            }
        }
    }
    if (...)
    {
        free(v17);
        v52 = v13;
    }
    if (...)
    {
        free(v17);
        if (*((long long *)(v23->field_b8 + (v30 << 3))) != 0)
        {
            v9[0] = v51;
            v23->field_b8 = v10;
            v23->field_48 = v11;
            v52 = (char)(sub_408600() == 0);
        }
        else
        {
            v9[0] = v51;
            v23->field_b8 = v10;
            v23->field_48 = v11;
            v52 = 1;
        }
    }
    return v52;
}

int sub_405b60()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_405ba0();
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[16];
    unsigned long long field_58;
    unsigned long long field_60;
    unsigned long long field_68;
    char padding_70[8];
    unsigned long long field_78;
    char padding_80[10];
    char field_8a;
    char padding_8b[1];
    char field_8c;
    char padding_8d[3];
    unsigned int field_90;
} struct_0;

int sub_407480()
{
    unsigned long long|unsigned int|void *|unsigned long v0;  // [bp-0xa8]
    void tmp_24;  // tmp #24
    void tmp_25;  // tmp #25
    unsigned long long|unsigned int|unsigned long v1;  // [bp-0xa0]
    unsigned long long|void *|unsigned long v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    unsigned int v4;  // [bp-0x84]
    unsigned long v5;  // [bp-0x80]
    char v6;  // [bp-0x78]
    struct_0 *v8;  // rdi
    struct_0 *v9;  // r14
    void *v10;  // rbp
    unsigned int *v11;  // r13
    unsigned long long v12;  // rax
    unsigned long v14;  // r12
    unsigned int v15;  // r13d
    unsigned int v16;  // eax
    unsigned long long v18;  // rax
    unsigned long long v20;  // rax
    unsigned int *v23;  // rcx
    unsigned long long v24;  // rax
    char *v25;  // rdx
    unsigned long long v27;  // r10
    unsigned long long v28;  // rax
    unsigned long long v29;  // rdi
    unsigned long v30;  // rbp
    unsigned int v31;  // r13d
    char *v33;  // rax
    unsigned long v34;  // r10
    void *v35;  // rcx
    void *v37;  // r8
    unsigned long v40;  // rax
    unsigned long long v41;  // rax
    void *v42;  // rax
    void *v43;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    void *v47;  // rsi
    void *v48;  // rdx
    unsigned long long v49;  // rcx
    unsigned int *v50;  // rdx
    void *v52;  // r15
    unsigned long long v54;  // rsi
    unsigned long long v55;  // rcx
    unsigned long long v56;  // rax
    unsigned long long v57;  // r10
    unsigned long long v58;  // rbx
    unsigned long v59;  // rbx
    unsigned long long|void * v60;  // r12
    unsigned long long v61;  // rax

    v9 = v8;
    v59 = (v8->field_40 <= v8->field_58? v8->field_40 : v8->field_58);
    v52 = v8->field_30;
    if (v8->field_8a == 0 && v8->field_78 == 0 && v8->field_8c == 0)
    {
        if (v8->field_30 < (v8->field_40 <= v8->field_58? v8->field_40 : v8->field_58))
        {
            v0 = &v8->field_20;
            do
            {
                v10 = v52;
                v11 = (unsigned long long)(char)*(&((char *)v52)[v9->field_0 + v9->field_28]);
                if ((*(&((char *)v52)[v9->field_0 + v9->field_28]) & 128) == 0)
                {
                    v12 = mbsinit(v0);
                    if (v12 != 0)
                    {
                        *((unsigned long long *)&((char *)v52)[v9->field_8]) = (unsigned int)*((int *)(*((long long *)(unsigned long long)__ctype_toupper_loc()) + v11 * 4));
                        *((unsigned int *)(v9->field_10 + v52 * 4)) = (char)*(&((char *)v52)[v9->field_8]);
                        v52 += 1;
                    }
                }
                if (v12 == 0 || (*(&((char *)v52)[v9->field_0 + v9->field_28]) & 128) != 0)
                {
                    v5 = v9->field_20;
                    v2 = (v8->field_40 <= v8->field_58? v8->field_40 : v8->field_58) - v52;
                    v3 = stack_base + -132;
                    v14 = (unsigned int)sub_4069d0();
                    if (v14 <= -3)
                    {
                        v1 = v4;
                        v15 = towupper(v4);
                        if (v1 != v15)
                        {
                            v18 = wcrtomb((unsigned int)&v6, v15, (unsigned int)&v5);
                            if (v14 == v18)
                            {
                                memcpy(v9->field_8 + v52, &v6, v14);
                            }
                            else
                            {
                                v60 = v52;
                            }
                        }
                        else
                        {
                            memcpy(v9->field_8 + v52, v9->field_28 + v52 + v9->field_0, v14);
                        }
                        if (v14 == v18 || v1 == v15)
                        {
                            v20 = v9->field_10;
                            v52 += 1;
                            *((unsigned int *)(v9->field_10 + v10 * 4)) = v15;
                            if (v52 < v52)
                            {
                                v23 = v20 + v10 * 4 + 4;
                                v24 = v20 + v52 * 4;
                                do
                                {
                                    *(v23) = -1;
                                    v23 = &v23[1];
                                }
                                while (v24 != v23);
                                v52 = v10 + v14;
                            }
                        }
                    }
                    else if (v14 != -2)
                    {
                        tmp_24 = (char)*(&((char *)v52)[v9->field_28 + v9->field_0]);
                        *(&((char *)v52)[v9->field_8]) = *(&((char *)v52)[v9->field_28 + v9->field_0]);
                        v52 += 1;
                        *((unsigned int *)(v9->field_10 + v10 * 4)) = tmp_24;
                        v9->field_20 = v5;
                    }
                    else if (v9->field_40 >= v9->field_58)
                    {
                        v16 = (char)*(&((char *)v52)[v9->field_28 + v9->field_0]);
                        *(&((char *)v52)[v9->field_8]) = *(&((char *)v52)[v9->field_28 + v9->field_0]);
                        v52 += 1;
                        *((unsigned int *)(v9->field_10 + v10 * 4)) = v16;
                    }
                    else
                    {
                        v9->field_20 = v5;
                    }
                }
            }
            while (!((v14 == v18 && v14 <= -3 || v14 <= -3 && v1 == v15 || (*(&((char *)v52)[v9->field_0 + v9->field_28]) & 128) == 0 && v12 != 0 || v14 != -2 && v14 > -3 || v14 > -3 && v9->field_40 >= v9->field_58) && (v8->field_40 <= v8->field_58? v8->field_40 : v8->field_58) <= v52));
            if (v14 <= -3 && v14 != v18 && v1 != v15 && (v12 == 0 || (*(&((char *)v52)[v9->field_0 + v9->field_28]) & 128) != 0))
            {
                v25 = v9->field_78;
                v5 = v9->field_20;
            }
            else
            {
                v9->field_30 = v52;
                v61 = 0;
                v9->field_38 = v52;
            }
        }
        if (v9->field_78 != 0 || v8->field_30 >= (v8->field_40 <= v8->field_58? v8->field_40 : v8->field_58))
        {
            v9->field_30 = v52;
            v61 = 0;
            v9->field_38 = v52;
        }
    }
    if (v8->field_8c != 0 || v8->field_78 != 0 || v8->field_8a != 0)
    {
        v60 = v8->field_38;
    }
    v25 = v9->field_78;
    v5 = v9->field_20;
    if (v9->field_78 == 0)
    {
        v1 = v9->field_28 + v60 + v9->field_0;
    }
    else
    {
        if (v9->field_90 > 0 && v2 > 0)
        {
            v27 = (unsigned long long)v9->field_90 - 1;
            v28 = 0;
            v29 = v9->field_28 + v60 + v9->field_0;
            do
            {
                v6 = v25[(unsigned long long)(char)*((char *)(v29 + v28))];
                v28 += 1;
            }
            while (v2 != v28 && v27 != v28);
        }
        v1 = &v6;
    }
    v30 = (unsigned int)sub_4069d0();
    if (v30 <= -3)
    {
        v0 = v4;
        v31 = towupper(v4);
        if (v0 != v31)
        {
            v2 = v52;
            v0 = &v6;
            v34 = wcrtomb((unsigned int)&v6, v31, (unsigned int)&v5);
            if (v30 == v34)
            {
                v0 = v2;
                memcpy(v9->field_8 + v52, &v6, v30);
                v37 = v0;
            }
            else
            {
                if (v34 != -1)
                {
                    v0 = v52 + v34;
                    v40 = v9->field_40;
                    if (v52 + v34 <= v9->field_40)
                    {
                        if (v9->field_18 == 0)
                        {
                            v2 = &v6;
                            v1 = v34;
                            v41 = malloc(v40 * 8);
                            v34 = v1;
                            v9->field_18 = v41;
                            if (v41 == 0)
                            {
                                v61 = 12;
                            }
                        }
                        if (v9->field_18 != 0 || v41 != 0)
                        {
                            if (v9->field_8c == 0)
                            {
                                if (v52 != 0)
                                {
                                    v45 = 0;
                                    do
                                    {
                                        *((unsigned long long *)(v9->field_18 + v45 * 8)) = v45;
                                        v45 += 1;
                                    }
                                    while (v52 != v45);
                                }
                                v9->field_8c = 1;
                            }
                            v1 = v34;
                            memcpy(v9->field_8 + v52, &v6, v34);
                            v54 = v9->field_10 + v52 * 4;
                            tmp_25 = v9->field_18;
                            *((unsigned int *)(v9->field_10 + v52 * 4)) = v31;
                            v55 = tmp_25 + v52 * 8;
                            v56 = 1;
                            *((void **)(tmp_25 + v52 * 8)) = v60;
                            if (v1 > 1)
                            {
                                do
                                {
                                    *((void **)(v55 + v56 * 8)) = (v30 <= v56? v30 - 1 : v56) + v60;
                                    *((int *)(v54 + v56 * 4)) = -1;
                                    v56 += 1;
                                }
                                while (v56 != v1);
                            }
                            v57 = v1 - v30;
                            v58 = v9->field_58 + v57;
                            v9->field_58 = v9->field_58 + v57;
                            if (v60 < v9->field_60)
                            {
                                v9->field_68 = v9->field_68 + v57;
                            }
                            v52 = v0;
                            v59 = (v9->field_40 <= v58? v9->field_40 : v58);
                            v60 += v30;
                        }
                    }
                }
            }
        }
        if ((v0 == v31 || v34 == -1) && (v0 == v31 || v30 != v34))
        {
            v0 = v37;
            memcpy(v9->field_8 + v52, v1, v30);
            v37 = v0;
        }
        if (v0 == v31 || v30 == v34 || v34 == -1)
        {
            if (v9->field_8c == 0)
            {
                v42 = v60 + v30;
            }
            else
            {
                v42 = v60;
                if (v30 != 0)
                {
                    v42 = v30 + v60;
                    v43 = v9->field_18 + (v52 - v60) * 8;
                    do
                    {
                        *((void **)((char *)v43 + 0x8 * v60)) = v60;
                        v60 += 1;
                    }
                    while (v42 != v60);
                }
            }
            v60 = v42;
            v46 = v9->field_10;
            v52 += 1;
            v47 = v37 + v30;
            v48 = v37 * 4;
            *((unsigned int *)(v9->field_10 + v37 * 4)) = v31;
            if (v52 < v37 + v30)
            {
                v50 = v46 + v48 + 4;
                v49 = v46 + v52 * 4;
                do
                {
                    *(v50) = -1;
                    v50 = &v50[1];
                }
                while (v49 != v50);
                v52 = v47;
            }
        }
    }
    else if (v9->field_40 >= v9->field_58 || v30 != -2)
    {
        v33 = (unsigned long long)(char)*(&((char *)v60)[v9->field_28 + v9->field_0]);
        if (v9->field_78 != 0)
        {
            v33 = (unsigned long long)v33[v9->field_78];
        }
        v35 = v52;
        *((char **)&((char *)v52)[v9->field_8]) = v33;
        if (v9->field_8c != 0)
        {
            *((void **)(v9->field_18 + v52 * 8)) = v60;
        }
        v60 += 1;
        v52 += 1;
        *((unsigned int *)(v9->field_10 + v35 * 4)) = (unsigned int)v33;
        if (v30 == -1)
        {
            v9->field_20 = v5;
        }
    }
    if ((v30 > -3 && (v9->field_40 >= v9->field_58 || v30 != -2) || v30 <= -3 && (v0 == v31 || v30 == v34 || v34 == -1) || v52 + v34 <= v9->field_40 && v30 <= -3 && v0 != v31 && v30 != v34 && v34 != -1 && (v9->field_18 != 0 || v41 != 0) || v8->field_8c != 0 || v8->field_78 != 0 || v8->field_8a != 0) && v52 < v59)
    {
        v0 = &v9->field_20;
        v2 = v59 - v52;
        v3 = stack_base + -132;
    }
    if ((v9->field_40 < v9->field_58 || v30 <= -3) && (v30 <= -3 || v30 == -2) && (v0 != v31 || v30 > -3) && (v30 != v34 || v30 > -3) && (v52 + v34 > v9->field_40 || v30 > -3) && (v30 > -3 || v34 != -1))
    {
        v9->field_20 = v5;
    }
    if ((v9->field_40 < v9->field_58 || v30 <= -3) && (v30 <= -3 || v30 == -2) && (v0 != v31 || v30 > -3) && (v30 != v34 || v30 > -3) && (v52 + v34 > v9->field_40 || v30 > -3) && (v30 > -3 || v34 != -1) || (v30 > -3 && (v9->field_40 >= v9->field_58 || v30 != -2) || v30 <= -3 && (v0 == v31 || v30 == v34 || v34 == -1) || v52 + v34 <= v9->field_40 && v30 <= -3 && v0 != v31 && v30 != v34 && v34 != -1 && (v9->field_18 != 0 || v41 != 0) || v8->field_8c != 0 || v8->field_78 != 0 || v8->field_8a != 0) && v52 >= v59)
    {
        v9->field_30 = v52;
        v61 = 0;
        v9->field_38 = v60;
    }
    return v61;
}

extern unsigned int g_414e84;
extern unsigned long long g_61b250;
extern unsigned long long g_61b270;
extern unsigned long long g_61b370;

int sub_4023b0()
{
    __printf_chk(0x1, g_61b250);
    if (g_61b370 <= g_61b270 + g_61b370)
    {
        g_61b370 = g_61b270 + g_61b370;
        return g_61b370;
    }
    error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x414e84, 0x5));
}

int sub_413ca0()
{
}

typedef struct struct_0 {
    char padding_0[216];
    unsigned long long field_d8;
} struct_0;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
} struct_2;

int sub_406e70()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rsi
    struct_0 *v3;  // rdi
    unsigned long v6;  // r8
    unsigned long long v7;  // rax

    v2 = v1 * 5;
    if (*((long long *)(v3->field_d8 + (v2 << 3) + 16)) <= v6)
    {
        v7 = *((long long *)(v3->field_d8 + v2 * 8 + 24));
        if (!(v7 >= v6))
        {
            return 1;
        }
        else if (v7 != v6)
        {
            if (*((long long *)(v3->field_d8 + v2 * 8 + 16)) != v6)
            {
                return 0;
            }
        }
    }
    else
    {
        return -18446744069414584321;
    }
}

extern int512_t g_61b8c0;

int sub_4043c0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_61b8c0 : v1)) = v2;
    return &g_61b8c0;
}

int sub_404e20()
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

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char field_38;
} struct_0;

int sub_413ec0()
{
    unsigned long long v0;  // [bp-0x88]
    void tmp_23;  // tmp #23
    unsigned long long|unsigned long v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x78]
    unsigned long long|unsigned int|unsigned long v3;  // [bp-0x60]
    unsigned long long|void *|unsigned long v4;  // [bp-0x58]
    unsigned long long|char v5;  // [bp-0x50]
    unsigned long v6;  // [bp-0x48]
    unsigned int v7;  // [bp-0x40]
    unsigned int v8;  // [bp-0x3c]
    unsigned long long v9;  // [bp+0x8]
    unsigned int v10;  // [bp+0x10]
    unsigned long long v11;  // r8
    unsigned long long v12;  // rax
    unsigned long long v13;  // rcx
    unsigned long long v14;  // r12
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rbx
    unsigned long v17;  // rsi
    struct_0 *v18;  // rdi
    struct_0 *v19;  // r15
    unsigned long long v20;  // r8
    unsigned long long v21;  // rax
    unsigned int v22;  // ecx
    char v23;  // cl
    unsigned int v24;  // ecx
    char v25;  // cl
    unsigned long v26;  // r9
    unsigned long long v28;  // rax
    unsigned long long v29;  // rcx
    unsigned long long v30;  // r14
    unsigned long long v31;  // r13
    unsigned long long v32;  // rdi
    void *v33;  // rbp
    unsigned long long v34;  // rax
    unsigned int v35;  // eax
    unsigned long long v36;  // rdx
    unsigned int v37;  // al
    unsigned int v38;  // eax
    unsigned long v39;  // r14
    void *v40;  // rax
    unsigned long long v41;  // rax
    void *v42;  // r14
    unsigned long long v43;  // rax
    unsigned long long v44;  // rdx
    unsigned long long v45;  // r8
    unsigned long long v46;  // rdi
    unsigned long long v47;  // rax
    unsigned long long v48;  // rsi
    unsigned long long v49;  // rsi
    unsigned long long v50;  // rcx
    unsigned long long v51;  // r9
    unsigned long long v52;  // r12
    unsigned long long v53;  // rax

    v12 = v11;
    v20 = v11 + v13;
    v14 = v9;
    v7 = v10;
    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v13 <= v15)
    {
        v16 = v13;
        v3 = v17;
        v19 = v18;
        if (v20 <= v15)
        {
            if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))
            {
            }
            else
            {
                v21 = v19->field_38;
                v20 = 0;
                v22 = v19->field_38;
                v23 = (unsigned long long)v19->field_38 >> 5;
                v8 = rcx<4> & 3;
            }
        }
        if (v20 > v15 || v13 > v20 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))
        {
            v20 = v15;
        }
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) || v20 > v15)
        {
            v21 = v19->field_38;
            v24 = v19->field_38;
            v25 = (unsigned long long)v19->field_38 >> 5;
            v8 = rcx<4> & 3;
            if (v20 > v13 && v19->field_20 != 0 && (v18->field_38 & 8) == 0)
            {
                v6 = v26;
                v5 = v15;
                v4 = v20;
                sub_413df0();
                v21 = v19->field_38;
                v20 = v4;
            }
        }
        if ((v21 & 16) == 0 && v9 != 0)
        {
            v28 = (unsigned int)v21 & 6;
            v29 = v19->field_30;
            if (v28 == 4)
            {
                v30 = *((long long *)v14);
                if (*((long long *)v14) <= v18->field_30)
                {
                    v31 = v30;
                }
            }
            if (*((long long *)v14) > v18->field_30 || v28 != 4)
            {
                v30 = v29 + 1;
                v31 = v29 + 1;
            }
            if (*((long long *)v14) > v18->field_30 || !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) || v28 != 4)
            {
                v32 = v30 * 16;
            }
        }
        if (v9 == 0 || (v21 & 16) != 0 || *((long long *)v14) <= v18->field_30 && (char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>) && v28 == 4)
        {
            v32 = 16;
            v30 = 1;
            v31 = 1;
            v14 = 0;
        }
        v6 = v6;
        v5 = v5;
        v4 = v20;
        v33 = malloc(v32);
        if (v1 != 0)
        {
            v2 = v8;
            v1 = v33;
            v0 = v30;
            v34 = sub_40ef10();
            if (v34 != 0)
            {
                v52 = -1;
            }
            else if (v14 != 0)
            {
                v35 = v19->field_38;
                v36 = v31 + 1;
                v37 = (char)((unsigned long long)v19->field_38 >> 1);
                v38 = rax<4> & 3;
                if (!(v38 != 0))
                {
                    v39 = v3 * 8;
                    v3 = v36;
                    v40 = malloc(v3 * 8);
                    *((unsigned long long *)(v14 + 8)) = v4;
                    if (v4 != 0)
                    {
                        v3 = v3;
                        v4 = v40;
                        v41 = malloc(v39);
                        *((unsigned long long *)(v14 + 16)) = v41;
                        if (v41 != 0)
                        {
                            *((unsigned long long *)v14) = v3;
                            v51 = 1;
                        }
                        else
                        {
                            free(v4);
                        }
                    }
                }
                else if (v38 != 1)
                {
                    if (!(v38 == 2))
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if (v30 <= *((long long *)v14))
                    {
                        v51 = 2;
                    }
                    else
                    {
                        __assert_fail(); /* do not return */
                    }
                }
                else
                {
                    if (*((long long *)v14) < v3)
                    {
                        v5 = 1;
                        v4 = v3;
                        *((unsigned long *)&v3) = v3 * 8;
                        v42 = realloc(*((long long *)(v14 + 8)), v3 * 8);
                        if (v42 != 0)
                        {
                            v43 = realloc(*((long long *)(v14 + 16)), *((long long *)&v3));
                            v51 = v5;
                            if (v43 != 0)
                            {
                                *((void **)(v14 + 8)) = v42;
                                *((unsigned long long *)(v14 + 16)) = v43;
                                *((unsigned long *)v14) = v4;
                            }
                            else
                            {
                                free(v42);
                                v51 = 0;
                            }
                        }
                    }
                }
                if (v38 == 1)
                {
                    v51 = 1;
                }
            }
        }
        else
        {
            v52 = -2;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>) || v13 > v15)
    {
        v52 = -1;
    }
    if (v34 == 0 && v38 == 1 && v13 <= v15 && v38 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v14 != 0 && v1 != 0 && *((long long *)v14) < v3 && v42 == 0 || v38 == 0 && v34 == 0 && v13 <= v15 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v14 != 0 && v4 != 0 && v1 != 0 && v41 == 0 || v38 == 0 && v34 == 0 && v13 <= v15 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v14 != 0 && v1 != 0 && v4 == 0)
    {
        v51 = 0;
    }
    if (v38 == 2 && v34 == 0 && v13 <= v15 && v38 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v14 != 0 && v38 != 1 && v1 != 0 && v30 <= *((long long *)v14) || v34 == 0 && v38 == 1 && v13 <= v15 && v38 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v14 != 0 && v1 != 0 && *((long long *)v14) < v3 && v42 != 0 && v43 != 0 || v34 == 0 && v38 == 1 && v13 <= v15 && v38 != 0 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v14 != 0 && v1 != 0 && *((long long *)v14) >= v3 || v38 == 0 && v34 == 0 && v13 <= v15 && !((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)) && v14 != 0 && v4 != 0 && v1 != 0 && v41 != 0)
    {
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))
        {
            v45 = *((long long *)(v14 + 8));
            v46 = *((long long *)(v14 + 16));
            v44 = v31;
            v47 = 0;
            v48 = v31 * 8;
            do
            {
                *((long long *)(v45 + v47)) = *((long long *)(v1 + v47 * 2));
                *((long long *)(v46 + v47)) = *((long long *)(v1 + v47 * 2 + 8));
                v47 += 8;
            }
            while (v47 != v48);
        }
        else
        {
            v44 = 0;
            v31 = 0;
        }
        if (*((long long *)v14) > v44)
        {
            v49 = *((long long *)(v14 + 16));
            v50 = *((long long *)(v14 + 8));
            do
            {
                v31 += 1;
                *((long long *)(v49 + v44 * 8)) = -1;
                *((long long *)(v50 + v44 * 8)) = -1;
                v44 = v31;
            }
            while (*((long long *)v14) > v31);
        }
    }
    if (...)
    {
        tmp_23 = v19->field_38;
        v19->field_38 = v19->field_38 & 4294967033 | (unsigned int)v51 * 2;
    }
    if (...)
    {
        v52 = -2;
    }
    if (...)
    {
        v52 = *((long long *)v1);
        if ((char)v7 != 0)
        {
            if (v16 == v52)
            {
                v52 = *((long long *)(v1 + 8)) - v52;
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
    }
    if (...)
    {
        free(v1);
    }
    if (...)
    {
        v53 = v52;
        return v53;
    }
}

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
} struct_2;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char field_a;
} struct_1;

int sub_409bb0()
{
    void tmp_90;  // tmp #90
    unsigned long long v1[3];  // rdx
    unsigned long long v2;  // rbp
    unsigned int *v3;  // rdi
    unsigned long long *v4;  // rax
    unsigned long long v5[3];  // r14
    unsigned long long v6[18];  // rsi
    struct_2 *v8;  // rax
    unsigned long long v9;  // r10
    unsigned long long v10;  // r11
    unsigned long long v11;  // r9
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax
    unsigned long long v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long *v17;  // rsi
    unsigned long long v18;  // r8
    unsigned long long v19;  // r9
    struct_1 *v20;  // rax
    unsigned int v21;  // edi
    unsigned long long v22;  // rdx
    unsigned long long v23;  // r10
    char v24;  // dl
    char v25;  // r10b
    unsigned int v26;  // edx
    unsigned int v28;  // ecx
    char v29;  // al
    char v30;  // cl
    unsigned long long v33;  // rax
    unsigned int *v35;  // rdi
    unsigned long long v36;  // rax

    v2 = v1[1];
    if (v1[1] != 0)
    {
        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rsi<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & rbp<8>) + ((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & rbp<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v4 = v1[2];
            do
            {
                v2 += *(v4);
                v4 = &v4[1];
            }
            while (v1[2] + (v1[1] << 3) != v4);
        }
        v5 = v1;
        v8 = v6[8] + (v6[17] & v2) * 24;
        v9 = *((long long *)(v6[8] + (v6[17] & v2) * 24));
        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rsi<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & rbp<8>) + ((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & rbp<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v10 = v8->field_10;
            v11 = 0;
            do
            {
                v12 = *((long long *)(v10 + v11 * 8));
                if (*((long long *)*((long long *)(v10 + (v11 << 3)))) == v2)
                {
                    v13 = sub_406a50();
                    if (v13 != 0)
                    {
                        break;
                    }
                }
                v11 += 1;
            }
            while (v9 != v11);
            if (v13 == 0 || *((long long *)*((long long *)(v10 + (v11 << 3)))) != v2)
            {
                v12 = calloc(0x70, 0x1);
            }
            else if (*((long long *)*((long long *)(v10 + (v11 << 3)))) == v2)
            {
                v36 = v12;
                return v36;
            }
        }
        if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rsi<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & rbp<8>) + ((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & rbp<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) || v12 != 0)
        {
            v12 = calloc(0x70, 0x1);
            if (v12 != 0)
            {
                v14 = v12 + 8;
                v15 = sub_4096a0();
                if (v15 == 0)
                {
                    v16 = v1[1];
                    *((unsigned long long *)(v12 + 80)) = v14;
                    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(Load(addr=(rsi<8> + 0x40<64>), size=8, endness=Iend_LE) + (((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & rbp<8>) + ((Load(addr=(rsi<8> + 0x88<64>), size=8, endness=Iend_LE) & rbp<8>) << 0x1<8>)) << 0x3<8>)), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                    {
                        v17 = v5[2];
                        v18 = *(v6);
                        v19 = v5[2] + v1[1] * 8;
                        while (true)
                        {
                            v20 = *(v17) * 16 + v18;
                            v21 = (char)*((char *)(*(v17) * 16 + v18 + 8));
                            if (*((char *)((*(v17) << 4) + v18 + 8)) != 1)
                            {
                                v22 = (char)*(&((char *)&v20->field_8)[2]);
                                v23 = (char)*((char *)(v12 + 104));
                                v24 = (unsigned long long)(char)*(&((char *)&v20->field_8)[2]) >> 4;
                                v25 = (unsigned long long)(char)*((char *)(v12 + 104)) >> 5;
                                tmp_90 = (rdx<8> | (unsigned int)r10<8>) & 1;
                                v26 = (unsigned int)((unsigned long long)((rdx<8> | (unsigned int)r10<8>) & 1) * 32) | (char)(*((char *)(v12 + 104)) & 4294967007);
                                *((char *)(v12 + 104)) = (unsigned int)(tmp_90 * 32) | (char)(*((char *)(v12 + 104)) & 4294967007);
                                if (v21 == 2)
                                {
                                    *((unsigned long long *)(v12 + 104)) = v26 | 16;
                                }
                                if (v21 == 4)
                                {
                                    *((unsigned long long *)(v12 + 104)) = v26 | 64;
                                }
                            }
                            else if ((v20->field_8 & 0x3ff00) != 0)
                            {
                                v28 = (char)*((char *)(v12 + 104));
                                v29 = (unsigned long long)(char)*(&((char *)&v20->field_8)[2]) >> 4;
                                v30 = (unsigned long long)(char)*((char *)(v12 + 104)) >> 5;
                                *((char *)(v12 + 104)) = (unsigned int)((unsigned long long)(((unsigned int)rax<8> | rcx<4>) & 1) * 32) | (char)(*((char *)(v12 + 104)) & 4294967007);
                            }
                            if ((v20->field_8 & 0x3ff00) == 0 && *((char *)((*(v17) << 4) + v18 + 8)) == 1 || v21 == 2 && *((char *)((*(v17) << 4) + v18 + 8)) != 1 || v21 == 4 && *((char *)((*(v17) << 4) + v18 + 8)) != 1 || (v20->field_8 & 0x3ff00) == 0 && *((char *)((*(v17) << 4) + v18 + 8)) != 1 && v21 != 12)
                            {
                                v17 = &v17[1];
                                if (v19 == v17)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v17 = &v17[1];
                                *((char *)(v12 + 104)) = *((char *)(v12 + 104)) | 128;
                                if (v19 == v17)
                                {
                                    break;
                                }
                            }
                        }
                    }
                    v33 = sub_407120();
                    if (v33 != 0)
                    {
                        sub_4081d0();
                    }
                }
                else
                {
                    free(v12);
                }
            }
            if (v12 == 0 || v33 != 0 || v15 != 0)
            {
                *(v35) = 12;
                v12 = 0;
            }
        }
    }
    else
    {
        *(v3) = 0;
        v12 = 0;
    }
    v36 = v12;
    return v36;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    struct struct_1 *field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

int sub_407120()
{
    unsigned long long v1[18];  // rdi
    unsigned long long v2[18];  // r14
    struct_0 *v3;  // rsi
    unsigned long v5;  // r15
    unsigned long long v6;  // rdx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbx
    unsigned long long *v10;  // r13
    unsigned long long v11[3];  // rbx
    unsigned long long *v12;  // rdx
    unsigned long long *v13;  // rax
    unsigned long v14;  // rsi
    unsigned long long v15;  // r12
    unsigned long v16;  // rsi

    v2 = v1;
    v5 = v3->field_10;
    v3->field_0 = v6;
    v3->field_28 = 0;
    v3->field_20 = v5;
    v7 = malloc(v5 * 8);
    v3->field_30 = v7;
    if (v7 != 0)
    {
        v9 = 0;
        if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) || *((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3) + 8)) > *((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3))))
        {
            v10 = v6 & v2[17];
            v11 = v2[8] + v10 * 24;
            v12 = *((long long *)(v2[8] + v10 * 24));
            v13 = *((long long *)(v2[8] + v10 * 24 + 16));
            v14 = *((long long *)(v2[8] + v10 * 24)) + 1;
            if (*((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3) + 8)) > *((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3))) || v13 != 0)
            {
                v11[0] = v14;
                *((struct_0 **)((char *)v13 + 0x8 * v12)) = v3;
                return 0;
            }
        }
        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            do
            {
                if ((*((char *)((v3->field_18[v9] << 4) + *(v1) + 8)) & 8) == 0)
                {
                    v8 = sub_406f80();
                    if (v8 == 0)
                    {
                        break;
                    }
                }
                v9 += 1;
            }
            while (v3->field_10 > v9);
            if ((*((char *)((v3->field_18[v9] << 4) + *(v1) + 8)) & 8) != 0 || v8 != 0)
            {
                v10 = v6 & v2[17];
                v11 = v2[8] + v10 * 24;
                v12 = *((long long *)(v2[8] + v10 * 24));
                v13 = *((long long *)(v2[8] + v10 * 24 + 16));
                v14 = *((long long *)(v2[8] + v10 * 24)) + 1;
            }
            else if ((*((char *)((v3->field_18[v9] << 4) + *(v1) + 8)) & 8) == 0)
            {
                return 12;
            }
        }
        else if (*((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3) + 8)) <= *((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3))))
        {
            v15 = v14 * 2;
            v16 = v14 * 16;
            v13 = realloc(*((long long *)(v1[8] + v10 * 24 + 16)), v16);
            if (v13 != 0)
            {
                v12 = *(v11);
                v11[2] = v13;
                v11[1] = v15;
                v14 = (char *)v12 + 1;
            }
        }
    }
    if (v7 == 0 || (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) && *((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3) + 8)) <= *((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3))) && v13 == 0 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x10<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) && *((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3) + 8)) > *((long long *)(v2[8] + ((char *)v10 + 0x2 * v10 << 3))))
    {
        return 12;
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

extern unsigned int g_417018;
extern unsigned int g_417038;
extern unsigned int g_417068;
extern unsigned int g_417088;
extern unsigned int g_4170b8;
extern unsigned long long stderr;

int sub_405ce0()
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
    unsigned long long|unsigned int|unsigned long v19;  // r12
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
                                dcgettext(0x0, 0x417018, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x417038, 0x5);
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
                                dcgettext(0x0, 0x4170b8, 0x5);
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
                            dcgettext(0x0, 0x417088, 0x5);
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
        if ((v34 != 0 || *((long long *)v17) != 0) && (*((char *)(v35[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v17) != 0))
        {
            return v42;
        }
    }
    if (v28 == 0 && *((long long *)v17) == 0 || v34 == 0 && v28 != 0 || *((char *)(v35[(long long)(int)v9->field_0] + 1)) == 45 && v28 != 0)
    {
        if (v10 != 0)
        {
            dcgettext(0x0, 0x417068, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_404870()
{
}

extern unsigned int g_61b314;
extern unsigned int g_61b318;
extern unsigned int g_61b31c;
extern unsigned int g_61b900;
extern unsigned int g_61b904;
extern unsigned int g_61b908;
extern unsigned long long g_61b910;
extern unsigned long long g_61b940;

int sub_4068d0()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_61b900 = g_61b31c;
    g_61b904 = g_61b318;
    v1 = (unsigned int)v2;
    v0 = &g_61b900;
    g_61b31c = g_61b900;
    g_61b940 = g_61b910;
    g_61b314 = g_61b908;
    return sub_406300();
}

extern int512_t g_61b8c0;

int sub_4043b0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_61b8c0 : v1));
}

int sub_40b040() { crash_skku_timeout;
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

    v10 = sub_401778();
    if (!((char)[D] amd64g_calculate_condition(0x4<64>, 0x24<64>, Sar(0x0<64>, 0x3<8>), Sar(0x0<64>, 0x2<8>), cc_ndep<8>)))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6401584 + rbx<8> * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_405000()
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
        sub_405230(); /* do not return */
    }
}

typedef struct struct_2 {
    uint128_t field_0;
    unsigned long long field_10;
} struct_2;

double sub_40bdb0()
{
    void tmp_16;  // tmp #16
    void tmp_0;  // tmp #0
    unsigned long long *v1;  // rdi
    unsigned long long v2;  // cc_dep1
    unsigned long long *v3;  // rax
    unsigned long long *v4;  // rsi
    unsigned long long *v5;  // r12
    unsigned long v6;  // rcx
    unsigned long long *v8;  // rbx
    struct_2 *v9;  // r9
    struct_2 *v10;  // rbp
    unsigned long long *v11;  // rdx
    unsigned long v12;  // rdx
    void *v13;  // r8
    uint128_t v15;  // xmm0

    v2 = *(v1);
    v3 = *(v1) - 1;
    *(v1) = *(v1) - 1;
    if (!((char)(v2 - 1 >> 63)))
    {
        v5 = v4;
        v8 = v3 * 48;
        v10 = v9;
        tmp_16 = *(v4) + v3 * 48;
        *(v11) = *((long long *)(*(v4) + v3 * 48));
        v12 = v6 * 16;
        memcpy(v13, *((long long *)(tmp_16 + 16)), v12);
        free(v9->field_10);
        free(*((long long *)(*(v4) + (*(v1) - 1) * 48 + 16)));
        tmp_0 = (char *)v8 + *(v5);
        v15 = *((int128_t *)&((char *)v8)[24 + *(v5)]);
        v10->field_0 = *((int128_t *)&((char *)v8)[24 + *(v5)]);
        v10->field_10 = *((long long *)(tmp_0 + 40));
        return v15;
    }
    __assert_fail(); /* do not return */
}

extern unsigned int g_41690b;
extern unsigned int g_41690f;
extern unsigned int g_41691f;
extern unsigned int g_416936;
extern unsigned int g_416998;
extern unsigned int g_416a68;
extern unsigned int g_416a88;
extern unsigned int g_416ab0;
extern unsigned int g_416ad8;
extern unsigned int g_416b08;

int sub_404a40()
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
    dcgettext(0x0, 0x41690b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x416998, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x41690f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x41691f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x416936, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x416a68, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x416a88, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x416ab0, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x416ad8, 0x5);
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
        dcgettext(0x0, 0x416b08, 0x5);
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

int sub_4052fb()
{
}

typedef struct struct_8 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_7 *field_10;
} struct_8;

typedef struct struct_5 {
    char padding_0[8];
    char field_8;
} struct_5;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_9 {
    uint128_t field_0;
    unsigned long long field_8;
    unsigned long long field_10;
} struct_9;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
} struct_1;

typedef struct struct_0 {
    uint128_t field_0;
    unsigned long long field_10;
} struct_0;

int sub_408d10()
{
    unsigned int v0;  // [bp-0x7c]
    unsigned long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x68]
    void v4;  // [bp-0x58]
    void *v5;  // [bp-0x48]
    unsigned long long v7[7];  // rsi
    unsigned long long v8[7];  // r15
    unsigned long long v9;  // rdx
    unsigned long long v10;  // r12
    uint128_t *v11;  // rbp
    struct_8 *v12;  // rbx
    unsigned long v13;  // rcx
    unsigned long long v14;  // rdx
    unsigned long long v16;  // rax
    struct_5 *v17;  // rax
    unsigned long long v18;  // rsi
    struct_6 *v19;  // rax
    unsigned long long v20;  // r13
    unsigned long long v21;  // r14
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbx
    struct_9 *v24;  // rax
    unsigned long long v25;  // rcx
    unsigned long long v27;  // rax
    uint128_t *v28;  // rax
    struct_0 *v30;  // rdi

    v8 = v7;
    v10 = v9;
    v11 = v9 * 24;
    v12 = v7[5] + v9 * 24;
    v0 = v13;
    v2 = 0;
    v1 = *((long long *)(v7[5] + v9 * 24 + 8)) + 1;
    v3 = malloc((*((long long *)(v7[5] + v9 * 24 + 8)) + 1) * 8);
    if (v3 != 0)
    {
        v14 = *(v8);
        *((long long *)&((char *)v11)[8 + v8[6]]) = -1;
        v17 = v14 + v10 * 16;
        if (((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) != 0 && v12->field_8 != 0 && (*((char *)(*(v7) + (*(v12->field_10) << 4) + 10)) & 4) == 0)
        {
            v16 = sub_407f40();
            if ((unsigned int)v16 == 0)
            {
                v17 = *(v8) + v10 * 16;
            }
        }
        if (((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) == 0 || v12->field_8 != 0)
        {
            if (((unsigned int)v16 == 0 || ((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) == 0 || (*((char *)(*(v7) + (*(v12->field_10) << 4) + 10)) & 4) != 0) && (v17->field_8 & 8) != 0)
            {
                v18 = v8[5];
                v19 = v8[5] + (char *)v11;
                if (*((long long *)&((char *)v11)[8 + v8[5]]) > 0)
                {
                    v20 = 0;
                    v21 = 0;
                    while (true)
                    {
                        v23 = v19->field_10[v21] * 24;
                        v24 = v8[6] + v19->field_10[v21] * 24;
                        v25 = *((long long *)&((char *)&v24->field_0)[8]);
                        if (*((long long *)&((char *)&v24->field_0)[8]) != -1)
                        {
                            if (v25 != 0)
                            {
                                *((uint128_t *)&v4) = v24->field_0;
                                v5 = v24->field_8;
                            }
                            else
                            {
                                v16 = sub_408d10();
                                if ((unsigned int)v16 != 0)
                                {
                                    break;
                                }
                            }
                            v16 = sub_408b40();
                            if ((unsigned int)v16 != 0)
                            {
                                break;
                            }
                            if (*((long long *)(v8[6] + v23 + 8)) == 0)
                            {
                                v20 = 1;
                                free(v5);
                            }
                            v18 = v8[5];
                            v21 += 1;
                            v19 = v8[5] + (char *)v11;
                        }
                        else
                        {
                            v19 = v18 + (char *)v11;
                            v20 = 1;
                            v21 += 1;
                        }
                        v27 = sub_406ff0();
                        if (v27 == 0)
                        {
                            break;
                        }
                        v28 = v8[6];
                        if (v20 == 0 || (char)v0 == 1)
                        {
                            break;
                        }
                        *((long long *)&((char *)v11)[8 + v8[6]]) = 0;
                    }
                    if ((*((long long *)&((char *)v11)[8 + v8[5]]) <= v21 || *((long long *)&((char *)&v24->field_0)[8]) == -1) && ((unsigned int)v16 == 0 || *((long long *)&((char *)&v24->field_0)[8]) == -1) && (*((long long *)&((char *)v11)[8 + v18]) <= v21 || *((long long *)&((char *)&v24->field_0)[8]) != -1) && (*((long long *)&((char *)&v24->field_0)[8]) == -1 || (unsigned int)v16 == 0 || v25 != 0))
                    {
                        return 12;
                    }
                    else if (*((long long *)&((char *)&v24->field_0)[8]) != -1)
                    {
                        return v16;
                    }
                    else if ((*((long long *)&((char *)v11)[8 + v8[5]]) <= v21 || *((long long *)&((char *)&v24->field_0)[8]) == -1) && ((unsigned int)v16 == 0 || *((long long *)&((char *)&v24->field_0)[8]) == -1) && (*((long long *)&((char *)v11)[8 + v18]) <= v21 || *((long long *)&((char *)&v24->field_0)[8]) != -1) && (*((long long *)&((char *)&v24->field_0)[8]) == -1 || (unsigned int)v16 == 0 || v25 != 0) && v27 != 0 && (char)v0 != 1 || (*((long long *)&((char *)v11)[8 + v8[5]]) <= v21 || *((long long *)&((char *)&v24->field_0)[8]) == -1) && ((unsigned int)v16 == 0 || *((long long *)&((char *)&v24->field_0)[8]) == -1) && (*((long long *)&((char *)v11)[8 + v18]) <= v21 || *((long long *)&((char *)&v24->field_0)[8]) != -1) && (*((long long *)&((char *)&v24->field_0)[8]) == -1 || (unsigned int)v16 == 0 || v25 != 0) && v27 != 0)
                    {
                        *((int128_t *)(v28 + v11)) = *((int128_t *)&v1);
                        *((unsigned long *)(v28 + v11 + 16)) = v3;
                    }
                    else if ((*((long long *)&((char *)v11)[8 + v8[5]]) <= v21 || *((long long *)&((char *)&v24->field_0)[8]) == -1) && ((unsigned int)v16 == 0 || *((long long *)&((char *)&v24->field_0)[8]) == -1) && (*((long long *)&((char *)v11)[8 + v18]) <= v21 || *((long long *)&((char *)&v24->field_0)[8]) != -1) && (*((long long *)&((char *)&v24->field_0)[8]) == -1 || (unsigned int)v16 == 0 || v25 != 0) && v27 != 0 && (char)v0 != 1 && v20 != 0)
                    {
                        v30->field_10 = v3;
                        v30->field_0 = *((int128_t *)&v1);
                        return 0;
                    }
                }
            }
            if (((*((char *)(*(v7) + (*(v12->field_10) << 4) + 10)) & 4) == 0 || *((long long *)&((char *)v11)[8 + v8[5]]) > 0) && ((*((char *)(*(v7) + (*(v12->field_10) << 4) + 10)) & 4) == 0 || (v17->field_8 & 8) != 0) && ((unsigned int)v16 != 0 || *((long long *)&((char *)v11)[8 + v8[5]]) > 0) && ((unsigned int)v16 != 0 || (v17->field_8 & 8) != 0) && (*((long long *)&((char *)v11)[8 + v8[5]]) > 0 || ((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) != 0) && (((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) != 0 || (v17->field_8 & 8) != 0))
            {
                return v16;
            }
        }
        if ((*((long long *)&((char *)v11)[8 + v8[5]]) <= 0 || (v17->field_8 & 8) == 0 || v12->field_8 == 0) && (*((long long *)&((char *)v11)[8 + v8[5]]) <= 0 || (v17->field_8 & 8) == 0 || ((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) != 0) && ((unsigned int)v16 == 0 || ((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) == 0 || v12->field_8 == 0 || (*((char *)(*(v7) + (*(v12->field_10) << 4) + 10)) & 4) != 0))
        {
            v22 = sub_406ff0();
            if (v22 != 0)
            {
                v28 = v8[6];
            }
        }
        if ((v22 != 0 || *((long long *)&((char *)v11)[8 + v8[5]]) > 0) && (v22 != 0 || (v17->field_8 & 8) != 0) && (((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) == 0 || v22 != 0 || v12->field_8 != 0) && ((unsigned int)v16 == 0 || ((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) == 0 || v12->field_8 == 0 || (*((char *)(*(v7) + (*(v12->field_10) << 4) + 10)) & 4) != 0))
        {
            *((int128_t *)(v28 + v11)) = *((int128_t *)&v1);
            *((unsigned long *)(v28 + v11 + 16)) = v3;
            v30->field_10 = v3;
            v30->field_0 = *((int128_t *)&v1);
            return 0;
        }
    }
    if (v3 == 0 || (unsigned int)v16 == 0 && v22 == 0 || v22 == 0 && ((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) == 0 || v22 == 0 && v12->field_8 == 0 || v22 == 0 && (*((char *)(*(v7) + (*(v12->field_10) << 4) + 10)) & 4) != 0 || ((unsigned int)*((int *)(v14 + (v10 << 4) + 8)) & 0x3ff00) == 0 && *((long long *)&((char *)v11)[8 + v8[5]]) > 0 && (v17->field_8 & 8) != 0 || (unsigned int)v16 == 0 && *((long long *)&((char *)v11)[8 + v8[5]]) > 0 && (v17->field_8 & 8) != 0 && v12->field_8 != 0 || *((long long *)&((char *)v11)[8 + v8[5]]) > 0 && (v17->field_8 & 8) != 0 && (*((char *)(*(v7) + (*(v12->field_10) << 4) + 10)) & 4) != 0 && v12->field_8 != 0)
    {
        return 12;
    }
}

extern uint128_t g_61b8c0;
extern uint128_t g_61b8d0;
extern uint128_t g_61b8e0;
extern unsigned long long g_61b8f0;

int sub_404910()
{
    unsigned int|void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_61b8c0;
    *((uint128_t *)&v1) = g_61b8d0;
    *((uint128_t *)&v2) = g_61b8e0;
    v4 = g_61b8f0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4041d0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

int sub_402c70()
{
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[24];
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[16];
    unsigned long long field_58;
    char padding_60[24];
    unsigned long long field_78;
    char padding_80[8];
    char field_88;
    char padding_89[7];
    unsigned int field_90;
    char padding_94[36];
    unsigned long long field_b8;
} struct_0;

int sub_407a80()
{
    unsigned long long v1[24];  // rdi
    unsigned long long v2;  // rbp
    struct_0 *v3;  // rdi
    unsigned long long v4;  // rax
    unsigned int v5;  // eax
    unsigned long v8;  // rsi
    unsigned long long v9;  // rcx
    char *v10;  // rax
    char *v11;  // rcx

    if (v1[8] <= 1152921504606846974)
    {
        v2 = (unsigned int)sub_406ee0();
        if ((unsigned int)v2 == 0)
        {
            v3 = v1[23];
            if (v3->field_b8 != 0)
            {
                v4 = realloc(v3, v3->field_40 * 8 + 8);
                if (v4 != 0)
                {
                    v3->field_b8 = v4;
                }
            }
            if (v3->field_b8 == 0 || v4 != 0)
            {
                v5 = v3->field_90;
                if (v3->field_88 != 0)
                {
                    if (v5 <= 1)
                    {
                        sub_407250();
                        return stack_base + 0;
                    }
                }
                else
                {
                    if (v5 <= 1)
                    {
                        v11 = v3->field_78;
                        if (v3->field_78 != 0)
                        {
                            v10 = v3->field_30;
                            v8 = (v3->field_40 <= v3->field_58? v3->field_40 : v3->field_58);
                            if ((v3->field_40 <= v3->field_58? v3->field_40 : v3->field_58) <= v3->field_30)
                            {
                                v3->field_30 = v10;
                                v3->field_38 = v10;
                            }
                            else
                            {
                                while (true)
                                {
                                    v9 = v11[(unsigned long long)v10[v3->field_28 + v3->field_0]];
                                    *((unsigned long long *)&v10[v3->field_8]) = v9;
                                    v10 = &v10[1];
                                    if (v8 == v10)
                                    {
                                        break;
                                    }
                                    v11 = v3->field_78;
                                }
                                v3->field_30 = v8;
                                v3->field_38 = v8;
                            }
                        }
                    }
                    else
                    {
                        sub_4072d0();
                        return stack_base + 0;
                    }
                }
            }
        }
        if ((v3->field_88 == 0 || (unsigned int)v2 != 0) && (v5 <= 1 || (unsigned int)v2 != 0) && (v3->field_b8 == 0 || v4 != 0 || (unsigned int)v2 != 0))
        {
            return stack_base + 0;
        }
    }
    if (v1[8] > 1152921504606846974 || v4 == 0 && (unsigned int)v2 == 0 && v3->field_b8 != 0)
    {
        return 12;
    }
}

typedef struct struct_3 {
    char padding_0[200];
    unsigned long long field_c8;
    char padding_d0[24];
    unsigned long long field_e8;
    char padding_f0[8];
    struct struct_2 *field_f8;
} struct_3;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    struct struct_2 *field_28;
} struct_1;

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

typedef struct struct_4 {
    char padding_0[16];
    unsigned long long field_10;
} struct_4;

int sub_408270()
{
    unsigned long long v1[32];  // rdi
    struct_3 *v2;  // r14
    struct_1 *v3;  // r12
    unsigned long long v4;  // rbx
    struct_0 *v5;  // rbp
    unsigned long long v8;  // r13

    v2 = v1;
    if (v1[29] > 0)
    {
        v8 = 0;
        while (true)
        {
            v3 = v2->field_f8[v8];
            if (*((long long *)(v2->field_f8[v8] + 32)) > 0)
            {
                v4 = 0;
                while (true)
                {
                    v5 = v3->field_28[v4];
                    v4 += 1;
                    free(v5->field_20);
                    free(v5);
                    if (v3->field_20 <= v4)
                    {
                        break;
                    }
                }
            }
            free(v3->field_28);
            if (v3->field_10 != 0)
            {
                free(*((long long *)(v3->field_10 + 16)));
                free(v3->field_10);
            }
            v8 += 1;
            if (v2->field_e8 <= v8)
            {
                break;
            }
        }
    }
    v2->field_e8 = 0;
    v2->field_c8 = 0;
    return (unsigned long long)free(v3);
}

int sub_408b40()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4[3];  // rsi
    unsigned long long v5;  // rax
    unsigned long long v6;  // r12
    unsigned long long v7[3];  // r12
    unsigned long long v8;  // rbx
    unsigned long long v9[3];  // rdi
    unsigned long long v10[3];  // rbx
    unsigned long long v11;  // rsi
    unsigned long long v13;  // rbp
    unsigned long v14;  // rsi
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long *v18;  // rbp
    unsigned long long *v19;  // rax
    unsigned long long *v20;  // rdx
    unsigned long long *v21;  // rdi
    void *v22;  // rdi
    void *v23;  // rsi
    unsigned long long v26;  // rsi
    unsigned long long v27;  // cc_dep1
    unsigned long long v28;  // cc_dep2
    unsigned long long *v29;  // rdi
    unsigned long long v30;  // rdx
    unsigned long long v31;  // rdx
    unsigned long long *v32;  // rdi
    void *v33;  // rdi
    unsigned long long v35;  // rcx
    unsigned long long *v36;  // r8
    unsigned long v37;  // rdx
    unsigned long long *v38;  // rax
    unsigned long long v39;  // rcx
    unsigned long long *v40;  // rdi
    unsigned long long v41;  // rsi
    unsigned long long v42;  // rcx
    unsigned long long *v43;  // r9
    unsigned long v44;  // rdx
    unsigned long long v46;  // rbx
    unsigned long long v47;  // r12
    unsigned long long v48;  // rbx
    unsigned long long v49;  // r12

    if (v4 != 0)
    {
        v5 = v4[1];
        if (v4[1] != 0)
        {
            v2 = v6;
            v7 = v4;
            v1 = stack_base + 0;
            v0 = v8;
            v17 = v9[1];
            v10 = v9;
            v11 = *(v9);
            if (*(v9) >= v9[1] + (v5 << 1))
            {
            }
            else
            {
                v13 = (v5 + v11) * 2;
                v14 = (v5 + v11) * 16;
                v15 = realloc(v9[2], v14);
                if (v15 != 0)
                {
                    v17 = v10[1];
                    v10[2] = v15;
                    v10[0] = v13;
                    v5 = v7[1];
                }
                else
                {
                    v16 = 12;
                }
            }
            if (v15 != 0 || *(v9) >= v9[1] + (v5 << 1))
            {
                if ((v9[1] == 0 || *(v9) < v9[1] + (v5 << 1)) && (v17 == 0 || *(v9) >= v9[1] + (v5 << 1)))
                {
                    v22 = v10[2];
                    v23 = v7[2];
                    v10[1] = v5;
                    memcpy(v22, v23, v7[1] * 8);
                }
                if ((*(v9) < v9[1] + (v5 << 1) || v9[1] != 0) && (v17 != 0 || *(v9) >= v9[1] + (v5 << 1)))
                {
                    v18 = v17 + v5 * 2;
                    v19 = v5 - 1;
                    v20 = v17 - 1;
                    v21 = !(v19);
                    while ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>))
                    {
                        while (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>)))
                        {
                            v26 = *((long long *)(v7[2] + v19 * 8));
                            v27 = *((long long *)(v10[2] + v20 * 8));
                            v28 = *((long long *)(v7[2] + v19 * 8));
                            if (*((long long *)(v10[2] + (v20 << 3))) == *((long long *)(v7[2] + (v19 << 3))))
                            {
                                v19 = (char *)&v19[-1] + 7;
                                v31 = (char *)&v20[-1] + 7;
                                v32 = !(v19);
                            }
                            else if (v27 < v28)
                            {
                                v19 = (char *)&v19[-1] + 7;
                                v18 = (char *)&v18[-1] + 7;
                                *((unsigned long long *)(v10[2] + v18 * 8)) = v26;
                                v29 = !(v19);
                            }
                            else
                            {
                                v30 = (char *)&v20[-1] + 7;
                            }
                        }
                    }
                    v18 -= (char *)v19 + 1;
                    v33 = v10[2] + v18 * 8;
                    memcpy(v33, v7[2], ((char *)v19 + 1) * 8);
                    v35 = v10[1];
                    v36 = v10[1] + v7[1] * 2 - 1;
                    v37 = (char *)(unsigned long long *)(-1 + v10[1] + 2 * v7[1] + -0x1 * v18) + 1;
                    if ((char *)(unsigned long long *)(-1 + v10[1] + 2 * v7[1] + -0x1 * v18) + 1 != 0)
                    {
                        v38 = v35 - 1;
                        v39 = v35 + v37;
                        v40 = v10[2];
                        v10[1] = v39;
                        while (true)
                        {
                            v41 = *((long long *)((char *)v40 + 0x8 * v36));
                            v42 = *((long long *)((char *)v40 + 0x8 * v38));
                            v43 = (char *)v40 + 0x8 * ((char *)v38 + v37);
                            if (*((long long *)((char *)v40 + 0x8 * v36)) > *((long long *)((char *)v40 + 0x8 * v38)))
                            {
                                v36 = (char *)&v36[-1] + 7;
                                *(v43) = v41;
                                v37 -= 1;
                                if (v37 == 1)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                *(v43) = v42;
                                v38 = (char *)&v38[-1] + 7;
                                v44 = v37 * 8;
                                memcpy(v40, (char *)v40 + 0x8 * v18, v44);
                                v46 = v0;
                                v47 = v2;
                                return 0;
                            }
                        }
                    }
                }
                v16 = 0;
            }
            v48 = v0;
            v49 = v2;
            return v16;
        }
    }
    if (v4 == 0 || v4[1] == 0)
    {
        return 0;
    }
}

int sub_405360()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v2;  // r9

    v0 = v2;
    return sub_405270();
}

extern unsigned int g_415060;
extern unsigned long long g_61b260;
extern char g_61b268;
extern unsigned long long g_61b278;
extern unsigned short *g_61b280;
extern unsigned long long g_61b290;
extern unsigned long long g_61b298;
extern unsigned long long g_61b2a0;
extern unsigned long long g_61b360;
extern char g_61b368;
extern unsigned long long g_61b370;
extern unsigned long long g_61b378;
extern unsigned long long g_61b388;
extern unsigned short *g_61b390;
extern unsigned long long g_61b398;
extern unsigned long long g_61b3a0;
extern unsigned long long g_61b3a8;
extern unsigned long long g_61b3b0;
extern unsigned long long g_61b3b8;
extern unsigned long long g_61b3c0;
extern unsigned long long g_61b3c8;
extern unsigned long long g_61b6e0;
extern unsigned long long g_61b720;
extern unsigned long long g_61b760;
extern char *g_61b7a0;
extern unsigned long long stdin;
extern unsigned long long stdout[7];

int sub_402420()
{
    char *v1;  // rdi
    char *v2;  // rsi
    unsigned long long v4;  // cc_dep1
    unsigned long long v5;  // cc_dep2
    unsigned long v6;  // d
    unsigned long long v7;  // rcx
    char *v8;  // rdi
    unsigned long long v9;  // cc_dep1
    char *v10;  // r12
    unsigned long v13;  // rbx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    char *v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    char *v24;  // rdi
    unsigned long long v25;  // rcx
    char *v26;  // rsi
    unsigned long long v27;  // cc_dep1
    unsigned long long v28;  // cc_dep2
    unsigned long long v31;  // rbx

    v2 = v1;
    v7 = 2;
    v8 = "-";
    while (v7 != 0)
    {
        v7 -= 1;
        v4 = *(v2);
        v5 = *(v8);
        v8 = &v8[v6];
        v2 = &v2[v6];
        break;
    }
    v9 = (v4 > v5) - 0 - (v4 < v5);
    if ((char)v9 == 0)
    {
        g_61b368 = 1;
        v10 = stdin;
    }
    else
    {
        v10 = fopen(v2, "r");
    }
    if ((char)v9 == 0 || v10 != 0)
    {
        sub_402c80();
        while (true)
        {
            if (sub_402de0() != 0)
            {
                v13 = g_61b388;
                if (*(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1)
                {
                    if (g_61b388 - 1 == g_61b3b8)
                    {
                        v14 = memcmp(g_61b390, g_61b3c0, g_61b388 - 1);
                        if (v14 == 0)
                        {
                            g_61b3c8 = &g_61b720;
                            g_61b7a0 = g_61b298;
                        }
                    }
                    if (g_61b388 - 1 != g_61b3b8 || v14 != 0)
                    {
                        if (g_61b388 - 1 == g_61b3a8)
                        {
                            v15 = memcmp(g_61b390, g_61b3b0, g_61b388 - 1);
                            if (v15 == 0)
                            {
                                g_61b3c8 = &g_61b760;
                                g_61b7a0 = g_61b2a0;
                            }
                        }
                        if (g_61b388 - 1 == g_61b398 && (g_61b388 - 1 != g_61b3a8 || v15 != 0))
                        {
                            v16 = memcmp(g_61b390, g_61b3a0, g_61b388 - 1);
                            if (v16 == 0)
                            {
                                g_61b3c8 = &g_61b6e0;
                                g_61b7a0 = g_61b290;
                            }
                        }
                    }
                }
                if (g_61b388 - 1 == g_61b398 && *(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1 && (g_61b388 - 1 != g_61b3b8 || v14 != 0) && (g_61b388 - 1 != g_61b3a8 || v15 != 0) && v16 != 0 || *(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1 && (g_61b388 - 1 != g_61b3b8 || v14 != 0) && (g_61b388 - 1 != g_61b3a8 || v15 != 0) && g_61b388 - 1 != g_61b398 || g_61b388 - 1 > 1 && *(g_61b390) != *(g_61b280) || g_61b388 - 1 <= 1)
                {
                    if (*(g_61b7a0) != 110)
                    {
                        if (*(g_61b7a0) > 110)
                        {
                            if (*(g_61b7a0) == 112)
                            {
                                v18 = sub_4146f0();
                                if (v18 == -2)
                                {
                                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x415060, 0x5));
                                }
                            }
                        }
                        else
                        {
                            if (*(g_61b7a0) == 97 && g_61b260 > 1)
                            {
                                if (g_61b388 <= 1)
                                {
                                    v19 = g_61b360 + 1;
                                    g_61b360 = g_61b360 + 1;
                                }
                                if (g_61b260 == v19 || g_61b388 > 1)
                                {
                                    sub_4023b0();
                                    v13 = g_61b388;
                                    g_61b360 = 0;
                                }
                            }
                        }
                    }
                    if (*(g_61b7a0) <= 110 && g_61b260 <= 1 && *(g_61b7a0) == 97 && *(g_61b7a0) != 110 || *(g_61b7a0) == 116 && g_61b388 > 1 && *(g_61b7a0) > 110 && *(g_61b7a0) != 110 && *(g_61b7a0) != 112 || *(g_61b7a0) == 112 && v18 != -1 && *(g_61b7a0) > 110 && v18 != -2 && *(g_61b7a0) != 110)
                    {
                        sub_4023b0();
                        v13 = g_61b388;
                    }
                    if (*(g_61b7a0) == 110 || v18 == -1 && *(g_61b7a0) == 112 && *(g_61b7a0) > 110 && v18 != -2 && *(g_61b7a0) != 110 || g_61b388 <= 1 && *(g_61b7a0) == 116 && *(g_61b7a0) > 110 && *(g_61b7a0) != 110 && *(g_61b7a0) != 112 || g_61b388 <= 1 && *(g_61b7a0) <= 110 && *(g_61b7a0) == 97 && g_61b260 != v19 && g_61b260 > 1 && *(g_61b7a0) != 110)
                    {
                        fputs_unlocked(g_61b378, stdout);
                        v13 = g_61b388;
                    }
                    if (*(g_61b7a0) == 110 || *(g_61b7a0) <= 110 && *(g_61b7a0) != 97 && *(g_61b7a0) != 110 || *(g_61b7a0) <= 110 && g_61b260 <= 1 && *(g_61b7a0) == 97 && *(g_61b7a0) != 110 || *(g_61b7a0) > 110 && *(g_61b7a0) != 116 && *(g_61b7a0) != 110 && *(g_61b7a0) != 112 || v18 == -1 && *(g_61b7a0) == 112 && *(g_61b7a0) > 110 && v18 != -2 && *(g_61b7a0) != 110 || g_61b388 <= 1 && *(g_61b7a0) == 116 && *(g_61b7a0) > 110 && *(g_61b7a0) != 110 && *(g_61b7a0) != 112 || *(g_61b7a0) == 116 && g_61b388 > 1 && *(g_61b7a0) > 110 && *(g_61b7a0) != 110 && *(g_61b7a0) != 112 || *(g_61b7a0) == 112 && v18 != -1 && *(g_61b7a0) > 110 && v18 != -2 && *(g_61b7a0) != 110 || g_61b388 <= 1 && *(g_61b7a0) <= 110 && *(g_61b7a0) == 97 && g_61b260 != v19 && g_61b260 > 1 && *(g_61b7a0) != 110 || *(g_61b7a0) <= 110 && *(g_61b7a0) == 97 && g_61b260 > 1 && *(g_61b7a0) != 110 && (g_61b260 == v19 || g_61b388 > 1))
                    {
                        fwrite_unlocked(g_61b390, 0x1, v13, stdout);
                    }
                }
                if (g_61b388 - 1 == g_61b398 && *(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1 && (g_61b388 - 1 != g_61b3b8 || v14 != 0) && (g_61b388 - 1 != g_61b3a8 || v15 != 0) && v16 == 0 && g_61b268 != 0 || g_61b388 - 1 == g_61b3a8 && *(g_61b390) == *(g_61b280) && v15 == 0 && g_61b388 - 1 > 1 && (g_61b388 - 1 != g_61b3b8 || v14 != 0) && g_61b268 != 0 || g_61b388 - 1 == g_61b3b8 && v14 == 0 && *(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1 && g_61b268 != 0)
                {
                    g_61b370 = g_61b278;
                }
                if (g_61b388 - 1 == g_61b398 && *(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1 && (g_61b388 - 1 != g_61b3b8 || v14 != 0) && (g_61b388 - 1 != g_61b3a8 || v15 != 0) && v16 == 0 && g_61b268 == 0 || g_61b388 - 1 == g_61b3a8 && *(g_61b390) == *(g_61b280) && g_61b268 == 0 && v15 == 0 && g_61b388 - 1 > 1 && (g_61b388 - 1 != g_61b3b8 || v14 != 0) || g_61b388 - 1 == g_61b398 && *(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1 && (g_61b388 - 1 != g_61b3b8 || v14 != 0) && (g_61b388 - 1 != g_61b3a8 || v15 != 0) && v16 == 0 && g_61b268 != 0 || g_61b388 - 1 == g_61b3a8 && *(g_61b390) == *(g_61b280) && v15 == 0 && g_61b388 - 1 > 1 && (g_61b388 - 1 != g_61b3b8 || v14 != 0) && g_61b268 != 0 || g_61b388 - 1 == g_61b3b8 && v14 == 0 && *(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1 && g_61b268 != 0 || g_61b388 - 1 == g_61b3b8 && v14 == 0 && *(g_61b390) == *(g_61b280) && g_61b388 - 1 > 1 && g_61b268 == 0)
                {
                    v17 = stdout[5];
                    if (stdout[5] < stdout[6])
                    {
                        stdout[5] = stdout[5] + 1;
                        *(v17) = 10;
                    }
                    else
                    {
                        __overflow();
                    }
                }
            }
            else
            {
                if ((*(v10) & 32) != 0)
                {
                    break;
                }
                v24 = "-";
                v25 = 2;
                v2 = v1;
                while (v25 != 0)
                {
                    v25 -= 1;
                    v27 = *(v26);
                    v28 = *(v24);
                    v24 = &v24[v6];
                    v26 = &v26[v6];
                    break;
                }
                if ((v27 > v28) - 0 - (v27 < v28) != 0)
                {
                    if ((unsigned int)sub_405ae0() == -1)
                    {
                        break;
                    }
                    return 1;
                }
                clearerr_unlocked();
                return 1;
            }
        }
    }
    v31 = (unsigned int)sub_4048a0();
    error(0x0, *(__errno_location()), "%s");
    return 0;
}

extern struct_0 *g_61b2f8;
extern unsigned long long g_61b300;
extern unsigned long long g_61b308;
extern unsigned int g_61b310;
extern unsigned long long g_61b7c0;

int sub_4045e0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_61b310;
    if (g_61b310 > 1)
    {
        v2 = &g_61b2f8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_61b2f8[(unsigned long long)(g_61b310 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_61b2f8->field_8 != 6404032)
    {
        v1 = free(g_61b2f8->field_8);
        g_61b300 = 0x100;
        g_61b308 = &g_61b7c0;
    }
    if (g_61b2f8 != 0x61b300)
    {
        v1 = free(g_61b2f8);
        g_61b2f8 = &g_61b300;
    }
    g_61b310 = 1;
    return v1;
}

extern int512_t g_400000;

int sub_40be90()
{
    unsigned long long *v0;  // [bp-0x38]
    unsigned long v1;  // [bp+0x8]
    unsigned long long v2;  // rcx
    unsigned long long *v3;  // r13
    unsigned long long v4;  // r9
    unsigned long long v5;  // rbp
    unsigned long long *v6;  // rbx
    unsigned long long|char * v7;  // rsi
    unsigned long long v8;  // rcx
    unsigned long long v9;  // cc_dep1
    unsigned long long v10;  // cc_dep2
    unsigned long v11;  // d
    unsigned long long|char * v12;  // rdi
    unsigned long long v13;  // cc_dep1
    unsigned long long|char * v14;  // r12
    unsigned long long v15;  // rcx
    unsigned long long *v16;  // rdx
    void *v17;  // rax
    unsigned long long *v18;  // r8
    unsigned long long v19;  // cc_dep1
    unsigned long long v20;  // cc_dep2
    unsigned long long v21;  // r14
    unsigned long long *v22;  // r13
    unsigned long long v23;  // cc_dep1
    unsigned long long v24;  // cc_dep2
    unsigned long long v25;  // cc_dep1
    char *v26;  // rdi
    char *v27;  // rsi
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // cc_dep2
    char *v30;  // rdx
    unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // rcx
    char *v33;  // rdi
    unsigned long long v34;  // rcx
    char *v35;  // rsi
    unsigned long long *v36;  // rsi
    unsigned long long v37;  // rax
    unsigned long long v38;  // cc_dep1
    unsigned long long v39;  // cc_dep2
    char *v40;  // rdx
    unsigned long long v41;  // cc_dep1
    unsigned long long v42;  // rax
    char *v43;  // rdi
    unsigned long long v44;  // rcx
    char *v45;  // rsi
    unsigned long long v46;  // rcx
    unsigned long long *v47;  // rsi
    unsigned long long v48;  // cc_dep1
    unsigned long long v49;  // cc_dep2
    unsigned long long v50;  // rdx
    unsigned long long v51;  // cc_dep1
    unsigned long long v52;  // rax
    char *v53;  // rdi
    unsigned long long v54;  // rcx
    char *v55;  // rsi
    unsigned long long *v56;  // rsi
    unsigned long long v57;  // cc_dep1
    unsigned long long v58;  // cc_dep2
    unsigned long long v59;  // rdx
    unsigned long long v60;  // cc_dep1
    unsigned long long v61;  // rax
    char *v62;  // rdi
    unsigned long long v63;  // rcx
    char *v64;  // rsi
    unsigned long long *v65;  // rsi
    unsigned long long v66;  // cc_dep1
    unsigned long long v67;  // cc_dep2
    unsigned long long v68;  // rdx
    unsigned long long v69;  // cc_dep1
    unsigned long long v70;  // rax
    char *v71;  // rdi
    unsigned long long v72;  // rcx
    char *v73;  // rsi
    unsigned long long *v74;  // rsi
    unsigned long long v75;  // cc_dep1
    unsigned long long v76;  // cc_dep2
    unsigned long long v77;  // rdx
    unsigned long long v78;  // cc_dep1
    unsigned long long v79;  // rax
    char *v80;  // rdi
    unsigned long long v81;  // rcx
    char *v82;  // rsi
    unsigned long long *v83;  // rsi
    unsigned long long v84;  // cc_dep1
    unsigned long long v85;  // cc_dep2
    unsigned long long v86;  // rdx
    unsigned long long v87;  // cc_dep1
    unsigned long long v88;  // rax
    char *v89;  // rdi
    unsigned long long v90;  // rcx
    char *v91;  // rsi
    unsigned long long *v92;  // rsi
    unsigned long long v93;  // cc_dep1
    unsigned long long v94;  // cc_dep2
    unsigned long long v95;  // rax
    unsigned long long v96;  // cc_dep1
    unsigned long long v97;  // rdx
    char *v98;  // rdi
    unsigned long long v99;  // rcx
    char *v100;  // rsi
    unsigned long long *v101;  // rsi
    unsigned long long v102;  // cc_dep1
    unsigned long long v103;  // cc_dep2
    char *v104;  // rdx
    unsigned long long v105;  // cc_dep1
    unsigned long long v106;  // rax
    unsigned long long v107;  // rax
    unsigned long long *v108;  // rsi
    unsigned long long v109;  // rsi
    unsigned long long v110;  // rax
    unsigned long long v111;  // rax
    char *v112;  // rsi
    unsigned long long *v113;  // rdx
    unsigned long long v114;  // rax
    unsigned long long v115;  // rax
    unsigned long long v116;  // rsi
    unsigned long long *v117;  // rdx
    unsigned long long v118;  // rax
    unsigned long long *v119;  // rdx

    v3 = v2;
    v14 = v4;
    v5 = v12;
    v6 = v7;
    if (((unsigned int)v1 & 0x400000) != 0)
    {
        v12 = "upper";
        v8 = 6;
        v7 = v4;
        while (v8 != 0)
        {
            v8 -= 1;
            v9 = *(v7);
            v10 = *(v12);
            v12 = &v12[v11];
            v7 = &v7[v11];
            break;
        }
        v13 = (v9 > v10) - 0 - (v9 < v10);
        if ((char)v13 == 0)
        {
            v14 = "alpha";
        }
        else
        {
            v15 = 6;
            v12 = "lower";
            v7 = v4;
            while (v15 != 0)
            {
                v15 -= 1;
                v19 = *(v7);
                v20 = *(v12);
                v12 = &v12[v11];
                v7 = &v7[v11];
                break;
            }
            v32 = *(v3);
            v14 = ((v19 > v20) - 0 - (v19 < v20) == 0? "alpha" : v4);
            v17 = *(v16);
        }
    }
    if ((char)v13 == 0 || ((unsigned int)v1 & 0x400000) == 0)
    {
        v32 = *(v3);
        v17 = *(v16);
    }
    if ((char)v13 == 0 && *(v18) == *(v3) || ((unsigned int)v1 & 0x400000) == 0 && *(v18) == *(v3) || *(v18) == *(v3) && (char)v13 != 0 && ((unsigned int)v1 & 0x400000) != 0)
    {
        v21 = v32 * 2 + 1;
        v0 = v16;
        v17 = realloc(v17, (v32 * 2 + 1) * 8);
    }
    if ((char)v13 == 0 && *(v18) == *(v3) || ((unsigned int)v1 & 0x400000) == 0 && *(v18) == *(v3) || *(v18) == *(v3) && (char)v13 != 0 && ((unsigned int)v1 & 0x400000) != 0)
    {
        if (v17 != 0)
        {
            *(v0) = v17;
            *(v18) = v21;
            v32 = *(v3);
        }
        else
        {
            v114 = 12;
        }
    }
    if (v17 != 0 || (char)v13 == 0 && *(v18) != *(v3) || ((unsigned int)v1 & 0x400000) == 0 && *(v18) != *(v3) || (char)v13 != 0 && ((unsigned int)v1 & 0x400000) != 0 && *(v18) != *(v3))
    {
        *(v3) = v32 + 1;
        v22 = v17 + v32 * 8;
        *(v22) = wctype((unsigned int)v14);
        while (v32 != 0)
        {
            v32 -= 1;
            v23 = *(v7);
            v24 = *(v12);
            v12 = &v12[v11];
            v7 = &v7[v11];
            break;
        }
        v25 = (v23 > v24) - 0 - (v23 < v24);
        if ((char)v25 != 0)
        {
            v26 = "cntrl";
            v46 = 6;
            v27 = v14;
            while (v46 != 0)
            {
                v46 -= 1;
                v28 = *(v27);
                v29 = *(v26);
                v26 = &v26[v11];
                v27 = &v27[v11];
                break;
            }
            v31 = (v28 > v29) - 0 - (v28 < v29);
            if ((char)v31 == 0)
            {
                v40 = *((long long *)(unsigned long long)__ctype_b_loc());
                if (v5 == 0)
                {
                    do
                    {
                        if ((v40[2 * v46] & 2) != 0)
                        {
                            v6[v46 >> 6] = v6[v46 >> 6] | 1 << (v46 & 63);
                        }
                        v46 += 1;
                    }
                    while (v46 != 0x100);
                }
                else
                {
                    v42 = 0;
                    do
                    {
                        if ((v40[2 * v42] & 2) != 0)
                        {
                            v47 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v42)) >> 3) & 24);
                            *((long long *)(v6 + v47)) = *((long long *)(v6 + v47)) | 1 << (*((char *)(v5 + v42)) & 63);
                        }
                        v42 += 1;
                    }
                    while (v42 != 0x100);
                }
            }
            else
            {
                v33 = "lower";
                v34 = 6;
                v35 = v14;
                while (v34 != 0)
                {
                    v34 -= 1;
                    v38 = *(v35);
                    v39 = *(v33);
                    v33 = &v33[v11];
                    v35 = &v35[v11];
                    break;
                }
                v41 = (v38 > v39) - 0 - (v38 < v39);
                if ((char)v41 != 0)
                {
                    v43 = "space";
                    v44 = 6;
                    v45 = v14;
                    while (v44 != 0)
                    {
                        v44 -= 1;
                        v48 = *(v45);
                        v49 = *(v43);
                        v43 = &v43[v11];
                        v45 = &v45[v11];
                        break;
                    }
                    v51 = (v48 > v49) - 0 - (v48 < v49);
                    if ((char)v51 == 0)
                    {
                        v59 = *((long long *)(unsigned long long)__ctype_b_loc());
                        if (v5 == 0)
                        {
                            do
                            {
                                if ((*((char *)(v59 + (v44 << 1) + 1)) & 32) != 0)
                                {
                                    v6[v44 >> 6] = v6[v44 >> 6] | 1 << (v44 & 63);
                                }
                                v44 += 1;
                            }
                            while (v44 != 0x100);
                        }
                        else
                        {
                            v61 = 0;
                            do
                            {
                                if ((*((char *)(v59 + (v61 << 1) + 1)) & 32) != 0)
                                {
                                    v65 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v61)) >> 3) & 24);
                                    *((long long *)(v6 + v65)) = *((long long *)(v6 + v65)) | 1 << (*((char *)(v5 + v61)) & 63);
                                }
                                v61 += 1;
                            }
                            while (v61 != 0x100);
                        }
                    }
                    else
                    {
                        v53 = "alpha";
                        v54 = 6;
                        v55 = v14;
                        while (v54 != 0)
                        {
                            v54 -= 1;
                            v57 = *(v55);
                            v58 = *(v53);
                            v53 = &v53[v11];
                            v55 = &v55[v11];
                            break;
                        }
                        v60 = (v57 > v58) - 0 - (v57 < v58);
                        if ((char)v60 != 0)
                        {
                            v62 = "digit";
                            v63 = 6;
                            v64 = v14;
                            while (v63 != 0)
                            {
                                v63 -= 1;
                                v66 = *(v64);
                                v67 = *(v62);
                                v62 = &v62[v11];
                                v64 = &v64[v11];
                                break;
                            }
                            v69 = (v66 > v67) - 0 - (v66 < v67);
                            if ((char)v69 == 0)
                            {
                                v77 = *((long long *)(unsigned long long)__ctype_b_loc());
                                if (v5 == 0)
                                {
                                    do
                                    {
                                        if ((*((char *)(v77 + (v63 << 1) + 1)) & 8) != 0)
                                        {
                                            v6[v63 >> 6] = v6[v63 >> 6] | 1 << (v63 & 63);
                                        }
                                        v63 += 1;
                                    }
                                    while (v63 != 0x100);
                                }
                                else
                                {
                                    v79 = 0;
                                    do
                                    {
                                        if ((*((char *)(v77 + (v79 << 1) + 1)) & 8) != 0)
                                        {
                                            v83 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v79)) >> 3) & 24);
                                            *((long long *)(v6 + v83)) = *((long long *)(v6 + v83)) | 1 << (*((char *)(v5 + v79)) & 63);
                                        }
                                        v79 += 1;
                                    }
                                    while (v79 != 0x100);
                                }
                            }
                            else
                            {
                                v71 = "print";
                                v72 = 6;
                                v73 = v14;
                                while (v72 != 0)
                                {
                                    v72 -= 1;
                                    v75 = *(v73);
                                    v76 = *(v71);
                                    v71 = &v71[v11];
                                    v73 = &v73[v11];
                                    break;
                                }
                                v78 = (v75 > v76) - 0 - (v75 < v76);
                                if ((char)v78 == 0)
                                {
                                    v86 = *((long long *)(unsigned long long)__ctype_b_loc());
                                    if (v5 == 0)
                                    {
                                        do
                                        {
                                            if ((*((char *)(v86 + (v72 << 1) + 1)) & 64) != 0)
                                            {
                                                v6[v72 >> 6] = v6[v72 >> 6] | 1 << (v72 & 63);
                                            }
                                            v72 += 1;
                                        }
                                        while (v72 != 0x100);
                                    }
                                    else
                                    {
                                        v88 = 0;
                                        do
                                        {
                                            if ((*((char *)(v86 + (v88 << 1) + 1)) & 64) != 0)
                                            {
                                                v92 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v88)) >> 3) & 24);
                                                *((long long *)(v6 + v92)) = *((long long *)(v6 + v92)) | 1 << (*((char *)(v5 + v88)) & 63);
                                            }
                                            v88 += 1;
                                        }
                                        while (v88 != 0x100);
                                    }
                                }
                                else
                                {
                                    v80 = "upper";
                                    v81 = 6;
                                    v82 = v14;
                                    while (v81 != 0)
                                    {
                                        v81 -= 1;
                                        v84 = *(v82);
                                        v85 = *(v80);
                                        v80 = &v80[v11];
                                        v82 = &v82[v11];
                                        break;
                                    }
                                    v87 = (v84 > v85) - 0 - (v84 < v85);
                                    if ((char)v87 == 0)
                                    {
                                        v95 = *((long long *)(unsigned long long)__ctype_b_loc());
                                        if (v5 == 0)
                                        {
                                            do
                                            {
                                                if ((*((char *)(v95 + (v81 << 1) + 1)) & 1) != 0)
                                                {
                                                    v6[v81 >> 6] = v6[v81 >> 6] | 1 << (v81 & 63);
                                                }
                                                v81 += 1;
                                            }
                                            while (v81 != 0x100);
                                        }
                                        else
                                        {
                                            v97 = 0;
                                            do
                                            {
                                                if ((*((char *)(v95 + (v97 << 1) + 1)) & 1) != 0)
                                                {
                                                    v101 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v97)) >> 3) & 24);
                                                    *((long long *)(v6 + v101)) = *((long long *)(v6 + v101)) | 1 << (*((char *)(v5 + v97)) & 63);
                                                }
                                                v97 += 1;
                                            }
                                            while (v97 != 0x100);
                                        }
                                    }
                                    else
                                    {
                                        v89 = "blank";
                                        v90 = 6;
                                        v91 = v14;
                                        while (v90 != 0)
                                        {
                                            v90 -= 1;
                                            v93 = *(v91);
                                            v94 = *(v89);
                                            v89 = &v89[v11];
                                            v91 = &v91[v11];
                                            break;
                                        }
                                        v96 = (v93 > v94) - 0 - (v93 < v94);
                                        if ((char)v96 == 0)
                                        {
                                            v104 = *((long long *)(unsigned long long)__ctype_b_loc());
                                            if (v5 == 0)
                                            {
                                                do
                                                {
                                                    if ((v104[2 * v90] & 1) != 0)
                                                    {
                                                        v6[v90 >> 6] = v6[v90 >> 6] | 1 << (v90 & 63);
                                                    }
                                                    v90 += 1;
                                                }
                                                while (v90 != 0x100);
                                            }
                                            else
                                            {
                                                v106 = 0;
                                                do
                                                {
                                                    if ((v104[2 * v106] & 1) != 0)
                                                    {
                                                        v108 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v106)) >> 3) & 24);
                                                        *((long long *)(v6 + v108)) = *((long long *)(v6 + v108)) | 1 << (*((char *)(v5 + v106)) & 63);
                                                    }
                                                    v106 += 1;
                                                }
                                                while (v106 != 0x100);
                                            }
                                        }
                                        else
                                        {
                                            v98 = "graph";
                                            v99 = 6;
                                            v100 = v14;
                                            while (v99 != 0)
                                            {
                                                v99 -= 1;
                                                v102 = *(v100);
                                                v103 = *(v98);
                                                v98 = &v98[v11];
                                                v100 = &v100[v11];
                                                break;
                                            }
                                            v105 = (v102 > v103) - 0 - (v102 < v103);
                                            if ((char)v105 == 0)
                                            {
                                                v109 = *((long long *)(unsigned long long)__ctype_b_loc());
                                                if (v5 == 0)
                                                {
                                                    do
                                                    {
                                                        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x6<64>, Conv(16->64, Load(addr=(rsi<8> + (rax<8> << 0x1<8>)), size=2, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))
                                                        {
                                                            v6[v99 >> 6] = v6[v99 >> 6] | 1 << (v99 & 63);
                                                        }
                                                        v99 += 1;
                                                    }
                                                    while (v99 != 0x100);
                                                }
                                                else
                                                {
                                                    v111 = 0;
                                                    do
                                                    {
                                                        if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x6<64>, Conv(16->64, Load(addr=(rsi<8> + (rax<8> << 0x1<8>)), size=2, endness=Iend_LE)), 0x0<64>, cc_ndep<8>))
                                                        {
                                                            v113 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v111)) >> 3) & 24);
                                                            *((long long *)(v6 + v113)) = *((long long *)(v6 + v113)) | 1 << (*((char *)(v5 + v111)) & 63);
                                                        }
                                                        v111 += 1;
                                                    }
                                                    while (v111 != 0x100);
                                                }
                                            }
                                            else
                                            {
                                                v107 = strcmp(v14, "punct");
                                                if (v107 == 0)
                                                {
                                                    v112 = *((long long *)(unsigned long long)__ctype_b_loc());
                                                    if (v5 == 0)
                                                    {
                                                        do
                                                        {
                                                            if ((v112[2 * v99] & 4) != 0)
                                                            {
                                                                v6[v99 >> 6] = v6[v99 >> 6] | 1 << (v99 & 63);
                                                            }
                                                            v99 += 1;
                                                        }
                                                        while (v99 != 0x100);
                                                    }
                                                    else
                                                    {
                                                        v115 = 0;
                                                        do
                                                        {
                                                            if ((v112[2 * v115] & 4) != 0)
                                                            {
                                                                v117 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v115)) >> 3) & 24);
                                                                *((long long *)(v6 + v117)) = *((long long *)(v6 + v117)) | 1 << (*((char *)(v5 + v115)) & 63);
                                                            }
                                                            v115 += 1;
                                                        }
                                                        while (v115 != 0x100);
                                                    }
                                                }
                                                else
                                                {
                                                    v110 = strcmp(v14, "x");
                                                    if (v110 == 0)
                                                    {
                                                        v116 = *((long long *)(unsigned long long)__ctype_b_loc());
                                                        if (v5 == 0)
                                                        {
                                                            do
                                                            {
                                                                if ((*((char *)(v116 + (v99 << 1) + 1)) & 16) != 0)
                                                                {
                                                                    v6[v99 >> 6] = v6[v99 >> 6] | 1 << (v99 & 63);
                                                                }
                                                                v99 += 1;
                                                            }
                                                            while (v99 != 0x100);
                                                        }
                                                        else
                                                        {
                                                            v118 = 0;
                                                            do
                                                            {
                                                                if ((*((char *)(v116 + (v118 << 1) + 1)) & 16) != 0)
                                                                {
                                                                    v119 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v118)) >> 3) & 24);
                                                                    *((long long *)(v6 + v119)) = *((long long *)(v6 + v119)) | 1 << (*((char *)(v5 + v118)) & 63);
                                                                }
                                                                v118 += 1;
                                                            }
                                                            while (v118 != 0x100);
                                                        }
                                                    }
                                                    else
                                                    {
                                                        v114 = 4;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            v68 = *((long long *)(unsigned long long)__ctype_b_loc());
                            if (v5 == 0)
                            {
                                do
                                {
                                    if ((*((char *)(v68 + (v54 << 1) + 1)) & 4) != 0)
                                    {
                                        v6[v54 >> 6] = v6[v54 >> 6] | 1 << (v54 & 63);
                                    }
                                    v54 += 1;
                                }
                                while (v54 != 0x100);
                            }
                            else
                            {
                                v70 = 0;
                                do
                                {
                                    if ((*((char *)(v68 + (v70 << 1) + 1)) & 4) != 0)
                                    {
                                        v74 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v70)) >> 3) & 24);
                                        *((long long *)(v6 + v74)) = *((long long *)(v6 + v74)) | 1 << (*((char *)(v5 + v70)) & 63);
                                    }
                                    v70 += 1;
                                }
                                while (v70 != 0x100);
                            }
                        }
                    }
                }
                else
                {
                    v50 = *((long long *)(unsigned long long)__ctype_b_loc());
                    if (v5 == 0)
                    {
                        do
                        {
                            if ((*((char *)(v50 + (v34 << 1) + 1)) & 2) != 0)
                            {
                                v6[v34 >> 6] = v6[v34 >> 6] | 1 << (v34 & 63);
                            }
                            v34 += 1;
                        }
                        while (v34 != 0x100);
                    }
                    else
                    {
                        v52 = 0;
                        do
                        {
                            if ((*((char *)(v50 + (v52 << 1) + 1)) & 2) != 0)
                            {
                                v56 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v52)) >> 3) & 24);
                                *((long long *)(v6 + v56)) = *((long long *)(v6 + v56)) | 1 << (*((char *)(v5 + v52)) & 63);
                            }
                            v52 += 1;
                        }
                        while (v52 != 0x100);
                    }
                }
            }
        }
        else
        {
            v30 = *((long long *)(unsigned long long)__ctype_b_loc());
            if (v5 == 0)
            {
                do
                {
                    if ((v30[2 * v32] & 8) != 0)
                    {
                        v6[v32 >> 6] = v6[v32 >> 6] | 1 << (v32 & 63);
                    }
                    v32 += 1;
                }
                while (v32 != 0x100);
            }
            else
            {
                v37 = 0;
                do
                {
                    if ((v30[2 * v37] & 8) != 0)
                    {
                        v36 = (unsigned long long)((unsigned int)((unsigned long long)(char)*((char *)(v5 + v37)) >> 3) & 24);
                        *((long long *)(v6 + v36)) = *((long long *)(v6 + v36)) | 1 << (*((char *)(v5 + v37)) & 63);
                    }
                    v37 += 1;
                }
                while (v37 != 0x100);
            }
        }
        if (...)
        {
            v114 = 0;
        }
    }
    return v114;
}

int sub_408ae0()
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // r12
    unsigned long long v3;  // rdx
    unsigned long long v5;  // rdi
    unsigned long long v6[3];  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // rax
    unsigned long long v9;  // rcx
    unsigned long long v10[3];  // rdx
    unsigned long long v11[3];  // rdx
    unsigned long long v12[3];  // rbx

    v2 = v1;
    v12 = v5;
    while (true)
    {
        v6 = v12;
        v7 = v3;
        v8 = r12<8>();
        if ((unsigned int)v8 != 0)
        {
            break;
        }
        v10 = v12[1];
        v9 = 0;
        if (v12[1] == 0)
        {
            while (true)
            {
                v10 = v12[2];
                if (v10 != 0 && v12[2] != v9)
                {
                    break;
                }
                v11 = *(v12);
                v9 = v12;
                if (*(v12) == 0)
                {
                    break;
                }
                v12 = v11;
            }
            if (v12[2] != v9)
            {
                v12 = v10;
            }
            else if (v10 == 0 || v12[2] == v9)
            {
                return v8;
            }
        }
        v12 = v10;
    }
    return v8;
}

typedef struct struct_2 {
    char padding_0[152];
    struct struct_3 *field_98;
    char padding_a0[56];
    unsigned long long field_d8;
} struct_2;

typedef struct struct_6 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_5 *field_10;
} struct_6;

typedef struct struct_7 {
    char padding_0[40];
    unsigned long long field_28;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
    char padding_8[26];
    unsigned short field_22;
} struct_8;

int sub_406c60()
{
    unsigned int v0;  // [bp-0x74]
    unsigned long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned int v3;  // [bp-0x58]
    unsigned short v4;  // [bp-0x52]
    unsigned long v5;  // [bp-0x50]
    unsigned long long v6[3];  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v9;  // rdx
    unsigned long long v10;  // r15
    unsigned long v11;  // rcx
    struct_2 *v12;  // rdi
    unsigned long long v13;  // rcx
    unsigned long v14;  // r8
    unsigned long long v15;  // esi
    unsigned long long v16;  // rbp
    unsigned long long *v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rbx
    unsigned long long v20[7];  // r14
    struct_7 *v21;  // r15
    struct_8 *v22;  // r12
    unsigned long long v23;  // rax
    struct_6 *v24;  // r13
    unsigned long long v25[7];  // r15
    unsigned long long v26;  // r14

    v10 = v9;
    v1 = v11;
    v24 = v12->field_98->field_30 + v11 * 24;
    if (*((long long *)(v12->field_98->field_30 + (v11 + (v11 << 1) << 3) + 8)) > 0)
    {
        v13 = v10;
        v26 = v10;
        v19 = 0;
        v25 = v12->field_98;
        v5 = v14 * 40;
        v2 = 1 << (v13 & 63);
        v4 = !((unsigned int)(1 << (v13 & 63)));
        *((unsigned long long *)&v0) = v15 & 2;
        *((unsigned long long *)&v3) = v15 & 1;
        while (true)
        {
            v16 = v24->field_10[v19];
            v17 = v24->field_10[v19] * 16 + *(v25);
            v18 = (char)*((char *)(v24->field_10[v19] * 16 + *(v25) + 8));
            if (*((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) != 8)
            {
                if (v18 == 4 && v18 != 9 && v14 != -1)
                {
                    v15 = v26;
                    v6[0] = v24;
                    v7 = v19;
                    v20 = v25;
                    v21 = v16;
                    v22 = v5 + v12->field_d8;
                    while (true)
                    {
                        if (v22->field_0 == v21 && (v15 > 63 || (v22->field_22 & v2) != 0))
                        {
                            if (v1 != *((long long *)*((long long *)(v21->field_28 + ((char *)v21 + 0x2 * v21 << 3) + 16))))
                            {
                                v23 = sub_406c60();
                                if (v23 == -1)
                                {
                                    break;
                                }
                                if (v23 == 0 && v0 != 0)
                                {
                                    break;
                                }
                                if (v15 <= 63)
                                {
                                    v22->field_22 = v22->field_22 & v4;
                                }
                            }
                            else
                            {
                                return 0 - (v15 & 1);
                            }
                        }
                        if (v1 != *((long long *)*((long long *)(v21->field_28 + ((char *)v21 + 0x2 * v21 << 3) + 16))) || v22->field_0 != v21 || v15 <= 63 && (v22->field_22 & v2) == 0)
                        {
                            v22 = (char *)&v22[1].field_0 + 4;
                            v24 = v6;
                            v21 = v20;
                            v26 = v15;
                            v19 = v7 + 1;
                            break;
                        }
                    }
                    if (v22->field_0 == v21 && v1 != *((long long *)*((long long *)(v21->field_28 + ((char *)v21 + 0x2 * v21 << 3) + 16))) && (v15 > 63 || (v22->field_22 & v2) != 0))
                    {
                        return -18446744069414584321;
                    }
                    else if (v22[-1].padding_8[20] == 0 && ((v22->field_22 & v2) == 0 || v0 == 0 || v22->field_0 != v21 || v23 != 0))
                    {
                        v16 = v24->field_10[v19];
                        v17 = v24->field_10[v19] * 16 + *(v25);
                        v18 = (char)*((char *)(v24->field_10[v19] * 16 + *(v25) + 8));
                    }
                    else if (v22->field_0 == v21 && v23 == 0 && v1 != *((long long *)*((long long *)(v21->field_28 + ((char *)v21 + 0x2 * v21 << 3) + 16))) && v23 != -1 && (v15 > 63 || (v22->field_22 & v2) != 0))
                    {
                        return 0;
                    }
                    else if (v22[-1].padding_8[20] == 0 && ((v22->field_22 & v2) == 0 || v0 == 0 || v22->field_0 != v21 || v23 != 0))
                    {
                        return (long long)v15 >> 1;
                    }
                }
                if ((v18 == 9 || v18 == 4) && (*(v17) == v26 || v18 != 9) && (v18 == 9 || v14 != -1) && (v18 != 9 || v0 != 0))
                {
                    return 0;
                }
            }
            if (*((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) == 8 && v3 == 0 || *((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) == 8 && *(v17) != v26 || v18 == 9 && v0 == 0 && *((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) != 8 || v18 == 9 && *(v17) != v26 && *((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) != 8 || v14 == -1 && v18 != 9 && *((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) != 8 || v18 != 9 && v18 != 4 && *((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) != 8)
            {
                v19 += 1;
                if (v24->field_8 <= v19)
                {
                    break;
                }
            }
            if ((v18 == 4 || *((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) == 8) && (*(v17) == v26 || *((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) != 8) && (*((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) == 8 || v18 != 9) && (*((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) == 8 || v14 != -1) && (*((char *)((v24->field_10[v19] << 4) + *(v25) + 8)) != 8 || v3 != 0))
            {
                return -18446744069414584321;
            }
        }
    }
    return (long long)v15 >> 1;
}

int sub_407cb0()
{
    sub_407c80();
    return 0;
}

int sub_406990()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_4068d0();
}

int sub_408600()
{
    unsigned long long *v1;  // rsi
    unsigned long long *v2;  // r8
    unsigned long v3;  // rdi
    unsigned long v4;  // rdx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi

    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v2 = *(v1);
        v8 = v3 - 1;
        for (v7 = 0; v7 < v8; v8 = v6)
        {
            if (v4 > v2[v7 + v8 >> 1])
            {
                v5 = v6;
                v6 = v8;
            }
            else
            {
                for (v6 = v7 + v8 >> 1; v7 < v6; v6 = v5)
                {
                    v5 = 0 + v6 >> 1;
                    if (v2[0 + v6 >> 1] < v4)
                    {
                        break;
                    }
                }
                if (v7 < v6)
                {
                    v7 = v5 + 1;
                }
            }
            v7 = v5 + 1;
        }
        return v7 + 1;
    }
    return 0;
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

int sub_411308()
{
    struct_0 *v1;  // rbx

    v1->field_8 = 11;
}

int sub_405270()
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
        rbp<4> = sub_405390();
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
        sub_404a20();
        error(((int)v1 == 0? 1 : (int)v1), (*(v6) == 22? 0 : *(v6)), "%s: ");
    }
}

typedef struct struct_0 {
    char padding_0[56];
    char field_38;
} struct_0;

extern unsigned long long g_61b948;

int sub_413d70()
{
    struct_0 *v1;  // rdx

    v1->field_38 = v1->field_38 & 4294967023 | (unsigned int)((unsigned long long)((unsigned int)(g_61b948 >> 25) & 1) * 16) | -128;
    if (sub_412fc0() == 0)
    {
        return 0;
    }
}

extern int512_t g_417ba0;

int sub_40bbe0()
{
    unsigned long v0;  // [bp-0x20]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp-0x8]
    unsigned long v4;  // r13
    unsigned long v5;  // r12
    unsigned long long v6[29];  // rdi
    unsigned long long v7[29];  // r12
    unsigned long v8;  // rbx
    unsigned long long v10;  // rbx
    unsigned long long v12;  // rbx
    unsigned long long v16;  // r13
    unsigned long long *v17;  // rdi
    unsigned long long v18;  // rbx
    unsigned long long v19[3];  // rbp

    v2 = v4;
    v1 = v5;
    v7 = v6;
    v0 = v8;
    if (*(v6) != 0 && v7[2] != 0)
    {
        v10 = 0;
        while (true)
        {
            v10 += 1;
            sub_407c80();
            if (v7[2] <= v10)
            {
                break;
            }
        }
    }
    v12 = 0;
    free(v7[3]);
    if (v7[2] != 0)
    {
        do
        {
            if (v7[6] != 0)
            {
                free(*((long long *)(v7[6] + v12 * 24 + 16)));
            }
            if (v7[7] != 0)
            {
                free(*((long long *)(v7[7] + v12 * 24 + 16)));
            }
            if (v7[5] != 0)
            {
                free(*((long long *)(v7[5] + v12 * 24 + 16)));
            }
            v12 += 1;
        }
        while (v7[2] > v12);
    }
    v16 = 0;
    free(v7[5]);
    free(v7[6]);
    free(v7[7]);
    free(*(v7));
    v17 = v7[8];
    if (v7[8] != 0)
    {
        while (true)
        {
            v18 = 0;
            v19 = &v17[3 * v16];
            if (v17[2 * v16 + v16] > 0)
            {
                while (true)
                {
                    v18 += 1;
                    sub_4081d0();
                    if (v18 >= *(v19))
                    {
                        break;
                    }
                }
            }
            v16 += 1;
            free(v19[2]);
            if (v7[17] < v16)
            {
                break;
            }
            v17 = v7[8];
        }
        v17 = v7[8];
    }
    free(v17);
    if (v7[15] != 4291488)
    {
        free(v7[15]);
    }
    free(v7[28]);
}

int sub_40d730() { crash_skku_timeout;
}
int sub_4090b0()
{
    unsigned long long v0;  // [bp-0x20]
    void tmp_21;  // tmp #21
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v5[3];  // rsi
    unsigned long long v6;  // r10
    unsigned long long v7[3];  // rdx
    unsigned long long v8;  // r13
    unsigned long long v9;  // r12
    unsigned long long v10[3];  // r12
    unsigned long long v11[3];  // rbp
    unsigned long long v12;  // rbx
    unsigned long long v13[3];  // rdi
    unsigned long long v14[3];  // rbx
    unsigned long long v15;  // rcx
    unsigned long long v16;  // r13
    unsigned long v17;  // r13
    unsigned long long v19;  // r8
    unsigned long long *v20;  // r13
    unsigned long long *v21;  // r11
    unsigned long long *v22;  // rax
    unsigned long long *v23;  // r10
    unsigned long long|unsigned long long *|unsigned long v24;  // rsi
    unsigned long long *v25;  // rcx
    unsigned long long v26;  // r8
    unsigned long long v27;  // rdx
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // cc_dep2
    unsigned long long v30;  // r9
    unsigned long long v31;  // rax
    unsigned long long *v32;  // r10
    unsigned long long *v33;  // r9
    unsigned long v34;  // rdx
    unsigned long long v35;  // rdx
    unsigned long long v36;  // r8
    unsigned long long v37;  // rcx
    unsigned long long *v38;  // r10
    unsigned long long|unsigned long long * v39;  // rax
    unsigned long long *v40;  // rdi
    void *v41;  // rsi
    unsigned long long v43;  // rax
    unsigned long long v44;  // rbx
    unsigned long long v45;  // r12
    unsigned long long v46;  // r13

    v6 = v5[1];
    if (v5[1] != 0)
    {
        v19 = v7[1];
        if (v7[1] != 0)
        {
            v3 = v8;
            v2 = v9;
            v10 = v7;
            v1 = stack_base + 0;
            v11 = v5;
            v0 = v12;
            v14 = v13;
            v15 = v13[1];
            v16 = *(v13);
            v40 = v13[2];
            if (v5[1] + v7[1] + v15 > v16)
            {
                v17 = v16 + v5[1] + v7[1];
                v40 = realloc(v40, v17 * 8);
                if (v40 != 0)
                {
                    v15 = v14[1];
                    v6 = v11[1];
                    v14[2] = v40;
                    v14[0] = v17;
                    v19 = v7[1];
                }
                else
                {
                    v43 = 12;
                }
            }
            if (v5[1] + v7[1] + v15 <= v16 || v40 != 0)
            {
                v20 = v11[2];
                v21 = v10[2];
                tmp_21 = v15 + v6;
                v22 = v19 - 1;
                v23 = v6 - 1;
                v24 = tmp_21 + v19;
                v25 = v15 - 1;
                v26 = *((long long *)(v11[2] + v23 * 8));
                v27 = *((long long *)(v10[2] + v22 * 8));
                while (true)
                {
                    v28 = v26;
                    v29 = v27;
                    if (v26 == *((long long *)((char *)v21 + 0x8 * v22)) || v26 == v27)
                    {
                        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                        {
                            while (true)
                            {
                                v30 = *((long long *)((char *)v40 + 0x8 * v25));
                                if (*((long long *)((char *)v40 + 0x8 * v25)) > v26)
                                {
                                    v25 = (char *)&v25[-1] + 7;
                                    if (v25 == -1)
                                    {
                                        break;
                                    }
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if (true)
                            {
                                v24 -= 1;
                                *((unsigned long long *)((char *)v40 + 0x8 * v24)) = v26;
                            }
                            else if (*((long long *)((char *)v40 + 0x8 * v25)) <= v26)
                            {
                                v23 = (char *)&v23[-1] + 7;
                                if ((char)((char *)&v23[-1] + 7 >> 63))
                                {
                                    break;
                                }
                            }
                        }
                        v24 -= 1;
                        *((unsigned long long *)((char *)v40 + 0x8 * v24)) = v26;
                        v22 = (char *)&v22[-1] + 7;
                        if ((char)((char *)&v22[-1] + 7 >> 63))
                        {
                            break;
                        }
                        v26 = *((long long *)((char *)v20 + 0x8 * v23));
                    }
                    if (v28 < v29)
                    {
                        v27 = *((long long *)((char *)v21 + 0x8 * v22));
                        v28 = v26;
                        v29 = *((long long *)((char *)v21 + 0x8 * v22));
                    }
                    if (v28 < v29)
                    {
                        v31 = (char *)&v22[-1] + 7;
                        if ((char)((char *)&v22[-1] + 7 >> 63))
                        {
                            break;
                        }
                    }
                    v32 = (char *)&v23[-1] + 7;
                    if ((char)((char *)&v23[-1] + 7 >> 63))
                    {
                        break;
                    }
                    v26 = *((long long *)((char *)v20 + 0x8 * v32));
                }
                v39 = v14[1] - 1;
                v33 = v11[1] + v14[1] + v10[1] - 1;
                v34 = v11[1] + v14[1] + v10[1] - v24;
                v14[1] = v14[1] + v11[1] + v14[1] + v10[1] - v24;
                if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rax<8>, 0x0<64>, cc_ndep<8>)))
                {
                    while (true)
                    {
                        v36 = *((long long *)((char *)v40 + 0x8 * v33));
                        v37 = *((long long *)((char *)v40 + 0x8 * v39));
                        v38 = (char *)v40 + 0x8 * ((char *)v39 + v34);
                        if (*((long long *)((char *)v40 + 0x8 * v33)) > *((long long *)((char *)v40 + 0x8 * v39)))
                        {
                            v33 = (char *)&v33[-1] + 7;
                            *(v38) = v36;
                            v34 -= 1;
                            v40 = v14[2];
                            v35 = 0;
                        }
                        else
                        {
                            v39 = (char *)&v39[-1] + 7;
                            *(v38) = v37;
                            v35 = v34 * 8;
                            v40 = v14[2];
                        }
                    }
                }
                else
                {
                    v35 = v34 * 8;
                }
                v41 = &v40[v24];
                memcpy(v40, v41, v35);
                v43 = 0;
            }
            v44 = v0;
            v45 = v2;
            v46 = v3;
            return v43;
        }
    }
    if (v7[1] == 0 || v5[1] == 0)
    {
        return 0;
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_0;

extern int512_t g_800008;

int sub_411380()
{
    struct_0 *v4;  // rbx

    v4->field_8 = 12;
    v4->field_0 = 16;
}

int sub_409da0()
{
    unsigned int v0;  // [bp-0x4c]
    char v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v8;  // r14
    unsigned long long v9;  // r13
    unsigned long long v10;  // rdx
    unsigned long long v12;  // r12
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rsi
    unsigned long long v17;  // rax
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long v22;  // r14

    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rcx<8>, 0x0<64>, cc_ndep<8>)))
    {
        v6 = v8;
        v5 = v9;
        v4 = v12;
        v3 = stack_base + 0;
        v2 = v13;
        v18 = 0;
        while (true)
        {
            v14 = *((long long *)(v10 + v18 * 8));
            if (*((long long *)(v15 + (v18 << 3))) != 0)
            {
                if (v14 != 0)
                {
                    v17 = sub_409720();
                    v0 = v17;
                    if ((unsigned int)v17 != 0)
                    {
                        break;
                    }
                    *((unsigned long long *)(v15 + v18 * 8)) = (unsigned int)sub_409bb0();
                    free(*((long long *)&v1));
                    v17 = v0;
                    if (v0 != 0)
                    {
                        break;
                    }
                }
                v18 += 1;
            }
            else
            {
                *((unsigned long long *)(v15 + v18 * 8)) = v14;
                v18 += 1;
            }
            v17 = 0;
        }
        v19 = v2;
        v20 = v4;
        v21 = v5;
        v22 = v6;
        return v17;
    }
    return 0;
}

int sub_402c80()
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

extern unsigned int g_414f16;
extern unsigned int g_414f24;
extern unsigned int g_414f41;
extern unsigned int g_41505a;
extern unsigned int g_415828;
extern unsigned int g_415910;
extern unsigned int g_415938;
extern unsigned long long g_61b250;
extern unsigned int g_61b258;
extern unsigned long long g_61b260;
extern char g_61b268;
extern unsigned long long g_61b270;
extern unsigned long long g_61b278;
extern unsigned long long g_61b280;
extern unsigned long long g_61b288;
extern unsigned long long g_61b2a0;
extern unsigned int g_61b31c;
extern char g_61b368;
extern unsigned long long g_61b370;
extern unsigned long long g_61b378;
extern unsigned long long g_61b398;
extern unsigned long long g_61b3a0;
extern unsigned long long g_61b3a8;
extern unsigned long long g_61b3b0;
extern unsigned long long g_61b3b8;
extern unsigned long long g_61b3c0;
extern unsigned long long g_61b3c8;
extern unsigned long long g_61b760;
extern unsigned long long g_61b7a0;
extern unsigned long long g_61b940;

int main()
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v2;  // rdi
    unsigned long long v3;  // r12
    unsigned long long v4;  // rbx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rax
    char *v12;  // rdi
    unsigned long long v13;  // rcx
    char *v14;  // rsi
    unsigned long long v15;  // cc_dep1
    unsigned long long v16;  // cc_dep2
    unsigned long v17;  // d
    unsigned long long v18;  // rbx
    unsigned long long v19;  // cc_dep1
    unsigned long long v20;  // rbx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rbx
    char *v27;  // rdi
    unsigned long long v28;  // rcx
    char v29;  // cc_dep2
    unsigned long long v33;  // r14
    char *v38;  // rdi
    unsigned long long v39;  // rcx
    char v40;  // cc_dep2
    unsigned long v42;  // r13
    char *v43;  // rdx
    unsigned int v44;  // eax
    unsigned int v45;  // cc_dep1
    unsigned long long v46;  // rbx

    v3 = v2;
    v4 = 1;
    sub_402e00();
    setlocale(0x6, 0x41505a);
    bindtextdomain(0x414f16, 0x415828);
    textdomain(0x414f16);
    sub_414e30();
    g_61b368 = 0;
    while (true)
    {
        v7 = sub_406950();
        if ((unsigned int)v7 != -1)
        {
            if ((unsigned int)v7 != 105)
            {
                if (v7 > 105)
                {
                    if ((unsigned int)v7 == 112)
                    {
                        g_61b268 = 0;
                    }
                    else if (v7 > 112)
                    {
                        if ((unsigned int)v7 == 118)
                        {
                            dcgettext(0x0, 0x414f24, 0x5);
                            g_61b278 = (unsigned int)sub_405360();
                        }
                        if ((unsigned int)v7 == 119)
                        {
                            dcgettext(0x0, 0x415938, 0x5);
                            g_61b258 = sub_405360();
                        }
                        if ((unsigned int)v7 == 115)
                        {
                            g_61b288 = g_61b940;
                        }
                    }
                    else
                    {
                        if ((unsigned int)v7 == 108)
                        {
                            dcgettext(0x0, 0x415910, 0x5);
                            g_61b260 = (unsigned int)sub_405360();
                        }
                        else if ((unsigned int)v7 == 110)
                        {
                            if ((char)v19 == 0)
                            {
                                g_61b250 = "%-*ld%s";
                            }
                            else
                            {
                                v21 = strcmp(g_61b940, "rn");
                                if (v21 != 0)
                                {
                                    v22 = strcmp(g_61b940, "rz");
                                    if (v22 == 0)
                                    {
                                        g_61b250 = "%0*ld%s";
                                    }
                                    else
                                    {
                                        v23 = (unsigned int)sub_404a20();
                                    }
                                }
                                else
                                {
                                    g_61b250 = "%*ld%s";
                                }
                            }
                        }
                        if ((unsigned int)v7 == 110)
                        {
                            v12 = "ln";
                            v13 = 3;
                            v14 = g_61b940;
                            while (v13 != 0)
                            {
                                v13 -= 1;
                                v15 = *(v14);
                                v16 = *(v12);
                                v12 = &v12[v17];
                                v14 = &v14[v17];
                                break;
                            }
                            v19 = (v15 > v16) - 0 - (v15 < v16);
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v7 == 98)
                    {
                        v8 = sub_4022e0();
                        v10 = (unsigned int)sub_404a20();
                    }
                    else if (v7 > 98)
                    {
                        if ((unsigned int)v7 == 102)
                        {
                            v9 = sub_4022e0();
                            v18 = (unsigned int)sub_404a20();
                        }
                        if ((unsigned int)v7 == 104)
                        {
                            v11 = sub_4022e0();
                            v20 = (unsigned int)sub_404a20();
                        }
                        if ((unsigned int)v7 == 100)
                        {
                            g_61b280 = g_61b940;
                        }
                    }
                    else if ((unsigned int)v7 == -131)
                    {
                        v0 = 0;
                        sub_404ea0();
                        exit(0x0); /* do not return */
                    }
                    else
                    {
                        v4 = 0;
                        sub_4027c0(); /* do not return */
                    }
                }
                if (v7 <= 112 && (unsigned int)v7 != 108 && (unsigned int)v7 != 110 && (unsigned int)v7 != 112 && v7 > 105 || v7 <= 105 && (unsigned int)v7 != 104 && (unsigned int)v7 != 98 && (unsigned int)v7 != 100 && (unsigned int)v7 != 102 && v7 > 98 || (unsigned int)v7 != 115 && (unsigned int)v7 != 118 && (unsigned int)v7 != 112 && v7 > 112 && v7 > 105 && (unsigned int)v7 != 119)
                {
                    v4 = 0;
                }
                if ((unsigned int)v7 == 98 && v7 <= 105 || (unsigned int)v7 == 102 && v7 <= 105 && (unsigned int)v7 != 98 && v7 > 98 || (unsigned int)v7 == 104 && v7 <= 105 && (unsigned int)v7 != 98 && (unsigned int)v7 != 102 && v7 > 98 || (unsigned int)v7 == 110 && v7 <= 112 && (char)v19 != 0 && v22 != 0 && (unsigned int)v7 != 108 && (unsigned int)v7 != 112 && v21 != 0 && v7 > 105)
                {
                    v4 = 0;
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v14, 0x5));
                }
            }
            else
            {
                dcgettext(0x0, 0x414f41, 0x5);
                g_61b270 = (unsigned int)sub_405360();
            }
        }
        else
        {
            if (v4 != 0)
            {
                v27 = g_61b280;
                v28 = -1;
            }
            else
            {
                sub_4027c0(); /* do not return */
            }
        }
    }
    while (v28 != 0)
    {
        v28 -= 1;
        v29 = *(v27);
        v27 = &v27[v17];
        break;
    }
    v33 = !(rcx<8>);
    g_61b3b8 = (v33 + -1) * 3;
    g_61b3c0 = (unsigned int)sub_404fe0();
    strcpy(stpcpy(stpcpy(g_61b3c0, g_61b280), g_61b280), g_61b280);
    g_61b3a8 = g_61b398 * 2;
    g_61b3b0 = (unsigned int)sub_404fe0();
    strcpy(stpcpy(g_61b3b0, g_61b280), g_61b280);
    g_61b398 = v33 + -1;
    g_61b3a0 = (unsigned int)sub_404fe0();
    strcpy(g_61b3a0, g_61b280);
    sub_402cb0();
    v38 = g_61b288;
    v39 = -1;
    while (v39 != 0)
    {
        v39 -= 1;
        v40 = *(v38);
        v38 = &v38[v17];
        break;
    }
    g_61b378 = (unsigned int)sub_404fe0();
    v42 = !(rcx<8>) + -1 + (int)g_61b258;
    v43 = v42;
    g_61b3c8 = &g_61b760;
    *((char *)(memset(g_61b378, 0x20, v43) + v43)) = 0;
    g_61b370 = g_61b278;
    g_61b7a0 = g_61b2a0;
    if (!(g_61b31c != (unsigned int)v3))
    {
        v4 = sub_402420();
    }
    else if (g_61b31c < v3)
    {
        do
        {
            v4 = (unsigned int)v4 & sub_402420();
            v44 = g_61b31c + 1;
            g_61b31c = g_61b31c + 1;
        }
        while (v44 < (unsigned int)v3);
    }
    if (g_61b368 != 0)
    {
        v45 = sub_405ae0();
        if ((char)(v45 + 1 == 0))
        {
            error(0x1, *(__errno_location()), "-");
        }
    }
    if (!((char)(v45 + 1 == 0)))
    {
        v46 = v4 ^ 1;
        return v46;
    }
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

int sub_412d20()
{
    unsigned long v0;  // [bp-0x60]
    unsigned long v1;  // [bp-0x58]
    unsigned long v2;  // [bp-0x50]
    char v3;  // [bp-0x40]
    unsigned long long v5;  // rdx
    struct_0 *v6;  // rbp
    unsigned int *v7;  // r9
    unsigned int *v8;  // rbx
    unsigned long v9;  // rdi
    unsigned long long *v10;  // rsi
    unsigned long v11;  // r8
    unsigned long long|unsigned long v14;  // r14
    unsigned long long v15;  // rax
    unsigned long long v19;  // rax

    v6 = v5;
    v8 = v7;
    v0 = v9;
    v2 = *(v10);
    v14 = (unsigned int)sub_411830();
    if (*(v7) == 0 || v14 != 0)
    {
        while (true)
        {
            v15 = v6->field_8;
            if ((v6->field_8 & 247) == 2)
            {
                break;
            }
            for (; v11 == 0 || v15 != 9; v14 = (v14 == 0? v1 : v14))
            {
                if (v1 == 0 && *(v8) != 0)
                {
                    if (v14 == 0)
                    {
                        break;
                    }
                    sub_406aa0();
                }
                if (*(v8) == 0 || v1 != 0)
                {
                    if (v14 != 0 && v1 != 0)
                    {
                        v1 = (unsigned int)sub_411830();
                        v3 = 16;
                        if (v14 != 0)
                        {
                            v14 = sub_409270();
                            v15 = v6->field_8;
                            if ((v6->field_8 & 247) == 2)
                            {
                                break;
                            }
                        }
                        else
                        {
                            sub_406aa0();
                            sub_406aa0();
                            v14 = 0;
                            *(v8) = 12;
                        }
                    }
                }
            }
            if (v1 == 0 && *(v8) != 0 && (v11 == 0 || v15 != 9))
            {
                v14 = 0;
            }
            else if (v15 == 9 || v14 != 0)
            {
                v19 = v14;
                return v19;
            }
        }
        if ((v6->field_8 & 247) != 2)
        {
            v14 = 0;
        }
        else
        {
            v19 = v14;
            return v19;
        }
    }
    v14 = 0;
    v19 = v14;
    return v19;
}

int sub_4113f8()
{
}

extern unsigned int g_414efb;
extern unsigned int g_415088;
extern unsigned int g_4150b0;
extern unsigned int g_4150d8;
extern unsigned int g_415118;
extern unsigned int g_415150;
extern unsigned int g_4151a0;
extern unsigned int g_415278;
extern unsigned int g_415438;
extern unsigned int g_4154c8;
extern unsigned int g_4154f8;
extern unsigned int g_415530;
extern unsigned int g_415608;
extern unsigned int g_415788;
extern unsigned int g_4157d0;
extern unsigned int g_4157f0;
extern unsigned long long stdout;

int sub_4027c0()
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
        dcgettext(0x0, 0x415088, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4150b0, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4150d8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415118, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415150, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4151a0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415278, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415438, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4154c8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4154f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415530, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x415608, 0x5), stdout);
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
            v34 = "nl";
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
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x414efb, 0x5));
            v43 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x414efb, 0x5));
            v42 = setlocale(0x5, 0x0);
            if (v42 != 0)
            {
                v44 = strncmp(v42, "en", 0x3);
            }
            if (v44 == 0 || v42 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4157d0, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v43, "en", 0x3) != 0) && (v3 == 0 || v43 != 0) && (v44 != 0 || v3 != 0) && (v42 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x415788, 0x5));
        }
        if (v3 != 0 || v44 != 0 && v42 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4157d0, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4157f0, 0x5));
    }
    exit(v19); /* do not return */
}

int sub_404370()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4051e0();
}

int sub_408890()
{
    unsigned long v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x60]
    unsigned long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long v6;  // [bp+0x8]
    unsigned long long v7;  // rbx
    unsigned long long v8[28];  // rdi
    unsigned long long v9;  // r15
    unsigned long v10;  // r8
    unsigned long long v11;  // r10
    unsigned long long v12;  // r13
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rbp
    unsigned long long v17;  // r10
    unsigned long long v18;  // r14
    unsigned long long v19;  // rbp
    unsigned long long *v20;  // rsi
    unsigned long v21;  // r9
    unsigned long long v22;  // r14
    unsigned long v23;  // rcx
    unsigned int v24;  // ebx
    unsigned long long v25;  // rax
    unsigned long long v26;  // rax

    v7 = 0;
    v9 = v8[25];
    *((unsigned long long [28])&v0) = v8[19];
    for (v13 = v8[25]; v7 < v13; v13 = v11)
    {
        if (v10 > *((long long *)(v8[27] + (((v7 + v13 >> 63) + v7 + v13 >> 1) + ((v7 + v13 >> 63) + v7 + v13 >> 1 << 2) << 3) + 8)))
        {
            v12 = v11;
            v11 = v13;
        }
        else
        {
            for (v11 = (v7 + v13 >> 63) + v7 + v13 >> 1; 0 < v11; v11 = v13)
            {
                v13 = (0 + v11 >> 63) + 0 + v11 >> 1;
                v12 = (0 + v11 >> 63) + 0 + v11 >> 1;
                if (*((long long *)(v8[27] + (((0 + v11 >> 63) + 0 + v11 >> 1) + ((0 + v11 >> 63) + 0 + v11 >> 1 << 2) << 3) + 8)) < v10)
                {
                    break;
                }
            }
            if (0 < v11)
            {
                v7 = v12 + 1;
            }
        }
        v7 = v12 + 1;
    }
    v14 = -1;
    v14 = (v10 != *((long long *)(v8[27] + (v7 + (v7 << 2) << 3) + 8))? -1 : v7);
    v15 = v9;
    for (v16 = 0; v16 < v15; v15 = v17)
    {
        if (v6 > *((long long *)(v8[27] + (((v16 + v15 >> 63) + v16 + v15 >> 1) + ((v16 + v15 >> 63) + v16 + v15 >> 1 << 2) << 3) + 8)))
        {
            v18 = v17;
            v17 = v15;
        }
        else
        {
            for (v17 = (v16 + v15 >> 63) + v16 + v15 >> 1; v16 < v17; v17 = v15)
            {
                v15 = (0 + v17 >> 63) + 0 + v17 >> 1;
                v18 = (0 + v17 >> 63) + 0 + v17 >> 1;
                if (*((long long *)(v8[27] + (((0 + v17 >> 63) + 0 + v17 >> 1) + ((0 + v17 >> 63) + 0 + v17 >> 1 << 2) << 3) + 8)) < v6)
                {
                    break;
                }
            }
            if (v16 < v17)
            {
                v16 = v18 + 1;
            }
        }
        v16 = v18 + 1;
    }
    v19 = -1;
    v19 = (v6 != *((long long *)(v8[27] + (v16 + (v16 << 2) << 3) + 8))? -1 : v16);
    if (*(v20) > 0)
    {
        v3 = v21;
        v22 = 0;
        v2 = v10;
        v1 = v23;
        v4 = v14;
        v5 = v19;
        while (true)
        {
            v24 = sub_406e70();
            v25 = sub_406e70();
            if (v24 != v25)
            {
                v26 = 1;
            }
            else
            {
                v22 += 1;
                if (v22 >= *(v20))
                {
                    break;
                }
            }
        }
        if (v24 == v25)
        {
            v26 = 0;
        }
        else if (v24 != v25)
        {
            return v26;
        }
    }
    v26 = 0;
    return v26;
}

int sub_409620()
{
    unsigned int v0;  // [bp-0x1c]
    struct struct_0 *v2[3];  // rsi
    unsigned long long *v3;  // rax
    unsigned long long *v4;  // rax

    v0 = 0;
    if (v2[1] != 0 && *((char *)(v2[1] + 48)) == 17)
    {
        v3 = sub_409400();
        v2[1] = &v3;
        if (v3 != 0)
        {
            *(v3) = v2;
        }
    }
    if (v2[2] != 0 && *((char *)(v2[2] + 48)) == 17)
    {
        v4 = sub_409400();
        v2[2] = &v4;
        if (v4 != 0)
        {
            *(v4) = v2;
        }
    }
    return v0;
}

typedef struct struct_0 {
    char padding_0[4291520];
    unsigned long long field_417bc0;
} struct_0;

extern int512_t g_417bc0;

int sub_414560()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rdx
    void *v3;  // rbp
    unsigned long long v4;  // rcx
    unsigned long long v5;  // r12
    void *v6;  // r13
    unsigned long v7;  // rbx

    if ((unsigned int)v1 > 16)
    {
        abort(); /* do not return */
    }
    v3 = v2;
    v5 = v4;
    v6 = (unsigned long long)dcgettext(0x0, (unsigned int)(char *)(4291680 + *((long long *)(0x8 * v1 + (char *)&g_417bc0))), 0x5);
    v7 = strlen(v6) + 1;
    if (v4 != 0)
    {
        v2 = v7;
        if (v7 > v4)
        {
            v2 = v5 - 1;
            *(&((char *)v3)[v5 + -1]) = 0;
        }
        memcpy(v3, v6, v2);
    }
    return v2;
}

int sub_4049d0()
{
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_41505a;
extern char g_61b938[2];

int sub_414850()
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

    v9 = g_61b938;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_41505a : (unsigned long long)nl_langinfo(0xe));
    if (g_61b938 == 0)
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
            v9 = &g_41505a;
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
                                    v9 = &g_41505a;
                                    v10 = (tmp_10 == 0? &g_41505a : tmp_10);
                                    free(NULL);
                                    sub_405ae0();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && (unsigned int)v26 != 32 && v28 > 1 && (unsigned int)v26 != 35 && v37 != 0)
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
                        if (v61 == -1 && (unsigned int)v26 == 35 || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v28 <= 1 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35)
                        {
                            v10 = (tmp_10 == 0? &g_41505a : tmp_10);
                            sub_405ae0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_41505a;
                    }
                    else if (((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1) && v0 != 0 || ((unsigned int)v26 != 32 && v28 > 1 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 == 0 || (unsigned int)v26 != 32 && v28 > 1 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v0 != 0) && v37 == 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_41505a;
            free(v17);
        }
        *((char *[2])&g_61b938[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_41505a : tmp_10), v9);
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

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[24];
    unsigned long long field_28;
    char padding_30[2];
    char field_32;
} struct_2;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[48];
    char field_38;
} struct_0;

typedef struct struct_3 {
    char padding_0[40];
    unsigned long long field_28;
    char padding_30[2];
    char field_32;
} struct_3;

int sub_409400()
{
    unsigned long v0;  // [bp-0x188]
    void tmp_25;  // tmp #25
    void tmp_42;  // tmp #42
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    char v3;  // [bp-0x40]
    struct_2 *v5;  // rdx
    struct_2 *v6;  // r12
    struct_0 *v7;  // rsi
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // r11
    unsigned long long|struct_3 * v12;  // r15
    unsigned long long|struct_3 * v13;  // rbx
    unsigned long long v14;  // rbp
    unsigned int *v15;  // rdi

    v6 = v5;
    if (!((v7->field_38 & 16) != 0))
    {
        v3 = 8;
        v1 = &v7->field_0->padding_0[128];
        v13 = (unsigned long long)(unsigned int)sub_409270();
        v3 = 9;
        v9 = sub_409270();
        v12 = v9;
        v11 = v9;
    }
    else if (v5->field_8 != 0)
    {
        v8 = v5->field_28;
        if (v5->field_28 <= 63)
        {
            v0 = v7->field_0->field_a0;
            if (((char)((char)*(&((char *)stack_base)[((v8 & 63) >> 3) + -392]) >> (unsigned long long)(char)(v8 & 63 & 7)) & 1) != 0)
            {
                v3 = 8;
                v1 = &v7->field_0->padding_0[128];
                v13 = (unsigned int)sub_409270();
                v3 = 9;
                v12 = (unsigned int)sub_409270();
            }
        }
    }
    else
    {
        v3 = 8;
        v1 = &v7->field_0->padding_0[128];
        v13 = (unsigned long long)(unsigned int)sub_409270();
        v3 = 9;
        v10 = sub_409270();
        v11 = v10;
        v12 = v10;
    }
    if (v5->field_8 != 0 && ((v7->field_38 & 16) == 0 || v5->field_28 <= 63) && ((v7->field_38 & 16) == 0 || ((char)((char)*(&((char *)stack_base)[((v8 & 63) >> 3) + -392]) >> (unsigned long long)(char)(v8 & 63 & 7)) & 1) != 0))
    {
        v3 = 16;
        v11 = (unsigned int)sub_409270();
    }
    if (v5->field_8 == 0 || (v7->field_38 & 16) == 0 || v5->field_28 <= 63 && ((char)((char)*(&((char *)stack_base)[((v8 & 63) >> 3) + -392]) >> (unsigned long long)(char)(v8 & 63 & 7)) & 1) != 0)
    {
        v3 = 16;
        v2 = v11;
        v14 = (unsigned int)sub_409270();
        if (v14 != 0 && v2 != 0 && v13 != 0 && v12 != 0)
        {
            tmp_25 = v6->field_28;
            v12->field_28 = v6->field_28;
            v13->field_28 = tmp_25;
            tmp_42 = v6->field_32;
            v12->field_32 = v12->field_32 & 4294967031 | (unsigned int)(v6->field_32 & 8);
            v13->field_32 = (unsigned int)(v13->field_32 & 4294967031) | tmp_42 & 8;
        }
        if (v14 == 0 || v12 == 0 || v13 == 0 || v2 == 0)
        {
            *(v15) = 12;
        }
    }
    return stack_base + 0;
}

int sub_414710()
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long v4;  // [bp+0x8]
    unsigned long v5;  // [bp+0x10]

    v3 = 1;
    v2 = v5;
    v1 = v4;
    v0 = 0;
    return sub_414320();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

int sub_407c80()
{
    struct_0 *v1;  // rdi

    if ((v1->field_8 & 262399) != 6 && (v1->field_8 & 262399) != 3)
    {
        return v1->field_8 & 262399;
    }
}

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_0 {
    uint128_t field_0;
    unsigned long long field_10;
} struct_0;

int sub_409720()
{
    unsigned long long v1[3];  // rsi
    unsigned long long v2;  // r12
    unsigned long long v3[3];  // rdx
    unsigned long long v4;  // r15
    unsigned long long v5[3];  // rdi
    struct_1 *v7;  // rbp
    void *v9;  // rax
    unsigned long long *v10;  // rdi
    unsigned long long v12;  // r14
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdx
    struct_0 *v15;  // rdi
    unsigned long long v16;  // rax
    unsigned long long *v17;  // rsi
    unsigned long long *v18;  // r9
    unsigned long long v19;  // rsi
    unsigned long long v20;  // r8
    unsigned long long v21;  // cc_dep2
    unsigned long v22;  // r12
    unsigned long long v25;  // rdx
    void *v26;  // rdi
    unsigned long long v27;  // rbx
    unsigned long v28;  // rdx

    if (v1 != 0)
    {
        v2 = v1[1];
        if (v3 != 0 && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rdx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
        {
            v4 = v3[1];
            v7 = v3;
            *(v5) = v1[1] + v3[1];
            v9 = malloc((v2 + v4) * 8);
            v5[2] = v5;
            if (v5 != 0)
            {
                v5 = v9;
                v12 = 0;
                v13 = 0;
                v14 = 0;
                while (true)
                {
                    v17 = v1[2] + v14 * 8;
                    if (v4 > v13)
                    {
                        v18 = v7->field_10;
                        v19 = *(v17);
                        v12 += 1;
                        v20 = v7->field_10[v13];
                        v21 = v7->field_10[v13];
                        if (v19 <= v7->field_10[v13])
                        {
                            *(v10) = v19;
                            v14 += 1;
                            v13 += (char)(v19 == v21);
                        }
                        else
                        {
                            v13 += 1;
                            *(v10) = v20;
                        }
                        v2 = v1[1];
                        v10 = &v10[1];
                        v25 = v7->field_8;
                        if (v13 >= v7->field_8)
                        {
                            break;
                        }
                        v26 = &v5[v12];
                        v27 = v25 - v13;
                        v28 = (v25 - v13) * 8;
                        v12 += v27;
                        memcpy(v26, &v18[v13], v28);
                    }
                    else
                    {
                        v22 = v2 - v14;
                        v12 += v22;
                        memcpy(v10, v17, v22 * 8);
                    }
                }
                v5[1] = v12;
                return 0;
            }
            v16 = 12;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rdx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) || v3[1] <= 0)
    {
        v15->field_10 = 0;
        v16 = 0;
        v15->field_0 = 0;
    }
    if (v3[1] <= 0 || v5 == 0 || (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rdx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rdx<8> + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
    {
        return v16;
    }
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_61b2f8;
extern uint128_t g_61b300;
extern unsigned int g_61b310;
extern int512_t g_61b7c0;

int sub_4041d0()
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
    v17 = g_61b2f8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_61b310 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_61b2f8 != 0x61b300)
            {
                v16 = sub_405040();
                g_61b2f8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_405040();
                v17 = v15;
                g_61b2f8 = v15;
                *(v15) = g_61b300;
            }
            memset(&v17[(long long)(int)g_61b310], 0x0, (int)((unsigned int)v13 + 1 - g_61b310) * 16);
            g_61b310 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_405230(); /* do not return */
        }
    }
    if (g_61b310 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_402fa0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6404032)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_404fe0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_402fa0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_405080()
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
        sub_405230(); /* do not return */
    }
}

typedef struct struct_1 {
    char padding_0[152];
    struct struct_2 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[32];
    unsigned int field_e0;
} struct_1;

typedef struct struct_3 {
    char padding_0[152];
    unsigned long long field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[32];
    unsigned int field_e0;
} struct_3;

int sub_40ebe0()
{
    unsigned long v0;  // [bp-0xa8]
    unsigned long long|unsigned int v1;  // [bp-0x90]
    unsigned long long *v2;  // [bp-0x88]
    unsigned int v3;  // [bp-0x7c]
    unsigned long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long v6;  // [bp-0x68]
    unsigned long v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long *v10;  // [bp-0x48]
    struct_1 *v12;  // rdi
    struct_3 *v13;  // r13
    unsigned long long v14[6];  // rsi
    unsigned long long v15[7];  // r14
    unsigned long long v17;  // rax
    unsigned long long *v18;  // rax
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rax
    unsigned int|unsigned long v25;  // rax
    unsigned long v26;  // rbx

    v13 = v12;
    v26 = v14[3];
    v8 = 1;
    v9 = 1;
    v10 = malloc(0x8);
    if (v10 != 0)
    {
        *((unsigned long long [6])v10) = v14[2];
        v25 = sub_410670();
        if ((unsigned int)v25 == 0)
        {
            v3 = 0;
            v7 = &v14[6];
            if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
            {
                while (true)
                {
                    v2 = v26 * 8;
                    if (*((long long *)(*(v14) + (v26 << 3))) != 0)
                    {
                        v3 = 0;
                    }
                    else
                    {
                        v3 += 1;
                    }
                    if (v12->field_e0 < v3 && *((long long *)(*(v14) + (v26 << 3))) == 0 || v12->field_e0 < 0 && *((long long *)(*(v14) + (v26 << 3))) != 0)
                    {
                        memset(*(v14), 0x0, v2);
                        free(v10);
                        return 0;
                    }
                    if (*((long long *)(*(v14) + (v26 << 3))) == 0 && v12->field_e0 >= v3 || v12->field_e0 >= 0 && *((long long *)(*(v14) + (v26 << 3))) != 0)
                    {
                        v26 -= 1;
                        v9 = 0;
                        v15 = *((long long *)&((char *)v2)[v13->field_b8 + -8]);
                        if (*((long long *)&((char *)v2)[v13->field_b8 + -8]) != 0 && v15[5] > 0)
                        {
                            v1 = 0;
                            while (true)
                            {
                                if ((*((char *)(*(v12->field_98) + (*((long long *)(v15[6] + (v1 << 3))) << 4) + 10)) & 16) != 0)
                                {
                                    v5 = *((long long *)(v15[6] + v1 * 8)) * 16;
                                    v6 = v13->field_98;
                                    *((unsigned long long [6])&v4) = v14[3];
                                    v17 = sub_40cd80();
                                    if ((unsigned int)v17 > 0)
                                    {
                                        v18 = v17 + v14[3] - 1;
                                        if (v4 >= v18)
                                        {
                                            v19 = *((long long *)(*(v14) + v18 * 8));
                                            if (v19 != 0)
                                            {
                                                v4 = v5;
                                                v20 = sub_408600();
                                            }
                                        }
                                    }
                                }
                                if ((*((char *)(*(v12->field_98) + (*((long long *)(v15[6] + (v1 << 3))) << 4) + 10)) & 16) == 0 || (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>) && (unsigned int)v17 <= 0 || v20 == 0 && (unsigned int)v17 > 0 && v4 >= v18 || v19 == 0 && (unsigned int)v17 > 0 && v4 >= v18)
                                {
                                    v21 = sub_40a420();
                                }
                                if (...)
                                {
                                    v22 = sub_408600();
                                }
                                if (...)
                                {
                                    *((unsigned long long [6])&v0) = v14[3] - 1;
                                    v23 = sub_408890();
                                }
                                if (...)
                                {
                                    v24 = sub_406ff0();
                                    if (v24 == 0)
                                    {
                                        v25 = 12;
                                    }
                                }
                                if (...)
                                {
                                    v1 += 1;
                                    if (v1 >= v15[5])
                                    {
                                        break;
                                    }
                                }
                            }
                            if ((v4 < v18 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || v20 != 0 && v19 != 0 || v22 != 0 && *((long long *)&((char *)v2)[*(v14)]) != 0 && v21 != 0) && v14[5] != 0 && v23 != 0 || ((v4 < v18 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || v20 != 0 && v19 != 0 || v22 != 0 && *((long long *)&((char *)v2)[*(v14)]) != 0 && v21 != 0) && v14[5] != 0 && v23 == 0 || (v4 < v18 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || v20 != 0 && v19 != 0 || v22 != 0 && *((long long *)&((char *)v2)[*(v14)]) != 0 && v21 != 0) && v14[5] == 0) && v24 != 0 || *((long long *)&((char *)v2)[*(v14)]) != 0 && v21 != 0 && v22 == 0 || v21 != 0 && *((long long *)&((char *)v2)[*(v14)]) == 0 || v21 == 0)
                            {
                                v25 = sub_410670();
                                if ((unsigned int)v25 != 0)
                                {
                                    break;
                                }
                            }
                            else if (((v4 < v18 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || v20 != 0 && v19 != 0 || v22 != 0 && *((long long *)&((char *)v2)[*(v14)]) != 0 && v21 != 0) && v14[5] != 0 && v23 == 0 || (v4 < v18 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=(rsi<8> + 0x18<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) || v20 != 0 && v19 != 0 || v22 != 0 && *((long long *)&((char *)v2)[*(v14)]) != 0 && v21 != 0) && v14[5] == 0) && v24 == 0)
                            {
                                *((unsigned long *)&v1) = v25;
                                free(v10);
                                return v1;
                            }
                        }
                        v25 = sub_410670();
                        if (v14[3] - 1 == 0)
                        {
                            break;
                        }
                    }
                }
                if ((unsigned int)v25 == 0 && (*((long long *)&((char *)v2)[v13->field_b8 + -8]) == 0 || v15[5] <= 0))
                {
                    v25 = 0;
                }
                else
                {
                    *((unsigned long *)&v1) = v25;
                    free(v10);
                    return v1;
                }
            }
            v25 = 0;
        }
        *((unsigned long *)&v1) = v25;
        free(v10);
        return v1;
    }
    return 12;
}

int sub_4044d2()
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

int sub_404990()
{
}

typedef struct struct_2 {
    char padding_0[120];
    unsigned long long field_78;
    char padding_80[32];
    unsigned long long field_a0;
    unsigned long long field_a8;
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
} struct_2;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    char field_8;
} struct_0;

typedef struct struct_3 {
    char padding_0[120];
    unsigned long long field_78;
    char padding_80[24];
    unsigned long long field_98;
    unsigned long long field_a0;
    unsigned long long field_a8;
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
} struct_3;

typedef struct struct_1 {
    char padding_0[120];
    unsigned long long field_78;
    char padding_80[32];
    unsigned long long field_a0;
    unsigned long long field_a8;
    char field_b0;
    char padding_b1[3];
    unsigned int field_b4;
    unsigned long long field_b8;
    unsigned long long field_c0;
    uint128_t field_c8;
} struct_1;

typedef struct struct_4 {
    char padding_0[184];
    unsigned long long field_b8;
} struct_4;

int sub_411830()
{
    void tmp_18;  // tmp #18
    void tmp_31;  // tmp #31
    unsigned long long v0;  // [bp-0x238]
    unsigned long v1;  // [bp-0x128]
    unsigned long long|unsigned long long *|unsigned long v2;  // [bp-0x118]
    unsigned long v3;  // [bp-0x110]
    struct_2 *v4;  // [bp-0x108]
    unsigned long long|void *|unsigned long v5;  // [bp-0x100]
    uint128_t|unsigned long long|unsigned long|unsigned long long [14] v6;  // [bp-0xf8]
    unsigned int *v7;  // [bp-0xe8]
    char|struct_0 * v8;  // [bp-0xe0]
    unsigned long long [9]|char v9;  // [bp-0xd8]
    unsigned int|void * v10;  // [bp-0xd0]
    unsigned int v11;  // [bp-0xc8]
    unsigned int v12;  // [bp-0xc0]
    unsigned int v13;  // [bp-0xbc]
    unsigned long long v14;  // [bp-0xb0]
    unsigned int v15;  // [bp-0xa8]
    unsigned long long v16;  // [bp-0xa0]
    unsigned int v17;  // [bp-0x98]
    unsigned long long v18;  // [bp-0x90]
    char v19;  // [bp-0x80]
    unsigned long long|unsigned long long *|unsigned long v20;  // [bp-0x78]
    char v21;  // [bp-0x70]
    char v22;  // [bp-0x58]
    unsigned long long|char v23;  // [bp-0x50]
    unsigned long long v25[7];  // rsi
    struct_0 *v26;  // rdx
    struct_0 *v27;  // r12
    unsigned long long v28;  // r9
    unsigned long v29;  // rcx
    unsigned long long v30[14];  // rdi
    unsigned long long *v31;  // rax
    unsigned int *v32;  // rbx
    struct_2 *v33;  // rbx
    unsigned long v34;  // r8
    unsigned long long *v36;  // rbx
    unsigned long long v37;  // rax
    struct_3 *v38;  // rbx
    struct_1 *v39;  // rcx
    unsigned long long v40;  // rax
    char v42;  // al
    unsigned long long v43;  // r14
    unsigned long long v45;  // rbx
    unsigned long long v46;  // rbp
    unsigned long v47;  // r8
    unsigned long long v48;  // r14
    unsigned long long v50;  // rax
    unsigned long long v52;  // rax
    char v53;  // al
    unsigned long long v55;  // rbp
    unsigned int v57;  // r9d
    char *v58;  // rdi
    unsigned long long v60;  // rax
    unsigned long long v61;  // rcx
    unsigned int v62;  // ebx
    unsigned long long v63;  // rdi
    unsigned long long v64;  // rbx
    unsigned long long v65;  // rbx
    unsigned long long *v66;  // rbp
    unsigned long long v67;  // r14
    unsigned long long v68;  // rax
    unsigned long long v69;  // rdx
    unsigned long long v71;  // rax
    unsigned long long v72;  // rax
    unsigned long long v73;  // rax
    unsigned int *v74;  // rdx
    unsigned int *v75;  // rax
    unsigned long v77;  // rsi
    unsigned long long v78;  // rcx
    char v79;  // cc_dep2
    unsigned long v80;  // d
    char *v81;  // rdi
    unsigned long long v82;  // rcx
    char *v83;  // rdi
    unsigned long long v84;  // rcx
    unsigned int|unsigned long v85;  // rcx
    char v86;  // cc_dep2
    unsigned long v87;  // d
    unsigned long long v88;  // rcx
    char *v89;  // rdi
    char v90;  // cc_dep2
    unsigned long long v91;  // r8
    unsigned long long v92[9];  // rdx
    unsigned int|unsigned long v93;  // r9
    unsigned int *v94;  // rax
    unsigned int *v95;  // rcx
    void *v96;  // rax
    void *v97;  // rax
    unsigned int *v98;  // rcx
    unsigned long long v99;  // rax
    unsigned long long v100;  // rcx
    unsigned long long v101;  // rbx
    unsigned long long v102;  // rax
    unsigned long long v103;  // rcx
    unsigned long long v104;  // rax
    unsigned long long *v105;  // rax
    unsigned long long v106;  // rdx
    unsigned int v107;  // edx
    unsigned long long v110;  // rax
    unsigned int v111;  // cc_dep1
    unsigned long long v113;  // rdx
    unsigned long long *v114;  // rax
    unsigned long long v115;  // rax
    unsigned long long v117;  // rbp
    char v118;  // bl
    unsigned long long v119;  // r13
    uint128_t v120;  // xmm0
    unsigned long long v121;  // rbx
    uint128_t v122;  // xmm0
    unsigned long long v123;  // rax
    unsigned long long v124;  // rax
    unsigned long long v125;  // rdx
    unsigned long long v126;  // rax
    unsigned long long v127;  // rax
    char v128;  // al
    unsigned long long v129;  // rax
    char v130;  // al
    unsigned long long v132;  // rbp
    unsigned long long v133;  // rbp
    unsigned long long v134;  // r12
    unsigned long long v135;  // rbx
    unsigned long long v137;  // r14
    unsigned long long v138;  // r14
    unsigned long long v139[14];  // r15
    unsigned long long v141;  // rbx
    unsigned long long v142;  // r12
    unsigned long long v143;  // rax

    *((unsigned long long [7])&v4) = *(v25);
    switch (v26->field_8)
    {
    case 1:
        v5 = (unsigned int)sub_409270();
        if (v5 != 0)
        {
            v43 = v5;
            if (v4->field_b4 > 1)
            {
                while (true)
                {
                    if (*((int *)(v139[2] + (v30[9] << 2))) == -1 && v30[9] != v139[6] && v139[13] > v139[9])
                    {
                        v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_4110c0();
                        v23 = 16;
                        v52 = sub_409270();
                        v43 = v52;
                        v53 = v52 == 0;
                        if (!((unsigned long long)(unsigned int)sub_409270() != 0 && v52 != 0))
                        {
                            break;
                        }
                    }
                    if (v30[9] == v139[6] || v139[13] <= v139[9] || *((int *)(v139[2] + (v30[9] << 2))) != -1)
                    {
                        v5 = v43;
                    }
                }
                if (*((int *)(v139[2] + (v30[9] << 2))) == -1 && v30[9] != v139[6])
                {
                    *(v7) = 12;
                    break;
                }
                else if (v30[9] == v139[6] || v139[13] <= v139[9] || *((int *)(v139[2] + (v30[9] << 2))) != -1)
                {
                    v117 = v27->field_8;
                }
            }
        }
    case 4:
        if ((1 << (unsigned long long)((char)*((long long *)&v26->field_0) & 31) & v4->field_a8) != 0)
        {
            v38 = v4;
            v4->field_a0 = v4->field_a0 | 1 << ((char)*((long long *)&v26->field_0) & 31);
            v5 = (unsigned int)sub_409270();
            if (v5 != 0)
            {
                v38->field_98 = v38->field_98 + 1;
                v38->field_b0 = v38->field_b0 | 2;
            }
        }
        else
        {
            v5 = 0;
            *(v7) = 6;
        }
    case 5:
        v33 = v4;
        v5 = (unsigned int)sub_409270();
        if (v5 != 0 && v4->field_b4 > 1)
        {
            v33->field_b0 = v33->field_b0 | 2;
        }
    case 8:
        v2 = v34;
        v25[6] = v25[6] + 1;
        v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_4110c0();
        if (!(v26->field_8 != 9))
        {
            if (v25[6] <= 8)
            {
                v4->field_a8 = v4->field_a8 | 1 << ((char)v25[6] & 31);
            }
            v23 = 17;
            v5 = (unsigned int)sub_409270();
            if (v5 != 0)
            {
                *((unsigned long long [7])(v5 + 40)) = v25[6];
            }
        }
        else if (*(v7) == 0)
        {
            if (v26->field_8 != 9)
            {
                if (sub_412e60() != 0)
                {
                    sub_406aa0();
                }
                *(v7) = 8;
            }
        }
    case 9:
        if (((unsigned int)v3 & 0x20000) == 0)
        {
            v5 = 0;
            *(v7) = 16;
        }
    case 11: case 18: case 19:
        if (((char)v3 & 32) == 0)
        {
            if (((char)v3 & 16) == 0)
            {
            }
            else
            {
                v2 = v47;
                v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_4110c0();
                v5 = (unsigned int)sub_411830();
            }
        }
    case 12:
        v48 = (unsigned int)*((int *)&v27->field_0);
        if (((unsigned short)*((int *)&v27->field_0) & 783) != 0 && (v4->field_b0 & 16) == 0)
        {
            v39 = v4;
            v40 = (unsigned int)v4->field_b0 | 16;
            *((unsigned long long *)&v4->field_b0) = v40;
            if ((v40 & 8) == 0)
            {
                v39->field_b8 = 0x3ff000000000000;
                v39->field_c0 = 576460745995190270;
                if ((v40 & 4) != 0)
                {
                    *((int128_t *)&(&v39->field_c0)[1]) = 0;
                    v48 = (unsigned int)*((int *)&v27->field_0);
                }
                else
                {
                    v45 = 128;
                    v46 = 2;
                }
            }
            else
            {
                v45 = 0;
                v46 = 0;
            }
            if ((v40 & 4) == 0 || (v40 & 8) != 0)
            {
                tmp_18 = v46;
                v55 = v46 * 64;
                v57 = v45 + 0x100 - v55;
                v58 = *((long long *)(unsigned long long)__ctype_b_loc()) + v45 * 2;
                do
                {
                    v60 = 0;
                    do
                    {
                        v61 = v60;
                        if ((unsigned int)(v45 + v60) == 95 || (v58[2 * v60] & 8) != 0)
                        {
                            *((unsigned long long *)&v4[1].padding_0[8 * tmp_18]) = *((long long *)&v4[1].padding_0[8 * tmp_18]) | 1 << (v61 & 63);
                        }
                        v60 += 1;
                    }
                    while (v60 != 64);
                    v62 = (unsigned int)v45 + 64;
                    v63 = &v58[-18446744073709551488];
                }
                while (v57 != v62);
            }
        }
        if (((unsigned int)(v48 - 0x100) & -257) == 0)
        {
            if ((unsigned int)v48 != 0x100)
            {
                *((int *)&v27->field_0) = 5;
                *((int *)&v27->field_0) = 10;
                v65 = (unsigned int)sub_409270();
            }
            else
            {
                *((int *)&v27->field_0) = 6;
                *((int *)&v27->field_0) = 9;
                v65 = (unsigned int)sub_409270();
            }
            v67 = (unsigned int)sub_409270();
            v23 = 10;
            v68 = sub_409270();
            v103 = v68;
            v5 = v68;
        }
        else
        {
            v5 = (unsigned int)sub_409270();
            if (v5 != 0)
            {
                v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_4110c0();
            }
        }
        if ((v67 == 0 || v65 == 0 || ((unsigned int)(v48 - 0x100) & -257) != 0) && (((unsigned int)(v48 - 0x100) & -257) == 0 || v5 == 0))
        {
            *(v7) = 12;
        }
    case 20:
        v14 = 0;
        v31 = calloc(0x20, 0x1);
        v36 = v31;
        v2 = v31;
        v37 = calloc(0x50, 0x1);
        v42 = v37 == 0;
        if (v37 != 0 && v36 != 0)
        {
            v50 = v27->field_8;
            if (v27->field_8 != 2)
            {
                v8 = 0;
                if (v26->field_8 != 25)
                {
                    if (v50 == 21)
                    {
                        v27->field_8 = 1;
                    }
                    v6 = 0;
                    v66 = v2;
                    v5 = 0;
                    while (true)
                    {
                        v16 = stack_base + -120;
                        v15 = 3;
                        v104 = sub_410ea0();
                        if (v104 == 0)
                        {
                            v101 = (unsigned int)sub_406b10();
                            if (((unsigned int)1 & -3) != 0)
                            {
                                v69 = v27->field_8;
                                if (v69 == 22 && v27->field_8 != 2)
                                {
                                    v139[9] = v139[9] + v101;
                                    sub_406b10();
                                    if (v19 != 21 && v19 != 2)
                                    {
                                        v17 = 3;
                                        v18 = stack_base + -88;
                                        v104 = sub_410ea0();
                                        if ((unsigned int)v104 == 0)
                                        {
                                            v101 = (unsigned int)sub_406b10();
                                            v92 = (2 <= v4->field_b4? v20 : 0);
                                            v9 = (unsigned int)3 == 3;
                                            if ((unsigned int)3 == 3)
                                            {
                                                v78 = -1;
                                                v81 = v16;
                                                while (v78 != 0)
                                                {
                                                    v78 -= 1;
                                                    v79 = *(v81);
                                                    v81 = &v81[v80];
                                                    break;
                                                }
                                                v84 = !(rcx<8>) + -1;
                                                if (v84 <= 1)
                                                {
                                                    v88 = -1;
                                                    v89 = v18;
                                                    while (v88 != 0)
                                                    {
                                                        v88 -= 1;
                                                        v90 = *(v89);
                                                        v89 = &v89[v80];
                                                        break;
                                                    }
                                                }
                                            }
                                            else if ((unsigned int)3 != 0)
                                            {
                                                v85 = 0;
                                            }
                                        }
                                    }
                                    if (v19 == 21)
                                    {
                                        v139[9] = v139[9] + (long long)(int)(0 - (unsigned int)v101);
                                        v27->field_8 = 1;
                                    }
                                }
                            }
                            if ((((unsigned int)1 & -3) == 0 || v27->field_8 != 2) && (v19 == 21 || ((unsigned int)1 & -3) == 0 || v69 != 22) && (((unsigned int)1 & -3) == 0 || v69 != 22 || v19 != 2))
                            {
                                switch ((unsigned int)3)
                                {
                                case 0:
                                    *((long long *)&((char *)v66)[(unsigned long long)((unsigned int)((unsigned long long)(char)v16 >> 3) & 24)]) = *((long long *)&((char *)v66)[(unsigned long long)((unsigned int)((unsigned long long)(char)v16 >> 3) & 24)]) | 1 << ((char)v16 & 63);
                                    break;
                                case 1:
                                    v74 = *((long long *)(v20 + 40));
                                    v75 = *((long long *)v20);
                                    if (*((long long *)(v20 + 40)) == v5)
                                    {
                                        v77 = (v5 * 2 + 1) * 4;
                                        v5 = v5 * 2 + 1;
                                        v75 = realloc(*((long long *)v20), v77);
                                        if (v75 != 0)
                                        {
                                            *((unsigned int **)v20) = v75;
                                            v74 = *((long long *)(v20 + 40));
                                        }
                                    }
                                case 2:
                                    v72 = sub_40be40();
                                    *((unsigned long long *)&v7) = v72;
                                    if (v72 != 0)
                                    {
                                        break;
                                    }
                                case 3:
                                    v73 = sub_40be40();
                                    *((unsigned long long *)&v7) = v73;
                                case 4:
                                    v1 = v3;
                                    v71 = sub_40be90();
                                    *((unsigned long long *)&v7) = v71;
                                    if (v71 != 0)
                                    {
                                        break;
                                    }
                                default:
                                    __assert_fail(); /* do not return */
                                }
                            }
                        }
                        if (v104 != 0 || v69 == 22 && v19 != 21 && (unsigned int)v104 != 0 && ((unsigned int)1 & -3) != 0 && v19 != 2 && v27->field_8 != 2)
                        {
                            *((unsigned long long *)&v7) = v104;
                        }
                        if (false)
                        {
                            v82 = -1;
                            v83 = v18;
                            while (v82 != 0)
                            {
                                v82 -= 1;
                                v86 = *(v83);
                                v83 = &v83[v87];
                                break;
                            }
                        }
                        if (*((long long *)(3 * 8 + 4291216)) == 4269165 && (unsigned int)3 <= 4 && v104 == 0 && (((unsigned int)1 & -3) == 0 || v27->field_8 != 2) && (v19 == 21 || ((unsigned int)1 & -3) == 0 || v69 != 22) && (((unsigned int)1 & -3) == 0 || v69 != 22 || v19 != 2) && *((long long *)(v20 + 40)) == v5 && v75 != 0 || *((long long *)(3 * 8 + 4291216)) == 4269165 && (unsigned int)3 <= 4 && v104 == 0 && (((unsigned int)1 & -3) == 0 || v27->field_8 != 2) && (v19 == 21 || ((unsigned int)1 & -3) == 0 || v69 != 22) && (((unsigned int)1 & -3) == 0 || v69 != 22 || v19 != 2) && *((long long *)(v20 + 40)) != v5)
                        {
                            *((unsigned int **)(v20 + 40)) = (char *)v74 + 1;
                            *((int *)((char *)v75 + 0x4 * v74)) = v16;
                        }
                        if (v69 == 22 && v84 <= 1 && (unsigned int)v104 == 0 && (unsigned int)3 == 3 && v104 == 0 && v19 != 21 && ((unsigned int)1 & -3) != 0 && v19 != 2 && v27->field_8 != 2 && !(rcx<8>) - 1 <= 1 || v69 == 22 && v84 <= 1 && (unsigned int)v104 == 0 && (unsigned int)3 == 3 && v104 == 0 && v19 != 21 && ((unsigned int)1 & -3) != 0 && v19 != 2 && v27->field_8 != 2 && (unsigned int)3 != 3 || v69 == 22 && (unsigned int)v104 == 0 && v104 == 0 && (unsigned int)3 == 0 && v19 != 21 && (unsigned int)3 != 3 && ((unsigned int)1 & -3) != 0 && v19 != 2 && v27->field_8 != 2)
                        {
                            if ((unsigned int)3 != 0)
                            {
                                v85 = 0;
                            }
                            if ((unsigned int)3 == 3)
                            {
                                v85 = v22;
                            }
                        }
                        if ((v69 == 22 && v84 <= 1 && (unsigned int)v104 == 0 && (unsigned int)3 == 3 && v104 == 0 && v19 != 21 && ((unsigned int)1 & -3) != 0 && v19 != 2 && v27->field_8 != 2 && !(rcx<8>) - 1 <= 1 || v69 == 22 && v84 <= 1 && (unsigned int)v104 == 0 && (unsigned int)3 == 3 && v104 == 0 && v19 != 21 && ((unsigned int)1 & -3) != 0 && v19 != 2 && v27->field_8 != 2 && (unsigned int)3 != 3 || v69 == 22 && (unsigned int)v104 == 0 && v104 == 0 && (unsigned int)3 == 0 && v19 != 21 && (unsigned int)3 != 3 && ((unsigned int)1 & -3) != 0 && v19 != 2 && v27->field_8 != 2) && (unsigned int)3 == 0 || v69 == 22 && (unsigned int)v104 == 0 && v104 == 0 && v19 != 21 && (unsigned int)3 != 3 && ((unsigned int)1 & -3) != 0 && v19 != 2 && (unsigned int)3 != 0 && v27->field_8 != 2 && (unsigned int)3 == 0)
                        {
                            v85 = (char)v18;
                        }
                        if (...)
                        {
                            if ((unsigned int)3 != 0)
                            {
                                v91 = (unsigned int)v16;
                            }
                            if ((unsigned int)3 == 0 || v9 != 0)
                            {
                                *((unsigned long *)&v10) = v85;
                                v9[0] = v92;
                                v91 = (unsigned int)sub_407220();
                                v92 = v9;
                            }
                            if ((unsigned int)3 != 0)
                            {
                                v93 = (unsigned int)v18;
                            }
                            if ((unsigned int)3 == 3 || (unsigned int)3 == 0)
                            {
                                v10 = v91;
                                v9[0] = v92;
                                v93 = sub_407220();
                            }
                        }
                        if (...)
                        {
                            *(v7) = 3;
                        }
                        if (...)
                        {
                            v94 = v92[8];
                            v95 = v92[1];
                            if (v92[8] == v6)
                            {
                                *((unsigned long *)&v13) = v93;
                                *((unsigned long long *)&v12) = v91;
                                v9[0] = v92;
                                tmp_31 = (v6 * 2 + 1) * 4;
                                v6 = v6 * 2 + 1;
                                *((long long *)&v11) = tmp_31;
                                v96 = realloc(v95, tmp_31);
                                v10 = v96;
                                v97 = realloc(v9[2], *((long long *)&v11));
                                v95 = v10;
                                if (v10 != 0)
                                {
                                    v92 = v9;
                                    v91 = v12;
                                    v93 = v13;
                                    if (v5 != 0)
                                    {
                                        v92[2] = v5;
                                        v94 = v92[8];
                                        v92[1] = v10;
                                    }
                                }
                            }
                        }
                        if (...)
                        {
                            *(v7) = 11;
                        }
                        if (...)
                        {
                            v5 = v97;
                            free(v10);
                            free(v5);
                            *(v7) = 12;
                        }
                        if (...)
                        {
                            *((unsigned long long *)((char *)v95 + 0x4 * v94)) = v91;
                            v98 = v92[2];
                            v92[8] = (char *)v94 + 1;
                            *((unsigned long *)((char *)v98 + 0x4 * v94)) = v93;
                        }
                        if (...)
                        {
                            v99 = 0;
                            do
                            {
                                v100 = v99;
                                if (v91 <= (unsigned int)v99 && v93 >= (unsigned int)v99)
                                {
                                    v66[v99 >> 6] = v66[v99 >> 6] | 1 << (v100 & 63);
                                }
                                v99 += 1;
                            }
                            while (v99 != 0x100);
                            *(v7) = 0;
                        }
                        if (...)
                        {
                            v102 = v27->field_8;
                            if (v102 == 21 && v27->field_8 != 2)
                            {
                                v139[9] = v139[9] + v101;
                                if (v8 != 0)
                                {
                                    v105 = v2;
                                    v106 = &v2[4];
                                    do
                                    {
                                        *(v105) = !(*(v105));
                                        v105 = &v105[1];
                                    }
                                    while (v106 != v105);
                                }
                                v107 = v4->field_b4;
                                if (v4->field_b4 > 1)
                                {
                                    v110 = 0;
                                    do
                                    {
                                        *((long long *)&((char *)v2)[v110]) = *((long long *)&((char *)v2)[v110]) & *((long long *)(v4->field_78 + v110));
                                        v110 += 8;
                                    }
                                    while (v110 != 32);
                                }
                                if (*((long long *)(v20 + 56)) == 0 && *((long long *)(v20 + 40)) == 0 && *((long long *)(v20 + 48)) == 0 && *((long long *)(v20 + 64)) == 0)
                                {
                                    v111 = v107;
                                    if ((v107 <= 1 || (*((char *)(v20 + 32)) & 1) == 0) && (v107 <= 1 || *((long long *)(v20 + 72)) == 0))
                                    {
                                        sub_407c60();
                                        v21 = 3;
                                        v20 = v2;
                                        v5 = (unsigned int)sub_409270();
                                        if (v5 != 0)
                                        {
                                            break;
                                        }
                                    }
                                }
                                if (*((long long *)(v20 + 56)) != 0 || *((long long *)(v20 + 40)) != 0 || *((long long *)(v20 + 48)) != 0 || *((long long *)(v20 + 64)) != 0 || v107 > 1 && (*((char *)(v20 + 32)) & 1) != 0 || v107 > 1 && *((long long *)(v20 + 72)) != 0)
                                {
                                    v4->field_b0 = v4->field_b0 | 2;
                                    v21 = 6;
                                    v20 = v37;
                                    v5 = (unsigned int)sub_409270();
                                    v113 = &v2[4];
                                    v114 = v2;
                                    if (v2 != 0)
                                    {
                                        while (true)
                                        {
                                            if (*(v114) == 0)
                                            {
                                                v114 = &v114[1];
                                                free(v2);
                                            }
                                            else
                                            {
                                                v21 = 3;
                                                v20 = v2;
                                                v115 = sub_409270();
                                                if (v115 == 0)
                                                {
                                                    break;
                                                }
                                                v23 = 10;
                                                v5 = (unsigned int)sub_409270();
                                                if (v5 != 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                        if (*(v114) != 0)
                                        {
                                            *(v7) = 12;
                                        }
                                        else if (*(v114) == 0 && v113 == v114 || v115 != 0 && *(v114) != 0)
                                        {
                                            v117 = v27->field_8;
                                        }
                                    }
                                }
                            }
                        }
                        if (...)
                        {
                            *(v7) = 7;
                        }
                        if (...)
                        {
                            *(v7) = 12;
                        }
                    }
                    if (...)
                    {
                        free(v2);
                        sub_407c60();
                    }
                    else if (...)
                    {
                        v117 = v27->field_8;
                    }
                }
                else
                {
                    *((char *)(v20 + 32)) = *((char *)(v20 + 32)) | 1;
                    if (((unsigned short)v3 & 0x100) != 0)
                    {
                        *(v2) = *(v2) | 0x400;
                    }
                    v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_406b10();
                    v64 = (unsigned int)sub_406b10();
                    v50 = v27->field_8;
                    if (v27->field_8 != 2)
                    {
                        v8 = 1;
                    }
                }
            }
            else
            {
                *(v7) = 2;
                free(v2);
                sub_407c60();
                if (*(v7) == 0)
                {
                    v5 = 0;
                }
            }
        }
        if (v37 == 0 || v36 == 0)
        {
            free(v2);
            free(v20);
        }
    case 24:
        v26->field_8 = 1;
        v5 = (unsigned int)sub_409270();
    case 32: case 33:
        v32 = v7;
        v5 = (unsigned int)sub_40c660();
        if (*(v32) != 0 && v5 == 0)
        {
            break;
        }
        if (*(v32) == 0 || v5 != 0)
        {
            v117 = v27->field_8;
            for (v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_4110c0(); v117 <= 23; v5 = 0)
            {
                v118 = v117 == 18;
                v0 = 0x8c0800;
                if (((char)((char)*(&((char *)stack_base)[((v117 & 63) >> 3) + -568]) >> (unsigned long long)(char)(v117 & 63 & 7)) & 1) == 0)
                {
                    break;
                }
                v119 = v139[9];
                v120 = *((int128_t *)&v27);
                if (v117 != 23)
                {
                    v121 = v118;
                    if (v117 != 19)
                    {
                        v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_4110c0();
                        if (v5 != 0)
                        {
                            if (v117 == 18)
                            {
                                v2 = -1;
                                v121 = 1;
                                v125 = v5;
                            }
                            else if (*((char *)(v5 + 48)) != 17)
                            {
                                v2 = -1;
                                v121 = 0;
                                v6 = 0;
                            }
                            else
                            {
                                v2 = -1;
                                v121 = 0;
                                v6 = 0;
                            }
                        }
                    }
                }
                else
                {
                    v6 = v120;
                    v122 = v6;
                    v2 = (unsigned int)sub_411770();
                    if (v2 != -1)
                    {
                        if (v2 != -2)
                        {
                            v123 = v27->field_8;
                            if (v27->field_8 == 24)
                            {
                                v121 = v2;
                            }
                            else if (v123 == 1)
                            {
                                if (v27->field_0 == 44)
                                {
                                    v121 = v2;
                                }
                            }
                        }
                    }
                    else
                    {
                        if (v27->field_8 == 1 && v27->field_0 == 44)
                        {
                            v121 = 0;
                        }
                    }
                    if ((v2 == -1 || v27->field_0 == 44) && (v2 == -1 || v123 == 1) && (v2 == -1 || v2 != -2) && (v2 == -1 || v27->field_8 != 24) && (v27->field_0 == 44 || v2 != -1) && (v27->field_8 == 1 || v2 != -1))
                    {
                        v6 = v6;
                        v122 = v6;
                        v2 = (unsigned int)sub_411770();
                    }
                    if (v27->field_8 == 2 && ((unsigned int)v3 & 0x200000) == 0 && (v2 == -2 || v2 != -1) && (v2 == -2 || v123 != 1) && (v2 == -2 || v27->field_8 != 24) && (v27->field_8 == 1 || v2 != -1))
                    {
                        *(v7) = 9;
                    }
                }
                if (v117 == 19)
                {
                    v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_4110c0();
                    if (v5 != 0)
                    {
                        if (*((char *)(v5 + 48)) != 17)
                        {
                            v2 = 1;
                            v124 = 10;
                            v6 = 0;
                        }
                        else
                        {
                            v2 = 1;
                            v6 = 0;
                        }
                    }
                }
                if (v117 == 23 && v123 == 1 && v2 != -1 && ((unsigned int)v3 & 0x200000) != 0 && v27->field_0 != 44 && v2 != -2 && v27->field_8 != 24 || v117 == 23 && ((unsigned int)v3 & 0x200000) != 0 && (v27->field_0 == 44 || v2 != -1) && (v2 == -2 || v2 != -1) && (v2 == -2 || v123 != 1) && (v2 == -2 || v27->field_8 != 24) && (v27->field_8 == 1 || v2 != -1))
                {
                    v139[9] = v119;
                    v126 = v5;
                    *((uint128_t *)&v27) = v122;
                    v27->field_8 = 1;
                }
                if ((v117 == 23 && v27->field_0 == 44 && v123 == 1 && v2 != -1 && v2 >= v121 && v2 != -2 && v27->field_8 != 24 || v2 == -1 && v117 == 23 && v2 != -2 && (v2 == -1 || v27->field_0 == 44) && (v2 == -1 || v123 == 1) && (v2 == -1 || v27->field_8 != 24) && (v27->field_0 == 44 || v2 != -1) && (v27->field_8 == 1 || v2 != -1)) && v27->field_8 == 24 && v2 == -1)
                {
                    v129 = 0;
                    v130 = 32767 < v121;
                }
                if (...)
                {
                    *(v7) = 10;
                }
                if (v117 == 23 && v27->field_8 == 24 && v2 != -1 && v2 != -2 || (v117 == 23 && v27->field_0 == 44 && v123 == 1 && v2 != -1 && v2 >= v121 && v2 != -2 && v27->field_8 != 24 || v2 == -1 && v117 == 23 && v2 != -2 && (v2 == -1 || v27->field_0 == 44) && (v2 == -1 || v123 == 1) && (v2 == -1 || v27->field_8 != 24) && (v27->field_0 == 44 || v2 != -1) && (v27->field_8 == 1 || v2 != -1)) && v27->field_8 == 24 && v2 != -1)
                {
                    v127 = 0;
                    v128 = 32767 < v2;
                }
                if ((v117 == 23 && v27->field_0 == 44 && v123 == 1 && v2 != -1 && v2 >= v121 && v2 != -2 && v27->field_8 != 24 || v2 == -1 && v117 == 23 && v2 != -2 && (v2 == -1 || v27->field_0 == 44) && (v2 == -1 || v123 == 1) && (v2 == -1 || v27->field_8 != 24) && (v27->field_0 == 44 || v2 != -1) && (v27->field_8 == 1 || v2 != -1)) && v27->field_8 == 24 && v2 == -1 && rax<8> == 0 || (v117 == 23 && v27->field_8 == 24 && v2 != -1 && v2 != -2 || (v117 == 23 && v27->field_0 == 44 && v123 == 1 && v2 != -1 && v2 >= v121 && v2 != -2 && v27->field_8 != 24 || v2 == -1 && v117 == 23 && v2 != -2 && (v2 == -1 || v27->field_0 == 44) && (v2 == -1 || v123 == 1) && (v2 == -1 || v27->field_8 != 24) && (v27->field_0 == 44 || v2 != -1) && (v27->field_8 == 1 || v2 != -1)) && v27->field_8 == 24 && v2 != -1) && rax<8> == 0)
                {
                    v139[9] = v139[9] + (unsigned long long)(unsigned int)sub_4110c0();
                    if (v5 != 0)
                    {
                        if (v2 == 0 && v121 == 0)
                        {
                            sub_406aa0();
                        }
                        else if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rbx<8>, 0x0<64>, 0x0<64>))
                        {
                            v132 = v5;
                            v125 = 0;
                        }
                        else if (v121 != 1)
                        {
                            v6[0] = v139;
                            v133 = 2;
                            v8 = v27;
                            v134 = v121;
                            v135 = &v4[-100254043878856259].field_a8;
                            while (true)
                            {
                                v23 = 16;
                                v137 = (unsigned int)sub_409270();
                                if (v137 != 0)
                                {
                                    if (v137 == 0)
                                    {
                                        break;
                                    }
                                    v133 += 1;
                                    v121 = v134;
                                    v138 = (unsigned int)sub_409350();
                                    v27 = v8;
                                    v139 = v6;
                                    v125 = v137;
                                }
                            }
                            if (v137 == 0 || v121 >= v133)
                            {
                                *(v7) = 12;
                            }
                        }
                        else
                        {
                            v125 = v5;
                        }
                    }
                }
                if ((v117 == 23 && v27->field_0 == 44 && v123 == 1 && v2 != -1 && v2 >= v121 && v2 != -2 && v27->field_8 != 24 || v2 == -1 && v117 == 23 && v2 != -2 && (v2 == -1 || v27->field_0 == 44) && (v2 == -1 || v123 == 1) && (v2 == -1 || v27->field_8 != 24) && (v27->field_0 == 44 || v2 != -1) && (v27->field_8 == 1 || v2 != -1)) && v27->field_8 == 24 && v2 == -1 && rax<8> != 0 || (v117 == 23 && v27->field_8 == 24 && v2 != -1 && v2 != -2 || (v117 == 23 && v27->field_0 == 44 && v123 == 1 && v2 != -1 && v2 >= v121 && v2 != -2 && v27->field_8 != 24 || v2 == -1 && v117 == 23 && v2 != -2 && (v2 == -1 || v27->field_0 == 44) && (v2 == -1 || v123 == 1) && (v2 == -1 || v27->field_8 != 24) && (v27->field_0 == 44 || v2 != -1) && (v27->field_8 == 1 || v2 != -1)) && v27->field_8 == 24 && v2 != -1) && rax<8> != 0)
                {
                    *(v7) = 15;
                }
                if (...)
                {
                    break;
                }
                if (...)
                {
                    v5 = 0;
                }
                if (...)
                {
                    v6 = v125;
                    v132 = (unsigned int)sub_409350();
                }
                if (...)
                {
                    v6 = v125;
                }
                if (...)
                {
                    sub_406aa0();
                }
                if (...)
                {
                    v124 = 10;
                }
                if (...)
                {
                    v124 = 11;
                }
                if (...)
                {
                    v23 = v124;
                    v125 = (unsigned int)sub_409270();
                    if (v125 != 0)
                    {
                        v141 = v121 + 2;
                        if (v141 <= v2)
                        {
                            v8 = v27;
                            while (true)
                            {
                                v142 = (unsigned int)sub_409350();
                                v23 = 16;
                                v143 = sub_409270();
                                if (v142 == 0)
                                {
                                    break;
                                }
                                if (v143 == 0)
                                {
                                    break;
                                }
                                v23 = 10;
                                if (v125 == 0)
                                {
                                    break;
                                }
                                v141 += 1;
                                v27 = v8;
                                v125 = (unsigned int)sub_409270();
                            }
                            if (v125 == 0 || v143 == 0 || v141 <= v2 || v142 == 0)
                            {
                                *(v7) = 12;
                            }
                        }
                    }
                }
                if (...)
                {
                    v23 = 16;
                    v126 = sub_409270();
                }
                if (...)
                {
                    *(v7) = 12;
                }
                if (...)
                {
                    v5 = v125;
                }
                if (...)
                {
                    v5 = v126;
                }
                if (...)
                {
                    break;
                }
                if (...)
                {
                    v117 = v27->field_8;
                    if (v5 == 0)
                    {
                        break;
                    }
                    sub_406aa0();
                }
                if (...)
                {
                    sub_406aa0();
                }
            }
            if (((unsigned int)v3 & 0x1000000) != 0 && (v117 == 23 || v117 == 11))
            {
                v5 = 0;
                *(v7) = 13;
            }
            else if (...)
            {
                v5 = 0;
            }
            else
            {
                return v5;
            }
            v5 = 0;
            *(v7) = 13;
        }
    case 34: case 35:
        v32 = v7;
    case 36:
        v5 = 0;
        *(v7) = 5;
    }
    if (v26->field_8 <= 36)
    {
        v27 = v26;
        v7 = v28;
        v3 = v29;
        v139 = v30;
    }
    v5 = 0;
    return v5;
}

int sub_405210()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

extern int512_t g_61b248;

int sub_414e30()
{
}

extern char g_61b348;
extern unsigned long long g_61b350;

int sub_402281()
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

    if (g_61b348 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_61b350 >= 0)
            {
                break;
            }
            g_61b350 = g_61b350 + 1;
            *((long long *)(6401600 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_61b348 = 1;
        return sub_40222b();
    }
    return v4;
}

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[72];
    struct struct_2 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    unsigned long long field_c0;
} struct_1;

typedef struct struct_4 {
    char padding_0[104];
    char field_68;
} struct_4;

typedef struct struct_3 {
    uint128_t field_0;
    unsigned long long field_10;
} struct_3;

typedef struct struct_0 {
    char padding_0[80];
    unsigned long long field_50;
} struct_0;

int sub_40ea20()
{
    unsigned long long *v0;  // [bp-0x60]
    void v1;  // [bp-0x58]
    void *v2;  // [bp-0x48]
    struct_1 *v4;  // rsi
    unsigned long long v5;  // r12
    unsigned long long v6;  // rdx
    struct_3 *v7;  // rax
    struct_0 *v8;  // rdx
    unsigned long long v9;  // rdx
    unsigned long long v10;  // r14
    unsigned long long v11;  // rax
    unsigned int *v13;  // rdi
    struct_4 *v15;  // rbp
    unsigned long long v16;  // rax

    v5 = v4->field_48;
    if (v4->field_c0 < v4->field_48)
    {
        *((unsigned long long *)(v4->field_b8 + v4->field_48 * 8)) = v6;
        v15 = v6;
        v4->field_c0 = v5;
    }
    else if (*((long long *)(v4->field_b8 + (v4->field_48 << 3))) != 0)
    {
        v7 = *((long long *)(*((long long *)(v4->field_b8 + v4->field_48 * 8)) + 80));
        if (v8 != 0)
        {
            v10 = v8->field_50;
            v11 = sub_409720();
            *((unsigned long long *)&v13) = v11;
            if (v11 == 0)
            {
                sub_40a330();
                v0 = v4->field_b8 + v4->field_48 * 8;
                v15 = (unsigned long long)(unsigned int)sub_4098b0();
                *(v0) = v15;
                if (v10 != 0)
                {
                    free(v2);
                }
            }
        }
        else
        {
            *((uint128_t *)&v1) = v7->field_0;
            v2 = v7->field_10;
            sub_40a330();
            v15 = (unsigned long long)(unsigned int)sub_4098b0();
            *((struct_4 **)(v4->field_b8 + v4->field_48 * 8)) = v15;
        }
    }
    else
    {
        *((unsigned long long *)(v4->field_b8 + v4->field_48 * 8)) = v9;
        v15 = v9;
    }
    if ((*((long long *)(v4->field_b8 + (v4->field_48 << 3))) == 0 || v4->field_c0 < v4->field_48 || v8 == 0 || v11 == 0) && v4->field_98->field_98 != 0 && v15 != 0)
    {
        v16 = sub_40a1e0();
        *((unsigned long long *)&v13) = v16;
        if (v16 == 0 && (v15->field_68 & 64) != 0)
        {
            *(v13) = sub_40e1a0();
        }
    }
    return stack_base + 0;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    char padding_48[16];
    unsigned long long field_58;
    char padding_60[24];
    unsigned long long field_78;
    char padding_80[16];
    unsigned int field_90;
} struct_0;

int sub_4072d0()
{
    unsigned int v0;  // [bp-0x6c]
    char v1;  // [bp-0x68]
    struct_0 *v3;  // rdi
    struct_0 *v4;  // rbx
    unsigned int *v5;  // rbp
    unsigned long v6;  // r12
    unsigned long long v7;  // r14
    unsigned long long v8;  // rcx
    char *v9;  // rdi
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    char *|unsigned long long|unsigned int|unsigned long v12;  // edx
    char *v13;  // rcx
    unsigned long long v14;  // rcx
    unsigned int *v15;  // rsi
    unsigned int *v16;  // rdi
    unsigned int *v17;  // rdx
    unsigned long long v18;  // rcx

    v4 = v3;
    v5 = v3->field_30;
    v6 = (v3->field_40 <= v3->field_58? v3->field_40 : v3->field_58);
    if ((v3->field_40 <= v3->field_58? v3->field_40 : v3->field_58) > v3->field_30)
    {
        while (true)
        {
            v9 = v4->field_78;
            v7 = v4->field_20;
            v12 = v6 + -0x1 * v5;
            if (v4->field_90 > 0 && v4->field_78 != 0)
            {
                v10 = 0;
                if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
                {
                    while (true)
                    {
                        v8 = v9[(unsigned long long)(char)*(&((char *)v5)[v4->field_28 + v10 + v4->field_0])];
                        *(&((char *)v5)[v10 + v4->field_8]) = v9[(unsigned long long)(char)*(&((char *)v5)[v4->field_28 + v10 + v4->field_0])];
                        *((unsigned long long *)&v1) = v8;
                        if (v4->field_90 > (unsigned int)(v10 + 1))
                        {
                            v10 += 1;
                            if (v12 == v10)
                            {
                                break;
                            }
                            v9 = v4->field_78;
                        }
                    }
                }
            }
            v11 = sub_4069d0();
            if (v11 - 1 <= -3)
            {
                v12 = v0;
                if (v11 == -2)
                {
                    v11 = v4->field_58;
                    if (v4->field_40 < v4->field_58)
                    {
                        v4->field_20 = v7;
                    }
                }
            }
            if (v11 - 1 > -3 || v11 == -2 && v4->field_40 >= v4->field_58)
            {
                v13 = v4->field_78;
                v12 = (unsigned long long)(char)*(&((char *)v5)[v4->field_28 + v4->field_0]);
                v0 = (char)*(&((char *)v5)[v4->field_28 + v4->field_0]);
                if (v4->field_78 != 0)
                {
                    v12 = (char)*((char *)(v13 + v12));
                    v0 = v12;
                }
                v4->field_20 = v7;
                v11 = 1;
            }
            if (v11 != -2 || v11 - 1 > -3 || v4->field_40 >= v4->field_58)
            {
                v14 = v4->field_10;
                v15 = (char *)v5 + 1;
                v16 = v5 * 4;
                *((unsigned long *)(v4->field_10 + v5 * 4)) = v12;
                v5 = (char *)v5 + v11;
                if (v5 < v5)
                {
                    v17 = &((unsigned int *)(v14 + (char *)v16))[1];
                    v18 = v14 + v5 * 4;
                    do
                    {
                        *(v17) = -1;
                        v17 = &v17[1];
                    }
                    while (v18 != v17);
                    if (v5 >= v6)
                    {
                        break;
                    }
                }
                else
                {
                    v5 = v15;
                }
            }
        }
    }
    v4->field_30 = v5;
    v4->field_38 = v5;
    return v11;
}

int sub_411478()
{
    unsigned int v1;  // r15d
    unsigned long long v2;  // r15

    v2 = v1 & 0x1200;
}

int sub_404760()
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
    return sub_4041d0();
}

int sub_404ea0()
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
        return sub_404a40();
    }
}

int sub_4112e8()
{
}

typedef struct struct_1 {
    char padding_0[152];
    struct struct_2 *field_98;
} struct_1;

int sub_40a550()
{
    void tmp_19;  // tmp #19
    void tmp_22;  // tmp #22
    unsigned long long v1;  // rsi
    unsigned long long *v4;  // rdx
    unsigned long long v5;  // r9
    unsigned int v6;  // eax
    struct_1 *v7;  // rdi
    unsigned long long v8;  // r8
    unsigned int v9;  // r10d
    unsigned long long v10;  // rax
    unsigned long long v11;  // rcx
    unsigned int v12;  // edi
    unsigned short v13;  // di
    unsigned long long v14;  // rsi

    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v5 = *(v4);
        v6 = sub_40a330() & 1;
        v14 = 0;
        v8 = *(v7->field_98);
        v9 = v6;
        while (true)
        {
            v10 = *((long long *)(v5 + v14 * 8));
            v11 = (unsigned long long)(unsigned int)*((int *)(*((long long *)(v5 + v14 * 8)) * 16 + v8 + 8)) >> 8;
            v12 = (unsigned long long)(unsigned int)*((int *)(*((long long *)(v5 + v14 * 8)) * 16 + v8 + 8)) >> 8;
            v13 = (unsigned short)((unsigned long long)(unsigned int)*((int *)(*((long long *)(v5 + v14 * 8)) * 16 + v8 + 8)) >> 8) & 1023;
            if (...)
            {
                v14 += 1;
                if (v14 == v1)
                {
                    break;
                }
            }
            if (*((char *)((*((long long *)(v5 + (v14 << 3))) << 4) + v8 + 8)) == 2 && v13 != 0 && ((char)rdi<4> & 128) != 0 && (v9 == 0 || ((char)v11 & 8) == 0) && ((v13 & 32) == 0 || ((char)tmp_19 & 2) != 0) && ((v11 & 4) == 0 || v9 != 0) && ((char)tmp_22 & 8) != 0 || *((char *)((*((long long *)(v5 + (v14 << 3))) << 4) + v8 + 8)) == 2 && v13 != 0 && (v9 == 0 || ((char)v11 & 8) == 0) && ((v13 & 32) == 0 || ((char)tmp_19 & 2) != 0) && ((v11 & 4) == 0 || v9 != 0) && ((char)rdi<4> & 128) == 0 || *((char *)((*((long long *)(v5 + (v14 << 3))) << 4) + v8 + 8)) == 2 && v13 == 0)
            {
                return v10;
            }
        }
    }
    return 0;
}

int sub_402de0()
{
    char v0;  // [bp-0x3d]
    unsigned int v1;  // [bp-0x3c]
    unsigned long v2;  // [bp-0x30]
    unsigned long v3;  // [bp-0x28]
    unsigned long v4;  // [bp-0x20]
    unsigned long v5;  // [bp-0x18]
    unsigned long v6;  // [bp-0x10]
    unsigned long v7;  // [bp-0x8]
    unsigned long v9;  // r15
    unsigned long v10;  // r14
    unsigned long v11;  // r13
    unsigned long v12;  // r12
    unsigned long v13;  // rbx

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v3 = stack_base + 0;
    v2 = v13;
    v1 = 10;
    v0 = 10;
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

int sub_4113d8()
{
    unsigned int v1;  // r15d
    unsigned long long v2;  // r15
    struct_0 *v3;  // rbx

    v2 = v1 & 0x8400;
    v3->field_8 = 10;
}

int sub_4112c8()
{
}

extern unsigned long long program_invocation_short_name;

int sub_40222b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    char padding_38[124];
    unsigned int field_b4;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned int field_8;
    char field_a;
} struct_3;

int sub_407cd0()
{
    void *v0;  // [bp-0x48]
    void tmp_77;  // tmp #77
    void tmp_94;  // tmp #94
    unsigned long long|void * v1;  // [bp-0x40]
    struct_2 *v3;  // rdi
    struct_2 *v4;  // rbx
    unsigned long v5;  // rbp
    unsigned long long v6;  // r14
    unsigned long long v7;  // rdx
    unsigned long long v8;  // rax
    unsigned long v9;  // r13
    unsigned long v10;  // rbp
    unsigned long long *v11;  // r12
    uint128_t *v12;  // r13
    void *v13;  // rax
    unsigned long long v14;  // rdx
    unsigned long long *v15;  // rdi
    unsigned long long v16;  // rcx
    struct_3 *v17;  // rax
    unsigned long v18;  // rsi
    char v19;  // cl
    unsigned int v20;  // ecx
    unsigned long long v21;  // rax

    v4 = v3;
    v15 = v3->field_10;
    v5 = v4->field_8;
    if (v15 < v4->field_8)
    {
        v11 = v4->field_18;
        v12 = v4->field_28;
    }
    else
    {
        v6 = v5 * 2;
        if (v5 << 1 <= 768614336404564650)
        {
            v1 = v7;
            v8 = realloc(v4->field_0, v5 * 32);
            if (v8 != 0)
            {
                v4->field_0 = v8;
                v9 = v5 * 16;
                v10 = (v5 + v6) * 16;
                v11 = realloc(v4->field_18, v9);
                v0 = realloc(v4->field_20, v9);
                v12 = realloc(v4->field_28, v10);
                v13 = realloc(v4->field_30, v10);
                if (v11 != 0 && v0 != 0 && v12 != 0)
                {
                    v14 = v1;
                    if (v1 != 0)
                    {
                        v4->field_18 = v11;
                        v15 = v4->field_10;
                        v4->field_20 = v0;
                        v4->field_28 = v12;
                        v4->field_30 = v1;
                        v4->field_8 = v6;
                    }
                }
                if (v11 == 0 || v0 == 0 || v12 == 0 || v1 == 0)
                {
                    v1 = v13;
                    v0 = v0;
                    free(v11);
                    free(v0);
                    free(v12);
                    free(v1);
                }
            }
        }
        if (v11 == 0 || v0 == 0 || v12 == 0 || v8 == 0 || v1 == 0 || v5 << 1 > 768614336404564650)
        {
            v21 = -1;
        }
    }
    if (v15 < v4->field_8 || v5 << 1 <= 768614336404564650 && v11 != 0 && v0 != 0 && v12 != 0 && v8 != 0 && v1 != 0)
    {
        v16 = (unsigned int)v14 & -261889;
        v17 = v15 * 16 + v4->field_0;
        *((unsigned long long *)(v15 * 16 + v4->field_0 + 8)) = v14;
        v17->field_0 = v18;
        v17->field_8 = (unsigned int)v14 & -261889;
        v19 = v14 == 6;
        if (v14 == 5)
        {
            v19 = 1 < v4->field_b4;
        }
        v20 = (unsigned int)v19 * 16;
        *(&((char *)&v17->field_8)[2]) = (char)(*(&((char *)&v17->field_8)[2]) & 4294967023) | v20;
        *((long long *)((char *)v11 + 0x8 * v15)) = -1;
        tmp_77 = (char *)v12 + 24 * v4->field_10;
        *((int128_t *)&((char *)v12)[24 * v4->field_10]) = 0;
        *((long long *)(tmp_77 + 16)) = 0;
        tmp_94 = v4->field_30 + v4->field_10 * 24;
        *((int128_t *)(v4->field_30 + v4->field_10 * 24)) = 0;
        *((long long *)(tmp_94 + 16)) = 0;
        v21 = v4->field_10;
        v4->field_10 = v4->field_10 + 1;
    }
    return v21;
}

int sub_4050b0() { crash_skku;
}
typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[8];
    char field_38;
} struct_0;

int sub_414450()
{
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rbp
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx
    char *v6;  // rsi
    unsigned long long v8;  // rbx
    unsigned long long v10;  // rax

    v2 = v1;
    v1->field_0 = 0;
    v1->field_8 = 0;
    v1->field_10 = 0;
    v3 = malloc(0x100);
    v1->field_20 = v3;
    if (v3 != 0)
    {
        v4 = 0;
        if (((char)v5 & 4) != 0)
        {
            v4 = 1;
        }
        v2->field_28 = 0;
        v2->field_38 = (unsigned int)((unsigned long long)((unsigned int)v5 % 8 & 1) * 16) | v2->field_38 & 111 | (unsigned int)v4 * 128;
        strlen(v6);
        v8 = (unsigned int)sub_412fc0();
        if ((unsigned int)v8 != 16)
        {
        }
        else
        {
            v8 = 8;
        }
        if ((unsigned int)v8 == 0)
        {
            sub_413df0();
        }
        if ((unsigned int)v8 == 16 || (unsigned int)v8 != 0)
        {
            free(v2->field_20);
            v2->field_20 = 0;
        }
        v10 = v8;
        return v10;
    }
    return 12;
}

int sub_407bd0()
{
    unsigned long long v1[25];  // rdi
    unsigned long long v2;  // r12
    unsigned long v3;  // rsi
    unsigned long long v4;  // rax

    v2 = v1[24];
    if (v1[8] <= v3 && v1[8] < v1[11])
    {
        v4 = sub_407a80();
    }
    if ((v1[8] >= v1[11] || v1[8] > v3) && v1[6] <= v3 && v1[6] < v1[11])
    {
        v4 = sub_407a80();
    }
    if ((unsigned int)v4 == 0 && v1[8] >= v1[11] || (unsigned int)v4 == 0 && v1[8] > v3 || v1[8] < v1[11] && v1[8] <= v3 && (unsigned int)v4 == 0 || v1[6] > v3 && v1[8] >= v1[11] || v1[6] > v3 && v1[8] > v3 || v1[8] >= v1[11] && v1[6] >= v1[11] || v1[8] > v3 && v1[6] >= v1[11])
    {
        if (v1[24] < v3)
        {
            memset(v1[23] + v2 * 8 + 8, 0x0, (v3 - v2) * 8);
            v1[24] = v3;
        }
        v4 = 0;
    }
    return v4;
}

typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_8 {
    char padding_0[16];
    unsigned long long field_10;
    struct struct_5 *field_18;
} struct_8;

typedef struct struct_7 {
    unsigned long long field_0;
    char field_8;
} struct_7;

typedef struct struct_3 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
    char field_20;
} struct_3;

typedef struct struct_6 {
    char padding_0[104];
    char field_68;
} struct_6;

int sub_410670()
{
    void tmp_43;  // tmp #43
    void tmp_14;  // tmp #14
    unsigned long v0;  // [bp-0xe8]
    unsigned int|unsigned long long [28] v1;  // [bp-0xd0]
    struct_8 *v2;  // [bp-0xc8]
    unsigned long long v3;  // [bp-0xc0]
    unsigned long v4;  // [bp-0xb8]
    unsigned long v5;  // [bp-0xb0]
    unsigned long long v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    unsigned int v10;  // [bp-0x7c]
    unsigned long long|unsigned int|void v11;  // [bp-0x78]
    unsigned long long|void v12;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x60]
    void v14;  // [bp-0x58]
    unsigned long v15;  // [bp-0x50]
    void *v16;  // [bp-0x48]
    unsigned long long v18;  // rdx
    unsigned long long v20[3];  // rcx
    struct_4 *v21;  // rbp
    unsigned long long v22;  // rsi
    unsigned long long v23[28];  // rdi
    unsigned long long *v24;  // r12
    unsigned long long v25;  // rdx
    struct struct_6 **v26;  // rcx
    unsigned long long v27;  // rdi
    unsigned long long *v29;  // rbx
    unsigned long long v30[10];  // r15
    unsigned long long v31;  // r13
    unsigned long long v32;  // rax
    unsigned long long v33[4];  // rdx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rsi
    unsigned long long v36;  // r8
    unsigned long long v37;  // r13
    unsigned long long|unsigned long v38;  // r9
    unsigned long long v39;  // r11
    unsigned long long *v40;  // rcx
    unsigned long long v41;  // rsi
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rdi
    unsigned long long *v44;  // rdx
    unsigned int v45;  // r13d
    struct_7 *v46;  // rax
    unsigned long long v47;  // r13
    unsigned long long v48;  // rbx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rax
    unsigned long long v51;  // r15
    unsigned long long v52;  // rbx
    unsigned long long *v53;  // r13
    unsigned long long|unsigned int|unsigned long v54;  // rax
    unsigned long long v55;  // r12
    unsigned long long v56;  // rsi
    unsigned long long v57;  // rax
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rax
    unsigned long long v61;  // r8
    unsigned long long *v62;  // r13
    unsigned long long v63;  // r15
    unsigned long long v64;  // r14
    unsigned long long v65;  // rbp
    unsigned long long v66;  // rax
    unsigned long long v67;  // r12
    struct_3 *v68;  // rbx
    unsigned long long v69;  // r10
    unsigned long long v70;  // rax
    unsigned long long v71;  // rax
    unsigned long long v72;  // rax
    unsigned long long v74;  // rdx
    unsigned long long v76;  // rdx
    unsigned long long v78;  // rax

    v21 = v20;
    tmp_43 = v18 * 8;
    v52 = v22;
    v24 = v23[19];
    v25 = v20[1];
    v3 = tmp_43;
    v26 = tmp_43 + v23[23];
    v1[0] = v23;
    v27 = *((long long *)(tmp_43 + v23[23]));
    v10 = 0;
    v2 = v27;
    if (v2 != 0)
    {
        if (v25 == 0)
        {
            *((long long *)(*((long long *)v22) + v6 * 8)) = 0;
            v54 = 0;
        }
        else
        {
            v11 = 0;
            v30 = (unsigned long long)(unsigned int)sub_409bb0();
            v54 = v11;
            if (v11 == 0)
            {
                v31 = v30[7];
                v4 = &v30[7];
                if (v30[7] == 0)
                {
                    tmp_14 = v21->field_8;
                    v30[8] = 0;
                    v30[7] = tmp_14;
                    v32 = malloc(tmp_14 * 8);
                    v30[9] = v32;
                    if (v32 != 0)
                    {
                        v11 = 0;
                        if (v21->field_8 > 0)
                        {
                            do
                            {
                                v11 = sub_408b40();
                                v31 += 1;
                            }
                            while (v11 == 0 && v31 < v21->field_8);
                            if (v11 == 0)
                            {
                                v5 = &v2->padding_0[8];
                                v54 = sub_4090b0();
                                v10 = v54;
                            }
                            else
                            {
                                v54 = 12;
                            }
                        }
                    }
                    if ((v32 == 0 || v21->field_8 > 0) && (v32 == 0 || (unsigned int)v54 != 0))
                    {
                        v54 = 12;
                    }
                }
                if (v32 != 0 || v30[7] != 0)
                {
                    if (v21->field_8 <= 0 || (unsigned int)v54 != 0 || v30[7] != 0)
                    {
                        v5 = &v2->padding_0[8];
                        v54 = sub_4090b0();
                        v10 = v54;
                    }
                    if ((unsigned int)v54 == 0 && (v21->field_8 <= 0 || v30[7] != 0))
                    {
                        if (*((long long *)(v22 + 40)) != 0)
                        {
                            *((unsigned long long [28])&v4) = v1[27];
                            if (*((long long *)(v22 + 40)) > 0)
                            {
                                v51 = 0;
                                while (true)
                                {
                                    v33 = v4 + *((long long *)(*((long long *)(v52 + 48)) + v51 * 8)) * 40;
                                    if (v6 <= v33[1] && v6 > *((long long *)(v4 + (*((long long *)(*((long long *)(v52 + 48)) + (v51 << 3))) + (*((long long *)(*((long long *)(v52 + 48)) + (v51 << 3))) << 2) << 3) + 16)))
                                    {
                                        v34 = *(v24);
                                        v35 = v21->field_8;
                                        v36 = *((long long *)(*(v24) + *(v33) * 16));
                                        if (v6 != v33[3])
                                        {
                                            v37 = 0;
                                            if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
                                            {
                                                v6 = v52;
                                                v42 = v36;
                                                while (true)
                                                {
                                                    v46 = v34 + v21->field_10[v37] * 16;
                                                    if ((unsigned int)v46->field_8 - 8 <= 1 && v42 == v46->field_0)
                                                    {
                                                        v54 = sub_40ae10();
                                                        if ((unsigned int)v54 != 0)
                                                        {
                                                            break;
                                                        }
                                                        if ((unsigned int)v54 == 0)
                                                        {
                                                            v37 += 1;
                                                        }
                                                    }
                                                    if ((unsigned int)v46->field_8 - 8 > 1 || v42 != v46->field_0)
                                                    {
                                                        v37 += 1;
                                                    }
                                                    if ((unsigned int)v54 == 0 || (unsigned int)v46->field_8 - 8 > 1 || v42 != v46->field_0)
                                                    {
                                                        if (((unsigned int)v46->field_8 - 8 <= 1 || v37 < v21->field_8) && (v42 == v46->field_0 || v37 < v21->field_8) && (v37 < v21->field_8 || (unsigned int)v46->field_8 - 8 > 1 || v42 != v46->field_0))
                                                        {
                                                            v34 = *(v24);
                                                        }
                                                        if (((unsigned int)v46->field_8 - 8 <= 1 || v37 >= v21->field_8) && (v42 == v46->field_0 || v37 >= v21->field_8) && ((unsigned int)v46->field_8 - 8 > 1 || v42 != v46->field_0 || v37 >= v21->field_8))
                                                        {
                                                            v52 = v6;
                                                        }
                                                    }
                                                }
                                                if (((unsigned int)v46->field_8 - 8 <= 1 || v37 >= v21->field_8) && (v42 == v46->field_0 || v37 >= v21->field_8) && ((unsigned int)v54 == 0 || (unsigned int)v46->field_8 - 8 > 1 || v42 != v46->field_0) && ((unsigned int)v46->field_8 - 8 > 1 || v42 != v46->field_0 || v37 >= v21->field_8))
                                                {
                                                    v51 += 1;
                                                    if (v51 >= *((long long *)(v52 + 40)))
                                                    {
                                                        break;
                                                    }
                                                }
                                                else if ((unsigned int)v46->field_8 - 8 <= 1 && v42 == v46->field_0)
                                                {
                                                    return v54;
                                                }
                                            }
                                        }
                                        else if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
                                        {
                                            v38 = -1;
                                            v39 = &v21->field_10[v35];
                                            v40 = v21->field_10;
                                            v41 = -1;
                                            while (true)
                                            {
                                                v43 = *(v40);
                                                v44 = *(v40) * 16 + v34;
                                                v45 = (char)*((char *)(*(v40) * 16 + v34 + 8));
                                                if (*((char *)((*(v40) << 4) + v34 + 8)) != 8)
                                                {
                                                    if (v45 == 9)
                                                    {
                                                        v38 = (v42 == *(v44)? v43 : r9<8>);
                                                    }
                                                    v40 = &v40[1];
                                                    if (v39 == v40)
                                                    {
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v41 = (v42 == *(v44)? v43 : rsi<8>);
                                                    v40 = &v40[1];
                                                    if (v39 == v40)
                                                    {
                                                        break;
                                                    }
                                                }
                                            }
                                            v47 = v38;
                                            v6 = v38;
                                            if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
                                            {
                                                v54 = sub_40ae10();
                                                if ((unsigned int)v54 != 0)
                                                {
                                                    break;
                                                }
                                            }
                                            if (((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) || (unsigned int)v54 == 0) && ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) || v21->field_8 > 0) && (!((char)(v6 - 0 >> 63)) || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))))
                                            {
                                                v7 = v52;
                                                v48 = 0;
                                                while (true)
                                                {
                                                    v49 = sub_408600();
                                                    if (v49 == 0)
                                                    {
                                                        v50 = sub_408600();
                                                        if (v50 == 0)
                                                        {
                                                            v54 = sub_40ae10();
                                                        }
                                                    }
                                                    if (v49 != 0 || v50 != 0)
                                                    {
                                                        v48 += 1;
                                                    }
                                                    if (v21->field_8 <= v48 && ((unsigned int)v54 == 0 || v49 != 0 || v50 != 0))
                                                    {
                                                        v52 = v7;
                                                    }
                                                }
                                                if (v49 == 0 && v50 == 0 && (unsigned int)v54 != 0)
                                                {
                                                    return v54;
                                                }
                                            }
                                        }
                                    }
                                }
                                if ((char)(v6 - 0 >> 63) || v6 <= *((long long *)(v4 + (*((long long *)(*((long long *)(v52 + 48)) + (v51 << 3))) + (*((long long *)(*((long long *)(v52 + 48)) + (v51 << 3))) << 2) << 3) + 16)) || (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) || v21->field_8 <= 0 || v51 >= *((long long *)(v52 + 40)) || v6 > v33[1])
                                {
                                    v10 = 0;
                                }
                                else
                                {
                                    return v54;
                                }
                            }
                            v10 = 0;
                        }
                        v53 = v3 + *((long long *)v52);
                        *(v53) = (unsigned int)sub_409bb0();
                        v54 = v10;
                        if (v10 == 0)
                        {
                            v54 = 0;
                        }
                    }
                }
            }
        }
        if (v10 == 0 && v11 == 0 && (unsigned int)v54 == 0 && v25 != 0 && (v21->field_8 <= 0 || v30[7] != 0) && (v32 != 0 || v30[7] != 0) && (*((char *)(*((long long *)(v3 + v1[23])) + 104)) & 64) != 0 || v25 == 0 && (*(v26)->field_68 & 64) != 0)
        {
            v55 = 0;
            v56 = v1[25];
            for (v57 = v1[25]; v55 < v57; v57 = v59)
            {
                if (v6 > *((long long *)(v1[27] + (((v55 + v57 >> 63) + v55 + v57 >> 1) + ((v55 + v57 >> 63) + v55 + v57 >> 1 << 2) << 3) + 8)))
                {
                    v61 = v59;
                    v59 = v57;
                }
                else
                {
                    for (v59 = (v55 + v57 >> 63) + v55 + v57 >> 1; 0 < v59; v59 = v60)
                    {
                        v60 = (0 + v59 >> 63) + 0 + v59 >> 1;
                        v61 = (0 + v59 >> 63) + 0 + v59 >> 1;
                        if (v6 > *((long long *)(v1[27] + (((0 + v59 >> 63) + 0 + v59 >> 1) + ((0 + v59 >> 63) + 0 + v59 >> 1 << 2) << 3) + 8)))
                        {
                            break;
                        }
                    }
                    if (0 < v59)
                    {
                        v55 = v61 + 1;
                    }
                }
                v55 = v61 + 1;
            }
            v7 = v55 * 40;
            if (v6 == *((long long *)(v1[27] + (v55 + (v55 << 2) << 3) + 8)) && v55 != -1)
            {
                v62 = v1[19];
                v11 = 0;
                if (v2->field_10 > 0)
                {
                    v6 = v18;
                    v63 = 0;
                    v64 = v52;
                    v8 = v55;
                    while (true)
                    {
                        v65 = v2->field_18[v63];
                        v66 = (char)*((char *)(v2->field_18[v63] * 16 + *(v62) + 8));
                        if (v66 == 4 && (v2->field_18[v63] != *((long long *)(v64 + 16)) || v6 != *((long long *)(v64 + 24))))
                        {
                            v9 = v63;
                            v67 = v8;
                            v68 = v7 + v1[27];
                            v5 = v12 * 24;
                            v4 = v12 * 8;
                            while (true)
                            {
                                if (v12 == v68->field_0)
                                {
                                    v69 = v6 + v68->field_18 - v68->field_10;
                                    if (v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v68->field_18 != v68->field_10)
                                    {
                                        v70 = sub_408600();
                                        if (v70 != 0)
                                        {
                                            v0 = v69;
                                            v71 = sub_408890();
                                            if ((long long)v11 == 0 && v71 == 0)
                                            {
                                                *((int128_t *)&v11) = *((int128_t *)v64);
                                                *((int128_t *)&v12) = *((int128_t *)(v64 + 16));
                                                *((int128_t *)&v14) = *((int128_t *)(v64 + 32));
                                                v16 = *((long long *)(v64 + 48));
                                                v54 = sub_4096a0();
                                            }
                                        }
                                    }
                                }
                                if (v12 == v68->field_0 && v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && v68->field_18 != v68->field_10 && v71 == 0 && (long long)v11 == 0 && (unsigned int)v54 == 0 || v12 == v68->field_0 && v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && v68->field_18 != v68->field_10 && v71 == 0 && (long long)v11 != 0)
                                {
                                    v12 = v65;
                                    v13 = v6;
                                    v72 = sub_406ff0();
                                    if (v72 != 0)
                                    {
                                        v54 = sub_40ebe0();
                                        if ((unsigned int)v54 == 0)
                                        {
                                            v74 = (long long)v11;
                                            if (*((long long *)(v64 + 8)) != 0)
                                            {
                                                v54 = sub_409da0();
                                                if ((unsigned int)v54 == 0)
                                                {
                                                    v74 = (long long)v11;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        v54 = 12;
                                    }
                                }
                                if (...)
                                {
                                    break;
                                }
                                if ((v12 == v68->field_0 && v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && v68->field_18 != v68->field_10 && v71 == 0 && (long long)v11 == 0 && (unsigned int)v54 == 0 || v12 == v68->field_0 && v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && v68->field_18 != v68->field_10 && v71 == 0 && (long long)v11 != 0) && v72 != 0 && (unsigned int)v54 == 0 && *((long long *)(v64 + 8)) != 0 && (unsigned int)v54 == 0 || (v12 == v68->field_0 && v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && v68->field_18 != v68->field_10 && v71 == 0 && (long long)v11 == 0 && (unsigned int)v54 == 0 || v12 == v68->field_0 && v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && v68->field_18 != v68->field_10 && v71 == 0 && (long long)v11 != 0) && v72 != 0 && (unsigned int)v54 == 0 && *((long long *)(v64 + 8)) == 0)
                                {
                                    *((long long *)(v74 + v3)) = *((long long *)((long long)v11 + v3));
                                    v76 = (unsigned long long)(unsigned int)sub_408600() - 1;
                                    if (!((char)(v76 - 1 >> 63)) && (long long)(&v14)[8] > v76)
                                    {
                                        v15 = (long long)(&v14)[8] - 1;
                                        sub_408770();
                                    }
                                    v68 = v1[27] + v67 * 40;
                                }
                                if (...)
                                {
                                    v67 += 1;
                                    v78 = (char *)&v68[1].field_0 + 7;
                                    if (v68->field_20 != 0)
                                    {
                                        v68 = v78;
                                    }
                                }
                            }
                            if (...)
                            {
                                v63 = 1;
                            }
                            else if (v72 == 0 && v71 == 0 && v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && ((unsigned int)v54 == 0 || (long long)v11 != 0) || v71 == 0 && v69 <= *((long long *)(v64 + 24)) && v72 != 0 && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && ((unsigned int)v54 == 0 || (long long)v11 != 0) && (unsigned int)v54 == 0 && *((long long *)(v64 + 8)) != 0 && (unsigned int)v54 != 0 || v71 == 0 && v69 <= *((long long *)(v64 + 24)) && v72 != 0 && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && ((unsigned int)v54 == 0 || (long long)v11 != 0) && (unsigned int)v54 != 0 || (long long)v11 == 0 && v71 == 0 && v69 <= *((long long *)(v64 + 24)) && (unsigned int)v54 != 0 && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0)
                            {
                                *((unsigned long *)&v1) = v54;
                                free(v16);
                                v54 = v1;
                            }
                            else if (v72 == 0 && v71 == 0 && v69 <= *((long long *)(v64 + 24)) && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && ((unsigned int)v54 == 0 || (long long)v11 != 0) || v71 == 0 && v69 <= *((long long *)(v64 + 24)) && v72 != 0 && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && ((unsigned int)v54 == 0 || (long long)v11 != 0) && (unsigned int)v54 == 0 && *((long long *)(v64 + 8)) != 0 && (unsigned int)v54 != 0 || v71 == 0 && v69 <= *((long long *)(v64 + 24)) && v72 != 0 && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0 && ((unsigned int)v54 == 0 || (long long)v11 != 0) && (unsigned int)v54 != 0 || (long long)v11 == 0 && v71 == 0 && v69 <= *((long long *)(v64 + 24)) && (unsigned int)v54 != 0 && *((long long *)(*((long long *)v64) + (v69 << 3))) != 0 && v70 != 0)
                            {
                                return v54;
                            }
                        }
                        if (v66 != 4 || 1 >= v2->field_10 || v2->field_18[v63] == *((long long *)(v64 + 16)) && v6 == *((long long *)(v64 + 24)))
                        {
                            v63 = 1;
                            if ((long long)v11 == 0)
                            {
                                break;
                            }
                            v54 = 0;
                        }
                        *((unsigned long *)&v1) = v54;
                        free(v16);
                        v54 = v1;
                    }
                    if (1 >= v2->field_10)
                    {
                        v54 = 0;
                    }
                    else if (v66 == 4 || (long long)v11 != 0 && 1 >= v2->field_10)
                    {
                        return v54;
                    }
                }
            }
            v54 = 0;
        }
    }
    else
    {
        v29 = v3 + *((long long *)v22);
        if (v25 == 0)
        {
            *((long long *)(v3 + *((long long *)v22))) = 0;
            v54 = 0;
        }
        else
        {
            *(v29) = (unsigned int)sub_409bb0();
            v54 = v10;
        }
    }
    return v54;
}

int sub_40c660() { crash_skku_timeout;
}
extern int512_t g_61b8c0;

int sub_404460()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_61b8c0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_402fa0();
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_408670()
{
    unsigned long long v1;  // rdi
    unsigned long long v2[6];  // r12
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long long *v5;  // rax
    unsigned int v6;  // r8d
    unsigned long v7;  // rcx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rbx
    unsigned long long v11;  // rax
    unsigned long long *v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx
    unsigned long long v15;  // rax

    v2 = v1;
    v14 = v3;
    while (true)
    {
        v4 = sub_408600();
        if (v4 == 0)
        {
            v5 = v14 * 16 + *(v2);
            if (*(v5) == v7 && (char)*((char *)((v14 << 4) + *(v2) + 8)) == v6 && v6 == 9)
            {
                v15 = sub_406ff0();
            }
            if (*(v5) != v7 || (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6)
            {
                v8 = sub_406ff0();
                if (v8 != 0)
                {
                    v9 = v14 * 24;
                    v11 = *((long long *)(v2[5] + v9 + 8));
                    if (*((long long *)(v2[5] + v9 + 8)) != 0)
                    {
                        v12 = *((long long *)(v2[5] + v9 + 16));
                        if (v11 == 2)
                        {
                            v13 = sub_408670();
                            if ((unsigned int)v13 == 0)
                            {
                                v12 = *((long long *)(v2[5] + v9 + 16));
                            }
                        }
                    }
                }
            }
            if ((*(v5) == v7 || v8 == 0) && (v8 == 0 || (char)*((char *)((v14 << 4) + *(v2) + 8)) == v6) && (v15 == 0 || *(v5) != v7 || (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6) && (v6 == 9 || *(v5) != v7 || (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6))
            {
                v13 = 12;
            }
        }
        if (v4 != 0 || *(v5) == v7 && (char)*((char *)((v14 << 4) + *(v2) + 8)) == v6 && v15 != 0 || *(v5) == v7 && (char)*((char *)((v14 << 4) + *(v2) + 8)) == v6 && v6 != 9 || *((long long *)(v2[5] + v9 + 8)) == 0 && *(v5) != v7 && v8 != 0 || *((long long *)(v2[5] + v9 + 8)) == 0 && v8 != 0 && (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6)
        {
            return 0;
        }
        if (v4 == 0 && v11 == 2 && *((long long *)(v2[5] + v9 + 8)) != 0 && v8 != 0 && (*(v5) != v7 || (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6) && (unsigned int)v13 != 0 || v4 == 0 && (*(v5) == v7 || v8 == 0) && (v8 == 0 || (char)*((char *)((v14 << 4) + *(v2) + 8)) == v6) && (v15 == 0 || *(v5) != v7 || (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6) && (v6 == 9 || *(v5) != v7 || (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6))
        {
            return v13;
        }
        if (v4 == 0 && v11 == 2 && *((long long *)(v2[5] + v9 + 8)) != 0 && v8 != 0 && (*(v5) != v7 || (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6) && (unsigned int)v13 == 0 || v4 == 0 && *((long long *)(v2[5] + v9 + 8)) != 0 && v8 != 0 && (*(v5) != v7 || (char)*((char *)((v14 << 4) + *(v2) + 8)) != v6) && v11 != 2)
        {
            v14 = *(v12);
        }
    }
}

typedef struct struct_1 {
    char padding_0[152];
    struct struct_2 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[8];
    unsigned long long field_c8;
    char padding_d0[8];
    unsigned long long field_d8;
} struct_1;

int sub_409e50()
{
    unsigned long v0;  // [bp-0x98]
    unsigned long long *|unsigned long v1;  // [bp-0x90]
    unsigned long long|unsigned long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    unsigned long v4;  // [bp-0x78]
    unsigned int v5;  // [bp-0x6c]
    unsigned int v6;  // [bp-0x5c]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long *v9;  // [bp-0x48]
    unsigned long long v11;  // r11
    struct_1 *v12;  // rdi
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // r9
    unsigned long long v17;  // rbx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rax
    unsigned long v20;  // rcx
    unsigned long long v21;  // rbx
    unsigned int v22;  // r8d
    unsigned long long v23[28];  // rbp
    unsigned long v24;  // rsi
    unsigned long long v25[4];  // r15
    unsigned long long v26;  // rax
    unsigned long long v27;  // r14
    unsigned long long v28;  // r14
    unsigned int|unsigned long v29;  // rax
    unsigned long long v30;  // r10
    unsigned long long v31;  // rax
    unsigned long long v32;  // r10
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    unsigned int v35;  // r14d
    unsigned int v36;  // r15d

    v11 = 0;
    v13 = v12->field_c8;
    for (v18 = v12->field_c8; v11 < v18; v18 = v16)
    {
        if (v14 > *((long long *)(v12->field_d8 + (((v11 + v18 >> 63) + v11 + v18 >> 1) + ((v11 + v18 >> 63) + v11 + v18 >> 1 << 2) << 3) + 8)))
        {
            v17 = v16;
            v16 = v18;
        }
        else
        {
            for (v16 = (v11 + v18 >> 63) + v11 + v18 >> 1; v16 > 0; v16 = v15)
            {
                v15 = (v16 + 0 >> 63) + v16 + 0 >> 1;
                v17 = (v16 + 0 >> 63) + v16 + 0 >> 1;
                if (v14 > *((long long *)(v12->field_d8 + (((v16 + 0 >> 63) + v16 + 0 >> 1) + ((v16 + 0 >> 63) + v16 + 0 >> 1 << 2) << 3) + 8)))
                {
                    break;
                }
            }
            if (v16 > 0)
            {
                v11 = v17 + 1;
            }
        }
        v11 = v17 + 1;
    }
    v19 = v12->field_d8;
    v3 = v11 * 40;
    if (*((long long *)(v12->field_d8 + (v11 + (v11 << 2) << 3) + 8)) == v14 && v11 != -1)
    {
        v4 = v20;
        v21 = v14;
        v5 = v22;
        v23 = v12;
        v0 = v24 + 16;
        while (true)
        {
            v25 = v19 + v3;
            while (true)
            {
                v26 = sub_408600();
                if (v26 != 0)
                {
                    v27 = v25[3] + v21 - v25[2];
                    if (v21 != v25[3] + v21 - v25[2])
                    {
                        v30 = v23[23] + v27 * 8;
                        v2 = v27 * 8;
                        v1 = *((long long *)(v12->field_98->field_18 + v16 * 8));
                        if (*((long long *)(v23[23] + (v27 << 3))) != 0)
                        {
                            v31 = sub_408600();
                            if (v31 == 0)
                            {
                                v6 = sub_4096a0();
                                v33 = sub_406ff0();
                                if (v6 == 0 && v33 == 1)
                                {
                                    v32 = v2 + v23[23];
                                }
                                if (v6 != 0 || v33 != 1)
                                {
                                    free(v9);
                                    v34 = v6;
                                    if (v6 != 0)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                        else
                        {
                            v2 = v30;
                            v7 = 1;
                            v8 = 1;
                            v9 = malloc(0x8);
                            if (v9 != 0)
                            {
                                v6 = 0;
                                v32 = v2;
                                *(v9) = v1;
                            }
                        }
                    }
                    else
                    {
                        v28 = *((long long *)*((long long *)(v12->field_98->field_28 + v16 * 24 + 16)));
                        v29 = sub_408600();
                        if (v29 == 0)
                        {
                            v7 = 1;
                            v8 = 1;
                            v9 = malloc(0x8);
                            if (v9 != 0)
                            {
                                *(v9) = v28;
                                v29 = 0;
                            }
                            else
                            {
                                v8 = 0;
                                v29 = 12;
                                v7 = 0;
                            }
                            *((unsigned long *)&v6) = v29;
                            v35 = (int)sub_408f70();
                            v36 = sub_408b40();
                            free(v9);
                            v34 = v6;
                            if (v6 == 0 && v35 == 0 && v36 == 0)
                            {
                                v19 = v12->field_d8;
                            }
                            else
                            {
                                if ((unsigned int)v34 != 0)
                                {
                                    break;
                                }
                                v34 = (unsigned int)(v35 != 0? (unsigned int)r14<8> : (unsigned int)r15<8>);
                            }
                        }
                    }
                }
                if (v6 == 0 && v31 == 0 && v33 == 1 && v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0 || *((long long *)(v23[23] + (v27 << 3))) == 0 && v21 != v25[3] + v21 - v25[2] && v9 != 0 && v26 != 0)
                {
                    v1 = v32;
                    *(v1) = (unsigned int)sub_409bb0();
                    free(v9);
                    if (*((long long *)(v23[23] + (v27 << 3))) == 0)
                    {
                        v34 = v6;
                    }
                }
                if (v31 == 0 && v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0 && (v6 != 0 || v33 != 1) && v6 == 0 || *((long long *)(v23[23] + (v27 << 3))) == 0 && v21 != v25[3] + v21 - v25[2] && v26 != 0 && v9 == 0)
                {
                    return 12;
                }
                if ((v6 == 0 && v31 == 0 && v33 == 1 && v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0 || *((long long *)(v23[23] + (v27 << 3))) == 0 && v21 != v25[3] + v21 - v25[2] && v9 != 0 && v26 != 0) && *((long long *)(v23[23] + (v27 << 3))) == 0 && v6 == 0 || (v6 == 0 && v31 == 0 && v33 == 1 && v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0 || *((long long *)(v23[23] + (v27 << 3))) == 0 && v21 != v25[3] + v21 - v25[2] && v9 != 0 && v26 != 0) && *((long long *)(v23[23] + (v27 << 3))) != 0 || v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0 && v31 != 0 || v21 == v25[3] + v21 - v25[2] && v26 != 0 && v29 != 0 || v26 == 0)
                {
                    v25 = &v25[5];
                    if ((char)v25[-1] == 0)
                    {
                        break;
                    }
                }
            }
            if (v21 == v25[3] + v21 - v25[2] && v6 == 0 && v29 == 0 && v35 == 0 && v36 == 0 && v26 != 0)
            {
                v25 = v19 + v3;
            }
            else if (v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0 && v31 != 0 || (*((long long *)(v23[23] + (v27 << 3))) == 0 && v21 != v25[3] + v21 - v25[2] && v9 != 0 && v26 != 0 || v6 == 0 && v31 == 0 && v33 == 1 && v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0) && *((long long *)(v23[23] + (v27 << 3))) == 0 && v6 == 0 || (*((long long *)(v23[23] + (v27 << 3))) == 0 && v21 != v25[3] + v21 - v25[2] && v9 != 0 && v26 != 0 || v6 == 0 && v31 == 0 && v33 == 1 && v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0) && *((long long *)(v23[23] + (v27 << 3))) != 0 || v21 == v25[3] + v21 - v25[2] && v26 != 0 && v29 != 0 || v26 == 0)
            {
                v34 = 0;
            }
            else if ((*((long long *)(v23[23] + (v27 << 3))) == 0 && v21 != v25[3] + v21 - v25[2] && v9 != 0 && v26 != 0 || v6 == 0 && v31 == 0 && v33 == 1 && v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0) && *((long long *)(v23[23] + (v27 << 3))) == 0 && v6 != 0 || v21 == v25[3] + v21 - v25[2] && v29 == 0 && v26 != 0 && (v6 != 0 || v35 != 0 || v36 != 0) && (unsigned int)v34 == 0 || v31 == 0 && v21 != v25[3] + v21 - v25[2] && *((long long *)(v23[23] + (v27 << 3))) != 0 && v26 != 0 && (v6 != 0 || v33 != 1) || v21 == v25[3] + v21 - v25[2] && v29 == 0 && v26 != 0 && (v6 != 0 || v35 != 0 || v36 != 0))
            {
                return v34;
            }
        }
        if (true)
        {
            v34 = 0;
        }
        else
        {
            return v34;
        }
    }
    v34 = 0;
    return v34;
}

int sub_407250()
{
    void tmp_11;  // tmp #11
    unsigned long long v1[16];  // rdi
    unsigned long long v2[16];  // rbp
    unsigned long v3;  // r12
    unsigned long long *v4;  // rax
    unsigned long v5;  // rax
    void *v6;  // rdx
    unsigned long long v7;  // rdx
    char *v8;  // rbx

    v2 = v1;
    v3 = (v1[8] <= v1[11]? v1[8] : v1[11]);
    v8 = v1[6];
    if ((v1[8] <= v1[11]? v1[8] : v1[11]) > v1[6])
    {
        v4 = __ctype_toupper_loc();
        do
        {
            v6 = (unsigned long long)v8[v2[5] + *(v2)];
            if (v2[15] != 0)
            {
                v6 = (unsigned long long)(char)*(&((char *)v6)[v1[15]]);
            }
            v7 = (unsigned int)*((int *)(*(v4) + v6 * 4));
            *((unsigned long long *)&v8[v2[1]]) = v7;
            v8 = &v8[1];
        }
        while (v3 != v8);
        *((int *)&v2[6]) = (v1[8] <= v1[11]? v1[8] : v1[11]);
        v2[7] = v3;
        return v4;
    }
    tmp_11 = v1[6];
    v2[6] = v1[6];
    v2[7] = tmp_11;
    return v5;
}

typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
} struct_4;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_3 *field_10;
} struct_5;

int sub_40ae10()
{
    unsigned int|unsigned long v0;  // [bp-0x70]
    struct_4 *v1;  // [bp-0x68]
    unsigned long v2;  // [bp-0x60]
    uint128_t v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x48]
    unsigned long long v6;  // rdx
    unsigned long long v8[8];  // rdi
    unsigned long v9;  // rsi
    struct_5 *v10;  // rbp
    unsigned long v11;  // rcx
    unsigned long long v12[8];  // r12
    unsigned long long v13;  // rax
    struct_4 *v14;  // r15
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned long long v18;  // r15
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v22;  // r10
    unsigned long long v23;  // rbx
    unsigned long long v26;  // rdx
    unsigned long v27;  // r11

    v3 = 0;
    v10 = v8[7] + v9 * 24;
    v2 = v11;
    v4 = 0;
    v22 = *((long long *)(v8[7] + v9 * 24 + 8));
    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=((Load(addr=(rdi<8> + 0x38<64>), size=8, endness=Iend_LE) + ((rsi<8> + (rsi<8> << 0x1<8>)) << 0x3<8>)) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
    {
        v12 = v8;
        v23 = 0;
        while (true)
        {
            v13 = v10->field_10[v23];
            if (v9 != v10->field_10[v23] && (*((char *)((v13 << 4) + *(v8) + 8)) & 8) != 0)
            {
                v14 = *((long long *)(v12[5] + v13 * 24 + 16));
                *((unsigned long long [8])&v1) = v12[5] + v13 * 24;
                v0 = *((long long *)*((long long *)(v12[5] + v13 * 24 + 16)));
                v15 = sub_408600();
                if (v1->field_8 > 1)
                {
                    if (v15 == 0)
                    {
                        v17 = sub_408600();
                    }
                    if (v17 == 0 || v15 != 0)
                    {
                        v18 = v14->field_8;
                        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=((Load(addr=(rdi<8> + 0x38<64>), size=8, endness=Iend_LE) + ((rsi<8> + (rsi<8> << 0x1<8>)) << 0x3<8>)) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                        {
                            v19 = sub_408600();
                            if (v19 == 0)
                            {
                                v20 = sub_408600();
                            }
                        }
                    }
                }
                else if (v15 == 0)
                {
                    v16 = sub_408600();
                }
            }
            if (v19 == 0 && v1->field_8 > 1 && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=((Load(addr=(rdi<8> + 0x38<64>), size=8, endness=Iend_LE) + ((rsi<8> + (rsi<8> << 0x1<8>)) << 0x3<8>)) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)) && v9 != v10->field_10[v23] && (*((char *)((v13 << 4) + *(v8) + 8)) & 8) != 0 && (v17 == 0 || v15 != 0) && v20 != 0 || v1->field_8 <= 1 && v15 == 0 && v9 != v10->field_10[v23] && (*((char *)((v13 << 4) + *(v8) + 8)) & 8) != 0 && v16 != 0 || v15 == 0 && v1->field_8 > 1 && v9 != v10->field_10[v23] && (*((char *)((v13 << 4) + *(v8) + 8)) & 8) != 0 && v17 != 0)
            {
                if ((int)v0 == 0)
                {
                    v22 = v10->field_8;
                }
                else
                {
                    v0 = sub_4090b0();
                    free(v4);
                    return v0;
                }
            }
            if (...)
            {
                v23 += 1;
                if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Load(addr=((Load(addr=(rdi<8> + 0x38<64>), size=8, endness=Iend_LE) + ((rsi<8> + (rsi<8> << 0x1<8>)) << 0x3<8>)) + 0x8<64>), size=8, endness=Iend_LE), 0x0<64>, cc_ndep<8>)))
                {
                    do
                    {
                        if (sub_408600() == 0)
                        {
                            v26 = (unsigned long long)(unsigned int)sub_408600() - 1;
                            if (v26 < v27 && !((char)(v26 - 1 >> 63)))
                            {
                                *((unsigned long *)(v6 + 8)) = v27 - 1;
                                sub_408770();
                            }
                        }
                    }
                    while (v10->field_8 > r9<8> + 1);
                }
            }
        }
    }
    free(NULL);
    return 0;
}

extern unsigned long long g_41505a;

int sub_4069d0()
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
        v5 = &g_41505a;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_4147f0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

int sub_405190()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_404fe0();
}

int sub_40be40()
{
    unsigned long long v1;  // rdi
    char *v3;  // rsi
    char *v4;  // rbx
    unsigned long long v5;  // rax

    v4 = v3;
    v5 = strlen(v3);
    if (v5 == 1)
    {
        *((unsigned long long *)(v1 + ((unsigned int)((unsigned long long)*(v4) >> 3) & 24))) = *((long long *)(v1 + ((unsigned int)((unsigned long long)*(v4) >> 3) & 24))) | v5 << (*(v4) & 63);
        return 0;
    }
    return 3;
}

extern unsigned long long g_61b7b0;

int sub_402bb0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_61b7b0 = v1;
    return v2;
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

extern unsigned int g_4170e0;
extern unsigned int g_417124;

int sub_406300()
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
    char *v15[3];  // r12
    char v16[2];  // rdx
    unsigned int v17;  // eax
    unsigned long long v18;  // rax
    unsigned long long|char * v19;  // rdx
    unsigned long long v20;  // rax
    unsigned int v22;  // r9d
    unsigned long long v23;  // rax
    unsigned long long|unsigned int v24;  // r9
    unsigned long long|unsigned long long *|char *[3] v26;  // rax
    unsigned long long *v27;  // rdx
    char *v29[3];  // rax
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
    unsigned long long|unsigned int v42;  // rdx
    unsigned int v44;  // eax
    unsigned long long v45;  // r14
    unsigned int|unsigned long v46;  // rbp
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
    char v58[3];  // rax
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
        if (!(v17 != 0))
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
        if (v17 == 0 || v0->field_18 == 0)
        {
            v0->field_30 = v17;
            v0->field_2c = v17;
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
        if (v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)
        {
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13<8>);
        }
        if (*(v19) == 0 || v19 == 0 && v17 == 0 || v19 == 0 && v0->field_18 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || ((char)(v18 - 43) & 253) == 0 && v8->field_20 == 0 && v17 != 0 && v0->field_18 != 0)
        {
            v26 = (unsigned long long)v0->field_0;
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
                v27 = (unsigned long long)v0->field_30;
                if (v0->field_2c != v0->field_30)
                {
                    if (v8->field_0 != v8->field_30)
                    {
                        v5 = v24;
                        sub_405c00();
                        v27 = (unsigned long long)v0->field_0;
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
                        v30 = *((long long *)((char *)v15 + 0x8 * v29));
                        v31 = v29;
                        v27 = (unsigned int)v29;
                        if (*((char *)*((long long *)((char *)v15 + 0x8 * v29))) == 45 && v30[1] != 0)
                        {
                            v26 = v0->field_0;
                        }
                        if (v30[1] == 0 || *((char *)*((long long *)((char *)v15 + 0x8 * v29))) != 45)
                        {
                            v27 = (char *)v31 + 1;
                            v29 = (char *)v29 + 1;
                            v0->field_0 = (unsigned int)v31 + 1;
                            if ((unsigned int)v13 <= (unsigned int)v29)
                            {
                                break;
                            }
                        }
                    }
                    if (v30[1] == 0 || *((char *)*((long long *)((char *)v15 + 0x8 * v29))) != 45)
                    {
                        v26 = v27;
                    }
                    else if (*((char *)*((long long *)((char *)v15 + 0x8 * v29))) == 45 && v30[1] != 0)
                    {
                        *((unsigned long long **)&v0->field_30) = v27;
                    }
                }
                v26 = v27;
                *((unsigned long long **)&v0->field_30) = v27;
            }
            if ((unsigned int)v13 != (unsigned int)v26)
            {
                v32 = 3;
                v33 = "-";
                v48 = *((long long *)((char *)v15 + 0x8 * v26));
                v34 = *((long long *)((char *)v15 + 0x8 * v26));
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
                            sub_405c00();
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
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        *((unsigned long long *)&v0->field_0) = v42;
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_405ce0();
        if ((unsigned int)v45 == -1)
        {
            v48 = v15[(long long)(int)v0->field_0];
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
                    v53 = v15[(long long)(int)v8->field_0];
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x4170e0, 0x5);
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
            dcgettext(0x0, 0x417124, 0x5);
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
                v58 = v15[(long long)(int)v8->field_0];
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v58;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    dcgettext(0x0, 0x4170e0, 0x5);
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
        v45 = (unsigned int)sub_405ce0();
    }
    v63 = v45;
    return v63;
}

int sub_40c8a0() { crash_skku_timeout;
}
extern unsigned int g_416952;
extern unsigned int g_41697d;
extern unsigned int g_416bb0;

int sub_404f60()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x416952, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41697d, 0x5));
    dcgettext(0x0, 0x416bb0, 0x5);
}

int sub_40ef10() { crash_skku;
}
int sub_404a00()
{
}

int sub_4046f0()
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
    return sub_4041d0();
}

int sub_4146d0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r8

    v1 = 1;
    v0 = v3;
    return sub_413ec0();
}

int sub_404a20()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[32];
    unsigned long long field_40;
    char padding_48[67];
    char field_8b;
    char padding_8c[4];
    unsigned int field_90;
} struct_0;

int sub_406ee0()
{
    unsigned long v1;  // rsi
    unsigned long v2;  // rbp
    struct_0 *v3;  // rdi
    struct_0 *v4;  // rbx
    unsigned long long v7;  // rax
    void *v8;  // rdi
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax

    v2 = v1;
    v4 = v3;
    if (v3->field_90 > 1 && v1 <= 2305843009213693951)
    {
        v7 = realloc(v3->field_10, v1 * 4);
        if (v7 != 0)
        {
            v8 = v4->field_18;
            v4->field_10 = v7;
            if (v8 != 0)
            {
                v9 = realloc(v8, v2 * 8);
                if (v9 != 0)
                {
                    v4->field_18 = v9;
                }
            }
        }
    }
    if (v4->field_8b != 0 && (v3->field_90 <= 1 || v1 <= 2305843009213693951) && (v3->field_90 <= 1 || v7 != 0) && (v3->field_90 <= 1 || v8 == 0 || v9 != 0))
    {
        v10 = realloc(v4->field_8, v2);
        if (v10 != 0)
        {
            v4->field_8 = v10;
        }
    }
    if ((v3->field_90 <= 1 || v1 <= 2305843009213693951) && (v4->field_8b == 0 || v10 != 0) && (v3->field_90 <= 1 || v7 != 0) && (v3->field_90 <= 1 || v8 == 0 || v9 != 0))
    {
        v4->field_40 = v2;
        return 0;
    }
    return 12;
}

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[24];
    char field_28;
    char padding_29[7];
    char field_30;
} struct_0;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[24];
    unsigned long long field_28;
    char field_30;
} struct_3;

int sub_4087a0()
{
    void tmp_45;  // tmp #45
    struct_0 *v1;  // rsi
    unsigned long long v2[29];  // rdi
    unsigned long long *v3;  // rax
    struct_3 *v4;  // rax
    unsigned long long v5;  // rcx
    unsigned long long v6;  // rax
    unsigned long long v7[29];  // rdi

    if (!(v1->field_30 != 4))
    {
        v3 = v2[28];
        if (v2[28] != 0)
        {
            tmp_45 = 1 << ((char)v3[(long long)*((int *)&v1->field_28)] & 31);
            *((unsigned long long *)&v1->field_28) = v3[(long long)*((int *)&v1->field_28)];
            v2[20] = v2[20] | tmp_45;
            return 0;
        }
    }
    else if (v1->field_30 == 17)
    {
        v4 = v1->field_8;
        if (v1->field_8 != 0 && v1->field_8->field_30 == 17)
        {
            v5 = v4->field_28;
            v6 = v4->field_8;
            v1->field_8 = &v1->field_8->field_8;
            if (v6 != 0)
            {
                v1->field_8->field_8->field_0 = v1;
            }
            *((long long *)(v7[28] + v1->field_8->field_28 * 8)) = *((long long *)(v7[28] + *((long long *)&v1->field_28) * 8));
            if (v5 <= 63)
            {
                v7[20] = v7[20] & (-2 << (v5 & 63) | -2 >> 64 - (v5 & 63));
            }
        }
    }
    if (v2[28] == 0 || v1->field_30 != 4)
    {
        return 0;
    }
}

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_4096a0()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4[3];  // rsi
    unsigned long v5;  // rdx
    struct_0 *v6;  // rdi
    unsigned long long v7;  // r12
    struct_0 *v8;  // rbp
    unsigned long long v9;  // rbx
    void *v11;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rbx
    unsigned long long v16;  // r12

    v5 = v4[1];
    *((unsigned long long [3])&v6->field_8) = v4[1];
    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rdx<8>, 0x0<64>, cc_ndep<8>)))
    {
        v2 = v7;
        v1 = stack_base + 0;
        v8 = v6;
        v0 = v9;
        *((unsigned long *)&v6->field_0) = v5;
        v11 = malloc(v5 * 8);
        v6->field_10 = v11;
        if (v11 != 0)
        {
            memcpy(v11, v4[2], v5 * 8);
            v14 = 0;
        }
        else
        {
            v8->field_8 = 0;
            v14 = 12;
            *((long long *)&v8->field_0) = 0;
        }
        v15 = v0;
        v16 = v2;
        return v14;
    }
    v6->field_10 = 0;
    *((int128_t *)&v6->field_0) = 0;
    return 0;
}

extern unsigned long long g_61b948;

int sub_413de0()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdi

    v1 = g_61b948;
    g_61b948 = v2;
    return v1;
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[107];
    char field_8b;
} struct_0;

int sub_408230()
{
    struct_0 *v1;  // rdi
    struct_0 *v2;  // rbx

    v2 = v1;
    free(v1->field_10);
    if (v2->field_8b == 0)
    {
        return (unsigned long long)free(v2->field_18);
    }
}

int sub_404890()
{
}

int sub_404680()
{
}

typedef struct struct_0 {
    char padding_0[56];
    char field_38;
} struct_0;

int sub_414630()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // r8
    unsigned long v7;  // r14
    unsigned long v8;  // r13
    unsigned long v9;  // r12
    unsigned long v10;  // rbx
    char *v12;  // rsi

    if (((unsigned int)v6 & -8) == 0)
    {
        v4 = v7;
        v3 = v8;
        v2 = v9;
        v1 = stack_base + 0;
        v0 = v10;
        if ((v6 & 4) == 0)
        {
            strlen(v12);
        }
    }
    else
    {
        return 2;
    }
}

int sub_40a1e0()
{
    unsigned long v0;  // [bp-0x178]
    unsigned long long *v1;  // [bp-0x50]
    unsigned long long *|unsigned long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v5[32];  // rdi
    unsigned long long v6[21];  // r12
    unsigned long long *v7;  // rsi
    unsigned long long v8[32];  // r15
    unsigned long long v9;  // rcx
    unsigned long long v11;  // rbp
    unsigned long long *v12;  // rax
    unsigned long long v13;  // rax
    unsigned long v14;  // rcx
    unsigned long long v15;  // r9
    unsigned long long v16;  // rbx
    unsigned long long v17[2];  // rax
    unsigned long long **v18;  // rdx
    unsigned long long v19;  // rax

    v6 = v5[19];
    if (*(v7) > 0)
    {
        v8 = v5;
        v16 = 0;
        while (true)
        {
            v11 = (*(v18))[v16];
            v12 = (*(v18))[v16] * 16 + *(v6);
            if (*((char *)(((*(v18))[v16] << 4) + *(v6) + 8)) == 8)
            {
                v13 = *(v12);
                if (v13 <= 63)
                {
                    *((unsigned long long [21])&v0) = v6[20];
                    if (((char)((char)*(&((char *)stack_base)[((v13 & 63) >> 3) + -376]) >> (unsigned long long)(char)(v13 & 63 & 7)) & 1) != 0)
                    {
                        v14 = v8[29];
                        v15 = v8[31];
                        if (v8[29] == v8[30])
                        {
                            v1 = v18;
                            v2 = v14 * 2;
                            v15 = realloc(v5[31], v14 * 16);
                            if (v15 != 0)
                            {
                                v8[31] = v15;
                                v14 = v8[29];
                                v8[30] = v2;
                            }
                        }
                        if (v15 != 0 || v8[29] != v8[30])
                        {
                            v2 = v15;
                            v1 = v14;
                            v3 = v3;
                            v17 = calloc(0x1, 0x30);
                            *((unsigned long long *[2])((char *)v2 + 0x8 * v1)) = v17;
                            if (v17 != 0)
                            {
                                v17[0] = v9;
                                v18 = v3;
                                v16 += 1;
                                v17[1] = v11;
                                v8[29] = (char *)v1 + 1;
                            }
                        }
                        if (v17 == 0 || v15 == 0 && v8[29] == v8[30])
                        {
                            v19 = 12;
                        }
                    }
                }
            }
            if (((char)((char)*(&((char *)stack_base)[((v13 & 63) >> 3) + -376]) >> (unsigned long long)(char)(v13 & 63 & 7)) & 1) == 0 || v13 > 63 || *((char *)(((*(v18))[v16] << 4) + *(v6) + 8)) != 8)
            {
                v16 += 1;
                if (v16 >= *(v7))
                {
                    break;
                }
            }
        }
        if (((char)((char)*(&((char *)stack_base)[((v13 & 63) >> 3) + -376]) >> (unsigned long long)(char)(v13 & 63 & 7)) & 1) == 0 || v13 > 63 || *((char *)(((*(v18))[v16] << 4) + *(v6) + 8)) != 8 || v16 >= *(v7) && v17 != 0)
        {
            v19 = 0;
        }
        else if (v17 == 0 || v15 == 0 && v13 <= 63 && v8[29] == v8[30] && *((char *)(((*(v18))[v16] << 4) + *(v6) + 8)) == 8 && ((char)((char)*(&((char *)stack_base)[((v13 & 63) >> 3) + -376]) >> (unsigned long long)(char)(v13 & 63 & 7)) & 1) != 0)
        {
            return v19;
        }
    }
    v19 = 0;
    return v19;
}

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
} struct_4;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
} struct_5;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

typedef struct struct_6 {
    char padding_0[8];
    unsigned int field_8;
    char field_a;
} struct_6;

int sub_407f40()
{
    unsigned long long *v0;  // [bp-0x48]
    unsigned long v1;  // [bp-0x40]
    unsigned long long v3;  // rsi
    unsigned long long *v4;  // r9
    unsigned long long v5;  // rdx
    unsigned int v6;  // r8d
    unsigned long long v7;  // rdi
    unsigned long long v8[6];  // rbx
    unsigned long v9;  // rcx
    unsigned long long v10;  // rcx
    unsigned long long v11;  // rdi
    unsigned long long *v12;  // r14
    struct_4 *v13;  // rax
    unsigned long long *v14;  // r14
    struct_5 *v15;  // r8
    unsigned long long v16;  // rsi
    unsigned long long *v17;  // r15
    unsigned long long *v18;  // r9
    struct_2 *v20;  // rdi
    unsigned long long *v21;  // r15
    unsigned long long|unsigned long long * v22;  // r13
    unsigned long long v24;  // rsi
    struct_6 *v25;  // rax
    unsigned long long|unsigned int v26;  // r12
    unsigned long long v27;  // rdx
    unsigned long long *v28;  // r8
    unsigned long long v29;  // rcx
    unsigned long long v30;  // cc_dep1
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // r13
    unsigned long long v34;  // rax
    unsigned long long v36;  // rdx
    unsigned long long v37;  // rax

    v4 = v3;
    v22 = v5;
    v26 = v6;
    v8 = v7;
    v1 = v9;
    while (true)
    {
        v10 = *(v8);
        v11 = v8[5];
        v12 = v22;
        v13 = v4 * 16 + *(v8);
        if (*((char *)((v4 << 4) + *(v8) + 8)) != 4)
        {
            v14 = v4 * 24;
            v15 = v11 + v4 * 24;
            v16 = *((long long *)(v11 + v4 * 24 + 8));
            if (*((long long *)(v11 + ((char *)v4 + 0x2 * v4 << 3) + 8)) != 0)
            {
                v20 = v11 + v22 * 24;
                v21 = *((long long *)v15->field_10);
                v20->field_8 = 0;
                if (v16 != 1)
                {
                    v24 = v8[2] - 1;
                    v25 = (v8[2] - 1) * 16 + v10;
                    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && (*((char *)((v8[2] - 1 << 4) + v10 + 10)) & 4) != 0)
                    {
                        v27 = v8[2] * 16;
                        v28 = v8[4];
                        v29 = &((struct struct_6 *)&(struct struct_6 *)(v10 + -0x1 * v25)->padding_0[v27])[-3].padding_0[7];
                        while (true)
                        {
                            if (v28[v24] == v4 && v26 == ((unsigned int)((unsigned long long)v25->field_8 >> 8) & 1023))
                            {
                                v32 = sub_406ff0();
                                break;
                            }
                            if (v28[v24] != v4 || v26 != ((unsigned int)((unsigned long long)v25->field_8 >> 8) & 1023))
                            {
                                v25 = &v25->padding_0[v29];
                                v24 -= 1;
                                v30 = (char)(*(&((char *)&v25->field_8)[2]) & 4);
                                if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) || (char)v30 == 0)
                                {
                                    break;
                                }
                            }
                        }
                        if (v28[v24] != v4 || v26 != ((unsigned int)((unsigned long long)v25->field_8 >> 8) & 1023))
                        {
                            v33 = (unsigned int)sub_407ea0();
                        }
                        else if (v28[v24] == v4 && v26 == ((unsigned int)((unsigned long long)v25->field_8 >> 8) & 1023))
                        {
                            v0 = *((long long *)(*((long long *)&((char *)v14)[16 + v8[5]]) + 8));
                            v22 = (unsigned int)sub_407ea0();
                        }
                        else if (v28[v24] == v4 && v26 == ((unsigned int)((unsigned long long)v25->field_8 >> 8) & 1023))
                        {
                            v37 = 12;
                        }
                    }
                    if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) || (*((char *)((v8[2] - 1 << 4) + v10 + 10)) & 4) == 0 || v33 != -1)
                    {
                        v33 = (unsigned int)sub_407ea0();
                    }
                    if (v33 != -1)
                    {
                        v34 = sub_406ff0();
                        if (v34 != 0)
                        {
                            v37 = sub_407f40();
                        }
                        if (((unsigned int)v37 == 0 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))) && ((unsigned int)v37 == 0 || (*((char *)((v8[2] - 1 << 4) + v10 + 10)) & 4) != 0) && (v34 != 0 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))) && (v34 != 0 || (*((char *)((v8[2] - 1 << 4) + v10 + 10)) & 4) != 0))
                        {
                            v0 = *((long long *)(*((long long *)&((char *)v14)[16 + v8[5]]) + 8));
                            v22 = (unsigned int)sub_407ea0();
                        }
                    }
                }
                else
                {
                    if (v4 == v1 && v4 != v22)
                    {
                        v36 = (unsigned int)sub_406ff0();
                        v37 = 0;
                        if (v36 != 0)
                        {
                            break;
                        }
                    }
                    if (v4 == v22 || v4 != v1)
                    {
                        v26 |= (unsigned int)((unsigned long long)v13->field_8 >> 8) & 1023;
                        v22 = (unsigned long long)(unsigned int)sub_407ea0();
                        if (v22 != -1)
                        {
                            v31 = sub_406ff0();
                            if (v31 != 0)
                            {
                                v4 = v21;
                            }
                        }
                    }
                }
            }
            else
            {
                *((long long *)(v8[3] + v22 * 8)) = *((long long *)(v8[3] + v4 * 8));
                v37 = 0;
            }
        }
        else
        {
            v17 = v4 * 8;
            v18 = *((long long *)(v8[3] + v4 * 8));
            *((long long *)(v11 + v22 * 24 + 8)) = 0;
            v0 = v18;
            v22 = (unsigned int)sub_407ea0();
            if (v22 != -1)
            {
                v0 = v0;
                *((long long *)(v8[3] + v12 * 8)) = *((long long *)&((char *)v17)[v8[3]]);
            }
        }
        if (*((char *)((v4 << 4) + *(v8) + 8)) != 4 && *((long long *)(v11 + ((char *)v4 + 0x2 * v4 << 3) + 8)) != 0 && v16 != 1 && v33 != -1 && ((unsigned int)v37 == 0 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))) && ((unsigned int)v37 == 0 || (*((char *)((v8[2] - 1 << 4) + v10 + 10)) & 4) != 0) && (v34 != 0 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>))) && (v34 != 0 || (*((char *)((v8[2] - 1 << 4) + v10 + 10)) & 4) != 0) && v22 != -1 || *((char *)((v4 << 4) + *(v8) + 8)) == 4 && v22 != -1)
        {
            v4 = v0;
        }
        if (...)
        {
            v37 = 12;
        }
    }
    return v37;
}

int sub_4069b0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_406300();
}

int sub_414790()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_405ae0();
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

int sub_402cf8() { crash_skku;
}
extern char g_61b7a8;

int sub_402bc0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_61b7a8 = v1;
    return v2;
}

int sub_4049b0()
{
}

int sub_414730()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x10]
    unsigned long v4;  // [bp+0x8]
    unsigned long v5;  // [bp+0x10]
    unsigned long v6;  // [bp+0x18]

    v3 = 0;
    v2 = v6;
    v1 = v5;
    v0 = v4;
    return sub_414320();
}

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
} struct_0;

int sub_411340()
{
    struct_0 *v1;  // rbx

    v1->field_8 = 5;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_0;

int sub_411420()
{
    char v2;  // r15b
    unsigned long v3;  // r12
    unsigned long long v4;  // r12
    unsigned long long v5[12];  // r13
    struct_0 *v7;  // rbx

    if ((v2 & 8) == 0)
    {
        v4 = v3 + 1;
        if (v4 != v5[11])
        {
            v5[9] = v4;
            sub_4110c0();
            v5[9] = v5[9] - 1;
        }
    }
    v7->field_8 = 12;
    v7->field_0 = 32;
}

typedef struct struct_0 {
    uint128_t field_0;
    unsigned long long field_10;
} struct_0;

int sub_402cb0()
{
    struct_0 *v1;  // rdi
    unsigned long v2;  // rax

    v1->field_10 = 0;
    v1->field_0 = 0;
    return v2;
}

typedef struct struct_4 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[32];
    unsigned long long field_30;
    char padding_38[16];
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    char padding_60[56];
    struct struct_3 *field_98;
    char padding_a0[24];
    unsigned long long field_b8;
    char padding_c0[8];
    unsigned long long field_c8;
    char padding_d0[8];
    unsigned long long field_d8;
    char padding_e0[8];
    unsigned long long field_e8;
    char padding_f0[8];
    unsigned long long field_f8;
} struct_4;

typedef struct struct_6 {
    char padding_0[8];
    unsigned int field_8;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    struct struct_0 **field_28;
} struct_7;

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_5 {
    char padding_0[16];
    unsigned long long field_10;
} struct_5;

int sub_40e1a0()
{
    unsigned long long v0;  // [bp-0xf8]
    void tmp_15;  // tmp #15
    unsigned long long v1;  // [bp-0xe0]
    unsigned long long|unsigned long v2;  // [bp-0xd8]
    unsigned long long|unsigned long v3;  // [bp-0xd0]
    unsigned long|unsigned long long|char *|struct_0 * v4;  // [bp-0xc8]
    unsigned long long *|unsigned int|unsigned long v5;  // [bp-0xc0]
    unsigned long long *|unsigned long|struct_0 * v6;  // [bp-0xb8]
    unsigned long long v7[7];  // [bp-0xb0]
    unsigned long long|unsigned long long *|unsigned long v8;  // [bp-0xa8]
    unsigned long long *v9;  // [bp-0xa0]
    unsigned long long *v10;  // [bp-0x98]
    struct struct_5 **v11;  // [bp-0x90]
    unsigned long v12;  // [bp-0x88]
    unsigned long long *v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x70]
    unsigned int v16;  // [bp-0x5c]
    char v17;  // [bp-0x48]
    unsigned long long v19[32];  // rdi
    struct_4 *v20;  // r14
    unsigned long long v21;  // r15
    unsigned long long *v22;  // rsi
    unsigned long v23;  // rdx
    unsigned long long v24;  // r13
    unsigned long long *v25;  // rbp
    struct_6 *v26;  // rax
    unsigned long v28;  // rbx
    unsigned int v30;  // ecx
    unsigned long long v33;  // rbx
    unsigned long long v34;  // rcx
    unsigned long long v35;  // rax
    unsigned long long v36;  // r8
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rdi
    unsigned long long *v40;  // rax
    struct_7 *v41;  // rbx
    unsigned long long *v42;  // rcx
    struct_0 *v43;  // r9
    unsigned long v44;  // rdx
    unsigned long long v45;  // rax
    unsigned long long v46;  // rbp
    unsigned long long v47;  // r8
    unsigned long long v48;  // r12
    unsigned long long v49;  // r10
    unsigned long long|unsigned long long * v50;  // r12
    unsigned long long *v51;  // r13
    unsigned long long v52;  // r15
    unsigned long long|char * v53;  // r15
    unsigned long long v54;  // rax
    unsigned long long v55;  // rax
    unsigned long long v56[4];  // rax
    unsigned long long v57;  // rcx
    unsigned long long v58;  // rdi
    unsigned long long v59;  // rdx
    unsigned long long v60;  // rsi
    unsigned long long v61;  // rbp
    unsigned long long *v62;  // rax
    unsigned long long v64;  // rsi
    unsigned long long v65;  // rax
    unsigned long long v66;  // rax
    unsigned long long v67[2];  // rax
    unsigned long long *v69;  // rdx
    unsigned long long v70;  // r15
    unsigned long long v71;  // r13
    unsigned long long v72[7];  // r12
    unsigned long long v73[32];  // rax
    unsigned long long v74;  // r14
    unsigned long long v76[4];  // rax
    unsigned long long v77;  // rbp
    unsigned long long v78;  // rax
    unsigned long long v79;  // rdx
    unsigned long long *v80;  // rbp
    unsigned long long v82;  // r11
    struct_5 *v83;  // rax
    struct struct_5 **v84;  // rdx

    v20 = v19;
    v21 = v19[9];
    v10 = v22;
    v9 = v23;
    *((unsigned long long [32])&v7[0]) = v19[19];
    *((unsigned long long [32])&v11) = v19[9] * 8;
    v1 = 0;
    if (*(v22) > 0)
    {
        while (true)
        {
            v24 = *((long long *)(*(v9) + v1 * 8));
            v25 = *((long long *)(*(v9) + v1 * 8)) * 16;
            v26 = *(v7) + *((long long *)(*(v9) + v1 * 8)) * 16;
            if (*((char *)(*(v7) + (*((long long *)(*(v9) + (v1 << 3))) << 4) + 8)) == 4)
            {
                if ((v26->field_8 & 0x3ff00) != 0)
                {
                    v28 = (unsigned long long)v26->field_8 % 0x100;
                    v30 = rbx<8>;
                }
                if ((v26->field_8 & 0x3ff00) == 0 || (sub_40a330() & 1) == 0 && (bl<1> & 4) == 0 && ((char)rcx<4> & 128) == 0 && ((unsigned short)rbx<8> & 1023 & 32) == 0 || ((char)rbx<8> & 8) == 0 && ((char)rcx<4> & 128) == 0 && ((unsigned short)rbx<8> & 1023 & 32) == 0 && (sub_40a330() & 1) != 0 || (sub_40a330() & 1) == 0 && (bl<1> & 4) == 0 && ((char)rcx<4> & 128) == 0 && (sub_40a330() & 2) != 0 || (sub_40a330() & 1) == 0 && (bl<1> & 4) == 0 && ((unsigned short)rbx<8> & 1023 & 32) == 0 && (sub_40a330() & 8) != 0 || ((char)rbx<8> & 8) == 0 && ((char)rcx<4> & 128) == 0 && (sub_40a330() & 1) != 0 && (sub_40a330() & 2) != 0 || ((char)rbx<8> & 8) == 0 && ((unsigned short)rbx<8> & 1023 & 32) == 0 && (sub_40a330() & 1) != 0 && (sub_40a330() & 8) != 0 || (sub_40a330() & 1) == 0 && (bl<1> & 4) == 0 && (sub_40a330() & 8) != 0 && (sub_40a330() & 2) != 0 || ((char)rbx<8> & 8) == 0 && (sub_40a330() & 1) != 0 && (sub_40a330() & 8) != 0 && (sub_40a330() & 2) != 0)
                {
                    v33 = v20->field_c8;
                    v34 = 0;
                    for (v35 = v20->field_c8; v34 < v35; v35 = v37)
                    {
                        v36 = v20->field_d8;
                        if (v3 > *((long long *)(v20->field_d8 + (((v34 + v35 >> 63) + v34 + v35 >> 1) + ((v34 + v35 >> 63) + v34 + v35 >> 1 << 2) << 3) + 8)))
                        {
                            v39 = v37;
                            v37 = v35;
                        }
                        else
                        {
                            for (v37 = (v34 + v35 >> 63) + v34 + v35 >> 1; v37 > 0; v37 = v38)
                            {
                                v38 = (v37 + 0 >> 63) + v37 + 0 >> 1;
                                v39 = (v37 + 0 >> 63) + v37 + 0 >> 1;
                                if (v3 > *((long long *)(v36 + (((v37 + 0 >> 63) + v37 + 0 >> 1) + ((v37 + 0 >> 63) + v37 + 0 >> 1 << 2) << 3) + 8)))
                                {
                                    break;
                                }
                            }
                            if (v37 > 0)
                            {
                                v34 = v39 + 1;
                            }
                        }
                        v34 = v39 + 1;
                    }
                    v40 = v20->field_d8 + v34 * 40;
                    if (*((long long *)(v20->field_d8 + (v34 + (v34 << 2) << 3) + 8)) == v3 && v34 != -1)
                    {
                        while (v8 != *(v40))
                        {
                            v40 = &v40[5];
                            if ((char)v40[-1] == 0)
                            {
                                break;
                            }
                        }
                        if (true)
                        {
                            v16 = 0;
                        }
                        else if (v8 != *(v40))
                        {
                            v69 = *(v20->field_98);
                            v13 = &v20->field_98->field_0;
                            v12 = *((long long *)&((char *)v25)[*(v20->field_98)]);
                        }
                    }
                    v69 = *(v20->field_98);
                    v13 = &v20->field_98->field_0;
                    v12 = *((long long *)&((char *)v25)[*(v20->field_98)]);
                    if (v20->field_e8 <= 0 || *((long long *)(v20->field_d8 + (v34 + (v34 << 2) << 3) + 8)) == v3 && v34 != -1)
                    {
                        v16 = 0;
                    }
                    if (v20->field_e8 > 0)
                    {
                        v3 = v21;
                        v2 = 0;
                        v4 = v20->field_8;
                        v8 = v24;
                        v14 = v33;
                        while (true)
                        {
                            v41 = *((long long *)(v20->field_f8 + v2 * 8));
                            if (v12 == v69[2 * *((long long *)(*((long long *)(v20->field_f8 + (v2 << 3))) + 8))])
                            {
                                v50 = v41->field_0;
                                v49 = v3;
                                if (v41->field_20 > 0)
                                {
                                    v42 = v50;
                                    v46 = 0;
                                    v48 = v4;
                                    v47 = v3;
                                    while (true)
                                    {
                                        v43 = v41->field_28[v46];
                                        v51 = v41->field_28[v46]->field_8;
                                        v44 = v41->field_28[v46]->field_8 + -0x1 * v42;
                                        v52 = (char *)(v41->field_28[v46]->field_8 + -0x1 * v42) + v47;
                                        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))
                                        {
                                            if (v20->field_30 < v52)
                                            {
                                                v5 = v44;
                                                v4 = v43;
                                                if (v20->field_58 >= v52)
                                                {
                                                    v15 = v47;
                                                    v6 = v42;
                                                    v54 = sub_407bd0();
                                                    if ((unsigned int)v54 != 0)
                                                    {
                                                        break;
                                                    }
                                                    v48 = v20->field_8;
                                                    v44 = v5;
                                                    v43 = v4;
                                                    v47 = v15;
                                                    v42 = v6;
                                                }
                                            }
                                            if (v20->field_58 >= v52 || v20->field_30 >= v52)
                                            {
                                                v6 = v43;
                                                v5 = v42;
                                                v4 = v47;
                                                v45 = memcmp(v48 + v47, v48 + (char *)v42, v44);
                                                v47 = v4;
                                                v42 = v5;
                                            }
                                            if ((v20->field_58 < v52 || v45 != 0) && (v20->field_30 < v52 || v45 != 0))
                                            {
                                                v4 = v48;
                                                v49 = v47;
                                                v50 = v42;
                                                if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>) || v41->field_20 > v46)
                                                {
                                                    break;
                                                }
                                                v51 = v42;
                                                v52 = v47;
                                            }
                                        }
                                        if ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>) || v45 == 0 && v20->field_58 >= v52 || v45 == 0 && v20->field_30 >= v52)
                                        {
                                            v54 = sub_40e000();
                                            v48 = v20->field_8;
                                        }
                                        if ((v45 == 0 || (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) && (unsigned int)v54 <= 1 && ((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>) || v20->field_58 >= v52 || v20->field_30 >= v52))
                                        {
                                            v46 += 1;
                                            v42 = v51;
                                            v47 = v52;
                                            v4 = v48;
                                        }
                                        if ((unsigned int)v54 <= 1)
                                        {
                                            v50 = (char *)v51 + 1;
                                            v49 = v52;
                                        }
                                    }
                                    if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) && (v20->field_58 < v52 || v45 != 0) && (v20->field_30 < v52 || v45 != 0) && (v20->field_58 < v52 || (unsigned int)v54 == 0 || v20->field_30 >= v52))
                                    {
                                        v2 += 1;
                                    }
                                    else if ((v20->field_30 < v52 || (unsigned int)v54 > 1) && (v45 == 0 || (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>) || v20->field_30 < v52) && (v20->field_58 >= v52 || (unsigned int)v54 > 1) && (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) || (unsigned int)v54 > 1) && (v45 == 0 || (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>) || v20->field_58 >= v52))
                                    {
                                        return v54;
                                    }
                                }
                                if (v3 >= v50)
                                {
                                    v53 = v49;
                                    while (true)
                                    {
                                        if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))
                                        {
                                            if (v20->field_30 <= v53)
                                            {
                                                if (v20->field_58 <= v53)
                                                {
                                                    break;
                                                }
                                                v54 = sub_407a80();
                                                if ((unsigned int)v54 != 0)
                                                {
                                                    break;
                                                }
                                                v4 = v20->field_8;
                                            }
                                            v55 = &v53[1];
                                            if (*((char *)(v4 + v53)) != *((char *)(v4 + v50 - 1)))
                                            {
                                                break;
                                            }
                                            v53 = v55;
                                        }
                                        v56 = *((long long *)(v20->field_b8 + v50 * 8));
                                        if (*((long long *)(v20->field_b8 + (v50 << 3))) != 0)
                                        {
                                            v57 = v56[2];
                                            if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))
                                            {
                                                v58 = v56[3];
                                                v59 = 0;
                                                v60 = *(v13);
                                                while (true)
                                                {
                                                    v61 = *((long long *)(v58 + v59 * 8));
                                                    v62 = *((long long *)(v58 + v59 * 8)) * 16 + v60;
                                                    if (*((char *)((*((long long *)(v58 + (v59 << 3))) << 4) + v60 + 8)) == 9 && v12 == *(v62))
                                                    {
                                                        if (v61 == -1)
                                                        {
                                                            break;
                                                        }
                                                        if (v41->field_10 == 0)
                                                        {
                                                            v5 = v41->field_0;
                                                            v64 = calloc(0x18, v50 - v5 + 1);
                                                            v41->field_10 = v64;
                                                        }
                                                        if (v41->field_10 != 0 || v64 != 0)
                                                        {
                                                            v0 = 9;
                                                            v54 = sub_40d010();
                                                            if ((unsigned int)v54 == 1)
                                                            {
                                                                break;
                                                            }
                                                            if ((unsigned int)v54 != 0)
                                                            {
                                                                break;
                                                            }
                                                            if ((unsigned int)v54 == 0)
                                                            {
                                                                v65 = v41->field_18;
                                                                if (v41->field_20 == v41->field_18)
                                                                {
                                                                    v5 = v65 * 2 + 1;
                                                                    v66 = realloc(v41->field_28, (v65 * 2 + 1) * 8);
                                                                    if (v66 != 0)
                                                                    {
                                                                        v41->field_28 = v66;
                                                                        v41->field_18 = v5;
                                                                    }
                                                                }
                                                                if (v66 != 0 || v41->field_20 != v41->field_18)
                                                                {
                                                                    v67 = calloc(0x1, 0x28);
                                                                    if (v67 != 0)
                                                                    {
                                                                        tmp_15 = v41->field_20;
                                                                        v41->field_28[v41->field_20] = &v67;
                                                                        v67[0] = v61;
                                                                        v67[1] = v50;
                                                                        v41->field_20 = tmp_15 + 1;
                                                                        sub_40e000();
                                                                    }
                                                                }
                                                            }
                                                        }
                                                        if ((v41->field_10 == 0 || (unsigned int)v54 == 0) && (v64 == 0 || (unsigned int)v54 == 0) && (v66 == 0 || v67 == 0 || v41->field_10 == 0) && (v66 == 0 || v67 == 0 || v64 == 0) && (v67 == 0 || v41->field_20 == v41->field_18 || v41->field_10 == 0) && (v67 == 0 || v41->field_20 == v41->field_18 || v64 == 0))
                                                        {
                                                            v54 = 12;
                                                        }
                                                    }
                                                    if (*((char *)((*((long long *)(v58 + (v59 << 3))) << 4) + v60 + 8)) != 9 || v12 != *(v62))
                                                    {
                                                        v59 += 1;
                                                        if (v57 == v59)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                }
                                                if (...)
                                                {
                                                    v50 = &((char *)v50)[1];
                                                }
                                                else if (...)
                                                {
                                                    return v54;
                                                }
                                            }
                                        }
                                        v50 = &((char *)v50)[1];
                                    }
                                    if (v3 < v50 || !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)))
                                    {
                                        v2 += 1;
                                    }
                                    else if (!((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, Sub(r12<8>, Load(addr=rbx<8>, size=8, endness=Iend_LE)), 0x0<64>, cc_ndep<8>)) && (*((char *)(v4 + v53)) == *((char *)(v4 + v50 - 1)) || v20->field_30 <= v53) && (v20->field_30 <= v53 || *((long long *)(v20->field_b8 + (v50 << 3))) != 0) && (v20->field_58 > v53 || v20->field_30 > v53))
                                    {
                                        return v54;
                                    }
                                }
                            }
                            v2 += 1;
                            if (v2 < v20->field_e8)
                            {
                                v69 = *(v13);
                            }
                            else
                            {
                                v70 = v3;
                                v71 = v8;
                                v16 = 0;
                                if (v14 >= v20->field_c8)
                                {
                                    break;
                                }
                                v72 = v7;
                                v8 *= 8;
                                v12 = v71 * 24;
                                v73 = v20;
                                v74 = v14;
                                while (true)
                                {
                                    v76 = *((long long *)(v74 + 216)) + v74 * 40;
                                    if (v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))))
                                    {
                                        v77 = v76[3];
                                        v78 = v76[2];
                                        v79 = v7[6];
                                        v4 = v77 - v78;
                                        if (v77 == v78)
                                        {
                                            v3 = v79 + *((long long *)*((long long *)(v72[5] + v12 + 16))) * 24;
                                        }
                                        else
                                        {
                                            v3 = v79 + *((long long *)&((char *)v8)[v72[3]]) * 24;
                                        }
                                        v80 = v77 + v70 - v78;
                                        v2 = 0;
                                        v82 = *((long long *)(v74 + 184)) + v80 * 8;
                                        v83 = *((long long *)&((char *)v11)[*((long long *)(v74 + 184))]);
                                        v84 = *((long long *)(*((long long *)(v74 + 184)) + v80 * 8));
                                        if (*((long long *)&((char *)v11)[*((long long *)(v74 + 184))]) != 0)
                                        {
                                            v2 = v83->field_10;
                                        }
                                        if (v84 != 0)
                                        {
                                            v5 = sub_40a330();
                                            v6 = v49;
                                            v16 = sub_409720();
                                            if (v16 == 0)
                                            {
                                                v5 = v6 + *((long long *)(v74 + 184));
                                                *(v5) = (unsigned int)sub_4098b0();
                                                free(*((long long *)&v17));
                                                v84 = *((long long *)(v74 + 184));
                                            }
                                            else
                                            {
                                                free(*((long long *)&v17));
                                                v54 = v16;
                                            }
                                        }
                                        else
                                        {
                                            v5 = v82;
                                            *(v5) = (unsigned int)sub_4098b0();
                                        }
                                        if (v16 == 0 || v84 == 0)
                                        {
                                            if ((*((long long *)(*((long long *)(v74 + 184)) + (v80 << 3))) == 0 || v84 == 0) && (*((long long *)((char *)v84 + 0x8 * v80)) == 0 || v84 != 0))
                                            {
                                                v54 = v16;
                                                if (v16 != 0)
                                                {
                                                    break;
                                                }
                                            }
                                            if (v4 == 0 && *((long long *)(*((long long *)(v84 + v11)) + 16)) > v2 && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0))
                                            {
                                                v2 = v3 + 16;
                                                v54 = sub_40a1e0();
                                                v16 = v54;
                                                if ((unsigned int)v54 != 0)
                                                {
                                                    break;
                                                }
                                                v54 = sub_40e1a0();
                                                v16 = v54;
                                                if ((unsigned int)v54 != 0)
                                                {
                                                    break;
                                                }
                                                v74 += 1;
                                            }
                                        }
                                    }
                                    if (v4 == 0 && v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && *((long long *)(*((long long *)(v84 + v11)) + 16)) <= v2 || v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && v4 != 0 || v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && v70 != v76[1] || v71 != *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))))
                                    {
                                        v74 += 1;
                                    }
                                    if (v4 == 0 && v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && *((long long *)(*((long long *)(v84 + v11)) + 16)) > v2 && v74 >= *((long long *)(v74 + 200)) || (v4 == 0 && v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && *((long long *)(*((long long *)(v84 + v11)) + 16)) <= v2 || v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && v4 != 0 || v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && v70 != v76[1] || v71 != *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3)))) && v74 >= *((long long *)(v74 + 200)))
                                    {
                                        v74 = v73;
                                    }
                                }
                                if (v4 == 0 && v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && *((long long *)(*((long long *)(v84 + v11)) + 16)) > v2 && (unsigned int)v54 == 0 && (unsigned int)v54 == 0 && v74 >= *((long long *)(v74 + 200)) || (v4 == 0 && v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && *((long long *)(*((long long *)(v84 + v11)) + 16)) <= v2 || v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && v4 != 0 || v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && v70 != v76[1] || v71 != *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3)))) && v74 >= *((long long *)(v74 + 200)))
                                {
                                    v1 += 1;
                                }
                                else if (v4 == 0 && v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && *((long long *)(*((long long *)(v84 + v11)) + 16)) > v2 && (unsigned int)v54 == 0 || v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (*((long long *)(*((long long *)(v74 + 184)) + (v80 << 3))) == 0 || v84 == 0) && (*((long long *)((char *)v84 + 0x8 * v80)) == 0 || v84 != 0) || v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && v16 != 0 && v84 != 0 || v4 == 0 && v70 == v76[1] && v71 == *((long long *)(*((long long *)(v74 + 216)) + (v74 + (v74 << 2) << 3))) && (v16 == 0 || v84 == 0) && (v16 == 0 || *((long long *)((char *)v84 + 0x8 * v80)) != 0) && *((long long *)(*((long long *)(v84 + v11)) + 16)) > v2)
                                {
                                    return v54;
                                }
                            }
                        }
                        if (v2 >= v20->field_e8)
                        {
                            v1 += 1;
                        }
                        else if (v3 >= v50 || v12 == v69[2 * *((long long *)(*((long long *)(v20->field_f8 + (v2 << 3))) + 8))] && v41->field_20 > 0 || v14 < v20->field_c8 && v2 >= v20->field_e8)
                        {
                            return v54;
                        }
                    }
                }
            }
            v1 += 1;
        }
        if (true)
        {
            v54 = 0;
        }
        else if (v20->field_e8 > 0)
        {
            return v54;
        }
    }
    v54 = 0;
    return v54;
}

int sub_411350()
{
}

extern int512_t g_61b8c0;

int sub_404410()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_61b8c0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_61b8c0 : v1) + 4)) = v3;
    return v2;
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[42];
    char field_32;
} struct_0;

int sub_409350()
{
    struct_0 *|char v0;  // [bp-0x30]
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    struct_0 *v7;  // rbp
    unsigned long long v8;  // rdx
    struct struct_0 **v9;  // r14
    struct_0 *v10;  // rax

    v3 = v2;
    v7 = *((long long *)v2);
    v9 = &v0;
    while (true)
    {
        v10 = sub_409270();
        v0 = v10;
        if (v10 == 0)
        {
            break;
        }
        v10->field_0 = v7;
        v7 = v0;
        v0->field_32 = v0->field_32 | 4;
        v4 = *((long long *)(v3 + 8));
        if (*((long long *)(v3 + 8)) != 0)
        {
            v9 = &v7->padding_8;
            v3 = v4;
        }
        else
        {
            v8 = 0;
            while (true)
            {
                v5 = *((long long *)(v3 + 16));
                if (*((long long *)(v3 + 16)) != 0 && v3 != v8)
                {
                    v9 = &v7->padding_8[8];
                    v3 = v5;
                }
                if (*((long long *)(v3 + 16)) == 0 || v3 == v8)
                {
                    v6 = *((long long *)v3);
                    v7 = v7->field_0;
                    v8 = v3;
                    if (*((long long *)v3) != 0)
                    {
                        v3 = v6;
                    }
                    else
                    {
                        v10 = v0;
                    }
                }
            }
            if (*((long long *)(v3 + 16)) != 0 && v3 != v8)
            {
                v10 = sub_409270();
            }
            else if (*((long long *)v3) == 0 && (*((long long *)(v3 + 16)) == 0 || v3 == v8))
            {
                return v10;
            }
        }
    }
    return v10;
}

extern unsigned long long __progname_full;
extern unsigned long long g_61b7b8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_402e00()
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
        g_61b7b8 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[8];
    unsigned long long field_18;
    char padding_20[16];
    char field_30;
    char padding_31[7];
    unsigned long long field_38;
} struct_0;

int sub_40bb50()
{
    void tmp_19;  // tmp #19
    unsigned long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    struct_0 *v3;  // rsi
    unsigned long v4;  // rbx

    if (v3->field_30 == 16)
    {
        tmp_19 = v3->field_8->field_38;
        v3->field_18 = v3->field_8->field_18;
        v3->field_38 = tmp_19;
        return 0;
    }
    v1 = stack_base + 0;
    v0 = v4;
}

int sub_413c80()
{
}

int sub_40a420()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rdi
    unsigned long v3;  // rdx
    unsigned long v4;  // rcx
    unsigned long v5;  // rsi
    unsigned long v6;  // rbx
    unsigned long v7;  // rdx
    unsigned long v8;  // rbx
    unsigned long v9;  // rbx
    unsigned long v10;  // rax
    unsigned int v11;  // edx
    unsigned long v12;  // rbx

    v4 = (char)*((char *)(*((long long *)(v2 + 8)) + v3));
    if (*((char *)(v5 + 8)) != 3)
    {
        if (!((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)))
        {
            if (*((char *)(v5 + 8)) != 5 && *((char *)(v5 + 8)) != 7)
            {
                return 0;
            }
            if ((*((char *)(v5 + 8)) == 7 || *((char *)(v5 + 8)) == 5) && (*((char *)(v5 + 8)) == 5 || *((char *)(*((long long *)(v2 + 8)) + v3)) >= 0))
            {
                if (*((char *)(*((long long *)(v2 + 8)) + v3)) != 10)
                {
                }
                else
                {
                    if ((*((char *)(*((long long *)(v2 + 152)) + 216)) & 64) == 0)
                    {
                        return 0;
                    }
                }
            }
        }
        else if (!(*((char *)(v5 + 8)) == 1))
        {
            return 0;
        }
    }
    else
    {
        if (((char)(*((long long *)(*((long long *)v5) + ((unsigned long long)v4 >> 6 << 3))) >> (v4 & 63)) & 1) == 0)
        {
            return 0;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x3<64>, cc_ndep<8>) && *((char *)(v5 + 8)) == 1 && *((char *)v5) != *((char *)(*((long long *)(v2 + 8)) + v3)) && *((char *)(v5 + 8)) != 3 || *((char *)(v5 + 8)) == 7 && *((char *)(*((long long *)(v2 + 8)) + v3)) < 0 && !((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)) && *((char *)(v5 + 8)) != 3 && *((char *)(v5 + 8)) != 5 || *((char *)(*((long long *)(v2 + 8)) + v3)) == 0 && !((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)) && *((char *)(v5 + 8)) != 3 && (*((char *)(*((long long *)(v2 + 152)) + 216)) & 128) != 0 && *((char *)(*((long long *)(v2 + 8)) + v3)) != 10 && (*((char *)(v5 + 8)) == 7 || *((char *)(v5 + 8)) == 5) && (*((char *)(v5 + 8)) == 5 || *((char *)(*((long long *)(v2 + 8)) + v3)) >= 0))
    {
        return 0;
    }
    if (*((char *)(v5 + 8)) == 3 && ((char)(*((long long *)(*((long long *)v5) + ((unsigned long long)v4 >> 6 << 3))) >> (v4 & 63)) & 1) != 0 || *((char *)v5) == *((char *)(*((long long *)(v2 + 8)) + v3)) && (char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x3<64>, cc_ndep<8>) && *((char *)(v5 + 8)) == 1 && *((char *)(v5 + 8)) != 3 || *((char *)(*((long long *)(v2 + 8)) + v3)) == 10 && (*((char *)(*((long long *)(v2 + 152)) + 216)) & 64) != 0 && !((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)) && *((char *)(v5 + 8)) != 3 && (*((char *)(v5 + 8)) == 7 || *((char *)(v5 + 8)) == 5) && (*((char *)(v5 + 8)) == 5 || *((char *)(*((long long *)(v2 + 8)) + v3)) >= 0) || !((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)) && *((char *)(v5 + 8)) != 3 && *((char *)(*((long long *)(v2 + 8)) + v3)) != 0 && *((char *)(*((long long *)(v2 + 8)) + v3)) != 10 && (*((char *)(v5 + 8)) == 7 || *((char *)(v5 + 8)) == 5) && (*((char *)(v5 + 8)) == 5 || *((char *)(*((long long *)(v2 + 8)) + v3)) >= 0) || *((char *)(*((long long *)(v2 + 8)) + v3)) == 0 && (*((char *)(*((long long *)(v2 + 152)) + 216)) & 128) == 0 && !((char)[D] amd64g_calculate_condition(0x6<64>, 0x5<64>, Conv(8->64, Load(addr=(rsi<8> + 0x8<64>), size=1, endness=Iend_LE)), 0x3<64>, cc_ndep<8>)) && *((char *)(v5 + 8)) != 3 && *((char *)(*((long long *)(v2 + 8)) + v3)) != 10 && (*((char *)(v5 + 8)) == 7 || *((char *)(v5 + 8)) == 5) && (*((char *)(v5 + 8)) == 5 || *((char *)(*((long long *)(v2 + 8)) + v3)) >= 0))
    {
        v0 = v6;
        v10 = 1;
        if (((unsigned int)*((int *)(v5 + 8)) & 0x3ff00) != 0)
        {
            v7 = (unsigned int)sub_40a330();
            if (!(((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 4) == 0))
            {
                v10 = 0;
                if ((v7 & 1) != 0 && ((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 8) != 0)
                {
                    v8 = v0;
                    return 0;
                }
            }
            else if (((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 8) != 0)
            {
                if (((char)v7 & 1) != 0)
                {
                    v9 = v0;
                    return 0;
                }
            }
            if ((((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 4) == 0 || ((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 8) == 0) && (((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 8) == 0 || ((char)v7 & 1) == 0) && (((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 4) == 0 || (v7 & 1) != 0))
            {
                if (((char)((unsigned short)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 1023) & 32) != 0)
                {
                    v10 = 0;
                }
                if (((char)((unsigned short)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 1023) & 32) == 0 || (v7 & 2) != 0)
                {
                    v11 = (unsigned int)v7 % 8 & 1;
                    v10 = (unsigned int)((v4 & 128) != 0? (unsigned int)rdx<8> : 1);
                }
            }
        }
        if (((unsigned int)*((int *)(v5 + 8)) & 0x3ff00) == 0 || ((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 8) == 0 || ((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 4) == 0 && ((char)v7 & 1) == 0 || (v7 & 1) == 0 && ((char)((unsigned long long)(unsigned int)*((int *)(v5 + 8)) >> 8) & 4) != 0)
        {
            v12 = v0;
            return v10;
        }
    }
}

int sub_402df0()
{
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[64];
    unsigned long long field_58;
    char padding_60[16];
    unsigned int field_70;
    char padding_74[12];
    unsigned long long field_80;
    char padding_88[5];
    char field_8d;
    char field_8e;
    char padding_8f[1];
    unsigned int field_90;
} struct_0;

int sub_40a330()
{
    struct_0 *v1;  // rdi
    void *v2;  // rsi
    unsigned int v3;  // edx
    void *v5;  // rax
    unsigned int v6;  // ebx
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned int v9;  // eax
    char v10;  // al

    if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
    {
        if (v1->field_58 != v2)
        {
            if (v1->field_90 > 1)
            {
                v5 = v1->field_10;
                while (true)
                {
                    v6 = *((int *)((char *)v5 + 0x4 * v2));
                    if (*((int *)((char *)v5 + 0x4 * v2)) == -1)
                    {
                        v2 -= 1;
                        if (v2 == -1)
                        {
                            break;
                        }
                    }
                    else
                    {
                        if (v1->field_8e != 0)
                        {
                            v8 = iswalnum(v6);
                            if (v6 == 95 || v8 != 0)
                            {
                                v7 = 1;
                            }
                        }
                        if (v1->field_8e == 0 || v8 == 0 && v6 != 95)
                        {
                            v7 = 0;
                            break;
                        }
                    }
                }
                if (*((int *)((char *)v5 + 0x4 * v2)) != -1)
                {
                    return v7;
                }
                else if (*((int *)((char *)v5 + 0x4 * v2)) != -1 && (v8 == 0 || v1->field_8e == 0) && (v1->field_8e == 0 || v6 != 95))
                {
                    v9 = 0;
                    v10 = v1->field_8d != 0;
                    return (unsigned long long)(unsigned int)rax<4> * 2;
                }
                else if (*((int *)((char *)v5 + 0x4 * v2)) == -1)
                {
                    return v1->field_70;
                }
            }
            else
            {
                v7 = 1;
                if (((char)(*((long long *)(v1->field_80 + ((unsigned long long)(char)*(&((char *)v2)[v1->field_8]) >> 6 << 3))) >> (*(&((char *)v2)[v1->field_8]) & 63)) & 1) == 0)
                {
                    v7 = 0;
                }
            }
            if ((((char)(*((long long *)(v1->field_80 + ((unsigned long long)(char)*(&((char *)v2)[v1->field_8]) >> 6 << 3))) >> (*(&((char *)v2)[v1->field_8]) & 63)) & 1) == 0 || v1->field_90 > 1) && (*(&((char *)v2)[v1->field_8]) == 10 || v1->field_90 > 1))
            {
                v9 = 0;
                v10 = v1->field_8d != 0;
                return (unsigned long long)(unsigned int)rax<4> * 2;
            }
        }
        else
        {
            v7 = (0 - (unsigned int)(char)((v3 & 2) < 1) & 2) + 8;
        }
        if (v1->field_58 == v2 || v1->field_90 > 1 || ((char)(*((long long *)(v1->field_80 + ((unsigned long long)(char)*(&((char *)v2)[v1->field_8]) >> 6 << 3))) >> (*(&((char *)v2)[v1->field_8]) & 63)) & 1) != 0 || *(&((char *)v2)[v1->field_8]) != 10)
        {
            return v7;
        }
    }
    if ((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>) || v1->field_58 != v2 && v1->field_90 > 1)
    {
        return v1->field_70;
    }
}

int sub_4022d8() { crash_skku;
}
int sub_404860()
{
}

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    struct struct_1 *field_20;
    char padding_28[16];
    char field_38;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[16];
    char field_38;
} struct_2;

int sub_413df0()
{
    void tmp_48;  // tmp #48
    struct_0 *v1;  // rdi
    unsigned long long v2[32];  // rbp
    unsigned long long v4[13];  // r12
    unsigned long long v5;  // rcx
    unsigned long v6;  // d
    unsigned long long *v7;  // rdi
    unsigned long long v9;  // rax

    v2 = v1->field_20;
    v4 = v1->field_0;
    tmp_48 = &v1->field_20->padding_8;
    v1->field_20->field_0 = 0;
    v2[31] = 0;
    v7 = tmp_48 & -8;
    for (v5 = (unsigned long long)((unsigned int)(unsigned long long [32])((char *)v2 + -1 * (tmp_48 & -8)) + 0x100) >> 3; v5 != 0; v7 = &v7[v6])
    {
        v5 -= 1;
        *(v7) = 0;
    }
    sub_40c8a0();
    v9 = v4[10];
    if (v4[9] != v4[10])
    {
        sub_40c8a0();
        v9 = v4[9];
    }
    if (v4[11] != v9)
    {
        sub_40c8a0();
        v9 = v4[9];
    }
    if (v4[12] != v9)
    {
        sub_40c8a0();
    }
    v1->field_38 = v1->field_38 | 8;
    return 0;
}

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
    char field_30;
    char padding_31[1];
    char field_32;
} struct_0;

int sub_406c40()
{
    struct_0 *v1;  // rsi
    unsigned long v2;  // rdi

    if (v1->field_30 == 17 && v2 == v1->field_28)
    {
        v1->field_32 = v1->field_32 | 8;
        return 0;
    }
    if (v2 != v1->field_28 || v1->field_30 != 17)
    {
        return 0;
    }
}

extern unsigned int g_415b64;
extern unsigned int g_61b2b0;
extern char g_61b7a8;
extern unsigned long long g_61b7b0;

int sub_402bd0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_414790();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_61b7a8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x415b64, 0x5);
            if (g_61b7b0 != 0)
            {
                sub_404870();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_61b7a8 != 0)
    {
        v3 = sub_414790();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_61b7a8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_61b2b0);
        error(0x0, *(v2), "%s");
    }
}

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
    struct struct_3 *field_10;
    char padding_18[8];
    struct struct_4 *field_20;
    char padding_28[8];
    char field_30;
    char padding_31[7];
    unsigned long long field_38;
} struct_1;

typedef struct struct_0 {
    char padding_0[40];
    unsigned long long field_28;
    char padding_30[128];
    char field_b0;
} struct_0;

typedef struct struct_7 {
    char padding_0[40];
    unsigned long long field_28;
} struct_7;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
} struct_2;

int sub_408330()
{
    void tmp_9;  // tmp #9
    void tmp_21;  // tmp #21
    void tmp_8;  // tmp #8
    struct_1 *v1;  // rsi
    unsigned long long v2;  // rdx
    struct_0 *v3;  // rdi
    unsigned long long v4[6];  // rdi
    unsigned long long *v5;  // rdx
    struct_7 *v6;  // rdi
    unsigned long long *v7;  // rbx
    unsigned long long *v8;  // rax
    unsigned long long *v9;  // rdx
    unsigned long long *v10;  // rbp
    unsigned long long *v11;  // rax
    struct_2 *v12;  // rdi
    unsigned long long v13;  // rbp
    unsigned long long v14;  // rax
    unsigned long long v15;  // r12
    unsigned long long v16[2];  // rax

    v2 = v1->field_38;
    switch (v1->field_30)
    {
    case 2:
        if (v1->field_20 != 0)
        {
            __assert_fail(); /* do not return */
        }
    case 4:
        *((unsigned long long *)(v4[3] + v1->field_38 * 8)) = v1->field_20->field_38;
        if (v1->field_30 == 4)
        {
            tmp_9 = v4[5];
            v9 = v2 * 3;
            v10 = v4[5] + v9 * 8;
            *((long long *)(v4[5] + v9 * 8)) = 1;
            *((long long *)(tmp_9 + v9 * 8 + 8)) = 1;
            v11 = malloc(0x8);
            *((unsigned long long **)(tmp_9 + v1->field_38 * 24 + 16)) = v11;
            if (v11 != 0)
            {
                *(v11) = v1->field_20->field_38;
                v14 = 0;
            }
            else
            {
                *((long long *)(tmp_9 + v1->field_38 * 24 + 8)) = 0;
                v14 = 12;
                *(v10) = 0;
            }
        }
    case 8: case 9: case 12:
        v5 = v2 * 3;
        tmp_21 = v6->field_28;
        v7 = v6->field_28 + v5 * 8;
        *((long long *)(v6->field_28 + v5 * 8)) = 1;
        *((long long *)(tmp_21 + v5 * 8 + 8)) = 1;
        v8 = malloc(0x8);
        *((unsigned long long **)(tmp_21 + v1->field_38 * 24 + 16)) = v8;
        if (v8 != 0)
        {
            *(v8) = v1->field_20->field_38;
            return 0;
        }
        *((long long *)(tmp_21 + v1->field_38 * 24 + 8)) = 0;
        v14 = 12;
        *(v7) = 0;
        break;
    case 10: case 11:
        v3->field_b0 = v3->field_b0 | 1;
        if (v1->field_8 != 0)
        {
            v13 = *((long long *)(v1->field_8->field_18 + 56));
        }
        else
        {
            v13 = v1->field_20->field_38;
        }
        if (v1->field_10 != 0)
        {
            v15 = v1->field_10->field_18->field_38;
        }
        else
        {
            v15 = v1->field_20->field_38;
        }
        if (!((char)[D] amd64g_calculate_condition(0x8<64>, 0x14<64>, r12<8>, 0x0<64>, cc_ndep<8>)))
        {
            *((long long *)(v3->field_28 + v1->field_38 * 24)) = 2;
            v16 = malloc(0x10);
            *((unsigned long long *[2])(tmp_8 + v1->field_38 * 24 + 16)) = v16;
            if (!(v16 != 0))
            {
                v14 = 12;
            }
            else if (v13 != v15)
            {
                *((long long *)(tmp_8 + v1->field_38 * 24 + 8)) = 2;
                if (v13 < v15)
                {
                    v16[0] = v13;
                    v16[1] = v15;
                    v14 = 0;
                }
                else
                {
                    v16[0] = v15;
                    v16[1] = v13;
                    v14 = 0;
                }
            }
            else
            {
                *((long long *)(tmp_8 + v1->field_38 * 24 + 8)) = 1;
                v16[0] = v13;
                v14 = 0;
            }
        }
        else
        {
            __assert_fail(); /* do not return */
        }
    case 16:
        v14 = 0;
        break;
    }
    if ((v1->field_30 & 8) == 0)
    {
        *((unsigned long long *)(v12->field_18 + v1->field_38 * 8)) = v1->field_20->field_38;
    }
    else
    {
        __assert_fail(); /* do not return */
    }
    if (false)
    {
        __assert_fail(); /* do not return */
    }
    return v14;
}

typedef struct struct_0 {
    char padding_0[56];
    char field_38;
} struct_0;

int sub_414750()
{
    void tmp_19;  // tmp #19
    unsigned long v1;  // rdx
    struct_0 *v2;  // rdi
    unsigned long long v3[3];  // rsi
    unsigned long v4;  // rcx
    unsigned long v5;  // r8
    struct_0 *v6;  // rdi
    unsigned long long v7[3];  // rsi
    unsigned long v8;  // rax

    if (v1 != 0)
    {
        tmp_19 = v2->field_38;
        v2->field_38 = (unsigned int)(v2->field_38 & 4294967033) | 2;
        v3[0] = v1;
        v3[1] = v4;
        v3[2] = v5;
        return tmp_19 & -7 | 2;
    }
    v6->field_38 = v6->field_38 & 249;
    v7[0] = 0;
    v7[2] = 0;
    v7[1] = 0;
    return v8;
}

int sub_4047d0()
{
}

extern char *g_61b940;
extern unsigned long long g_61b948;

int sub_4022e0()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    char *v3;  // r8
    unsigned long long v4;  // rbx
    unsigned long long *v5;  // rdi
    unsigned long long v6[6];  // rsi
    unsigned long v7;  // rdx
    unsigned long long *v9;  // rdi
    unsigned long long v11;  // rbx

    v3 = g_61b940;
    if (*(g_61b940) != 110)
    {
        if (*(g_61b940) > 110)
        {
            if (*(g_61b940) == 112)
            {
                v1 = stack_base + 0;
                v0 = v4;
                g_61b940 = &v3[1];
                *(v5) = v3;
                v6[0] = 0;
                v6[4] = v7;
                v6[1] = 0;
                v6[5] = 0;
                g_61b948 = 710;
                strlen(g_61b940);
                if (sub_413d70() == 0)
                {
                    v11 = v0;
                    return 1;
                }
                error(0x1, 0x0, "%s");
            }
            else if (*(g_61b940) != 116)
            {
                return 0;
            }
        }
        else
        {
            if (*(g_61b940) != 97)
            {
                return 0;
            }
        }
    }
    if (*(g_61b940) == 110 || *(g_61b940) == 97 && *(g_61b940) <= 110 || *(g_61b940) == 116 && *(g_61b940) > 110 && *(g_61b940) != 112)
    {
        *(v9) = g_61b940;
        return 1;
    }
}

int sub_405030()
{
}

int sub_402fa0()
{
    unsigned long long v0;  // [bp-0x1e8]
    void tmp_38;  // tmp #38
    unsigned long long|unsigned int * v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    unsigned long long v3;  // [bp-0xd8]
    unsigned long long|char|unsigned long v4;  // [bp-0xc0]
    unsigned long long|char|unsigned long v5;  // [bp-0xb8]
    char v6;  // [bp-0xa9]
    unsigned long v7;  // [bp-0xa8]
    unsigned long long v8;  // [bp-0xa0]
    unsigned long long|char v9;  // [bp-0x98]
    unsigned long long|unsigned int|unsigned long v10;  // [bp-0x90]
    unsigned long long|unsigned int v11;  // [bp-0x88]
    unsigned long long|unsigned int v12;  // [bp-0x80]
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
    unsigned long long|unsigned long v33;  // r10
    unsigned long long v34;  // rbp
    unsigned long long v35;  // r13
    unsigned long long v36;  // r13
    unsigned long long v37;  // r8
    unsigned long long v38;  // r9
    unsigned long long|unsigned long v39;  // r11
    unsigned long long|unsigned long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    char v43;  // al
    unsigned long v44;  // rdx
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
    unsigned long long|unsigned int|char|unsigned long v77;  // rsi
    unsigned long long|unsigned int|char|unsigned long v78;  // r13
    unsigned long long v79;  // r14
    unsigned long long|unsigned long v80;  // r12
    unsigned int v81;  // r13d
    unsigned long long v82;  // r11
    char v83;  // dl
    char|unsigned long v84;  // rax
    unsigned long long v85;  // cc_dep1
    char|unsigned long v86;  // dl
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
            v26 = (unsigned int)sub_402ea0();
            v27 = (unsigned long long)(unsigned int)sub_402ea0();
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
                        v77 = (unsigned int)v39 == 2;
                        v5 = v17 & (unsigned int)v39 == 2;
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
                        if (v4 == 0)
                        {
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
                        }
                        else
                        {
                            v40 = v45;
                            v78 = 0;
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
                                v33 = rax<8>;
                            }
                            *((unsigned long long *)&v4) = v4 & v87;
                            if (v79 > v76)
                            {
                                *((char *)(v29 + v76)) = 92;
                            }
                            v76 += 1;
                            v80 += 1;
                        }
                    case 13:
                        v40 = 13;
                        v45 = 114;
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
                            v76 = (unsigned int)sub_402fa0();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0)
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
                *((unsigned long *)&v10) = v39;
                do
                {
                    v56 = v80 + v54;
                    v57 = v7 + v80 + v54;
                    v46 = sub_4069d0();
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
                    if ((v63 == 0 || v77 == 0) && (v77 == 0 || v80 < v64) && (v80 < v64 || v77 != 0))
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
            if ((v78 == 0 || v4 != 0) && (v78 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && (v76 == 0 || v17 != 0) && (v4 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v17 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_402fa0();
            }
            if (v17 == 0 && v4 != 0 || v4 == 0 && v17 == 0 && (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 && v5 == 0 || (v15 != 1 || v77 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v6 != 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v78 == 0 || v4 != 0) && (v78 == 0 || v17 != 0) && (v76 == 0 || v4 != 0) && (v76 == 0 || v17 != 0) && (v4 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v17 != 0))
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

int sub_4051e0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_404fe0();
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[120];
    unsigned int field_90;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char field_20;
    char padding_21[7];
    unsigned long long field_28;
    char padding_30[16];
    unsigned long long field_40;
    unsigned long long field_48;
} struct_3;

int sub_40cd80()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // rdx
    unsigned long v3;  // rdi
    unsigned long long v4[12];  // rcx
    unsigned long long v5;  // rax
    char *v6;  // r8
    unsigned long long v7;  // rdx
    struct_0 *v8;  // rcx
    unsigned long long v9;  // rcx
    unsigned long long v10;  // rdi
    unsigned long long v11;  // rbp
    char v12;  // r11b
    unsigned long long v13;  // rdi
    struct struct_3 **v15;  // r10
    struct_3 *v16;  // r13
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdx
    unsigned long long v20;  // rdi
    unsigned int *v21;  // r8
    unsigned long long v22;  // rax
    char *v23;  // rdx
    unsigned long long v24;  // rax
    unsigned long long v25;  // rbx
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax

    v2 = v1 * 16;
    if (!(*((char *)(v3 + v2 + 8)) != 7))
    {
        v5 = v4[1];
        v7 = v6[v4[1]];
        if (v6[v4[1]] > 193)
        {
            v9 = v4[11];
            if (&v6[1] < v9)
            {
                v10 = v6[1 + v5];
                if (v7 > 223)
                {
                    if (v7 <= 239)
                    {
                        if (v10 > 159 || v7 != 224)
                        {
                            v20 = 3;
                        }
                    }
                    else
                    {
                        if (v7 <= 247 && (v7 != 240 || v10 > 143))
                        {
                            v20 = 4;
                        }
                    }
                }
                else
                {
                    v13 = (unsigned int)v10 - 128;
                }
            }
        }
    }
    else if (v8->field_90 != 1)
    {
        v11 = (unsigned int)sub_4085b0();
        if (v12 != 5 && v12 == 6 && (unsigned int)v11 > 1)
        {
            v16 = *(v15);
            v17 = *(v15)->field_40;
            v18 = *(v15)->field_28;
            if ((*(v15)->field_40 != 0 || v16->field_48 != 0 || v18 != 0) && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && *((int *)(v8->field_10 + (v21 << 2))) != *((int *)*(v15)->field_0))
            {
                v22 = 0;
                do
                {
                    v22 += 1;
                }
                while (*(v15)->field_28 != v22 && *((int *)(v8->field_10 + (v21 << 2))) != *((int *)(*(v15)->field_0 + (v22 << 2))));
            }
        }
    }
    if (*((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 <= 251 && v7 > 247 && v6[v4[1]] > 193 && v7 != 248 && v7 > 223 && v7 > 239 || *((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 == 248 && v7 <= 251 && v7 > 247 && v6[v4[1]] > 193 && v10 > 135 && v7 > 223 && v7 > 239)
    {
        v20 = 5;
    }
    if (v7 <= 253 && *((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 > 247 && v6[v4[1]] > 193 && v7 > 251 && v7 > 223 && v7 > 239 && v7 != 252 || v7 <= 253 && *((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 == 252 && v10 > 131 && v7 > 247 && v6[v4[1]] > 193 && v7 > 251 && v7 > 223 && v7 > 239)
    {
        v20 = 6;
    }
    if (*((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 <= 239 && v6[v4[1]] > 193 && v7 > 223 && (v10 > 159 || v7 != 224) || *((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 <= 251 && v7 > 247 && v6[v4[1]] > 193 && v7 != 248 && v7 > 223 && v7 > 239 || v7 <= 247 && *((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v6[v4[1]] > 193 && v7 > 223 && v7 > 239 && (v7 != 240 || v10 > 143) || *((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 == 248 && v7 <= 251 && v7 > 247 && v6[v4[1]] > 193 && v10 > 135 && v7 > 223 && v7 > 239 || v7 <= 253 && *((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 > 247 && v6[v4[1]] > 193 && v7 > 251 && v7 > 223 && v7 > 239 && v7 != 252 || v7 <= 253 && *((char *)(v3 + v2 + 8)) == 7 && &v6[1] < v9 && v7 == 252 && v10 > 131 && v7 > 247 && v6[v4[1]] > 193 && v7 > 251 && v7 > 223 && v7 > 239)
    {
        if (v9 >= &v6[v20])
        {
            v23 = &v6[1 + v5];
            v24 = &v6[v5 + v20];
            while (true)
            {
                if (((unsigned long long)*(v23) - 128 & 255) <= 63)
                {
                    v23 = &v23[1];
                    if (v24 == v23)
                    {
                        break;
                    }
                }
            }
        }
        if (((unsigned long long)*(v23) - 128 & 255) <= 63)
        {
            return stack_base + 0;
        }
    }
    if ((v12 == 6 && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && *((char *)(v3 + v2 + 8)) != 7 && v12 != 5 && (unsigned int)v11 > 1 && v8->field_90 != 1 && (*(v15)->field_40 != 0 || v16->field_48 != 0 || v18 != 0) && *((int *)(v8->field_10 + (v21 << 2))) != *((int *)*(v15)->field_0) || v12 == 6 && *((char *)(v3 + v2 + 8)) != 7 && v12 != 5 && (unsigned int)v11 > 1 && v8->field_90 != 1 && (*(v15)->field_40 != 0 || v16->field_48 != 0 || v18 != 0) && (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v25 = 0;
        while (true)
        {
            v26 = iswctype(*((int *)(v8->field_10 + v21 * 4)), *((long long *)(*(v15)->field_18 + v25 * 8)));
            if (v26 != 0)
            {
                break;
            }
            v25 += 1;
            v17 = *(v15)->field_40;
        }
    }
    if (((v12 == 6 && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && *((char *)(v3 + v2 + 8)) != 7 && v12 != 5 && (unsigned int)v11 > 1 && v8->field_90 != 1 && (*(v15)->field_40 != 0 || v16->field_48 != 0 || v18 != 0) && *((int *)(v8->field_10 + (v21 << 2))) != *((int *)*(v15)->field_0) || v12 == 6 && *((char *)(v3 + v2 + 8)) != 7 && v12 != 5 && (unsigned int)v11 > 1 && v8->field_90 != 1 && (*(v15)->field_40 != 0 || v16->field_48 != 0 || v18 != 0) && (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) || (v12 == 6 && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && *((char *)(v3 + v2 + 8)) != 7 && v12 != 5 && (unsigned int)v11 > 1 && v8->field_90 != 1 && (*(v15)->field_40 != 0 || v16->field_48 != 0 || v18 != 0) && *((int *)(v8->field_10 + (v21 << 2))) != *((int *)*(v15)->field_0) || v12 == 6 && *((char *)(v3 + v2 + 8)) != 7 && v12 != 5 && (unsigned int)v11 > 1 && v8->field_90 != 1 && (*(v15)->field_40 != 0 || v16->field_48 != 0 || v18 != 0) && (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && (char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)) && !((char)[D] amd64g_calculate_condition(0xe<64>, 0x14<64>, rsi<8>, 0x0<64>, cc_ndep<8>)))
    {
        v27 = 0;
        while (*((int *)(v8->field_10 + (v21 << 2))) < *((int *)(*(v15)->field_8 + (v27 << 2))) || *((int *)(v8->field_10 + (v21 << 2))) > *((int *)(*(v15)->field_10 + (v27 << 2))))
        {
            v27 += 1;
            if (v27 == v17)
            {
                break;
            }
        }
    }
    return stack_base + 0;
}

int sub_406a50()
{
    unsigned long long v1[3];  // rdi
    unsigned long long v2[3];  // rsi
    unsigned long long v3;  // rdx
    unsigned long v4;  // rax

    if (v2 != 0 && v1 != 0)
    {
        v3 = v1[1];
        if (v1[1] == v2[1])
        {
            while (true)
            {
                v3 -= 1;
                if (!((char)(v3 - 1 >> 63)))
                {
                    if (*((long long *)(v1[2] + (v3 << 3))) != *((long long *)(v2[2] + (v3 << 3))))
                    {
                        break;
                    }
                }
                else
                {
                    return 1;
                }
            }
        }
        return v4;
    }
    return 0;
}

int sub_413c10()
{
    unsigned long v1;  // rcx
    unsigned long long v6;  // rax
    char v8[11];  // r8

    v6 = &v8[2 + 2 * v1];
    while (true)
    {
        if (v8[1] != 1)
        {
            if ((unsigned long long)v8[1] == 5)
            {
                v8[1] = 7;
            }
        }
        else
        {
            if (v8[0] < 0)
            {
                v8[1 + 2] = v8[1 + 2] & 223;
            }
        }
        v8 = &v8[2];
    }
}

int sub_4147f0()
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

extern int512_t g_61b8c0;

int sub_4043d0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_61b8c0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_61b8c0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_405c00()
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

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    struct struct_2 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    char padding_28[8];
    char field_30;
} struct_0;

int sub_408830()
{
    void tmp_13;  // tmp #13
    struct_0 *v1;  // rsi

    if (!(v1->field_30 != 11))
    {
        v1->field_8->field_20 = v1;
        return 0;
    }
    else if (v1->field_30 != 16)
    {
        if (v1->field_8 != 0)
        {
            v1->field_8->field_20 = v1->field_20;
        }
        if (v1->field_10 != 0)
        {
            v1->field_10->field_20 = v1->field_20;
        }
        return 0;
    }
    tmp_13 = v1->field_10;
    v1->field_8->field_20 = v1->field_10->field_18;
    *((unsigned long long *)(tmp_13 + 32)) = v1->field_20;
    return 0;
}

