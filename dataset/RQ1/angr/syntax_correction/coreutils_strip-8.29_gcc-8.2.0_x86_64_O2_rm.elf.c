
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
// int sub_4055b0()

typedef struct struct_0 {
    char padding_0[72];
    unsigned int field_48;
} struct_0;

int sub_406260()
{
    unsigned long long v1;  // rax
    struct v2;  // rdi

    v1 = 1;
    if (((char)v2->field_48 & 17) != 16)
    {
        v1 = 0;
    }
    if (((char)v2->field_48 & 17) == 16 || ((char)v2->field_48 & 17) != 17)
    {
        return v1;
    }
    if (((char)v2->field_48 & 17) == 17)
    {
        return 0;
    }
}

extern unsigned long long program_invocation_short_name;

int sub_40239b()
{
    unsigned long long v1;  // rax

    v1 = &program_invocation_short_name;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

int sub_406150()
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
        sub_4061d0(); /* do not return */
    }
}

int sub_406790()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    void *v3;  // rdi
    unsigned long v4;  // rax
    unsigned long long v5;  // rbx
    void *v6;  // rbp
    unsigned long long v8[4];  // rdi
    unsigned long long v10[4];  // rbx
    unsigned long long v11;  // rbx

    if (v3 != 0)
    {
        v1 = stack_base + 0;
        v0 = v5;
        v10 = v3;
        while (true)
        {
            v6 = v10[2];
            if (v10[3] != 0)
            {
                closedir();
            }
            v8 = v10;
            v10 = v6;
            if (v10 == 0)
            {
                break;
            }
        }
        v11 = v0;
        return (unsigned long long)free(v8);
    }
    return v4;
}

typedef struct struct_1 {
    char padding_0[48];
    unsigned long long field_30;
    char padding_38[8];
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[8];
    unsigned long long field_68;
    char padding_70[8];
    unsigned long long field_78;
    char padding_80[8];
    unsigned long long field_88;
    unsigned int field_90;
    char padding_94[116];
    char field_108;
    char field_109;
} struct_1;

typedef struct struct_2 {
    char padding_0[136];
    unsigned long long field_88;
} struct_2;

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
    char padding_30[24];
    char field_48;
} struct_0;

int sub_406450()
{
    struct v1;  // rsi
    struct v2;  // rbp
    struct v3;  // rbx
    unsigned long long v4;  // cc_dep1
    struct v6;  // rdi
    char v7;  // dl
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned int v10;  // eax
    unsigned int *v11;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // rax
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    char v16;  // cc_dep1
    unsigned long long *v17;  // rdi
    unsigned long long v19;  // rcx
    unsigned long v20;  // d

    v2 = &v1->field_78;
    v3 = v1;
    v4 = v1->field_58;
    if ((((char)*((int *)&v6->field_48) & 1) == 0 || v4 != 0) && ((char)*((int *)&v6->field_48) & 2) == 0 && v7 == 0)
    {
        v9 = __fxstatat(0x1, v6->field_2c, v1->field_30, (unsigned int)v2, 0x100);
        if (v9 != 0)
        {
            v12 = (unsigned int)*(__errno_location());
        }
    }
    if (((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0 || v4 == 0 && ((char)*((int *)&v6->field_48) & 1) != 0)
    {
        v8 = __xstat(0x1);
    }
    if (v8 != 0 && (v4 == 0 || ((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0) && (((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 1) != 0))
    {
        v11 = __errno_location();
        v12 = *(v11);
        if ((unsigned int)v12 == 2)
        {
            v12 = __lxstat(0x1, v3->field_30, (unsigned int)v2);
            if (v12 == 0)
            {
                *(v11) = 0;
                return 13;
            }
            v12 = *(v11);
        }
    }
    if (v8 == 0 && ((char)*((int *)&v6->field_48) & 2) != 0 || v8 == 0 && v7 != 0 || v8 == 0 && v4 == 0 && ((char)*((int *)&v6->field_48) & 1) != 0 || v9 == 0 && ((char)*((int *)&v6->field_48) & 2) == 0 && v7 == 0 && ((char)*((int *)&v6->field_48) & 1) == 0 || v9 == 0 && ((char)*((int *)&v6->field_48) & 2) == 0 && v7 == 0 && v4 != 0)
    {
        v10 = v3->field_90 & 0xf000;
        if (!(((unsigned short)v3->field_90 & 0xf000) != 0x4000))
        {
            v13 = v3->field_88;
            if (v3->field_88 > 1 && v3->field_58 > 0)
            {
                v15 = ((v6->field_48 & 32) == 0? v13 - 2 : v13);
            }
            if (v3->field_58 <= 0 || v3->field_88 <= 1)
            {
                v15 = -1;
            }
            v16 = v3->field_108;
            v3->field_68 = v15;
            v14 = 1;
            if (v16 == 46 && (v3->field_109 == 0 || ((unsigned int)*((int *)&v3->field_108) & 0xffff00) == 0x2e00))
            {
                v14 = (0 - (unsigned int)(char)(v3->field_58 < 1) & -0x4) + 5;
            }
        }
        else if (v10 != 0xa000)
        {
            v14 = (unsigned long long)(char)(v10 == 0x8000) * 5 + 3;
        }
        else
        {
            v14 = 12;
        }
        return v14;
    }
    if ((((char)*((int *)&v6->field_48) & 2) == 0 || v8 != 0) && (v7 == 0 || v8 != 0) && (((char)*((int *)&v6->field_48) & 2) == 0 || (unsigned int)v12 != 2 || v12 != 0) && (v7 == 0 || (unsigned int)v12 != 2 || v12 != 0) && (((char)*((int *)&v6->field_48) & 1) == 0 || v8 != 0 || v4 != 0) && (v4 == 0 || v9 != 0 || ((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0) && (((char)*((int *)&v6->field_48) & 1) == 0 || v4 != 0 || (unsigned int)v12 != 2 || v12 != 0) && (v9 != 0 || ((char)*((int *)&v6->field_48) & 2) != 0 || v7 != 0 || ((char)*((int *)&v6->field_48) & 1) != 0))
    {
        *((unsigned long *)&v3->field_40) = v12;
        v17 = &v2->padding_0[8] & -8;
        v3->field_78 = 0;
        v2->field_88 = 0;
        for (v19 = &((struct struct_2 *)&v2->padding_0[-1 * (&v2->padding_0[8] & -8)])[1] >> 3; v19 != 0; v17 = &v17[v20])
        {
            v19 -= 1;
            *(v17) = 0;
        }
        return 10;
    }
}

extern int512_t g_610480;

int sub_4052c0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_610480 : v1));
}

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[32];
    unsigned long long field_30;
    char padding_38[8];
    unsigned int field_40;
    char padding_44[44];
    unsigned short field_70;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
    char padding_10[32];
    unsigned long long field_30;
    char padding_38[8];
    unsigned int field_40;
    char padding_44[44];
    unsigned short field_70;
} struct_2;

extern unsigned int g_40bee0;
extern unsigned int g_40bef6;
extern unsigned int g_40bf02;

int sub_402820()
{
    unsigned long long v0;  // [bp-0x1d8]
    char v1;  // [bp-0xb8]
    unsigned long long v3;  // rdx
    char v4[26];  // r12
    unsigned long long v5;  // rdx
    struct v6;  // rdi
    struct v8;  // rsi
    struct v9;  // rbx
    char v12;  // cl
    char v13;  // dl
    unsigned long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned int *v17;  // r13
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rax
    char *v20;  // rsi
    unsigned int v22;  // eax
    unsigned long long v23;  // rbp
    unsigned long long v24[12];  // rax

    v4 = v3;
    v5 = 0;
    v9 = v8;
    v13 = v12 != 0;
    v14 = rdx * 0x200;
    v15 = unlinkat(v6->field_2c, v8->field_30, v14);
    if (v15 != 0)
    {
        v17 = __errno_location();
        if (!(*(v17) != 30))
        {
            v19 = __fxstatat(0x1, v6->field_2c, v9->field_30, (unsigned int)&v1, 0x100);
            if (v19 != 0)
            {
                v14 = *(v17);
                if (*(v17) == 2)
                {
                    v16 = 2;
                }
            }
            if (v19 == 0 || *(v17) != 2)
            {
                *(v17) = 30;
            }
        }
        else if (v4[0] != 0)
        {
            v16 = 2;
        }
        if ((v9->field_70 == 4 && v14 <= 20 && (unsigned int)v14 != 20 && *(v17) != 30 && v4[0] != 0 && (unsigned int)v14 != 2 || v9->field_70 == 4 && *(v17) != 30 && (v4[0] == 0 || (unsigned int)v14 != 22) && (v4[0] == 0 || (unsigned int)v14 != 84) && (v4[0] == 0 || (unsigned int)v14 != 20) && (v4[0] == 0 || v14 > 20)) && (unsigned int)v14 <= 39 || v9->field_70 == 4 && v4[0] == 0 && *(v17) == 30 && *(v17) == 2 && v19 != 0)
        {
            v0 = 0x8000320000;
            if (((char)((char)*(&((char *)stack_base)[((v14 & 63) >> 3) + -472]) >> (unsigned long long)(char)(v14 & 63 & 7)) & 1) != 0)
            {
                v22 = v9->field_40;
                if (v22 == 13 || v9->field_40 == 1)
                {
                    *(v17) = v22;
                }
            }
        }
        if ((v9->field_70 == 4 && v14 <= 20 && (unsigned int)v14 != 20 && *(v17) != 30 && v4[0] != 0 && (unsigned int)v14 != 2 || v9->field_70 == 4 && *(v17) != 30 && (v4[0] == 0 || (unsigned int)v14 != 22) && (v4[0] == 0 || (unsigned int)v14 != 84) && (v4[0] == 0 || (unsigned int)v14 != 20) && (v4[0] == 0 || v14 > 20)) && (unsigned int)v14 <= 39 || v9->field_70 == 4 && v4[0] == 0 && *(v17) == 30 && *(v17) == 2 && v19 != 0 || v14 <= 20 && (unsigned int)v14 != 20 && *(v17) != 30 && v4[0] != 0 && (unsigned int)v14 != 2 && v9->field_70 != 4 || (v9->field_70 == 4 && v14 <= 20 && (unsigned int)v14 != 20 && *(v17) != 30 && v4[0] != 0 && (unsigned int)v14 != 2 || v9->field_70 == 4 && *(v17) != 30 && (v4[0] == 0 || (unsigned int)v14 != 22) && (v4[0] == 0 || (unsigned int)v14 != 84) && (v4[0] == 0 || (unsigned int)v14 != 20) && (v4[0] == 0 || v14 > 20)) && (unsigned int)v14 > 39 || *(v17) != 30 && (v4[0] == 0 || (unsigned int)v14 != 22) && (v4[0] == 0 || (unsigned int)v14 != 84) && (v4[0] == 0 || (unsigned int)v14 != 20) && (v4[0] == 0 || v14 > 20) && v9->field_70 != 4 || v4[0] == 0 && *(v17) == 30 && *(v17) == 2 && v19 != 0 && v9->field_70 != 4 || *(v17) == 30 && (v19 == 0 || *(v17) != 2))
        {
            v23 = (unsigned int)sub_4056e0();
            error(0x0, *(v17), (unsigned long long)dcgettext(0x0, 0x40bf02, 0x5));
            v24 = v9->field_8;
            if (!((char)(v9->field_8->field_58 - 0 >> 63)))
            {
                while (v24[4] == 0)
                {
                    v24[4] = 1;
                    v24 = v24[1];
                    if ((char)(v24[11] - 0 >> 63))
                    {
                        break;
                    }
                }
            }
            v16 = 4;
        }
    }
    else
    {
        v16 = 2;
        if (v4[3 + 1] != 0)
        {
            v18 = (unsigned int)sub_4056e0();
            if (v12 != 0)
            {
                v20 = (unsigned long long)dcgettext(0x0, 0x40bee0, 0x5);
            }
            else
            {
                v20 = (unsigned long long)dcgettext(0x0, 0x40bef6, 0x5);
            }
            __printf_chk(0x1, v20);
            return 2;
        }
    }
    if (v4[3 + 1] == 0 || v15 != 0)
    {
        return v16;
    }
}

// int sub_405890()

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[8];
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[12];
    unsigned long long field_50;
    char padding_58[8];
    unsigned long long field_60;
    char padding_68[10];
    unsigned int field_72;
} struct_2;

int sub_406700()
{
    struct v1;  // rdi
    struct v2;  // r12
    unsigned long v3;  // rdx
    unsigned long long v4;  // rbp
    unsigned long v6;  // rax
    void *v7;  // rsi
    struct v9;  // rax
    unsigned long long v10;  // rax

    v2 = v1;
    v4 = v3;
    if (v6 != 0)
    {
        memcpy(v6 + 264, v7, v3);
        v9 = v2->field_20;
        *((char *)(v1->field_20 + v4 + 264)) = 0;
        *((unsigned long long *)(v6 + 96)) = v4;
        *((struct_0 **)(v6 + 80)) = v2;
        *((struct_2 **)(v6 + 56)) = v9;
        *((int *)(v6 + 64)) = 0;
        *((long long *)(v6 + 24)) = 0;
        *((int *)(v6 + 114)) = 0x30000;
        *((long long *)(v6 + 32)) = 0;
        *((long long *)(v6 + 40)) = 0;
    }
    v6 = malloc(v3 + 272 & -8);
    return v10;
}

typedef struct struct_3 {
    struct struct_4 *field_0;
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    char field_48;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    char field_48;
} struct_5;

typedef struct struct_4 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[32];
    unsigned int field_40;
    char padding_44[20];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
} struct_4;

typedef struct struct_8 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[8];
    unsigned long long field_30;
    char padding_38[8];
    unsigned long long field_40;
    unsigned int field_48;
    char field_49;
} struct_8;

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[32];
    unsigned int field_40;
    char padding_44[44];
    unsigned short field_70;
} struct_0;

typedef struct struct_1 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[24];
    unsigned long long field_38;
    unsigned int field_40;
    char padding_44[4];
    unsigned long long field_48;
    char padding_50[32];
    unsigned short field_70;
    unsigned short field_72;
    char padding_74[20];
    unsigned long long field_88;
} struct_1;

typedef struct struct_2 {
    char padding_0[24];
    unsigned long long field_18;
} struct_2;

typedef struct struct_9 {
    char padding_0[72];
    unsigned int field_48;
} struct_9;

typedef struct struct_7 {
    unsigned long long field_0;
    char padding_8[10];
    char field_12;
    char field_13;
    char field_14;
} struct_7;

typedef struct struct_10 {
    char padding_0[4248800];
    unsigned int field_40d4e0;
} struct_10;

typedef struct struct_6 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[56];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
} struct_6;

extern int512_t g_406420;
extern char g_40d4e0;

int sub_406ec0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x90]
    void tmp_20;  // tmp #20
    unsigned long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x48]
    unsigned int v10;  // [bp-0x40]
    char v11;  // [bp-0x3a]
    char v12;  // [bp-0x39]
    unsigned int v14;  // [bp+0x100008]
    struct v15;  // rdi
    struct v17;  // r13
    unsigned int v18;  // esi
    unsigned long long v19;  // rax
    unsigned long long v21;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v22;  // ebx
    unsigned long long v23;  // rax
    unsigned short v24;  // cc_dep1
    unsigned long long v28;  // rax
    unsigned long long v30;  // rax
    unsigned long long v31;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v32;  // edi
    unsigned long long v33;  // rax
    unsigned long long v34;  // rdi
    unsigned long long v35;  // rbp
    void *v40;  // rcx
    struct v41;  // rbx
    struct v42;  // r14
    unsigned long long v43;  // r13
    unsigned long long v44;  // rax
    unsigned long long v45;  // rdx
    unsigned long long v46;  // r8
    void *v47;  // rsi
    unsigned long long v48;  // rax
    unsigned int v50;  // eax
    unsigned int v51;  // esi
    struct v52;  // rdx
    unsigned long long v53;  // rax
    unsigned long long v54;  // rbp
    unsigned long long v55;  // r15
    unsigned long long v56;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v57;  // r13
    struct v58;  // r13
    struct v59;  // r13
    unsigned int v60;  // ebx
    struct v61;  // r15
    unsigned int v62;  // eax
    unsigned long long v68[8];  // rax
    unsigned long long v69;  // rcx
    unsigned long long v70;  // rdx
    unsigned long long v71;  // rdx
    unsigned long long v72[12];  // rax
    unsigned long long v73;  // rdx
    unsigned long long v74;  // rdx
    unsigned long long v75;  // rdx
    char v76;  // al
    unsigned long long v78;  // rax
    unsigned long long v79;  // rax
    unsigned long long v80;  // rax

    v17 = v15->field_0;
    v10 = v18;
    v32 = v15->field_0->field_18;
    v9 = v32;
    if (v9 != 0)
    {
        v19 = dirfd();
        if (v19 >= 0)
        {
            if (v22->field_40 != 0)
            {
                v6 = -1;
            }
            else
            {
                v6 = 100000;
                v32 = v22->field_48;
                v12 = 1;
            }
        }
        else
        {
            closedir();
            v4->field_18 = 0;
        }
    }
    else if (((unsigned short)v22->field_48 & 516) != 0x200)
    {
        v21 = sub_40af10();
        v22 = (unsigned int)v21;
        if ((unsigned int)v21 >= 0)
        {
            v23 = fdopendir(v21);
            if (v23 != 0)
            {
                v24 = *((short *)&v4[3].padding_0[16]);
                v4->field_18 = v23;
                if (!(v24 != 11))
                {
                    *((unsigned short *)&v4[3].padding_0[16]) = sub_406450();
                }
                else if (((unsigned short)v22->field_48 & 0x100) != 0)
                {
                    sub_406e20();
                    sub_406450();
                    v28 = sub_406d70();
                    if (v28 == 0)
                    {
                        v2 = 0;
                        *(__errno_location()) = 12;
                    }
                }
                if (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0)
                {
                    v6 = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)(v22->field_40 < 1)) & 100001) - 1;
                    if (v10 != 2 && ((char)v22->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) == 2)
                    {
                        v30 = sub_406940();
                        if (v30 != 0 && v10 == 3)
                        {
                            v31 = 0;
                            v56 = 1;
                        }
                    }
                }
            }
            else
            {
                close(v22);
                *(__errno_location()) = v14;
            }
        }
        if ((unsigned int)v21 < 0 || v23 == 0)
        {
            v4->field_18 = 0;
        }
    }
    if ((v9 == 0 || v19 < 0) && (v9 != 0 || ((unsigned short)v22->field_48 & 516) != 0x200) && ((unsigned int)v21 < 0 || v23 == 0 || v9 != 0))
    {
        if (v10 == 3)
        {
            *((short *)&v4[3].padding_0[16]) = 4;
            *((int *)&v4[2].padding_0[0]) = *(__errno_location());
        }
        v2 = 0;
    }
    if (v9 == 0 && (unsigned int)v21 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) == 2 && v30 == 0 || v9 == 0 && (unsigned int)v21 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) != 2 || v9 == 0 && (unsigned int)v21 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) != 24)
    {
        v31 = 1;
        v56 = (char)(v10 == 3);
    }
    if (v9 == 0 && (unsigned int)v21 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) == 2 && v30 != 0 && v10 != 3 || v9 == 0 && (unsigned int)v21 >= 0 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && v10 == 2)
    {
        v12 = 0;
        v32 = v22->field_48;
    }
    if ((v9 == 0 && (unsigned int)v21 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) == 2 && v30 != 0 && v10 == 3 || v9 == 0 && (unsigned int)v21 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) == 2 && v30 == 0 || v9 == 0 && (unsigned int)v21 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) == 24 && *((long long *)&v4[4].padding_0[8]) != 2 || v9 == 0 && (unsigned int)v21 >= 0 && v10 != 2 && ((unsigned short)v22->field_48 & 516) != 0x200 && v23 != 0 && (v24 == 11 || ((unsigned short)v22->field_48 & 0x100) == 0 || v28 != 0) && ((char)v22->field_48 & 56) != 24) && (*(&((char *)&v22->field_48)[1]) & 2) != 0)
    {
        v22 = (unsigned long long)(unsigned int)sub_40b030();
        if ((unsigned int)v22 < 0)
        {
            v34 = v4->field_18;
            v35 = (unsigned int)(unsigned short)*((short *)&v4[3].padding_0[18]) | 1;
        }
    }
    if (unknown)
    {
        v33 = sub_406ba0();
        if (v33 != 0)
        {
            v34 = v4->field_18;
            v35 = (unsigned int)(unsigned short)*((short *)&v4[3].padding_0[18]) | 1;
        }
    }
    if (unknown)
    {
        v12 = 1;
        v32 = v22->field_48;
    }
    if (unknown)
    {
        *((unsigned short *)&v4[3].padding_0[18]) = (unsigned int)(unsigned short)*((short *)&v4[3].padding_0[18]) | 1;
        closedir();
        v32 = v22->field_48;
    }
    if (unknown)
    {
        v0 = v34;
        *((int *)&v4[2].padding_0[0]) = *(__errno_location());
    }
    if (unknown)
    {
        *((unsigned long long *)&v4[3].padding_0[18]) = v35;
        closedir();
        v32 = v22->field_48;
        v4->field_18 = 0;
        if (((unsigned short)v32 & 0x200) != 0 && v22 >= 0)
        {
            close(v22);
            v32 = v22->field_48;
        }
    }
    if (unknown)
    {
        v4->field_18 = 0;
        v12 = 0;
    }
    if (unknown)
    {
        v1 = *((long long *)&v4[2].padding_0[8]);
        v8 = *((long long *)&v4[2].padding_0[8]) - 1;
        if (*((char *)(v4[1].field_18 + *((long long *)&v4[2].padding_0[8]) - 1)) != 47)
        {
            v8 = *((long long *)&v4[2].padding_0[8]);
            v1 = &v8[1];
        }
        v7 = 0;
        if (((char)v32 & 4) != 0)
        {
            v40 = &v8[v22->field_20 + 1];
            v8[v22->field_20] = 47;
            v7 = v40;
        }
        v11 = 0;
        v54 = 0;
        v3 = v22->field_30 - v1;
        v22 = v15;
        v0 = 0;
        v4 = v17;
        v5 = v4[2].field_18 + 1;
        v2 = 0;
        while (true)
        {
            v61 = v4->field_18;
            if (v4->field_18 != 0)
            {
                *((int *)v56) = 0;
                v56 = __errno_location();
                v42 = (unsigned long long)readdir();
                if (v42 != 0)
                {
                    if ((v61->field_48 & 32) == 0 && v42->field_13 == 46 && (*((short *)&v42->field_14) == 46 || v42->field_14 == 0))
                    {
                        v55 = v0;
                    }
                    if ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46 && v42->field_14 != 0)
                    {
                        v43 = strlen(&v42->field_13);
                        v55 = (unsigned int)sub_406700();
                        if (v3 <= v43 && v55 != 0)
                        {
                            v3 = v61->field_20;
                            v44 = sub_406a80();
                            if (v44 != 0)
                            {
                                v45 = v61->field_20;
                                if (v61->field_20 != v3)
                                {
                                    *((int *)&v7) = ((v61->field_48 & 4) == 0? v7 : rdx + (long long)(stack_base)[-136]);
                                }
                                else
                                {
                                    v44 = v11;
                                }
                                *((unsigned long long *)&v11) = v44;
                                v3 = v61->field_30 - v1;
                            }
                        }
                    }
                }
                else
                {
                    v62 = *((int *)v56);
                    v57 = v4;
                    if (*((int *)v56) != 0)
                    {
                        v57->field_40 = v62;
                        v57->field_70 = (0 - (unsigned int)(char)((v9 | v54) < 1) & -3) + 7;
                    }
                    if (v4->field_18 != 0)
                    {
                        closedir();
                        v4->field_18 = 0;
                    }
                }
            }
            else
            {
                v57 = v4;
            }
            if (v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 == 0 || v42 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v55 == 0)
            {
                v59 = v4;
                v60 = *((int *)v56);
                free(v55);
                sub_406790();
                closedir();
                v59->field_18 = 0;
                v59->field_70 = 7;
                v2 = 0;
                *((int *)(v55 + 72)) = *((int *)(v55 + 72)) | 0x4000;
                *((unsigned int *)v56) = v60;
            }
            if (v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43)
            {
                v46 = v43 + v1;
                if (!(INVALID_IR))
                {
                    v47 = v55 + 264;
                    *((unsigned long *)(v55 + 88)) = v5;
                    tmp_20 = v61->field_0;
                    *((unsigned long long *)(v55 + 72)) = v46;
                    *((long long *)(v55 + 8)) = tmp_20;
                    *((unsigned long long *)(v55 + 128)) = v42->field_0;
                    v48 = (unsigned int)*((int *)&v61->field_48);
                    if (((char)*((int *)&v61->field_48) & 4) == 0)
                    {
                        *((void **)(v55 + 48)) = v47;
                    }
                    else
                    {
                        *((long long *)(v55 + 48)) = *((long long *)(v55 + 56));
                        memmove(v7, v47, *((long long *)(v55 + 96)) + 1);
                        v48 = (unsigned int)*((int *)&v61->field_48);
                    }
                    if ((v48 & 4) == 0 && v61->field_40 != 0)
                    {
                        *((unsigned short *)(v55 + 112)) = sub_406450();
                    }
                    if (v61->field_40 == 0 || (v48 & 4) != 0)
                    {
                        v50 = (unsigned int)v48 & 24;
                        v51 = v42->field_12;
                        v52 = (unsigned long long)((unsigned int)v42->field_12 - 1);
                        if (v50 == 24 && ((char)v51 & 251) != 0)
                        {
                            *((short *)(v55 + 112)) = 11;
                            if ((unsigned int)v52 > 11)
                            {
                                *((int *)(v55 + 144)) = 0;
                                v53 = 1;
                            }
                            else
                            {
                                *((int *)(v55 + 144)) = *((int *)(0x4 * v52 + &g_40d4e0));
                                v53 = 1;
                            }
                        }
                        if (((char)v51 & 251) == 0 || v50 != 24)
                        {
                            *((short *)(v55 + 112)) = 11;
                            if ((unsigned int)v52 > 11)
                            {
                                *((int *)(v55 + 144)) = 0;
                                v53 = 2;
                            }
                            else
                            {
                                *((int *)(v55 + 144)) = *((int *)(0x4 * v52 + &g_40d4e0));
                                v53 = 2;
                            }
                        }
                        *((unsigned long long *)(v55 + 168)) = v53;
                    }
                    *((long long *)(v55 + 16)) = 0;
                    if (v2 != 0)
                    {
                        v54 += 1;
                        *((unsigned long long *)(v0 + 16)) = v55;
                    }
                    else
                    {
                        v2 = v55;
                        v54 += 1;
                    }
                }
                else
                {
                    v58 = v4;
                    free(v55);
                    sub_406790();
                    closedir();
                    v58->field_18 = 0;
                    v58->field_70 = 7;
                    v2 = 0;
                    *((int *)&v61->field_48) = *((int *)&v61->field_48) | 0x4000;
                    *((int *)v56) = 36;
                }
            }
            if ((v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43) && !(INVALID_IR) && v2 != 0 && v54 < v6 || (v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43) && !(INVALID_IR) && v2 == 0 && v54 < v6 || (v61->field_48 & 32) == 0 && v42->field_13 == 46 && v42 != 0 && v4->field_18 != 0 && (*((short *)&v42->field_14) == 46 || v42->field_14 == 0))
            {
                v0 = v55;
            }
            if ((v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43) && !(INVALID_IR) && v2 != 0 && v54 >= v6 || (v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 <= v43 && v44 != 0 || v42 != 0 && v55 != 0 && v4->field_18 != 0 && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || *((short *)&v42->field_14) != 46) && ((v61->field_48 & 32) != 0 || v42->field_13 != 46 || v42->field_14 != 0) && v3 > v43) && !(INVALID_IR) && v2 == 0 && v54 >= v6)
            {
                v57 = v4;
                v61 = v41;
            }
            if (unknown)
            {
                v68 = v61->field_8;
                v69 = v61->field_20;
                if (v61->field_8 != 0)
                {
                    do
                    {
                        v70 = v68[6];
                        if (v68[6] != &v68[33])
                        {
                            v71 = v70 - v68[7] + v69;
                            v68[6] = v71;
                        }
                        v68[7] = v69;
                        v68 = v68[2];
                    }
                    while (v68 != 0);
                }
                for (v72 = v2; !((char)(v72[11] - 0 >> 63)); v72 = v75)
                {
                    v73 = v72[6];
                    if (v72[6] != &v72[33])
                    {
                        v74 = v73 - v72[7] + v69;
                        v72[6] = v74;
                    }
                    v75 = v72[2];
                    v72[7] = v69;
                    if (v75 == 0)
                    {
                        v75 = v72[1];
                    }
                }
            }
            if (unknown)
            {
                if ((v61->field_48 & 4) != 0)
                {
                    if (v54 == 0 || v61->field_30 == v1)
                    {
                        v7 -= 1;
                    }
                    *((char *)v7) = 0;
                }
                if (v9 == 0 && v12 != 0 && (v54 == 0 || v10 == 1))
                {
                    if (v57->field_58 == 0)
                    {
                        v76 = sub_406a20() != 0;
                    }
                    else
                    {
                        v76 = sub_406ba0() != 0;
                    }
                    if (v76 != 0)
                    {
                        v57->field_70 = 7;
                        *((int *)&v61->field_48) = *((int *)&v61->field_48) | 0x4000;
                        sub_406790();
                        v2 = 0;
                    }
                }
                if (v54 == 0 && (v76 == 0 || v12 == 0 || v9 != 0))
                {
                    if (v10 == 3)
                    {
                        v79 = v57->field_70;
                        if (v79 != 7 && v57->field_70 != 4)
                        {
                            v57->field_70 = 6;
                        }
                    }
                    sub_406790();
                    v2 = 0;
                }
                if (v54 != 0 && (v76 == 0 || v12 == 0 || v9 != 0 || v10 != 1))
                {
                    v78 = v61->field_40;
                    if (v78 == 0 && v54 > 10000)
                    {
                        v80 = sub_406820();
                        if (v80 != 26985 && v80 != 16914836)
                        {
                            v61->field_40 = &g_406420;
                            v61->field_40 = 0;
                            v2 = (unsigned int)sub_406600();
                        }
                        if (v80 == 26985 || v80 == 16914836)
                        {
                            v78 = v61->field_40;
                        }
                    }
                    if (v54 <= 10000 && v78 == 0 || v54 <= 10000 && v54 == 1 || v78 == 0 && v78 == 0 && v80 == 26985 || v78 == 0 && v78 == 0 && v80 == 16914836 || v78 == 0 && v80 == 26985 && v54 == 1 || v78 == 0 && v54 == 1 && v80 == 16914836)
                    {
                        break;
                    }
                }
            }
        }
    }
    return v2;
}

int sub_406940()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rdx
    char v4;  // dl
    unsigned int v5;  // edx
    char v6;  // dl

    v1 = sub_406820();
    if (v1 != 40864)
    {
        if (!(v1 > 40864))
        {
            v2 = 0;
            if (v1 != 0)
            {
                v3 = 0;
                v4 = v1 != 26985;
                return rdx;
            }
        }
        else if (v1 != 1397113167)
        {
            v2 = 2;
            if (v1 != 1481003842)
            {
                v5 = 0;
                v6 = v1 == 1382369651;
                v2 = (unsigned long long)(unsigned int)rdx + 1;
            }
        }
    }
    if (v1 == 40864 || v1 == 1397113167 && v1 > 40864)
    {
        v2 = 0;
    }
    if (v1 == 0 || v1 == 40864 || v1 > 40864)
    {
        return v2;
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

extern unsigned int g_40d510;
extern unsigned int g_40d530;
extern unsigned int g_40d560;
extern unsigned int g_40d580;
extern unsigned int g_40d5b0;
extern unsigned long long stderr;

int sub_408780()
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
                                dcgettext(0x0, 0x40d510, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x40d530, 0x5);
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
                                dcgettext(0x0, 0x40d5b0, 0x5);
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
                            dcgettext(0x0, 0x40d580, 0x5);
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
            dcgettext(0x0, 0x40d560, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

// int sub_405780()

int sub_4094f0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40afb0();
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

int sub_4053e2()
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

extern unsigned int g_40c290;
extern unsigned int g_40c2ab;

int sub_403760()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x40c290, 0x5);
    }
    dcgettext(0x0, 0x40c2ab, 0x5);
    sub_405910();
    sub_405600();
}

extern uint128_t g_610480;
extern uint128_t g_610490;
extern uint128_t g_6104a0;
extern unsigned long long g_6104b0;

int sub_405820()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_610480;
    *((uint128_t *)&v1) = g_610490;
    *((uint128_t *)&v2) = g_6104a0;
    v4 = g_6104b0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4050e0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

extern int512_t g_610480;

int sub_4052d0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_610480 : v1)) = v2;
    return &g_610480;
}

int sub_40540b()
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
    v7 = (unsigned int)sub_403eb0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_405f80();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_403eb0();
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

int sub_409430()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409370();
}

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
} struct_0;

typedef struct struct_1 {
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
} struct_1;

extern unsigned int g_40d5d8;
extern unsigned int g_40d61c;

int sub_408da0()
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
    char *v15[3];  // r12
    char v16[2];  // rdx
    unsigned int v17;  // eax
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
    unsigned long long *v27;  // rdx
    char *v29[3];  // rax
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
    unsigned long long v40;  // rax
    unsigned long long v41;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v42;  // rdx
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
                v49 = (unsigned int)(v20 == 58? 0 : (unsigned int)r13);
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
            v49 = (unsigned int)(v18 == 58? 0 : (unsigned int)r13);
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
                        sub_4086a0();
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
                            v26 = (unsigned long long)v0->field_0;
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
                            sub_4086a0();
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
        v45 = (unsigned int)sub_408780();
        if ((unsigned int)v45 == -1)
        {
            v48 = v15[(long long)(int)v0->field_0];
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
                if (v0->field_0 != (unsigned int)v46)
                {
                    v53 = v15[(long long)(int)v8->field_0];
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        dcgettext(0x0, 0x40d5d8, 0x5);
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
            dcgettext(0x0, 0x40d61c, 0x5);
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
                    dcgettext(0x0, 0x40d5d8, 0x5);
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
        v45 = (unsigned int)sub_408780();
    }
    v63 = v45;
    return v63;
}

extern unsigned int g_6102f4;
extern unsigned int g_6102f8;
extern unsigned int g_6102fc;
extern unsigned int g_6104c0;
extern unsigned int g_6104c4;
extern unsigned int g_6104c8;
extern unsigned long long g_6104d0;
extern unsigned long long g_610508;

int sub_409370()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_6104c0 = g_6102fc;
    g_6104c4 = g_6102f8;
    v1 = (unsigned int)v2;
    v0 = &g_6104c0;
    g_6102fc = g_6104c0;
    g_610508 = g_6104d0;
    g_6102f4 = g_6104c8;
    return sub_408da0();
}

int sub_409740()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_406b50()
{
    unsigned int v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x28]
    char *v5;  // rdx
    unsigned long v7;  // rsi
    unsigned long v9;  // rsi
    char *v10;  // rdi
    unsigned long long v11;  // rdx

    if (((unsigned short)v7 & 0x200) == 0)
    {
        v9 = (unsigned int)v7 * 0x2000 & 0x20000 | (unsigned int)v7 * 128 & 0x40000 | 0x90900;
        v10 = v5;
        v3 = (unsigned int)v7 * 0x2000 & 0x20000 | (unsigned int)v7 * 128 & 0x40000 | 0x90900;
        v11 = 0;
        if ((v9 & 64) != 0)
        {
            v0 = 16;
            v11 = (unsigned int)v3;
            v1 = stack_base + 8;
            v2 = stack_base + -56;
        }
        open(v10, v9, v11);
        return sub_40af60();
    }
}

int sub_406180()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405f80();
}

int sub_406020()
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
        sub_4061d0(); /* do not return */
    }
}

int sub_405670()
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
    return sub_4050e0();
}

int sub_406210()
{
    unsigned long long v1;  // rax

    v1 = fts_open();
    if (v1 != 0)
    {
        return v1;
    }
    else if (*(__errno_location()) != 22)
    {
        sub_4061d0(); /* do not return */
    }
    __assert_fail(); /* do not return */
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[16];
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_40a910()
{
    struct v1;  // rdi
    struct v2;  // rcx
    unsigned long long v3;  // rax
    unsigned int v4;  // esi
    unsigned int v5;  // esi

    v2 = (unsigned long long)(v1->field_14 + ((unsigned int)v1->field_1c ^ 1) & 3);
    v3 = (unsigned int)*((int *)((char *)v1 + 0x4 * v2));
    *((unsigned int *)((char *)v1 + 0x4 * v2)) = v4;
    v5 = v1->field_18;
    v1->field_14 = (unsigned int)v2;
    if (v5 == (unsigned int)v2)
    {
        v1->field_18 = ((unsigned int)v1->field_1c ^ 1) + v1->field_18 & 3;
    }
    v1->field_1c = 0;
    return v3;
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    char padding_10[56];
    unsigned int field_48;
    char field_49;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[56];
    unsigned int field_48;
    char field_49;
} struct_2;

int fts_children()
{
    struct v1;  // rdi
    struct v2;  // rbx
    unsigned int *v3;  // r13
    unsigned int v4;  // esi
    unsigned int v6;  // ebp
    unsigned long long v8;  // rax
    unsigned long long v12;  // rax

    v2 = v1;
    v3 = __errno_location();
    if ((v4 & -8193) == 0)
    {
        *(v3) = 0;
        if (!((*(&((char *)&v1->field_48)[1]) & 64) == 0))
        {
            return 0;
        }
        else if (v1->field_0->field_70 != 9)
        {
            v12 = 0;
            if (v1->field_0->field_70 == 1)
            {
                if (v1->field_8 != 0)
                {
                    sub_406790();
                }
                if (v4 == 0x2000)
                {
                    v2->field_48 = v2->field_48 | 0x2000;
                }
                if (v1->field_0->field_58 == 0 && *((char *)v1->field_0->field_30) != 47 && ((char)v1->field_48 & 4) == 0)
                {
                    v6 = sub_406b50();
                    if (v6 >= 0)
                    {
                        v2->field_8 = (unsigned int)sub_406ec0();
                        if ((*(&((char *)&v2->field_48)[1]) & 2) == 0)
                        {
                            v8 = fchdir(v6);
                            if (v8 == 0)
                            {
                                close(v6);
                            }
                            else
                            {
                                close(v6);
                                v12 = 0;
                                *(v3) = *(v3);
                            }
                        }
                        else
                        {
                            sub_4069b0();
                        }
                        if (v8 == 0 || (*(&((char *)&v2->field_48)[1]) & 2) != 0)
                        {
                            v12 = v2->field_8;
                        }
                    }
                    else
                    {
                        v1->field_8 = 0;
                        v12 = 0;
                    }
                }
                if (*((char *)v1->field_0->field_30) == 47 || v1->field_0->field_58 != 0 || ((char)v1->field_48 & 4) != 0)
                {
                    v12 = sub_406ec0();
                    v1->field_8 = v12;
                }
            }
            return v12;
        }
        return v1->field_0->field_10;
    }
    *(v3) = 22;
    return 0;
}

int sub_406410()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax;
}

int sub_403b90()
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

// int sub_405590()

typedef struct struct_0 {
    char padding_0[28];
    char field_1c;
} struct_0;

int sub_40a900()
{
    struct v1;  // rdi

    return (unsigned long long)v1->field_1c;
}

extern unsigned int g_610500;

int sub_40b030()
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
        if (g_610500 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_40b030();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_610500 = -1;
                    }
                }
            }
            if (*(v12) != 22 || (unsigned int)v15 >= 0)
            {
                g_610500 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_40b030();
        }
        if ((*(v12) == 22 || g_610500 < 0) && ((unsigned int)v15 < 0 || g_610500 < 0) && (g_610500 < 0 || (unsigned int)v15 >= 0) && (g_610500 == -1 || g_610500 >= 0) && ((unsigned int)v15 >= 0 || g_610500 >= 0))
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

extern unsigned long long g_40d637;

int sub_409470()
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
        v5 = &g_40d637;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_409630() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

typedef struct struct_0 {
    struct struct_1 *field_0;
    unsigned long long field_8;
    char padding_10[8];
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[32];
    unsigned int field_48;
    char field_49;
    char padding_4a[14];
    unsigned long long field_58;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_1 *field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[16];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned int field_40;
    unsigned int field_44;
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[8];
    unsigned short field_70;
    char field_72;
    char padding_73[1];
    unsigned short field_74;
    char padding_76[2];
    unsigned long long field_78;
    char padding_80[16];
    unsigned int field_90;
    char padding_94[20];
    unsigned long long field_a8;
} struct_2;

typedef struct struct_5 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[8];
    unsigned long long field_18;
    unsigned long long field_20;
    char padding_28[32];
    unsigned int field_48;
    char field_49;
    char padding_4a[14];
    unsigned long long field_58;
} struct_5;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[16];
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned int field_40;
    unsigned int field_44;
    unsigned long long field_48;
    char padding_50[8];
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[8];
    unsigned short field_70;
    char field_72;
    char padding_73[1];
    unsigned short field_74;
    char padding_76[2];
    unsigned long long field_78;
    char padding_80[16];
    unsigned int field_90;
    char padding_94[20];
    unsigned long long field_a8;
} struct_3;

typedef struct struct_8 {
    char padding_0[1];
    char field_1;
} struct_8;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
    unsigned long long field_10;
    char padding_18[24];
    unsigned long long field_30;
} struct_6;

int fts_read()
{
    void tmp_11;  // tmp #11
    void tmp_9;  // tmp #9
    void tmp_8;  // tmp #8
    void tmp_10;  // tmp #10
    void tmp_13;  // tmp #13
    struct v1;  // rdi
    struct v2;  // rbp
    unsigned long long v3;  // rax
    struct v4;  // r12
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // rbx
    unsigned long long v8;  // rax
    char *v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    void *v12;  // rdi
    unsigned long long v15;  // rax
    unsigned int v16;  // eax
    struct v19;  // rbp
    void *v20;  // rdi
    unsigned long long v22;  // rax
    unsigned int v24;  // eax
    unsigned int v25;  // eax
    struct v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned long long v30;  // rax
    unsigned long v31;  // rdi
    unsigned long long v32;  // rax
    unsigned long long v36;  // rax
    unsigned long long v37;  // r14
    unsigned long long v44;  // rax
    unsigned long long v45[14];  // rbp
    unsigned long long v46;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v48;  // edi
    unsigned long long v49;  // rax

    v2 = v1->field_0;
    if (v1->field_0 != 0 && ((char)(v1->field_48 >> 8) & 64) == 0)
    {
        v3 = v2->field_74;
        v4 = v1;
        v2->field_74 = 3;
        if (v3 != 1)
        {
            if (v1->field_0->field_74 != 2)
            {
            }
            else
            {
                if ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000)
                {
                }
                else
                {
                    v5 = sub_406450();
                    *((unsigned long long *)&v2->field_70) = v5;
                    if (v5 != 1)
                    {
                        v1->field_0 = &v2->padding_0;
                    }
                    else if (((char)v1->field_48 & 4) != 0)
                    {
                        v1->field_0 = &v2->padding_0;
                        v7 = v2;
                    }
                    else
                    {
                        v11 = sub_406b50();
                        *((unsigned long long *)&v2->field_44) = v11;
                        if (v11 >= 0)
                        {
                            *((short *)&v2->field_72) = *((short *)&v2->field_72) | 2;
                            v49 = v2->field_70;
                            v7 = v2;
                        }
                        else
                        {
                            v16 = *(__errno_location());
                            v2->field_70 = 7;
                            v2->field_40 = v16;
                            v1->field_0 = &v2->padding_0;
                        }
                    }
                    if (v5 == 11)
                    {
                        v7 = v2;
                    }
                }
            }
            if (v1->field_0->field_70 != 1 && ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000 || v1->field_0->field_74 != 2))
            {
                while (true)
                {
                    v7 = v2->field_10;
                    if (v2->field_10 != 0)
                    {
                        v1->field_0 = &v7->padding_0;
                        free(v2);
                        if (v7->field_58 != 0)
                        {
                            v6 = v7->field_74;
                            v2 = v7;
                            if (v6 != 2)
                            {
                                break;
                            }
                            v10 = sub_406450();
                            *((unsigned long long *)&v7->field_70) = v10;
                            if (((char)v1->field_48 & 4) == 0 && v10 == 1)
                            {
                                v15 = sub_406b50();
                                *((unsigned long long *)&v7->field_44) = v15;
                                if (v15 >= 0)
                                {
                                    *((short *)&v7->field_72) = *((short *)&v7->field_72) | 2;
                                }
                                else
                                {
                                    v24 = *(__errno_location());
                                    v7->field_70 = 7;
                                    v7->field_40 = v24;
                                }
                            }
                            v7->field_74 = 3;
                        }
                        else
                        {
                            v8 = sub_406a20();
                            if (v8 == 0)
                            {
                                v12 = *((long long *)&v1->padding_4a[11]);
                                if (((unsigned short)v4->field_48 & 258) == 0)
                                {
                                    free(v12);
                                }
                                else if (v12 != 0)
                                {
                                    sub_40a160();
                                }
                                tmp_11 = v7->field_60;
                                v19 = &v7[1].field_58;
                                v20 = v4->field_20;
                                v7->field_48 = v7->field_60;
                                memmove(v20, &v7[1].field_58, tmp_11 + 1);
                                v22 = strrchr();
                                if (v22 != 0 && (v19 != v22 || v19->field_1 != 0))
                                {
                                    v37 = strlen(v22 + 1);
                                    memmove(v19, v22 + 1, v37 + 1);
                                    v7->field_60 = v37;
                                }
                                tmp_9 = v4->field_20;
                                v7->field_38 = v4->field_20;
                                v7->field_30 = tmp_9;
                                sub_406af0();
                                v49 = v7->field_70;
                            }
                            else
                            {
                                v4->field_48 = v4->field_48 | 0x4000;
                            }
                        }
                    }
                    else
                    {
                        v7 = v2->field_8;
                        if (v2->field_8->field_18 != 0)
                        {
                            tmp_8 = v7->field_48;
                            v9 = v4->field_20;
                            v4->field_0 = v7;
                            v9[tmp_8] = 0;
                            v7 = (unsigned long long)(unsigned int)sub_406ec0();
                            if (v7 == 0)
                            {
                                if ((*(&((char *)&v4->field_48)[1]) & 64) != 0)
                                {
                                    break;
                                }
                                v7 = v2->field_8;
                            }
                            else
                            {
                                free(v2);
                            }
                        }
                        if (v2->field_8->field_18 == 0 || v7 == 0)
                        {
                            v1->field_0 = &v7->padding_0;
                            free(v2);
                            if (v7->field_58 != -1)
                            {
                                if (v7->field_70 == 11)
                                {
                                    break;
                                }
                                *((char *)(v1->field_20 + v7->field_48)) = 0;
                                if (v7->field_58 != 0)
                                {
                                    v28 = (unsigned short)*((short *)&v7->field_72);
                                    if (((char)*((short *)&v7->field_72) & 2) != 0)
                                    {
                                        v30 = v1->field_48;
                                        v31 = v7->field_44;
                                        if (((char)v4->field_48 & 4) == 0)
                                        {
                                            if ((v30 & 2) != 0)
                                            {
                                                sub_4069b0();
                                                v31 = v7->field_44;
                                            }
                                            else
                                            {
                                                v36 = fchdir(v31);
                                                if (v36 != 0)
                                                {
                                                    v7->field_40 = *(__errno_location());
                                                    v4->field_48 = v4->field_48 | 0x4000;
                                                }
                                                v31 = v7->field_44;
                                            }
                                        }
                                        close(v31);
                                    }
                                    else if ((v28 & 1) == 0)
                                    {
                                        v32 = sub_406ba0();
                                    }
                                }
                                else
                                {
                                    v29 = sub_406a20();
                                }
                                if (v29 == 0 && v7->field_58 == 0 || v32 == 0 && v7->field_58 != 0 || v7->field_58 != 0 && ((char)*((short *)&v7->field_72) & 2) != 0 || v7->field_58 != 0 && (v28 & 1) != 0)
                                {
                                    v48 = v4->field_48;
                                }
                                else
                                {
                                    v7->field_40 = *(__errno_location());
                                    v4->field_48 = v4->field_48 | 0x4000;
                                    if (v7->field_70 == 2)
                                    {
                                        break;
                                    }
                                    v48 = v4->field_48;
                                }
                                if (v7->field_70 != 2 || v7->field_58 == 0 && v29 != 0 || ((char)*((short *)&v7->field_72) & 2) == 0 && (v28 & 1) == 0 && v7->field_58 != 0 && v32 != 0)
                                {
                                    if (v7->field_40 == 0)
                                    {
                                        v7->field_70 = 6;
                                        sub_406e20();
                                        v48 = v4->field_48;
                                    }
                                    else
                                    {
                                        v7->field_70 = 7;
                                    }
                                }
                                if (((unsigned short)v48 & 0x4000) == 0)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                free(v7);
                                *(__errno_location()) = 0;
                                v1->field_0 = 0;
                            }
                        }
                    }
                }
                if ((v2->field_10 == 0 || v7->field_74 != 4) && (v2->field_10 == 0 || v7->field_58 != 0) && (v2->field_8->field_18 != 0 || v2->field_10 != 0) && (v2->field_10 != 0 || v7 != 0))
                {
                    tmp_10 = (*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20;
                    *((char *)((*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20)) = 47;
                    memmove(tmp_10 + 1, &v7[1].field_58, v7->field_60 + 1);
                    v49 = v7->field_70;
                }
                else if (!(unknown))
                {
                    if (v7->field_58 == -1 && v2->field_10 == 0 && ((*(&((char *)&v4->field_48)[1]) & 64) == 0 || v2->field_8->field_18 == 0) && (v2->field_8->field_18 == 0 || v7 == 0))
                    {
                        return stack_base + 0;
                    }
                    else if (v8 == 0 && v7->field_58 == 0 && v2->field_10 != 0)
                    {
                        v4->field_0 = v7;
                    }
                    else if (unknown)
                    {
                        tmp_13 = v7;
                        return tmp_13;
                    }
                    else if (v2->field_10 == 0 && v7->field_58 != -1 && ((*(&((char *)&v4->field_48)[1]) & 64) == 0 || v2->field_8->field_18 == 0) && (v2->field_8->field_18 == 0 || v7 == 0))
                    {
                        abort(); /* do not return */
                    }
                }
            }
        }
        else
        {
            v2->field_70 = sub_406450();
        }
    }
    if ((v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && ((char)v1->field_48 & 64) != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000 || v1->field_0->field_74 != 2) && v2->field_78 == v1->field_18 || v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000 || v1->field_0->field_74 != 2) && ((char)v1->field_48 & 64) == 0) && v1->field_8 != 0)
    {
        if (!(((char)(v1->field_48 >> 8) & 32) == 0))
        {
            v1->field_48 = v1->field_48;
            sub_406790();
            v1->field_8 = 0;
        }
        else if (sub_406ba0() != 0)
        {
            v7 = v1->field_8;
            v25 = *(__errno_location());
            *((short *)&v2->field_72) = *((short *)&v2->field_72) | 1;
            v2->field_40 = v25;
            if (v7 != 0)
            {
                v27 = v1->field_8;
                do
                {
                    v27->field_30 = v27->field_8->field_30;
                    v27 = v27->field_10;
                }
                while (v27 != 0);
            }
        }
        else
        {
            v7 = v1->field_8;
        }
    }
    if (v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0 != 0 && ((char)v1->field_48 & 64) != 0 && (v1->field_0->field_74 == 2 || v1->field_0->field_74 != 4) && ((unsigned long long)v1->field_0->field_70 - 12 << 48 > 0x1000000000000 || v1->field_0->field_74 != 2) && v2->field_78 != v1->field_18 || v1->field_0->field_70 == 1 && ((char)(v1->field_48 >> 8) & 64) == 0 && v3 != 1 && v1->field_0->field_74 != 2 && v1->field_0 != 0 && v1->field_0->field_74 == 4)
    {
        if ((v2->field_72 & 2) != 0)
        {
            close(v2->field_44);
        }
        if (v1->field_8 != 0)
        {
            sub_406790();
            v1->field_8 = 0;
        }
        v2->field_70 = 6;
        sub_406e20();
    }
    if (unknown)
    {
        v7 = (unsigned int)sub_406ec0();
        v1->field_8 = v7;
        if (v7 == 0 && ((unsigned short)v1->field_48 & 0x4000) == 0)
        {
            if (v2->field_40 != 0 && v2->field_70 != 4)
            {
                v2->field_70 = 7;
            }
            sub_406e20();
        }
    }
    if (unknown)
    {
        v1->field_8 = 0;
    }
    if (unknown)
    {
        tmp_10 = (*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20;
        *((char *)((*((char *)(v7->field_8->field_38 + v7->field_8->field_48 - 1)) != 47? v7->field_8->field_48 : v7->field_8->field_48 - 1) + v4->field_20)) = 47;
        memmove(tmp_10 + 1, &v7[1].field_58, v7->field_60 + 1);
        v49 = v7->field_70;
    }
    if (unknown)
    {
        v4->field_0 = v7;
    }
    if (unknown)
    {
        v44 = v7->field_a8;
        if (v7->field_a8 != 2)
        {
        }
        else
        {
            v45 = v7->field_8;
            if (v7->field_8->field_68 == 0 && ((char)v4->field_48 & 24) == 24)
            {
                v46 = sub_406940();
                if (v46 == 2)
                {
                    v49 = v7->field_70;
                }
            }
        }
    }
    if (unknown)
    {
        abort(); /* do not return */
    }
    if (unknown)
    {
        v49 = sub_406450();
        tmp_10 = v7->field_90;
        *((unsigned long long *)&v7->field_70) = v49;
        if (((unsigned short)tmp_10 & 0xf000) == 0x4000 && v7->field_58 != 0 && v45[13] - 1 <= -3)
        {
            v45[13] = v45[13] - 1;
        }
    }
    if (unknown)
    {
        v4->field_18 = v7->field_78;
    }
    if (unknown)
    {
        *(__errno_location()) = 12;
    }
    if (unknown)
    {
        tmp_13 = v7;
        return tmp_13;
    }
    if (unknown)
    {
        return stack_base + 0;
    }
}

typedef struct struct_0 {
    char padding_0[72];
    unsigned int field_48;
    char field_49;
} struct_0;

int sub_406ba0()
{
    unsigned long v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    unsigned long v2;  // [bp-0xc0]
    struct v4;  // rdi
    struct v5;  // r15
    unsigned long long v6;  // rsi
    unsigned long long v7[17];  // r13
    unsigned long long v8;  // rcx
    unsigned int v10;  // r12d
    char *v11;  // rdi
    unsigned long long v12;  // rcx
    char *v13;  // rsi
    unsigned long long v14;  // cc_dep1
    unsigned long long v15;  // cc_dep2
    unsigned long v16;  // d
    unsigned long long v17;  // cc_dep1
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // r12
    unsigned long long v19;  // rbx
    unsigned long long v21;  // r14
    unsigned int *v22;  // ebp
    unsigned int v24;  // r13d
    unsigned long long v26;  // rax

    v5 = v4;
    v7 = v6;
    v22 = v18;
    v10 = v4->field_48;
    v18 = v4->field_48 & 4;
    if (v8 != 0)
    {
        v11 = ".";
        v12 = 3;
        v13 = v8;
        while (v12 != 0)
        {
            v12 -= 1;
            v14 = *(v13);
            v15 = *(v11);
            v11 = &v11[v16];
            v13 = &v13[v16];
            break;
        }
        v17 = (v14 > v15) - 0 - (v14 < v15);
        if ((char)v17 == 0 && v18 == 0)
        {
            if (!((unsigned int)v18 < 0))
            {
                v18 = v18;
            }
            else if (((unsigned short)v10 & 0x200) != 0)
            {
                v0 = &v5[1].padding_0[19];
                v21 = (unsigned int)sub_40a900();
                if ((char)v21 == 0)
                {
                    v18 = sub_40a950();
                    if (v18 >= 0)
                    {
                        v22 = v18;
                    }
                }
            }
        }
    }
    if ((v8 == 0 || (char)v17 != 0) && v18 == 0 && (unsigned int)v18 >= 0)
    {
        v18 = v18;
    }
    if (v18 != 0)
    {
        if (((unsigned short)v10 & 0x200) != 0 && (unsigned int)v18 >= 0)
        {
            v19 = 0;
            close(v18);
        }
        if ((unsigned int)v18 < 0 || ((unsigned short)v10 & 0x200) == 0)
        {
            v19 = 0;
        }
    }
    if ((unsigned int)v18 < 0 && v18 == 0 && (v8 == 0 || v18 < 0 || ((unsigned short)v10 & 0x200) == 0 || (char)v21 != 0 || (char)v17 != 0))
    {
        v18 = (unsigned int)sub_406b50();
        if ((unsigned int)v18 < 0)
        {
            v19 = -18446744069414584321;
        }
    }
    if (v18 == 0 && ((char)v21 == 0 || (unsigned int)v18 >= 0 || (unsigned int)v18 >= 0) && ((char)v17 == 0 || (unsigned int)v18 >= 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || v8 != 0 || (unsigned int)v18 >= 0) && ((unsigned int)v18 >= 0 || (unsigned int)v18 >= 0 || v18 >= 0) && ((unsigned int)v18 >= 0 || (unsigned int)v18 >= 0 || ((unsigned short)v10 & 0x200) != 0))
    {
        v19 = __fxstat(0x1, v18, (unsigned int)&v1);
        if ((unsigned int)v19 == 0)
        {
            if (v7[15] == *((long long *)&v1) && v7[16] == v2)
            {
                if ((*(&((char *)&v5->field_48)[1]) & 2) == 0)
                {
                    v19 = fchdir(v18);
                }
                else
                {
                    sub_4069b0();
                }
            }
            if (v7[15] != *((long long *)&v1) || v7[16] != v2)
            {
                *(__errno_location()) = 2;
            }
        }
        if (v7[16] != v2)
        {
            v19 = -18446744069414584321;
        }
        if (((*(&((char *)&v5->field_48)[1]) & 2) == 0 || v7[15] != *((long long *)&v1) || v7[16] != v2 || (unsigned int)v19 != 0) && v22 < 0)
        {
            v24 = *(v22);
            close(v18);
            *(__errno_location()) = v24;
        }
    }
    v26 = v19;
    return v26;
}

typedef struct struct_0 {
    char padding_0[116];
    unsigned short field_74;
} struct_0;

int fts_set()
{
    unsigned long v1;  // rdx
    struct v2;  // rsi

    if ((unsigned int)v1 <= 4)
    {
        *((unsigned long *)&v2->field_74) = v1;
        return 0;
    }
    *(__errno_location()) = 22;
    return 1;
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

    v10 = sub_401948();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6356528 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_403eb0()
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
            v26 = (unsigned int)sub_403db0();
            v27 = (unsigned long long)(unsigned int)sub_403db0();
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
                                    v48 = v5;
                                    v5 = v41;
                                    v78 = 0;
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
                        if (v4 != 0)
                        {
                            v40 = v45;
                            v78 = 0;
                        }
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
                if (v76 == 0 && (v81 == 2 & v17) != 0)
                {
                    v3 = v27;
                    v2 = v26;
                    v1 = 0;
                    v76 = (unsigned int)sub_403eb0();
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
                            v76 = (unsigned int)sub_403eb0();
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
                    v46 = sub_409470();
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
                v50 = 0;
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
            if ((v17 == 0 || v76 >= v79) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 || v76 >= v79) && (v17 == 0 || v15 != 1 || v77 != 0) && ((char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0 || v15 != 1 || v77 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v6 != 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v76 == 0 && (v81 == 2 & v17) != 0)
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

int sub_403900()
{
    unsigned long long v1;  // rax

    v1 = sub_403640();
    if (INVALID_IR)
    {
        sub_403760();
        sub_4037e0();
        r9();
        v1 = -1;
    }
    return v1;
}

extern char g_610480;

int sub_405340()
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
    v3 = (v2 == 0? &g_610480 : v2);
    *((int *)(tmp_11? &g_610480 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_610480;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_610480;
        abort(); /* do not return */
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

int sub_40a240()
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
                v2 = (unsigned int)sub_409690();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_409920();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_409920();
                    if (v22 != 0)
                    {
                        v23 = sub_409920();
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

int sub_40af60()
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

int sub_406370()
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
    char padding_0[16];
    unsigned long long field_10;
    char padding_18[88];
    unsigned short field_70;
} struct_0;

extern unsigned long long g_10;
extern unsigned long long g_30;
extern unsigned long long g_58;
extern unsigned short g_70;
extern unsigned long long g_8;
extern unsigned long long g_a8;

int fts_open()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x50]
    char v1;  // [bp-0x42]
    char v2;  // [bp-0x41]
    unsigned long long v3;  // [bp-0x40]
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rbp
    unsigned long long *v7;  // rdi
    unsigned long long v9;  // rbx
    unsigned long v10;  // rdx
    unsigned int v11;  // eax
    char v12;  // ah
    char *v14;  // rdi
    unsigned long long *v15;  // r15
    unsigned long long v16;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // r15
    void *v18;  // rax
    unsigned long long v19[14];  // rcx
    unsigned long long v20;  // r12
    unsigned long long v21;  // rbp
    unsigned long long v22;  // rax
    struct v24;  // rax
    unsigned long long v25;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdi
    unsigned long long v30;  // rax

    if (((unsigned int)v5 & -0x2000) == 0)
    {
        v6 = v5;
        if (((unsigned short)v5 & 516) != 516 && (v5 & 18) != 0)
        {
            v9 = calloc(0x80, 0x1);
            if (v9 != 0)
            {
                *((unsigned long *)(v9 + 64)) = v10;
                if (((char)v5 & 2) == 0)
                {
                    *((unsigned int *)(v9 + 72)) = v5;
                }
                else
                {
                    v11 = v6;
                    v12 = (char)v6 % 0x100 & 253;
                    *((int *)(v9 + 72)) = rax | 4;
                }
                v14 = *(v7);
                *((int *)(v9 + 44)) = -100;
                if (v14 != 0)
                {
                    v15 = v7;
                    v16 = 0;
                    do
                    {
                        v16 = (v16 < strlen(v14)? strlen(v14) : v16);
                        v15 += &g_8;
                        v14 = *(v15);
                    }
                    while (*(v15) != 0);
                }
                v1 = sub_406a80();
                if (v1 != 0)
                {
                    v17 = *(v15);
                    if (*(v15) != 0)
                    {
                        v18 = sub_406700();
                        v19 = v18;
                        v0 = v18;
                        if (v18 != 0)
                        {
                            v17 = *(v15);
                            *((long long *)(v19 + &g_58)) = -1;
                            v19[13] = -1;
                        }
                    }
                    else
                    {
                        v0 = 0;
                    }
                    if (*(v15) == 0 || v18 != 0)
                    {
                        if (v10 != 0)
                        {
                            v1 = (unsigned int)((unsigned int)*((int *)(v9 + 72)) >> &g_8) & 1;
                        }
                        if ((*(v15) != 0 || v10 != 0) && v17 != 0)
                        {
                            v3 = 0;
                            v20 = 0;
                            v21 = 0;
                            v2 = ((unsigned int)v5 % 0x1000 ^ 1) & 1;
                            while (true)
                            {
                                v22 = strlen(v17);
                                if (v20 == 0)
                                {
                                    break;
                                }
                                *((long long *)&((char *)&g_58)[v20]) = 0;
                                *((void **)&((char *)&g_8)[v20]) = v0;
                                *((unsigned long long *)&((char *)&g_30)[v20]) = v20 + 264;
                                if (v1 != 0 && v20 != 0)
                                {
                                    *((long long *)&((char *)&g_a8)[v20]) = 2;
                                    *((unsigned long long **)&((char *)&g_70)[v20]) = &g_8;
                                    if (v10 == 0)
                                    {
                                        *((long long *)&((char *)&g_10)[v20]) = 0;
                                    }
                                }
                                if (v1 == 0 || v20 == 0)
                                {
                                    *((unsigned short *)&((char *)&g_70)[v20]) = sub_406450();
                                    if (v10 == 0)
                                    {
                                        *((long long *)&((char *)&g_10)[v20]) = 0;
                                        if (v20 == 0)
                                        {
                                            v3 = v20;
                                        }
                                    }
                                }
                                if (v10 != 0)
                                {
                                    *((unsigned long long *)&((char *)&g_10)[v20]) = v20;
                                    v20 = (unsigned int)sub_406700();
                                }
                                if (v10 == 0 && (v20 != 0 || v1 != 0) && (v20 != 0 || v20 != 0))
                                {
                                    v3 = v20;
                                    g_10 = v20;
                                }
                                if (v21 <= 1 || v10 == 0)
                                {
                                    break;
                                }
                                v21 += 1;
                                v17 = *((long long *)(v20 + v21 * &g_8));
                                v20 = (unsigned int)sub_406600();
                            }
                            if (v15[v21] == 0 && v20 != 0)
                            {
                                v24 = sub_406700();
                                *((struct_0 **)v9) = v24;
                            }
                            else
                            {
                                sub_406790();
                                free(v0);
                            }
                        }
                        if ((*(v15) == 0 || v17 == 0) && (v10 == 0 || v17 == 0))
                        {
                            v20 = 0;
                        }
                        if ((*(v15) == 0 || v17 == 0 || v24 != 0) && (v10 == 0 || v17 == 0 || v24 != 0))
                        {
                            v24 = sub_406700();
                            *((struct_0 **)v9) = v24;
                        }
                        if (v24 != 0)
                        {
                            *((unsigned long long *)(v24 + &g_10)) = v20;
                            *((unsigned long long **)(v24 + &g_70)) = &g_8;
                            v25 = sub_406af0();
                            if (v25 != 0)
                            {
                                if (((unsigned short)*((int *)(v9 + 72)) & 516) == 0)
                                {
                                    v27 = sub_406b50();
                                    *((unsigned long long *)(v9 + 40)) = v27;
                                    if (v27 < 0)
                                    {
                                        *((int *)(v9 + 72)) = *((int *)(v9 + 72)) | 4;
                                    }
                                }
                                sub_40a8e0();
                            }
                        }
                        if (v25 == 0 || v24 == 0)
                        {
                            sub_406790();
                            free(v0);
                        }
                    }
                    if ((v18 == 0 || v25 == 0 || v24 == 0) && (v25 == 0 || v24 == 0 || *(v15) != 0))
                    {
                        free(*((long long *)(v9 + 32)));
                    }
                }
                if (v25 == 0 || v1 == 0 || v24 == 0 || v18 == 0 && *(v15) != 0)
                {
                    v28 = v9;
                    v9 = 0;
                    free(v28);
                }
            }
        }
    }
    if (((unsigned short)v5 & 516) == 516 || (v5 & 18) == 0 || ((unsigned int)v5 & -0x2000) != 0)
    {
        v9 = 0;
        *((unsigned long long **)&__errno_location()) = &g_10;
    }
    v30 = v9;
    return v30;
}

int sub_409410()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408da0();
}

// int sub_4056f0()

int sub_405d80()
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

extern char g_6104b8;
extern char g_6104b9;

int sub_405f40()
{
    unsigned long long v1;  // rax
    char v2;  // al

    if (g_6104b9 != 0)
    {
        return (unsigned long long)g_6104b8;
    }
    v1 = geteuid();
    g_6104b9 = 1;
    v2 = (unsigned int)v1 == 0;
    g_6104b8 = (unsigned int)v1 == 0;
    return rax;
}

int sub_406400()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | *(v1)) % v2 >> 64;
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

int sub_40a700()
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
    if (sub_409780() != 0)
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
                sub_4098a0();
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
                    if (sub_40a240() == 0)
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
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_409f00()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

// int sub_4055c0()

int sub_409d10()
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

extern unsigned long long g_610350;

int sub_4039c0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_610350 = v1;
    return v2;
}

// int sub_4058e0()

int sub_409450()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408da0();
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

int sub_406340()
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

// int sub_4056e0()

int sub_4061fc()
{
    abort(); /* do not return */
}

extern unsigned long long stdin;

int sub_406290()
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // rbx
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
        v3 = INVALID_IR;
    }
    free(v0);
    v6 = v3;
    return v6;
}

extern unsigned long long g_610360;

int sub_403ad0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_610360 = v1;
    return v2;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_409aa0()
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

int sub_4067e0()
{
    unsigned long long v1;  // rax

    while (true)
    {
        v1 = sub_40a900();
        if (v1 == 0)
        {
            close(sub_40a950());
        }
        else
        {
            return v1;
        }
    }
}

int sub_4063d0()
{
    unsigned long long v1[2];  // rdi
    unsigned long long v2[2];  // rsi
    unsigned long long v3;  // rax
    char v4;  // al

    if (v1[1] != v2[1])
    {
        return 0;
    }
    v3 = *(v2);
    v4 = *(v1) == *(v2);
    return rax;
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_6102d8;
extern uint128_t g_6102e0;
extern unsigned int g_6102f0;
extern int512_t g_610380;

int sub_4050e0()
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
    v17 = g_6102d8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_6102f0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_6102d8 != 6357728)
            {
                v16 = sub_405fe0();
                g_6102d8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_405fe0();
                v17 = v15;
                g_6102d8 = v15;
                *(v15) = g_6102e0;
            }
            memset(&v17[(long long)(int)g_6102f0], 0x0, (int)((unsigned int)v13 + 1 - g_6102f0) * 16);
            g_6102f0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_4061d0(); /* do not return */
        }
    }
    if (g_6102f0 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_403eb0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6357888)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_405f80();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_403eb0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

int sub_405fe0()
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
            sub_4061d0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned int g_40b2a6;
extern unsigned int g_40b400;
extern unsigned int g_40b428;
extern unsigned int g_40b450;
extern unsigned int g_40b4f0;
extern unsigned int g_40b668;
extern unsigned int g_40b748;
extern unsigned int g_40b860;
extern unsigned int g_40b890;
extern unsigned int g_40b8c8;
extern unsigned int g_40b968;
extern unsigned int g_40b9e8;
extern unsigned int g_40baf8;
extern unsigned int g_40bb40;
extern unsigned int g_40bb60;
extern unsigned long long stdout;

int sub_402450()
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
    unsigned long long v31[2];  // rax
    char *v32;  // rdi
    char *v33;  // rsi
    unsigned long long v34;  // rcx
    unsigned long long v35;  // cc_dep1
    unsigned long long v36;  // cc_dep2
    unsigned long v37;  // d
    char *v41;  // rax
    char *v42;  // rax
    unsigned long long v43;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x40b400, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b428, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b450, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b4f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b668, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b748, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b860, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b890, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b8c8, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b968, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40b9e8, 0x5), stdout);
        v0 = "[";
        v31 = &v0;
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
            v31 = &v2;
            v32 = v2;
            if (v2 == 0)
            {
                break;
            }
            v33 = "rm";
            v34 = 3;
            if ((v35 > v36) - 0 - (v35 < v36) == 0)
            {
                break;
            }
            while (v34 != 0)
            {
                v34 -= 1;
                v35 = *(v33);
                v36 = *(v32);
                v32 = &v32[v37];
                v33 = &v33[v37];
                break;
            }
        }
        if (v31[1] != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b2a6, 0x5));
            v42 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40b2a6, 0x5));
            v41 = setlocale(0x5, 0x0);
            if (v41 != 0)
            {
                v43 = strncmp(v41, "en_", 0x3);
            }
            if (v43 == 0 || v41 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bb40, 0x5));
            }
        }
        if ((v31[1] == 0 || strncmp(v42, "en_", 0x3) != 0) && (v31[1] == 0 || v42 != 0) && (v31[1] != 0 || v43 != 0) && (v31[1] != 0 || v41 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40baf8, 0x5));
        }
        if (v31[1] != 0 || v43 != 0 && v41 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bb40, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bb60, 0x5));
    }
    exit(v19); /* do not return */
}

extern int512_t g_610480;

int sub_4052e0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_610480 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_610480 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

// int sub_405930()

int sub_403970()
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

int sub_40afb0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_406300() != 0)
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

extern int512_t g_610480;

int sub_405370()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_610480 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_403eb0();
}

extern unsigned long long __progname_full;
extern unsigned long long g_610368;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_403d10()
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
        g_610368 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern unsigned int g_40b2c1;
extern unsigned int g_40b334;
extern unsigned int g_40b363;
extern unsigned int g_40b37e;
extern unsigned int g_40bb98;
extern unsigned int g_40bc08;
extern unsigned int g_40bc40;
extern unsigned int g_40bc68;
extern unsigned int g_40bc88;
extern unsigned int g_40bcb0;
extern int512_t g_40bcf0;
extern unsigned int g_40d637;
extern unsigned int g_6102fc;
extern unsigned long long g_610508;

int main()
{
    unsigned long v0;  // [bp-0xf8]
    unsigned long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    char v3;  // [bp-0xd8]
    unsigned int v4;  // [bp-0xd4]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0xd0]
    char v6;  // [bp-0xcf]
    char v7;  // [bp-0xce]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0xc8]
    char v9;  // [bp-0xc0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0xbf]
    char v11;  // [bp-0xb8]
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rbp
    unsigned long long v19;  // rax
    unsigned long long v20;  // r13
    char *v21;  // rdi
    unsigned long long v22;  // rcx
    char *v23;  // rsi
    unsigned long long v24;  // cc_dep1
    unsigned long long v25;  // cc_dep2
    unsigned long v26;  // d
    unsigned int v27;  // eax
    unsigned long long v29;  // rbx
    unsigned long long v31;  // rbx
    char v33[2];  // r13
    unsigned long long v34;  // rax
    unsigned long long v35;  // r14
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rbp
    unsigned long long v39;  // r12
    unsigned long long v40;  // rdx
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned int v46;  // edx

    v14 = v13;
    v16 = v15;
    v29 = 1;
    sub_403d10();
    setlocale(0x6, 0x40d637);
    bindtextdomain(0x40b2c1, 0x40bb98);
    textdomain(0x40b2c1);
    sub_40b1f0();
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v7 = 0;
    v8 = 0;
    v9 = isatty(0x0) != 0;
    v20 = 0;
    v10 = 0;
    while (true)
    {
        v19 = sub_4093f0();
        if ((unsigned int)v19 != -1)
        {
            if ((unsigned int)v19 != 105)
            {
                if (v19 > 105)
                {
                    if ((unsigned int)v19 == 129)
                    {
                        v5 = 1;
                    }
                    else if (v19 > 129)
                    {
                        if ((unsigned int)v19 == 131)
                        {
                            v29 = 1;
                        }
                        else if (v19 < 131)
                        {
                            v21 = "--no-preserve-root";
                            v22 = 19;
                            v23 = *((long long *)(v16 + (int)g_6102fc * 8 - 8));
                            while (v22 != 0)
                            {
                                v22 -= 1;
                                v24 = *(v23);
                                v25 = *(v21);
                                v21 = &v21[v26];
                                v23 = &v23[v26];
                                break;
                            }
                            if ((v24 > v25) - 0 - (v24 < v25) == 0)
                            {
                                v29 = 0;
                            }
                            else
                            {
                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x40bc08, 0x5));
                            }
                        }
                        else if ((unsigned int)v19 == 132)
                        {
                            v9 = 1;
                        }
                    }
                    else
                    {
                        if ((unsigned int)v19 == 118)
                        {
                            v10 = 1;
                        }
                        else if ((unsigned int)v19 == 128)
                        {
                            if (g_610508 != 0)
                            {
                                v27 = *((int *)&((char *)&g_40bcf0)[4 * (unsigned long long)(unsigned int)sub_403900()]);
                                if (v27 == 0)
                                {
                                    v4 = 5;
                                    v20 = 0;
                                }
                            }
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v19 != 73)
                    {
                        if (v19 > 73)
                        {
                            if ((unsigned int)v19 == 100)
                            {
                                v7 = 1;
                            }
                            if ((unsigned int)v19 == 102)
                            {
                                v4 = 5;
                                v20 = 0;
                                v3 = 1;
                            }
                        }
                        else
                        {
                            if ((unsigned int)v19 == -131)
                            {
                                v2 = 0;
                                v1 = "Jim Meyering";
                                v0 = "Richard M. Stallman";
                                sub_405e00();
                                exit(0x0); /* do not return */
                            }
                            if ((unsigned int)v19 == -130)
                            {
                                sub_402450(); /* do not return */
                            }
                        }
                    }
                }
            }
        }
        else
        {
            if (g_6102fc < (unsigned int)v14)
            {
                if (v20 != 0 && (v29 == 0 || *(&((char *)&v5)[1]) == 0 || v8 != 0))
                {
                    v37 = v14 - (int)g_6102fc;
                    if (v37 > 3 || *(&((char *)&v5)[1]) != 0)
                    {
                        __fprintf_chk();
                        v43 = sub_406290();
                    }
                }
                if (*(&((char *)&v5)[1]) != 0)
                {
                    if (v29 != 0)
                    {
                        v8 = (unsigned int)sub_405950();
                        if (v8 == 0)
                        {
                            v38 = (unsigned int)sub_4056e0();
                            error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40bc68, 0x5));
                        }
                    }
                    if (v20 != 0 && (v29 == 0 || v8 != 0))
                    {
                        v40 = dcngettext(0x0, 0x40bcb0, 0x40bc88, v37, 0x5);
                    }
                }
                else if (v20 != 0)
                {
                    if (v37 > 3)
                    {
                        v42 = dcngettext(0x0, 0x40b37e, 0x40b363, v37, 0x5);
                    }
                }
            }
            else if (v3 == 0)
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40b334, 0x5));
            }
        }
        if (v19 <= 129 && (unsigned int)v19 == 114 && (unsigned int)v19 != -1 && (unsigned int)v19 != 129 && (unsigned int)v19 != 128 && (unsigned int)v19 != 118 && v19 > 105 && (unsigned int)v19 != 105 || v19 <= 105 && (unsigned int)v19 == 82 && (unsigned int)v19 != 73 && (unsigned int)v19 != 100 && (unsigned int)v19 != -1 && (unsigned int)v19 != 102 && v19 > 73 && (unsigned int)v19 != 105)
        {
            v6 = 1;
        }
        if (v19 <= 73 && v19 <= 105 && (unsigned int)v19 != 73 && (unsigned int)v19 != -1 && (unsigned int)v19 != -131 && (unsigned int)v19 != -130 && (unsigned int)v19 != 105 || v19 <= 129 && (unsigned int)v19 != -1 && (unsigned int)v19 != 129 && (unsigned int)v19 != 128 && (unsigned int)v19 != 118 && v19 > 105 && (unsigned int)v19 != 114 && (unsigned int)v19 != 105 || v19 <= 105 && (unsigned int)v19 != 73 && (unsigned int)v19 != 100 && (unsigned int)v19 != -1 && (unsigned int)v19 != 102 && v19 > 73 && (unsigned int)v19 != 82 && (unsigned int)v19 != 105 || (unsigned int)v19 != 132 && (unsigned int)v19 != 131 && (unsigned int)v19 != -1 && v19 > 129 && (unsigned int)v19 != 129 && v19 >= 131 && v19 > 105 && (unsigned int)v19 != 105)
        {
            for (v31 = 1; (unsigned int)v14 > (unsigned int)v31; v31 += 1)
            {
                v33 = *((long long *)(v16 + v31 * 8));
                if (*((char *)*((long long *)(v16 + (v31 << 3)))) == 45 && v33[1] != 0)
                {
                    v34 = __lxstat(0x1, (unsigned int)v33, (unsigned int)&v11);
                    if (v34 == 0)
                    {
                        v35 = (unsigned int)sub_4056e0();
                        v39 = (unsigned int)sub_405600();
                        dcgettext(0x0, 0x40bc40, 0x5);
                        __fprintf_chk();
                    }
                }
            }
        }
        if ((unsigned int)v19 == 73 && v19 <= 105 && (unsigned int)v19 != -1 && (unsigned int)v19 != 105 || v19 <= 129 && v27 == 1 && (unsigned int)v19 == 128 && (unsigned int)v19 != -1 && g_610508 != 0 && (unsigned int)v19 != 129 && (unsigned int)v19 != 118 && v19 > 105 && (unsigned int)v19 != 105)
        {
            v4 = 4;
            v20 = 1;
            v3 = 0;
        }
        if ((unsigned int)v19 == -1 && v3 == 0 && g_6102fc >= (unsigned int)v14 || v19 <= 73 && v19 <= 105 && (unsigned int)v19 != 73 && (unsigned int)v19 != -1 && (unsigned int)v19 != -131 && (unsigned int)v19 != -130 && (unsigned int)v19 != 105 || v19 <= 129 && (unsigned int)v19 != -1 && (unsigned int)v19 != 129 && (unsigned int)v19 != 128 && (unsigned int)v19 != 118 && v19 > 105 && (unsigned int)v19 != 114 && (unsigned int)v19 != 105 || v19 <= 105 && (unsigned int)v19 != 73 && (unsigned int)v19 != 100 && (unsigned int)v19 != -1 && (unsigned int)v19 != 102 && v19 > 73 && (unsigned int)v19 != 82 && (unsigned int)v19 != 105 || (unsigned int)v19 != 132 && (unsigned int)v19 != 131 && (unsigned int)v19 != -1 && v19 > 129 && (unsigned int)v19 != 129 && v19 >= 131 && v19 > 105 && (unsigned int)v19 != 105)
        {
            sub_402450(); /* do not return */
        }
        if ((unsigned int)v19 == -1 && g_6102fc < (unsigned int)v14 && v20 != 0 && (v37 > 3 || *(&((char *)&v5)[1]) != 0) && (v29 == 0 || *(&((char *)&v5)[1]) == 0 || v8 != 0) && v43 == 0 || (unsigned int)v19 == -1 && g_6102fc >= (unsigned int)v14 && v3 != 0)
        {
            v44 = 0;
        }
        if ((unsigned int)v19 == -1 && g_6102fc < (unsigned int)v14 && v20 != 0 && (v37 > 3 || *(&((char *)&v5)[1]) != 0) && (v29 == 0 || *(&((char *)&v5)[1]) == 0 || v8 != 0) && v43 != 0 || (unsigned int)v19 == -1 && g_6102fc < (unsigned int)v14 && *(&((char *)&v5)[1]) == 0 && v20 != 0 && v37 <= 3 || (unsigned int)v19 == -1 && g_6102fc < (unsigned int)v14 && (v29 == 0 || *(&((char *)&v5)[1]) == 0 || v8 != 0) && v20 == 0)
        {
            v45 = sub_402f50();
            v46 = (unsigned int)v45 - 2;
            v44 = (char)((unsigned int)v45 == 4);
            if (v46 > 2)
            {
                __assert_fail(); /* do not return */
            }
        }
        if ((unsigned int)v19 == 105 || v19 <= 129 && g_610508 == 0 && (unsigned int)v19 == 128 && (unsigned int)v19 != -1 && (unsigned int)v19 != 129 && (unsigned int)v19 != 118 && v19 > 105 && (unsigned int)v19 != 105 || v19 <= 129 && (unsigned int)v19 == 128 && (unsigned int)v19 != -1 && v27 != 0 && g_610508 != 0 && v27 != 1 && (unsigned int)v19 != 129 && (unsigned int)v19 != 118 && v19 > 105 && v27 != 2 && (unsigned int)v19 != 105)
        {
            v4 = 3;
            v20 = 0;
            v3 = 0;
        }
        if (((unsigned int)v19 == -1 && g_6102fc < (unsigned int)v14 && v20 != 0 && (v37 > 3 || *(&((char *)&v5)[1]) != 0) && (v29 == 0 || *(&((char *)&v5)[1]) == 0 || v8 != 0) && v43 != 0 || (unsigned int)v19 == -1 && g_6102fc < (unsigned int)v14 && *(&((char *)&v5)[1]) == 0 && v20 != 0 && v37 <= 3 || (unsigned int)v19 == -1 && g_6102fc < (unsigned int)v14 && (v29 == 0 || *(&((char *)&v5)[1]) == 0 || v8 != 0) && v20 == 0) && v46 <= 2 || (unsigned int)v19 == -1 && g_6102fc < (unsigned int)v14 && v20 != 0 && (v37 > 3 || *(&((char *)&v5)[1]) != 0) && (v29 == 0 || *(&((char *)&v5)[1]) == 0 || v8 != 0) && v43 == 0 || (unsigned int)v19 == -1 && g_6102fc >= (unsigned int)v14 && v3 != 0)
        {
            return v44;
        }
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_409af0()
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

// int sub_40b170()

// int sub_4058c0()

int sub_406130()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_405f80();
}

int sub_40af10()
{
    unsigned int v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long v2;  // [bp-0x40]
    unsigned long v3;  // [bp-0x20]
    unsigned long v5;  // rcx
    char v6;  // dl

    v3 = v5;
    if ((v6 & 64) != 0)
    {
        v0 = 24;
        v1 = stack_base + 8;
        v2 = stack_base + -56;
    }
    openat();
    return sub_40af60();
}

int sub_406420()
{
    unsigned long long v1;  // rax
    struct struct_0 *v2;  // rdi
    struct struct_0 *v3;  // rsi

    v1 = -18446744069414584321;
    if (*(v2)->field_80 >= *(v3)->field_80)
    {
        v1 = (char)(*(v2)->field_80 > *(v3)->field_80);
    }
    return v1;
}

// int sub_405910()

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned int field_28;
    unsigned int field_2c;
    char padding_30[24];
    unsigned int field_48;
    char padding_4c[4];
    unsigned long long field_50;
    unsigned long long field_58;
} struct_0;

int fts_close()
{
    struct v1;  // rdi
    struct v2;  // rbp
    unsigned long long v3[12];  // rdi
    unsigned long long v4[12];  // rbx
    unsigned long long v6;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned int *v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax
    void *v16;  // rdi
    unsigned long long v18;  // rax

    v2 = v1;
    v3 = v1->field_0;
    if (v3 != 0)
    {
        if ((char)(v3[11] - 0 >> 63))
        {
            v4 = v3;
        }
        else
        {
            while (true)
            {
                v4 = v3[2];
                if (v3[2] != 0)
                {
                    free(v3);
                    v3 = v4;
                    if ((char)(v4[11] - 0 >> 63))
                    {
                        break;
                    }
                }
                else
                {
                    v4 = v3[1];
                    free(v3);
                    v3 = v4;
                    if ((char)(v4[11] - 0 >> 63))
                    {
                        break;
                    }
                }
            }
        }
        free(v4);
    }
    if (v2->field_8 != 0)
    {
        sub_406790();
    }
    free(v2->field_10);
    free(v2->field_20);
    v6 = v2->field_48;
    if (((char)(v2->field_48 >> 8) & 2) != 0)
    {
        if (v2->field_2c >= 0)
        {
            v9 = close(v2->field_2c);
            if (v9 != 0)
            {
                v12 = (unsigned int)*(__errno_location());
            }
        }
    }
    else
    {
        if ((v6 & 4) == 0)
        {
            v8 = fchdir(v2->field_28);
            if (v8 == 0)
            {
                v10 = close(v2->field_28);
                if (v10 != 0)
                {
                    v11 = __errno_location();
                }
            }
            else
            {
                v11 = __errno_location();
                v12 = *(v11);
                v13 = close(v2->field_28);
            }
            if (((unsigned int)v12 == 0 || v8 == 0) && (v8 == 0 || v13 != 0) && (v10 != 0 || v8 != 0))
            {
                v12 = *(v11);
            }
        }
    }
    if (((char)(v2->field_48 >> 8) & 2) == 0 && (v6 & 4) != 0 || v2->field_2c < 0 && ((char)(v2->field_48 >> 8) & 2) != 0 || v9 == 0 && ((char)(v2->field_48 >> 8) & 2) != 0 || v10 == 0 && v8 == 0 && ((char)(v2->field_48 >> 8) & 2) == 0)
    {
        v12 = 0;
    }
    sub_4067e0();
    if (v2->field_50 != 0)
    {
        sub_40a160();
    }
    v16 = v2->field_58;
    if (!(((unsigned short)v2->field_48 & 258) != 0))
    {
        free(v16);
    }
    else if (v16 != 0)
    {
        sub_40a160();
    }
    free(v2);
    if ((unsigned int)v12 != 0)
    {
        *(__errno_location()) = v12;
        v12 = -18446744069414584321;
    }
    v18 = v12;
    return v18;
}

extern unsigned int g_40d48f;
extern unsigned int g_610280;

int sub_4061d0()
{
    dcgettext(0x0, 0x40d48f, 0x5);
    error(g_610280, 0x0, "%s");
}

int sub_406a20()
{
    unsigned int v1[19];  // rdi
    char v4;  // bpl

    if (((char)v1[9] & 4) == 0)
    {
        if (((char)(v1[9] >> 8) & 2) != 0)
        {
            sub_4069b0();
        }
        else
        {
            v4 = fchdir(v1[5]) != 0;
        }
    }
    sub_4067e0();
    return stack_base + 0;
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

double sub_409780()
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
        v7 = sub_409750();
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

typedef struct struct_0 {
    char padding_0[8];
    char field_8;
    char padding_9[39];
    unsigned long long field_30;
} struct_0;

int sub_402a30()
{
    struct v1;  // rdx
    unsigned long long v2;  // rax
    unsigned int v3;  // edi
    unsigned int v4;  // esi
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax
    unsigned long v7;  // rcx
    unsigned int *v8;  // rax

    v2 = v1->field_30;
    if (v1->field_30 == -1)
    {
        v5 = __fxstatat(0x1, v3, v4, (unsigned int)v1, 0x100);
        if (v5 != 0)
        {
            v1->field_30 = -2;
            v8 = __errno_location();
            v7 = (int)*(v8);
            *((long long *)&v1->field_8) = (int)*(v8);
            v1 = v7;
        }
        else
        {
            v6 = v1->field_30;
        }
    }
    if (v5 == 0 || v1->field_30 != -1)
    {
        if (!(INVALID_IR))
        {
            return 0;
        }
        v8 = __errno_location();
        v1 = *((int *)&v1->field_8);
    }
    if (INVALID_IR)
    {
        *((struct_0 **)&v8) = v1;
        return -18446744069414584321;
    }
}

extern int512_t g_40d6f0;

int sub_4098a0()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4249328)
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
            *(v1) = &g_40d6f0;
            return 0;
        }
    }
    if (unknown)
    {
        return 1;
    }
}

extern unsigned long long g_60fe30;

int sub_40b208()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_60fe30;
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
    unsigned int field_0;
    char padding_4[12];
    unsigned int field_10;
    unsigned int field_14;
    unsigned int field_18;
    char field_1c;
} struct_0;

int sub_40a950()
{
    struct v1;  // rdi
    struct v2;  // rdx
    unsigned long long v3;  // rax

    if (v1->field_1c != 0)
    {
        abort(); /* do not return */
    }
    v2 = (unsigned long long)v1->field_14;
    v3 = (unsigned int)*((int *)((char *)v1 + 0x4 * v2));
    *((unsigned int *)((char *)v1 + 0x4 * v2)) = v1->field_10;
    if ((unsigned int)v2 != v1->field_18)
    {
        v1->field_14 = v1->field_14 + 3 & 3;
        return v3;
    }
    v1->field_1c = 1;
    return v3;
}

int sub_40a6c0()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_40a440();
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

int sub_40a160()
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

extern uint128_t g_610480;
extern uint128_t g_610490;
extern uint128_t g_6104a0;
extern unsigned long long g_6104b0;

int sub_4056ff()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_6104b0;
    *((uint128_t *)&v0) = g_610480;
    *((uint128_t *)&v1) = g_610490;
    *((uint128_t *)&v2) = g_6104a0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4050e0();
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_409a90()
{
    struct v1;  // rdi

    return v1->field_20;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4063f0()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1->field_8) % v2 >> 64;
}

extern unsigned int g_40c2c8;
extern unsigned long long stderr[7];

int sub_4037e0()
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
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40c2c8, 0x5), stderr);
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
                    sub_405930();
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
                sub_405930();
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

int sub_4057b0()
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
    return sub_4050e0();
}

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    char padding_18[32];
    unsigned long long field_38;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_406600()
{
    unsigned long long v1;  // rdx
    unsigned long long v2;  // r12
    unsigned long long v3[8];  // rdi
    struct v4;  // rbp
    unsigned long long v5;  // rsi
    unsigned long long *v6;  // rdi
    unsigned long long *v7;  // rdx
    struct v8;  // rbx
    unsigned long long *v9;  // r8
    unsigned long long v11[2];  // rdx
    struct v12;  // rsi
    unsigned long long v13;  // rcx
    unsigned long long v14;  // rdi
    struct v15;  // rdx

    v2 = v1;
    v4 = v3;
    v8 = v5;
    v6 = v3[2];
    if (v4->field_38 < v1)
    {
        v4->field_38 = v1 + 40;
        if (v1 + 40 <= 2305843009213693951)
        {
            v6 = realloc(v6, (v1 + 40) * 8);
            if (v6 != 0)
            {
                v4->field_10 = &v6;
            }
            else
            {
                v6 = v4->field_10;
            }
        }
        if (v6 == 0 || v1 + 40 > 2305843009213693951)
        {
            free(v6);
            v4->field_10 = 0;
            v4->field_38 = 0;
            return v5;
        }
    }
    if (v4->field_38 >= v1 || v1 + 40 <= 2305843009213693951 && v6 != 0)
    {
        v7 = v6;
        if (v5 != 0)
        {
            do
            {
                v7 = &v7[1];
                v7[-1] = v8;
                v8 = v8->field_10;
            }
            while (v8 != 0);
        }
        qsort();
        v9 = v4->field_10;
        v11 = v4->field_10;
        v12 = v4->field_10->field_0;
        v13 = v2 - 1;
        if (v2 == 1)
        {
            v15 = v4->field_10->field_0;
        }
        else
        {
            while (true)
            {
                v14 = v11[1];
                v11 = &v11[1];
                v12->field_10 = v14;
                v13 -= 1;
                if (v13 == 1)
                {
                    break;
                }
                v12 = *(v11);
            }
            v15 = v9[v2 + -1];
        }
        v15->field_10 = 0;
        return v15;
    }
}

int sub_406a80()
{
    unsigned long long *v1;  // rdi
    unsigned long long *v2;  // rbx
    void *v3;  // rdi
    unsigned long long *v4;  // rsi
    unsigned long v5;  // rdx
    unsigned long v6;  // rax
    unsigned long long v7;  // rax

    v2 = v1;
    v3 = *(v1);
    v6 = *(v4) + v5 + 0x100;
    if (*(v4) <= *(v4) + v5 + 0x100)
    {
        *(v4) = *(v4) + v5 + 0x100;
        v7 = realloc(v3, v6);
        if (v7 != 0)
        {
            *(v2) = v7;
            return 1;
        }
        free(*(v2));
        *(v2) = 0;
        return 0;
    }
    free(v3);
    *(v2) = 0;
    *(__errno_location()) = 36;
    return 0;
}

int sub_4093d0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_409370();
}

int sub_4061b0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_409dd0()
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

// int sub_4057a0()

int sub_409ec0()
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

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
    char field_9;
    char field_a;
    char padding_b[5];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_4 {
    char padding_0[8];
    char field_8;
    char field_9;
    char field_a;
    char padding_b[5];
    unsigned long long field_10;
} struct_4;

typedef struct struct_8 {
    char padding_0[24];
    unsigned long long field_18;
} struct_8;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[40];
    unsigned long long field_38;
    char padding_40[24];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
    char padding_72[6];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_5;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
    char padding_10[40];
    unsigned long long field_38;
    char padding_40[24];
    unsigned long long field_58;
    char padding_60[16];
    unsigned short field_70;
    char padding_72[6];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_6;

extern unsigned int g_40bf02;
extern unsigned int g_40bf26;
extern unsigned int g_40bf39;
extern unsigned int g_40bf82;
extern unsigned int g_40c010;
extern unsigned int g_40c048;
extern unsigned int g_40c078;
extern unsigned int g_40c0b8;
extern unsigned int g_40c0f0;
extern unsigned int g_40c120;
extern unsigned int g_40c1e0;

int sub_402f50()
{
    unsigned int v0;  // [bp-0x3c]
    unsigned long long *v2;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // r12
    struct v4;  // r13
    struct v5;  // rbp
    struct v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // r12
    unsigned long long v9;  // r12
    char *v10;  // rdx
    unsigned int v11;  // r14d
    unsigned long long v12;  // r15
    /*INVALID_EQUAL_UNDEFINED*/
undefined v15;  // r14
    char v16[21];  // rax
    unsigned long long v17;  // rdx
    char v18;  // dl
    unsigned long long v19;  // rax
    char v22[2];  // rax
    unsigned long long v23;  // rdx
    char v24;  // dl
    unsigned long long v25;  // rax
    unsigned long long v26[12];  // rax
    unsigned long long v27;  // r15
    unsigned long long v28;  // r12
    char *v29;  // rdi
    unsigned long long v30;  // rcx
    unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // cc_dep2
    unsigned long v33;  // d
    unsigned long long v35;  // r12
    unsigned long long v36;  // r12
    struct v39;  // rbx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v40;  // rsi
    unsigned long long v41;  // r14
    unsigned long long v43[12];  // rax
    unsigned long long v45;  // rbx
    unsigned long long v46[12];  // rax
    unsigned int *v49;  // rbx
    unsigned int v50;  // eax
    unsigned long long v51;  // rbp
    unsigned long long v54;  // rax

    if (*(v2) != 0)
    {
        v4 = v40;
        v3 = 2;
        v5 = (unsigned long long)(unsigned int)sub_406210();
        while (true)
        {
            v6 = fts_read();
            v39 = v6;
            if (v6 == 0)
            {
                break;
            }
            while (true)
            {
                v7 = v6->field_70;
                if (v7 << 48 <= 0xd000000000000)
                {
                    /* goto *((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)); */
                    if (*((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4206528)
                    {
                        v8 = (unsigned int)sub_4057b0();
                        v10 = (unsigned long long)dcgettext(0x0, 0x40bf39, 0x5);
                    }
                    if (*((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4206688)
                    {
                        if (v7 == 6 && v39->field_78 != v5->field_18 && v39->field_58 > 0 && v4->field_8 != 0)
                        {
                            v43 = v39->field_8;
                            if (!((char)(v39->field_8->field_58 - 0 >> 63)))
                            {
                                while (v43[4] == 0)
                                {
                                    v43[4] = 1;
                                    v43 = v43[1];
                                    if ((char)(v43[11] - 0 >> 63))
                                    {
                                        break;
                                    }
                                }
                            }
                            v3 = 4;
                            v45 = (unsigned int)sub_4056e0();
                            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c0f0, 0x5));
                        }
                        if (v39->field_78 == v5->field_18 || v39->field_58 <= 0 || v4->field_8 == 0 || v7 != 6)
                        {
                            v41 = (unsigned int)sub_402aa0();
                            if ((unsigned int)v41 == 2)
                            {
                                v41 = (unsigned int)sub_402820();
                            }
                        }
                    }
                    if (*((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4206888)
                    {
                        if (v4->field_9 == 0)
                        {
                            if (v4->field_a != 0)
                            {
                                v11 = openat();
                                if (v11 >= 0)
                                {
                                    v12 = fdopendir(v11);
                                    if (v12 != 0)
                                    {
                                        *(v15) = 0;
                                        v15 = __errno_location();
                                        while (true)
                                        {
                                            v16 = readdir();
                                            if (v16 != 0)
                                            {
                                                if (v16[2 + 3] == 46)
                                                {
                                                    v17 = 0;
                                                    v18 = v16[2 + 4] == 46;
                                                    v19 = v16[2 + 4 + rdx];
                                                }
                                                closedir();
                                            }
                                            else
                                            {
                                                v15 = *(v15);
                                                closedir();
                                                if (v15 != 0)
                                                {
                                                    break;
                                                }
                                            }
                                        }
                                    }
                                    else
                                    {
                                        close(v11);
                                    }
                                }
                                if (v4->field_a != 0)
                                {
                                    v3 = 39;
                                }
                            }
                            if ((v4->field_a == 0 || v4->field_a == 0) && (v4->field_a == 0 || v11 < 0 || v12 == 0))
                            {
                                v3 = 21;
                            }
                            if (v4->field_a == 0 || v11 < 0 || v12 == 0 || v4->field_a != 0)
                            {
                                v15 = (unsigned long long)(unsigned int)sub_4056e0();
                                error(0x0, v3, (unsigned long long)dcgettext(0x0, 0x40bf02, 0x5));
                                v26 = v39->field_8;
                                if (!((char)(v39->field_8->field_58 - 0 >> 63)))
                                {
                                    while (true)
                                    {
                                        if (v26[4] == 0)
                                        {
                                            v26[4] = 1;
                                            v26 = v26[1];
                                            if ((char)(v26[11] - 0 >> 63))
                                            {
                                                break;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (v39->field_58 == 0 && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v11 >= 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v12 != 0))
                        {
                            v22 = sub_403b90();
                            if (v22[0] == 46)
                            {
                                v23 = 0;
                                v24 = v22[1] == 46;
                                v25 = v22[1 + rdx];
                            }
                        }
                    }
                    if (*((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4206832)
                    {
                        v9 = (unsigned int)sub_4057b0();
                        v10 = (unsigned long long)dcgettext(0x0, 0x40c120, 0x5);
                    }
                    if (*((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4206528 || *((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4206832)
                    {
                        error(0x0, v40, v10);
                    }
                }
                if (*((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4207976 || v7 << 48 > 0xd000000000000)
                {
                    v51 = (unsigned int)sub_4057b0();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c1e0, 0x5));
                    abort(); /* do not return */
                }
                if (unknown)
                {
                    v29 = "/";
                    v30 = 2;
                    v40 = v39->field_38;
                    while (v30 != 0)
                    {
                        v30 -= 1;
                        v31 = *(v40);
                        v32 = *(v29);
                        v29 = &v29[v33];
                        v40 = &v40[v33];
                        break;
                    }
                    if ((v31 > v32) - 0 - (v31 < v32) == 0)
                    {
                        v35 = (unsigned int)sub_4056e0();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c048, 0x5));
                    }
                    else
                    {
                        v15 = (unsigned int)sub_405600();
                        v36 = (unsigned int)sub_405600();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c078, 0x5));
                    }
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c0b8, 0x5));
                }
                if (v7 << 48 <= 0xd000000000000 && *((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4206888 && v39->field_58 == 0 && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v11 >= 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v12 != 0) && v22[0] == 46 && v25 != 0 && v25 == 47 || v7 << 48 <= 0xd000000000000 && *((long long *)((unsigned long long)(unsigned int)ax * 8 + 4243992)) == 4206888 && v39->field_58 == 0 && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v11 >= 0) && (v4->field_9 != 0 || v4->field_a != 0) && (v4->field_9 != 0 || v12 != 0) && v22[0] == 46 && v25 == 0)
                {
                    v27 = (unsigned int)sub_405600();
                    v15 = (unsigned long long)(unsigned int)sub_405600();
                    v28 = (unsigned int)sub_405600();
                    error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x40c010, 0x5));
                }
                if (unknown)
                {
                    v41 = (unsigned int)sub_402aa0();
                    if ((unsigned int)v41 == 2)
                    {
                        if (v0 != 4)
                        {
                            break;
                        }
                        v41 = (unsigned int)sub_402820();
                        fts_set();
                        fts_read();
                        if ((unsigned int)v41 == 2)
                        {
                            break;
                        }
                    }
                    v46 = v39->field_8;
                    if (!((char)(v39->field_8->field_58 - 0 >> 63)))
                    {
                        while (v46[4] == 0)
                        {
                            v46[4] = 1;
                            v46 = v46[1];
                            if ((char)(v46[11] - 0 >> 63))
                            {
                                break;
                            }
                        }
                    }
                    fts_set();
                    fts_read();
                }
                if (unknown)
                {
                    if ((unsigned int)(v41 - 2) > 2)
                    {
                        __assert_fail(); /* do not return */
                    }
                    else if ((unsigned int)v41 != 4)
                    {
                        if ((unsigned int)v41 != 3)
                        {
                            break;
                        }
                        v3 = (unsigned int)((unsigned int)v3 == 2? 3 : (unsigned int)v3);
                    }
                    else
                    {
                        v3 = 4;
                    }
                }
                if (unknown)
                {
                    v3 = 4;
                    fts_set();
                    fts_read();
                    v6 = fts_read();
                    v39 = v6;
                    if (v6 == 0)
                    {
                        break;
                    }
                }
            }
            if (unknown)
            {
                v6 = fts_read();
            }
            else
            {
                v49 = __errno_location();
                v50 = *(v49);
            }
        }
        v49 = __errno_location();
        v50 = *(v49);
        v3 = 4;
        error(0x0, *(v49), (unsigned long long)dcgettext(0x0, 0x40bf26, 0x5));
        if (fts_close() != 0 || fts_close() != 0)
        {
            v3 = 4;
            error(0x0, *(v49), (unsigned long long)dcgettext(0x0, 0x40bf82, 0x5));
        }
    }
    else
    {
        v3 = 2;
    }
    v54 = v3;
    return v54;
}

extern int512_t g_40c3d6;
extern int512_t g_40c3da;

int sub_403db0()
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
        v3 = sub_40a9a0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40c3d6 : 4244449);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40c3da : 4244445);
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

int sub_40a0b0()
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

int sub_4086a0()
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

int sub_403bf0()
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

int sub_409690()
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

extern unsigned int g_40d12b;
extern unsigned int g_40d12f;
extern unsigned int g_40d13f;
extern unsigned int g_40d156;
extern unsigned int g_40d1a0;
extern unsigned int g_40d270;
extern unsigned int g_40d290;
extern unsigned int g_40d2b8;
extern unsigned int g_40d2e0;
extern unsigned int g_40d310;

int sub_4059a0()
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
    dcgettext(0x0, 0x40d12b, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40d1a0, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40d12f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40d13f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40d156, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x40d270, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x40d290, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x40d2b8, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x40d2e0, 0x5);
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
        dcgettext(0x0, 0x40d310, 0x5);
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

int sub_406300()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_406370();
    }
}

extern struct g_6102d8;
extern unsigned long long g_6102e0;
extern unsigned long long g_6102e8;
extern unsigned int g_6102f0;
extern unsigned long long g_610380;

int sub_4054f0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_6102f0;
    if (g_6102f0 > 1)
    {
        v2 = &g_6102d8[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_6102d8[(unsigned long long)(g_6102f0 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_6102d8->field_8 != 6357888)
    {
        v1 = free(g_6102d8->field_8);
        g_6102e0 = 0x100;
        g_6102e8 = &g_610380;
    }
    if (g_6102d8 != 6357728)
    {
        v1 = free(g_6102d8);
        g_6102d8 = &g_6102e0;
    }
    g_6102f0 = 1;
    return v1;
}

int sub_409e40()
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
    char padding_0[24];
    unsigned int field_18;
    char padding_1c[20];
    unsigned long long field_30;
} struct_0;

// int sub_403c20()

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_409920()
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
                        v8 = sub_409750();
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
                    v13 = (unsigned long long)(unsigned int)sub_409750();
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

int sub_4093f0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_409370();
}

extern int512_t g_610268;

// int sub_40b1f0()

extern unsigned int g_40d172;
extern unsigned int g_40d187;
extern unsigned int g_40d3b8;

int sub_405ec0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d172, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40d187, 0x5));
    dcgettext(0x0, 0x40d3b8, 0x5);
}

typedef struct struct_0 {
    char field_0;
    char padding_1[3];
    unsigned int field_4;
    char padding_8[1];
    char field_9;
    char field_a;
    char padding_b[13];
    char field_18;
} struct_0;

typedef struct struct_2 {
    char padding_0[44];
    unsigned int field_2c;
} struct_2;

extern unsigned int g_40bf02;
extern unsigned int g_40bf13;
extern unsigned int g_40bf98;
extern unsigned int g_40bfc8;
extern unsigned int g_40bfe8;

int sub_402aa0()
{
    unsigned long v0;  // [bp-0xe0]
    unsigned int v1;  // [bp-0xd8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0xd0]
    unsigned int v3;  // [bp-0xb0]
    unsigned long long v4;  // [bp-0x98]
    struct v6;  // rcx
    struct v7;  // rbp
    struct v8;  // rdi
    unsigned long long v10[8];  // rsi
    unsigned int *v11;  // r9
    char v12;  // dl
    unsigned long long v14;  // rbx
    char v15;  // dl
    char v16;  // bl
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // rax
    char v20[21];  // rax
    unsigned long long v21;  // rdx
    char v22;  // dl
    unsigned long long v23;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rax
    unsigned int *v30;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v31;  // r12d
    /*INVALID_EQUAL_UNDEFINED*/
undefined v32;  // r15d
    unsigned long long v33;  // rax
    unsigned long long v34;  // rbx
    unsigned long long v35;  // rbx
    unsigned int v36;  // r8d
    unsigned long long v37;  // rbx
    unsigned long long v38;  // rbx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rdx
    unsigned long long v41;  // rdx
    unsigned long long v42;  // rax
    unsigned long long v43;  // r12
    unsigned long long v44;  // rax

    v7 = v6;
    v1 = v8->field_2c;
    *((unsigned long long [8])&v0) = v10[7];
    if (v11 != 0)
    {
        *(v11) = 2;
        v14 = 0;
        v16 = v15 != 0;
        v4 = -1;
        v14 = (unsigned int)rbx * 4;
        if (v2 >= 0)
        {
            v2 = openat();
            v18 = fdopendir(v2);
            if (v18 != 0)
            {
                v2 = __errno_location();
                *(v2) = 0;
                while (true)
                {
                    v20 = readdir();
                    if (v20 != 0)
                    {
                        if (v20[2 + 3] == 46)
                        {
                            v21 = 0;
                            v22 = v20[2 + 4] == 46;
                            v23 = v20[2 + 4 + rdx];
                        }
                        closedir();
                    }
                    else
                    {
                        v2 = *(v2);
                        closedir();
                        if (v2 != 0)
                        {
                            break;
                        }
                        v18 = 1;
                        v19 = 4;
                    }
                }
                if (v20 == 0 || v20[2 + 3] != 46 || v23 != 47 && v23 != 0)
                {
                    v18 = 0;
                    v19 = 3;
                }
                else if (v2 == 0 && v20 == 0)
                {
                    *((unsigned long *)&v11) = v19;
                }
            }
            else
            {
                close(v2);
                v19 = 3;
            }
        }
        if (v2 < 0 || v18 != 0)
        {
            v18 = 0;
            v19 = 3;
        }
        *((unsigned long *)&v11) = v19;
    }
    else
    {
        v4 = -1;
        v14 = !(0 - (unsigned int)(char)(v12 < 1)) & 4;
        v18 = (unsigned int)(v12 != 0? 0 : (unsigned int)rdx);
    }
    if (v10[4] == 0)
    {
        v26 = v7->field_4;
        if (v7->field_4 != 5 && v7->field_0 == 0 && (v6->field_4 == 3 || v7->field_18 != 0))
        {
            v27 = sub_405f40();
            if (v27 == 0)
            {
                v28 = sub_402a30();
                if (v28 == 0 && ((unsigned short)v3 & 0xf000) != 0xa000)
                {
                    v29 = faccessat(v1, (unsigned int)v10[6], 0x2, 0x200);
                    if (v29 != 0)
                    {
                        v30 = __errno_location();
                        v31 = *(v30);
                        if (*(v30) == 13)
                        {
                            v32 = 1;
                        }
                    }
                }
            }
        }
    }
    if (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0)
    {
        v26 = v7->field_4;
    }
    if ((v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0 || v10[4] == 0 && v7->field_4 != 5 && v7->field_0 != 0) && v26 == 3)
    {
        v32 = 0;
    }
    if (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 != 0 && *(v30) == 13 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0 || v10[4] == 0 && v7->field_4 != 5 && v7->field_0 != 0) && v26 == 3)
    {
        if (v14 != 0)
        {
        }
        else
        {
            v33 = sub_402a30();
        }
    }
    if (v27 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v28 != 0 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 != 0 && *(v30) == 13 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0 || v10[4] == 0 && v7->field_4 != 5 && v7->field_0 != 0) && v26 == 3) && v14 == 0 && v33 != 0)
    {
        v31 = (unsigned int)*(__errno_location());
    }
    if (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 != 0 && *(v30) != 13 || v27 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v28 != 0 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 != 0 && *(v30) == 13 || (v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && ((unsigned short)v3 & 0xf000) != 0xa000 && (v6->field_4 == 3 || v7->field_18 != 0) && v29 == 0 || v27 == 0 && v28 == 0 && v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && ((unsigned short)v3 & 0xf000) == 0xa000 || v7->field_0 == 0 && v10[4] == 0 && v7->field_4 != 5 && (v6->field_4 == 3 || v7->field_18 != 0) && v27 != 0 || v10[4] == 0 && v7->field_4 != 5 && v7->field_0 != 0) && v26 == 3) && v14 == 0 && v33 != 0)
    {
        v34 = (unsigned int)sub_4056e0();
    }
    if (unknown)
    {
        if (v7->field_9 == 0)
        {
        }
        else
        {
            v35 = (unsigned int)sub_4056e0();
            if (v36 == 2 && v18 == 0)
            {
                if (v32 == 0)
                {
                    v40 = dcgettext(0x0, 0x40bfc8, 0x5);
                }
                else
                {
                    v41 = dcgettext(0x0, 0x40bf98, 0x5);
                }
                __fprintf_chk();
            }
        }
    }
    if (unknown)
    {
        v31 = 21;
        v37 = (unsigned int)sub_4056e0();
    }
    if (unknown)
    {
        v38 = (unsigned int)sub_4056e0();
    }
    if (unknown)
    {
        error(0x0, v31, (unsigned long long)dcgettext(0x0, 0x40bf02, 0x5));
        v42 = 4;
    }
    if (unknown)
    {
        v39 = sub_402a30();
        if (v39 == 0)
        {
            v43 = (unsigned int)sub_403c20();
            if (v32 == 0)
            {
                dcgettext(0x0, 0x40bf13, 0x5);
            }
            else
            {
                dcgettext(0x0, 0x40bfe8, 0x5);
            }
            __fprintf_chk();
        }
        else
        {
            error(0x0, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40bf02, 0x5));
            v42 = 4;
        }
    }
    if (unknown)
    {
        v44 = sub_406290();
    }
    if (unknown)
    {
        v42 = 3;
    }
    if (unknown)
    {
        v42 = 2;
    }
    return v42;
}

int sub_405fa0()
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
        sub_4061d0(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[44];
    unsigned int field_2c;
    char padding_30[24];
    char field_48;
} struct_0;

int sub_4069b0()
{
    struct v1;  // rdi
    unsigned long v3;  // rsi
    char v4;  // dl
    unsigned long long v5;  // rax
    unsigned long v6;  // rdi

    if (v1->field_2c == (unsigned int)v3 && v1->field_2c != -100)
    {
        abort(); /* do not return */
    }
    if (v1->field_2c == -100 || v1->field_2c != (unsigned int)v3)
    {
        if (!(v4 == 0))
        {
            v5 = sub_40a910();
            if ((unsigned int)v5 >= 0)
            {
                v1->field_2c = v3;
                return close(v5);
            }
        }
        else if ((v1->field_48 & 4) == 0)
        {
            if (v1->field_2c >= 0)
            {
                v6 = v1->field_2c;
                v1->field_2c = v3;
                return close(v6);
            }
        }
        if (v1->field_2c < 0 && v4 == 0 || v4 == 0 && (v1->field_48 & 4) != 0 || (unsigned int)v5 < 0 && v4 != 0)
        {
            v1->field_2c = v3;
            return v5;
        }
    }
}

// int sub_4058a0()

extern unsigned int g_40c2ea;
extern unsigned int g_610280;
extern unsigned long long g_610350;

int sub_4039d0()
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
    v5 = sub_406340();
    if (v5 != 0 || sub_4094f0() != 0)
    {
        while (true)
        {
            v11 = sub_406370();
            if (v11 == 0)
            {
                v12 = sub_406300();
                if (v12 != 0)
                {
                    sub_4094f0();
                }
            }
            if (v12 == 0 || v11 != 0)
            {
                if (sub_4094f0() == 0)
                {
                    break;
                }
            }
            v7 = dcgettext(0x0, 0x40c2ea, 0x5);
            v8 = __errno_location();
            if (g_610350 != 0)
            {
                sub_405780();
                error(0x0, *(v8), "%s: %s");
            }
            else
            {
                error(0x0, *(v8), "%s");
            }
            sub_403af0();
            _exit(g_610280);
        }
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[104];
    unsigned short field_70;
    char padding_72[6];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_406d70()
{
    void tmp_10;  // tmp #10
    unsigned long long v1;  // rdx
    struct v2;  // rbx
    unsigned int v3;  // edi
    unsigned long long v4;  // rax
    unsigned long long v5[3];  // rbp
    struct v6;  // r12
    unsigned long long v7;  // rax

    v2 = v1;
    if (((unsigned short)v3 & 258) != 0)
    {
        v5 = malloc(0x18);
        if (v5 != 0)
        {
            tmp_10 = v2->field_78;
            v5[2] = v2;
            v5[0] = tmp_10;
            v5[1] = v2->field_80;
            v6 = (unsigned long long)(unsigned int)sub_40a6c0();
            if (v5 != v6)
            {
                free(v5);
                if (v6 != 0)
                {
                    v7 = v6->field_10;
                    v2->field_70 = 2;
                    v2->field_0 = v7;
                }
            }
        }
        if ((v5 == 0 || v6 == 0) && (v5 == 0 || v5 != v6))
        {
            return 0;
        }
    }
    else
    {
        v4 = sub_409560();
        if (v4 != 0)
        {
            v2->field_0 = v2;
            v2->field_70 = 2;
            return v4;
        }
    }
    if ((((unsigned short)v3 & 258) == 0 || v5 != 0) && (v4 == 0 || ((unsigned short)v3 & 258) != 0) && (v5 == v6 || ((unsigned short)v3 & 258) == 0 || v6 != 0))
    {
        return 1;
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_409560()
{
    void tmp_9;  // tmp #9
    unsigned long v0;  // [bp-0x8]
    struct v2;  // rdi
    unsigned long long v3;  // rax
    unsigned long v4;  // rax
    unsigned long long v5[2];  // rsi

    if (v2->field_18 == 9827862)
    {
        v3 = v2->field_10;
        if (v2->field_10 != 0)
        {
            if (v2->field_0 == v5[1] && *(v5) == v2->field_8)
            {
                return 1;
            }
            if (v2->field_0 != v5[1] || *(v5) != v2->field_8)
            {
                v2->field_10 = v2->field_10 + 1;
                if ((v3 + 1 & v3) != 0)
                {
                    return 0;
                }
                else if (v2->field_10 + 1 == 0)
                {
                    return 1;
                }
            }
        }
        else
        {
            v2->field_10 = 1;
        }
        if (v2->field_10 == 0 || (v3 + 1 & v3) == 0 && v2->field_0 != v5[1] && v2->field_10 + 1 != 0 || (v3 + 1 & v3) == 0 && v2->field_10 + 1 != 0 && *(v5) != v2->field_8)
        {
            tmp_9 = *(v5);
            *((unsigned long long [2])&v2->field_0) = v5[1];
            v2->field_8 = tmp_9;
            return 0;
        }
    }
    else
    {
        v0 = v4;
        __assert_fail(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[104];
    unsigned long long field_78;
    unsigned long long field_80;
} struct_0;

int sub_406e20()
{
    unsigned long v0;  // [bp-0x28]
    unsigned long v1;  // [bp-0x20]
    unsigned int v3;  // edi
    struct v4;  // rdx
    unsigned long long v5[17];  // rdx
    void *v6;  // rax
    unsigned long long *v7[3];  // rsi
    unsigned long long v8[3];  // rcx
    unsigned long long v10[17];  // rax

    if (((unsigned short)v3 & 258) == 0)
    {
        v10 = v4->field_8;
        if (v4->field_8 != 0 && !((char)(v4->field_8->field_58 - 0 >> 63)))
        {
            v8 = *(v7);
            if ((*(v7))[2] != 0 && *(*(v7)) == v4->field_80 && (*(v7))[1] == v4->field_78)
            {
                v10 = v10[16];
                (*(v7))[1] = v4->field_8->field_78;
                v8[0] = v10;
            }
        }
        if ((char)(v4->field_8->field_58 - 0 >> 63) || v4->field_8 == 0 || (*(v7))[2] != 0)
        {
            return v10;
        }
    }
    else
    {
        *((unsigned long long [17])&v0) = v5[15];
        *((unsigned long long [17])&v1) = v5[16];
        v6 = sub_40a700();
        if (v6 != 0)
        {
            return (unsigned long long)free(v6);
        }
    }
    if ((((unsigned short)v3 & 258) == 0 || v6 == 0) && ((*(v7))[2] == 0 || ((unsigned short)v3 & 258) != 0) && (!((char)(v4->field_8->field_58 - 0 >> 63)) || ((unsigned short)v3 & 258) != 0) && (((unsigned short)v3 & 258) != 0 || v4->field_8 != 0))
    {
        abort(); /* do not return */
    }
}

int sub_406af0()
{
    unsigned int v1;  // edi
    unsigned long long v2;  // rax
    unsigned long long v4;  // rdi
    unsigned long long *v5;  // rsi

    if (((unsigned short)v1 & 258) != 0)
    {
        v2 = sub_409f20();
        *(v5) = v2;
        v2 = (char)(v2 != 0);
    }
    else
    {
        v4 = malloc(0x20);
        *(v5) = v4;
        v2 = 0;
        if (v4 != 0)
        {
            sub_409550();
            return 1;
        }
    }
    if (v4 == 0 || ((unsigned short)v1 & 258) != 0)
    {
        return v2;
    }
}

// int sub_405770()

// int sub_4058f0()

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_409b60()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_409d60()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_409750();
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

int sub_405600()
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
    return sub_4050e0();
}

int sub_405f80()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_4061d0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

// int sub_403630()

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_409a70()
{
    struct v1;  // rdi

    return v1->field_10;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_405da0()
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
    return sub_4059a0();
}

int sub_409730()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_409750()
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

int sub_405e00()
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
        return sub_4059a0();
    }
}

// int sub_4055e0()

extern unsigned int g_40c3ce;

int sub_405950()
{
    char v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long long v3[2];  // rax
    unsigned long v4;  // rdi

    v3 = __lxstat(0x1, 0x40c3ce, (unsigned int)&v0);
    if (v3 == 0)
    {
        v3[0] = v1;
        v3[1] = *((long long *)&v0);
        return v4;
    }
    return 0;
}

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned long long field_14;
    char field_1c;
} struct_0;

int sub_40a8e0()
{
    struct v1;  // rdi
    unsigned int v2;  // esi
    unsigned long v3;  // rax

    *((long long *)&(&v1->field_10)[1]) = 0;
    *(&((char *)&v1->field_14)[4]) = 1;
    v1->field_0 = v2;
    v1->field_4 = v2;
    v1->field_8 = v2;
    v1->field_c = v2;
    v1->field_10 = v2;
    return v3;
}

int sub_405280()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_406180();
}

int sub_403640()
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

extern char g_610358;

int sub_403ae0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_610358 = v1;
    return v2;
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40d637;
extern char g_6104f8[2];

int sub_40a9a0()
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
    unsigned long long v62;  // rax
    unsigned long long v63;  // rdx
    unsigned long long v67;  // rbp
    unsigned long long v68;  // rax
    unsigned long long v69;  // rax
    unsigned long long v70;  // rbp
    unsigned long long v71;  // rax

    v9 = g_6104f8;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40d637 : (unsigned long long)nl_langinfo(0xe));
    if (g_6104f8 == 0)
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
            v9 = &g_40d637;
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
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)))
                        {
                            *((char **)(v10 + 8)) = &v59[1];
                            v26 = *(v59);
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1)
                        {
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
                                        v9 = &g_40d637;
                                        v10 = (tmp_10 == 0? &g_40d637 : tmp_10);
                                        free(NULL);
                                        sub_40afb0();
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
                                        v62 = *(v61);
                                        v63 = 1;
                                    }
                                    else
                                    {
                                        v62 = __uflow(v10);
                                        v63 = (char)(v62 != -1);
                                    }
                                }
                                while (v62 != 10 && v63 != 0);
                            }
                        }
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v26 != 32 && v28 > 1 && (unsigned int)v26 != 35 && v37 != 0)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v62 == -1 || (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && (unsigned int)v26 != 32 && v28 > 1 && (unsigned int)v26 != 35 && v37 != 0) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_40d637 : tmp_10);
                            sub_40afb0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && v62 == -1 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_40d637;
                    }
                    else if (v37 == 0 && (unsigned int)v26 != 32 && v28 > 1 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 || ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && v62 == -1 || (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0) && (unsigned int)v60 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40d637;
            free(v17);
        }
        *((char *[2])&g_6104f8[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_40d637 : tmp_10), v9);
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

// int sub_4054e0()

int sub_409cb0()
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
        v6 = sub_409750();
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
    char padding_0[80];
    struct struct_1 *field_50;
    char padding_58[32];
    unsigned long long field_78;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

int sub_406820()
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // r12
    unsigned long long v5;  // rbx
    struct v6;  // rdi
    unsigned long long v7;  // r12
    struct v8;  // rax
    unsigned long long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rbx
    unsigned long long v12;  // r12
    unsigned long long v13[2];  // rbx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rbx
    unsigned long long v18;  // r12
    unsigned long long v19;  // rbx
    unsigned long long v20;  // r12

    v2 = v4;
    v1 = v5;
    if ((v6->field_50->field_49 & 2) != 0)
    {
        if (v6->field_50->field_50 == 0)
        {
            v7 = (unsigned int)sub_409f20();
            v6->field_50->field_50 = v7;
            if (v7 == 0)
            {
                v9 = fstatfs(v6->field_50->field_2c, (unsigned int)&v0);
            }
        }
        if (v6->field_50->field_50 != 0 || v7 != 0)
        {
            v0 = v6->field_78;
            v8 = sub_409cb0();
            if (v8 != 0)
            {
                v14 = v8->field_8;
            }
            else
            {
                v10 = fstatfs(v6->field_50->field_2c, (unsigned int)&v0);
                if (v10 == 0)
                {
                    v13 = malloc(0x10);
                    v14 = v0;
                    if (v13 != 0)
                    {
                        v15 = v6->field_78;
                        v13[1] = v0;
                        v13[0] = v15;
                        v16 = sub_40a6c0();
                        if (!(v16 != 0))
                        {
                            free(v13);
                            v14 = v0;
                        }
                        else if (v13 != v16)
                        {
                            abort(); /* do not return */
                        }
                    }
                }
            }
            if ((v10 == 0 || v8 != 0) && (v16 == 0 || v13 == 0 || v8 != 0))
            {
                v19 = v1;
                v20 = v2;
                return v14;
            }
        }
    }
    if ((v6->field_50->field_49 & 2) == 0 || v6->field_50->field_50 == 0 && v7 == 0 && v9 != 0 || v8 == 0 && v10 != 0 && v6->field_50->field_50 != 0 || v8 == 0 && v10 != 0 && v7 != 0)
    {
        v11 = v1;
        v12 = v2;
        return 0;
    }
    if (v9 == 0 && v6->field_50->field_50 == 0 && v7 == 0 && (v6->field_50->field_49 & 2) != 0 || v10 == 0 && v8 == 0 && v13 == v16 && (v6->field_50->field_49 & 2) != 0 && v16 != 0 && v13 != 0 && (v6->field_50->field_50 != 0 || v7 != 0))
    {
        v17 = v1;
        v18 = v2;
        return v0;
    }
}

extern char g_610328;
extern unsigned long long g_610330;

int sub_4023f1()
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

    if (g_610328 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_610330 >= 0)
            {
                break;
            }
            g_610330 = g_610330 + 1;
            *((long long *)(6356544 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_610328 = 1;
        return sub_40239b();
    }
    return v4;
}

// int sub_405fd0()

extern unsigned int g_40c304;
extern unsigned int g_610280;
extern char g_610358;
extern unsigned long long g_610360;

int sub_403af0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_4094f0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_610358 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40c304, 0x5);
            if (g_610360 != 0)
            {
                sub_405780();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_610358 != 0)
    {
        v3 = sub_4094f0();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_610358 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_610280);
        error(0x0, *(v2), "%s");
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_409730;
extern int512_t g_409740;
extern int512_t g_40d6f0;

int sub_409f20()
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
            v4 = sub_4098a0();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_40d6f0;
            v3 = sub_4098a0();
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
            v13 = (unsigned int)sub_409690();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_409730 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_409740 : v17);
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
    char padding_0[16];
    unsigned long long field_10;
    unsigned int field_18;
} struct_0;

int sub_409550()
{
    struct v1;  // rdi
    unsigned long v2;  // rax

    v1->field_10 = 0;
    v1->field_18 = 9827862;
    return v2;
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_409a80()
{
    struct v1;  // rdi

    return v1->field_18;
}

int sub_409630()
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

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

extern int512_t g_610480;

int sub_405320()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_610480 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_610480 : v1) + 4)) = v3;
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

int sub_40a440()
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
        v7 = sub_409780();
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
            sub_4098a0();
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
                    v32 = sub_40a240();
                    if (v32 != 0)
                    {
                        v33 = sub_409780();
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

