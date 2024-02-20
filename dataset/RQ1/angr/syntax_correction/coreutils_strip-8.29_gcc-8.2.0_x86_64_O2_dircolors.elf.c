
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

extern unsigned int g_40c9e0;
extern unsigned int g_40ca14;
extern unsigned long long stderr;

int sub_408350()
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
    unsigned long long v57;  // rdx
    unsigned int v58;  // eax
    char *v60;  // rax
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
                        sub_407c50();
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
                            v26 = (unsigned long long)v0->field_0;
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
                    v0->field_0 = (unsigned int)v42;
                    if (v42 != v39)
                    {
                        if ((unsigned int)v42 != v8->field_30)
                        {
                            sub_407c50();
                            v42 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = (unsigned int)v42;
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
        v45 = (unsigned int)sub_407d30();
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
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40c9e0, 0x5), *((long long *)v15));
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
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40ca14, 0x5), *((long long *)v15));
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
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40c9e0, 0x5), *((long long *)v15));
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
        v45 = (unsigned int)sub_407d30();
    }
    v66 = v45;
    return v66;
}

extern unsigned long long g_60f338;
extern unsigned long long g_60f340;

int sub_402290()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long v1;  // [bp-0x8]
    char *v3;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v5;  // rbx
    char *v6;  // rbx
    unsigned long long v7;  // cc_dep1
    unsigned long long v9;  // rbp
    char *v10;  // rdx
    char *v12;  // rax
    char *v14;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v18;  // rbx

    v4 = *(v3);
    if (*(v3) != 0)
    {
        v1 = stack_base + 0;
        v9 = 1;
        v0 = v5;
        v6 = v3;
        do
        {
            v16 = g_60f340;
            v10 = g_60f338;
            v7 = v4;
            if (v4 != 61)
            {
                if (v7 <= 61)
                {
                    if (v4 == 39)
                    {
                        if (g_60f340 == g_60f338)
                        {
                            _obstack_newchunk();
                            v10 = g_60f338;
                        }
                        g_60f338 = &v10[1];
                        *(v10) = 39;
                        v12 = g_60f338;
                        if (g_60f340 == g_60f338)
                        {
                            _obstack_newchunk();
                            v12 = g_60f338;
                        }
                        g_60f338 = &v12[1];
                        *(v12) = 92;
                        v14 = g_60f338;
                        if (g_60f340 == g_60f338)
                        {
                            _obstack_newchunk();
                            v14 = g_60f338;
                        }
                        v9 = 1;
                        g_60f338 = &v14[1];
                        *(v14) = 39;
                        v16 = g_60f340;
                        v10 = g_60f338;
                    }
                }
                else
                {
                    if (v4 == 94 || v4 == 92)
                    {
                        v9 = (unsigned int)v9 ^ 1;
                    }
                }
            }
            if ((v9 == 0 || v4 != 61) && (v4 == 61 || v7 <= 61 || v4 != 94) && (v4 == 61 || v7 <= 61 || v4 != 92) && (v4 == 61 || v4 != 39 || v7 > 61) && (v9 == 0 || v4 != 58 || v7 > 61))
            {
                v9 = 1;
            }
            if (v9 != 0 && (v4 == 61 || v4 == 58) && (v4 == 61 || v7 <= 61) && (v4 == 61 || v4 != 39))
            {
                if (g_60f340 == g_60f338)
                {
                    _obstack_newchunk();
                    v10 = g_60f338;
                }
                g_60f338 = &v10[1];
                *(v10) = 92;
                v10 = g_60f338;
            }
            if (v4 == 39 && v16 == v10 || v16 == v10 && v9 == 0 || v4 == 61 && g_60f340 == g_60f338 && v9 != 0 || v16 == v10 && v4 != 61 && v4 != 58 || v16 == v10 && v4 != 61 && v7 > 61 || g_60f340 == g_60f338 && v4 == 58 && v7 <= 61 && v4 != 39 && v9 != 0)
            {
                _obstack_newchunk();
                v10 = g_60f338;
            }
            v6 = &v6[1];
            g_60f338 = &v10[1];
            *(v10) = v6[-1];
            v4 = *(v6);
        }
        while ((char)v4 != 0);
        v18 = v0;
        return v4;
    }
    return (unsigned long long)*(v3);
}

int sub_405390()
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
        sub_405540(); /* do not return */
    }
}

int sub_4051b0()
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
        return sub_404d50();
    }
}

extern uint128_t g_60f4a0;
extern uint128_t g_60f4b0;
extern uint128_t g_60f4c0;
extern unsigned long long g_60f4d0;

int sub_404aff()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60f4d0;
    *((uint128_t *)&v0) = g_60f4a0;
    *((uint128_t *)&v1) = g_60f4b0;
    *((uint128_t *)&v2) = g_60f4c0;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_4044e0();
}

// int sub_404af0()

typedef struct struct_0 {
    char padding_0[80];
    char field_50;
} struct_0;

int sub_408bf0()
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

// int sub_404b80()

int sub_4047e2()
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

int sub_4089a0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408920();
}

int sub_405580()
{
    unsigned long long v1;  // rax

    v1 = strndup();
    if (v1 != 0)
    {
        return v1;
    }
    sub_405540(); /* do not return */
}

int sub_4054a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4052f0();
}

// int sub_404cf0()

extern unsigned int g_40bf00;
extern unsigned int g_40c28f;
extern unsigned int g_60f258;
extern unsigned long long stderr;

int sub_408bb0()
{
    __fprintf_chk(stderr, 0x1, 0x40bf00, dcgettext(0x0, 0x40c28f, 0x5));
    exit(g_60f258); /* do not return */
}

// int sub_404ca0()

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_40ca2f;
extern char g_60f518[2];

int sub_408fa0()
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

    v9 = g_60f518;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_40ca2f : (unsigned long long)nl_langinfo(0xe));
    if (g_60f518 == 0)
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
            v9 = &g_40ca2f;
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
                                    v9 = &g_40ca2f;
                                    v10 = (tmp_10 == 0? &g_40ca2f : tmp_10);
                                    free(NULL);
                                    sub_4055a0();
                                }
                            }
                        }
                        if (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) && v37 != 0 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && v28 > 1)
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
                        if ((unsigned int)v26 == 35 && v61 == -1 || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || (unsigned int)v60 == -1 && *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || v28 <= 1 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35)
                        {
                            v10 = (tmp_10 == 0? &g_40ca2f : tmp_10);
                            sub_4055a0();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 <= 1 || (unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1)
                    {
                        v9 = &g_40ca2f;
                    }
                    else if (v37 == 0 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 > 1 || ((unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && v28 <= 1 || (unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && v61 == -1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v60 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_40ca2f;
            free(v17);
        }
        *((char *[2])&g_60f518[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_40ca2f : tmp_10), v9);
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

int sub_405130()
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
            if (*(v2) >= v3 && v3 > v2)
            {
                return 1;
            }
            if (*(v2) < v3 || v3 <= v2)
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

int sub_405350()
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
            sub_405540(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

extern char g_406a89;
extern char g_406abe;
extern char g_406b2e;
extern char g_406b8a;
extern char g_406c01;
extern char g_406c2e;
extern char g_406c58;
extern char g_406c7a;
extern char g_406ccd;
extern char g_406d0c;
extern char g_406d5c;
extern char g_406d71;
extern char g_406d97;
extern char g_406de1;
extern char g_406dfa;
extern char g_406e13;
extern unsigned int g_60f4d8;

int sub_4068d0()
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
    unsigned long v11;  // [bp-0x20]
    unsigned long v12;  // [bp-0x18]
    unsigned long v13;  // [bp-0x10]
    unsigned long v14;  // [bp-0x8]
    unsigned int v16;  // edi
    unsigned long long v17;  // rdx
    unsigned long v18;  // rcx
    char *v19;  // rsi
    unsigned long long v20;  // rdx
    unsigned long long v21;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v22;  // r14
    unsigned long long v23;  // r15
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    char v27[3];  // rcx
    unsigned long long v28;  // rax
    unsigned long long v30;  // r13
    unsigned long long v32;  // rax
    unsigned long long *v33;  // r14
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long *v36;  // r14
    unsigned int v37;  // r9d
    unsigned long long v38;  // rax
    unsigned long long *v39;  // r13
    unsigned long long v40;  // r13
    char v41;  // r8b
    unsigned long long v42;  // rax
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // r14
    unsigned long long v48;  // rax

    v9 = v16;
    v6 = v17;
    v5 = v18;
    v10 = 0;
    rsp = &v2;
    v8 = strlen(v19);
    v21 = v4->field_1;
    if (v4->field_1 != 0)
    {
        v22 = &v4->field_1;
        v4 = v19;
        v23 = 0;
        v7 = v9 - 63;
        while (true)
        {
            if (v21 != 91)
            {
                while (true)
                {
                    v20 = v21 - 33;
                    if ((v21 - 33 & 255) <= 31)
                    {
                        v0 = 3221227009;
                        rsp = &v2;
                        if (v22[1] == 40 && ((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) != 0)
                        {
                            v23 += 1;
                            v22 = &v22[1];
                            v21 = 40;
                        }
                        if (v21 == 41 && (((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 || v22[1] != 40))
                        {
                            if (v23 != 0)
                            {
                                v21 = v22[1];
                                v22 = &v22[1];
                                if (v21 != 0)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v28 = ((unsigned int)((unsigned long long)v9 - 63) <= 1? v8 : r14 - (long long)(stack_base)[-136] + 1) + 15 & -8;
                                if ((((unsigned int)((unsigned long long)v9 - 63) <= 1? v8 : r14 - (long long)(stack_base)[-136] + 1) + 15 & -8) - 8 > 7991)
                                {
                                    break;
                                }
                                rsp = &(&v2)[-1 * (v28 + 23 & -0x10) + -8];
                                v14 = &g_406b2e;
                                v10 = &(&v2)[-1 * (v28 + 23 & -0x10) + 15] & -0x10;
                                *((char *)(unsigned long long)mempcpy((&(&v2)[-1 * (v28 + 23 & -0x10) + 15] & -0x10) + 8)) = 0;
                                *(v10) = 0;
                                v8 = v10;
                                if (v10 == 0)
                                {
                                    rsp = rsp - 8;
                                    v13 = &g_406e13;
                                    __assert_fail(); /* do not return */
                                }
                                else if (v22[-1 + 7] == 41)
                                {
                                    v30 = v9 - 33;
                                    switch (v9)
                                    {
                                    case 33:
                                        if (v6 <= v5)
                                        {
                                            *((char *[3])&v9[0]) = v22;
                                            while (true)
                                            {
                                                v33 = v8;
                                                while (true)
                                                {
                                                    rsp = rsp - 8;
                                                    v13 = &g_406ccd;
                                                    v34 = sub_406e20();
                                                    if (v34 != 0)
                                                    {
                                                        v33 = *(v33);
                                                        rsp = rsp - 8;
                                                        v12 = &g_406d0c;
                                                        v35 = sub_406e20();
                                                        if (v35 == 0)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                if (v34 == 0 || v33 == 0 && v35 != 0)
                                                {
                                                    v33 = v8;
                                                }
                                                else if (v34 == 0 || v33 == 0 && v35 != 0)
                                                {
                                                    v38 = 1;
                                                }
                                                else if (v33 == 0 && v34 != 0)
                                                {
                                                    v38 = 0;
                                                }
                                            }
                                            if (true)
                                            {
                                                v38 = 1;
                                            }
                                            else
                                            {
                                                v38 = 0;
                                            }
                                        }
                                    case 42:
                                        rsp = rsp - 8;
                                        v13 = &g_406b8a;
                                    case 43:
                                        *((char *[3])&v7[0]) = v22;
                                        v36 = v8;
                                        v8 = v37 & 1;
                                        v4 -= 1;
                                        while (true)
                                        {
                                            if (v6 <= v5)
                                            {
                                                v40 = v6;
                                                v9 = v41;
                                                do
                                                {
                                                    rsp = rsp - 8;
                                                    v13 = &g_406c58;
                                                    v42 = sub_406e20();
                                                    if (v42 == 0)
                                                    {
                                                        if (v6 != v40)
                                                        {
                                                            rsp = rsp - 8;
                                                            v12 = &g_406c01;
                                                            v44 = sub_406e20();
                                                            if (v44 == 0)
                                                            {
                                                                break;
                                                            }
                                                            rsp = rsp - 8;
                                                            v11 = &g_406c2e;
                                                            v45 = sub_406e20();
                                                            if (v45 == 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            rsp = rsp - 8;
                                                            v12 = &g_406c7a;
                                                            v43 = sub_406e20();
                                                            if (v43 == 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        v36 = v10;
                                                    }
                                                    v40 += 1;
                                                }
                                                while (v5 >= v40);
                                                if (true)
                                                {
                                                    v38 = 0;
                                                }
                                                else if (v42 != 0 || v43 != 0 || v44 != 0 && v45 != 0)
                                                {
                                                    v46 = *(v36);
                                                    v10 = v46;
                                                }
                                            }
                                            v46 = *(v36);
                                            v10 = v46;
                                        }
                                        if (v6 <= v5)
                                        {
                                            v38 = 0;
                                        }
                                        else if (v46 == 0)
                                        {
                                            v38 = 1;
                                        }
                                    case 63:
                                        rsp = rsp - 8;
                                        v13 = &g_406d97;
                                        v32 = sub_406e20();
                                        if (v32 != 0)
                                        {
                                            v39 = v8;
                                            while (true)
                                            {
                                                rsp = rsp - 8;
                                                v13 = &g_406d5c;
                                                strcat(&v39[1], v22);
                                                rsp = rsp - 8;
                                                v12 = &g_406d71;
                                                v48 = sub_406e20();
                                                if (v48 != 0)
                                                {
                                                    v39 = *(v39);
                                                    v10 = v39;
                                                    if (v39 == 0)
                                                    {
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    v38 = 0;
                                                }
                                            }
                                            if (v48 != 0)
                                            {
                                                v38 = 1;
                                            }
                                            else if (v48 == 0)
                                            {
                                                return v38;
                                            }
                                        }
                                        else
                                        {
                                            v38 = 0;
                                            break;
                                        }
                                    default:
                                        rsp = rsp - 8;
                                        v13 = &g_406de1;
                                        __assert_fail(); /* do not return */
                                    }
                                    v38 = 0;
                                    v38 = 1;
                                }
                                else
                                {
                                    rsp = rsp - 8;
                                    v13 = &g_406dfa;
                                    __assert_fail(); /* do not return */
                                }
                            }
                        }
                    }
                    else if (v21 == 124)
                    {
                        if (v23 == 0)
                        {
                            v24 = (v7 <= 1? v8 : r14 - (long long)(stack_base)[-136] + 1) + 15 & -8;
                            if (((v7 <= 1? v8 : r14 - (long long)(stack_base)[-136] + 1) + 15 & -8) - 8 > 7991)
                            {
                                break;
                            }
                            rsp = &(&v2)[-1 * (v24 + 23 & -0x10) + -8];
                            v14 = &g_406a89;
                            *((char *)(unsigned long long)mempcpy((&(&v2)[-1 * (v24 + 23 & -0x10) + 15] & -0x10) + 8)) = 0;
                            v21 = v22[1];
                            v22 = &v22[1];
                            *((long long *)v10) = 0;
                            v10 = &(&v2)[-1 * (v24 + 23 & -0x10) + 15] & -0x10;
                        }
                    }
                    if (v23 != 0 && (v21 - 33 & 255) > 31 || (v21 - 33 & 255) > 31 && v21 != 124 || ((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 && (v21 - 33 & 255) <= 31 && v21 != 41 || (v21 - 33 & 255) <= 31 && v21 != 41 && v22[1] != 40)
                    {
                        v21 = v22[1];
                        v22 = &v22[1];
                    }
                }
                if (v23 == 0 && v21 == 124 && (v21 - 33 & 255) > 31 || v23 == 0 && v21 == 41 && (v21 - 33 & 255) <= 31 && (((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 || v22[1] != 40) || v21 == 0 && v21 == 41 && (v21 - 33 & 255) <= 31 && v23 != 0 && (((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 || v22[1] != 40))
                {
                    v38 = -18446744069414584321;
                }
                else if (((v7 <= 1? v8 : r14 - (long long)(stack_base)[-136] + 1) + 15 & -8) - 8 <= 7991 && (v21 - 33 & 255) > 31 || v23 != 0 && (v21 - 33 & 255) > 31 || (v21 - 33 & 255) > 31 && v21 != 124 || ((char)((char)*(&((char *)stack_base)[((v20 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v20 & 63 & 7)) & 1) == 0 && (v21 - 33 & 255) <= 31 && v21 != 41 || (v21 - 33 & 255) <= 31 && v21 != 41 && v22[1] != 40)
                {
                    if (v21 == 0)
                    {
                        break;
                    }
                }
                else if (unknown)
                {
                    return v38;
                }
            }
            else
            {
                if (g_60f4d8 == 0)
                {
                    v3 = &v4->field_1;
                    rsp = rsp - 8;
                    v1 = &g_406abe;
                    g_60f4d8 = 0 - (unsigned int)(char)(getenv("POSIXLY_CORRECT") < 1) | 1;
                }
                v25 = v22[1];
                if (v22[1] != 33 && (v25 != 94 || g_60f4d8 >= 0))
                {
                    v27 = &v22[1];
                }
                if (v22[1] == 33 || v25 == 94 && g_60f4d8 < 0)
                {
                    v27 = &v22[2];
                    v25 = v22[2];
                }
                if (v25 == 93)
                {
                    v25 = v27[1];
                    v27 = &v27[1];
                    v22 = &v27[1];
                }
                if (v25 != 93 || v25 != 93)
                {
                    while (v25 != 0)
                    {
                        v25 = *(v22);
                        v27 = v22;
                        v22 = &v27[1];
                        if (v25 == 93)
                        {
                            break;
                        }
                    }
                    if (v25 != 0)
                    {
                        v21 = v27[1];
                    }
                    else
                    {
                        v38 = -18446744069414584321;
                    }
                }
                v21 = v27[1];
            }
        }
        if (true)
        {
            v38 = -18446744069414584321;
        }
        else
        {
            return v38;
        }
    }
    v38 = -18446744069414584321;
    return v38;
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

    v10 = sub_4018c8();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6352432 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_408f40()
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

extern unsigned long long *g_60f298;
extern unsigned long long g_60f2a0;
extern unsigned long long g_60f2a8;
extern unsigned int g_60f2b0;
extern unsigned long long g_60f3a0;

int sub_4048f0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60f2b0;
    if (g_60f2b0 > 1)
    {
        v2 = &g_60f298[3];
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60f298[2 * (unsigned long long)(g_60f2b0 - 2) + 5])
            {
                break;
            }
        }
    }
    if (g_60f298[1] != 6353824)
    {
        v1 = free(g_60f298[1]);
        g_60f2a0 = 0x100;
        g_60f2a8 = &g_60f3a0;
    }
    if (g_60f298 != 6353568)
    {
        v1 = free(g_60f298);
        g_60f298 = &g_60f2a0;
    }
    g_60f2b0 = 1;
    return v1;
}

extern uint128_t g_60f4a0;
extern uint128_t g_60f4b0;
extern uint128_t g_60f4c0;
extern unsigned long long g_60f4d0;

int sub_404c20()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60f4a0;
    *((uint128_t *)&v1) = g_60f4b0;
    *((uint128_t *)&v2) = g_60f4c0;
    v4 = g_60f4d0;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_4044e0();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
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

int sub_404bb0()
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
    return sub_4044e0();
}

int sub_408ee0()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_4055a0();
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

// int sub_404ae0()

extern int512_t g_60f4a0;

int sub_4046c0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60f4a0 : v1));
}

extern unsigned int g_60f4d8;

int sub_405760()
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
                        v3 = (unsigned long long)(unsigned int)sub_405760();
                    }
                    if (v4 == 41 && (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || v3[2] != 40))
                    {
                        v8 = &v3[2];
                        return v8;
                    }
                }
                if (v3[2] != 40 || v4 != 41)
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
                if (g_60f4d8 == 0)
                {
                    g_60f4d8 = 0 - (unsigned int)(char)(getenv("POSIXLY_CORRECT") < 1) | 1;
                }
                v6 = v3[2];
                if (v3[2] != 33 && (v6 != 94 || g_60f4d8 >= 0))
                {
                    v3 = &v3[2];
                }
                if (v3[2] == 33 || v6 == 94 && g_60f4d8 < 0)
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
        if (v4 != 91 && (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || v3[2] != 40) && (v4 != 41 || (v4 - 33 & 255) > 31))
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

int sub_404680()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_4054f0();
}

int sub_4032b0()
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v78;  // r13
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
            v26 = (unsigned int)sub_4031b0();
            v27 = (unsigned long long)(unsigned int)sub_4031b0();
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
                                    v48 = v5;
                                    v5 = v41;
                                    v78 = 0;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v77 = 0;
                                    v55 = 0;
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
                            v77 = (char)((unsigned int)v39 == 2);
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
                        if (v17 != 0)
                        {
                            break;
                        }
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
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) | v17;
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
                            v76 = (unsigned int)sub_4032b0();
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
                    v46 = sub_408a20();
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
            if ((v76 == 0 || (unsigned int)v39 == 2) && (v78 == 0 || (unsigned int)v39 == 2) && (v76 == 0 || v17 != 0) && (v78 == 0 || v17 != 0) && ((unsigned int)v39 == 2 || (v81 == 2 & v17) != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_4032b0();
            }
            if (v17 == 0 && v5 == 0 && ((unsigned int)v39 == 2 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0) || v17 == 0 && v5 != 0 && ((unsigned int)v39 == 2 || (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) == 0) || (v15 != 1 || v77 != 0) && v76 >= v79)
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v6 != 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v76 == 0 || (unsigned int)v39 == 2) && (v78 == 0 || (unsigned int)v39 == 2) && (v76 == 0 || v17 != 0) && (v78 == 0 || v17 != 0) && ((unsigned int)v39 == 2 || (v81 == 2 & v17) != 0) && (v17 != 0 || (v81 == 2 & v17) != 0))
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

int sub_405310()
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
        sub_405540(); /* do not return */
    }
}

extern unsigned int g_40960c;
extern unsigned int g_409880;
extern unsigned int g_4098b0;
extern int512_t g_409e80;
extern unsigned long long g_409fc0[4];
extern int512_t g_40b14d;
extern char *g_60f338;
extern unsigned long long g_60f340;

int sub_402480()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x68]
    void tmp_20;  // tmp #20
    void tmp_10;  // tmp #10
    void tmp_6;  // tmp #6
    unsigned short *v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    char v3;  // [bp-0x4d]
    unsigned int v4;  // [bp-0x4c]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    void *v8;  // rdi
    void *v9;  // r14
    unsigned short *v10;  // rsi
    unsigned long v12;  // rbx
    unsigned long long v14;  // rbp
    char v15[2];  // rbx
    unsigned long long v17;  // rcx
    char v18[2];  // r13
    unsigned short *v19;  // rcx
    unsigned int v20;  // eax
    unsigned short v21;  // ax
    char *v23;  // rbx
    unsigned long long v24;  // rdi
    unsigned long long v25;  // rax
    unsigned short *v26;  // rdx
    char v27[2];  // rax
    unsigned long long v28;  // rsi
    char v29[2];  // rsi
    char v30[2];  // rdx
    void *v31;  // r13
    unsigned long long v32;  // rax
    unsigned long long v33;  // rax
    unsigned long long v34;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v35;  // r15d
    char *v36;  // rax
    unsigned long long v39;  // rax
    unsigned long long v41;  // rax
    char *v42;  // rax
    unsigned long long v44;  // rax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax
    char v49[2];  // rdx
    unsigned long long v50;  // rcx
    unsigned long long v52;  // rdx
    char *v56;  // rax
    char v57[2];  // r12
    unsigned long long v58;  // rax
    unsigned long long v59;  // rbx
    unsigned long long v60;  // r13

    v9 = v8;
    v1 = v10;
    v5 = 0;
    v6 = 0;
    if (v12 != 0)
    {
        v12 = getenv("TERM");
        *((int *)&v2) = (*((char *)v12) != 0? v12 : "none");
    }
    else
    {
        v2 = "none";
    }
    v3 = 1;
    v35 = 3;
    v57 = "# Configuration file for dircolors, a utility to help you set the";
    v14 = 0;
    while (true)
    {
        v14 += 1;
        if (v9 != 0)
        {
            v58 = __getdelim(&v5, &v6, 0xa, v9);
            if (!(INVALID_IR))
            {
                v59 = v5;
            }
            else
            {
                free(v5);
            }
        }
        else if (v57 != "8.29")
        {
            v15 = v57;
            v57 = &((char [2])&v57[strlen(v57)])[1];
        }
        if (v9 == 0 && v57 == "8.29" || INVALID_IR && v9 != 0)
        {
            return (unsigned long long)v3;
        }
        if (v9 == 0 && v57 != "8.29" || !(INVALID_IR) && v9 != 0)
        {
            while (true)
            {
                v17 = v15[0];
                if ((*(&((char *)&v10[(unsigned long long)v15[0]])[1]) & 32) == 0)
                {
                    break;
                }
                v15 = &v15[1];
            }
            v18 = v15;
        }
    }
    do
    {
        v18 = &v18[1];
        v19 = (unsigned long long)v18[0];
        v20 = (unsigned short)*((short *)((char *)v10 + 0x2 * v19));
        v21 = (unsigned long long)(unsigned short)*((short *)((char *)v10 + 0x2 * v19)) >> 13;
    }
    while (((unsigned long long)(unsigned int)(rax ^ 1) & (char)(v18[0] != 0)) != 0);
    v0 = (unsigned long long)__ctype_b_loc();
    v23 = (unsigned long long)(unsigned int)sub_405580();
    if (v18[0] != 0)
    {
        v24 = *(v0);
        do
        {
            v18 = &v18[1];
            v25 = v18[0];
            v26 = (unsigned long long)v18[0];
        }
        while ((*((char *)(v24 + (v25 << 1) + 1)) & 32) != 0);
        if (v25 != 0)
        {
            v27 = v18;
            if (v26 != 35)
            {
                while (true)
                {
                    v28 = &v27[1];
                    if ((v27[1] != 35 & v27[1] != 0) == 0)
                    {
                        break;
                    }
                    v27 = v28;
                }
                if ((*((char *)(v24 + ((unsigned long long)v27[-1 + 7] << 1) + 1)) & 32) != 0)
                {
                    v29 = v27;
                    while (true)
                    {
                        v30 = &v29[-1 + 7];
                        if ((*((char *)(v24 + ((unsigned long long)v29[-1 + 7] << 1) + 1)) & 32) == 0)
                        {
                            break;
                        }
                        v29 = v30;
                    }
                }
                v31 = (unsigned long long)(unsigned int)sub_405580();
                if (v23 != 0 && v31 != 0)
                {
                    v32 = sub_402d60();
                    if (v32 != 0)
                    {
                        v34 = *(v23);
                        if (!(*(v23) != 46))
                        {
                            v36 = g_60f338;
                            if (g_60f340 == g_60f338)
                            {
                                _obstack_newchunk();
                                v36 = g_60f338;
                            }
                        }
                        else if (v34 != 42)
                        {
                            v39 = sub_402d60();
                            if (v39 != 0)
                            {
                                v41 = sub_402d60();
                                if (v41 != 0)
                                {
                                    v44 = sub_402d60();
                                    if (v44 != 0)
                                    {
                                        v46 = 0;
                                        while (true)
                                        {
                                            v4 = v46;
                                            v0 = v46;
                                            v47 = sub_402d60();
                                            if (v47 != 0)
                                            {
                                                v46 = v0 + 1;
                                                if (v35 == 3)
                                                {
                                                    break;
                                                }
                                                if (v1 != 0)
                                                {
                                                    v50 = (unsigned int)sub_404bb0();
                                                }
                                                else
                                                {
                                                    v50 = dcgettext(0x0, 0x40960c, 0x5);
                                                }
                                                v0 = v50;
                                                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4098b0, 0x5));
                                                v3 = 0;
                                            }
                                            else
                                            {
                                                if (g_60f340 == g_60f338)
                                                {
                                                    _obstack_newchunk();
                                                }
                                                v49 = (&g_409e80)[(long long)(int)v4];
                                                tmp_20 = g_60f338;
                                                g_60f338 = &g_60f338[1];
                                                *((char *)tmp_20) = v49[0];
                                                if (g_60f340 == g_60f338)
                                                {
                                                    *((char *[2])&v0[0]) = v49;
                                                    _obstack_newchunk();
                                                    v49 = v0;
                                                }
                                                tmp_10 = g_60f338;
                                                g_60f338 = &g_60f338[1];
                                                v52 = v49[1];
                                                *((unsigned long long *)tmp_10) = v52;
                                                break;
                                            }
                                        }
                                        if (v47 == 0)
                                        {
                                            tmp_6 = g_60f338;
                                            g_60f338 = &g_60f338[1];
                                            *((char *)tmp_6) = 61;
                                            sub_402290();
                                        }
                                        else if (v47 == 0)
                                        {
                                            _obstack_newchunk();
                                        }
                                        else if (g_409fc0[1 + v0] == 0 && v47 != 0)
                                        {
                                            free(v23);
                                            free(v31);
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            sub_402290();
                        }
                    }
                    else
                    {
                        v33 = sub_407910();
                    }
                }
            }
        }
    }
    if (v23 != 0 && (v25 == 0 || v26 == 35 || v18[0] == 0 || v31 == 0))
    {
        v60 = (unsigned int)sub_404bb0();
        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409880, 0x5));
        free(v23);
        v3 = 0;
    }
    if (false)
    {
        v34 = *(v23);
        v35 = 1;
    }
    if (*(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 == g_60f338 || *(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 != g_60f338)
    {
        g_60f338 = &v36[1];
        *(v36) = 42;
        sub_402290();
        v42 = g_60f338;
        if (g_60f340 == g_60f338)
        {
            _obstack_newchunk();
            v42 = g_60f338;
        }
    }
    if ((*(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 == g_60f338 || *(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 != g_60f338) && g_60f340 == g_60f338 || (*(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 == g_60f338 || *(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 != g_60f338) && g_60f340 != g_60f338)
    {
        g_60f338 = &v42[1];
        *(v42) = 61;
        sub_402290();
        v56 = g_60f338;
    }
    if (v23 != 0 && v25 != 0 && v34 != 42 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && *(v23) != 46 && v39 != 0 && v41 != 0 && v44 != 0 && g_60f340 != g_60f338 || v34 == 42 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && *(v23) != 46 && g_60f340 == g_60f338)
    {
        _obstack_newchunk();
    }
    if (v23 != 0 && v25 != 0 && v34 != 42 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && *(v23) != 46 && v39 != 0 && v41 != 0 && v44 != 0 && g_60f340 != g_60f338 || v34 == 42 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && *(v23) != 46 && g_60f340 == g_60f338 || v34 == 42 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && *(v23) != 46 && g_60f340 != g_60f338)
    {
        tmp_6 = g_60f338;
        g_60f338 = &g_60f338[1];
        *((char *)tmp_6) = 61;
        sub_402290();
    }
    if ((v23 != 0 && v25 != 0 && v34 != 42 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && *(v23) != 46 && v39 != 0 && v41 != 0 && v44 != 0 && g_60f340 != g_60f338 || v34 == 42 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && *(v23) != 46 && g_60f340 == g_60f338 || v34 == 42 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && *(v23) != 46 && g_60f340 != g_60f338) && g_60f340 == g_60f338 || ((*(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 == g_60f338 || *(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 != g_60f338) && g_60f340 == g_60f338 || (*(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 == g_60f338 || *(v23) == 46 && v23 != 0 && v25 != 0 && v32 != 0 && v26 != 35 && v18[0] != 0 && v31 != 0 && g_60f340 != g_60f338) && g_60f340 != g_60f338) && g_60f340 == g_60f338)
    {
        _obstack_newchunk();
    }
    if (unknown)
    {
        v56 = g_60f338;
    }
    if (unknown)
    {
        g_60f338 = &v56[1];
        *(v56) = 58;
    }
    if (unknown)
    {
        free(v23);
        free(v31);
    }
}

extern int512_t g_60f4a0;

int sub_4046e0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60f4a0 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60f4a0 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

extern char g_60f378;

int sub_402dd0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60f378 = v1;
    return v2;
}

int sub_4089c0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408350();
}

int sub_405620()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_407bf0();
    }
}

int sub_402f60()
{
    unsigned long v0;  // [bp-0x40]
    unsigned long v2;  // rdi
    void *v3;  // rdx
    unsigned int *v4;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // bl
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // bpl
    unsigned long long v7;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // r13
    unsigned long long v9;  // r12
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // r15
    unsigned long long v15;  // rax

    v0 = v2;
    v5 = fileno(v3);
    v4 = __errno_location();
    if (!(v5 != 1))
    {
        v5 = 0;
        v6 = 0;
    }
    else if (v5 != 2)
    {
        if (v5 != 0)
        {
            v5 = dup2(0x2, 0x2) != 2;
        }
    }
    if (v5 == 2)
    {
        v5 = 0;
    }
    if (v5 == 0)
    {
        v5 = 0;
        v6 = 0;
        v8 = 0;
    }
    if (v5 == 2 || v5 != 1 && v5 != 0)
    {
        v6 = (char)(dup2(0x1, 0x1) != 1);
    }
    if (v5 == 1 || v5 == 2 || v5 != 0)
    {
        v7 = dup2(0x0, 0x0);
        if (v7 != 0)
        {
            v8 = (unsigned int)sub_402f10();
            if ((char)v8 != 0)
            {
            }
            else
            {
                v8 = 1;
                v9 = 0;
            }
        }
        else
        {
            v8 = 0;
        }
        if (v6 != 0 && (v7 == 0 || (char)v8 != 0))
        {
            v6 = (unsigned int)sub_402f10();
            if ((char)v6 == 0)
            {
                v10 = *(v4);
                v9 = 0;
                if (v5 != 0)
                {
                    close(0x2);
                }
            }
        }
        if ((v7 == 0 && v6 == 0 || v7 == 0 && (char)v6 != 0 || v6 == 0 && (char)v8 != 0 || (char)v6 != 0 && (char)v8 != 0) && v5 != 0)
        {
            v5 = (unsigned int)sub_402f10();
            if ((char)v5 == 0)
            {
                v10 = *(v4);
                v9 = 0;
            }
        }
    }
    if (v5 == 0 || v5 == 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0))
    {
        v9 = (unsigned int)sub_407b50();
    }
    if ((char)v5 != 0 || (char)v6 != 0)
    {
        v10 = *(v4);
    }
    if ((char)v5 == 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || v5 != 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0)))
    {
        close(0x2);
    }
    if ((char)v6 == 0 && v6 != 0 && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || ((char)v5 == 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0)) || v5 != 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0))) && v6 != 0)
    {
        close(0x1);
    }
    if (((char)v5 == 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0)) || v5 != 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0))) && v6 == 0 && v8 != 0 || ((char)v6 == 0 && v6 != 0 && (v7 == 0 || (char)v8 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || ((char)v5 == 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0)) || v5 != 0 && (v5 == 0 || (char)v8 == 0 && v7 != 0 && (v5 == 1 || v5 == 2 || v5 != 0) || v5 == 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0) || (char)v5 != 0 && v5 != 0 && (v7 == 0 || (char)v8 != 0) && (v6 == 0 || (char)v6 != 0) && (v5 == 1 || v5 == 2 || v5 != 0))) && v6 != 0) && v8 != 0)
    {
        close(0x0);
    }
    if (unknown)
    {
        *((unsigned long *)&v4) = v10;
    }
    v15 = v9;
    return v15;
}

int sub_4052f0()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_405540(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern int512_t g_60f4a0;

int sub_4046d0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60f4a0 : v1)) = v2;
    return &g_60f4a0;
}

extern int512_t g_60f248;

// int sub_409580()

typedef struct struct_0 {
    char padding_0[80];
    char field_50;
} struct_0;

int sub_408c10()
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

extern char g_60f308;
extern unsigned long long g_60f310;

int sub_402231()
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

    if (g_60f308 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60f310 >= 0)
            {
                break;
            }
            g_60f310 = g_60f310 + 1;
            *((long long *)(6352448 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60f308 = 1;
        return sub_4021db();
    }
    return v4;
}

int sub_407b50()
{
    void *v2;  // rax
    unsigned long v3;  // rdi
    unsigned int v4;  // r13d
    unsigned long long v5;  // rax
    unsigned int *v6;  // rax
    unsigned short v7;  // dx
    unsigned long long v9;  // rax
    unsigned long v10;  // rdi
    unsigned long long v13;  // rax

    if (v2 != 0 && v3 != 0)
    {
        v4 = fileno(v2);
        v5 = dup2(v4, v4);
        if (v5 < 0)
        {
            v6 = __errno_location();
            if (*(v6) == 9 && v4 != (unsigned int)v3)
            {
                v9 = dup2(v3, v4);
                v3 = (unsigned int)open("/dev/null", 0x80000, v7);
                if (v9 >= 0)
                {
                    close(v10);
                }
                else
                {
                    close(v10);
                }
            }
        }
    }
    if (v3 == 0 || v2 == 0 || v5 >= 0 || *(v6) != 9 || v9 < 0 && v4 != (unsigned int)v3)
    {
        v2 = (unsigned long long)freopen();
        return v13;
    }
}

int sub_40556c()
{
    abort(); /* do not return */
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
            v12 = (unsigned long long)(unsigned int)sub_408bf0();
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
                        v15 = sub_408c10();
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
        sub_408bb0(); /* do not return */
    }
}

// int sub_4049e0()

extern unsigned int g_409621;
extern unsigned int g_40969e;
extern unsigned int g_4098d0;
extern unsigned int g_4098f8;
extern unsigned int g_409a10;
extern unsigned int g_409a40;
extern unsigned int g_409a78;
extern unsigned int g_409b80;
extern unsigned int g_409bc8;
extern unsigned int g_409be8;
extern unsigned long long g_60f388;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_402a50()
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
    unsigned long long *v26;  // rax
    char *v27;  // rdi
    char *v28;  // rsi
    unsigned long long v29;  // rcx
    unsigned long long v30;  // cc_dep1
    unsigned long long v31;  // cc_dep2
    unsigned long v32;  // d
    char *v36;  // rax
    char *v37;  // rax
    unsigned long long v38;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4098d0, 0x5), g_60f388);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409621, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4098f8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409a10, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409a40, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x409a78, 0x5), stdout);
        v0 = "[";
        v26 = &v0;
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
            v26 = &v2;
            v27 = v2;
            if (v2 == 0)
            {
                break;
            }
            v28 = "dircolors";
            v29 = 10;
            if ((v30 > v31) - 0 - (v30 < v31) == 0)
            {
                break;
            }
            while (v29 != 0)
            {
                v29 -= 1;
                v30 = *(v28);
                v31 = *(v27);
                v27 = &v27[v32];
                v28 = &v28[v32];
                break;
            }
        }
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40969e, 0x5));
            v37 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40969e, 0x5));
            v36 = setlocale(0x5, 0x0);
            if (v36 != 0)
            {
                v38 = strncmp(v36, "en_", 0x3);
            }
            if (v36 == 0 || v38 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409bc8, 0x5));
            }
        }
        if ((v3 == 0 || v37 != 0) && (v3 == 0 || strncmp(v37, "en_", 0x3) != 0) && (v3 != 0 || v36 != 0) && (v3 != 0 || v38 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409b80, 0x5));
        }
        if (v3 != 0 || v36 != 0 && v38 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409bc8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x409be8, 0x5));
    }
    exit(v19); /* do not return */
}

extern char g_60f4a0;

int sub_404740()
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
    v3 = (v2 == 0? &g_60f4a0 : v2);
    *((int *)(tmp_11? &g_60f4a0 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60f4a0;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_60f4a0;
        abort(); /* do not return */
    }
}

// int sub_4049b0()

extern unsigned int g_60f2b4;
extern unsigned int g_60f2b8;
extern unsigned int g_60f2bc;
extern unsigned int g_60f4e0;
extern unsigned int g_60f4e4;
extern unsigned int g_60f4e8;
extern unsigned long long g_60f4f0;
extern unsigned long long g_60f520;

int sub_408920()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60f4e0 = g_60f2bc;
    g_60f4e4 = g_60f2b8;
    v1 = (unsigned int)v2;
    v0 = &g_60f4e0;
    g_60f2bc = g_60f4e0;
    g_60f520 = g_60f4f0;
    g_60f2b4 = g_60f4e8;
    return sub_408350();
}

extern int512_t g_60f4a0;

int sub_404720()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60f4a0 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60f4a0 : v1) + 4)) = v3;
    return v2;
}

extern unsigned int g_60f4d8;

int sub_405660()
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
                        v3 = (unsigned long long)(unsigned int)sub_405660();
                    }
                    if ((unsigned int)v4 == 41 && (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || v3[1] != 40))
                    {
                        v8 = &v3[1];
                        return v8;
                    }
                }
                if (v3[1] != 40 || (unsigned int)v4 != 41)
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
                if (g_60f4d8 == 0)
                {
                    g_60f4d8 = 0 - (unsigned int)(char)(getenv("POSIXLY_CORRECT") < 1) | 1;
                }
                v6 = v3[1];
                if (v3[1] != 33 && ((unsigned int)v6 != 94 || g_60f4d8 >= 0))
                {
                    v3 = &v3[1];
                }
                if (v3[1] == 33 || (unsigned int)v6 == 94 && g_60f4d8 < 0)
                {
                    v6 = v3[1 + 1];
                    v3 = &v3[1 + 1];
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
        if ((unsigned int)v4 != 91 && ((unsigned int)(v4 - 33) > 31 || (unsigned int)v4 != 41) && (((char)((char)*(&((char *)stack_base)[((v5 & 63) >> 3) + -312]) >> (unsigned long long)(char)(v5 & 63 & 7)) & 1) == 0 || (unsigned int)(v4 - 33) > 31 || v3[1] != 40))
        {
            return stack_base + 0;
        }
    }
    return stack_base + 0;
}

// int sub_404ba0()

int sub_402f10()
{
    unsigned long long v1;  // rbx
    unsigned short v2;  // dx
    unsigned long v3;  // rax
    unsigned int v4;  // edi
    unsigned long long v6;  // rax

    v1 = 1;
    v3 = open("/dev/null", 0x0, v2);
    if (v4 != v3)
    {
        v1 = 0;
        if (v3 >= 0)
        {
            close(v3);
            *(__errno_location()) = 9;
            return 0;
        }
    }
    if (v4 == v3 || v3 < 0)
    {
        v6 = v1;
        return v6;
    }
}

int sub_407c50()
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
    char padding_0[4];
    unsigned int field_4;
} struct_0;

extern char g_405a34;
extern char g_405a6e;
extern char g_405b08;
extern char g_405b63;
extern char g_405bd6;
extern char g_405c03;
extern char g_405c2d;
extern char g_405c4f;
extern char g_405ca5;
extern char g_405ce5;
extern char g_405d31;
extern char g_405d46;
extern char g_405d6c;
extern char g_405db1;
extern char g_405dca;
extern char g_405de3;
extern unsigned int g_60f4d8;

int sub_405860()
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
    unsigned long v10;  // [bp-0x20]
    unsigned long v11;  // [bp-0x18]
    unsigned long v12;  // [bp-0x10]
    unsigned long v13;  // [bp-0x8]
    unsigned int v15;  // edi
    unsigned long long v16;  // rdx
    unsigned long v17;  // rcx
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21;  // r13
    /*INVALID_EQUAL_UNDEFINED*/
undefined v22;  // r14
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax
    unsigned int v25[3];  // rdx
    unsigned long long v27;  // rbx
    unsigned long long v28;  // rcx
    unsigned long long v29;  // rax
    unsigned long long v31;  // r15
    unsigned long long v33;  // rax
    unsigned long long *v34;  // r13
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned int v37;  // r9d
    char v38;  // r8b
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned long long *v43;  // r13
    unsigned long long v44;  // r15
    unsigned long long *v45;  // r13
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax

    v7 = v15;
    v5 = v16;
    v6 = v17;
    v9 = 0;
    rsp = &v2;
    v8 = wcslen(v18);
    v20 = v4->field_4;
    if (v4->field_4 != 0)
    {
        v22 = &v4->field_4;
        v4 = v18;
        v21 = 0;
        while (true)
        {
            if ((unsigned int)v20 != 91)
            {
                while (true)
                {
                    v19 = v20 - 33;
                    if ((unsigned int)(v20 - 33) <= 31)
                    {
                        v0 = 3221227009;
                        rsp = &v2;
                        if (v22[1] == 40 && ((char)((char)*(&((char *)stack_base)[((v19 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v19 & 63 & 7)) & 1) != 0)
                        {
                            v21 += 1;
                            v22 = &v22[1];
                            v20 = 40;
                        }
                        if ((unsigned int)v20 == 41 && (((char)((char)*(&((char *)stack_base)[((v19 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v19 & 63 & 7)) & 1) == 0 || v22[1] != 40))
                        {
                            if (v21 != 0)
                            {
                                v20 = v22[1];
                                v22 = &v22[1];
                                if ((unsigned int)v20 != 0)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v27 = v4;
                                if (v7 - 63 > 1)
                                {
                                    v8 = (v22 - &v4->field_4 >> 2) + 1;
                                }
                                v28 = v8;
                                v29 = v8 * 4 + 15 & -8;
                                if (v28 > 4611686018427387903 || ((v8 << 2) + 15 & -8) - 8 > 7991)
                                {
                                    break;
                                }
                                rsp = &(&v2)[-1 * (v29 + 23 & -0x10) + -8];
                                v13 = &g_405b08;
                                *((int *)(unsigned long long)wmempcpy((&(&v2)[-1 * (v29 + 23 & -0x10) + 15] & -0x10) + 8)) = 0;
                                v9 = &(&v2)[-1 * (v29 + 23 & -0x10) + 15] & -0x10;
                                v43 = v9;
                                *(v9) = 0;
                                if (v9 == 0)
                                {
                                    rsp = rsp - 8;
                                    v12 = &g_405de3;
                                    __assert_fail(); /* do not return */
                                }
                                else if (v22[-1 + 1] == 41)
                                {
                                    v31 = v7 - 33;
                                    switch (v7)
                                    {
                                    case 33:
                                        if (v5 <= v6)
                                        {
                                            v8 = v9;
                                            *((unsigned int *[3])&v7[0]) = v22;
                                            while (true)
                                            {
                                                v34 = v8;
                                                while (true)
                                                {
                                                    rsp = rsp - 8;
                                                    v12 = &g_405ca5;
                                                    v35 = sub_405df0();
                                                    if (v35 != 0)
                                                    {
                                                        v34 = *(v34);
                                                        rsp = rsp - 8;
                                                        v11 = &g_405ce5;
                                                        v36 = sub_405df0();
                                                        if (v36 == 0)
                                                        {
                                                            break;
                                                        }
                                                    }
                                                    break;
                                                }
                                                if (v35 == 0 || v34 == 0 && v36 != 0)
                                                {
                                                    v34 = v8;
                                                }
                                                else if (v35 == 0 || v34 == 0 && v36 != 0)
                                                {
                                                    v47 = 1;
                                                }
                                                else if (v34 == 0 && v35 != 0)
                                                {
                                                    v47 = 0;
                                                }
                                            }
                                            if (true)
                                            {
                                                v47 = 1;
                                            }
                                            else
                                            {
                                                v47 = 0;
                                            }
                                        }
                                    case 42:
                                        rsp = rsp - 8;
                                        v12 = &g_405b63;
                                    case 43:
                                        *((unsigned int *[3])&v4[0]) = v22;
                                        v7 = v37 & 1;
                                        v3 = v27 - 4;
                                        while (true)
                                        {
                                            if (v5 <= v6)
                                            {
                                                v44 = v5;
                                                v8 = v38;
                                                do
                                                {
                                                    rsp = rsp - 8;
                                                    v12 = &g_405c2d;
                                                    v39 = sub_405df0();
                                                    if (v39 == 0)
                                                    {
                                                        if (v5 != v44)
                                                        {
                                                            rsp = rsp - 8;
                                                            v11 = &g_405bd6;
                                                            v41 = sub_405df0();
                                                            if (v41 == 0)
                                                            {
                                                                break;
                                                            }
                                                            rsp = rsp - 8;
                                                            v10 = &g_405c03;
                                                            v42 = sub_405df0();
                                                            if (v42 == 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            rsp = rsp - 8;
                                                            v11 = &g_405c4f;
                                                            v40 = sub_405df0();
                                                            if (v40 == 0)
                                                            {
                                                                break;
                                                            }
                                                        }
                                                        v43 = v9;
                                                    }
                                                    v44 += 4;
                                                }
                                                while (v6 >= v44);
                                                if (v39 == 0)
                                                {
                                                    v47 = 0;
                                                }
                                                else if (v39 != 0 || v5 == v44 && v40 != 0 || v42 != 0 && v5 != v44 && v41 != 0)
                                                {
                                                    v45 = *(v43);
                                                    v9 = v45;
                                                }
                                            }
                                            v45 = *(v43);
                                            v9 = v45;
                                        }
                                        if (true)
                                        {
                                            v47 = 0;
                                        }
                                        else if (v45 == 0)
                                        {
                                            v47 = 1;
                                        }
                                    case 63:
                                        rsp = rsp - 8;
                                        v12 = &g_405d6c;
                                        v33 = sub_405df0();
                                        if (v33 == 0)
                                        {
                                            v47 = 0;
                                            break;
                                        }
                                    case 64:
                                        while (true)
                                        {
                                            rsp = rsp - 8;
                                            v12 = &g_405d31;
                                            wcscat((unsigned int)v43 + 8, (unsigned int)v22);
                                            rsp = rsp - 8;
                                            v11 = &g_405d46;
                                            v46 = sub_405df0();
                                            if (v46 != 0)
                                            {
                                                v43 = *(v43);
                                                v9 = v43;
                                                if (v43 == 0)
                                                {
                                                    break;
                                                }
                                            }
                                            else
                                            {
                                                v47 = 0;
                                            }
                                        }
                                        if (v46 != 0)
                                        {
                                            v47 = 1;
                                        }
                                        else if (v46 == 0)
                                        {
                                            return v47;
                                        }
                                    default:
                                        rsp = rsp - 8;
                                        v12 = &g_405db1;
                                        __assert_fail(); /* do not return */
                                    }
                                    v47 = 1;
                                    v47 = 0;
                                }
                                else
                                {
                                    rsp = rsp - 8;
                                    v12 = &g_405dca;
                                    __assert_fail(); /* do not return */
                                }
                            }
                        }
                    }
                    else if ((unsigned int)v20 == 124)
                    {
                        if (v21 == 0)
                        {
                            v23 = v8;
                            if (v7 - 63 > 1)
                            {
                                v23 = (v22 - &v4->field_4 >> 2) + 1;
                            }
                            v24 = v23 * 4 + 15 & -8;
                            if (v23 > 4611686018427387903 || ((v23 << 2) + 15 & -8) - 8 > 7991)
                            {
                                break;
                            }
                            rsp = &(&v2)[-1 * (v24 + 23 & -0x10) + -8];
                            v13 = &g_405a34;
                            *((int *)(unsigned long long)wmempcpy((&(&v2)[-1 * (v24 + 23 & -0x10) + 15] & -0x10) + 8)) = 0;
                            v20 = v22[1];
                            v22 = &v22[1];
                            *((long long *)v9) = 0;
                            v9 = &(&v2)[-1 * (v24 + 23 & -0x10) + 15] & -0x10;
                        }
                    }
                    if ((unsigned int)v20 != 124 && (unsigned int)(v20 - 33) > 31 || v21 != 0 && (unsigned int)(v20 - 33) > 31 || ((char)((char)*(&((char *)stack_base)[((v19 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v19 & 63 & 7)) & 1) == 0 && (unsigned int)(v20 - 33) <= 31 && (unsigned int)v20 != 41 || (unsigned int)(v20 - 33) <= 31 && (unsigned int)v20 != 41 && v22[1] != 40)
                    {
                        v20 = v22[1];
                        v22 = &v22[1];
                    }
                }
                if ((unsigned int)v20 == 124 && v21 == 0 && (unsigned int)(v20 - 33) > 31 || (unsigned int)v20 == 124 && v21 == 0 && ((v23 << 2) + 15 & -8) - 8 <= 7991 && (unsigned int)(v20 - 33) > 31 || (unsigned int)v20 == 41 && v21 == 0 && ((v8 << 2) + 15 & -8) - 8 <= 7991 && (unsigned int)(v20 - 33) <= 31 && (((char)((char)*(&((char *)stack_base)[((v19 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v19 & 63 & 7)) & 1) == 0 || v22[1] != 40) || (unsigned int)v20 == 41 && v21 == 0 && (unsigned int)(v20 - 33) <= 31 && (((char)((char)*(&((char *)stack_base)[((v19 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v19 & 63 & 7)) & 1) == 0 || v22[1] != 40) || (unsigned int)v20 == 41 && (unsigned int)v20 == 0 && (unsigned int)(v20 - 33) <= 31 && v21 != 0 && (((char)((char)*(&((char *)stack_base)[((v19 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v19 & 63 & 7)) & 1) == 0 || v22[1] != 40))
                {
                    v47 = -18446744069414584321;
                }
                else if ((unsigned int)v20 != 124 && (unsigned int)(v20 - 33) > 31 || v21 != 0 && (unsigned int)(v20 - 33) > 31 || ((char)((char)*(&((char *)stack_base)[((v19 & 63) >> 3) + -432]) >> (unsigned long long)(char)(v19 & 63 & 7)) & 1) == 0 && (unsigned int)(v20 - 33) <= 31 && (unsigned int)v20 != 41 || v23 <= 4611686018427387903 && ((v23 << 2) + 15 & -8) - 8 <= 7991 && (unsigned int)(v20 - 33) > 31 || (unsigned int)(v20 - 33) <= 31 && (unsigned int)v20 != 41 && v22[1] != 40)
                {
                    if ((unsigned int)v20 == 0)
                    {
                        break;
                    }
                }
                else if (unknown)
                {
                    return v47;
                }
            }
            else
            {
                if (g_60f4d8 == 0)
                {
                    v3 = &v4->field_4;
                    rsp = rsp - 8;
                    v1 = &g_405a6e;
                    g_60f4d8 = 0 - (unsigned int)(char)(getenv("POSIXLY_CORRECT") < 1) | 1;
                }
                v20 = v22[1];
                if (v22[1] != 33 && (v20 != 94 || g_60f4d8 >= 0))
                {
                    v25 = &v22[1];
                }
                if (v22[1] == 33 || v20 == 94 && g_60f4d8 < 0)
                {
                    v25 = &v22[1];
                    v20 = v22[1];
                }
                if (v20 == 93)
                {
                    v20 = v25[1];
                    v25 = &v25[1];
                }
                while (true)
                {
                    v22 = &v25[1];
                    if (v20 != 93)
                    {
                        if (v20 == 0)
                        {
                            break;
                        }
                        v20 = *(v22);
                        v25 = v22;
                    }
                    else
                    {
                        v20 = v25[1];
                    }
                }
                if (v20 != 93)
                {
                    v47 = -18446744069414584321;
                }
            }
        }
        if (true)
        {
            v47 = -18446744069414584321;
        }
        else if ((unsigned int)v20 != 91)
        {
            return v47;
        }
    }
    v47 = -18446744069414584321;
    return v47;
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_405150()
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
    return sub_404d50();
}

extern unsigned long long g_60ee30;

int sub_409598()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_60ee30;
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

// int sub_4049c0()

int sub_408a00()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_408350();
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

extern unsigned int g_40c918;
extern unsigned int g_40c938;
extern unsigned int g_40c968;
extern unsigned int g_40c988;
extern unsigned int g_40c9b8;
extern unsigned int g_40ca09;
extern unsigned long long stderr;

int sub_407d30()
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40c918, 0x5), *(v34));
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40c938, 0x5), *(v34));
                                v39 = stderr;
                                v40 = v18;
                                v43 = v1;
                                v41 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v43) != 0)
                                    {
                                        __fprintf_chk(v39, 0x1, 0x40ca09, *((long long *)&v11));
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40c9b8, 0x5), *(v34));
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
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40c988, 0x5), *(v34));
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
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x40c968, 0x5), *(v34));
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern unsigned int g_40c28f;
extern unsigned int g_60f258;

int sub_405540()
{
    dcgettext(0x0, 0x40c28f, 0x5);
    error(g_60f258, 0x0, "%s");
}

// int sub_404d30()

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

int sub_408c25()
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
    v12 = sub_408bf0();
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
    sub_408bb0(); /* do not return */
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

int sub_405520()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

// int sub_405340()

int sub_408980()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_408920();
}

int sub_402ee0()
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

extern unsigned int g_40b152;
extern unsigned int g_60f258;
extern char g_60f378;
extern unsigned long long g_60f380;

int sub_402de0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_408ee0();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60f378 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x40b152, 0x5);
            if (g_60f380 != 0)
            {
                sub_404b80();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60f378 != 0)
    {
        v3 = sub_408ee0();
    }
    if ((unsigned int)v3 == 0 && (*(v2) == 32 || v1 == 0) && (v1 == 0 || g_60f378 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60f258);
        error(0x0, *(v2), "%s");
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

int sub_407bf0()
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

// int sub_404b70()

int sub_4089e0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_408920();
}

int sub_40480b()
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
    v7 = (unsigned int)sub_4032b0();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_4052f0();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_4032b0();
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

extern int512_t g_60f4a0;

int sub_404770()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60f4a0 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_4032b0();
}

extern unsigned long long g_60f380;

int sub_402dc0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60f380 = v1;
    return v2;
}

// int sub_404ce0()

extern unsigned long long __progname_full;
extern unsigned long long g_60f388;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_403110()
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
        g_60f388 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

extern unsigned int g_40bef8;
extern unsigned int g_40bf04;
extern unsigned int g_40bf0b;
extern unsigned int g_40bf0f;
extern unsigned int g_40bf1f;
extern unsigned int g_40bf36;
extern unsigned int g_40bf98;
extern unsigned int g_40c068;
extern unsigned int g_40c088;
extern unsigned int g_40c0b0;
extern unsigned int g_40c0d8;
extern unsigned int g_40c108;
extern unsigned int g_40c260;

int sub_404d50()
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
        __fprintf_chk(v15, 0x1, 0x40bef8, v14);
    }
    else
    {
        __fprintf_chk(v16, 0x1, 0x40bf04, v17);
    }
    __fprintf_chk((unsigned int)v18, 0x1, 0x40c260, dcgettext(0x0, 0x40bf0b, 0x5));
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x40bf98, 0x5), v18);
    switch (v20)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x40bf0f, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x40bf1f, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x40bf36, 0x5);
        break;
    case 4:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x40c068, 0x5);
    case 5:
        v27 = v13[3];
        v28 = *(v13);
        v29 = dcgettext(0x0, 0x40c088, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v31 = dcgettext(0x0, 0x40c0b0, 0x5);
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v31 = dcgettext(0x0, 0x40c0d8, 0x5);
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
        v32 = dcgettext(0x0, 0x40c108, 0x5);
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

extern unsigned long long g_60f2c8;

int sub_4021db()
{
    unsigned long long v1;  // rax

    v1 = &g_60f2c8;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

// int sub_404990()

// int sub_404cc0()

int sub_4054f0()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_4052f0();
}

extern unsigned long long g_40ca2f;

int sub_408a20()
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
        v5 = &g_40ca2f;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_408f40() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

extern int512_t g_40b1b6;
extern int512_t g_40b1ba;

int sub_4031b0()
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
        v3 = sub_408fa0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40b1b6 : 4239809);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_40b1ba : 4239805);
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

extern unsigned int g_40bf52;
extern unsigned int g_40bf7d;
extern unsigned int g_40c1b0;

int sub_405270()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bf52, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40bf7d, 0x5));
    dcgettext(0x0, 0x40c1b0, 0x5);
}

extern unsigned int g_4096b9;
extern unsigned int g_409719;
extern unsigned int g_409c20;
extern unsigned int g_409c90;
extern unsigned int g_409cf8;
extern unsigned int g_409d38;
extern unsigned int g_40bf00;
extern unsigned int g_40ca2f;
extern unsigned int g_60f2bc;
extern unsigned long long g_60f330;
extern unsigned long long g_60f338;
extern unsigned long long g_60f340;
extern char g_60f370;
extern unsigned long long stderr;
extern unsigned long long stdout;

int main()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // r13
    unsigned long long v2;  // rbp
    unsigned long long v5;  // rax
    char *v6;  // rdi
    unsigned int v7;  // r12d
    char *v10;  // rbx
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rbx
    char *v14;  // rdi
    unsigned long long v15;  // rcx
    char v16;  // cc_dep2
    unsigned long v17;  // d
    char *v18;  // rax
    unsigned long v21;  // rdi
    unsigned long long *v23;  // rsi
    unsigned long long v24;  // rax
    unsigned long long v25;  // rbp
    unsigned long long v26;  // rax
    unsigned long long v28;  // rax
    unsigned long long v29;  // rbx
    unsigned long long v30;  // rax
    unsigned long long v31;  // rdx
    char *v32;  // r14

    v1 = 2;
    v2 = 0;
    sub_403110();
    setlocale(0x6, 0x40ca2f);
    bindtextdomain(0x4096b9, 0x409c20);
    textdomain(0x4096b9);
    sub_409580();
    while (true)
    {
        v5 = sub_4089a0();
        if ((unsigned int)v5 == -1)
        {
            v7 = (unsigned int)v6 - g_60f2bc;
            if ((unsigned int)v1 != 2 && v2 != 0)
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409c90, 0x5));
            }
            if ((unsigned int)v1 == 2 || v2 == 0)
            {
                if (((unsigned int)v2 ^ 1) >= (unsigned int)v6 - g_60f2bc)
                {
                    if (v2 != 0)
                    {
                        v10 = "# Configuration file for dircolors, a utility to help you set the";
                        do
                        {
                            puts(v10);
                            v14 = v10;
                            v15 = -1;
                            while (v15 != 0)
                            {
                                v15 -= 1;
                                v16 = *(v14);
                                v14 = &v14[v17];
                                break;
                            }
                            v10 = (char *)(0x40a100 + !(rcx));
                        }
                        while ((char *)(0x40a100 + !(rcx)) - "# Configuration file for dircolors, a utility to help you set the" <= 4172);
                    }
                    else
                    {
                        if ((unsigned int)v1 == 2)
                        {
                            v18 = getenv("SHELL");
                            if (v18 != 0 && *(v18) != 0)
                            {
                                v1 = (unsigned int)sub_402e80();
                                if (strcmp(v6, "csh") != 0)
                                {
                                    v6 = v1;
                                    v1 = 0;
                                    v1 = strcmp(v21, "t") == 0;
                                }
                                else
                                {
                                    v1 = 1;
                                }
                            }
                            if (v18 == 0 || *(v18) == 0)
                            {
                                error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x409cf8, 0x5));
                            }
                        }
                        if ((unsigned int)v1 != 2 || v18 != 0 && *(v18) != 0)
                        {
                            _obstack_begin();
                            if (v7 != 0)
                            {
                                v24 = strcmp(v23[(long long)(int)g_60f2bc], "-");
                                if (v24 != 0)
                                {
                                    v26 = sub_402f60();
                                }
                                if (v24 == 0 || v26 != 0)
                                {
                                    v28 = sub_4055a0();
                                    if (v28 == 0)
                                    {
                                        v25 = (unsigned int)sub_402480();
                                    }
                                }
                                if ((v26 == 0 || v28 != 0) && (v24 != 0 || v28 != 0))
                                {
                                    v29 = (unsigned int)sub_404bb0();
                                    error(0x0, *(__errno_location()), "%s");
                                }
                            }
                            else
                            {
                                v25 = (unsigned int)sub_402480();
                            }
                            if (v7 == 0 || v24 == 0 && v28 == 0 || v28 == 0 && v26 != 0)
                            {
                                if (v25 == 0)
                                {
                                    break;
                                }
                                v30 = g_60f338;
                                if (g_60f338 == g_60f330)
                                {
                                    g_60f370 = g_60f370 | 2;
                                }
                                v31 = g_60f340;
                                *((int *)&g_60f338) = (!((rax + *((long long *)6353744) & !(*((long long *)6353744))) - *((long long *)6353704) <= g_60f340 - *((long long *)6353704))? v31 : rax + *((long long *)6353744) & !(*((long long *)6353744)));
                                *((int *)&g_60f330) = (!((rax + *((long long *)6353744) & !(*((long long *)6353744))) - *((long long *)6353704) <= g_60f340 - *((long long *)6353704))? v31 : rax + *((long long *)6353744) & !(*((long long *)6353744)));
                                v32 = (v1 != 0? "'\n" : "';\nexport LS_COLORS\n");
                                fputs_unlocked((v1 != 0? "setenv LS_COLORS " : "LS_COLORS='"), stdout);
                                fwrite_unlocked(g_60f330, 0x1, g_60f338 - g_60f330, stdout);
                                fputs_unlocked(v32, stdout);
                            }
                        }
                    }
                }
                else
                {
                    if (v2 != 0)
                    {
                        v12 = (unsigned int)sub_404d30();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409719, 0x5));
                        __fprintf_chk(stderr, 0x1, 0x40bf00, dcgettext(0x0, 0x409d38, 0x5));
                    }
                    else
                    {
                        v11 = (unsigned int)sub_404d30();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x409719, 0x5));
                    }
                }
            }
        }
        else if ((unsigned int)v5 != 98)
        {
            if (v5 > 98)
            {
                if ((unsigned int)v5 == 99)
                {
                    v1 = 1;
                }
                if ((unsigned int)v5 == 112)
                {
                    v2 = 1;
                }
            }
            else
            {
                if ((unsigned int)v5 == -131)
                {
                    sub_4051b0();
                    exit(0x0); /* do not return */
                }
                if ((unsigned int)v5 == -130)
                {
                    sub_402a50(); /* do not return */
                }
            }
        }
        if ((unsigned int)v5 == 98)
        {
            v1 = 0;
        }
        if ((unsigned int)v5 == -1 && ((unsigned int)v2 ^ 1) < (unsigned int)v6 - g_60f2bc && ((unsigned int)v1 == 2 || v2 == 0) || (unsigned int)v5 == -1 && (unsigned int)v1 != 2 && v2 != 0 || v5 <= 98 && (unsigned int)v5 != -1 && (unsigned int)v5 != -131 && (unsigned int)v5 != 98 && (unsigned int)v5 != -130 || (unsigned int)v5 != -1 && v5 > 98 && (unsigned int)v5 != 112 && (unsigned int)v5 != 99 && (unsigned int)v5 != 98)
        {
            sub_402a50(); /* do not return */
        }
    }
    return (unsigned long long)(stack_base + 0);
}

// int sub_4048e0()

int sub_402d60()
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdi
    unsigned long long v3;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // r8d
    unsigned long long v5;  // rax
    unsigned long long v6;  // r9
    unsigned long long v7;  // rcx
    unsigned long long v8;  // rdx
    unsigned int v9;  // r9d

    v1 = 0;
    if (v2 != v3)
    {
        v8 = 0;
        do
        {
            v4 = (char)*((char *)(v2 + v8));
            v5 = (char)*((char *)(v2 + v8));
            if ((unsigned int)((unsigned long long)(char)*((char *)(v2 + v8)) - 65) <= 25)
            {
                v4 = (unsigned long long)v4 + 32;
                v5 = (unsigned int)v5 + 32;
            }
            v6 = (char)*((char *)(v3 + v8));
            v7 = (char)*((char *)(v3 + v8));
            if ((unsigned int)((unsigned long long)(char)*((char *)(v3 + v8)) - 65) <= 25)
            {
                v6 = (unsigned int)v6 + 32;
                v7 = (unsigned int)v7 + 32;
            }
            if (v5 == 0)
            {
                break;
            }
            v8 += 1;
        }
        while (v5 == v7);
        v9 = v6;
        v1 = v4 - v9;
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
    return sub_408c10();
}

int sub_402e80()
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

int sub_404a70()
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
    return sub_4044e0();
}

int sub_404a00()
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
    return sub_4044e0();
}

int sub_4054c0()
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
        sub_405540(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60f298;
extern uint128_t g_60f2a0;
extern unsigned int g_60f2b0;
extern int512_t g_60f3a0;

int sub_4044e0()
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
    v17 = g_60f298;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60f2b0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60f298 != 6353568)
            {
                v16 = sub_405350();
                g_60f298 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_405350();
                v17 = v15;
                g_60f298 = v15;
                *(v15) = g_60f2a0;
            }
            memset(&v17[(long long)(int)g_60f2b0], 0x0, (int)((unsigned int)v13 + 1 - g_60f2b0) * 16);
            g_60f2b0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_405540(); /* do not return */
        }
    }
    if (g_60f2b0 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_4032b0();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6353824)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_4052f0();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_4032b0();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

// int sub_404d10()

// int sub_404c90()

extern char g_407a30;
extern int512_t g_407a39;
extern int512_t g_407a54;
extern int512_t g_407a70;
extern int512_t g_407b16;

int sub_407910()
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
                                v4 = &g_407a30;
                                mbsrtowcs(stack_base + -104 - (v18 + 23 & -0x10) + 15 & -0x10, (unsigned int)&v2, v9, (unsigned int)&v3);
                                rsp = tmp_8 - 8 - 8;
                                *((long long **)(tmp_8 - 8 - 8)) = &g_407a39;
                                v22 = mbsinit((unsigned int)&v3);
                                if (v22 != 0)
                                {
                                    *((long long **)(tmp_8 - 8 - 8 - 8)) = &g_407a54;
                                    mbsrtowcs(v21, (unsigned int)&v1, v12, (unsigned int)&v3);
                                    *((long long **)(tmp_8 - 8 - 8 - 8 - 8)) = &g_407a70;
                                    v16 = sub_405df0();
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
                                        v0 = sub_405df0();
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
    if (v9 + 1 == 0 || v7 == 1 || v12 + 1 == 0 && v10 != 0)
    {
        strlen(v14);
        v16 = sub_406e20();
    }
    if (INVALID_IR && v13 != 0 && v9 + 1 != 0 && v7 != 1 && v12 + 1 != 0 && v10 != 0 || !(INVALID_IR) && v17 > 4611686018427387903 && v13 != 0 && v9 + 1 != 0 && v7 != 1 && v12 + 1 != 0 && v10 != 0 || v23 == 0 && v17 <= 4611686018427387903 && !(INVALID_IR) && v17 > 1999 && v13 != 0 && v9 + 1 != 0 && v7 != 1 && v12 + 1 != 0 && v10 != 0)
    {
        *(__errno_location()) = 12;
        v16 = -18446744069414584321;
    }
    if (v17 <= 4611686018427387903 && !(INVALID_IR) && v23 != 0 && v17 > 1999 && v13 != 0 && v9 + 1 != 0 && v7 != 1 && v12 + 1 != 0 && v10 != 0 && v25 == 0 || v17 <= 1999 && v17 <= 4611686018427387903 && !(INVALID_IR) && v13 != 0 && v9 + 1 != 0 && v7 != 1 && v12 + 1 != 0 && v10 != 0 && v22 == 0)
    {
        rsp = rsp - 8;
        *((long long **)rsp) = &g_407b16;
        __assert_fail(); /* do not return */
    }
    if (unknown)
    {
        return v16;
    }
}

int sub_408aa0()
{
    unsigned long long v1;  // rdx
    void *v2;  // dil
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
            while (*((char *)v2) != (char)v3 && (v2 & 7) != 0 && v1 != 1);
            if (v1 != 1)
            {
                v4  = unknown;            }
            else if (true)
            {
                return 0;
            }
            else if ((v2 & 7) != 0 && v1 != 1)
            {
                v5 = v2;
            }
        }
        if ((v2 & 7) == 0 || v3 != *((char *)v2))
        {
            if ((v2 & 7) == 0 || v1 > 7)
            {
                v4  = unknown;            }
            if (v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0)
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 > 7 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v1 > 7) && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2))
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 > 7 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v1 > 7) && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 == *((char *)v2) || v3 != *((char *)v2) && (v2 & 7) != 0 && v1 != 0 && v1 > 7 || v3 == *((char *)v2) && (v2 & 7) != 0 && v1 != 0)
    {
        v5 = v2;
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 > 7 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v1 > 7) && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 > 7 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v3 != *((char *)v2) && (v2 & 7) != 0 && v1 != 0 && v1 > 7 || v1 == 0)
    {
        return 0;
    }
    if (v1 != 0 || v1 <= 7 || v3 == *((char *)v2))
    {
        return v5;
    }
}

int sub_4055a0()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_405620() != 0)
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

