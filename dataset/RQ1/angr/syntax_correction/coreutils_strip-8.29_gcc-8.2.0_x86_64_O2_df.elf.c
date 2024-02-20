
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

int sub_406eaa()
{
    unsigned long long *v1;  // rsi
    unsigned long long *v3;  // rdi
    unsigned long long v5;  // rax
    char v6;  // al

    v5 = strcmp(*(v3), *(v1));
    v6 = (unsigned int)v5 == 0;
    return rax;
}

extern unsigned int g_41236e;

int sub_405250()
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
    char *v25;  // r15
    unsigned long long v26;  // rsi
    char v27;  // al
    char v28[2];  // rax
    unsigned long long v29;  // rax
    char *v31;  // r15
    unsigned int v32;  // ecx
    unsigned long v33;  // r13
    unsigned long long v34;  // rdx
    char *v36;  // r15
    char v39[2];  // rax
    char *v40;  // rdx
    unsigned long long v41;  // rdx
    char v42;  // cc_dep1
    char v43[2];  // r14
    unsigned long long v44;  // rax
    char *v45;  // r15
    unsigned long long v46;  // r12
    unsigned int *v48;  // rdx
    unsigned int *v49;  // rdx
    char *v50;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v51;  // rcx
    unsigned int *v52;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v53;  // rcx
    unsigned long long v56;  // rax

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
                    v46 = (unsigned int)sub_40a7f0();
                    if (v46 != 0)
                    {
                        v14 = strlen(v46);
                        if (v14 > 4095)
                        {
                            v15 = v14 + v46;
                            v16 = v15;
                        }
                        else
                        {
                            v46 = (unsigned int)sub_40a5c0();
                            v15 = v14 + v46;
                            v16 = v46 + 0x1000;
                        }
                    }
                }
                else
                {
                    v46 = (unsigned int)sub_40a560();
                    v16 = v46 + 0x1000;
                    v15 = v46 + 1;
                    *((char *)v46) = 47;
                }
                if (v12[0] == 47 || v46 != 0)
                {
                    *((char *[2])&v3[0]) = v13;
                    v44 = v13[0];
                    v6 = v11 & 4;
                    v2 = 0;
                    v5 = 0;
                    v4 = 0;
                    while (true)
                    {
                        if (v44 != 0)
                        {
                            v17 = v44;
                        }
                        if (v44 == 47)
                        {
                            do
                            {
                                v13 = &v13[1];
                                v17 = v13[0];
                            }
                            while (v13[0] == 47);
                        }
                        if (v44 == 47 && v17 != 0 || v44 != 0 && v44 != 47)
                        {
                            v18 = v13;
                            while (true)
                            {
                                v44 = v18[1];
                                v43 = &v18[1];
                                if (v44 == 47 || v18[1] == 0)
                                {
                                    break;
                                }
                                v18 = v43;
                            }
                        }
                        if (v44 == 0 || v43 == v13 || v17 == 0 && v44 == 47)
                        {
                            if (v15[-1] == 47 && v15 > v46 + 1)
                            {
                                v50 = v15;
                                v15 = &v15[-1];
                            }
                            if (v15 <= v46 + 1 || v15[-1] != 47)
                            {
                                v50 = &v15[1];
                            }
                            *(v15) = 0;
                            if (v16 != v50)
                            {
                                v46 = (unsigned int)sub_40a5c0();
                            }
                            free(v4);
                            if (v2 == 0)
                            {
                                break;
                            }
                            sub_4066a0();
                        }
                        if (v43 != v13 && (v44 == 47 || v44 != 0) && (v17 != 0 || v44 != 47))
                        {
                            v19 = v43 - v13;
                            if (v13[1] == 46 && v17 == 46 && *((long long *)&v0) == 2 && v43 - v13 != 1)
                            {
                                v20 = v43;
                                if (v15 > v46 + 1)
                                {
                                    v21 = &v15[-1];
                                    if (v15[-2] == 47 || v46 >= &v15[-1])
                                    {
                                        v15 = v21;
                                    }
                                }
                            }
                            if (v17 != 46 || v13[1] != 46 && v43 - v13 != 1 || v43 - v13 != 1 && *((long long *)&v0) != 2)
                            {
                                if (v15[-1] != 47)
                                {
                                    *(v15) = 47;
                                    v15 = &v15[1];
                                }
                                if (v16 <= &v15[*((long long *)&v0)])
                                {
                                    v22 = &v15[-1 * v46];
                                    *((unsigned long *)&v0) = v19;
                                    v23 = (0x1000 <= *((long long *)&v0)? &v16[-1 * v46 + *((long long *)&v0) + 1] : &v16[-1 * v46 + 0x1000]);
                                    v46 = (unsigned int)sub_40a5c0();
                                    v16 = v23 + v46;
                                    v15 = v22 + v46;
                                }
                                *((long long *)&v0) = *((long long *)&v0);
                                memcpy(v15, v13, *((long long *)&v0));
                                v15 = &v15[*((long long *)&v0)];
                                *(v15) = 0;
                                if (v6 == 0 || v1 != 2)
                                {
                                    v26 = v46;
                                    if (v6 != 0)
                                    {
                                        v27 = __xstat(0x1, v26, (unsigned int)&v8) != 0;
                                    }
                                    else
                                    {
                                        v27 = __lxstat(0x1, v26, (unsigned int)&v8) != 0;
                                    }
                                    if (v27 != 0)
                                    {
                                        v48 = __errno_location();
                                        v51 = *(v48);
                                        if (v1 == 1)
                                        {
                                            v7 = v51;
                                            v0 = v48;
                                            v28 = strspn((unsigned int)v43, 0x41236e);
                                            v48 = v0;
                                            v51 = v7;
                                        }
                                    }
                                    else if (((unsigned short)v9 & 0xf000) == 0xa000)
                                    {
                                        if (v2 != 0)
                                        {
                                            v29 = sub_405b90();
                                            if (v29 == 0)
                                            {
                                                sub_405b00();
                                                v31 = (unsigned long long)(unsigned int)sub_40d6b0();
                                                if (v31 != 0)
                                                {
                                                    v33 = strlen(v31);
                                                    v34 = strlen(v43);
                                                    if (v5 == 0)
                                                    {
                                                        v0 = v34;
                                                        *((int *)&v5) = (0x1000 <= v0? v0 : 0x1000);
                                                        v4 = (unsigned int)sub_40a560();
                                                    }
                                                    else if (*((long long *)&v0) > v5)
                                                    {
                                                        v0 = v33 + v34 + 1;
                                                        v3 = v34;
                                                        v4 = (unsigned int)sub_40a5c0();
                                                        v5 = v0;
                                                    }
                                                    memmove(v4 + v33, v43, v34 + 1);
                                                    v39 = memcpy(v4, v31, v33);
                                                    v40 = v46 + 1;
                                                    v43 = v39;
                                                    v3 = &v39[0];
                                                    if (*(v31) == 47)
                                                    {
                                                        *((char *)v46) = 47;
                                                        v15 = v40;
                                                    }
                                                    else if (v15 > v15)
                                                    {
                                                        v41 = &v15[-1];
                                                        if (v46 < &v15[-1])
                                                        {
                                                            v42 = v15[-2];
                                                            v15 = v41;
                                                            if (v42 != 47)
                                                            {
                                                                do
                                                                {
                                                                    v15 = &v15[-1];
                                                                }
                                                                while (v15[-1] != 47 && v46 != v15);
                                                            }
                                                        }
                                                    }
                                                    free(v31);
                                                }
                                                else
                                                {
                                                    v49 = __errno_location();
                                                    v32 = *(v49);
                                                }
                                            }
                                            if ((v29 == 0 || v1 != 2) && (v1 == 12 || v1 != 2) && (v31 == 0 || v29 != 0))
                                            {
                                                v1 = v32;
                                                v0 = v49;
                                                free(v4);
                                                free(v46);
                                                v52 = v0;
                                                v53 = v1;
                                            }
                                        }
                                        else
                                        {
                                            v2 = (unsigned int)sub_406460();
                                            sub_40a7b0(); /* do not return */
                                        }
                                    }
                                }
                                if ((v1 == 2 || v1 != 1) && (v1 == 2 || v27 != 0) && (v1 == 2 || v1 != 0) && (v6 != 0 || v1 != 1) && (v6 != 0 || v27 != 0) && (v6 != 0 || v1 != 0))
                                {
                                    v9 = 0;
                                }
                                if (v2 != 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v29 != 0 && v1 != 2)
                                {
                                    v49 = __errno_location();
                                }
                                if (v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000))
                                {
                                    v48 = __errno_location();
                                }
                                if (v27 == 0 && ((unsigned short)v9 & 0xf000) == 0x4000 && ((unsigned short)v9 & 0xf000) != 0xa000 && (v6 == 0 || v1 != 2) || v29 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v2 != 0 && v31 != 0 && (v6 == 0 || v1 != 2) || v43[0] == 0 && (v27 == 0 || v1 == 2 || v1 != 1) && (v27 == 0 || v1 == 2 || v1 != 0) && (v27 == 0 || v6 != 0 || v1 != 1) && (v27 == 0 || v6 != 0 || v1 != 0) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v1 == 2 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000) && (((unsigned short)v9 & 0xf000) != 0xa000 || v6 != 0 || v27 != 0) && (v6 != 0 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000) || v1 == 2 && v43[0] != 0 && (v27 == 0 || v1 == 2 || v1 != 1) && (v27 == 0 || v1 == 2 || v1 != 0) && (v27 == 0 || v6 != 0 || v1 != 1) && (v27 == 0 || v6 != 0 || v1 != 0) && (v1 == 2 || ((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v1 == 2 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000) && (((unsigned short)v9 & 0xf000) != 0xa000 || v6 != 0 || v27 != 0) && (v6 != 0 || v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000))
                                {
                                    v44 = v43[0];
                                    v45 = v43;
                                }
                                if (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v43 + v28)) != 0 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || *((char *)(v43 + v28)) == 0 && v1 == 1 && (unsigned int)v51 != 2 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000))
                                {
                                    *((unsigned long *)&v1) = v51;
                                    v0 = v48;
                                    free(v4);
                                    free(v46);
                                    v52 = v0;
                                    v53 = v1;
                                }
                                if (v29 == 0 && ((unsigned short)v9 & 0xf000) == 0xa000 && v6 == 0 && v27 == 0 && v31 == 0 && v1 == 2 && v2 != 0 && v1 != 12 || ((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v29 != 0 && v2 != 0 && (v6 == 0 || v1 != 2) && v1 == 2 || *((char *)(v43 + v28)) == 0 && v1 == 1 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) && (unsigned int)v51 == 2)
                                {
                                    v44 = v18[1];
                                    v36 = v43;
                                }
                                if (((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v2 != 0 && (v29 == 0 || v1 != 2) && (v6 == 0 || v1 != 2) && (v1 == 12 || v1 != 2) && (v31 == 0 || v29 != 0) || v2 != 0 && (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v43 + v28)) != 0 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || *((char *)(v43 + v28)) == 0 && v1 == 1 && (unsigned int)v51 != 2 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000)))
                                {
                                    *((unsigned long *)&v1) = v53;
                                    v0 = v52;
                                    sub_4066a0();
                                    v53 = v1;
                                    v52 = v0;
                                }
                                if (((unsigned short)v9 & 0xf000) == 0xa000 && v27 == 0 && v2 != 0 && (v29 == 0 || v1 != 2) && (v6 == 0 || v1 != 2) && (v1 == 12 || v1 != 2) && (v31 == 0 || v29 != 0) || v2 != 0 && (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v43 + v28)) != 0 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || *((char *)(v43 + v28)) == 0 && v1 == 1 && (unsigned int)v51 != 2 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000)) || (v1 == 0 && v27 != 0 && (v6 == 0 || v1 != 2) || v1 == 1 && *((char *)(v43 + v28)) != 0 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || *((char *)(v43 + v28)) == 0 && v1 == 1 && (unsigned int)v51 != 2 && v27 != 0 && v1 != 0 && (v6 == 0 || v1 != 2) || v1 != 2 && v43[0] != 0 && (v27 == 0 || v1 != 1) && (v27 == 0 || v1 != 0) && (((unsigned short)v9 & 0xf000) != 0xa000 || v27 != 0) && (v27 != 0 || ((unsigned short)v9 & 0xf000) != 0x4000)) && v2 == 0)
                                {
                                    *((unsigned long *)&v52) = v53;
                                    v46 = 0;
                                }
                            }
                            if (v17 == 46 && (v13[1] == 46 || v43 - v13 == 1) && (v46 < &v15[-1] || v43 - v13 == 1) && (v43 - v13 == 1 || *((long long *)&v0) == 2) && (v43 - v13 == 1 || v15[-2] != 47) && (v43 - v13 == 1 || v15 > v46 + 1))
                            {
                                v25 = v43;
                            }
                        }
                    }
                }
            }
            else
            {
                v46 = 0;
                *(__errno_location()) = 2;
            }
        }
    }
    if (v12 == 0 || ((unsigned int)((unsigned long long)(v11 & 3) - 1) & v11 & 3) != 0)
    {
        v46 = 0;
        *(__errno_location()) = 22;
    }
    v56 = v46;
    return v56;
}

int sub_40da70()
{
    unsigned long long v1;  // rax

    v1 = sub_40d7b0();
    if (INVALID_IR)
    {
        sub_40d8d0();
        sub_40d950();
        r9();
        v1 = -1;
    }
    return v1;
}

int sub_406c00()
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v2;  // rsi
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax

    v3 = v2;
    v4 = sub_406980();
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

extern unsigned long long g_617700;

int sub_4058d0()
{
    unsigned long long v1;  // rdi
    unsigned long v2;  // rax

    g_617700 = v1;
    return v2;
}

int sub_403a00()
{
    unsigned long long *v1;  // rsi
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rdi
    char v4;  // al

    v2 = *(v1);
    v4 = *(v3) == *(v1);
    return rax;
}

int sub_40c3e0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40bd30();
}

int sub_40cf60()
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
    unsigned long long v30;  // rax
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
        v16 = (unsigned long long)(unsigned int)sub_40ce30();
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
                if (sub_40c480() != 0)
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
                    if (v36 >= v16 || (v16 <= v36? v36 : v16) >= v2)
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
                        if (v36 >= v16 || v40[v45 + v12] != *((char *)(v17 + v40)))
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
                if (*((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) != 0 || 1 <= v41 && (v16 <= v36? v36 : v16) >= v2 || (v16 <= v36? v36 : v16) < v2 && v36 >= v16)
                {
                    v46 = v0;
                }
            }
            if (true)
            {
                v48 = 0;
            }
            else if (1 > v41 && (v36 >= v16 || (v16 <= v36? v36 : v16) >= v2))
            {
                return v48;
            }
        }
    }
    else
    {
        v20 = memcmp(v17, v19, v16);
    }
    if (v14 == 0 && v20 != 0 || v14 != 0 && v27 != 0)
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
            v30 = sub_40c480();
            if (v0 == 0)
            {
                break;
            }
            v31 = v1;
            if (v30 != 0)
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
                        while (v32 < v28 && *((char *)(v17 + v32)) == *((char *)(v32 + v32)));
                        if (true)
                        {
                            v34 = &v16[-1];
                        }
                        else if (v32 < v28)
                        {
                            v31 = 0 + v2;
                        }
                    }
                    if (*((char *)(v16 + v16)) != *((char *)(v16 + v16)) || &v16[-1] != -1)
                    {
                        v31 = 0 + v2;
                    }
                }
                if (*((char *)(v16 + v16)) == *((char *)(v16 + v16)) || v16 >= v28)
                {
                    if (v16 >= v28 || &v16[-1] != -1)
                    {
                        v34 = &v16[-1];
                        if (&v16[-1] == -1 || *((char *)(v32 + v34)) == *((char *)(v17 + v16 - 1)))
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
        else if (v30 == 0 && *((long long *)&((char *)stack_base)[8 * (unsigned long long)(char)*((char *)(v12 + v46 - 1)) + -2104]) == 0 && v0 != 0 && (*((char *)(v16 + v16)) == *((char *)(v16 + v16)) || v16 >= v28) && (v16 >= v28 || &v16[-1] != -1) && &v16[-1] == -1 || *((char *)(v32 + v34)) == *((char *)(v17 + v16 - 1)))
        {
            return v48;
        }
    }
    v48 = 0;
    return v48;
}

// int sub_409d70()

int sub_406e60()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x18]
    unsigned long v4;  // [bp-0x10]
    unsigned long v5;  // [bp-0x8]
    unsigned long long v7[3];  // rdi
    unsigned long long v8[3];  // rsi
    unsigned long v9;  // r15
    unsigned long v10;  // r14
    unsigned long v11;  // r13
    unsigned long v12;  // r12
    unsigned long v13;  // rbx

    if (v7[1] == v8[1] && v7[2] == v8[2])
    {
        v5 = v9;
        v4 = v10;
        v3 = v11;
        v2 = v12;
        v1 = stack_base + 0;
        v0 = v13;
    }
    if (v7[1] != v8[1] || v7[2] != v8[2])
    {
        return 0;
    }
}

int sub_40e1f0()
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

int sub_406e90()
{
    return 0;
}

int sub_40acf0()
{
    unsigned int v0;  // [bp-0xd0]
    unsigned int v1;  // [bp-0xcc]
    unsigned long v2;  // [bp-0xc8]
    unsigned long v3;  // [bp-0xc0]
    unsigned long v4;  // [bp-0xa8]
    unsigned long v5;  // [bp-0xa0]
    unsigned long v6;  // [bp-0x98]
    unsigned long v7;  // [bp-0x90]
    void v8;  // [bp-0x88]
    void v9;  // [bp-0x78]
    void v10;  // [bp-0x68]
    void v11;  // [bp-0x58]
    void v12;  // [bp-0x48]
    void v13;  // [bp-0x38]
    void v14;  // [bp-0x28]
    void v15;  // [bp-0x18]
    unsigned long v17;  // rdx
    unsigned long v18;  // rcx
    unsigned long v19;  // r8
    unsigned long v20;  // r9
    char v21;  // al
    void v22;  // xmm0
    void v23;  // xmm1
    void v24;  // xmm2
    void v25;  // xmm3
    void v26;  // xmm4
    void v27;  // xmm5
    void v28;  // xmm6
    void v29;  // xmm7

    v4 = v17;
    v5 = v18;
    v6 = v19;
    v7 = v20;
    if (v21 != 0)
    {
        v8 = v22;
        v9 = v23;
        v10 = v24;
        v11 = v25;
        v12 = v26;
        v13 = v27;
        v14 = v28;
        v15 = v29;
    }
    v0 = 16;
    v2 = stack_base + 8;
    v1 = 48;
    v3 = stack_base + -184;
    return sub_40d650();
}

int sub_40a790()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_406030()
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
} struct_0;

extern char g_404f4e;
extern char g_404f59;
extern char g_404f61;
extern char g_404f7f;
extern char g_404f94;
extern char g_404fa8;
extern char g_404fbd;
extern char g_404ffa;
extern char g_40508d;
extern char g_4050a4;
extern char g_4050b8;
extern char g_4050cd;
extern char g_4050d5;
extern char g_4050e8;
extern char g_4050fc;
extern char g_40519b;
extern char g_4051af;
extern char g_4051c4;
extern char g_4051df;
extern char g_405239;
extern char g_40524c;
extern unsigned int g_412150;
extern unsigned int g_41216d;
extern unsigned int g_41218b;
extern unsigned int g_41218c;
extern unsigned int g_4121a0;
extern unsigned int g_4121c8;

int sub_404ed0()
{
    char v0;  // [bp-0x158]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x148]
    void v2;  // [bp-0x138]
    void v3;  // [bp-0x128]
    void v4;  // [bp-0x118]
    void v5;  // [bp-0x108]
    void v6;  // [bp-0xf8]
    void v7;  // [bp-0xe8]
    void v8;  // [bp-0xd8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0xc8]
    char v10;  // [bp-0xb8]
    unsigned long v11;  // [bp-0xb0]
    void v12;  // [bp-0xa8]
    void v13;  // [bp-0x98]
    void v14;  // [bp-0x88]
    void v15;  // [bp-0x78]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v16;  // [bp-0x68]
    unsigned long v17;  // [bp-0x60]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // [bp-0x58]
    unsigned long v19;  // [bp-0x50]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v20;  // [bp-0x48]
    unsigned long v21;  // [bp-0x40]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v22;  // [bp-0x38]
    unsigned long v23;  // [bp-0x30]
    unsigned long v24;  // [bp-0x28]
    unsigned long v25;  // [bp-0x20]
    unsigned long v26;  // [bp-0x18]
    unsigned long v27;  // [bp-0x10]
    unsigned long v28;  // [bp-0x8]
    struct v30;  // rsi
    struct v31;  // rbx
    unsigned int v32;  // r13d
    unsigned int *v33;  // r12
    unsigned long v34;  // rdi
    unsigned long long v35;  // rax
    void *v36;  // rbx
    unsigned long long v37;  // rax
    unsigned long long v38;  // r13
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned long long v43;  // rbx
    unsigned long long v44;  // rbx
    unsigned long v45;  // rsi
    unsigned long long v46;  // rbx
    unsigned long long v47;  // rbx
    unsigned long long v48;  // rbx
    unsigned long v49;  // rsi
    unsigned long v50;  // rsi
    unsigned int v51;  // r13d
    unsigned long long v52;  // rax
    unsigned long v54;  // rsi
    unsigned long long v55;  // rax

    v31 = v30;
    v32 = sub_409f30();
    v33 = __errno_location();
    if (v32 == 0)
    {
        if (((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) != 0x4000)
        {
            v36 = (unsigned long long)(unsigned int)sub_405990();
            v37 = strlen(v36);
            rsp = &(&v0)[-1 * (v37 + 24 & -0x10) + -8];
            v28 = &g_404f4e;
            v38 = memcpy(&(&v0)[-1 * (v37 + 24 & -0x10) + 15] & -0x10, v36, v37 + 1);
            rsp = rsp - 8;
            v27 = &g_404f59;
            free(v36);
            rsp = rsp - 8;
            v26 = &g_404f61;
            v39 = chdir((unsigned int)v30);
            if (v39 >= 0)
            {
                rsp = rsp - 8;
                v25 = &g_404f7f;
                v40 = __xstat(0x1, 0x41218c, (unsigned int)&v1);
                if (v40 < 0)
                {
                    rsp = rsp - 8;
                    v24 = &g_404f94;
                    v44 = (unsigned int)sub_409b90();
                    rsp = rsp - 8;
                    v23 = &g_404fa8;
                    v49 = *(v33);
                    v46 = 0;
                    rsp = rsp - 8;
                    v22 = &g_404fbd;
                    error(0x0, v49, (unsigned long long)dcgettext(0x0, 0x4121a0, 0x5));
                }
            }
        }
        else
        {
            *((uint128_t *)&v1) = v31->field_0;
            *((uint128_t *)&v2) = v31->field_10;
            *((int128_t *)&v3) = *((int128_t *)&v31->field_18);
            *((uint128_t *)&v4) = v31->field_20;
            *((uint128_t *)&v5) = v31->field_30;
            *((uint128_t *)&v6) = v31->field_40;
            *((uint128_t *)&v7) = v31->field_50;
            *((uint128_t *)&v8) = v31->field_60;
            *((uint128_t *)&v9) = v31->field_70;
            rsp = stack_base + -352;
            v35 = chdir(v34);
        }
        if ((v39 < 0 || ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) == 0x4000) && (v35 < 0 || ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) != 0x4000))
        {
            rsp = rsp - 8;
            v25 = &g_40519b;
            v43 = (unsigned int)sub_409b90();
            rsp = rsp - 8;
            v24 = &g_4051af;
            v45 = *(v33);
            v46 = 0;
            rsp = rsp - 8;
            v23 = &g_4051c4;
            error(0x0, v45, (unsigned long long)dcgettext(0x0, 0x41216d, 0x5));
        }
        if ((((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) == 0x4000 || v39 >= 0) && (v35 >= 0 || ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) != 0x4000))
        {
            if (((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) == 0x4000 || v40 >= 0)
            {
                while (true)
                {
                    rsp = rsp - 8;
                    v24 = &g_40508d;
                    v41 = __xstat(0x1, 0x41218b, (unsigned int)&v10);
                    if (v41 >= 0)
                    {
                        if (*((long long *)&v10) == (long long)v1 && v11 != (long long)(&v1)[8])
                        {
                            rsp = rsp - 8;
                            v23 = &g_404ffa;
                            v42 = chdir(0x41218b);
                            if (v42 >= 0)
                            {
                                v1 = *((int128_t *)&v10);
                                *((int128_t *)&v2) = (int128_t)v12;
                                *((int128_t *)&v3) = (int128_t)v13;
                                *((int128_t *)&v4) = (int128_t)v14;
                                *((int128_t *)&v5) = (int128_t)v15;
                                *((int128_t *)&v6) = (int128_t)v16;
                                *((int128_t *)&v7) = (int128_t)v18;
                                *((int128_t *)&v8) = (int128_t)v20;
                                v9 = (int128_t)v22;
                            }
                            else
                            {
                                rsp = rsp - 8;
                                v20 = &g_4051df;
                                v48 = (unsigned int)sub_409b90();
                            }
                        }
                        if (v11 == (long long)(&v1)[8] || *((long long *)&v10) != (long long)v1)
                        {
                            rsp = rsp - 8;
                            v23 = &g_4050d5;
                            v46 = (unsigned int)sub_40a7f0();
                        }
                    }
                    else
                    {
                        rsp = rsp - 8;
                        v21 = &g_4050a4;
                        v47 = (unsigned int)sub_409b90();
                    }
                    if (v41 < 0 || v42 < 0 && *((long long *)&v10) == (long long)v1 && v11 != (long long)(&v1)[8])
                    {
                        rsp = rsp - 8;
                        v20 = &g_4050b8;
                        v50 = *(v33);
                        v46 = 0;
                        rsp = rsp - 8;
                        v19 = &g_4050cd;
                        error(0x0, v50, (unsigned long long)dcgettext(0x0, v50, 0x5));
                    }
                }
            }
            v51 = *(v33);
            rsp = rsp - 8;
            v18 = &g_4050e8;
            v52 = sub_409f80();
            if (v52 == 0)
            {
                rsp = rsp - 8;
                v17 = &g_4050fc;
                sub_409fa0();
                *(v33) = v51;
            }
            else
            {
                rsp = rsp - 8;
                v17 = &g_405239;
                v54 = *(v33);
                rsp = rsp - 8;
                v16 = &g_40524c;
                error(0x1, v54, (unsigned long long)dcgettext(0x0, 0x4121c8, 0x5));
            }
        }
    }
    else
    {
        v46 = 0;
        error(0x0, *(v33), (unsigned long long)dcgettext(0x0, 0x412150, 0x5));
    }
    if (v52 == 0 || v32 != 0 || v35 < 0 && ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) == 0x4000 || v39 < 0 && ((unsigned short)*((int *)&((char *)&v30->field_10)[8]) & 0xf000) != 0x4000)
    {
        v55 = v46;
        return v55;
    }
}

int sub_409e12()
{
    char v0;  // [bp-0x128]
    unsigned long v1;  // [bp-0x120]
    char v2;  // [bp-0x98]
    unsigned long v3;  // [bp-0x90]
    unsigned long long v4;  // [bp+0x0]
    unsigned long long v6;  // [bp+0x10]
    unsigned long long v7;  // [bp+0x18]
    unsigned long long v8;  // [bp+0x20]
    unsigned long long v9;  // [bp+0x28]
    unsigned long v12;  // r13
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    void *v15;  // rbp
    void *v16;  // r12
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // bl
    unsigned long long v20;  // rax
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r12
    unsigned long long v23;  // r13
    unsigned long long v24;  // r14
    unsigned long long v25;  // r15

    v12 = (unsigned int)sub_405ad0();
    v13 = sub_405ad0();
    if (v12 == v13)
    {
        v14 = memcmp((unsigned long long)(unsigned int)sub_405a70(), (unsigned long long)(unsigned int)sub_405a70(), v12);
        if (v14 == 0)
        {
            v15 = (unsigned long long)(unsigned int)sub_405990();
            v16 = (unsigned long long)(unsigned int)sub_405990();
            v17 = __xstat(0x1, (unsigned int)v15, (unsigned int)&v0);
            if (v17 == 0)
            {
                v18 = __xstat(0x1, (unsigned int)v16, (unsigned int)&v2);
                if (v18 == 0)
                {
                    v19 = 0;
                    if (v1 == v3)
                    {
                        v19 = *((long long *)&v0) == *((long long *)&v2);
                    }
                    free(v15);
                    free(v16);
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
    if (v12 != v13 || v14 != 0 || v18 == 0 && v17 == 0)
    {
        v20 = v19;
        v21 = v4;
        v22 = v6;
        v23 = v7;
        v24 = v8;
        v25 = v9;
        return v20;
    }
}

int sub_409730()
{
    unsigned int v1;  // [bp+0x100008]

    *(__errno_location()) = v1;
    return sub_40a760();
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

int sub_406c40()
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
    if (sub_405cc0() != 0)
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
                sub_405de0();
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
                    if (sub_406780() == 0)
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

extern unsigned long long __progname_full;
extern unsigned long long g_617708;
extern unsigned long long program_invocation_short_name;
extern unsigned long long stderr;

int sub_4081c0()
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
        g_617708 = v3;
        __progname_full = v3;
        return v4;
    }
    fwrite("A NULL argv[0] was passed through an exec system call.\n", 0x1, 0x37, stderr);
    abort(); /* do not return */
}

typedef struct struct_0 {
    char padding_0[4];
    unsigned int field_4;
    char padding_8[32];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern uint128_t *g_6175b8;
extern uint128_t g_6175c0;
extern unsigned int g_6175d0;
extern int512_t g_617720;

int sub_409590()
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
    v17 = g_6175b8;
    v11 = __errno_location();
    v5 = *(v11);
    if ((unsigned int)v13 < 0)
    {
        abort(); /* do not return */
    }
    if (g_6175d0 <= (unsigned int)v13)
    {
        if ((unsigned int)v13 != 2147483647)
        {
            if (g_6175b8 != 6387136)
            {
                v16 = sub_40a5c0();
                g_6175b8 = v16;
                v17 = v16;
            }
            else
            {
                v15 = sub_40a5c0();
                v17 = v15;
                g_6175b8 = v15;
                *(v15) = g_6175c0;
            }
            memset(&v17[(long long)(int)g_6175d0], 0x0, (int)((unsigned int)v13 + 1 - g_6175d0) * 16);
            g_6175d0 = (unsigned int)v13 + 1;
        }
        else
        {
            sub_40a7b0(); /* do not return */
        }
    }
    if ((unsigned int)v13 != 2147483647 || g_6175d0 > (unsigned int)v13)
    {
        v19 = &v17[v13];
        v20 = v19[1];
        v6 = v9->field_4 | 1;
        v2 = v9->field_30;
        v1 = v9->field_28;
        v0 = &v9->padding_8;
        *((unsigned long long [2])&v4) = *(v19);
        v21 = sub_408360();
        if (v4 <= v21)
        {
            v22 = v21 + 1;
            v19[0] = v21 + 1;
            if (v20 != 6387488)
            {
                v4 = v22;
                free(v20);
                v22 = v4;
            }
            v4 = v22;
            v19[1] = v20;
            v20 = (unsigned long long)(unsigned int)sub_40a560();
            v2 = v9->field_30;
            v1 = v9->field_28;
            v0 = v8 + 8;
            sub_408360();
        }
        *(v11) = v5;
        v24 = v20;
        return v24;
    }
}

extern int512_t g_412374;
extern int512_t g_412378;

int sub_408260()
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
        v3 = sub_40dc80();
        v4 = v3[0] & 4294967007;
        if ((v3[0] & 223) == 85)
        {
            if ((v3[1] & 223) == 84 && (v3[2] & 223) == 70 && v3[3] == 45 && v3[4] == 56 && v3[5] == 0)
            {
                v2 = (*(v2) != 96? &g_412374 : 4268927);
            }
        }
        else
        {
            if (v4 == 71 && (v3[1] & 223) == 66 && v3[2] == 49 && v3[3] == 56 && v3[4] == 48 && v3[5] == 51 && v3[6] == 48 && v3[7] == 0)
            {
                v2 = (*(v2) != 96? &g_412378 : 4268923);
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

extern unsigned int g_6175d8;
extern unsigned int g_6175dc;
extern unsigned int g_6175e0;
extern unsigned int g_617860;
extern unsigned int g_617864;
extern unsigned int g_617868;
extern unsigned long long g_617870;
extern unsigned long long g_6178a8;

int sub_40c300()
{
    unsigned int *v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x10]
    unsigned long v2;  // [bp+0x8]

    g_617860 = g_6175e0;
    g_617864 = g_6175dc;
    v1 = (unsigned int)v2;
    v0 = &g_617860;
    g_6175e0 = g_617860;
    g_6178a8 = g_617870;
    g_6175d8 = g_617868;
    return sub_40bd30();
}

int sub_40c3a0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // r9

    v1 = 0;
    v0 = v3;
    return sub_40bd30();
}

int sub_4065f0()
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

int sub_40c480()
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 > 7 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2))
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
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 > 7 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 == *((char *)v2) || v3 != *((char *)v2) && (v2 & 7) != 0 && v1 != 0 || v3 == *((char *)v2) && (v2 & 7) != 0 && v1 != 0)
    {
        v5 = v2;
    }
    if (((9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 > 7 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v1 > 7 && (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) != 0 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) || v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v1 <= 7) && v3 != *((char *)v2) || (9259542123273814144 & !(*((long long *)v2) ^ v4) & (*((long long *)v2) ^ v4) - 72340172838076673) == 0 && v1 > 7 && v1 != 0 && ((v2 & 7) == 0 || v3 != *((char *)v2)) && v3 != *((char *)v2) || v3 != *((char *)v2) && (v2 & 7) != 0 && v1 != 0 || v1 == 0)
    {
        return 0;
    }
    if (v1 != 0 || v3 == *((char *)v2))
    {
        return v5;
    }
}

int sub_40d650()
{
    unsigned long long v0;  // [bp-0x10]
    void *v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long *v4;  // rdi

    v2 = sub_40e360();
    if (!(v2 != 0))
    {
        v3 = -18446744069414584321;
    }
    else if (v0 <= 2147483647)
    {
        *(v4) = v2;
        v3 = v0;
    }
    else
    {
        free(v2);
        *(__errno_location()) = 75;
        v3 = -18446744069414584321;
    }
    return v3;
}

extern unsigned long long g_6176c8;

int sub_403a60()
{
    unsigned long long v1[2];  // rbx
    char *v2;  // rdi
    char v3;  // r12b
    unsigned long long v4;  // rax
    unsigned long long v5;  // r12

    v1 = g_6176c8;
    v3 = v2 == 0 | g_6176c8 == 0;
    if (g_6176c8 != 0 && v2 != 0)
    {
        while (true)
        {
            v4 = strcmp(v2, *(v1));
            if (v4 != 0)
            {
                v1 = v1[1];
                return v5;
            }
            return 1;
        }
    }
    return 0;
}

// int sub_409b90()

int sub_409b20()
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
    return sub_409590();
}

extern uint128_t g_617820;
extern uint128_t g_617830;
extern uint128_t g_617840;
extern unsigned long long g_617850;

int sub_409baf()
{
    void v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x18]
    unsigned long v5;  // rdx

    v3 = g_617850;
    *((uint128_t *)&v0) = g_617820;
    *((uint128_t *)&v1) = g_617830;
    *((uint128_t *)&v2) = g_617840;
    *((unsigned int *)&((char *)stack_base)[4 * v5 % 32 + -64]) = (unsigned int)((unsigned long long)(!((unsigned int)((unsigned long long)(unsigned int)*((int *)&((char *)stack_base)[4 * v5 % 32 + -64]) >> ((char)((unsigned int)v5 & 31) & 31))) & 1) << ((char)((unsigned int)v5 & 31) & 31)) ^ *((int *)&((char *)stack_base)[4 * v5 % 32 + -64]);
    return sub_409590();
}

int sub_409c60()
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
    return sub_409590();
}

int sub_40a5c0()
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
            sub_40a7b0(); /* do not return */
        }
        if (v1 == 0 || v3 != 0)
        {
            return v3;
        }
    }
}

extern unsigned int g_41109f;
extern unsigned int g_4115a0;
extern unsigned int g_4115c8;
extern unsigned int g_4115f0;
extern unsigned int g_411658;
extern unsigned int g_4116a8;
extern unsigned int g_411848;
extern unsigned int g_411948;
extern unsigned int g_411a58;
extern unsigned int g_411ae0;
extern unsigned int g_411bc0;
extern unsigned int g_411bf0;
extern unsigned int g_411c28;
extern unsigned int g_411d08;
extern unsigned int g_411da8;
extern unsigned int g_411eb0;
extern unsigned int g_411ef8;
extern unsigned int g_411f18;
extern unsigned long long g_617708;
extern unsigned long long stderr;
extern unsigned long long stdout;

int sub_404930()
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
    unsigned int v22;  // r8d
    unsigned int v23;  // r9d
    unsigned long long *v36;  // rax
    char *v37;  // rdi
    char *v38;  // rsi
    unsigned long long v39;  // rcx
    unsigned long long v40;  // cc_dep1
    unsigned long long v41;  // cc_dep2
    unsigned long v42;  // d
    char *v46;  // rax
    char *v47;  // rax
    unsigned long long v48;  // rax

    v15 = v17;
    v14 = v18;
    if ((unsigned int)v19 != 0)
    {
        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4115a0, 0x5), g_617708, v22, v23);
    }
    else
    {
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x4115c8, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4115f0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411658, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x4116a8, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411848, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411948, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411a58, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411ae0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411bc0, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411bf0, 0x5), stdout);
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411c28, 0x5));
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411d08, 0x5), stdout);
        fputs_unlocked((unsigned long long)dcgettext(0x0, 0x411da8, 0x5), stdout);
        v0 = "[";
        v36 = &v0;
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
            v36 = &v2;
            v37 = v2;
            if (v2 == 0)
            {
                break;
            }
            v38 = "df";
            v39 = 3;
            if ((v40 > v41) - 0 - (v40 < v41) == 0)
            {
                break;
            }
            while (v39 != 0)
            {
                v39 -= 1;
                v40 = *(v38);
                v41 = *(v37);
                v37 = &v37[v42];
                v38 = &v38[v42];
                break;
            }
        }
        if (v3 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41109f, 0x5));
            v47 = setlocale(0x5, 0x0);
        }
        else
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41109f, 0x5));
            v46 = setlocale(0x5, 0x0);
            if (v46 != 0)
            {
                v48 = strncmp(v46, "en_", 0x3);
            }
            if (v48 == 0 || v46 == 0)
            {
                __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411ef8, 0x5));
            }
        }
        if ((v3 == 0 || strncmp(v47, "en_", 0x3) != 0) && (v3 == 0 || v47 != 0) && (v3 != 0 || v48 != 0) && (v3 != 0 || v46 != 0))
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411eb0, 0x5));
        }
        if (v3 != 0 || v48 != 0 && v46 != 0)
        {
            __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411ef8, 0x5));
        }
        __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x411f18, 0x5));
    }
    exit(v19); /* do not return */
}

// int sub_409a40()

int sub_403ed0()
{
    char v1;  // dil
    unsigned long long v2;  // rdx

    if (v1 != 0)
    {
        v2 = (unsigned int)sub_406fb0();
        *((char *)(v2 - 1)) = 45;
        return v2 - 1;
    }
}

int sub_405c70()
{
    unsigned long v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1 % 8 | v1 * 0x2000000000000000) % v2 >> 64;
}

int sub_40a600()
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
        sub_40a7b0(); /* do not return */
    }
}

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned int field_8;
    unsigned short field_c;
} struct_1;

extern char g_413a14;
extern char g_617898[2];

int sub_40dc80()
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

    v9 = g_617898;
    v10 = ((unsigned long long)nl_langinfo(0xe) == 0? &g_413a14 : (unsigned long long)nl_langinfo(0xe));
    if (g_617898 == 0)
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
            v9 = &g_413a14;
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
                                        v9 = &g_413a14;
                                        v10 = (tmp_10 == 0? &g_413a14 : tmp_10);
                                        free(NULL);
                                        sub_40e240();
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
                        if (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && v28 > 1)
                        {
                            v60 = __uflow(v10);
                        }
                        if ((unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v61 == -1 || (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0 && (unsigned int)v26 != 32 && (unsigned int)v26 != 35 && v28 > 1) && (unsigned int)v60 == -1)
                        {
                            v10 = (tmp_10 == 0? &g_413a14 : tmp_10);
                            sub_40e240();
                            if (v0 == 0)
                            {
                                break;
                            }
                            *((char *)(v9 + v0)) = 0;
                        }
                    }
                    if ((unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v37 != 0 || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0) && (unsigned int)v60 == -1 || (unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v37 != 0 || (unsigned int)v60 != -1) && v61 == -1)
                    {
                        v9 = &g_413a14;
                    }
                    else if (v37 == 0 || ((unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (unsigned int)v26 != 35 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v37 != 0 || (unsigned int)v60 != -1) && v28 <= 1 || (*((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) >= *((long long *)(v10 + 16)) && v37 != 0) && (unsigned int)v60 == -1 || (unsigned int)v26 == 35 && (unsigned int)v26 != 32 && (unsigned int)(v26 - 9) > 1 && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || *((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || (unsigned int)v60 != -1) && (*((long long *)(v10 + 8)) < *((long long *)(v10 + 16)) || v37 != 0 || (unsigned int)v60 != -1) && v61 == -1) && v0 != 0)
                    {
                        free(v17);
                    }
                }
                else
                {
                    close(v22);
                }
            }
            v9 = &g_413a14;
            free(v17);
        }
        *((char *[2])&g_617898[0]) = v9;
    }
    v66 = v9[0];
    if (v9[0] != 0)
    {
        while (true)
        {
            v67 = strcmp((tmp_10 == 0? &g_413a14 : tmp_10), v9);
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

// int sub_409d50()

// int sub_409f2b()

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

    v10 = sub_401da0();
    if (!(INVALID_IR))
    {
        v11 = 0;
        while (true)
        {
            v7 = v1;
            v8 = v3;
            v9 = v5;
            v10 = *((long long *)(6385200 + rbx * 8))();
            v11 += 1;
            if (v11 == 0)
            {
                break;
            }
        }
    }
    return v10;
}

int sub_40db90()
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
    return sub_40e1f0();
}

// int sub_409990()

int sub_405b90()
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
        v8 = sub_4061f0() != 0;
        return rax;
    }
    return 0;
}

int sub_40dbe0()
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

int sub_40a7dc()
{
    abort(); /* do not return */
}

extern int512_t g_617308;

// int sub_410f70()

int sub_4098bb()
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
    v7 = (unsigned int)sub_408360();
    v5 = v7 + 1;
    v4 = (unsigned int)sub_40a560();
    *((unsigned long long [7])&v2) = v17[6];
    *((unsigned long long [7])&v1) = v17[5];
    v0 = v6;
    sub_408360();
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

int sub_405c90()
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_406e50()
{
    struct v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | v1->field_8) % v2 >> 64;
}

int sub_40a883()
{
    abort(); /* do not return */
}

int sub_407f30()
{
    unsigned int v0;  // [bp-0x40]
    unsigned int v1;  // [bp-0x3c]
    unsigned long long v3;  // r12
    unsigned int v4;  // edx
    unsigned int v5;  // ecx
    unsigned long long *v6;  // rsi
    unsigned long long v7;  // rax
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rdi
    unsigned long long v10;  // r14
    unsigned long long v11;  // rax

    v3 = 0;
    v0 = v4;
    v1 = v5;
    v7 = *(v6);
    while (true)
    {
        v8 = v7 + 1;
        v10 = realloc(v3, v7 + 1);
        if (v10 != 0)
        {
            *(v6) = *(v6);
            v7 = sub_407b90();
            if (v7 != -1)
            {
                v3 = v10;
                if (v8 > v7)
                {
                    break;
                }
            }
            else
            {
                v9 = v10;
                v10 = 0;
                free(v9);
            }
        }
        else
        {
            free(v3);
        }
    }
    v11 = v10;
    return v11;
}

extern unsigned int g_4130b8;
extern unsigned int g_4130c4;
extern unsigned int g_4130cb;
extern unsigned int g_4130cf;
extern unsigned int g_4130df;
extern unsigned int g_4130f6;
extern unsigned int g_413158;
extern unsigned int g_413228;
extern unsigned int g_413248;
extern unsigned int g_413270;
extern unsigned int g_413298;
extern unsigned int g_4132c8;
extern unsigned int g_413420;

int sub_409fc0()
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
    unsigned int v18;  // r9d
    unsigned int v19;  // edi
    unsigned int v20;  // edx
    unsigned int v21;  // ecx
    void *v22;  // rdi
    unsigned long v24;  // r9
    unsigned long v25;  // rsi
    unsigned long long v26;  // r8
    unsigned long long v27;  // r13
    unsigned long long v28;  // r12
    unsigned long long v29;  // r15
    unsigned long long v30;  // r14
    unsigned long long v31;  // r14
    unsigned long v32;  // r13
    unsigned long v33;  // r12
    unsigned long v34;  // rbx
    unsigned long v35;  // rax
    unsigned long long v36;  // r8
    unsigned long v37;  // rax
    unsigned long v38;  // rax
    unsigned long v39;  // r9

    v13 = v12;
    if (v14 != 0)
    {
        __fprintf_chk(v19, 0x1, 0x4130b8, v14, v20, v21);
    }
    else
    {
        __fprintf_chk(v15, 0x1, 0x4130c4, v20, v21, v18);
    }
    __fprintf_chk((unsigned int)v22, 0x1, 0x413420, dcgettext(0x0, 0x4130cb, 0x5), 0x7e1, v18);
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413158, 0x5), v22);
    switch (v24)
    {
    case 0:
        abort(); /* do not return */
    case 1:
        dcgettext(0x0, 0x4130cf, 0x5);
        break;
    case 2:
        dcgettext(0x0, 0x4130df, 0x5);
        break;
    case 3:
        dcgettext(0x0, 0x4130f6, 0x5);
        break;
    case 4:
        v31 = v13[3];
        v32 = v13[2];
        v33 = v13[1];
        v34 = *(v13);
        v35 = dcgettext(0x0, 0x413228, 0x5);
    case 5:
        v31 = v13[3];
        v32 = v13[2];
        v33 = v13[1];
        v34 = *(v13);
        v35 = dcgettext(0x0, 0x413248, 0x5);
        *((unsigned long long [9])&v5) = v12[4];
    case 6:
        *((unsigned long long [9])&v6) = v12[1];
        v37 = dcgettext(0x0, 0x413270, 0x5);
        v39 = v12[2];
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
    case 7:
        *((unsigned long long [9])&v7) = v13[2];
        *((unsigned long long [9])&v6) = v13[1];
        v37 = dcgettext(0x0, 0x413298, 0x5);
        *((unsigned long long [9])&v5) = v12[6];
        *((unsigned long long [9])&v4) = v12[5];
        *((unsigned long long [9])&v3) = v12[4];
        *((unsigned long long [9])&v2) = v12[3];
        v39 = v7;
    case 8:
        v27 = v13[6];
        v28 = v13[5];
        v29 = v13[4];
        *((unsigned long long [9])&v8) = v13[7];
        v30 = v13[3];
        *((unsigned long long [9])&v6) = v13[2];
        *((unsigned long long [9])&v7) = v13[1];
        v38 = dcgettext(0x0, 0x4132c8, 0x5);
    case 9:
        v25 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, and %s.\n";
        v36 = v12[1];
        v27 = v13[6];
        v28 = v13[5];
        *((unsigned long long [9])&v9) = v13[8];
        v29 = v13[4];
        v30 = v13[3];
        *((unsigned long long [9])&v8) = v13[7];
        *((unsigned long long [9])&v6) = v13[2];
        v7 = v36;
    default:
        v25 = "Written by %s, %s, %s,\n%s, %s, %s, %s,\n%s, %s, and others.\n";
        v26 = v12[1];
        v27 = v13[6];
        v28 = v13[5];
        *((unsigned long long [9])&v9) = v13[8];
        v29 = v13[4];
        v30 = v13[3];
        *((unsigned long long [9])&v8) = v13[7];
        *((unsigned long long [9])&v6) = v13[2];
        v7 = v26;
    }
    v38 = dcgettext(0x0, v25, 0x5);
    v5 = v9;
    v4 = v31;
    __fprintf_chk((unsigned int)v22, 0x1, v35, v34, v33, v32);
    return v4;
    return __fprintf_chk((unsigned int)v22, 0x1, v35, *((long long *)&v10), v6, v39);
    v4 = v8;
    v3 = v27;
    v2 = v28;
    v1 = v29;
    v0 = v30;
    return __fprintf_chk((unsigned int)v22, 0x1, v35, *((long long *)&v10), v7, v6);
}

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

int sub_409f30()
{
    struct v1;  // rdi
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rax

    v1->field_8 = 0;
    v2 = (unsigned int)sub_40db90();
    v1->field_0 = v2;
    if ((unsigned int)v2 >= 0)
    {
        return 0;
    }
    v3 = sub_40b160();
    v1->field_8 = v3;
    return 0 - (unsigned int)(char)(v3 == 0);
}

extern char g_6176f8;

int sub_4058e0()
{
    char v1;  // dil
    unsigned long v2;  // rax

    g_6176f8 = v1;
    return v2;
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

int sub_40e300()
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

// int sub_409de0()

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    char field_10;
} struct_0;

int sub_406440()
{
    struct v1;  // rdi

    v1->field_10 = 0;
    v1->field_0 = 0x3f80000000000000;
    v1->field_8 = 4590573145673223373;
    return 4590573145673223373;
}

int sub_406e20()
{
    unsigned long v0;  // [bp+0x8]
    unsigned long v1;  // rsi

    return (0 | (unsigned int)sub_40dc40() ^ v0) % v1 >> 64;
}

extern int512_t g_617820;

int sub_409780()
{
    unsigned long v1;  // rdi
    unsigned int v2;  // esi

    *((unsigned int *)(v1 == 0? &g_617820 : v1)) = v2;
    return &g_617820;
}

// int sub_409dc0()

extern unsigned int g_413ae8;
extern unsigned int g_413b03;

int sub_40d8d0()
{
    unsigned long v0;  // [bp-0x18]
    unsigned long v1;  // [bp-0x8]
    unsigned long v3;  // r12
    unsigned long v4;  // rbx

    v1 = v3;
    v0 = v4;
    if (false)
    {
        dcgettext(0x0, 0x413ae8, 0x5);
    }
    dcgettext(0x0, 0x413b03, 0x5);
    sub_409dc0();
    sub_409ab0();
}

int sub_40b630()
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

int sub_40d2b0()
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
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    unsigned long long v28;  // rdx
    unsigned long long v29;  // rax
    unsigned long long v30;  // rsi
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rax
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
                v36 = (unsigned int)sub_40cf60();
            }
            else
            {
                if (v17 > 2)
                {
                    v0 = v20;
                    v21 = (unsigned int)sub_40ce30();
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
                        v26 = sub_40c480();
                        if (v0 == 0)
                        {
                            break;
                        }
                        if (v26 != 0)
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
                            if (*((char *)(v36 + v27 + v24)) != *((char *)(v19 + v27)) || v21 > v23)
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
                    else if ((v21 > v23 && (*((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)) || v17 <= (v23 <= v21? v21 : v23)) && (v26 == 0 || v17 > (v23 <= v21? v21 : v23)) && (v0 != 0 || v17 > (v23 <= v21? v21 : v23)) && *((char *)(v19 + v3)) == *((char *)(v36 + v24 + v3)) || v21 > v23 && (*((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)) || v17 <= (v23 <= v21? v21 : v23)) && (v26 == 0 || v17 > (v23 <= v21? v21 : v23)) && (v0 != 0 || v17 > (v23 <= v21? v21 : v23)) && *((char *)(v19 + v3)) != *((char *)(v36 + v24 + v3)) || (*((char *)(v36 + v27 + v24)) == *((char *)(v19 + v27)) || v17 <= (v23 <= v21? v21 : v23)) && (v26 == 0 || v17 > (v23 <= v21? v21 : v23)) && (v17 <= (v23 <= v21? v21 : v23) || v21 > v23) && (v0 != 0 || v17 > (v23 <= v21? v21 : v23)) && v21 <= v23) && 1 > v29)
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
                        v32 = sub_40c480();
                        if (v20 == 0)
                        {
                            break;
                        }
                        if (v32 != 0)
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
                        if (v21 - 1 != -1 && (v17 <= v21 || *((char *)(v0 + v25)) == *((char *)(v19 + v21))))
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
                        if ((v17 <= v21 || *((char *)(v0 + v25)) == *((char *)(v19 + v21))) && (*((char *)(v33 + v35)) == *((char *)(v19 + v21 - 1)) || v21 - 1 == -1) && (v17 <= v21 || v21 - 1 != -1))
                        {
                            v36 = v33;
                        }
                    }
                    if (true)
                    {
                        v36 = 0;
                    }
                    else if (v32 == 0 && v20 != 0 && (v17 <= v21 || *((char *)(v0 + v25)) == *((char *)(v19 + v21))) && (*((char *)(v33 + v35)) == *((char *)(v19 + v21 - 1)) || v21 - 1 == -1) && (v17 <= v21 || v21 - 1 != -1))
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

typedef struct struct_0 {
    char padding_0[20];
    char field_14;
} struct_0;

int sub_407b40()
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_1 *field_20;
} struct_0;

extern unsigned int g_413900;
extern unsigned int g_413920;
extern unsigned int g_413950;
extern unsigned int g_413970;
extern unsigned int g_4139a0;
extern unsigned int g_4139f1;
extern unsigned long long stderr;

int sub_40b710()
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
    /*INVALID_EQUAL_UNDEFINED*/
undefined v29;  // r9d
    unsigned long long v30;  // rdx
    unsigned int v31;  // ecx
    unsigned long long *v33;  // rsi
    char *v34;  // rbp
    unsigned long long v35;  // rdx
    unsigned long v37;  // r12
    unsigned long long v39;  // r12
    unsigned long v41;  // r12
    unsigned long v42;  // rdi
    unsigned long long v43;  // rbx
    unsigned long long v44;  // rbp
    unsigned long long v47;  // rax
    unsigned int *v48;  // rdx
    unsigned long long v49;  // r14

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
                        v29 = v4;
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
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x413900, 0x5), *(v33), *((long long *)&v11), (unsigned int)v9->field_20);
                                v12 = v9->field_20;
                            }
                            else
                            {
                                flockfile(stderr);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x413920, 0x5), *(v33), *((long long *)&v11), (unsigned int)v9->field_20);
                                v42 = stderr;
                                v43 = v18;
                                v44 = v1;
                                v39 = v1 + v20 + 1;
                                do
                                {
                                    if (*((char *)v44) != 0)
                                    {
                                        __fprintf_chk(v42, 0x1, 0x4139f1, *((long long *)&v11), *((long long *)v43), v29);
                                        v42 = stderr;
                                    }
                                    v44 += 1;
                                    v43 += 32;
                                }
                                while (v39 != v44);
                                fputc(0xa, v42);
                                funlockfile(stderr);
                                v12 = v9->field_20;
                            }
                        }
                        if (v7 != 0)
                        {
                            free(v1);
                        }
                        v49 = &v12[strlen(v12)];
                        v9->field_20 = v49;
                        v9->field_0 = v9->field_0 + 1;
                        v9->field_8 = 0;
                        v47 = 63;
                    }
                }
            }
            if ((*(v19) == 0 || v22 == 0) && (*(v19) == 0 || v23 == v17) && (v22 == 0 || v4 == 0) && (v22 == 0 || v1 == 0) && (v4 == 0 || v23 == v17) && (v1 == 0 || v23 == v17))
            {
                v30 = v9->field_0;
                v9->field_20 = 0;
                v9->field_0 = (unsigned int)v30 + 1;
                v31 = *((int *)(v19 + 8));
                if (*(v15) == 0)
                {
                    if (v31 == 1)
                    {
                        if ((unsigned int)((unsigned long long)v9->field_0 + 1) < v25)
                        {
                            v9->field_0 = v9->field_0 + 2;
                            v9->field_10 = v33[1 + v30];
                        }
                        else
                        {
                            if (v10 != 0)
                            {
                                v41 = *((long long *)v19);
                                __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4139a0, 0x5), *(v33), *((long long *)&v11), v41);
                            }
                            v9->field_8 = *((int *)(v19 + 24));
                            v47 = (unsigned long long)(char)(*(v3) != 58) * 5 + 58;
                        }
                    }
                }
                else
                {
                    if (v31 != 0)
                    {
                        v34 = &v15[1];
                        v9->field_10 = v34;
                    }
                    else
                    {
                        if (v10 != 0)
                        {
                            v37 = *((long long *)v19);
                            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x413970, 0x5), *(v33), *((long long *)&v11), v41);
                        }
                        v9->field_8 = *((int *)(v19 + 24));
                        v47 = 63;
                    }
                }
                if (*(v15) == 0 && (unsigned int)((unsigned long long)v9->field_0 + 1) < v25 || *(v15) == 0 && v31 != 1 || *(v15) != 0 && v31 != 0)
                {
                    if (v2 != 0)
                    {
                        *((unsigned long *)&v2) = v20;
                    }
                    v48 = *((long long *)(v19 + 16));
                    v47 = (unsigned int)*((int *)(v19 + 24));
                    if (*((long long *)(v19 + 16)) == 0)
                    {
                        break;
                    }
                    *(v48) = v47;
                    v47 = 0;
                }
            }
        }
        if (unknown)
        {
            return v47;
        }
    }
    if (v29 != 0)
    {
        if (*((char *)(v33[(long long)(int)v9->field_0] + 1)) != 45)
        {
            v35 = strchr(v3, v5);
            v47 = -18446744069414584321;
        }
        if ((v35 != 0 || *((long long *)v18) != 0) && (*((char *)(v33[(long long)(int)v9->field_0] + 1)) != 45 || *((long long *)v18) != 0))
        {
            return v47;
        }
    }
    if (v29 == 0 && *((long long *)v18) == 0 || v35 == 0 && v29 != 0 || *((char *)(v33[(long long)(int)v9->field_0] + 1)) == 45 && v29 != 0)
    {
        if (v10 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x413950, 0x5), *(v33), *((long long *)&v11), (unsigned int)v9->field_20);
        }
        v9->field_20 = 0;
        v9->field_0 = v9->field_0 + 1;
        v9->field_8 = 0;
        return 63;
    }
}

int sub_40c360()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 1;
    return sub_40c300();
}

int sub_40ce30()
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

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char field_0;
    char padding_1[7];
    unsigned long long field_8;
} struct_0;

double sub_405cc0()
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
        v7 = sub_405c90();
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

int sub_405ad0()
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

int sub_407fcd()
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
                        v25 = (unsigned int)sub_40c400();
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
                                if ((2147483647 - (unsigned int)v17 < (unsigned int)v27 || (unsigned int)v27 < 0) && ((unsigned int)v17 == 2147483647 || (unsigned int)v27 >= 0) && (v29 == 0 || (unsigned int)v27 >= 0))
                                {
                                    v17 = 2147483647;
                                }
                                if (((unsigned int)v27 < 0 || 2147483647 - (unsigned int)v17 >= (unsigned int)v27) && ((unsigned int)v17 != 2147483647 || v29 != 0 || (unsigned int)v27 >= 0))
                                {
                                    v30 = &v30[(v25 == 0? 1 : rbp)];
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
                    if (v25 == -2 || v25 == -1 && ((char)v19 & 1) != 0 || (unsigned int)v27 < 0 && v25 != -1)
                    {
                        v17 = -18446744069414584321;
                    }
                    else if (v25 == -1)
                    {
                        v30 = &v30[1];
                        v17 = (unsigned int)v17 + 1;
                    }
                    else if (true)
                    {
                        if (v30 >= v14 + v18)
                        {
                            break;
                        }
                    }
                    else if (v25 != -2 && v25 != -1 && (2147483647 - (unsigned int)v17 < (unsigned int)v27 || (unsigned int)v27 < 0) && ((unsigned int)v17 == 2147483647 || (unsigned int)v27 >= 0) && (v29 == 0 || (unsigned int)v27 >= 0) && (((char)v19 & 2) == 0 || (unsigned int)v27 >= 0))
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
                v30 = &v30[1];
                v17 = (unsigned int)v17 + 1;
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
                if (((char)(v21[(unsigned long long)v30[-1]] >> 8) & 64) != 0 || (v32 & 2) == 0 && v20 == 0)
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
            else if (v14 + v18 == v30 || ((char)(v21[(unsigned long long)v30[-1]] >> 8) & 64) != 0 || (v32 & 2) == 0 && v20 == 0)
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

int sub_403b50()
{
    char *v1;  // rdi
    unsigned long long v2;  // rbx
    char *v4;  // rdx

    v2 = *(v1);
    if (*(v1) != 0)
    {
        v4 = v1;
        do
        {
            if ((*((char *)(*((long long *)(unsigned long long)__ctype_b_loc()) + (v2 << 1))) & 2) != 0)
            {
                *(v4) = 63;
            }
            v4 = &v4[1];
            v2 = *(v4);
        }
        while ((char)v2 != 0);
    }
    return v1;
}

int sub_40d7b0()
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

typedef struct struct_0 {
    uint128_t field_0;
    uint128_t field_10;
    uint128_t field_20;
    unsigned long long field_30;
} struct_0;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
    char padding_8[32];
    char field_28;
} struct_1;

typedef struct struct_2 {
    char padding_0[32];
    unsigned long long field_20;
} struct_2;

extern unsigned int g_410fe8;
extern unsigned long long g_617640;
extern unsigned long long g_617648;
extern unsigned long long g_617650;
extern unsigned long long g_617658;
extern unsigned long long g_617688;
extern unsigned long long g_617690;
extern unsigned long long g_617698;
extern char g_6176a0;
extern unsigned long long g_6176a8;
extern unsigned long long g_6176b0;
extern char g_6176b8;
extern unsigned int g_6176d8;
extern char g_6176dd;
extern unsigned long long g_6176e0;
extern char g_6176ec;
extern char g_6176ed;
extern char g_6176ee;
extern unsigned long long g_6176f0;

int sub_403f10()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x3b8]
    void tmp_30;  // tmp #30
    void tmp_14;  // tmp #14
    unsigned int v1;  // [bp-0x3a0]
    char v2;  // [bp-0x399]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x390]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x388]
    unsigned long long v5;  // [bp-0x380]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0x378]
    unsigned long long v7;  // [bp-0x370]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v8;  // [bp-0x368]
    unsigned long long v9;  // [bp-0x360]
    unsigned long long v10;  // [bp-0x358]
    unsigned long long v11;  // [bp-0x348]
    unsigned long v12;  // [bp-0x340]
    unsigned long long v13;  // [bp-0x338]
    unsigned long long v14;  // [bp-0x330]
    char v15;  // [bp-0x328]
    unsigned long long v16;  // [bp-0x320]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v17;  // [bp-0x318]
    char v18;  // [bp-0x310]
    unsigned long long v19;  // [bp-0x308]
    unsigned long long v20;  // [bp-0x300]
    unsigned long long v21;  // [bp-0x2f8]
    unsigned long long v22;  // [bp-0x2f0]
    char v23;  // [bp-0x2e8]
    unsigned long long v24;  // [bp-0x2e0]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v25;  // [bp-0x2d8]
    char v26;  // [bp-0x2d0]
    char v27;  // [bp-0x2c8]
    unsigned long v28;  // [bp+0x8]
    struct v29;  // [bp+0x10]
    unsigned int v30;  // [bp+0x18]
    unsigned long v31;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v32;  // r12
    char v33;  // r9b
    char *v34;  // rsi
    char *v35;  // rdi
    unsigned long v36;  // r8
    /*INVALID_EQUAL_UNDEFINED*/
undefined v37;  // rax
    unsigned int *v38;  // rbx
    struct v40;  // r12
    void *v42;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v47;  // rdx
    unsigned long long v48;  // rsi
    unsigned long long v49;  // r8
    unsigned long long v50;  // rax
    unsigned long long v51;  // r9
    unsigned long long v52;  // rcx
    unsigned long long v53;  // rdi
    char v54;  // al
    unsigned long long v57;  // rcx
    unsigned long long v58;  // r8
    unsigned long v61;  // rdx
    unsigned long v63;  // r8
    unsigned int v66[5];  // rdx
    unsigned long long v67;  // rbp
    unsigned int v68;  // eax
    unsigned long long v69;  // rcx
    unsigned long v70;  // rdx
    unsigned long long v71;  // rax
    unsigned long long v72;  // rax
    unsigned long long v73;  // rdx
    unsigned long v74;  // rsi
    unsigned long long v75;  // rdi
    unsigned long long v76;  // rdi
    uint128_t v78;  // rdx
    unsigned long long v79;  // rdi
    unsigned long long v80;  // rcx
    char v81;  // al
    uint128_t v82;  // xmm0
    unsigned long long v83;  // rdx
    uint128_t v84;  // xmm0
    unsigned long long v85;  // xmm0lq
    unsigned long long v86;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v87;  // xmm0
    unsigned long long v88;  // rdi
    unsigned long v89;  // rdx
    unsigned long long v90;  // rdx
    uint128_t v91;  // xmm0
    unsigned long long v92;  // xmm0lq
    uint128_t v93;  // xmm0
    unsigned long long v94;  // xmm0lq
    unsigned long v95;  // rsi
    void v96;  // xmm1
    unsigned long long v97;  // rsi
    uint128_t v98;  // xmm1
    unsigned long long v99;  // xmm1lq
    /*INVALID_EQUAL_UNDEFINED*/
undefined v100;  // xmm1
    unsigned long long v101;  // rsi
    uint128_t v102;  // xmm1
    unsigned long long v103;  // xmm1lq
    uint128_t v104;  // xmm3
    unsigned long long v105;  // xmm3lq
    unsigned long long v107;  // rax
    unsigned long long v108;  // rax
    unsigned long long v109;  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v113;  // rdx
    struct v114;  // rcx
    unsigned long long v115;  // rax
    unsigned long long v116;  // rbx

    v32 = v31;
    v37 = v30;
    v1 = v30;
    if ((g_6176ed == 0 || (char)v28 == 0) && (v33 == 0 || g_6176ec != 0 || g_6176ee != 0))
    {
        v37 = sub_403a10();
        if (v37 != 0)
        {
            v37 = sub_403a60();
            if (v37 == 0)
            {
                v2 = v29 == 0;
                v37 = v2;
                if (v34 != 0 && v2 != 0 && *(v34) == 47)
                {
                    v32 = (v32 == 0? v34 : v32);
                }
                if (v2 == 0 || v34 == 0)
                {
                    if (v31 == 0)
                    {
                        v32 = (v35 == 0? v36 : v34);
                    }
                    if (v29 != 0)
                    {
                        *((uint128_t *)&v4) = v29->field_0;
                        v37 = v29->field_30;
                        *((uint128_t *)&v6) = v29->field_10;
                        *((uint128_t *)&v0) = v29->field_20;
                        *((uint128_t *)&v8) = v29->field_20;
                        v10 = v29->field_30;
                    }
                }
                if (v29 == 0 && v2 == 0 || v29 == 0 && v34 == 0 || *(v34) == 47 && v2 != 0 && v34 != 0)
                {
                    v37 = sub_40b070();
                }
                if ((unsigned int)v37 == 0)
                {
                    if ((v29 == 0 || v2 != 0) && (v29 == 0 || v34 != 0) && (*(v34) == 47 || v2 == 0 || v34 == 0) && (char)v1 != 0)
                    {
                        if (g_6176ee == 0)
                        {
                        }
                        else
                        {
                            v37 = __xstat(0x1, v32, (unsigned int)&v27);
                            if ((unsigned int)v37 == 0)
                            {
                                v37 = *((long long *)&v27);
                                if (g_6176f0 != 0)
                                {
                                    v19 = *((long long *)&v27);
                                    v37 = sub_4061f0();
                                    if (v37 != 0)
                                    {
                                        v40 = v37->field_8;
                                        if (v37->field_8 != 0)
                                        {
                                            v37 = strcmp(v40->field_0, v35);
                                            if ((unsigned int)v37 != 0 && ((v40->field_28 & 2) == 0 || (char)v28 == 0))
                                            {
                                                v37 = -1;
                                                v8 = 0;
                                                v10 = -1;
                                                v9 = -1;
                                                v7 = -1;
                                                v6 = -1;
                                                v5 = -1;
                                                v4 = -1;
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
                    if ((v29 == 0 || v2 != 0) && (v29 == 0 || v34 != 0) && (*(v34) == 47 || v2 == 0 || v34 == 0))
                    {
                        v38 = __errno_location();
                        if ((char)v1 != 0)
                        {
                            v37 = *(v38);
                            if ((*(v38) == 13 || (unsigned int)v37 == 2) && g_6176ee != 0)
                            {
                                v8 = 0;
                                v10 = -1;
                                v9 = -1;
                                v7 = -1;
                                v6 = -1;
                                v5 = -1;
                                v4 = -1;
                            }
                        }
                        if (((char)v1 == 0 || *(v38) != 13) && ((char)v1 == 0 || (unsigned int)v37 != 2))
                        {
                            sub_409c60();
                            v37 = error(0x0, *(v38), "%s");
                            g_6176d8 = 1;
                        }
                    }
                }
                if ((v5 == 0 && (char)v1 == 0 && g_6176ee == 0 && (unsigned int)v37 == 0 && (v29 == 0 || v2 != 0) && (v29 == 0 || v34 != 0) && (*(v34) == 47 || v2 == 0 || v34 == 0) || g_6176ee == 0 && (unsigned int)v37 == 0 && (char)v1 != 0 && (v29 == 0 || v2 != 0) && (v29 == 0 || v34 != 0) && (*(v34) == 47 || v2 == 0 || v34 == 0) && v5 == 0) && g_6176ec != 0 && v29 == 0 || v5 == 0 && (unsigned int)v37 == 0 && ((char)v1 == 0 || g_6176ee != 0) && (v29 == 0 || v2 != 0) && (v29 == 0 || v34 != 0) && (*(v34) == 47 || v2 == 0 || v34 == 0) && g_6176ee != 0 || g_6176ee == 0 && (unsigned int)v37 == 0 && (char)v1 != 0 && (v29 == 0 || v2 != 0) && (v29 == 0 || v34 != 0) && (*(v34) == 47 || v2 == 0 || v34 == 0) && (long long)v4 != 0 || (unsigned int)v37 == 0 && ((char)v1 == 0 || g_6176ee != 0) && (v29 == 0 || v2 != 0) && (v29 == 0 || v34 != 0) && (*(v34) == 47 || v2 == 0 || v34 == 0) && (long long)v4 != 0 || (char)v1 != 0 && (unsigned int)v37 != 0 && (*(v38) == 13 || (unsigned int)v37 == 2) && (v29 == 0 || v2 != 0) && (v29 == 0 || v34 != 0) && (*(v34) == 47 || v2 == 0 || v34 == 0) && g_6176ee != 0)
                {
                    g_6176dd = 1;
                }
                if (unknown)
                {
                    sub_403ad0();
                    v42 = sub_40a790();
                    v0 = v42;
                    if ((char)v1 != 0)
                    {
                        v44 = strlen(v42);
                        if (v44 > 36)
                        {
                            v45 = strspn((unsigned int)(v42 + v44 - 36), 0x410fe8);
                            if (v45 == 36 && v0 != 0)
                            {
                                free(v0);
                                v0 = (unsigned long long)(unsigned int)sub_405250();
                            }
                        }
                    }
                    v47 = v10;
                    v48 = (long long)(&v8)[8];
                    v23 = 0;
                    v20 = 1;
                    v19 = 1;
                    v21 = (long long)(&v8)[8];
                    v24 = v10;
                    v22 = v10;
                    v25 = -1;
                    v26 = 0;
                    if ((long long)(&v8)[8] <= -3 && v47 <= -3)
                    {
                        v25 = v48 - v47;
                        v26 = v48 < v47;
                    }
                    v49 = (long long)(&v6)[8];
                    v50 = g_6176e0;
                    v17 = -1;
                    v51 = (long long)v4;
                    v52 = (long long)(&v4)[8];
                    v18 = 0;
                    v53 = (long long)v6;
                    v12 = g_6176e0;
                    v54 = (long long)(&v6)[8] <= -3 & (char)v8;
                    v11 = (long long)v4;
                    v13 = (long long)(&v4)[8];
                    v14 = (long long)(&v6)[8];
                    v16 = (long long)v6;
                    v15 = (long long)(&v6)[8] <= -3 & (char)v8;
                    if ((long long)v4 <= -3 && v53 <= -3)
                    {
                        v17 = v52 - v53;
                        v18 = v52 < v53;
                    }
                    if (g_6176b8 != 0 && v2 != 0)
                    {
                        if (v48 <= -3)
                        {
                            g_6176a8 = g_6176a8 + v48;
                        }
                        if (v47 <= -3)
                        {
                            g_6176b0 = g_6176b0 + v47;
                        }
                        if (v52 <= -3)
                        {
                            g_617688 = g_617688 + v51 * v52;
                        }
                        if (v53 <= -3)
                        {
                            g_617690 = g_617690 + v51 * v53;
                        }
                        if (v49 <= -3)
                        {
                            v57 = g_6176a0;
                            v58 = v51 * v49;
                            if (g_6176a0 != v54)
                            {
                                v61 = (v57 == 0? g_617698 : 0 - g_617698);
                                tmp_30 = v58;
                                v63 = (v54 != 0? 0 - v58 : v58);
                                if ((v57 == 0? g_617698 : 0 - g_617698) > (v54 != 0? 0 - v58 : tmp_30))
                                {
                                    g_617698 = v61 - v63;
                                }
                                else
                                {
                                    g_6176a0 = v54;
                                    v57 = rax;
                                    g_617698 = v63 - v61;
                                }
                                if (v57 != 0)
                                {
                                    g_617698 = 0 - g_617698;
                                }
                            }
                            else
                            {
                                g_617698 = v58 + g_617698;
                            }
                        }
                    }
                    v116 = 0;
                    v113 = g_617658;
                    if (g_617650 != 0)
                    {
                        while (true)
                        {
                            v66 = *((long long *)(v113 + v116 * 8));
                            v67 = v116 * 8;
                            v68 = v66[2];
                            if (v66[2] != 1)
                            {
                                if (v68 == 0)
                                {
                                    v69 = &v11;
                                }
                                else if (v68 != 2)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                if (v68 == 2)
                                {
                                    v69 = 0;
                                }
                            }
                            else
                            {
                                v69 = &v19;
                            }
                            if (v66[2] == 1 || v68 == 2 || v68 == 0)
                            {
                                if (v66[0] <= 11)
                                {
                                    /* goto *((long long *)((unsigned long long)(unsigned int)*((int *)rdx) * 8 + 4264608)); */
                                    v86 = sub_40a790();
                                    v3 = v86;
                                    v88 = v86;
                                    if (v88 == 0)
                                    {
                                        __assert_fail(); /* do not return */
                                    }
                                    v73 = (char)*((char *)(v69 + 56));
                                    if (*((long long *)(v69 + 48)) <= -3 || v73 != 0)
                                    {
                                        v79 = (unsigned int)sub_403ed0();
                                    }
                                    v73 = (char)*((char *)(v69 + 32));
                                    v71 = sub_40a790();
                                    v88 = v71;
                                    v3 = v71;
                                    v70 = *((long long *)(v69 + 48));
                                    if (*((long long *)(v69 + 48)) <= -3)
                                    {
                                        v74 = *((long long *)(v69 + 24));
                                        if (*((long long *)(v69 + 24)) <= -3)
                                        {
                                            v75 = (char)*((char *)(v69 + 32));
                                            if (*((char *)(v69 + 56)) == 0)
                                            {
                                                if (v87 <= 184467440737095516)
                                                {
                                                    v80 = v87 + v87;
                                                    v81 =  amd64g_calculate_condition(0x2, 0x4, xmm0lq, xmm1lq, cc_ndep);
                                                    if (v75 == v81 && v87 + v87 != 0)
                                                    {
                                                        v89 = (char)((0 | v87 + (v87 << 2) + (v87 + (v87 << 2) << 2) << 2) % v80 >> 64 != 0) + (0 | v87 * 100) % v80;
                                                        if (!(INVALID_IR))
                                                        {
                                                            v87 = v89;
                                                        }
                                                        else
                                                        {
                                                            tmp_14 = v87;
                                                            v93 = 0;
                                                            v94 = tmp_14 >> 1 | 0;
                                                            v87 = xmm0 * 2;
                                                        }
                                                        if (((char)(INVALID_IR) & 1) == 0)
                                                        {
                                                            v108 = sub_40acf0();
                                                            if (v108 != -1)
                                                            {
                                                                v109 = v3;
                                                            }
                                                            else
                                                            {
                                                                v3 = 0;
                                                            }
                                                        }
                                                    }
                                                }
                                                if (v87 + v87 == 0 || v87 > 184467440737095516)
                                                {
                                                    if (!(INVALID_IR))
                                                    {
                                                        v87 = 0;
                                                        v87 = v70;
                                                    }
                                                    else
                                                    {
                                                        tmp_14 = v87;
                                                        v90 = (unsigned int)v87 & 1;
                                                        v91 = 0;
                                                        v92 = tmp_14 >> 1 | v90;
                                                        v87 = xmm0 * 2;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                v78 = 0 - v87;
                                                if (!(INVALID_IR))
                                                {
                                                    v82 = 0;
                                                    v82 = v78;
                                                }
                                                else
                                                {
                                                    tmp_14 = v82;
                                                    v83 = (unsigned int)v82 & 1;
                                                    v84 = 0;
                                                    v85 = tmp_14 >> 1 | v83;
                                                    v82 = xmm0 * 2;
                                                }
                                                v87 = v82 ^ 0x8000000000000000;
                                                if (v75 != 0)
                                                {
                                                    v95 = 0 - v87;
                                                    if (!(INVALID_IR))
                                                    {
                                                        v100 = 0;
                                                        v100 = v95;
                                                    }
                                                    else
                                                    {
                                                        tmp_14 = v100;
                                                        v101 = (unsigned int)v100 & 1;
                                                        v102 = 0;
                                                        v103 = tmp_14 >> 1 | v101;
                                                        v100 = xmm1 * 2;
                                                    }
                                                    v96 = v100 ^ 0x8000000000000000;
                                                }
                                                else if (!(INVALID_IR))
                                                {
                                                    v96 = 0;
                                                    v87 = v74;
                                                }
                                                else
                                                {
                                                    tmp_14 = v87;
                                                    v97 = (unsigned int)v87 & 1;
                                                    v98 = 0;
                                                    v99 = tmp_14 >> 1 | v97;
                                                    v96 = xmm1 * 2;
                                                }
                                                v87 = v96 + v87;
                                                if (((char)((unsigned long long)(unsigned int)(INVALID_IR) >> 2) & 1) != 0)
                                                {
                                                    v104 = 0;
                                                    v105 = 0x3ff0000000000000;
                                                    v87 = v87 * 0x4059000000000000 / v87;
                                                    v87 = 0;
                                                    v87 = v87;
                                                    if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && ((char)(INVALID_IR) & 1) == 0)
                                                    {
                                                        if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1)
                                                        {
                                                            v87 = xmm1 + 0;
                                                            v87 = v87;
                                                        }
                                                        else
                                                        {
                                                            v87 = xmm3 + xmm1;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    if (*((long long *)(v69 + 48)) > -3 || *((long long *)(v69 + 24)) > -3)
                                    {
                                        v107 = strdup("-");
                                        v3 = v107;
                                        v109 = v107;
                                    }
                                    v72 = sub_40a790();
                                    v88 = v72;
                                    v3 = v72;
                                    if (*((long long *)(v69 + 16)) <= -3)
                                    {
                                        v76 = (unsigned int)sub_403ed0();
                                    }
                                    if ((v109 != 0 || v88 != 0) && (*((long long *)(v69 + 48)) > -3 || v88 != 0 || *((long long *)(v69 + 24)) > -3))
                                    {
                                        sub_403b50();
                                        if (*((long long *)(*((long long *)(g_617658 + v67)) + 32)) > sub_408190())
                                        {
                                            v113 = g_617658;
                                            v114 = *((long long *)(g_617658 + v67));
                                            v115 = *((long long *)(*((long long *)(g_617658 + v67)) + 32));
                                        }
                                        else
                                        {
                                            v115 = sub_408190();
                                            v113 = g_617658;
                                            v114 = *((long long *)(g_617658 + v67));
                                        }
                                        v114->field_20 = v115;
                                        v116 += 1;
                                        *((unsigned long long *)(*((long long *)(g_617648 + g_617640 * 8 - 8)) + v67)) = v3;
                                        if (g_617650 <= v116)
                                        {
                                            break;
                                        }
                                    }
                                    if (v87 <= 184467440737095516 && *((long long *)(v69 + 48)) <= -3 && *((char *)(v69 + 56)) == 0 && *((long long *)(v69 + 24)) <= -3 && v75 == v81 && v87 + v87 != 0 && ((char)(INVALID_IR) & 1) == 0 && v108 == -1 || v109 == 0 && (*((long long *)(v69 + 48)) > -3 || *((long long *)(v69 + 24)) > -3))
                                    {
                                        sub_40a7b0(); /* do not return */
                                    }
                                }
                                else
                                {
                                    __assert_fail(); /* do not return */
                                }
                                /* goto *((long long *)((unsigned long long)(unsigned int)*((int *)rdx) * 8 + 4264608)); */
                                v86 = sub_40a790();
                                v3 = v86;
                                v88 = v86;
                                if (v88 == 0)
                                {
                                    __assert_fail(); /* do not return */
                                }
                                v73 = (char)*((char *)(v69 + 56));
                                if (*((long long *)(v69 + 48)) <= -3 || v73 != 0)
                                {
                                    v79 = (unsigned int)sub_403ed0();
                                }
                                v73 = (char)*((char *)(v69 + 32));
                                v71 = sub_40a790();
                                v88 = v71;
                                v3 = v71;
                                v70 = *((long long *)(v69 + 48));
                                if (*((long long *)(v69 + 48)) <= -3)
                                {
                                    v74 = *((long long *)(v69 + 24));
                                    if (*((long long *)(v69 + 24)) <= -3)
                                    {
                                        v75 = (char)*((char *)(v69 + 32));
                                        if (*((char *)(v69 + 56)) == 0)
                                        {
                                            if (v87 <= 184467440737095516)
                                            {
                                                v80 = v87 + v87;
                                                v81 =  amd64g_calculate_condition(0x2, 0x4, xmm0lq, xmm1lq, cc_ndep);
                                                if (v75 == v81 && v87 + v87 != 0)
                                                {
                                                    v89 = (char)((0 | v87 + (v87 << 2) + (v87 + (v87 << 2) << 2) << 2) % v80 >> 64 != 0) + (0 | v87 * 100) % v80;
                                                    if (!(INVALID_IR))
                                                    {
                                                        v87 = v89;
                                                    }
                                                    else
                                                    {
                                                        tmp_14 = v87;
                                                        v93 = 0;
                                                        v94 = tmp_14 >> 1 | 0;
                                                        v87 = xmm0 * 2;
                                                    }
                                                    if (((char)(INVALID_IR) & 1) == 0)
                                                    {
                                                        v108 = sub_40acf0();
                                                        if (v108 != -1)
                                                        {
                                                            v109 = v3;
                                                        }
                                                        else
                                                        {
                                                            v3 = 0;
                                                        }
                                                    }
                                                }
                                            }
                                            if (v87 + v87 == 0 || v87 > 184467440737095516)
                                            {
                                                if (!(INVALID_IR))
                                                {
                                                    v87 = 0;
                                                    v87 = v70;
                                                }
                                                else
                                                {
                                                    tmp_14 = v87;
                                                    v90 = (unsigned int)v87 & 1;
                                                    v91 = 0;
                                                    v92 = tmp_14 >> 1 | v90;
                                                    v87 = xmm0 * 2;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v78 = 0 - v87;
                                            if (!(INVALID_IR))
                                            {
                                                v82 = 0;
                                                v82 = v78;
                                            }
                                            else
                                            {
                                                tmp_14 = v82;
                                                v83 = (unsigned int)v82 & 1;
                                                v84 = 0;
                                                v85 = tmp_14 >> 1 | v83;
                                                v82 = xmm0 * 2;
                                            }
                                            v87 = v82 ^ 0x8000000000000000;
                                            if (v75 != 0)
                                            {
                                                v95 = 0 - v87;
                                                if (!(INVALID_IR))
                                                {
                                                    v100 = 0;
                                                    v100 = v95;
                                                }
                                                else
                                                {
                                                    tmp_14 = v100;
                                                    v101 = (unsigned int)v100 & 1;
                                                    v102 = 0;
                                                    v103 = tmp_14 >> 1 | v101;
                                                    v100 = xmm1 * 2;
                                                }
                                                v96 = v100 ^ 0x8000000000000000;
                                            }
                                            else if (!(INVALID_IR))
                                            {
                                                v96 = 0;
                                                v87 = v74;
                                            }
                                            else
                                            {
                                                tmp_14 = v87;
                                                v97 = (unsigned int)v87 & 1;
                                                v98 = 0;
                                                v99 = tmp_14 >> 1 | v97;
                                                v96 = xmm1 * 2;
                                            }
                                            v87 = v96 + v87;
                                            if (((char)((unsigned long long)(unsigned int)(INVALID_IR) >> 2) & 1) != 0)
                                            {
                                                v104 = 0;
                                                v105 = 0x3ff0000000000000;
                                                v87 = v87 * 0x4059000000000000 / v87;
                                                v87 = 0;
                                                v87 = v87;
                                                if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) != 1 && ((char)(INVALID_IR) & 1) == 0)
                                                {
                                                    if ((((char)(INVALID_IR) | (char)((unsigned long long)(unsigned int)(INVALID_IR) >> 6)) & 1) == 1)
                                                    {
                                                        v87 = xmm1 + 0;
                                                        v87 = v87;
                                                    }
                                                    else
                                                    {
                                                        v87 = xmm3 + xmm1;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                                if (*((long long *)(v69 + 48)) > -3 || *((long long *)(v69 + 24)) > -3)
                                {
                                    v107 = strdup("-");
                                    v3 = v107;
                                    v109 = v107;
                                }
                                v72 = sub_40a790();
                                v88 = v72;
                                v3 = v72;
                                if (*((long long *)(v69 + 16)) <= -3)
                                {
                                    v76 = (unsigned int)sub_403ed0();
                                }
                            }
                        }
                    }
                    v37 = free(v0);
                }
            }
        }
    }
    return v37;
}

int sub_405990()
{
    unsigned long long v1;  // rax

    v1 = sub_405a10();
    if (v1 != 0)
    {
        return v1;
    }
    sub_40a7b0(); /* do not return */
}

// int sub_409f0b()

int sub_406250()
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

int sub_406400()
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_405fe0()
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

int sub_405bd0()
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

// int sub_40a5b0()

int sub_4061f0()
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
        v6 = sub_405c90();
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
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    char field_10;
} struct_0;

extern int512_t g_405c70;
extern int512_t g_405c80;
extern int512_t g_412280;

int sub_406460()
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
            v4 = sub_405de0();
            if (v4 != 0 && v2->field_10 == 0)
            {
                v5 = 0;
                v8 = v2->field_8;
            }
        }
        else
        {
            *((long long **)(v1 + 40)) = &g_412280;
            v3 = sub_405de0();
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
            v13 = (unsigned int)sub_405bd0();
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
                        *((int *)(v1 + 48)) = (v16 == 0? &g_405c70 : v16);
                        *((int *)(v1 + 56)) = (v17 == 0? &g_405c80 : v17);
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

extern uint128_t g_617820;
extern uint128_t g_617830;
extern uint128_t g_617840;
extern unsigned long long g_617850;

int sub_409cd0()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x48]
    void v1;  // [bp-0x38]
    void v2;  // [bp-0x28]
    unsigned long v3;  // [bp-0x20]
    unsigned long v4;  // [bp-0x18]
    unsigned long v6;  // rsi
    unsigned long v7;  // rdx

    *((uint128_t *)&v0) = g_617820;
    *((uint128_t *)&v1) = g_617830;
    *((uint128_t *)&v2) = g_617840;
    v4 = g_617850;
    v0 = 10;
    if (v6 != 0 && v7 != 0)
    {
        v3 = v6;
        v4 = v7;
        return sub_409590();
    }
    if (v6 == 0 || v7 == 0)
    {
        abort(); /* do not return */
    }
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[8];
    char field_28;
} struct_0;

int sub_40c620()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    struct v3;  // rdi
    struct v4;  // rbx

    v0 = v2;
    v4 = v3;
    free(v3->field_0);
    free(v4->field_8);
    free(v4->field_10);
    if ((v4->field_28 & 4) != 0)
    {
        free(v4->field_18);
    }
}

int sub_40d6b0()
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

int sub_4039f0()
{
    unsigned long long *v1;  // rdi
    unsigned long v2;  // rsi

    return (0 | *(v1)) % v2 >> 64;
}

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    char field_28;
    char padding_29[7];
    unsigned long long field_30;
} struct_0;

extern unsigned int g_413ab4;
extern unsigned int g_413abe;

int sub_40c670()
{
    char v0;  // [bp-0x89]
    void tmp_18;  // tmp #18
    char v1;  // [bp-0x79]
    char v2;  // [bp-0x78]
    char v3;  // [bp-0x74]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x6c]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x64]
    char v8;  // [bp-0x60]
    char v9;  // [bp-0x5c]
    char v10;  // [bp-0x58]
    char v11;  // [bp-0x54]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x48]
    unsigned long long v14;  // [bp-0x40]
    char *v17;  // rbp
    /*INVALID_EQUAL_UNDEFINED*/
undefined v18;  // r12
    unsigned long long v19;  // rax
    unsigned int v21;  // eax
    char *v22;  // r15
    unsigned int v23;  // eax
    char *v28;  // rax
    unsigned long long v30;  // rcx
    unsigned long long v31;  // cc_dep1
    unsigned long long v32;  // cc_dep2
    unsigned long v33;  // d
    unsigned long long v35;  // rcx
    unsigned long long v36;  // cc_dep1
    unsigned long long v37;  // cc_dep2
    unsigned long long v39;  // rcx
    unsigned long long v40;  // cc_dep1
    unsigned long long v41;  // cc_dep2
    unsigned long long v43;  // rcx
    unsigned long long v44;  // cc_dep1
    unsigned long long v45;  // cc_dep2
    unsigned long long v47;  // rcx
    unsigned long long v48;  // cc_dep1
    unsigned long long v49;  // cc_dep2
    unsigned long long v51;  // rcx
    unsigned long long v52;  // cc_dep1
    unsigned long long v53;  // cc_dep2
    unsigned long long v55;  // cc_dep1
    unsigned long long v56;  // cc_dep2
    char *v57;  // rsi
    unsigned long long v58;  // rcx
    char v59[2];  // rdi
    unsigned long long v61;  // rcx
    unsigned long long v62;  // cc_dep1
    unsigned long long v63;  // cc_dep2
    unsigned long long v65;  // rcx
    unsigned long long v66;  // cc_dep1
    unsigned long long v67;  // cc_dep2
    unsigned long long v69;  // rcx
    unsigned long long v70;  // cc_dep1
    unsigned long long v71;  // cc_dep2
    unsigned long long v73;  // rcx
    unsigned long long v74;  // cc_dep1
    unsigned long long v75;  // cc_dep2
    unsigned long long v77;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v78;  // r13b
    unsigned long long v79;  // rax
    unsigned int *v80;  // r13
    unsigned long long v81;  // rax
    unsigned int v82;  // edx
    char *v83;  // rdi
    unsigned long long v84;  // rcx
    unsigned long long v85;  // cc_dep1
    unsigned long long v86;  // cc_dep2
    unsigned long long v87;  // cc_dep1
    char *v88;  // rdi
    unsigned long long v89;  // rcx
    unsigned long long v90;  // cc_dep1
    unsigned long long v91;  // cc_dep2
    char *v93;  // rsi
    unsigned long long v94;  // rcx
    char *v95;  // rdi
    unsigned long long v96;  // cc_dep1
    unsigned long long v97;  // cc_dep2
    unsigned int v99;  // edx
    unsigned long long v100;  // rax
    unsigned long long v101;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v102;  // ebp
    unsigned long long v103;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v104;  // r14
    unsigned int *v105;  // r13
    char *v108;  // rax
    char *v109;  // rdi
    unsigned long long v110;  // rcx
    char *v111;  // rsi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v113;  // rdx
    unsigned long long v114;  // cc_dep1
    unsigned long long v115;  // cc_dep2
    unsigned long v116;  // d
    char *v118;  // rdi
    unsigned long long v119;  // rcx
    unsigned long long v120;  // cc_dep1
    unsigned long long v121;  // cc_dep2
    char *v123;  // rdi
    unsigned long long v124;  // rcx
    unsigned long long v125;  // cc_dep1
    unsigned long long v126;  // cc_dep2
    char *v128;  // rdi
    unsigned long long v129;  // rcx
    unsigned long long v130;  // cc_dep1
    unsigned long long v131;  // cc_dep2
    char *v133;  // rdi
    unsigned long long v134;  // rcx
    unsigned long long v135;  // cc_dep1
    unsigned long long v136;  // cc_dep2
    char *v138;  // rdi
    unsigned long long v139;  // rcx
    unsigned long long v140;  // cc_dep1
    unsigned long long v141;  // cc_dep2
    char *v143;  // rdi
    unsigned long long v144;  // rcx
    unsigned long long v145;  // cc_dep1
    unsigned long long v146;  // cc_dep2
    char *v148;  // rdi
    unsigned long long v149;  // rcx
    unsigned long long v150;  // cc_dep1
    unsigned long long v151;  // cc_dep2
    char *v153;  // rdi
    unsigned long long v154;  // rcx
    unsigned long long v155;  // cc_dep1
    unsigned long long v156;  // cc_dep2
    char *v158;  // rdi
    unsigned long long v159;  // rcx
    unsigned long long v160;  // cc_dep1
    unsigned long long v161;  // cc_dep2
    char *v163;  // rdi
    unsigned long long v164;  // rcx
    unsigned long long v165;  // cc_dep1
    unsigned long long v166;  // cc_dep2
    unsigned long long v168;  // rax
    unsigned long long v169;  // rax
    char v170;  // al
    char *v171;  // r15
    char v172[2];  // rdi
    /*INVALID_EQUAL_UNDEFINED*/
undefined v174;  // edx
    char *v175;  // rdi
    unsigned long long v176;  // rcx
    unsigned long long v177;  // cc_dep1
    unsigned long long v178;  // cc_dep2
    unsigned long long v179;  // cc_dep1
    char *v180;  // rdi
    unsigned long long v181;  // rcx
    unsigned long long v182;  // cc_dep1
    unsigned long long v183;  // cc_dep2
    char *v185;  // rsi
    unsigned long long v186;  // rcx
    char *v187;  // rdi
    unsigned long long v188;  // cc_dep1
    unsigned long long v189;  // cc_dep2
    unsigned int v191;  // edx
    unsigned long long v192;  // rax
    struct v193;  // rdi
    unsigned long long v194;  // rbx

    if (rbp != 0)
    {
        v13 = 0;
        rbp = fopen("/proc/self/mountinfo", "r");
        v18 = &v12;
        v14 = 0;
        while (true)
        {
            if (__getdelim(&v13, &v14, 0xa, v17) != -1)
            {
                v21 = sscanf(v13, "%*u %*u %u:%u %n%*s%n %n%*s%n%c", (unsigned int)&v2, (unsigned int)&v3, (unsigned int)&v10, (unsigned int)&v11, (unsigned int)&v4, (unsigned int)&v5, (unsigned int)&v1) & -5;
                v22 = (unsigned long long)(unsigned int)sub_40d2b0();
                v23 = sscanf(v22, " - %n%*s%n %n%*s%n %c", (unsigned int)&v6, (unsigned int)&v7, (unsigned int)&v8, (unsigned int)&v9, (unsigned int)&v1) & -5;
                v78 = 1;
                *((char *)(v13 + *((int *)&v11))) = 0;
                *((char *)(v13 + *((int *)&v5))) = 0;
                v22[(long long)*((int *)&v7)] = 0;
                v22[(long long)*((int *)&v9)] = 0;
                sub_40c590();
                sub_40c590();
                sub_40c590();
                *((unsigned long long *)v12) = (unsigned int)sub_40a790();
                *((unsigned long long *)(v12 + 8)) = (unsigned int)sub_40a790();
                *((unsigned long long *)(v12 + 16)) = (unsigned int)sub_40a790();
                v28 = sub_40a790();
                v59 = "autofs";
                *((char **)(v12 + 24)) = v28;
                *((char *)(v12 + 40)) = *((char *)(v12 + 40)) | 4;
                v30 = 7;
                v57 = v28;
                while (v30 != 0)
                {
                    v30 -= 1;
                    v31 = *(v57);
                    v32 = v59[0];
                    v59 = &v59[v33];
                    v57 = &v57[v33];
                    break;
                }
                *((unsigned long long *)(v12 + 32)) = (unsigned long long)(unsigned int)*((int *)&v3) * 0x1000 & 0xffffff00000 | (unsigned long long)(unsigned int)*((int *)&v2) * 0x100000000 & -0x100000000000 | (unsigned int)((unsigned long long)(unsigned int)*((int *)&v2) * 0x100) & 0xfff00 | (unsigned int)*((int *)&v3);
                if ((v31 > v32) - 0 - (v31 < v32) != 0)
                {
                    v59 = "proc";
                    v35 = 5;
                    v57 = v28;
                    while (v35 != 0)
                    {
                        v35 -= 1;
                        v36 = *(v57);
                        v37 = v59[0];
                        v59 = &v59[v33];
                        v57 = &v57[v33];
                        break;
                    }
                    if ((v36 > v37) - 0 - (v36 < v37) != 0)
                    {
                        v59 = "subfs";
                        v39 = 6;
                        while (v39 != 0)
                        {
                            v39 -= 1;
                            v40 = *(v57);
                            v41 = v59[0];
                            v59 = &v59[v33];
                            v57 = &v57[v33];
                            break;
                        }
                        if ((v40 > v41) - 0 - (v40 < v41) != 0)
                        {
                            v59 = "debugfs";
                            v43 = 8;
                            while (v43 != 0)
                            {
                                v43 -= 1;
                                v44 = *(v57);
                                v45 = v59[0];
                                v59 = &v59[v33];
                                v57 = &v57[v33];
                                break;
                            }
                            if ((v44 > v45) - 0 - (v44 < v45) != 0)
                            {
                                v59 = "devpts";
                                v47 = 7;
                                while (v47 != 0)
                                {
                                    v47 -= 1;
                                    v48 = *(v57);
                                    v49 = v59[0];
                                    v59 = &v59[v33];
                                    v57 = &v57[v33];
                                    break;
                                }
                                if ((v48 > v49) - 0 - (v48 < v49) != 0)
                                {
                                    v59 = "fusectl";
                                    v51 = 8;
                                    while (v51 != 0)
                                    {
                                        v51 -= 1;
                                        v52 = *(v57);
                                        v53 = v59[0];
                                        v59 = &v59[v33];
                                        v57 = &v57[v33];
                                        break;
                                    }
                                    if ((v52 > v53) - 0 - (v52 < v53) != 0)
                                    {
                                        v59 = "mqueue";
                                        v58 = 7;
                                        while (v58 != 0)
                                        {
                                            v58 -= 1;
                                            v55 = *(v57);
                                            v56 = v59[0];
                                            v59 = &v59[v33];
                                            v57 = &v57[v33];
                                            break;
                                        }
                                        if ((v55 > v56) - 0 - (v55 < v56) != 0)
                                        {
                                            v59 = "rpc_pipefs";
                                            v61 = 11;
                                            while (v61 != 0)
                                            {
                                                v61 -= 1;
                                                v62 = *(v57);
                                                v63 = v59[0];
                                                v59 = &v59[v33];
                                                v57 = &v57[v33];
                                                break;
                                            }
                                            if ((v62 > v63) - 0 - (v62 < v63) != 0)
                                            {
                                                v59 = "sysfs";
                                                v65 = 6;
                                                while (v65 != 0)
                                                {
                                                    v65 -= 1;
                                                    v66 = *(v57);
                                                    v67 = v59[0];
                                                    v59 = &v59[v33];
                                                    v57 = &v57[v33];
                                                    break;
                                                }
                                                if ((v66 > v67) - 0 - (v66 < v67) != 0)
                                                {
                                                    v59 = "devfs";
                                                    v69 = 6;
                                                    while (v69 != 0)
                                                    {
                                                        v69 -= 1;
                                                        v70 = *(v57);
                                                        v71 = v59[0];
                                                        v59 = &v59[v33];
                                                        v57 = &v57[v33];
                                                        break;
                                                    }
                                                    if ((v70 > v71) - 0 - (v70 < v71) != 0)
                                                    {
                                                        v59 = "kernfs";
                                                        v73 = 7;
                                                        while (v73 != 0)
                                                        {
                                                            v73 -= 1;
                                                            v74 = *(v57);
                                                            v75 = v59[0];
                                                            v59 = &v59[v33];
                                                            v57 = &v57[v33];
                                                            break;
                                                        }
                                                        if ((v74 > v75) - 0 - (v74 < v75) != 0)
                                                        {
                                                            v77 = strcmp(v57, "ignore");
                                                            if (v77 != 0)
                                                            {
                                                                v78 = strcmp(v57, "none") == 0;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                v79 = (char)(*((char *)(v12 + 40)) & 4294967038) | v78;
                v80 = *((long long *)v12);
                *((unsigned long long *)(v12 + 40)) = v79;
                v81 = strchr(v59, 0x3a);
                v82 = 1;
                if (v81 == 0)
                {
                    if (v59[0] == 47 && v59[1] == 47)
                    {
                        v83 = "smbfs";
                        v84 = 6;
                        while (v84 != 0)
                        {
                            v84 -= 1;
                            v85 = *(v57);
                            v86 = *(v83);
                            v83 = &v83[v33];
                            v57 = &v57[v33];
                            break;
                        }
                        v87 = (v85 > v86) - 0 - (v85 < v86);
                        if ((char)v87 != 0)
                        {
                            v88 = "cifs";
                            v89 = 5;
                            while (v89 != 0)
                            {
                                v89 -= 1;
                                v90 = *(v57);
                                v91 = *(v88);
                                v88 = &v88[v33];
                                v57 = &v57[v33];
                                break;
                            }
                        }
                    }
                    if (v59[0] != 47 || v59[1] != 47 || (char)v87 != 0 && (v90 > v91) - 0 - (v90 < v91) != 0)
                    {
                        v93 = "-hosts";
                        v94 = 7;
                        v59 = *((long long *)v12);
                        while (v94 != 0)
                        {
                            v94 -= 1;
                            v96 = *(v93);
                            v97 = *(v95);
                            v95 = &v95[v33];
                            v93 = &v93[v33];
                            break;
                        }
                        v82 = (char)(((unsigned long long)((v96 > v97) - 0 - (v96 < v97)) & 255) == 0);
                    }
                }
                v99 = v82 * 2;
                *((char *)(v12 + 40)) = (char)(*((char *)(v12 + 40)) & 4294967037) | v99;
                v12 = (unsigned int)sub_40a560();
                v18 = v12 + 48;
            }
            else
            {
                free(v13);
                if ((*(v17) & 32) == 0)
                {
                    v103 = sub_40e240();
                    break;
                }
                else
                {
                    v104 = *(v80);
                    v80 = __errno_location();
                    sub_40e240();
                    *(v105) = v104;
                }
            }
        }
        if ((*(v17) & 32) == 0)
        {
            v104 = *(v80);
            v80 = __errno_location();
        }
        else if ((*(v17) & 32) != 0)
        {
            *(v18) = 0;
            v193 = v12;
        }
        else if ((*(v17) & 32) == 0)
        {
            *(v18) = 0;
            v100 = v12;
        }
    }
    else
    {
        v19 = setmntent(0x413ab4, 0x412205);
        v80 = (unsigned int)v19;
        if (v19 != 0)
        {
            v18 = &v12;
            v101 = getmntent(v80);
            v102 = v101;
            if (v101 != 0)
            {
                while (true)
                {
                    hasmntopt(v102, 0x413abe);
                    *((unsigned long long *)v12) = (unsigned int)sub_40a790();
                    *((long long *)(v12 + 16)) = 0;
                    *((unsigned long long *)(v12 + 8)) = (unsigned int)sub_40a790();
                    v108 = sub_40a790();
                    v109 = "autofs";
                    v110 = 7;
                    *((char *)(v12 + 40)) = *((char *)(v12 + 40)) | 4;
                    v111 = v108;
                    *((char **)(v12 + 24)) = v108;
                    v113 = 1;
                    while (v110 != 0)
                    {
                        v110 -= 1;
                        v114 = *(v111);
                        v115 = *(v109);
                        v109 = &v109[v116];
                        v111 = &v111[v116];
                        break;
                    }
                    if ((v114 > v115) - 0 - (v114 < v115) != 0)
                    {
                        v118 = "proc";
                        v119 = 5;
                        v111 = v108;
                        while (v119 != 0)
                        {
                            v119 -= 1;
                            v120 = *(v111);
                            v121 = *(v118);
                            v118 = &v118[v116];
                            v111 = &v111[v116];
                            break;
                        }
                        if ((v120 > v121) - 0 - (v120 < v121) != 0)
                        {
                            v123 = "subfs";
                            v124 = 6;
                            while (v124 != 0)
                            {
                                v124 -= 1;
                                v125 = *(v111);
                                v126 = *(v123);
                                v123 = &v123[v116];
                                v111 = &v111[v116];
                                break;
                            }
                            if ((v125 > v126) - 0 - (v125 < v126) != 0)
                            {
                                v128 = "debugfs";
                                v129 = 8;
                                while (v129 != 0)
                                {
                                    v129 -= 1;
                                    v130 = *(v111);
                                    v131 = *(v128);
                                    v128 = &v128[v116];
                                    v111 = &v111[v116];
                                    break;
                                }
                                if ((v130 > v131) - 0 - (v130 < v131) != 0)
                                {
                                    v133 = "devpts";
                                    v134 = 7;
                                    while (v134 != 0)
                                    {
                                        v134 -= 1;
                                        v135 = *(v111);
                                        v136 = *(v133);
                                        v133 = &v133[v116];
                                        v111 = &v111[v116];
                                        break;
                                    }
                                    if ((v135 > v136) - 0 - (v135 < v136) != 0)
                                    {
                                        v138 = "fusectl";
                                        v139 = 8;
                                        while (v139 != 0)
                                        {
                                            v139 -= 1;
                                            v140 = *(v111);
                                            v141 = *(v138);
                                            v138 = &v138[v116];
                                            v111 = &v111[v116];
                                            break;
                                        }
                                        if ((v140 > v141) - 0 - (v140 < v141) != 0)
                                        {
                                            v143 = "mqueue";
                                            v144 = 7;
                                            while (v144 != 0)
                                            {
                                                v144 -= 1;
                                                v145 = *(v111);
                                                v146 = *(v143);
                                                v143 = &v143[v116];
                                                v111 = &v111[v116];
                                                break;
                                            }
                                            if ((v145 > v146) - 0 - (v145 < v146) != 0)
                                            {
                                                v148 = "rpc_pipefs";
                                                v149 = 11;
                                                while (v149 != 0)
                                                {
                                                    v149 -= 1;
                                                    v150 = *(v111);
                                                    v151 = *(v148);
                                                    v148 = &v148[v116];
                                                    v111 = &v111[v116];
                                                    break;
                                                }
                                                if ((v150 > v151) - 0 - (v150 < v151) != 0)
                                                {
                                                    v153 = "sysfs";
                                                    v154 = 6;
                                                    while (v154 != 0)
                                                    {
                                                        v154 -= 1;
                                                        v155 = *(v111);
                                                        v156 = *(v153);
                                                        v153 = &v153[v116];
                                                        v111 = &v111[v116];
                                                        break;
                                                    }
                                                    if ((v155 > v156) - 0 - (v155 < v156) != 0)
                                                    {
                                                        v158 = "devfs";
                                                        v159 = 6;
                                                        while (v159 != 0)
                                                        {
                                                            v159 -= 1;
                                                            v160 = *(v111);
                                                            v161 = *(v158);
                                                            v158 = &v158[v116];
                                                            v111 = &v111[v116];
                                                            break;
                                                        }
                                                        if ((v160 > v161) - 0 - (v160 < v161) != 0)
                                                        {
                                                            v163 = "kernfs";
                                                            v164 = 7;
                                                            while (v164 != 0)
                                                            {
                                                                v164 -= 1;
                                                                v165 = *(v111);
                                                                v166 = *(v163);
                                                                v163 = &v163[v116];
                                                                v111 = &v111[v116];
                                                                break;
                                                            }
                                                            if ((v165 > v166) - 0 - (v165 < v166) != 0)
                                                            {
                                                                v0 = 1;
                                                                v168 = strcmp(v111, "ignore");
                                                                v113 = v0;
                                                                if (v168 != 0)
                                                                {
                                                                    v169 = strcmp(v111, "none");
                                                                    v170 = v169 == 0;
                                                                    v113 = 1 & rax;
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                    v171 = *((long long *)v12);
                    v172 = *((long long *)v12);
                    *((char *)(v12 + 40)) = (char)(*((char *)(v12 + 40)) & 4294967038) | v113;
                    v174 = 1;
                    if (strchr(v172, 0x3a) == 0)
                    {
                        if (v172[0] == 47 && v172[1] == 47)
                        {
                            v175 = "smbfs";
                            v176 = 6;
                            while (v176 != 0)
                            {
                                v176 -= 1;
                                v177 = *(v111);
                                v178 = *(v175);
                                v175 = &v175[v116];
                                v111 = &v111[v116];
                                break;
                            }
                            v179 = (v177 > v178) - 0 - (v177 < v178);
                            if ((char)v179 != 0)
                            {
                                v180 = "cifs";
                                v181 = 5;
                                while (v181 != 0)
                                {
                                    v181 -= 1;
                                    v182 = *(v111);
                                    v183 = *(v180);
                                    v180 = &v180[v116];
                                    v111 = &v111[v116];
                                    break;
                                }
                            }
                        }
                        if (v172[0] != 47 || v172[1] != 47 || (char)v179 != 0 && (v182 > v183) - 0 - (v182 < v183) != 0)
                        {
                            v185 = "-hosts";
                            v186 = 7;
                            v172 = v171;
                            while (v186 != 0)
                            {
                                v186 -= 1;
                                v188 = *(v185);
                                v189 = *(v187);
                                v187 = &v187[v116];
                                v185 = &v185[v116];
                                break;
                            }
                            v174 = ((unsigned long long)((v188 > v189) - 0 - (v188 < v189)) & 255) == 0;
                        }
                    }
                    tmp_18 = (char)*((char *)(v12 + 40));
                    v191 = v174 * 2;
                    *((long long *)(v12 + 32)) = -1;
                    *((char *)(v12 + 40)) = (unsigned int)tmp_18 & -3 | v191;
                    v12 = (unsigned int)sub_40a560();
                    v18 = v12 + 48;
                    v102 = getmntent(v80);
                    if (v102 == 0)
                    {
                        break;
                    }
                }
            }
            v192 = endmntent(v80);
        }
        else
        {
            v100 = 0;
        }
    }
    if (rbp != 0 || v19 != 0 && v192 != 0)
    {
        *(v18) = 0;
        v100 = v12;
    }
    if (rbp != 0 || v192 == 0 && v19 != 0)
    {
        v104 = *(v80);
        v80 = __errno_location();
        *(v18) = 0;
        v193 = v12;
        if (v12 != 0)
        {
            while (true)
            {
                v194 = v193->field_30;
                sub_40c620();
                v12 = v194;
                v193 = v194;
                if (v194 == 0)
                {
                    break;
                }
            }
        }
        *((unsigned long *)&v105) = v104;
        return 0;
    }
    if (v192 != 0)
    {
        return v100;
    }
}

int sub_40a7f0()
{
    unsigned long v2;  // rax
    unsigned int *v3;  // rax
    unsigned long long v5;  // rax

    if (v2 == 0)
    {
        v3 = __errno_location();
        if (*(v3) == 12)
        {
            sub_40a7b0(); /* do not return */
        }
    }
    if (*(v3) != 12 || v2 != 0)
    {
        v2 = (unsigned int)sub_40b160();
        return v5;
    }
}

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

int sub_405fb0()
{
    struct v1;  // rdi

    return v1->field_10;
}

extern unsigned int g_413112;
extern unsigned int g_41313d;
extern unsigned int g_413370;

int sub_40a4e0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x413112, 0x5));
    __printf_chk(0x1, (unsigned long long)dcgettext(0x0, 0x41313d, 0x5));
    dcgettext(0x0, 0x413370, 0x5);
}

int sub_40e2c0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi

    v0 = v2;
    if (v3 != 0 && __freading() != 0 && ((unsigned short)*(v3) & 0x100) != 0)
    {
        sub_40e300();
    }
}

int sub_40a760()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_40a560();
}

// int sub_409da0()

int sub_408360()
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
            v26 = (unsigned int)sub_408260();
            v27 = (unsigned int)sub_408260();
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
                            v77 = 0;
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
                        case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                            v5 = 0;
                        case 35: case 126:
                            v42 = 0;
                            v48 = v5;
                            v77 = 0;
                            v5 = v42;
                        case 37: case 43: case 44: case 45: case 46: case 47: case 48: case 49: case 50: case 51: case 52: case 53: case 54: case 55: case 56: case 57: case 58: case 65: case 66: case 67: case 68: case 69: case 70: case 71: case 72: case 73: case 74: case 75: case 76: case 77: case 78: case 79: case 80: case 81: case 82: case 83: case 84: case 85: case 86: case 87: case 88: case 89: case 90: case 93: case 95: case 97: case 98: case 99: case 100: case 101: case 102: case 103: case 104: case 105: case 106: case 107: case 108: case 109: case 110: case 111: case 112: case 113: case 114: case 115: case 116: case 117: case 118: case 119: case 120: case 121: case 122:
                            v41 = 0;
                            v50 = v5;
                            v5 = v41;
                            v78 = 0;
                            if (v25 != 0)
                            {
                                v72 = (unsigned int)((unsigned long long)v25[v40 % 32] >> ((char)v40 & 31)) & 1;
                                v77 = (unsigned int)v39 == 2;
                            }
                            else
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
                        if ((v17 & (unsigned int)v39 == 2) == 0)
                        {
                            v40 = v45;
                            v78 = 0;
                            v55 = 0;
                            break;
                            v78 = ((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1;
                            v78 = (char)(((unsigned int)v4 ^ 1 | (unsigned int)v77) ^ 1) | v17;
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
                        v77 = (unsigned int)v39 == 2;
                    case 33: case 34: case 36: case 38: case 40: case 41: case 42: case 59: case 60: case 61: case 62: case 91: case 94: case 96: case 124:
                        v77 = (unsigned int)v39 == 2;
                        v35 = 0;
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
                            v76 = (unsigned int)sub_408360();
                        }
                    }
                }
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0)
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
                    v46 = sub_40c400();
                    v58 = v46;
                    if (v46 != -1 && v46 != -2 && v46 != 0)
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
                        v39 = v10;
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
            }
            if (v77 != 0)
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
            if ((v25 == 0 || v76 == 0) && (v25 == 0 || v78 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
            {
                v3 = v27;
                v2 = v26;
                v1 = 0;
                v76 = (unsigned int)sub_408360();
            }
            if ((v25 == 0 || v46 == 0) && (v25 == 0 || v77 != 0) && (v46 == 0 || v17 == 0 || v5 == 0) && (v17 == 0 || v5 == 0 || v77 != 0))
            {
                if (v76 < v79)
                {
                    *((unsigned long long *)(v29 + v76)) = v40;
                }
                v76 += 1;
                v6 = (v78 == 0? 0 : (unsigned int)(char)(char)(stack_base)[-169]);
            }
            if (v6 == 0 && v78 == 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && (v79 == 0 & v14 != 0) == 0 || (char)v85 == 0 && v78 == 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || v78 == 0 && (char)v85 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) && v18 == 0 || v78 == 0 && v6 != 0 && (char)v85 != 0 && v18 != 0 && ((v81 == 2 & v17) == 0 || v76 != 0) || (v25 == 0 || v76 == 0) && (v25 == 0 || v78 == 0) && (v25 == 0 || (v81 == 2 & v17) != 0) && (v76 == 0 || v17 != 0) && (v76 == 0 || v5 != 0) && (v78 == 0 || v17 != 0) && (v78 == 0 || v5 != 0) && (v17 != 0 || (v81 == 2 & v17) != 0) && ((v81 == 2 & v17) != 0 || v5 != 0))
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

typedef struct struct_0 {
    char padding_0[4268768];
    unsigned int field_4122e0;
} struct_0;

extern int512_t g_4122e0;

int sub_407980()
{
    unsigned long v0;  // [bp-0x30]
    unsigned int *v2;  // rsi
    unsigned long long *v4;  // rdx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rax
    char *v8;  // rbx
    unsigned long long v9;  // rbp
    struct v10;  // rax
    unsigned int v11;  // ebp
    unsigned long long v12;  // rdx
    unsigned long long v13;  // rsi

    v8 = v6;
    if (v6 == 0)
    {
        v8 = getenv("BLOCK_SIZE");
        if (v8 == 0)
        {
            v8 = getenv("BLOCKSIZE");
            if (v8 == 0)
            {
                v7 = getenv("POSIXLY_CORRECT");
                if (v7 != 0)
                {
                    *(v4) = 0x200;
                    v7 = 0;
                    *(v2) = 0;
                }
                else
                {
                    *(v4) = 0x400;
                    *(v2) = 0;
                }
            }
        }
    }
    if (v6 != 0 || v8 != 0 || v8 != 0)
    {
        v9 = 0;
        if (*(v8) == 39)
        {
            v8 = &v8[1];
            v9 = 4;
        }
        v10 = sub_40d7b0();
        if ((unsigned int)v10 >= 0)
        {
            *(v4) = 1;
            v11 = (unsigned int)v9 | *((int *)(0x4 * v10 + (char *)&g_4122e0));
            v7 = 0;
            *(v2) = v11;
        }
        else
        {
            v7 = sub_40a8b0();
            if ((unsigned int)v7 == 0)
            {
                if (((unsigned long long)*(v8) - 48 & 255) > 9)
                {
                    if (v8 != v0)
                    {
                        do
                        {
                            v8 = &v8[1];
                            v13 = *(v8);
                        }
                        while (v8 != v0 && (v13 - 48 & 255) > 9);
                        if ((v13 - 48 & 255) > 9)
                        {
                        }
                        else
                        {
                            v12 = *(v4);
                            *((unsigned long long *)&v2) = v9;
                        }
                    }
                    if (v8 == v0 || *((char *)(v0 - 1)) != 66)
                    {
                        if (*((char *)(v0 - 1)) != 66)
                        {
                            v9 |= 128;
                        }
                        else
                        {
                            v9 = (unsigned int)v9 | 384;
                        }
                        if (*((char *)(v0 - 2)) == 105 || *((char *)(v0 - 1)) != 66)
                        {
                            v9 = (unsigned int)v9 | 32;
                        }
                    }
                }
                v12 = *(v4);
                *((unsigned long long *)&v2) = v9;
            }
            else
            {
                *(v2) = 0;
                v12 = *(v4);
            }
            if (v12 == 0)
            {
                *(v4) = (unsigned long long)((unsigned int)(0 - (unsigned long long)(char)(getenv("POSIXLY_CORRECT") < 1)) & 0x200) + 0x200;
                return 4;
            }
        }
    }
    if ((unsigned int)v10 >= 0 || v12 != 0 || v6 == 0 && v8 == 0 && v8 == 0)
    {
        return v7;
    }
}

int sub_405a70()
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

// int sub_409c50()

extern unsigned long long g_616e30;

int sub_410f88()
{
    unsigned long long *v1;  // rbx
    unsigned long long v2;  // rax
    unsigned long v4;  // rdx

    v1 = &g_616e30;
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

// int sub_409d90()

extern unsigned int g_413b20;
extern unsigned int g_413b35;
extern unsigned int g_413b3d;
extern unsigned long long stderr[7];

int sub_40d950()
{
    unsigned long long v1;  // r14
    void *v2;  // rsi
    unsigned long long v4[2];  // rdi
    unsigned int v5;  // rdx
    unsigned long long v6;  // rax
    void *v7;  // rbp
    unsigned long long v8;  // rbx
    unsigned int v9;  // r8d
    unsigned int v10;  // r9d
    char *v11;  // rax

    v1 = 0;
    v7 = v2;
    v8 = 0;
    fputs_unlocked((unsigned long long)dcgettext(0x0, 0x413b20, 0x5), stderr);
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
                    __fprintf_chk((unsigned int)stderr, 0x1, 0x413b3d, sub_409de0(), v9, v10);
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
                __fprintf_chk((unsigned int)stderr, 0x1, 0x413b35, sub_409de0(), v9, v10);
                if (v4[v8] == 0)
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

extern int512_t g_617820;

int sub_409820()
{
    unsigned long v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x60]
    unsigned long v2;  // [bp-0x58]
    unsigned long v3;  // [bp-0x40]
    unsigned int v5;  // [bp+0x100008]
    unsigned long v6;  // r8
    unsigned long long v7[7];  // rbx
    unsigned long v8;  // rcx

    v7 = (v6 == 0? &g_617820 : v6);
    v3 = v8;
    *((unsigned long long [7])&v2) = v7[6];
    *((unsigned long long [7])&v1) = v7[5];
    v0 = &v7[1];
    *(__errno_location()) = v5;
    return sub_408360();
}

int sub_40a420()
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
        return sub_409fc0();
    }
}

int sub_40a710()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx

    v0 = v2;
    sub_40a560();
}

extern unsigned long long *g_6175b8;
extern unsigned long long g_6175c0;
extern unsigned long long g_6175c8;
extern unsigned int g_6175d0;
extern unsigned long long g_617720;

int sub_4099a0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rbx
    void *v3;  // rdi

    v1 = g_6175d0;
    if (g_6175d0 > 1)
    {
        v2 = &g_6175b8[3];
        while (true)
        {
            v3 = *(v2);
            v2 = &v2[2];
            v1 = free(v3);
            if (v2 == &g_6175b8[2 * (unsigned long long)(g_6175d0 - 2) + 5])
            {
                break;
            }
        }
    }
    if (g_6175b8[1] != 6387488)
    {
        v1 = free(g_6175b8[1]);
        g_6175c0 = 0x100;
        g_6175c8 = &g_617720;
    }
    if (g_6175b8 != 6387136)
    {
        v1 = free(g_6175b8);
        g_6175b8 = &g_6175c0;
    }
    g_6175d0 = 1;
    return v1;
}

int sub_40a560()
{
    unsigned int v1;  // rdi
    unsigned long long v2;  // rax

    v2 = malloc(v1);
    if (v2 == 0 && v1 != 0)
    {
        sub_40a7b0(); /* do not return */
    }
    if (v1 == 0 || v2 != 0)
    {
        return v2;
    }
}

extern unsigned int g_4121fb;
extern unsigned int g_617568;
extern char g_6176f8;
extern unsigned long long g_617700;

int sub_4058f0()
{
    unsigned long long v1;  // rax
    unsigned int *v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rbp

    v1 = sub_40db30();
    if (v1 != 0)
    {
        v2 = __errno_location();
        if (g_6176f8 == 0 || *(v2) != 32)
        {
            v4 = dcgettext(0x0, 0x4121fb, 0x5);
            if (g_617700 != 0)
            {
                sub_409c30();
                error(0x0, *(v2), "%s: %s");
            }
        }
    }
    if (v1 == 0 || *(v2) == 32 && g_6176f8 != 0)
    {
        v3 = sub_40db30();
    }
    if ((unsigned int)v3 == 0 && (*(v2) == 32 || v1 == 0) && (v1 == 0 || g_6176f8 != 0))
    {
        return v3;
    }
    while (true)
    {
        _exit(g_617568);
        error(0x0, *(v2), "%s");
    }
}

extern unsigned long long g_617640;
extern unsigned long long g_617648;

int sub_403ad0()
{
    void tmp_25;  // tmp #25
    unsigned long long v2;  // rax

    tmp_25 = g_617640 + 1;
    g_617640 = g_617640 + 1;
    if (!(INVALID_IR) &&  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=0x617650, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=0x617650, size=8, endness=Iend_LE), 0x3c), cc_ndep) == 0)
    {
        g_617648 = (unsigned int)sub_40a5c0();
        v2 = sub_40a560();
        *((unsigned long long *)(g_617648 + g_617640 * 8 - 8)) = v2;
        return v2;
    }
    if (INVALID_IR ||  amd64g_calculate_condition(0x5, 0x24, Shr(Load(addr=0x617650, size=8, endness=Iend_LE), 0x3d), Shr(Load(addr=0x617650, size=8, endness=Iend_LE), 0x3c), cc_ndep) != 0)
    {
        sub_40a7b0(); /* do not return */
    }
}

// int sub_409d40()

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[11];
    char field_13;
    char field_14;
} struct_0;

extern unsigned int g_41218c;
extern unsigned int g_41236e;

int sub_40b160()
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
    unsigned long long v18;  // r15
    unsigned long long v19;  // r14
    unsigned long long v20;  // rax
    unsigned long long v21;  // r15
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    unsigned long long v24;  // rbp
    unsigned long long v25;  // r13
    struct v26;  // rax
    unsigned long long v27;  // rdx
    void *v28;  // rbx
    unsigned long long v29;  // rax
    unsigned long long v30;  // r13
    unsigned long v31;  // r14
    unsigned int v32;  // rax
    unsigned long long v34;  // r8
    unsigned long v39;  // rbx
    unsigned long v40;  // rdx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v42;  // rbx
    unsigned int *v43;  // r12

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
    if (v15 == 0 && v14 == 0 || v3 == 0 && v15 != 0)
    {
        v2 = malloc(v4);
    }
    if (v14 == 0 && v2 != 0 || v15 != 0 && v3 != 0 || v15 != 0 && v2 != 0)
    {
        v16 = v2 + v4;
        *((char *)(v2 + v4 - 1)) = 0;
        v17 = __lxstat(0x1, 0x41218c, (unsigned int)&v10);
        if (v17 >= 0)
        {
            v18 = *((long long *)&v10);
            v19 = v11;
            v0 = *((long long *)&v10);
            v20 = __lxstat(0x1, 0x41236e, (unsigned int)&v10);
            if (v20 >= 0)
            {
                v6 = v16 - 1;
                v8 = v11;
                v7 = *((long long *)&v10);
                v5 = *((long long *)&v10) != *((long long *)&v10) | v11 != v11;
                if (v19 != v11 || v18 != *((long long *)&v10))
                {
                    v24 = 0;
                    v21 = -18446744069414584420;
                    v43 = __errno_location();
                    while (true)
                    {
                        v21 = openat(v21);
                        if (v21 >= 0)
                        {
                            v22 = __fxstat(0x1, v21, (unsigned int)&v10);
                            if (v22 == 0)
                            {
                                if (v24 != 0)
                                {
                                    v23 = closedir();
                                }
                                if (v24 == 0 || v23 == 0)
                                {
                                    v1 = *((long long *)&v10);
                                    v9 = v11;
                                    v24 = fdopendir(v21);
                                    if (v24 != 0)
                                    {
                                        v25 = v5;
                                        while (true)
                                        {
                                            *(v43) = 0;
                                            v26 = readdir();
                                            if (v26 == 0)
                                            {
                                                v42 = *(v43);
                                                if (*(v43) == 0 && v25 != 0)
                                                {
                                                    rewinddir(v24);
                                                    v26 = readdir();
                                                    if (v26 != 0)
                                                    {
                                                        v25 = 0;
                                                    }
                                                    else
                                                    {
                                                        v42 = *(v43);
                                                    }
                                                }
                                                if (v26 == 0 || v25 == 0 || *(v43) != 0)
                                                {
                                                    if ((unsigned int)v42 != 0)
                                                    {
                                                        break;
                                                    }
                                                    *(v43) = 2;
                                                    v42 = 2;
                                                }
                                            }
                                            if (v26 != 0 || *(v43) == 0 && v26 != 0 && v25 != 0)
                                            {
                                                if (v25 != 0 && (v26->field_13 == 46 || v26 != 0) && (v26->field_13 != 46 || v26->field_14 != 0) && (v26->field_13 != 46 || *((short *)&v26->field_14) != 46) && (v26->field_14 != 0 || v26 != 0) && (*((short *)&v26->field_14) != 46 || v26 != 0))
                                                {
                                                    v25 = v27;
                                                }
                                                if ((v26 == 0 || v26->field_13 != 46 || v26->field_14 != 0) && (v26 == 0 || v26->field_13 != 46 || *((short *)&v26->field_14) != 46) && (v26->field_13 != 46 || v26->field_14 != 0 || v26 != 0) && (v26->field_13 != 46 || *((short *)&v26->field_14) != 46 || v26 != 0))
                                                {
                                                    v28 = &v26->field_13;
                                                    v29 = __fxstatat(0x1, v21, (unsigned int)v26 + 19, (unsigned int)&v10, 0x100);
                                                    v30 = &v6[-1 * v2];
                                                    v31 = strlen(v28);
                                                    if (v30 <= v31)
                                                    {
                                                        if (v15 == 0)
                                                        {
                                                            v32 = v4 + (v4 <= v31? v31 : v4);
                                                            *((int *)&v6) = (v4 <= v31? v31 : v4);
                                                            *((unsigned long long *)&v0) = v4 + (v4 <= v31? v31 : v4);
                                                            if (!(INVALID_IR) && v2 != 0)
                                                            {
                                                                v2 = realloc(v2, v32);
                                                                v6 = memcpy(v2 + v6 + v30, v2 + v30, v4 - v30);
                                                                v4 = *((long long *)&v0);
                                                            }
                                                            if (INVALID_IR || v2 == 0)
                                                            {
                                                                *(v43) = 12;
                                                                v42 = 12;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            *(v43) = 34;
                                                            v42 = 34;
                                                        }
                                                    }
                                                    if (v30 > v31 || v15 == 0 && !(INVALID_IR) && v2 != 0)
                                                    {
                                                        v34 = memcpy(&v6[-1 * v31], v28, v31);
                                                        v6 = v34 - 1;
                                                        *((char *)(v34 - 1)) = 47;
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
                                            v42 = *(v43);
                                        }
                                        else if (unknown)
                                        {
                                            v21 = openat(v21);
                                        }
                                        else if (unknown)
                                        {
                                            closedir();
                                        }
                                    }
                                }
                                if ((v24 == 0 || v24 != 0) && (v24 == 0 || v23 != 0))
                                {
                                    v42 = *(v43);
                                }
                            }
                            else
                            {
                                v42 = *(v43);
                                if (v24 != 0)
                                {
                                    closedir();
                                }
                            }
                            if ((v24 == 0 || v24 != 0 || v22 != 0) && (v24 == 0 || v22 != 0 || v23 != 0))
                            {
                                close(v21);
                            }
                        }
                        else
                        {
                            v42 = *(v43);
                        }
                        if ((v21 < 0 || v22 == 0) && (v21 < 0 || v24 != 0) && (v24 == 0 || v21 < 0 || v23 == 0) && (v24 != 0 || v21 >= 0))
                        {
                            closedir();
                        }
                        break;
                    }
                    if (v21 < 0 || v24 == 0 || v3 != 0 || v22 != 0 || v24 != 0 && v23 != 0)
                    {
                        free(v2);
                    }
                    else if (v24 != 0 && (v24 == 0 || v23 == 0))
                    {
                        v42 = *(v43);
                    }
                    else if (v24 == 0 || v24 != 0 && v23 != 0)
                    {
                        if (v21 < 0 || v24 == 0 || v3 != 0 || v22 != 0 || v24 != 0 && v23 != 0)
                        {
                            *((unsigned long long *)&v43) = v42;
                            v2 = 0;
                        }
                    }
                }
                v6[-1] = 47;
                v6 = &v6[-1];
                v39 = v16 + -0x1 * v6;
                v40 = v39;
                memmove(v2, v6, v40);
                if (v15 == 0)
                {
                    v3 = realloc(v2, v40);
                }
                *((int *)&v2) = (v3 == 0? v2 : v3);
            }
        }
        if (v17 < 0 || v20 < 0)
        {
            v43 = __errno_location();
        }
        if (v17 < 0 || v20 < 0 || v19 != v11 || v18 != *((long long *)&v10))
        {
            v42 = *(v43);
            free(v2);
            *((unsigned long long *)&v43) = v42;
            v2 = 0;
        }
    }
    return v2;
}

int sub_40a730()
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
        sub_40a7b0(); /* do not return */
    }
}

int sub_40a580()
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
        sub_40a7b0(); /* do not return */
    }
}

int sub_405c80()
{
    unsigned long v1;  // rax

    return v1;
}

int sub_409fa0()
{
    unsigned long v0;  // [bp-0x8]
    unsigned long v2;  // rbx
    unsigned int *v3;  // rdi
    unsigned long v4;  // rdi

    v0 = v2;
    v4 = *(v3);
    if ((unsigned int)v4 >= 0)
    {
        close(v4);
    }
}

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
    char padding_20[40];
    struct struct_1 *field_48;
} struct_0;

int sub_405e60()
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
                        v8 = sub_405c90();
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
                    v13 = (unsigned long long)(unsigned int)sub_405c90();
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

// int sub_409a70()

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_41236e;

int sub_409f80()
{
    unsigned int v0;  // [bp-0x2c]
    unsigned long long v1;  // [bp-0x28]
    unsigned long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp-0x8]
    struct v8;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // r14
    unsigned long long v11;  // r13
    unsigned long long v13;  // r12
    unsigned long long v14;  // rbx
    unsigned int *v15;  // r12
    unsigned long long v16;  // r14
    unsigned long long v17;  // rbx
    char *v18;  // rbp
    unsigned long long v19;  // rax
    char *v20;  // rbx
    unsigned long long v21;  // rax
    unsigned long v23;  // rdi
    unsigned long long v24;  // r13
    char *v25;  // rbx
    unsigned long v28;  // rdi
    unsigned long long v29;  // rbx
    unsigned long long v30;  // rax
    unsigned long long v34;  // rax
    unsigned long long v35;  // rbx
    unsigned long long v36;  // r12
    unsigned long long v37;  // r13
    unsigned long long v38;  // r14

    if (v8->field_0 < 0)
    {
        v9 = v8->field_8;
        v5 = v10;
        v4 = v11;
        v3 = v13;
        v2 = stack_base + 0;
        v1 = v14;
        v29 = chdir((unsigned int)(stack_base + 0));
        if ((unsigned int)v29 != 0)
        {
            v15 = __errno_location();
            if (*(v15) == 36)
            {
                v0 = -100;
                v16 = strlen(stack_base + 0);
                if (!(v16 != 0))
                {
                    __assert_fail(); /* do not return */
                }
                else if (v16 > 4095)
                {
                    v17 = strspn((unsigned int)(stack_base + 0), 0x41236e);
                    if (v17 != 2)
                    {
                        v18 = v9;
                        if (v17 != 0)
                        {
                            v19 = sub_40adc0();
                            if (v19 == 0)
                            {
                                v18 = &v18[v17];
                            }
                        }
                    }
                    else
                    {
                        v20 = (unsigned long long)(unsigned int)sub_40c480();
                        if (v20 != 0)
                        {
                            *(v20) = 0;
                            v21 = sub_40adc0();
                            *(v20) = 47;
                            if (v21 == 0)
                            {
                                v23 = &v20[1];
                                v18 = v23 + (unsigned long long)strspn(v23, 0x41236e);
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
        if (v17 == 0 && *(v15) == 36 && v16 > 4095 && v17 != 2 && (unsigned int)v29 != 0 && v16 != 0 || v17 == 2 && *(v15) == 36 && v21 == 0 && v16 > 4095 && (unsigned int)v29 != 0 && v20 != 0 && v16 != 0 || v19 == 0 && *(v15) == 36 && v16 > 4095 && v17 != 2 && v17 != 0 && (unsigned int)v29 != 0 && v16 != 0)
        {
            if (*(v18) != 47)
            {
                v24 = &v18[v16];
                if (v18 <= &v18[v16])
                {
                    while (true)
                    {
                        if (v24 + -0x1 * v18 > 4095)
                        {
                            v25 = (unsigned long long)memrchr((unsigned int)v18, 0x2f, 0x1000);
                            if (v25 != 0)
                            {
                                *(v25) = 0;
                                if (v25 - v18 <= 4095)
                                {
                                    *(v25) = 47;
                                    if (sub_40adc0() != 0)
                                    {
                                        break;
                                    }
                                    v28 = &v25[1];
                                    v18 = v28 + (unsigned long long)strspn(v28, 0x41236e);
                                }
                                else
                                {
                                    __assert_fail(); /* do not return */
                                }
                            }
                            else
                            {
                                *(v15) = 36;
                                v29 = -18446744069414584321;
                            }
                        }
                        else
                        {
                            if (v24 > v18)
                            {
                                v30 = sub_40adc0();
                                if (v30 != 0)
                                {
                                    break;
                                }
                            }
                            v29 = fchdir(v0);
                            if ((unsigned int)v29 == 0)
                            {
                                sub_40ad80();
                            }
                        }
                    }
                    if (v25 - v18 <= 4095 && v25 != 0 || v24 + -0x1 * v18 <= 4095 && v24 > v18 || v24 + -0x1 * v18 <= 4095 && (unsigned int)v29 != 0)
                    {
                        sub_40ad80();
                        *(v15) = *(v15);
                    }
                    else if ((v25 == 0 || v24 + -0x1 * v18 <= 4095) && ((unsigned int)v29 == 0 || v24 + -0x1 * v18 > 4095) && (v24 <= v18 || v30 == 0 || v24 + -0x1 * v18 > 4095))
                    {
                        v34 = v29;
                        v35 = v1;
                        v36 = v3;
                        v37 = v4;
                        v38 = v5;
                        return v34;
                    }
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
            }
            else
            {
                __assert_fail(); /* do not return */
            }
        }
        if (*(v15) == 36 && v16 > 4095 && v17 != 2 && v17 != 0 && (unsigned int)v29 != 0 && v16 != 0 && v19 != 0 || *(v18) != 47 && (v17 == 0 && *(v15) == 36 && v16 > 4095 && v17 != 2 && (unsigned int)v29 != 0 && v16 != 0 || v17 == 2 && *(v15) == 36 && v21 == 0 && v16 > 4095 && (unsigned int)v29 != 0 && v20 != 0 && v16 != 0 || v19 == 0 && *(v15) == 36 && v16 > 4095 && v17 != 2 && v17 != 0 && (unsigned int)v29 != 0 && v16 != 0) && v18 <= &v18[v16] || v17 == 2 && *(v15) == 36 && v16 > 4095 && (unsigned int)v29 != 0 && v20 != 0 && v16 != 0 && v21 != 0)
        {
            sub_40ad80();
            *(v15) = *(v15);
        }
        if (*(v15) == 36 && v16 > 4095 && v17 != 2 && v17 != 0 && (unsigned int)v29 != 0 && v16 != 0 && v19 != 0 || *(v18) != 47 && (v17 == 0 && *(v15) == 36 && v16 > 4095 && v17 != 2 && (unsigned int)v29 != 0 && v16 != 0 || v17 == 2 && *(v15) == 36 && v21 == 0 && v16 > 4095 && (unsigned int)v29 != 0 && v20 != 0 && v16 != 0 || v19 == 0 && *(v15) == 36 && v16 > 4095 && v17 != 2 && v17 != 0 && (unsigned int)v29 != 0 && v16 != 0) && v18 <= &v18[v16] || v17 == 2 && *(v15) == 36 && v16 > 4095 && (unsigned int)v29 != 0 && v20 != 0 && v16 != 0 && v21 != 0 || v17 == 2 && *(v15) == 36 && v16 > 4095 && (unsigned int)v29 != 0 && v16 != 0 && v20 == 0)
        {
            v29 = -18446744069414584321;
        }
        if (unknown)
        {
            v34 = v29;
            v35 = v1;
            v36 = v3;
            v37 = v4;
            v38 = v5;
            return v34;
        }
    }
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4062a0()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rcx
    unsigned long long v3[2];  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rsi
    struct v6;  // rdi
    unsigned long long v7;  // rax

    v1 = sub_405c90();
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

int sub_409ab0()
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
    return sub_409590();
}

// int sub_409ba0()

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

int sub_405fd0()
{
    struct v1;  // rdi

    return v1->field_20;
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

int sub_406780()
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
                v2 = (unsigned int)sub_405bd0();
                v3 = 0;
                v1 = *((long long *)&v2) * 16 + v0;
                *((unsigned long long [10])&v6) = v12[6];
                v4 = 0;
                *((unsigned long long [10])&v7) = v12[7];
                v5 = v11->field_28;
                *((unsigned long long [10])&v8) = v12[8];
                *((unsigned long long [10])&v9) = v12[9];
                v21 = (unsigned int)sub_405e60();
                if ((char)v21 == 0)
                {
                    v12[9] = v9;
                    v22 = sub_405e60();
                    if (v22 != 0)
                    {
                        v23 = sub_405e60();
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
    if ((char)v21 != 0 || v11->field_10 != *((long long *)&v2))
    {
        v24 = v21;
        return v24;
    }
}

// int sub_40fe80()

extern unsigned long long g_6176d0;

int sub_403a10()
{
    unsigned long long v1[2];  // rbx
    char *v2;  // rdi
    char v3;  // r12b
    unsigned long long v4;  // rax
    unsigned long long v5;  // r12

    v1 = g_6176d0;
    v3 = v2 == 0 | g_6176d0 == 0;
    if (g_6176d0 != 0 && v2 != 0)
    {
        while (true)
        {
            v4 = strcmp(v2, *(v1));
            if (v4 != 0)
            {
                v1 = v1[1];
                if (v1 == 0)
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
    return v5;
}

// int sub_409c30()

int sub_409892()
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

// int sub_409c20()

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    char field_20;
    char padding_21[7];
    unsigned long long field_28;
    unsigned long long field_30;
} struct_0;

extern unsigned int g_4138f3;
extern unsigned int g_6175d4;

int sub_40b070()
{
    char v0;  // [bp-0x1a8]
    unsigned long long v1;  // [bp-0x1a0]
    unsigned long v2;  // [bp-0x198]
    unsigned long v3;  // [bp-0x190]
    unsigned long v4;  // [bp-0x188]
    unsigned long v5;  // [bp-0x180]
    unsigned long v6;  // [bp-0x178]
    char v7;  // [bp-0x126]
    unsigned long long v9;  // rdx
    struct v10;  // rbx
    unsigned long long v11;  // rax
    unsigned long long v12;  // rax
    unsigned long long v14;  // rax
    unsigned long v15;  // rdi
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    v10 = v9;
    if (g_6175d4 >= 0)
    {
    }
    else
    {
        v11 = uname((unsigned int)&v0);
        if (v11 == 0)
        {
            v12 = strverscmp((unsigned int)&v7, 0x4138f3);
            if (v12 >= 0)
            {
                g_6175d4 = 1;
            }
        }
        if (v12 < 0 || v11 != 0)
        {
            g_6175d4 = 0;
        }
    }
    if (v12 < 0 && g_6175d4 < 0 || INVALID_IR && g_6175d4 >= 0 || g_6175d4 < 0 && v11 != 0)
    {
        v14 = statfs(v15, (unsigned int)&v0);
    }
    if ((g_6175d4 < 0 || !(INVALID_IR)) && (v11 == 0 || g_6175d4 >= 0) && (v12 >= 0 || g_6175d4 >= 0))
    {
        v17 = -18446744069414584321;
        if (statvfs(v15, (unsigned int)&v0) >= 0)
        {
            v18 = v1;
            if (v1 == 0)
            {
                v18 = *((long long *)&v0);
            }
        }
    }
    if (v12 < 0 && g_6175d4 < 0 || INVALID_IR && g_6175d4 >= 0 || g_6175d4 < 0 && v11 != 0)
    {
        if (v14 >= 0)
        {
            v18 = v1;
        }
        else
        {
            v17 = -18446744069414584321;
        }
    }
    if (v14 >= 0)
    {
        v10->field_0 = v18;
        v10->field_8 = v2;
        v10->field_10 = v3;
        v10->field_18 = v4;
        v10->field_20 = v4 >> 63;
        v10->field_28 = v5;
        v10->field_30 = v6;
        v17 = 0;
    }
    return v17;
}

extern int512_t g_412280;

int sub_405de0()
{
    unsigned int *v1[4];  // rdi
    unsigned int v2[4];  // rax
    unsigned int v3;  // ymm0
    uint128_t v4;  // xmm1
    unsigned int v5;  // ymm1
    unsigned long long v6;  // xmm1lq

    v2 = *(v1);
    if (*(v1) != 4268672)
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
            *(v1) = &g_412280;
            return 0;
        }
    }
    if (unknown)
    {
        return 1;
    }
}

int sub_406380()
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

int sub_405a10()
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rcx
    void *v3;  // rdi

    v1 = (unsigned int)sub_4059b0();
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

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    unsigned long long field_10;
} struct_0;

int sub_40a3c0()
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
    return sub_409fc0();
}

int sub_40adc0()
{
    unsigned int *v1;  // rdi
    unsigned long v4;  // rax
    unsigned long long v5;  // rax
    unsigned int v6;  // ebp

    v4 = openat(*(v1));
    if (rbp >= 0)
    {
        rbp = v4;
        sub_40ad80();
        *(v1) = v6;
        v5 = 0;
    }
    else
    {
        v5 = -18446744069414584321;
    }
    return v5;
}

int sub_405b00()
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
        v5[0] = (unsigned int)sub_40a790();
        *((unsigned long long [2])&v5[1]) = v10[1];
        *((unsigned long long [2])&v5[2]) = *(v10);
        v13 = sub_406c00();
        if (!(v13 != 0))
        {
            sub_40a7b0(); /* do not return */
        }
        else if (v5 != v13)
        {
            v5 = (unsigned long long)(unsigned int)sub_40a560();
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

int sub_40dae0()
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

// int sub_409a90()

extern char g_617628;
extern unsigned long long g_617630;

int sub_403991()
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

    if (g_617628 == 0)
    {
        v2 = stack_base + 0;
        v1 = v5;
        v0 = v6;
        while (true)
        {
            if (g_617630 >= 0)
            {
                break;
            }
            g_617630 = g_617630 + 1;
            *((long long *)(6385216 + (v7 + 1) * 8))();
        }
        v9 = v0;
        v10 = v1;
        g_617628 = 1;
        return sub_40393b();
    }
    return v4;
}

int sub_40a8b0()
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
            v33 = __strtoul_internal(v5, (unsigned int)v12);
            if (*(v12) != v5)
            {
                v17 = *(v14);
                if ((v17 == 34 || *(v14) == 0) && v9 != 0)
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
        if (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0)
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
                                    /* goto *((long long *)(rdx * 8 + 4273464)); */
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
        if ((*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) != 0 && v22 == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) <= 47 && ((char)((char)*(&((char *)stack_base)[((unsigned long long)(v1 & 63) >> 3) + -376]) >> (unsigned long long)(v1 & 63 & 7)) & 1) == 0 || (*(v12) == v5 && v9 != 0 && v15 != 45 && *((char *)v6) != 0 && v19 != 0 || v9 != 0 && v1[0] != 0 && v15 != 45 && *(v12) != v5 && (v17 == 34 || *(v14) == 0) && v20 != 0) && (v18 - 69 & 255) > 47)
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
                    v47 = tmp_11 * v28 * v28;
                    v33 = v47;
                }
                else
                {
                    v33 = -1;
                }
            case 9: case 41:
                v33 = v33 * v30;
                if (INVALID_IR)
                {
                    v33 = -1;
                    break;
                }
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
                break;
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

extern int512_t g_617320;
extern unsigned long long g_617650;
extern unsigned long long g_617658;

int sub_403e20()
{
    void tmp_36;  // tmp #36
    unsigned long v2;  // rdi
    unsigned long v3;  // rsi

    tmp_36 = g_617650 + 1;
    g_617650 = g_617650 + 1;
    if (!(INVALID_IR) &&  amd64g_calculate_condition(0x5, 0x24, Shr(t36, 0x3d), Shr(t36, 0x3c), cc_ndep) == 0)
    {
        g_617658 = (unsigned int)sub_40a5c0();
        *((long long **)(g_617658 + g_617650 * 8 - 8)) = &(&g_617320)[6 * v2];
        if (v3 != 0)
        {
            (&g_617320)[3 + 6 * v2] = v3;
        }
        if (*(&((char *)&(&g_617320)[5 + 4 * v2 + 2 * v2])[4]) == 0)
        {
            *(&((char *)&(&g_617320)[5 + 6 * v2])[4]) = 1;
            return &(&g_617320)[6 * v2];
        }
        __assert_fail(); /* do not return */
    }
    if (INVALID_IR ||  amd64g_calculate_condition(0x5, 0x24, Shr(t36, 0x3d), Shr(t36, 0x3c), cc_ndep) != 0)
    {
        sub_40a7b0(); /* do not return */
    }
}

int sub_40ad80()
{
    unsigned int v1;  // rdi
    unsigned long v2;  // rax
    unsigned long long v3;  // rax

    if (v1 < 0)
    {
        return v2;
    }
    v3 = close(v1);
    if ((unsigned int)v3 == 0)
    {
        return v3;
    }
    __assert_fail(); /* do not return */
}

int sub_40c590()
{
    char *v1;  // rdi
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rax
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r9
    unsigned long long v8;  // rdx
    char *v10;  // rcx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdx

    v2 = v1;
    v3 = strlen(v1) + 1;
    while (true)
    {
        v5 = (char)*((char *)(v2 + rdx));
        v12 = rdx + 1;
        if (rdx + 4 < v3 && *((char *)(v2 + rdx)) == 92)
        {
            v6 = (char)*((char *)(v2 + v12));
            if (((unsigned long long)(char)*((char *)(v2 + v12)) - 48 & 255) <= 3 && ((unsigned long long)(char)*((char *)(v2 + rdx + 2)) - 48 & 255) <= 7)
            {
                v8 = (char)*((char *)(v2 + rdx + 3));
                if ((v8 - 48 & 255) <= 7)
                {
                    v10 = &v10[1];
                    v12 = 4;
                    v10[-1] = v8 - 48 + ((char)*((char *)(v2 + rdx + 2)) + v6 * 8) * 8 - 128;
                }
            }
        }
        if (((unsigned long long)(char)*((char *)(v2 + v12)) - 48 & 255) > 3 || (v8 - 48 & 255) > 7 || ((unsigned long long)(char)*((char *)(v2 + rdx + 2)) - 48 & 255) > 7 || rdx + 4 >= v3 || *((char *)(v2 + rdx)) != 92)
        {
            *((unsigned long long *)&v10) = v5;
            v10 = &v10[1];
            if (v3 <= v12)
            {
                break;
            }
        }
        v13 = v12;
    }
    return v3;
}

extern int512_t g_617820;

int sub_409790()
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
    v5 = (unsigned int)*((int *)((tmp_52? &g_617820 : tmp_2) + v2 % 32 * 4 + 8));
    tmp_123 = ((unsigned int)v6 ^ (unsigned int)(v5 >> (v3 & 31))) & 1;
    *((unsigned int *)((v1 == 0? &g_617820 : v1) + v2 % 32 * 4 + 8)) = (unsigned int)(tmp_123 << (v3 & 31)) ^ (unsigned int)v5;
    return (unsigned int)(v5 >> (v3 & 31)) & 1;
}

typedef struct struct_0 {
    char padding_0[32];
    unsigned long long field_20;
} struct_0;

extern unsigned int g_410fc4;
extern unsigned int g_410fcb;
extern unsigned long long g_617640;
extern unsigned long long g_617648;
extern unsigned long long g_617650;
extern unsigned long long g_617658;
extern unsigned int g_617660;
extern unsigned long long g_6176e0;
extern unsigned int g_6176e8;

int sub_403ba0()
{
    unsigned long long v0;  // [bp-0x2c0]
    void tmp_33;  // tmp #33
    void tmp_72;  // tmp #72
    void tmp_59;  // tmp #59
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rbp
    unsigned long long v5;  // rbx
    unsigned int **v6;  // r13
    char *v7;  // r14
    unsigned long long v8;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // r9
    unsigned long long v10;  // r10
    unsigned long long v11;  // r8
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r13
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long v17;  // cc_dep1
    unsigned long v18;  // cc_dep2
    unsigned long long v19;  // rdx
    char v20;  // dl
    unsigned long long v21;  // r13
    unsigned long long v22;  // r14
    struct v27;  // rcx

    v2 = sub_403ad0();
    v3 = g_617658;
    if (g_617650 != 0)
    {
        v4 = 0;
        while (true)
        {
            v5 = v4 * 8;
            v0 = 0;
            v6 = v3 + v4 * 8;
            v7 = (unsigned long long)dcgettext(0x0, *((long long *)(*((long long *)(v3 + v4 * 8)) + 24)), 0x5);
            if (*(*(v6)) == 2)
            {
                v9 = g_6176e8;
                if (g_617660 == 4)
                {
                    v9 = g_6176e8;
                }
                if (g_617660 == 3)
                {
                    v14 = (unsigned int)sub_407b40();
                }
                if ((g_617660 == 0 || g_617660 == 4) && (g_617660 == 0 || ((char)g_6176e8 & 16) == 0))
                {
                    v10 = v9 & 292;
                    v11 = g_6176e0;
                    v12 = g_6176e0;
                    do
                    {
                        tmp_59 = v11;
                        v11 = v11 % 0x400;
                        tmp_72 = (unsigned int)tmp_59 & 1023;
                        v15 = (unsigned int)tmp_59 & 1023;
                        tmp_33 = v12 - (v12 % 8 * 2361183241434822607 >> 64 >> 4) * 1000;
                        v16 = v12 - (v12 % 8 * 2361183241434822607 >> 64 >> 4) * 1000;
                        v12 = v12 % 8 * 2361183241434822607 >> 64 >> 4;
                    }
                    while (tmp_33 == 0 && tmp_72 == 0);
                    v17 = (char)(v16 == 0);
                    v18 = (char)(v15 == 0);
                    if ((char)(v16 == 0) < (unsigned long long)(char)(v15 == 0))
                    {
                        v19 = v10;
                        v20 = (char)v10 | 184;
                    }
                    else if (INVALID_IR)
                    {
                        v20 = (char)v19 | 152;
                    }
                    v21 = (unsigned int)sub_406fb0();
                    v22 = dcgettext(0x0, 0x410fc4, 0x5);
                }
                if ((g_617660 == 0 || g_617660 == 4 || g_617660 == 3) && (g_617660 == 0 || ((char)g_6176e8 & 16) == 0 || g_617660 != 4))
                {
                    dcgettext(0x0, 0x410fcb, 0x5);
                    if (sub_40acf0() == -1)
                    {
                        v0 = 0;
                    }
                    v13 = v0;
                }
            }
            if (*(*(v6)) != 2 || g_617660 == 4 && g_617660 != 0 && ((char)g_6176e8 & 16) != 0 || g_617660 != 0 && g_617660 != 4 && g_617660 != 3)
            {
                v8 = strdup(v7);
                v0 = v8;
                v13 = v8;
            }
            if (v13 != 0)
            {
                sub_403b50();
                *((unsigned long long *)(*((long long *)(g_617648 + g_617640 * 8 - 8)) + v5)) = v0;
                if (*((long long *)(*((long long *)(g_617658 + v5)) + 32)) > sub_408190())
                {
                    v3 = g_617658;
                    v27 = *((long long *)(g_617658 + v5));
                    v2 = *((long long *)(*((long long *)(g_617658 + v5)) + 32));
                }
                else
                {
                    v2 = sub_408190();
                    v3 = g_617658;
                    v27 = *((long long *)(g_617658 + v5));
                }
                v4 += 1;
                v27->field_20 = v2;
                if (g_617650 <= v4)
                {
                    break;
                }
            }
            else
            {
                sub_40a7b0(); /* do not return */
            }
        }
    }
    return v2;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

int sub_4066a0()
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
    if ((v4[8] == 0 || v4[4] == 0 || *(v4) < v4[1]) && v12 < v11)
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

int sub_40a3a0()
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

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    char padding_18[16];
    char field_28;
} struct_2;

typedef struct struct_3 {
    char padding_0[32];
    unsigned long long field_20;
} struct_3;

extern unsigned long long g_0;
extern unsigned long long g_10;
extern unsigned int g_4110ba;
extern unsigned int g_411155;
extern unsigned int g_411189;
extern unsigned int g_411fa8;
extern unsigned int g_412018;
extern unsigned int g_412048;
extern unsigned int g_412078;
extern unsigned int g_4120f8;
extern unsigned int g_413a14;
extern char g_61737c;
extern unsigned int g_6175e0;
extern unsigned long long g_617640;
extern unsigned long long **g_617648;
extern unsigned long long g_617650;
extern unsigned long long *g_617658;
extern unsigned int g_617660;
extern unsigned long long g_617680;
extern char g_6176b8;
extern char g_6176b9;
extern unsigned long long g_6176c0;
extern unsigned long long g_6176c8[2];
extern unsigned long long g_6176d0[2];
extern unsigned int g_6176d8;
extern char g_6176dc;
extern char g_6176dd;
extern unsigned long long g_6176e0;
extern unsigned int g_6176e8;
extern char g_6176ec;
extern char g_6176ed;
extern char g_6176ee;
extern unsigned long long g_6176f0;
extern unsigned long long g_6178a8;
extern unsigned long long g_8;
extern unsigned long long stdout[7];

int main()
{
    /*INVALID_EQUAL_UNDEFINED*/
undefined v0;  // [bp-0x178]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v1;  // [bp-0x170]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v2;  // [bp-0x168]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v3;  // [bp-0x160]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v4;  // [bp-0x158]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v5;  // [bp-0x150]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v6;  // [bp-0x148]
    unsigned long long v7;  // [bp-0x140]
    char *v8;  // [bp-0x138]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v9;  // [bp-0x130]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v10;  // [bp-0x128]
    unsigned long v11;  // [bp-0x120]
    unsigned long long *v12;  // [bp-0x118]
    unsigned long long v13;  // [bp-0x110]
    unsigned long long v14;  // [bp-0x108]
    char v15;  // [bp-0xf9]
    unsigned long v16;  // [bp-0xf8]
    char *v17;  // [bp-0xf0]
    unsigned long long v18;  // [bp-0xe8]
    /*INVALID_EQUAL_UNDEFINED*/
undefined v19;  // [bp-0xc8]
    unsigned long long v21;  // r12
    unsigned long long v22;  // rsi
    char *v25;  // r13
    unsigned long long v26;  // rax
    unsigned long long v27;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v36;  // r12
    unsigned long long v37;  // r13
    unsigned long long v38[2];  // rbp
    unsigned long long v39;  // rax
    unsigned long long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rax
    unsigned long long *v43;  // r12
    unsigned long long v44;  // r14
    unsigned int v45;  // ebp
    unsigned long long v46;  // rax
    unsigned short v48;  // dx
    unsigned long v49;  // rax
    unsigned long long v50;  // rbp
    /*INVALID_EQUAL_UNDEFINED*/
undefined v56;  // rbp
    unsigned long long v58;  // r12
    unsigned long long v63;  // r13
    unsigned long long v81;  // r12
    unsigned long long v82;  // rbp
    unsigned long long *v83;  // rax
    unsigned long v84;  // rcx
    unsigned long long v85;  // rbx
    unsigned int v86;  // eax
    unsigned long long v87;  // rbp
    /*INVALID_EQUAL_UNDEFINED*/
undefined v88;  // r14
    char *v89;  // r12
    char *v90;  // r13
    unsigned long long v91;  // rax
    unsigned long long v92;  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v93;  // rbx
    unsigned long long v94;  // r15
    unsigned long long v95;  // rcx
    unsigned long long v96;  // rax
    unsigned long long v97;  // rcx
    unsigned long long v98;  // rax
    unsigned long long v99;  // r12
    char v100;  // r8b
    unsigned long long v101;  // rax
    unsigned long v102;  // r10
    unsigned int v103;  // eax
    char v104;  // al
    unsigned long long v106;  // rbx
    char *v108;  // rdi
    unsigned long long v109;  // rbx
    unsigned long long v110;  // rcx
    char v111;  // cc_dep2
    unsigned long v112;  // d
    unsigned long long v113;  // r14
    unsigned long long v114;  // rbp
    unsigned long long v115;  // r12
    char *v116;  // rsi
    unsigned long long v117;  // rcx
    unsigned long long v118;  // cc_dep1
    unsigned long long v119;  // cc_dep2
    unsigned long long v121;  // rcx
    char v122;  // cc_dep2
    unsigned long long v123;  // rcx
    unsigned long long v125;  // rax
    unsigned long long v126;  // rax
    unsigned long long v127;  // rax
    unsigned int *v128;  // r13
    char *v130;  // rsi
    unsigned long long v131;  // rcx
    unsigned long long v132;  // cc_dep1
    unsigned long long v133;  // cc_dep2
    unsigned long long v135;  // rax
    unsigned int v136;  // eax
    char v137;  // al
    void *v139;  // rbx
    unsigned long long v141;  // rcx
    unsigned long long v143;  // rbx
    unsigned long long v144;  // rbp
    unsigned long long v145;  // rax
    unsigned long long v146;  // rax
    unsigned int v148;  // cc_dep1
    struct v150;  // r13
    struct v151;  // r15
    char *v152;  // rdi
    unsigned long long v154;  // rcx
    char v155;  // cc_dep2
    unsigned long v156;  // d
    char *v157;  // rdi
    unsigned long long v159;  // rcx
    char v160;  // cc_dep2
    char *v161;  // r14
    unsigned long long v162;  // rax
    unsigned long long v163;  // rax
    unsigned long long v166;  // rax
    char *v167;  // r10
    unsigned long long v168;  // rcx
    char *v169;  // rdi
    char v170;  // cc_dep2
    char *v171;  // rdi
    unsigned long long v172;  // rsi
    char v173;  // cc_dep2
    unsigned long long v174;  // rax
    unsigned long long v175;  // rax
    unsigned long long v178;  // rax
    unsigned long long v180;  // rbx
    unsigned int v181;  // eax
    char v182;  // al
    unsigned long long v185;  // r13
    unsigned long long v186;  // rbx
    void *v187;  // rax
    struct v189;  // rdi
    char *v191;  // rdx
    char *v192;  // rax

    v21 = &g_0;
    v4 = v22;
    sub_4081c0();
    setlocale(0x6, 0x413a14);
    bindtextdomain(0x4110ba, 0x411fa8);
    textdomain(0x4110ba);
    sub_410f70();
    g_6176d0[0] = &g_0;
    g_6176c8[0] = &g_0;
    *((unsigned long long **)&g_6176ee) = &g_0;
    *((unsigned long long **)&g_6176ec) = &g_0;
    g_6176e8 = -1;
    *((unsigned long long **)&g_6176b9) = &g_0;
    *((unsigned long long **)&g_6176dd) = &g_0;
    *((unsigned long long **)&g_6176d8) = &g_0;
    *((unsigned long long **)&g_6176b8) = &g_0;
    g_617680 = &g_0;
    v25 = (unsigned long long)dcgettext(0x0, 0x412018, 0x5);
    while (true)
    {
        v19 = -1;
        v26 = sub_40c380();
        if ((unsigned int)v26 == -1)
        {
            break;
        }
        if ((unsigned int)v26 != 105)
        {
            if (v26 > 105)
            {
                if ((unsigned int)v26 != 118)
                {
                    if (v26 > 118)
                    {
                        if ((unsigned int)v26 == 129)
                        {
                            *((unsigned long long **)&g_6176dc) = &g_0;
                        }
                        else if (v26 <= 129)
                        {
                            if ((unsigned int)v26 == 120)
                            {
                                g_6176c8[0] = g_6178a8;
                                *((unsigned long long *[2])(g_6176c8 + &g_8)) = g_6176c8;
                                g_6176c8[0] = (unsigned int)sub_40a560();
                            }
                            if ((unsigned int)v26 == 128)
                            {
                                *((unsigned long long **)&g_6176dc) = &g_0;
                            }
                        }
                        else if ((unsigned int)v26 == 130)
                        {
                            *((unsigned long long **)&g_6176b8) = &g_0;
                        }
                        else if ((unsigned int)v26 == 131)
                        {
                            if (g_617660 != 1 && g_617660 == 0 && v21 != 0)
                            {
                                error(0x0, 0x0, v25);
                                sub_404930(); /* do not return */
                            }
                        }
                    }
                    else
                    {
                        if ((unsigned int)v26 == 108)
                        {
                            *((unsigned long long **)&g_6176ed) = &g_0;
                        }
                        else if (v26 > 108)
                        {
                            if ((unsigned int)v26 == 109)
                            {
                                *((unsigned long long **)&g_6176e8) = &g_0;
                                g_6176e0 = 0x100000;
                            }
                        }
                        else
                        {
                            if ((unsigned int)v26 == 107)
                            {
                                *((unsigned long long **)&g_6176e8) = &g_0;
                                g_6176e0 = 0x400;
                            }
                        }
                    }
                }
            }
            else
            {
                if ((unsigned int)v26 == 72)
                {
                    g_6176e8 = 144;
                    g_6176e0 = &g_0;
                }
                else if (v26 > 72)
                {
                    if ((unsigned int)v26 != 84)
                    {
                        if (v26 > 84)
                        {
                            if ((unsigned int)v26 == 97)
                            {
                                *((unsigned long long **)&g_6176ee) = &g_0;
                            }
                            if ((unsigned int)v26 == 104)
                            {
                                g_6176e8 = 176;
                                g_6176e0 = &g_0;
                            }
                        }
                        else if ((unsigned int)v26 == 80)
                        {
                            if (g_617660 != 4)
                            {
                                v21 = &g_0;
                            }
                        }
                    }
                    else
                    {
                        if (g_617660 != 4)
                        {
                            *((unsigned long long **)&g_6176b9) = &g_0;
                        }
                    }
                }
                else
                {
                    if ((unsigned int)v26 == -130)
                    {
                        sub_404930(); /* do not return */
                    }
                    else if (v26 > -18446744069414584450)
                    {
                        if ((unsigned int)v26 == 66)
                        {
                            v27 = sub_407980();
                            sub_40a820(); /* do not return */
                        }
                    }
                    else
                    {
                        if ((unsigned int)v26 == -131)
                        {
                            v3 = &g_0;
                            v2 = "Paul Eggert";
                            sub_40a420();
                            exit(0x0); /* do not return */
                        }
                    }
                }
            }
        }
        else
        {
            if (g_617660 != 4)
            {
                *((unsigned long long **)&g_617660) = &g_0;
            }
        }
        if (v26 <= 72 && v26 <= 105 && (unsigned int)v26 == 70 && v26 > -18446744069414584450 && (unsigned int)v26 != 105 && (unsigned int)v26 != -130 && (unsigned int)v26 != 66 && (unsigned int)v26 != 72 || (unsigned int)v26 == 116 && v26 <= 118 && (unsigned int)v26 != 109 && v26 > 108 && v26 > 105 && (unsigned int)v26 != 108 && (unsigned int)v26 != 118 && (unsigned int)v26 != 105)
        {
            g_6176d0[0] = g_6178a8;
            *((unsigned long long *[2])(g_6176d0 + &g_8)) = g_6176d0;
            g_6176d0[0] = (unsigned int)sub_40a560();
        }
        if (g_6176b9 == 0 && ((unsigned int)v26 == 131 && g_617660 != 0 && (unsigned int)v26 != 130 && v26 > 105 && g_617660 != 1 && (unsigned int)v26 != 129 && v26 > 118 && (unsigned int)v26 != 118 && (unsigned int)v26 != 105 && v26 > 129 || g_617660 == 0 && v21 == 0 && (unsigned int)v26 == 131 && (unsigned int)v26 != 130 && v26 > 105 && g_617660 != 1 && (unsigned int)v26 != 129 && v26 > 118 && (unsigned int)v26 != 118 && (unsigned int)v26 != 105 && v26 > 129))
        {
            *((unsigned long long **)&g_617660) = &g_0;
            sub_404d60();
        }
        if (g_617660 == 4 && (unsigned int)v26 == 105 || g_617660 == 4 && v26 <= 105 && (unsigned int)v26 == 84 && v26 > 72 && (unsigned int)v26 != 105 && (unsigned int)v26 != 72 || g_617660 == 4 && v26 <= 105 && v26 <= 84 && (unsigned int)v26 == 80 && v26 > 72 && (unsigned int)v26 != 84 && (unsigned int)v26 != 105 && (unsigned int)v26 != 72 || g_617660 == 1 && (unsigned int)v26 == 131 && (unsigned int)v26 != 130 && v26 > 105 && (unsigned int)v26 != 129 && v26 > 118 && (unsigned int)v26 != 118 && (unsigned int)v26 != 105 && v26 > 129 || g_6176b9 != 0 && ((unsigned int)v26 == 131 && g_617660 != 0 && (unsigned int)v26 != 130 && v26 > 105 && g_617660 != 1 && (unsigned int)v26 != 129 && v26 > 118 && (unsigned int)v26 != 118 && (unsigned int)v26 != 105 && v26 > 129 || g_617660 == 0 && v21 == 0 && (unsigned int)v26 == 131 && (unsigned int)v26 != 130 && v26 > 105 && g_617660 != 1 && (unsigned int)v26 != 129 && v26 > 118 && (unsigned int)v26 != 118 && (unsigned int)v26 != 105 && v26 > 129))
        {
            error(0x0, 0x0, v25);
        }
        if (unknown)
        {
            sub_404930(); /* do not return */
        }
    }
    if (g_6176e8 == -1)
    {
        if (v21 != 0)
        {
            *((unsigned long long **)&g_6176e8) = &g_0;
            g_6176e0 = (unsigned long long)((unsigned int)(unsigned long long *)((char *)&g_0 + -1 * (char)(getenv("POSIXLY_CORRECT") < &g_0)) & 0x200) + 0x200;
        }
        else
        {
            getenv("DF_");
            sub_407980();
        }
    }
    if (g_617660 != 1 && g_617660 != 4)
    {
        if (((char)g_6176e8 & 16) != 0)
        {
            *((unsigned long long **)&g_617660) = &g_0;
        }
        else if (v21 != 0)
        {
            *((unsigned long long **)&g_617660) = &g_0;
        }
    }
    v36 = g_6176d0;
    v37 = &g_0;
    if (g_6176d0 != 0)
    {
        do
        {
            v38 = g_6176c8;
            if (g_6176c8 != 0)
            {
                while (true)
                {
                    v39 = strcmp(*(g_6176d0), *(v38));
                    if (v39 != 0)
                    {
                        v38 = *((long long *)(v38 + &g_8));
                        if (v38 == 0)
                        {
                            break;
                        }
                    }
                    else
                    {
                        v37 = &g_0;
                        v40 = (unsigned int)sub_409de0();
                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x412048, 0x5));
                    }
                }
            }
            v36 = *((long long *)(v36 + &g_8));
        }
        while (v36 != 0);
        if (v37 != 0)
        {
            v41 = &g_0;
        }
    }
    if (v37 == 0 || g_6176d0 == 0)
    {
        if (g_6175e0 < v108)
        {
            v42 = sub_40a560();
            v43 = (long long)(int)g_6175e0;
            v16 = v42;
            v44 = v42;
            while (true)
            {
                v45 = (unsigned int)v43;
                if (v108 <= (unsigned int)v43)
                {
                    break;
                }
                v46 = __xstat(0x1, *((long long *)&((char *)v4)[v43 * &g_8]), (int)((unsigned int)v43 - g_6175e0) * 144 + v44);
                if (!(v46 == 0))
                {
                    v50 = (unsigned int)sub_409c60();
                    error(0x0, *(__errno_location()), "%s");
                    *((unsigned long long **)&g_6176d8) = &g_0;
                    *((unsigned long long **)&((char *)v4)[v43 * &g_8]) = &g_0;
                }
                else if (((unsigned short)*((int *)(v44 + (unsigned long long)(v45 - g_6175e0) * 144 + 24)) & 0xf000) != 0x1000)
                {
                    v49 = open(*((long long *)&((char *)v4)[v43 * &g_8]), 0x100, v48);
                    if (v49 >= 0)
                    {
                        close(v49);
                    }
                }
                v43 += &g_0;
            }
        }
        if (g_61737c != 0)
        {
            g_6176c0 = (unsigned int)sub_40c670();
            if (g_6176c0 != 0)
            {
                if (g_6176dc != 0)
                {
                    sync();
                }
                switch (g_617660)
                {
                case 0:
                    sub_403e20();
                    if (g_6176b9 != 0)
                    {
                        sub_403e20();
                    }
                    sub_403e20();
                    sub_403e20();
                    sub_403e20();
                case 1:
                    sub_403e20();
                    if (g_6176b9 != 0)
                    {
                        sub_403e20();
                    }
                    sub_403e20();
                    sub_403e20();
                    sub_403e20();
                    sub_403e20();
                    sub_403e20();
                case 2:
                    sub_403e20();
                    if (g_6176b9 != 0)
                    {
                        sub_403e20();
                    }
                    sub_403e20();
                    sub_403e20();
                    sub_403e20();
                    sub_403e20();
                    sub_403e20();
                case 3:
                    sub_403e20();
                    if (g_6176b9 != 0)
                    {
                        sub_403e20();
                    }
                    sub_403e20();
                    sub_403e20();
                    sub_403e20();
                case 4:
                    if (g_617650 == 0)
                    {
                        sub_404d60();
                    }
                default:
                    __assert_fail(); /* do not return */
                }
                if (g_617660 <= 4)
                {
                    sub_403ba0();
                    if (g_6175e0 < v108)
                    {
                        v83 = (unsigned long long)g_6175e0;
                        *((unsigned long long **)&g_6176ec) = &g_0;
                        v10 = v83 + &g_0;
                        v11 = (unsigned long long)&v108[!((unsigned int)v83)] + v83 + &g_0;
                        while (true)
                        {
                            v84 = *((long long *)&((char *)v4)[v83 * &g_8]);
                            v85 = *((long long *)&((char *)v4)[v83 * &g_8]);
                            v8 = *((long long *)&((char *)v4)[v83 * &g_8]);
                            if (*((long long *)&((char *)v4)[v83 << &g_0]) != 0)
                            {
                                v12 = (int)((unsigned int)v83 - g_6175e0) * 144 + v16;
                                *((int *)&v5) = *((int *)((int)((unsigned int)v83 - g_6175e0) * 144 + v16 + 24));
                                v86 = *((int *)((int)((unsigned int)v83 - g_6175e0) * 144 + v16 + 24)) & 0xb000;
                                if (v86 == 0x2000)
                                {
                                    v17 = (unsigned long long)canonicalize_file_name(v84);
                                    if (v17 != 0)
                                    {
                                        *((int *)&v5) = (*(v17) != 47? v85 : v17);
                                    }
                                    else
                                    {
                                        v5 = v8;
                                    }
                                    v87 = g_6176c0;
                                    if (g_6176c0 != 0)
                                    {
                                        v14 = &g_0;
                                        v88 = &g_0;
                                        v9 = -1;
                                        *((unsigned long long **)&v6) = &g_0;
                                        while (true)
                                        {
                                            v89 = *((long long *)v87);
                                            v90 = (unsigned long long)canonicalize_file_name(*((long long *)v87));
                                            if (v90 != 0)
                                            {
                                                v89 = (*(v90) == 47? v90 : r12);
                                            }
                                            v91 = strcmp(v5, v89);
                                            if (v91 == 0)
                                            {
                                                v92 = g_6176c0;
                                                v93 = *((long long *)&((char *)&g_8)[v87]);
                                                v94 = &g_0;
                                                if (g_6176c0 != 0)
                                                {
                                                    do
                                                    {
                                                        v94 = (strcmp(*((long long *)&((char *)&g_8)[v92]), *((long long *)&((char *)&g_8)[g_6176c0])) == &g_0? v92 : r15);
                                                        v92 = *((long long *)(v92 + 48));
                                                    }
                                                    while (v92 != 0);
                                                    if (v94 != 0)
                                                    {
                                                        v95 = canonicalize_file_name(*((long long *)v94));
                                                        if (v95 == 0 || *((char *)v95) != 47)
                                                        {
                                                            free(v95);
                                                            v95 = (unsigned int)sub_40a790();
                                                            if (v95 == 0)
                                                            {
                                                                v93 = *((long long *)&((char *)&g_8)[v87]);
                                                            }
                                                        }
                                                        if (v95 != 0 || *((char *)v95) == 47 && v95 != 0)
                                                        {
                                                            v7 = v95;
                                                            v96 = strcmp(v95, v89);
                                                            v97 = v7;
                                                            if (v96 == 0)
                                                            {
                                                                v93 = *((long long *)&((char *)&g_8)[v87]);
                                                            }
                                                            else
                                                            {
                                                                v88 = &g_0;
                                                            }
                                                        }
                                                    }
                                                }
                                                if ((g_6176c0 == 0 || v95 == 0 || v94 == 0) && (g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47))
                                                {
                                                    v97 = &g_0;
                                                }
                                                if (v96 == 0 || g_6176c0 == 0 || v94 == 0 || v95 == 0 && v95 == 0 || v95 == 0 && *((char *)v95) != 47)
                                                {
                                                    v7 = v97;
                                                    v98 = strlen(v93);
                                                    v97 = v7;
                                                    v99 = v6 ^ &g_0;
                                                    v100 = !((long long)(stack_base)[-304] <= (long long)(stack_base)[-320]);
                                                    v88 = (char)(v6 ^ &g_0) | !((long long)(stack_base)[-304] <= (long long)(stack_base)[-320]);
                                                    if ((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320])
                                                    {
                                                        *((unsigned long long **)&v6) = &g_0;
                                                    }
                                                    else
                                                    {
                                                        v13 = v7;
                                                        v15 = v100;
                                                        v7 = v98;
                                                        v101 = __xstat(0x1, (unsigned int)v93, (unsigned int)&v19);
                                                        v97 = v13;
                                                        if (v101 != 0 && v99 != 0 && v15 != 0)
                                                        {
                                                            v88 = &g_0;
                                                        }
                                                    }
                                                }
                                            }
                                            if (v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 != 0 && v15 == 0 || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 == 0)
                                            {
                                                v88 = v6;
                                            }
                                            if (v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 != 0 && v15 != 0 || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 == 0)
                                            {
                                                if (v7 != 1)
                                                {
                                                    v9 = v7;
                                                    v14 = v87;
                                                }
                                                else
                                                {
                                                    free(v13);
                                                    free(v90);
                                                    free(v17);
                                                    v14 = v87;
                                                }
                                            }
                                            if (v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 != 0 && v15 == 0 || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 == 0 || (v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 != 0 && v15 != 0 || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 == 0) && v7 != 1)
                                            {
                                                *((unsigned long long *)&v6) = v88;
                                                v88 = &g_0;
                                            }
                                            if (v91 == 0 && v96 != 0 && g_6176c0 != 0 && v94 != 0 && (*((char *)v95) == 47 || v95 != 0) && (v95 != 0 || v95 != 0) || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 != 0 && v15 == 0 || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 == 0 || (v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 != 0 && v15 != 0 || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 == 0) && v7 != 1 || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && (char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320])
                                            {
                                                free(v97);
                                            }
                                            if (unknown)
                                            {
                                                free(v90);
                                                v87 = *((long long *)(v87 + 48));
                                                if (v87 == 0)
                                                {
                                                    free(v17);
                                                    if (v14 == 0)
                                                    {
                                                        if (v88 == 0)
                                                        {
                                                            break;
                                                        }
                                                        v109 = (unsigned int)sub_409b90();
                                                        error(0x0, 0x0, (unsigned long long)dcgettext(0x0, 0x4120f8, 0x5));
                                                        *((unsigned long long **)&g_6176d8) = &g_0;
                                                    }
                                                }
                                            }
                                            if (unknown)
                                            {
                                                v3 = v102;
                                                v103 = (char)*((char *)(v14 + 40));
                                                v2 = &g_0;
                                                v104 = (char)*((char *)(v14 + 40)) >> &g_0;
                                                v1 = &g_0;
                                                v0 = rax & &g_0;
                                                sub_403f10();
                                            }
                                        }
                                        if (v87 == 0 && v14 == 0)
                                        {
                                            v106 = g_6176c0;
                                        }
                                        else if (v87 == 0 && v14 == 0 && v88 != 0 || (v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 == 0 || v91 == 0 && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0) && (v96 == 0 || g_6176c0 == 0 || v95 == 0 || v94 == 0 || *((char *)v95) != 47) && !((char)(v6 ^ &g_0) == 0 && (long long)(stack_base)[-304] <= (long long)(stack_base)[-320]) && v101 != 0 && v99 != 0 && v15 != 0) && v7 == 1 || v87 == 0 && v14 != 0)
                                        {
                                            v141 = v10;
                                            v83 = v10;
                                            if (v11 == v10)
                                            {
                                                break;
                                            }
                                        }
                                    }
                                    else
                                    {
                                        free(v17);
                                    }
                                }
                                if (g_6176c0 == 0 || v86 != 0x2000 || v108 != 0)
                                {
                                    v106 = g_6176c0;
                                    if (*(v108) == 47 && v108 != 0)
                                    {
                                        v110 = -1;
                                        v108 = (unsigned long long)canonicalize_file_name((unsigned int)v8);
                                        while (v110 != 0)
                                        {
                                            v110 += -0x1 * &g_0;
                                            v111 = *(v108);
                                            v108 = &v108[v112];
                                            break;
                                        }
                                        v113 = !(rcx) + -0x1 * &g_0;
                                        if (g_6176c0 == 0)
                                        {
                                            free(v108);
                                        }
                                        else
                                        {
                                            v114 = g_6176c0;
                                            v115 = &g_0;
                                            do
                                            {
                                                v116 = *((long long *)(v114 + 24));
                                                v117 = &g_0;
                                                v108 = "lofs";
                                                while (v117 != 0)
                                                {
                                                    v117 += -0x1 * &g_0;
                                                    v118 = *(v116);
                                                    v119 = *(v108);
                                                    v108 = &v108[v112];
                                                    v116 = &v116[v112];
                                                    break;
                                                }
                                                if ((char)(unsigned long long)((char *)((char)(v118 > v119) + -0x1 * &g_0) + -1 * (v118 < v119)) != 0)
                                                {
                                                    v121 = -1;
                                                    v108 = *((long long *)&((char *)&g_8)[v114]);
                                                    while (v121 != 0)
                                                    {
                                                        v121 += -0x1 * &g_0;
                                                        v122 = *(v108);
                                                        v108 = &v108[v112];
                                                        break;
                                                    }
                                                    v123 = !(rcx);
                                                    if (v113 >= v5)
                                                    {
                                                        if (v5 == 1)
                                                        {
                                                            v115 = v114;
                                                        }
                                                        else if (v113 == v5 || *((char *)(&v108[v123] - &g_0)) == 47)
                                                        {
                                                            *((unsigned long long **)&v5) = v123 + -0x1 * &g_0;
                                                            v115 = (strncmp(*((long long *)&((char *)&g_8)[g_6176c0]), v108, v5) == &g_0? v114 : &g_0);
                                                        }
                                                    }
                                                }
                                                v114 = *((long long *)(v114 + 48));
                                            }
                                            while (*((long long *)(g_6176c0 + 48)) != 0);
                                            free(v108);
                                            if (v115 != 0)
                                            {
                                                v125 = __xstat(0x1, *((long long *)&((char *)&g_8)[v115]), (unsigned int)&v19);
                                            }
                                        }
                                    }
                                    if (v108 == 0 || *(v108) != 47)
                                    {
                                        free(v108);
                                    }
                                    if (g_6176c0 != 0)
                                    {
                                        if (v115 == 0 || v108 == 0 || *(v108) != 47 || v125 != 0 || *((long long *)&v19) != *(v12))
                                        {
                                            v115 = &g_0;
                                            do
                                            {
                                                v126 = *((long long *)(v106 + 32));
                                                if (*((long long *)(v106 + 32)) == -1)
                                                {
                                                    v127 = __xstat(0x1, *((long long *)&((char *)&g_8)[v106]), (unsigned int)&v19);
                                                    if (v127 == 0)
                                                    {
                                                        v126 = *((long long *)&v19);
                                                        *((long long *)(v106 + 32)) = *((long long *)&v19);
                                                    }
                                                    else
                                                    {
                                                        v128 = __errno_location();
                                                        if (*(v128) == 5)
                                                        {
                                                            sub_409c60();
                                                            error(0x0, *(v128), "%s");
                                                            *((unsigned long long **)&g_6176d8) = &g_0;
                                                        }
                                                        *((long long *)(v106 + 32)) = -2;
                                                        v126 = -2;
                                                    }
                                                }
                                                if (*(v12) == v126)
                                                {
                                                    v130 = *((long long *)(v106 + 24));
                                                    v131 = &g_0;
                                                    v108 = "lofs";
                                                    while (v131 != 0)
                                                    {
                                                        v131 += -0x1 * &g_0;
                                                        v132 = *(v130);
                                                        v133 = *(v108);
                                                        v108 = &v108[v112];
                                                        v130 = &v130[v112];
                                                        break;
                                                    }
                                                    if ((char)(unsigned long long)((char *)((char)(v132 > v133) + -0x1 * &g_0) + -1 * (v132 < v133)) != 0)
                                                    {
                                                        v135 = __xstat(0x1, *((long long *)&((char *)&g_8)[v106]), (unsigned int)&v19);
                                                        if (*((long long *)&v19) == *((long long *)(v106 + 32)) && v135 == 0)
                                                        {
                                                            v115 = v106;
                                                        }
                                                        if (*((long long *)&v19) != *((long long *)(v106 + 32)) || v135 != 0)
                                                        {
                                                            *((long long *)(v106 + 32)) = -2;
                                                        }
                                                    }
                                                }
                                                v106 = *((long long *)(v106 + 48));
                                            }
                                            while (v106 != 0);
                                        }
                                        if ((*(v108) == 47 || v115 != 0) && (v125 == 0 || v115 != 0) && (*((long long *)&v19) == *(v12) || v115 != 0) && (v115 != 0 || v115 != 0) && (v115 != 0 || v108 != 0))
                                        {
                                            v3 = v108;
                                            v136 = (char)*((char *)(v115 + 40));
                                            v2 = &g_0;
                                            v137 = (char)*((char *)(v115 + 40)) >> &g_0;
                                            v1 = &g_0;
                                            v0 = rax & &g_0;
                                            sub_403f10();
                                        }
                                    }
                                    if (g_6176c0 == 0 || v115 == 0 && v115 == 0 || v115 == 0 && v108 == 0 || v115 == 0 && *(v108) != 47 || v115 == 0 && v125 != 0 || v115 == 0 && *((long long *)&v19) != *(v12))
                                    {
                                        v139 = (unsigned long long)(unsigned int)sub_404ed0();
                                        if (v139 != 0)
                                        {
                                            v3 = v12;
                                            v2 = &g_0;
                                            v1 = &g_0;
                                            v0 = &g_0;
                                            sub_403f10();
                                            free(v139);
                                        }
                                    }
                                }
                            }
                            v10 = v141 + (char *)&g_0;
                        }
                    }
                    else
                    {
                        v81 = g_6176ee;
                        g_6176f0 = (unsigned int)sub_406460();
                        if (g_6176f0 != 0)
                        {
                            v143 = &g_0;
                            v5 = v82;
                            v144 = g_6176c0;
                            while (true)
                            {
                                v145 = (char)*((char *)(v144 + 40));
                                if (v146 != 0 && ((*((char *)(v144 + 40)) & 2) == 0 || g_6176ed == 0) && ((v145 & 1) == 0 || g_6176ec != 0 || g_6176ee != 0) && (char)v146 == 0)
                                {
                                    v148 = __xstat(0x1, *((long long *)&((char *)&g_8)[v144]), (unsigned int)&v19);
                                    if (!((char)(&((char *)&g_0)[v148] == &g_0)) && g_6176f0 != 0)
                                    {
                                        v18 = *((long long *)&v19);
                                        v150 = (unsigned long long)(unsigned int)sub_4061f0();
                                        if (v150 != 0)
                                        {
                                            v151 = *((long long *)(v150 + &g_8));
                                            v152 = *((long long *)&((char *)&g_10)[*((long long *)(v150 + &g_8))]);
                                            if (*((long long *)&((char *)&g_10)[*((long long *)(v150 + &g_8))]) != 0 && *((long long *)&((char *)&g_10)[v144]) != 0)
                                            {
                                                v146 = (unsigned int)sub_403a60();
                                                v154 = -1;
                                                while (v154 != 0)
                                                {
                                                    v154 += -0x1 * &g_0;
                                                    v155 = *(v152);
                                                    v152 = &v152[v156];
                                                    break;
                                                }
                                                v157 = *((long long *)&((char *)&g_10)[g_6176c0]);
                                                v159 = -1;
                                                while (v159 != 0)
                                                {
                                                    v159 += -0x1 * &g_0;
                                                    v160 = *(v157);
                                                    v157 = &v157[v156];
                                                    break;
                                                }
                                                v4 = (char)(!(rcx) + -0x1 * &g_0 < !(rcx) + -0x1 * &g_0);
                                            }
                                            if (*((long long *)&((char *)&g_10)[*((long long *)(v150 + &g_8))]) == 0 || *((long long *)&((char *)&g_10)[v144]) == 0)
                                            {
                                                *((unsigned long long **)&v4) = &g_0;
                                            }
                                            v161 = *((long long *)v144);
                                            if (g_6176b8 == 0 && (v151->field_28 & 2) != 0 && (*((char *)(v144 + 40)) & 2) != 0)
                                            {
                                                v162 = strcmp(v151->field_0, v161);
                                            }
                                        }
                                    }
                                }
                                if ((*((char *)(v144 + 40)) & 2) == 0 && (v145 & 1) == 0 || g_6176ed == 0 && (v145 & 1) == 0 || (*((char *)(v144 + 40)) & 2) == 0 && g_6176ec != 0 || (*((char *)(v144 + 40)) & 2) == 0 && g_6176ee != 0 || g_6176ed == 0 && g_6176ec != 0 || g_6176ed == 0 && g_6176ee != 0)
                                {
                                    v146 = sub_403a10();
                                }
                                if (&((char *)&g_0)[v148] == &g_0 || v146 == 0 || (char)v146 != 0 || (*((char *)(v144 + 40)) & 2) != 0 && g_6176ed != 0 || g_6176ec == 0 && g_6176ee == 0 && (v145 & 1) != 0)
                                {
                                    v19 = *((long long *)(v144 + 32));
                                }
                                if (unknown)
                                {
                                    v163 = strchr(v161, 0x2f);
                                    if (v163 != 0)
                                    {
                                        v166 = strchr(v151->field_0, 0x2f);
                                    }
                                    if (v163 == 0 || v166 != 0)
                                    {
                                        v167 = *((long long *)(v151 + &g_8));
                                        v168 = -1;
                                        v169 = *((long long *)(v151 + &g_8));
                                        while (v168 != 0)
                                        {
                                            v168 += -0x1 * &g_0;
                                            v170 = *(v169);
                                            v169 = &v169[v156];
                                            break;
                                        }
                                        v171 = *((long long *)&((char *)&g_8)[g_6176c0]);
                                        v172 = !(rcx) + -0x1 * &g_0;
                                        v159 = -1;
                                        while (v159 != 0)
                                        {
                                            v159 += -0x1 * &g_0;
                                            v173 = *(v171);
                                            v171 = &v171[v156];
                                            break;
                                        }
                                        if (v174 != 0 && (v172 <= !(rcx) - 1 || v4 != 0))
                                        {
                                            v175 = strcmp(v6, v4);
                                        }
                                    }
                                    if (v172 <= !(rcx) - 1 && v163 == 0 || v172 <= !(rcx) - 1 && v166 != 0 || v163 == 0 && v4 != 0 || v4 != 0 && v166 != 0)
                                    {
                                        v6 = *((long long *)&((char *)&g_8)[g_6176c0]);
                                        v4 = v167;
                                        v174 = strcmp(v151->field_0, v161);
                                    }
                                    if (v175 == 0 && v174 != 0 || v4 == 0 && v172 > !(rcx) - 1 || v166 == 0 && v163 != 0)
                                    {
                                        *((unsigned long long *)(v150 + &g_8)) = v144;
                                    }
                                    v144 = *((long long *)(v144 + 48));
                                    if (g_6176ee == 0)
                                    {
                                        sub_40c620();
                                    }
                                }
                                if (unknown)
                                {
                                    *((unsigned long long *)&((char *)&g_8)[v143]) = v144;
                                    *((unsigned long long *)&((char *)&g_10)[v143]) = v143;
                                    *((unsigned long *)v143) = v19;
                                    if (sub_406c00() == 0)
                                    {
                                        break;
                                    }
                                    v144 = *((long long *)(v144 + 48));
                                    v143 = (unsigned int)sub_40a560();
                                }
                                v82 = v5;
                            }
                            if (unknown)
                            {
                                sub_40a7b0(); /* do not return */
                            }
                            if (g_6176ee == 0)
                            {
                                for (g_6176c0 = &g_0; v143 != 0; v82 = v178)
                                {
                                    v178 = *((long long *)&((char *)&g_8)[v143]);
                                    v143 = *((long long *)&((char *)&g_10)[v143]);
                                    v81 = &g_0;
                                    *((unsigned long long *)(v82 + 48)) = v82;
                                }
                                if (v81 != 0)
                                {
                                    g_6176c0 = v82;
                                }
                                sub_4066a0();
                                g_6176f0 = &g_0;
                            }
                            for (v180 = g_6176c0; v180 != 0; v180 = *((long long *)(v180 + 48)))
                            {
                                v3 = v159;
                                v181 = (char)*((char *)(v180 + 40));
                                v2 = &g_0;
                                v182 = (char)*((char *)(v180 + 40)) >> &g_0;
                                v1 = &g_0;
                                v0 = rax & &g_0;
                                sub_403f10();
                            }
                        }
                        sub_40a7b0(); /* do not return */
                    }
                    if (g_6175e0 < v108 || g_6176f0 != 0)
                    {
                        if (g_6176dd != 0)
                        {
                            if (g_6176b8 != 0)
                            {
                                v3 = v11;
                                v2 = &g_0;
                                v1 = &g_617680;
                                v0 = &g_0;
                                sub_403f10();
                            }
                            if (g_617640 != 0)
                            {
                                v185 = &g_0;
                                do
                                {
                                    if (g_617650 != 0)
                                    {
                                        v186 = &g_0;
                                        while (true)
                                        {
                                            v19 = *((long long *)(*((long long *)&((char *)g_617658)[v186 * &g_8]) + 32));
                                            v187 = sub_407f30();
                                            v189 = v187;
                                            if (v187 == 0)
                                            {
                                                v189 = *((long long *)(*((long long *)&((char *)g_617648)[&g_0 * &g_8]) + v186 * &g_8));
                                            }
                                            fputs_unlocked(v189, stdout);
                                            v186 += (char *)&g_0;
                                            free(v187);
                                            if (v186 >= g_617650)
                                            {
                                                break;
                                            }
                                            v191 = stdout[5];
                                            if (stdout[5] < stdout[6])
                                            {
                                                stdout[5] = &((char *)&g_0)[stdout[5]];
                                                *(v191) = 32;
                                            }
                                            else
                                            {
                                                __overflow();
                                            }
                                        }
                                    }
                                    v192 = stdout[5];
                                    if (stdout[5] < stdout[6])
                                    {
                                        stdout[5] = &((char *)&g_0)[stdout[5]];
                                        *((unsigned long long **)&v192) = &g_8;
                                    }
                                    else
                                    {
                                        __overflow();
                                    }
                                    v185 += (char *)&g_0;
                                }
                                while (v185 < g_617640);
                            }
                        }
                        else if (g_6176d8 == 0)
                        {
                            error(0x1, 0x0, (unsigned long long)dcgettext(0x0, 0x411189, 0x5));
                        }
                    }
                }
            }
            else
            {
                if (g_6175e0 < v108 && g_6176ee == 0 && g_6176ed == 0 && g_6176d0 == 0 && g_6176c8 == 0)
                {
                    v56 = &g_0;
                    v58 = dcgettext(0x0, 0x411155, 0x5);
                }
                if (g_6176ed != 0 || g_6176c8 != 0 || g_6176d0 != 0 || g_6176ee != 0 || g_6175e0 >= v108)
                {
                    v56 = &g_0;
                }
                v63 = dcgettext(0x0, 0x412078, 0x5);
                error(v56, *(__errno_location()), "%s%s");
            }
        }
    }
    if (g_617660 <= 4 && g_6176c0 != 0 && g_61737c != 0 && (v37 == 0 || g_6176d0 == 0) && (g_6175e0 < v108 || g_6176f0 != 0) && g_6176dd != 0 || g_617660 <= 4 && g_6176c0 != 0 && g_61737c != 0 && (v37 == 0 || g_6176d0 == 0) && (g_6175e0 < v108 || g_6176f0 != 0) && g_6176dd == 0 && g_6176d8 != 0)
    {
        v41 = g_6176d8;
    }
    if (g_617660 <= 4 && g_6176c0 != 0 && g_61737c != 0 && (v37 == 0 || g_6176d0 == 0) && (g_6175e0 < v108 || g_6176f0 != 0) && g_6176dd != 0 || g_617660 <= 4 && g_6176c0 != 0 && g_61737c != 0 && (v37 == 0 || g_6176d0 == 0) && (g_6175e0 < v108 || g_6176f0 != 0) && g_6176dd == 0 && g_6176d8 != 0 || v37 != 0 && g_6176d0 != 0)
    {
        return v41;
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

int sub_406980()
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
        v7 = sub_405cc0();
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
            sub_405de0();
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
                    v32 = sub_406780();
                    if (v32 != 0)
                    {
                        v33 = sub_405cc0();
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

int sub_4059b0()
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
    v5 = sub_405a70();
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

typedef struct struct_0 {
    char padding_0[24];
    unsigned long long field_18;
} struct_0;

int sub_405fc0()
{
    struct v1;  // rdi

    return v1->field_18;
}

int sub_408190()
{
    unsigned long v0;  // [bp-0x10]
    unsigned long v2;  // rbx
    char *v3;  // rdi

    v0 = v2;
    strlen(v3);
}

// int sub_402af3()

extern char g_617820;

int sub_4097f0()
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
    v3 = (v2 == 0? &g_617820 : v2);
    *((int *)(tmp_11? &g_617820 : tmp_2)) = 10;
    if (v4 != 0 && v5 != 0)
    {
        v3[5] = v4;
        v3[6] = v5;
        return &g_617820;
    }
    if (v5 == 0 || v4 == 0)
    {
        v0 = &g_617820;
        abort(); /* do not return */
    }
}

typedef struct struct_0 {
    char padding_0[4273376];
    unsigned long long field_4134e0;
} struct_0;

extern int512_t g_4134e0;
extern unsigned int g_617568;

int sub_40a820()
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
    v13 = *((long long *)(0x8 * v8 + (char *)&g_4134e0));
    if ((unsigned int)v11 < 0)
    {
        v0 = v14;
        v1 = 0;
    }
    error(g_617568, 0x0, (unsigned long long)dcgettext(0x0, v13, 0x5));
}

// int sub_403ac0()

extern unsigned long long g_413a14;

int sub_40c400()
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
        v5 = &g_413a14;
    }
    if (v2 == 0 || v6 == 0 && v4 != 0)
    {
        v7 = &v0;
    }
    if (v2 == 0 || v4 != 0)
    {
        v3 = mbrtowc((unsigned int)v7, (unsigned int)v5);
        if (v3 > -3 && sub_40dbe0() == 0)
        {
            v3 = 1;
            *(v7) = *(v5);
        }
    }
    v9 = v3;
    return v9;
}

// int sub_409a60()

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

extern unsigned int g_4139c8;
extern unsigned int g_4139f9;
extern unsigned long long stderr;

int sub_40bd30()
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
undefined v25;  // rax
    /*INVALID_EQUAL_UNDEFINED*/
undefined v26;  // rdx
    unsigned long v28;  // rax
    char v29[2];  // rcx
    unsigned long v30;  // rsi
    unsigned long long v31;  // rcx
    char *v32;  // rdi
    char v33[2];  // rsi
    unsigned long long v34;  // cc_dep1
    unsigned long long v35;  // cc_dep2
    unsigned long v36;  // d
    unsigned long long v37;  // cc_dep1
    unsigned int v38;  // ecx
    unsigned int v39;  // eax
    unsigned long long v40;  // rcx
    /*INVALID_EQUAL_UNDEFINED*/
undefined v41;  // edx
    unsigned int v43;  // eax
    unsigned long long v44;  // r14
    unsigned long long *v45;  // rbp
    unsigned long long v46;  // rax
    char v47[3];  // r14
    /*INVALID_EQUAL_UNDEFINED*/
undefined v48;  // r9
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
    if (v13 > 0)
    {
        v17 = v0->field_0;
        v45 = v13;
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
                    v48 = v5;
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
        if (*(v19) == 0 || v0->field_18 == 0 && v19 == 0 || v19 == 0 && (unsigned int)v17 == 0 || v19 == 0 && ((char)(v18 - 43) & 253) != 0 || v8->field_20 == 0 && ((char)(v18 - 43) & 253) == 0 && v0->field_18 != 0 && (unsigned int)v17 != 0)
        {
            v25 = v0->field_0;
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
                v26 = v0->field_30;
                if (v0->field_2c != v0->field_30)
                {
                    if (v8->field_0 != v8->field_30)
                    {
                        v5 = v48;
                        sub_40b630();
                        v26 = v0->field_0;
                        v48 = v5;
                    }
                }
                else
                {
                    if (v8->field_0 != v8->field_30)
                    {
                        v0->field_2c = v8->field_0;
                        v26 = v25;
                    }
                }
                if (v13 > (unsigned int)v26)
                {
                    v28 = v26;
                    while (true)
                    {
                        v29 = *((long long *)(v15 + v28 * 8));
                        v30 = v28;
                        v26 = v28;
                        if (*((char *)*((long long *)(v15 + (v28 << 3)))) == 45 && v29[1] != 0)
                        {
                            v25 = (unsigned long long)v0->field_0;
                        }
                        if (v29[1] == 0 || *((char *)*((long long *)(v15 + (v28 << 3)))) != 45)
                        {
                            v26 = v30 + 1;
                            v28 += 1;
                            v0->field_0 = (unsigned int)v30 + 1;
                            if (v13 <= (unsigned int)v28)
                            {
                                break;
                            }
                        }
                    }
                    if (v29[1] == 0 || *((char *)*((long long *)(v15 + (v28 << 3)))) != 45)
                    {
                        v25 = v26;
                    }
                    else if (*((char *)*((long long *)(v15 + (v28 << 3)))) == 45 && v29[1] != 0)
                    {
                        *((unsigned long *)&v0->field_30) = v26;
                    }
                }
                v25 = v26;
                *((unsigned long *)&v0->field_30) = v26;
            }
            if (v13 != (unsigned int)v25)
            {
                v31 = 3;
                v32 = "-";
                v47 = *((long long *)(v15 + v25 * 8));
                v33 = *((long long *)(v15 + v25 * 8));
                while (v31 != 0)
                {
                    v31 -= 1;
                    v34 = v33[0];
                    v35 = *(v32);
                    v32 = &v32[v36];
                    v33 = &v33[v36];
                    break;
                }
                v37 = (v34 > v35) - 0 - (v34 < v35);
                if ((char)v37 == 0)
                {
                    v41 = v0->field_2c;
                    v38 = v0->field_30;
                    v39 = (unsigned int)v25 + 1;
                    v0->field_0 = v0->field_2c;
                    if ((unsigned int)v41 != v38)
                    {
                        if (v0->field_2c != v8->field_30)
                        {
                            sub_40b630();
                            v41 = v0->field_2c;
                        }
                    }
                    else
                    {
                        v0->field_2c = v0->field_2c;
                        v41 = v39;
                    }
                    *((unsigned long long **)&v0->field_30) = v45;
                    *((unsigned long long **)&v0->field_0) = v45;
                }
                else if (v47[0] == 45)
                {
                    v40 = v47[1];
                    if (v47[1] != 0 && v3 != 0)
                    {
                        if (!(v40 != 45))
                        {
                            v0->field_20 = &v47[2];
                            v2 = "-";
                            v1 = v49;
                            v0 = v0;
                        }
                        else if (v48 != 0)
                        {
                            if (v47[2] == 0)
                            {
                                *((unsigned long *)&v5) = v48;
                                v46 = strchr(v50, v40);
                            }
                        }
                    }
                }
            }
            else
            {
                v45 = (unsigned long long)v0->field_30;
                v41 = v0->field_2c;
            }
        }
    }
    if ((v13 != (unsigned int)v25 && v13 > 0 && (*(v19) == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v37 == 0 || v13 == (unsigned int)v25 && v13 > 0 && (*(v19) == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0)) && v41 != v45)
    {
        *((unsigned long long *)&v0->field_0) = v41;
    }
    if ((v13 != (unsigned int)v25 && v13 > 0 && (*(v19) == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v37 != 0 && v47[0] == 45 && v47[1] == 0 || v13 != (unsigned int)v25 && v13 > 0 && (*(v19) == 0 || v19 == 0 || ((char)(v18 - 43) & 253) == 0) && (*(v19) == 0 || v19 == 0 || v0->field_18 != 0) && (*(v19) == 0 || v19 == 0 || (unsigned int)v17 != 0) && (v0->field_18 == 0 || v8->field_20 == 0 || *(v19) == 0 || (unsigned int)v17 == 0 || ((char)(v18 - 43) & 253) != 0) && (char)v37 != 0 && v47[0] != 45) && v0->field_28 != 0)
    {
        v43 = (unsigned int)v25 + 1;
        v0->field_10 = v47;
        v44 = 1;
        v0->field_0 = v43;
    }
    if (unknown)
    {
        v44 = -18446744069414584321;
    }
    if (unknown)
    {
        v0->field_20 = &v47[1];
        v2 = "-";
        v1 = v49;
        v0 = v8;
        v44 = (unsigned int)sub_40b710();
        if ((unsigned int)v44 == -1)
        {
            v47 = *((long long *)(v15 + (int)v0->field_0 * 8));
        }
    }
    if (unknown)
    {
        v19 = &v47[1];
    }
    if (unknown)
    {
        *((char **)&v6[0]) = v19;
        v0->field_20 = &v19[1];
        v44 = *(v19);
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
                if (v0->field_0 != v45)
                {
                    v53 = *((long long *)(v15 + (int)v8->field_0 * 8));
                }
                else
                {
                    if ((unsigned int)v49 != 0)
                    {
                        __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4139c8, 0x5), *((long long *)v15), v44, v48);
                    }
                    v0->field_8 = v44;
                    v62 = 0;
                    v63 = *(v50) != 58;
                    v44 = r14 * 5 + 58;
                }
            }
        }
    }
    if (unknown)
    {
        if ((unsigned int)v49 != 0)
        {
            __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4139f9, 0x5), *((long long *)v15), v44, v48);
        }
        v0->field_8 = v44;
        v44 = 63;
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
            else if (v45 != v8->field_0)
            {
                v60 = *((long long *)(v15 + (int)v8->field_0 * 8));
                v0->field_0 = (int)v8->field_0 + 1;
                v0->field_10 = v60;
            }
            else
            {
                if ((unsigned int)v49 != 0)
                {
                    __fprintf_chk(stderr, 0x1, dcgettext(0x0, 0x4139c8, 0x5), *((long long *)v15), v44, v48);
                }
                v0->field_8 = v44;
                v64 = 0;
                v65 = *(v50) != 58;
                v44 = r14 * 5 + 58;
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
        v44 = (unsigned int)sub_40b710();
    }
    v66 = v44;
    return v66;
}

// int sub_40d7a0()

int sub_40e240()
{
    unsigned int v0;  // [bp+0x0]
    void *v2;  // rdi
    unsigned long long v4;  // rax
    unsigned long long v8;  // rax

    if (fileno(v2) >= 0)
    {
        v4 = __freading();
        if ((v4 == 0 || (unsigned long long)lseek(fileno(v2), 0x0, 0x1) != -1) && sub_40e2c0() != 0)
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

extern unsigned int g_6178a0;

int sub_40fe90()
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
        if (g_6178a0 >= 0)
        {
            v15 = (unsigned int)fcntl(v11, v9);
            if ((unsigned int)v15 < 0)
            {
                v12 = __errno_location();
                if (*(v12) == 22)
                {
                    v15 = (unsigned int)sub_40fe90();
                    if ((unsigned int)v15 >= 0)
                    {
                        g_6178a0 = -1;
                    }
                }
            }
            if ((unsigned int)v15 >= 0 || *(v12) != 22)
            {
                g_6178a0 = 1;
            }
        }
        else
        {
            v15 = (unsigned int)sub_40fe90();
        }
        if ((g_6178a0 < 0 || (unsigned int)v15 < 0) && (g_6178a0 < 0 || *(v12) == 22) && (g_6178a0 < 0 || (unsigned int)v15 >= 0) && (g_6178a0 == -1 || g_6178a0 >= 0) && (g_6178a0 >= 0 || (unsigned int)v15 >= 0))
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

extern unsigned long long g_6175f0;

int sub_40393b()
{
    unsigned long long v1;  // rax

    v1 = &g_6175f0;
    if (false)
    {
        v1 = 0;
    }
    return v1;
}

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

extern unsigned int g_41220e;
extern unsigned int g_412226;
extern unsigned int g_412258;

int sub_4060a0()
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
    unsigned int v17;  // r8d
    unsigned int v18;  // r9d
    unsigned long v19;  // xmm1lq
    uint128_t v20;  // xmm0
    unsigned long v21;  // xmm0lq
    uint128_t v22;  // xmm0
    uint128_t v23;  // xmm0
    unsigned long long v24;  // xmm0lq

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
    __fprintf_chk(v7, 0x1, 0x41220e, v9[4], v17, v18);
    __fprintf_chk(v7, 0x1, 0x412226, v19, v17, v18);
    if (!(INVALID_IR))
    {
        v20 = 0;
        v21 = v9[3];
        v22 = xmm0 * 0x4059000000000000;
    }
    else
    {
        v23 = 0;
        v24 = 0 >> 1 | (unsigned long long)(unsigned int)(0 & 1);
        v22 = xmm0 * 0x80b2000000000000;
        tmp_14 = v19;
    }
    __fprintf_chk(v7, 0x1, 0x412258, v21, v17, v18);
}

int sub_40c3c0()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40c300();
}

int sub_40c380()
{
    unsigned long long v0;  // [bp-0x18]

    v0 = 0;
    return sub_40c300();
}

int sub_406310()
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

int sub_40db30()
{
    unsigned long long v1;  // r12
    unsigned long long v2;  // rax
    unsigned int *v3;  // rdi

    v1 = __fpending();
    v2 = sub_40e240();
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

extern int512_t g_617820;

int sub_409770()
{
    unsigned long v1;  // rdi

    return *((int *)(v1 == 0? &g_617820 : v1));
}

extern int512_t g_617820;

int sub_4097d0()
{
    unsigned long v1;  // rdi
    unsigned long long v2;  // rax
    unsigned int v3;  // esi

    v2 = (unsigned int)*((int *)((v1 == 0? &g_617820 : v1) + 4));
    *((unsigned int *)((v1 == 0? &g_617820 : v1) + 4)) = v3;
    return v2;
}

extern int512_t g_617328;
extern char g_61734c[4];

int sub_404d60()
{
    unsigned long v0;  // [bp-0x30]
    unsigned long v1;  // [bp-0x20]
    unsigned long v2;  // [bp-0x18]
    unsigned long v3;  // [bp-0x10]
    unsigned long v4;  // [bp-0x8]
    unsigned long v6;  // r15
    unsigned long v7;  // r14
    unsigned long v8;  // r13
    unsigned long v9;  // r12
    unsigned long v10;  // rbx
    unsigned long long v11;  // r13
    char *v12;  // rax
    unsigned long long v13;  // rbx
    unsigned long long v14;  // r12
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v20;  // rbp
    unsigned long long v21;  // rbx
    unsigned long long v22;  // rbx
    unsigned int v23;  // esi

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v20 = (unsigned int)sub_40a790();
    while (true)
    {
        v11 = 0;
        v12 = strchr(v20, 0x2c);
        if (v12 != 0)
        {
            *(v12) = 0;
            v11 = &v12[1];
        }
        v13 = 0;
        while (true)
        {
            v14 = v13;
            v15 = strcmp((&g_617328)[6 * v13], v20);
            if (v15 != 0)
            {
                v13 += 1;
                v21 = (unsigned int)sub_409de0();
            }
            else if (g_61734c[32 * v13 + 16 * v13] == 0)
            {
                v16 = v14;
                if (((unsigned short)(1 << ((char)v14 & 63)) & 4075) != 0)
                {
                    sub_403e20();
                }
                else if (((char)(1 << ((char)v16 & 63)) & 16) != 0)
                {
                    sub_403e20();
                }
                else if (((char)(1 << ((char)v16 & 63)) & 4) != 0)
                {
                    sub_403e20();
                }
                else
                {
                    __assert_fail(); /* do not return */
                }
                if (((char)(1 << ((char)v16 & 63)) & 16) != 0 || ((unsigned short)(1 << ((char)v14 & 63)) & 4075) != 0 || ((char)(1 << ((char)v16 & 63)) & 4) != 0)
                {
                    v20 = v11;
                    if (v11 != 0)
                    {
                        break;
                    }
                }
            }
            else
            {
                v22 = (unsigned int)sub_409de0();
            }
            if (v15 != 0 || g_61734c[32 * v13 + 16 * v13] != 0)
            {
                error(0x0, 0x0, (unsigned long long)dcgettext(0x0, v23, 0x5));
                sub_404930(); /* do not return */
            }
        }
    }
}

extern unsigned int g_41344f;
extern unsigned int g_617568;

int sub_40a7b0()
{
    dcgettext(0x0, 0x41344f, 0x5);
    error(g_617568, 0x0, "%s");
}

