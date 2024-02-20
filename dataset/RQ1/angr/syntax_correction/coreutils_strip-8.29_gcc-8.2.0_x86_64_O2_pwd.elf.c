
#include "decompile_angr.h"
#define __int64 long long
#define __int32 int
#define __int16 short
#define __int8 char
#include "decompile_angr.h"
int sub_403d60()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_404c20();
}

int sub_405f00()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_405e80();
}

int sub_403eeb()
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
    v7 = (unsigned int)sub_402990();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_404a20();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_402990();
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

int sub_406480()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x70]
    unsigned long v1;  // [bp-0x68]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x40]
    unsigned long long v7;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // eax
    char *v10;  // rsi
    char *v11;  // rbx
    unsigned long long v12;  // rcx
    unsigned int v13;  // r8
    unsigned long long v14;  // rdx
    unsigned long long v17;  // rbp
    unsigned long long v19;  // rbx
    unsigned long v20;  // r8
    unsigned long long v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r14
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    unsigned long long v33;  // rdx
    unsigned long long v34;  // rax
    unsigned long long v35;  // rax
    unsigned long long v36;  // r12
    unsigned long long v37;  // rax

    v8 = (char)*((char *)v7);
    if (!(*((char *)v7) != 0))
    {
        v36 = (*(v10) == 0? v7 : 0);
    }
    else if (*(v10) != 0)
    {
        v11 = v10;
        v14 = v7;
        v13 = 1;
        while (true)
        {
            v14 += 1;
            v11 = &v11[1];
            v12 = *(v11);
            v13 &= v8;
            v8 = (char)*((char *)v14);
            if ((char)v8 == 0)
            {
                v36 = 0;
                if (v12 != 0)
                {
                    break;
                }
            }
            v36 = v7;
            if (v17 == 1 || v13 != 0)
            {
                break;
            }
            v17 = v11 - v10;
            v36 = strchr(v7 + 1, (unsigned long long)*(v10));
            if (v36 == 0)
            {
                break;
            }
            v19 = &v11[-1 * v17];
            v20 = (v7 + v17 < v36? 1 : v7 + v17 - v36);
            if (v17 > 31)
            {
                v36 = (unsigned int)sub_406130();
            }
            else
            {
                if (v17 > 2)
                {
                    v0 = v20;
                    v21 = (unsigned int)sub_406000();
                    v2 = v5;
                }
                else
                {
                    v5 = 1;
                    v21 = v17 - 1;
                    v2 = 1;
                }
                v0 = v0;
                v22 = memcmp(v19, v19 + v2, v21);
                if (v22 == 0)
                {
                    v23 = 0;
                    v24 = 0;
                    v3 = v21 - 1;
                    v4 = v17 - v2;
                    v1 = 1 - v21;
                    while (true)
                    {
                        v0 = v17 + v24;
                        if (v0 == 0)
                        {
                            break;
                        }
                        if (sub_406f70() != 0)
                        {
                            break;
                        }
                        v27 = (v23 <= v21? v21 : v23);
                        if (v17 > (v23 <= v21? v21 : v23))
                        {
                            if (*((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)))
                            {
                                v28 = v36 + v24;
                                do
                                {
                                    v27 += 1;
                                }
                                while (*((char *)(v19 + v27)) == *((char *)(v28 + v27)) && v17 != v27);
                                if (true)
                                {
                                    v29 = v3;
                                }
                                else if (v17 != v27)
                                {
                                    v23 = 0;
                                    v24 = v27 + v1 + 0;
                                }
                            }
                            if (v21 > v23 || *((char *)(v36 + v27 + v24)) != *((char *)(v19 + v27)))
                            {
                                v23 = 0;
                                v24 = v27 + v1 + 0;
                            }
                        }
                        if (v17 <= (v23 <= v21? v21 : v23) || *((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)) && v21 > v23)
                        {
                            v29 = v3;
                            if (v21 > v23)
                            {
                                v30 = v36 + v24;
                                if (*((char *)(v19 + v3)) == *((char *)(v36 + v24 + v3)))
                                {
                                    while (true)
                                    {
                                        v31 = v29 - 1;
                                        if (v23 == v29 || *((char *)(v19 + v29 - 1)) != *((char *)(v29 + v30 - 1)))
                                        {
                                            break;
                                        }
                                        v29 = v31;
                                    }
                                }
                            }
                            if (v21 <= v23 || *((char *)(v19 + v3)) != *((char *)(v36 + v24 + v3)))
                            {
                                v29 = v21;
                            }
                        }
                        if (v17 <= (v23 <= v21? v21 : v23) || *((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)) && v21 > v23)
                        {
                            if (1 <= v29)
                            {
                                v23 = v4;
                                v24 = 0 + v2;
                            }
                            else
                            {
                                v36 += v24;
                            }
                        }
                    }
                    if (true)
                    {
                        v36 = 0;
                    }
                    else if (1 > v29 && (v17 <= (v23 <= v21? v21 : v23) || v21 > v23))
                    {
                        v37 = v36;
                        return v37;
                    }
                }
                else
                {
                    v25 = 0;
                    v2 = (v17 - v21 < v21? v21 : v17 - v21) + 1;
                    v5 = (v17 - v21 < v21? v21 : v17 - v21) + 1;
                    v0 = v36 + v21;
                    v1 = 1 - v21;
                    while (true)
                    {
                        if (v20 == 0)
                        {
                            break;
                        }
                        if (sub_406f70() != 0)
                        {
                            break;
                        }
                        v33 = v36 + v25;
                        if (v17 > v21)
                        {
                            v34 = v21;
                            v33 = v36 + v25;
                            if (*((char *)(v0 + v25)) == *((char *)(v19 + v21)))
                            {
                                do
                                {
                                    v34 += 1;
                                }
                                while (*((char *)(v19 + v34)) == *((char *)(v33 + v34)) && v17 > v34);
                                if (true)
                                {
                                    v35 = v21 - 1;
                                }
                                else if (v17 > v34)
                                {
                                    v25 = v34 + v1 + 0;
                                }
                            }
                            if (*((char *)(v0 + v25)) != *((char *)(v19 + v21)) || v21 - 1 != -1)
                            {
                                v25 = v34 + v1 + 0;
                            }
                        }
                        if (v17 <= v21 || *((char *)(v0 + v25)) == *((char *)(v19 + v21)) && v21 - 1 != -1)
                        {
                            v35 = v21 - 1;
                        }
                        if (v21 - 1 != -1 && (*((char *)(v0 + v25)) == *((char *)(v19 + v21)) || v17 <= v21))
                        {
                            if (*((char *)(v33 + v35)) == *((char *)(v19 + v21 - 1)))
                            {
                                do
                                {
                                    v35 -= 1;
                                }
                                while (*((char *)(v19 + v35)) == *((char *)(v33 + v35)) && v35 != -1);
                                if (v35 != -1)
                                {
                                    v25 = 0 + v2;
                                }
                                else
                                {
                                    v36 = v33;
                                }
                            }
                            v25 = 0 + v2;
                        }
                        if ((*((char *)(v0 + v25)) == *((char *)(v19 + v21)) || v17 <= v21) && (*((char *)(v33 + v35)) == *((char *)(v19 + v21 - 1)) || v21 - 1 == -1) && (v17 <= v21 || v21 - 1 != -1))
                        {
                            v36 = v33;
                        }
                    }
                    if (true)
                    {
                        v36 = 0;
                    }
                    else
                    {
                        v37 = v36;
                        return v37;
                    }
                }
                v36 = 0;
            }
        }
    }
    else
    {
        v36 = v7;
    }
    v37 = v36;
    return v37;
}

// int sub_404380()

int sub_406880()
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

extern char g_60a2c8;
extern unsigned long long g_60a2d0;

int sub_401cb1()
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

    if (g_60a2c8 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_60a2d0 >= 0)
            {
                break;
            }
            g_60a2d0 = g_60a2d0 + 1;
            *((long long *)(6331968 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_60a2c8 = 1;
        return sub_401c5b();
    }
    return v4;
}

int sub_4051b0()
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

extern unsigned int g_40884f;
extern unsigned int g_60a238;

int sub_404c70()
{
    dcgettext(0x0, 0x40884f, 0x5);
    error(g_60a238, 0x0, "%s");
    abort(); /* do not return */
}

extern int512_t g_60a400;

int sub_403e00()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_60a400 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_60a400 : v1) + 4)) = v3;
    return v2;
}

extern unsigned int g_407776;

int sub_404430()
{
    char v0;  // [bp-0x98]
    unsigned long v1;  // [bp-0x90]
    unsigned long long v3[2];  // rax
    unsigned long v4;  // rdi

    v3 = __lxstat(0x1, 0x407776, (unsigned int)&v0);
    if (v3 == 0)
    {
        v3[0] = v1;
        v3[1] = *((long long *)&v0);
        return v4;
    }
    return 0;
}

// int sub_404a70()

extern int512_t g_60a400;

int sub_403da0()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_60a400 : v1));
}

extern uint128_t g_60a400;
extern uint128_t g_60a410;
extern uint128_t g_60a420;
extern unsigned long long g_60a430;

int sub_404300()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_60a400;
    *((uint128_t *)&v1) = g_60a410;
    *((uint128_t *)&v2) = g_60a420;
    v4 = g_60a430;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_403bc0();
    }
    if (v7 == 0 || v6 == 0)
    {
        abort(); /* do not return */
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_408977;
extern char g_60a478[2];

int sub_4068e0()
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

    v9 = g_60a478;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_408977 : (unsigned long long)nl_langinfo(0xe));
    if (g_60a478 == 0)
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
            v9 = &g_408977;
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
                                        v9 = &g_408977;
                                        v10 = (tmp_10 == 0? &g_408977 : tmp_10);
                                        free(NULL);
                                        sub_406e50();
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
                            v10 = (tmp_10 == 0? &g_408977 : tmp_10);
                            sub_406e50();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v62 == -1 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1)
                    {
                        v9 = &g_408977;
                    }
                    else if (((unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v0 != 0 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && v29 > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v0 == 0) && v38 == 0 || ((*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16))) && (unsigned int)v61 == -1 || (unsigned int)v27 == 35 && (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v62 == -1 || (unsigned int)(v27 - 9) > 1 && (unsigned int)v27 != 35 && (unsigned int)v27 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v61 != -1) && v29 <= 1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_408977;
            free(v17);
        }
        *((char *[2])&g_60a478[0]) = v9;
    }
    v67 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v68 = strcmp((tmp_10 == 0? &g_408977 : tmp_10), v9);
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

extern unsigned long long program_invocation_short_name;

int sub_401c5b()
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
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_60a278;
extern uint128_t g_60a280;
extern unsigned int g_60a290;
extern int512_t g_60a300;

int sub_403bc0()
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
    v17 = g_60a278;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_60a290 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_60a278 != 6333056)
            {
                v16 = sub_404a80();
                g_60a278 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_404a80();
                v17 = v15;
                g_60a278 = v15;
                *(v15) = g_60a280;
            }
            memset(&v17[(long long)(int)g_60a290], 0x0, (int)((unsigned int)v13 + 1 - g_60a290) * 16);
            g_60a290 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_404c70(); /* do not return */
        }
    }
    if (g_60a290 > (unsigned int)v13 || (unsigned int)v13 != 2147483647)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_402990();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 0x60a300)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_404a20();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_402990();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern char g_60a400;

int sub_403e20()
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
    v3 = (v2 == 0? &g_60a400 : v2);
    *((int *)(tmp_11? &g_60a400 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_60a400;
    }
    if (v4 == 0 || v5 == 0)
    {
        v0 = &g_60a400;
        abort(); /* do not return */
    }
}

int sub_402990()
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
            v26 = (unsigned int)sub_402890();
            v27 = (unsigned long long)(unsigned int)sub_402890();
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
                                    v78 = 0;
                                    if (v79 > v76)
                                    {
                                        *((char *)(v29 + v76)) = 92;
                                    }
                                    v76 += 1;
                                    v80 += 1;
                                case 8:
                                    v77 = 0;
                                    v78 = 0;
                                    v40 = 98;
                                case 13:
                                    v40 = 13;
                                    v45 = 114;
                                    v77 = (unsigned int)v39 == 2;
                                    if (v4 == 0)
                                    {
                                        v55 = 0;
                                    }
                                    else
                                    {
                                        v40 = v45;
                                        v78 = 0;
                                    }
                                case 32:
                                    v41 = v5;
                                case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                                    v77 = 0;
                                case 35: case 126:
                                    v42 = v5;
                                    v49 = v5;
                                    v77 = 0;
                                    v5 = v42;
                                    v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1;
                                    v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) | v17;
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
                                    }
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
                            if (v17 != 0)
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
                            v48 = v5;
                            v5 = v41;
                            v78 = 0;
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
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
                    case 32:
                        v40 = 32;
                        v77 = (char)((unsigned int)v39 == 2);
                        if (v17 != 0)
                        {
                            break;
                        }
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
                    v76 = (unsigned int)sub_402990();
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
                            v76 = (unsigned int)sub_402990();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0))
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
                    v46 = sub_405f80();
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
                        v39 = (unsigned int)v10;
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
                v78 = 0;
                v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                v77 = (unsigned int)v39 == 2;
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
            if (v76 < v79)
            {
                *((unsigned long long *)(v29 + v76)) = v40;
            }
            v76 += 1;
            v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            if (v6 == 0 && v78 == 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && (char)v85 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v6 != 0 && v18 != 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && v76 == 0 && (v81 == 2 & v17) != 0)
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

// int sub_4043c0()

int sub_401e50()
{
    void *v0;  // [bp-0x40]
    unsigned long v1;  // [bp-0x30]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long v7;  // r15
    unsigned long v8;  // r14
    unsigned long v9;  // r13
    unsigned long long v10;  // rdx
    unsigned long long v11;  // r13
    unsigned long v12;  // r12
    unsigned long v13;  // rbx
    unsigned long long v14[3];  // rdi
    unsigned long long v15[3];  // rbx
    unsigned long long v16;  // r12
    unsigned long long v17;  // rdi
    unsigned long v18;  // rax
    unsigned long long v19;  // rbp
    unsigned long long v21;  // r15
    void *v22;  // rsi
    unsigned long v23;  // rdx
    void *v24;  // rdi
    unsigned long long v26;  // rax
    char *v27;  // rax

    v5 = v7;
    v4 = v8;
    v3 = v9;
    v11 = v10;
    v2 = v12;
    v1 = v13;
    v15 = v14;
    v26 = v14[2];
    v16 = v14[2] - *(v14);
    if (v10 + 1 > v14[2] - *(v14))
    {
        v17 = v10 + 1 + v14[1];
        v18 =  amd64g_calculate_condition(0x8, 0x4, Add(rdx, 0x1), Load(addr=(rbx + 0x8), size=8, endness=Iend_LE), cc_ndep);
        v19 = v17 * 2;
        if (!(INVALID_IR) && v18 == 0)
        {
            v21 = (unsigned int)sub_404a20();
            v22 = *(v15) + v16;
            v23 = v15[1] - v16;
            *((unsigned long long [3])&v0) = *(v15);
            v24 = v16 + v17 * 2 - v15[1] + v21;
            v15[2] = v16 + v19 - v15[1] + v21;
            memcpy(v24, v22, v23);
            free(v0);
            v15[0] = v21;
            v26 = v15[2];
            v15[1] = v19;
        }
        if (INVALID_IR || v18 != 0)
        {
            sub_404c70(); /* do not return */
        }
    }
    if (v10 + 1 <= v14[2] - *(v14) || v18 == 0 && !(INVALID_IR))
    {
        v27 = v26 + !(r13);
        v15[2] = v27;
        *(v27) = 47;
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

    v10 = sub_401618();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6331952 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_404a40()
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
        sub_404c70(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_404880()
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
    return sub_404480();
}

// int sub_4041c0()

int sub_404a80()
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
            sub_404c70(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

// int sub_4043a0()

int sub_405f40()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_405e80();
}

// int sub_403fc0()

// int sub_404090()

int sub_404cb0()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if (v2 == 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_404c70(); /* do not return */
        }
    }
    if (v2 != 0 || *(v3) != 12)
    {
        v2 = (unsigned int)sub_404ce0();
        return v5;
    }
}

extern int512_t g_60a400;

int sub_403dc0()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_60a400 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_60a400 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

int sub_404ac0()
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
        sub_404c70(); /* do not return */
    }
}

// int sub_404250()

int sub_404150()
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
    return sub_403bc0();
}

extern unsigned int g_60a294;
extern unsigned int g_60a298;
extern unsigned int g_60a29c;
extern unsigned int g_60a440;
extern unsigned int g_60a444;
extern unsigned int g_60a448;
extern unsigned long long g_60a450;
extern unsigned long long g_60a480;

int sub_405e80()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_60a440 = g_60a29c;
    g_60a444 = g_60a298;
    v1 = (unsigned int)v2;
    v0 = &g_60a440;
    g_60a29c = g_60a440;
    g_60a480 = g_60a450;
    g_60a294 = g_60a448;
    return sub_4058b0();
}

extern unsigned int g_4084cb;
extern unsigned int g_4084cf;
extern unsigned int g_4084df;
extern unsigned int g_4084f6;
extern unsigned int g_408558;
extern unsigned int g_408628;
extern unsigned int g_408648;
extern unsigned int g_408670;
extern unsigned int g_408698;
extern unsigned int g_4086c8;

int sub_404480()
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
    dcgettext(0x0, 0x4084cb, 0x5);
    __fprintf_chk();
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x408558, 0x5), v14);
    switch (v16)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4084cf, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x4084df, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x4084f6, 0x5);
        break;
    case 4:
        v24 = v11[3];
        dcgettext(0x0, 0x408628, 0x5);
    case 5:
        v24 = v11[3];
        dcgettext(0x0, 0x408648, 0x5);
        *((unsigned long long [9])&v5) = v11[4];
    case 6:
        *((unsigned long long [9])&v6) = v11[1];
        dcgettext(0x0, 0x408670, 0x5);
        *((unsigned long long [9])&v4) = v11[5];
        *((unsigned long long [9])&v3) = v11[4];
        *((unsigned long long [9])&v2) = v11[3];
    case 7:
        *((unsigned long long [9])&v7) = v12[2];
        *((unsigned long long [9])&v6) = v12[1];
        dcgettext(0x0, 0x408698, 0x5);
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
        dcgettext(0x0, 0x4086c8, 0x5);
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

extern int512_t g_60a400;

int sub_403e50()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_60a400 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_402990();
}

extern unsigned int g_407725;
extern unsigned int g_60a238;
extern char g_60a2d8;
extern unsigned long long g_60a2e0;

int sub_402750()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_406820();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_60a2d8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x407725, 0x5);
            if (g_60a2e0 != 0)
            {
                sub_404260();
                error(0x0, *(v2), "%s: ");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_60a2d8 != 0)
    {
        v3 = sub_406820();
    }
    if ((unsigned int)v3 == 0 && (v1 == 0 || *(v2) == 32) && (v1 == 0 || g_60a2d8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_60a238);
        error(0x0, *(v2), "%s");
    }
}

extern unsigned long long __progname_full;
extern unsigned long long g_60a2e8;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4027f0()
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
        g_60a2e8 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_407239;
extern unsigned int g_407267;
extern unsigned int g_407600;
extern unsigned int g_408977;
extern unsigned int g_60a29c;

int main()
{
    unsigned long long v1;  // bl
    unsigned long long v4;  // rax
    unsigned int v5;  // edi
    char *v9;  // rax
    struct v11;  // rbx
    unsigned long long v13[3];  // rbx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rdx

    v1 = (char)(getenv("POSIXLY_CORRECT") != 0);
    sub_4027f0();
    setlocale(0x6, 0x408977);
    bindtextdomain(0x407239, 0x407600);
    textdomain(0x407239);
    sub_4070f0();
    while (true)
    {
        v4 = sub_405f00();
        if ((unsigned int)v4 == -1)
        {
            if (g_60a29c >= v5)
            {
                break;
            }
            error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x407267, 0x5));
        }
        else if ((unsigned int)v4 != -130)
        {
            if (v4 > -18446744069414584450)
            {
                if ((unsigned int)v4 == 76)
                {
                    v1 = 1;
                }
                if ((unsigned int)v4 == 80)
                {
                    v1 = 0;
                }
            }
            else if ((unsigned int)v4 == -131)
            {
                sub_4048e0();
                exit(0x0); /* do not return */
            }
            if ((v4 <= -18446744069414584450 || (unsigned int)v4 != 80) && (v4 <= -18446744069414584450 || (unsigned int)v4 != 76) && (v4 > -18446744069414584450 || (unsigned int)v4 != -131))
            {
                sub_4023d0(); /* do not return */
            }
        }
        else
        {
            sub_4023d0(); /* do not return */
        }
    }
    if (v1 != 0)
    {
        v9 = sub_401d10();
        if (v9 != 0)
        {
            puts(v9);
        }
    }
    if (v1 == 0 || v9 == 0)
    {
        v11 = (unsigned long long)(unsigned int)sub_404cb0();
        if (v11 != 0)
        {
            puts(v11);
            free(v11);
        }
        else
        {
            v11->field_8 = 0x2000;
            v11 = (unsigned long long)(unsigned int)sub_404a20();
            v14 = sub_404a20();
            v15 = v13[1];
            v13[0] = v14;
            v13[2] = v14 + v15 - 1;
            *((char *)(v14 + v15 - 1)) = 0;
            sub_401f10();
            puts(v13[2]);
            free(*(v13));
            free(v13);
        }
    }
    return 0;
}

int sub_405f20()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4058b0();
}

// int sub_404280()

int sub_406130()
{
    unsigned long long v0;  // [bp-0x880]
    unsigned long long v1;  // [bp-0x878]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x870]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x868]
    unsigned long long v4;  // [bp-0x860]
    unsigned long v5;  // [bp-0x858]
    unsigned long long v6;  // [bp-0x850]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v7;  // [bp-0x840]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x838]
    char v9;  // [bp-0x830]
    unsigned long long v11;  // rdi
    unsigned long long v12;  // r15
    unsigned long long v13;  // rsi
    unsigned long long v14;  // rcx
    unsigned long long v15;  // rbx
    char *v16;  // r13
    unsigned long long *v17;  // rax
    void *v18;  // rdx
    void *v19;  // rsi
    unsigned long long v20;  // rax
    unsigned long long v22;  // r9
    char *v23;  // rax
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rax
    unsigned long long v28;  // r14
    unsigned long long v29;  // r9
    unsigned long long v31;  // r9
    /*INVALID_EQUAL_UNDEFINED*/
undefined v32;  // rax
    unsigned long long v33;  // rdx
    char *v34;  // rax
    unsigned long long v36;  // r11
    unsigned long long v37;  // rax
    char *v38;  // rax
    char *v39;  // rdx
    char *v40;  // rdi
    char *v41;  // rax
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rsi
    unsigned long long v44;  // r11
    unsigned long long v45;  // r14
    unsigned long long v46;  // rbp
    unsigned long long v47;  // r10
    unsigned long long v48;  // rax

    v12 = v11;
    v46 = v13;
    v15 = v14;
    if (v14 > 2)
    {
        v16 = (unsigned long long)(unsigned int)sub_406000();
        v3 = v7;
    }
    else
    {
        v7 = 1;
        v16 = v14 - 1;
        v3 = 1;
    }
    v17 = &v8;
    do
    {
        v8 = v14;
        v17 = &v9;
    }
    while (stack_base + -56 != v17);
    v19 = v18 + v3;
    if (v14 != 0)
    {
        v22 = v15 + (char *)v17;
        v17 = v18;
        do
        {
            v25 = *(v23);
            v26 = v18 + v15 - 1 - v23;
            v23 = &v23[1];
            *((unsigned long long *)&((char *)stack_base)[8 * v25 + -2104]) = v26;
        }
        while (v22 != v23);
        v0 = v15 - 1;
        v27 = memcmp(v17, v19, v16);
        if (v27 == 0)
        {
            v47 = v0;
            v44 = 0;
            v45 = 0;
            v6 = &v16[-1];
            v4 = v15 - v3;
            v5 = 1 + -0x1 * v16;
            while (true)
            {
                v2 = v47;
                v1 = v44;
                v0 = v45 + v15;
                if (sub_406f70() != 0)
                {
                    break;
                }
                v36 = v1;
                v47 = v2;
                if (v0 == 0)
                {
                    break;
                }
                v37 = *((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]);
                if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) != 0)
                {
                    if (v37 < v3)
                    {
                        v37 = (v1 != 0? v4 : rax);
                    }
                    v45 = 0 + v37;
                    v44 = 0;
                }
                else
                {
                    v38 = (v16 <= v36? v36 : v16);
                    if ((v16 <= v36? v36 : v16) < v2)
                    {
                        v39 = v12 + v45;
                        while (true)
                        {
                            if (*((char *)(v17 + v38)) == *((char *)(v39 + v38)))
                            {
                                v38 = &v38[1];
                                if (v38 == v2)
                                {
                                    break;
                                }
                            }
                            else
                            {
                                v44 = 0;
                                v45 = &v38[v5];
                            }
                        }
                        if (*((char *)(v17 + v38)) == *((char *)(v39 + v38)))
                        {
                            v40 = v6;
                            v41 = v6;
                        }
                        else if (*((char *)(v17 + v38)) != *((char *)(v39 + v38)))
                        {
                            v46 = v0;
                        }
                    }
                    if ((v16 <= v36? v36 : v16) >= v2 || v36 >= v16)
                    {
                        v40 = v6;
                        v41 = v6;
                        if (v36 < v16)
                        {
                            v42 = v12 + v45;
                            if (v40[v45 + v12] == *((char *)(v17 + v40)))
                            {
                                while (true)
                                {
                                    v43 = &v41[-1];
                                    if (v36 == v41 || *((char *)(v17 + v41 - 1)) != v41[v42 + -1])
                                    {
                                        break;
                                    }
                                    v41 = v43;
                                }
                            }
                        }
                        if (v40[v45 + v12] != *((char *)(v17 + v40)) || v36 >= v16)
                        {
                            v41 = v16;
                        }
                        if (1 <= v41)
                        {
                            v45 = 0 + v3;
                            v44 = v4;
                        }
                        else
                        {
                            v48 = v12 + v45;
                        }
                    }
                }
                if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) != 0 || (v16 <= v36? v36 : v16) < v2 && v36 >= v16 || 1 <= v41 && (v16 <= v36? v36 : v16) >= v2)
                {
                    v46 = v0;
                }
            }
            if (true)
            {
                v48 = 0;
            }
            else if (1 > v41 && ((v16 <= v36? v36 : v16) >= v2 || v36 >= v16))
            {
                return v48;
            }
        }
    }
    else
    {
        v20 = memcmp(v17, v19, v16);
    }
    if (v14 == 0 && v20 != 0 || v27 != 0 && v14 != 0)
    {
        v28 = v15 - 1;
        v29 = 0;
        v3 = (v15 + -0x1 * v16 < v16? v16 : (char *)(v15 + -0x1 * v16)) + 1;
        v7 = (v15 + -0x1 * v16 < v16? v16 : (char *)(v15 + -0x1 * v16)) + 1;
        v2 = 1 + -0x1 * v16;
        while (true)
        {
            v1 = v29;
            v0 = v29 + v15;
            if (v0 == 0)
            {
                break;
            }
            v31 = v1;
            if (sub_406f70() != 0)
            {
                break;
            }
            v32 = *((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]);
            if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) == 0)
            {
                v33 = v12 + v31;
                if (v16 < v28)
                {
                    v32 = v16;
                    if (*((char *)(v16 + v16)) == *((char *)(v16 + v16)))
                    {
                        do
                        {
                            v32 = &v32[1];
                        }
                        while (*((char *)(v17 + v32)) == *((char *)(v32 + v32)) && v32 < v28);
                        if (true)
                        {
                            v34 = &v16[-1];
                        }
                        else if (v32 < v28)
                        {
                            v31 = 0 + v2;
                        }
                    }
                    if (&v16[-1] != -1 || *((char *)(v16 + v16)) != *((char *)(v16 + v16)))
                    {
                        v31 = 0 + v2;
                    }
                }
                if (*((char *)(v16 + v16)) == *((char *)(v16 + v16)) || v16 >= v28)
                {
                    if (v16 >= v28 || &v16[-1] != -1)
                    {
                        v34 = &v16[-1];
                        if (*((char *)(v32 + v34)) == *((char *)(v17 + v16 - 1)) || &v16[-1] == -1)
                        {
                            v32 = v33;
                        }
                    }
                    if (&v16[-1] != -1)
                    {
                        if (*((char *)(v32 + v34)) == *((char *)(v17 + v16 - 1)))
                        {
                            do
                            {
                                v34 = &v34[-1];
                            }
                            while (*((char *)(v17 + v34)) == *((char *)(v32 + v34)) && v34 != -1);
                            if (v34 != -1)
                            {
                                v29 = 0 + v3;
                            }
                            else
                            {
                                v32 = v33;
                            }
                        }
                        v29 = 0 + v3;
                    }
                }
            }
            if (v16 < v28 || &v16[-1] == -1)
            {
                v29 = v31 + v32;
            }
            if (&v16[-1] != -1)
            {
                v46 = v0;
            }
        }
        if (true)
        {
            v48 = 0;
        }
        else if (*((char *)(v32 + v34)) == *((char *)(v17 + v16 - 1)) && &v16[-1] != -1 || &v16[-1] == -1 && v16 >= v28)
        {
            return v48;
        }
    }
    v48 = 0;
    return v48;
}

extern int512_t g_60a228;

// int sub_4070f0()

// int sub_404370()

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_0;

extern unsigned int g_40715d;
extern unsigned int g_40715e;
extern unsigned int g_407776;

int sub_404ce0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x110]
    void *v3;  // [bp-0x108]
    unsigned long long v4;  // [bp-0x100]
    char v5;  // [bp-0xe9]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xe0]
    unsigned long v8;  // [bp-0xd8]
    unsigned long v9;  // [bp-0xd0]
    char v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    unsigned int v12;  // [bp-0xb0]
    void *v14;  // rdi
    unsigned int v15;  // rsi
    unsigned long long v16;  // rbx
    unsigned long long v17;  // rax
    unsigned long long v18;  // r14
    unsigned long long v19;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // r15d
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
        v17 = __lxstat(0x1, 0x40715e, (unsigned int)&v10);
        if (v17 >= 0)
        {
            v20 = *((long long *)&v10);
            v18 = v11;
            v0 = *((long long *)&v10);
            v19 = __lxstat(0x1, 0x407776, (unsigned int)&v10);
            if (v19 >= 0)
            {
                v6 = v16 - 1;
                v8 = v11;
                v7 = *((long long *)&v10);
                v5 = *((long long *)&v10) != *((long long *)&v10) | v11 != v11;
                if (v20 != *((long long *)&v10) || v18 != v11)
                {
                    v23 = 0;
                    v20 = -100;
                    v42 = __errno_location();
                    while (true)
                    {
                        v20 = openat(v20, 0x40715d, 0x0);
                        if ((unsigned int)v20 >= 0)
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
                                    v1 = *((long long *)&v10);
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
                                        if (unknown)
                                        {
                                            v20 = openat(v20, 0x40715d, 0x0);
                                        }
                                        else if (unknown)
                                        {
                                            v41 = *(v42);
                                        }
                                        else if (unknown)
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
                        if (((unsigned int)v20 < 0 || v21 == 0) && ((unsigned int)v20 < 0 || v23 != 0) && (v22 == 0 || v23 == 0 || (unsigned int)v20 < 0) && (v23 != 0 || (unsigned int)v20 >= 0))
                        {
                            closedir();
                        }
                        break;
                    }
                    if ((unsigned int)v20 < 0 || v23 == 0 || v21 != 0 || v22 != 0 && v23 != 0)
                    {
                        if ((unsigned int)v20 < 0 || v23 == 0 || v6 != v2 + v4 - 1 || v21 != 0 || v22 != 0 && v23 != 0)
                        {
                            free(v2);
                        }
                        else if (v21 == 0 && (unsigned int)v20 >= 0 && v23 != 0 && (v22 == 0 || v23 == 0))
                        {
                            v41 = *(v42);
                        }
                        else if ((unsigned int)v20 < 0 || v23 == 0 || v6 != v2 + v4 - 1 || v21 != 0 || v22 != 0 && v23 != 0)
                        {
                            *((unsigned long long *)&v42) = v41;
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
        if (v17 < 0 || v19 < 0 || v20 != *((long long *)&v10) || v18 != v11)
        {
            v41 = *(v42);
            free(v2);
            *((unsigned long long *)&v42) = v41;
            v2 = 0;
        }
    }
    return v2;
}

extern uint128_t g_60a400;
extern uint128_t g_60a410;
extern uint128_t g_60a420;
extern unsigned long long g_60a430;

int sub_4041df()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_60a430;
    *((uint128_t *)&v0) = g_60a400;
    *((uint128_t *)&v1) = g_60a410;
    *((uint128_t *)&v2) = g_60a420;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_403bc0();
}

extern unsigned long long g_609e30;

int sub_407108()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_609e30;
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

extern unsigned int g_4071a8;
extern unsigned int g_40721e;
extern unsigned int g_407308;
extern unsigned int g_407330;
extern unsigned int g_407370;
extern unsigned int g_4073e0;
extern unsigned int g_407410;
extern unsigned int g_407448;
extern unsigned int g_407478;
extern unsigned int g_407560;
extern unsigned int g_4075a8;
extern unsigned int g_4075c8;
extern unsigned long long stdout;

int sub_4023d0()
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
    unsigned long long *v28;  // rax
    char *v29;  // rdi
    char *v30;  // rsi
    unsigned long long v31;  // rcx
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // cc_dep2
    unsigned long v34;  // d
    char *v38;  // rax
    char *v39;  // rax
    unsigned long long v40;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        dcgettext(0x0, 0x407308, 0x5);
        __fprintf_chk();
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4071a8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407330, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407370, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4073e0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407410, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x407448, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407478, 0x5));
        v0 = "[";
        v28 = &v0;
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
            v28 = &v2;
            v29 = v2;
            if (v2 == 0)
            {
                break;
            }
            v30 = "pwd";
            v31 = 4;
            if ((v32 > v33) - 0 - (v32 < v33) == 0)
            {
                break;
            }
            while (v31 != 0)
            {
                v31 -= 1;
                v32 = *(v30);
                v33 = *(v29);
                v29 = &v29[v34];
                v30 = &v30[v34];
                break;
            }
        }
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40721e, 0x5));
            v39 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40721e, 0x5));
            v38 = setlocale(0x5, 0x0);
            if (v38 != 0)
            {
                v40 = strncmp(v38, "en_", 0x3);
            }
            if (v38 == 0 || v40 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4075a8, 0x5));
            }
        }
        if ((v3 == 0 || v39 != 0) && (v3 == 0 || strncmp(v39, "en_", 0x3) != 0) && (v38 != 0 || v3 != 0) && (v40 != 0 || v3 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x407560, 0x5));
        }
        if (v3 != 0 || v38 != 0 && v40 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4075a8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4075c8, 0x5));
    }
    exit(v19); /* do not return */
}

extern unsigned int g_408512;
extern unsigned int g_40853d;
extern unsigned int g_408770;

int sub_4049a0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x408512, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x40853d, 0x5));
    dcgettext(0x0, 0x408770, 0x5);
}

// int sub_4041d0()

extern unsigned int g_40715e;

int sub_401d10()
{
    char v0;  // [bp-0x128]
    unsigned long v1;  // [bp-0x120]
    char v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    char *v5;  // rax
    unsigned long v6;  // rbx
    char v7[4];  // rax
    unsigned long long v8;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax
    unsigned long long v12;  // rbx
    unsigned long long v13;  // rax

    v5 = getenv("PWD");
    if (v6 != 0)
    {
        v6 = v5;
        if (*(v5) == 47)
        {
            while (true)
            {
                v7 = sub_406480();
                if (v7 != 0)
                {
                    v8 = v7[2];
                    if (v8 == 47 || v7[2] == 0)
                    {
                        break;
                    }
                    if (v8 == 46)
                    {
                        if (v7[3] == 0)
                        {
                            break;
                        }
                    }
                }
                else
                {
                    v10 = __xstat(0x1, v12, (unsigned int)&v0);
                    if (v10 != 0)
                    {
                        break;
                    }
                    v11 = __xstat(0x1, 0x40715e, (unsigned int)&v2);
                    if (v11 != 0)
                    {
                        break;
                    }
                    if (v1 != v3 || *((long long *)&v0) != *((long long *)&v2))
                    {
                        break;
                    }
                }
            }
            if (v10 == 0 && v7 == 0 || v7 == 0 || v8 == 46 && v8 != 47 && v7[2] != 0 || v10 == 0 && v7 == 0 && v11 == 0 || v10 == 0 && v7 == 0 && v11 == 0 && v1 == v3 || (unsigned long long)v7[3] == 47 && v8 == 46 && v8 != 47 && v7[3] != 0 && v7[2] != 0 || v7 != 0 || v7[2] != 0)
            {
                v12 = 0;
            }
            else if (v10 == 0 && v7 == 0 && v11 == 0 && v1 == v3 && *((long long *)&v0) == *((long long *)&v2))
            {
                v13 = v12;
                return v13;
            }
        }
    }
    v12 = 0;
    v13 = v12;
    return v13;
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

int sub_406f10()
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

int sub_403ec2()
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

int sub_406f70()
{
    unsigned long long v1;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // dil
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // rsi
    unsigned long long v4;  // r9
    void *v5;  // rax
    unsigned long long v6;  // rcx
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
            else if ((v2 & 7) != 0)
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
                if (*((char *)(v6 - 1)) == (char)v3)
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

int sub_404290()
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
    return sub_403bc0();
}

int sub_405ee0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_405e80();
}

int sub_404c20()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_404a20();
}

extern int512_t g_60a400;

int sub_403db0()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_60a400 : v1)) = v2;
    return &g_60a400;
}

typedef struct struct_3 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_3;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

extern unsigned int g_40714b;
extern unsigned int g_40715d;
extern unsigned int g_40715e;
extern unsigned int g_407160;
extern unsigned int g_407179;
extern unsigned int g_40718f;
extern unsigned int g_4072a8;
extern unsigned int g_4072c8;

int sub_401f10()
{
    char v0;  // [bp-0x211]
    unsigned long long v1;  // [bp-0x210]
    unsigned long long v2[2];  // [bp-0x208]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x1e8]
    unsigned long v4;  // [bp-0x1e0]
    void v5;  // [bp-0x1d8]
    void v6;  // [bp-0x1c8]
    void v7;  // [bp-0x1b8]
    void v8;  // [bp-0x1a8]
    void v9;  // [bp-0x198]
    void v10;  // [bp-0x188]
    void v11;  // [bp-0x178]
    void v12;  // [bp-0x168]
    char v13;  // [bp-0x158]
    void v14;  // [bp-0x148]
    void v15;  // [bp-0x138]
    void v16;  // [bp-0x128]
    void v17;  // [bp-0x118]
    void v18;  // [bp-0x108]
    void v19;  // [bp-0xf8]
    void v20;  // [bp-0xe8]
    void v21;  // [bp-0xd8]
    char v22;  // [bp-0xc8]
    unsigned long v23;  // [bp-0xc0]
    unsigned long long v26;  // rbp
    unsigned long long v27;  // r15
    unsigned long long v28;  // rbx
    unsigned long long v29;  // rax
    unsigned long long v31;  // rax
    unsigned long long v32;  // rax
    unsigned long long v33;  // rbp
    unsigned int *v34;  // r14
    struct v35;  // rax
    char *v36;  // rbp
    unsigned long long v37;  // rdx
    char v38;  // dl
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v45;  // rbp
    struct v49;  // rdi
    char *v50;  // rax
    unsigned int v51;  // ebp
    unsigned long long v53;  // rax
    unsigned long long v54;  // rbp
    unsigned long long v55;  // rbx
    unsigned long long v56;  // rbp
    unsigned long long v59;  // rbx
    unsigned long long v60;  // rbx

    v2[0] = (unsigned int)sub_404430();
    if (!(v2 != 0))
    {
        v26 = (unsigned int)sub_4041c0();
        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x4072a8, 0x5));
    }
    else if (__xstat(0x1, 0x40715e, (unsigned int)&v3) >= 0)
    {
        v27 = 1;
        while (true)
        {
            v1 = v27 + 1;
            v28 = opendir();
            if (v28 != 0)
            {
                v29 = dirfd(v28);
                if ((unsigned int)v29 >= 0)
                {
                    v32 = fchdir(v29);
                    if (v32 >= 0)
                    {
                        v33 = (unsigned long long)__fxstat(0x1, v29, (unsigned int)&v13) >> 31;
                    }
                }
                else
                {
                    v31 = chdir(0x40715d);
                    if (v31 >= 0)
                    {
                        v33 = (unsigned long long)__xstat(0x1, 0x40715e, (unsigned int)&v13) >> 31;
                    }
                }
                if ((unsigned int)v29 < 0 && v31 < 0 || v32 < 0 && (unsigned int)v29 >= 0)
                {
                    sub_401dd0();
                    v54 = (unsigned int)sub_404410();
                    error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x407179, 0x5));
                }
                if ((unsigned int)v29 < 0 && v31 >= 0 || v32 >= 0 && (unsigned int)v29 >= 0)
                {
                    v34 = __errno_location();
                    if (v33 == 0)
                    {
                        v0 = *((long long *)&v13) != (long long)v3;
                        while (true)
                        {
                            *(v34) = 0;
                            while (true)
                            {
                                v35 = readdir();
                                if (v35 == 0 || *(v34) != 0)
                                {
                                    v51 = *(v34);
                                }
                                if (*(v34) != 0)
                                {
                                    closedir();
                                    *(v34) = v51;
                                }
                                if (v35 != 0)
                                {
                                    while (true)
                                    {
                                        v36 = &v35->field_13;
                                        if (v35->field_13 == 46)
                                        {
                                            v37 = 0;
                                            v38 = v35->field_14 == 46;
                                            v39 = (&v35->field_14)[rdx];
                                            if (v39 == 0)
                                            {
                                                break;
                                            }
                                            if (v39 == 47)
                                            {
                                                v35 = readdir();
                                            }
                                        }
                                        if (v35->field_13 != 46 || v39 != 0 && v39 != 47)
                                        {
                                            v40 = v35->field_0;
                                            if (v0 == 0 && v40 != 0 && v40 != v4)
                                            {
                                                break;
                                            }
                                            if (v40 == 0 || v0 != 0)
                                            {
                                                v41 = __lxstat(0x1, (unsigned int)v36, (unsigned int)&v22);
                                                if (v41 < 0)
                                                {
                                                    break;
                                                }
                                                if (v23 != v4 || *((long long *)&v22) != (long long)v3 && *((long long *)&v13) != (long long)v3)
                                                {
                                                    break;
                                                }
                                            }
                                            strlen(v36);
                                            sub_401e50();
                                            if (closedir() != 0)
                                            {
                                                break;
                                            }
                                            v27 = v1;
                                            v3 = *((int128_t *)&v13);
                                            *((int128_t *)&v5) = (int128_t)v14;
                                            *((int128_t *)&v6) = (int128_t)v15;
                                            *((int128_t *)&v7) = (int128_t)v16;
                                            *((int128_t *)&v8) = (int128_t)v17;
                                            *((int128_t *)&v9) = (int128_t)v18;
                                            *((int128_t *)&v10) = (int128_t)v19;
                                            *((int128_t *)&v11) = (int128_t)v20;
                                            *((int128_t *)&v12) = (int128_t)v21;
                                        }
                                    }
                                    if (v35 == 0 && v39 == 47)
                                    {
                                        v51 = *(v34);
                                    }
                                    else if (v35->field_13 == 46)
                                    {
                                        v35 = readdir();
                                    }
                                    else if (v41 >= 0 && (v40 == 0 || v0 != 0) && (v35->field_13 != 46 || v39 != 0) && (v35->field_13 != 46 || v39 != 47) || (v40 == 0 || v0 != 0) && (v35->field_13 != 46 || v39 != 0) && (v35->field_13 != 46 || v39 != 47) || v0 == 0 && v40 != 0 && (v35->field_13 != 46 || v39 != 0) && (v35->field_13 != 46 || v39 != 47) || v23 == v4 && v41 >= 0 && (v40 == 0 || v0 != 0) && (v35->field_13 != 46 || v39 != 0) && (v35->field_13 != 46 || v39 != 47) && *((long long *)&v13) != (long long)v3)
                                    {
                                        *(v34) = 0;
                                    }
                                    else if (v23 == v4 && v41 >= 0 && (v40 == 0 || v0 != 0) && (v35->field_13 != 46 || v39 != 0) && (v35->field_13 != 46 || v39 != 47) && *((long long *)&v13) == (long long)v3 || v0 == 0 && v40 != 0 && (v35->field_13 != 46 || v39 != 0) && (v35->field_13 != 46 || v39 != 47) && v40 == v4 || v23 == v4 && v41 >= 0 && (v40 == 0 || v0 != 0) && (v35->field_13 != 46 || v39 != 0) && (v35->field_13 != 46 || v39 != 47) && *((long long *)&v13) != (long long)v3 && *((long long *)&v22) == (long long)v3)
                                    {
                                        sub_401dd0();
                                        v60 = (unsigned int)sub_404410();
                                        error(0x1, *(v34), (unsigned long long)dcgettext(0x0, 0x40718f, 0x5));
                                    }
                                }
                                else if (*(v34) == 0)
                                {
                                    v53 = closedir();
                                    if (v53 == 0)
                                    {
                                        sub_401dd0();
                                        v59 = (unsigned int)sub_404410();
                                        error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x4072c8, 0x5));
                                    }
                                }
                                if (*(v34) != 0 || v35 == 0 && v53 != 0)
                                {
                                    sub_401dd0();
                                    v60 = (unsigned int)sub_404410();
                                    error(0x1, *(v34), (unsigned long long)dcgettext(0x0, 0x40718f, 0x5));
                                }
                            }
                            if (false)
                            {
                                *(v34) = 0;
                            }
                        }
                    }
                    else
                    {
                        sub_401dd0();
                        v55 = (unsigned int)sub_404410();
                        error(0x1, *(v34), (unsigned long long)dcgettext(0x0, 0x40714b, 0x5));
                    }
                }
            }
            else
            {
                sub_401dd0();
                v56 = (unsigned int)sub_404410();
                error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x407160, 0x5));
            }
            if ((long long)v3 == v2[1])
            {
                v50 = v49->field_10;
                if (*(v49->field_10) != 0)
                {
                    break;
                }
                v50 = sub_401e50();
            }
        }
        return v50;
    }
    else
    {
        v45 = (unsigned int)sub_4041c0();
        error(0x1, *(__errno_location()), (unsigned long long)dcgettext(0x0, 0x40714b, 0x5));
    }
}

extern struct g_60a278;
extern unsigned long long g_60a280;
extern unsigned long long g_60a288;
extern unsigned int g_60a290;
extern unsigned long long g_60a300;

int sub_403fd0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_60a290;
    if (g_60a290 > 1)
    {
        v2 = &g_60a278[1].field_8;
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_60a278[(unsigned long long)(g_60a290 - 2) + 2].field_8)
            {
                break;
            }
        }
    }
    if (g_60a278->field_8 != 0x60a300)
    {
        v1 = free(g_60a278->field_8);
        g_60a280 = 0x100;
        g_60a288 = &g_60a300;
    }
    if (g_60a278 != 6333056)
    {
        v1 = free(g_60a278);
        g_60a278 = &g_60a280;
    }
    g_60a290 = 1;
    return v1;
}

int sub_406e50()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_406ed0() != 0)
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

int sub_4048e0()
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
        return sub_404480();
    }
}

int sub_404c50()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

int sub_404bd0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_404a20();
}

int sub_404a20()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_404c70(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

// int sub_4040a0()

// int sub_404070()

extern int512_t g_40777e;
extern int512_t g_407782;

int sub_402890()
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
        v3 = sub_4068e0();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_40777e : 4224905);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_407782 : 4224901);
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

int sub_404bf0()
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
        sub_404c70(); /* do not return */
    }
}

extern char g_60a2d8;

int sub_402740()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_60a2d8 = v1;
    return v2;
}

// int sub_404410()

extern unsigned long long g_408977;

int sub_405f80()
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
        v5 = &g_408977;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_406880() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

// int sub_4040c0()

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

extern unsigned int g_408928;
extern unsigned int g_40895c;

int sub_4058b0()
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
undefined v24;  // r9
    unsigned long v26;  // rax
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
    unsigned long long v56;  // rdx
    unsigned int v57;  // eax
    char *v58;  // rax
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
                        v5 = v24;
                        sub_4051b0();
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
                            sub_4051b0();
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
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 == 0 || (unsigned int)v13 == (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0)) && v42 != v46)
    {
        v0->field_0 = v42;
    }
    if (((unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] == 45 && v48[1] == 0 || (unsigned int)v13 != (unsigned int)v26 && (unsigned int)v13 > 0 && (((char)(v18 - 43) & 253) == 0 || v19 == 0 || *(v19) == 0) && (v19 == 0 || *(v19) == 0 || (unsigned int)v17 != 0) && (v19 == 0 || *(v19) == 0 || v0->field_18 != 0) && (v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || v0->field_18 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v38 != 0 && v48[0] != 45) && v0->field_28 != 0)
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
        v45 = (unsigned int)sub_405290();
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
                        dcgettext(0x0, 0x408928, 0x5);
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
            dcgettext(0x0, 0x40895c, 0x5);
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
                    dcgettext(0x0, 0x408928, 0x5);
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
        v45 = (unsigned int)sub_405290();
    }
    v63 = v45;
    return v63;
}

int sub_404860()
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

// int sub_404260()

int sub_406ed0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_406f10();
    }
}

typedef struct struct_0 {
    char padding_0[2];
    char field_2;
} struct_0;

int sub_401dd0()
{
    unsigned long v3;  // rdi
    unsigned long v4;  // rdx
    unsigned long long v5;  // rdi
    struct v6;  // rdx

    if (!(INVALID_IR) &&  amd64g_calculate_condition(0x0, 0x30, 0x3, rdi, cc_ndep) == 0)
    {
        if (v3 != 0)
        {
            v5 = v4 + v3 * 3;
            v4 = sub_404a20();
            do
            {
                v6->field_2 = 47;
                v6 = &v6[1];
                *((short *)&v6[-1].padding_0[0]) = 11822;
            }
            while (v6 != v5);
            *((char *)(v5 - 1)) = 0;
            return v4;
        }
        *((char *)(v4 - 1)) = 0;
        return v4;
    }
    if (INVALID_IR ||  amd64g_calculate_condition(0x0, 0x30, 0x3, rdi, cc_ndep) != 0)
    {
        sub_404c70(); /* do not return */
    }
}

// int sub_4043f0()

int sub_4040d2()
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
    return sub_403bc0();
}

int sub_406820()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_406e50();
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
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_408860;
extern unsigned int g_408880;
extern unsigned int g_4088b0;
extern unsigned int g_4088d0;
extern unsigned int g_408900;
extern unsigned long long stderr;

int sub_405290()
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
                                dcgettext(0x0, 0x408860, 0x5);
                                __fprintf_chk();
                                v11 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                dcgettext(0x0, 0x408880, 0x5);
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
                                dcgettext(0x0, 0x408900, 0x5);
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
                            dcgettext(0x0, 0x4088d0, 0x5);
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
            dcgettext(0x0, 0x4088b0, 0x5);
            __fprintf_chk();
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

extern unsigned long long g_60a2e0;

int sub_402730()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_60a2e0 = v1;
    return v2;
}

int sub_406000()
{
    unsigned long long v1;  // r11
    unsigned long long v2;  // r8
    unsigned long v3;  // rsi
    unsigned long long v4;  // rdi
    unsigned long long v5;  // cc_dep1
    unsigned long long v6;  // rcx
    unsigned long long v7;  // r9
    unsigned long long v8;  // rax
    unsigned long long *v9;  // rdx
    unsigned long long v10;  // rbx
    unsigned long long v11;  // r8
    unsigned long long v12;  // r9
    unsigned long long v13;  // r10
    unsigned long long v14;  // rcx
    unsigned long long v15;  // cc_dep1
    unsigned long long v16;  // r10
    unsigned long long v17;  // rax

    v1 = 1;
    v2 = 1;
    v7 = 0;
    v8 = -1;
    while (true)
    {
        v6 = v2 + v7;
        if (v2 + v7 >= v3)
        {
            break;
        }
        while (true)
        {
            v5 = (char)*((char *)(v4 + v6));
            if ((char)*((char *)(v4 + v6)) < (unsigned long long)(char)*((char *)(v4 + -1 + 1)))
            {
                v7 = v6;
                v6 = 1 + v6;
                v1 = v7 - -1;
                if (v6 >= v3)
                {
                    break;
                }
            }
            else if (v5 != (char)*((char *)(v4 + -1 + 1)))
            {
                v8 = v7;
                v1 = 1;
                v7 += 1;
                v2 = 1;
            }
            else if (v1 != 1)
            {
                v2 = 2;
            }
            else
            {
                v7 = v6;
                v2 = 1;
            }
        }
        if ((char)*((char *)(v4 + v6)) < (unsigned long long)(char)*((char *)(v4 + -1 + 1)))
        {
            *(v9) = v1;
            v10 = 1;
            v11 = 1;
            v12 = 0;
            v13 = -1;
        }
    }
    *(v9) = v1;
    v10 = 1;
    v11 = 1;
    v12 = 0;
    v13 = -1;
    while (true)
    {
        v14 = v11 + v12;
        if (v3 <= v11 + v12)
        {
            break;
        }
        while (true)
        {
            v15 = (char)*((char *)(v4 + v14));
            if ((char)*((char *)(v4 + v14)) > (unsigned long long)(char)*((char *)(v4 + v13 + v11)))
            {
                v12 = v14;
                v11 = 1;
                v14 = 1 + v14;
                v10 = v12 - -1;
                if (v3 <= v14)
                {
                    break;
                }
            }
            else if (v15 != (char)*((char *)(v4 + -1 + 1)))
            {
                v13 = v12;
                v10 = 1;
                v12 += 1;
                v11 = 1;
            }
            else if (v10 != 1)
            {
                v11 = 2;
            }
            else
            {
                v12 = v14;
                v11 = 1;
            }
        }
        if ((char)*((char *)(v4 + v14)) > (unsigned long long)(char)*((char *)(v4 + v13 + v11)))
        {
            v16 = v13 + 1;
            v17 = v8 + 1;
        }
    }
    v16 = v13 + 1;
    v17 = v8 + 1;
    *(v9) = v10;
    v17 = v16;
    return v17;
}

int sub_405f60()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_4058b0();
}

// int sub_4043d0()

int fini()
{
    unsigned long v1;  // rax

    return v1;
}

